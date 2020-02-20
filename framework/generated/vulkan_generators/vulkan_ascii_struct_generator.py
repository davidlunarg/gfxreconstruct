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

import os,re,sys
from base_generator import *
from vulkan_ascii_value_generator import *

class VulkanAsciiStructGeneratorOptions(BaseGeneratorOptions):
    """Options for generating a C++ class for Vulkan capture file to ASCII file generation"""
    def __init__(self,
                 blacklists = None,         # Path to JSON file listing apicalls and structs to ignore.
                 platformTypes = None,      # Path to JSON file listing platform (WIN32, X11, etc.) defined types.
                 filename = '',
                 directory = '.',
                 prefixText = '',
                 protectFile = False,
                 protectFeature = True):
        BaseGeneratorOptions.__init__(self, blacklists, platformTypes,
                                      filename, directory, prefixText,
                                      protectFile, protectFeature)

# VulkanAsciiStructGenerator - subclass of BaseGenerator.
# Generates C++ member definitions for the VulkanAsciiConsumer class responsible for
# generating ascii from Vulkan structures.
class VulkanAsciiStructGenerator(BaseGenerator):
    """Generate a C++ class for Vulkan capture file to ASCII file generation"""
    def __init__(self,
                 errFile = sys.stderr,
                 warnFile = sys.stderr,
                 diagFile = sys.stdout):
        self.structDict = dict()               # Dictionary of all structures, accumulated across all features
        self.pNextStructs = dict()             # Map structure types to sType
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
        self.wc('#include "format/platform_types.h"')
        self.wc('#include "generated/generated_vulkan_enum_output_util.h"')
        self.wc('#include "util/ascii_utils.h"')
        self.wc('#include "util/defines.h"')
        self.wc('#include "vulkan/vulkan.h"')
        self.wc('#include <inttypes.h>')
        self.wc('#include <string>')
        self.newline()
        self.wc('GFXRECON_BEGIN_NAMESPACE(gfxrecon)')
        self.wc('GFXRECON_BEGIN_NAMESPACE(decode)')
        self.newline()


    # Method override
    def endFile(self):
        self.wc('GFXRECON_END_NAMESPACE(decode)')
        self.wc('GFXRECON_END_NAMESPACE(gfxrecon)')
        BaseGenerator.endFile(self)

    #
    # Indicates that the current feature has C++ code to generate.
    def needFeatureGeneration(self):
        return False

    #
    # Override genType in BaseGenerator
    def genType(self, typeinfo, name, alias):
        BaseGenerator.genType(self, typeinfo, name, alias)
        typeElem = typeinfo.elem
        category = typeElem.get('category')
        if not alias:
            if category == 'union':
                self.genStruct(typeinfo, name, alias)
                self.unionList.add(name)
            if ((category == 'struct' or category == 'union') and name !="VkBaseOutStructure" and name != "VkBaseInStructure"):
                self.structDict[name] = self.makeValueInfo(typeinfo.elem.findall('.//member'))
                if typeinfo.elem.get('structextends'):
                    sType = self.makeStructureTypeEnum(typeinfo, name)
                    if sType:
                        self.pNextStructs[name] = sType

    def endFile(self):
        # Generate forward references to struct functions
        for structName in self.structDict:
            if structName != 'VkBaseInStructure' and structName != 'VkBaseOutStructure':
                self.wc('void OutputStructureAscii(FILE* outputFile, const Decoded_' + structName + ' &pstruct_in, int indent, uint64_t base_addr);')
        self.newline()

        # Generate OutputArrayOfStructsAscii
        self.wc('template <typename T>')
        self.wc('void OutputArrayOfStructsAscii(FILE*        outputFile,')
        self.wc('                               int          indent,')
        self.wc('                               const char*  base_type_name,')
        self.wc('                               T*           array,')
        self.wc('                               const char*  array_name,')
        self.wc('                               const size_t array_length,')
        self.wc('                               bool         is_union,')
        self.wc('                               uint64_t     base_addr,')
        self.wc('                               size_t       struct_size)')
        self.wc('{')
        self.wc('    assert(outputFile != nullptr);')
        self.wc('    if (array_length == 0 || array == nullptr)')
        self.wc('    {')
        self.wc('        return;')
        self.wc('    }')
        self.wc('    OutputString(outputFile, "\\n");')
        self.wc('    for (uint64_t j = 0; j < array_length; j++)')
        self.wc('    {')
        self.wc('        std::string name_and_index;')
        self.wc('        char tmp_string[100];')
        self.wc('        OutputIndentAscii(outputFile, indent);')
        self.wc('        name_and_index += array_name;')
        self.wc('        snprintf(tmp_string, sizeof(tmp_string), "%s[%" PRIu64 "]: ", array_name, j);')
        self.wc('        fprintf(outputFile, "%-32s", tmp_string);')
        self.wc('        OutputString(outputFile, base_type_name);')
        self.wc('        OutputString(outputFile, " = ");')
        self.wc('        OutputAddrAscii(outputFile, base_addr + j * struct_size);')
        self.wc('        if (is_union)')
        self.wc('        {')
        self.wc('            OutputString(outputFile, " (Union)");')
        self.wc('        }')
        self.wc('        OutputString(outputFile, ":");')
        self.wc('        OutputStructureAscii(outputFile, array[j], indent + 1, base_addr + j * sizeof(T));')
        self.wc('        if (j < array_length - 1)')
        self.wc('        {')
        self.wc('            OutputString(outputFile, "\\n");')
        self.wc('        }')
        self.wc('    }')
        self.wc('}')
        self.newline()

        # Generate OutputPnextStructAscii function
        # OutputPnextStructAscii will accept a pNext structure, examine the sType, and call the appropriate OutputStructureAscii function
        self.wc('void OutputPnextStructAscii(FILE* outputFile, int indent, void* pNext_struct, uint64_t base_addr)')
        self.wc('{')
        self.wc('    assert(outputFile != nullptr);')
        self.wc('    switch (static_cast<Decoded_VkApplicationInfo*>(pNext_struct)->decoded_value->sType)')
        self.wc('    {')
        for structName in self.pNextStructs:
            self.wc('        case ' + self.pNextStructs[structName] + ':')
            self.wc('            OutputStructureAscii(outputFile, *(reinterpret_cast<const Decoded_' + structName + '*>(pNext_struct)) , indent, base_addr);');
            self.wc('            break;')
        self.wc('        default:')
        self.wc('            OutputString(outputFile, "Unknown pNext struct");')
        self.wc('            break;')
        self.wc('    }')
        self.wc('}')

        # Generate functions to print structures
        for structName in self.structDict:
            if structName == 'VkBaseInStructure' or structName == 'VkBaseOutStructure':
                continue
            self.wc('void OutputStructureAscii(FILE* outputFile, const Decoded_' + structName + ' &pstruct_in, int indent, uint64_t base_addr)')
            self.wc('{')
            self.wc('    const ' + structName + ' *pstruct = pstruct_in.decoded_value; // BTG')
            self.wc('    assert(outputFile != nullptr);')
            self.wc('    if (pstruct == nullptr)')
            self.wc('    {')
            self.wc('        return;')
            self.wc('    }')
            self.wc('    OutputString(outputFile, "\\n"); // UUR')
            sMembersList = list(self.structDict[structName])
            for member in sMembersList:
                self.newline()
                self.wc('    // struct member: ' + member.fullType + ' ' + member.name)
                OutputValue.outputValue(self, member, "", structName)
                if member != sMembersList[-1]:
                    self.wc('    OutputString(outputFile, "\\n"); // GDS');
            self.wc('}')
            self.newline()

        self.wc('GFXRECON_END_NAMESPACE(decode)')
        self.wc('GFXRECON_END_NAMESPACE(gfxrecon)')

        BaseGenerator.endFile(self)
