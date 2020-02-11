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

class ValueToString(BaseGenerator):

    # Return an initializer for vinfo
    def setVinfo(self, member):
        rval = '{'
        # Special case ppData and pNext - we treat them as addresses
        rval += str(member.name == 'ppData' or member.name == 'pNext' or self.isHandle(member.baseType)).lower() + ', '
        rval += str(self.isEnum(member.baseType)).lower() + ', '
        rval += str(self.isFlags(member.baseType)).lower() + ', '
        if self.isEnum(member.baseType) or self.isFlags(member.baseType):
            rval +='EnumToString' + member.baseType.replace('Flags', 'FlagBits')
        else:
            rval +='nullptr';
        rval += '}'
        return rval

    # Generate code to convert a value to a string.
    # A value is func arg or member of a structure - a scalar, enum, flags, array, structure, array of structures,
    # or string.
    #
    # The structName is used when value is a member of a structure. It contains the name of the "enclosing" structure type.
    #
    # This method is called from makeConsumerFuncBody in vulkan_json_consumer_body_generator.py to generate
    # code to display function arguments, and from vulkan_json_consumer_struct_generator.py to generate
    # code to display members of structures.
    def valueToString(self, value, structName):
        #{  For vi % cmd

        if structName != '':
            pstruct = 'pstruct->'
            pstruct_in = 'pstruct_in.'
            isFuncArg = False
        else:
            pstruct = ''
            pstruct_in = ''
            isFuncArg = True

        # Code is indented 8 spaces when printing a pointer.
        if value.isPointer:
            leadSpaces = '        '
        else:
            leadSpaces = '    '

        ###### Output type and variable/member name
        self.wc('    IndentSpacesJson(outputFile, indent); // ESP')
        if self.isUnion(value.fullType):
            self.wc('    OutputStringJson(outputFile, "\\"type\\" : \\"' + value.fullType + ' (Union)"); // UNN')
        else:
            self.wc('    OutputStringJson(outputFile, "\\"type\\" : \\"' + value.fullType + '"); //NUN')
        if (value.isArray and not value.isPointer and ('Count' in value.arrayLength)):
            self.wc('    OutputStringJson(outputFile, "[");')
            self.wc('    UnsignedDecimalToStringJson(outputFile, ' + pstruct + value.arrayLength + '); // IAC')
            self.wc('    OutputStringJson(outputFile, "]");')
        elif value.isArray and not value.isPointer:
            self.wc('    OutputStringJson(outputFile, "[");')
            self.wc('    UnsignedDecimalToStringJson(outputFile, ' + value.arrayLength + '); // IAV')
            self.wc('    OutputStringJson(outputFile, "]");')
        self.wc('    OutputStringJson(outputFile, "\\",\\n");')
        self.wc('    IndentSpacesJson(outputFile, indent);')
        self.wc('    OutputStringJson(outputFile, "\\"name\\" : \\"' + value.name + '\\",\\n");')

        # For dev/debug
        if 0 and (value.name == "pApplicationName" or value.name == "pEngineName"):
            print('@ name', str(value.name))
            print('@ isPointer', str(value.isPointer))
            print('@ isArray', str(value.isArray))
            print('@ isFlags', str(self.isFlags(value.baseType)))
            print('@ baseType', str(value.baseType))
            print('@ fullType "' + value.fullType + '"')
            print('@ isFuncArg', str(isFuncArg))
            print('@ isStruct', str(self.isStruct(value.baseType)))
            print('@ inStructDict', str(value.baseType in self.structDict))
            print('@ arrayLength', value.arrayLength)
            print('@ structName', structName)
            print('@ leadSpaces "' + leadSpaces + '"')
            print("")

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
                self.wc('    if (' + value.name + '.GetPointer() == nullptr) // WWY')
            else:
                self.wc('    if (' + pstruct + value.name + ' == nullptr) // WWZ')
            self.wc('    {')
            self.wc('        IndentSpacesJson(outputFile, indent); // RGV')
            self.wc('        OutputStringJson(outputFile, "\\"address\\" : \\"NULL\\"\\n");')
            self.wc('    }')
            self.wc('    else')
            self.wc('    { // JHD')
            if specialPtr:
                 addrExpression = pstruct_in + value.name + ' /* ACF */'
            elif isFuncArg or (not isFuncArg and value.isArray and not (value.baseType in self.structDict)):
                addrExpression = pstruct_in + value.name + '.GetAddress() /* RQA */'
            else:
                if value.isArray or self.isStruct(value.baseType) or value.name == 'pNext':
                    addrExpression = pstruct_in + value.name + '->GetAddress() /* KWO */'
                elif (value.name == "pView"):
                    addrExpression = pstruct_in + value.name + ' /* ACF */'
                else:
                    addrExpression = pstruct_in + value.name + '.GetAddress() /* QZR */'
        if addrExpression is not None:
            self.wc(leadSpaces + 'IndentSpacesJson(outputFile, indent);')
            self.wc(leadSpaces + 'OutputStringJson(outputFile, "\\"address\\" : \\""); // EAC')
            self.wc(leadSpaces + 'AddrToStringJson(outputFile, ' + addrExpression + ' );')
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
                self.wc(leadSpaces + 'IndentSpacesJson(outputFile, indent);')
                self.wc(leadSpaces + 'OutputStringJson(outputFile, "\\"elements\\" :"); // TRZ')
                if isFuncArg:
                    self.wc(leadSpaces + 'ArrayOfStructsToStringJson<Decoded_' + value.baseType + '>(outputFile, indent, ' + str(value.pointerCount) + ', "' + value.baseType +
                          '", ' + value.name + '.GetMetaStructPointer(), "' + value.name +
                          '", ' + aLength + ', ' + str(self.isUnion(value.baseType)).lower() + ', ' + value.name + '.GetAddress()); // CRO')
                else:
                    self.wc(leadSpaces + 'ArrayOfStructsToStringJson<Decoded_' + value.baseType + '>(outputFile, indent, ' + str(value.pointerCount) + ', "' + value.baseType +
                          '", ' + pstruct_in + value.name + '->GetMetaStructPointer(), "' + value.name +
                          '", ' + aLength + ', ' + str(self.isUnion(value.baseType)).lower() + ', ' + pstruct_in + value.name + '->GetAddress()); // CCY')
            elif value.fullType == "const char* const*":
                # Array of strings
                self.wc(leadSpaces + 'IndentSpacesJson(outputFile, indent);')
                self.wc(leadSpaces + 'OutputStringJson(outputFile, "\\"elements\\" :"); // TRG')
                self.wc(leadSpaces + 'ScalarValueToStringStruct vinfo_' + value.name + ' = ' + ValueToString.setVinfo(self, value) + ';')
                self.wc(leadSpaces + 'ArrayToStringJson(outputFile, indent, ' + str(value.pointerCount-1) + ', "' + value.fullType + '", &pstruct_in.' +
                        value.name + ', "' + value.name + '", ' + aLength + ', vinfo_' + value.name + '); //UQA')
            elif value.fullType == "char" and value.isArray:
                # A simple string array
                self.wc(leadSpaces + 'IndentSpacesJson(outputFile, indent); // UTW')
                self.wc(leadSpaces + 'OutputStringJson(outputFile, "\\"value\\" : "); // TRH')
                self.wc(leadSpaces + 'ScalarValueToStringStruct vinfo_' + value.name + ' = ' + ValueToString.setVinfo(self, value) + ';')
                self.wc(leadSpaces + 'ArrayOfScalarsToStringJson<' + value.baseType + '>(outputFile, indent, ' + str(value.pointerCount) + ', "' + value.fullType +
                            '", ' + pstruct_in + value.name + '.GetPointer(), "' + value.name + '", ' + aLength + ', vinfo_' + value.name + '); // TRJ')
                self.wc(leadSpaces + 'OutputStringJson(outputFile, "\\n"); // TRX')
            elif self.isHandle(value.baseType) or value.name == 'dpy':
                self.wc(leadSpaces + 'IndentSpacesJson(outputFile, indent);')
                self.wc(leadSpaces + 'OutputStringJson(outputFile, "\\"elements\\" :"); // TRI')
                self.wc(leadSpaces + 'ScalarValueToStringStruct vinfo_' + value.name + ' = ' + ValueToString.setVinfo(self, value) + ';')
                if value.isArray and value.name != "dpy":
                    self.wc(leadSpaces + 'ArrayToStringJson(outputFile, indent, ' + str(value.pointerCount-1) + ', "' + value.fullType + '", &' +
                                pstruct_in + value.name + ', "' + value.name + '", ' + aLength + ', vinfo_' + value.name + '); // AQA')
                else:
                    print("Not handled!!: ", value.name)
            elif self.isUnion(structName):
                self.wc('    IndentSpacesJson(outputFile, indent);')
                self.wc('    OutputStringJson(outputFile, "\\"elements\\" :"); // TRP')
                self.wc('    ScalarValueToStringStruct vinfo_' + value.name + ' = ' + ValueToString.setVinfo(self, value) + ';')
                self.wc('    ArrayOfScalarsToStringJson<'+value.fullType+'>(outputFile, indent, ' + str(value.pointerCount-1) + ', "' + value.fullType + '", ' +
                        pstruct_in + 'decoded_value->' + value.name + ', "' + value.name + '", ' + aLength + ', vinfo_' + value.name + '); // TPA')
            else:
                if value.name == 'pCode':
                    aLength = aLength + ' / 4'  # codeSize in VkShaderModuleCreateInfo is not the number of elements - it is in bytes
                    self.wc(leadSpaces + 'if (kPrintShaderCode)')
                    self.wc(leadSpaces + '{')
                    self.wc(leadSpaces + '    IndentSpacesJson(outputFile, indent);')
                    self.wc(leadSpaces + '    OutputStringJson(outputFile, "\\"elements\\" : ");')
                    self.wc(leadSpaces + '    ScalarValueToStringStruct vinfo_' + value.name + ' = ' + ValueToString.setVinfo(self, value) + ';')
                    self.wc(leadSpaces + '    ArrayToStringJson(outputFile, indent, ' + str(value.pointerCount-1) + ', "' + value.fullType + '", &' +
                            pstruct_in + value.name + ', "' + value.name + '", ' + aLength + ', vinfo_' + value.name + '); // AUX')
                    self.wc(leadSpaces + '}')
                else:
                    self.wc(leadSpaces + 'IndentSpacesJson(outputFile, indent);')
                    self.wc(leadSpaces + 'OutputStringJson(outputFile, "\\"elements\\" : ");')
                    self.wc(leadSpaces + 'ScalarValueToStringStruct vinfo_' + value.name + ' = ' + ValueToString.setVinfo(self, value) + ';')
                    self.wc(leadSpaces + 'ArrayToStringJson(outputFile, indent, ' + str(value.pointerCount-1) + ', "' + value.fullType + '", &' +
                            pstruct_in + value.name + ', "' + value.name + '", ' + aLength + ', vinfo_' + value.name + '); // AUA')

        ###### Output structures
        elif self.isStruct(value.baseType) and (value.baseType in self.structDict):
            self.wc(leadSpaces + 'IndentSpacesJson(outputFile, indent);')
            self.wc(leadSpaces + 'OutputStringJson(outputFile, "\\"members\\" :\\n");')
            if value.isPointer and value.name != "dpy":
                if isFuncArg:
                    self.wc(leadSpaces + 'StructureToStringJson(outputFile, *' + value.name + '.GetMetaStructPointer(), indent, ' +
                                         value.name + '.GetAddress()); // GLX')
                else:
                    self.wc(leadSpaces + 'StructureToStringJson(outputFile, *' + pstruct_in + value.name + '->GetMetaStructPointer(), indent, ' +
                                         ' base_addr + offsetof(' + structName + ', ' + value.name + ')); // GLY')
            else:
                if self.isUnion(structName):
                    self.wc('    StructureToStringJson(outputFile, reinterpret_cast<const Decoded_' + value.fullType + '&>(pstruct_in), indent, ' +
                                     ' base_addr + offsetof(' + structName + ', ' + value.name + ')); // RQN')
                else:
                    self.wc('    StructureToStringJson(outputFile, *' + pstruct_in + value.name + ', indent, ' +
                                     ' base_addr + offsetof(' + structName + ', ' + value.name + ')); // APJ')

        ###### Output pointers to non-structs and non-arrays
        elif value.isPointer and value.name != 'dpy':
            if value.fullType == 'const char*':
                # Treat pointer to char as a string
                self.wc(leadSpaces + 'IndentSpacesJson(outputFile, indent);')
                self.wc(leadSpaces + 'OutputStringJson(outputFile, "\\"value\\" : ");')
                if isFuncArg:
                    self.wc(leadSpaces + 'StringToQuotedStringJson(outputFile, ' + pstruct + value.name + '.GetPointer()); // TUJ')
                else:
                    self.wc(leadSpaces + 'StringToQuotedStringJson(outputFile, ' + pstruct + value.name + '); // TLK')
                self.wc(leadSpaces + 'OutputStringJson(outputFile, "\\n");')
            elif value.baseType in ['uint', 'uint32_t', 'uint64_t', 'size_t']:
                self.wc(leadSpaces + 'IndentSpacesJson(outputFile, indent); // UQA')
                self.wc(leadSpaces + 'OutputStringJson(outputFile, "\\"value\\" : \\"");')
                self.wc(leadSpaces + 'UnsignedDecimalToStringJson(outputFile, *' + value.name + '.GetPointer());')
                self.wc(leadSpaces + 'OutputStringJson(outputFile, "\\"\\n");')
            elif self.isHandle(value.baseType):
                self.wc(leadSpaces + 'IndentSpacesJson(outputFile, indent);')
                self.wc(leadSpaces + 'OutputStringJson(outputFile, "\\"value\\" : \\"");')
                self.wc(leadSpaces + 'AddrToStringJson(outputFile, *' + pstruct + value.name + '.GetPointer()); // URY')
                self.wc(leadSpaces + 'OutputStringJson(outputFile, "\\"\\n");')
            elif value.name == 'pNext':
                self.wc(leadSpaces + 'void *pNext_base_addr = reinterpret_cast<void *>(' + pstruct_in + value.name + '->GetAddress()); // PVX')
                self.wc(leadSpaces + 'if (pNext_base_addr)')
                self.wc(leadSpaces + '{')
                self.wc(leadSpaces + '    PnextStructToStringJson(outputFile, indent, reinterpret_cast<void*>(pstruct_in.pNext->GetMetaStructPointer()), reinterpret_cast<uint64_t>(pNext_base_addr)); //PPX')
                self.wc(leadSpaces + '}')
            else:
                if value.baseType == "wchar_t":
                    self.wc(leadSpaces + 'IndentSpacesJson(outputFile, indent);')
                    self.wc(leadSpaces + 'OutputStringJson(outputFile, "\\"value\\" : \\"");')
                    self.wc(leadSpaces + 'AddrToStringJson(outputFile, ' + pstruct_in + value.name + '.GetAddress()); // PXQ')  # TODO: Print out string
                    self.wc(leadSpaces + 'OutputStringJson(outputFile, "\\"\\n");')
                elif specialPtr or value.name in ["pView", "ppData"]:
                    self.wc(leadSpaces + 'IndentSpacesJson(outputFile, indent);')
                    self.wc(leadSpaces + 'OutputStringJson(outputFile, "\\"value\\" : \\"");')
                    if specialPtr or not isFuncArg:
                        self.wc(leadSpaces + 'AddrToStringJson(outputFile, ' + pstruct_in + value.name + '); // PXR')
                    else:
                        self.wc(leadSpaces + 'AddrToStringJson(outputFile, *(static_cast<uint64_t*>(' + value.name + '.GetPointer()))); // PXA')
                    self.wc(leadSpaces + 'OutputStringJson(outputFile, "\\"\\n");')
                else:
                    self.wc(leadSpaces + 'IndentSpacesJson(outputFile, indent);')
                    self.wc(leadSpaces + 'OutputStringJson(outputFile, "\\"value\\" : \\"");')
                    self.wc(leadSpaces + 'ScalarValueToStringStruct vinfo_' + value.name + ' = ' + ValueToString.setVinfo(self, value) + ';')
                    if isFuncArg:
                        self.wc(leadSpaces + 'ScalarValueToStringJson(outputFile, ' + value.name + '.GetPointer(), vinfo_' + value.name +'); // PXS')
                    else:
                        self.wc(leadSpaces + 'ScalarValueToStringJson(outputFile, ' + pstruct_in + value.name + '->GetPointer(), vinfo_' + value.name +'); // PXT')
                    self.wc(leadSpaces + 'OutputStringJson(outputFile, "\\"\\n");')

        ###### Output handles
        elif self.isHandle(value.baseType) or value.name == 'dpy':
            self.wc('    IndentSpacesJson(outputFile, indent);')
            self.wc('    OutputStringJson(outputFile, "\\"value\\" : \\"");')
            self.wc('    AddrToStringJson(outputFile, ' + pstruct_in + value.name + '); // PRQ')
            self.wc('    OutputStringJson(outputFile, "\\"\\n");')

        ###### Output flags
        elif ((self.isFlags(value.baseType) and (value.baseType in self.flagsNames) and value.baseType.replace('Flags', 'FlagBits') in self.enumNames) or
              'FlagBits' in value.baseType):
            self.wc('    IndentSpacesJson(outputFile, indent);')
            self.wc('    OutputStringJson(outputFile, "\\"value\\" : \\"");')
            self.wc('    FlagsToStringJson(outputFile, ' + pstruct + value.name + ', EnumToString' + value.baseType.replace('Flags', 'FlagBits') + '); // URG')
            self.wc('    OutputStringJson(outputFile, "\\"\\n");')

        ###### Output enums
        elif self.isEnum(value.baseType):
            self.wc('    IndentSpacesJson(outputFile, indent);')
            self.wc('    OutputStringJson(outputFile, "\\"value\\" : \\"");')
            self.wc('    EnumToString' + value.baseType + '(outputFile, ' + pstruct + value.name + '); // ESA')
            self.wc('    OutputStringJson(outputFile, "\\"\\n");')

        ###### Output functionptrs
        elif self.isFunctionPtr(value.baseType):
            # TOODO: Do we get here since ptrs are handled above?
            self.wc('    IndentSpacesJson(outputFile, indent);')
            self.wc('    OutputStringJson(outputFile, "\\"value\\" : \\"");')
            self.wc('    AddrToStringJson(outputFile, reinterpret_cast<uint64_t>(' + pstruct + value.name + ')); // WRX')
            self.wc('    OutputStringJson(outputFile, "\\"\\n");')

        ###### Output nums
        elif value.baseType in ['float', 'double']:
            self.wc('    IndentSpacesJson(outputFile, indent);')
            self.wc('    OutputStringJson(outputFile, "\\"value\\" : \\"");')
            self.wc('    DoubleToStringJson(outputFile, ' + pstruct + value.name + '); // PEZ')
            self.wc('    OutputStringJson(outputFile, "\\"\\n");')

        ###### Output nums
        elif value.baseType in ['int', 'int32_t', 'int64_t', 'VkDeviceSize', 'VkBool32']:
            self.wc('    IndentSpacesJson(outputFile, indent);')
            self.wc('    OutputStringJson(outputFile, "\\"value\\" : \\"");')
            self.wc('    SignedDecimalToStringJson(outputFile, ' + pstruct + value.name + '); //EQA')
            self.wc('    OutputStringJson(outputFile, "\\"\\n");')

        ###### Output nums
        else:     # 'unsigned int', 'uint32_t', 'uint64_t', 'size_t', and all others
            self.wc('    IndentSpacesJson(outputFile, indent);')
            self.wc('    OutputStringJson(outputFile, "\\"value\\" : \\"");')
            self.wc('    UnsignedDecimalToStringJson(outputFile, ' + pstruct + value.name + '); // UYW')
            self.wc('    OutputStringJson(outputFile, "\\"\\n");')

        if value.isPointer and value.name != "dpy":
            # Close off not nullptr block
            self.wc('    } // HWR')

        #}  For vi % cmd
