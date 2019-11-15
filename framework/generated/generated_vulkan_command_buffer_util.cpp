/*
** Copyright (c) 2018-2019 Valve Corporation
** Copyright (c) 2018-2019 LunarG, Inc.
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

/*
** This file is generated from the Khronos Vulkan XML API Registry.
**
*/

#include "generated/generated_vulkan_command_buffer_util.h"

#include "encode/vulkan_handle_wrapper_util.h"
#include "encode/vulkan_state_info.h"

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(encode)

void TrackCmdBlitImageHandles(CommandBufferWrapper* wrapper, VkImage srcImage, VkImage dstImage)
{
    assert(wrapper != nullptr);

    wrapper->command_handles[CommandHandleType::ImageHandle].insert(GetWrappedId(srcImage));
    wrapper->command_handles[CommandHandleType::ImageHandle].insert(GetWrappedId(dstImage));
}

void TrackCmdCopyQueryPoolResultsHandles(CommandBufferWrapper* wrapper, VkQueryPool queryPool, VkBuffer dstBuffer)
{
    assert(wrapper != nullptr);

    wrapper->command_handles[CommandHandleType::QueryPoolHandle].insert(GetWrappedId(queryPool));
    wrapper->command_handles[CommandHandleType::BufferHandle].insert(GetWrappedId(dstBuffer));
}

void TrackCmdResetQueryPoolHandles(CommandBufferWrapper* wrapper, VkQueryPool queryPool)
{
    assert(wrapper != nullptr);

    wrapper->command_handles[CommandHandleType::QueryPoolHandle].insert(GetWrappedId(queryPool));
}

void TrackCmdFillBufferHandles(CommandBufferWrapper* wrapper, VkBuffer dstBuffer)
{
    assert(wrapper != nullptr);

    wrapper->command_handles[CommandHandleType::BufferHandle].insert(GetWrappedId(dstBuffer));
}

void TrackCmdBindIndexBufferHandles(CommandBufferWrapper* wrapper, VkBuffer buffer)
{
    assert(wrapper != nullptr);

    wrapper->command_handles[CommandHandleType::BufferHandle].insert(GetWrappedId(buffer));
}

void TrackCmdUpdateBufferHandles(CommandBufferWrapper* wrapper, VkBuffer dstBuffer)
{
    assert(wrapper != nullptr);

    wrapper->command_handles[CommandHandleType::BufferHandle].insert(GetWrappedId(dstBuffer));
}

void TrackCmdPushConstantsHandles(CommandBufferWrapper* wrapper, VkPipelineLayout layout)
{
    assert(wrapper != nullptr);

    wrapper->command_handles[CommandHandleType::PipelineLayoutHandle].insert(GetWrappedId(layout));
}

void TrackCmdCopyBufferHandles(CommandBufferWrapper* wrapper, VkBuffer srcBuffer, VkBuffer dstBuffer)
{
    assert(wrapper != nullptr);

    wrapper->command_handles[CommandHandleType::BufferHandle].insert(GetWrappedId(srcBuffer));
    wrapper->command_handles[CommandHandleType::BufferHandle].insert(GetWrappedId(dstBuffer));
}

void TrackCmdWriteTimestampHandles(CommandBufferWrapper* wrapper, VkQueryPool queryPool)
{
    assert(wrapper != nullptr);

    wrapper->command_handles[CommandHandleType::QueryPoolHandle].insert(GetWrappedId(queryPool));
}

void TrackCmdWaitEventsHandles(CommandBufferWrapper* wrapper, uint32_t eventCount, const VkEvent* pEvents, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers)
{
    assert(wrapper != nullptr);

    if (pEvents != nullptr)
    {
        for (uint32_t i = 0; i < eventCount; ++i)
        {
            wrapper->command_handles[CommandHandleType::EventHandle].insert(GetWrappedId(pEvents[i]));
        }
    }

    if (pBufferMemoryBarriers != nullptr)
    {
        for (uint32_t i = 0; i < bufferMemoryBarrierCount; ++i)
        {
            wrapper->command_handles[CommandHandleType::BufferHandle].insert(GetWrappedId(pBufferMemoryBarriers[i].buffer));
        }
    }

    if (pImageMemoryBarriers != nullptr)
    {
        for (uint32_t i = 0; i < imageMemoryBarrierCount; ++i)
        {
            wrapper->command_handles[CommandHandleType::ImageHandle].insert(GetWrappedId(pImageMemoryBarriers[i].image));
        }
    }
}

void TrackCmdEndQueryHandles(CommandBufferWrapper* wrapper, VkQueryPool queryPool)
{
    assert(wrapper != nullptr);

    wrapper->command_handles[CommandHandleType::QueryPoolHandle].insert(GetWrappedId(queryPool));
}

void TrackBeginCommandBufferHandles(CommandBufferWrapper* wrapper, const VkCommandBufferBeginInfo* pBeginInfo)
{
    assert(wrapper != nullptr);

    if (pBeginInfo != nullptr)
    {
        // TODO: Process handles from parameter "pInheritanceInfo" with type "const VkCommandBufferInheritanceInfo*"
    }
}

void TrackCmdBeginRenderPassHandles(CommandBufferWrapper* wrapper, const VkRenderPassBeginInfo* pRenderPassBegin)
{
    assert(wrapper != nullptr);

    if (pRenderPassBegin != nullptr)
    {
        // TODO: Process handles from parameter "pNext" with type "const void*"
        wrapper->command_handles[CommandHandleType::RenderPassHandle].insert(GetWrappedId((*pRenderPassBegin).renderPass));
        wrapper->command_handles[CommandHandleType::FramebufferHandle].insert(GetWrappedId((*pRenderPassBegin).framebuffer));
    }
}

void TrackCmdBeginQueryHandles(CommandBufferWrapper* wrapper, VkQueryPool queryPool)
{
    assert(wrapper != nullptr);

    wrapper->command_handles[CommandHandleType::QueryPoolHandle].insert(GetWrappedId(queryPool));
}

void TrackCmdBindPipelineHandles(CommandBufferWrapper* wrapper, VkPipeline pipeline)
{
    assert(wrapper != nullptr);

    wrapper->command_handles[CommandHandleType::PipelineHandle].insert(GetWrappedId(pipeline));
}

void TrackCmdDrawIndexedIndirectHandles(CommandBufferWrapper* wrapper, VkBuffer buffer)
{
    assert(wrapper != nullptr);

    wrapper->command_handles[CommandHandleType::BufferHandle].insert(GetWrappedId(buffer));
}

void TrackCmdResetEventHandles(CommandBufferWrapper* wrapper, VkEvent event)
{
    assert(wrapper != nullptr);

    wrapper->command_handles[CommandHandleType::EventHandle].insert(GetWrappedId(event));
}

void TrackCmdDispatchIndirectHandles(CommandBufferWrapper* wrapper, VkBuffer buffer)
{
    assert(wrapper != nullptr);

    wrapper->command_handles[CommandHandleType::BufferHandle].insert(GetWrappedId(buffer));
}

void TrackCmdResolveImageHandles(CommandBufferWrapper* wrapper, VkImage srcImage, VkImage dstImage)
{
    assert(wrapper != nullptr);

    wrapper->command_handles[CommandHandleType::ImageHandle].insert(GetWrappedId(srcImage));
    wrapper->command_handles[CommandHandleType::ImageHandle].insert(GetWrappedId(dstImage));
}

void TrackCmdSetEventHandles(CommandBufferWrapper* wrapper, VkEvent event)
{
    assert(wrapper != nullptr);

    wrapper->command_handles[CommandHandleType::EventHandle].insert(GetWrappedId(event));
}

void TrackCmdExecuteCommandsHandles(CommandBufferWrapper* wrapper, uint32_t commandBufferCount, const VkCommandBuffer* pCommandBuffers)
{
    assert(wrapper != nullptr);

    if (pCommandBuffers != nullptr)
    {
        for (uint32_t i = 0; i < commandBufferCount; ++i)
        {
            wrapper->command_handles[CommandHandleType::CommandBufferHandle].insert(GetWrappedId(pCommandBuffers[i]));
        }
    }
}

void TrackCmdClearColorImageHandles(CommandBufferWrapper* wrapper, VkImage image)
{
    assert(wrapper != nullptr);

    wrapper->command_handles[CommandHandleType::ImageHandle].insert(GetWrappedId(image));
}

void TrackCmdBindVertexBuffersHandles(CommandBufferWrapper* wrapper, uint32_t bindingCount, const VkBuffer* pBuffers)
{
    assert(wrapper != nullptr);

    if (pBuffers != nullptr)
    {
        for (uint32_t i = 0; i < bindingCount; ++i)
        {
            wrapper->command_handles[CommandHandleType::BufferHandle].insert(GetWrappedId(pBuffers[i]));
        }
    }
}

void TrackCmdCopyImageToBufferHandles(CommandBufferWrapper* wrapper, VkImage srcImage, VkBuffer dstBuffer)
{
    assert(wrapper != nullptr);

    wrapper->command_handles[CommandHandleType::ImageHandle].insert(GetWrappedId(srcImage));
    wrapper->command_handles[CommandHandleType::BufferHandle].insert(GetWrappedId(dstBuffer));
}

void TrackCmdCopyImageHandles(CommandBufferWrapper* wrapper, VkImage srcImage, VkImage dstImage)
{
    assert(wrapper != nullptr);

    wrapper->command_handles[CommandHandleType::ImageHandle].insert(GetWrappedId(srcImage));
    wrapper->command_handles[CommandHandleType::ImageHandle].insert(GetWrappedId(dstImage));
}

void TrackCmdClearDepthStencilImageHandles(CommandBufferWrapper* wrapper, VkImage image)
{
    assert(wrapper != nullptr);

    wrapper->command_handles[CommandHandleType::ImageHandle].insert(GetWrappedId(image));
}

void TrackCmdDrawIndirectHandles(CommandBufferWrapper* wrapper, VkBuffer buffer)
{
    assert(wrapper != nullptr);

    wrapper->command_handles[CommandHandleType::BufferHandle].insert(GetWrappedId(buffer));
}

void TrackCmdBindDescriptorSetsHandles(CommandBufferWrapper* wrapper, VkPipelineLayout layout, uint32_t descriptorSetCount, const VkDescriptorSet* pDescriptorSets)
{
    assert(wrapper != nullptr);

    wrapper->command_handles[CommandHandleType::PipelineLayoutHandle].insert(GetWrappedId(layout));

    if (pDescriptorSets != nullptr)
    {
        for (uint32_t i = 0; i < descriptorSetCount; ++i)
        {
            wrapper->command_handles[CommandHandleType::DescriptorSetHandle].insert(GetWrappedId(pDescriptorSets[i]));
        }
    }
}

void TrackCmdCopyBufferToImageHandles(CommandBufferWrapper* wrapper, VkBuffer srcBuffer, VkImage dstImage)
{
    assert(wrapper != nullptr);

    wrapper->command_handles[CommandHandleType::BufferHandle].insert(GetWrappedId(srcBuffer));
    wrapper->command_handles[CommandHandleType::ImageHandle].insert(GetWrappedId(dstImage));
}

void TrackCmdPipelineBarrierHandles(CommandBufferWrapper* wrapper, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers)
{
    assert(wrapper != nullptr);

    if (pBufferMemoryBarriers != nullptr)
    {
        for (uint32_t i = 0; i < bufferMemoryBarrierCount; ++i)
        {
            wrapper->command_handles[CommandHandleType::BufferHandle].insert(GetWrappedId(pBufferMemoryBarriers[i].buffer));
        }
    }

    if (pImageMemoryBarriers != nullptr)
    {
        for (uint32_t i = 0; i < imageMemoryBarrierCount; ++i)
        {
            wrapper->command_handles[CommandHandleType::ImageHandle].insert(GetWrappedId(pImageMemoryBarriers[i].image));
        }
    }
}

void TrackCmdPushDescriptorSetKHRHandles(CommandBufferWrapper* wrapper, VkPipelineLayout layout, uint32_t descriptorWriteCount, const VkWriteDescriptorSet* pDescriptorWrites)
{
    assert(wrapper != nullptr);

    wrapper->command_handles[CommandHandleType::PipelineLayoutHandle].insert(GetWrappedId(layout));

    if (pDescriptorWrites != nullptr)
    {
        for (uint32_t i = 0; i < descriptorWriteCount; ++i)
        {
            // TODO: Process handles from parameter "pNext" with type "const void*"
            wrapper->command_handles[CommandHandleType::DescriptorSetHandle].insert(GetWrappedId(pDescriptorWrites[i].dstSet));
            // TODO: Process handles from parameter "pImageInfo" with type "const VkDescriptorImageInfo*"
            // TODO: Process handles from parameter "pBufferInfo" with type "const VkDescriptorBufferInfo*"
            // TODO: Process handles from parameter "pTexelBufferView" with type "const VkBufferView*"
        }
    }
}

void TrackCmdBeginRenderPass2KHRHandles(CommandBufferWrapper* wrapper, const VkRenderPassBeginInfo* pRenderPassBegin)
{
    assert(wrapper != nullptr);

    if (pRenderPassBegin != nullptr)
    {
        // TODO: Process handles from parameter "pNext" with type "const void*"
        wrapper->command_handles[CommandHandleType::RenderPassHandle].insert(GetWrappedId((*pRenderPassBegin).renderPass));
        wrapper->command_handles[CommandHandleType::FramebufferHandle].insert(GetWrappedId((*pRenderPassBegin).framebuffer));
    }
}

void TrackCmdDrawIndirectCountKHRHandles(CommandBufferWrapper* wrapper, VkBuffer buffer, VkBuffer countBuffer)
{
    assert(wrapper != nullptr);

    wrapper->command_handles[CommandHandleType::BufferHandle].insert(GetWrappedId(buffer));
    wrapper->command_handles[CommandHandleType::BufferHandle].insert(GetWrappedId(countBuffer));
}

void TrackCmdDrawIndexedIndirectCountKHRHandles(CommandBufferWrapper* wrapper, VkBuffer buffer, VkBuffer countBuffer)
{
    assert(wrapper != nullptr);

    wrapper->command_handles[CommandHandleType::BufferHandle].insert(GetWrappedId(buffer));
    wrapper->command_handles[CommandHandleType::BufferHandle].insert(GetWrappedId(countBuffer));
}

void TrackCmdBindTransformFeedbackBuffersEXTHandles(CommandBufferWrapper* wrapper, uint32_t bindingCount, const VkBuffer* pBuffers)
{
    assert(wrapper != nullptr);

    if (pBuffers != nullptr)
    {
        for (uint32_t i = 0; i < bindingCount; ++i)
        {
            wrapper->command_handles[CommandHandleType::BufferHandle].insert(GetWrappedId(pBuffers[i]));
        }
    }
}

void TrackCmdBeginQueryIndexedEXTHandles(CommandBufferWrapper* wrapper, VkQueryPool queryPool)
{
    assert(wrapper != nullptr);

    wrapper->command_handles[CommandHandleType::QueryPoolHandle].insert(GetWrappedId(queryPool));
}

void TrackCmdDrawIndirectByteCountEXTHandles(CommandBufferWrapper* wrapper, VkBuffer counterBuffer)
{
    assert(wrapper != nullptr);

    wrapper->command_handles[CommandHandleType::BufferHandle].insert(GetWrappedId(counterBuffer));
}

void TrackCmdEndQueryIndexedEXTHandles(CommandBufferWrapper* wrapper, VkQueryPool queryPool)
{
    assert(wrapper != nullptr);

    wrapper->command_handles[CommandHandleType::QueryPoolHandle].insert(GetWrappedId(queryPool));
}

void TrackCmdBeginTransformFeedbackEXTHandles(CommandBufferWrapper* wrapper, uint32_t counterBufferCount, const VkBuffer* pCounterBuffers)
{
    assert(wrapper != nullptr);

    if (pCounterBuffers != nullptr)
    {
        for (uint32_t i = 0; i < counterBufferCount; ++i)
        {
            wrapper->command_handles[CommandHandleType::BufferHandle].insert(GetWrappedId(pCounterBuffers[i]));
        }
    }
}

void TrackCmdEndTransformFeedbackEXTHandles(CommandBufferWrapper* wrapper, uint32_t counterBufferCount, const VkBuffer* pCounterBuffers)
{
    assert(wrapper != nullptr);

    if (pCounterBuffers != nullptr)
    {
        for (uint32_t i = 0; i < counterBufferCount; ++i)
        {
            wrapper->command_handles[CommandHandleType::BufferHandle].insert(GetWrappedId(pCounterBuffers[i]));
        }
    }
}

void TrackCmdDrawIndirectCountAMDHandles(CommandBufferWrapper* wrapper, VkBuffer buffer, VkBuffer countBuffer)
{
    assert(wrapper != nullptr);

    wrapper->command_handles[CommandHandleType::BufferHandle].insert(GetWrappedId(buffer));
    wrapper->command_handles[CommandHandleType::BufferHandle].insert(GetWrappedId(countBuffer));
}

void TrackCmdDrawIndexedIndirectCountAMDHandles(CommandBufferWrapper* wrapper, VkBuffer buffer, VkBuffer countBuffer)
{
    assert(wrapper != nullptr);

    wrapper->command_handles[CommandHandleType::BufferHandle].insert(GetWrappedId(buffer));
    wrapper->command_handles[CommandHandleType::BufferHandle].insert(GetWrappedId(countBuffer));
}

void TrackCmdBeginConditionalRenderingEXTHandles(CommandBufferWrapper* wrapper, const VkConditionalRenderingBeginInfoEXT* pConditionalRenderingBegin)
{
    assert(wrapper != nullptr);

    if (pConditionalRenderingBegin != nullptr)
    {
        wrapper->command_handles[CommandHandleType::BufferHandle].insert(GetWrappedId((*pConditionalRenderingBegin).buffer));
    }
}

void TrackCmdReserveSpaceForCommandsNVXHandles(CommandBufferWrapper* wrapper, const VkCmdReserveSpaceForCommandsInfoNVX* pReserveSpaceInfo)
{
    assert(wrapper != nullptr);

    if (pReserveSpaceInfo != nullptr)
    {
        wrapper->command_handles[CommandHandleType::ObjectTableNVXHandle].insert(GetWrappedId((*pReserveSpaceInfo).objectTable));
        wrapper->command_handles[CommandHandleType::IndirectCommandsLayoutNVXHandle].insert(GetWrappedId((*pReserveSpaceInfo).indirectCommandsLayout));
    }
}

void TrackCmdProcessCommandsNVXHandles(CommandBufferWrapper* wrapper, const VkCmdProcessCommandsInfoNVX* pProcessCommandsInfo)
{
    assert(wrapper != nullptr);

    if (pProcessCommandsInfo != nullptr)
    {
        wrapper->command_handles[CommandHandleType::ObjectTableNVXHandle].insert(GetWrappedId((*pProcessCommandsInfo).objectTable));
        wrapper->command_handles[CommandHandleType::IndirectCommandsLayoutNVXHandle].insert(GetWrappedId((*pProcessCommandsInfo).indirectCommandsLayout));
        // TODO: Process handles from parameter "pIndirectCommandsTokens" with type "const VkIndirectCommandsTokenNVX*"
        wrapper->command_handles[CommandHandleType::CommandBufferHandle].insert(GetWrappedId((*pProcessCommandsInfo).targetCommandBuffer));
        wrapper->command_handles[CommandHandleType::BufferHandle].insert(GetWrappedId((*pProcessCommandsInfo).sequencesCountBuffer));
        wrapper->command_handles[CommandHandleType::BufferHandle].insert(GetWrappedId((*pProcessCommandsInfo).sequencesIndexBuffer));
    }
}

void TrackCmdBindShadingRateImageNVHandles(CommandBufferWrapper* wrapper, VkImageView imageView)
{
    assert(wrapper != nullptr);

    wrapper->command_handles[CommandHandleType::ImageViewHandle].insert(GetWrappedId(imageView));
}

void TrackCmdBuildAccelerationStructureNVHandles(CommandBufferWrapper* wrapper, const VkAccelerationStructureInfoNV* pInfo, VkBuffer instanceData, VkAccelerationStructureNV dst, VkAccelerationStructureNV src, VkBuffer scratch)
{
    assert(wrapper != nullptr);

    if (pInfo != nullptr)
    {
        // TODO: Process handles from parameter "pGeometries" with type "const VkGeometryNV*"
    }
    wrapper->command_handles[CommandHandleType::BufferHandle].insert(GetWrappedId(instanceData));
    wrapper->command_handles[CommandHandleType::AccelerationStructureNVHandle].insert(GetWrappedId(dst));
    wrapper->command_handles[CommandHandleType::AccelerationStructureNVHandle].insert(GetWrappedId(src));
    wrapper->command_handles[CommandHandleType::BufferHandle].insert(GetWrappedId(scratch));
}

void TrackCmdTraceRaysNVHandles(CommandBufferWrapper* wrapper, VkBuffer raygenShaderBindingTableBuffer, VkBuffer missShaderBindingTableBuffer, VkBuffer hitShaderBindingTableBuffer, VkBuffer callableShaderBindingTableBuffer)
{
    assert(wrapper != nullptr);

    wrapper->command_handles[CommandHandleType::BufferHandle].insert(GetWrappedId(raygenShaderBindingTableBuffer));
    wrapper->command_handles[CommandHandleType::BufferHandle].insert(GetWrappedId(missShaderBindingTableBuffer));
    wrapper->command_handles[CommandHandleType::BufferHandle].insert(GetWrappedId(hitShaderBindingTableBuffer));
    wrapper->command_handles[CommandHandleType::BufferHandle].insert(GetWrappedId(callableShaderBindingTableBuffer));
}

void TrackCmdCopyAccelerationStructureNVHandles(CommandBufferWrapper* wrapper, VkAccelerationStructureNV dst, VkAccelerationStructureNV src)
{
    assert(wrapper != nullptr);

    wrapper->command_handles[CommandHandleType::AccelerationStructureNVHandle].insert(GetWrappedId(dst));
    wrapper->command_handles[CommandHandleType::AccelerationStructureNVHandle].insert(GetWrappedId(src));
}

void TrackCmdWriteAccelerationStructuresPropertiesNVHandles(CommandBufferWrapper* wrapper, uint32_t accelerationStructureCount, const VkAccelerationStructureNV* pAccelerationStructures, VkQueryPool queryPool)
{
    assert(wrapper != nullptr);

    if (pAccelerationStructures != nullptr)
    {
        for (uint32_t i = 0; i < accelerationStructureCount; ++i)
        {
            wrapper->command_handles[CommandHandleType::AccelerationStructureNVHandle].insert(GetWrappedId(pAccelerationStructures[i]));
        }
    }
    wrapper->command_handles[CommandHandleType::QueryPoolHandle].insert(GetWrappedId(queryPool));
}

void TrackCmdWriteBufferMarkerAMDHandles(CommandBufferWrapper* wrapper, VkBuffer dstBuffer)
{
    assert(wrapper != nullptr);

    wrapper->command_handles[CommandHandleType::BufferHandle].insert(GetWrappedId(dstBuffer));
}

void TrackCmdDrawMeshTasksIndirectNVHandles(CommandBufferWrapper* wrapper, VkBuffer buffer)
{
    assert(wrapper != nullptr);

    wrapper->command_handles[CommandHandleType::BufferHandle].insert(GetWrappedId(buffer));
}

void TrackCmdDrawMeshTasksIndirectCountNVHandles(CommandBufferWrapper* wrapper, VkBuffer buffer, VkBuffer countBuffer)
{
    assert(wrapper != nullptr);

    wrapper->command_handles[CommandHandleType::BufferHandle].insert(GetWrappedId(buffer));
    wrapper->command_handles[CommandHandleType::BufferHandle].insert(GetWrappedId(countBuffer));
}

GFXRECON_END_NAMESPACE(encode)
GFXRECON_END_NAMESPACE(gfxrecon)
