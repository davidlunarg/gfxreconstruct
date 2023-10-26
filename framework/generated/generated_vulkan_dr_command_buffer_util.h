/*
** Copyright (c) 2018-2023 Valve Corporation
** Copyright (c) 2018-2023 LunarG, Inc.
**
** Permission is hereby granted, free of charge, to any person obtaining a
** copy of this software and associated documentation files (the "Software"),
** to deal in the Software without restriction, including without limitation
** the rights to use, copy, modify, merge, publish, distribute, sublicense,
** and/or sell copies of the Software, and to permit persons to whom the
** Software is furnished to do so, subject to the following conditions:
**
** The above copyright notice and this permission notice shall be included in
** all copies or substantial portions of the Software.
**
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
** IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
** FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
** AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
** LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
** FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
** DEALINGS IN THE SOFTWARE.
*/

/*
** This file is generated from the Khronos Vulkan XML API Registry.
**
*/

#ifndef  GFXRECON_GENERATED_VULKAN_DR_COMMAND_BUFFER_UTIL_H
#define  GFXRECON_GENERATED_VULKAN_DR_COMMAND_BUFFER_UTIL_H

#include "encode/vulkan_handle_wrappers.h"
#include "util/defines.h"

#include "vulkan/vulkan.h"
#include "vk_video/vulkan_video_codec_h264std.h"
#include "vk_video/vulkan_video_codec_h264std_decode.h"
#include "vk_video/vulkan_video_codec_h264std_encode.h"
#include "vk_video/vulkan_video_codec_h265std.h"
#include "vk_video/vulkan_video_codec_h265std_decode.h"
#include "vk_video/vulkan_video_codec_h265std_encode.h"
#include "vk_video/vulkan_video_codecs_common.h"

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)

void TrackDRCmdBindPipelineHandles(VkCommandBuffer commandBuffer, VkPipeline pipeline);

void TrackDRCmdBindDescriptorSetsHandles(VkCommandBuffer commandBuffer, VkPipelineLayout layout, uint32_t descriptorSetCount, const VkDescriptorSet* pDescriptorSets);

void TrackDRCmdBindIndexBufferHandles(VkCommandBuffer commandBuffer, VkBuffer buffer);

void TrackDRCmdBindVertexBuffersHandles(VkCommandBuffer commandBuffer, uint32_t bindingCount, const VkBuffer* pBuffers);

void TrackDRCmdDrawIndirectHandles(VkCommandBuffer commandBuffer, VkBuffer buffer);

void TrackDRCmdDrawIndexedIndirectHandles(VkCommandBuffer commandBuffer, VkBuffer buffer);

void TrackDRCmdDispatchIndirectHandles(VkCommandBuffer commandBuffer, VkBuffer buffer);

void TrackDRCmdCopyBufferHandles(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkBuffer dstBuffer);

void TrackDRCmdCopyImageHandles(VkCommandBuffer commandBuffer, VkImage srcImage, VkImage dstImage);

void TrackDRCmdBlitImageHandles(VkCommandBuffer commandBuffer, VkImage srcImage, VkImage dstImage);

void TrackDRCmdCopyBufferToImageHandles(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkImage dstImage);

void TrackDRCmdCopyImageToBufferHandles(VkCommandBuffer commandBuffer, VkImage srcImage, VkBuffer dstBuffer);

void TrackDRCmdUpdateBufferHandles(VkCommandBuffer commandBuffer, VkBuffer dstBuffer);

void TrackDRCmdFillBufferHandles(VkCommandBuffer commandBuffer, VkBuffer dstBuffer);

void TrackDRCmdClearColorImageHandles(VkCommandBuffer commandBuffer, VkImage image);

void TrackDRCmdClearDepthStencilImageHandles(VkCommandBuffer commandBuffer, VkImage image);

void TrackDRCmdResolveImageHandles(VkCommandBuffer commandBuffer, VkImage srcImage, VkImage dstImage);

void TrackDRCmdSetEventHandles(VkCommandBuffer commandBuffer, VkEvent event);

void TrackDRCmdResetEventHandles(VkCommandBuffer commandBuffer, VkEvent event);

void TrackDRCmdWaitEventsHandles(VkCommandBuffer commandBuffer, uint32_t eventCount, const VkEvent* pEvents, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers);

void TrackDRCmdPipelineBarrierHandles(VkCommandBuffer commandBuffer, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers);

void TrackDRCmdBeginQueryHandles(VkCommandBuffer commandBuffer, VkQueryPool queryPool);

void TrackDRCmdEndQueryHandles(VkCommandBuffer commandBuffer, VkQueryPool queryPool);

void TrackDRCmdResetQueryPoolHandles(VkCommandBuffer commandBuffer, VkQueryPool queryPool);

void TrackDRCmdWriteTimestampHandles(VkCommandBuffer commandBuffer, VkQueryPool queryPool);

void TrackDRCmdCopyQueryPoolResultsHandles(VkCommandBuffer commandBuffer, VkQueryPool queryPool, VkBuffer dstBuffer);

void TrackDRCmdPushConstantsHandles(VkCommandBuffer commandBuffer, VkPipelineLayout layout);

void TrackDRCmdBeginRenderPassHandles(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo* pRenderPassBegin);

void TrackDRCmdExecuteCommandsHandles(VkCommandBuffer commandBuffer, uint32_t commandBufferCount, const VkCommandBuffer* pCommandBuffers);

void TrackDRCmdDrawIndirectCountHandles(VkCommandBuffer commandBuffer, VkBuffer buffer, VkBuffer countBuffer);

void TrackDRCmdDrawIndexedIndirectCountHandles(VkCommandBuffer commandBuffer, VkBuffer buffer, VkBuffer countBuffer);

void TrackDRCmdBeginRenderPass2Handles(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo* pRenderPassBegin);

void TrackDRCmdSetEvent2Handles(VkCommandBuffer commandBuffer, VkEvent event, const VkDependencyInfo* pDependencyInfo);

void TrackDRCmdResetEvent2Handles(VkCommandBuffer commandBuffer, VkEvent event);

void TrackDRCmdWaitEvents2Handles(VkCommandBuffer commandBuffer, uint32_t eventCount, const VkEvent* pEvents, const VkDependencyInfo* pDependencyInfos);

void TrackDRCmdPipelineBarrier2Handles(VkCommandBuffer commandBuffer, const VkDependencyInfo* pDependencyInfo);

void TrackDRCmdWriteTimestamp2Handles(VkCommandBuffer commandBuffer, VkQueryPool queryPool);

void TrackDRCmdCopyBuffer2Handles(VkCommandBuffer commandBuffer, const VkCopyBufferInfo2* pCopyBufferInfo);

void TrackDRCmdCopyImage2Handles(VkCommandBuffer commandBuffer, const VkCopyImageInfo2* pCopyImageInfo);

void TrackDRCmdCopyBufferToImage2Handles(VkCommandBuffer commandBuffer, const VkCopyBufferToImageInfo2* pCopyBufferToImageInfo);

void TrackDRCmdCopyImageToBuffer2Handles(VkCommandBuffer commandBuffer, const VkCopyImageToBufferInfo2* pCopyImageToBufferInfo);

void TrackDRCmdBlitImage2Handles(VkCommandBuffer commandBuffer, const VkBlitImageInfo2* pBlitImageInfo);

void TrackDRCmdResolveImage2Handles(VkCommandBuffer commandBuffer, const VkResolveImageInfo2* pResolveImageInfo);

void TrackDRCmdBeginRenderingHandles(VkCommandBuffer commandBuffer, const VkRenderingInfo* pRenderingInfo);

void TrackDRCmdBindVertexBuffers2Handles(VkCommandBuffer commandBuffer, uint32_t bindingCount, const VkBuffer* pBuffers);

void TrackDRCmdBeginVideoCodingKHRHandles(VkCommandBuffer commandBuffer, const VkVideoBeginCodingInfoKHR* pBeginInfo);

void TrackDRCmdDecodeVideoKHRHandles(VkCommandBuffer commandBuffer, const VkVideoDecodeInfoKHR* pDecodeInfo);

void TrackDRCmdBeginRenderingKHRHandles(VkCommandBuffer commandBuffer, const VkRenderingInfo* pRenderingInfo);

void TrackDRCmdPushDescriptorSetKHRHandles(VkCommandBuffer commandBuffer, VkPipelineLayout layout, uint32_t descriptorWriteCount, const VkWriteDescriptorSet* pDescriptorWrites);

void TrackDRCmdBeginRenderPass2KHRHandles(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo* pRenderPassBegin);

void TrackDRCmdDrawIndirectCountKHRHandles(VkCommandBuffer commandBuffer, VkBuffer buffer, VkBuffer countBuffer);

void TrackDRCmdDrawIndexedIndirectCountKHRHandles(VkCommandBuffer commandBuffer, VkBuffer buffer, VkBuffer countBuffer);

void TrackDRCmdEncodeVideoKHRHandles(VkCommandBuffer commandBuffer, const VkVideoEncodeInfoKHR* pEncodeInfo);

void TrackDRCmdSetEvent2KHRHandles(VkCommandBuffer commandBuffer, VkEvent event, const VkDependencyInfo* pDependencyInfo);

void TrackDRCmdResetEvent2KHRHandles(VkCommandBuffer commandBuffer, VkEvent event);

void TrackDRCmdWaitEvents2KHRHandles(VkCommandBuffer commandBuffer, uint32_t eventCount, const VkEvent* pEvents, const VkDependencyInfo* pDependencyInfos);

void TrackDRCmdPipelineBarrier2KHRHandles(VkCommandBuffer commandBuffer, const VkDependencyInfo* pDependencyInfo);

void TrackDRCmdWriteTimestamp2KHRHandles(VkCommandBuffer commandBuffer, VkQueryPool queryPool);

void TrackDRCmdWriteBufferMarker2AMDHandles(VkCommandBuffer commandBuffer, VkBuffer dstBuffer);

void TrackDRCmdCopyBuffer2KHRHandles(VkCommandBuffer commandBuffer, const VkCopyBufferInfo2* pCopyBufferInfo);

void TrackDRCmdCopyImage2KHRHandles(VkCommandBuffer commandBuffer, const VkCopyImageInfo2* pCopyImageInfo);

void TrackDRCmdCopyBufferToImage2KHRHandles(VkCommandBuffer commandBuffer, const VkCopyBufferToImageInfo2* pCopyBufferToImageInfo);

void TrackDRCmdCopyImageToBuffer2KHRHandles(VkCommandBuffer commandBuffer, const VkCopyImageToBufferInfo2* pCopyImageToBufferInfo);

void TrackDRCmdBlitImage2KHRHandles(VkCommandBuffer commandBuffer, const VkBlitImageInfo2* pBlitImageInfo);

void TrackDRCmdResolveImage2KHRHandles(VkCommandBuffer commandBuffer, const VkResolveImageInfo2* pResolveImageInfo);

void TrackDRCmdBindIndexBuffer2KHRHandles(VkCommandBuffer commandBuffer, VkBuffer buffer);

void TrackDRCmdBindTransformFeedbackBuffersEXTHandles(VkCommandBuffer commandBuffer, uint32_t bindingCount, const VkBuffer* pBuffers);

void TrackDRCmdBeginTransformFeedbackEXTHandles(VkCommandBuffer commandBuffer, uint32_t counterBufferCount, const VkBuffer* pCounterBuffers);

void TrackDRCmdEndTransformFeedbackEXTHandles(VkCommandBuffer commandBuffer, uint32_t counterBufferCount, const VkBuffer* pCounterBuffers);

void TrackDRCmdBeginQueryIndexedEXTHandles(VkCommandBuffer commandBuffer, VkQueryPool queryPool);

void TrackDRCmdEndQueryIndexedEXTHandles(VkCommandBuffer commandBuffer, VkQueryPool queryPool);

void TrackDRCmdDrawIndirectByteCountEXTHandles(VkCommandBuffer commandBuffer, VkBuffer counterBuffer);

void TrackDRCmdDrawIndirectCountAMDHandles(VkCommandBuffer commandBuffer, VkBuffer buffer, VkBuffer countBuffer);

void TrackDRCmdDrawIndexedIndirectCountAMDHandles(VkCommandBuffer commandBuffer, VkBuffer buffer, VkBuffer countBuffer);

void TrackDRCmdBeginConditionalRenderingEXTHandles(VkCommandBuffer commandBuffer, const VkConditionalRenderingBeginInfoEXT* pConditionalRenderingBegin);

void TrackDRCmdBindShadingRateImageNVHandles(VkCommandBuffer commandBuffer, VkImageView imageView);

void TrackDRCmdBuildAccelerationStructureNVHandles(VkCommandBuffer commandBuffer, const VkAccelerationStructureInfoNV* pInfo, VkBuffer instanceData, VkAccelerationStructureNV dst, VkAccelerationStructureNV src, VkBuffer scratch);

void TrackDRCmdCopyAccelerationStructureNVHandles(VkCommandBuffer commandBuffer, VkAccelerationStructureNV dst, VkAccelerationStructureNV src);

void TrackDRCmdTraceRaysNVHandles(VkCommandBuffer commandBuffer, VkBuffer raygenShaderBindingTableBuffer, VkBuffer missShaderBindingTableBuffer, VkBuffer hitShaderBindingTableBuffer, VkBuffer callableShaderBindingTableBuffer);

void TrackDRCmdWriteAccelerationStructuresPropertiesNVHandles(VkCommandBuffer commandBuffer, uint32_t accelerationStructureCount, const VkAccelerationStructureNV* pAccelerationStructures, VkQueryPool queryPool);

void TrackDRCmdWriteBufferMarkerAMDHandles(VkCommandBuffer commandBuffer, VkBuffer dstBuffer);

void TrackDRCmdDrawMeshTasksIndirectNVHandles(VkCommandBuffer commandBuffer, VkBuffer buffer);

void TrackDRCmdDrawMeshTasksIndirectCountNVHandles(VkCommandBuffer commandBuffer, VkBuffer buffer, VkBuffer countBuffer);

void TrackDRCmdBindVertexBuffers2EXTHandles(VkCommandBuffer commandBuffer, uint32_t bindingCount, const VkBuffer* pBuffers);

void TrackDRCmdPreprocessGeneratedCommandsNVHandles(VkCommandBuffer commandBuffer, const VkGeneratedCommandsInfoNV* pGeneratedCommandsInfo);

void TrackDRCmdExecuteGeneratedCommandsNVHandles(VkCommandBuffer commandBuffer, const VkGeneratedCommandsInfoNV* pGeneratedCommandsInfo);

void TrackDRCmdBindPipelineShaderGroupNVHandles(VkCommandBuffer commandBuffer, VkPipeline pipeline);

void TrackDRCmdBindInvocationMaskHUAWEIHandles(VkCommandBuffer commandBuffer, VkImageView imageView);

void TrackDRCmdBuildMicromapsEXTHandles(VkCommandBuffer commandBuffer, uint32_t infoCount, const VkMicromapBuildInfoEXT* pInfos);

void TrackDRCmdCopyMicromapEXTHandles(VkCommandBuffer commandBuffer, const VkCopyMicromapInfoEXT* pInfo);

void TrackDRCmdCopyMicromapToMemoryEXTHandles(VkCommandBuffer commandBuffer, const VkCopyMicromapToMemoryInfoEXT* pInfo);

void TrackDRCmdCopyMemoryToMicromapEXTHandles(VkCommandBuffer commandBuffer, const VkCopyMemoryToMicromapInfoEXT* pInfo);

void TrackDRCmdWriteMicromapsPropertiesEXTHandles(VkCommandBuffer commandBuffer, uint32_t micromapCount, const VkMicromapEXT* pMicromaps, VkQueryPool queryPool);

void TrackDRCmdDrawClusterIndirectHUAWEIHandles(VkCommandBuffer commandBuffer, VkBuffer buffer);

void TrackDRCmdUpdatePipelineIndirectBufferNVHandles(VkCommandBuffer commandBuffer, VkPipeline pipeline);

void TrackDRCmdOpticalFlowExecuteNVHandles(VkCommandBuffer commandBuffer, VkOpticalFlowSessionNV session);

void TrackDRCmdBindShadersEXTHandles(VkCommandBuffer commandBuffer, uint32_t stageCount, const VkShaderEXT* pShaders);

void TrackDRCmdBuildAccelerationStructuresKHRHandles(VkCommandBuffer commandBuffer, uint32_t infoCount, const VkAccelerationStructureBuildGeometryInfoKHR* pInfos);

void TrackDRCmdBuildAccelerationStructuresIndirectKHRHandles(VkCommandBuffer commandBuffer, uint32_t infoCount, const VkAccelerationStructureBuildGeometryInfoKHR* pInfos);

void TrackDRCmdCopyAccelerationStructureKHRHandles(VkCommandBuffer commandBuffer, const VkCopyAccelerationStructureInfoKHR* pInfo);

void TrackDRCmdCopyAccelerationStructureToMemoryKHRHandles(VkCommandBuffer commandBuffer, const VkCopyAccelerationStructureToMemoryInfoKHR* pInfo);

void TrackDRCmdCopyMemoryToAccelerationStructureKHRHandles(VkCommandBuffer commandBuffer, const VkCopyMemoryToAccelerationStructureInfoKHR* pInfo);

void TrackDRCmdWriteAccelerationStructuresPropertiesKHRHandles(VkCommandBuffer commandBuffer, uint32_t accelerationStructureCount, const VkAccelerationStructureKHR* pAccelerationStructures, VkQueryPool queryPool);

void TrackDRCmdDrawMeshTasksIndirectEXTHandles(VkCommandBuffer commandBuffer, VkBuffer buffer);

void TrackDRCmdDrawMeshTasksIndirectCountEXTHandles(VkCommandBuffer commandBuffer, VkBuffer buffer, VkBuffer countBuffer);

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif
