#!/usr/bin/python3 -i
#
# Copyright (c) 2019-2020 Valve Corporation
# Copyright (c) 2019-2020 LunarG, Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import os,re,sys
from base_generator import *

class OutputValue(BaseGenerator):

    # Return an initializer for vinfo
    def setVinfo(self, member):
        rval = '{'
        # Special case ppData and pNext - we treat them as addresses
        rval += str(member.name == 'ppData' or member.name == 'pNext' or self.isHandle(member.baseType)).lower() + ', '
        rval += str(self.isEnum(member.baseType)).lower() + ', '
        rval += str(self.isFlags(member.baseType)).lower() + ', '
        if self.isEnum(member.baseType) or self.isFlags(member.baseType):
            rval +='OutputEnum' + member.baseType.replace('Flags', 'FlagBits')
        else:
            rval +='nullptr';
        rval += '}'
        return rval

    # Generate code to output a value as a string.
    # A value is func arg or member of a structure - a scalar, enum, flags, array, structure, array of structures,
    # or string.
    #
    # structName is used when value is a member of a structure. It contains the name of the "enclosing" structure type.
    #
    # funcName is used when value is a function argument. It contains the name of the function.
    #
    # This method is called from makeConsumerFuncBody in vulkan_json_consumer_body_generator.py to generate
    # code to display function arguments, and from vulkan_json_consumer_struct_generator.py to generate
    # code to display members of structures.
    def outputValue(self, value, funcName, structName):
        # {  For vi % cmd

        if structName != '':
            pstruct = 'pstruct->'
            pstruct_in = 'pstruct_in.'
            isFuncArg = False
        else:
            pstruct = ''
            pstruct_in = ''
            isFuncArg = True

        if isFuncArg and self.isOutputParameter(value):
            array_to_string_ampersand = ''
        else:
            array_to_string_ampersand = '&'

        # Code to print pointers is indented 8 spaces
        if value.isPointer:
            leadSpaces = '        '
        else:
            leadSpaces = '    '

        ###### Output type and variable/member name
        self.wc('    OutputIndentJson(outputFile, indent); // ESP')
        if self.isUnion(value.fullType):
            self.wc('    OutputStringJson(outputFile, "\\"type\\" : \\"' + value.fullType + ' (Union)"); // UNN')
        else:
            if value.name == 'pNext':
                self.wc('    OutputStringJson(outputFile, "\\"type\\" : \\""); // NUX')
                self.wc('    if (pstruct->pNext) { // NUM')
                self.wc('        OutputStringJson(outputFile, sTypeToStructName[static_cast<Decoded_VkApplicationInfo*>(pstruct_in.pNext->GetMetaStructPointer())->decoded_value->sType] + "*");')
                self.wc('    } else {')
                self.wc('        OutputStringJson(outputFile, "' + value.fullType + '");')
                self.wc('    }')
            else:
                self.wc('    OutputStringJson(outputFile, "\\"type\\" : \\"' + value.fullType + '"); // NUN')
        if (value.isArray and not value.isPointer and ('Count' in value.arrayLength)):
            self.wc('    OutputStringJson(outputFile, "[");')
            self.wc('    OutputUnsignedDecimalJson(outputFile, ' + pstruct + value.arrayLength + '); // IAC')
            self.wc('    OutputStringJson(outputFile, "]");')
        elif value.isArray and not value.isPointer:
            self.wc('    OutputStringJson(outputFile, "[");')
            self.wc('    OutputStringJson(outputFile, "' + value.arrayLength + '"); // IAV')
            self.wc('    OutputStringJson(outputFile, "]");')
        self.wc('    OutputStringJson(outputFile, "\\",\\n");')
        self.wc('    OutputIndentJson(outputFile, indent);')
        self.wc('    OutputStringJson(outputFile, "\\"name\\" : \\"' + value.name + '\\",\\n");')

        ###### Output address line if needed
        addrExpression = None
        specialPtr = (value.name in
                     ["pUserData", "handle", "hwnd", "surface", "connection", "hwnd", "hinstance",
                      "pHostPointer", "window", "display", "pCheckpointMarker", "buffer", "hmonitor", "pLayer"])
        if not value.isPointer and value.isArray:
            if not isFuncArg:
                addrExpression = 'base_addr + offsetof(' + structName + ', ' + value.name + ') /* RKQ */'
            else:
                addrExpression = pstruct_in + value.name + '.GetAddress() /* UYA */'
        elif value.isPointer and value.name != "dpy":
            if isFuncArg and specialPtr:
                self.wc('    if ( !' + value.name + ') // WWW')
            elif not isFuncArg and specialPtr:
                self.wc('    if (' + pstruct + value.name + ' == nullptr) // WWX')
            elif isFuncArg:
                if self.isOutputParameter(value):
                    self.wc('    if (' + value.name + '->GetPointer() == nullptr) // WWY')
                else:
                    self.wc('    if (' + value.name + '.GetPointer() == nullptr) // WWU')
            else:
                self.wc('    if (' + pstruct + value.name + ' == nullptr) // WWZ')
            self.wc('    {')
            self.wc('        OutputIndentJson(outputFile, indent); // RGV')
            if value.fullType == "const char*":
                # A null ptr to a string is output as an empty string value
                self.wc('        OutputStringJson(outputFile, "\\"value\\" : \\"\\"\\n");')
            else:
                self.wc('        OutputStringJson(outputFile, "\\"address\\" : \\"NULL\\"\\n");')
            self.wc('    }')
            self.wc('    else')
            self.wc('    { // JHD')
            if specialPtr:
                 addrExpression = pstruct_in + value.name + ' /* ACF */'
            elif isFuncArg or (not isFuncArg and value.isArray and not (value.baseType in self.structDict)):
                if isFuncArg and self.isOutputParameter(value):
                    addrExpression = pstruct_in + value.name + '->GetAddress() /* RQA */'
                else:
                    addrExpression = pstruct_in + value.name + '.GetAddress() /* RQB */'
            else:
                if value.isArray or self.isStruct(value.baseType) or value.name == 'pNext':
                    addrExpression = pstruct_in + value.name + '->GetAddress() /* KWO */'
                elif (value.name == "pView"):
                    addrExpression = pstruct_in + value.name + ' /* ACF */'
                else:
                    addrExpression = pstruct_in + value.name + '.GetAddress() /* QZR */'
        if addrExpression is not None and value.fullType != "const char*" and not (value.isArray and value.fullType == "char"):
            # We don't print the address of char* and char[] arrays
            self.wc(leadSpaces + 'OutputIndentJson(outputFile, indent);')
            self.wc(leadSpaces + 'OutputStringJson(outputFile, "\\"address\\" : \\""); // EAC')
            self.wc(leadSpaces + 'OutputAddrJson(outputFile, ' + addrExpression + ' );')
            self.wc(leadSpaces + 'OutputStringJson(outputFile, "\\",\\n");')

        ###### Output arrays
        if value.isArray and value.name != "dpy":
            if value.isPointer:
                if value.fullType == 'const char*':
                    # Treat pointer to char as a string
                    if isFuncArg:
                        self.wc('    StringToQuotedStringJson(outputFile, ' + pstruct + value.name + '.GetPointer()); // TGJ')
                    else:
                        self.wc('    StringToQuotedStringJson(outputFile, ' + pstruct + value.name + '); // TGK')
                else:
                    if 'latexmath' in value.arrayLength:
                        aLength = pstruct + self.parseLateXMath(value.arrayLength)
                    elif '->' in value.arrayLength:
                        aLength = value.arrayLength.replace('->', '.GetPointer()->')
                    elif not isFuncArg and 'Count' in value.arrayLength:
                        aLength = 'pstruct->' + value.arrayLength
                    elif value.arrayLength.startswith('p'):
                        if self.isOutputParameter(value):
                            aLength = '*' + value.arrayLength + '->GetPointer()'
                        else:
                            aLength = '*' + value.arrayLength + '.GetPointer()'
                    else:
                        if isFuncArg:
                            aLength = value.arrayLength
                        else:
                            aLength = 'pstruct->' + value.arrayLength
            else:
                if 'Count' in value.arrayLength:
                    aLength = pstruct + value.arrayLength
                else:
                    aLength = value.arrayLength
            if self.isStruct(value.baseType) and (value.baseType in self.structDict):
                self.wc(leadSpaces + 'OutputIndentJson(outputFile, indent);')
                self.wc(leadSpaces + 'OutputStringJson(outputFile, "\\"elements\\" :"); // TRZ')
                if isFuncArg:
                    if self.isOutputParameter(value):
                        self.wc(leadSpaces + 'OutputArrayOfStructsJson(outputFile, indent, "' + value.baseType +
                              '", ' + value.name + '->GetMetaStructPointer(), "' + value.name +
                              '", ' + aLength + ', ' + str(self.isUnion(value.baseType)).lower() + ', ' + value.name + '->GetAddress(), sizeof(' + value.baseType + ')); // CRO')
                    else:
                        self.wc(leadSpaces + 'OutputArrayOfStructsJson(outputFile, indent, "' + value.baseType +
                              '", ' + value.name + '.GetMetaStructPointer(), "' + value.name +
                              '", ' + aLength + ', ' + str(self.isUnion(value.baseType)).lower() + ', ' + value.name + '.GetAddress(), sizeof(' + value.baseType + ')); // CRP')
                else:
                    self.wc(leadSpaces + 'OutputArrayOfStructsJson(outputFile, indent, "' + value.baseType +
                          '", ' + pstruct_in + value.name + '->GetMetaStructPointer(), "' + value.name +
                          '", ' + aLength + ', ' + str(self.isUnion(value.baseType)).lower() + ', ' + pstruct_in + value.name + '->GetAddress(), sizeof(' + value.baseType + ')); // CCY')
            elif value.fullType == "const char* const*":
                # Array of strings
                self.wc(leadSpaces + 'OutputIndentJson(outputFile, indent);')
                self.wc(leadSpaces + 'OutputStringJson(outputFile, "\\"elements\\" :"); // TRG')
                self.wc(leadSpaces + 'OutputScalarValueStructInfo vinfo_' + value.name + ' = ' + OutputValue.setVinfo(self, value) + ';')
                self.wc(leadSpaces + 'OutputArrayJson(outputFile, indent, "' + value.fullType + '", ' + array_to_string_ampersand +
                                     pstruct_in + value.name + ', "' + value.name + '", ' + aLength + ', vinfo_' + value.name + '); // UQA')
            elif value.fullType == "char" and value.isArray:
                # A simple string array
                self.wc(leadSpaces + 'OutputIndentJson(outputFile, indent); // UTW')
                self.wc(leadSpaces + 'OutputStringJson(outputFile, "\\"value\\" : "); // TRH')
                self.wc(leadSpaces + 'OutputScalarValueStructInfo vinfo_' + value.name + ' = ' + OutputValue.setVinfo(self, value) + ';')
                self.wc(leadSpaces + 'OutputArrayOfScalarsJson(outputFile, indent, "' + value.fullType +
                            '", ' + pstruct_in + value.name + '.GetPointer(), "' + value.name + '", ' + aLength + ', vinfo_' + value.name + '); // TRJ')
                self.wc(leadSpaces + 'OutputStringJson(outputFile, "\\n"); // TRX')
            elif self.isHandle(value.baseType) or value.name == 'dpy':
                self.wc(leadSpaces + 'OutputIndentJson(outputFile, indent);')
                self.wc(leadSpaces + 'OutputStringJson(outputFile, "\\"elements\\" :"); // TRI')
                self.wc(leadSpaces + 'OutputScalarValueStructInfo vinfo_' + value.name + ' = ' + OutputValue.setVinfo(self, value) + ';')
                if value.isArray and value.name != "dpy":
                    self.wc(leadSpaces + 'OutputArrayJson(outputFile, indent, "' + value.fullType + '", ' + array_to_string_ampersand +
                                         pstruct_in + value.name + ', "' + value.name + '", ' + aLength + ', vinfo_' + value.name + '); // AQA')
                else:
                    print("Not handled!!: ", value.name)
            elif self.isUnion(structName):
                self.wc('    OutputIndentJson(outputFile, indent);')
                self.wc('    OutputStringJson(outputFile, "\\"elements\\" :"); // TRP')
                self.wc('    OutputScalarValueStructInfo vinfo_' + value.name + ' = ' + OutputValue.setVinfo(self, value) + ';')
                self.wc('    OutputArrayOfScalarsJson(outputFile, indent, "' + value.fullType + '", ' +
                        pstruct_in + 'decoded_value->' + value.name + ', "' + value.name + '", ' + aLength + ', vinfo_' + value.name + '); // TPA')
            else:
                if value.name == 'pCode':
                    aLength = aLength + ' / 4'  # codeSize in VkShaderModuleCreateInfo is not the number of elements - it is in bytes
                    self.wc(leadSpaces + 'if (kPrintShaderCode)')
                    self.wc(leadSpaces + '{')
                    self.wc(leadSpaces + '    OutputIndentJson(outputFile, indent);')
                    self.wc(leadSpaces + '    OutputStringJson(outputFile, "\\"elements\\" :");')
                    self.wc(leadSpaces + '    OutputScalarValueStructInfo vinfo_' + value.name + ' = ' + OutputValue.setVinfo(self, value) + ';')
                    self.wc(leadSpaces + '    OutputArrayJson(outputFile, indent, "' + value.fullType + '", &' +
                                         pstruct_in + value.name + ', "' + value.name + '", ' + aLength + ', vinfo_' + value.name + '); // AUX')
                    self.wc(leadSpaces + '}')
                else:
                    if funcName != "vkCmdUpdateBuffer":
                        # We don't print the pData buffer for vmCmdUpdateBuffer because it is likely to be large.
                        self.wc(leadSpaces + 'OutputIndentJson(outputFile, indent);')
                        self.wc(leadSpaces + 'OutputStringJson(outputFile, "\\"elements\\" :");')
                        self.wc(leadSpaces + 'OutputScalarValueStructInfo vinfo_' + value.name + ' = ' + OutputValue.setVinfo(self, value) + ';')
                        self.wc(leadSpaces + 'OutputArrayJson(outputFile, indent, "' + value.fullType + '", ' + array_to_string_ampersand +
                                             pstruct_in + value.name + ', "' + value.name + '", ' + aLength + ', vinfo_' + value.name + '); // AUA')

        ###### Output structures
        elif self.isStruct(value.baseType) and (value.baseType in self.structDict):
            self.wc(leadSpaces + 'OutputIndentJson(outputFile, indent);')
            self.wc(leadSpaces + 'OutputStringJson(outputFile, "\\"members\\" :\\n");')
            if value.isPointer and value.name != "dpy":
                if isFuncArg:
                    if self.isOutputParameter(value):
                        self.wc(leadSpaces + 'OutputStructureJson(outputFile, *' + value.name + '->GetMetaStructPointer(), indent, ' +
                                             value.name + '->GetAddress()); // GLX')
                    else:
                        self.wc(leadSpaces + 'OutputStructureJson(outputFile, *' + value.name + '.GetMetaStructPointer(), indent, ' +
                                             value.name + '.GetAddress()); // GLW')
                else:
                    self.wc(leadSpaces + 'OutputStructureJson(outputFile, *' + pstruct_in + value.name + '->GetMetaStructPointer(), indent, ' +
                                         ' base_addr + offsetof(' + structName + ', ' + value.name + ')); // GLY')
            else:
                if self.isUnion(structName):
                    self.wc('    OutputStructureJson(outputFile, reinterpret_cast<const Decoded_' + value.fullType + '&>(pstruct_in), indent, ' +
                                     ' base_addr + offsetof(' + structName + ', ' + value.name + ')); // RQN')
                else:
                    self.wc('    OutputStructureJson(outputFile, *' + pstruct_in + value.name + ', indent, ' +
                                     ' base_addr + offsetof(' + structName + ', ' + value.name + ')); // APJ')

        ###### Output pointers to non-structs and non-arrays
        elif value.isPointer and value.name != 'dpy':
            if value.fullType == 'const char*':
                # Treat pointer to char as a string
                self.wc(leadSpaces + 'OutputIndentJson(outputFile, indent);')
                self.wc(leadSpaces + 'OutputStringJson(outputFile, "\\"value\\" : ");')
                if isFuncArg:
                    self.wc(leadSpaces + 'StringToQuotedStringJson(outputFile, ' + pstruct + value.name + '.GetPointer()); // TUJ')
                else:
                    self.wc(leadSpaces + 'StringToQuotedStringJson(outputFile, ' + pstruct + value.name + '); // TLK')
                self.wc(leadSpaces + 'OutputStringJson(outputFile, "\\n");')
            elif value.baseType in ['uint', 'uint32_t', 'uint64_t', 'size_t']:
                self.wc(leadSpaces + 'OutputIndentJson(outputFile, indent); // UHA')
                self.wc(leadSpaces + 'OutputStringJson(outputFile, "\\"value\\" : \\"");')
                if isFuncArg and self.isOutputParameter(value):
                    self.wc(leadSpaces + 'OutputUnsignedDecimalJson(outputFile, *' + value.name + '->GetPointer()); //WRT')
                else:
                    self.wc(leadSpaces + 'OutputUnsignedDecimalJson(outputFile, *' + value.name + '.GetPointer()); //WRU')
                self.wc(leadSpaces + 'OutputStringJson(outputFile, "\\"\\n");')
            elif self.isHandle(value.baseType):
                self.wc(leadSpaces + 'OutputIndentJson(outputFile, indent);')
                self.wc(leadSpaces + 'OutputStringJson(outputFile, "\\"value\\" : \\"");')
                if self.isOutputParameter(value):
                    self.wc(leadSpaces + 'OutputAddrJson(outputFile, *' + pstruct + value.name + '->GetPointer()); // URY')
                else:
                    self.wc(leadSpaces + 'OutputAddrJson(outputFile, *' + pstruct + value.name + '.GetPointer()); // URZ')
                self.wc(leadSpaces + 'OutputStringJson(outputFile, "\\"\\n");')
            elif value.name == 'pNext':
                self.wc(leadSpaces + 'void *pNext_base_addr = reinterpret_cast<void *>(' + pstruct_in + value.name + '->GetAddress()); // PVX')
                self.wc(leadSpaces + 'if (pNext_base_addr)')
                self.wc(leadSpaces + '{')
                self.wc(leadSpaces + '    OutputIndentJson(outputFile, indent);')
                self.wc(leadSpaces + '    OutputStringJson(outputFile, "\\"members\\" :\\n");')
                self.wc(leadSpaces + '    OutputPnextStructJson(outputFile, indent, pstruct_in.pNext->GetMetaStructPointer(), reinterpret_cast<uint64_t>(pNext_base_addr)); // PPX')
                self.wc(leadSpaces + '}')
            else:
                if value.baseType == "wchar_t":
                    self.wc(leadSpaces + 'OutputIndentJson(outputFile, indent);')
                    self.wc(leadSpaces + 'OutputStringJson(outputFile, "\\"value\\" : ");')
                    self.wc(leadSpaces + 'WideStringToQuotedStringJson(outputFile, pstruct->' + value.name + '); // PXQ')
                    self.wc(leadSpaces + 'OutputStringJson(outputFile, "\\n");')
                elif specialPtr or value.name in ["pView", "ppData"]:
                    self.wc(leadSpaces + 'OutputIndentJson(outputFile, indent);')
                    self.wc(leadSpaces + 'OutputStringJson(outputFile, "\\"value\\" : \\"");')
                    if specialPtr or not isFuncArg:
                        self.wc(leadSpaces + 'OutputAddrJson(outputFile, ' + pstruct_in + value.name + '); // PXR')
                    else:
                        if self.isOutputParameter(value):
                            self.wc(leadSpaces + 'OutputAddrJson(outputFile, *(static_cast<uint64_t*>(' + value.name + '->GetPointer()))); // PXA')
                        else:
                            self.wc(leadSpaces + 'OutputAddrJson(outputFile, *(static_cast<uint64_t*>(' + value.name + '.GetPointer()))); // PXB')
                    self.wc(leadSpaces + 'OutputStringJson(outputFile, "\\"\\n");')
                else:
                    self.wc(leadSpaces + 'OutputIndentJson(outputFile, indent);')
                    self.wc(leadSpaces + 'OutputStringJson(outputFile, "\\"value\\" : \\"");')
                    self.wc(leadSpaces + 'OutputScalarValueStructInfo vinfo_' + value.name + ' = ' + OutputValue.setVinfo(self, value) + ';')
                    if (isFuncArg):
                        if self.isOutputParameter(value):
                            self.wc(leadSpaces + 'OutputScalarValueJson(outputFile, ' + value.name + '->GetPointer(), vinfo_' + value.name +'); // PXR')
                        else:
                            self.wc(leadSpaces + 'OutputScalarValueJson(outputFile, ' + value.name + '.GetPointer(), vinfo_' + value.name +'); // PXS')
                    else:
                        self.wc(leadSpaces + 'OutputScalarValueJson(outputFile, ' + pstruct_in + value.name + '->GetPointer(), vinfo_' + value.name +'); // PXT')
                    self.wc(leadSpaces + 'OutputStringJson(outputFile, "\\"\\n");')

        ###### Output handles
        elif self.isHandle(value.baseType) or value.name == 'dpy':
            self.wc('    OutputIndentJson(outputFile, indent);')
            self.wc('    OutputStringJson(outputFile, "\\"value\\" : \\"");')
            self.wc('    OutputAddrJson(outputFile, ' + pstruct_in + value.name + '); // PRQ')
            self.wc('    OutputStringJson(outputFile, "\\"\\n");')

        ###### Output flags
        elif ((self.isFlags(value.baseType) and (value.baseType in self.flagsNames) and value.baseType.replace('Flags', 'FlagBits') in self.enumNames) or
              'FlagBits' in value.baseType):
            self.wc('    OutputIndentJson(outputFile, indent);')
            self.wc('    OutputStringJson(outputFile, "\\"value\\" : \\"");')
            self.wc('    OutputFlagsJson(outputFile, ' + pstruct + value.name + ', OutputEnum' + value.baseType.replace('Flags', 'FlagBits') + '); // URG')
            self.wc('    OutputStringJson(outputFile, "\\"\\n");')

        ###### Output enums
        elif self.isEnum(value.baseType):
            self.wc('    OutputIndentJson(outputFile, indent);')
            self.wc('    OutputStringJson(outputFile, "\\"value\\" : \\"");')
            self.wc('    OutputEnum' + value.baseType + '(outputFile, ' + pstruct + value.name + '); // ESA')
            self.wc('    OutputStringJson(outputFile, "\\"\\n");')

        ###### Output functionptrs
        elif self.isFunctionPtr(value.baseType):
            self.wc('    OutputIndentJson(outputFile, indent);')
            self.wc('    OutputStringJson(outputFile, "\\"value\\" : \\"");')
            self.wc('    OutputAddrJson(outputFile, reinterpret_cast<uint64_t>(' + pstruct + value.name + ')); // WRX')
            self.wc('    OutputStringJson(outputFile, "\\"\\n");')

        ###### Output nums
        elif value.baseType in ['float', 'double']:
            self.wc('    OutputIndentJson(outputFile, indent);')
            self.wc('    OutputStringJson(outputFile, "\\"value\\" : \\"");')
            self.wc('    OutputDoubleJson(outputFile, ' + pstruct + value.name + '); // PEZ')
            self.wc('    OutputStringJson(outputFile, "\\"\\n");')

        ###### Output nums
        elif value.baseType in ['int', 'int32_t', 'int64_t', 'VkDeviceSize', 'VkBool32']:
            self.wc('    OutputIndentJson(outputFile, indent);')
            self.wc('    OutputStringJson(outputFile, "\\"value\\" : \\"");')
            self.wc('    OutputSignedDecimalJson(outputFile, ' + pstruct + value.name + '); // EQA')
            self.wc('    OutputStringJson(outputFile, "\\"\\n");')

        ###### Output nums
        else:     # 'unsigned int', 'uint32_t', 'uint64_t', 'size_t', and all others
            self.wc('    OutputIndentJson(outputFile, indent);')
            self.wc('    OutputStringJson(outputFile, "\\"value\\" : \\"");')
            self.wc('    OutputUnsignedDecimalJson(outputFile, ' + pstruct + value.name + '); // UYW')
            self.wc('    OutputStringJson(outputFile, "\\"\\n");')

        if value.isPointer and value.name != "dpy":
            # Close off not nullptr block
            self.wc('    } // HWR')

        # }  For vi % cmd
