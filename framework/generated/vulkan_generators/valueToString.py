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
    # This method is called from makeConsumerFuncBody in vulkan_ascii_consumer_body_generator.py to generate
    # code for to display function arguments, and from vulkan_ascii_consumer_struct_generator.py to generate
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
        self.wc('    IndentSpaces(out, indent);')
        self.wc('    *out += "' + (value.name + ': ').ljust(32) + '";')

        if not value.isPointer and value.isArray and value.baseType != 'char':
            # Generate code to print length of array
            self.wc('    *out += "' + value.baseType + '[";')
            if 'Count' in value.arrayLength:
                self.wc('    UnsignedDecimalToString(out, ' + pstruct + value.arrayLength + '); // DFW')
            else:
                self.wc('    *out += "' + value.arrayLength + '"; // TPK')
            self.wc('    *out += "] = ";')
            if not isFuncArg:
                self.wc('    AddrToString(out, base_addr + offsetof(' + structName + ', ' + value.name + ')); // IYY')
        else:
            self.wc('    *out += "' + value.fullType + ' = "; // TEQ')

        if value.fullType == 'const char*':
            # Treat pointer to char as a string
            if isFuncArg:
                self.wc('    StringToQuotedString(out, ' + pstruct + value.name + '.GetPointer()); // TGH')
            else:
                self.wc('    StringToQuotedString(out, ' + pstruct + value.name + '); // TGI')
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
                        self.wc('        AddrToString(out, ' + pstruct_in +  value.name + '.GetAddress()); // WUX')
                        self.wc('        if (kPrintShaderCode)')
                        self.wc('        {')
                        self.wc('            ScalarValueToStringStruct vinfo_' + value.name + ' = ' + ValueToString.setVinfo(self, value) + ';')
                        self.wc('            ArrayToString<' + value.fullType + '>(out, indent, ' + str(value.pointerCount) + ', "' + value.fullType +
                                '", reinterpret_cast<' + value.fullType + '>(' + pstruct_in +  value.name + '.GetPointer()), "' + value.name +
                                '", ' + aLength + ', vinfo_' + value.name + ');  // CCY')
                        self.wc('        }')
                    else:
                        if value.baseType in self.structDict:
                            if isFuncArg:
                                self.wc('        AddrToString(out, ' + value.name + '.GetAddress()); // WUS')
                            else:
                                self.wc('        AddrToString(out, ' + pstruct_in +  value.name + '->GetAddress()); // WUT')
                            if isFuncArg:
                                self.wc('        ArrayOfStructsToString<Decoded_' + value.baseType + '>(out, indent+1, ' + str(value.pointerCount) + ', "' + value.baseType +
                                      '", ' + value.name + '.GetMetaStructPointer(), "' + value.name +
                                      '", ' + aLength + ', ' + str(self.isUnion(value.baseType)).lower() + ', ' + value.name + '.GetAddress());  // CCO')
                            else:
                                self.wc('        ArrayOfStructsToString<Decoded_' + value.baseType + '>(out, indent+1, ' + str(value.pointerCount) + ', "' + value.baseType +
                                      '", ' + pstruct_in + value.name + '->GetMetaStructPointer(), "' + value.name +
                                      '", ' + aLength + ', ' + str(self.isUnion(value.baseType)).lower() + ', ' + pstruct_in + value.name + '->GetAddress());  // CCP')
                        else:
                            self.wc('        AddrToString(out, ' + pstruct_in + value.name + '.GetAddress()); // PAZ')
                            if self.isFlags(value.baseType):
                                self.wc('        ScalarValueToStringStruct vinfo_' + value.name + ' = ' + ValueToString.setVinfo(self, value) + ';')
                                self.wc('        ArrayToString<' + value.fullType + '>(out, indent, ' + str(value.pointerCount) + ', "' + value.fullType +
                                      '", reinterpret_cast<' + value.fullType + '>(' + pstruct_in + value.name + '.GetPointer()), "' + value.name +
                                      '", ' + aLength + ', ' +
                                      ' vinfo_' + value.name + ');  // CCR')
                            else:
                                self.wc('        ScalarValueToStringStruct vinfo_' + value.name + ' = ' + ValueToString.setVinfo(self, value) + ';')
                                self.wc('        ArrayToString<' + value.fullType + '>(out, indent, ' + str(value.pointerCount) +
                                                    ', "' + value.fullType + '", reinterpret_cast<' + value.fullType + '>(' + pstruct_in + value.name + '.GetPointer()), "' + value.name + '", ' +
                                                    aLength + ', ' +
                                                    ' vinfo_' + value.name + ');  // CXC')
                else:
                    # void* array:  print the address of the array
                    self.wc('        AddrToString(out, ' + pstruct_in + value.name + '.GetAddress()); // AHW')
            elif self.isStruct(value.baseType) and (value.baseType in self.structDict):
                if isFuncArg:
                    self.wc('        AddrToString(out, ' + value.name + '.GetAddress()); // JHI')
                else:
                    self.wc('        AddrToString(out, ' + pstruct_in + value.name + '->GetAddress()); // JHJ')
                if self.isUnion(value.baseType):
                    self.wc('        *out += " (Union)";')
                self.wc('        *out += ":";')
                if isFuncArg:
                    self.wc('        StructureToString(out, *' + value.name + '.GetMetaStructPointer(), indent+1,' +
                                         value.name + '.GetAddress()); // GLM')
                else:
                    self.wc('        StructureToString(out, *' + pstruct_in + value.name + '->GetMetaStructPointer(), indent+1,' +
                                         ' base_addr + offsetof(' + structName + ', ' + value.name + ')); // GLN')
            else:
                if (value.baseType == "wchar_t"):
                    self.wc('        AddrToString(out, ' + pstruct_in + value.name + '.GetAddress()); // PWQ')
                elif specialPtr or (value.name == "pView"):
                    if specialPtr or not isFuncArg:
                        self.wc('        AddrToString(out, ' + pstruct_in + value.name + '); // PWR')
                    else:
                        self.wc('        AddrToString(out, *(static_cast<uint64_t*>(' + value.name + '.GetPointer()))); // PWA')
                else:
                    self.wc('        ScalarValueToStringStruct vinfo_' + value.name + ' = ' + ValueToString.setVinfo(self, value) + ';')
                    if isFuncArg:
                        self.wc('        ScalarValueToString(out, ' + value.name + '.GetPointer(), vinfo_' + value.name +'); // PWS')
                    else:
                        if value.name == 'pNext':
                            self.wc('        uint64_t pnextLocal = ' + pstruct_in + value.name + '->GetAddress(); // PNX')
                            self.wc('        ScalarValueToString(out, &pnextLocal, vinfo_' + value.name +');')
                        else:
                            self.wc('        ScalarValueToString(out, ' + pstruct_in + value.name + '->GetPointer(), vinfo_' + value.name +'); // PWT')
            self.wc('    }')
        elif value.isArray:
            if 'Count' in value.arrayLength:
                alength = pstruct + value.arrayLength
            else:
                alength = value.arrayLength
            if (value.baseType in self.structDict):
                self.wc('    ArrayOfStructsToString<Decoded_' + value.baseType + '>(out, indent+1, ' + str(value.pointerCount) + ', "' + value.baseType +
                      '", ' + pstruct_in + value.name + '->GetMetaStructPointer(), "' + value.name +
                      '", ' + alength + ' , ' + str(self.isUnion(value.baseType)).lower() + ', ' + pstruct_in + value.name + '->GetAddress()); // EPB')
            else:
                self.wc('    ScalarValueToStringStruct vinfo_' + value.name + ' = ' + ValueToString.setVinfo(self, value) + ';')

                if isFuncArg:
                    self.wc('    ArrayToString<' + value.baseType + '*>(out, indent, ' + str(value.pointerCount) + ', "' + value.fullType +
                            '", ' + value.name + '.GetPointer(), "' + value.name + '", ' + alength + ', vinfo_' + value.name + '); // JPA')
                else:
                    self.wc('    ArrayToString<' + value.baseType + '*>(out, indent, ' + str(value.pointerCount) + ', "' + value.fullType +
                            '", const_cast<' + value.baseType + '*>(' + pstruct + value.name + '), "' + value.name + '", ' + alength + ', vinfo_' + value.name + '); // JPA')
        elif self.isStruct(value.baseType) and (value.baseType in self.structDict):
            # Struct that is not a pointer
            if self.isUnion(value.baseType):
                self.wc('    *out += "(Union):"; // RGT')
            if self.isUnion(structName):
                self.wc('    StructureToString(out, reinterpret_cast<const Decoded_' + value.fullType + '&>(pstruct_in), indent+1, ' +
                                 ' base_addr + offsetof(' + structName + ', ' + value.name + ')); // RLN')
            else:
                self.wc('    StructureToString(out, *' + pstruct_in + value.name + ', indent+1, ' +
                                 ' base_addr + offsetof(' + structName + ', ' + value.name + ')); // AZJ')
        else:
            if self.isHandle(value.baseType) or value.name == 'dpy':
                self.wc('    AddrToString(out, ' + pstruct_in + value.name + '); // PAQ')
            elif self.isEnum(value.baseType):
                self.wc('    EnumToString' + value.baseType + '(out, ' + pstruct + value.name + '); // VSA')
                self.wc('    *out += " (";')
                self.wc('    UnsignedDecimalToString(out, ' + pstruct + value.name + ');')
                self.wc('    *out += ")";')
            elif self.isFlags(value.baseType) and (value.baseType in self.flagsNames) and value.baseType.replace('Flags', 'FlagBits') in self.enumNames:
                self.wc('    FlagsToString(out, ' + pstruct + value.name + ', EnumToString' + value.baseType.replace('Flags', 'FlagBits') + '); // URW')
            elif self.isFunctionPtr(value.baseType):
                self.wc('    AddrToString(out, reinterpret_cast<uint64_t>(' + pstruct + value.name + ')); // WRX')
            elif value.baseType in ['float', 'double']:
                self.wc('    DoubleToString(out, ' + pstruct + value.name + '); // PEZ')
            elif value.baseType in ['int', 'int32_t', 'int64_t', 'VkDeviceSize', 'VkBool32']:
                self.wc('    SignedDecimalToString(out, ' + pstruct + value.name + '); //EQA')
            else:     # 'unsigned int', 'uint32_t', 'uint64_t', 'size_t', and all others
                self.wc('    UnsignedDecimalToString(out, ' + pstruct + value.name + '); // UYW')
        #}  For vi % cmd
