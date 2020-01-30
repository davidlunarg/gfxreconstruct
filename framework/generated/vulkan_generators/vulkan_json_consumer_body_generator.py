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
#   Traverse and print pNext structures
#   Display thread information
#   Print pValues data in vkCmdPushConstants
#   Print wchar_t* strings. It's currently stubbed out to print only the addr.
#   Rename executable to gfxrecon2text, gfxrecon-totext, gfxrecon-to-text, gfxreconToText, or gfxrecontotext

# TODO: (Specific to json)
#    Output is not the same on consecutive runs
#    Framenumbers, threads

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
        self.wc('#include "generated/generated_vulkan_json_enum_util.h"')
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
        self.wc('    std::string outString = "";')
        self.wc('    std::string *out = &outString;')
        self.wc('    uint32_t indent = 5;')

        #TODO: @@@ Use IndentSpaces() for inentation below. Also for initial frameNumber:0 in some other file.
        self.wc('    fprintf(GetFile(), "        {\\n");')
        self.wc('    fprintf(GetFile(), "            \\"name\\" : \\"' + name + '\\",\\n");   // FCN')
        self.wc('    fprintf(GetFile(), "            \\"thread\\" : \\"Thread %ld\\",\\n", 13216);')   #TODO: get thread id
        self.wc('    fprintf(GetFile(), "            \\"returnType\\" : \\"' + returnType + '\\",\\n");')
        if returnType != 'void':
            #self.wc('    fprintf(GetFile(), "void\\"");')
            #else:
            self.wc('    fprintf(GetFile(), "            \\"returnValue\\" : \\"");')
            if self.isEnum(returnType):
                self.wc('    EnumToStringVkResultJson(&outString, returnValue);')
                #self.wc('    fprintf(GetFile(), "%s (%" PRId32 ")", outString.c_str(), returnValue);')    #TODO: Remove this?
                self.wc('    fprintf(GetFile(), "%s\\"", outString.c_str());')
            elif self.isFunctionPtr(returnType):
                self.wc('    fprintf(GetFile(), "0x%" PRIx64 ", static_cast<uint64_t>(returnValue));\n"')
            else:
                self.wc('    fprintf(GetFile(), "' + format(self.getFormatString(returnType)) + '\\"\\n", returnValue);')
            self.wc('    fprintf(GetFile(), ",\\n");')
        self.wc('    fprintf(GetFile(), "            \\"args\\" :\\n");')
        self.wc('    fprintf(GetFile(), "            [\\n");')

        # Print args
        self.wc('    outString = ""; //URT')
        for value in values:
            self.newline()
            self.wc('    // func arg: ' + value.fullType + ' ' + value.name)
            self.wc('    IndentSpacesJson(out, 4);  // UWP')
            self.wc('    *out += "{\\n";')
            ValueToString.valueToString(self, value, "")
            self.wc('    IndentSpacesJson(out, 4);')
            if value == values[-1]:
                # Don't put a comma after the last arg
                self.wc('    *out += "}\\n";')
            else:
                self.wc('    *out += "},\\n";')
        self.wc('    fprintf(GetFile(), "%s", outString.c_str());')

        # Close off output from function
        self.newline()
        self.wc('    fprintf(GetFile(), "            ]\\n");')
        if name == "vkQueuePresentKHR":
            self.wc('    fprintf(GetFile(), "        }\\n");')
        else:
            self.wc('    fprintf(GetFile(), "        },\\n");')     # TODO: Dont need a comma on last api call of file. Need to close apiCalls, frame, and prog.

        # New frame
        if name == "vkQueuePresentKHR":
            self.newline()
            self.wc('    static uint32_t frameNumber = 0;')
            self.wc('    outString = "";')
            self.wc('    frameNumber++;')
            self.wc('    IndentSpacesJson(out, 1);')
            self.wc('    *out += "]\\n";')
            self.wc('    *out += "},\\n";')
            self.wc('    *out += "{\\n";')
            self.wc('    IndentSpacesJson(out, 1);')
            self.wc('    *out += "\\"frameNumber\\" : \\"";')
            self.wc('    SignedDecimalToStringJson(out, frameNumber);')
            self.wc('    *out += "\\",\\n";')
            self.wc('    IndentSpacesJson(out, 1);')
            self.wc('    *out += "\\"apiCalls\\" :\\n";')
            self.wc('    IndentSpacesJson(out, 1);')
            self.wc('    *out += "[\\n";')
            self.wc('    fprintf(GetFile(), "%s", outString.c_str());')

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
