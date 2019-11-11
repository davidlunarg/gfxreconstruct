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
from vulkan_ascii_value_to_string_generator import *

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
        self.wc('#include "generated/generated_vulkan_ascii_enum_util.h"')
        self.wc('#include "format/platform_types.h"')
        self.wc('#include "util/defines.h"')
        self.wc('#include "util/ascii_utils.h"')
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

    def endFile(self):
        # Generate forward references to struct functions
        for structName in self.structDict:
            if structName != 'VkBaseInStructure' and structName != 'VkBaseOutStructure':
                self.wc('void StructureToString(std::string* out, const Decoded_' + structName + ' &pstruct_in, int indent, uint64_t base_addr);')
        self.newline()

        # Generate functions to print structures
        for structName in self.structDict:
            if structName == 'VkBaseInStructure' or structName == 'VkBaseOutStructure':
                continue
            self.wc('void StructureToString(std::string* out, const Decoded_' + structName + ' &pstruct_in, int indent, uint64_t base_addr)')
            self.wc('{')
            self.wc('    const ' + structName + ' *pstruct = (const ' + structName + ' *)pstruct_in.decoded_value; // BTB')
            self.wc('    assert(out != nullptr);')
            self.wc('    if (pstruct == nullptr)')
            self.wc('    {')
            self.wc('        return;')
            self.wc('    }')
            self.wc('    *out += "\\n"; // UUR');
            sMembersList = list(self.structDict[structName])
            for member in sMembersList:
                self.newline()
                self.wc('    // struct member: ' + member.fullType + ' ' + member.name)
                ValueToString.valueToString(self, member, structName)
                if member != sMembersList[-1]:
                    self.wc('    *out += "\\n"; // GDS')
            self.wc('}')
            self.newline()

        self.wc('GFXRECON_END_NAMESPACE(decode)')
        self.wc('GFXRECON_END_NAMESPACE(gfxrecon)')

        BaseGenerator.endFile(self)
