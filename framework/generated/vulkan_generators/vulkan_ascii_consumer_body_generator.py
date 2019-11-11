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
#
# TODO:
#   Traverse and print pNext structures

import os,re,sys
from base_generator import *

class VulkanAsciiConsumerBodyGeneratorOptions(BaseGeneratorOptions):
    """Options for generating a C++ class for Vulkan capture file to ASCII file generation"""
    def __init__(self,
                 blacklists = None,         # Path to JSON file listing apicalls and structs to ignore.
                 platformTypes = None,      # Path to JSON file listing platform (WIN32, X11, etc.) defined types.
                 filename = None,
                 directory = '.',
                 prefixText = '',
                 protectFile = False,
                 protectFeature = True):
        BaseGeneratorOptions.__init__(self, blacklists, platformTypes,
                                      filename, directory, prefixText,
                                      protectFile, protectFeature)

# VulkanAsciiConsumerBodyGenerator - subclass of BaseGenerator.
# Generates C++ member definitions for the VulkanAsciiConsumer class responsible for
# generating a textfile containing decoded Vulkan API call parameter data.
class VulkanAsciiConsumerBodyGenerator(BaseGenerator):
    """Generate a C++ class for Vulkan capture file to ASCII file generation"""
    def __init__(self,
                 errFile = sys.stderr,
                 warnFile = sys.stderr,
                 diagFile = sys.stdout):
        self.structDict = dict()               # Dictionary of all structures, accumulated across all features
        self.featureEnumList = dict()          # Dictionary of enums in the current feature
        self.featureEnumListNoAliases = set()  # List of enums that are not aliases
        self.featureEnumListAliases = dict()   # Dictionary of enumns that are aliases
        self.featureFlagsNames = set()         # List of bit flags
        self.unionList = set()                 # List of unions. This is a subset of structDict.
        BaseGenerator.__init__(self,
                               processCmds=True, processStructs=True, featureBreak=True,
                               errFile=errFile, warnFile=warnFile, diagFile=diagFile)

    # Method that simply calls write(), but caller can omit the file=self.outFile arg.
    # The name is short ("wc") because we call it so many times.
    def wc(self, s):
        write(s, file=self.outFile)

    def isUnion(self, name):
        if name in self.unionList:
            return True
        return False

    # Method override
    def beginFile(self, genOpts):
        BaseGenerator.beginFile(self, genOpts)

        self.wc('#include <inttypes.h>')
        self.wc('#include <string>')
        self.wc('#include <functional>')
        self.newline()
        self.wc('#include "generated/generated_vulkan_ascii_consumer.h"')
        self.newline()
        self.wc('#include "decode/vulkan_enum_util.h"')
        self.wc('#include "util/defines.h"')
        self.newline()
        self.wc('#include "vulkan/vulkan.h"')
        self.wc('#include "format/platform_types.h"')
        self.newline()
        self.wc('extern int  indentSize;')
        self.wc('extern bool noAddr;')
        self.wc('extern bool printShaderCode;')
        self.newline()
        self.wc('GFXRECON_BEGIN_NAMESPACE(gfxrecon)')
        self.wc('GFXRECON_BEGIN_NAMESPACE(decode)')
        self.newline()

        # Type declaration: Function pointer to enumToString_*
        self.wc('typedef std::function<void(std::string *, uint32_t)> EnumToStringFunc;')
        self.newline()

        # Generate functions to convert numbers to strings
        self.wc('void signedDecimalToString(std::string* rString, int64_t n)')
        self.wc('{')
        self.wc('    char decstring[30];')
        self.wc('    assert(rString != nullptr);')
        self.wc('    snprintf(decstring, sizeof(decstring), "%" PRId64, n);')
        self.wc('    snprintf(decstring, sizeof(decstring), "%" PRId64, n);')
        self.wc('    *rString += decstring;')
        self.wc('}')
        self.newline()
        self.wc('void unsignedDecimalToString(std::string* rString, uint64_t n)')
        self.wc('{')
        self.wc('    char decstring[30];')
        self.wc('    assert(rString != nullptr);')
        self.wc('    snprintf(decstring, sizeof(decstring), "%" PRIu64, n);')
        self.wc('    *rString += decstring;')
        self.wc('}')
        self.newline()
        self.wc('void doubleToString(std::string* rString, double d)')
        self.wc('{')
        self.wc('    char floatstring[30];')
        self.wc('    snprintf(floatstring, sizeof(floatstring), "%g", d);')
        self.wc('    *rString += floatstring;')
        self.wc('}')
        self.newline()

        # Generate function to convert an address to a hex number or address
        self.wc('void addrToString(std::string* rString, uint64_t v)')
        self.wc('{')
        self.wc('    assert(rString != nullptr);')
        self.wc('    if (noAddr)')
        self.wc('    {')
        self.wc('        *rString += "address";')
        self.wc('    }')
        self.wc('    else')
        self.wc('    {')
        self.wc('        char s[30];')
        self.wc('        snprintf(s, sizeof(s), "0x%" PRIx64, v);')
        self.wc('        *rString += s;')
        self.wc('    }')
        self.wc('}')
        self.newline()

        # Generate function to convert indent level to a string
        self.wc('// Utility for doing indentation')
        self.wc('void indentSpaces(std::string* rString, int indent)')
        self.wc('{')
        self.wc('    assert(rString != nullptr);')
        self.wc('    rString->insert(rString->end(), indent * indentSize, \' \');')
        self.wc('}')
        self.newline()

        # Generate function to convert bit value to a string
        self.wc('void flagsToString(std::string* rString, VkFlags flags, EnumToStringFunc enumToStringFunc)')
        self.wc('{')
        self.wc('    VkFlags m = 1;')
        self.wc('    assert(rString != nullptr);')
        self.wc('    unsignedDecimalToString(rString, flags);')
        self.wc('    if (flags != 0)')
        self.wc('    {')
        self.wc('        *rString += " (";')
        self.wc('        while (flags)')
        self.wc('        {')
        self.wc('            if (m & flags)')
        self.wc('            {')
        self.wc('                //void (*fp)(std::string*, VkFlags);')
        self.wc('                //*((uint64_t*)&fp) = (uint64_t)funcPtr;')
        self.wc('                //fp(rString, (m & flags));')
        self.wc('                enumToStringFunc(rString, (m & flags));')
        self.wc('                flags = flags & ~m;')
        self.wc('                if (flags & ~m)')
        self.wc('                {')
        self.wc('                    *rString += " | ";')
        self.wc('                }')
        self.wc('            }')
        self.wc('            else')
        self.wc('            {')
        self.wc('                flags &= ~m;')
        self.wc('            }')
        self.wc('            m <<= 1;')
        self.wc('        }')
        self.wc('        *rString += ")";')
        self.wc('    }')
        self.wc('    return;')
        self.wc('}')
        self.newline()


        # Structure for passing info about args to valueToString
        self.wc('typedef struct ValueToStringStruct {')
        self.wc('   bool isHandleAddr;')
        self.wc('   bool isEnum;')
        self.wc('   bool isFlags;')
        self.wc('   EnumToStringFunc enumToStringFunc;')
        self.wc('} ValueToStringStruct;')
        self.newline()

        # Generate function to convert a scaler value to a string. The input is
        # a pointer to the scalar.
        # We use C casts in this func because but some values of type T
        # for which this func is generated can't seem to be able to be converted to scalars
        # using C++ casts.
        self.newline()
        self.wc('template <typename T>')
        self.wc('void valueToString(std::string* rString, T value, const ValueToStringStruct &vinfo)')
        self.wc('{')
        self.wc('    assert(rString != nullptr);')
        self.wc('    assert((vinfo.isHandleAddr + vinfo.isEnum  + vinfo.isFlags) <= 1);') # At most one of the three flags in vinfo may be set
        self.wc('    assert(vinfo.isEnum ? vinfo.enumToStringFunc != nullptr : true);')   # if isEnum is set, enumToStringFunc must be specified
        self.wc('    assert(vinfo.isFlags ? vinfo.enumToStringFunc != nullptr : true);')  # if isFlags is set, enumToStringFunc must be specified
        self.wc('    if (vinfo.isHandleAddr)')
        self.wc('    {')
        self.wc('        uint64_t v = *((uint64_t*)value);')
        self.wc('        addrToString(rString, v);')
        self.wc('    }')
        self.wc('    else if (vinfo.isFlags)')
        self.wc('    {')
        self.wc('        uint32_t v = *((uint32_t*)value);')
        self.wc('        flagsToString(rString, v, vinfo.enumToStringFunc);')
        self.wc('    }')
        self.wc('    else if (vinfo.isEnum)')
        self.wc('    {')
        self.wc('        uint32_t v = *((uint32_t*)value);')
        self.wc('        vinfo.enumToStringFunc(rString, v);')
        self.wc('    }')
        self.wc('    else if (std::is_same<T, float*>::value || std::is_same<T, const float*>::value)')
        self.wc('    {')
        self.wc('        double v = *((float*)value);')
        self.wc('        doubleToString(rString, v);')
        self.wc('    }')
        self.wc('    else if (std::is_same<T, double*>::value || std::is_same<T, const double*>::value)')
        self.wc('    {')
        self.wc('        doubleToString(rString, *((double*)value));')
        self.wc('    }')
        self.wc('    else if (std::is_same<T, int32_t*>::value || std::is_same<T, const int32_t*>::value)')
        self.wc('    {')
        self.wc('        int32_t v = *((int32_t*)value);')
        self.wc('        signedDecimalToString(rString, v);')
        self.wc('    }')
        self.wc('    else if (std::is_same<T, uint32_t*>::value || std::is_same<T, const uint32_t*>::value)')
        self.wc('    {')
        self.wc('        uint32_t v = *((uint32_t*)value);')
        self.wc('        unsignedDecimalToString(rString, v);')
        self.wc('    }')
        self.wc('    else if (std::is_same<T, int64_t*>::value || std::is_same<T, const int64_t*>::value)')
        self.wc('    {')
        self.wc('        int64_t v = *((int64_t*)value);')
        self.wc('        signedDecimalToString(rString, v);')
        self.wc('    }')
        self.wc('    else if (std::is_same<T, unsigned int*>::value || std::is_same<T, const unsigned int*>::value)')
        self.wc('    {')
        self.wc('        unsigned int v = *((unsigned int*)value);')
        self.wc('        unsignedDecimalToString(rString, v);')
        self.wc('    }')
        self.wc('    else if (std::is_same<T, unsigned char*>::value || std::is_same<T, const unsigned char*>::value)')
        self.wc('    {')
        self.wc('        unsigned char v = *((unsigned char*)value);')
        self.wc('        unsignedDecimalToString(rString, v);')
        self.wc('    }')
        self.wc('    else')
        self.wc('    {')      #  All other cases are treated as uint64_t
        self.wc('        uint64_t v = *((uint64_t*)value);')
        self.wc('        unsignedDecimalToString(rString, v);')
        self.wc('    }')
        self.wc('}')

        # Generate function to convert a C string to a quoted string
        self.wc('void stringToQuotedString(std::string* rString, const char* s)')
        self.wc('{')
        self.wc('    assert(rString != nullptr);')
        self.wc('    if (s != nullptr)')
        self.wc('    {')
        self.wc('        *rString += "\\\"";')
        self.wc('        *rString += s;')
        self.wc('        *rString += "\\\"";')
        self.wc('    }')
        self.wc('    else')
        self.wc('    {')
        self.wc('        *rString += "NULL";')
        self.wc('    }')
        self.wc('}')
        self.newline()

        # Generate function to pad a string to a length by appending spaces
        self.wc('void padString(std::string* s, size_t len)')
        self.wc('{')
        self.wc('    assert(s != nullptr);')
        self.wc('    if (s->length() < len)')
        self.wc('    {')
        self.wc('        s->insert(s->end(), len - s->length(), \' \');')
        self.wc('    }')
        self.wc('}')
        self.newline()

        # Generate prototype for structureToString function
        self.wc('template <typename T>')
        self.wc('void structureToString(std::string* rString, const T& pStruct, int indent, uint64_t baseAddr);')
        self.newline()

        # Generate function to process an array
        self.wc('template <typename T>')
        self.wc('void arrayToString(std::string*              rString,')
        self.wc('                   int                       indent,')
        self.wc('                   const int                 pointerCount,')
        self.wc('                   const char*               fullTypeName,')
        self.wc('                   T                         array,')
        self.wc('                   const char*               arrayName,')
        self.wc('                   const size_t              arrayLength,')
        self.wc('                   const ValueToStringStruct &vinfo)')
        self.wc('{')
        self.wc('    assert(rString != nullptr);')
        self.wc('    assert((vinfo.isHandleAddr + vinfo.isEnum  + vinfo.isFlags) <= 1);') # At most one of the three flags in vinfo may be set
        self.wc('    assert(vinfo.isEnum ? vinfo.enumToStringFunc != nullptr : true);')   # if isEnum is set, enumToStringFunc must be specified
        self.wc('    assert(vinfo.isFlags ? vinfo.enumToStringFunc != nullptr : true);')  # if isFlags is set, enumToStringFunc must be specified
        self.wc('    if (arrayLength == 0 || array == nullptr)')
        self.wc('    {')
        self.wc('        return;')
        self.wc('    }')
        self.wc('    if (pointerCount <= 1 &&')
        self.wc('        (std::is_same<T, const char>::value || std::is_same<T, const char>::value || std::is_same<T, char>::value ||')
        self.wc('         std::is_same<T, const char*>::value || std::is_same<T, char*>::value))')
        self.wc('    {')
        self.wc('        stringToQuotedString(rString, *((const char**)&array));')
        self.wc('    }')
        self.wc('    else')
        self.wc('    {')
        self.wc('        std::string fullTypeNameStr = fullTypeName;')
        self.wc('        if (*fullTypeNameStr.rbegin() == \'*\')')
        self.wc('        {')
        self.wc('            // Remove last * in type name')
        self.wc('            fullTypeNameStr.pop_back();')
        self.wc('        }')
        self.wc('        *rString += "\\n";')
        self.wc('        for (uint64_t j = 0; j < arrayLength; j++)')
        self.wc('        {')
        self.wc('            indentSpaces(rString, indent + 1);')
        self.wc('            std::string nameIdx;')
        self.wc('            nameIdx += arrayName;')
        self.wc('            nameIdx += "[";')
        self.wc('            unsignedDecimalToString(&nameIdx, j);')
        self.wc('            nameIdx += "]: ";')
        self.wc('            padString(&nameIdx, 32);');
        self.wc('            *rString += nameIdx;')
        self.wc('            *rString += fullTypeNameStr;')
        self.wc('            *rString += " = ";')
        self.wc('            if (pointerCount > 1)')
        self.wc('            {')
        self.wc('                if (pointerCount == 2 && strstr(fullTypeName, "char"))')
        self.wc('                {')
        self.wc('                    stringToQuotedString(rString, ((const char**)array)[j]);')
        self.wc('                }')
        self.wc('                else')
        self.wc('                {')
        self.wc('                    fprintf(stderr, "ERROR: arrayToString arrays of non-strings not implemented\\n");')
        self.wc('                }')
        self.wc('            }')
        self.wc('            else')
        self.wc('            {')
        self.wc('                valueToString<T>(rString, &array[j], vinfo);')
        self.wc('            }')
        self.wc('            if (j < arrayLength - 1)')
        self.wc('            {')
        self.wc('                *rString += "\\n";')
        self.wc('            }')
        self.wc('        }')
        self.wc('    }')
        self.wc('}')
        self.newline()

        # Generate function to process an array of structures
        self.wc('template <typename T>')
        self.wc('void arrayOfStructsToString(std::string* rString,')
        self.wc('                            int          indent,')
        self.wc('                            const int    pointerCount,')
        self.wc('                            const char*  baseTypeName,')
        self.wc('                            T*           array,')
        self.wc('                            const char*  arrayName,')
        self.wc('                            const size_t arrayLength,')
        self.wc('                            bool         isUnion,')
        self.wc('                            uint64_t     baseAddr)')
        self.wc('{')
        self.wc('    assert(rString != nullptr);')
        self.wc('    if (arrayLength == 0 || array == nullptr)')
        self.wc('    {')
        self.wc('        return;')
        self.wc('    }')
        self.wc('    *rString += "\\n";')
        self.wc('    for (uint64_t j = 0; j < arrayLength; j++)')
        self.wc('    {')
        self.wc('        indentSpaces(rString, indent);')
        self.wc('        std::string nameIdx;')
        self.wc('        nameIdx += arrayName;')
        self.wc('        nameIdx += "[";')
        self.wc('        unsignedDecimalToString(&nameIdx, j);')
        self.wc('        nameIdx += "]: ";')
        self.wc('        padString(&nameIdx, 32);');
        self.wc('        *rString += nameIdx;')
        self.wc('        *rString += baseTypeName;')
        self.wc('        *rString += " = ";')
        self.wc('        addrToString(rString, baseAddr + j * sizeof(T)); // UEW')
        self.wc('        if (isUnion)')
        self.wc('        {')
        self.wc('            *rString += " (Union)";')
        self.wc('        }')
        self.wc('        *rString += ":";')
        self.wc('        if (pointerCount > 1)')
        self.wc('        {')
        self.wc('            fprintf(stderr, "ERROR: arrayOfStructsToString cannot handle arrays of arrays\\n");')
        self.wc('        }')
        self.wc('        else')
        self.wc('        {')
        self.wc('            structureToString<T>(rString, array[j], indent+1, baseAddr + j * sizeof(T)); // YQS')
        self.wc('        }')
        self.wc('        if (j < arrayLength - 1)')
        self.wc('        {')
        self.wc('            *rString += "\\n"; // AZC')
        self.wc('        }')
        self.wc('    }')
        self.wc('}')
        self.newline()

    # Method override
    def endFile(self):
        self.wc('GFXRECON_END_NAMESPACE(decode)')
        self.wc('GFXRECON_END_NAMESPACE(gfxrecon)')

        # Finish processing in superclass
        BaseGenerator.endFile(self)

    #
    # Indicates that the current feature has C++ code to generate.
    def needFeatureGeneration(self):
        if self.featureCmdParams:
            return True
        return False

    #
    # Override genGroup in BaseGenerator
    def genGroup(self, groupinfo, groupName, alias):
        BaseGenerator.genGroup(self, groupinfo, groupName, alias)
        if alias:
            self.featureEnumListAliases[groupName] = alias
        else:
            self.featureEnumListNoAliases.add(groupName)
            self.enumNames.add(groupName)
            self.featureEnumList[groupName] = groupinfo.elem.findall('enum')

    #
    # Override genType in BaseGenerator
    def genType(self, typeinfo, name, alias):
        BaseGenerator.genType(self, typeinfo, name, alias)
        typeElem = typeinfo.elem
        category = typeElem.get('category')
        if category == 'union':
            self.genStruct(typeinfo, name, alias)
            self.unionList.add(name)
        if ((category == 'struct' or category == 'union') and name !="VkBaseOutStructure" and name != "VkBaseInStructure"):
            if (not alias):
                self.structDict[name] = self.makeValueInfo(typeinfo.elem.findall('.//member'))
        elif (category == 'bitmask'):
            self.featureFlagsNames.add(name)

    # Return an initializer for vinfo
    def setVinfo(self, member):       # TODO Move this elsewhere?
        rval = '{' + str(self.isHandle(member.baseType)).lower() + ', '
        rval += str(self.isEnum(member.baseType)).lower() + ', '
        rval += str(self.isFlags(member.baseType)).lower() + ', '
        if self.isEnum(member.baseType) or self.isFlags(member.baseType):
            rval +='enumToString_' + member.baseType.replace('Flags', 'FlagBits') + '}'
        else:
            rval +='nullptr}';
        return rval

    #
    # Performs C++ code generation for the feature.
    def generateFeature(self):

        # Generate functions to convert enum values to strings
        for enumName in self.featureEnumListNoAliases:
            if enumName in self.featureEnumList:
                self.wc('\nvoid enumToString_' + enumName + '(std::string* rString, uint32_t enumValueInt32)')
                self.wc('{')
                self.wc('    ' + enumName + ' enumValue = static_cast<' + enumName + '>(enumValueInt32);')
                self.wc('    assert(rString != nullptr);')
                # Use set e to eliminate duplicates and make sure we don't use aliases
                e = set()
                for enumValue in self.featureEnumList[enumName]:
                    enumString=str(enumValue.attrib.get('name'));
                    isAlias = str(enumValue.attrib.get('alias'))
                    supported = str(enumValue.attrib.get('supported'))
                    if isAlias == 'None' and supported != 'disabled':
                        e.add(enumString);
                if len(e) > 0:
                    self.wc('    switch (enumValue)')
                    self.wc('    {')
                    # Add a case for each enum
                    for enumValue in e:
                        self.wc('        case ' + enumValue + ':')
                        self.wc('            *rString += std::string("' + enumValue + '");')
                        self.wc('            return;')
                    self.wc('        default:')
                    self.wc('            *rString += std::string("UNKNOWN");')
                    self.wc('            return;')
                    self.wc('    };')
                else:
                    self.wc('    *rString += std::string("UNKNOWN");')
            self.wc('};')
            self.newline()

        # Generate functions to convert aliased enum types to string
        for enumName in self.featureEnumListAliases:
            self.wc('\nvoid enumToString_' + enumName + '(std::string* rString, ' + enumName + ' enumValue)')
            self.wc('{')
            self.wc('    assert(rString != nullptr);')
            self.wc('    enumToString_' + self.featureEnumListAliases[enumName] + '(rString, enumValue);')
            self.wc('}')
            self.newline()

        # Reset feature enums and flags
        self.featureEnumList = dict()
        self.featureEnumListNoAliases = set()
        self.featureEnumListAliases = dict()
        self.featureFlagsNames = set()

        # Generate forward references to functions to print structures
        for structName in self.featureStructMembers:
            if structName != 'VkBaseInStructure' and structName != 'VkBaseOutStructure':
                self.wc('template <> void structureToString<Decoded_' + structName + '>(std::string* rString, const Decoded_' + structName + ' &pStructIn, int indent, uint64_t baseAddr); // ARX')
        self.newline()

        # Generate functions to print structures
        for structName in self.featureStructMembers:
            if structName == 'VkBaseInStructure' or structName == 'VkBaseOutStructure':
                continue
            self.wc('template <>')
            self.wc('void structureToString<Decoded_' + structName + '>(std::string* rString, const Decoded_' + structName + ' &pStructIn, int indent, uint64_t baseAddr) // GAA')

            self.wc('{')
            self.wc('    const ' + structName + ' *pStruct = (const ' + structName + ' *)pStructIn.decoded_value; // BTB')
            self.wc('    assert(rString != nullptr);')
            self.wc('    if (pStruct == nullptr)')
            self.wc('    {')
            self.wc('        return;')
            self.wc('    }')
            self.wc('    *rString += "\\n"; // UUR');
            sMembersList = list(self.featureStructMembers[structName])
            for member in sMembersList:
                self.newline()
                self.wc('    // ' + member.fullType + ' ' + member.name + ' // SMB')
                self.wc('    indentSpaces(rString, indent);')
                self.wc('    *rString += "' + (member.name + ': ').ljust(32) + '";')

                if not member.isPointer and member.isArray and member.baseType != 'char':
                    # Generate code to print length of array
                    self.wc('    *rString += "' + member.baseType + '[";')
                    if 'Count' in member.arrayLength:
                        self.wc('    unsignedDecimalToString(rString, pStruct->' + member.arrayLength + ');')
                    else:
                        self.wc('    *rString += "' + member.arrayLength + '";')
                    self.wc('    *rString += "] = ";')
                    self.wc('    addrToString(rString, baseAddr + offsetof(' + structName + ', ' + member.name + ')); // IYY')
                else:
                    self.wc('    *rString += "' + member.fullType + ' = "; // TEQ')

                if member.fullType == 'const char*':
                    # Treat pointer to char as a string
                    self.wc('    stringToQuotedString(rString, pStruct->' + member.name + '); // TGH')
                elif member.isPointer:
                    self.wc('    if (pStruct->' + member.name + ' == nullptr) // WWW')
                    self.wc('    {')
                    self.wc('        *rString += "NULL";')
                    self.wc('    }')
                    self.wc('    else')
                    self.wc('    {')
                    if member.isArray:
                        if member.baseType != 'void':
                            if 'latexmath' in member.arrayLength:
                                aLength = 'pStruct->' + self.parseLateXMath(member.arrayLength)
                            elif 'Count' in member.arrayLength or 'Size' in member.arrayLength:
                                aLength = 'pStruct->' + member.arrayLength
                            else:
                                aLength = member.arrayLength
                            if member.name == 'pCode':
                                aLength = aLength + ' / 4';    # codeSize in struct VkShaderModuleCreateInfo is not the number of elements, but in bytes
                                self.wc('        addrToString(rString, pStructIn.' + member.name + '.GetAddress()); // WUX')
                                aLength = aLength + ' / 4';    # codeSize in struct VkShaderModuleCreateInfo is not the number of elements, but size in bytes
                                self.wc('        if (printShaderCode)')
                                self.wc('        {')
                                self.wc('            ValueToStringStruct vinfo_' + member.name + ' = ' + self.setVinfo(member) + ';')
                                self.wc('            arrayToString<' + member.fullType + '>(rString, indent, ' + str(member.pointerCount) + ', "' + member.fullType +
                                        '", reinterpret_cast<' + member.fullType + '>(pStructIn.' + member.name + '.GetPointer()), "' + member.name +
                                        '", ' + aLength + ', vinfo_' + member.name + ');  // CCY')
                                self.wc('        }')
                            else:
                                if member.baseType in self.structDict:
                                    self.wc('        addrToString(rString, pStructIn.' + member.name + '->GetAddress()); // WUS')
                                    self.wc('        arrayOfStructsToString<Decoded_' + member.baseType + '>(rString, indent+1, ' + str(member.pointerCount) + ', "' + member.baseType +
                                          '", pStructIn.' + member.name + '->GetMetaStructPointer(), "' + member.name +
                                          '", ' + aLength + ', ' + str(self.isUnion(member.baseType)).lower() + ', pStructIn.' + member.name + '->GetAddress());  // CCP')
                                else:
                                    self.wc('        addrToString(rString, pStructIn.' + member.name + '.GetAddress()); // PAZ')
                                    if self.isFlags(member.baseType):
                                        self.wc('        ValueToStringStruct vinfo_' + member.name + ' = ' + self.setVinfo(member) + ';')
                                        self.wc('        arrayToString<' + member.fullType + '>(rString, indent, ' + str(member.pointerCount) + ', "' + member.fullType +
                                              '", reinterpret_cast<' + member.fullType + '>(pStructIn.' + member.name + '.GetPointer()), "' + member.name +
                                              '", ' + aLength + ', ' +
                                              ' vinfo_' + member.name + ');  // CCR')
                                    else:
                                        self.wc('        ValueToStringStruct vinfo_' + member.name + ' = ' + self.setVinfo(member) + ';')
                                        self.wc('        arrayToString<' + member.fullType + '>(rString, indent, ' + str(member.pointerCount) +
                                                ', "' + member.fullType + '", reinterpret_cast<' + member.fullType + '>(pStructIn.' + member.name + '.GetPointer()), "' + member.name + '", ' +
                                                aLength + ', ' +
                                                ' vinfo_' + member.name + ');  // CCQ')
                        else:
                            # void* array:  print the address of the array
                            self.wc('        addrToString(rString, pStructIn.' + member.name + '.GetAddress()); // AHW')
                    elif self.isStruct(member.baseType) and (member.baseType in self.structDict):
                        self.wc('        addrToString(rString, pStructIn.' + member.name + '->GetAddress()); // JHI')
                        if self.isUnion(member.baseType):
                            self.wc('        *rString += " (Union)";')
                        self.wc('        structureToString<Decoded_' + member.baseType + '>(rString, *pStructIn.' + member.name + '->GetMetaStructPointer(), indent+1,' +
                                             ' baseAddr + offsetof(' + structName + ', ' + member.name + ')); // GLM')
                    else:
                        if (member.name == "name"):
                            self.wc('        addrToString(rString, pStructIn.' + member.name + '.GetAddress()); // PWQ')
                        elif (member.name == "pUserData" or member.name == "handle" or member.name == "hwnd" or member.name == "surface" or member.name == "connection" or member.name == "hwnd" or
                              member.name == "hinstance" or member.name == "pHostPointer" or member.name == "pView" or member.name == "window" or member.name == "display" or member.name == "dpy" or
                              member.name == "pCheckpointMarker" or member.name == "buffer" or member.name == "hmonitor" or member.name == "pLayer"):
                            self.wc('        addrToString(rString, pStructIn.' + member.name + '); // PWR')
                        else:
                            self.wc('        addrToString(rString, pStructIn.' + member.name + '->GetAddress()); // PWS')
                    self.wc('    }')
                elif member.isArray:
                    if 'Count' in member.arrayLength:
                        alength = 'pStruct->' + member.arrayLength
                    else:
                        alength = member.arrayLength
                    if (member.baseType in self.structDict):
                        self.wc('    arrayOfStructsToString<Decoded_' + member.baseType + '>(rString, indent+1, ' + str(member.pointerCount) + ', "' + member.baseType +
                              '", pStructIn.' + member.name + '->GetMetaStructPointer(), "' + member.name +
                              '", ' + alength + ' , ' + str(self.isUnion(member.baseType)).lower() + ', pStructIn.' + member.name + '->GetAddress()); // EPB')
                    else:
                        self.wc('    ValueToStringStruct vinfo_' + member.name + ' = ' + self.setVinfo(member) + ';')
                        self.wc('    arrayToString<' + member.baseType + '*>(rString, indent, ' + str(member.pointerCount) + ', "' + member.fullType +
                                '", const_cast<' + member.baseType + '*>(pStruct->' + member.name + '), "' + member.name + '", ' + alength + ', vinfo_' + member.name + '); // JPA')
                elif self.isStruct(member.baseType) and (member.baseType in self.structDict):
                    # Struct that is not a pointer
                    if self.isUnion(member.baseType):
                        self.wc('    *rString += "(Union):"; // RGT')
                    if self.isUnion(structName):
                        self.wc('    structureToString<Decoded_' + member.baseType + '>(rString, (Decoded_' + member.baseType + '&)pStructIn, indent+1, ' +
                                         ' baseAddr + offsetof(' + structName + ', ' + member.name + ')); // RLN')
                    else:
                        self.wc('    structureToString<Decoded_' + member.baseType + '>(rString, *pStructIn.' + member.name + ', indent+1, ' +
                                         ' baseAddr + offsetof(' + structName + ', ' + member.name + ')); // AZJ')
                else:
                    if self.isHandle(member.baseType):
                        self.wc('    addrToString(rString, pStructIn.' + member.name + '); // PAQ  ')
                    elif self.isEnum(member.baseType):
                        self.wc('    enumToString_' + member.baseType + '(rString, pStruct->' + member.name + ');')
                        self.wc('    *rString += " (";')
                        self.wc('    unsignedDecimalToString(rString, pStruct->' + member.name + ');')
                        self.wc('    *rString += ")";')
                    elif self.isFlags(member.baseType) and (member.baseType in self.flagsNames) and member.baseType.replace('Flags', 'FlagBits') in self.enumNames:
                        self.wc('    flagsToString(rString, pStruct->' + member.name + ', enumToString_' + member.baseType.replace('Flags', 'FlagBits') + '); // URW')
                    elif self.isFunctionPtr(member.baseType):
                        self.wc('    addrToString(rString, reinterpret_cast<uint64_t>(pStruct->' + member.name + ')); // WRX')
                    elif member.baseType in ['float', 'double']:
                        self.wc('    doubleToString(rString, pStruct->' + member.name + ');')
                    elif member.baseType in ['int', 'int32_t', 'int64_t', 'VkDeviceSize', 'VkBool32']:
                        self.wc('    signedDecimalToString(rString, pStruct->' + member.name + ');')
                    else:     # 'unsigned int', 'uint32_t', 'uint64_t', 'size_t', and all others
                        self.wc('    unsignedDecimalToString(rString, pStruct->' + member.name + ');')
                if member != sMembersList[-1]:      # Add a newline between members, but not after the last member
                    self.wc('    *rString += "\\n"; // GDS')
            self.wc('}')
            self.newline()

        # Generate functions to print cmds (api entry points)
        for cmd in self.getFilteredCmdNames():
            info = self.featureCmdParams[cmd]
            returnType = info[0]
            values = info[2]
            self.wc(self.makeConsumerFuncDecl(returnType, 'VulkanAsciiConsumer::Process_' + cmd, values))
            self.makeConsumerFuncBody(returnType, cmd, values)

    #
    # Return VulkanAsciiConsumer class member function definition.
    def makeConsumerFuncBody(self, returnType, name, values):

        # Begin function
        self.wc('{')
        self.wc('    std::string indentString;')
        self.wc('    std::string tmpString;')
        self.wc('    indentSpaces(&indentString, 1);')  # Initial indent for func args is 1
        needcomma=0
        args = ''
        for value in values:
            if needcomma:
                args += ', '
            args += value.name
            needcomma = 1
        self.wc('    fprintf(GetFile(), "' + name + '(' + args  + ')");')
        if returnType == 'void':
            self.wc('    fprintf(GetFile(), " returns void:\\n");')
        else:
            # The parameter name assigned to the return value by the code generator is 'returnValue'
            if self.isEnum(returnType):
                self.wc('    tmpString = "";')
                self.wc('    enumToString_VkResult(&tmpString, returnValue);')
                self.wc('    fprintf(GetFile(), " returns ' + returnType + ' %s (%" PRId32 "):\\n", tmpString.c_str(), returnValue);')
            elif self.isFunctionPtr(value.baseType):
                # This is encoded as a 64-bit integer containing the address of the function pointer
                self.wc('    fprintf(GetFile(), " returns 0x%" PRIx64 ":\\n", static_cast<uint64_t>(returnValue));\n')
            else:
                self.wc('    fprintf(GetFile(), " returns {}:\\n", returnValue);'.format(self.getFormatString(returnType)))

        for value in values:
            self.newline()
            self.wc('    // ' + value.fullType + ' ' + value.name + ' // ARG')
            self.wcParameterExpr(value)
            self.wc('    fprintf(GetFile(), "\\n"); // YWN')

        # We add the final new line using tmpString to make sure tmpString is referenced in each func
        self.newline()
        self.wc('    tmpString = "\\n";   // HDS')
        self.wc('    fprintf(GetFile(), "%s", tmpString.c_str());')
        self.wc('}')


    def wcParameterExpr(self, value):

        if not value.isPointer:

            if value.isArray:
                self.wc('    tmpString = "";')
                self.wc('    ValueToStringStruct vinfo_' + value.name + ' = ' + self.setVinfo(value) + ';')
                self.wc('    arrayToString<' + value.fullType + '*>(&tmpString, 2, ' + str(value.pointerCount) + ', "' + value.fullType + '", ' + value.name + '.GetPointer(), "' + value.name + '", ' + str(value.arrayLength) + ', vinfo_' + value.name + '); // SFP')
                self.wc('    fprintf(GetFile(), "%s", tmpString.c_str());')
            elif self.isHandle(value.baseType):
                # This is a 64-bit integer ID
                self.wc('    fprintf(GetFile(), "%s%-32s' + value.fullType + ' = ", indentString.c_str(), "' + value.name + ':"); // TRP')
                self.wc('    tmpString = "";')
                self.wc('    addrToString(&tmpString, ' + value.name + ');')
                self.wc('    fprintf(GetFile(), "%s", tmpString.c_str()); // TRQ')
            elif self.isEnum(value.baseType):
                self.wc('    tmpString = "";')
                self.wc('    enumToString_' + value.baseType + '(&tmpString,' + value.name + '); // EPW')
                self.wc('    fprintf(GetFile(), "%s%-32s' + value.baseType + ' = %s", indentString.c_str(), "' + value.name + ':", tmpString.c_str()); // KHW')
            elif self.isFlags(value.baseType):
                bitType = value.baseType.replace('Flags', 'FlagBits')
                if bitType in self.enumNames:
                    self.wc('    tmpString = "";')
                    self.wc('    flagsToString(&tmpString, ' + value.name + ', enumToString_' + bitType + ');')
                    self.wc('    fprintf(GetFile(), "%s%-32s' + value.fullType + ' = %s", indentString.c_str(), "' + value.name + ':", tmpString.c_str()); // XZA')
                else:
                    self.wc('    fprintf(GetFile(), "%s%-32s' + value.fullType + ' = %d", indentString.c_str(), "' + value.name + ':", ' + value.name + '); // ZSQ')
            else:
                # Simple scalar
                self.wc('    fprintf(GetFile(), "%s%-32s' + value.fullType + ' = ' + self.getFormatString(value.baseType) + '", indentString.c_str(), "' + value.name + ':", '  + value.name + '); // YZA')

        elif value.isPointer:
            if self.isFlags(value.baseType):
                bitType = value.baseType.replace('Flags', 'FlagBits')
                if bitType in self.enumNames:
                    self.wc('    tmpString = "";')
                    self.wc('    flagsToString(&tmpString, *' + value.name + '.GetPointer(), enumToString_' + bitType + ');')
                    self.wc('    fprintf(GetFile(), "%s%-32s' + value.fullType + ' = %s", indentString.c_str(), "' + value.name + ':", tmpString.c_str()); // UWQ')
                else:
                    self.wc('    fprintf(GetFile(), "%s%-32s' + value.fullType + ' = %d", indentString.c_str(), "' + value.name + ':", ' + value.name + '); // PIW')
            elif value.baseType == 'void':
                if value.name == 'pInfo':
                    # Specific to pInfo arg of vkGetShaderInfoAMD
                    self.wc('    if (' + value.name + '.GetPointer() == nullptr)')
                    self.wc('    {')
                    self.wc('        fprintf(GetFile(), "%s%-32s' + value.fullType + ' = NULL", indentString.c_str(), "' + value.name + ':"); // UYD')
                    self.wc('    }')
                    self.wc('    else')
                    self.wc('    {')
                    self.wc('        fprintf(GetFile(), "%s%-32s' + value.fullType + ' = ", indentString.c_str(), "' + value.name + ':");  // RYA')
                    self.wc('        tmpString = "";')
                    self.wc('        addrToString(&tmpString, ' + value.name + '.GetAddress()); // YYX')
                    self.wc('        if (printShaderCode)')
                    self.wc('        {')
                    self.wc('            ValueToStringStruct vinfo_' + value.name + ' = ' + self.setVinfo(value) + ';')
                    self.wc('            arrayToString<const uint32_t*>(&tmpString, 2, ' + str(value.pointerCount) + ', "' + value.fullType +
                                             '", reinterpret_cast<const uint32_t*>(' + value.name + '.GetPointer()), "' + value.name +
                                             '", static_cast<size_t>(*pInfoSize.GetPointer()) / 4, vinfo_' + value.name + ');  // CRG')
                    self.wc('        }')
                    self.wc('        fprintf(GetFile(), "%s", tmpString.c_str());  // YEU')
                    self.wc('    }')
                elif (value.name == 'dpy' or value.name == 'connection' or value.name == 'display' or
                    value.name == 'handle' or value.name == 'buffer' or value.name == 'pHostPointer' or value.name == 'pCheckpointMarker'):
                    self.wc('    fprintf(GetFile(), "%s%-32s' + value.fullType + ' = ' + self.getFormatString(value.baseType) + '", indentString.c_str(), "' + value.name + ':", '  + value.name + '); // YQA')
                else:
                    self.wc('    if (' + value.name + '.GetPointer() == nullptr)')
                    self.wc('    {')
                    self.wc('        fprintf(GetFile(), "%s%-32s' + value.fullType + ' = NULL", indentString.c_str(), "' + value.name + ':"); // GZD')
                    self.wc('    }')
                    self.wc('    else')
                    self.wc('    {')
                    self.wc('        fprintf(GetFile(), "%s%-32s' + value.fullType + ' = ", indentString.c_str(), "' + value.name + ':");  // SSA')
                    self.wc('        tmpString = "";')
                    self.wc('        addrToString(&tmpString, *(reinterpret_cast<uint64_t*>(' + value.name + '.GetPointer()))); // CWS')
                    self.wc('        fprintf(GetFile(), "%s", tmpString.c_str()); // YWW')
                    self.wc('    }')
            elif value.isArray and self.isStruct(value.baseType):
                # Array of structures
                self.wc('    if (' + value.name + '.GetPointer() == nullptr)')
                self.wc('    {')
                self.wc('        fprintf(GetFile(), "%s%-32s' + value.fullType + ' = NULL", indentString.c_str(), "' + value.name + ':"); // PJD')
                self.wc('    }')
                self.wc('    else')
                self.wc('    {')
                self.wc('        fprintf(GetFile(), "%s%-32s' + value.fullType + ' = ", indentString.c_str(), "' + value.name + ':"); // GRR')
                self.wc('        tmpString = "";')
                self.wc('        addrToString(&tmpString, ' + value.name + '.GetAddress());')
                self.wc('        fprintf(GetFile(), "%s", tmpString.c_str());  // SSU')
                if value.arrayLength.startswith('p'):
                    alength = '*' + value.arrayLength + '.GetPointer()'
                else:
                    alength = value.arrayLength
                self.wc('        tmpString = "";')
                self.wc('        arrayOfStructsToString<Decoded_' + value.baseType + '>(&tmpString, 2, ' + str(value.pointerCount) + ', "' + value.baseType + '",')
                self.wc('            ' + value.name + '.GetMetaStructPointer(), "' + value.name + '", ' + alength + ', ' + str(self.isUnion(value.baseType)).lower() + ', ' + value.name + '.GetAddress()); // VSR')
                self.wc('        fprintf(GetFile(), "%s", tmpString.c_str()); // WZA')
                self.wc('    }')
            elif self.isStruct(value.baseType):
                self.wc('    if (' + value.name + '.GetPointer() == nullptr)')
                self.wc('    {')
                self.wc('        fprintf(GetFile(), "%s%-32s' + value.fullType + ' = NULL", indentString.c_str(), "' + value.name + ':"); // GJK')
                self.wc('    }')
                self.wc('    else')
                self.wc('    {')
                self.wc('        fprintf(GetFile(), "%s%-32s' + value.fullType + ' = ", indentString.c_str(), "' + value.name + ':"); // WPO')
                self.wc('        tmpString = "";')
                self.wc('        addrToString(&tmpString, ' + value.name + '.GetAddress());')
                self.wc('        fprintf(GetFile(), "%s:", tmpString.c_str()); // WPP')
                self.wc('        tmpString = "";')
                self.wc('        structureToString<Decoded_' + value.baseType + '>(&tmpString, *' + value.name + '.GetMetaStructPointer(), 2, ' +
                                     value.name + '.GetAddress()); // GGG')
                self.wc('        fprintf(GetFile(), "%s", tmpString.c_str());   // DGP')
                self.wc('    }')
            elif self.isHandle(value.baseType):
                if value.isArray:
                    self.wc('    if (' + value.name + '.GetPointer() == nullptr)')
                    self.wc('    {')
                    self.wc('        fprintf(GetFile(), "%s%-32s' + value.fullType + ' = NULL", indentString.c_str(), "' + value.name + ':"); // GHD')
                    self.wc('    }')
                    self.wc('    else')
                    self.wc('    {')
                    self.wc('        fprintf(GetFile(), "%s%-32s' + value.fullType + ' = ", indentString.c_str(), "' + value.name + ':");  // SXB')
                    self.wc('        tmpString = "";')
                    self.wc('        addrToString(&tmpString, ' + value.name + '.GetAddress());')
                    self.wc('        fprintf(GetFile(), "%s", tmpString.c_str());  // YEF')
                    if '->' in value.arrayLength:
                        aLength = value.arrayLength.replace('->', '.GetPointer()->')
                    elif value.arrayLength.startswith('p'):
                        aLength = '*' + value.arrayLength + '.GetPointer()'
                    else:
                        aLength = str(value.arrayLength)
                    self.wc('        tmpString = "";')
                    self.wc('        ValueToStringStruct vinfo_' + value.name + ' = ' + self.setVinfo(value) + ';')
                    self.wc('        arrayToString<' + value.fullType + '>(&tmpString, 1, ' + str(value.pointerCount) + ', "' + value.fullType +
                            '", reinterpret_cast<' + value.fullType + '>(' + value.name + '.GetPointer()), "' + value.name + '", ' + aLength + ', vinfo_' + value.name + '); // SFX')
                    self.wc('        fprintf(GetFile(), "%s", tmpString.c_str());  // AFL')
                    self.wc('    }')
                else:
                    # A pointer to a scalar handle
                    self.wc('    if (' + value.name + '.GetPointer() == nullptr)')
                    self.wc('    {')
                    self.wc('        fprintf(GetFile(), "%s%-32s' + value.fullType + ' = NULL", indentString.c_str(), "' + value.name + ':"); // UJD')
                    self.wc('    }')
                    self.wc('    else')
                    self.wc('    {')
                    self.wc('        fprintf(GetFile(), "%s%-32s' + value.fullType + ' = ", indentString.c_str(), "' + value.name + ':");  // TAZ')
                    self.wc('        tmpString = "";')
                    self.wc('        addrToString(&tmpString, *(static_cast<uint64_t*>(' + value.name + '.GetPointer())));')
                    self.wc('        fprintf(GetFile(), "%s", tmpString.c_str());  // RAJ')
                    self.wc('    }')
            else:
                # A pointer to a scalar. Print what it points to. Note that we don't print the address.
                self.wc('    if (' + value.name + '.GetPointer() == nullptr)')
                self.wc('    {')
                self.wc('        fprintf(GetFile(), "%s%-32s' + value.fullType + ' = NULL", indentString.c_str(), "' + value.name + ':"); // GXD')
                self.wc('    }')
                self.wc('    else')
                self.wc('    {')
                self.wc('        fprintf(GetFile(), "%s%-32s' + value.fullType + ' = %" PRId64 "", indentString.c_str(), "' + value.name + ':", static_cast<uint64_t>(*' + value.name + '.GetPointer()));   // JQA')
                self.wc('    }')


    def getFormatString(self, type):
        if type in ['int', 'int32_t']:
            return '%d'
        elif type in ['uint32_t', 'VkBool32']:
            return '%u'
        elif type in ['int64_t']:
            return '%" PRId64 "'
        elif type in ['uint64_t', 'VkDeviceSize']:
            return '%" PRIu64 "'
        elif type in ['VkDeviceAddress']:
            return '0x%" PRIx64 "'
        elif type in ['float']:
            return '%g'
        elif type in ['void']:
            return '0x%" PRIx64 "'
        elif type in ['size_t']:
            return '%zu'
        else:
            return '%d'
