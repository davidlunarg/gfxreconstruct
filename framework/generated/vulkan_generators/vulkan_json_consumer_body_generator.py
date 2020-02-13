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
#
# TODO:
#   Display thread information
#   Rename executable to gfxrecon-convert

import os,re,sys
from base_generator import *
from vulkan_json_value_to_string_generator import *

class VulkanJsonConsumerBodyGeneratorOptions(BaseGeneratorOptions):
    """Options for generating a C++ class for Vulkan capture file to JSON file generation"""
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

# VulkanJsonConsumerBodyGenerator - subclass of BaseGenerator.
# Generates C++ member definitions for the VulkanJsonConsumer class responsible for
# generating a textfile containing decoded Vulkan API call parameter data.
class VulkanJsonConsumerBodyGenerator(BaseGenerator):
    """Generate a C++ class for Vulkan capture file to JSON file generation"""
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
        self.wc('#include "generated/generated_vulkan_json_consumer.h"')
        self.wc('#include "generated/generated_vulkan_ascii_enum_util.h"')
        self.wc('#include "generated/generated_vulkan_json_struct_util.h"')
        self.wc('#include "format/platform_types.h"')
        self.wc('#include "util/defines.h"')
        self.wc('#include "util/json_utils.h"')
        self.wc('#include "vulkan/vulkan.h"')
        self.wc('#include <functional>')
        self.wc('#include <inttypes.h>')
        self.wc('#include <string>')
        self.newline()
        self.wc('GFXRECON_BEGIN_NAMESPACE(gfxrecon)')
        self.wc('GFXRECON_BEGIN_NAMESPACE(decode)')
        self.newline()
        self.wc('// Bool to keep track of when a function needs to start with a \',\'')
        self.wc('// because we print the comma closing a function at the start of the')
        self.wc('// next function. We need to do this to avoid putting a comma')
        self.wc('// after the last function in a frame.')
        self.wc('static bool need_function_comma = false;')

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
            self.wc(self.makeConsumerFuncDecl(returnType, 'VulkanJsonConsumer::Process_' + cmd, values))
            self.makeConsumerFuncBody(returnType, cmd, values)
            self.newline()

    #
    # Return VulkanJsonConsumer class member function definition.
    def makeConsumerFuncBody(self, returnType, name, values):

        # Begin function
        self.wc('{')
        self.wc('    uint32_t indent = 5;')
        self.wc('    FILE* outputFile = GetFile();')
        self.newline()
        self.wc('    if (need_function_comma)')
        self.wc('    {')
        self.wc('        OutputStringJson(outputFile, ",\\n");')
        self.wc('    }')
        self.wc('    need_function_comma = true;')
        self.newline()
        self.wc('    IndentSpacesJson(outputFile, 2); // TWP')
        self.wc('    OutputStringJson(outputFile, "{\\n");')
        self.wc('    IndentSpacesJson(outputFile, 3); // TRP')
        self.wc('    OutputStringJson(outputFile, "\\"name\\" : \\"' + name + '\\",\\n"); // FCN')
        self.wc('    IndentSpacesJson(outputFile, 3); // TNP')
        self.wc('    OutputStringJson(outputFile, "\\"thread\\" : \\"Thread ");');
        self.wc('    SignedDecimalToStringJson(outputFile, 0);')  # TODO: get thread id
        self.wc('    OutputStringJson(outputFile, "\\",\\n");');
        self.wc('    IndentSpacesJson(outputFile, 3); // TLP')
        self.wc('    OutputStringJson(outputFile, "\\"returnType\\" : \\"' + returnType + '\\",\\n");')
        if returnType != 'void':
            self.wc('    IndentSpacesJson(outputFile, 3); // TKP')
            self.wc('    OutputStringJson(outputFile, "\\"returnValue\\" : \\"");')
            if self.isEnum(returnType):
                self.wc('    EnumToStringVkResult(outputFile, returnValue);')
            elif self.isFunctionPtr(returnType):
                self.wc('    AddrToStringJson(returnValue);')
            else:
                self.wc('    char rval_str[100];')
                self.wc('    snprintf(rval_str, sizeof(rval_str), "' + format(self.getFormatString(returnType)) + '"' + ', returnValue);')
                self.wc('    OutputStringJson(outputFile, rval_str);')
            self.wc('    OutputStringJson(outputFile, "\\",\\n");')
        self.wc('    IndentSpacesJson(outputFile, 3); // TTP')
        self.wc('    OutputStringJson(outputFile, "\\"args\\" :\\n");')
        self.wc('    IndentSpacesJson(outputFile, 3);')
        self.wc('    OutputStringJson(outputFile, "[\\n");')

        # Print args
        for value in values:
            self.newline()
            self.wc('    // func arg: ' + value.fullType + ' ' + value.name)
            self.wc('    IndentSpacesJson(outputFile, 4); // UWP')
            self.wc('    OutputStringJson(outputFile, "{\\n");')
            ValueToString.valueToString(self, value, name, "")
            self.wc('    IndentSpacesJson(outputFile, 4);')
            if value == values[-1]:
                # Don't put a comma after the last arg
                self.wc('    OutputStringJson(outputFile, "}\\n");')
            else:
                self.wc('    OutputStringJson(outputFile, "},\\n");')

        # End of arg list
        self.newline()
        self.wc('    IndentSpacesJson(outputFile, 3);')
        self.wc('    OutputStringJson(outputFile, "]\\n");')

        self.wc('    IndentSpacesJson(outputFile, 2); // RRW')
        if name != "vkQueuePresentKHR":
            # End of function
            self.wc('    OutputStringJson(outputFile, "}");')    # Note the lack of comma/newline. They are printed on the next func call.
        else:
            # End function and start new frame
            self.wc('    OutputStringJson(outputFile, "}\\n");')
            self.newline()
            self.wc('    static uint32_t frameNumber = 0;')
            self.wc('    frameNumber++;')
            self.wc('    IndentSpacesJson(outputFile, 1); // RWW')
            self.wc('    OutputStringJson(outputFile, "]\\n");')
            self.wc('    OutputStringJson(outputFile, "},\\n");')
            self.wc('    OutputStringJson(outputFile, "{\\n");')
            self.wc('    IndentSpacesJson(outputFile, 1);')
            self.wc('    OutputStringJson(outputFile, "\\"frameNumber\\" : \\"");')
            self.wc('    SignedDecimalToStringJson(outputFile, frameNumber);')
            self.wc('    OutputStringJson(outputFile, "\\",\\n");')
            self.wc('    IndentSpacesJson(outputFile, 1);')
            self.wc('    OutputStringJson(outputFile, "\\"apiCalls\\" :\\n");')
            self.wc('    IndentSpacesJson(outputFile, 1);')
            self.wc('    OutputStringJson(outputFile, "[\\n");')
            self.wc('    need_function_comma = false;')

        self.newline()

        # Closing brace of generated function
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
