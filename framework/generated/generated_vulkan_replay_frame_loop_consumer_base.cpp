/*
** Copyright (c) 2018-2023 Valve Corporation
** Copyright (c) 2018-2026 LunarG, Inc.
** Copyright (c) 2023 Advanced Micro Devices, Inc.
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

#include "generated/generated_vulkan_replay_consumer.h"
#include "generated/generated_vulkan_replay_frame_loop_consumer_base.h"

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)


void VulkanReplayFrameLoopConsumerBase::Process_vkCreateInstance(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    StructPointerDecoder<Decoded_VkInstanceCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkInstance>*           pInstance)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateInstance(call_info, returnValue, pCreateInfo, pAllocator, pInstance);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateDevice(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkDeviceCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkDevice>*             pDevice)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateDevice(call_info, returnValue, physicalDevice, pCreateInfo, pAllocator, pDevice);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkAllocateMemory(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkMemoryAllocateInfo>* pAllocateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkDeviceMemory>*       pMemory)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkAllocateMemory(call_info, returnValue, device, pAllocateInfo, pAllocator, pMemory);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkMapMemory(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            memory,
    VkDeviceSize                                offset,
    VkDeviceSize                                size,
    VkMemoryMapFlags                            flags,
    PointerDecoder<uint64_t, void*>*            ppData)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkMapMemory(call_info, returnValue, device, memory, offset, size, flags, ppData);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkBindBufferMemory(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            buffer,
    format::HandleId                            memory,
    VkDeviceSize                                memoryOffset)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkBindBufferMemory(call_info, returnValue, device, buffer, memory, memoryOffset);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkBindImageMemory(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            image,
    format::HandleId                            memory,
    VkDeviceSize                                memoryOffset)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkBindImageMemory(call_info, returnValue, device, image, memory, memoryOffset);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkQueueBindSparse(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            queue,
    uint32_t                                    bindInfoCount,
    StructPointerDecoder<Decoded_VkBindSparseInfo>* pBindInfo,
    format::HandleId                            fence)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkQueueBindSparse(call_info, returnValue, queue, bindInfoCount, pBindInfo, fence);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateFence(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkFenceCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkFence>*              pFence)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateFence(call_info, returnValue, device, pCreateInfo, pAllocator, pFence);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateSemaphore(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkSemaphoreCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSemaphore>*          pSemaphore)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateSemaphore(call_info, returnValue, device, pCreateInfo, pAllocator, pSemaphore);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateQueryPool(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkQueryPoolCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkQueryPool>*          pQueryPool)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateQueryPool(call_info, returnValue, device, pCreateInfo, pAllocator, pQueryPool);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateBuffer(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkBufferCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkBuffer>*             pBuffer)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateBuffer(call_info, returnValue, device, pCreateInfo, pAllocator, pBuffer);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateImage(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkImageCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkImage>*              pImage)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateImage(call_info, returnValue, device, pCreateInfo, pAllocator, pImage);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateImageView(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkImageViewCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkImageView>*          pView)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateImageView(call_info, returnValue, device, pCreateInfo, pAllocator, pView);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateCommandPool(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkCommandPoolCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkCommandPool>*        pCommandPool)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateCommandPool(call_info, returnValue, device, pCreateInfo, pAllocator, pCommandPool);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkAllocateCommandBuffers(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkCommandBufferAllocateInfo>* pAllocateInfo,
    HandlePointerDecoder<VkCommandBuffer>*      pCommandBuffers)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkAllocateCommandBuffers(call_info, returnValue, device, pAllocateInfo, pCommandBuffers);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateEvent(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkEventCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkEvent>*              pEvent)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateEvent(call_info, returnValue, device, pCreateInfo, pAllocator, pEvent);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateBufferView(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkBufferViewCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkBufferView>*         pView)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateBufferView(call_info, returnValue, device, pCreateInfo, pAllocator, pView);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateShaderModule(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkShaderModuleCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkShaderModule>*       pShaderModule)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateShaderModule(call_info, returnValue, device, pCreateInfo, pAllocator, pShaderModule);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreatePipelineCache(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkPipelineCacheCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkPipelineCache>*      pPipelineCache)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreatePipelineCache(call_info, returnValue, device, pCreateInfo, pAllocator, pPipelineCache);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkMergePipelineCaches(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            dstCache,
    uint32_t                                    srcCacheCount,
    HandlePointerDecoder<VkPipelineCache>*      pSrcCaches)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkMergePipelineCaches(call_info, returnValue, device, dstCache, srcCacheCount, pSrcCaches);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateComputePipelines(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            pipelineCache,
    uint32_t                                    createInfoCount,
    StructPointerDecoder<Decoded_VkComputePipelineCreateInfo>* pCreateInfos,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkPipeline>*           pPipelines)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateComputePipelines(call_info, returnValue, device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreatePipelineLayout(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkPipelineLayoutCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkPipelineLayout>*     pPipelineLayout)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreatePipelineLayout(call_info, returnValue, device, pCreateInfo, pAllocator, pPipelineLayout);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateSampler(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkSamplerCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSampler>*            pSampler)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateSampler(call_info, returnValue, device, pCreateInfo, pAllocator, pSampler);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateDescriptorSetLayout(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDescriptorSetLayoutCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkDescriptorSetLayout>* pSetLayout)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateDescriptorSetLayout(call_info, returnValue, device, pCreateInfo, pAllocator, pSetLayout);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateDescriptorPool(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDescriptorPoolCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkDescriptorPool>*     pDescriptorPool)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateDescriptorPool(call_info, returnValue, device, pCreateInfo, pAllocator, pDescriptorPool);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkAllocateDescriptorSets(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDescriptorSetAllocateInfo>* pAllocateInfo,
    HandlePointerDecoder<VkDescriptorSet>*      pDescriptorSets)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkAllocateDescriptorSets(call_info, returnValue, device, pAllocateInfo, pDescriptorSets);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateGraphicsPipelines(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            pipelineCache,
    uint32_t                                    createInfoCount,
    StructPointerDecoder<Decoded_VkGraphicsPipelineCreateInfo>* pCreateInfos,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkPipeline>*           pPipelines)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateGraphicsPipelines(call_info, returnValue, device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateFramebuffer(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkFramebufferCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkFramebuffer>*        pFramebuffer)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateFramebuffer(call_info, returnValue, device, pCreateInfo, pAllocator, pFramebuffer);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateRenderPass(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkRenderPassCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkRenderPass>*         pRenderPass)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateRenderPass(call_info, returnValue, device, pCreateInfo, pAllocator, pRenderPass);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkBindBufferMemory2(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    bindInfoCount,
    StructPointerDecoder<Decoded_VkBindBufferMemoryInfo>* pBindInfos)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkBindBufferMemory2(call_info, returnValue, device, bindInfoCount, pBindInfos);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkBindImageMemory2(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    bindInfoCount,
    StructPointerDecoder<Decoded_VkBindImageMemoryInfo>* pBindInfos)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkBindImageMemory2(call_info, returnValue, device, bindInfoCount, pBindInfos);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateDescriptorUpdateTemplate(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDescriptorUpdateTemplateCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkDescriptorUpdateTemplate>* pDescriptorUpdateTemplate)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateDescriptorUpdateTemplate(call_info, returnValue, device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateSamplerYcbcrConversion(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkSamplerYcbcrConversionCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSamplerYcbcrConversion>* pYcbcrConversion)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateSamplerYcbcrConversion(call_info, returnValue, device, pCreateInfo, pAllocator, pYcbcrConversion);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateRenderPass2(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkRenderPassCreateInfo2>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkRenderPass>*         pRenderPass)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateRenderPass2(call_info, returnValue, device, pCreateInfo, pAllocator, pRenderPass);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreatePrivateDataSlot(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkPrivateDataSlotCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkPrivateDataSlot>*    pPrivateDataSlot)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreatePrivateDataSlot(call_info, returnValue, device, pCreateInfo, pAllocator, pPrivateDataSlot);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkMapMemory2(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkMemoryMapInfo>* pMemoryMapInfo,
    PointerDecoder<uint64_t, void*>*            ppData)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkMapMemory2(call_info, returnValue, device, pMemoryMapInfo, ppData);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkTransitionImageLayout(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    transitionCount,
    StructPointerDecoder<Decoded_VkHostImageLayoutTransitionInfo>* pTransitions)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkTransitionImageLayout(call_info, returnValue, device, transitionCount, pTransitions);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateSwapchainKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkSwapchainCreateInfoKHR>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSwapchainKHR>*       pSwapchain)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateSwapchainKHR(call_info, returnValue, device, pCreateInfo, pAllocator, pSwapchain);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateDisplayModeKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            display,
    StructPointerDecoder<Decoded_VkDisplayModeCreateInfoKHR>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkDisplayModeKHR>*     pMode)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateDisplayModeKHR(call_info, returnValue, physicalDevice, display, pCreateInfo, pAllocator, pMode);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateDisplayPlaneSurfaceKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkDisplaySurfaceCreateInfoKHR>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateDisplayPlaneSurfaceKHR(call_info, returnValue, instance, pCreateInfo, pAllocator, pSurface);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateSharedSwapchainsKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    swapchainCount,
    StructPointerDecoder<Decoded_VkSwapchainCreateInfoKHR>* pCreateInfos,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSwapchainKHR>*       pSwapchains)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateSharedSwapchainsKHR(call_info, returnValue, device, swapchainCount, pCreateInfos, pAllocator, pSwapchains);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateXlibSurfaceKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkXlibSurfaceCreateInfoKHR>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateXlibSurfaceKHR(call_info, returnValue, instance, pCreateInfo, pAllocator, pSurface);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateXcbSurfaceKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkXcbSurfaceCreateInfoKHR>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateXcbSurfaceKHR(call_info, returnValue, instance, pCreateInfo, pAllocator, pSurface);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateWaylandSurfaceKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkWaylandSurfaceCreateInfoKHR>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateWaylandSurfaceKHR(call_info, returnValue, instance, pCreateInfo, pAllocator, pSurface);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateAndroidSurfaceKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkAndroidSurfaceCreateInfoKHR>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateAndroidSurfaceKHR(call_info, returnValue, instance, pCreateInfo, pAllocator, pSurface);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateWin32SurfaceKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkWin32SurfaceCreateInfoKHR>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateWin32SurfaceKHR(call_info, returnValue, instance, pCreateInfo, pAllocator, pSurface);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateVideoSessionKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkVideoSessionCreateInfoKHR>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkVideoSessionKHR>*    pVideoSession)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateVideoSessionKHR(call_info, returnValue, device, pCreateInfo, pAllocator, pVideoSession);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkBindVideoSessionMemoryKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            videoSession,
    uint32_t                                    bindSessionMemoryInfoCount,
    StructPointerDecoder<Decoded_VkBindVideoSessionMemoryInfoKHR>* pBindSessionMemoryInfos)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkBindVideoSessionMemoryKHR(call_info, returnValue, device, videoSession, bindSessionMemoryInfoCount, pBindSessionMemoryInfos);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateVideoSessionParametersKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkVideoSessionParametersCreateInfoKHR>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkVideoSessionParametersKHR>* pVideoSessionParameters)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateVideoSessionParametersKHR(call_info, returnValue, device, pCreateInfo, pAllocator, pVideoSessionParameters);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkImportSemaphoreFdKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkImportSemaphoreFdInfoKHR>* pImportSemaphoreFdInfo)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkImportSemaphoreFdKHR(call_info, returnValue, device, pImportSemaphoreFdInfo);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateDescriptorUpdateTemplateKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDescriptorUpdateTemplateCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkDescriptorUpdateTemplate>* pDescriptorUpdateTemplate)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateDescriptorUpdateTemplateKHR(call_info, returnValue, device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateRenderPass2KHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkRenderPassCreateInfo2>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkRenderPass>*         pRenderPass)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateRenderPass2KHR(call_info, returnValue, device, pCreateInfo, pAllocator, pRenderPass);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkImportFenceFdKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkImportFenceFdInfoKHR>* pImportFenceFdInfo)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkImportFenceFdKHR(call_info, returnValue, device, pImportFenceFdInfo);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkAcquireProfilingLockKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkAcquireProfilingLockInfoKHR>* pInfo)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkAcquireProfilingLockKHR(call_info, returnValue, device, pInfo);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateSamplerYcbcrConversionKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkSamplerYcbcrConversionCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSamplerYcbcrConversion>* pYcbcrConversion)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateSamplerYcbcrConversionKHR(call_info, returnValue, device, pCreateInfo, pAllocator, pYcbcrConversion);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkBindBufferMemory2KHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    bindInfoCount,
    StructPointerDecoder<Decoded_VkBindBufferMemoryInfo>* pBindInfos)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkBindBufferMemory2KHR(call_info, returnValue, device, bindInfoCount, pBindInfos);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkBindImageMemory2KHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    bindInfoCount,
    StructPointerDecoder<Decoded_VkBindImageMemoryInfo>* pBindInfos)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkBindImageMemory2KHR(call_info, returnValue, device, bindInfoCount, pBindInfos);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateDeferredOperationKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkDeferredOperationKHR>* pDeferredOperation)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateDeferredOperationKHR(call_info, returnValue, device, pAllocator, pDeferredOperation);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkMapMemory2KHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkMemoryMapInfo>* pMemoryMapInfo,
    PointerDecoder<uint64_t, void*>*            ppData)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkMapMemory2KHR(call_info, returnValue, device, pMemoryMapInfo, ppData);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreatePipelineBinariesKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkPipelineBinaryCreateInfoKHR>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    StructPointerDecoder<Decoded_VkPipelineBinaryHandlesInfoKHR>* pBinaries)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreatePipelineBinariesKHR(call_info, returnValue, device, pCreateInfo, pAllocator, pBinaries);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateDebugReportCallbackEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkDebugReportCallbackCreateInfoEXT>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkDebugReportCallbackEXT>* pCallback)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateDebugReportCallbackEXT(call_info, returnValue, instance, pCreateInfo, pAllocator, pCallback);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateStreamDescriptorSurfaceGGP(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkStreamDescriptorSurfaceCreateInfoGGP>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateStreamDescriptorSurfaceGGP(call_info, returnValue, instance, pCreateInfo, pAllocator, pSurface);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateViSurfaceNN(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkViSurfaceCreateInfoNN>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateViSurfaceNN(call_info, returnValue, instance, pCreateInfo, pAllocator, pSurface);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkRegisterDeviceEventEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDeviceEventInfoEXT>* pDeviceEventInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkFence>*              pFence)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkRegisterDeviceEventEXT(call_info, returnValue, device, pDeviceEventInfo, pAllocator, pFence);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkRegisterDisplayEventEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            display,
    StructPointerDecoder<Decoded_VkDisplayEventInfoEXT>* pDisplayEventInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkFence>*              pFence)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkRegisterDisplayEventEXT(call_info, returnValue, device, display, pDisplayEventInfo, pAllocator, pFence);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateIOSSurfaceMVK(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkIOSSurfaceCreateInfoMVK>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateIOSSurfaceMVK(call_info, returnValue, instance, pCreateInfo, pAllocator, pSurface);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateMacOSSurfaceMVK(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkMacOSSurfaceCreateInfoMVK>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateMacOSSurfaceMVK(call_info, returnValue, instance, pCreateInfo, pAllocator, pSurface);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateDebugUtilsMessengerEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkDebugUtilsMessengerCreateInfoEXT>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkDebugUtilsMessengerEXT>* pMessenger)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateDebugUtilsMessengerEXT(call_info, returnValue, instance, pCreateInfo, pAllocator, pMessenger);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateValidationCacheEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkValidationCacheCreateInfoEXT>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkValidationCacheEXT>* pValidationCache)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateValidationCacheEXT(call_info, returnValue, device, pCreateInfo, pAllocator, pValidationCache);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateAccelerationStructureNV(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkAccelerationStructureCreateInfoNV>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkAccelerationStructureNV>* pAccelerationStructure)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateAccelerationStructureNV(call_info, returnValue, device, pCreateInfo, pAllocator, pAccelerationStructure);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkBindAccelerationStructureMemoryNV(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    bindInfoCount,
    StructPointerDecoder<Decoded_VkBindAccelerationStructureMemoryInfoNV>* pBindInfos)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkBindAccelerationStructureMemoryNV(call_info, returnValue, device, bindInfoCount, pBindInfos);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateRayTracingPipelinesNV(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            pipelineCache,
    uint32_t                                    createInfoCount,
    StructPointerDecoder<Decoded_VkRayTracingPipelineCreateInfoNV>* pCreateInfos,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkPipeline>*           pPipelines)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateRayTracingPipelinesNV(call_info, returnValue, device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateImagePipeSurfaceFUCHSIA(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkImagePipeSurfaceCreateInfoFUCHSIA>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateImagePipeSurfaceFUCHSIA(call_info, returnValue, instance, pCreateInfo, pAllocator, pSurface);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateMetalSurfaceEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkMetalSurfaceCreateInfoEXT>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateMetalSurfaceEXT(call_info, returnValue, instance, pCreateInfo, pAllocator, pSurface);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateHeadlessSurfaceEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkHeadlessSurfaceCreateInfoEXT>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateHeadlessSurfaceEXT(call_info, returnValue, instance, pCreateInfo, pAllocator, pSurface);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateIndirectCommandsLayoutNV(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkIndirectCommandsLayoutCreateInfoNV>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkIndirectCommandsLayoutNV>* pIndirectCommandsLayout)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateIndirectCommandsLayoutNV(call_info, returnValue, device, pCreateInfo, pAllocator, pIndirectCommandsLayout);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreatePrivateDataSlotEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkPrivateDataSlotCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkPrivateDataSlot>*    pPrivateDataSlot)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreatePrivateDataSlotEXT(call_info, returnValue, device, pCreateInfo, pAllocator, pPrivateDataSlot);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateDirectFBSurfaceEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkDirectFBSurfaceCreateInfoEXT>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateDirectFBSurfaceEXT(call_info, returnValue, instance, pCreateInfo, pAllocator, pSurface);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateScreenSurfaceQNX(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkScreenSurfaceCreateInfoQNX>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateScreenSurfaceQNX(call_info, returnValue, instance, pCreateInfo, pAllocator, pSurface);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateMicromapEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkMicromapCreateInfoEXT>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkMicromapEXT>*        pMicromap)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateMicromapEXT(call_info, returnValue, device, pCreateInfo, pAllocator, pMicromap);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateOpticalFlowSessionNV(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkOpticalFlowSessionCreateInfoNV>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkOpticalFlowSessionNV>* pSession)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateOpticalFlowSessionNV(call_info, returnValue, device, pCreateInfo, pAllocator, pSession);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkBindOpticalFlowSessionImageNV(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            session,
    VkOpticalFlowSessionBindingPointNV          bindingPoint,
    format::HandleId                            view,
    VkImageLayout                               layout)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkBindOpticalFlowSessionImageNV(call_info, returnValue, device, session, bindingPoint, view, layout);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateShadersEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    createInfoCount,
    StructPointerDecoder<Decoded_VkShaderCreateInfoEXT>* pCreateInfos,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkShaderEXT>*          pShaders)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateShadersEXT(call_info, returnValue, device, createInfoCount, pCreateInfos, pAllocator, pShaders);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateDataGraphPipelinesARM(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            deferredOperation,
    format::HandleId                            pipelineCache,
    uint32_t                                    createInfoCount,
    StructPointerDecoder<Decoded_VkDataGraphPipelineCreateInfoARM>* pCreateInfos,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkPipeline>*           pPipelines)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateDataGraphPipelinesARM(call_info, returnValue, device, deferredOperation, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateDataGraphPipelineSessionARM(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDataGraphPipelineSessionCreateInfoARM>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkDataGraphPipelineSessionARM>* pSession)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateDataGraphPipelineSessionARM(call_info, returnValue, device, pCreateInfo, pAllocator, pSession);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkBindDataGraphPipelineSessionMemoryARM(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    bindInfoCount,
    StructPointerDecoder<Decoded_VkBindDataGraphPipelineSessionMemoryInfoARM>* pBindInfos)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkBindDataGraphPipelineSessionMemoryARM(call_info, returnValue, device, bindInfoCount, pBindInfos);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateIndirectCommandsLayoutEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkIndirectCommandsLayoutCreateInfoEXT>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkIndirectCommandsLayoutEXT>* pIndirectCommandsLayout)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateIndirectCommandsLayoutEXT(call_info, returnValue, device, pCreateInfo, pAllocator, pIndirectCommandsLayout);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateIndirectExecutionSetEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkIndirectExecutionSetCreateInfoEXT>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkIndirectExecutionSetEXT>* pIndirectExecutionSet)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateIndirectExecutionSetEXT(call_info, returnValue, device, pCreateInfo, pAllocator, pIndirectExecutionSet);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateAccelerationStructureKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkAccelerationStructureCreateInfoKHR>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkAccelerationStructureKHR>* pAccelerationStructure)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkCreateAccelerationStructureKHR(call_info, returnValue, device, pCreateInfo, pAllocator, pAccelerationStructure);
}

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)
