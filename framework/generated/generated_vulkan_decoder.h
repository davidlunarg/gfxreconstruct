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

#ifndef  GFXRECON_GENERATED_VULKAN_DECODER_H
#define  GFXRECON_GENERATED_VULKAN_DECODER_H

#include "decode/vulkan_decoder_base.h"
#include "util/defines.h"

#include "vulkan/vulkan.h"

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)

class VulkanDecoder : public VulkanDecoderBase
{
  public:
    VulkanDecoder() { }

    virtual ~VulkanDecoder() override { }

    virtual void DecodeFunctionCall(format::ApiCallId             call_id,
                                    const ApiCallInfo&            call_info,
                                    const uint8_t*                parameter_buffer,
                                    size_t                        buffer_size) override;

  private:
    size_t Decode_vkCreateInstance(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkDestroyInstance(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkEnumeratePhysicalDevices(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceFeatures(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceFormatProperties(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceImageFormatProperties(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceProperties(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceQueueFamilyProperties(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceMemoryProperties(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreateDevice(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkDestroyDevice(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetDeviceQueue(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkQueueSubmit(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkQueueWaitIdle(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkDeviceWaitIdle(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkAllocateMemory(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkFreeMemory(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkMapMemory(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkUnmapMemory(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkFlushMappedMemoryRanges(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkInvalidateMappedMemoryRanges(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetDeviceMemoryCommitment(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkBindBufferMemory(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkBindImageMemory(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetBufferMemoryRequirements(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetImageMemoryRequirements(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetImageSparseMemoryRequirements(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceSparseImageFormatProperties(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkQueueBindSparse(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreateFence(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkDestroyFence(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkResetFences(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetFenceStatus(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkWaitForFences(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreateSemaphore(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkDestroySemaphore(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreateEvent(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkDestroyEvent(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetEventStatus(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkSetEvent(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkResetEvent(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreateQueryPool(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkDestroyQueryPool(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetQueryPoolResults(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreateBuffer(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkDestroyBuffer(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreateBufferView(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkDestroyBufferView(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreateImage(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkDestroyImage(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetImageSubresourceLayout(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreateImageView(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkDestroyImageView(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreateShaderModule(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkDestroyShaderModule(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreatePipelineCache(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkDestroyPipelineCache(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPipelineCacheData(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkMergePipelineCaches(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreateGraphicsPipelines(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreateComputePipelines(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkDestroyPipeline(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreatePipelineLayout(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkDestroyPipelineLayout(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreateSampler(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkDestroySampler(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreateDescriptorSetLayout(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkDestroyDescriptorSetLayout(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreateDescriptorPool(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkDestroyDescriptorPool(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkResetDescriptorPool(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkAllocateDescriptorSets(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkFreeDescriptorSets(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkUpdateDescriptorSets(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreateFramebuffer(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkDestroyFramebuffer(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreateRenderPass(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkDestroyRenderPass(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetRenderAreaGranularity(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreateCommandPool(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkDestroyCommandPool(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkResetCommandPool(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkAllocateCommandBuffers(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkFreeCommandBuffers(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkBeginCommandBuffer(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkEndCommandBuffer(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkResetCommandBuffer(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdBindPipeline(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdSetViewport(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdSetScissor(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdSetLineWidth(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdSetDepthBias(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdSetBlendConstants(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdSetDepthBounds(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdSetStencilCompareMask(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdSetStencilWriteMask(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdSetStencilReference(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdBindDescriptorSets(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdBindIndexBuffer(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdBindVertexBuffers(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdDraw(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdDrawIndexed(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdDrawIndirect(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdDrawIndexedIndirect(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdDispatch(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdDispatchIndirect(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdCopyBuffer(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdCopyImage(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdBlitImage(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdCopyBufferToImage(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdCopyImageToBuffer(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdUpdateBuffer(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdFillBuffer(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdClearColorImage(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdClearDepthStencilImage(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdClearAttachments(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdResolveImage(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdSetEvent(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdResetEvent(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdWaitEvents(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdPipelineBarrier(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdBeginQuery(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdEndQuery(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdResetQueryPool(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdWriteTimestamp(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdCopyQueryPoolResults(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdPushConstants(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdBeginRenderPass(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdNextSubpass(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdEndRenderPass(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdExecuteCommands(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkBindBufferMemory2(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkBindImageMemory2(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetDeviceGroupPeerMemoryFeatures(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdSetDeviceMask(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdDispatchBase(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkEnumeratePhysicalDeviceGroups(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetImageMemoryRequirements2(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetBufferMemoryRequirements2(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetImageSparseMemoryRequirements2(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceFeatures2(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceProperties2(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceFormatProperties2(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceImageFormatProperties2(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceQueueFamilyProperties2(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceMemoryProperties2(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceSparseImageFormatProperties2(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkTrimCommandPool(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetDeviceQueue2(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreateSamplerYcbcrConversion(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkDestroySamplerYcbcrConversion(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreateDescriptorUpdateTemplate(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkDestroyDescriptorUpdateTemplate(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceExternalBufferProperties(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceExternalFenceProperties(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceExternalSemaphoreProperties(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetDescriptorSetLayoutSupport(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdDrawIndirectCount(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdDrawIndexedIndirectCount(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreateRenderPass2(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdBeginRenderPass2(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdNextSubpass2(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdEndRenderPass2(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkResetQueryPool(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetSemaphoreCounterValue(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkWaitSemaphores(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkSignalSemaphore(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetBufferDeviceAddress(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetBufferOpaqueCaptureAddress(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetDeviceMemoryOpaqueCaptureAddress(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkDestroySurfaceKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceSurfaceSupportKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceSurfaceCapabilitiesKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceSurfaceFormatsKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceSurfacePresentModesKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreateSwapchainKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkDestroySwapchainKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetSwapchainImagesKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkAcquireNextImageKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkQueuePresentKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetDeviceGroupPresentCapabilitiesKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetDeviceGroupSurfacePresentModesKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDevicePresentRectanglesKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkAcquireNextImage2KHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceDisplayPropertiesKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceDisplayPlanePropertiesKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetDisplayPlaneSupportedDisplaysKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetDisplayModePropertiesKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreateDisplayModeKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetDisplayPlaneCapabilitiesKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreateDisplayPlaneSurfaceKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreateSharedSwapchainsKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreateXlibSurfaceKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceXlibPresentationSupportKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreateXcbSurfaceKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceXcbPresentationSupportKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreateWaylandSurfaceKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceWaylandPresentationSupportKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreateAndroidSurfaceKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreateWin32SurfaceKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceWin32PresentationSupportKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceFeatures2KHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceProperties2KHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceFormatProperties2KHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceImageFormatProperties2KHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceQueueFamilyProperties2KHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceMemoryProperties2KHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceSparseImageFormatProperties2KHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetDeviceGroupPeerMemoryFeaturesKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdSetDeviceMaskKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdDispatchBaseKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkTrimCommandPoolKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkEnumeratePhysicalDeviceGroupsKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceExternalBufferPropertiesKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetMemoryWin32HandleKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetMemoryWin32HandlePropertiesKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetMemoryFdKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetMemoryFdPropertiesKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkImportSemaphoreWin32HandleKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetSemaphoreWin32HandleKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkImportSemaphoreFdKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetSemaphoreFdKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdPushDescriptorSetKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreateDescriptorUpdateTemplateKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkDestroyDescriptorUpdateTemplateKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreateRenderPass2KHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdBeginRenderPass2KHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdNextSubpass2KHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdEndRenderPass2KHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetSwapchainStatusKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceExternalFencePropertiesKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkImportFenceWin32HandleKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetFenceWin32HandleKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkImportFenceFdKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetFenceFdKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkAcquireProfilingLockKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkReleaseProfilingLockKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceSurfaceCapabilities2KHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceSurfaceFormats2KHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceDisplayProperties2KHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceDisplayPlaneProperties2KHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetDisplayModeProperties2KHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetDisplayPlaneCapabilities2KHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetImageMemoryRequirements2KHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetBufferMemoryRequirements2KHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetImageSparseMemoryRequirements2KHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreateSamplerYcbcrConversionKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkDestroySamplerYcbcrConversionKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkBindBufferMemory2KHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkBindImageMemory2KHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetDescriptorSetLayoutSupportKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdDrawIndirectCountKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdDrawIndexedIndirectCountKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetSemaphoreCounterValueKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkWaitSemaphoresKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkSignalSemaphoreKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetBufferDeviceAddressKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetBufferOpaqueCaptureAddressKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetDeviceMemoryOpaqueCaptureAddressKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPipelineExecutablePropertiesKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPipelineExecutableStatisticsKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPipelineExecutableInternalRepresentationsKHR(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreateDebugReportCallbackEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkDestroyDebugReportCallbackEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkDebugReportMessageEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkDebugMarkerSetObjectTagEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkDebugMarkerSetObjectNameEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdDebugMarkerBeginEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdDebugMarkerEndEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdDebugMarkerInsertEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdBindTransformFeedbackBuffersEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdBeginTransformFeedbackEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdEndTransformFeedbackEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdBeginQueryIndexedEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdEndQueryIndexedEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdDrawIndirectByteCountEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetImageViewHandleNVX(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdDrawIndirectCountAMD(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdDrawIndexedIndirectCountAMD(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetShaderInfoAMD(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreateStreamDescriptorSurfaceGGP(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceExternalImageFormatPropertiesNV(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetMemoryWin32HandleNV(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreateViSurfaceNN(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdBeginConditionalRenderingEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdEndConditionalRenderingEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdProcessCommandsNVX(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdReserveSpaceForCommandsNVX(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreateIndirectCommandsLayoutNVX(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkDestroyIndirectCommandsLayoutNVX(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreateObjectTableNVX(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkDestroyObjectTableNVX(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkUnregisterObjectsNVX(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdSetViewportWScalingNV(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkReleaseDisplayEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkAcquireXlibDisplayEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetRandROutputDisplayEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceSurfaceCapabilities2EXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkDisplayPowerControlEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkRegisterDeviceEventEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkRegisterDisplayEventEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetSwapchainCounterEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetRefreshCycleDurationGOOGLE(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPastPresentationTimingGOOGLE(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdSetDiscardRectangleEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkSetHdrMetadataEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreateIOSSurfaceMVK(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreateMacOSSurfaceMVK(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkSetDebugUtilsObjectNameEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkSetDebugUtilsObjectTagEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkQueueBeginDebugUtilsLabelEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkQueueEndDebugUtilsLabelEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkQueueInsertDebugUtilsLabelEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdBeginDebugUtilsLabelEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdEndDebugUtilsLabelEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdInsertDebugUtilsLabelEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreateDebugUtilsMessengerEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkDestroyDebugUtilsMessengerEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkSubmitDebugUtilsMessageEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetAndroidHardwareBufferPropertiesANDROID(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetMemoryAndroidHardwareBufferANDROID(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdSetSampleLocationsEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceMultisamplePropertiesEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetImageDrmFormatModifierPropertiesEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreateValidationCacheEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkDestroyValidationCacheEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkMergeValidationCachesEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetValidationCacheDataEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdBindShadingRateImageNV(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdSetViewportShadingRatePaletteNV(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdSetCoarseSampleOrderNV(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreateAccelerationStructureNV(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkDestroyAccelerationStructureNV(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetAccelerationStructureMemoryRequirementsNV(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkBindAccelerationStructureMemoryNV(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdBuildAccelerationStructureNV(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdCopyAccelerationStructureNV(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdTraceRaysNV(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreateRayTracingPipelinesNV(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetRayTracingShaderGroupHandlesNV(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetAccelerationStructureHandleNV(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdWriteAccelerationStructuresPropertiesNV(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCompileDeferredNV(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetMemoryHostPointerPropertiesEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdWriteBufferMarkerAMD(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetCalibratedTimestampsEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdDrawMeshTasksNV(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdDrawMeshTasksIndirectNV(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdDrawMeshTasksIndirectCountNV(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdSetExclusiveScissorNV(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdSetCheckpointNV(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetQueueCheckpointDataNV(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkInitializePerformanceApiINTEL(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkUninitializePerformanceApiINTEL(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdSetPerformanceMarkerINTEL(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdSetPerformanceStreamMarkerINTEL(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdSetPerformanceOverrideINTEL(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkAcquirePerformanceConfigurationINTEL(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkReleasePerformanceConfigurationINTEL(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkQueueSetPerformanceConfigurationINTEL(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPerformanceParameterINTEL(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkSetLocalDimmingAMD(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreateImagePipeSurfaceFUCHSIA(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreateMetalSurfaceEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetBufferDeviceAddressEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceToolPropertiesEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetPhysicalDeviceSurfacePresentModes2EXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkAcquireFullScreenExclusiveModeEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkReleaseFullScreenExclusiveModeEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkGetDeviceGroupSurfacePresentModes2EXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCreateHeadlessSurfaceEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkCmdSetLineStippleEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);

    size_t Decode_vkResetQueryPoolEXT(const ApiCallInfo& call_info, const uint8_t* parameter_buffer, size_t buffer_size);
};

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif
