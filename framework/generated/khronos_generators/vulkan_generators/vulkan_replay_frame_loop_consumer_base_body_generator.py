#!/usr/bin/python3 -i
#
# Copyright (c) 2018-2020 Valve Corporation
# Copyright (c) 2018-2023 LunarG, Inc.
# Copyright (c) 2023 Advanced Micro Devices, Inc. All rights reserved.
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to
# deal in the Software without restriction, including without limitation the
# rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
# sell copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in
# all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
# FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
# IN THE SOFTWARE.

# TODO: This was ported from replay consumer. There's lots of extra code here
# that is specific to the replay consumer that should be removed.

import json
import sys
from vulkan_base_generator import VulkanBaseGenerator, VulkanBaseGeneratorOptions, write
from khronos_replay_frame_loop_consumer_base_body_generator import KhronosReplayFrameLoopConsumerBaseBodyGenerator


class VulkanReplayFrameLoopConsumerBaseBodyGeneratorOptions(VulkanBaseGeneratorOptions):
    """Options for generating a C++ class for Vulkan capture file replay."""

    def __init__(
        self,
        replay_frame_loop_overrides=None, # Path to JSON file listing Vulkan API calls to override on replay.
        replay_async_overrides=None,      # TODO: Remove?
        blacklists=None,                  # Path to JSON file listing apicalls and structs to ignore. TODO: Needed?
        platform_types=None,              # Path to JSON file listing platform (WIN32, X11, etc.) defined types.
        filename=None,
        directory='.',
        prefix_text='',
        protect_file=False,
        protect_feature=True,
        extra_headers=[]
    ):
        VulkanBaseGeneratorOptions.__init__(
            self,
            blacklists,
            platform_types,
            filename,
            directory,
            prefix_text,
            protect_file,
            protect_feature,
            replay_frame_loop_overrides=replay_frame_loop_overrides,
            replay_async_overrides=replay_async_overrides,
            extra_headers=extra_headers
        )

        self.begin_end_file_data.specific_headers.extend((
            'generated/generated_vulkan_replay_consumer.h',
            'generated/generated_vulkan_replay_frame_loop_consumer_base.h',
        ))
        self.begin_end_file_data.namespaces.extend(('gfxrecon', 'decode'))
        self.begin_end_file_data.common_api_headers = []

class VulkanReplayFrameLoopConsumerBaseBodyGenerator(
    KhronosReplayFrameLoopConsumerBaseBodyGenerator, VulkanBaseGenerator
):
    """VulkanReplayFrameLoopConsumerBaseBodyGenerator - subclass of VulkanBaseGenerator.
    Generates C++ member definitions for the VulkanReplayFrameLoopConsumerBase class responsible for
    replaying decoded Vulkan API call parameter data..... TODO
    Generate a C++ class for Vulkan capture file replay.
    """

    # Map of pool object types associating the pool type with the allocated type and the allocated type with the pool type.
    POOL_OBJECT_ASSOCIATIONS = {
        'VkCommandBuffer': 'VkCommandPool',
        'VkDescriptorSet': 'VkDescriptorPool',
        'VkCommandPool': 'VkCommandBuffer',
        'VkDescriptorPool': 'VkDescriptorSet'
    }

    NOT_SKIP_FUNCTIONS_OFFSCREEN = ['Create', 'Destroy', 'GetSwapchainImages', 'AcquireNextImage', 'QueuePresent']

    SKIP_FUNCTIONS_OFFSCREEN = ['Surface', 'Swapchain', 'Present']

    def __init__(
        self, err_file=sys.stderr, warn_file=sys.stderr, diag_file=sys.stdout
    ):
        VulkanBaseGenerator.__init__(
            self,
            err_file=err_file,
            warn_file=warn_file,
            diag_file=diag_file
        )


    def endFile(self):
        """Method override."""
        api_data = self.get_api_data()

        KhronosReplayFrameLoopConsumerBaseBodyGenerator.generate_replay_frame_loop_consumer_content(self, api_data)

        self.newline()

        # Finish processing in superclass
        VulkanBaseGenerator.endFile(self)


    def is_instance_type(self, typename):
        ''' Method overide. '''
        api_data = self.get_api_data()
        if typename == api_data.instance_type or typename in ['VkPhysicalDevice']:
            return True
        return False

    def use_instance_table(self, name, typename):
        ''' Method overide. '''
        if self.is_instance_type(typename):
            return True
        # vkSetDebugUtilsObjectNameEXT and vkSetDebugUtilsObjectTagEXT
        # need to be probed from GetInstanceProcAddress due to a loader issue.
        # https://github.com/KhronosGroup/Vulkan-Loader/issues/1109
        # TODO : When loader with fix for issue is widely available, remove this
        # special case.
        if name in ['vkSetDebugUtilsObjectNameEXT', 'vkSetDebugUtilsObjectTagEXT']:
            return True
        return False

    def check_skip_offscreen(self, values, name):
        """Method override. """
        body = ''
        is_print = False
        for value in values:
            for key in self.SKIP_FUNCTIONS_OFFSCREEN:
                if self.is_has_specific_key_word_in_type(value, key):
                    if name == 'vkAcquireFullScreenExclusiveModeEXT':
                        body += '    if ((options_.swapchain_option == util::SwapchainOption::kOffscreen) || (options_.force_windowed_origin == true) || (options_.force_windowed == true))\n'
                    else:
                        body += '    if (options_.swapchain_option == util::SwapchainOption::kOffscreen)\n'
                    body += '    {\n'
                    if name == 'vkAcquireFullScreenExclusiveModeEXT':
                        body += '        GFXRECON_LOG_DEBUG("Skip ' + name + ' for offscreen or force windowed mode.");\n'
                    else:
                        body += '        GFXRECON_LOG_DEBUG("Skip ' + name + ' for offscreen.");\n'
                    body += '        return;\n'
                    body += '    }\n'
                    is_print = True
                    break
            if is_print:
                break
        return body

    def handle_instance_device_items(self):
        """Method override."""
        device_items = []
        device_items.append("VulkanDeviceInfo* device_info     = GetObjectInfoTable().GetVkDeviceInfo(device);")
        device_items.append("VkPhysicalDevice  physical_device = device_info->parent;")
        return 'physical_device', device_items

    def is_custom_return_type(self, api_data, typename):
        """Method override."""
        return typename == api_data.return_type_enum or typename == 'VkDeviceAddress'

    def handle_custom_return_type(self, name, dispatch_func, arg_list):
        """Method override."""
        # Override functions receive the decoded return value in addition to parameters.
        call_expr = ''
        if name not in ['vkQueueSubmit', 'vkBeginCommandBuffer']:
            call_expr = '{}({}, returnValue, {})'.format(
                self.REPLAY_OVERRIDES[name], dispatch_func, arg_list
            )
        else:
            call_expr = '{}({}, call_info.index, returnValue, {})'.format(
                self.REPLAY_OVERRIDES[name], dispatch_func, arg_list
            )
        return call_expr

    def is_async_handle_type(self, basetype):
        return basetype in ["VkPipeline", "VkShaderExt"]
