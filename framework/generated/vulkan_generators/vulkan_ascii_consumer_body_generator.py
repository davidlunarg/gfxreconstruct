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
#   Display thread information
#   Print pValues data in vkCmdPushConstants
#   Print wchar_t* strings. It's currently stubbed out to print only the addr.
#
#   Rename output module to gfxrecon2text gfxrecon-totext gfxrecon-to-text gfxreconToText gfxrecontotext
#
#   There are some utility functions being generated that look like static C++ code that could be
#   put into separate .h/.cpp files that are included by the generated file. For the existing code
#   base, there are two ways that this is done: files containing utility functions, such as the
#   encode and decode functions. Or, as protected members of a base class, like the handle mapping
#   methods in VulkanReplayConsumerBase.
#
#   If there isn't an implementation for a generic template function, these are basically just regular overloaded functions and the template syntax can be removed:
#       void StructureToString(std::string* rString, const Decoded_VkApplicationInfo &pStructIn, int indent, uint64_t baseAddr);


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
        self.wc('#include "generated/generated_vulkan_ascii_consumer.h"')
        self.wc('#include "generated/generated_vulkan_ascii_enum_util.h"')
        self.wc('#include "format/platform_types.h"')
        self.wc('#include "util/defines.h"')
        self.wc('#include "vulkan/vulkan.h"')
        self.wc('#include <functional>')
        self.wc('#include <inttypes.h>')
        self.wc('#include <string>')
        self.newline()
        self.wc('extern int  kIndentSize;')
        self.wc('extern bool kNoAddr;')
        self.wc('extern bool kPrintShaderCode;')
        self.newline()
        self.wc('GFXRECON_BEGIN_NAMESPACE(gfxrecon)')
        self.wc('GFXRECON_BEGIN_NAMESPACE(decode)')
        self.newline()

        # Type declaration: Function pointer to EnumToString functions
        self.wc('typedef std::function<void(std::string *, uint32_t)> EnumToStringFuncPtr;')
        self.newline()

        # Structure for passing info about args to ScalarValueToString
        self.wc('typedef struct ScalarValueToStringStruct {')
        self.wc('   bool is_handle_or_addr;')
        self.wc('   bool is_enum;')
        self.wc('   bool is_flags;')
        self.wc('   EnumToStringFuncPtr enum_to_string_func;')
        self.wc('} ScalarValueToStringStruct;')
        self.newline()

        # Generate functions to convert numbers to strings
        self.wc('void SignedDecimalToString(std::string* out, int64_t n)')
        self.wc('{')
        self.wc('    char tmp[30];')
        self.wc('    assert(out != nullptr);')
        self.wc('    snprintf(tmp, sizeof(tmp), "%" PRId64, n);')
        self.wc('    snprintf(tmp, sizeof(tmp), "%" PRId64, n);')
        self.wc('    *out += tmp;')
        self.wc('}')
        self.newline()
        self.wc('void UnsignedDecimalToString(std::string* out, uint64_t n)')
        self.wc('{')
        self.wc('    char tmp[30];')
        self.wc('    assert(out != nullptr);')
        self.wc('    snprintf(tmp, sizeof(tmp), "%" PRIu64, n);')
        self.wc('    *out += tmp;')
        self.wc('}')
        self.newline()
        self.wc('void DoubleToString(std::string* out, double d)')
        self.wc('{')
        self.wc('    char tmp[30];')
        self.wc('    snprintf(tmp, sizeof(tmp), "%g", d);')
        self.wc('    *out += tmp;')
        self.wc('}')
        self.newline()

        # Generate function to convert an address to a hex number or address
        self.wc('void AddrToString(std::string* out, uint64_t a)')
        self.wc('{')
        self.wc('    assert(out != nullptr);')
        self.wc('    if (kNoAddr)')
        self.wc('    {')
        self.wc('        *out += "address";')
        self.wc('    }')
        self.wc('    else')
        self.wc('    {')
        self.wc('        char tmp[30];')
        self.wc('        snprintf(tmp, sizeof(tmp), "0x%" PRIx64, a);')
        self.wc('        *out += tmp;')
        self.wc('    }')
        self.wc('}')
        self.newline()

        # Generate function to convert indent level to a string
        self.wc('void IndentSpaces(std::string* out, int indent)')
        self.wc('{')
        self.wc('    assert(out != nullptr);')
        self.wc('    out->insert(out->end(), indent * kIndentSize, \' \');')
        self.wc('}')
        self.newline()

        # Generate function to convert bit value to a string
        self.wc('void FlagsToString(std::string* out, VkFlags flags, EnumToStringFuncPtr enum_to_string_func)')
        self.wc('{')
        self.wc('    VkFlags m = 1;')
        self.wc('    assert(out != nullptr);')
        self.wc('    UnsignedDecimalToString(out, flags);')
        self.wc('    if (flags != 0)')
        self.wc('    {')
        self.wc('        *out += " (";')
        self.wc('        while (flags)')
        self.wc('        {')
        self.wc('            if (m & flags)')
        self.wc('            {')
        self.wc('                enum_to_string_func(out, (m & flags));')
        self.wc('                flags = flags & ~m;')
        self.wc('                if (flags & ~m)')
        self.wc('                {')
        self.wc('                    *out += " | ";')
        self.wc('                }')
        self.wc('            }')
        self.wc('            else')
        self.wc('            {')
        self.wc('                flags &= ~m;')
        self.wc('            }')
        self.wc('            m <<= 1;')
        self.wc('        }')
        self.wc('        *out += ")";')
        self.wc('    }')
        self.wc('    return;')
        self.wc('}')
        self.newline()


        # Generate function to convert a scaler value to a string. The input is
        # a pointer to the scalar.
        # We use C casts in this func because but some values of type T
        # for which this func is generated can't seem to be able to be converted to scalars
        # using C++ casts.
        self.newline()
        self.wc('template <typename T>')
        self.wc('void ScalarValueToString(std::string* out, T value, const ScalarValueToStringStruct &vinfo)')
        self.wc('{')
        self.wc('    assert(out != nullptr);')
        self.wc('    assert((vinfo.is_handle_or_addr + vinfo.is_enum  + vinfo.is_flags) <= 1);') # At most one of the three flags in vinfo may be set
        self.wc('    assert(vinfo.is_enum ? vinfo.enum_to_string_func != nullptr : true);')      # if is_enum is set, enum_to_string_func must be specified
        self.wc('    assert(vinfo.is_flags ? vinfo.enum_to_string_func != nullptr : true);')     # if is_flags is set, enum_to_string_func must be specified
        self.wc('    if (vinfo.is_handle_or_addr)')
        self.wc('    {')
        self.wc('        uint64_t v = *((uint64_t*)value);')
        self.wc('        AddrToString(out, v);')
        self.wc('    }')
        self.wc('    else if (vinfo.is_flags)')
        self.wc('    {')
        self.wc('        uint32_t v = *((uint32_t*)value);')
        self.wc('        FlagsToString(out, v, vinfo.enum_to_string_func);')
        self.wc('    }')
        self.wc('    else if (vinfo.is_enum)')
        self.wc('    {')
        self.wc('        uint32_t v = *((uint32_t*)value);')
        self.wc('        vinfo.enum_to_string_func(out, v);')
        self.wc('    }')
        self.wc('    else if (std::is_same<T, float*>::value || std::is_same<T, const float*>::value)')
        self.wc('    {')
        self.wc('        double v = *((float*)value);')
        self.wc('        DoubleToString(out, v);')
        self.wc('    }')
        self.wc('    else if (std::is_same<T, double*>::value || std::is_same<T, const double*>::value)')
        self.wc('    {')
        self.wc('        DoubleToString(out, *((double*)value));')
        self.wc('    }')
        self.wc('    else if (std::is_same<T, int32_t*>::value || std::is_same<T, const int32_t*>::value)')
        self.wc('    {')
        self.wc('        int32_t v = *((int32_t*)value);')
        self.wc('        SignedDecimalToString(out, v);')
        self.wc('    }')
        self.wc('    else if (std::is_same<T, uint32_t*>::value || std::is_same<T, const uint32_t*>::value)')
        self.wc('    {')
        self.wc('        uint32_t v = *((uint32_t*)value);')
        self.wc('        UnsignedDecimalToString(out, v);')
        self.wc('    }')
        self.wc('    else if (std::is_same<T, int64_t*>::value || std::is_same<T, const int64_t*>::value)')
        self.wc('    {')
        self.wc('        int64_t v = *((int64_t*)value);')
        self.wc('        SignedDecimalToString(out, v);')
        self.wc('    }')
        self.wc('    else if (std::is_same<T, unsigned int*>::value || std::is_same<T, const unsigned int*>::value)')
        self.wc('    {')
        self.wc('        unsigned int v = *((unsigned int*)value);')
        self.wc('        UnsignedDecimalToString(out, v);')
        self.wc('    }')
        self.wc('    else if (std::is_same<T, unsigned char*>::value || std::is_same<T, const unsigned char*>::value)')
        self.wc('    {')
        self.wc('        unsigned char v = *((unsigned char*)value);')
        self.wc('        UnsignedDecimalToString(out, v);')
        self.wc('    }')
        self.wc('    else')
        self.wc('    {')      #  All other cases are treated as uint64_t
        self.wc('        uint64_t v = *((uint64_t*)value);')
        self.wc('        UnsignedDecimalToString(out, v);')
        self.wc('    }')
        self.wc('}')

        # Generate function to convert a C string to a quoted string
        self.wc('void StringToQuotedString(std::string* out, const char* s)')
        self.wc('{')
        self.wc('    assert(out != nullptr);')
        self.wc('    if (s != nullptr)')
        self.wc('    {')
        self.wc('        *out += "\\\"";')
        self.wc('        *out += s;')
        self.wc('        *out += "\\\"";')
        self.wc('    }')
        self.wc('    else')
        self.wc('    {')
        self.wc('        *out += "NULL";')
        self.wc('    }')
        self.wc('}')
        self.newline()

        # Generate function to pad a string to a length by appending spaces
        self.wc('void PadString(std::string* s, size_t len)')
        self.wc('{')
        self.wc('    assert(s != nullptr);')
        self.wc('    if (s->length() < len)')
        self.wc('    {')
        self.wc('        s->insert(s->end(), len - s->length(), \' \');')
        self.wc('    }')
        self.wc('}')
        self.newline()

        # Generate prototype for StructureToString function
        self.wc('template <typename T>')
        self.wc('void StructureToString(std::string* out, const T& pstruct_in, int indent, uint64_t base_addr);')
        self.newline()

        # Generate function to process an array
        self.wc('template <typename T>')
        self.wc('void ArrayToString(std::string*                    out,')
        self.wc('                   int                             indent,')
        self.wc('                   const int                       pointer_count,')
        self.wc('                   const char*                     full_type_name,')
        self.wc('                   T                               array,')
        self.wc('                   const char*                     array_name,')
        self.wc('                   const size_t                    array_length,')
        self.wc('                   const ScalarValueToStringStruct &vinfo)')
        self.wc('{')
        self.wc('    assert(out != nullptr);')
        self.wc('    assert((vinfo.is_handle_or_addr + vinfo.is_enum  + vinfo.is_flags) <= 1);') # At most one of the three flags in vinfo may be set
        self.wc('    assert(vinfo.is_enum ? vinfo.enum_to_string_func != nullptr : true);')      # if is_enum is set, enum_to_string_func must be specified
        self.wc('    assert(vinfo.is_flags ? vinfo.enum_to_string_func != nullptr : true);')     # if is_flags is set, enum_to_string_func must be specified
        self.wc('    if (array_length == 0 || array == nullptr)')
        self.wc('    {')
        self.wc('        return;')
        self.wc('    }')
        self.wc('    if (pointer_count <= 1 &&')
        self.wc('        (std::is_same<T, const char>::value || std::is_same<T, const char>::value || std::is_same<T, char>::value ||')
        self.wc('         std::is_same<T, const char*>::value || std::is_same<T, char*>::value))')
        self.wc('    {')
        self.wc('        StringToQuotedString(out, *((const char**)&array));')      # C cast!
        self.wc('    }')
        self.wc('    else')
        self.wc('    {')
        self.wc('        std::string full_type_name_str = full_type_name;')
        self.wc('        if (*full_type_name_str.rbegin() == \'*\')')
        self.wc('        {')
        self.wc('            full_type_name_str.pop_back();')
        self.wc('        }')
        self.wc('        *out += "\\n";')
        self.wc('        for (uint64_t j = 0; j < array_length; j++)')
        self.wc('        {')
        self.wc('            IndentSpaces(out, indent + 1);')
        self.wc('            std::string name_and_index;')
        self.wc('            name_and_index += array_name;')
        self.wc('            name_and_index += "[";')
        self.wc('            UnsignedDecimalToString(&name_and_index, j);')
        self.wc('            name_and_index += "]: ";')
        self.wc('            PadString(&name_and_index, 32);');
        self.wc('            *out += name_and_index;')
        self.wc('            *out += full_type_name_str;')
        self.wc('            *out += " = ";')
        self.wc('            if (pointer_count > 1)')
        self.wc('            {')
        self.wc('                if (pointer_count == 2 && strstr(full_type_name, "char"))')
        self.wc('                {')
        self.wc('                    StringToQuotedString(out, ((const char**)array)[j]);')      # C cast!
        self.wc('                }')
        self.wc('                else')
        self.wc('                {')
        self.wc('                    fprintf(stderr, "ERROR: ArrayToString arrays of non-strings not implemented\\n");')
        self.wc('                }')
        self.wc('            }')
        self.wc('            else')
        self.wc('            {')
        self.wc('                ScalarValueToString<T>(out, &array[j], vinfo);')
        self.wc('            }')
        self.wc('            if (j < array_length - 1)')
        self.wc('            {')
        self.wc('                *out += "\\n";')
        self.wc('            }')
        self.wc('        }')
        self.wc('    }')
        self.wc('}')
        self.newline()

        # Generate function to process an array of structures
        self.wc('template <typename T>')
        self.wc('void ArrayOfStructsToString(std::string* out,')
        self.wc('                            int          indent,')
        self.wc('                            const int    pointer_count,')
        self.wc('                            const char*  base_type_name,')
        self.wc('                            T*           array,')
        self.wc('                            const char*  array_name,')
        self.wc('                            const size_t array_length,')
        self.wc('                            bool         is_union,')
        self.wc('                            uint64_t     base_addr)')
        self.wc('{')
        self.wc('    assert(out != nullptr);')
        self.wc('    if (array_length == 0 || array == nullptr)')
        self.wc('    {')
        self.wc('        return;')
        self.wc('    }')
        self.wc('    *out += "\\n";')
        self.wc('    for (uint64_t j = 0; j < array_length; j++)')
        self.wc('    {')
        self.wc('        IndentSpaces(out, indent);')
        self.wc('        std::string name_and_index;')
        self.wc('        name_and_index += array_name;')
        self.wc('        name_and_index += "[";')
        self.wc('        UnsignedDecimalToString(&name_and_index, j);')
        self.wc('        name_and_index += "]: ";')
        self.wc('        PadString(&name_and_index, 32);');
        self.wc('        *out += name_and_index;')
        self.wc('        *out += base_type_name;')
        self.wc('        *out += " = ";')
        self.wc('        AddrToString(out, base_addr + j * sizeof(T)); // UEW')
        self.wc('        if (is_union)')
        self.wc('        {')
        self.wc('            *out += " (Union)";')
        self.wc('        }')
        self.wc('        *out += ":";')
        self.wc('        if (pointer_count > 1)')
        self.wc('        {')
        self.wc('            fprintf(stderr, "ERROR: ArrayOfStructsToString cannot handle arrays of arrays\\n");')
        self.wc('        }')
        self.wc('        else')
        self.wc('        {')
        self.wc('            StructureToString<T>(out, array[j], indent + 1, base_addr + j * sizeof(T)); // YQS')
        self.wc('        }')
        self.wc('        if (j < array_length - 1)')
        self.wc('        {')
        self.wc('            *out += "\\n"; // AZC')
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
    # Override genType in BaseGenerator
    def genType(self, typeinfo, name, alias):
        BaseGenerator.genType(self, typeinfo, name, alias)
        typeElem = typeinfo.elem
        category = typeElem.get('category')
        if category == 'union':
            self.genStruct(typeinfo, name, alias)
            self.unionList.add(name)
        if ((category == 'struct' or category == 'union') and name !="VkBaseOutStructure" and name != "VkBaseInStructure"):
            self.structDict[name] = self.makeValueInfo(typeinfo.elem.findall('.//member'))

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

    #
    # Performs C++ code generation for the feature.
    def generateFeature(self):

        # Generate forward references to functions to print structures
        for structName in self.featureStructMembers:
            if structName != 'VkBaseInStructure' and structName != 'VkBaseOutStructure':
                self.wc('template <> void StructureToString<Decoded_' + structName + '>(std::string* out, const Decoded_' + structName + ' &pstruct_in, int indent, uint64_t base_addr); // ARX')
        self.newline()

        # Generate functions to print structures
        for structName in self.featureStructMembers:
            if structName == 'VkBaseInStructure' or structName == 'VkBaseOutStructure':
                continue
            self.wc('template <>')
            self.wc('void StructureToString<Decoded_' + structName + '>(std::string* out, const Decoded_' + structName + ' &pstruct_in, int indent, uint64_t base_addr) // GAA')

            self.wc('{')
            self.wc('    const ' + structName + ' *pstruct = (const ' + structName + ' *)pstruct_in.decoded_value; // BTB')
            self.wc('    assert(out != nullptr);')
            self.wc('    if (pstruct == nullptr)')
            self.wc('    {')
            self.wc('        return;')
            self.wc('    }')
            self.wc('    *out += "\\n"; // UUR');
            sMembersList = list(self.featureStructMembers[structName])
            for member in sMembersList:
                self.newline()
                self.wc('    // struct member: ' + member.fullType + ' ' + member.name)
                self.valueToString(member, structName)
                if member != sMembersList[-1]:
                    self.wc('    *out += "\\n"; // GDS')
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
        self.wc('    std::string outString = "";')
        self.wc('    std::string *out = &outString;')
        self.wc('    uint32_t indent = 1;')
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
                self.wc('    EnumToStringVkResult(&outString, returnValue);')
                self.wc('    fprintf(GetFile(), " returns ' + returnType + ' %s (%" PRId32 "):\\n", outString.c_str(), returnValue);')
            elif self.isFunctionPtr(value.baseType):
                # This is encoded as a 64-bit integer containing the address of the function pointer
                self.wc('    fprintf(GetFile(), " returns 0x%" PRIx64 ":\\n", static_cast<uint64_t>(returnValue));\n')
            else:
                self.wc('    fprintf(GetFile(), " returns {}:\\n", returnValue);'.format(self.getFormatString(returnType)))

        self.wc('    outString = "";')
        for value in values:
            self.newline()
            self.wc('    // func arg: ' + value.fullType + ' ' + value.name)
            self.valueToString(value, "")
            self.wc('    outString += "\\n";   // HHS')

        # We add a final new line at the end of a func
        self.newline()
        self.wc('    outString += "\\n";   // HDS')
        self.wc('    fprintf(GetFile(), "%s", outString.c_str());')
        self.wc('}')


    # Generate code to convert a value to string.
    # A value can be anything - scalar, enum, flags, array, structure, array of structures, string - anything that can be an arg or a member of a structure.
    # The structName is used when value is a member of a structure. It contains the name of the structure type.
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
                        self.wc('            ScalarValueToStringStruct vinfo_' + value.name + ' = ' + self.setVinfo(value) + ';')
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
                                self.wc('        ScalarValueToStringStruct vinfo_' + value.name + ' = ' + self.setVinfo(value) + ';')
                                self.wc('        ArrayToString<' + value.fullType + '>(out, indent, ' + str(value.pointerCount) + ', "' + value.fullType +
                                      '", reinterpret_cast<' + value.fullType + '>(' + pstruct_in + value.name + '.GetPointer()), "' + value.name +
                                      '", ' + aLength + ', ' +
                                      ' vinfo_' + value.name + ');  // CCR')
                            else:
                                self.wc('        ScalarValueToStringStruct vinfo_' + value.name + ' = ' + self.setVinfo(value) + ';')
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
                    self.wc('        StructureToString<Decoded_' + value.baseType + '>(out, *' + value.name + '.GetMetaStructPointer(), indent+1,' +
                                         value.name + '.GetAddress()); // GLM')
                else:
                    self.wc('        StructureToString<Decoded_' + value.baseType + '>(out, *' + pstruct_in + value.name + '->GetMetaStructPointer(), indent+1,' +
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
                    self.wc('        ScalarValueToStringStruct vinfo_' + value.name + ' = ' + self.setVinfo(value) + ';')
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
                self.wc('    ScalarValueToStringStruct vinfo_' + value.name + ' = ' + self.setVinfo(value) + ';')

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
                self.wc('    StructureToString<Decoded_' + value.baseType + '>(out, reinterpret_cast<const Decoded_' + value.fullType + '&>(pstruct_in), indent+1, ' +
                                 ' base_addr + offsetof(' + structName + ', ' + value.name + ')); // RLN')
            else:
                self.wc('    StructureToString<Decoded_' + value.baseType + '>(out, *' + pstruct_in + value.name + ', indent+1, ' +
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
