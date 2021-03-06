/*
** Copyright (c) 2018 Valve Corporation
** Copyright (c) 2018 LunarG, Inc.
**
** Licensed under the Apache License, Version 2.0 (the "License");
** you may not use this file except in compliance with the License.
** You may obtain a copy of the License at
**
**     http://www.apache.org/licenses/LICENSE-2.0
**
** Unless required by applicable law or agreed to in writing, software
** distributed under the License is distributed on an "AS IS" BASIS,
** WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
** See the License for the specific language governing permissions and
** limitations under the License.
*/

#ifndef GFXRECON_DECODE_VULKAN_CONSUMER_BASE_H
#define GFXRECON_DECODE_VULKAN_CONSUMER_BASE_H

#include "format/platform_types.h"
#include "decode/descriptor_update_template_decoder.h"
#include "decode/pointer_decoder.h"
#include "decode/string_decoder.h"
#include "decode/struct_pointer_decoder.h"
#include "decode/struct_pointer_decoder_nvx.h"
#include "util/defines.h"

#include "vulkan/vulkan.h"

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)

class VulkanConsumerBase
{
  public:
    VulkanConsumerBase() {}

    virtual ~VulkanConsumerBase() {}

    virtual void ProcessDisplayMessageCommand(const std::string& message) {}

    virtual void ProcessFillMemoryCommand(uint64_t memory_id, uint64_t offset, uint64_t size, const uint8_t* data) {}

    virtual void ProcessResizeWindowCommand(format::HandleId surface_id, uint32_t width, uint32_t height) {}

    virtual void Process_vkUpdateDescriptorSetWithTemplate(format::HandleId device,
                                                           format::HandleId descriptorSet,
                                                           format::HandleId descriptorUpdateTemplate,
                                                           const DescriptorUpdateTemplateDecoder& pData) = 0;

    virtual void Process_vkCmdPushDescriptorSetWithTemplateKHR(format::HandleId commandBuffer,
                                                               format::HandleId descriptorUpdateTemplate,
                                                               format::HandleId layout,
                                                               uint32_t         set,
                                                               const DescriptorUpdateTemplateDecoder& pData) = 0;

    virtual void Process_vkUpdateDescriptorSetWithTemplateKHR(format::HandleId device,
                                                              format::HandleId descriptorSet,
                                                              format::HandleId descriptorUpdateTemplate,
                                                              const DescriptorUpdateTemplateDecoder& pData) = 0;

    virtual void
    Process_vkRegisterObjectsNVX(VkResult                                                   returnValue,
                                 format::HandleId                                           device,
                                 format::HandleId                                           objectTable,
                                 uint32_t                                                   objectCount,
                                 const StructPointerDecoder<Decoded_VkObjectTableEntryNVX>& ppObjectTableEntries,
                                 const PointerDecoder<uint32_t>&                            pObjectIndices) = 0;
};

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif // GFXRECON_DECODE_VULKAN_CONSUMER_BASE_H
