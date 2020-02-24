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
from collections import OrderedDict
from base_generator import *

class VulkanEnumOutputGeneratorOptionsH(BaseGeneratorOptions):
    """Options for generating enum to ascii utilities"""
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

# VulkanEnumOutputBodyGeneratorH - subclass of BaseGenerator.
# Generates header file for C++ funcs for converting Vulkan enum values to ascii.
class VulkanEnumOutputGeneratorH(BaseGenerator):
    def __init__(self,
                 errFile = sys.stderr,
                 warnFile = sys.stderr,
                 diagFile = sys.stdout):
        self.enumList = OrderedDict()        # Dictionary of enums
        self.enumListNoAliases = list()      # List of enums that are not aliases
        self.enumListAliases = OrderedDict() # Dictionary of enumns that are aliases
        BaseGenerator.__init__(self,
                               processCmds=False, processStructs=False, featureBreak=False,
                               errFile=errFile, warnFile=warnFile, diagFile=diagFile)

    # Method that simply calls write(), but caller can omit the file=self.outFile arg.
    # The name is short ("wc") because we call it so many times.
    def wc(self, s):
        write(s, file=self.outFile)

    def beginFile(self, genOpts):
        BaseGenerator.beginFile(self, genOpts)

        self.wc('#include "util/defines.h"')
        self.wc('#include "vulkan/vulkan.h"')
        self.wc('#include <inttypes.h>')
        self.newline()

        self.newline()
        self.wc('GFXRECON_BEGIN_NAMESPACE(gfxrecon)')
        self.wc('GFXRECON_BEGIN_NAMESPACE(decode)')

    def endFile(self):
        # Generate functions headers to convert enum values to strings
        self.newline()
        for enumName in self.enumListNoAliases:
            if enumName in self.enumList:
                self.wc('void OutputEnum' + enumName + '(FILE* outputFile, uint32_t enum_uint32);')

        # Generate functions to convert aliased enum types to string
        self.newline()
        for enumName in self.enumListAliases:
            self.wc('void OutputEnum' + enumName + '(FILE* outputFile, ' + enumName + ' e);')

        self.newline()
        self.wc('GFXRECON_END_NAMESPACE(decode)')
        self.wc('GFXRECON_END_NAMESPACE(gfxrecon)')

        # Finish processing in superclass
        BaseGenerator.endFile(self)

    #
    # Override genGroup in BaseGenerator
    def genGroup(self, groupinfo, groupName, alias):
        BaseGenerator.genGroup(self, groupinfo, groupName, alias)
        if alias:
            self.enumListAliases[groupName] = alias
        else:
            self.enumListNoAliases.append(groupName)
            self.enumNames.add(groupName)
            self.enumList[groupName] = groupinfo.elem.findall('enum')