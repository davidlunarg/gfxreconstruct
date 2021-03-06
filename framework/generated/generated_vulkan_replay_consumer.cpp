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

#include "generated/generated_vulkan_replay_consumer.h"
#include "generated/generated_vulkan_struct_handle_mappers.h"
#include "util/defines.h"

#include "volk.h"

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)

void VulkanReplayConsumer::Process_vkCreateInstance(
    VkResult                                    returnValue,
    const StructPointerDecoder<Decoded_VkInstanceCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkInstance>&     pInstance)
{
    const VkInstanceCreateInfo* in_pCreateInfo = pCreateInfo.GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkInstance out_pInstance_value = static_cast<VkInstance>(0);
    VkInstance* out_pInstance = &out_pInstance_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkCreateInstance, VkResult, PFN_vkCreateInstance>::Dispatch(this, returnValue, vkCreateInstance, in_pCreateInfo, in_pAllocator, out_pInstance);
    CheckResult("vkCreateInstance", returnValue, replay_result);

    AddHandles<VkInstance>(pInstance.GetPointer(), 1, out_pInstance, 1, &VulkanObjectMapper::AddVkInstance);
}

void VulkanReplayConsumer::Process_vkDestroyInstance(
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    VkInstance in_instance = GetObjectMapper().MapVkInstance(instance);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);

    Dispatcher<format::ApiCallId::ApiCall_vkDestroyInstance, void, PFN_vkDestroyInstance>::Dispatch(this, vkDestroyInstance, in_instance, in_pAllocator);
}

void VulkanReplayConsumer::Process_vkEnumeratePhysicalDevices(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const PointerDecoder<uint32_t>&             pPhysicalDeviceCount,
    const HandlePointerDecoder<VkPhysicalDevice>& pPhysicalDevices)
{
    VkInstance in_instance = GetObjectMapper().MapVkInstance(instance);
    uint32_t out_pPhysicalDeviceCount_value = pPhysicalDeviceCount.IsNull() ? static_cast<uint32_t>(0) : *(pPhysicalDeviceCount.GetPointer());
    uint32_t* out_pPhysicalDeviceCount = &out_pPhysicalDeviceCount_value;
    VkPhysicalDevice* out_pPhysicalDevices = pPhysicalDevices.GetHandlePointer();

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkEnumeratePhysicalDevices, VkResult, PFN_vkEnumeratePhysicalDevices>::Dispatch(this, returnValue, vkEnumeratePhysicalDevices, in_instance, out_pPhysicalDeviceCount, out_pPhysicalDevices);
    CheckResult("vkEnumeratePhysicalDevices", returnValue, replay_result);

    AddHandles<VkPhysicalDevice>(pPhysicalDevices.GetPointer(), pPhysicalDevices.GetLength(), out_pPhysicalDevices, out_pPhysicalDeviceCount_value, &VulkanObjectMapper::AddVkPhysicalDevice);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceFeatures(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceFeatures>& pFeatures)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    VkPhysicalDeviceFeatures out_pFeatures_value = {};
    VkPhysicalDeviceFeatures* out_pFeatures = &out_pFeatures_value;

    Dispatcher<format::ApiCallId::ApiCall_vkGetPhysicalDeviceFeatures, void, PFN_vkGetPhysicalDeviceFeatures>::Dispatch(this, vkGetPhysicalDeviceFeatures, in_physicalDevice, out_pFeatures);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceFormatProperties(
    format::HandleId                            physicalDevice,
    VkFormat                                    format,
    const StructPointerDecoder<Decoded_VkFormatProperties>& pFormatProperties)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    VkFormatProperties out_pFormatProperties_value = {};
    VkFormatProperties* out_pFormatProperties = &out_pFormatProperties_value;

    Dispatcher<format::ApiCallId::ApiCall_vkGetPhysicalDeviceFormatProperties, void, PFN_vkGetPhysicalDeviceFormatProperties>::Dispatch(this, vkGetPhysicalDeviceFormatProperties, in_physicalDevice, format, out_pFormatProperties);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceImageFormatProperties(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    VkFormat                                    format,
    VkImageType                                 type,
    VkImageTiling                               tiling,
    VkImageUsageFlags                           usage,
    VkImageCreateFlags                          flags,
    const StructPointerDecoder<Decoded_VkImageFormatProperties>& pImageFormatProperties)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    VkImageFormatProperties out_pImageFormatProperties_value = {};
    VkImageFormatProperties* out_pImageFormatProperties = &out_pImageFormatProperties_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetPhysicalDeviceImageFormatProperties, VkResult, PFN_vkGetPhysicalDeviceImageFormatProperties>::Dispatch(this, returnValue, vkGetPhysicalDeviceImageFormatProperties, in_physicalDevice, format, type, tiling, usage, flags, out_pImageFormatProperties);
    CheckResult("vkGetPhysicalDeviceImageFormatProperties", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceProperties(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceProperties>& pProperties)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    VkPhysicalDeviceProperties out_pProperties_value = {};
    VkPhysicalDeviceProperties* out_pProperties = &out_pProperties_value;

    Dispatcher<format::ApiCallId::ApiCall_vkGetPhysicalDeviceProperties, void, PFN_vkGetPhysicalDeviceProperties>::Dispatch(this, vkGetPhysicalDeviceProperties, in_physicalDevice, out_pProperties);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceQueueFamilyProperties(
    format::HandleId                            physicalDevice,
    const PointerDecoder<uint32_t>&             pQueueFamilyPropertyCount,
    const StructPointerDecoder<Decoded_VkQueueFamilyProperties>& pQueueFamilyProperties)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    uint32_t out_pQueueFamilyPropertyCount_value = pQueueFamilyPropertyCount.IsNull() ? static_cast<uint32_t>(0) : *(pQueueFamilyPropertyCount.GetPointer());
    uint32_t* out_pQueueFamilyPropertyCount = &out_pQueueFamilyPropertyCount_value;
    VkQueueFamilyProperties* out_pQueueFamilyProperties = pQueueFamilyProperties.IsNull() ? nullptr : AllocateArray<VkQueueFamilyProperties>(out_pQueueFamilyPropertyCount_value);

    Dispatcher<format::ApiCallId::ApiCall_vkGetPhysicalDeviceQueueFamilyProperties, void, PFN_vkGetPhysicalDeviceQueueFamilyProperties>::Dispatch(this, vkGetPhysicalDeviceQueueFamilyProperties, in_physicalDevice, out_pQueueFamilyPropertyCount, out_pQueueFamilyProperties);

    FreeArray<VkQueueFamilyProperties>(&out_pQueueFamilyProperties);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceMemoryProperties(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceMemoryProperties>& pMemoryProperties)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    VkPhysicalDeviceMemoryProperties out_pMemoryProperties_value = {};
    VkPhysicalDeviceMemoryProperties* out_pMemoryProperties = &out_pMemoryProperties_value;

    Dispatcher<format::ApiCallId::ApiCall_vkGetPhysicalDeviceMemoryProperties, void, PFN_vkGetPhysicalDeviceMemoryProperties>::Dispatch(this, vkGetPhysicalDeviceMemoryProperties, in_physicalDevice, out_pMemoryProperties);
}

void VulkanReplayConsumer::Process_vkCreateDevice(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkDeviceCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkDevice>&       pDevice)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    const VkDeviceCreateInfo* in_pCreateInfo = pCreateInfo.GetPointer();
    MapStructHandles(pCreateInfo.GetMetaStructPointer(), GetObjectMapper());
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkDevice out_pDevice_value = static_cast<VkDevice>(0);
    VkDevice* out_pDevice = &out_pDevice_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkCreateDevice, VkResult, PFN_vkCreateDevice>::Dispatch(this, returnValue, vkCreateDevice, in_physicalDevice, in_pCreateInfo, in_pAllocator, out_pDevice);
    CheckResult("vkCreateDevice", returnValue, replay_result);

    AddHandles<VkDevice>(pDevice.GetPointer(), 1, out_pDevice, 1, &VulkanObjectMapper::AddVkDevice);
}

void VulkanReplayConsumer::Process_vkDestroyDevice(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);

    Dispatcher<format::ApiCallId::ApiCall_vkDestroyDevice, void, PFN_vkDestroyDevice>::Dispatch(this, vkDestroyDevice, in_device, in_pAllocator);
}

void VulkanReplayConsumer::Process_vkGetDeviceQueue(
    format::HandleId                            device,
    uint32_t                                    queueFamilyIndex,
    uint32_t                                    queueIndex,
    const HandlePointerDecoder<VkQueue>&        pQueue)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkQueue out_pQueue_value = static_cast<VkQueue>(0);
    VkQueue* out_pQueue = &out_pQueue_value;

    Dispatcher<format::ApiCallId::ApiCall_vkGetDeviceQueue, void, PFN_vkGetDeviceQueue>::Dispatch(this, vkGetDeviceQueue, in_device, queueFamilyIndex, queueIndex, out_pQueue);

    AddHandles<VkQueue>(pQueue.GetPointer(), 1, out_pQueue, 1, &VulkanObjectMapper::AddVkQueue);
}

void VulkanReplayConsumer::Process_vkQueueSubmit(
    VkResult                                    returnValue,
    format::HandleId                            queue,
    uint32_t                                    submitCount,
    const StructPointerDecoder<Decoded_VkSubmitInfo>& pSubmits,
    format::HandleId                            fence)
{
    VkQueue in_queue = GetObjectMapper().MapVkQueue(queue);
    const VkSubmitInfo* in_pSubmits = pSubmits.GetPointer();
    MapStructArrayHandles(pSubmits.GetMetaStructPointer(), pSubmits.GetLength(), GetObjectMapper());
    VkFence in_fence = GetObjectMapper().MapVkFence(fence);

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkQueueSubmit, VkResult, PFN_vkQueueSubmit>::Dispatch(this, returnValue, vkQueueSubmit, in_queue, submitCount, in_pSubmits, in_fence);
    CheckResult("vkQueueSubmit", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkQueueWaitIdle(
    VkResult                                    returnValue,
    format::HandleId                            queue)
{
    VkQueue in_queue = GetObjectMapper().MapVkQueue(queue);

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkQueueWaitIdle, VkResult, PFN_vkQueueWaitIdle>::Dispatch(this, returnValue, vkQueueWaitIdle, in_queue);
    CheckResult("vkQueueWaitIdle", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkDeviceWaitIdle(
    VkResult                                    returnValue,
    format::HandleId                            device)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkDeviceWaitIdle, VkResult, PFN_vkDeviceWaitIdle>::Dispatch(this, returnValue, vkDeviceWaitIdle, in_device);
    CheckResult("vkDeviceWaitIdle", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkAllocateMemory(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkMemoryAllocateInfo>& pAllocateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkDeviceMemory>& pMemory)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkMemoryAllocateInfo* in_pAllocateInfo = pAllocateInfo.GetPointer();
    MapStructHandles(pAllocateInfo.GetMetaStructPointer(), GetObjectMapper());
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkDeviceMemory out_pMemory_value = static_cast<VkDeviceMemory>(0);
    VkDeviceMemory* out_pMemory = &out_pMemory_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkAllocateMemory, VkResult, PFN_vkAllocateMemory>::Dispatch(this, returnValue, vkAllocateMemory, in_device, in_pAllocateInfo, in_pAllocator, out_pMemory);
    CheckResult("vkAllocateMemory", returnValue, replay_result);

    AddHandles<VkDeviceMemory>(pMemory.GetPointer(), 1, out_pMemory, 1, &VulkanObjectMapper::AddVkDeviceMemory);
}

void VulkanReplayConsumer::Process_vkFreeMemory(
    format::HandleId                            device,
    format::HandleId                            memory,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkDeviceMemory in_memory = GetObjectMapper().MapVkDeviceMemory(memory);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);

    Dispatcher<format::ApiCallId::ApiCall_vkFreeMemory, void, PFN_vkFreeMemory>::Dispatch(this, vkFreeMemory, in_device, in_memory, in_pAllocator);
}

void VulkanReplayConsumer::Process_vkMapMemory(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            memory,
    VkDeviceSize                                offset,
    VkDeviceSize                                size,
    VkMemoryMapFlags                            flags,
    const PointerDecoder<uint64_t>&             ppData)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkDeviceMemory in_memory = GetObjectMapper().MapVkDeviceMemory(memory);
    void* out_ppData_value = nullptr;
    void** out_ppData = &out_ppData_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkMapMemory, VkResult, PFN_vkMapMemory>::Dispatch(this, returnValue, vkMapMemory, in_device, in_memory, offset, size, flags, out_ppData);
    CheckResult("vkMapMemory", returnValue, replay_result);

    PostProcessExternalObject(ppData, out_ppData_value, format::ApiCallId::ApiCall_vkMapMemory, "vkMapMemory");
}

void VulkanReplayConsumer::Process_vkUnmapMemory(
    format::HandleId                            device,
    format::HandleId                            memory)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkDeviceMemory in_memory = GetObjectMapper().MapVkDeviceMemory(memory);

    Dispatcher<format::ApiCallId::ApiCall_vkUnmapMemory, void, PFN_vkUnmapMemory>::Dispatch(this, vkUnmapMemory, in_device, in_memory);
}

void VulkanReplayConsumer::Process_vkFlushMappedMemoryRanges(
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    memoryRangeCount,
    const StructPointerDecoder<Decoded_VkMappedMemoryRange>& pMemoryRanges)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkMappedMemoryRange* in_pMemoryRanges = pMemoryRanges.GetPointer();
    MapStructArrayHandles(pMemoryRanges.GetMetaStructPointer(), pMemoryRanges.GetLength(), GetObjectMapper());

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkFlushMappedMemoryRanges, VkResult, PFN_vkFlushMappedMemoryRanges>::Dispatch(this, returnValue, vkFlushMappedMemoryRanges, in_device, memoryRangeCount, in_pMemoryRanges);
    CheckResult("vkFlushMappedMemoryRanges", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkInvalidateMappedMemoryRanges(
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    memoryRangeCount,
    const StructPointerDecoder<Decoded_VkMappedMemoryRange>& pMemoryRanges)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkMappedMemoryRange* in_pMemoryRanges = pMemoryRanges.GetPointer();
    MapStructArrayHandles(pMemoryRanges.GetMetaStructPointer(), pMemoryRanges.GetLength(), GetObjectMapper());

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkInvalidateMappedMemoryRanges, VkResult, PFN_vkInvalidateMappedMemoryRanges>::Dispatch(this, returnValue, vkInvalidateMappedMemoryRanges, in_device, memoryRangeCount, in_pMemoryRanges);
    CheckResult("vkInvalidateMappedMemoryRanges", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkGetDeviceMemoryCommitment(
    format::HandleId                            device,
    format::HandleId                            memory,
    const PointerDecoder<VkDeviceSize>&         pCommittedMemoryInBytes)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkDeviceMemory in_memory = GetObjectMapper().MapVkDeviceMemory(memory);
    VkDeviceSize out_pCommittedMemoryInBytes_value = static_cast<VkDeviceSize>(0);
    VkDeviceSize* out_pCommittedMemoryInBytes = &out_pCommittedMemoryInBytes_value;

    Dispatcher<format::ApiCallId::ApiCall_vkGetDeviceMemoryCommitment, void, PFN_vkGetDeviceMemoryCommitment>::Dispatch(this, vkGetDeviceMemoryCommitment, in_device, in_memory, out_pCommittedMemoryInBytes);
}

void VulkanReplayConsumer::Process_vkBindBufferMemory(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            buffer,
    format::HandleId                            memory,
    VkDeviceSize                                memoryOffset)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkBuffer in_buffer = GetObjectMapper().MapVkBuffer(buffer);
    VkDeviceMemory in_memory = GetObjectMapper().MapVkDeviceMemory(memory);

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkBindBufferMemory, VkResult, PFN_vkBindBufferMemory>::Dispatch(this, returnValue, vkBindBufferMemory, in_device, in_buffer, in_memory, memoryOffset);
    CheckResult("vkBindBufferMemory", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkBindImageMemory(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            image,
    format::HandleId                            memory,
    VkDeviceSize                                memoryOffset)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkImage in_image = GetObjectMapper().MapVkImage(image);
    VkDeviceMemory in_memory = GetObjectMapper().MapVkDeviceMemory(memory);

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkBindImageMemory, VkResult, PFN_vkBindImageMemory>::Dispatch(this, returnValue, vkBindImageMemory, in_device, in_image, in_memory, memoryOffset);
    CheckResult("vkBindImageMemory", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkGetBufferMemoryRequirements(
    format::HandleId                            device,
    format::HandleId                            buffer,
    const StructPointerDecoder<Decoded_VkMemoryRequirements>& pMemoryRequirements)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkBuffer in_buffer = GetObjectMapper().MapVkBuffer(buffer);
    VkMemoryRequirements out_pMemoryRequirements_value = {};
    VkMemoryRequirements* out_pMemoryRequirements = &out_pMemoryRequirements_value;

    Dispatcher<format::ApiCallId::ApiCall_vkGetBufferMemoryRequirements, void, PFN_vkGetBufferMemoryRequirements>::Dispatch(this, vkGetBufferMemoryRequirements, in_device, in_buffer, out_pMemoryRequirements);
}

void VulkanReplayConsumer::Process_vkGetImageMemoryRequirements(
    format::HandleId                            device,
    format::HandleId                            image,
    const StructPointerDecoder<Decoded_VkMemoryRequirements>& pMemoryRequirements)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkImage in_image = GetObjectMapper().MapVkImage(image);
    VkMemoryRequirements out_pMemoryRequirements_value = {};
    VkMemoryRequirements* out_pMemoryRequirements = &out_pMemoryRequirements_value;

    Dispatcher<format::ApiCallId::ApiCall_vkGetImageMemoryRequirements, void, PFN_vkGetImageMemoryRequirements>::Dispatch(this, vkGetImageMemoryRequirements, in_device, in_image, out_pMemoryRequirements);
}

void VulkanReplayConsumer::Process_vkGetImageSparseMemoryRequirements(
    format::HandleId                            device,
    format::HandleId                            image,
    const PointerDecoder<uint32_t>&             pSparseMemoryRequirementCount,
    const StructPointerDecoder<Decoded_VkSparseImageMemoryRequirements>& pSparseMemoryRequirements)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkImage in_image = GetObjectMapper().MapVkImage(image);
    uint32_t out_pSparseMemoryRequirementCount_value = pSparseMemoryRequirementCount.IsNull() ? static_cast<uint32_t>(0) : *(pSparseMemoryRequirementCount.GetPointer());
    uint32_t* out_pSparseMemoryRequirementCount = &out_pSparseMemoryRequirementCount_value;
    VkSparseImageMemoryRequirements* out_pSparseMemoryRequirements = pSparseMemoryRequirements.IsNull() ? nullptr : AllocateArray<VkSparseImageMemoryRequirements>(out_pSparseMemoryRequirementCount_value);

    Dispatcher<format::ApiCallId::ApiCall_vkGetImageSparseMemoryRequirements, void, PFN_vkGetImageSparseMemoryRequirements>::Dispatch(this, vkGetImageSparseMemoryRequirements, in_device, in_image, out_pSparseMemoryRequirementCount, out_pSparseMemoryRequirements);

    FreeArray<VkSparseImageMemoryRequirements>(&out_pSparseMemoryRequirements);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceSparseImageFormatProperties(
    format::HandleId                            physicalDevice,
    VkFormat                                    format,
    VkImageType                                 type,
    VkSampleCountFlagBits                       samples,
    VkImageUsageFlags                           usage,
    VkImageTiling                               tiling,
    const PointerDecoder<uint32_t>&             pPropertyCount,
    const StructPointerDecoder<Decoded_VkSparseImageFormatProperties>& pProperties)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    uint32_t out_pPropertyCount_value = pPropertyCount.IsNull() ? static_cast<uint32_t>(0) : *(pPropertyCount.GetPointer());
    uint32_t* out_pPropertyCount = &out_pPropertyCount_value;
    VkSparseImageFormatProperties* out_pProperties = pProperties.IsNull() ? nullptr : AllocateArray<VkSparseImageFormatProperties>(out_pPropertyCount_value);

    Dispatcher<format::ApiCallId::ApiCall_vkGetPhysicalDeviceSparseImageFormatProperties, void, PFN_vkGetPhysicalDeviceSparseImageFormatProperties>::Dispatch(this, vkGetPhysicalDeviceSparseImageFormatProperties, in_physicalDevice, format, type, samples, usage, tiling, out_pPropertyCount, out_pProperties);

    FreeArray<VkSparseImageFormatProperties>(&out_pProperties);
}

void VulkanReplayConsumer::Process_vkQueueBindSparse(
    VkResult                                    returnValue,
    format::HandleId                            queue,
    uint32_t                                    bindInfoCount,
    const StructPointerDecoder<Decoded_VkBindSparseInfo>& pBindInfo,
    format::HandleId                            fence)
{
    VkQueue in_queue = GetObjectMapper().MapVkQueue(queue);
    const VkBindSparseInfo* in_pBindInfo = pBindInfo.GetPointer();
    MapStructArrayHandles(pBindInfo.GetMetaStructPointer(), pBindInfo.GetLength(), GetObjectMapper());
    VkFence in_fence = GetObjectMapper().MapVkFence(fence);

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkQueueBindSparse, VkResult, PFN_vkQueueBindSparse>::Dispatch(this, returnValue, vkQueueBindSparse, in_queue, bindInfoCount, in_pBindInfo, in_fence);
    CheckResult("vkQueueBindSparse", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkCreateFence(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkFenceCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkFence>&        pFence)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkFenceCreateInfo* in_pCreateInfo = pCreateInfo.GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkFence out_pFence_value = static_cast<VkFence>(0);
    VkFence* out_pFence = &out_pFence_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkCreateFence, VkResult, PFN_vkCreateFence>::Dispatch(this, returnValue, vkCreateFence, in_device, in_pCreateInfo, in_pAllocator, out_pFence);
    CheckResult("vkCreateFence", returnValue, replay_result);

    AddHandles<VkFence>(pFence.GetPointer(), 1, out_pFence, 1, &VulkanObjectMapper::AddVkFence);
}

void VulkanReplayConsumer::Process_vkDestroyFence(
    format::HandleId                            device,
    format::HandleId                            fence,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkFence in_fence = GetObjectMapper().MapVkFence(fence);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);

    Dispatcher<format::ApiCallId::ApiCall_vkDestroyFence, void, PFN_vkDestroyFence>::Dispatch(this, vkDestroyFence, in_device, in_fence, in_pAllocator);
}

void VulkanReplayConsumer::Process_vkResetFences(
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    fenceCount,
    const HandlePointerDecoder<VkFence>&        pFences)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkFence* in_pFences = pFences.GetHandlePointer();
    MapHandles<VkFence>(pFences.GetPointer(), pFences.GetLength(), in_pFences, fenceCount, &VulkanObjectMapper::MapVkFence);

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkResetFences, VkResult, PFN_vkResetFences>::Dispatch(this, returnValue, vkResetFences, in_device, fenceCount, in_pFences);
    CheckResult("vkResetFences", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkGetFenceStatus(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            fence)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkFence in_fence = GetObjectMapper().MapVkFence(fence);

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetFenceStatus, VkResult, PFN_vkGetFenceStatus>::Dispatch(this, returnValue, vkGetFenceStatus, in_device, in_fence);
    CheckResult("vkGetFenceStatus", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkWaitForFences(
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    fenceCount,
    const HandlePointerDecoder<VkFence>&        pFences,
    VkBool32                                    waitAll,
    uint64_t                                    timeout)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkFence* in_pFences = pFences.GetHandlePointer();
    MapHandles<VkFence>(pFences.GetPointer(), pFences.GetLength(), in_pFences, fenceCount, &VulkanObjectMapper::MapVkFence);

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkWaitForFences, VkResult, PFN_vkWaitForFences>::Dispatch(this, returnValue, vkWaitForFences, in_device, fenceCount, in_pFences, waitAll, timeout);
    CheckResult("vkWaitForFences", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkCreateSemaphore(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSemaphoreCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSemaphore>&    pSemaphore)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkSemaphoreCreateInfo* in_pCreateInfo = pCreateInfo.GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkSemaphore out_pSemaphore_value = static_cast<VkSemaphore>(0);
    VkSemaphore* out_pSemaphore = &out_pSemaphore_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkCreateSemaphore, VkResult, PFN_vkCreateSemaphore>::Dispatch(this, returnValue, vkCreateSemaphore, in_device, in_pCreateInfo, in_pAllocator, out_pSemaphore);
    CheckResult("vkCreateSemaphore", returnValue, replay_result);

    AddHandles<VkSemaphore>(pSemaphore.GetPointer(), 1, out_pSemaphore, 1, &VulkanObjectMapper::AddVkSemaphore);
}

void VulkanReplayConsumer::Process_vkDestroySemaphore(
    format::HandleId                            device,
    format::HandleId                            semaphore,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkSemaphore in_semaphore = GetObjectMapper().MapVkSemaphore(semaphore);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);

    Dispatcher<format::ApiCallId::ApiCall_vkDestroySemaphore, void, PFN_vkDestroySemaphore>::Dispatch(this, vkDestroySemaphore, in_device, in_semaphore, in_pAllocator);
}

void VulkanReplayConsumer::Process_vkCreateEvent(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkEventCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkEvent>&        pEvent)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkEventCreateInfo* in_pCreateInfo = pCreateInfo.GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkEvent out_pEvent_value = static_cast<VkEvent>(0);
    VkEvent* out_pEvent = &out_pEvent_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkCreateEvent, VkResult, PFN_vkCreateEvent>::Dispatch(this, returnValue, vkCreateEvent, in_device, in_pCreateInfo, in_pAllocator, out_pEvent);
    CheckResult("vkCreateEvent", returnValue, replay_result);

    AddHandles<VkEvent>(pEvent.GetPointer(), 1, out_pEvent, 1, &VulkanObjectMapper::AddVkEvent);
}

void VulkanReplayConsumer::Process_vkDestroyEvent(
    format::HandleId                            device,
    format::HandleId                            event,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkEvent in_event = GetObjectMapper().MapVkEvent(event);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);

    Dispatcher<format::ApiCallId::ApiCall_vkDestroyEvent, void, PFN_vkDestroyEvent>::Dispatch(this, vkDestroyEvent, in_device, in_event, in_pAllocator);
}

void VulkanReplayConsumer::Process_vkGetEventStatus(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            event)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkEvent in_event = GetObjectMapper().MapVkEvent(event);

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetEventStatus, VkResult, PFN_vkGetEventStatus>::Dispatch(this, returnValue, vkGetEventStatus, in_device, in_event);
    CheckResult("vkGetEventStatus", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkSetEvent(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            event)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkEvent in_event = GetObjectMapper().MapVkEvent(event);

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkSetEvent, VkResult, PFN_vkSetEvent>::Dispatch(this, returnValue, vkSetEvent, in_device, in_event);
    CheckResult("vkSetEvent", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkResetEvent(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            event)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkEvent in_event = GetObjectMapper().MapVkEvent(event);

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkResetEvent, VkResult, PFN_vkResetEvent>::Dispatch(this, returnValue, vkResetEvent, in_device, in_event);
    CheckResult("vkResetEvent", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkCreateQueryPool(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkQueryPoolCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkQueryPool>&    pQueryPool)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkQueryPoolCreateInfo* in_pCreateInfo = pCreateInfo.GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkQueryPool out_pQueryPool_value = static_cast<VkQueryPool>(0);
    VkQueryPool* out_pQueryPool = &out_pQueryPool_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkCreateQueryPool, VkResult, PFN_vkCreateQueryPool>::Dispatch(this, returnValue, vkCreateQueryPool, in_device, in_pCreateInfo, in_pAllocator, out_pQueryPool);
    CheckResult("vkCreateQueryPool", returnValue, replay_result);

    AddHandles<VkQueryPool>(pQueryPool.GetPointer(), 1, out_pQueryPool, 1, &VulkanObjectMapper::AddVkQueryPool);
}

void VulkanReplayConsumer::Process_vkDestroyQueryPool(
    format::HandleId                            device,
    format::HandleId                            queryPool,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkQueryPool in_queryPool = GetObjectMapper().MapVkQueryPool(queryPool);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);

    Dispatcher<format::ApiCallId::ApiCall_vkDestroyQueryPool, void, PFN_vkDestroyQueryPool>::Dispatch(this, vkDestroyQueryPool, in_device, in_queryPool, in_pAllocator);
}

void VulkanReplayConsumer::Process_vkGetQueryPoolResults(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            queryPool,
    uint32_t                                    firstQuery,
    uint32_t                                    queryCount,
    size_t                                      dataSize,
    const PointerDecoder<uint8_t>&              pData,
    VkDeviceSize                                stride,
    VkQueryResultFlags                          flags)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkQueryPool in_queryPool = GetObjectMapper().MapVkQueryPool(queryPool);
    uint8_t* out_pData = pData.IsNull() ? nullptr : AllocateArray<uint8_t>(dataSize);

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetQueryPoolResults, VkResult, PFN_vkGetQueryPoolResults>::Dispatch(this, returnValue, vkGetQueryPoolResults, in_device, in_queryPool, firstQuery, queryCount, dataSize, out_pData, stride, flags);
    CheckResult("vkGetQueryPoolResults", returnValue, replay_result);

    FreeArray<uint8_t>(&out_pData);
}

void VulkanReplayConsumer::Process_vkCreateBuffer(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkBufferCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkBuffer>&       pBuffer)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkBufferCreateInfo* in_pCreateInfo = pCreateInfo.GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkBuffer out_pBuffer_value = static_cast<VkBuffer>(0);
    VkBuffer* out_pBuffer = &out_pBuffer_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkCreateBuffer, VkResult, PFN_vkCreateBuffer>::Dispatch(this, returnValue, vkCreateBuffer, in_device, in_pCreateInfo, in_pAllocator, out_pBuffer);
    CheckResult("vkCreateBuffer", returnValue, replay_result);

    AddHandles<VkBuffer>(pBuffer.GetPointer(), 1, out_pBuffer, 1, &VulkanObjectMapper::AddVkBuffer);
}

void VulkanReplayConsumer::Process_vkDestroyBuffer(
    format::HandleId                            device,
    format::HandleId                            buffer,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkBuffer in_buffer = GetObjectMapper().MapVkBuffer(buffer);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);

    Dispatcher<format::ApiCallId::ApiCall_vkDestroyBuffer, void, PFN_vkDestroyBuffer>::Dispatch(this, vkDestroyBuffer, in_device, in_buffer, in_pAllocator);
}

void VulkanReplayConsumer::Process_vkCreateBufferView(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkBufferViewCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkBufferView>&   pView)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkBufferViewCreateInfo* in_pCreateInfo = pCreateInfo.GetPointer();
    MapStructHandles(pCreateInfo.GetMetaStructPointer(), GetObjectMapper());
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkBufferView out_pView_value = static_cast<VkBufferView>(0);
    VkBufferView* out_pView = &out_pView_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkCreateBufferView, VkResult, PFN_vkCreateBufferView>::Dispatch(this, returnValue, vkCreateBufferView, in_device, in_pCreateInfo, in_pAllocator, out_pView);
    CheckResult("vkCreateBufferView", returnValue, replay_result);

    AddHandles<VkBufferView>(pView.GetPointer(), 1, out_pView, 1, &VulkanObjectMapper::AddVkBufferView);
}

void VulkanReplayConsumer::Process_vkDestroyBufferView(
    format::HandleId                            device,
    format::HandleId                            bufferView,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkBufferView in_bufferView = GetObjectMapper().MapVkBufferView(bufferView);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);

    Dispatcher<format::ApiCallId::ApiCall_vkDestroyBufferView, void, PFN_vkDestroyBufferView>::Dispatch(this, vkDestroyBufferView, in_device, in_bufferView, in_pAllocator);
}

void VulkanReplayConsumer::Process_vkCreateImage(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImageCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkImage>&        pImage)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkImageCreateInfo* in_pCreateInfo = pCreateInfo.GetPointer();
    MapStructHandles(pCreateInfo.GetMetaStructPointer(), GetObjectMapper());
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkImage out_pImage_value = static_cast<VkImage>(0);
    VkImage* out_pImage = &out_pImage_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkCreateImage, VkResult, PFN_vkCreateImage>::Dispatch(this, returnValue, vkCreateImage, in_device, in_pCreateInfo, in_pAllocator, out_pImage);
    CheckResult("vkCreateImage", returnValue, replay_result);

    AddHandles<VkImage>(pImage.GetPointer(), 1, out_pImage, 1, &VulkanObjectMapper::AddVkImage);
}

void VulkanReplayConsumer::Process_vkDestroyImage(
    format::HandleId                            device,
    format::HandleId                            image,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkImage in_image = GetObjectMapper().MapVkImage(image);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);

    Dispatcher<format::ApiCallId::ApiCall_vkDestroyImage, void, PFN_vkDestroyImage>::Dispatch(this, vkDestroyImage, in_device, in_image, in_pAllocator);
}

void VulkanReplayConsumer::Process_vkGetImageSubresourceLayout(
    format::HandleId                            device,
    format::HandleId                            image,
    const StructPointerDecoder<Decoded_VkImageSubresource>& pSubresource,
    const StructPointerDecoder<Decoded_VkSubresourceLayout>& pLayout)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkImage in_image = GetObjectMapper().MapVkImage(image);
    const VkImageSubresource* in_pSubresource = pSubresource.GetPointer();
    VkSubresourceLayout out_pLayout_value = {};
    VkSubresourceLayout* out_pLayout = &out_pLayout_value;

    Dispatcher<format::ApiCallId::ApiCall_vkGetImageSubresourceLayout, void, PFN_vkGetImageSubresourceLayout>::Dispatch(this, vkGetImageSubresourceLayout, in_device, in_image, in_pSubresource, out_pLayout);
}

void VulkanReplayConsumer::Process_vkCreateImageView(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImageViewCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkImageView>&    pView)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkImageViewCreateInfo* in_pCreateInfo = pCreateInfo.GetPointer();
    MapStructHandles(pCreateInfo.GetMetaStructPointer(), GetObjectMapper());
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkImageView out_pView_value = static_cast<VkImageView>(0);
    VkImageView* out_pView = &out_pView_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkCreateImageView, VkResult, PFN_vkCreateImageView>::Dispatch(this, returnValue, vkCreateImageView, in_device, in_pCreateInfo, in_pAllocator, out_pView);
    CheckResult("vkCreateImageView", returnValue, replay_result);

    AddHandles<VkImageView>(pView.GetPointer(), 1, out_pView, 1, &VulkanObjectMapper::AddVkImageView);
}

void VulkanReplayConsumer::Process_vkDestroyImageView(
    format::HandleId                            device,
    format::HandleId                            imageView,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkImageView in_imageView = GetObjectMapper().MapVkImageView(imageView);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);

    Dispatcher<format::ApiCallId::ApiCall_vkDestroyImageView, void, PFN_vkDestroyImageView>::Dispatch(this, vkDestroyImageView, in_device, in_imageView, in_pAllocator);
}

void VulkanReplayConsumer::Process_vkCreateShaderModule(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkShaderModuleCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkShaderModule>& pShaderModule)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkShaderModuleCreateInfo* in_pCreateInfo = pCreateInfo.GetPointer();
    MapStructHandles(pCreateInfo.GetMetaStructPointer(), GetObjectMapper());
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkShaderModule out_pShaderModule_value = static_cast<VkShaderModule>(0);
    VkShaderModule* out_pShaderModule = &out_pShaderModule_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkCreateShaderModule, VkResult, PFN_vkCreateShaderModule>::Dispatch(this, returnValue, vkCreateShaderModule, in_device, in_pCreateInfo, in_pAllocator, out_pShaderModule);
    CheckResult("vkCreateShaderModule", returnValue, replay_result);

    AddHandles<VkShaderModule>(pShaderModule.GetPointer(), 1, out_pShaderModule, 1, &VulkanObjectMapper::AddVkShaderModule);
}

void VulkanReplayConsumer::Process_vkDestroyShaderModule(
    format::HandleId                            device,
    format::HandleId                            shaderModule,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkShaderModule in_shaderModule = GetObjectMapper().MapVkShaderModule(shaderModule);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);

    Dispatcher<format::ApiCallId::ApiCall_vkDestroyShaderModule, void, PFN_vkDestroyShaderModule>::Dispatch(this, vkDestroyShaderModule, in_device, in_shaderModule, in_pAllocator);
}

void VulkanReplayConsumer::Process_vkCreatePipelineCache(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkPipelineCacheCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkPipelineCache>& pPipelineCache)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkPipelineCacheCreateInfo* in_pCreateInfo = pCreateInfo.GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkPipelineCache out_pPipelineCache_value = static_cast<VkPipelineCache>(0);
    VkPipelineCache* out_pPipelineCache = &out_pPipelineCache_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkCreatePipelineCache, VkResult, PFN_vkCreatePipelineCache>::Dispatch(this, returnValue, vkCreatePipelineCache, in_device, in_pCreateInfo, in_pAllocator, out_pPipelineCache);
    CheckResult("vkCreatePipelineCache", returnValue, replay_result);

    AddHandles<VkPipelineCache>(pPipelineCache.GetPointer(), 1, out_pPipelineCache, 1, &VulkanObjectMapper::AddVkPipelineCache);
}

void VulkanReplayConsumer::Process_vkDestroyPipelineCache(
    format::HandleId                            device,
    format::HandleId                            pipelineCache,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkPipelineCache in_pipelineCache = GetObjectMapper().MapVkPipelineCache(pipelineCache);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);

    Dispatcher<format::ApiCallId::ApiCall_vkDestroyPipelineCache, void, PFN_vkDestroyPipelineCache>::Dispatch(this, vkDestroyPipelineCache, in_device, in_pipelineCache, in_pAllocator);
}

void VulkanReplayConsumer::Process_vkGetPipelineCacheData(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            pipelineCache,
    const PointerDecoder<size_t>&               pDataSize,
    const PointerDecoder<uint8_t>&              pData)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkPipelineCache in_pipelineCache = GetObjectMapper().MapVkPipelineCache(pipelineCache);
    size_t out_pDataSize_value = pDataSize.IsNull() ? static_cast<size_t>(0) : *(pDataSize.GetPointer());
    size_t* out_pDataSize = &out_pDataSize_value;
    uint8_t* out_pData = pData.IsNull() ? nullptr : AllocateArray<uint8_t>(out_pDataSize_value);

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetPipelineCacheData, VkResult, PFN_vkGetPipelineCacheData>::Dispatch(this, returnValue, vkGetPipelineCacheData, in_device, in_pipelineCache, out_pDataSize, out_pData);
    CheckResult("vkGetPipelineCacheData", returnValue, replay_result);

    FreeArray<uint8_t>(&out_pData);
}

void VulkanReplayConsumer::Process_vkMergePipelineCaches(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            dstCache,
    uint32_t                                    srcCacheCount,
    const HandlePointerDecoder<VkPipelineCache>& pSrcCaches)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkPipelineCache in_dstCache = GetObjectMapper().MapVkPipelineCache(dstCache);
    VkPipelineCache* in_pSrcCaches = pSrcCaches.GetHandlePointer();
    MapHandles<VkPipelineCache>(pSrcCaches.GetPointer(), pSrcCaches.GetLength(), in_pSrcCaches, srcCacheCount, &VulkanObjectMapper::MapVkPipelineCache);

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkMergePipelineCaches, VkResult, PFN_vkMergePipelineCaches>::Dispatch(this, returnValue, vkMergePipelineCaches, in_device, in_dstCache, srcCacheCount, in_pSrcCaches);
    CheckResult("vkMergePipelineCaches", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkCreateGraphicsPipelines(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            pipelineCache,
    uint32_t                                    createInfoCount,
    const StructPointerDecoder<Decoded_VkGraphicsPipelineCreateInfo>& pCreateInfos,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkPipeline>&     pPipelines)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkPipelineCache in_pipelineCache = GetObjectMapper().MapVkPipelineCache(pipelineCache);
    const VkGraphicsPipelineCreateInfo* in_pCreateInfos = pCreateInfos.GetPointer();
    MapStructArrayHandles(pCreateInfos.GetMetaStructPointer(), pCreateInfos.GetLength(), GetObjectMapper());
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkPipeline* out_pPipelines = pPipelines.GetHandlePointer();

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkCreateGraphicsPipelines, VkResult, PFN_vkCreateGraphicsPipelines>::Dispatch(this, returnValue, vkCreateGraphicsPipelines, in_device, in_pipelineCache, createInfoCount, in_pCreateInfos, in_pAllocator, out_pPipelines);
    CheckResult("vkCreateGraphicsPipelines", returnValue, replay_result);

    AddHandles<VkPipeline>(pPipelines.GetPointer(), pPipelines.GetLength(), out_pPipelines, createInfoCount, &VulkanObjectMapper::AddVkPipeline);
}

void VulkanReplayConsumer::Process_vkCreateComputePipelines(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            pipelineCache,
    uint32_t                                    createInfoCount,
    const StructPointerDecoder<Decoded_VkComputePipelineCreateInfo>& pCreateInfos,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkPipeline>&     pPipelines)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkPipelineCache in_pipelineCache = GetObjectMapper().MapVkPipelineCache(pipelineCache);
    const VkComputePipelineCreateInfo* in_pCreateInfos = pCreateInfos.GetPointer();
    MapStructArrayHandles(pCreateInfos.GetMetaStructPointer(), pCreateInfos.GetLength(), GetObjectMapper());
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkPipeline* out_pPipelines = pPipelines.GetHandlePointer();

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkCreateComputePipelines, VkResult, PFN_vkCreateComputePipelines>::Dispatch(this, returnValue, vkCreateComputePipelines, in_device, in_pipelineCache, createInfoCount, in_pCreateInfos, in_pAllocator, out_pPipelines);
    CheckResult("vkCreateComputePipelines", returnValue, replay_result);

    AddHandles<VkPipeline>(pPipelines.GetPointer(), pPipelines.GetLength(), out_pPipelines, createInfoCount, &VulkanObjectMapper::AddVkPipeline);
}

void VulkanReplayConsumer::Process_vkDestroyPipeline(
    format::HandleId                            device,
    format::HandleId                            pipeline,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkPipeline in_pipeline = GetObjectMapper().MapVkPipeline(pipeline);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);

    Dispatcher<format::ApiCallId::ApiCall_vkDestroyPipeline, void, PFN_vkDestroyPipeline>::Dispatch(this, vkDestroyPipeline, in_device, in_pipeline, in_pAllocator);
}

void VulkanReplayConsumer::Process_vkCreatePipelineLayout(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkPipelineLayoutCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkPipelineLayout>& pPipelineLayout)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkPipelineLayoutCreateInfo* in_pCreateInfo = pCreateInfo.GetPointer();
    MapStructHandles(pCreateInfo.GetMetaStructPointer(), GetObjectMapper());
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkPipelineLayout out_pPipelineLayout_value = static_cast<VkPipelineLayout>(0);
    VkPipelineLayout* out_pPipelineLayout = &out_pPipelineLayout_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkCreatePipelineLayout, VkResult, PFN_vkCreatePipelineLayout>::Dispatch(this, returnValue, vkCreatePipelineLayout, in_device, in_pCreateInfo, in_pAllocator, out_pPipelineLayout);
    CheckResult("vkCreatePipelineLayout", returnValue, replay_result);

    AddHandles<VkPipelineLayout>(pPipelineLayout.GetPointer(), 1, out_pPipelineLayout, 1, &VulkanObjectMapper::AddVkPipelineLayout);
}

void VulkanReplayConsumer::Process_vkDestroyPipelineLayout(
    format::HandleId                            device,
    format::HandleId                            pipelineLayout,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkPipelineLayout in_pipelineLayout = GetObjectMapper().MapVkPipelineLayout(pipelineLayout);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);

    Dispatcher<format::ApiCallId::ApiCall_vkDestroyPipelineLayout, void, PFN_vkDestroyPipelineLayout>::Dispatch(this, vkDestroyPipelineLayout, in_device, in_pipelineLayout, in_pAllocator);
}

void VulkanReplayConsumer::Process_vkCreateSampler(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSamplerCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSampler>&      pSampler)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkSamplerCreateInfo* in_pCreateInfo = pCreateInfo.GetPointer();
    MapStructHandles(pCreateInfo.GetMetaStructPointer(), GetObjectMapper());
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkSampler out_pSampler_value = static_cast<VkSampler>(0);
    VkSampler* out_pSampler = &out_pSampler_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkCreateSampler, VkResult, PFN_vkCreateSampler>::Dispatch(this, returnValue, vkCreateSampler, in_device, in_pCreateInfo, in_pAllocator, out_pSampler);
    CheckResult("vkCreateSampler", returnValue, replay_result);

    AddHandles<VkSampler>(pSampler.GetPointer(), 1, out_pSampler, 1, &VulkanObjectMapper::AddVkSampler);
}

void VulkanReplayConsumer::Process_vkDestroySampler(
    format::HandleId                            device,
    format::HandleId                            sampler,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkSampler in_sampler = GetObjectMapper().MapVkSampler(sampler);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);

    Dispatcher<format::ApiCallId::ApiCall_vkDestroySampler, void, PFN_vkDestroySampler>::Dispatch(this, vkDestroySampler, in_device, in_sampler, in_pAllocator);
}

void VulkanReplayConsumer::Process_vkCreateDescriptorSetLayout(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDescriptorSetLayoutCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkDescriptorSetLayout>& pSetLayout)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkDescriptorSetLayoutCreateInfo* in_pCreateInfo = pCreateInfo.GetPointer();
    MapStructHandles(pCreateInfo.GetMetaStructPointer(), GetObjectMapper());
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkDescriptorSetLayout out_pSetLayout_value = static_cast<VkDescriptorSetLayout>(0);
    VkDescriptorSetLayout* out_pSetLayout = &out_pSetLayout_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkCreateDescriptorSetLayout, VkResult, PFN_vkCreateDescriptorSetLayout>::Dispatch(this, returnValue, vkCreateDescriptorSetLayout, in_device, in_pCreateInfo, in_pAllocator, out_pSetLayout);
    CheckResult("vkCreateDescriptorSetLayout", returnValue, replay_result);

    AddHandles<VkDescriptorSetLayout>(pSetLayout.GetPointer(), 1, out_pSetLayout, 1, &VulkanObjectMapper::AddVkDescriptorSetLayout);
}

void VulkanReplayConsumer::Process_vkDestroyDescriptorSetLayout(
    format::HandleId                            device,
    format::HandleId                            descriptorSetLayout,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkDescriptorSetLayout in_descriptorSetLayout = GetObjectMapper().MapVkDescriptorSetLayout(descriptorSetLayout);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);

    Dispatcher<format::ApiCallId::ApiCall_vkDestroyDescriptorSetLayout, void, PFN_vkDestroyDescriptorSetLayout>::Dispatch(this, vkDestroyDescriptorSetLayout, in_device, in_descriptorSetLayout, in_pAllocator);
}

void VulkanReplayConsumer::Process_vkCreateDescriptorPool(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDescriptorPoolCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkDescriptorPool>& pDescriptorPool)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkDescriptorPoolCreateInfo* in_pCreateInfo = pCreateInfo.GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkDescriptorPool out_pDescriptorPool_value = static_cast<VkDescriptorPool>(0);
    VkDescriptorPool* out_pDescriptorPool = &out_pDescriptorPool_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkCreateDescriptorPool, VkResult, PFN_vkCreateDescriptorPool>::Dispatch(this, returnValue, vkCreateDescriptorPool, in_device, in_pCreateInfo, in_pAllocator, out_pDescriptorPool);
    CheckResult("vkCreateDescriptorPool", returnValue, replay_result);

    AddHandles<VkDescriptorPool>(pDescriptorPool.GetPointer(), 1, out_pDescriptorPool, 1, &VulkanObjectMapper::AddVkDescriptorPool);
}

void VulkanReplayConsumer::Process_vkDestroyDescriptorPool(
    format::HandleId                            device,
    format::HandleId                            descriptorPool,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkDescriptorPool in_descriptorPool = GetObjectMapper().MapVkDescriptorPool(descriptorPool);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);

    Dispatcher<format::ApiCallId::ApiCall_vkDestroyDescriptorPool, void, PFN_vkDestroyDescriptorPool>::Dispatch(this, vkDestroyDescriptorPool, in_device, in_descriptorPool, in_pAllocator);
}

void VulkanReplayConsumer::Process_vkResetDescriptorPool(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            descriptorPool,
    VkDescriptorPoolResetFlags                  flags)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkDescriptorPool in_descriptorPool = GetObjectMapper().MapVkDescriptorPool(descriptorPool);

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkResetDescriptorPool, VkResult, PFN_vkResetDescriptorPool>::Dispatch(this, returnValue, vkResetDescriptorPool, in_device, in_descriptorPool, flags);
    CheckResult("vkResetDescriptorPool", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkAllocateDescriptorSets(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDescriptorSetAllocateInfo>& pAllocateInfo,
    const HandlePointerDecoder<VkDescriptorSet>& pDescriptorSets)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkDescriptorSetAllocateInfo* in_pAllocateInfo = pAllocateInfo.GetPointer();
    MapStructHandles(pAllocateInfo.GetMetaStructPointer(), GetObjectMapper());
    VkDescriptorSet* out_pDescriptorSets = pDescriptorSets.GetHandlePointer();

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkAllocateDescriptorSets, VkResult, PFN_vkAllocateDescriptorSets>::Dispatch(this, returnValue, vkAllocateDescriptorSets, in_device, in_pAllocateInfo, out_pDescriptorSets);
    CheckResult("vkAllocateDescriptorSets", returnValue, replay_result);

    AddHandles<VkDescriptorSet>(pDescriptorSets.GetPointer(), pDescriptorSets.GetLength(), out_pDescriptorSets, in_pAllocateInfo->descriptorSetCount, &VulkanObjectMapper::AddVkDescriptorSet);
}

void VulkanReplayConsumer::Process_vkFreeDescriptorSets(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            descriptorPool,
    uint32_t                                    descriptorSetCount,
    const HandlePointerDecoder<VkDescriptorSet>& pDescriptorSets)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkDescriptorPool in_descriptorPool = GetObjectMapper().MapVkDescriptorPool(descriptorPool);
    VkDescriptorSet* in_pDescriptorSets = pDescriptorSets.GetHandlePointer();
    MapHandles<VkDescriptorSet>(pDescriptorSets.GetPointer(), pDescriptorSets.GetLength(), in_pDescriptorSets, descriptorSetCount, &VulkanObjectMapper::MapVkDescriptorSet);

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkFreeDescriptorSets, VkResult, PFN_vkFreeDescriptorSets>::Dispatch(this, returnValue, vkFreeDescriptorSets, in_device, in_descriptorPool, descriptorSetCount, in_pDescriptorSets);
    CheckResult("vkFreeDescriptorSets", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkUpdateDescriptorSets(
    format::HandleId                            device,
    uint32_t                                    descriptorWriteCount,
    const StructPointerDecoder<Decoded_VkWriteDescriptorSet>& pDescriptorWrites,
    uint32_t                                    descriptorCopyCount,
    const StructPointerDecoder<Decoded_VkCopyDescriptorSet>& pDescriptorCopies)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkWriteDescriptorSet* in_pDescriptorWrites = pDescriptorWrites.GetPointer();
    MapStructArrayHandles(pDescriptorWrites.GetMetaStructPointer(), pDescriptorWrites.GetLength(), GetObjectMapper());
    const VkCopyDescriptorSet* in_pDescriptorCopies = pDescriptorCopies.GetPointer();
    MapStructArrayHandles(pDescriptorCopies.GetMetaStructPointer(), pDescriptorCopies.GetLength(), GetObjectMapper());

    Dispatcher<format::ApiCallId::ApiCall_vkUpdateDescriptorSets, void, PFN_vkUpdateDescriptorSets>::Dispatch(this, vkUpdateDescriptorSets, in_device, descriptorWriteCount, in_pDescriptorWrites, descriptorCopyCount, in_pDescriptorCopies);
}

void VulkanReplayConsumer::Process_vkCreateFramebuffer(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkFramebufferCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkFramebuffer>&  pFramebuffer)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkFramebufferCreateInfo* in_pCreateInfo = pCreateInfo.GetPointer();
    MapStructHandles(pCreateInfo.GetMetaStructPointer(), GetObjectMapper());
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkFramebuffer out_pFramebuffer_value = static_cast<VkFramebuffer>(0);
    VkFramebuffer* out_pFramebuffer = &out_pFramebuffer_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkCreateFramebuffer, VkResult, PFN_vkCreateFramebuffer>::Dispatch(this, returnValue, vkCreateFramebuffer, in_device, in_pCreateInfo, in_pAllocator, out_pFramebuffer);
    CheckResult("vkCreateFramebuffer", returnValue, replay_result);

    AddHandles<VkFramebuffer>(pFramebuffer.GetPointer(), 1, out_pFramebuffer, 1, &VulkanObjectMapper::AddVkFramebuffer);
}

void VulkanReplayConsumer::Process_vkDestroyFramebuffer(
    format::HandleId                            device,
    format::HandleId                            framebuffer,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkFramebuffer in_framebuffer = GetObjectMapper().MapVkFramebuffer(framebuffer);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);

    Dispatcher<format::ApiCallId::ApiCall_vkDestroyFramebuffer, void, PFN_vkDestroyFramebuffer>::Dispatch(this, vkDestroyFramebuffer, in_device, in_framebuffer, in_pAllocator);
}

void VulkanReplayConsumer::Process_vkCreateRenderPass(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkRenderPassCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkRenderPass>&   pRenderPass)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkRenderPassCreateInfo* in_pCreateInfo = pCreateInfo.GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkRenderPass out_pRenderPass_value = static_cast<VkRenderPass>(0);
    VkRenderPass* out_pRenderPass = &out_pRenderPass_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkCreateRenderPass, VkResult, PFN_vkCreateRenderPass>::Dispatch(this, returnValue, vkCreateRenderPass, in_device, in_pCreateInfo, in_pAllocator, out_pRenderPass);
    CheckResult("vkCreateRenderPass", returnValue, replay_result);

    AddHandles<VkRenderPass>(pRenderPass.GetPointer(), 1, out_pRenderPass, 1, &VulkanObjectMapper::AddVkRenderPass);
}

void VulkanReplayConsumer::Process_vkDestroyRenderPass(
    format::HandleId                            device,
    format::HandleId                            renderPass,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkRenderPass in_renderPass = GetObjectMapper().MapVkRenderPass(renderPass);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);

    Dispatcher<format::ApiCallId::ApiCall_vkDestroyRenderPass, void, PFN_vkDestroyRenderPass>::Dispatch(this, vkDestroyRenderPass, in_device, in_renderPass, in_pAllocator);
}

void VulkanReplayConsumer::Process_vkGetRenderAreaGranularity(
    format::HandleId                            device,
    format::HandleId                            renderPass,
    const StructPointerDecoder<Decoded_VkExtent2D>& pGranularity)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkRenderPass in_renderPass = GetObjectMapper().MapVkRenderPass(renderPass);
    VkExtent2D out_pGranularity_value = {};
    VkExtent2D* out_pGranularity = &out_pGranularity_value;

    Dispatcher<format::ApiCallId::ApiCall_vkGetRenderAreaGranularity, void, PFN_vkGetRenderAreaGranularity>::Dispatch(this, vkGetRenderAreaGranularity, in_device, in_renderPass, out_pGranularity);
}

void VulkanReplayConsumer::Process_vkCreateCommandPool(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkCommandPoolCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkCommandPool>&  pCommandPool)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkCommandPoolCreateInfo* in_pCreateInfo = pCreateInfo.GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkCommandPool out_pCommandPool_value = static_cast<VkCommandPool>(0);
    VkCommandPool* out_pCommandPool = &out_pCommandPool_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkCreateCommandPool, VkResult, PFN_vkCreateCommandPool>::Dispatch(this, returnValue, vkCreateCommandPool, in_device, in_pCreateInfo, in_pAllocator, out_pCommandPool);
    CheckResult("vkCreateCommandPool", returnValue, replay_result);

    AddHandles<VkCommandPool>(pCommandPool.GetPointer(), 1, out_pCommandPool, 1, &VulkanObjectMapper::AddVkCommandPool);
}

void VulkanReplayConsumer::Process_vkDestroyCommandPool(
    format::HandleId                            device,
    format::HandleId                            commandPool,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkCommandPool in_commandPool = GetObjectMapper().MapVkCommandPool(commandPool);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);

    Dispatcher<format::ApiCallId::ApiCall_vkDestroyCommandPool, void, PFN_vkDestroyCommandPool>::Dispatch(this, vkDestroyCommandPool, in_device, in_commandPool, in_pAllocator);
}

void VulkanReplayConsumer::Process_vkResetCommandPool(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            commandPool,
    VkCommandPoolResetFlags                     flags)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkCommandPool in_commandPool = GetObjectMapper().MapVkCommandPool(commandPool);

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkResetCommandPool, VkResult, PFN_vkResetCommandPool>::Dispatch(this, returnValue, vkResetCommandPool, in_device, in_commandPool, flags);
    CheckResult("vkResetCommandPool", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkAllocateCommandBuffers(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkCommandBufferAllocateInfo>& pAllocateInfo,
    const HandlePointerDecoder<VkCommandBuffer>& pCommandBuffers)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkCommandBufferAllocateInfo* in_pAllocateInfo = pAllocateInfo.GetPointer();
    MapStructHandles(pAllocateInfo.GetMetaStructPointer(), GetObjectMapper());
    VkCommandBuffer* out_pCommandBuffers = pCommandBuffers.GetHandlePointer();

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkAllocateCommandBuffers, VkResult, PFN_vkAllocateCommandBuffers>::Dispatch(this, returnValue, vkAllocateCommandBuffers, in_device, in_pAllocateInfo, out_pCommandBuffers);
    CheckResult("vkAllocateCommandBuffers", returnValue, replay_result);

    AddHandles<VkCommandBuffer>(pCommandBuffers.GetPointer(), pCommandBuffers.GetLength(), out_pCommandBuffers, in_pAllocateInfo->commandBufferCount, &VulkanObjectMapper::AddVkCommandBuffer);
}

void VulkanReplayConsumer::Process_vkFreeCommandBuffers(
    format::HandleId                            device,
    format::HandleId                            commandPool,
    uint32_t                                    commandBufferCount,
    const HandlePointerDecoder<VkCommandBuffer>& pCommandBuffers)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkCommandPool in_commandPool = GetObjectMapper().MapVkCommandPool(commandPool);
    VkCommandBuffer* in_pCommandBuffers = pCommandBuffers.GetHandlePointer();
    MapHandles<VkCommandBuffer>(pCommandBuffers.GetPointer(), pCommandBuffers.GetLength(), in_pCommandBuffers, commandBufferCount, &VulkanObjectMapper::MapVkCommandBuffer);

    Dispatcher<format::ApiCallId::ApiCall_vkFreeCommandBuffers, void, PFN_vkFreeCommandBuffers>::Dispatch(this, vkFreeCommandBuffers, in_device, in_commandPool, commandBufferCount, in_pCommandBuffers);
}

void VulkanReplayConsumer::Process_vkBeginCommandBuffer(
    VkResult                                    returnValue,
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkCommandBufferBeginInfo>& pBeginInfo)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    const VkCommandBufferBeginInfo* in_pBeginInfo = pBeginInfo.GetPointer();
    MapStructHandles(pBeginInfo.GetMetaStructPointer(), GetObjectMapper());

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkBeginCommandBuffer, VkResult, PFN_vkBeginCommandBuffer>::Dispatch(this, returnValue, vkBeginCommandBuffer, in_commandBuffer, in_pBeginInfo);
    CheckResult("vkBeginCommandBuffer", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkEndCommandBuffer(
    VkResult                                    returnValue,
    format::HandleId                            commandBuffer)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkEndCommandBuffer, VkResult, PFN_vkEndCommandBuffer>::Dispatch(this, returnValue, vkEndCommandBuffer, in_commandBuffer);
    CheckResult("vkEndCommandBuffer", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkResetCommandBuffer(
    VkResult                                    returnValue,
    format::HandleId                            commandBuffer,
    VkCommandBufferResetFlags                   flags)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkResetCommandBuffer, VkResult, PFN_vkResetCommandBuffer>::Dispatch(this, returnValue, vkResetCommandBuffer, in_commandBuffer, flags);
    CheckResult("vkResetCommandBuffer", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkCmdBindPipeline(
    format::HandleId                            commandBuffer,
    VkPipelineBindPoint                         pipelineBindPoint,
    format::HandleId                            pipeline)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    VkPipeline in_pipeline = GetObjectMapper().MapVkPipeline(pipeline);

    Dispatcher<format::ApiCallId::ApiCall_vkCmdBindPipeline, void, PFN_vkCmdBindPipeline>::Dispatch(this, vkCmdBindPipeline, in_commandBuffer, pipelineBindPoint, in_pipeline);
}

void VulkanReplayConsumer::Process_vkCmdSetViewport(
    format::HandleId                            commandBuffer,
    uint32_t                                    firstViewport,
    uint32_t                                    viewportCount,
    const StructPointerDecoder<Decoded_VkViewport>& pViewports)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    const VkViewport* in_pViewports = pViewports.GetPointer();

    Dispatcher<format::ApiCallId::ApiCall_vkCmdSetViewport, void, PFN_vkCmdSetViewport>::Dispatch(this, vkCmdSetViewport, in_commandBuffer, firstViewport, viewportCount, in_pViewports);
}

void VulkanReplayConsumer::Process_vkCmdSetScissor(
    format::HandleId                            commandBuffer,
    uint32_t                                    firstScissor,
    uint32_t                                    scissorCount,
    const StructPointerDecoder<Decoded_VkRect2D>& pScissors)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    const VkRect2D* in_pScissors = pScissors.GetPointer();

    Dispatcher<format::ApiCallId::ApiCall_vkCmdSetScissor, void, PFN_vkCmdSetScissor>::Dispatch(this, vkCmdSetScissor, in_commandBuffer, firstScissor, scissorCount, in_pScissors);
}

void VulkanReplayConsumer::Process_vkCmdSetLineWidth(
    format::HandleId                            commandBuffer,
    float                                       lineWidth)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);

    Dispatcher<format::ApiCallId::ApiCall_vkCmdSetLineWidth, void, PFN_vkCmdSetLineWidth>::Dispatch(this, vkCmdSetLineWidth, in_commandBuffer, lineWidth);
}

void VulkanReplayConsumer::Process_vkCmdSetDepthBias(
    format::HandleId                            commandBuffer,
    float                                       depthBiasConstantFactor,
    float                                       depthBiasClamp,
    float                                       depthBiasSlopeFactor)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);

    Dispatcher<format::ApiCallId::ApiCall_vkCmdSetDepthBias, void, PFN_vkCmdSetDepthBias>::Dispatch(this, vkCmdSetDepthBias, in_commandBuffer, depthBiasConstantFactor, depthBiasClamp, depthBiasSlopeFactor);
}

void VulkanReplayConsumer::Process_vkCmdSetBlendConstants(
    format::HandleId                            commandBuffer,
    const PointerDecoder<float>&                blendConstants)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    const float* in_blendConstants = blendConstants.GetPointer();

    Dispatcher<format::ApiCallId::ApiCall_vkCmdSetBlendConstants, void, PFN_vkCmdSetBlendConstants>::Dispatch(this, vkCmdSetBlendConstants, in_commandBuffer, in_blendConstants);
}

void VulkanReplayConsumer::Process_vkCmdSetDepthBounds(
    format::HandleId                            commandBuffer,
    float                                       minDepthBounds,
    float                                       maxDepthBounds)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);

    Dispatcher<format::ApiCallId::ApiCall_vkCmdSetDepthBounds, void, PFN_vkCmdSetDepthBounds>::Dispatch(this, vkCmdSetDepthBounds, in_commandBuffer, minDepthBounds, maxDepthBounds);
}

void VulkanReplayConsumer::Process_vkCmdSetStencilCompareMask(
    format::HandleId                            commandBuffer,
    VkStencilFaceFlags                          faceMask,
    uint32_t                                    compareMask)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);

    Dispatcher<format::ApiCallId::ApiCall_vkCmdSetStencilCompareMask, void, PFN_vkCmdSetStencilCompareMask>::Dispatch(this, vkCmdSetStencilCompareMask, in_commandBuffer, faceMask, compareMask);
}

void VulkanReplayConsumer::Process_vkCmdSetStencilWriteMask(
    format::HandleId                            commandBuffer,
    VkStencilFaceFlags                          faceMask,
    uint32_t                                    writeMask)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);

    Dispatcher<format::ApiCallId::ApiCall_vkCmdSetStencilWriteMask, void, PFN_vkCmdSetStencilWriteMask>::Dispatch(this, vkCmdSetStencilWriteMask, in_commandBuffer, faceMask, writeMask);
}

void VulkanReplayConsumer::Process_vkCmdSetStencilReference(
    format::HandleId                            commandBuffer,
    VkStencilFaceFlags                          faceMask,
    uint32_t                                    reference)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);

    Dispatcher<format::ApiCallId::ApiCall_vkCmdSetStencilReference, void, PFN_vkCmdSetStencilReference>::Dispatch(this, vkCmdSetStencilReference, in_commandBuffer, faceMask, reference);
}

void VulkanReplayConsumer::Process_vkCmdBindDescriptorSets(
    format::HandleId                            commandBuffer,
    VkPipelineBindPoint                         pipelineBindPoint,
    format::HandleId                            layout,
    uint32_t                                    firstSet,
    uint32_t                                    descriptorSetCount,
    const HandlePointerDecoder<VkDescriptorSet>& pDescriptorSets,
    uint32_t                                    dynamicOffsetCount,
    const PointerDecoder<uint32_t>&             pDynamicOffsets)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    VkPipelineLayout in_layout = GetObjectMapper().MapVkPipelineLayout(layout);
    VkDescriptorSet* in_pDescriptorSets = pDescriptorSets.GetHandlePointer();
    MapHandles<VkDescriptorSet>(pDescriptorSets.GetPointer(), pDescriptorSets.GetLength(), in_pDescriptorSets, descriptorSetCount, &VulkanObjectMapper::MapVkDescriptorSet);
    const uint32_t* in_pDynamicOffsets = pDynamicOffsets.GetPointer();

    Dispatcher<format::ApiCallId::ApiCall_vkCmdBindDescriptorSets, void, PFN_vkCmdBindDescriptorSets>::Dispatch(this, vkCmdBindDescriptorSets, in_commandBuffer, pipelineBindPoint, in_layout, firstSet, descriptorSetCount, in_pDescriptorSets, dynamicOffsetCount, in_pDynamicOffsets);
}

void VulkanReplayConsumer::Process_vkCmdBindIndexBuffer(
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    VkIndexType                                 indexType)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    VkBuffer in_buffer = GetObjectMapper().MapVkBuffer(buffer);

    Dispatcher<format::ApiCallId::ApiCall_vkCmdBindIndexBuffer, void, PFN_vkCmdBindIndexBuffer>::Dispatch(this, vkCmdBindIndexBuffer, in_commandBuffer, in_buffer, offset, indexType);
}

void VulkanReplayConsumer::Process_vkCmdBindVertexBuffers(
    format::HandleId                            commandBuffer,
    uint32_t                                    firstBinding,
    uint32_t                                    bindingCount,
    const HandlePointerDecoder<VkBuffer>&       pBuffers,
    const PointerDecoder<VkDeviceSize>&         pOffsets)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    VkBuffer* in_pBuffers = pBuffers.GetHandlePointer();
    MapHandles<VkBuffer>(pBuffers.GetPointer(), pBuffers.GetLength(), in_pBuffers, bindingCount, &VulkanObjectMapper::MapVkBuffer);
    const VkDeviceSize* in_pOffsets = pOffsets.GetPointer();

    Dispatcher<format::ApiCallId::ApiCall_vkCmdBindVertexBuffers, void, PFN_vkCmdBindVertexBuffers>::Dispatch(this, vkCmdBindVertexBuffers, in_commandBuffer, firstBinding, bindingCount, in_pBuffers, in_pOffsets);
}

void VulkanReplayConsumer::Process_vkCmdDraw(
    format::HandleId                            commandBuffer,
    uint32_t                                    vertexCount,
    uint32_t                                    instanceCount,
    uint32_t                                    firstVertex,
    uint32_t                                    firstInstance)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);

    Dispatcher<format::ApiCallId::ApiCall_vkCmdDraw, void, PFN_vkCmdDraw>::Dispatch(this, vkCmdDraw, in_commandBuffer, vertexCount, instanceCount, firstVertex, firstInstance);
}

void VulkanReplayConsumer::Process_vkCmdDrawIndexed(
    format::HandleId                            commandBuffer,
    uint32_t                                    indexCount,
    uint32_t                                    instanceCount,
    uint32_t                                    firstIndex,
    int32_t                                     vertexOffset,
    uint32_t                                    firstInstance)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);

    Dispatcher<format::ApiCallId::ApiCall_vkCmdDrawIndexed, void, PFN_vkCmdDrawIndexed>::Dispatch(this, vkCmdDrawIndexed, in_commandBuffer, indexCount, instanceCount, firstIndex, vertexOffset, firstInstance);
}

void VulkanReplayConsumer::Process_vkCmdDrawIndirect(
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    uint32_t                                    drawCount,
    uint32_t                                    stride)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    VkBuffer in_buffer = GetObjectMapper().MapVkBuffer(buffer);

    Dispatcher<format::ApiCallId::ApiCall_vkCmdDrawIndirect, void, PFN_vkCmdDrawIndirect>::Dispatch(this, vkCmdDrawIndirect, in_commandBuffer, in_buffer, offset, drawCount, stride);
}

void VulkanReplayConsumer::Process_vkCmdDrawIndexedIndirect(
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    uint32_t                                    drawCount,
    uint32_t                                    stride)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    VkBuffer in_buffer = GetObjectMapper().MapVkBuffer(buffer);

    Dispatcher<format::ApiCallId::ApiCall_vkCmdDrawIndexedIndirect, void, PFN_vkCmdDrawIndexedIndirect>::Dispatch(this, vkCmdDrawIndexedIndirect, in_commandBuffer, in_buffer, offset, drawCount, stride);
}

void VulkanReplayConsumer::Process_vkCmdDispatch(
    format::HandleId                            commandBuffer,
    uint32_t                                    groupCountX,
    uint32_t                                    groupCountY,
    uint32_t                                    groupCountZ)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);

    Dispatcher<format::ApiCallId::ApiCall_vkCmdDispatch, void, PFN_vkCmdDispatch>::Dispatch(this, vkCmdDispatch, in_commandBuffer, groupCountX, groupCountY, groupCountZ);
}

void VulkanReplayConsumer::Process_vkCmdDispatchIndirect(
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    VkBuffer in_buffer = GetObjectMapper().MapVkBuffer(buffer);

    Dispatcher<format::ApiCallId::ApiCall_vkCmdDispatchIndirect, void, PFN_vkCmdDispatchIndirect>::Dispatch(this, vkCmdDispatchIndirect, in_commandBuffer, in_buffer, offset);
}

void VulkanReplayConsumer::Process_vkCmdCopyBuffer(
    format::HandleId                            commandBuffer,
    format::HandleId                            srcBuffer,
    format::HandleId                            dstBuffer,
    uint32_t                                    regionCount,
    const StructPointerDecoder<Decoded_VkBufferCopy>& pRegions)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    VkBuffer in_srcBuffer = GetObjectMapper().MapVkBuffer(srcBuffer);
    VkBuffer in_dstBuffer = GetObjectMapper().MapVkBuffer(dstBuffer);
    const VkBufferCopy* in_pRegions = pRegions.GetPointer();

    Dispatcher<format::ApiCallId::ApiCall_vkCmdCopyBuffer, void, PFN_vkCmdCopyBuffer>::Dispatch(this, vkCmdCopyBuffer, in_commandBuffer, in_srcBuffer, in_dstBuffer, regionCount, in_pRegions);
}

void VulkanReplayConsumer::Process_vkCmdCopyImage(
    format::HandleId                            commandBuffer,
    format::HandleId                            srcImage,
    VkImageLayout                               srcImageLayout,
    format::HandleId                            dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    const StructPointerDecoder<Decoded_VkImageCopy>& pRegions)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    VkImage in_srcImage = GetObjectMapper().MapVkImage(srcImage);
    VkImage in_dstImage = GetObjectMapper().MapVkImage(dstImage);
    const VkImageCopy* in_pRegions = pRegions.GetPointer();

    Dispatcher<format::ApiCallId::ApiCall_vkCmdCopyImage, void, PFN_vkCmdCopyImage>::Dispatch(this, vkCmdCopyImage, in_commandBuffer, in_srcImage, srcImageLayout, in_dstImage, dstImageLayout, regionCount, in_pRegions);
}

void VulkanReplayConsumer::Process_vkCmdBlitImage(
    format::HandleId                            commandBuffer,
    format::HandleId                            srcImage,
    VkImageLayout                               srcImageLayout,
    format::HandleId                            dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    const StructPointerDecoder<Decoded_VkImageBlit>& pRegions,
    VkFilter                                    filter)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    VkImage in_srcImage = GetObjectMapper().MapVkImage(srcImage);
    VkImage in_dstImage = GetObjectMapper().MapVkImage(dstImage);
    const VkImageBlit* in_pRegions = pRegions.GetPointer();

    Dispatcher<format::ApiCallId::ApiCall_vkCmdBlitImage, void, PFN_vkCmdBlitImage>::Dispatch(this, vkCmdBlitImage, in_commandBuffer, in_srcImage, srcImageLayout, in_dstImage, dstImageLayout, regionCount, in_pRegions, filter);
}

void VulkanReplayConsumer::Process_vkCmdCopyBufferToImage(
    format::HandleId                            commandBuffer,
    format::HandleId                            srcBuffer,
    format::HandleId                            dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    const StructPointerDecoder<Decoded_VkBufferImageCopy>& pRegions)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    VkBuffer in_srcBuffer = GetObjectMapper().MapVkBuffer(srcBuffer);
    VkImage in_dstImage = GetObjectMapper().MapVkImage(dstImage);
    const VkBufferImageCopy* in_pRegions = pRegions.GetPointer();

    Dispatcher<format::ApiCallId::ApiCall_vkCmdCopyBufferToImage, void, PFN_vkCmdCopyBufferToImage>::Dispatch(this, vkCmdCopyBufferToImage, in_commandBuffer, in_srcBuffer, in_dstImage, dstImageLayout, regionCount, in_pRegions);
}

void VulkanReplayConsumer::Process_vkCmdCopyImageToBuffer(
    format::HandleId                            commandBuffer,
    format::HandleId                            srcImage,
    VkImageLayout                               srcImageLayout,
    format::HandleId                            dstBuffer,
    uint32_t                                    regionCount,
    const StructPointerDecoder<Decoded_VkBufferImageCopy>& pRegions)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    VkImage in_srcImage = GetObjectMapper().MapVkImage(srcImage);
    VkBuffer in_dstBuffer = GetObjectMapper().MapVkBuffer(dstBuffer);
    const VkBufferImageCopy* in_pRegions = pRegions.GetPointer();

    Dispatcher<format::ApiCallId::ApiCall_vkCmdCopyImageToBuffer, void, PFN_vkCmdCopyImageToBuffer>::Dispatch(this, vkCmdCopyImageToBuffer, in_commandBuffer, in_srcImage, srcImageLayout, in_dstBuffer, regionCount, in_pRegions);
}

void VulkanReplayConsumer::Process_vkCmdUpdateBuffer(
    format::HandleId                            commandBuffer,
    format::HandleId                            dstBuffer,
    VkDeviceSize                                dstOffset,
    VkDeviceSize                                dataSize,
    const PointerDecoder<uint8_t>&              pData)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    VkBuffer in_dstBuffer = GetObjectMapper().MapVkBuffer(dstBuffer);
    const void* in_pData = pData.GetPointer();

    Dispatcher<format::ApiCallId::ApiCall_vkCmdUpdateBuffer, void, PFN_vkCmdUpdateBuffer>::Dispatch(this, vkCmdUpdateBuffer, in_commandBuffer, in_dstBuffer, dstOffset, dataSize, in_pData);
}

void VulkanReplayConsumer::Process_vkCmdFillBuffer(
    format::HandleId                            commandBuffer,
    format::HandleId                            dstBuffer,
    VkDeviceSize                                dstOffset,
    VkDeviceSize                                size,
    uint32_t                                    data)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    VkBuffer in_dstBuffer = GetObjectMapper().MapVkBuffer(dstBuffer);

    Dispatcher<format::ApiCallId::ApiCall_vkCmdFillBuffer, void, PFN_vkCmdFillBuffer>::Dispatch(this, vkCmdFillBuffer, in_commandBuffer, in_dstBuffer, dstOffset, size, data);
}

void VulkanReplayConsumer::Process_vkCmdClearColorImage(
    format::HandleId                            commandBuffer,
    format::HandleId                            image,
    VkImageLayout                               imageLayout,
    const StructPointerDecoder<Decoded_VkClearColorValue>& pColor,
    uint32_t                                    rangeCount,
    const StructPointerDecoder<Decoded_VkImageSubresourceRange>& pRanges)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    VkImage in_image = GetObjectMapper().MapVkImage(image);
    const VkClearColorValue* in_pColor = pColor.GetPointer();
    const VkImageSubresourceRange* in_pRanges = pRanges.GetPointer();

    Dispatcher<format::ApiCallId::ApiCall_vkCmdClearColorImage, void, PFN_vkCmdClearColorImage>::Dispatch(this, vkCmdClearColorImage, in_commandBuffer, in_image, imageLayout, in_pColor, rangeCount, in_pRanges);
}

void VulkanReplayConsumer::Process_vkCmdClearDepthStencilImage(
    format::HandleId                            commandBuffer,
    format::HandleId                            image,
    VkImageLayout                               imageLayout,
    const StructPointerDecoder<Decoded_VkClearDepthStencilValue>& pDepthStencil,
    uint32_t                                    rangeCount,
    const StructPointerDecoder<Decoded_VkImageSubresourceRange>& pRanges)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    VkImage in_image = GetObjectMapper().MapVkImage(image);
    const VkClearDepthStencilValue* in_pDepthStencil = pDepthStencil.GetPointer();
    const VkImageSubresourceRange* in_pRanges = pRanges.GetPointer();

    Dispatcher<format::ApiCallId::ApiCall_vkCmdClearDepthStencilImage, void, PFN_vkCmdClearDepthStencilImage>::Dispatch(this, vkCmdClearDepthStencilImage, in_commandBuffer, in_image, imageLayout, in_pDepthStencil, rangeCount, in_pRanges);
}

void VulkanReplayConsumer::Process_vkCmdClearAttachments(
    format::HandleId                            commandBuffer,
    uint32_t                                    attachmentCount,
    const StructPointerDecoder<Decoded_VkClearAttachment>& pAttachments,
    uint32_t                                    rectCount,
    const StructPointerDecoder<Decoded_VkClearRect>& pRects)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    const VkClearAttachment* in_pAttachments = pAttachments.GetPointer();
    const VkClearRect* in_pRects = pRects.GetPointer();

    Dispatcher<format::ApiCallId::ApiCall_vkCmdClearAttachments, void, PFN_vkCmdClearAttachments>::Dispatch(this, vkCmdClearAttachments, in_commandBuffer, attachmentCount, in_pAttachments, rectCount, in_pRects);
}

void VulkanReplayConsumer::Process_vkCmdResolveImage(
    format::HandleId                            commandBuffer,
    format::HandleId                            srcImage,
    VkImageLayout                               srcImageLayout,
    format::HandleId                            dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    const StructPointerDecoder<Decoded_VkImageResolve>& pRegions)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    VkImage in_srcImage = GetObjectMapper().MapVkImage(srcImage);
    VkImage in_dstImage = GetObjectMapper().MapVkImage(dstImage);
    const VkImageResolve* in_pRegions = pRegions.GetPointer();

    Dispatcher<format::ApiCallId::ApiCall_vkCmdResolveImage, void, PFN_vkCmdResolveImage>::Dispatch(this, vkCmdResolveImage, in_commandBuffer, in_srcImage, srcImageLayout, in_dstImage, dstImageLayout, regionCount, in_pRegions);
}

void VulkanReplayConsumer::Process_vkCmdSetEvent(
    format::HandleId                            commandBuffer,
    format::HandleId                            event,
    VkPipelineStageFlags                        stageMask)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    VkEvent in_event = GetObjectMapper().MapVkEvent(event);

    Dispatcher<format::ApiCallId::ApiCall_vkCmdSetEvent, void, PFN_vkCmdSetEvent>::Dispatch(this, vkCmdSetEvent, in_commandBuffer, in_event, stageMask);
}

void VulkanReplayConsumer::Process_vkCmdResetEvent(
    format::HandleId                            commandBuffer,
    format::HandleId                            event,
    VkPipelineStageFlags                        stageMask)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    VkEvent in_event = GetObjectMapper().MapVkEvent(event);

    Dispatcher<format::ApiCallId::ApiCall_vkCmdResetEvent, void, PFN_vkCmdResetEvent>::Dispatch(this, vkCmdResetEvent, in_commandBuffer, in_event, stageMask);
}

void VulkanReplayConsumer::Process_vkCmdWaitEvents(
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
    const StructPointerDecoder<Decoded_VkImageMemoryBarrier>& pImageMemoryBarriers)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    VkEvent* in_pEvents = pEvents.GetHandlePointer();
    MapHandles<VkEvent>(pEvents.GetPointer(), pEvents.GetLength(), in_pEvents, eventCount, &VulkanObjectMapper::MapVkEvent);
    const VkMemoryBarrier* in_pMemoryBarriers = pMemoryBarriers.GetPointer();
    const VkBufferMemoryBarrier* in_pBufferMemoryBarriers = pBufferMemoryBarriers.GetPointer();
    MapStructArrayHandles(pBufferMemoryBarriers.GetMetaStructPointer(), pBufferMemoryBarriers.GetLength(), GetObjectMapper());
    const VkImageMemoryBarrier* in_pImageMemoryBarriers = pImageMemoryBarriers.GetPointer();
    MapStructArrayHandles(pImageMemoryBarriers.GetMetaStructPointer(), pImageMemoryBarriers.GetLength(), GetObjectMapper());

    Dispatcher<format::ApiCallId::ApiCall_vkCmdWaitEvents, void, PFN_vkCmdWaitEvents>::Dispatch(this, vkCmdWaitEvents, in_commandBuffer, eventCount, in_pEvents, srcStageMask, dstStageMask, memoryBarrierCount, in_pMemoryBarriers, bufferMemoryBarrierCount, in_pBufferMemoryBarriers, imageMemoryBarrierCount, in_pImageMemoryBarriers);
}

void VulkanReplayConsumer::Process_vkCmdPipelineBarrier(
    format::HandleId                            commandBuffer,
    VkPipelineStageFlags                        srcStageMask,
    VkPipelineStageFlags                        dstStageMask,
    VkDependencyFlags                           dependencyFlags,
    uint32_t                                    memoryBarrierCount,
    const StructPointerDecoder<Decoded_VkMemoryBarrier>& pMemoryBarriers,
    uint32_t                                    bufferMemoryBarrierCount,
    const StructPointerDecoder<Decoded_VkBufferMemoryBarrier>& pBufferMemoryBarriers,
    uint32_t                                    imageMemoryBarrierCount,
    const StructPointerDecoder<Decoded_VkImageMemoryBarrier>& pImageMemoryBarriers)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    const VkMemoryBarrier* in_pMemoryBarriers = pMemoryBarriers.GetPointer();
    const VkBufferMemoryBarrier* in_pBufferMemoryBarriers = pBufferMemoryBarriers.GetPointer();
    MapStructArrayHandles(pBufferMemoryBarriers.GetMetaStructPointer(), pBufferMemoryBarriers.GetLength(), GetObjectMapper());
    const VkImageMemoryBarrier* in_pImageMemoryBarriers = pImageMemoryBarriers.GetPointer();
    MapStructArrayHandles(pImageMemoryBarriers.GetMetaStructPointer(), pImageMemoryBarriers.GetLength(), GetObjectMapper());

    Dispatcher<format::ApiCallId::ApiCall_vkCmdPipelineBarrier, void, PFN_vkCmdPipelineBarrier>::Dispatch(this, vkCmdPipelineBarrier, in_commandBuffer, srcStageMask, dstStageMask, dependencyFlags, memoryBarrierCount, in_pMemoryBarriers, bufferMemoryBarrierCount, in_pBufferMemoryBarriers, imageMemoryBarrierCount, in_pImageMemoryBarriers);
}

void VulkanReplayConsumer::Process_vkCmdBeginQuery(
    format::HandleId                            commandBuffer,
    format::HandleId                            queryPool,
    uint32_t                                    query,
    VkQueryControlFlags                         flags)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    VkQueryPool in_queryPool = GetObjectMapper().MapVkQueryPool(queryPool);

    Dispatcher<format::ApiCallId::ApiCall_vkCmdBeginQuery, void, PFN_vkCmdBeginQuery>::Dispatch(this, vkCmdBeginQuery, in_commandBuffer, in_queryPool, query, flags);
}

void VulkanReplayConsumer::Process_vkCmdEndQuery(
    format::HandleId                            commandBuffer,
    format::HandleId                            queryPool,
    uint32_t                                    query)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    VkQueryPool in_queryPool = GetObjectMapper().MapVkQueryPool(queryPool);

    Dispatcher<format::ApiCallId::ApiCall_vkCmdEndQuery, void, PFN_vkCmdEndQuery>::Dispatch(this, vkCmdEndQuery, in_commandBuffer, in_queryPool, query);
}

void VulkanReplayConsumer::Process_vkCmdResetQueryPool(
    format::HandleId                            commandBuffer,
    format::HandleId                            queryPool,
    uint32_t                                    firstQuery,
    uint32_t                                    queryCount)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    VkQueryPool in_queryPool = GetObjectMapper().MapVkQueryPool(queryPool);

    Dispatcher<format::ApiCallId::ApiCall_vkCmdResetQueryPool, void, PFN_vkCmdResetQueryPool>::Dispatch(this, vkCmdResetQueryPool, in_commandBuffer, in_queryPool, firstQuery, queryCount);
}

void VulkanReplayConsumer::Process_vkCmdWriteTimestamp(
    format::HandleId                            commandBuffer,
    VkPipelineStageFlagBits                     pipelineStage,
    format::HandleId                            queryPool,
    uint32_t                                    query)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    VkQueryPool in_queryPool = GetObjectMapper().MapVkQueryPool(queryPool);

    Dispatcher<format::ApiCallId::ApiCall_vkCmdWriteTimestamp, void, PFN_vkCmdWriteTimestamp>::Dispatch(this, vkCmdWriteTimestamp, in_commandBuffer, pipelineStage, in_queryPool, query);
}

void VulkanReplayConsumer::Process_vkCmdCopyQueryPoolResults(
    format::HandleId                            commandBuffer,
    format::HandleId                            queryPool,
    uint32_t                                    firstQuery,
    uint32_t                                    queryCount,
    format::HandleId                            dstBuffer,
    VkDeviceSize                                dstOffset,
    VkDeviceSize                                stride,
    VkQueryResultFlags                          flags)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    VkQueryPool in_queryPool = GetObjectMapper().MapVkQueryPool(queryPool);
    VkBuffer in_dstBuffer = GetObjectMapper().MapVkBuffer(dstBuffer);

    Dispatcher<format::ApiCallId::ApiCall_vkCmdCopyQueryPoolResults, void, PFN_vkCmdCopyQueryPoolResults>::Dispatch(this, vkCmdCopyQueryPoolResults, in_commandBuffer, in_queryPool, firstQuery, queryCount, in_dstBuffer, dstOffset, stride, flags);
}

void VulkanReplayConsumer::Process_vkCmdPushConstants(
    format::HandleId                            commandBuffer,
    format::HandleId                            layout,
    VkShaderStageFlags                          stageFlags,
    uint32_t                                    offset,
    uint32_t                                    size,
    const PointerDecoder<uint8_t>&              pValues)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    VkPipelineLayout in_layout = GetObjectMapper().MapVkPipelineLayout(layout);
    const void* in_pValues = pValues.GetPointer();

    Dispatcher<format::ApiCallId::ApiCall_vkCmdPushConstants, void, PFN_vkCmdPushConstants>::Dispatch(this, vkCmdPushConstants, in_commandBuffer, in_layout, stageFlags, offset, size, in_pValues);
}

void VulkanReplayConsumer::Process_vkCmdBeginRenderPass(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkRenderPassBeginInfo>& pRenderPassBegin,
    VkSubpassContents                           contents)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    const VkRenderPassBeginInfo* in_pRenderPassBegin = pRenderPassBegin.GetPointer();
    MapStructHandles(pRenderPassBegin.GetMetaStructPointer(), GetObjectMapper());

    Dispatcher<format::ApiCallId::ApiCall_vkCmdBeginRenderPass, void, PFN_vkCmdBeginRenderPass>::Dispatch(this, vkCmdBeginRenderPass, in_commandBuffer, in_pRenderPassBegin, contents);
}

void VulkanReplayConsumer::Process_vkCmdNextSubpass(
    format::HandleId                            commandBuffer,
    VkSubpassContents                           contents)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);

    Dispatcher<format::ApiCallId::ApiCall_vkCmdNextSubpass, void, PFN_vkCmdNextSubpass>::Dispatch(this, vkCmdNextSubpass, in_commandBuffer, contents);
}

void VulkanReplayConsumer::Process_vkCmdEndRenderPass(
    format::HandleId                            commandBuffer)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);

    Dispatcher<format::ApiCallId::ApiCall_vkCmdEndRenderPass, void, PFN_vkCmdEndRenderPass>::Dispatch(this, vkCmdEndRenderPass, in_commandBuffer);
}

void VulkanReplayConsumer::Process_vkCmdExecuteCommands(
    format::HandleId                            commandBuffer,
    uint32_t                                    commandBufferCount,
    const HandlePointerDecoder<VkCommandBuffer>& pCommandBuffers)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    VkCommandBuffer* in_pCommandBuffers = pCommandBuffers.GetHandlePointer();
    MapHandles<VkCommandBuffer>(pCommandBuffers.GetPointer(), pCommandBuffers.GetLength(), in_pCommandBuffers, commandBufferCount, &VulkanObjectMapper::MapVkCommandBuffer);

    Dispatcher<format::ApiCallId::ApiCall_vkCmdExecuteCommands, void, PFN_vkCmdExecuteCommands>::Dispatch(this, vkCmdExecuteCommands, in_commandBuffer, commandBufferCount, in_pCommandBuffers);
}

void VulkanReplayConsumer::Process_vkBindBufferMemory2(
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    bindInfoCount,
    const StructPointerDecoder<Decoded_VkBindBufferMemoryInfo>& pBindInfos)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkBindBufferMemoryInfo* in_pBindInfos = pBindInfos.GetPointer();
    MapStructArrayHandles(pBindInfos.GetMetaStructPointer(), pBindInfos.GetLength(), GetObjectMapper());

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkBindBufferMemory2, VkResult, PFN_vkBindBufferMemory2>::Dispatch(this, returnValue, vkBindBufferMemory2, in_device, bindInfoCount, in_pBindInfos);
    CheckResult("vkBindBufferMemory2", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkBindImageMemory2(
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    bindInfoCount,
    const StructPointerDecoder<Decoded_VkBindImageMemoryInfo>& pBindInfos)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkBindImageMemoryInfo* in_pBindInfos = pBindInfos.GetPointer();
    MapStructArrayHandles(pBindInfos.GetMetaStructPointer(), pBindInfos.GetLength(), GetObjectMapper());

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkBindImageMemory2, VkResult, PFN_vkBindImageMemory2>::Dispatch(this, returnValue, vkBindImageMemory2, in_device, bindInfoCount, in_pBindInfos);
    CheckResult("vkBindImageMemory2", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkGetDeviceGroupPeerMemoryFeatures(
    format::HandleId                            device,
    uint32_t                                    heapIndex,
    uint32_t                                    localDeviceIndex,
    uint32_t                                    remoteDeviceIndex,
    const PointerDecoder<VkPeerMemoryFeatureFlags>& pPeerMemoryFeatures)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkPeerMemoryFeatureFlags out_pPeerMemoryFeatures_value = static_cast<VkPeerMemoryFeatureFlags>(0);
    VkPeerMemoryFeatureFlags* out_pPeerMemoryFeatures = &out_pPeerMemoryFeatures_value;

    Dispatcher<format::ApiCallId::ApiCall_vkGetDeviceGroupPeerMemoryFeatures, void, PFN_vkGetDeviceGroupPeerMemoryFeatures>::Dispatch(this, vkGetDeviceGroupPeerMemoryFeatures, in_device, heapIndex, localDeviceIndex, remoteDeviceIndex, out_pPeerMemoryFeatures);
}

void VulkanReplayConsumer::Process_vkCmdSetDeviceMask(
    format::HandleId                            commandBuffer,
    uint32_t                                    deviceMask)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);

    Dispatcher<format::ApiCallId::ApiCall_vkCmdSetDeviceMask, void, PFN_vkCmdSetDeviceMask>::Dispatch(this, vkCmdSetDeviceMask, in_commandBuffer, deviceMask);
}

void VulkanReplayConsumer::Process_vkCmdDispatchBase(
    format::HandleId                            commandBuffer,
    uint32_t                                    baseGroupX,
    uint32_t                                    baseGroupY,
    uint32_t                                    baseGroupZ,
    uint32_t                                    groupCountX,
    uint32_t                                    groupCountY,
    uint32_t                                    groupCountZ)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);

    Dispatcher<format::ApiCallId::ApiCall_vkCmdDispatchBase, void, PFN_vkCmdDispatchBase>::Dispatch(this, vkCmdDispatchBase, in_commandBuffer, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ);
}

void VulkanReplayConsumer::Process_vkEnumeratePhysicalDeviceGroups(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const PointerDecoder<uint32_t>&             pPhysicalDeviceGroupCount,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceGroupProperties>& pPhysicalDeviceGroupProperties)
{
    VkInstance in_instance = GetObjectMapper().MapVkInstance(instance);
    uint32_t out_pPhysicalDeviceGroupCount_value = pPhysicalDeviceGroupCount.IsNull() ? static_cast<uint32_t>(0) : *(pPhysicalDeviceGroupCount.GetPointer());
    uint32_t* out_pPhysicalDeviceGroupCount = &out_pPhysicalDeviceGroupCount_value;
    VkPhysicalDeviceGroupProperties* out_pPhysicalDeviceGroupProperties = pPhysicalDeviceGroupProperties.IsNull() ? nullptr : AllocateArray<VkPhysicalDeviceGroupProperties>(out_pPhysicalDeviceGroupCount_value, VkPhysicalDeviceGroupProperties{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES, nullptr });

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkEnumeratePhysicalDeviceGroups, VkResult, PFN_vkEnumeratePhysicalDeviceGroups>::Dispatch(this, returnValue, vkEnumeratePhysicalDeviceGroups, in_instance, out_pPhysicalDeviceGroupCount, out_pPhysicalDeviceGroupProperties);
    CheckResult("vkEnumeratePhysicalDeviceGroups", returnValue, replay_result);

    FreeArray<VkPhysicalDeviceGroupProperties>(&out_pPhysicalDeviceGroupProperties);
}

void VulkanReplayConsumer::Process_vkGetImageMemoryRequirements2(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImageMemoryRequirementsInfo2>& pInfo,
    const StructPointerDecoder<Decoded_VkMemoryRequirements2>& pMemoryRequirements)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkImageMemoryRequirementsInfo2* in_pInfo = pInfo.GetPointer();
    MapStructHandles(pInfo.GetMetaStructPointer(), GetObjectMapper());
    VkMemoryRequirements2 out_pMemoryRequirements_value = { VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2, nullptr };
    VkMemoryRequirements2* out_pMemoryRequirements = &out_pMemoryRequirements_value;

    Dispatcher<format::ApiCallId::ApiCall_vkGetImageMemoryRequirements2, void, PFN_vkGetImageMemoryRequirements2>::Dispatch(this, vkGetImageMemoryRequirements2, in_device, in_pInfo, out_pMemoryRequirements);
}

void VulkanReplayConsumer::Process_vkGetBufferMemoryRequirements2(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkBufferMemoryRequirementsInfo2>& pInfo,
    const StructPointerDecoder<Decoded_VkMemoryRequirements2>& pMemoryRequirements)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkBufferMemoryRequirementsInfo2* in_pInfo = pInfo.GetPointer();
    MapStructHandles(pInfo.GetMetaStructPointer(), GetObjectMapper());
    VkMemoryRequirements2 out_pMemoryRequirements_value = { VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2, nullptr };
    VkMemoryRequirements2* out_pMemoryRequirements = &out_pMemoryRequirements_value;

    Dispatcher<format::ApiCallId::ApiCall_vkGetBufferMemoryRequirements2, void, PFN_vkGetBufferMemoryRequirements2>::Dispatch(this, vkGetBufferMemoryRequirements2, in_device, in_pInfo, out_pMemoryRequirements);
}

void VulkanReplayConsumer::Process_vkGetImageSparseMemoryRequirements2(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImageSparseMemoryRequirementsInfo2>& pInfo,
    const PointerDecoder<uint32_t>&             pSparseMemoryRequirementCount,
    const StructPointerDecoder<Decoded_VkSparseImageMemoryRequirements2>& pSparseMemoryRequirements)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkImageSparseMemoryRequirementsInfo2* in_pInfo = pInfo.GetPointer();
    MapStructHandles(pInfo.GetMetaStructPointer(), GetObjectMapper());
    uint32_t out_pSparseMemoryRequirementCount_value = pSparseMemoryRequirementCount.IsNull() ? static_cast<uint32_t>(0) : *(pSparseMemoryRequirementCount.GetPointer());
    uint32_t* out_pSparseMemoryRequirementCount = &out_pSparseMemoryRequirementCount_value;
    VkSparseImageMemoryRequirements2* out_pSparseMemoryRequirements = pSparseMemoryRequirements.IsNull() ? nullptr : AllocateArray<VkSparseImageMemoryRequirements2>(out_pSparseMemoryRequirementCount_value, VkSparseImageMemoryRequirements2{ VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2, nullptr });

    Dispatcher<format::ApiCallId::ApiCall_vkGetImageSparseMemoryRequirements2, void, PFN_vkGetImageSparseMemoryRequirements2>::Dispatch(this, vkGetImageSparseMemoryRequirements2, in_device, in_pInfo, out_pSparseMemoryRequirementCount, out_pSparseMemoryRequirements);

    FreeArray<VkSparseImageMemoryRequirements2>(&out_pSparseMemoryRequirements);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceFeatures2(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceFeatures2>& pFeatures)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    VkPhysicalDeviceFeatures2 out_pFeatures_value = { VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2, nullptr };
    VkPhysicalDeviceFeatures2* out_pFeatures = &out_pFeatures_value;

    Dispatcher<format::ApiCallId::ApiCall_vkGetPhysicalDeviceFeatures2, void, PFN_vkGetPhysicalDeviceFeatures2>::Dispatch(this, vkGetPhysicalDeviceFeatures2, in_physicalDevice, out_pFeatures);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceProperties2(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceProperties2>& pProperties)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    VkPhysicalDeviceProperties2 out_pProperties_value = { VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2, nullptr };
    VkPhysicalDeviceProperties2* out_pProperties = &out_pProperties_value;

    Dispatcher<format::ApiCallId::ApiCall_vkGetPhysicalDeviceProperties2, void, PFN_vkGetPhysicalDeviceProperties2>::Dispatch(this, vkGetPhysicalDeviceProperties2, in_physicalDevice, out_pProperties);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceFormatProperties2(
    format::HandleId                            physicalDevice,
    VkFormat                                    format,
    const StructPointerDecoder<Decoded_VkFormatProperties2>& pFormatProperties)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    VkFormatProperties2 out_pFormatProperties_value = { VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2, nullptr };
    VkFormatProperties2* out_pFormatProperties = &out_pFormatProperties_value;

    Dispatcher<format::ApiCallId::ApiCall_vkGetPhysicalDeviceFormatProperties2, void, PFN_vkGetPhysicalDeviceFormatProperties2>::Dispatch(this, vkGetPhysicalDeviceFormatProperties2, in_physicalDevice, format, out_pFormatProperties);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceImageFormatProperties2(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceImageFormatInfo2>& pImageFormatInfo,
    const StructPointerDecoder<Decoded_VkImageFormatProperties2>& pImageFormatProperties)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    const VkPhysicalDeviceImageFormatInfo2* in_pImageFormatInfo = pImageFormatInfo.GetPointer();
    VkImageFormatProperties2 out_pImageFormatProperties_value = { VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2, nullptr };
    VkImageFormatProperties2* out_pImageFormatProperties = &out_pImageFormatProperties_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetPhysicalDeviceImageFormatProperties2, VkResult, PFN_vkGetPhysicalDeviceImageFormatProperties2>::Dispatch(this, returnValue, vkGetPhysicalDeviceImageFormatProperties2, in_physicalDevice, in_pImageFormatInfo, out_pImageFormatProperties);
    CheckResult("vkGetPhysicalDeviceImageFormatProperties2", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceQueueFamilyProperties2(
    format::HandleId                            physicalDevice,
    const PointerDecoder<uint32_t>&             pQueueFamilyPropertyCount,
    const StructPointerDecoder<Decoded_VkQueueFamilyProperties2>& pQueueFamilyProperties)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    uint32_t out_pQueueFamilyPropertyCount_value = pQueueFamilyPropertyCount.IsNull() ? static_cast<uint32_t>(0) : *(pQueueFamilyPropertyCount.GetPointer());
    uint32_t* out_pQueueFamilyPropertyCount = &out_pQueueFamilyPropertyCount_value;
    VkQueueFamilyProperties2* out_pQueueFamilyProperties = pQueueFamilyProperties.IsNull() ? nullptr : AllocateArray<VkQueueFamilyProperties2>(out_pQueueFamilyPropertyCount_value, VkQueueFamilyProperties2{ VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2, nullptr });

    Dispatcher<format::ApiCallId::ApiCall_vkGetPhysicalDeviceQueueFamilyProperties2, void, PFN_vkGetPhysicalDeviceQueueFamilyProperties2>::Dispatch(this, vkGetPhysicalDeviceQueueFamilyProperties2, in_physicalDevice, out_pQueueFamilyPropertyCount, out_pQueueFamilyProperties);

    FreeArray<VkQueueFamilyProperties2>(&out_pQueueFamilyProperties);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceMemoryProperties2(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceMemoryProperties2>& pMemoryProperties)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    VkPhysicalDeviceMemoryProperties2 out_pMemoryProperties_value = { VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2, nullptr };
    VkPhysicalDeviceMemoryProperties2* out_pMemoryProperties = &out_pMemoryProperties_value;

    Dispatcher<format::ApiCallId::ApiCall_vkGetPhysicalDeviceMemoryProperties2, void, PFN_vkGetPhysicalDeviceMemoryProperties2>::Dispatch(this, vkGetPhysicalDeviceMemoryProperties2, in_physicalDevice, out_pMemoryProperties);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceSparseImageFormatProperties2(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceSparseImageFormatInfo2>& pFormatInfo,
    const PointerDecoder<uint32_t>&             pPropertyCount,
    const StructPointerDecoder<Decoded_VkSparseImageFormatProperties2>& pProperties)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    const VkPhysicalDeviceSparseImageFormatInfo2* in_pFormatInfo = pFormatInfo.GetPointer();
    uint32_t out_pPropertyCount_value = pPropertyCount.IsNull() ? static_cast<uint32_t>(0) : *(pPropertyCount.GetPointer());
    uint32_t* out_pPropertyCount = &out_pPropertyCount_value;
    VkSparseImageFormatProperties2* out_pProperties = pProperties.IsNull() ? nullptr : AllocateArray<VkSparseImageFormatProperties2>(out_pPropertyCount_value, VkSparseImageFormatProperties2{ VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2, nullptr });

    Dispatcher<format::ApiCallId::ApiCall_vkGetPhysicalDeviceSparseImageFormatProperties2, void, PFN_vkGetPhysicalDeviceSparseImageFormatProperties2>::Dispatch(this, vkGetPhysicalDeviceSparseImageFormatProperties2, in_physicalDevice, in_pFormatInfo, out_pPropertyCount, out_pProperties);

    FreeArray<VkSparseImageFormatProperties2>(&out_pProperties);
}

void VulkanReplayConsumer::Process_vkTrimCommandPool(
    format::HandleId                            device,
    format::HandleId                            commandPool,
    VkCommandPoolTrimFlags                      flags)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkCommandPool in_commandPool = GetObjectMapper().MapVkCommandPool(commandPool);

    Dispatcher<format::ApiCallId::ApiCall_vkTrimCommandPool, void, PFN_vkTrimCommandPool>::Dispatch(this, vkTrimCommandPool, in_device, in_commandPool, flags);
}

void VulkanReplayConsumer::Process_vkGetDeviceQueue2(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDeviceQueueInfo2>& pQueueInfo,
    const HandlePointerDecoder<VkQueue>&        pQueue)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkDeviceQueueInfo2* in_pQueueInfo = pQueueInfo.GetPointer();
    VkQueue out_pQueue_value = static_cast<VkQueue>(0);
    VkQueue* out_pQueue = &out_pQueue_value;

    Dispatcher<format::ApiCallId::ApiCall_vkGetDeviceQueue2, void, PFN_vkGetDeviceQueue2>::Dispatch(this, vkGetDeviceQueue2, in_device, in_pQueueInfo, out_pQueue);

    AddHandles<VkQueue>(pQueue.GetPointer(), 1, out_pQueue, 1, &VulkanObjectMapper::AddVkQueue);
}

void VulkanReplayConsumer::Process_vkCreateSamplerYcbcrConversion(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSamplerYcbcrConversionCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSamplerYcbcrConversion>& pYcbcrConversion)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkSamplerYcbcrConversionCreateInfo* in_pCreateInfo = pCreateInfo.GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkSamplerYcbcrConversion out_pYcbcrConversion_value = static_cast<VkSamplerYcbcrConversion>(0);
    VkSamplerYcbcrConversion* out_pYcbcrConversion = &out_pYcbcrConversion_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkCreateSamplerYcbcrConversion, VkResult, PFN_vkCreateSamplerYcbcrConversion>::Dispatch(this, returnValue, vkCreateSamplerYcbcrConversion, in_device, in_pCreateInfo, in_pAllocator, out_pYcbcrConversion);
    CheckResult("vkCreateSamplerYcbcrConversion", returnValue, replay_result);

    AddHandles<VkSamplerYcbcrConversion>(pYcbcrConversion.GetPointer(), 1, out_pYcbcrConversion, 1, &VulkanObjectMapper::AddVkSamplerYcbcrConversion);
}

void VulkanReplayConsumer::Process_vkDestroySamplerYcbcrConversion(
    format::HandleId                            device,
    format::HandleId                            ycbcrConversion,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkSamplerYcbcrConversion in_ycbcrConversion = GetObjectMapper().MapVkSamplerYcbcrConversion(ycbcrConversion);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);

    Dispatcher<format::ApiCallId::ApiCall_vkDestroySamplerYcbcrConversion, void, PFN_vkDestroySamplerYcbcrConversion>::Dispatch(this, vkDestroySamplerYcbcrConversion, in_device, in_ycbcrConversion, in_pAllocator);
}

void VulkanReplayConsumer::Process_vkCreateDescriptorUpdateTemplate(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDescriptorUpdateTemplateCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkDescriptorUpdateTemplate>& pDescriptorUpdateTemplate)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkDescriptorUpdateTemplateCreateInfo* in_pCreateInfo = pCreateInfo.GetPointer();
    MapStructHandles(pCreateInfo.GetMetaStructPointer(), GetObjectMapper());
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkDescriptorUpdateTemplate out_pDescriptorUpdateTemplate_value = static_cast<VkDescriptorUpdateTemplate>(0);
    VkDescriptorUpdateTemplate* out_pDescriptorUpdateTemplate = &out_pDescriptorUpdateTemplate_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkCreateDescriptorUpdateTemplate, VkResult, PFN_vkCreateDescriptorUpdateTemplate>::Dispatch(this, returnValue, vkCreateDescriptorUpdateTemplate, in_device, in_pCreateInfo, in_pAllocator, out_pDescriptorUpdateTemplate);
    CheckResult("vkCreateDescriptorUpdateTemplate", returnValue, replay_result);

    AddHandles<VkDescriptorUpdateTemplate>(pDescriptorUpdateTemplate.GetPointer(), 1, out_pDescriptorUpdateTemplate, 1, &VulkanObjectMapper::AddVkDescriptorUpdateTemplate);
}

void VulkanReplayConsumer::Process_vkDestroyDescriptorUpdateTemplate(
    format::HandleId                            device,
    format::HandleId                            descriptorUpdateTemplate,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkDescriptorUpdateTemplate in_descriptorUpdateTemplate = GetObjectMapper().MapVkDescriptorUpdateTemplate(descriptorUpdateTemplate);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);

    Dispatcher<format::ApiCallId::ApiCall_vkDestroyDescriptorUpdateTemplate, void, PFN_vkDestroyDescriptorUpdateTemplate>::Dispatch(this, vkDestroyDescriptorUpdateTemplate, in_device, in_descriptorUpdateTemplate, in_pAllocator);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceExternalBufferProperties(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceExternalBufferInfo>& pExternalBufferInfo,
    const StructPointerDecoder<Decoded_VkExternalBufferProperties>& pExternalBufferProperties)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    const VkPhysicalDeviceExternalBufferInfo* in_pExternalBufferInfo = pExternalBufferInfo.GetPointer();
    VkExternalBufferProperties out_pExternalBufferProperties_value = { VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES, nullptr };
    VkExternalBufferProperties* out_pExternalBufferProperties = &out_pExternalBufferProperties_value;

    Dispatcher<format::ApiCallId::ApiCall_vkGetPhysicalDeviceExternalBufferProperties, void, PFN_vkGetPhysicalDeviceExternalBufferProperties>::Dispatch(this, vkGetPhysicalDeviceExternalBufferProperties, in_physicalDevice, in_pExternalBufferInfo, out_pExternalBufferProperties);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceExternalFenceProperties(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceExternalFenceInfo>& pExternalFenceInfo,
    const StructPointerDecoder<Decoded_VkExternalFenceProperties>& pExternalFenceProperties)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    const VkPhysicalDeviceExternalFenceInfo* in_pExternalFenceInfo = pExternalFenceInfo.GetPointer();
    VkExternalFenceProperties out_pExternalFenceProperties_value = { VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES, nullptr };
    VkExternalFenceProperties* out_pExternalFenceProperties = &out_pExternalFenceProperties_value;

    Dispatcher<format::ApiCallId::ApiCall_vkGetPhysicalDeviceExternalFenceProperties, void, PFN_vkGetPhysicalDeviceExternalFenceProperties>::Dispatch(this, vkGetPhysicalDeviceExternalFenceProperties, in_physicalDevice, in_pExternalFenceInfo, out_pExternalFenceProperties);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceExternalSemaphoreProperties(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceExternalSemaphoreInfo>& pExternalSemaphoreInfo,
    const StructPointerDecoder<Decoded_VkExternalSemaphoreProperties>& pExternalSemaphoreProperties)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    const VkPhysicalDeviceExternalSemaphoreInfo* in_pExternalSemaphoreInfo = pExternalSemaphoreInfo.GetPointer();
    VkExternalSemaphoreProperties out_pExternalSemaphoreProperties_value = { VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES, nullptr };
    VkExternalSemaphoreProperties* out_pExternalSemaphoreProperties = &out_pExternalSemaphoreProperties_value;

    Dispatcher<format::ApiCallId::ApiCall_vkGetPhysicalDeviceExternalSemaphoreProperties, void, PFN_vkGetPhysicalDeviceExternalSemaphoreProperties>::Dispatch(this, vkGetPhysicalDeviceExternalSemaphoreProperties, in_physicalDevice, in_pExternalSemaphoreInfo, out_pExternalSemaphoreProperties);
}

void VulkanReplayConsumer::Process_vkGetDescriptorSetLayoutSupport(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDescriptorSetLayoutCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkDescriptorSetLayoutSupport>& pSupport)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkDescriptorSetLayoutCreateInfo* in_pCreateInfo = pCreateInfo.GetPointer();
    MapStructHandles(pCreateInfo.GetMetaStructPointer(), GetObjectMapper());
    VkDescriptorSetLayoutSupport out_pSupport_value = { VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT, nullptr };
    VkDescriptorSetLayoutSupport* out_pSupport = &out_pSupport_value;

    Dispatcher<format::ApiCallId::ApiCall_vkGetDescriptorSetLayoutSupport, void, PFN_vkGetDescriptorSetLayoutSupport>::Dispatch(this, vkGetDescriptorSetLayoutSupport, in_device, in_pCreateInfo, out_pSupport);
}

void VulkanReplayConsumer::Process_vkDestroySurfaceKHR(
    format::HandleId                            instance,
    format::HandleId                            surface,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    VkInstance in_instance = GetObjectMapper().MapVkInstance(instance);
    VkSurfaceKHR in_surface = GetObjectMapper().MapVkSurfaceKHR(surface);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);

    Dispatcher<format::ApiCallId::ApiCall_vkDestroySurfaceKHR, void, PFN_vkDestroySurfaceKHR>::Dispatch(this, vkDestroySurfaceKHR, in_instance, in_surface, in_pAllocator);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceSurfaceSupportKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    format::HandleId                            surface,
    const PointerDecoder<VkBool32>&             pSupported)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    VkSurfaceKHR in_surface = GetObjectMapper().MapVkSurfaceKHR(surface);
    VkBool32 out_pSupported_value = static_cast<VkBool32>(0);
    VkBool32* out_pSupported = &out_pSupported_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetPhysicalDeviceSurfaceSupportKHR, VkResult, PFN_vkGetPhysicalDeviceSurfaceSupportKHR>::Dispatch(this, returnValue, vkGetPhysicalDeviceSurfaceSupportKHR, in_physicalDevice, queueFamilyIndex, in_surface, out_pSupported);
    CheckResult("vkGetPhysicalDeviceSurfaceSupportKHR", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceSurfaceCapabilitiesKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            surface,
    const StructPointerDecoder<Decoded_VkSurfaceCapabilitiesKHR>& pSurfaceCapabilities)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    VkSurfaceKHR in_surface = GetObjectMapper().MapVkSurfaceKHR(surface);
    VkSurfaceCapabilitiesKHR out_pSurfaceCapabilities_value = {};
    VkSurfaceCapabilitiesKHR* out_pSurfaceCapabilities = &out_pSurfaceCapabilities_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetPhysicalDeviceSurfaceCapabilitiesKHR, VkResult, PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR>::Dispatch(this, returnValue, vkGetPhysicalDeviceSurfaceCapabilitiesKHR, in_physicalDevice, in_surface, out_pSurfaceCapabilities);
    CheckResult("vkGetPhysicalDeviceSurfaceCapabilitiesKHR", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceSurfaceFormatsKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            surface,
    const PointerDecoder<uint32_t>&             pSurfaceFormatCount,
    const StructPointerDecoder<Decoded_VkSurfaceFormatKHR>& pSurfaceFormats)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    VkSurfaceKHR in_surface = GetObjectMapper().MapVkSurfaceKHR(surface);
    uint32_t out_pSurfaceFormatCount_value = pSurfaceFormatCount.IsNull() ? static_cast<uint32_t>(0) : *(pSurfaceFormatCount.GetPointer());
    uint32_t* out_pSurfaceFormatCount = &out_pSurfaceFormatCount_value;
    VkSurfaceFormatKHR* out_pSurfaceFormats = pSurfaceFormats.IsNull() ? nullptr : AllocateArray<VkSurfaceFormatKHR>(out_pSurfaceFormatCount_value);

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetPhysicalDeviceSurfaceFormatsKHR, VkResult, PFN_vkGetPhysicalDeviceSurfaceFormatsKHR>::Dispatch(this, returnValue, vkGetPhysicalDeviceSurfaceFormatsKHR, in_physicalDevice, in_surface, out_pSurfaceFormatCount, out_pSurfaceFormats);
    CheckResult("vkGetPhysicalDeviceSurfaceFormatsKHR", returnValue, replay_result);

    FreeArray<VkSurfaceFormatKHR>(&out_pSurfaceFormats);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceSurfacePresentModesKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            surface,
    const PointerDecoder<uint32_t>&             pPresentModeCount,
    const PointerDecoder<VkPresentModeKHR>&     pPresentModes)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    VkSurfaceKHR in_surface = GetObjectMapper().MapVkSurfaceKHR(surface);
    uint32_t out_pPresentModeCount_value = pPresentModeCount.IsNull() ? static_cast<uint32_t>(0) : *(pPresentModeCount.GetPointer());
    uint32_t* out_pPresentModeCount = &out_pPresentModeCount_value;
    VkPresentModeKHR* out_pPresentModes = pPresentModes.IsNull() ? nullptr : AllocateArray<VkPresentModeKHR>(out_pPresentModeCount_value);

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetPhysicalDeviceSurfacePresentModesKHR, VkResult, PFN_vkGetPhysicalDeviceSurfacePresentModesKHR>::Dispatch(this, returnValue, vkGetPhysicalDeviceSurfacePresentModesKHR, in_physicalDevice, in_surface, out_pPresentModeCount, out_pPresentModes);
    CheckResult("vkGetPhysicalDeviceSurfacePresentModesKHR", returnValue, replay_result);

    FreeArray<VkPresentModeKHR>(&out_pPresentModes);
}

void VulkanReplayConsumer::Process_vkCreateSwapchainKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSwapchainCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSwapchainKHR>& pSwapchain)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkSwapchainCreateInfoKHR* in_pCreateInfo = pCreateInfo.GetPointer();
    MapStructHandles(pCreateInfo.GetMetaStructPointer(), GetObjectMapper());
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkSwapchainKHR out_pSwapchain_value = static_cast<VkSwapchainKHR>(0);
    VkSwapchainKHR* out_pSwapchain = &out_pSwapchain_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkCreateSwapchainKHR, VkResult, PFN_vkCreateSwapchainKHR>::Dispatch(this, returnValue, vkCreateSwapchainKHR, in_device, in_pCreateInfo, in_pAllocator, out_pSwapchain);
    CheckResult("vkCreateSwapchainKHR", returnValue, replay_result);

    AddHandles<VkSwapchainKHR>(pSwapchain.GetPointer(), 1, out_pSwapchain, 1, &VulkanObjectMapper::AddVkSwapchainKHR);
}

void VulkanReplayConsumer::Process_vkDestroySwapchainKHR(
    format::HandleId                            device,
    format::HandleId                            swapchain,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkSwapchainKHR in_swapchain = GetObjectMapper().MapVkSwapchainKHR(swapchain);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);

    Dispatcher<format::ApiCallId::ApiCall_vkDestroySwapchainKHR, void, PFN_vkDestroySwapchainKHR>::Dispatch(this, vkDestroySwapchainKHR, in_device, in_swapchain, in_pAllocator);
}

void VulkanReplayConsumer::Process_vkGetSwapchainImagesKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain,
    const PointerDecoder<uint32_t>&             pSwapchainImageCount,
    const HandlePointerDecoder<VkImage>&        pSwapchainImages)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkSwapchainKHR in_swapchain = GetObjectMapper().MapVkSwapchainKHR(swapchain);
    uint32_t out_pSwapchainImageCount_value = pSwapchainImageCount.IsNull() ? static_cast<uint32_t>(0) : *(pSwapchainImageCount.GetPointer());
    uint32_t* out_pSwapchainImageCount = &out_pSwapchainImageCount_value;
    VkImage* out_pSwapchainImages = pSwapchainImages.GetHandlePointer();

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetSwapchainImagesKHR, VkResult, PFN_vkGetSwapchainImagesKHR>::Dispatch(this, returnValue, vkGetSwapchainImagesKHR, in_device, in_swapchain, out_pSwapchainImageCount, out_pSwapchainImages);
    CheckResult("vkGetSwapchainImagesKHR", returnValue, replay_result);

    AddHandles<VkImage>(pSwapchainImages.GetPointer(), pSwapchainImages.GetLength(), out_pSwapchainImages, out_pSwapchainImageCount_value, &VulkanObjectMapper::AddVkImage);
}

void VulkanReplayConsumer::Process_vkAcquireNextImageKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain,
    uint64_t                                    timeout,
    format::HandleId                            semaphore,
    format::HandleId                            fence,
    const PointerDecoder<uint32_t>&             pImageIndex)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkSwapchainKHR in_swapchain = GetObjectMapper().MapVkSwapchainKHR(swapchain);
    VkSemaphore in_semaphore = GetObjectMapper().MapVkSemaphore(semaphore);
    VkFence in_fence = GetObjectMapper().MapVkFence(fence);
    uint32_t out_pImageIndex_value = static_cast<uint32_t>(0);
    uint32_t* out_pImageIndex = &out_pImageIndex_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkAcquireNextImageKHR, VkResult, PFN_vkAcquireNextImageKHR>::Dispatch(this, returnValue, vkAcquireNextImageKHR, in_device, in_swapchain, timeout, in_semaphore, in_fence, out_pImageIndex);
    CheckResult("vkAcquireNextImageKHR", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkQueuePresentKHR(
    VkResult                                    returnValue,
    format::HandleId                            queue,
    const StructPointerDecoder<Decoded_VkPresentInfoKHR>& pPresentInfo)
{
    VkQueue in_queue = GetObjectMapper().MapVkQueue(queue);
    const VkPresentInfoKHR* in_pPresentInfo = pPresentInfo.GetPointer();
    MapStructHandles(pPresentInfo.GetMetaStructPointer(), GetObjectMapper());

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkQueuePresentKHR, VkResult, PFN_vkQueuePresentKHR>::Dispatch(this, returnValue, vkQueuePresentKHR, in_queue, in_pPresentInfo);
    CheckResult("vkQueuePresentKHR", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkGetDeviceGroupPresentCapabilitiesKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDeviceGroupPresentCapabilitiesKHR>& pDeviceGroupPresentCapabilities)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkDeviceGroupPresentCapabilitiesKHR out_pDeviceGroupPresentCapabilities_value = { VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR, nullptr };
    VkDeviceGroupPresentCapabilitiesKHR* out_pDeviceGroupPresentCapabilities = &out_pDeviceGroupPresentCapabilities_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetDeviceGroupPresentCapabilitiesKHR, VkResult, PFN_vkGetDeviceGroupPresentCapabilitiesKHR>::Dispatch(this, returnValue, vkGetDeviceGroupPresentCapabilitiesKHR, in_device, out_pDeviceGroupPresentCapabilities);
    CheckResult("vkGetDeviceGroupPresentCapabilitiesKHR", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkGetDeviceGroupSurfacePresentModesKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            surface,
    const PointerDecoder<VkDeviceGroupPresentModeFlagsKHR>& pModes)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkSurfaceKHR in_surface = GetObjectMapper().MapVkSurfaceKHR(surface);
    VkDeviceGroupPresentModeFlagsKHR out_pModes_value = static_cast<VkDeviceGroupPresentModeFlagsKHR>(0);
    VkDeviceGroupPresentModeFlagsKHR* out_pModes = &out_pModes_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetDeviceGroupSurfacePresentModesKHR, VkResult, PFN_vkGetDeviceGroupSurfacePresentModesKHR>::Dispatch(this, returnValue, vkGetDeviceGroupSurfacePresentModesKHR, in_device, in_surface, out_pModes);
    CheckResult("vkGetDeviceGroupSurfacePresentModesKHR", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDevicePresentRectanglesKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            surface,
    const PointerDecoder<uint32_t>&             pRectCount,
    const StructPointerDecoder<Decoded_VkRect2D>& pRects)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    VkSurfaceKHR in_surface = GetObjectMapper().MapVkSurfaceKHR(surface);
    uint32_t out_pRectCount_value = pRectCount.IsNull() ? static_cast<uint32_t>(0) : *(pRectCount.GetPointer());
    uint32_t* out_pRectCount = &out_pRectCount_value;
    VkRect2D* out_pRects = pRects.IsNull() ? nullptr : AllocateArray<VkRect2D>(out_pRectCount_value);

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetPhysicalDevicePresentRectanglesKHR, VkResult, PFN_vkGetPhysicalDevicePresentRectanglesKHR>::Dispatch(this, returnValue, vkGetPhysicalDevicePresentRectanglesKHR, in_physicalDevice, in_surface, out_pRectCount, out_pRects);
    CheckResult("vkGetPhysicalDevicePresentRectanglesKHR", returnValue, replay_result);

    FreeArray<VkRect2D>(&out_pRects);
}

void VulkanReplayConsumer::Process_vkAcquireNextImage2KHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkAcquireNextImageInfoKHR>& pAcquireInfo,
    const PointerDecoder<uint32_t>&             pImageIndex)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkAcquireNextImageInfoKHR* in_pAcquireInfo = pAcquireInfo.GetPointer();
    MapStructHandles(pAcquireInfo.GetMetaStructPointer(), GetObjectMapper());
    uint32_t out_pImageIndex_value = static_cast<uint32_t>(0);
    uint32_t* out_pImageIndex = &out_pImageIndex_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkAcquireNextImage2KHR, VkResult, PFN_vkAcquireNextImage2KHR>::Dispatch(this, returnValue, vkAcquireNextImage2KHR, in_device, in_pAcquireInfo, out_pImageIndex);
    CheckResult("vkAcquireNextImage2KHR", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceDisplayPropertiesKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const PointerDecoder<uint32_t>&             pPropertyCount,
    const StructPointerDecoder<Decoded_VkDisplayPropertiesKHR>& pProperties)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    uint32_t out_pPropertyCount_value = pPropertyCount.IsNull() ? static_cast<uint32_t>(0) : *(pPropertyCount.GetPointer());
    uint32_t* out_pPropertyCount = &out_pPropertyCount_value;
    VkDisplayPropertiesKHR* out_pProperties = pProperties.IsNull() ? nullptr : AllocateArray<VkDisplayPropertiesKHR>(out_pPropertyCount_value);

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetPhysicalDeviceDisplayPropertiesKHR, VkResult, PFN_vkGetPhysicalDeviceDisplayPropertiesKHR>::Dispatch(this, returnValue, vkGetPhysicalDeviceDisplayPropertiesKHR, in_physicalDevice, out_pPropertyCount, out_pProperties);
    CheckResult("vkGetPhysicalDeviceDisplayPropertiesKHR", returnValue, replay_result);

    FreeArray<VkDisplayPropertiesKHR>(&out_pProperties);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceDisplayPlanePropertiesKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const PointerDecoder<uint32_t>&             pPropertyCount,
    const StructPointerDecoder<Decoded_VkDisplayPlanePropertiesKHR>& pProperties)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    uint32_t out_pPropertyCount_value = pPropertyCount.IsNull() ? static_cast<uint32_t>(0) : *(pPropertyCount.GetPointer());
    uint32_t* out_pPropertyCount = &out_pPropertyCount_value;
    VkDisplayPlanePropertiesKHR* out_pProperties = pProperties.IsNull() ? nullptr : AllocateArray<VkDisplayPlanePropertiesKHR>(out_pPropertyCount_value);

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetPhysicalDeviceDisplayPlanePropertiesKHR, VkResult, PFN_vkGetPhysicalDeviceDisplayPlanePropertiesKHR>::Dispatch(this, returnValue, vkGetPhysicalDeviceDisplayPlanePropertiesKHR, in_physicalDevice, out_pPropertyCount, out_pProperties);
    CheckResult("vkGetPhysicalDeviceDisplayPlanePropertiesKHR", returnValue, replay_result);

    FreeArray<VkDisplayPlanePropertiesKHR>(&out_pProperties);
}

void VulkanReplayConsumer::Process_vkGetDisplayPlaneSupportedDisplaysKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    uint32_t                                    planeIndex,
    const PointerDecoder<uint32_t>&             pDisplayCount,
    const HandlePointerDecoder<VkDisplayKHR>&   pDisplays)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    uint32_t out_pDisplayCount_value = pDisplayCount.IsNull() ? static_cast<uint32_t>(0) : *(pDisplayCount.GetPointer());
    uint32_t* out_pDisplayCount = &out_pDisplayCount_value;
    VkDisplayKHR* out_pDisplays = pDisplays.GetHandlePointer();

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetDisplayPlaneSupportedDisplaysKHR, VkResult, PFN_vkGetDisplayPlaneSupportedDisplaysKHR>::Dispatch(this, returnValue, vkGetDisplayPlaneSupportedDisplaysKHR, in_physicalDevice, planeIndex, out_pDisplayCount, out_pDisplays);
    CheckResult("vkGetDisplayPlaneSupportedDisplaysKHR", returnValue, replay_result);

    AddHandles<VkDisplayKHR>(pDisplays.GetPointer(), pDisplays.GetLength(), out_pDisplays, out_pDisplayCount_value, &VulkanObjectMapper::AddVkDisplayKHR);
}

void VulkanReplayConsumer::Process_vkGetDisplayModePropertiesKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            display,
    const PointerDecoder<uint32_t>&             pPropertyCount,
    const StructPointerDecoder<Decoded_VkDisplayModePropertiesKHR>& pProperties)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    VkDisplayKHR in_display = GetObjectMapper().MapVkDisplayKHR(display);
    uint32_t out_pPropertyCount_value = pPropertyCount.IsNull() ? static_cast<uint32_t>(0) : *(pPropertyCount.GetPointer());
    uint32_t* out_pPropertyCount = &out_pPropertyCount_value;
    VkDisplayModePropertiesKHR* out_pProperties = pProperties.IsNull() ? nullptr : AllocateArray<VkDisplayModePropertiesKHR>(out_pPropertyCount_value);

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetDisplayModePropertiesKHR, VkResult, PFN_vkGetDisplayModePropertiesKHR>::Dispatch(this, returnValue, vkGetDisplayModePropertiesKHR, in_physicalDevice, in_display, out_pPropertyCount, out_pProperties);
    CheckResult("vkGetDisplayModePropertiesKHR", returnValue, replay_result);

    FreeArray<VkDisplayModePropertiesKHR>(&out_pProperties);
}

void VulkanReplayConsumer::Process_vkCreateDisplayModeKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            display,
    const StructPointerDecoder<Decoded_VkDisplayModeCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkDisplayModeKHR>& pMode)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    VkDisplayKHR in_display = GetObjectMapper().MapVkDisplayKHR(display);
    const VkDisplayModeCreateInfoKHR* in_pCreateInfo = pCreateInfo.GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkDisplayModeKHR out_pMode_value = static_cast<VkDisplayModeKHR>(0);
    VkDisplayModeKHR* out_pMode = &out_pMode_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkCreateDisplayModeKHR, VkResult, PFN_vkCreateDisplayModeKHR>::Dispatch(this, returnValue, vkCreateDisplayModeKHR, in_physicalDevice, in_display, in_pCreateInfo, in_pAllocator, out_pMode);
    CheckResult("vkCreateDisplayModeKHR", returnValue, replay_result);

    AddHandles<VkDisplayModeKHR>(pMode.GetPointer(), 1, out_pMode, 1, &VulkanObjectMapper::AddVkDisplayModeKHR);
}

void VulkanReplayConsumer::Process_vkGetDisplayPlaneCapabilitiesKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            mode,
    uint32_t                                    planeIndex,
    const StructPointerDecoder<Decoded_VkDisplayPlaneCapabilitiesKHR>& pCapabilities)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    VkDisplayModeKHR in_mode = GetObjectMapper().MapVkDisplayModeKHR(mode);
    VkDisplayPlaneCapabilitiesKHR out_pCapabilities_value = {};
    VkDisplayPlaneCapabilitiesKHR* out_pCapabilities = &out_pCapabilities_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetDisplayPlaneCapabilitiesKHR, VkResult, PFN_vkGetDisplayPlaneCapabilitiesKHR>::Dispatch(this, returnValue, vkGetDisplayPlaneCapabilitiesKHR, in_physicalDevice, in_mode, planeIndex, out_pCapabilities);
    CheckResult("vkGetDisplayPlaneCapabilitiesKHR", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkCreateDisplayPlaneSurfaceKHR(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkDisplaySurfaceCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    VkInstance in_instance = GetObjectMapper().MapVkInstance(instance);
    const VkDisplaySurfaceCreateInfoKHR* in_pCreateInfo = pCreateInfo.GetPointer();
    MapStructHandles(pCreateInfo.GetMetaStructPointer(), GetObjectMapper());
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkSurfaceKHR out_pSurface_value = static_cast<VkSurfaceKHR>(0);
    VkSurfaceKHR* out_pSurface = &out_pSurface_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkCreateDisplayPlaneSurfaceKHR, VkResult, PFN_vkCreateDisplayPlaneSurfaceKHR>::Dispatch(this, returnValue, vkCreateDisplayPlaneSurfaceKHR, in_instance, in_pCreateInfo, in_pAllocator, out_pSurface);
    CheckResult("vkCreateDisplayPlaneSurfaceKHR", returnValue, replay_result);

    AddHandles<VkSurfaceKHR>(pSurface.GetPointer(), 1, out_pSurface, 1, &VulkanObjectMapper::AddVkSurfaceKHR);
}

void VulkanReplayConsumer::Process_vkCreateSharedSwapchainsKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    swapchainCount,
    const StructPointerDecoder<Decoded_VkSwapchainCreateInfoKHR>& pCreateInfos,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSwapchainKHR>& pSwapchains)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkSwapchainCreateInfoKHR* in_pCreateInfos = pCreateInfos.GetPointer();
    MapStructArrayHandles(pCreateInfos.GetMetaStructPointer(), pCreateInfos.GetLength(), GetObjectMapper());
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkSwapchainKHR* out_pSwapchains = pSwapchains.GetHandlePointer();

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkCreateSharedSwapchainsKHR, VkResult, PFN_vkCreateSharedSwapchainsKHR>::Dispatch(this, returnValue, vkCreateSharedSwapchainsKHR, in_device, swapchainCount, in_pCreateInfos, in_pAllocator, out_pSwapchains);
    CheckResult("vkCreateSharedSwapchainsKHR", returnValue, replay_result);

    AddHandles<VkSwapchainKHR>(pSwapchains.GetPointer(), pSwapchains.GetLength(), out_pSwapchains, swapchainCount, &VulkanObjectMapper::AddVkSwapchainKHR);
}

void VulkanReplayConsumer::Process_vkCreateXlibSurfaceKHR(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkXlibSurfaceCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    VkInstance in_instance = GetObjectMapper().MapVkInstance(instance);
    const VkXlibSurfaceCreateInfoKHR* in_pCreateInfo = pCreateInfo.GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkSurfaceKHR out_pSurface_value = static_cast<VkSurfaceKHR>(0);
    VkSurfaceKHR* out_pSurface = &out_pSurface_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkCreateXlibSurfaceKHR, VkResult, PFN_vkCreateXlibSurfaceKHR>::Dispatch(this, returnValue, vkCreateXlibSurfaceKHR, in_instance, in_pCreateInfo, in_pAllocator, out_pSurface);
    CheckResult("vkCreateXlibSurfaceKHR", returnValue, replay_result);

    AddHandles<VkSurfaceKHR>(pSurface.GetPointer(), 1, out_pSurface, 1, &VulkanObjectMapper::AddVkSurfaceKHR);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceXlibPresentationSupportKHR(
    VkBool32                                    returnValue,
    format::HandleId                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    uint64_t                                    dpy,
    size_t                                      visualID)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    Display* in_dpy = static_cast<Display*>(PreProcessExternalObject(dpy, format::ApiCallId::ApiCall_vkGetPhysicalDeviceXlibPresentationSupportKHR, "vkGetPhysicalDeviceXlibPresentationSupportKHR"));

    Dispatcher<format::ApiCallId::ApiCall_vkGetPhysicalDeviceXlibPresentationSupportKHR, VkBool32, PFN_vkGetPhysicalDeviceXlibPresentationSupportKHR>::Dispatch(this, vkGetPhysicalDeviceXlibPresentationSupportKHR, in_physicalDevice, queueFamilyIndex, in_dpy, visualID);
}

void VulkanReplayConsumer::Process_vkCreateXcbSurfaceKHR(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkXcbSurfaceCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    VkInstance in_instance = GetObjectMapper().MapVkInstance(instance);
    const VkXcbSurfaceCreateInfoKHR* in_pCreateInfo = pCreateInfo.GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkSurfaceKHR out_pSurface_value = static_cast<VkSurfaceKHR>(0);
    VkSurfaceKHR* out_pSurface = &out_pSurface_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkCreateXcbSurfaceKHR, VkResult, PFN_vkCreateXcbSurfaceKHR>::Dispatch(this, returnValue, vkCreateXcbSurfaceKHR, in_instance, in_pCreateInfo, in_pAllocator, out_pSurface);
    CheckResult("vkCreateXcbSurfaceKHR", returnValue, replay_result);

    AddHandles<VkSurfaceKHR>(pSurface.GetPointer(), 1, out_pSurface, 1, &VulkanObjectMapper::AddVkSurfaceKHR);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceXcbPresentationSupportKHR(
    VkBool32                                    returnValue,
    format::HandleId                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    uint64_t                                    connection,
    uint32_t                                    visual_id)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    xcb_connection_t* in_connection = static_cast<xcb_connection_t*>(PreProcessExternalObject(connection, format::ApiCallId::ApiCall_vkGetPhysicalDeviceXcbPresentationSupportKHR, "vkGetPhysicalDeviceXcbPresentationSupportKHR"));

    Dispatcher<format::ApiCallId::ApiCall_vkGetPhysicalDeviceXcbPresentationSupportKHR, VkBool32, PFN_vkGetPhysicalDeviceXcbPresentationSupportKHR>::Dispatch(this, vkGetPhysicalDeviceXcbPresentationSupportKHR, in_physicalDevice, queueFamilyIndex, in_connection, visual_id);
}

void VulkanReplayConsumer::Process_vkCreateWaylandSurfaceKHR(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkWaylandSurfaceCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    VkInstance in_instance = GetObjectMapper().MapVkInstance(instance);
    const VkWaylandSurfaceCreateInfoKHR* in_pCreateInfo = pCreateInfo.GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkSurfaceKHR out_pSurface_value = static_cast<VkSurfaceKHR>(0);
    VkSurfaceKHR* out_pSurface = &out_pSurface_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkCreateWaylandSurfaceKHR, VkResult, PFN_vkCreateWaylandSurfaceKHR>::Dispatch(this, returnValue, vkCreateWaylandSurfaceKHR, in_instance, in_pCreateInfo, in_pAllocator, out_pSurface);
    CheckResult("vkCreateWaylandSurfaceKHR", returnValue, replay_result);

    AddHandles<VkSurfaceKHR>(pSurface.GetPointer(), 1, out_pSurface, 1, &VulkanObjectMapper::AddVkSurfaceKHR);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceWaylandPresentationSupportKHR(
    VkBool32                                    returnValue,
    format::HandleId                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    uint64_t                                    display)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    struct wl_display* in_display = static_cast<struct wl_display*>(PreProcessExternalObject(display, format::ApiCallId::ApiCall_vkGetPhysicalDeviceWaylandPresentationSupportKHR, "vkGetPhysicalDeviceWaylandPresentationSupportKHR"));

    Dispatcher<format::ApiCallId::ApiCall_vkGetPhysicalDeviceWaylandPresentationSupportKHR, VkBool32, PFN_vkGetPhysicalDeviceWaylandPresentationSupportKHR>::Dispatch(this, vkGetPhysicalDeviceWaylandPresentationSupportKHR, in_physicalDevice, queueFamilyIndex, in_display);
}

void VulkanReplayConsumer::Process_vkCreateAndroidSurfaceKHR(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkAndroidSurfaceCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    VkInstance in_instance = GetObjectMapper().MapVkInstance(instance);
    const VkAndroidSurfaceCreateInfoKHR* in_pCreateInfo = pCreateInfo.GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkSurfaceKHR out_pSurface_value = static_cast<VkSurfaceKHR>(0);
    VkSurfaceKHR* out_pSurface = &out_pSurface_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkCreateAndroidSurfaceKHR, VkResult, PFN_vkCreateAndroidSurfaceKHR>::Dispatch(this, returnValue, vkCreateAndroidSurfaceKHR, in_instance, in_pCreateInfo, in_pAllocator, out_pSurface);
    CheckResult("vkCreateAndroidSurfaceKHR", returnValue, replay_result);

    AddHandles<VkSurfaceKHR>(pSurface.GetPointer(), 1, out_pSurface, 1, &VulkanObjectMapper::AddVkSurfaceKHR);
}

void VulkanReplayConsumer::Process_vkCreateWin32SurfaceKHR(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkWin32SurfaceCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    VkInstance in_instance = GetObjectMapper().MapVkInstance(instance);
    const VkWin32SurfaceCreateInfoKHR* in_pCreateInfo = pCreateInfo.GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkSurfaceKHR out_pSurface_value = static_cast<VkSurfaceKHR>(0);
    VkSurfaceKHR* out_pSurface = &out_pSurface_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkCreateWin32SurfaceKHR, VkResult, PFN_vkCreateWin32SurfaceKHR>::Dispatch(this, returnValue, vkCreateWin32SurfaceKHR, in_instance, in_pCreateInfo, in_pAllocator, out_pSurface);
    CheckResult("vkCreateWin32SurfaceKHR", returnValue, replay_result);

    AddHandles<VkSurfaceKHR>(pSurface.GetPointer(), 1, out_pSurface, 1, &VulkanObjectMapper::AddVkSurfaceKHR);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceWin32PresentationSupportKHR(
    VkBool32                                    returnValue,
    format::HandleId                            physicalDevice,
    uint32_t                                    queueFamilyIndex)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);

    Dispatcher<format::ApiCallId::ApiCall_vkGetPhysicalDeviceWin32PresentationSupportKHR, VkBool32, PFN_vkGetPhysicalDeviceWin32PresentationSupportKHR>::Dispatch(this, vkGetPhysicalDeviceWin32PresentationSupportKHR, in_physicalDevice, queueFamilyIndex);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceFeatures2KHR(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceFeatures2>& pFeatures)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    VkPhysicalDeviceFeatures2 out_pFeatures_value = { VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2, nullptr };
    VkPhysicalDeviceFeatures2* out_pFeatures = &out_pFeatures_value;

    Dispatcher<format::ApiCallId::ApiCall_vkGetPhysicalDeviceFeatures2KHR, void, PFN_vkGetPhysicalDeviceFeatures2KHR>::Dispatch(this, vkGetPhysicalDeviceFeatures2KHR, in_physicalDevice, out_pFeatures);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceProperties2KHR(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceProperties2>& pProperties)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    VkPhysicalDeviceProperties2 out_pProperties_value = { VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2, nullptr };
    VkPhysicalDeviceProperties2* out_pProperties = &out_pProperties_value;

    Dispatcher<format::ApiCallId::ApiCall_vkGetPhysicalDeviceProperties2KHR, void, PFN_vkGetPhysicalDeviceProperties2KHR>::Dispatch(this, vkGetPhysicalDeviceProperties2KHR, in_physicalDevice, out_pProperties);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceFormatProperties2KHR(
    format::HandleId                            physicalDevice,
    VkFormat                                    format,
    const StructPointerDecoder<Decoded_VkFormatProperties2>& pFormatProperties)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    VkFormatProperties2 out_pFormatProperties_value = { VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2, nullptr };
    VkFormatProperties2* out_pFormatProperties = &out_pFormatProperties_value;

    Dispatcher<format::ApiCallId::ApiCall_vkGetPhysicalDeviceFormatProperties2KHR, void, PFN_vkGetPhysicalDeviceFormatProperties2KHR>::Dispatch(this, vkGetPhysicalDeviceFormatProperties2KHR, in_physicalDevice, format, out_pFormatProperties);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceImageFormatProperties2KHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceImageFormatInfo2>& pImageFormatInfo,
    const StructPointerDecoder<Decoded_VkImageFormatProperties2>& pImageFormatProperties)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    const VkPhysicalDeviceImageFormatInfo2* in_pImageFormatInfo = pImageFormatInfo.GetPointer();
    VkImageFormatProperties2 out_pImageFormatProperties_value = { VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2, nullptr };
    VkImageFormatProperties2* out_pImageFormatProperties = &out_pImageFormatProperties_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetPhysicalDeviceImageFormatProperties2KHR, VkResult, PFN_vkGetPhysicalDeviceImageFormatProperties2KHR>::Dispatch(this, returnValue, vkGetPhysicalDeviceImageFormatProperties2KHR, in_physicalDevice, in_pImageFormatInfo, out_pImageFormatProperties);
    CheckResult("vkGetPhysicalDeviceImageFormatProperties2KHR", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceQueueFamilyProperties2KHR(
    format::HandleId                            physicalDevice,
    const PointerDecoder<uint32_t>&             pQueueFamilyPropertyCount,
    const StructPointerDecoder<Decoded_VkQueueFamilyProperties2>& pQueueFamilyProperties)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    uint32_t out_pQueueFamilyPropertyCount_value = pQueueFamilyPropertyCount.IsNull() ? static_cast<uint32_t>(0) : *(pQueueFamilyPropertyCount.GetPointer());
    uint32_t* out_pQueueFamilyPropertyCount = &out_pQueueFamilyPropertyCount_value;
    VkQueueFamilyProperties2* out_pQueueFamilyProperties = pQueueFamilyProperties.IsNull() ? nullptr : AllocateArray<VkQueueFamilyProperties2>(out_pQueueFamilyPropertyCount_value, VkQueueFamilyProperties2{ VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2, nullptr });

    Dispatcher<format::ApiCallId::ApiCall_vkGetPhysicalDeviceQueueFamilyProperties2KHR, void, PFN_vkGetPhysicalDeviceQueueFamilyProperties2KHR>::Dispatch(this, vkGetPhysicalDeviceQueueFamilyProperties2KHR, in_physicalDevice, out_pQueueFamilyPropertyCount, out_pQueueFamilyProperties);

    FreeArray<VkQueueFamilyProperties2>(&out_pQueueFamilyProperties);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceMemoryProperties2KHR(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceMemoryProperties2>& pMemoryProperties)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    VkPhysicalDeviceMemoryProperties2 out_pMemoryProperties_value = { VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2, nullptr };
    VkPhysicalDeviceMemoryProperties2* out_pMemoryProperties = &out_pMemoryProperties_value;

    Dispatcher<format::ApiCallId::ApiCall_vkGetPhysicalDeviceMemoryProperties2KHR, void, PFN_vkGetPhysicalDeviceMemoryProperties2KHR>::Dispatch(this, vkGetPhysicalDeviceMemoryProperties2KHR, in_physicalDevice, out_pMemoryProperties);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceSparseImageFormatProperties2KHR(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceSparseImageFormatInfo2>& pFormatInfo,
    const PointerDecoder<uint32_t>&             pPropertyCount,
    const StructPointerDecoder<Decoded_VkSparseImageFormatProperties2>& pProperties)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    const VkPhysicalDeviceSparseImageFormatInfo2* in_pFormatInfo = pFormatInfo.GetPointer();
    uint32_t out_pPropertyCount_value = pPropertyCount.IsNull() ? static_cast<uint32_t>(0) : *(pPropertyCount.GetPointer());
    uint32_t* out_pPropertyCount = &out_pPropertyCount_value;
    VkSparseImageFormatProperties2* out_pProperties = pProperties.IsNull() ? nullptr : AllocateArray<VkSparseImageFormatProperties2>(out_pPropertyCount_value, VkSparseImageFormatProperties2{ VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2, nullptr });

    Dispatcher<format::ApiCallId::ApiCall_vkGetPhysicalDeviceSparseImageFormatProperties2KHR, void, PFN_vkGetPhysicalDeviceSparseImageFormatProperties2KHR>::Dispatch(this, vkGetPhysicalDeviceSparseImageFormatProperties2KHR, in_physicalDevice, in_pFormatInfo, out_pPropertyCount, out_pProperties);

    FreeArray<VkSparseImageFormatProperties2>(&out_pProperties);
}

void VulkanReplayConsumer::Process_vkGetDeviceGroupPeerMemoryFeaturesKHR(
    format::HandleId                            device,
    uint32_t                                    heapIndex,
    uint32_t                                    localDeviceIndex,
    uint32_t                                    remoteDeviceIndex,
    const PointerDecoder<VkPeerMemoryFeatureFlags>& pPeerMemoryFeatures)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkPeerMemoryFeatureFlags out_pPeerMemoryFeatures_value = static_cast<VkPeerMemoryFeatureFlags>(0);
    VkPeerMemoryFeatureFlags* out_pPeerMemoryFeatures = &out_pPeerMemoryFeatures_value;

    Dispatcher<format::ApiCallId::ApiCall_vkGetDeviceGroupPeerMemoryFeaturesKHR, void, PFN_vkGetDeviceGroupPeerMemoryFeaturesKHR>::Dispatch(this, vkGetDeviceGroupPeerMemoryFeaturesKHR, in_device, heapIndex, localDeviceIndex, remoteDeviceIndex, out_pPeerMemoryFeatures);
}

void VulkanReplayConsumer::Process_vkCmdSetDeviceMaskKHR(
    format::HandleId                            commandBuffer,
    uint32_t                                    deviceMask)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);

    Dispatcher<format::ApiCallId::ApiCall_vkCmdSetDeviceMaskKHR, void, PFN_vkCmdSetDeviceMaskKHR>::Dispatch(this, vkCmdSetDeviceMaskKHR, in_commandBuffer, deviceMask);
}

void VulkanReplayConsumer::Process_vkCmdDispatchBaseKHR(
    format::HandleId                            commandBuffer,
    uint32_t                                    baseGroupX,
    uint32_t                                    baseGroupY,
    uint32_t                                    baseGroupZ,
    uint32_t                                    groupCountX,
    uint32_t                                    groupCountY,
    uint32_t                                    groupCountZ)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);

    Dispatcher<format::ApiCallId::ApiCall_vkCmdDispatchBaseKHR, void, PFN_vkCmdDispatchBaseKHR>::Dispatch(this, vkCmdDispatchBaseKHR, in_commandBuffer, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ);
}

void VulkanReplayConsumer::Process_vkTrimCommandPoolKHR(
    format::HandleId                            device,
    format::HandleId                            commandPool,
    VkCommandPoolTrimFlags                      flags)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkCommandPool in_commandPool = GetObjectMapper().MapVkCommandPool(commandPool);

    Dispatcher<format::ApiCallId::ApiCall_vkTrimCommandPoolKHR, void, PFN_vkTrimCommandPoolKHR>::Dispatch(this, vkTrimCommandPoolKHR, in_device, in_commandPool, flags);
}

void VulkanReplayConsumer::Process_vkEnumeratePhysicalDeviceGroupsKHR(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const PointerDecoder<uint32_t>&             pPhysicalDeviceGroupCount,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceGroupProperties>& pPhysicalDeviceGroupProperties)
{
    VkInstance in_instance = GetObjectMapper().MapVkInstance(instance);
    uint32_t out_pPhysicalDeviceGroupCount_value = pPhysicalDeviceGroupCount.IsNull() ? static_cast<uint32_t>(0) : *(pPhysicalDeviceGroupCount.GetPointer());
    uint32_t* out_pPhysicalDeviceGroupCount = &out_pPhysicalDeviceGroupCount_value;
    VkPhysicalDeviceGroupProperties* out_pPhysicalDeviceGroupProperties = pPhysicalDeviceGroupProperties.IsNull() ? nullptr : AllocateArray<VkPhysicalDeviceGroupProperties>(out_pPhysicalDeviceGroupCount_value, VkPhysicalDeviceGroupProperties{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES, nullptr });

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkEnumeratePhysicalDeviceGroupsKHR, VkResult, PFN_vkEnumeratePhysicalDeviceGroupsKHR>::Dispatch(this, returnValue, vkEnumeratePhysicalDeviceGroupsKHR, in_instance, out_pPhysicalDeviceGroupCount, out_pPhysicalDeviceGroupProperties);
    CheckResult("vkEnumeratePhysicalDeviceGroupsKHR", returnValue, replay_result);

    FreeArray<VkPhysicalDeviceGroupProperties>(&out_pPhysicalDeviceGroupProperties);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceExternalBufferPropertiesKHR(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceExternalBufferInfo>& pExternalBufferInfo,
    const StructPointerDecoder<Decoded_VkExternalBufferProperties>& pExternalBufferProperties)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    const VkPhysicalDeviceExternalBufferInfo* in_pExternalBufferInfo = pExternalBufferInfo.GetPointer();
    VkExternalBufferProperties out_pExternalBufferProperties_value = { VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES, nullptr };
    VkExternalBufferProperties* out_pExternalBufferProperties = &out_pExternalBufferProperties_value;

    Dispatcher<format::ApiCallId::ApiCall_vkGetPhysicalDeviceExternalBufferPropertiesKHR, void, PFN_vkGetPhysicalDeviceExternalBufferPropertiesKHR>::Dispatch(this, vkGetPhysicalDeviceExternalBufferPropertiesKHR, in_physicalDevice, in_pExternalBufferInfo, out_pExternalBufferProperties);
}

void VulkanReplayConsumer::Process_vkGetMemoryWin32HandleKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkMemoryGetWin32HandleInfoKHR>& pGetWin32HandleInfo,
    const PointerDecoder<uint64_t>&             pHandle)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkMemoryGetWin32HandleInfoKHR* in_pGetWin32HandleInfo = pGetWin32HandleInfo.GetPointer();
    MapStructHandles(pGetWin32HandleInfo.GetMetaStructPointer(), GetObjectMapper());
    HANDLE out_pHandle_value = nullptr;
    HANDLE* out_pHandle = &out_pHandle_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetMemoryWin32HandleKHR, VkResult, PFN_vkGetMemoryWin32HandleKHR>::Dispatch(this, returnValue, vkGetMemoryWin32HandleKHR, in_device, in_pGetWin32HandleInfo, out_pHandle);
    CheckResult("vkGetMemoryWin32HandleKHR", returnValue, replay_result);

    PostProcessExternalObject(pHandle, static_cast<void*>(out_pHandle_value), format::ApiCallId::ApiCall_vkGetMemoryWin32HandleKHR, "vkGetMemoryWin32HandleKHR");
}

void VulkanReplayConsumer::Process_vkGetMemoryWin32HandlePropertiesKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    VkExternalMemoryHandleTypeFlagBits          handleType,
    uint64_t                                    handle,
    const StructPointerDecoder<Decoded_VkMemoryWin32HandlePropertiesKHR>& pMemoryWin32HandleProperties)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    HANDLE in_handle = static_cast<HANDLE>(PreProcessExternalObject(handle, format::ApiCallId::ApiCall_vkGetMemoryWin32HandlePropertiesKHR, "vkGetMemoryWin32HandlePropertiesKHR"));
    VkMemoryWin32HandlePropertiesKHR out_pMemoryWin32HandleProperties_value = { VK_STRUCTURE_TYPE_MEMORY_WIN32_HANDLE_PROPERTIES_KHR, nullptr };
    VkMemoryWin32HandlePropertiesKHR* out_pMemoryWin32HandleProperties = &out_pMemoryWin32HandleProperties_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetMemoryWin32HandlePropertiesKHR, VkResult, PFN_vkGetMemoryWin32HandlePropertiesKHR>::Dispatch(this, returnValue, vkGetMemoryWin32HandlePropertiesKHR, in_device, handleType, in_handle, out_pMemoryWin32HandleProperties);
    CheckResult("vkGetMemoryWin32HandlePropertiesKHR", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkGetMemoryFdKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkMemoryGetFdInfoKHR>& pGetFdInfo,
    const PointerDecoder<int>&                  pFd)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkMemoryGetFdInfoKHR* in_pGetFdInfo = pGetFdInfo.GetPointer();
    MapStructHandles(pGetFdInfo.GetMetaStructPointer(), GetObjectMapper());
    int out_pFd_value = static_cast<int>(0);
    int* out_pFd = &out_pFd_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetMemoryFdKHR, VkResult, PFN_vkGetMemoryFdKHR>::Dispatch(this, returnValue, vkGetMemoryFdKHR, in_device, in_pGetFdInfo, out_pFd);
    CheckResult("vkGetMemoryFdKHR", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkGetMemoryFdPropertiesKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    VkExternalMemoryHandleTypeFlagBits          handleType,
    int                                         fd,
    const StructPointerDecoder<Decoded_VkMemoryFdPropertiesKHR>& pMemoryFdProperties)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkMemoryFdPropertiesKHR out_pMemoryFdProperties_value = { VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR, nullptr };
    VkMemoryFdPropertiesKHR* out_pMemoryFdProperties = &out_pMemoryFdProperties_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetMemoryFdPropertiesKHR, VkResult, PFN_vkGetMemoryFdPropertiesKHR>::Dispatch(this, returnValue, vkGetMemoryFdPropertiesKHR, in_device, handleType, fd, out_pMemoryFdProperties);
    CheckResult("vkGetMemoryFdPropertiesKHR", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceExternalSemaphoreInfo>& pExternalSemaphoreInfo,
    const StructPointerDecoder<Decoded_VkExternalSemaphoreProperties>& pExternalSemaphoreProperties)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    const VkPhysicalDeviceExternalSemaphoreInfo* in_pExternalSemaphoreInfo = pExternalSemaphoreInfo.GetPointer();
    VkExternalSemaphoreProperties out_pExternalSemaphoreProperties_value = { VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES, nullptr };
    VkExternalSemaphoreProperties* out_pExternalSemaphoreProperties = &out_pExternalSemaphoreProperties_value;

    Dispatcher<format::ApiCallId::ApiCall_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR, void, PFN_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR>::Dispatch(this, vkGetPhysicalDeviceExternalSemaphorePropertiesKHR, in_physicalDevice, in_pExternalSemaphoreInfo, out_pExternalSemaphoreProperties);
}

void VulkanReplayConsumer::Process_vkImportSemaphoreWin32HandleKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImportSemaphoreWin32HandleInfoKHR>& pImportSemaphoreWin32HandleInfo)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkImportSemaphoreWin32HandleInfoKHR* in_pImportSemaphoreWin32HandleInfo = pImportSemaphoreWin32HandleInfo.GetPointer();
    MapStructHandles(pImportSemaphoreWin32HandleInfo.GetMetaStructPointer(), GetObjectMapper());

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkImportSemaphoreWin32HandleKHR, VkResult, PFN_vkImportSemaphoreWin32HandleKHR>::Dispatch(this, returnValue, vkImportSemaphoreWin32HandleKHR, in_device, in_pImportSemaphoreWin32HandleInfo);
    CheckResult("vkImportSemaphoreWin32HandleKHR", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkGetSemaphoreWin32HandleKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSemaphoreGetWin32HandleInfoKHR>& pGetWin32HandleInfo,
    const PointerDecoder<uint64_t>&             pHandle)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkSemaphoreGetWin32HandleInfoKHR* in_pGetWin32HandleInfo = pGetWin32HandleInfo.GetPointer();
    MapStructHandles(pGetWin32HandleInfo.GetMetaStructPointer(), GetObjectMapper());
    HANDLE out_pHandle_value = nullptr;
    HANDLE* out_pHandle = &out_pHandle_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetSemaphoreWin32HandleKHR, VkResult, PFN_vkGetSemaphoreWin32HandleKHR>::Dispatch(this, returnValue, vkGetSemaphoreWin32HandleKHR, in_device, in_pGetWin32HandleInfo, out_pHandle);
    CheckResult("vkGetSemaphoreWin32HandleKHR", returnValue, replay_result);

    PostProcessExternalObject(pHandle, static_cast<void*>(out_pHandle_value), format::ApiCallId::ApiCall_vkGetSemaphoreWin32HandleKHR, "vkGetSemaphoreWin32HandleKHR");
}

void VulkanReplayConsumer::Process_vkImportSemaphoreFdKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImportSemaphoreFdInfoKHR>& pImportSemaphoreFdInfo)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkImportSemaphoreFdInfoKHR* in_pImportSemaphoreFdInfo = pImportSemaphoreFdInfo.GetPointer();
    MapStructHandles(pImportSemaphoreFdInfo.GetMetaStructPointer(), GetObjectMapper());

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkImportSemaphoreFdKHR, VkResult, PFN_vkImportSemaphoreFdKHR>::Dispatch(this, returnValue, vkImportSemaphoreFdKHR, in_device, in_pImportSemaphoreFdInfo);
    CheckResult("vkImportSemaphoreFdKHR", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkGetSemaphoreFdKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSemaphoreGetFdInfoKHR>& pGetFdInfo,
    const PointerDecoder<int>&                  pFd)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkSemaphoreGetFdInfoKHR* in_pGetFdInfo = pGetFdInfo.GetPointer();
    MapStructHandles(pGetFdInfo.GetMetaStructPointer(), GetObjectMapper());
    int out_pFd_value = static_cast<int>(0);
    int* out_pFd = &out_pFd_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetSemaphoreFdKHR, VkResult, PFN_vkGetSemaphoreFdKHR>::Dispatch(this, returnValue, vkGetSemaphoreFdKHR, in_device, in_pGetFdInfo, out_pFd);
    CheckResult("vkGetSemaphoreFdKHR", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkCmdPushDescriptorSetKHR(
    format::HandleId                            commandBuffer,
    VkPipelineBindPoint                         pipelineBindPoint,
    format::HandleId                            layout,
    uint32_t                                    set,
    uint32_t                                    descriptorWriteCount,
    const StructPointerDecoder<Decoded_VkWriteDescriptorSet>& pDescriptorWrites)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    VkPipelineLayout in_layout = GetObjectMapper().MapVkPipelineLayout(layout);
    const VkWriteDescriptorSet* in_pDescriptorWrites = pDescriptorWrites.GetPointer();
    MapStructArrayHandles(pDescriptorWrites.GetMetaStructPointer(), pDescriptorWrites.GetLength(), GetObjectMapper());

    Dispatcher<format::ApiCallId::ApiCall_vkCmdPushDescriptorSetKHR, void, PFN_vkCmdPushDescriptorSetKHR>::Dispatch(this, vkCmdPushDescriptorSetKHR, in_commandBuffer, pipelineBindPoint, in_layout, set, descriptorWriteCount, in_pDescriptorWrites);
}

void VulkanReplayConsumer::Process_vkCreateDescriptorUpdateTemplateKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDescriptorUpdateTemplateCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkDescriptorUpdateTemplate>& pDescriptorUpdateTemplate)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkDescriptorUpdateTemplateCreateInfo* in_pCreateInfo = pCreateInfo.GetPointer();
    MapStructHandles(pCreateInfo.GetMetaStructPointer(), GetObjectMapper());
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkDescriptorUpdateTemplate out_pDescriptorUpdateTemplate_value = static_cast<VkDescriptorUpdateTemplate>(0);
    VkDescriptorUpdateTemplate* out_pDescriptorUpdateTemplate = &out_pDescriptorUpdateTemplate_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkCreateDescriptorUpdateTemplateKHR, VkResult, PFN_vkCreateDescriptorUpdateTemplateKHR>::Dispatch(this, returnValue, vkCreateDescriptorUpdateTemplateKHR, in_device, in_pCreateInfo, in_pAllocator, out_pDescriptorUpdateTemplate);
    CheckResult("vkCreateDescriptorUpdateTemplateKHR", returnValue, replay_result);

    AddHandles<VkDescriptorUpdateTemplate>(pDescriptorUpdateTemplate.GetPointer(), 1, out_pDescriptorUpdateTemplate, 1, &VulkanObjectMapper::AddVkDescriptorUpdateTemplate);
}

void VulkanReplayConsumer::Process_vkDestroyDescriptorUpdateTemplateKHR(
    format::HandleId                            device,
    format::HandleId                            descriptorUpdateTemplate,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkDescriptorUpdateTemplate in_descriptorUpdateTemplate = GetObjectMapper().MapVkDescriptorUpdateTemplate(descriptorUpdateTemplate);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);

    Dispatcher<format::ApiCallId::ApiCall_vkDestroyDescriptorUpdateTemplateKHR, void, PFN_vkDestroyDescriptorUpdateTemplateKHR>::Dispatch(this, vkDestroyDescriptorUpdateTemplateKHR, in_device, in_descriptorUpdateTemplate, in_pAllocator);
}

void VulkanReplayConsumer::Process_vkCreateRenderPass2KHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkRenderPassCreateInfo2KHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkRenderPass>&   pRenderPass)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkRenderPassCreateInfo2KHR* in_pCreateInfo = pCreateInfo.GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkRenderPass out_pRenderPass_value = static_cast<VkRenderPass>(0);
    VkRenderPass* out_pRenderPass = &out_pRenderPass_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkCreateRenderPass2KHR, VkResult, PFN_vkCreateRenderPass2KHR>::Dispatch(this, returnValue, vkCreateRenderPass2KHR, in_device, in_pCreateInfo, in_pAllocator, out_pRenderPass);
    CheckResult("vkCreateRenderPass2KHR", returnValue, replay_result);

    AddHandles<VkRenderPass>(pRenderPass.GetPointer(), 1, out_pRenderPass, 1, &VulkanObjectMapper::AddVkRenderPass);
}

void VulkanReplayConsumer::Process_vkCmdBeginRenderPass2KHR(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkRenderPassBeginInfo>& pRenderPassBegin,
    const StructPointerDecoder<Decoded_VkSubpassBeginInfoKHR>& pSubpassBeginInfo)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    const VkRenderPassBeginInfo* in_pRenderPassBegin = pRenderPassBegin.GetPointer();
    MapStructHandles(pRenderPassBegin.GetMetaStructPointer(), GetObjectMapper());
    const VkSubpassBeginInfoKHR* in_pSubpassBeginInfo = pSubpassBeginInfo.GetPointer();

    Dispatcher<format::ApiCallId::ApiCall_vkCmdBeginRenderPass2KHR, void, PFN_vkCmdBeginRenderPass2KHR>::Dispatch(this, vkCmdBeginRenderPass2KHR, in_commandBuffer, in_pRenderPassBegin, in_pSubpassBeginInfo);
}

void VulkanReplayConsumer::Process_vkCmdNextSubpass2KHR(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkSubpassBeginInfoKHR>& pSubpassBeginInfo,
    const StructPointerDecoder<Decoded_VkSubpassEndInfoKHR>& pSubpassEndInfo)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    const VkSubpassBeginInfoKHR* in_pSubpassBeginInfo = pSubpassBeginInfo.GetPointer();
    const VkSubpassEndInfoKHR* in_pSubpassEndInfo = pSubpassEndInfo.GetPointer();

    Dispatcher<format::ApiCallId::ApiCall_vkCmdNextSubpass2KHR, void, PFN_vkCmdNextSubpass2KHR>::Dispatch(this, vkCmdNextSubpass2KHR, in_commandBuffer, in_pSubpassBeginInfo, in_pSubpassEndInfo);
}

void VulkanReplayConsumer::Process_vkCmdEndRenderPass2KHR(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkSubpassEndInfoKHR>& pSubpassEndInfo)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    const VkSubpassEndInfoKHR* in_pSubpassEndInfo = pSubpassEndInfo.GetPointer();

    Dispatcher<format::ApiCallId::ApiCall_vkCmdEndRenderPass2KHR, void, PFN_vkCmdEndRenderPass2KHR>::Dispatch(this, vkCmdEndRenderPass2KHR, in_commandBuffer, in_pSubpassEndInfo);
}

void VulkanReplayConsumer::Process_vkGetSwapchainStatusKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkSwapchainKHR in_swapchain = GetObjectMapper().MapVkSwapchainKHR(swapchain);

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetSwapchainStatusKHR, VkResult, PFN_vkGetSwapchainStatusKHR>::Dispatch(this, returnValue, vkGetSwapchainStatusKHR, in_device, in_swapchain);
    CheckResult("vkGetSwapchainStatusKHR", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceExternalFencePropertiesKHR(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceExternalFenceInfo>& pExternalFenceInfo,
    const StructPointerDecoder<Decoded_VkExternalFenceProperties>& pExternalFenceProperties)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    const VkPhysicalDeviceExternalFenceInfo* in_pExternalFenceInfo = pExternalFenceInfo.GetPointer();
    VkExternalFenceProperties out_pExternalFenceProperties_value = { VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES, nullptr };
    VkExternalFenceProperties* out_pExternalFenceProperties = &out_pExternalFenceProperties_value;

    Dispatcher<format::ApiCallId::ApiCall_vkGetPhysicalDeviceExternalFencePropertiesKHR, void, PFN_vkGetPhysicalDeviceExternalFencePropertiesKHR>::Dispatch(this, vkGetPhysicalDeviceExternalFencePropertiesKHR, in_physicalDevice, in_pExternalFenceInfo, out_pExternalFenceProperties);
}

void VulkanReplayConsumer::Process_vkImportFenceWin32HandleKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImportFenceWin32HandleInfoKHR>& pImportFenceWin32HandleInfo)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkImportFenceWin32HandleInfoKHR* in_pImportFenceWin32HandleInfo = pImportFenceWin32HandleInfo.GetPointer();
    MapStructHandles(pImportFenceWin32HandleInfo.GetMetaStructPointer(), GetObjectMapper());

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkImportFenceWin32HandleKHR, VkResult, PFN_vkImportFenceWin32HandleKHR>::Dispatch(this, returnValue, vkImportFenceWin32HandleKHR, in_device, in_pImportFenceWin32HandleInfo);
    CheckResult("vkImportFenceWin32HandleKHR", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkGetFenceWin32HandleKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkFenceGetWin32HandleInfoKHR>& pGetWin32HandleInfo,
    const PointerDecoder<uint64_t>&             pHandle)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkFenceGetWin32HandleInfoKHR* in_pGetWin32HandleInfo = pGetWin32HandleInfo.GetPointer();
    MapStructHandles(pGetWin32HandleInfo.GetMetaStructPointer(), GetObjectMapper());
    HANDLE out_pHandle_value = nullptr;
    HANDLE* out_pHandle = &out_pHandle_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetFenceWin32HandleKHR, VkResult, PFN_vkGetFenceWin32HandleKHR>::Dispatch(this, returnValue, vkGetFenceWin32HandleKHR, in_device, in_pGetWin32HandleInfo, out_pHandle);
    CheckResult("vkGetFenceWin32HandleKHR", returnValue, replay_result);

    PostProcessExternalObject(pHandle, static_cast<void*>(out_pHandle_value), format::ApiCallId::ApiCall_vkGetFenceWin32HandleKHR, "vkGetFenceWin32HandleKHR");
}

void VulkanReplayConsumer::Process_vkImportFenceFdKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImportFenceFdInfoKHR>& pImportFenceFdInfo)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkImportFenceFdInfoKHR* in_pImportFenceFdInfo = pImportFenceFdInfo.GetPointer();
    MapStructHandles(pImportFenceFdInfo.GetMetaStructPointer(), GetObjectMapper());

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkImportFenceFdKHR, VkResult, PFN_vkImportFenceFdKHR>::Dispatch(this, returnValue, vkImportFenceFdKHR, in_device, in_pImportFenceFdInfo);
    CheckResult("vkImportFenceFdKHR", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkGetFenceFdKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkFenceGetFdInfoKHR>& pGetFdInfo,
    const PointerDecoder<int>&                  pFd)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkFenceGetFdInfoKHR* in_pGetFdInfo = pGetFdInfo.GetPointer();
    MapStructHandles(pGetFdInfo.GetMetaStructPointer(), GetObjectMapper());
    int out_pFd_value = static_cast<int>(0);
    int* out_pFd = &out_pFd_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetFenceFdKHR, VkResult, PFN_vkGetFenceFdKHR>::Dispatch(this, returnValue, vkGetFenceFdKHR, in_device, in_pGetFdInfo, out_pFd);
    CheckResult("vkGetFenceFdKHR", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceSurfaceCapabilities2KHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceSurfaceInfo2KHR>& pSurfaceInfo,
    const StructPointerDecoder<Decoded_VkSurfaceCapabilities2KHR>& pSurfaceCapabilities)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    const VkPhysicalDeviceSurfaceInfo2KHR* in_pSurfaceInfo = pSurfaceInfo.GetPointer();
    MapStructHandles(pSurfaceInfo.GetMetaStructPointer(), GetObjectMapper());
    VkSurfaceCapabilities2KHR out_pSurfaceCapabilities_value = { VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_KHR, nullptr };
    VkSurfaceCapabilities2KHR* out_pSurfaceCapabilities = &out_pSurfaceCapabilities_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetPhysicalDeviceSurfaceCapabilities2KHR, VkResult, PFN_vkGetPhysicalDeviceSurfaceCapabilities2KHR>::Dispatch(this, returnValue, vkGetPhysicalDeviceSurfaceCapabilities2KHR, in_physicalDevice, in_pSurfaceInfo, out_pSurfaceCapabilities);
    CheckResult("vkGetPhysicalDeviceSurfaceCapabilities2KHR", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceSurfaceFormats2KHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceSurfaceInfo2KHR>& pSurfaceInfo,
    const PointerDecoder<uint32_t>&             pSurfaceFormatCount,
    const StructPointerDecoder<Decoded_VkSurfaceFormat2KHR>& pSurfaceFormats)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    const VkPhysicalDeviceSurfaceInfo2KHR* in_pSurfaceInfo = pSurfaceInfo.GetPointer();
    MapStructHandles(pSurfaceInfo.GetMetaStructPointer(), GetObjectMapper());
    uint32_t out_pSurfaceFormatCount_value = pSurfaceFormatCount.IsNull() ? static_cast<uint32_t>(0) : *(pSurfaceFormatCount.GetPointer());
    uint32_t* out_pSurfaceFormatCount = &out_pSurfaceFormatCount_value;
    VkSurfaceFormat2KHR* out_pSurfaceFormats = pSurfaceFormats.IsNull() ? nullptr : AllocateArray<VkSurfaceFormat2KHR>(out_pSurfaceFormatCount_value, VkSurfaceFormat2KHR{ VK_STRUCTURE_TYPE_SURFACE_FORMAT_2_KHR, nullptr });

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetPhysicalDeviceSurfaceFormats2KHR, VkResult, PFN_vkGetPhysicalDeviceSurfaceFormats2KHR>::Dispatch(this, returnValue, vkGetPhysicalDeviceSurfaceFormats2KHR, in_physicalDevice, in_pSurfaceInfo, out_pSurfaceFormatCount, out_pSurfaceFormats);
    CheckResult("vkGetPhysicalDeviceSurfaceFormats2KHR", returnValue, replay_result);

    FreeArray<VkSurfaceFormat2KHR>(&out_pSurfaceFormats);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceDisplayProperties2KHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const PointerDecoder<uint32_t>&             pPropertyCount,
    const StructPointerDecoder<Decoded_VkDisplayProperties2KHR>& pProperties)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    uint32_t out_pPropertyCount_value = pPropertyCount.IsNull() ? static_cast<uint32_t>(0) : *(pPropertyCount.GetPointer());
    uint32_t* out_pPropertyCount = &out_pPropertyCount_value;
    VkDisplayProperties2KHR* out_pProperties = pProperties.IsNull() ? nullptr : AllocateArray<VkDisplayProperties2KHR>(out_pPropertyCount_value, VkDisplayProperties2KHR{ VK_STRUCTURE_TYPE_DISPLAY_PROPERTIES_2_KHR, nullptr });

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetPhysicalDeviceDisplayProperties2KHR, VkResult, PFN_vkGetPhysicalDeviceDisplayProperties2KHR>::Dispatch(this, returnValue, vkGetPhysicalDeviceDisplayProperties2KHR, in_physicalDevice, out_pPropertyCount, out_pProperties);
    CheckResult("vkGetPhysicalDeviceDisplayProperties2KHR", returnValue, replay_result);

    FreeArray<VkDisplayProperties2KHR>(&out_pProperties);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceDisplayPlaneProperties2KHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const PointerDecoder<uint32_t>&             pPropertyCount,
    const StructPointerDecoder<Decoded_VkDisplayPlaneProperties2KHR>& pProperties)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    uint32_t out_pPropertyCount_value = pPropertyCount.IsNull() ? static_cast<uint32_t>(0) : *(pPropertyCount.GetPointer());
    uint32_t* out_pPropertyCount = &out_pPropertyCount_value;
    VkDisplayPlaneProperties2KHR* out_pProperties = pProperties.IsNull() ? nullptr : AllocateArray<VkDisplayPlaneProperties2KHR>(out_pPropertyCount_value, VkDisplayPlaneProperties2KHR{ VK_STRUCTURE_TYPE_DISPLAY_PLANE_PROPERTIES_2_KHR, nullptr });

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetPhysicalDeviceDisplayPlaneProperties2KHR, VkResult, PFN_vkGetPhysicalDeviceDisplayPlaneProperties2KHR>::Dispatch(this, returnValue, vkGetPhysicalDeviceDisplayPlaneProperties2KHR, in_physicalDevice, out_pPropertyCount, out_pProperties);
    CheckResult("vkGetPhysicalDeviceDisplayPlaneProperties2KHR", returnValue, replay_result);

    FreeArray<VkDisplayPlaneProperties2KHR>(&out_pProperties);
}

void VulkanReplayConsumer::Process_vkGetDisplayModeProperties2KHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            display,
    const PointerDecoder<uint32_t>&             pPropertyCount,
    const StructPointerDecoder<Decoded_VkDisplayModeProperties2KHR>& pProperties)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    VkDisplayKHR in_display = GetObjectMapper().MapVkDisplayKHR(display);
    uint32_t out_pPropertyCount_value = pPropertyCount.IsNull() ? static_cast<uint32_t>(0) : *(pPropertyCount.GetPointer());
    uint32_t* out_pPropertyCount = &out_pPropertyCount_value;
    VkDisplayModeProperties2KHR* out_pProperties = pProperties.IsNull() ? nullptr : AllocateArray<VkDisplayModeProperties2KHR>(out_pPropertyCount_value, VkDisplayModeProperties2KHR{ VK_STRUCTURE_TYPE_DISPLAY_MODE_PROPERTIES_2_KHR, nullptr });

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetDisplayModeProperties2KHR, VkResult, PFN_vkGetDisplayModeProperties2KHR>::Dispatch(this, returnValue, vkGetDisplayModeProperties2KHR, in_physicalDevice, in_display, out_pPropertyCount, out_pProperties);
    CheckResult("vkGetDisplayModeProperties2KHR", returnValue, replay_result);

    FreeArray<VkDisplayModeProperties2KHR>(&out_pProperties);
}

void VulkanReplayConsumer::Process_vkGetDisplayPlaneCapabilities2KHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkDisplayPlaneInfo2KHR>& pDisplayPlaneInfo,
    const StructPointerDecoder<Decoded_VkDisplayPlaneCapabilities2KHR>& pCapabilities)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    const VkDisplayPlaneInfo2KHR* in_pDisplayPlaneInfo = pDisplayPlaneInfo.GetPointer();
    MapStructHandles(pDisplayPlaneInfo.GetMetaStructPointer(), GetObjectMapper());
    VkDisplayPlaneCapabilities2KHR out_pCapabilities_value = { VK_STRUCTURE_TYPE_DISPLAY_PLANE_CAPABILITIES_2_KHR, nullptr };
    VkDisplayPlaneCapabilities2KHR* out_pCapabilities = &out_pCapabilities_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetDisplayPlaneCapabilities2KHR, VkResult, PFN_vkGetDisplayPlaneCapabilities2KHR>::Dispatch(this, returnValue, vkGetDisplayPlaneCapabilities2KHR, in_physicalDevice, in_pDisplayPlaneInfo, out_pCapabilities);
    CheckResult("vkGetDisplayPlaneCapabilities2KHR", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkGetImageMemoryRequirements2KHR(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImageMemoryRequirementsInfo2>& pInfo,
    const StructPointerDecoder<Decoded_VkMemoryRequirements2>& pMemoryRequirements)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkImageMemoryRequirementsInfo2* in_pInfo = pInfo.GetPointer();
    MapStructHandles(pInfo.GetMetaStructPointer(), GetObjectMapper());
    VkMemoryRequirements2 out_pMemoryRequirements_value = { VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2, nullptr };
    VkMemoryRequirements2* out_pMemoryRequirements = &out_pMemoryRequirements_value;

    Dispatcher<format::ApiCallId::ApiCall_vkGetImageMemoryRequirements2KHR, void, PFN_vkGetImageMemoryRequirements2KHR>::Dispatch(this, vkGetImageMemoryRequirements2KHR, in_device, in_pInfo, out_pMemoryRequirements);
}

void VulkanReplayConsumer::Process_vkGetBufferMemoryRequirements2KHR(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkBufferMemoryRequirementsInfo2>& pInfo,
    const StructPointerDecoder<Decoded_VkMemoryRequirements2>& pMemoryRequirements)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkBufferMemoryRequirementsInfo2* in_pInfo = pInfo.GetPointer();
    MapStructHandles(pInfo.GetMetaStructPointer(), GetObjectMapper());
    VkMemoryRequirements2 out_pMemoryRequirements_value = { VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2, nullptr };
    VkMemoryRequirements2* out_pMemoryRequirements = &out_pMemoryRequirements_value;

    Dispatcher<format::ApiCallId::ApiCall_vkGetBufferMemoryRequirements2KHR, void, PFN_vkGetBufferMemoryRequirements2KHR>::Dispatch(this, vkGetBufferMemoryRequirements2KHR, in_device, in_pInfo, out_pMemoryRequirements);
}

void VulkanReplayConsumer::Process_vkGetImageSparseMemoryRequirements2KHR(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImageSparseMemoryRequirementsInfo2>& pInfo,
    const PointerDecoder<uint32_t>&             pSparseMemoryRequirementCount,
    const StructPointerDecoder<Decoded_VkSparseImageMemoryRequirements2>& pSparseMemoryRequirements)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkImageSparseMemoryRequirementsInfo2* in_pInfo = pInfo.GetPointer();
    MapStructHandles(pInfo.GetMetaStructPointer(), GetObjectMapper());
    uint32_t out_pSparseMemoryRequirementCount_value = pSparseMemoryRequirementCount.IsNull() ? static_cast<uint32_t>(0) : *(pSparseMemoryRequirementCount.GetPointer());
    uint32_t* out_pSparseMemoryRequirementCount = &out_pSparseMemoryRequirementCount_value;
    VkSparseImageMemoryRequirements2* out_pSparseMemoryRequirements = pSparseMemoryRequirements.IsNull() ? nullptr : AllocateArray<VkSparseImageMemoryRequirements2>(out_pSparseMemoryRequirementCount_value, VkSparseImageMemoryRequirements2{ VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2, nullptr });

    Dispatcher<format::ApiCallId::ApiCall_vkGetImageSparseMemoryRequirements2KHR, void, PFN_vkGetImageSparseMemoryRequirements2KHR>::Dispatch(this, vkGetImageSparseMemoryRequirements2KHR, in_device, in_pInfo, out_pSparseMemoryRequirementCount, out_pSparseMemoryRequirements);

    FreeArray<VkSparseImageMemoryRequirements2>(&out_pSparseMemoryRequirements);
}

void VulkanReplayConsumer::Process_vkCreateSamplerYcbcrConversionKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSamplerYcbcrConversionCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSamplerYcbcrConversion>& pYcbcrConversion)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkSamplerYcbcrConversionCreateInfo* in_pCreateInfo = pCreateInfo.GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkSamplerYcbcrConversion out_pYcbcrConversion_value = static_cast<VkSamplerYcbcrConversion>(0);
    VkSamplerYcbcrConversion* out_pYcbcrConversion = &out_pYcbcrConversion_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkCreateSamplerYcbcrConversionKHR, VkResult, PFN_vkCreateSamplerYcbcrConversionKHR>::Dispatch(this, returnValue, vkCreateSamplerYcbcrConversionKHR, in_device, in_pCreateInfo, in_pAllocator, out_pYcbcrConversion);
    CheckResult("vkCreateSamplerYcbcrConversionKHR", returnValue, replay_result);

    AddHandles<VkSamplerYcbcrConversion>(pYcbcrConversion.GetPointer(), 1, out_pYcbcrConversion, 1, &VulkanObjectMapper::AddVkSamplerYcbcrConversion);
}

void VulkanReplayConsumer::Process_vkDestroySamplerYcbcrConversionKHR(
    format::HandleId                            device,
    format::HandleId                            ycbcrConversion,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkSamplerYcbcrConversion in_ycbcrConversion = GetObjectMapper().MapVkSamplerYcbcrConversion(ycbcrConversion);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);

    Dispatcher<format::ApiCallId::ApiCall_vkDestroySamplerYcbcrConversionKHR, void, PFN_vkDestroySamplerYcbcrConversionKHR>::Dispatch(this, vkDestroySamplerYcbcrConversionKHR, in_device, in_ycbcrConversion, in_pAllocator);
}

void VulkanReplayConsumer::Process_vkBindBufferMemory2KHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    bindInfoCount,
    const StructPointerDecoder<Decoded_VkBindBufferMemoryInfo>& pBindInfos)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkBindBufferMemoryInfo* in_pBindInfos = pBindInfos.GetPointer();
    MapStructArrayHandles(pBindInfos.GetMetaStructPointer(), pBindInfos.GetLength(), GetObjectMapper());

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkBindBufferMemory2KHR, VkResult, PFN_vkBindBufferMemory2KHR>::Dispatch(this, returnValue, vkBindBufferMemory2KHR, in_device, bindInfoCount, in_pBindInfos);
    CheckResult("vkBindBufferMemory2KHR", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkBindImageMemory2KHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    bindInfoCount,
    const StructPointerDecoder<Decoded_VkBindImageMemoryInfo>& pBindInfos)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkBindImageMemoryInfo* in_pBindInfos = pBindInfos.GetPointer();
    MapStructArrayHandles(pBindInfos.GetMetaStructPointer(), pBindInfos.GetLength(), GetObjectMapper());

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkBindImageMemory2KHR, VkResult, PFN_vkBindImageMemory2KHR>::Dispatch(this, returnValue, vkBindImageMemory2KHR, in_device, bindInfoCount, in_pBindInfos);
    CheckResult("vkBindImageMemory2KHR", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkGetDescriptorSetLayoutSupportKHR(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDescriptorSetLayoutCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkDescriptorSetLayoutSupport>& pSupport)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkDescriptorSetLayoutCreateInfo* in_pCreateInfo = pCreateInfo.GetPointer();
    MapStructHandles(pCreateInfo.GetMetaStructPointer(), GetObjectMapper());
    VkDescriptorSetLayoutSupport out_pSupport_value = { VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT, nullptr };
    VkDescriptorSetLayoutSupport* out_pSupport = &out_pSupport_value;

    Dispatcher<format::ApiCallId::ApiCall_vkGetDescriptorSetLayoutSupportKHR, void, PFN_vkGetDescriptorSetLayoutSupportKHR>::Dispatch(this, vkGetDescriptorSetLayoutSupportKHR, in_device, in_pCreateInfo, out_pSupport);
}

void VulkanReplayConsumer::Process_vkCmdDrawIndirectCountKHR(
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    format::HandleId                            countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    VkBuffer in_buffer = GetObjectMapper().MapVkBuffer(buffer);
    VkBuffer in_countBuffer = GetObjectMapper().MapVkBuffer(countBuffer);

    Dispatcher<format::ApiCallId::ApiCall_vkCmdDrawIndirectCountKHR, void, PFN_vkCmdDrawIndirectCountKHR>::Dispatch(this, vkCmdDrawIndirectCountKHR, in_commandBuffer, in_buffer, offset, in_countBuffer, countBufferOffset, maxDrawCount, stride);
}

void VulkanReplayConsumer::Process_vkCmdDrawIndexedIndirectCountKHR(
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    format::HandleId                            countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    VkBuffer in_buffer = GetObjectMapper().MapVkBuffer(buffer);
    VkBuffer in_countBuffer = GetObjectMapper().MapVkBuffer(countBuffer);

    Dispatcher<format::ApiCallId::ApiCall_vkCmdDrawIndexedIndirectCountKHR, void, PFN_vkCmdDrawIndexedIndirectCountKHR>::Dispatch(this, vkCmdDrawIndexedIndirectCountKHR, in_commandBuffer, in_buffer, offset, in_countBuffer, countBufferOffset, maxDrawCount, stride);
}

void VulkanReplayConsumer::Process_vkCreateDebugReportCallbackEXT(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkDebugReportCallbackCreateInfoEXT>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkDebugReportCallbackEXT>& pCallback)
{
    VkInstance in_instance = GetObjectMapper().MapVkInstance(instance);
    const VkDebugReportCallbackCreateInfoEXT* in_pCreateInfo = pCreateInfo.GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkDebugReportCallbackEXT out_pCallback_value = static_cast<VkDebugReportCallbackEXT>(0);
    VkDebugReportCallbackEXT* out_pCallback = &out_pCallback_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkCreateDebugReportCallbackEXT, VkResult, PFN_vkCreateDebugReportCallbackEXT>::Dispatch(this, returnValue, vkCreateDebugReportCallbackEXT, in_instance, in_pCreateInfo, in_pAllocator, out_pCallback);
    CheckResult("vkCreateDebugReportCallbackEXT", returnValue, replay_result);

    AddHandles<VkDebugReportCallbackEXT>(pCallback.GetPointer(), 1, out_pCallback, 1, &VulkanObjectMapper::AddVkDebugReportCallbackEXT);
}

void VulkanReplayConsumer::Process_vkDestroyDebugReportCallbackEXT(
    format::HandleId                            instance,
    format::HandleId                            callback,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    VkInstance in_instance = GetObjectMapper().MapVkInstance(instance);
    VkDebugReportCallbackEXT in_callback = GetObjectMapper().MapVkDebugReportCallbackEXT(callback);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);

    Dispatcher<format::ApiCallId::ApiCall_vkDestroyDebugReportCallbackEXT, void, PFN_vkDestroyDebugReportCallbackEXT>::Dispatch(this, vkDestroyDebugReportCallbackEXT, in_instance, in_callback, in_pAllocator);
}

void VulkanReplayConsumer::Process_vkDebugReportMessageEXT(
    format::HandleId                            instance,
    VkDebugReportFlagsEXT                       flags,
    VkDebugReportObjectTypeEXT                  objectType,
    uint64_t                                    object,
    size_t                                      location,
    int32_t                                     messageCode,
    const StringDecoder&                        pLayerPrefix,
    const StringDecoder&                        pMessage)
{
    VkInstance in_instance = GetObjectMapper().MapVkInstance(instance);
    const char* in_pLayerPrefix = pLayerPrefix.GetPointer();
    const char* in_pMessage = pMessage.GetPointer();

    Dispatcher<format::ApiCallId::ApiCall_vkDebugReportMessageEXT, void, PFN_vkDebugReportMessageEXT>::Dispatch(this, vkDebugReportMessageEXT, in_instance, flags, objectType, object, location, messageCode, in_pLayerPrefix, in_pMessage);
}

void VulkanReplayConsumer::Process_vkDebugMarkerSetObjectTagEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDebugMarkerObjectTagInfoEXT>& pTagInfo)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkDebugMarkerObjectTagInfoEXT* in_pTagInfo = pTagInfo.GetPointer();

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkDebugMarkerSetObjectTagEXT, VkResult, PFN_vkDebugMarkerSetObjectTagEXT>::Dispatch(this, returnValue, vkDebugMarkerSetObjectTagEXT, in_device, in_pTagInfo);
    CheckResult("vkDebugMarkerSetObjectTagEXT", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkDebugMarkerSetObjectNameEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDebugMarkerObjectNameInfoEXT>& pNameInfo)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkDebugMarkerObjectNameInfoEXT* in_pNameInfo = pNameInfo.GetPointer();

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkDebugMarkerSetObjectNameEXT, VkResult, PFN_vkDebugMarkerSetObjectNameEXT>::Dispatch(this, returnValue, vkDebugMarkerSetObjectNameEXT, in_device, in_pNameInfo);
    CheckResult("vkDebugMarkerSetObjectNameEXT", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkCmdDebugMarkerBeginEXT(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkDebugMarkerMarkerInfoEXT>& pMarkerInfo)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    const VkDebugMarkerMarkerInfoEXT* in_pMarkerInfo = pMarkerInfo.GetPointer();

    Dispatcher<format::ApiCallId::ApiCall_vkCmdDebugMarkerBeginEXT, void, PFN_vkCmdDebugMarkerBeginEXT>::Dispatch(this, vkCmdDebugMarkerBeginEXT, in_commandBuffer, in_pMarkerInfo);
}

void VulkanReplayConsumer::Process_vkCmdDebugMarkerEndEXT(
    format::HandleId                            commandBuffer)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);

    Dispatcher<format::ApiCallId::ApiCall_vkCmdDebugMarkerEndEXT, void, PFN_vkCmdDebugMarkerEndEXT>::Dispatch(this, vkCmdDebugMarkerEndEXT, in_commandBuffer);
}

void VulkanReplayConsumer::Process_vkCmdDebugMarkerInsertEXT(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkDebugMarkerMarkerInfoEXT>& pMarkerInfo)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    const VkDebugMarkerMarkerInfoEXT* in_pMarkerInfo = pMarkerInfo.GetPointer();

    Dispatcher<format::ApiCallId::ApiCall_vkCmdDebugMarkerInsertEXT, void, PFN_vkCmdDebugMarkerInsertEXT>::Dispatch(this, vkCmdDebugMarkerInsertEXT, in_commandBuffer, in_pMarkerInfo);
}

void VulkanReplayConsumer::Process_vkCmdBindTransformFeedbackBuffersEXT(
    format::HandleId                            commandBuffer,
    uint32_t                                    firstBinding,
    uint32_t                                    bindingCount,
    const HandlePointerDecoder<VkBuffer>&       pBuffers,
    const PointerDecoder<VkDeviceSize>&         pOffsets,
    const PointerDecoder<VkDeviceSize>&         pSizes)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    VkBuffer* in_pBuffers = pBuffers.GetHandlePointer();
    MapHandles<VkBuffer>(pBuffers.GetPointer(), pBuffers.GetLength(), in_pBuffers, bindingCount, &VulkanObjectMapper::MapVkBuffer);
    const VkDeviceSize* in_pOffsets = pOffsets.GetPointer();
    const VkDeviceSize* in_pSizes = pSizes.GetPointer();

    Dispatcher<format::ApiCallId::ApiCall_vkCmdBindTransformFeedbackBuffersEXT, void, PFN_vkCmdBindTransformFeedbackBuffersEXT>::Dispatch(this, vkCmdBindTransformFeedbackBuffersEXT, in_commandBuffer, firstBinding, bindingCount, in_pBuffers, in_pOffsets, in_pSizes);
}

void VulkanReplayConsumer::Process_vkCmdBeginTransformFeedbackEXT(
    format::HandleId                            commandBuffer,
    uint32_t                                    firstCounterBuffer,
    uint32_t                                    counterBufferCount,
    const HandlePointerDecoder<VkBuffer>&       pCounterBuffers,
    const PointerDecoder<VkDeviceSize>&         pCounterBufferOffsets)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    VkBuffer* in_pCounterBuffers = pCounterBuffers.GetHandlePointer();
    MapHandles<VkBuffer>(pCounterBuffers.GetPointer(), pCounterBuffers.GetLength(), in_pCounterBuffers, counterBufferCount, &VulkanObjectMapper::MapVkBuffer);
    const VkDeviceSize* in_pCounterBufferOffsets = pCounterBufferOffsets.GetPointer();

    Dispatcher<format::ApiCallId::ApiCall_vkCmdBeginTransformFeedbackEXT, void, PFN_vkCmdBeginTransformFeedbackEXT>::Dispatch(this, vkCmdBeginTransformFeedbackEXT, in_commandBuffer, firstCounterBuffer, counterBufferCount, in_pCounterBuffers, in_pCounterBufferOffsets);
}

void VulkanReplayConsumer::Process_vkCmdEndTransformFeedbackEXT(
    format::HandleId                            commandBuffer,
    uint32_t                                    firstCounterBuffer,
    uint32_t                                    counterBufferCount,
    const HandlePointerDecoder<VkBuffer>&       pCounterBuffers,
    const PointerDecoder<VkDeviceSize>&         pCounterBufferOffsets)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    VkBuffer* in_pCounterBuffers = pCounterBuffers.GetHandlePointer();
    MapHandles<VkBuffer>(pCounterBuffers.GetPointer(), pCounterBuffers.GetLength(), in_pCounterBuffers, counterBufferCount, &VulkanObjectMapper::MapVkBuffer);
    const VkDeviceSize* in_pCounterBufferOffsets = pCounterBufferOffsets.GetPointer();

    Dispatcher<format::ApiCallId::ApiCall_vkCmdEndTransformFeedbackEXT, void, PFN_vkCmdEndTransformFeedbackEXT>::Dispatch(this, vkCmdEndTransformFeedbackEXT, in_commandBuffer, firstCounterBuffer, counterBufferCount, in_pCounterBuffers, in_pCounterBufferOffsets);
}

void VulkanReplayConsumer::Process_vkCmdBeginQueryIndexedEXT(
    format::HandleId                            commandBuffer,
    format::HandleId                            queryPool,
    uint32_t                                    query,
    VkQueryControlFlags                         flags,
    uint32_t                                    index)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    VkQueryPool in_queryPool = GetObjectMapper().MapVkQueryPool(queryPool);

    Dispatcher<format::ApiCallId::ApiCall_vkCmdBeginQueryIndexedEXT, void, PFN_vkCmdBeginQueryIndexedEXT>::Dispatch(this, vkCmdBeginQueryIndexedEXT, in_commandBuffer, in_queryPool, query, flags, index);
}

void VulkanReplayConsumer::Process_vkCmdEndQueryIndexedEXT(
    format::HandleId                            commandBuffer,
    format::HandleId                            queryPool,
    uint32_t                                    query,
    uint32_t                                    index)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    VkQueryPool in_queryPool = GetObjectMapper().MapVkQueryPool(queryPool);

    Dispatcher<format::ApiCallId::ApiCall_vkCmdEndQueryIndexedEXT, void, PFN_vkCmdEndQueryIndexedEXT>::Dispatch(this, vkCmdEndQueryIndexedEXT, in_commandBuffer, in_queryPool, query, index);
}

void VulkanReplayConsumer::Process_vkCmdDrawIndirectByteCountEXT(
    format::HandleId                            commandBuffer,
    uint32_t                                    instanceCount,
    uint32_t                                    firstInstance,
    format::HandleId                            counterBuffer,
    VkDeviceSize                                counterBufferOffset,
    uint32_t                                    counterOffset,
    uint32_t                                    vertexStride)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    VkBuffer in_counterBuffer = GetObjectMapper().MapVkBuffer(counterBuffer);

    Dispatcher<format::ApiCallId::ApiCall_vkCmdDrawIndirectByteCountEXT, void, PFN_vkCmdDrawIndirectByteCountEXT>::Dispatch(this, vkCmdDrawIndirectByteCountEXT, in_commandBuffer, instanceCount, firstInstance, in_counterBuffer, counterBufferOffset, counterOffset, vertexStride);
}

void VulkanReplayConsumer::Process_vkGetImageViewHandleNVX(
    uint32_t                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImageViewHandleInfoNVX>& pInfo)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkImageViewHandleInfoNVX* in_pInfo = pInfo.GetPointer();
    MapStructHandles(pInfo.GetMetaStructPointer(), GetObjectMapper());

    Dispatcher<format::ApiCallId::ApiCall_vkGetImageViewHandleNVX, uint32_t, PFN_vkGetImageViewHandleNVX>::Dispatch(this, vkGetImageViewHandleNVX, in_device, in_pInfo);
}

void VulkanReplayConsumer::Process_vkCmdDrawIndirectCountAMD(
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    format::HandleId                            countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    VkBuffer in_buffer = GetObjectMapper().MapVkBuffer(buffer);
    VkBuffer in_countBuffer = GetObjectMapper().MapVkBuffer(countBuffer);

    Dispatcher<format::ApiCallId::ApiCall_vkCmdDrawIndirectCountAMD, void, PFN_vkCmdDrawIndirectCountAMD>::Dispatch(this, vkCmdDrawIndirectCountAMD, in_commandBuffer, in_buffer, offset, in_countBuffer, countBufferOffset, maxDrawCount, stride);
}

void VulkanReplayConsumer::Process_vkCmdDrawIndexedIndirectCountAMD(
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    format::HandleId                            countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    VkBuffer in_buffer = GetObjectMapper().MapVkBuffer(buffer);
    VkBuffer in_countBuffer = GetObjectMapper().MapVkBuffer(countBuffer);

    Dispatcher<format::ApiCallId::ApiCall_vkCmdDrawIndexedIndirectCountAMD, void, PFN_vkCmdDrawIndexedIndirectCountAMD>::Dispatch(this, vkCmdDrawIndexedIndirectCountAMD, in_commandBuffer, in_buffer, offset, in_countBuffer, countBufferOffset, maxDrawCount, stride);
}

void VulkanReplayConsumer::Process_vkGetShaderInfoAMD(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            pipeline,
    VkShaderStageFlagBits                       shaderStage,
    VkShaderInfoTypeAMD                         infoType,
    const PointerDecoder<size_t>&               pInfoSize,
    const PointerDecoder<uint8_t>&              pInfo)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkPipeline in_pipeline = GetObjectMapper().MapVkPipeline(pipeline);
    size_t out_pInfoSize_value = pInfoSize.IsNull() ? static_cast<size_t>(0) : *(pInfoSize.GetPointer());
    size_t* out_pInfoSize = &out_pInfoSize_value;
    uint8_t* out_pInfo = pInfo.IsNull() ? nullptr : AllocateArray<uint8_t>(out_pInfoSize_value);

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetShaderInfoAMD, VkResult, PFN_vkGetShaderInfoAMD>::Dispatch(this, returnValue, vkGetShaderInfoAMD, in_device, in_pipeline, shaderStage, infoType, out_pInfoSize, out_pInfo);
    CheckResult("vkGetShaderInfoAMD", returnValue, replay_result);

    FreeArray<uint8_t>(&out_pInfo);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceExternalImageFormatPropertiesNV(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    VkFormat                                    format,
    VkImageType                                 type,
    VkImageTiling                               tiling,
    VkImageUsageFlags                           usage,
    VkImageCreateFlags                          flags,
    VkExternalMemoryHandleTypeFlagsNV           externalHandleType,
    const StructPointerDecoder<Decoded_VkExternalImageFormatPropertiesNV>& pExternalImageFormatProperties)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    VkExternalImageFormatPropertiesNV out_pExternalImageFormatProperties_value = {};
    VkExternalImageFormatPropertiesNV* out_pExternalImageFormatProperties = &out_pExternalImageFormatProperties_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetPhysicalDeviceExternalImageFormatPropertiesNV, VkResult, PFN_vkGetPhysicalDeviceExternalImageFormatPropertiesNV>::Dispatch(this, returnValue, vkGetPhysicalDeviceExternalImageFormatPropertiesNV, in_physicalDevice, format, type, tiling, usage, flags, externalHandleType, out_pExternalImageFormatProperties);
    CheckResult("vkGetPhysicalDeviceExternalImageFormatPropertiesNV", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkGetMemoryWin32HandleNV(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            memory,
    VkExternalMemoryHandleTypeFlagsNV           handleType,
    const PointerDecoder<uint64_t>&             pHandle)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkDeviceMemory in_memory = GetObjectMapper().MapVkDeviceMemory(memory);
    HANDLE out_pHandle_value = nullptr;
    HANDLE* out_pHandle = &out_pHandle_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetMemoryWin32HandleNV, VkResult, PFN_vkGetMemoryWin32HandleNV>::Dispatch(this, returnValue, vkGetMemoryWin32HandleNV, in_device, in_memory, handleType, out_pHandle);
    CheckResult("vkGetMemoryWin32HandleNV", returnValue, replay_result);

    PostProcessExternalObject(pHandle, static_cast<void*>(out_pHandle_value), format::ApiCallId::ApiCall_vkGetMemoryWin32HandleNV, "vkGetMemoryWin32HandleNV");
}

void VulkanReplayConsumer::Process_vkCreateViSurfaceNN(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkViSurfaceCreateInfoNN>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    VkInstance in_instance = GetObjectMapper().MapVkInstance(instance);
    const VkViSurfaceCreateInfoNN* in_pCreateInfo = pCreateInfo.GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkSurfaceKHR out_pSurface_value = static_cast<VkSurfaceKHR>(0);
    VkSurfaceKHR* out_pSurface = &out_pSurface_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkCreateViSurfaceNN, VkResult, PFN_vkCreateViSurfaceNN>::Dispatch(this, returnValue, vkCreateViSurfaceNN, in_instance, in_pCreateInfo, in_pAllocator, out_pSurface);
    CheckResult("vkCreateViSurfaceNN", returnValue, replay_result);

    AddHandles<VkSurfaceKHR>(pSurface.GetPointer(), 1, out_pSurface, 1, &VulkanObjectMapper::AddVkSurfaceKHR);
}

void VulkanReplayConsumer::Process_vkCmdBeginConditionalRenderingEXT(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkConditionalRenderingBeginInfoEXT>& pConditionalRenderingBegin)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    const VkConditionalRenderingBeginInfoEXT* in_pConditionalRenderingBegin = pConditionalRenderingBegin.GetPointer();
    MapStructHandles(pConditionalRenderingBegin.GetMetaStructPointer(), GetObjectMapper());

    Dispatcher<format::ApiCallId::ApiCall_vkCmdBeginConditionalRenderingEXT, void, PFN_vkCmdBeginConditionalRenderingEXT>::Dispatch(this, vkCmdBeginConditionalRenderingEXT, in_commandBuffer, in_pConditionalRenderingBegin);
}

void VulkanReplayConsumer::Process_vkCmdEndConditionalRenderingEXT(
    format::HandleId                            commandBuffer)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);

    Dispatcher<format::ApiCallId::ApiCall_vkCmdEndConditionalRenderingEXT, void, PFN_vkCmdEndConditionalRenderingEXT>::Dispatch(this, vkCmdEndConditionalRenderingEXT, in_commandBuffer);
}

void VulkanReplayConsumer::Process_vkCmdProcessCommandsNVX(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkCmdProcessCommandsInfoNVX>& pProcessCommandsInfo)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    const VkCmdProcessCommandsInfoNVX* in_pProcessCommandsInfo = pProcessCommandsInfo.GetPointer();
    MapStructHandles(pProcessCommandsInfo.GetMetaStructPointer(), GetObjectMapper());

    Dispatcher<format::ApiCallId::ApiCall_vkCmdProcessCommandsNVX, void, PFN_vkCmdProcessCommandsNVX>::Dispatch(this, vkCmdProcessCommandsNVX, in_commandBuffer, in_pProcessCommandsInfo);
}

void VulkanReplayConsumer::Process_vkCmdReserveSpaceForCommandsNVX(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkCmdReserveSpaceForCommandsInfoNVX>& pReserveSpaceInfo)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    const VkCmdReserveSpaceForCommandsInfoNVX* in_pReserveSpaceInfo = pReserveSpaceInfo.GetPointer();
    MapStructHandles(pReserveSpaceInfo.GetMetaStructPointer(), GetObjectMapper());

    Dispatcher<format::ApiCallId::ApiCall_vkCmdReserveSpaceForCommandsNVX, void, PFN_vkCmdReserveSpaceForCommandsNVX>::Dispatch(this, vkCmdReserveSpaceForCommandsNVX, in_commandBuffer, in_pReserveSpaceInfo);
}

void VulkanReplayConsumer::Process_vkCreateIndirectCommandsLayoutNVX(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkIndirectCommandsLayoutCreateInfoNVX>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkIndirectCommandsLayoutNVX>& pIndirectCommandsLayout)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkIndirectCommandsLayoutCreateInfoNVX* in_pCreateInfo = pCreateInfo.GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkIndirectCommandsLayoutNVX out_pIndirectCommandsLayout_value = static_cast<VkIndirectCommandsLayoutNVX>(0);
    VkIndirectCommandsLayoutNVX* out_pIndirectCommandsLayout = &out_pIndirectCommandsLayout_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkCreateIndirectCommandsLayoutNVX, VkResult, PFN_vkCreateIndirectCommandsLayoutNVX>::Dispatch(this, returnValue, vkCreateIndirectCommandsLayoutNVX, in_device, in_pCreateInfo, in_pAllocator, out_pIndirectCommandsLayout);
    CheckResult("vkCreateIndirectCommandsLayoutNVX", returnValue, replay_result);

    AddHandles<VkIndirectCommandsLayoutNVX>(pIndirectCommandsLayout.GetPointer(), 1, out_pIndirectCommandsLayout, 1, &VulkanObjectMapper::AddVkIndirectCommandsLayoutNVX);
}

void VulkanReplayConsumer::Process_vkDestroyIndirectCommandsLayoutNVX(
    format::HandleId                            device,
    format::HandleId                            indirectCommandsLayout,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkIndirectCommandsLayoutNVX in_indirectCommandsLayout = GetObjectMapper().MapVkIndirectCommandsLayoutNVX(indirectCommandsLayout);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);

    Dispatcher<format::ApiCallId::ApiCall_vkDestroyIndirectCommandsLayoutNVX, void, PFN_vkDestroyIndirectCommandsLayoutNVX>::Dispatch(this, vkDestroyIndirectCommandsLayoutNVX, in_device, in_indirectCommandsLayout, in_pAllocator);
}

void VulkanReplayConsumer::Process_vkCreateObjectTableNVX(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkObjectTableCreateInfoNVX>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkObjectTableNVX>& pObjectTable)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkObjectTableCreateInfoNVX* in_pCreateInfo = pCreateInfo.GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkObjectTableNVX out_pObjectTable_value = static_cast<VkObjectTableNVX>(0);
    VkObjectTableNVX* out_pObjectTable = &out_pObjectTable_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkCreateObjectTableNVX, VkResult, PFN_vkCreateObjectTableNVX>::Dispatch(this, returnValue, vkCreateObjectTableNVX, in_device, in_pCreateInfo, in_pAllocator, out_pObjectTable);
    CheckResult("vkCreateObjectTableNVX", returnValue, replay_result);

    AddHandles<VkObjectTableNVX>(pObjectTable.GetPointer(), 1, out_pObjectTable, 1, &VulkanObjectMapper::AddVkObjectTableNVX);
}

void VulkanReplayConsumer::Process_vkDestroyObjectTableNVX(
    format::HandleId                            device,
    format::HandleId                            objectTable,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkObjectTableNVX in_objectTable = GetObjectMapper().MapVkObjectTableNVX(objectTable);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);

    Dispatcher<format::ApiCallId::ApiCall_vkDestroyObjectTableNVX, void, PFN_vkDestroyObjectTableNVX>::Dispatch(this, vkDestroyObjectTableNVX, in_device, in_objectTable, in_pAllocator);
}

void VulkanReplayConsumer::Process_vkUnregisterObjectsNVX(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            objectTable,
    uint32_t                                    objectCount,
    const PointerDecoder<VkObjectEntryTypeNVX>& pObjectEntryTypes,
    const PointerDecoder<uint32_t>&             pObjectIndices)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkObjectTableNVX in_objectTable = GetObjectMapper().MapVkObjectTableNVX(objectTable);
    const VkObjectEntryTypeNVX* in_pObjectEntryTypes = pObjectEntryTypes.GetPointer();
    const uint32_t* in_pObjectIndices = pObjectIndices.GetPointer();

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkUnregisterObjectsNVX, VkResult, PFN_vkUnregisterObjectsNVX>::Dispatch(this, returnValue, vkUnregisterObjectsNVX, in_device, in_objectTable, objectCount, in_pObjectEntryTypes, in_pObjectIndices);
    CheckResult("vkUnregisterObjectsNVX", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkDeviceGeneratedCommandsFeaturesNVX>& pFeatures,
    const StructPointerDecoder<Decoded_VkDeviceGeneratedCommandsLimitsNVX>& pLimits)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    VkDeviceGeneratedCommandsFeaturesNVX out_pFeatures_value = { VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_FEATURES_NVX, nullptr };
    VkDeviceGeneratedCommandsFeaturesNVX* out_pFeatures = &out_pFeatures_value;
    VkDeviceGeneratedCommandsLimitsNVX out_pLimits_value = { VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_LIMITS_NVX, nullptr };
    VkDeviceGeneratedCommandsLimitsNVX* out_pLimits = &out_pLimits_value;

    Dispatcher<format::ApiCallId::ApiCall_vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX, void, PFN_vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX>::Dispatch(this, vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX, in_physicalDevice, out_pFeatures, out_pLimits);
}

void VulkanReplayConsumer::Process_vkCmdSetViewportWScalingNV(
    format::HandleId                            commandBuffer,
    uint32_t                                    firstViewport,
    uint32_t                                    viewportCount,
    const StructPointerDecoder<Decoded_VkViewportWScalingNV>& pViewportWScalings)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    const VkViewportWScalingNV* in_pViewportWScalings = pViewportWScalings.GetPointer();

    Dispatcher<format::ApiCallId::ApiCall_vkCmdSetViewportWScalingNV, void, PFN_vkCmdSetViewportWScalingNV>::Dispatch(this, vkCmdSetViewportWScalingNV, in_commandBuffer, firstViewport, viewportCount, in_pViewportWScalings);
}

void VulkanReplayConsumer::Process_vkReleaseDisplayEXT(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            display)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    VkDisplayKHR in_display = GetObjectMapper().MapVkDisplayKHR(display);

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkReleaseDisplayEXT, VkResult, PFN_vkReleaseDisplayEXT>::Dispatch(this, returnValue, vkReleaseDisplayEXT, in_physicalDevice, in_display);
    CheckResult("vkReleaseDisplayEXT", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkAcquireXlibDisplayEXT(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    uint64_t                                    dpy,
    format::HandleId                            display)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    Display* in_dpy = static_cast<Display*>(PreProcessExternalObject(dpy, format::ApiCallId::ApiCall_vkAcquireXlibDisplayEXT, "vkAcquireXlibDisplayEXT"));
    VkDisplayKHR in_display = GetObjectMapper().MapVkDisplayKHR(display);

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkAcquireXlibDisplayEXT, VkResult, PFN_vkAcquireXlibDisplayEXT>::Dispatch(this, returnValue, vkAcquireXlibDisplayEXT, in_physicalDevice, in_dpy, in_display);
    CheckResult("vkAcquireXlibDisplayEXT", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkGetRandROutputDisplayEXT(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    uint64_t                                    dpy,
    size_t                                      rrOutput,
    const HandlePointerDecoder<VkDisplayKHR>&   pDisplay)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    Display* in_dpy = static_cast<Display*>(PreProcessExternalObject(dpy, format::ApiCallId::ApiCall_vkGetRandROutputDisplayEXT, "vkGetRandROutputDisplayEXT"));
    VkDisplayKHR out_pDisplay_value = static_cast<VkDisplayKHR>(0);
    VkDisplayKHR* out_pDisplay = &out_pDisplay_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetRandROutputDisplayEXT, VkResult, PFN_vkGetRandROutputDisplayEXT>::Dispatch(this, returnValue, vkGetRandROutputDisplayEXT, in_physicalDevice, in_dpy, rrOutput, out_pDisplay);
    CheckResult("vkGetRandROutputDisplayEXT", returnValue, replay_result);

    AddHandles<VkDisplayKHR>(pDisplay.GetPointer(), 1, out_pDisplay, 1, &VulkanObjectMapper::AddVkDisplayKHR);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceSurfaceCapabilities2EXT(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            surface,
    const StructPointerDecoder<Decoded_VkSurfaceCapabilities2EXT>& pSurfaceCapabilities)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    VkSurfaceKHR in_surface = GetObjectMapper().MapVkSurfaceKHR(surface);
    VkSurfaceCapabilities2EXT out_pSurfaceCapabilities_value = { VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_EXT, nullptr };
    VkSurfaceCapabilities2EXT* out_pSurfaceCapabilities = &out_pSurfaceCapabilities_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetPhysicalDeviceSurfaceCapabilities2EXT, VkResult, PFN_vkGetPhysicalDeviceSurfaceCapabilities2EXT>::Dispatch(this, returnValue, vkGetPhysicalDeviceSurfaceCapabilities2EXT, in_physicalDevice, in_surface, out_pSurfaceCapabilities);
    CheckResult("vkGetPhysicalDeviceSurfaceCapabilities2EXT", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkDisplayPowerControlEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            display,
    const StructPointerDecoder<Decoded_VkDisplayPowerInfoEXT>& pDisplayPowerInfo)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkDisplayKHR in_display = GetObjectMapper().MapVkDisplayKHR(display);
    const VkDisplayPowerInfoEXT* in_pDisplayPowerInfo = pDisplayPowerInfo.GetPointer();

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkDisplayPowerControlEXT, VkResult, PFN_vkDisplayPowerControlEXT>::Dispatch(this, returnValue, vkDisplayPowerControlEXT, in_device, in_display, in_pDisplayPowerInfo);
    CheckResult("vkDisplayPowerControlEXT", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkRegisterDeviceEventEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDeviceEventInfoEXT>& pDeviceEventInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkFence>&        pFence)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkDeviceEventInfoEXT* in_pDeviceEventInfo = pDeviceEventInfo.GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkFence out_pFence_value = static_cast<VkFence>(0);
    VkFence* out_pFence = &out_pFence_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkRegisterDeviceEventEXT, VkResult, PFN_vkRegisterDeviceEventEXT>::Dispatch(this, returnValue, vkRegisterDeviceEventEXT, in_device, in_pDeviceEventInfo, in_pAllocator, out_pFence);
    CheckResult("vkRegisterDeviceEventEXT", returnValue, replay_result);

    AddHandles<VkFence>(pFence.GetPointer(), 1, out_pFence, 1, &VulkanObjectMapper::AddVkFence);
}

void VulkanReplayConsumer::Process_vkRegisterDisplayEventEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            display,
    const StructPointerDecoder<Decoded_VkDisplayEventInfoEXT>& pDisplayEventInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkFence>&        pFence)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkDisplayKHR in_display = GetObjectMapper().MapVkDisplayKHR(display);
    const VkDisplayEventInfoEXT* in_pDisplayEventInfo = pDisplayEventInfo.GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkFence out_pFence_value = static_cast<VkFence>(0);
    VkFence* out_pFence = &out_pFence_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkRegisterDisplayEventEXT, VkResult, PFN_vkRegisterDisplayEventEXT>::Dispatch(this, returnValue, vkRegisterDisplayEventEXT, in_device, in_display, in_pDisplayEventInfo, in_pAllocator, out_pFence);
    CheckResult("vkRegisterDisplayEventEXT", returnValue, replay_result);

    AddHandles<VkFence>(pFence.GetPointer(), 1, out_pFence, 1, &VulkanObjectMapper::AddVkFence);
}

void VulkanReplayConsumer::Process_vkGetSwapchainCounterEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain,
    VkSurfaceCounterFlagBitsEXT                 counter,
    const PointerDecoder<uint64_t>&             pCounterValue)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkSwapchainKHR in_swapchain = GetObjectMapper().MapVkSwapchainKHR(swapchain);
    uint64_t out_pCounterValue_value = static_cast<uint64_t>(0);
    uint64_t* out_pCounterValue = &out_pCounterValue_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetSwapchainCounterEXT, VkResult, PFN_vkGetSwapchainCounterEXT>::Dispatch(this, returnValue, vkGetSwapchainCounterEXT, in_device, in_swapchain, counter, out_pCounterValue);
    CheckResult("vkGetSwapchainCounterEXT", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkGetRefreshCycleDurationGOOGLE(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain,
    const StructPointerDecoder<Decoded_VkRefreshCycleDurationGOOGLE>& pDisplayTimingProperties)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkSwapchainKHR in_swapchain = GetObjectMapper().MapVkSwapchainKHR(swapchain);
    VkRefreshCycleDurationGOOGLE out_pDisplayTimingProperties_value = {};
    VkRefreshCycleDurationGOOGLE* out_pDisplayTimingProperties = &out_pDisplayTimingProperties_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetRefreshCycleDurationGOOGLE, VkResult, PFN_vkGetRefreshCycleDurationGOOGLE>::Dispatch(this, returnValue, vkGetRefreshCycleDurationGOOGLE, in_device, in_swapchain, out_pDisplayTimingProperties);
    CheckResult("vkGetRefreshCycleDurationGOOGLE", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkGetPastPresentationTimingGOOGLE(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain,
    const PointerDecoder<uint32_t>&             pPresentationTimingCount,
    const StructPointerDecoder<Decoded_VkPastPresentationTimingGOOGLE>& pPresentationTimings)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkSwapchainKHR in_swapchain = GetObjectMapper().MapVkSwapchainKHR(swapchain);
    uint32_t out_pPresentationTimingCount_value = pPresentationTimingCount.IsNull() ? static_cast<uint32_t>(0) : *(pPresentationTimingCount.GetPointer());
    uint32_t* out_pPresentationTimingCount = &out_pPresentationTimingCount_value;
    VkPastPresentationTimingGOOGLE* out_pPresentationTimings = pPresentationTimings.IsNull() ? nullptr : AllocateArray<VkPastPresentationTimingGOOGLE>(out_pPresentationTimingCount_value);

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetPastPresentationTimingGOOGLE, VkResult, PFN_vkGetPastPresentationTimingGOOGLE>::Dispatch(this, returnValue, vkGetPastPresentationTimingGOOGLE, in_device, in_swapchain, out_pPresentationTimingCount, out_pPresentationTimings);
    CheckResult("vkGetPastPresentationTimingGOOGLE", returnValue, replay_result);

    FreeArray<VkPastPresentationTimingGOOGLE>(&out_pPresentationTimings);
}

void VulkanReplayConsumer::Process_vkCmdSetDiscardRectangleEXT(
    format::HandleId                            commandBuffer,
    uint32_t                                    firstDiscardRectangle,
    uint32_t                                    discardRectangleCount,
    const StructPointerDecoder<Decoded_VkRect2D>& pDiscardRectangles)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    const VkRect2D* in_pDiscardRectangles = pDiscardRectangles.GetPointer();

    Dispatcher<format::ApiCallId::ApiCall_vkCmdSetDiscardRectangleEXT, void, PFN_vkCmdSetDiscardRectangleEXT>::Dispatch(this, vkCmdSetDiscardRectangleEXT, in_commandBuffer, firstDiscardRectangle, discardRectangleCount, in_pDiscardRectangles);
}

void VulkanReplayConsumer::Process_vkSetHdrMetadataEXT(
    format::HandleId                            device,
    uint32_t                                    swapchainCount,
    const HandlePointerDecoder<VkSwapchainKHR>& pSwapchains,
    const StructPointerDecoder<Decoded_VkHdrMetadataEXT>& pMetadata)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkSwapchainKHR* in_pSwapchains = pSwapchains.GetHandlePointer();
    MapHandles<VkSwapchainKHR>(pSwapchains.GetPointer(), pSwapchains.GetLength(), in_pSwapchains, swapchainCount, &VulkanObjectMapper::MapVkSwapchainKHR);
    const VkHdrMetadataEXT* in_pMetadata = pMetadata.GetPointer();

    Dispatcher<format::ApiCallId::ApiCall_vkSetHdrMetadataEXT, void, PFN_vkSetHdrMetadataEXT>::Dispatch(this, vkSetHdrMetadataEXT, in_device, swapchainCount, in_pSwapchains, in_pMetadata);
}

void VulkanReplayConsumer::Process_vkCreateIOSSurfaceMVK(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkIOSSurfaceCreateInfoMVK>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    VkInstance in_instance = GetObjectMapper().MapVkInstance(instance);
    const VkIOSSurfaceCreateInfoMVK* in_pCreateInfo = pCreateInfo.GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkSurfaceKHR out_pSurface_value = static_cast<VkSurfaceKHR>(0);
    VkSurfaceKHR* out_pSurface = &out_pSurface_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkCreateIOSSurfaceMVK, VkResult, PFN_vkCreateIOSSurfaceMVK>::Dispatch(this, returnValue, vkCreateIOSSurfaceMVK, in_instance, in_pCreateInfo, in_pAllocator, out_pSurface);
    CheckResult("vkCreateIOSSurfaceMVK", returnValue, replay_result);

    AddHandles<VkSurfaceKHR>(pSurface.GetPointer(), 1, out_pSurface, 1, &VulkanObjectMapper::AddVkSurfaceKHR);
}

void VulkanReplayConsumer::Process_vkCreateMacOSSurfaceMVK(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkMacOSSurfaceCreateInfoMVK>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    VkInstance in_instance = GetObjectMapper().MapVkInstance(instance);
    const VkMacOSSurfaceCreateInfoMVK* in_pCreateInfo = pCreateInfo.GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkSurfaceKHR out_pSurface_value = static_cast<VkSurfaceKHR>(0);
    VkSurfaceKHR* out_pSurface = &out_pSurface_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkCreateMacOSSurfaceMVK, VkResult, PFN_vkCreateMacOSSurfaceMVK>::Dispatch(this, returnValue, vkCreateMacOSSurfaceMVK, in_instance, in_pCreateInfo, in_pAllocator, out_pSurface);
    CheckResult("vkCreateMacOSSurfaceMVK", returnValue, replay_result);

    AddHandles<VkSurfaceKHR>(pSurface.GetPointer(), 1, out_pSurface, 1, &VulkanObjectMapper::AddVkSurfaceKHR);
}

void VulkanReplayConsumer::Process_vkSetDebugUtilsObjectNameEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDebugUtilsObjectNameInfoEXT>& pNameInfo)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkDebugUtilsObjectNameInfoEXT* in_pNameInfo = pNameInfo.GetPointer();

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkSetDebugUtilsObjectNameEXT, VkResult, PFN_vkSetDebugUtilsObjectNameEXT>::Dispatch(this, returnValue, vkSetDebugUtilsObjectNameEXT, in_device, in_pNameInfo);
    CheckResult("vkSetDebugUtilsObjectNameEXT", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkSetDebugUtilsObjectTagEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDebugUtilsObjectTagInfoEXT>& pTagInfo)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkDebugUtilsObjectTagInfoEXT* in_pTagInfo = pTagInfo.GetPointer();

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkSetDebugUtilsObjectTagEXT, VkResult, PFN_vkSetDebugUtilsObjectTagEXT>::Dispatch(this, returnValue, vkSetDebugUtilsObjectTagEXT, in_device, in_pTagInfo);
    CheckResult("vkSetDebugUtilsObjectTagEXT", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkQueueBeginDebugUtilsLabelEXT(
    format::HandleId                            queue,
    const StructPointerDecoder<Decoded_VkDebugUtilsLabelEXT>& pLabelInfo)
{
    VkQueue in_queue = GetObjectMapper().MapVkQueue(queue);
    const VkDebugUtilsLabelEXT* in_pLabelInfo = pLabelInfo.GetPointer();

    Dispatcher<format::ApiCallId::ApiCall_vkQueueBeginDebugUtilsLabelEXT, void, PFN_vkQueueBeginDebugUtilsLabelEXT>::Dispatch(this, vkQueueBeginDebugUtilsLabelEXT, in_queue, in_pLabelInfo);
}

void VulkanReplayConsumer::Process_vkQueueEndDebugUtilsLabelEXT(
    format::HandleId                            queue)
{
    VkQueue in_queue = GetObjectMapper().MapVkQueue(queue);

    Dispatcher<format::ApiCallId::ApiCall_vkQueueEndDebugUtilsLabelEXT, void, PFN_vkQueueEndDebugUtilsLabelEXT>::Dispatch(this, vkQueueEndDebugUtilsLabelEXT, in_queue);
}

void VulkanReplayConsumer::Process_vkQueueInsertDebugUtilsLabelEXT(
    format::HandleId                            queue,
    const StructPointerDecoder<Decoded_VkDebugUtilsLabelEXT>& pLabelInfo)
{
    VkQueue in_queue = GetObjectMapper().MapVkQueue(queue);
    const VkDebugUtilsLabelEXT* in_pLabelInfo = pLabelInfo.GetPointer();

    Dispatcher<format::ApiCallId::ApiCall_vkQueueInsertDebugUtilsLabelEXT, void, PFN_vkQueueInsertDebugUtilsLabelEXT>::Dispatch(this, vkQueueInsertDebugUtilsLabelEXT, in_queue, in_pLabelInfo);
}

void VulkanReplayConsumer::Process_vkCmdBeginDebugUtilsLabelEXT(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkDebugUtilsLabelEXT>& pLabelInfo)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    const VkDebugUtilsLabelEXT* in_pLabelInfo = pLabelInfo.GetPointer();

    Dispatcher<format::ApiCallId::ApiCall_vkCmdBeginDebugUtilsLabelEXT, void, PFN_vkCmdBeginDebugUtilsLabelEXT>::Dispatch(this, vkCmdBeginDebugUtilsLabelEXT, in_commandBuffer, in_pLabelInfo);
}

void VulkanReplayConsumer::Process_vkCmdEndDebugUtilsLabelEXT(
    format::HandleId                            commandBuffer)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);

    Dispatcher<format::ApiCallId::ApiCall_vkCmdEndDebugUtilsLabelEXT, void, PFN_vkCmdEndDebugUtilsLabelEXT>::Dispatch(this, vkCmdEndDebugUtilsLabelEXT, in_commandBuffer);
}

void VulkanReplayConsumer::Process_vkCmdInsertDebugUtilsLabelEXT(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkDebugUtilsLabelEXT>& pLabelInfo)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    const VkDebugUtilsLabelEXT* in_pLabelInfo = pLabelInfo.GetPointer();

    Dispatcher<format::ApiCallId::ApiCall_vkCmdInsertDebugUtilsLabelEXT, void, PFN_vkCmdInsertDebugUtilsLabelEXT>::Dispatch(this, vkCmdInsertDebugUtilsLabelEXT, in_commandBuffer, in_pLabelInfo);
}

void VulkanReplayConsumer::Process_vkCreateDebugUtilsMessengerEXT(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkDebugUtilsMessengerCreateInfoEXT>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkDebugUtilsMessengerEXT>& pMessenger)
{
    VkInstance in_instance = GetObjectMapper().MapVkInstance(instance);
    const VkDebugUtilsMessengerCreateInfoEXT* in_pCreateInfo = pCreateInfo.GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkDebugUtilsMessengerEXT out_pMessenger_value = static_cast<VkDebugUtilsMessengerEXT>(0);
    VkDebugUtilsMessengerEXT* out_pMessenger = &out_pMessenger_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkCreateDebugUtilsMessengerEXT, VkResult, PFN_vkCreateDebugUtilsMessengerEXT>::Dispatch(this, returnValue, vkCreateDebugUtilsMessengerEXT, in_instance, in_pCreateInfo, in_pAllocator, out_pMessenger);
    CheckResult("vkCreateDebugUtilsMessengerEXT", returnValue, replay_result);

    AddHandles<VkDebugUtilsMessengerEXT>(pMessenger.GetPointer(), 1, out_pMessenger, 1, &VulkanObjectMapper::AddVkDebugUtilsMessengerEXT);
}

void VulkanReplayConsumer::Process_vkDestroyDebugUtilsMessengerEXT(
    format::HandleId                            instance,
    format::HandleId                            messenger,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    VkInstance in_instance = GetObjectMapper().MapVkInstance(instance);
    VkDebugUtilsMessengerEXT in_messenger = GetObjectMapper().MapVkDebugUtilsMessengerEXT(messenger);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);

    Dispatcher<format::ApiCallId::ApiCall_vkDestroyDebugUtilsMessengerEXT, void, PFN_vkDestroyDebugUtilsMessengerEXT>::Dispatch(this, vkDestroyDebugUtilsMessengerEXT, in_instance, in_messenger, in_pAllocator);
}

void VulkanReplayConsumer::Process_vkSubmitDebugUtilsMessageEXT(
    format::HandleId                            instance,
    VkDebugUtilsMessageSeverityFlagBitsEXT      messageSeverity,
    VkDebugUtilsMessageTypeFlagsEXT             messageTypes,
    const StructPointerDecoder<Decoded_VkDebugUtilsMessengerCallbackDataEXT>& pCallbackData)
{
    VkInstance in_instance = GetObjectMapper().MapVkInstance(instance);
    const VkDebugUtilsMessengerCallbackDataEXT* in_pCallbackData = pCallbackData.GetPointer();

    Dispatcher<format::ApiCallId::ApiCall_vkSubmitDebugUtilsMessageEXT, void, PFN_vkSubmitDebugUtilsMessageEXT>::Dispatch(this, vkSubmitDebugUtilsMessageEXT, in_instance, messageSeverity, messageTypes, in_pCallbackData);
}

void VulkanReplayConsumer::Process_vkGetAndroidHardwareBufferPropertiesANDROID(
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint64_t                                    buffer,
    const StructPointerDecoder<Decoded_VkAndroidHardwareBufferPropertiesANDROID>& pProperties)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const struct AHardwareBuffer* in_buffer = static_cast<const struct AHardwareBuffer*>(PreProcessExternalObject(buffer, format::ApiCallId::ApiCall_vkGetAndroidHardwareBufferPropertiesANDROID, "vkGetAndroidHardwareBufferPropertiesANDROID"));
    VkAndroidHardwareBufferPropertiesANDROID out_pProperties_value = { VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_PROPERTIES_ANDROID, nullptr };
    VkAndroidHardwareBufferPropertiesANDROID* out_pProperties = &out_pProperties_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetAndroidHardwareBufferPropertiesANDROID, VkResult, PFN_vkGetAndroidHardwareBufferPropertiesANDROID>::Dispatch(this, returnValue, vkGetAndroidHardwareBufferPropertiesANDROID, in_device, in_buffer, out_pProperties);
    CheckResult("vkGetAndroidHardwareBufferPropertiesANDROID", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkGetMemoryAndroidHardwareBufferANDROID(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkMemoryGetAndroidHardwareBufferInfoANDROID>& pInfo,
    const PointerDecoder<uint64_t>&             pBuffer)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkMemoryGetAndroidHardwareBufferInfoANDROID* in_pInfo = pInfo.GetPointer();
    MapStructHandles(pInfo.GetMetaStructPointer(), GetObjectMapper());
    AHardwareBuffer* out_pBuffer_value = nullptr;
    struct AHardwareBuffer** out_pBuffer = &out_pBuffer_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetMemoryAndroidHardwareBufferANDROID, VkResult, PFN_vkGetMemoryAndroidHardwareBufferANDROID>::Dispatch(this, returnValue, vkGetMemoryAndroidHardwareBufferANDROID, in_device, in_pInfo, out_pBuffer);
    CheckResult("vkGetMemoryAndroidHardwareBufferANDROID", returnValue, replay_result);

    PostProcessExternalObject(pBuffer, static_cast<void*>(out_pBuffer_value), format::ApiCallId::ApiCall_vkGetMemoryAndroidHardwareBufferANDROID, "vkGetMemoryAndroidHardwareBufferANDROID");
}

void VulkanReplayConsumer::Process_vkCmdSetSampleLocationsEXT(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkSampleLocationsInfoEXT>& pSampleLocationsInfo)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    const VkSampleLocationsInfoEXT* in_pSampleLocationsInfo = pSampleLocationsInfo.GetPointer();

    Dispatcher<format::ApiCallId::ApiCall_vkCmdSetSampleLocationsEXT, void, PFN_vkCmdSetSampleLocationsEXT>::Dispatch(this, vkCmdSetSampleLocationsEXT, in_commandBuffer, in_pSampleLocationsInfo);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceMultisamplePropertiesEXT(
    format::HandleId                            physicalDevice,
    VkSampleCountFlagBits                       samples,
    const StructPointerDecoder<Decoded_VkMultisamplePropertiesEXT>& pMultisampleProperties)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    VkMultisamplePropertiesEXT out_pMultisampleProperties_value = { VK_STRUCTURE_TYPE_MULTISAMPLE_PROPERTIES_EXT, nullptr };
    VkMultisamplePropertiesEXT* out_pMultisampleProperties = &out_pMultisampleProperties_value;

    Dispatcher<format::ApiCallId::ApiCall_vkGetPhysicalDeviceMultisamplePropertiesEXT, void, PFN_vkGetPhysicalDeviceMultisamplePropertiesEXT>::Dispatch(this, vkGetPhysicalDeviceMultisamplePropertiesEXT, in_physicalDevice, samples, out_pMultisampleProperties);
}

void VulkanReplayConsumer::Process_vkGetImageDrmFormatModifierPropertiesEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            image,
    const StructPointerDecoder<Decoded_VkImageDrmFormatModifierPropertiesEXT>& pProperties)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkImage in_image = GetObjectMapper().MapVkImage(image);
    VkImageDrmFormatModifierPropertiesEXT out_pProperties_value = { VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT, nullptr };
    VkImageDrmFormatModifierPropertiesEXT* out_pProperties = &out_pProperties_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetImageDrmFormatModifierPropertiesEXT, VkResult, PFN_vkGetImageDrmFormatModifierPropertiesEXT>::Dispatch(this, returnValue, vkGetImageDrmFormatModifierPropertiesEXT, in_device, in_image, out_pProperties);
    CheckResult("vkGetImageDrmFormatModifierPropertiesEXT", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkCreateValidationCacheEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkValidationCacheCreateInfoEXT>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkValidationCacheEXT>& pValidationCache)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkValidationCacheCreateInfoEXT* in_pCreateInfo = pCreateInfo.GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkValidationCacheEXT out_pValidationCache_value = static_cast<VkValidationCacheEXT>(0);
    VkValidationCacheEXT* out_pValidationCache = &out_pValidationCache_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkCreateValidationCacheEXT, VkResult, PFN_vkCreateValidationCacheEXT>::Dispatch(this, returnValue, vkCreateValidationCacheEXT, in_device, in_pCreateInfo, in_pAllocator, out_pValidationCache);
    CheckResult("vkCreateValidationCacheEXT", returnValue, replay_result);

    AddHandles<VkValidationCacheEXT>(pValidationCache.GetPointer(), 1, out_pValidationCache, 1, &VulkanObjectMapper::AddVkValidationCacheEXT);
}

void VulkanReplayConsumer::Process_vkDestroyValidationCacheEXT(
    format::HandleId                            device,
    format::HandleId                            validationCache,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkValidationCacheEXT in_validationCache = GetObjectMapper().MapVkValidationCacheEXT(validationCache);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);

    Dispatcher<format::ApiCallId::ApiCall_vkDestroyValidationCacheEXT, void, PFN_vkDestroyValidationCacheEXT>::Dispatch(this, vkDestroyValidationCacheEXT, in_device, in_validationCache, in_pAllocator);
}

void VulkanReplayConsumer::Process_vkMergeValidationCachesEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            dstCache,
    uint32_t                                    srcCacheCount,
    const HandlePointerDecoder<VkValidationCacheEXT>& pSrcCaches)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkValidationCacheEXT in_dstCache = GetObjectMapper().MapVkValidationCacheEXT(dstCache);
    VkValidationCacheEXT* in_pSrcCaches = pSrcCaches.GetHandlePointer();
    MapHandles<VkValidationCacheEXT>(pSrcCaches.GetPointer(), pSrcCaches.GetLength(), in_pSrcCaches, srcCacheCount, &VulkanObjectMapper::MapVkValidationCacheEXT);

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkMergeValidationCachesEXT, VkResult, PFN_vkMergeValidationCachesEXT>::Dispatch(this, returnValue, vkMergeValidationCachesEXT, in_device, in_dstCache, srcCacheCount, in_pSrcCaches);
    CheckResult("vkMergeValidationCachesEXT", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkGetValidationCacheDataEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            validationCache,
    const PointerDecoder<size_t>&               pDataSize,
    const PointerDecoder<uint8_t>&              pData)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkValidationCacheEXT in_validationCache = GetObjectMapper().MapVkValidationCacheEXT(validationCache);
    size_t out_pDataSize_value = pDataSize.IsNull() ? static_cast<size_t>(0) : *(pDataSize.GetPointer());
    size_t* out_pDataSize = &out_pDataSize_value;
    uint8_t* out_pData = pData.IsNull() ? nullptr : AllocateArray<uint8_t>(out_pDataSize_value);

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetValidationCacheDataEXT, VkResult, PFN_vkGetValidationCacheDataEXT>::Dispatch(this, returnValue, vkGetValidationCacheDataEXT, in_device, in_validationCache, out_pDataSize, out_pData);
    CheckResult("vkGetValidationCacheDataEXT", returnValue, replay_result);

    FreeArray<uint8_t>(&out_pData);
}

void VulkanReplayConsumer::Process_vkCmdBindShadingRateImageNV(
    format::HandleId                            commandBuffer,
    format::HandleId                            imageView,
    VkImageLayout                               imageLayout)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    VkImageView in_imageView = GetObjectMapper().MapVkImageView(imageView);

    Dispatcher<format::ApiCallId::ApiCall_vkCmdBindShadingRateImageNV, void, PFN_vkCmdBindShadingRateImageNV>::Dispatch(this, vkCmdBindShadingRateImageNV, in_commandBuffer, in_imageView, imageLayout);
}

void VulkanReplayConsumer::Process_vkCmdSetViewportShadingRatePaletteNV(
    format::HandleId                            commandBuffer,
    uint32_t                                    firstViewport,
    uint32_t                                    viewportCount,
    const StructPointerDecoder<Decoded_VkShadingRatePaletteNV>& pShadingRatePalettes)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    const VkShadingRatePaletteNV* in_pShadingRatePalettes = pShadingRatePalettes.GetPointer();

    Dispatcher<format::ApiCallId::ApiCall_vkCmdSetViewportShadingRatePaletteNV, void, PFN_vkCmdSetViewportShadingRatePaletteNV>::Dispatch(this, vkCmdSetViewportShadingRatePaletteNV, in_commandBuffer, firstViewport, viewportCount, in_pShadingRatePalettes);
}

void VulkanReplayConsumer::Process_vkCmdSetCoarseSampleOrderNV(
    format::HandleId                            commandBuffer,
    VkCoarseSampleOrderTypeNV                   sampleOrderType,
    uint32_t                                    customSampleOrderCount,
    const StructPointerDecoder<Decoded_VkCoarseSampleOrderCustomNV>& pCustomSampleOrders)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    const VkCoarseSampleOrderCustomNV* in_pCustomSampleOrders = pCustomSampleOrders.GetPointer();

    Dispatcher<format::ApiCallId::ApiCall_vkCmdSetCoarseSampleOrderNV, void, PFN_vkCmdSetCoarseSampleOrderNV>::Dispatch(this, vkCmdSetCoarseSampleOrderNV, in_commandBuffer, sampleOrderType, customSampleOrderCount, in_pCustomSampleOrders);
}

void VulkanReplayConsumer::Process_vkCreateAccelerationStructureNV(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkAccelerationStructureCreateInfoNV>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkAccelerationStructureNV>& pAccelerationStructure)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkAccelerationStructureCreateInfoNV* in_pCreateInfo = pCreateInfo.GetPointer();
    MapStructHandles(pCreateInfo.GetMetaStructPointer(), GetObjectMapper());
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkAccelerationStructureNV out_pAccelerationStructure_value = static_cast<VkAccelerationStructureNV>(0);
    VkAccelerationStructureNV* out_pAccelerationStructure = &out_pAccelerationStructure_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkCreateAccelerationStructureNV, VkResult, PFN_vkCreateAccelerationStructureNV>::Dispatch(this, returnValue, vkCreateAccelerationStructureNV, in_device, in_pCreateInfo, in_pAllocator, out_pAccelerationStructure);
    CheckResult("vkCreateAccelerationStructureNV", returnValue, replay_result);

    AddHandles<VkAccelerationStructureNV>(pAccelerationStructure.GetPointer(), 1, out_pAccelerationStructure, 1, &VulkanObjectMapper::AddVkAccelerationStructureNV);
}

void VulkanReplayConsumer::Process_vkDestroyAccelerationStructureNV(
    format::HandleId                            device,
    format::HandleId                            accelerationStructure,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkAccelerationStructureNV in_accelerationStructure = GetObjectMapper().MapVkAccelerationStructureNV(accelerationStructure);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);

    Dispatcher<format::ApiCallId::ApiCall_vkDestroyAccelerationStructureNV, void, PFN_vkDestroyAccelerationStructureNV>::Dispatch(this, vkDestroyAccelerationStructureNV, in_device, in_accelerationStructure, in_pAllocator);
}

void VulkanReplayConsumer::Process_vkGetAccelerationStructureMemoryRequirementsNV(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkAccelerationStructureMemoryRequirementsInfoNV>& pInfo,
    const StructPointerDecoder<Decoded_VkMemoryRequirements2KHR>& pMemoryRequirements)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkAccelerationStructureMemoryRequirementsInfoNV* in_pInfo = pInfo.GetPointer();
    MapStructHandles(pInfo.GetMetaStructPointer(), GetObjectMapper());
    VkMemoryRequirements2KHR out_pMemoryRequirements_value = {};
    VkMemoryRequirements2KHR* out_pMemoryRequirements = &out_pMemoryRequirements_value;

    Dispatcher<format::ApiCallId::ApiCall_vkGetAccelerationStructureMemoryRequirementsNV, void, PFN_vkGetAccelerationStructureMemoryRequirementsNV>::Dispatch(this, vkGetAccelerationStructureMemoryRequirementsNV, in_device, in_pInfo, out_pMemoryRequirements);
}

void VulkanReplayConsumer::Process_vkBindAccelerationStructureMemoryNV(
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    bindInfoCount,
    const StructPointerDecoder<Decoded_VkBindAccelerationStructureMemoryInfoNV>& pBindInfos)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkBindAccelerationStructureMemoryInfoNV* in_pBindInfos = pBindInfos.GetPointer();
    MapStructArrayHandles(pBindInfos.GetMetaStructPointer(), pBindInfos.GetLength(), GetObjectMapper());

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkBindAccelerationStructureMemoryNV, VkResult, PFN_vkBindAccelerationStructureMemoryNV>::Dispatch(this, returnValue, vkBindAccelerationStructureMemoryNV, in_device, bindInfoCount, in_pBindInfos);
    CheckResult("vkBindAccelerationStructureMemoryNV", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkCmdBuildAccelerationStructureNV(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkAccelerationStructureInfoNV>& pInfo,
    format::HandleId                            instanceData,
    VkDeviceSize                                instanceOffset,
    VkBool32                                    update,
    format::HandleId                            dst,
    format::HandleId                            src,
    format::HandleId                            scratch,
    VkDeviceSize                                scratchOffset)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    const VkAccelerationStructureInfoNV* in_pInfo = pInfo.GetPointer();
    MapStructHandles(pInfo.GetMetaStructPointer(), GetObjectMapper());
    VkBuffer in_instanceData = GetObjectMapper().MapVkBuffer(instanceData);
    VkAccelerationStructureNV in_dst = GetObjectMapper().MapVkAccelerationStructureNV(dst);
    VkAccelerationStructureNV in_src = GetObjectMapper().MapVkAccelerationStructureNV(src);
    VkBuffer in_scratch = GetObjectMapper().MapVkBuffer(scratch);

    Dispatcher<format::ApiCallId::ApiCall_vkCmdBuildAccelerationStructureNV, void, PFN_vkCmdBuildAccelerationStructureNV>::Dispatch(this, vkCmdBuildAccelerationStructureNV, in_commandBuffer, in_pInfo, in_instanceData, instanceOffset, update, in_dst, in_src, in_scratch, scratchOffset);
}

void VulkanReplayConsumer::Process_vkCmdCopyAccelerationStructureNV(
    format::HandleId                            commandBuffer,
    format::HandleId                            dst,
    format::HandleId                            src,
    VkCopyAccelerationStructureModeNV           mode)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    VkAccelerationStructureNV in_dst = GetObjectMapper().MapVkAccelerationStructureNV(dst);
    VkAccelerationStructureNV in_src = GetObjectMapper().MapVkAccelerationStructureNV(src);

    Dispatcher<format::ApiCallId::ApiCall_vkCmdCopyAccelerationStructureNV, void, PFN_vkCmdCopyAccelerationStructureNV>::Dispatch(this, vkCmdCopyAccelerationStructureNV, in_commandBuffer, in_dst, in_src, mode);
}

void VulkanReplayConsumer::Process_vkCmdTraceRaysNV(
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
    uint32_t                                    depth)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    VkBuffer in_raygenShaderBindingTableBuffer = GetObjectMapper().MapVkBuffer(raygenShaderBindingTableBuffer);
    VkBuffer in_missShaderBindingTableBuffer = GetObjectMapper().MapVkBuffer(missShaderBindingTableBuffer);
    VkBuffer in_hitShaderBindingTableBuffer = GetObjectMapper().MapVkBuffer(hitShaderBindingTableBuffer);
    VkBuffer in_callableShaderBindingTableBuffer = GetObjectMapper().MapVkBuffer(callableShaderBindingTableBuffer);

    Dispatcher<format::ApiCallId::ApiCall_vkCmdTraceRaysNV, void, PFN_vkCmdTraceRaysNV>::Dispatch(this, vkCmdTraceRaysNV, in_commandBuffer, in_raygenShaderBindingTableBuffer, raygenShaderBindingOffset, in_missShaderBindingTableBuffer, missShaderBindingOffset, missShaderBindingStride, in_hitShaderBindingTableBuffer, hitShaderBindingOffset, hitShaderBindingStride, in_callableShaderBindingTableBuffer, callableShaderBindingOffset, callableShaderBindingStride, width, height, depth);
}

void VulkanReplayConsumer::Process_vkCreateRayTracingPipelinesNV(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            pipelineCache,
    uint32_t                                    createInfoCount,
    const StructPointerDecoder<Decoded_VkRayTracingPipelineCreateInfoNV>& pCreateInfos,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkPipeline>&     pPipelines)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkPipelineCache in_pipelineCache = GetObjectMapper().MapVkPipelineCache(pipelineCache);
    const VkRayTracingPipelineCreateInfoNV* in_pCreateInfos = pCreateInfos.GetPointer();
    MapStructArrayHandles(pCreateInfos.GetMetaStructPointer(), pCreateInfos.GetLength(), GetObjectMapper());
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkPipeline* out_pPipelines = pPipelines.GetHandlePointer();

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkCreateRayTracingPipelinesNV, VkResult, PFN_vkCreateRayTracingPipelinesNV>::Dispatch(this, returnValue, vkCreateRayTracingPipelinesNV, in_device, in_pipelineCache, createInfoCount, in_pCreateInfos, in_pAllocator, out_pPipelines);
    CheckResult("vkCreateRayTracingPipelinesNV", returnValue, replay_result);

    AddHandles<VkPipeline>(pPipelines.GetPointer(), pPipelines.GetLength(), out_pPipelines, createInfoCount, &VulkanObjectMapper::AddVkPipeline);
}

void VulkanReplayConsumer::Process_vkGetRayTracingShaderGroupHandlesNV(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            pipeline,
    uint32_t                                    firstGroup,
    uint32_t                                    groupCount,
    size_t                                      dataSize,
    const PointerDecoder<uint8_t>&              pData)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkPipeline in_pipeline = GetObjectMapper().MapVkPipeline(pipeline);
    uint8_t* out_pData = pData.IsNull() ? nullptr : AllocateArray<uint8_t>(dataSize);

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetRayTracingShaderGroupHandlesNV, VkResult, PFN_vkGetRayTracingShaderGroupHandlesNV>::Dispatch(this, returnValue, vkGetRayTracingShaderGroupHandlesNV, in_device, in_pipeline, firstGroup, groupCount, dataSize, out_pData);
    CheckResult("vkGetRayTracingShaderGroupHandlesNV", returnValue, replay_result);

    FreeArray<uint8_t>(&out_pData);
}

void VulkanReplayConsumer::Process_vkGetAccelerationStructureHandleNV(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            accelerationStructure,
    size_t                                      dataSize,
    const PointerDecoder<uint8_t>&              pData)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkAccelerationStructureNV in_accelerationStructure = GetObjectMapper().MapVkAccelerationStructureNV(accelerationStructure);
    uint8_t* out_pData = pData.IsNull() ? nullptr : AllocateArray<uint8_t>(dataSize);

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetAccelerationStructureHandleNV, VkResult, PFN_vkGetAccelerationStructureHandleNV>::Dispatch(this, returnValue, vkGetAccelerationStructureHandleNV, in_device, in_accelerationStructure, dataSize, out_pData);
    CheckResult("vkGetAccelerationStructureHandleNV", returnValue, replay_result);

    FreeArray<uint8_t>(&out_pData);
}

void VulkanReplayConsumer::Process_vkCmdWriteAccelerationStructuresPropertiesNV(
    format::HandleId                            commandBuffer,
    uint32_t                                    accelerationStructureCount,
    const HandlePointerDecoder<VkAccelerationStructureNV>& pAccelerationStructures,
    VkQueryType                                 queryType,
    format::HandleId                            queryPool,
    uint32_t                                    firstQuery)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    VkAccelerationStructureNV* in_pAccelerationStructures = pAccelerationStructures.GetHandlePointer();
    MapHandles<VkAccelerationStructureNV>(pAccelerationStructures.GetPointer(), pAccelerationStructures.GetLength(), in_pAccelerationStructures, accelerationStructureCount, &VulkanObjectMapper::MapVkAccelerationStructureNV);
    VkQueryPool in_queryPool = GetObjectMapper().MapVkQueryPool(queryPool);

    Dispatcher<format::ApiCallId::ApiCall_vkCmdWriteAccelerationStructuresPropertiesNV, void, PFN_vkCmdWriteAccelerationStructuresPropertiesNV>::Dispatch(this, vkCmdWriteAccelerationStructuresPropertiesNV, in_commandBuffer, accelerationStructureCount, in_pAccelerationStructures, queryType, in_queryPool, firstQuery);
}

void VulkanReplayConsumer::Process_vkCompileDeferredNV(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            pipeline,
    uint32_t                                    shader)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    VkPipeline in_pipeline = GetObjectMapper().MapVkPipeline(pipeline);

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkCompileDeferredNV, VkResult, PFN_vkCompileDeferredNV>::Dispatch(this, returnValue, vkCompileDeferredNV, in_device, in_pipeline, shader);
    CheckResult("vkCompileDeferredNV", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkGetMemoryHostPointerPropertiesEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    VkExternalMemoryHandleTypeFlagBits          handleType,
    uint64_t                                    pHostPointer,
    const StructPointerDecoder<Decoded_VkMemoryHostPointerPropertiesEXT>& pMemoryHostPointerProperties)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const void* in_pHostPointer = PreProcessExternalObject(pHostPointer, format::ApiCallId::ApiCall_vkGetMemoryHostPointerPropertiesEXT, "vkGetMemoryHostPointerPropertiesEXT");
    VkMemoryHostPointerPropertiesEXT out_pMemoryHostPointerProperties_value = { VK_STRUCTURE_TYPE_MEMORY_HOST_POINTER_PROPERTIES_EXT, nullptr };
    VkMemoryHostPointerPropertiesEXT* out_pMemoryHostPointerProperties = &out_pMemoryHostPointerProperties_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetMemoryHostPointerPropertiesEXT, VkResult, PFN_vkGetMemoryHostPointerPropertiesEXT>::Dispatch(this, returnValue, vkGetMemoryHostPointerPropertiesEXT, in_device, handleType, in_pHostPointer, out_pMemoryHostPointerProperties);
    CheckResult("vkGetMemoryHostPointerPropertiesEXT", returnValue, replay_result);
}

void VulkanReplayConsumer::Process_vkCmdWriteBufferMarkerAMD(
    format::HandleId                            commandBuffer,
    VkPipelineStageFlagBits                     pipelineStage,
    format::HandleId                            dstBuffer,
    VkDeviceSize                                dstOffset,
    uint32_t                                    marker)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    VkBuffer in_dstBuffer = GetObjectMapper().MapVkBuffer(dstBuffer);

    Dispatcher<format::ApiCallId::ApiCall_vkCmdWriteBufferMarkerAMD, void, PFN_vkCmdWriteBufferMarkerAMD>::Dispatch(this, vkCmdWriteBufferMarkerAMD, in_commandBuffer, pipelineStage, in_dstBuffer, dstOffset, marker);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const PointerDecoder<uint32_t>&             pTimeDomainCount,
    const PointerDecoder<VkTimeDomainEXT>&      pTimeDomains)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    uint32_t out_pTimeDomainCount_value = pTimeDomainCount.IsNull() ? static_cast<uint32_t>(0) : *(pTimeDomainCount.GetPointer());
    uint32_t* out_pTimeDomainCount = &out_pTimeDomainCount_value;
    VkTimeDomainEXT* out_pTimeDomains = pTimeDomains.IsNull() ? nullptr : AllocateArray<VkTimeDomainEXT>(out_pTimeDomainCount_value);

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT, VkResult, PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT>::Dispatch(this, returnValue, vkGetPhysicalDeviceCalibrateableTimeDomainsEXT, in_physicalDevice, out_pTimeDomainCount, out_pTimeDomains);
    CheckResult("vkGetPhysicalDeviceCalibrateableTimeDomainsEXT", returnValue, replay_result);

    FreeArray<VkTimeDomainEXT>(&out_pTimeDomains);
}

void VulkanReplayConsumer::Process_vkGetCalibratedTimestampsEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    timestampCount,
    const StructPointerDecoder<Decoded_VkCalibratedTimestampInfoEXT>& pTimestampInfos,
    const PointerDecoder<uint64_t>&             pTimestamps,
    const PointerDecoder<uint64_t>&             pMaxDeviation)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkCalibratedTimestampInfoEXT* in_pTimestampInfos = pTimestampInfos.GetPointer();
    uint64_t* out_pTimestamps = pTimestamps.IsNull() ? nullptr : AllocateArray<uint64_t>(timestampCount);
    uint64_t out_pMaxDeviation_value = static_cast<uint64_t>(0);
    uint64_t* out_pMaxDeviation = &out_pMaxDeviation_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetCalibratedTimestampsEXT, VkResult, PFN_vkGetCalibratedTimestampsEXT>::Dispatch(this, returnValue, vkGetCalibratedTimestampsEXT, in_device, timestampCount, in_pTimestampInfos, out_pTimestamps, out_pMaxDeviation);
    CheckResult("vkGetCalibratedTimestampsEXT", returnValue, replay_result);

    FreeArray<uint64_t>(&out_pTimestamps);
}

void VulkanReplayConsumer::Process_vkCmdDrawMeshTasksNV(
    format::HandleId                            commandBuffer,
    uint32_t                                    taskCount,
    uint32_t                                    firstTask)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);

    Dispatcher<format::ApiCallId::ApiCall_vkCmdDrawMeshTasksNV, void, PFN_vkCmdDrawMeshTasksNV>::Dispatch(this, vkCmdDrawMeshTasksNV, in_commandBuffer, taskCount, firstTask);
}

void VulkanReplayConsumer::Process_vkCmdDrawMeshTasksIndirectNV(
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    uint32_t                                    drawCount,
    uint32_t                                    stride)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    VkBuffer in_buffer = GetObjectMapper().MapVkBuffer(buffer);

    Dispatcher<format::ApiCallId::ApiCall_vkCmdDrawMeshTasksIndirectNV, void, PFN_vkCmdDrawMeshTasksIndirectNV>::Dispatch(this, vkCmdDrawMeshTasksIndirectNV, in_commandBuffer, in_buffer, offset, drawCount, stride);
}

void VulkanReplayConsumer::Process_vkCmdDrawMeshTasksIndirectCountNV(
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    format::HandleId                            countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    VkBuffer in_buffer = GetObjectMapper().MapVkBuffer(buffer);
    VkBuffer in_countBuffer = GetObjectMapper().MapVkBuffer(countBuffer);

    Dispatcher<format::ApiCallId::ApiCall_vkCmdDrawMeshTasksIndirectCountNV, void, PFN_vkCmdDrawMeshTasksIndirectCountNV>::Dispatch(this, vkCmdDrawMeshTasksIndirectCountNV, in_commandBuffer, in_buffer, offset, in_countBuffer, countBufferOffset, maxDrawCount, stride);
}

void VulkanReplayConsumer::Process_vkCmdSetExclusiveScissorNV(
    format::HandleId                            commandBuffer,
    uint32_t                                    firstExclusiveScissor,
    uint32_t                                    exclusiveScissorCount,
    const StructPointerDecoder<Decoded_VkRect2D>& pExclusiveScissors)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    const VkRect2D* in_pExclusiveScissors = pExclusiveScissors.GetPointer();

    Dispatcher<format::ApiCallId::ApiCall_vkCmdSetExclusiveScissorNV, void, PFN_vkCmdSetExclusiveScissorNV>::Dispatch(this, vkCmdSetExclusiveScissorNV, in_commandBuffer, firstExclusiveScissor, exclusiveScissorCount, in_pExclusiveScissors);
}

void VulkanReplayConsumer::Process_vkCmdSetCheckpointNV(
    format::HandleId                            commandBuffer,
    uint64_t                                    pCheckpointMarker)
{
    VkCommandBuffer in_commandBuffer = GetObjectMapper().MapVkCommandBuffer(commandBuffer);
    const void* in_pCheckpointMarker = PreProcessExternalObject(pCheckpointMarker, format::ApiCallId::ApiCall_vkCmdSetCheckpointNV, "vkCmdSetCheckpointNV");

    Dispatcher<format::ApiCallId::ApiCall_vkCmdSetCheckpointNV, void, PFN_vkCmdSetCheckpointNV>::Dispatch(this, vkCmdSetCheckpointNV, in_commandBuffer, in_pCheckpointMarker);
}

void VulkanReplayConsumer::Process_vkGetQueueCheckpointDataNV(
    format::HandleId                            queue,
    const PointerDecoder<uint32_t>&             pCheckpointDataCount,
    const StructPointerDecoder<Decoded_VkCheckpointDataNV>& pCheckpointData)
{
    VkQueue in_queue = GetObjectMapper().MapVkQueue(queue);
    uint32_t out_pCheckpointDataCount_value = pCheckpointDataCount.IsNull() ? static_cast<uint32_t>(0) : *(pCheckpointDataCount.GetPointer());
    uint32_t* out_pCheckpointDataCount = &out_pCheckpointDataCount_value;
    VkCheckpointDataNV* out_pCheckpointData = pCheckpointData.IsNull() ? nullptr : AllocateArray<VkCheckpointDataNV>(out_pCheckpointDataCount_value, VkCheckpointDataNV{ VK_STRUCTURE_TYPE_CHECKPOINT_DATA_NV, nullptr });

    Dispatcher<format::ApiCallId::ApiCall_vkGetQueueCheckpointDataNV, void, PFN_vkGetQueueCheckpointDataNV>::Dispatch(this, vkGetQueueCheckpointDataNV, in_queue, out_pCheckpointDataCount, out_pCheckpointData);

    FreeArray<VkCheckpointDataNV>(&out_pCheckpointData);
}

void VulkanReplayConsumer::Process_vkCreateImagePipeSurfaceFUCHSIA(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkImagePipeSurfaceCreateInfoFUCHSIA>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    VkInstance in_instance = GetObjectMapper().MapVkInstance(instance);
    const VkImagePipeSurfaceCreateInfoFUCHSIA* in_pCreateInfo = pCreateInfo.GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkSurfaceKHR out_pSurface_value = static_cast<VkSurfaceKHR>(0);
    VkSurfaceKHR* out_pSurface = &out_pSurface_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkCreateImagePipeSurfaceFUCHSIA, VkResult, PFN_vkCreateImagePipeSurfaceFUCHSIA>::Dispatch(this, returnValue, vkCreateImagePipeSurfaceFUCHSIA, in_instance, in_pCreateInfo, in_pAllocator, out_pSurface);
    CheckResult("vkCreateImagePipeSurfaceFUCHSIA", returnValue, replay_result);

    AddHandles<VkSurfaceKHR>(pSurface.GetPointer(), 1, out_pSurface, 1, &VulkanObjectMapper::AddVkSurfaceKHR);
}

void VulkanReplayConsumer::Process_vkCreateMetalSurfaceEXT(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkMetalSurfaceCreateInfoEXT>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    VkInstance in_instance = GetObjectMapper().MapVkInstance(instance);
    const VkMetalSurfaceCreateInfoEXT* in_pCreateInfo = pCreateInfo.GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    VkSurfaceKHR out_pSurface_value = static_cast<VkSurfaceKHR>(0);
    VkSurfaceKHR* out_pSurface = &out_pSurface_value;

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkCreateMetalSurfaceEXT, VkResult, PFN_vkCreateMetalSurfaceEXT>::Dispatch(this, returnValue, vkCreateMetalSurfaceEXT, in_instance, in_pCreateInfo, in_pAllocator, out_pSurface);
    CheckResult("vkCreateMetalSurfaceEXT", returnValue, replay_result);

    AddHandles<VkSurfaceKHR>(pSurface.GetPointer(), 1, out_pSurface, 1, &VulkanObjectMapper::AddVkSurfaceKHR);
}

void VulkanReplayConsumer::Process_vkGetBufferDeviceAddressEXT(
    VkDeviceAddress                             returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkBufferDeviceAddressInfoEXT>& pInfo)
{
    VkDevice in_device = GetObjectMapper().MapVkDevice(device);
    const VkBufferDeviceAddressInfoEXT* in_pInfo = pInfo.GetPointer();
    MapStructHandles(pInfo.GetMetaStructPointer(), GetObjectMapper());

    Dispatcher<format::ApiCallId::ApiCall_vkGetBufferDeviceAddressEXT, VkDeviceAddress, PFN_vkGetBufferDeviceAddressEXT>::Dispatch(this, vkGetBufferDeviceAddressEXT, in_device, in_pInfo);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const PointerDecoder<uint32_t>&             pPropertyCount,
    const StructPointerDecoder<Decoded_VkCooperativeMatrixPropertiesNV>& pProperties)
{
    VkPhysicalDevice in_physicalDevice = GetObjectMapper().MapVkPhysicalDevice(physicalDevice);
    uint32_t out_pPropertyCount_value = pPropertyCount.IsNull() ? static_cast<uint32_t>(0) : *(pPropertyCount.GetPointer());
    uint32_t* out_pPropertyCount = &out_pPropertyCount_value;
    VkCooperativeMatrixPropertiesNV* out_pProperties = pProperties.IsNull() ? nullptr : AllocateArray<VkCooperativeMatrixPropertiesNV>(out_pPropertyCount_value, VkCooperativeMatrixPropertiesNV{ VK_STRUCTURE_TYPE_COOPERATIVE_MATRIX_PROPERTIES_NV, nullptr });

    VkResult replay_result = Dispatcher<format::ApiCallId::ApiCall_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV, VkResult, PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV>::Dispatch(this, returnValue, vkGetPhysicalDeviceCooperativeMatrixPropertiesNV, in_physicalDevice, out_pPropertyCount, out_pProperties);
    CheckResult("vkGetPhysicalDeviceCooperativeMatrixPropertiesNV", returnValue, replay_result);

    FreeArray<VkCooperativeMatrixPropertiesNV>(&out_pProperties);
}

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)
