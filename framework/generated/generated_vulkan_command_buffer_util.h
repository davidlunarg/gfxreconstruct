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

#ifndef  GFXRECON_GENERATED_VULKAN_COMMAND_BUFFER_UTIL_H
#define  GFXRECON_GENERATED_VULKAN_COMMAND_BUFFER_UTIL_H

#include "encode/vulkan_handle_wrappers.h"
#include "util/defines.h"

#include "vulkan/vulkan.h"

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(encode)

void TrackCmdExecuteCommandsHandles(CommandBufferWrapper* wrapper, uint32_t commandBufferCount, const VkCommandBuffer* pCommandBuffers);

void TrackCmdBeginRenderPassHandles(CommandBufferWrapper* wrapper, const VkRenderPassBeginInfo* pRenderPassBegin);

void TrackCmdBlitImageHandles(CommandBufferWrapper* wrapper, VkImage srcImage, VkImage dstImage);

void TrackBeginCommandBufferHandles(CommandBufferWrapper* wrapper, const VkCommandBufferBeginInfo* pBeginInfo);

void TrackCmdSetEventHandles(CommandBufferWrapper* wrapper, VkEvent event);

void TrackCmdBindIndexBufferHandles(CommandBufferWrapper* wrapper, VkBuffer buffer);

void TrackCmdCopyImageToBufferHandles(CommandBufferWrapper* wrapper, VkImage srcImage, VkBuffer dstBuffer);

void TrackCmdCopyBufferHandles(CommandBufferWrapper* wrapper, VkBuffer srcBuffer, VkBuffer dstBuffer);

void TrackCmdDispatchIndirectHandles(CommandBufferWrapper* wrapper, VkBuffer buffer);

void TrackCmdWriteTimestampHandles(CommandBufferWrapper* wrapper, VkQueryPool queryPool);

void TrackCmdClearDepthStencilImageHandles(CommandBufferWrapper* wrapper, VkImage image);

void TrackCmdFillBufferHandles(CommandBufferWrapper* wrapper, VkBuffer dstBuffer);

void TrackCmdBeginQueryHandles(CommandBufferWrapper* wrapper, VkQueryPool queryPool);

void TrackCmdResetEventHandles(CommandBufferWrapper* wrapper, VkEvent event);

void TrackCmdResetQueryPoolHandles(CommandBufferWrapper* wrapper, VkQueryPool queryPool);

void TrackCmdCopyImageHandles(CommandBufferWrapper* wrapper, VkImage srcImage, VkImage dstImage);

void TrackCmdDrawIndirectHandles(CommandBufferWrapper* wrapper, VkBuffer buffer);

void TrackCmdPipelineBarrierHandles(CommandBufferWrapper* wrapper, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers);

void TrackCmdBindVertexBuffersHandles(CommandBufferWrapper* wrapper, uint32_t bindingCount, const VkBuffer* pBuffers);

void TrackCmdCopyBufferToImageHandles(CommandBufferWrapper* wrapper, VkBuffer srcBuffer, VkImage dstImage);

void TrackCmdWaitEventsHandles(CommandBufferWrapper* wrapper, uint32_t eventCount, const VkEvent* pEvents, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers);

void TrackCmdEndQueryHandles(CommandBufferWrapper* wrapper, VkQueryPool queryPool);

void TrackCmdCopyQueryPoolResultsHandles(CommandBufferWrapper* wrapper, VkQueryPool queryPool, VkBuffer dstBuffer);

void TrackCmdDrawIndexedIndirectHandles(CommandBufferWrapper* wrapper, VkBuffer buffer);

void TrackCmdBindDescriptorSetsHandles(CommandBufferWrapper* wrapper, VkPipelineLayout layout, uint32_t descriptorSetCount, const VkDescriptorSet* pDescriptorSets);

void TrackCmdResolveImageHandles(CommandBufferWrapper* wrapper, VkImage srcImage, VkImage dstImage);

void TrackCmdUpdateBufferHandles(CommandBufferWrapper* wrapper, VkBuffer dstBuffer);

void TrackCmdPushConstantsHandles(CommandBufferWrapper* wrapper, VkPipelineLayout layout);

void TrackCmdClearColorImageHandles(CommandBufferWrapper* wrapper, VkImage image);

void TrackCmdBindPipelineHandles(CommandBufferWrapper* wrapper, VkPipeline pipeline);

void TrackCmdPushDescriptorSetKHRHandles(CommandBufferWrapper* wrapper, VkPipelineLayout layout, uint32_t descriptorWriteCount, const VkWriteDescriptorSet* pDescriptorWrites);

void TrackCmdBeginRenderPass2KHRHandles(CommandBufferWrapper* wrapper, const VkRenderPassBeginInfo* pRenderPassBegin);

void TrackCmdDrawIndirectCountKHRHandles(CommandBufferWrapper* wrapper, VkBuffer buffer, VkBuffer countBuffer);

void TrackCmdDrawIndexedIndirectCountKHRHandles(CommandBufferWrapper* wrapper, VkBuffer buffer, VkBuffer countBuffer);

void TrackCmdBeginQueryIndexedEXTHandles(CommandBufferWrapper* wrapper, VkQueryPool queryPool);

void TrackCmdBeginTransformFeedbackEXTHandles(CommandBufferWrapper* wrapper, uint32_t counterBufferCount, const VkBuffer* pCounterBuffers);

void TrackCmdEndTransformFeedbackEXTHandles(CommandBufferWrapper* wrapper, uint32_t counterBufferCount, const VkBuffer* pCounterBuffers);

void TrackCmdDrawIndirectByteCountEXTHandles(CommandBufferWrapper* wrapper, VkBuffer counterBuffer);

void TrackCmdBindTransformFeedbackBuffersEXTHandles(CommandBufferWrapper* wrapper, uint32_t bindingCount, const VkBuffer* pBuffers);

void TrackCmdEndQueryIndexedEXTHandles(CommandBufferWrapper* wrapper, VkQueryPool queryPool);

void TrackCmdDrawIndirectCountAMDHandles(CommandBufferWrapper* wrapper, VkBuffer buffer, VkBuffer countBuffer);

void TrackCmdDrawIndexedIndirectCountAMDHandles(CommandBufferWrapper* wrapper, VkBuffer buffer, VkBuffer countBuffer);

void TrackCmdBeginConditionalRenderingEXTHandles(CommandBufferWrapper* wrapper, const VkConditionalRenderingBeginInfoEXT* pConditionalRenderingBegin);

void TrackCmdProcessCommandsNVXHandles(CommandBufferWrapper* wrapper, const VkCmdProcessCommandsInfoNVX* pProcessCommandsInfo);

void TrackCmdReserveSpaceForCommandsNVXHandles(CommandBufferWrapper* wrapper, const VkCmdReserveSpaceForCommandsInfoNVX* pReserveSpaceInfo);

void TrackCmdBindShadingRateImageNVHandles(CommandBufferWrapper* wrapper, VkImageView imageView);

void TrackCmdTraceRaysNVHandles(CommandBufferWrapper* wrapper, VkBuffer raygenShaderBindingTableBuffer, VkBuffer missShaderBindingTableBuffer, VkBuffer hitShaderBindingTableBuffer, VkBuffer callableShaderBindingTableBuffer);

void TrackCmdBuildAccelerationStructureNVHandles(CommandBufferWrapper* wrapper, const VkAccelerationStructureInfoNV* pInfo, VkBuffer instanceData, VkAccelerationStructureNV dst, VkAccelerationStructureNV src, VkBuffer scratch);

void TrackCmdWriteAccelerationStructuresPropertiesNVHandles(CommandBufferWrapper* wrapper, uint32_t accelerationStructureCount, const VkAccelerationStructureNV* pAccelerationStructures, VkQueryPool queryPool);

void TrackCmdCopyAccelerationStructureNVHandles(CommandBufferWrapper* wrapper, VkAccelerationStructureNV dst, VkAccelerationStructureNV src);

void TrackCmdWriteBufferMarkerAMDHandles(CommandBufferWrapper* wrapper, VkBuffer dstBuffer);

void TrackCmdDrawMeshTasksIndirectCountNVHandles(CommandBufferWrapper* wrapper, VkBuffer buffer, VkBuffer countBuffer);

void TrackCmdDrawMeshTasksIndirectNVHandles(CommandBufferWrapper* wrapper, VkBuffer buffer);

GFXRECON_END_NAMESPACE(encode)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif
