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
#    Display thread information
#    Rename executable to gfxrecon-convert
#    Check use of pointerCount, in both ascii and json

import os,re,sys
from base_generator import *
from vulkan_ascii_value_to_string_generator import *

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
        self.wc('#include "generated/generated_vulkan_ascii_struct_util.h"')
        self.wc('#include "format/platform_types.h"')
        self.wc('#include "util/defines.h"')
        self.wc('#include "util/ascii_utils.h"')
        self.wc('#include "vulkan/vulkan.h"')
        self.wc('#include <functional>')
        self.wc('#include <inttypes.h>')
        self.wc('#include <string>')
        self.newline()
        self.wc('GFXRECON_BEGIN_NAMESPACE(gfxrecon)')
        self.wc('GFXRECON_BEGIN_NAMESPACE(decode)')

    # Method override
    def endFile(self):
        self.wc('GFXRECON_END_NAMESPACE(decode)')
        self.wc('GFXRECON_END_NAMESPACE(gfxrecon)')
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

    #
    # Performs C++ code generation for the feature.
    def generateFeature(self):

        # Generate functions to print cmds (api entry points)
        for cmd in self.getFilteredCmdNames():
            info = self.featureCmdParams[cmd]
            returnType = info[0]
            values = info[2]
            self.wc(self.makeConsumerFuncDecl(returnType, 'VulkanAsciiConsumer::Process_' + cmd, values))
            self.makeConsumerFuncBody(returnType, cmd, values)
            self.newline()

    #
    # Return VulkanAsciiConsumer class member function definition.
    def makeConsumerFuncBody(self, returnType, name, values):

        # Begin function
        self.wc('{')
        self.wc('    uint32_t indent = 1;')
        self.wc('    FILE* outputFile = GetFile();')
        needcomma=0
        args = ''
        for value in values:
            if needcomma:
                args += ', '
            args += value.name
            needcomma = 1
        self.wc('    fprintf(outputFile, "' + name + '(' + args  + ')");')
        if returnType == 'void':
            self.wc('    fprintf(outputFile, " returns void:\\n");')
        else:
            # The parameter name assigned to the return value by the code generator is 'returnValue'
            if self.isEnum(returnType):
                self.wc('    fprintf(outputFile, " returns ' + returnType + ' ");')
                self.wc('    EnumToStringVkResult(outputFile, returnValue);')
                self.wc('    fprintf(outputFile, " (%" PRId32 "):\\n", returnValue);')
            elif self.isFunctionPtr(value.baseType):
                # This is encoded as a 64-bit integer containing the address of the function pointer
                self.wc('    fprintf(outputFile, " returns 0x%" PRIx64 ":\\n", static_cast<uint64_t>(returnValue));\n')
            else:
                self.wc('    fprintf(outputFile, " returns {}:\\n", returnValue);'.format(self.getFormatString(returnType)))

        for value in values:
            self.newline()
            self.wc('    // func arg: ' + value.fullType + ' ' + value.name)
            ValueToString.valueToString(self, value, name, "")
            self.wc('    OutputString(outputFile, "\\n"); // HHS')

        # Add an extra new line to the output at the end of a func
        self.newline()
        self.wc('    OutputString(outputFile, "\\n"); // HDS')
        self.wc('}')

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
