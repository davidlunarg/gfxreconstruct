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

class VulkanJsonEnumGeneratorOptions(BaseGeneratorOptions):
    """Options for generating enum to json utilities"""
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

# VulkanJsonEnumBodyGenerator - subclass of BaseGenerator.
# Generates C++ funcs for converting Vulkan enum values to json.    TODO: Maybe not needed?? Can share json/asc ii code????
class VulkanJsonEnumGenerator(BaseGenerator):
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
        self.wc('#include "vulkan/vulkan.h"')
        self.wc('#include <string>')
        self.newline()
        self.wc('GFXRECON_BEGIN_NAMESPACE(gfxrecon)')
        self.wc('GFXRECON_BEGIN_NAMESPACE(decode)')

    def endFile(self):
        # Generate functions to convert enum values to strings
        for enumName in self.enumListNoAliases:
            if enumName in self.enumList:
                self.newline()
                self.wc('void EnumToString' + enumName + '(std::string* out, uint32_t enum_uint32)')
                self.wc('{')
                self.wc('    ' + enumName + ' e = static_cast<' + enumName + '>(enum_uint32);')
                self.wc('    assert(out != nullptr); // RYZ')
                # Use list e to eliminate duplicates and make sure we don't use aliases
                e = list()
                for enumValue in self.enumList[enumName]:
                    enumString=str(enumValue.attrib.get('name'));
                    isAlias = str(enumValue.attrib.get('alias'))
                    supported = str(enumValue.attrib.get('supported'))
                    if (not enumString in e) and isAlias == 'None' and supported != 'disabled':
                        e.append(enumString);
                if len(e) > 0:
                    self.wc('    switch (e)')
                    self.wc('    {')
                    # Add a case for each enum
                    for enumValue in e:
                        self.wc('        case ' + enumValue + ':')
                        self.wc('            *out += "' + enumValue + '";')
                        self.wc('            return;')
                    self.wc('        default:')
                    self.wc('            *out += "UNKNOWN";')
                    self.wc('            return;')
                    self.wc('    }')
                else:
                    self.wc('    *out += "UNKNOWN";')
            self.wc('}')

        # Generate functions to convert aliased enum types to string
        for enumName in self.enumListAliases:
            self.wc('\nvoid EnumToString' + enumName + '(std::string* out, ' + enumName + ' e)')
            self.wc('{')
            self.wc('    assert(out != nullptr); // JJJ')
            self.wc('    EnumToString' + self.enumListAliases[enumName] + '(out, e);')
            self.wc('}')

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
