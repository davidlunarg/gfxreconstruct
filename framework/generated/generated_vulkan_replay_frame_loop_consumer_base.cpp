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


void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyInstance(
    const ApiCallInfo&                          call_info,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkDestroyInstance(call_info, instance, pAllocator);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyDevice(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkDestroyDevice(call_info, device, pAllocator);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkFreeMemory(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            memory,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkFreeMemory(call_info, device, memory, pAllocator);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkUnmapMemory(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            memory)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkUnmapMemory(call_info, device, memory);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyFence(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            fence,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkDestroyFence(call_info, device, fence, pAllocator);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroySemaphore(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            semaphore,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkDestroySemaphore(call_info, device, semaphore, pAllocator);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyQueryPool(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            queryPool,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkDestroyQueryPool(call_info, device, queryPool, pAllocator);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyBuffer(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            buffer,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkDestroyBuffer(call_info, device, buffer, pAllocator);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyImage(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            image,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkDestroyImage(call_info, device, image, pAllocator);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyImageView(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            imageView,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkDestroyImageView(call_info, device, imageView, pAllocator);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyCommandPool(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            commandPool,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkDestroyCommandPool(call_info, device, commandPool, pAllocator);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkFreeCommandBuffers(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            commandPool,
    uint32_t                                    commandBufferCount,
    HandlePointerDecoder<VkCommandBuffer>*      pCommandBuffers)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkFreeCommandBuffers(call_info, device, commandPool, commandBufferCount, pCommandBuffers);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyEvent(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            event,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkDestroyEvent(call_info, device, event, pAllocator);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyBufferView(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            bufferView,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkDestroyBufferView(call_info, device, bufferView, pAllocator);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyShaderModule(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            shaderModule,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkDestroyShaderModule(call_info, device, shaderModule, pAllocator);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyPipelineCache(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            pipelineCache,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkDestroyPipelineCache(call_info, device, pipelineCache, pAllocator);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyPipeline(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            pipeline,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkDestroyPipeline(call_info, device, pipeline, pAllocator);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyPipelineLayout(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            pipelineLayout,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkDestroyPipelineLayout(call_info, device, pipelineLayout, pAllocator);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroySampler(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            sampler,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkDestroySampler(call_info, device, sampler, pAllocator);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyDescriptorSetLayout(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            descriptorSetLayout,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkDestroyDescriptorSetLayout(call_info, device, descriptorSetLayout, pAllocator);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyDescriptorPool(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            descriptorPool,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkDestroyDescriptorPool(call_info, device, descriptorPool, pAllocator);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkFreeDescriptorSets(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            descriptorPool,
    uint32_t                                    descriptorSetCount,
    HandlePointerDecoder<VkDescriptorSet>*      pDescriptorSets)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkFreeDescriptorSets(call_info, returnValue, device, descriptorPool, descriptorSetCount, pDescriptorSets);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyFramebuffer(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            framebuffer,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkDestroyFramebuffer(call_info, device, framebuffer, pAllocator);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyRenderPass(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            renderPass,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkDestroyRenderPass(call_info, device, renderPass, pAllocator);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyDescriptorUpdateTemplate(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            descriptorUpdateTemplate,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkDestroyDescriptorUpdateTemplate(call_info, device, descriptorUpdateTemplate, pAllocator);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroySamplerYcbcrConversion(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            ycbcrConversion,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkDestroySamplerYcbcrConversion(call_info, device, ycbcrConversion, pAllocator);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyPrivateDataSlot(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            privateDataSlot,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkDestroyPrivateDataSlot(call_info, device, privateDataSlot, pAllocator);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkUnmapMemory2(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkMemoryUnmapInfo>* pMemoryUnmapInfo)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkUnmapMemory2(call_info, returnValue, device, pMemoryUnmapInfo);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroySurfaceKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            instance,
    format::HandleId                            surface,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkDestroySurfaceKHR(call_info, instance, surface, pAllocator);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroySwapchainKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            swapchain,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkDestroySwapchainKHR(call_info, device, swapchain, pAllocator);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyVideoSessionKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            videoSession,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkDestroyVideoSessionKHR(call_info, device, videoSession, pAllocator);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyVideoSessionParametersKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            videoSessionParameters,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkDestroyVideoSessionParametersKHR(call_info, device, videoSessionParameters, pAllocator);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyDescriptorUpdateTemplateKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            descriptorUpdateTemplate,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkDestroyDescriptorUpdateTemplateKHR(call_info, device, descriptorUpdateTemplate, pAllocator);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkReleaseProfilingLockKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkReleaseProfilingLockKHR(call_info, device);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroySamplerYcbcrConversionKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            ycbcrConversion,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkDestroySamplerYcbcrConversionKHR(call_info, device, ycbcrConversion, pAllocator);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyDeferredOperationKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            operation,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkDestroyDeferredOperationKHR(call_info, device, operation, pAllocator);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkUnmapMemory2KHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkMemoryUnmapInfo>* pMemoryUnmapInfo)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkUnmapMemory2KHR(call_info, returnValue, device, pMemoryUnmapInfo);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyPipelineBinaryKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            pipelineBinary,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkDestroyPipelineBinaryKHR(call_info, device, pipelineBinary, pAllocator);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkReleaseCapturedPipelineDataKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkReleaseCapturedPipelineDataInfoKHR>* pInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkReleaseCapturedPipelineDataKHR(call_info, returnValue, device, pInfo, pAllocator);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkReleaseSwapchainImagesKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkReleaseSwapchainImagesInfoKHR>* pReleaseInfo)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkReleaseSwapchainImagesKHR(call_info, returnValue, device, pReleaseInfo);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyDebugReportCallbackEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            instance,
    format::HandleId                            callback,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkDestroyDebugReportCallbackEXT(call_info, instance, callback, pAllocator);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkReleaseDisplayEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            display)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkReleaseDisplayEXT(call_info, returnValue, physicalDevice, display);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyDebugUtilsMessengerEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            instance,
    format::HandleId                            messenger,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkDestroyDebugUtilsMessengerEXT(call_info, instance, messenger, pAllocator);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyValidationCacheEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            validationCache,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkDestroyValidationCacheEXT(call_info, device, validationCache, pAllocator);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyAccelerationStructureNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            accelerationStructure,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkDestroyAccelerationStructureNV(call_info, device, accelerationStructure, pAllocator);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkReleasePerformanceConfigurationINTEL(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            configuration)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkReleasePerformanceConfigurationINTEL(call_info, returnValue, device, configuration);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkReleaseFullScreenExclusiveModeEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkReleaseFullScreenExclusiveModeEXT(call_info, returnValue, device, swapchain);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkReleaseSwapchainImagesEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkReleaseSwapchainImagesInfoKHR>* pReleaseInfo)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkReleaseSwapchainImagesEXT(call_info, returnValue, device, pReleaseInfo);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyIndirectCommandsLayoutNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            indirectCommandsLayout,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkDestroyIndirectCommandsLayoutNV(call_info, device, indirectCommandsLayout, pAllocator);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyPrivateDataSlotEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            privateDataSlot,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkDestroyPrivateDataSlotEXT(call_info, device, privateDataSlot, pAllocator);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyMicromapEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            micromap,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkDestroyMicromapEXT(call_info, device, micromap, pAllocator);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyOpticalFlowSessionNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            session,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkDestroyOpticalFlowSessionNV(call_info, device, session, pAllocator);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyShaderEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            shader,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkDestroyShaderEXT(call_info, device, shader, pAllocator);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyDataGraphPipelineSessionARM(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            session,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkDestroyDataGraphPipelineSessionARM(call_info, device, session, pAllocator);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyIndirectCommandsLayoutEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            indirectCommandsLayout,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkDestroyIndirectCommandsLayoutEXT(call_info, device, indirectCommandsLayout, pAllocator);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyIndirectExecutionSetEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            indirectExecutionSet,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkDestroyIndirectExecutionSetEXT(call_info, device, indirectExecutionSet, pAllocator);
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyAccelerationStructureKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            accelerationStructure,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    if (frame_loop_info_.IsRepetition())
    {
        return;
    }
    VulkanReplayConsumer::Process_vkDestroyAccelerationStructureKHR(call_info, device, accelerationStructure, pAllocator);
}

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)
