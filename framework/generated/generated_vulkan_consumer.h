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

#ifndef  GFXRECON_GENERATED_VULKAN_CONSUMER_H
#define  GFXRECON_GENERATED_VULKAN_CONSUMER_H

#include "decode/api_decoder.h"
#include "decode/vulkan_consumer_base.h"
#include "util/defines.h"

#include "vulkan/vulkan.h"

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)

class VulkanConsumer : public VulkanConsumerBase
{
  public:
    VulkanConsumer() { }

    virtual ~VulkanConsumer() override { }

    virtual void Process_vkCreateInstance(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        const StructPointerDecoder<Decoded_VkInstanceCreateInfo>& pCreateInfo,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkInstance>*           pInstance) = 0;

    virtual void Process_vkDestroyInstance(
        const ApiCallInfo&                          call_info,
        format::HandleId                            instance,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator) = 0;

    virtual void Process_vkEnumeratePhysicalDevices(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            instance,
        PointerDecoder<uint32_t>*                   pPhysicalDeviceCount,
        HandlePointerDecoder<VkPhysicalDevice>*     pPhysicalDevices) = 0;

    virtual void Process_vkGetPhysicalDeviceFeatures(
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        StructPointerDecoder<Decoded_VkPhysicalDeviceFeatures>* pFeatures) = 0;

    virtual void Process_vkGetPhysicalDeviceFormatProperties(
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        VkFormat                                    format,
        StructPointerDecoder<Decoded_VkFormatProperties>* pFormatProperties) = 0;

    virtual void Process_vkGetPhysicalDeviceImageFormatProperties(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        VkFormat                                    format,
        VkImageType                                 type,
        VkImageTiling                               tiling,
        VkImageUsageFlags                           usage,
        VkImageCreateFlags                          flags,
        StructPointerDecoder<Decoded_VkImageFormatProperties>* pImageFormatProperties) = 0;

    virtual void Process_vkGetPhysicalDeviceProperties(
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        StructPointerDecoder<Decoded_VkPhysicalDeviceProperties>* pProperties) = 0;

    virtual void Process_vkGetPhysicalDeviceQueueFamilyProperties(
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        PointerDecoder<uint32_t>*                   pQueueFamilyPropertyCount,
        StructPointerDecoder<Decoded_VkQueueFamilyProperties>* pQueueFamilyProperties) = 0;

    virtual void Process_vkGetPhysicalDeviceMemoryProperties(
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        StructPointerDecoder<Decoded_VkPhysicalDeviceMemoryProperties>* pMemoryProperties) = 0;

    virtual void Process_vkCreateDevice(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        const StructPointerDecoder<Decoded_VkDeviceCreateInfo>& pCreateInfo,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkDevice>*             pDevice) = 0;

    virtual void Process_vkDestroyDevice(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator) = 0;

    virtual void Process_vkGetDeviceQueue(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        uint32_t                                    queueFamilyIndex,
        uint32_t                                    queueIndex,
        HandlePointerDecoder<VkQueue>*              pQueue) = 0;

    virtual void Process_vkQueueSubmit(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            queue,
        uint32_t                                    submitCount,
        const StructPointerDecoder<Decoded_VkSubmitInfo>& pSubmits,
        format::HandleId                            fence) = 0;

    virtual void Process_vkQueueWaitIdle(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            queue) = 0;

    virtual void Process_vkDeviceWaitIdle(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device) = 0;

    virtual void Process_vkAllocateMemory(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkMemoryAllocateInfo>& pAllocateInfo,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkDeviceMemory>*       pMemory) = 0;

    virtual void Process_vkFreeMemory(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            memory,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator) = 0;

    virtual void Process_vkMapMemory(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            memory,
        VkDeviceSize                                offset,
        VkDeviceSize                                size,
        VkMemoryMapFlags                            flags,
        PointerDecoder<uint64_t, void*>*            ppData) = 0;

    virtual void Process_vkUnmapMemory(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            memory) = 0;

    virtual void Process_vkFlushMappedMemoryRanges(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        uint32_t                                    memoryRangeCount,
        const StructPointerDecoder<Decoded_VkMappedMemoryRange>& pMemoryRanges) = 0;

    virtual void Process_vkInvalidateMappedMemoryRanges(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        uint32_t                                    memoryRangeCount,
        const StructPointerDecoder<Decoded_VkMappedMemoryRange>& pMemoryRanges) = 0;

    virtual void Process_vkGetDeviceMemoryCommitment(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            memory,
        PointerDecoder<VkDeviceSize>*               pCommittedMemoryInBytes) = 0;

    virtual void Process_vkBindBufferMemory(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            buffer,
        format::HandleId                            memory,
        VkDeviceSize                                memoryOffset) = 0;

    virtual void Process_vkBindImageMemory(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            image,
        format::HandleId                            memory,
        VkDeviceSize                                memoryOffset) = 0;

    virtual void Process_vkGetBufferMemoryRequirements(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            buffer,
        StructPointerDecoder<Decoded_VkMemoryRequirements>* pMemoryRequirements) = 0;

    virtual void Process_vkGetImageMemoryRequirements(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            image,
        StructPointerDecoder<Decoded_VkMemoryRequirements>* pMemoryRequirements) = 0;

    virtual void Process_vkGetImageSparseMemoryRequirements(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            image,
        PointerDecoder<uint32_t>*                   pSparseMemoryRequirementCount,
        StructPointerDecoder<Decoded_VkSparseImageMemoryRequirements>* pSparseMemoryRequirements) = 0;

    virtual void Process_vkGetPhysicalDeviceSparseImageFormatProperties(
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        VkFormat                                    format,
        VkImageType                                 type,
        VkSampleCountFlagBits                       samples,
        VkImageUsageFlags                           usage,
        VkImageTiling                               tiling,
        PointerDecoder<uint32_t>*                   pPropertyCount,
        StructPointerDecoder<Decoded_VkSparseImageFormatProperties>* pProperties) = 0;

    virtual void Process_vkQueueBindSparse(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            queue,
        uint32_t                                    bindInfoCount,
        const StructPointerDecoder<Decoded_VkBindSparseInfo>& pBindInfo,
        format::HandleId                            fence) = 0;

    virtual void Process_vkCreateFence(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkFenceCreateInfo>& pCreateInfo,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkFence>*              pFence) = 0;

    virtual void Process_vkDestroyFence(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            fence,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator) = 0;

    virtual void Process_vkResetFences(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        uint32_t                                    fenceCount,
        const HandlePointerDecoder<VkFence>&        pFences) = 0;

    virtual void Process_vkGetFenceStatus(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            fence) = 0;

    virtual void Process_vkWaitForFences(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        uint32_t                                    fenceCount,
        const HandlePointerDecoder<VkFence>&        pFences,
        VkBool32                                    waitAll,
        uint64_t                                    timeout) = 0;

    virtual void Process_vkCreateSemaphore(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkSemaphoreCreateInfo>& pCreateInfo,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkSemaphore>*          pSemaphore) = 0;

    virtual void Process_vkDestroySemaphore(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            semaphore,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator) = 0;

    virtual void Process_vkCreateEvent(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkEventCreateInfo>& pCreateInfo,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkEvent>*              pEvent) = 0;

    virtual void Process_vkDestroyEvent(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            event,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator) = 0;

    virtual void Process_vkGetEventStatus(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            event) = 0;

    virtual void Process_vkSetEvent(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            event) = 0;

    virtual void Process_vkResetEvent(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            event) = 0;

    virtual void Process_vkCreateQueryPool(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkQueryPoolCreateInfo>& pCreateInfo,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkQueryPool>*          pQueryPool) = 0;

    virtual void Process_vkDestroyQueryPool(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            queryPool,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator) = 0;

    virtual void Process_vkGetQueryPoolResults(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            queryPool,
        uint32_t                                    firstQuery,
        uint32_t                                    queryCount,
        size_t                                      dataSize,
        PointerDecoder<uint8_t>*                    pData,
        VkDeviceSize                                stride,
        VkQueryResultFlags                          flags) = 0;

    virtual void Process_vkCreateBuffer(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkBufferCreateInfo>& pCreateInfo,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkBuffer>*             pBuffer) = 0;

    virtual void Process_vkDestroyBuffer(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            buffer,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator) = 0;

    virtual void Process_vkCreateBufferView(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkBufferViewCreateInfo>& pCreateInfo,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkBufferView>*         pView) = 0;

    virtual void Process_vkDestroyBufferView(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            bufferView,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator) = 0;

    virtual void Process_vkCreateImage(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkImageCreateInfo>& pCreateInfo,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkImage>*              pImage) = 0;

    virtual void Process_vkDestroyImage(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            image,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator) = 0;

    virtual void Process_vkGetImageSubresourceLayout(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            image,
        const StructPointerDecoder<Decoded_VkImageSubresource>& pSubresource,
        StructPointerDecoder<Decoded_VkSubresourceLayout>* pLayout) = 0;

    virtual void Process_vkCreateImageView(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkImageViewCreateInfo>& pCreateInfo,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkImageView>*          pView) = 0;

    virtual void Process_vkDestroyImageView(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            imageView,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator) = 0;

    virtual void Process_vkCreateShaderModule(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkShaderModuleCreateInfo>& pCreateInfo,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkShaderModule>*       pShaderModule) = 0;

    virtual void Process_vkDestroyShaderModule(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            shaderModule,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator) = 0;

    virtual void Process_vkCreatePipelineCache(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkPipelineCacheCreateInfo>& pCreateInfo,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkPipelineCache>*      pPipelineCache) = 0;

    virtual void Process_vkDestroyPipelineCache(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            pipelineCache,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator) = 0;

    virtual void Process_vkGetPipelineCacheData(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            pipelineCache,
        PointerDecoder<size_t>*                     pDataSize,
        PointerDecoder<uint8_t>*                    pData) = 0;

    virtual void Process_vkMergePipelineCaches(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            dstCache,
        uint32_t                                    srcCacheCount,
        const HandlePointerDecoder<VkPipelineCache>& pSrcCaches) = 0;

    virtual void Process_vkCreateGraphicsPipelines(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            pipelineCache,
        uint32_t                                    createInfoCount,
        const StructPointerDecoder<Decoded_VkGraphicsPipelineCreateInfo>& pCreateInfos,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkPipeline>*           pPipelines) = 0;

    virtual void Process_vkCreateComputePipelines(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            pipelineCache,
        uint32_t                                    createInfoCount,
        const StructPointerDecoder<Decoded_VkComputePipelineCreateInfo>& pCreateInfos,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkPipeline>*           pPipelines) = 0;

    virtual void Process_vkDestroyPipeline(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            pipeline,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator) = 0;

    virtual void Process_vkCreatePipelineLayout(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkPipelineLayoutCreateInfo>& pCreateInfo,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkPipelineLayout>*     pPipelineLayout) = 0;

    virtual void Process_vkDestroyPipelineLayout(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            pipelineLayout,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator) = 0;

    virtual void Process_vkCreateSampler(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkSamplerCreateInfo>& pCreateInfo,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkSampler>*            pSampler) = 0;

    virtual void Process_vkDestroySampler(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            sampler,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator) = 0;

    virtual void Process_vkCreateDescriptorSetLayout(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkDescriptorSetLayoutCreateInfo>& pCreateInfo,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkDescriptorSetLayout>* pSetLayout) = 0;

    virtual void Process_vkDestroyDescriptorSetLayout(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            descriptorSetLayout,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator) = 0;

    virtual void Process_vkCreateDescriptorPool(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkDescriptorPoolCreateInfo>& pCreateInfo,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkDescriptorPool>*     pDescriptorPool) = 0;

    virtual void Process_vkDestroyDescriptorPool(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            descriptorPool,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator) = 0;

    virtual void Process_vkResetDescriptorPool(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            descriptorPool,
        VkDescriptorPoolResetFlags                  flags) = 0;

    virtual void Process_vkAllocateDescriptorSets(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkDescriptorSetAllocateInfo>& pAllocateInfo,
        HandlePointerDecoder<VkDescriptorSet>*      pDescriptorSets) = 0;

    virtual void Process_vkFreeDescriptorSets(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            descriptorPool,
        uint32_t                                    descriptorSetCount,
        const HandlePointerDecoder<VkDescriptorSet>& pDescriptorSets) = 0;

    virtual void Process_vkUpdateDescriptorSets(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        uint32_t                                    descriptorWriteCount,
        const StructPointerDecoder<Decoded_VkWriteDescriptorSet>& pDescriptorWrites,
        uint32_t                                    descriptorCopyCount,
        const StructPointerDecoder<Decoded_VkCopyDescriptorSet>& pDescriptorCopies) = 0;

    virtual void Process_vkCreateFramebuffer(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkFramebufferCreateInfo>& pCreateInfo,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkFramebuffer>*        pFramebuffer) = 0;

    virtual void Process_vkDestroyFramebuffer(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            framebuffer,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator) = 0;

    virtual void Process_vkCreateRenderPass(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkRenderPassCreateInfo>& pCreateInfo,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkRenderPass>*         pRenderPass) = 0;

    virtual void Process_vkDestroyRenderPass(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            renderPass,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator) = 0;

    virtual void Process_vkGetRenderAreaGranularity(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            renderPass,
        StructPointerDecoder<Decoded_VkExtent2D>*   pGranularity) = 0;

    virtual void Process_vkCreateCommandPool(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkCommandPoolCreateInfo>& pCreateInfo,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkCommandPool>*        pCommandPool) = 0;

    virtual void Process_vkDestroyCommandPool(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            commandPool,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator) = 0;

    virtual void Process_vkResetCommandPool(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            commandPool,
        VkCommandPoolResetFlags                     flags) = 0;

    virtual void Process_vkAllocateCommandBuffers(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkCommandBufferAllocateInfo>& pAllocateInfo,
        HandlePointerDecoder<VkCommandBuffer>*      pCommandBuffers) = 0;

    virtual void Process_vkFreeCommandBuffers(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            commandPool,
        uint32_t                                    commandBufferCount,
        const HandlePointerDecoder<VkCommandBuffer>& pCommandBuffers) = 0;

    virtual void Process_vkBeginCommandBuffer(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        const StructPointerDecoder<Decoded_VkCommandBufferBeginInfo>& pBeginInfo) = 0;

    virtual void Process_vkEndCommandBuffer(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer) = 0;

    virtual void Process_vkResetCommandBuffer(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        VkCommandBufferResetFlags                   flags) = 0;

    virtual void Process_vkCmdBindPipeline(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        VkPipelineBindPoint                         pipelineBindPoint,
        format::HandleId                            pipeline) = 0;

    virtual void Process_vkCmdSetViewport(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        uint32_t                                    firstViewport,
        uint32_t                                    viewportCount,
        const StructPointerDecoder<Decoded_VkViewport>& pViewports) = 0;

    virtual void Process_vkCmdSetScissor(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        uint32_t                                    firstScissor,
        uint32_t                                    scissorCount,
        const StructPointerDecoder<Decoded_VkRect2D>& pScissors) = 0;

    virtual void Process_vkCmdSetLineWidth(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        float                                       lineWidth) = 0;

    virtual void Process_vkCmdSetDepthBias(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        float                                       depthBiasConstantFactor,
        float                                       depthBiasClamp,
        float                                       depthBiasSlopeFactor) = 0;

    virtual void Process_vkCmdSetBlendConstants(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        const PointerDecoder<float>&                blendConstants) = 0;

    virtual void Process_vkCmdSetDepthBounds(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        float                                       minDepthBounds,
        float                                       maxDepthBounds) = 0;

    virtual void Process_vkCmdSetStencilCompareMask(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        VkStencilFaceFlags                          faceMask,
        uint32_t                                    compareMask) = 0;

    virtual void Process_vkCmdSetStencilWriteMask(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        VkStencilFaceFlags                          faceMask,
        uint32_t                                    writeMask) = 0;

    virtual void Process_vkCmdSetStencilReference(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        VkStencilFaceFlags                          faceMask,
        uint32_t                                    reference) = 0;

    virtual void Process_vkCmdBindDescriptorSets(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        VkPipelineBindPoint                         pipelineBindPoint,
        format::HandleId                            layout,
        uint32_t                                    firstSet,
        uint32_t                                    descriptorSetCount,
        const HandlePointerDecoder<VkDescriptorSet>& pDescriptorSets,
        uint32_t                                    dynamicOffsetCount,
        const PointerDecoder<uint32_t>&             pDynamicOffsets) = 0;

    virtual void Process_vkCmdBindIndexBuffer(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        format::HandleId                            buffer,
        VkDeviceSize                                offset,
        VkIndexType                                 indexType) = 0;

    virtual void Process_vkCmdBindVertexBuffers(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        uint32_t                                    firstBinding,
        uint32_t                                    bindingCount,
        const HandlePointerDecoder<VkBuffer>&       pBuffers,
        const PointerDecoder<VkDeviceSize>&         pOffsets) = 0;

    virtual void Process_vkCmdDraw(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        uint32_t                                    vertexCount,
        uint32_t                                    instanceCount,
        uint32_t                                    firstVertex,
        uint32_t                                    firstInstance) = 0;

    virtual void Process_vkCmdDrawIndexed(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        uint32_t                                    indexCount,
        uint32_t                                    instanceCount,
        uint32_t                                    firstIndex,
        int32_t                                     vertexOffset,
        uint32_t                                    firstInstance) = 0;

    virtual void Process_vkCmdDrawIndirect(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        format::HandleId                            buffer,
        VkDeviceSize                                offset,
        uint32_t                                    drawCount,
        uint32_t                                    stride) = 0;

    virtual void Process_vkCmdDrawIndexedIndirect(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        format::HandleId                            buffer,
        VkDeviceSize                                offset,
        uint32_t                                    drawCount,
        uint32_t                                    stride) = 0;

    virtual void Process_vkCmdDispatch(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        uint32_t                                    groupCountX,
        uint32_t                                    groupCountY,
        uint32_t                                    groupCountZ) = 0;

    virtual void Process_vkCmdDispatchIndirect(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        format::HandleId                            buffer,
        VkDeviceSize                                offset) = 0;

    virtual void Process_vkCmdCopyBuffer(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        format::HandleId                            srcBuffer,
        format::HandleId                            dstBuffer,
        uint32_t                                    regionCount,
        const StructPointerDecoder<Decoded_VkBufferCopy>& pRegions) = 0;

    virtual void Process_vkCmdCopyImage(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        format::HandleId                            srcImage,
        VkImageLayout                               srcImageLayout,
        format::HandleId                            dstImage,
        VkImageLayout                               dstImageLayout,
        uint32_t                                    regionCount,
        const StructPointerDecoder<Decoded_VkImageCopy>& pRegions) = 0;

    virtual void Process_vkCmdBlitImage(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        format::HandleId                            srcImage,
        VkImageLayout                               srcImageLayout,
        format::HandleId                            dstImage,
        VkImageLayout                               dstImageLayout,
        uint32_t                                    regionCount,
        const StructPointerDecoder<Decoded_VkImageBlit>& pRegions,
        VkFilter                                    filter) = 0;

    virtual void Process_vkCmdCopyBufferToImage(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        format::HandleId                            srcBuffer,
        format::HandleId                            dstImage,
        VkImageLayout                               dstImageLayout,
        uint32_t                                    regionCount,
        const StructPointerDecoder<Decoded_VkBufferImageCopy>& pRegions) = 0;

    virtual void Process_vkCmdCopyImageToBuffer(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        format::HandleId                            srcImage,
        VkImageLayout                               srcImageLayout,
        format::HandleId                            dstBuffer,
        uint32_t                                    regionCount,
        const StructPointerDecoder<Decoded_VkBufferImageCopy>& pRegions) = 0;

    virtual void Process_vkCmdUpdateBuffer(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        format::HandleId                            dstBuffer,
        VkDeviceSize                                dstOffset,
        VkDeviceSize                                dataSize,
        const PointerDecoder<uint8_t>&              pData) = 0;

    virtual void Process_vkCmdFillBuffer(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        format::HandleId                            dstBuffer,
        VkDeviceSize                                dstOffset,
        VkDeviceSize                                size,
        uint32_t                                    data) = 0;

    virtual void Process_vkCmdClearColorImage(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        format::HandleId                            image,
        VkImageLayout                               imageLayout,
        const StructPointerDecoder<Decoded_VkClearColorValue>& pColor,
        uint32_t                                    rangeCount,
        const StructPointerDecoder<Decoded_VkImageSubresourceRange>& pRanges) = 0;

    virtual void Process_vkCmdClearDepthStencilImage(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        format::HandleId                            image,
        VkImageLayout                               imageLayout,
        const StructPointerDecoder<Decoded_VkClearDepthStencilValue>& pDepthStencil,
        uint32_t                                    rangeCount,
        const StructPointerDecoder<Decoded_VkImageSubresourceRange>& pRanges) = 0;

    virtual void Process_vkCmdClearAttachments(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        uint32_t                                    attachmentCount,
        const StructPointerDecoder<Decoded_VkClearAttachment>& pAttachments,
        uint32_t                                    rectCount,
        const StructPointerDecoder<Decoded_VkClearRect>& pRects) = 0;

    virtual void Process_vkCmdResolveImage(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        format::HandleId                            srcImage,
        VkImageLayout                               srcImageLayout,
        format::HandleId                            dstImage,
        VkImageLayout                               dstImageLayout,
        uint32_t                                    regionCount,
        const StructPointerDecoder<Decoded_VkImageResolve>& pRegions) = 0;

    virtual void Process_vkCmdSetEvent(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        format::HandleId                            event,
        VkPipelineStageFlags                        stageMask) = 0;

    virtual void Process_vkCmdResetEvent(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        format::HandleId                            event,
        VkPipelineStageFlags                        stageMask) = 0;

    virtual void Process_vkCmdWaitEvents(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        uint32_t                                    eventCount,
        const HandlePointerDecoder<VkEvent>&        pEvents,
        VkPipelineStageFlags                        srcStageMask,
        VkPipelineStageFlags                        dstStageMask,
        uint32_t                                    memoryBarrierCount,
        const StructPointerDecoder<Decoded_VkMemoryBarrier>& pMemoryBarriers,
        uint32_t                                    bufferMemoryBarrierCount,
        const StructPointerDecoder<Decoded_VkBufferMemoryBarrier>& pBufferMemoryBarriers,
        uint32_t                                    imageMemoryBarrierCount,
        const StructPointerDecoder<Decoded_VkImageMemoryBarrier>& pImageMemoryBarriers) = 0;

    virtual void Process_vkCmdPipelineBarrier(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        VkPipelineStageFlags                        srcStageMask,
        VkPipelineStageFlags                        dstStageMask,
        VkDependencyFlags                           dependencyFlags,
        uint32_t                                    memoryBarrierCount,
        const StructPointerDecoder<Decoded_VkMemoryBarrier>& pMemoryBarriers,
        uint32_t                                    bufferMemoryBarrierCount,
        const StructPointerDecoder<Decoded_VkBufferMemoryBarrier>& pBufferMemoryBarriers,
        uint32_t                                    imageMemoryBarrierCount,
        const StructPointerDecoder<Decoded_VkImageMemoryBarrier>& pImageMemoryBarriers) = 0;

    virtual void Process_vkCmdBeginQuery(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        format::HandleId                            queryPool,
        uint32_t                                    query,
        VkQueryControlFlags                         flags) = 0;

    virtual void Process_vkCmdEndQuery(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        format::HandleId                            queryPool,
        uint32_t                                    query) = 0;

    virtual void Process_vkCmdResetQueryPool(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        format::HandleId                            queryPool,
        uint32_t                                    firstQuery,
        uint32_t                                    queryCount) = 0;

    virtual void Process_vkCmdWriteTimestamp(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        VkPipelineStageFlagBits                     pipelineStage,
        format::HandleId                            queryPool,
        uint32_t                                    query) = 0;

    virtual void Process_vkCmdCopyQueryPoolResults(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        format::HandleId                            queryPool,
        uint32_t                                    firstQuery,
        uint32_t                                    queryCount,
        format::HandleId                            dstBuffer,
        VkDeviceSize                                dstOffset,
        VkDeviceSize                                stride,
        VkQueryResultFlags                          flags) = 0;

    virtual void Process_vkCmdPushConstants(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        format::HandleId                            layout,
        VkShaderStageFlags                          stageFlags,
        uint32_t                                    offset,
        uint32_t                                    size,
        const PointerDecoder<uint8_t>&              pValues) = 0;

    virtual void Process_vkCmdBeginRenderPass(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        const StructPointerDecoder<Decoded_VkRenderPassBeginInfo>& pRenderPassBegin,
        VkSubpassContents                           contents) = 0;

    virtual void Process_vkCmdNextSubpass(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        VkSubpassContents                           contents) = 0;

    virtual void Process_vkCmdEndRenderPass(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer) = 0;

    virtual void Process_vkCmdExecuteCommands(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        uint32_t                                    commandBufferCount,
        const HandlePointerDecoder<VkCommandBuffer>& pCommandBuffers) = 0;

    virtual void Process_vkBindBufferMemory2(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        uint32_t                                    bindInfoCount,
        const StructPointerDecoder<Decoded_VkBindBufferMemoryInfo>& pBindInfos) = 0;

    virtual void Process_vkBindImageMemory2(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        uint32_t                                    bindInfoCount,
        const StructPointerDecoder<Decoded_VkBindImageMemoryInfo>& pBindInfos) = 0;

    virtual void Process_vkGetDeviceGroupPeerMemoryFeatures(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        uint32_t                                    heapIndex,
        uint32_t                                    localDeviceIndex,
        uint32_t                                    remoteDeviceIndex,
        PointerDecoder<VkPeerMemoryFeatureFlags>*   pPeerMemoryFeatures) = 0;

    virtual void Process_vkCmdSetDeviceMask(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        uint32_t                                    deviceMask) = 0;

    virtual void Process_vkCmdDispatchBase(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        uint32_t                                    baseGroupX,
        uint32_t                                    baseGroupY,
        uint32_t                                    baseGroupZ,
        uint32_t                                    groupCountX,
        uint32_t                                    groupCountY,
        uint32_t                                    groupCountZ) = 0;

    virtual void Process_vkEnumeratePhysicalDeviceGroups(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            instance,
        PointerDecoder<uint32_t>*                   pPhysicalDeviceGroupCount,
        StructPointerDecoder<Decoded_VkPhysicalDeviceGroupProperties>* pPhysicalDeviceGroupProperties) = 0;

    virtual void Process_vkGetImageMemoryRequirements2(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkImageMemoryRequirementsInfo2>& pInfo,
        StructPointerDecoder<Decoded_VkMemoryRequirements2>* pMemoryRequirements) = 0;

    virtual void Process_vkGetBufferMemoryRequirements2(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkBufferMemoryRequirementsInfo2>& pInfo,
        StructPointerDecoder<Decoded_VkMemoryRequirements2>* pMemoryRequirements) = 0;

    virtual void Process_vkGetImageSparseMemoryRequirements2(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkImageSparseMemoryRequirementsInfo2>& pInfo,
        PointerDecoder<uint32_t>*                   pSparseMemoryRequirementCount,
        StructPointerDecoder<Decoded_VkSparseImageMemoryRequirements2>* pSparseMemoryRequirements) = 0;

    virtual void Process_vkGetPhysicalDeviceFeatures2(
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        StructPointerDecoder<Decoded_VkPhysicalDeviceFeatures2>* pFeatures) = 0;

    virtual void Process_vkGetPhysicalDeviceProperties2(
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        StructPointerDecoder<Decoded_VkPhysicalDeviceProperties2>* pProperties) = 0;

    virtual void Process_vkGetPhysicalDeviceFormatProperties2(
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        VkFormat                                    format,
        StructPointerDecoder<Decoded_VkFormatProperties2>* pFormatProperties) = 0;

    virtual void Process_vkGetPhysicalDeviceImageFormatProperties2(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        const StructPointerDecoder<Decoded_VkPhysicalDeviceImageFormatInfo2>& pImageFormatInfo,
        StructPointerDecoder<Decoded_VkImageFormatProperties2>* pImageFormatProperties) = 0;

    virtual void Process_vkGetPhysicalDeviceQueueFamilyProperties2(
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        PointerDecoder<uint32_t>*                   pQueueFamilyPropertyCount,
        StructPointerDecoder<Decoded_VkQueueFamilyProperties2>* pQueueFamilyProperties) = 0;

    virtual void Process_vkGetPhysicalDeviceMemoryProperties2(
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        StructPointerDecoder<Decoded_VkPhysicalDeviceMemoryProperties2>* pMemoryProperties) = 0;

    virtual void Process_vkGetPhysicalDeviceSparseImageFormatProperties2(
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        const StructPointerDecoder<Decoded_VkPhysicalDeviceSparseImageFormatInfo2>& pFormatInfo,
        PointerDecoder<uint32_t>*                   pPropertyCount,
        StructPointerDecoder<Decoded_VkSparseImageFormatProperties2>* pProperties) = 0;

    virtual void Process_vkTrimCommandPool(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            commandPool,
        VkCommandPoolTrimFlags                      flags) = 0;

    virtual void Process_vkGetDeviceQueue2(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkDeviceQueueInfo2>& pQueueInfo,
        HandlePointerDecoder<VkQueue>*              pQueue) = 0;

    virtual void Process_vkCreateSamplerYcbcrConversion(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkSamplerYcbcrConversionCreateInfo>& pCreateInfo,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkSamplerYcbcrConversion>* pYcbcrConversion) = 0;

    virtual void Process_vkDestroySamplerYcbcrConversion(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            ycbcrConversion,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator) = 0;

    virtual void Process_vkCreateDescriptorUpdateTemplate(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkDescriptorUpdateTemplateCreateInfo>& pCreateInfo,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkDescriptorUpdateTemplate>* pDescriptorUpdateTemplate) = 0;

    virtual void Process_vkDestroyDescriptorUpdateTemplate(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            descriptorUpdateTemplate,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator) = 0;

    virtual void Process_vkGetPhysicalDeviceExternalBufferProperties(
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        const StructPointerDecoder<Decoded_VkPhysicalDeviceExternalBufferInfo>& pExternalBufferInfo,
        StructPointerDecoder<Decoded_VkExternalBufferProperties>* pExternalBufferProperties) = 0;

    virtual void Process_vkGetPhysicalDeviceExternalFenceProperties(
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        const StructPointerDecoder<Decoded_VkPhysicalDeviceExternalFenceInfo>& pExternalFenceInfo,
        StructPointerDecoder<Decoded_VkExternalFenceProperties>* pExternalFenceProperties) = 0;

    virtual void Process_vkGetPhysicalDeviceExternalSemaphoreProperties(
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        const StructPointerDecoder<Decoded_VkPhysicalDeviceExternalSemaphoreInfo>& pExternalSemaphoreInfo,
        StructPointerDecoder<Decoded_VkExternalSemaphoreProperties>* pExternalSemaphoreProperties) = 0;

    virtual void Process_vkGetDescriptorSetLayoutSupport(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkDescriptorSetLayoutCreateInfo>& pCreateInfo,
        StructPointerDecoder<Decoded_VkDescriptorSetLayoutSupport>* pSupport) = 0;

    virtual void Process_vkDestroySurfaceKHR(
        const ApiCallInfo&                          call_info,
        format::HandleId                            instance,
        format::HandleId                            surface,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator) = 0;

    virtual void Process_vkGetPhysicalDeviceSurfaceSupportKHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        uint32_t                                    queueFamilyIndex,
        format::HandleId                            surface,
        PointerDecoder<VkBool32>*                   pSupported) = 0;

    virtual void Process_vkGetPhysicalDeviceSurfaceCapabilitiesKHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        format::HandleId                            surface,
        StructPointerDecoder<Decoded_VkSurfaceCapabilitiesKHR>* pSurfaceCapabilities) = 0;

    virtual void Process_vkGetPhysicalDeviceSurfaceFormatsKHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        format::HandleId                            surface,
        PointerDecoder<uint32_t>*                   pSurfaceFormatCount,
        StructPointerDecoder<Decoded_VkSurfaceFormatKHR>* pSurfaceFormats) = 0;

    virtual void Process_vkGetPhysicalDeviceSurfacePresentModesKHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        format::HandleId                            surface,
        PointerDecoder<uint32_t>*                   pPresentModeCount,
        PointerDecoder<VkPresentModeKHR>*           pPresentModes) = 0;

    virtual void Process_vkCreateSwapchainKHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkSwapchainCreateInfoKHR>& pCreateInfo,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkSwapchainKHR>*       pSwapchain) = 0;

    virtual void Process_vkDestroySwapchainKHR(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            swapchain,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator) = 0;

    virtual void Process_vkGetSwapchainImagesKHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            swapchain,
        PointerDecoder<uint32_t>*                   pSwapchainImageCount,
        HandlePointerDecoder<VkImage>*              pSwapchainImages) = 0;

    virtual void Process_vkAcquireNextImageKHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            swapchain,
        uint64_t                                    timeout,
        format::HandleId                            semaphore,
        format::HandleId                            fence,
        PointerDecoder<uint32_t>*                   pImageIndex) = 0;

    virtual void Process_vkQueuePresentKHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            queue,
        const StructPointerDecoder<Decoded_VkPresentInfoKHR>& pPresentInfo) = 0;

    virtual void Process_vkGetDeviceGroupPresentCapabilitiesKHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        StructPointerDecoder<Decoded_VkDeviceGroupPresentCapabilitiesKHR>* pDeviceGroupPresentCapabilities) = 0;

    virtual void Process_vkGetDeviceGroupSurfacePresentModesKHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            surface,
        PointerDecoder<VkDeviceGroupPresentModeFlagsKHR>* pModes) = 0;

    virtual void Process_vkGetPhysicalDevicePresentRectanglesKHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        format::HandleId                            surface,
        PointerDecoder<uint32_t>*                   pRectCount,
        StructPointerDecoder<Decoded_VkRect2D>*     pRects) = 0;

    virtual void Process_vkAcquireNextImage2KHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkAcquireNextImageInfoKHR>& pAcquireInfo,
        PointerDecoder<uint32_t>*                   pImageIndex) = 0;

    virtual void Process_vkGetPhysicalDeviceDisplayPropertiesKHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        PointerDecoder<uint32_t>*                   pPropertyCount,
        StructPointerDecoder<Decoded_VkDisplayPropertiesKHR>* pProperties) = 0;

    virtual void Process_vkGetPhysicalDeviceDisplayPlanePropertiesKHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        PointerDecoder<uint32_t>*                   pPropertyCount,
        StructPointerDecoder<Decoded_VkDisplayPlanePropertiesKHR>* pProperties) = 0;

    virtual void Process_vkGetDisplayPlaneSupportedDisplaysKHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        uint32_t                                    planeIndex,
        PointerDecoder<uint32_t>*                   pDisplayCount,
        HandlePointerDecoder<VkDisplayKHR>*         pDisplays) = 0;

    virtual void Process_vkGetDisplayModePropertiesKHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        format::HandleId                            display,
        PointerDecoder<uint32_t>*                   pPropertyCount,
        StructPointerDecoder<Decoded_VkDisplayModePropertiesKHR>* pProperties) = 0;

    virtual void Process_vkCreateDisplayModeKHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        format::HandleId                            display,
        const StructPointerDecoder<Decoded_VkDisplayModeCreateInfoKHR>& pCreateInfo,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkDisplayModeKHR>*     pMode) = 0;

    virtual void Process_vkGetDisplayPlaneCapabilitiesKHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        format::HandleId                            mode,
        uint32_t                                    planeIndex,
        StructPointerDecoder<Decoded_VkDisplayPlaneCapabilitiesKHR>* pCapabilities) = 0;

    virtual void Process_vkCreateDisplayPlaneSurfaceKHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            instance,
        const StructPointerDecoder<Decoded_VkDisplaySurfaceCreateInfoKHR>& pCreateInfo,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkSurfaceKHR>*         pSurface) = 0;

    virtual void Process_vkCreateSharedSwapchainsKHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        uint32_t                                    swapchainCount,
        const StructPointerDecoder<Decoded_VkSwapchainCreateInfoKHR>& pCreateInfos,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkSwapchainKHR>*       pSwapchains) = 0;

    virtual void Process_vkCreateXlibSurfaceKHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            instance,
        const StructPointerDecoder<Decoded_VkXlibSurfaceCreateInfoKHR>& pCreateInfo,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkSurfaceKHR>*         pSurface) = 0;

    virtual void Process_vkGetPhysicalDeviceXlibPresentationSupportKHR(
        VkBool32                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        uint32_t                                    queueFamilyIndex,
        uint64_t                                    dpy,
        size_t                                      visualID) = 0;

    virtual void Process_vkCreateXcbSurfaceKHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            instance,
        const StructPointerDecoder<Decoded_VkXcbSurfaceCreateInfoKHR>& pCreateInfo,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkSurfaceKHR>*         pSurface) = 0;

    virtual void Process_vkGetPhysicalDeviceXcbPresentationSupportKHR(
        VkBool32                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        uint32_t                                    queueFamilyIndex,
        uint64_t                                    connection,
        uint32_t                                    visual_id) = 0;

    virtual void Process_vkCreateWaylandSurfaceKHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            instance,
        const StructPointerDecoder<Decoded_VkWaylandSurfaceCreateInfoKHR>& pCreateInfo,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkSurfaceKHR>*         pSurface) = 0;

    virtual void Process_vkGetPhysicalDeviceWaylandPresentationSupportKHR(
        VkBool32                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        uint32_t                                    queueFamilyIndex,
        uint64_t                                    display) = 0;

    virtual void Process_vkCreateAndroidSurfaceKHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            instance,
        const StructPointerDecoder<Decoded_VkAndroidSurfaceCreateInfoKHR>& pCreateInfo,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkSurfaceKHR>*         pSurface) = 0;

    virtual void Process_vkCreateWin32SurfaceKHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            instance,
        const StructPointerDecoder<Decoded_VkWin32SurfaceCreateInfoKHR>& pCreateInfo,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkSurfaceKHR>*         pSurface) = 0;

    virtual void Process_vkGetPhysicalDeviceWin32PresentationSupportKHR(
        VkBool32                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        uint32_t                                    queueFamilyIndex) = 0;

    virtual void Process_vkGetPhysicalDeviceFeatures2KHR(
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        StructPointerDecoder<Decoded_VkPhysicalDeviceFeatures2>* pFeatures) = 0;

    virtual void Process_vkGetPhysicalDeviceProperties2KHR(
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        StructPointerDecoder<Decoded_VkPhysicalDeviceProperties2>* pProperties) = 0;

    virtual void Process_vkGetPhysicalDeviceFormatProperties2KHR(
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        VkFormat                                    format,
        StructPointerDecoder<Decoded_VkFormatProperties2>* pFormatProperties) = 0;

    virtual void Process_vkGetPhysicalDeviceImageFormatProperties2KHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        const StructPointerDecoder<Decoded_VkPhysicalDeviceImageFormatInfo2>& pImageFormatInfo,
        StructPointerDecoder<Decoded_VkImageFormatProperties2>* pImageFormatProperties) = 0;

    virtual void Process_vkGetPhysicalDeviceQueueFamilyProperties2KHR(
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        PointerDecoder<uint32_t>*                   pQueueFamilyPropertyCount,
        StructPointerDecoder<Decoded_VkQueueFamilyProperties2>* pQueueFamilyProperties) = 0;

    virtual void Process_vkGetPhysicalDeviceMemoryProperties2KHR(
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        StructPointerDecoder<Decoded_VkPhysicalDeviceMemoryProperties2>* pMemoryProperties) = 0;

    virtual void Process_vkGetPhysicalDeviceSparseImageFormatProperties2KHR(
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        const StructPointerDecoder<Decoded_VkPhysicalDeviceSparseImageFormatInfo2>& pFormatInfo,
        PointerDecoder<uint32_t>*                   pPropertyCount,
        StructPointerDecoder<Decoded_VkSparseImageFormatProperties2>* pProperties) = 0;

    virtual void Process_vkGetDeviceGroupPeerMemoryFeaturesKHR(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        uint32_t                                    heapIndex,
        uint32_t                                    localDeviceIndex,
        uint32_t                                    remoteDeviceIndex,
        PointerDecoder<VkPeerMemoryFeatureFlags>*   pPeerMemoryFeatures) = 0;

    virtual void Process_vkCmdSetDeviceMaskKHR(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        uint32_t                                    deviceMask) = 0;

    virtual void Process_vkCmdDispatchBaseKHR(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        uint32_t                                    baseGroupX,
        uint32_t                                    baseGroupY,
        uint32_t                                    baseGroupZ,
        uint32_t                                    groupCountX,
        uint32_t                                    groupCountY,
        uint32_t                                    groupCountZ) = 0;

    virtual void Process_vkTrimCommandPoolKHR(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            commandPool,
        VkCommandPoolTrimFlags                      flags) = 0;

    virtual void Process_vkEnumeratePhysicalDeviceGroupsKHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            instance,
        PointerDecoder<uint32_t>*                   pPhysicalDeviceGroupCount,
        StructPointerDecoder<Decoded_VkPhysicalDeviceGroupProperties>* pPhysicalDeviceGroupProperties) = 0;

    virtual void Process_vkGetPhysicalDeviceExternalBufferPropertiesKHR(
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        const StructPointerDecoder<Decoded_VkPhysicalDeviceExternalBufferInfo>& pExternalBufferInfo,
        StructPointerDecoder<Decoded_VkExternalBufferProperties>* pExternalBufferProperties) = 0;

    virtual void Process_vkGetMemoryWin32HandleKHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkMemoryGetWin32HandleInfoKHR>& pGetWin32HandleInfo,
        PointerDecoder<uint64_t, void*>*            pHandle) = 0;

    virtual void Process_vkGetMemoryWin32HandlePropertiesKHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        VkExternalMemoryHandleTypeFlagBits          handleType,
        uint64_t                                    handle,
        StructPointerDecoder<Decoded_VkMemoryWin32HandlePropertiesKHR>* pMemoryWin32HandleProperties) = 0;

    virtual void Process_vkGetMemoryFdKHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkMemoryGetFdInfoKHR>& pGetFdInfo,
        PointerDecoder<int>*                        pFd) = 0;

    virtual void Process_vkGetMemoryFdPropertiesKHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        VkExternalMemoryHandleTypeFlagBits          handleType,
        int                                         fd,
        StructPointerDecoder<Decoded_VkMemoryFdPropertiesKHR>* pMemoryFdProperties) = 0;

    virtual void Process_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR(
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        const StructPointerDecoder<Decoded_VkPhysicalDeviceExternalSemaphoreInfo>& pExternalSemaphoreInfo,
        StructPointerDecoder<Decoded_VkExternalSemaphoreProperties>* pExternalSemaphoreProperties) = 0;

    virtual void Process_vkImportSemaphoreWin32HandleKHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkImportSemaphoreWin32HandleInfoKHR>& pImportSemaphoreWin32HandleInfo) = 0;

    virtual void Process_vkGetSemaphoreWin32HandleKHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkSemaphoreGetWin32HandleInfoKHR>& pGetWin32HandleInfo,
        PointerDecoder<uint64_t, void*>*            pHandle) = 0;

    virtual void Process_vkImportSemaphoreFdKHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkImportSemaphoreFdInfoKHR>& pImportSemaphoreFdInfo) = 0;

    virtual void Process_vkGetSemaphoreFdKHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkSemaphoreGetFdInfoKHR>& pGetFdInfo,
        PointerDecoder<int>*                        pFd) = 0;

    virtual void Process_vkCmdPushDescriptorSetKHR(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        VkPipelineBindPoint                         pipelineBindPoint,
        format::HandleId                            layout,
        uint32_t                                    set,
        uint32_t                                    descriptorWriteCount,
        const StructPointerDecoder<Decoded_VkWriteDescriptorSet>& pDescriptorWrites) = 0;

    virtual void Process_vkCreateDescriptorUpdateTemplateKHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkDescriptorUpdateTemplateCreateInfo>& pCreateInfo,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkDescriptorUpdateTemplate>* pDescriptorUpdateTemplate) = 0;

    virtual void Process_vkDestroyDescriptorUpdateTemplateKHR(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            descriptorUpdateTemplate,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator) = 0;

    virtual void Process_vkCreateRenderPass2KHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkRenderPassCreateInfo2KHR>& pCreateInfo,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkRenderPass>*         pRenderPass) = 0;

    virtual void Process_vkCmdBeginRenderPass2KHR(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        const StructPointerDecoder<Decoded_VkRenderPassBeginInfo>& pRenderPassBegin,
        const StructPointerDecoder<Decoded_VkSubpassBeginInfoKHR>& pSubpassBeginInfo) = 0;

    virtual void Process_vkCmdNextSubpass2KHR(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        const StructPointerDecoder<Decoded_VkSubpassBeginInfoKHR>& pSubpassBeginInfo,
        const StructPointerDecoder<Decoded_VkSubpassEndInfoKHR>& pSubpassEndInfo) = 0;

    virtual void Process_vkCmdEndRenderPass2KHR(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        const StructPointerDecoder<Decoded_VkSubpassEndInfoKHR>& pSubpassEndInfo) = 0;

    virtual void Process_vkGetSwapchainStatusKHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            swapchain) = 0;

    virtual void Process_vkGetPhysicalDeviceExternalFencePropertiesKHR(
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        const StructPointerDecoder<Decoded_VkPhysicalDeviceExternalFenceInfo>& pExternalFenceInfo,
        StructPointerDecoder<Decoded_VkExternalFenceProperties>* pExternalFenceProperties) = 0;

    virtual void Process_vkImportFenceWin32HandleKHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkImportFenceWin32HandleInfoKHR>& pImportFenceWin32HandleInfo) = 0;

    virtual void Process_vkGetFenceWin32HandleKHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkFenceGetWin32HandleInfoKHR>& pGetWin32HandleInfo,
        PointerDecoder<uint64_t, void*>*            pHandle) = 0;

    virtual void Process_vkImportFenceFdKHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkImportFenceFdInfoKHR>& pImportFenceFdInfo) = 0;

    virtual void Process_vkGetFenceFdKHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkFenceGetFdInfoKHR>& pGetFdInfo,
        PointerDecoder<int>*                        pFd) = 0;

    virtual void Process_vkGetPhysicalDeviceSurfaceCapabilities2KHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        const StructPointerDecoder<Decoded_VkPhysicalDeviceSurfaceInfo2KHR>& pSurfaceInfo,
        StructPointerDecoder<Decoded_VkSurfaceCapabilities2KHR>* pSurfaceCapabilities) = 0;

    virtual void Process_vkGetPhysicalDeviceSurfaceFormats2KHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        const StructPointerDecoder<Decoded_VkPhysicalDeviceSurfaceInfo2KHR>& pSurfaceInfo,
        PointerDecoder<uint32_t>*                   pSurfaceFormatCount,
        StructPointerDecoder<Decoded_VkSurfaceFormat2KHR>* pSurfaceFormats) = 0;

    virtual void Process_vkGetPhysicalDeviceDisplayProperties2KHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        PointerDecoder<uint32_t>*                   pPropertyCount,
        StructPointerDecoder<Decoded_VkDisplayProperties2KHR>* pProperties) = 0;

    virtual void Process_vkGetPhysicalDeviceDisplayPlaneProperties2KHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        PointerDecoder<uint32_t>*                   pPropertyCount,
        StructPointerDecoder<Decoded_VkDisplayPlaneProperties2KHR>* pProperties) = 0;

    virtual void Process_vkGetDisplayModeProperties2KHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        format::HandleId                            display,
        PointerDecoder<uint32_t>*                   pPropertyCount,
        StructPointerDecoder<Decoded_VkDisplayModeProperties2KHR>* pProperties) = 0;

    virtual void Process_vkGetDisplayPlaneCapabilities2KHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        const StructPointerDecoder<Decoded_VkDisplayPlaneInfo2KHR>& pDisplayPlaneInfo,
        StructPointerDecoder<Decoded_VkDisplayPlaneCapabilities2KHR>* pCapabilities) = 0;

    virtual void Process_vkGetImageMemoryRequirements2KHR(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkImageMemoryRequirementsInfo2>& pInfo,
        StructPointerDecoder<Decoded_VkMemoryRequirements2>* pMemoryRequirements) = 0;

    virtual void Process_vkGetBufferMemoryRequirements2KHR(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkBufferMemoryRequirementsInfo2>& pInfo,
        StructPointerDecoder<Decoded_VkMemoryRequirements2>* pMemoryRequirements) = 0;

    virtual void Process_vkGetImageSparseMemoryRequirements2KHR(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkImageSparseMemoryRequirementsInfo2>& pInfo,
        PointerDecoder<uint32_t>*                   pSparseMemoryRequirementCount,
        StructPointerDecoder<Decoded_VkSparseImageMemoryRequirements2>* pSparseMemoryRequirements) = 0;

    virtual void Process_vkCreateSamplerYcbcrConversionKHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkSamplerYcbcrConversionCreateInfo>& pCreateInfo,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkSamplerYcbcrConversion>* pYcbcrConversion) = 0;

    virtual void Process_vkDestroySamplerYcbcrConversionKHR(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            ycbcrConversion,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator) = 0;

    virtual void Process_vkBindBufferMemory2KHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        uint32_t                                    bindInfoCount,
        const StructPointerDecoder<Decoded_VkBindBufferMemoryInfo>& pBindInfos) = 0;

    virtual void Process_vkBindImageMemory2KHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        uint32_t                                    bindInfoCount,
        const StructPointerDecoder<Decoded_VkBindImageMemoryInfo>& pBindInfos) = 0;

    virtual void Process_vkGetDescriptorSetLayoutSupportKHR(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkDescriptorSetLayoutCreateInfo>& pCreateInfo,
        StructPointerDecoder<Decoded_VkDescriptorSetLayoutSupport>* pSupport) = 0;

    virtual void Process_vkCmdDrawIndirectCountKHR(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        format::HandleId                            buffer,
        VkDeviceSize                                offset,
        format::HandleId                            countBuffer,
        VkDeviceSize                                countBufferOffset,
        uint32_t                                    maxDrawCount,
        uint32_t                                    stride) = 0;

    virtual void Process_vkCmdDrawIndexedIndirectCountKHR(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        format::HandleId                            buffer,
        VkDeviceSize                                offset,
        format::HandleId                            countBuffer,
        VkDeviceSize                                countBufferOffset,
        uint32_t                                    maxDrawCount,
        uint32_t                                    stride) = 0;

    virtual void Process_vkGetSemaphoreCounterValueKHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            semaphore,
        PointerDecoder<uint64_t>*                   pValue) = 0;

    virtual void Process_vkWaitSemaphoresKHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkSemaphoreWaitInfoKHR>& pWaitInfo,
        uint64_t                                    timeout) = 0;

    virtual void Process_vkSignalSemaphoreKHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkSemaphoreSignalInfoKHR>& pSignalInfo) = 0;

    virtual void Process_vkGetPipelineExecutablePropertiesKHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkPipelineInfoKHR>& pPipelineInfo,
        PointerDecoder<uint32_t>*                   pExecutableCount,
        StructPointerDecoder<Decoded_VkPipelineExecutablePropertiesKHR>* pProperties) = 0;

    virtual void Process_vkGetPipelineExecutableStatisticsKHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkPipelineExecutableInfoKHR>& pExecutableInfo,
        PointerDecoder<uint32_t>*                   pStatisticCount,
        StructPointerDecoder<Decoded_VkPipelineExecutableStatisticKHR>* pStatistics) = 0;

    virtual void Process_vkGetPipelineExecutableInternalRepresentationsKHR(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkPipelineExecutableInfoKHR>& pExecutableInfo,
        PointerDecoder<uint32_t>*                   pInternalRepresentationCount,
        StructPointerDecoder<Decoded_VkPipelineExecutableInternalRepresentationKHR>* pInternalRepresentations) = 0;

    virtual void Process_vkCreateDebugReportCallbackEXT(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            instance,
        const StructPointerDecoder<Decoded_VkDebugReportCallbackCreateInfoEXT>& pCreateInfo,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkDebugReportCallbackEXT>* pCallback) = 0;

    virtual void Process_vkDestroyDebugReportCallbackEXT(
        const ApiCallInfo&                          call_info,
        format::HandleId                            instance,
        format::HandleId                            callback,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator) = 0;

    virtual void Process_vkDebugReportMessageEXT(
        const ApiCallInfo&                          call_info,
        format::HandleId                            instance,
        VkDebugReportFlagsEXT                       flags,
        VkDebugReportObjectTypeEXT                  objectType,
        uint64_t                                    object,
        size_t                                      location,
        int32_t                                     messageCode,
        const StringDecoder&                        pLayerPrefix,
        const StringDecoder&                        pMessage) = 0;

    virtual void Process_vkDebugMarkerSetObjectTagEXT(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkDebugMarkerObjectTagInfoEXT>& pTagInfo) = 0;

    virtual void Process_vkDebugMarkerSetObjectNameEXT(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkDebugMarkerObjectNameInfoEXT>& pNameInfo) = 0;

    virtual void Process_vkCmdDebugMarkerBeginEXT(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        const StructPointerDecoder<Decoded_VkDebugMarkerMarkerInfoEXT>& pMarkerInfo) = 0;

    virtual void Process_vkCmdDebugMarkerEndEXT(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer) = 0;

    virtual void Process_vkCmdDebugMarkerInsertEXT(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        const StructPointerDecoder<Decoded_VkDebugMarkerMarkerInfoEXT>& pMarkerInfo) = 0;

    virtual void Process_vkCmdBindTransformFeedbackBuffersEXT(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        uint32_t                                    firstBinding,
        uint32_t                                    bindingCount,
        const HandlePointerDecoder<VkBuffer>&       pBuffers,
        const PointerDecoder<VkDeviceSize>&         pOffsets,
        const PointerDecoder<VkDeviceSize>&         pSizes) = 0;

    virtual void Process_vkCmdBeginTransformFeedbackEXT(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        uint32_t                                    firstCounterBuffer,
        uint32_t                                    counterBufferCount,
        const HandlePointerDecoder<VkBuffer>&       pCounterBuffers,
        const PointerDecoder<VkDeviceSize>&         pCounterBufferOffsets) = 0;

    virtual void Process_vkCmdEndTransformFeedbackEXT(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        uint32_t                                    firstCounterBuffer,
        uint32_t                                    counterBufferCount,
        const HandlePointerDecoder<VkBuffer>&       pCounterBuffers,
        const PointerDecoder<VkDeviceSize>&         pCounterBufferOffsets) = 0;

    virtual void Process_vkCmdBeginQueryIndexedEXT(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        format::HandleId                            queryPool,
        uint32_t                                    query,
        VkQueryControlFlags                         flags,
        uint32_t                                    index) = 0;

    virtual void Process_vkCmdEndQueryIndexedEXT(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        format::HandleId                            queryPool,
        uint32_t                                    query,
        uint32_t                                    index) = 0;

    virtual void Process_vkCmdDrawIndirectByteCountEXT(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        uint32_t                                    instanceCount,
        uint32_t                                    firstInstance,
        format::HandleId                            counterBuffer,
        VkDeviceSize                                counterBufferOffset,
        uint32_t                                    counterOffset,
        uint32_t                                    vertexStride) = 0;

    virtual void Process_vkGetImageViewHandleNVX(
        uint32_t                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkImageViewHandleInfoNVX>& pInfo) = 0;

    virtual void Process_vkCmdDrawIndirectCountAMD(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        format::HandleId                            buffer,
        VkDeviceSize                                offset,
        format::HandleId                            countBuffer,
        VkDeviceSize                                countBufferOffset,
        uint32_t                                    maxDrawCount,
        uint32_t                                    stride) = 0;

    virtual void Process_vkCmdDrawIndexedIndirectCountAMD(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        format::HandleId                            buffer,
        VkDeviceSize                                offset,
        format::HandleId                            countBuffer,
        VkDeviceSize                                countBufferOffset,
        uint32_t                                    maxDrawCount,
        uint32_t                                    stride) = 0;

    virtual void Process_vkGetShaderInfoAMD(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            pipeline,
        VkShaderStageFlagBits                       shaderStage,
        VkShaderInfoTypeAMD                         infoType,
        PointerDecoder<size_t>*                     pInfoSize,
        PointerDecoder<uint8_t>*                    pInfo) = 0;

    virtual void Process_vkCreateStreamDescriptorSurfaceGGP(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            instance,
        const StructPointerDecoder<Decoded_VkStreamDescriptorSurfaceCreateInfoGGP>& pCreateInfo,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkSurfaceKHR>*         pSurface) = 0;

    virtual void Process_vkGetPhysicalDeviceExternalImageFormatPropertiesNV(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        VkFormat                                    format,
        VkImageType                                 type,
        VkImageTiling                               tiling,
        VkImageUsageFlags                           usage,
        VkImageCreateFlags                          flags,
        VkExternalMemoryHandleTypeFlagsNV           externalHandleType,
        StructPointerDecoder<Decoded_VkExternalImageFormatPropertiesNV>* pExternalImageFormatProperties) = 0;

    virtual void Process_vkGetMemoryWin32HandleNV(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            memory,
        VkExternalMemoryHandleTypeFlagsNV           handleType,
        PointerDecoder<uint64_t, void*>*            pHandle) = 0;

    virtual void Process_vkCreateViSurfaceNN(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            instance,
        const StructPointerDecoder<Decoded_VkViSurfaceCreateInfoNN>& pCreateInfo,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkSurfaceKHR>*         pSurface) = 0;

    virtual void Process_vkCmdBeginConditionalRenderingEXT(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        const StructPointerDecoder<Decoded_VkConditionalRenderingBeginInfoEXT>& pConditionalRenderingBegin) = 0;

    virtual void Process_vkCmdEndConditionalRenderingEXT(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer) = 0;

    virtual void Process_vkCmdProcessCommandsNVX(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        const StructPointerDecoder<Decoded_VkCmdProcessCommandsInfoNVX>& pProcessCommandsInfo) = 0;

    virtual void Process_vkCmdReserveSpaceForCommandsNVX(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        const StructPointerDecoder<Decoded_VkCmdReserveSpaceForCommandsInfoNVX>& pReserveSpaceInfo) = 0;

    virtual void Process_vkCreateIndirectCommandsLayoutNVX(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkIndirectCommandsLayoutCreateInfoNVX>& pCreateInfo,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkIndirectCommandsLayoutNVX>* pIndirectCommandsLayout) = 0;

    virtual void Process_vkDestroyIndirectCommandsLayoutNVX(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            indirectCommandsLayout,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator) = 0;

    virtual void Process_vkCreateObjectTableNVX(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkObjectTableCreateInfoNVX>& pCreateInfo,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkObjectTableNVX>*     pObjectTable) = 0;

    virtual void Process_vkDestroyObjectTableNVX(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            objectTable,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator) = 0;

    virtual void Process_vkUnregisterObjectsNVX(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            objectTable,
        uint32_t                                    objectCount,
        const PointerDecoder<VkObjectEntryTypeNVX>& pObjectEntryTypes,
        const PointerDecoder<uint32_t>&             pObjectIndices) = 0;

    virtual void Process_vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX(
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        StructPointerDecoder<Decoded_VkDeviceGeneratedCommandsFeaturesNVX>* pFeatures,
        StructPointerDecoder<Decoded_VkDeviceGeneratedCommandsLimitsNVX>* pLimits) = 0;

    virtual void Process_vkCmdSetViewportWScalingNV(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        uint32_t                                    firstViewport,
        uint32_t                                    viewportCount,
        const StructPointerDecoder<Decoded_VkViewportWScalingNV>& pViewportWScalings) = 0;

    virtual void Process_vkReleaseDisplayEXT(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        format::HandleId                            display) = 0;

    virtual void Process_vkAcquireXlibDisplayEXT(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        uint64_t                                    dpy,
        format::HandleId                            display) = 0;

    virtual void Process_vkGetRandROutputDisplayEXT(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        uint64_t                                    dpy,
        size_t                                      rrOutput,
        HandlePointerDecoder<VkDisplayKHR>*         pDisplay) = 0;

    virtual void Process_vkGetPhysicalDeviceSurfaceCapabilities2EXT(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        format::HandleId                            surface,
        StructPointerDecoder<Decoded_VkSurfaceCapabilities2EXT>* pSurfaceCapabilities) = 0;

    virtual void Process_vkDisplayPowerControlEXT(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            display,
        const StructPointerDecoder<Decoded_VkDisplayPowerInfoEXT>& pDisplayPowerInfo) = 0;

    virtual void Process_vkRegisterDeviceEventEXT(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkDeviceEventInfoEXT>& pDeviceEventInfo,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkFence>*              pFence) = 0;

    virtual void Process_vkRegisterDisplayEventEXT(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            display,
        const StructPointerDecoder<Decoded_VkDisplayEventInfoEXT>& pDisplayEventInfo,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkFence>*              pFence) = 0;

    virtual void Process_vkGetSwapchainCounterEXT(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            swapchain,
        VkSurfaceCounterFlagBitsEXT                 counter,
        PointerDecoder<uint64_t>*                   pCounterValue) = 0;

    virtual void Process_vkGetRefreshCycleDurationGOOGLE(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            swapchain,
        StructPointerDecoder<Decoded_VkRefreshCycleDurationGOOGLE>* pDisplayTimingProperties) = 0;

    virtual void Process_vkGetPastPresentationTimingGOOGLE(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            swapchain,
        PointerDecoder<uint32_t>*                   pPresentationTimingCount,
        StructPointerDecoder<Decoded_VkPastPresentationTimingGOOGLE>* pPresentationTimings) = 0;

    virtual void Process_vkCmdSetDiscardRectangleEXT(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        uint32_t                                    firstDiscardRectangle,
        uint32_t                                    discardRectangleCount,
        const StructPointerDecoder<Decoded_VkRect2D>& pDiscardRectangles) = 0;

    virtual void Process_vkSetHdrMetadataEXT(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        uint32_t                                    swapchainCount,
        const HandlePointerDecoder<VkSwapchainKHR>& pSwapchains,
        const StructPointerDecoder<Decoded_VkHdrMetadataEXT>& pMetadata) = 0;

    virtual void Process_vkCreateIOSSurfaceMVK(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            instance,
        const StructPointerDecoder<Decoded_VkIOSSurfaceCreateInfoMVK>& pCreateInfo,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkSurfaceKHR>*         pSurface) = 0;

    virtual void Process_vkCreateMacOSSurfaceMVK(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            instance,
        const StructPointerDecoder<Decoded_VkMacOSSurfaceCreateInfoMVK>& pCreateInfo,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkSurfaceKHR>*         pSurface) = 0;

    virtual void Process_vkSetDebugUtilsObjectNameEXT(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkDebugUtilsObjectNameInfoEXT>& pNameInfo) = 0;

    virtual void Process_vkSetDebugUtilsObjectTagEXT(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkDebugUtilsObjectTagInfoEXT>& pTagInfo) = 0;

    virtual void Process_vkQueueBeginDebugUtilsLabelEXT(
        const ApiCallInfo&                          call_info,
        format::HandleId                            queue,
        const StructPointerDecoder<Decoded_VkDebugUtilsLabelEXT>& pLabelInfo) = 0;

    virtual void Process_vkQueueEndDebugUtilsLabelEXT(
        const ApiCallInfo&                          call_info,
        format::HandleId                            queue) = 0;

    virtual void Process_vkQueueInsertDebugUtilsLabelEXT(
        const ApiCallInfo&                          call_info,
        format::HandleId                            queue,
        const StructPointerDecoder<Decoded_VkDebugUtilsLabelEXT>& pLabelInfo) = 0;

    virtual void Process_vkCmdBeginDebugUtilsLabelEXT(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        const StructPointerDecoder<Decoded_VkDebugUtilsLabelEXT>& pLabelInfo) = 0;

    virtual void Process_vkCmdEndDebugUtilsLabelEXT(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer) = 0;

    virtual void Process_vkCmdInsertDebugUtilsLabelEXT(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        const StructPointerDecoder<Decoded_VkDebugUtilsLabelEXT>& pLabelInfo) = 0;

    virtual void Process_vkCreateDebugUtilsMessengerEXT(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            instance,
        const StructPointerDecoder<Decoded_VkDebugUtilsMessengerCreateInfoEXT>& pCreateInfo,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkDebugUtilsMessengerEXT>* pMessenger) = 0;

    virtual void Process_vkDestroyDebugUtilsMessengerEXT(
        const ApiCallInfo&                          call_info,
        format::HandleId                            instance,
        format::HandleId                            messenger,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator) = 0;

    virtual void Process_vkSubmitDebugUtilsMessageEXT(
        const ApiCallInfo&                          call_info,
        format::HandleId                            instance,
        VkDebugUtilsMessageSeverityFlagBitsEXT      messageSeverity,
        VkDebugUtilsMessageTypeFlagsEXT             messageTypes,
        const StructPointerDecoder<Decoded_VkDebugUtilsMessengerCallbackDataEXT>& pCallbackData) = 0;

    virtual void Process_vkGetAndroidHardwareBufferPropertiesANDROID(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        uint64_t                                    buffer,
        StructPointerDecoder<Decoded_VkAndroidHardwareBufferPropertiesANDROID>* pProperties) = 0;

    virtual void Process_vkGetMemoryAndroidHardwareBufferANDROID(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkMemoryGetAndroidHardwareBufferInfoANDROID>& pInfo,
        PointerDecoder<uint64_t, void*>*            pBuffer) = 0;

    virtual void Process_vkCmdSetSampleLocationsEXT(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        const StructPointerDecoder<Decoded_VkSampleLocationsInfoEXT>& pSampleLocationsInfo) = 0;

    virtual void Process_vkGetPhysicalDeviceMultisamplePropertiesEXT(
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        VkSampleCountFlagBits                       samples,
        StructPointerDecoder<Decoded_VkMultisamplePropertiesEXT>* pMultisampleProperties) = 0;

    virtual void Process_vkGetImageDrmFormatModifierPropertiesEXT(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            image,
        StructPointerDecoder<Decoded_VkImageDrmFormatModifierPropertiesEXT>* pProperties) = 0;

    virtual void Process_vkCreateValidationCacheEXT(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkValidationCacheCreateInfoEXT>& pCreateInfo,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkValidationCacheEXT>* pValidationCache) = 0;

    virtual void Process_vkDestroyValidationCacheEXT(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            validationCache,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator) = 0;

    virtual void Process_vkMergeValidationCachesEXT(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            dstCache,
        uint32_t                                    srcCacheCount,
        const HandlePointerDecoder<VkValidationCacheEXT>& pSrcCaches) = 0;

    virtual void Process_vkGetValidationCacheDataEXT(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            validationCache,
        PointerDecoder<size_t>*                     pDataSize,
        PointerDecoder<uint8_t>*                    pData) = 0;

    virtual void Process_vkCmdBindShadingRateImageNV(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        format::HandleId                            imageView,
        VkImageLayout                               imageLayout) = 0;

    virtual void Process_vkCmdSetViewportShadingRatePaletteNV(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        uint32_t                                    firstViewport,
        uint32_t                                    viewportCount,
        const StructPointerDecoder<Decoded_VkShadingRatePaletteNV>& pShadingRatePalettes) = 0;

    virtual void Process_vkCmdSetCoarseSampleOrderNV(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        VkCoarseSampleOrderTypeNV                   sampleOrderType,
        uint32_t                                    customSampleOrderCount,
        const StructPointerDecoder<Decoded_VkCoarseSampleOrderCustomNV>& pCustomSampleOrders) = 0;

    virtual void Process_vkCreateAccelerationStructureNV(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkAccelerationStructureCreateInfoNV>& pCreateInfo,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkAccelerationStructureNV>* pAccelerationStructure) = 0;

    virtual void Process_vkDestroyAccelerationStructureNV(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            accelerationStructure,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator) = 0;

    virtual void Process_vkGetAccelerationStructureMemoryRequirementsNV(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkAccelerationStructureMemoryRequirementsInfoNV>& pInfo,
        StructPointerDecoder<Decoded_VkMemoryRequirements2KHR>* pMemoryRequirements) = 0;

    virtual void Process_vkBindAccelerationStructureMemoryNV(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        uint32_t                                    bindInfoCount,
        const StructPointerDecoder<Decoded_VkBindAccelerationStructureMemoryInfoNV>& pBindInfos) = 0;

    virtual void Process_vkCmdBuildAccelerationStructureNV(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        const StructPointerDecoder<Decoded_VkAccelerationStructureInfoNV>& pInfo,
        format::HandleId                            instanceData,
        VkDeviceSize                                instanceOffset,
        VkBool32                                    update,
        format::HandleId                            dst,
        format::HandleId                            src,
        format::HandleId                            scratch,
        VkDeviceSize                                scratchOffset) = 0;

    virtual void Process_vkCmdCopyAccelerationStructureNV(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        format::HandleId                            dst,
        format::HandleId                            src,
        VkCopyAccelerationStructureModeNV           mode) = 0;

    virtual void Process_vkCmdTraceRaysNV(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        format::HandleId                            raygenShaderBindingTableBuffer,
        VkDeviceSize                                raygenShaderBindingOffset,
        format::HandleId                            missShaderBindingTableBuffer,
        VkDeviceSize                                missShaderBindingOffset,
        VkDeviceSize                                missShaderBindingStride,
        format::HandleId                            hitShaderBindingTableBuffer,
        VkDeviceSize                                hitShaderBindingOffset,
        VkDeviceSize                                hitShaderBindingStride,
        format::HandleId                            callableShaderBindingTableBuffer,
        VkDeviceSize                                callableShaderBindingOffset,
        VkDeviceSize                                callableShaderBindingStride,
        uint32_t                                    width,
        uint32_t                                    height,
        uint32_t                                    depth) = 0;

    virtual void Process_vkCreateRayTracingPipelinesNV(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            pipelineCache,
        uint32_t                                    createInfoCount,
        const StructPointerDecoder<Decoded_VkRayTracingPipelineCreateInfoNV>& pCreateInfos,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkPipeline>*           pPipelines) = 0;

    virtual void Process_vkGetRayTracingShaderGroupHandlesNV(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            pipeline,
        uint32_t                                    firstGroup,
        uint32_t                                    groupCount,
        size_t                                      dataSize,
        PointerDecoder<uint8_t>*                    pData) = 0;

    virtual void Process_vkGetAccelerationStructureHandleNV(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            accelerationStructure,
        size_t                                      dataSize,
        PointerDecoder<uint8_t>*                    pData) = 0;

    virtual void Process_vkCmdWriteAccelerationStructuresPropertiesNV(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        uint32_t                                    accelerationStructureCount,
        const HandlePointerDecoder<VkAccelerationStructureNV>& pAccelerationStructures,
        VkQueryType                                 queryType,
        format::HandleId                            queryPool,
        uint32_t                                    firstQuery) = 0;

    virtual void Process_vkCompileDeferredNV(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            pipeline,
        uint32_t                                    shader) = 0;

    virtual void Process_vkGetMemoryHostPointerPropertiesEXT(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        VkExternalMemoryHandleTypeFlagBits          handleType,
        uint64_t                                    pHostPointer,
        StructPointerDecoder<Decoded_VkMemoryHostPointerPropertiesEXT>* pMemoryHostPointerProperties) = 0;

    virtual void Process_vkCmdWriteBufferMarkerAMD(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        VkPipelineStageFlagBits                     pipelineStage,
        format::HandleId                            dstBuffer,
        VkDeviceSize                                dstOffset,
        uint32_t                                    marker) = 0;

    virtual void Process_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        PointerDecoder<uint32_t>*                   pTimeDomainCount,
        PointerDecoder<VkTimeDomainEXT>*            pTimeDomains) = 0;

    virtual void Process_vkGetCalibratedTimestampsEXT(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        uint32_t                                    timestampCount,
        const StructPointerDecoder<Decoded_VkCalibratedTimestampInfoEXT>& pTimestampInfos,
        PointerDecoder<uint64_t>*                   pTimestamps,
        PointerDecoder<uint64_t>*                   pMaxDeviation) = 0;

    virtual void Process_vkCmdDrawMeshTasksNV(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        uint32_t                                    taskCount,
        uint32_t                                    firstTask) = 0;

    virtual void Process_vkCmdDrawMeshTasksIndirectNV(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        format::HandleId                            buffer,
        VkDeviceSize                                offset,
        uint32_t                                    drawCount,
        uint32_t                                    stride) = 0;

    virtual void Process_vkCmdDrawMeshTasksIndirectCountNV(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        format::HandleId                            buffer,
        VkDeviceSize                                offset,
        format::HandleId                            countBuffer,
        VkDeviceSize                                countBufferOffset,
        uint32_t                                    maxDrawCount,
        uint32_t                                    stride) = 0;

    virtual void Process_vkCmdSetExclusiveScissorNV(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        uint32_t                                    firstExclusiveScissor,
        uint32_t                                    exclusiveScissorCount,
        const StructPointerDecoder<Decoded_VkRect2D>& pExclusiveScissors) = 0;

    virtual void Process_vkCmdSetCheckpointNV(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        uint64_t                                    pCheckpointMarker) = 0;

    virtual void Process_vkGetQueueCheckpointDataNV(
        const ApiCallInfo&                          call_info,
        format::HandleId                            queue,
        PointerDecoder<uint32_t>*                   pCheckpointDataCount,
        StructPointerDecoder<Decoded_VkCheckpointDataNV>* pCheckpointData) = 0;

    virtual void Process_vkInitializePerformanceApiINTEL(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkInitializePerformanceApiInfoINTEL>& pInitializeInfo) = 0;

    virtual void Process_vkUninitializePerformanceApiINTEL(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device) = 0;

    virtual void Process_vkCmdSetPerformanceMarkerINTEL(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        const StructPointerDecoder<Decoded_VkPerformanceMarkerInfoINTEL>& pMarkerInfo) = 0;

    virtual void Process_vkCmdSetPerformanceStreamMarkerINTEL(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        const StructPointerDecoder<Decoded_VkPerformanceStreamMarkerInfoINTEL>& pMarkerInfo) = 0;

    virtual void Process_vkCmdSetPerformanceOverrideINTEL(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        const StructPointerDecoder<Decoded_VkPerformanceOverrideInfoINTEL>& pOverrideInfo) = 0;

    virtual void Process_vkAcquirePerformanceConfigurationINTEL(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkPerformanceConfigurationAcquireInfoINTEL>& pAcquireInfo,
        HandlePointerDecoder<VkPerformanceConfigurationINTEL>* pConfiguration) = 0;

    virtual void Process_vkReleasePerformanceConfigurationINTEL(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            configuration) = 0;

    virtual void Process_vkQueueSetPerformanceConfigurationINTEL(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            queue,
        format::HandleId                            configuration) = 0;

    virtual void Process_vkGetPerformanceParameterINTEL(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        VkPerformanceParameterTypeINTEL             parameter,
        StructPointerDecoder<Decoded_VkPerformanceValueINTEL>* pValue) = 0;

    virtual void Process_vkSetLocalDimmingAMD(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            swapChain,
        VkBool32                                    localDimmingEnable) = 0;

    virtual void Process_vkCreateImagePipeSurfaceFUCHSIA(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            instance,
        const StructPointerDecoder<Decoded_VkImagePipeSurfaceCreateInfoFUCHSIA>& pCreateInfo,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkSurfaceKHR>*         pSurface) = 0;

    virtual void Process_vkCreateMetalSurfaceEXT(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            instance,
        const StructPointerDecoder<Decoded_VkMetalSurfaceCreateInfoEXT>& pCreateInfo,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkSurfaceKHR>*         pSurface) = 0;

    virtual void Process_vkGetBufferDeviceAddressEXT(
        VkDeviceAddress                             returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkBufferDeviceAddressInfoEXT>& pInfo) = 0;

    virtual void Process_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        PointerDecoder<uint32_t>*                   pPropertyCount,
        StructPointerDecoder<Decoded_VkCooperativeMatrixPropertiesNV>* pProperties) = 0;

    virtual void Process_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        PointerDecoder<uint32_t>*                   pCombinationCount,
        StructPointerDecoder<Decoded_VkFramebufferMixedSamplesCombinationNV>* pCombinations) = 0;

    virtual void Process_vkGetPhysicalDeviceSurfacePresentModes2EXT(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            physicalDevice,
        const StructPointerDecoder<Decoded_VkPhysicalDeviceSurfaceInfo2KHR>& pSurfaceInfo,
        PointerDecoder<uint32_t>*                   pPresentModeCount,
        PointerDecoder<VkPresentModeKHR>*           pPresentModes) = 0;

    virtual void Process_vkAcquireFullScreenExclusiveModeEXT(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            swapchain) = 0;

    virtual void Process_vkReleaseFullScreenExclusiveModeEXT(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            swapchain) = 0;

    virtual void Process_vkGetDeviceGroupSurfacePresentModes2EXT(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        const StructPointerDecoder<Decoded_VkPhysicalDeviceSurfaceInfo2KHR>& pSurfaceInfo,
        PointerDecoder<VkDeviceGroupPresentModeFlagsKHR>* pModes) = 0;

    virtual void Process_vkCreateHeadlessSurfaceEXT(
        VkResult                                    returnValue,
        const ApiCallInfo&                          call_info,
        format::HandleId                            instance,
        const StructPointerDecoder<Decoded_VkHeadlessSurfaceCreateInfoEXT>& pCreateInfo,
        const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
        HandlePointerDecoder<VkSurfaceKHR>*         pSurface) = 0;

    virtual void Process_vkCmdSetLineStippleEXT(
        const ApiCallInfo&                          call_info,
        format::HandleId                            commandBuffer,
        uint32_t                                    lineStippleFactor,
        uint16_t                                    lineStipplePattern) = 0;

    virtual void Process_vkResetQueryPoolEXT(
        const ApiCallInfo&                          call_info,
        format::HandleId                            device,
        format::HandleId                            queryPool,
        uint32_t                                    firstQuery,
        uint32_t                                    queryCount) = 0;
};

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif
