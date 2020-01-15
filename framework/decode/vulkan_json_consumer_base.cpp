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

#include "decode/vulkan_json_consumer_base.h"

#include "util/platform.h"

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)

VulkanJsonConsumerBase::VulkanJsonConsumerBase() : m_file(nullptr) {}

VulkanJsonConsumerBase::~VulkanJsonConsumerBase()
{
    Destroy();
}

bool VulkanJsonConsumerBase::Initialize(const std::string& filename)
{
    bool success = false;

    if (m_file == nullptr)
    {
        int32_t result = util::platform::FileOpen(&m_file, filename.c_str(), "w");
        if (result == 0)
        {
            success    = true;
            m_filename = filename;
            fprintf(m_file, "[\n");   // Start program
            fprintf(m_file, "{\n");   // Start frame
			fprintf(m_file, "    \"frameNumber\" : \"0\",\n");
            fprintf(m_file, "    \"apiCalls\" :\n");
            fprintf(m_file, "    [\n");
        }
    }

    return success;
}

void VulkanJsonConsumerBase::Destroy()
{
    if (m_file != nullptr)
    {
        fprintf(m_file, "    ]\n");  // Close program
        fprintf(m_file, "}\n");  // Close frame - previous item should be an api call, and it should have been closed already
        fprintf(m_file, "]\n");  // Close program
		util::platform::FileClose(m_file);
    }
}

void VulkanJsonConsumerBase::Process_vkUpdateDescriptorSetWithTemplate(format::HandleId device,
                                                                       format::HandleId descriptorSet,
                                                                       format::HandleId descriptorUpdateTemplate,
                                                                       const DescriptorUpdateTemplateDecoder& pData)
{
    GFXRECON_UNREFERENCED_PARAMETER(device);
    GFXRECON_UNREFERENCED_PARAMETER(descriptorSet);
    GFXRECON_UNREFERENCED_PARAMETER(descriptorUpdateTemplate);
    GFXRECON_UNREFERENCED_PARAMETER(pData);
    fprintf(m_file, "%s\n", "vkUpdateDescriptorSetWithTemplate");
}

void VulkanJsonConsumerBase::Process_vkCmdPushDescriptorSetWithTemplateKHR(format::HandleId commandBuffer,
                                                                           format::HandleId descriptorUpdateTemplate,
                                                                           format::HandleId layout,
                                                                           uint32_t         set,
                                                                           const DescriptorUpdateTemplateDecoder& pData)
{
    GFXRECON_UNREFERENCED_PARAMETER(commandBuffer);
    GFXRECON_UNREFERENCED_PARAMETER(descriptorUpdateTemplate);
    GFXRECON_UNREFERENCED_PARAMETER(layout);
    GFXRECON_UNREFERENCED_PARAMETER(set);
    GFXRECON_UNREFERENCED_PARAMETER(pData);
    fprintf(m_file, "%s\n", "vkCmdPushDescriptorSetWithTemplateKHR");
}

void VulkanJsonConsumerBase::Process_vkUpdateDescriptorSetWithTemplateKHR(format::HandleId device,
                                                                          format::HandleId descriptorSet,
                                                                          format::HandleId descriptorUpdateTemplate,
                                                                          const DescriptorUpdateTemplateDecoder& pData)
{
    GFXRECON_UNREFERENCED_PARAMETER(device);
    GFXRECON_UNREFERENCED_PARAMETER(descriptorSet);
    GFXRECON_UNREFERENCED_PARAMETER(descriptorUpdateTemplate);
    GFXRECON_UNREFERENCED_PARAMETER(pData);
    fprintf(m_file, "%s\n", "vkUpdateDescriptorSetWithTemplateKHR");
}

void VulkanJsonConsumerBase::Process_vkRegisterObjectsNVX(
    VkResult                                                   returnValue,
    format::HandleId                                           device,
    format::HandleId                                           objectTable,
    uint32_t                                                   objectCount,
    const StructPointerDecoder<Decoded_VkObjectTableEntryNVX>& ppObjectTableEntries,
    const PointerDecoder<uint32_t>&                            pObjectIndices)
{
    GFXRECON_UNREFERENCED_PARAMETER(returnValue);
    GFXRECON_UNREFERENCED_PARAMETER(device);
    GFXRECON_UNREFERENCED_PARAMETER(objectTable);
    GFXRECON_UNREFERENCED_PARAMETER(objectCount);
    GFXRECON_UNREFERENCED_PARAMETER(ppObjectTableEntries);
    GFXRECON_UNREFERENCED_PARAMETER(pObjectIndices);
    fprintf(m_file, "%s\n", "vkRegisterObjectsNVX");
}

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)