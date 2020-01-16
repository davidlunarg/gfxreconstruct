#!/usr/bin/python3 -i
#
# Copyright (c) 2019 Valve Corporation
# Copyright (c) 2019 LunarG, Inc.
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
            rval +='EnumToString' + member.baseType.replace('Flags', 'FlagBits')+'Json'
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
    # code for to display function arguments, and from vulkan_json_consumer_struct_generator.py to generate
    # code to display members of structures.
    def valueToString(self, value, structName):
        #{   // For vi % cmd

        if structName != '':
            pstruct = 'pstruct->'
            pstruct_in = 'pstruct_in.'
            isFuncArg = False
        else:
            pstruct = ''
            pstruct_in = ''
            isFuncArg = True

        # Print type and variable/member name
        self.wc('    IndentSpacesJson(out, indent);')
        self.wc('    *out += "\\"type\\" : \\"' + value.fullType + '\\",\\n";')
        self.wc('    IndentSpacesJson(out, indent);')
        self.wc('    *out += "\\"name\\" : \\"' + value.name + '\\",\\n";')

        # For dev/debug
        if value.name == "pAttributes" or value.name == "pPhysicalDeviceCount" or value.name == "pPhysicalDevices":
            print('@@@')
            print('name', str(value.name))
            print('isPointer', str(value.isPointer))
            print('isArray', str(value.isArray))
            print('baseType', str(value.baseType))
            print('isFuncArg', str(isFuncArg))
            print('isStruct', str(self.isStruct(value.baseType)))
            print('inStructDict', str(value.baseType in self.structDict))
            print("")

        # Print address line if needed
        addrExpression = None
        specialPtr = (value.name in
                     ["pUserData", "handle", "hwnd", "surface", "connection", "hwnd", "hinstance",
                      "pHostPointer", "window", "display", "pCheckpointMarker", "buffer", "hmonitor", "pLayer"])
        #TODO: Simplify this...
        if not value.isPointer and value.isArray:
            if not isFuncArg:
                addrExpression = 'base_addr + offsetof(' + structName + ', ' + value.name + ') /* RKQ */'
            else:
                addrExpression = pstruct_in + value.name + '.GetAddress() /* UYA */'
        #TODO: What if value.name is dpy? Should we print address line?
        if value.isPointer and value.name != "dpy":
            if isFuncArg and specialPtr:
                self.wc('    if ( !' + value.name + ') // WWW')
            elif not isFuncArg and specialPtr:
                self.wc('    if (' + pstruct + value.name + ' == nullptr) // WWX')
            elif isFuncArg:
                self.wc('    if (' + value.name + '.GetPointer() == nullptr) // WWY')
            else:
                self.wc('    if (' + pstruct + value.name + ' == nullptr) // WWZ')
            self.wc('    {')
            self.wc('        IndentSpacesJson(out, indent);')
            self.wc('        *out += "\\"address\\" : \\"NULL\\"\\n";')
            self.wc('    }')
            self.wc('    else')
            self.wc('    {')
            if value.isArray:
                if value.baseType in self.structDict:
                    if isFuncArg:
                        addrExpression = pstruct_in + value.name + '.GetAddress() /* RQA */'
                    else:
                        addrExpression = pstruct_in + value.name + '->GetAddress() /* IIO */'
                else:
                    if isFuncArg:
                        addrExpression = pstruct_in + value.name + '.GetAddress() /* TWO */'
                    else:
                        addrExpression = pstruct_in + value.name + '.GetAddress() /* UTW */'
            elif self.isStruct(value.baseType):
                if isFuncArg:
                    addrExpression = pstruct_in + value.name + '.GetAddress() /* UYR */'
                else:
                    addrExpression = pstruct_in + value.name + '->GetAddress() /* KWO */'
            elif specialPtr or (value.name == "pView"):
                if specialPtr or not isFuncArg:
                    addrExpression = pstruct_in + value.name + ' /* ACF */'
                else:
                    addrExpression = pstruct_in + value.name + '.GetAddress() /* PIO */'
            else:
                if value.name == 'pNext':
                    addrExpression = pstruct_in + value.name + '->GetAddress() /* YYQ */'
                else:
                    addrExpression = pstruct_in + value.name + '.GetAddress() /* QZX */'
        if addrExpression is not None:
            self.wc('        IndentSpacesJson(out, indent);')
            self.wc('        *out += "\\"address\\" : \\"";')
            self.wc('        AddrToStringJson(out, ' + addrExpression + ' );')
            self.wc('        *out += "\\n";')

        # Print arrays
        if value.isArray and value.name != "dpy":
            if value.isPointer:
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
            self.wc('        IndentSpacesJson(out, indent);')
            self.wc('        *out += "\\"elements\\" : \\"\\n";')
            self.wc('        IndentSpacesJson(out, indent);')
            self.wc('        *out += "[\\n";')
            if self.isStruct(value.baseType) and (value.baseType in self.structDict):
                if isFuncArg:
                    self.wc('        ArrayOfStructsToStringJson<Decoded_' + value.baseType + '>(out, indent+1, ' + str(value.pointerCount) + ', "' + value.baseType +
                          '", ' + value.name + '.GetMetaStructPointer(), "' + value.name +
                          '", ' + aLength + ', ' + str(self.isUnion(value.baseType)).lower() + ', ' + value.name + '.GetAddress());  // CRO')
                else:
                    self.wc('        ArrayOfStructsToStringJson<Decoded_' + value.baseType + '>(out, indent+1, ' + str(value.pointerCount) + ', "' + value.baseType +
                          '", ' + pstruct_in + value.name + '->GetMetaStructPointer(), "' + value.name +
                          '", ' + aLength + ', ' + str(self.isUnion(value.baseType)).lower() + ', ' + pstruct_in + value.name + '->GetAddress());  // CCY')
                #TODO: Handle other array types
            self.wc('        *out += "]\\n";')

        # Print structures
        elif self.isStruct(value.baseType) and (value.baseType in self.structDict):
            self.wc('        IndentSpacesJson(out, indent);')
            self.wc('        *out += "\\"members\\" :\\n";')
            self.wc('        IndentSpacesJson(out, indent);')
            self.wc('        *out += "[\\n";')
            if value.isPointer and value.name != "dpy":
                if isFuncArg:
                    self.wc('        StructureToStringJson(out, *' + value.name + '.GetMetaStructPointer(), indent+1, ' +
                                         value.name + '.GetAddress()); // GLX')
                else:
                    self.wc('        StructureToStringJson(out, *' + pstruct_in + value.name + '->GetMetaStructPointer(), indent+1, ' +
                                         ' base_addr + offsetof(' + structName + ', ' + value.name + ')); // GLY')
            else:
                if self.isUnion(structName):
                    self.wc('    StructureToStringJson(out, reinterpret_cast<const Decoded_' + value.fullType + '&>(pstruct_in), indent+1, ' +
                                     ' base_addr + offsetof(' + structName + ', ' + value.name + ')); // RQN')
                else:
                    self.wc('    StructureToStringJson(out, *' + pstruct_in + value.name + ', indent+1, ' +
                                     ' base_addr + offsetof(' + structName + ', ' + value.name + ')); // APJ')
            self.wc('        IndentSpacesJson(out, indent);')
            self.wc('        *out += "]\\n";')

        if value.isPointer and value.name != "dpy":
            self.wc('    }')
    #===============


    def valueToString_ORIG_DELETEMET(self, value, structName):
        #{   // For vi % cmd
        if structName != '':
            pstruct = 'pstruct->'
            pstruct_in = 'pstruct_in.'
            isFuncArg = False
        else:
            pstruct = ''
            pstruct_in = ''
            isFuncArg = True
        self.wc('    IndentSpacesJson(out, indent);')
        self.wc('    *out += "' + (value.name + ': ').ljust(32) + '";')

        if not value.isPointer and value.isArray and value.baseType != 'char':
            # Generate code to print length of array
            self.wc('    *out += "' + value.baseType + '[";')
            if 'Count' in value.arrayLength:
                self.wc('    UnsignedDecimalToStringJson(out, ' + pstruct + value.arrayLength + '); // DFW')
            else:
                self.wc('    *out += "' + value.arrayLength + '"; // TPK')
            self.wc('    *out += "] = ";')
            if not isFuncArg:
                self.wc('    AddrToStringJson(out, base_addr + offsetof(' + structName + ', ' + value.name + ')); // IYY')
        else:
            self.wc('    *out += "' + value.fullType + ' = "; // TEQ')

        if value.fullType == 'const char*':
            # Treat pointer to char as a string
            if isFuncArg:
                self.wc('    StringToQuotedStringJson(out, ' + pstruct + value.name + '.GetPointer()); // TGH')
            else:
                self.wc('    StringToQuotedStringJson(out, ' + pstruct + value.name + '); // TGI')
        elif value.isPointer and value.name != "dpy":
            specialPtr = (value.name in ["pUserData", "handle", "hwnd", "surface", "connection", "hwnd", "hinstance", "pHostPointer", "window", "display", "pCheckpointMarker", "buffer", "hmonitor", "pLayer"])
            if isFuncArg and specialPtr:
                self.wc('    if ( !' + value.name + ') // WWW')
            elif not isFuncArg and specialPtr:
                self.wc('    if (' + pstruct + value.name + ' == nullptr) // WWX')
            elif isFuncArg:
                self.wc('    if (' + value.name + '.GetPointer() == nullptr) // WWY')
            else:
                self.wc('    if (' + pstruct + value.name + ' == nullptr) // WWZ')
            self.wc('    {')
            self.wc('        *out += "NULL";')
            self.wc('    }')
            self.wc('    else')
            self.wc('    {')
            if value.isArray:
                if value.baseType != 'void':
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
                    if value.name == 'pCode':
                        aLength = aLength + ' / 4';    # codeSize in struct VkShaderModuleCreateInfo is not the number of elements, but in bytes
                        self.wc('        AddrToStringJson(out, ' + pstruct_in +  value.name + '.GetAddress()); // WUX')
                        self.wc('        if (kPrintShaderCode)')
                        self.wc('        {')
                        self.wc('            ScalarValueToStringStruct vinfo_' + value.name + ' = ' + ValueToString.setVinfo(self, value) + ';')
                        self.wc('            ArrayOfScalarsToStringJson<' + self.makeDecodedParamType(value) + '>(out, indent, ' + str(value.pointerCount) + ', "' + value.fullType +
                                '", &pstruct_in.' + value.name + ', "' + value.name + '", ' + aLength + ', vinfo_' + value.name + ');  // CCY')
                        self.wc('        }')
                    else:
                        if value.baseType in self.structDict:
                            if isFuncArg:
                                self.wc('        AddrToStringJson(out, ' + value.name + '.GetAddress()); // WUS')
                            else:
                                self.wc('        AddrToStringJson(out, ' + pstruct_in +  value.name + '->GetAddress()); // WUT')
                            if isFuncArg:
                                self.wc('        ArrayOfStructsToStringJson<Decoded_' + value.baseType + '>(out, indent+1, ' + str(value.pointerCount) + ', "' + value.baseType +
                                      '", ' + value.name + '.GetMetaStructPointer(), "' + value.name +
                                      '", ' + aLength + ', ' + str(self.isUnion(value.baseType)).lower() + ', ' + value.name + '.GetAddress());  // CCO')
                            else:
                                self.wc('        ArrayOfStructsToStringJson<Decoded_' + value.baseType + '>(out, indent+1, ' + str(value.pointerCount) + ', "' + value.baseType +
                                      '", ' + pstruct_in + value.name + '->GetMetaStructPointer(), "' + value.name +
                                      '", ' + aLength + ', ' + str(self.isUnion(value.baseType)).lower() + ', ' + pstruct_in + value.name + '->GetAddress());  // CCP')
                        else:
                            self.wc('        AddrToStringJson(out, ' + pstruct_in + value.name + '.GetAddress()); // PAZ')
                            if self.isFlags(value.baseType):
                                self.wc('        ScalarValueToStringStruct vinfo_' + value.name + ' = ' + ValueToString.setVinfo(self, value) + ';')
                                self.wc('        ArrayToStringJson<' + self.makeDecodedParamType(value) + '>(out, indent, ' + str(value.pointerCount) + ', "' + value.fullType +
                                      '", &pstruct_in.' + value.name + ', "' + value.name + '", ' + aLength + ', ' + ' vinfo_' + value.name + ');  // CCR')
                            else:
                                self.wc('        ScalarValueToStringStruct vinfo_' + value.name + ' = ' + ValueToString.setVinfo(self, value) + ';')
                                self.wc('        ArrayToStringJson<' + self.makeDecodedParamType(value) + '>(out, indent, ' + str(value.pointerCount) +
                                                    ', "' + value.fullType + '", &' + pstruct_in + value.name + ', "' + value.name + '", ' +
                                                    aLength + ', ' +
                                                    ' vinfo_' + value.name + ');  // CXC')
                else:
                    # void* array:  print the address of the array
                    self.wc('        AddrToStringJson(out, ' + pstruct_in + value.name + '.GetAddress()); // AHW')
            elif self.isStruct(value.baseType) and (value.baseType in self.structDict):
                if isFuncArg:
                    self.wc('        AddrToStringJson(out, ' + value.name + '.GetAddress()); // JHI')
                else:
                    self.wc('        AddrToStringJson(out, ' + pstruct_in + value.name + '->GetAddress()); // JHJ')
                if self.isUnion(value.baseType):
                    self.wc('        *out += " (Union)";')
                self.wc('        *out += ":";')
                if isFuncArg:
                    self.wc('        StructureToStringJson(out, *' + value.name + '.GetMetaStructPointer(), indent+1, ' +
                                         value.name + '.GetAddress()); // GLM')
                else:
                    self.wc('        StructureToStringJson(out, *' + pstruct_in + value.name + '->GetMetaStructPointer(), indent+1, ' +
                                         ' base_addr + offsetof(' + structName + ', ' + value.name + ')); // GLN')
            else:
                if (value.baseType == "wchar_t"):
                    self.wc('        AddrToStringJson(out, ' + pstruct_in + value.name + '.GetAddress()); // PWQ')
                elif specialPtr or (value.name == "pView"):
                    if specialPtr or not isFuncArg:
                        self.wc('        AddrToStringJson(out, ' + pstruct_in + value.name + '); // PWR')
                    else:
                        self.wc('        AddrToStringJson(out, *(static_cast<uint64_t*>(' + value.name + '.GetPointer()))); // PWA')
                else:
                    self.wc('        ScalarValueToStringStruct vinfo_' + value.name + ' = ' + ValueToString.setVinfo(self, value) + ';')
                    if isFuncArg:
                        self.wc('        ScalarValueToStringJson(out, ' + value.name + '.GetPointer(), vinfo_' + value.name +'); // PWS')
                    else:
                        if value.name == 'pNext':
                            self.wc('        uint64_t pnextLocal = ' + pstruct_in + value.name + '->GetAddress(); // PNX')
                            self.wc('        ScalarValueToStringJson(out, &pnextLocal, vinfo_' + value.name +');')
                        else:
                            self.wc('        ScalarValueToStringJson(out, ' + pstruct_in + value.name + '->GetPointer(), vinfo_' + value.name +'); // PWT')
            self.wc('    }')
        elif value.isArray:
            if 'Count' in value.arrayLength:
                alength = pstruct + value.arrayLength
            else:
                alength = value.arrayLength
            if (value.baseType in self.structDict):
                self.wc('    ArrayOfStructsToStringJson<Decoded_' + value.baseType + '>(out, indent+1, ' + str(value.pointerCount) + ', "' + value.baseType +
                      '", ' + pstruct_in + value.name + '->GetMetaStructPointer(), "' + value.name +
                      '", ' + alength + ' , ' + str(self.isUnion(value.baseType)).lower() + ', ' + pstruct_in + value.name + '->GetAddress()); // EPB')
            else:
                self.wc('    ScalarValueToStringStruct vinfo_' + value.name + ' = ' + ValueToString.setVinfo(self, value) + ';')
                if isFuncArg:
                    self.wc('    ArrayOfScalarsToStringJson<' + value.baseType + '>(out, indent, ' + str(value.pointerCount) + ', "' + value.fullType +
                            '", ' + value.name + '.GetPointer(), "' + value.name + '", ' + alength + ', vinfo_' + value.name + '); // JPA')
                else:
                    if value.fullType == "char":
                        self.wc('    ArrayOfScalarsToStringJson<char>(out, indent, ' + str(value.pointerCount) + ', "' + value.fullType +
                                '", pstruct_in.' + value.name + '.GetPointer(), "' + value.name + '", ' + alength + ', vinfo_' + value.name + '); // JPB')
                    elif self.isUnion(structName):
                        self.wc('    ArrayOfScalarsToStringJson<' + value.fullType + '>(out, indent, ' + str(value.pointerCount) + ', "' + value.fullType +
                                    '", pstruct_in.decoded_value->' + value.name + ', "' + value.name + '", ' + alength + ', vinfo_' + value.name + '); // JPC')
                    elif self.isHandle(value.baseType):
                        self.wc('    ArrayToStringJson<HandlePointerDecoder<' + value.baseType + '>>(out, indent, ' + str(value.pointerCount) + ', "' + value.fullType +
                                '", &pstruct_in.' + value.name + ', "' + value.name + '", ' + alength + ', vinfo_' + value.name + '); // JPD')
                    else:
                        self.wc('    ArrayToStringJson<PointerDecoder<' + value.baseType + '>>(out, indent, ' + str(value.pointerCount) + ', "' + value.fullType +
                                '", &pstruct_in.' + value.name + ', "' + value.name + '", ' + alength + ', vinfo_' + value.name + '); // JPE')
        elif self.isStruct(value.baseType) and (value.baseType in self.structDict):
            # Struct that is not a pointer
            if self.isUnion(value.baseType):
                self.wc('    *out += "(Union):"; // RGT')
            if self.isUnion(structName):
                self.wc('    StructureToStringJson(out, reinterpret_cast<const Decoded_' + value.fullType + '&>(pstruct_in), indent+1, ' +
                                 ' base_addr + offsetof(' + structName + ', ' + value.name + ')); // RLN')
            else:
                self.wc('    StructureToStringJson(out, *' + pstruct_in + value.name + ', indent+1, ' +
                                 ' base_addr + offsetof(' + structName + ', ' + value.name + ')); // AZJ')
        else:
            if self.isHandle(value.baseType) or value.name == 'dpy':
                self.wc('    AddrToStringJson(out, ' + pstruct_in + value.name + '); // PAQ')
            elif self.isEnum(value.baseType):
                self.wc('    EnumToString' + value.baseType + 'Json(out, ' + pstruct + value.name + '); // VSA')
                self.wc('    *out += " (";')
                self.wc('    UnsignedDecimalToStringJson(out, ' + pstruct + value.name + ');')
                self.wc('    *out += ")";')
            elif self.isFlags(value.baseType) and (value.baseType in self.flagsNames) and value.baseType.replace('Flags', 'FlagBits') in self.enumNames:
                self.wc('    FlagsToStringJson(out, ' + pstruct + value.name + ', EnumToString' + value.baseType.replace('Flags', 'FlagBits') + 'Json); // URW')
            elif self.isFunctionPtr(value.baseType):
                self.wc('    AddrToStringJson(out, reinterpret_cast<uint64_t>(' + pstruct + value.name + ')); // WRX')
            elif value.baseType in ['float', 'double']:
                self.wc('    DoubleToStringJson(out, ' + pstruct + value.name + '); // PEZ')
            elif value.baseType in ['int', 'int32_t', 'int64_t', 'VkDeviceSize', 'VkBool32']:
                self.wc('    SignedDecimalToStringJson(out, ' + pstruct + value.name + '); //EQA')
            else:     # 'unsigned int', 'uint32_t', 'uint64_t', 'size_t', and all others
                self.wc('    UnsignedDecimalToStringJson(out, ' + pstruct + value.name + '); // UYW')
        #}  For vi % cmd
