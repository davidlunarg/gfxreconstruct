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

#include "generated/generated_vulkan_replay_consumer.h"

#include "decode/custom_vulkan_struct_handle_mappers.h"
#include "decode/vulkan_handle_mapping_util.h"
#include "generated/generated_vulkan_dispatch_table.h"
#include "generated/generated_vulkan_struct_handle_mappers.h"
#include "util/defines.h"

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)

template <typename T>
void InitializeOutputStructPNext(StructPointerDecoder<T> *decoder);

void VulkanReplayConsumer::Process_vkCreateInstance(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    StructPointerDecoder<Decoded_VkInstanceCreateInfo>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkInstance>*           pInstance)
{
    if (!pInstance->IsNull()) { pInstance->SetHandleLength(1); }
    InstanceInfo handle_info;
    pInstance->SetConsumerData(0, &handle_info);//@@@DFK
    VkResult replay_result = OverrideCreateInstance(returnValue, pCreateInfo, pAllocator, pInstance);
    CheckResult("vkCreateInstance", returnValue, replay_result, call_info);

    AddHandle<InstanceInfo>(format::kNullHandleId, pInstance->GetPointer(), pInstance->GetHandlePointer(), std::move(handle_info), &VulkanObjectInfoTable::AddInstanceInfo);
}

void VulkanReplayConsumer::Process_vkDestroyInstance(
    const ApiCallInfo&                          call_info,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator)
{
    VkInstance in_instance = MapHandle<InstanceInfo>(instance, &VulkanObjectInfoTable::GetInstanceInfo);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);//@@@DFK
    GetInstanceTable(in_instance)->DestroyInstance(in_instance, in_pAllocator);//@@@HQA
    RemoveHandle(instance, &VulkanObjectInfoTable::RemoveInstanceInfo);
}

void VulkanReplayConsumer::Process_vkEnumeratePhysicalDevices(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    PointerDecoder<uint32_t>*                   pPhysicalDeviceCount,
    HandlePointerDecoder<VkPhysicalDevice>*     pPhysicalDevices)
{
    auto in_instance = GetObjectInfoTable().GetInstanceInfo(instance);
    pPhysicalDeviceCount->IsNull() ? nullptr : pPhysicalDeviceCount->AllocateOutputData(1, GetOutputArrayCount<uint32_t, InstanceInfo>("vkEnumeratePhysicalDevices", returnValue, instance, kInstanceArrayEnumeratePhysicalDevices, pPhysicalDeviceCount, pPhysicalDevices, &VulkanObjectInfoTable::GetInstanceInfo));
    if (!pPhysicalDevices->IsNull()) { pPhysicalDevices->SetHandleLength(*pPhysicalDeviceCount->GetOutputPointer()); }
    std::vector<PhysicalDeviceInfo> handle_info(*pPhysicalDeviceCount->GetOutputPointer());
    for (size_t i = 0; i < *pPhysicalDeviceCount->GetOutputPointer(); ++i) { pPhysicalDevices->SetConsumerData(i, &handle_info[i]); }//@@@DFK
    VkResult replay_result = OverrideEnumeratePhysicalDevices(GetInstanceTable(in_instance->handle)->EnumeratePhysicalDevices, returnValue, in_instance, pPhysicalDeviceCount, pPhysicalDevices);
    CheckResult("vkEnumeratePhysicalDevices", returnValue, replay_result, call_info);

    if (pPhysicalDevices->IsNull()) { SetOutputArrayCount<InstanceInfo>(instance, kInstanceArrayEnumeratePhysicalDevices, *pPhysicalDeviceCount->GetOutputPointer(), &VulkanObjectInfoTable::GetInstanceInfo); }
    AddHandles<PhysicalDeviceInfo>(instance, pPhysicalDevices->GetPointer(), pPhysicalDevices->GetLength(), pPhysicalDevices->GetHandlePointer(), *pPhysicalDeviceCount->GetOutputPointer(), std::move(handle_info), &VulkanObjectInfoTable::AddPhysicalDeviceInfo);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceFeatures(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceFeatures>/*@@@PLQ*/* pFeatures)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    VkPhysicalDeviceFeatures* out_pFeatures = pFeatures->IsNull() ? nullptr : pFeatures->AllocateOutputData(1);//@@@DFK
    GetInstanceTable(in_physicalDevice)->GetPhysicalDeviceFeatures(in_physicalDevice, out_pFeatures);//@@@HQA
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceFormatProperties(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    VkFormat                                    format,
    StructPointerDecoder<Decoded_VkFormatProperties>/*@@@PLQ*/* pFormatProperties)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    VkFormatProperties* out_pFormatProperties = pFormatProperties->IsNull() ? nullptr : pFormatProperties->AllocateOutputData(1);//@@@DFK
    GetInstanceTable(in_physicalDevice)->GetPhysicalDeviceFormatProperties(in_physicalDevice, format, out_pFormatProperties);//@@@HQA
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceImageFormatProperties(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    VkFormat                                    format,
    VkImageType                                 type,
    VkImageTiling                               tiling,
    VkImageUsageFlags                           usage,
    VkImageCreateFlags                          flags,
    StructPointerDecoder<Decoded_VkImageFormatProperties>/*@@@PLQ*/* pImageFormatProperties)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    VkImageFormatProperties* out_pImageFormatProperties = pImageFormatProperties->IsNull() ? nullptr : pImageFormatProperties->AllocateOutputData(1);//@@@DFK
    VkResult replay_result = GetInstanceTable(in_physicalDevice)->GetPhysicalDeviceImageFormatProperties(in_physicalDevice, format, type, tiling, usage, flags, out_pImageFormatProperties);
    CheckResult("vkGetPhysicalDeviceImageFormatProperties", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceProperties(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceProperties>/*@@@PLQ*/* pProperties)
{
    auto in_physicalDevice = GetObjectInfoTable().GetPhysicalDeviceInfo(physicalDevice);
    pProperties->IsNull() ? nullptr : pProperties->AllocateOutputData(1);//@@@DFK
    OverrideGetPhysicalDeviceProperties(GetInstanceTable(in_physicalDevice->handle)->GetPhysicalDeviceProperties, in_physicalDevice, pProperties);//@@@HQA
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceQueueFamilyProperties(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    PointerDecoder<uint32_t>*                   pQueueFamilyPropertyCount,
    StructPointerDecoder<Decoded_VkQueueFamilyProperties>/*@@@PLQ*/* pQueueFamilyProperties)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    uint32_t* out_pQueueFamilyPropertyCount = pQueueFamilyPropertyCount->IsNull() ? nullptr : pQueueFamilyPropertyCount->AllocateOutputData(1, GetOutputArrayCount<uint32_t, PhysicalDeviceInfo>("vkGetPhysicalDeviceQueueFamilyProperties", VK_SUCCESS, physicalDevice, kPhysicalDeviceArrayGetPhysicalDeviceQueueFamilyProperties, pQueueFamilyPropertyCount, pQueueFamilyProperties, &VulkanObjectInfoTable::GetPhysicalDeviceInfo));
    VkQueueFamilyProperties* out_pQueueFamilyProperties = pQueueFamilyProperties->IsNull() ? nullptr : pQueueFamilyProperties->AllocateOutputData(*out_pQueueFamilyPropertyCount);//@@@DFK
    GetInstanceTable(in_physicalDevice)->GetPhysicalDeviceQueueFamilyProperties(in_physicalDevice, out_pQueueFamilyPropertyCount, out_pQueueFamilyProperties);//@@@HQA

    if (pQueueFamilyProperties->IsNull()) { SetOutputArrayCount<PhysicalDeviceInfo>(physicalDevice, kPhysicalDeviceArrayGetPhysicalDeviceQueueFamilyProperties, *out_pQueueFamilyPropertyCount, &VulkanObjectInfoTable::GetPhysicalDeviceInfo); }
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceMemoryProperties(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceMemoryProperties>/*@@@PLQ*/* pMemoryProperties)
{
    auto in_physicalDevice = GetObjectInfoTable().GetPhysicalDeviceInfo(physicalDevice);
    pMemoryProperties->IsNull() ? nullptr : pMemoryProperties->AllocateOutputData(1);//@@@DFK
    OverrideGetPhysicalDeviceMemoryProperties(GetInstanceTable(in_physicalDevice->handle)->GetPhysicalDeviceMemoryProperties, in_physicalDevice, pMemoryProperties);//@@@HQA
}

void VulkanReplayConsumer::Process_vkCreateDevice(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkDeviceCreateInfo>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkDevice>*             pDevice)
{
    auto in_physicalDevice = GetObjectInfoTable().GetPhysicalDeviceInfo(physicalDevice);

    MapStructHandles(pCreateInfo->GetMetaStructPointer(), GetObjectInfoTable());
    if (!pDevice->IsNull()) { pDevice->SetHandleLength(1); }
    DeviceInfo handle_info;
    pDevice->SetConsumerData(0, &handle_info);//@@@DFK
    VkResult replay_result = OverrideCreateDevice(returnValue, in_physicalDevice, pCreateInfo, pAllocator, pDevice);
    CheckResult("vkCreateDevice", returnValue, replay_result, call_info);

    AddHandle<DeviceInfo>(physicalDevice, pDevice->GetPointer(), pDevice->GetHandlePointer(), std::move(handle_info), &VulkanObjectInfoTable::AddDeviceInfo);
}

void VulkanReplayConsumer::Process_vkDestroyDevice(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);//@@@DFK
    OverrideDestroyDevice(GetDeviceTable(in_device->handle)->DestroyDevice, in_device, pAllocator);//@@@HQA
    RemoveHandle(device, &VulkanObjectInfoTable::RemoveDeviceInfo);
}

void VulkanReplayConsumer::Process_vkGetDeviceQueue(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    uint32_t                                    queueFamilyIndex,
    uint32_t                                    queueIndex,
    HandlePointerDecoder<VkQueue>*              pQueue)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);
    if (!pQueue->IsNull()) { pQueue->SetHandleLength(1); }
    QueueInfo handle_info;
    pQueue->SetConsumerData(0, &handle_info);//@@@DFK
    OverrideGetDeviceQueue(GetDeviceTable(in_device->handle)->GetDeviceQueue, in_device, queueFamilyIndex, queueIndex, pQueue);//@@@HQA

    AddHandle<QueueInfo>(device, pQueue->GetPointer(), pQueue->GetHandlePointer(), std::move(handle_info), &VulkanObjectInfoTable::AddQueueInfo);
}

void VulkanReplayConsumer::Process_vkQueueSubmit(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            queue,
    uint32_t                                    submitCount,
    StructPointerDecoder<Decoded_VkSubmitInfo>/*@@@PLQ*/* pSubmits,
    format::HandleId                            fence)
{
    auto in_queue = GetObjectInfoTable().GetQueueInfo(queue);

    MapStructArrayHandles(pSubmits->GetMetaStructPointer(), pSubmits->GetLength(), GetObjectInfoTable());
    auto in_fence = GetObjectInfoTable().GetFenceInfo(fence);//@@@DFK
    VkResult replay_result = OverrideQueueSubmit(GetDeviceTable(in_queue->handle)->QueueSubmit, call_info.index, returnValue, in_queue, submitCount, pSubmits, in_fence) /*@@@RFD*/;
    CheckResult("vkQueueSubmit", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkQueueWaitIdle(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            queue)
{
    VkQueue in_queue = MapHandle<QueueInfo>(queue, &VulkanObjectInfoTable::GetQueueInfo);//@@@DFK
    VkResult replay_result = GetDeviceTable(in_queue)->QueueWaitIdle(in_queue);
    CheckResult("vkQueueWaitIdle", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkDeviceWaitIdle(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->DeviceWaitIdle(in_device);
    CheckResult("vkDeviceWaitIdle", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkAllocateMemory(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkMemoryAllocateInfo>/*@@@PLQ*/* pAllocateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkDeviceMemory>*       pMemory)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);

    MapStructHandles(pAllocateInfo->GetMetaStructPointer(), GetObjectInfoTable());
    if (!pMemory->IsNull()) { pMemory->SetHandleLength(1); }
    DeviceMemoryInfo handle_info;
    pMemory->SetConsumerData(0, &handle_info);//@@@DFK
    VkResult replay_result = OverrideAllocateMemory(GetDeviceTable(in_device->handle)->AllocateMemory, returnValue, in_device, pAllocateInfo, pAllocator, pMemory);
    CheckResult("vkAllocateMemory", returnValue, replay_result, call_info);

    AddHandle<DeviceMemoryInfo>(device, pMemory->GetPointer(), pMemory->GetHandlePointer(), std::move(handle_info), &VulkanObjectInfoTable::AddDeviceMemoryInfo);
}

void VulkanReplayConsumer::Process_vkFreeMemory(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            memory,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);
    auto in_memory = GetObjectInfoTable().GetDeviceMemoryInfo(memory);//@@@DFK
    OverrideFreeMemory(GetDeviceTable(in_device->handle)->FreeMemory, in_device, in_memory, pAllocator);//@@@HQA
    RemoveHandle(memory, &VulkanObjectInfoTable::RemoveDeviceMemoryInfo);
}

void VulkanReplayConsumer::Process_vkMapMemory(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            memory,
    VkDeviceSize                                offset,
    VkDeviceSize                                size,
    VkMemoryMapFlags                            flags,
    PointerDecoder<uint64_t, void*>*            ppData)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);
    auto in_memory = GetObjectInfoTable().GetDeviceMemoryInfo(memory);
    void** out_ppData = ppData->IsNull() ? nullptr : ppData->AllocateOutputData(1);//@@@DFK
    VkResult replay_result = OverrideMapMemory(GetDeviceTable(in_device->handle)->MapMemory, returnValue, in_device, in_memory, offset, size, flags, out_ppData);
    CheckResult("vkMapMemory", returnValue, replay_result, call_info);

    PostProcessExternalObject(replay_result, (*ppData->GetPointer()), *ppData->GetOutputPointer(), format::ApiCallId::ApiCall_vkMapMemory, "vkMapMemory");
}

void VulkanReplayConsumer::Process_vkUnmapMemory(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            memory)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);
    auto in_memory = GetObjectInfoTable().GetDeviceMemoryInfo(memory);//@@@DFK
    OverrideUnmapMemory(GetDeviceTable(in_device->handle)->UnmapMemory, in_device, in_memory);//@@@HQA
}

void VulkanReplayConsumer::Process_vkFlushMappedMemoryRanges(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    memoryRangeCount,
    StructPointerDecoder<Decoded_VkMappedMemoryRange>/*@@@PLQ*/* pMemoryRanges)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);

    MapStructArrayHandles(pMemoryRanges->GetMetaStructPointer(), pMemoryRanges->GetLength(), GetObjectInfoTable());//@@@DFK
    VkResult replay_result = OverrideFlushMappedMemoryRanges(GetDeviceTable(in_device->handle)->FlushMappedMemoryRanges, returnValue, in_device, memoryRangeCount, pMemoryRanges);
    CheckResult("vkFlushMappedMemoryRanges", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkInvalidateMappedMemoryRanges(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    memoryRangeCount,
    StructPointerDecoder<Decoded_VkMappedMemoryRange>/*@@@PLQ*/* pMemoryRanges)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);

    MapStructArrayHandles(pMemoryRanges->GetMetaStructPointer(), pMemoryRanges->GetLength(), GetObjectInfoTable());//@@@DFK
    VkResult replay_result = OverrideInvalidateMappedMemoryRanges(GetDeviceTable(in_device->handle)->InvalidateMappedMemoryRanges, returnValue, in_device, memoryRangeCount, pMemoryRanges);
    CheckResult("vkInvalidateMappedMemoryRanges", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetDeviceMemoryCommitment(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            memory,
    PointerDecoder<VkDeviceSize>*               pCommittedMemoryInBytes)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkDeviceMemory in_memory = MapHandle<DeviceMemoryInfo>(memory, &VulkanObjectInfoTable::GetDeviceMemoryInfo);
    VkDeviceSize* out_pCommittedMemoryInBytes = pCommittedMemoryInBytes->IsNull() ? nullptr : pCommittedMemoryInBytes->AllocateOutputData(1, static_cast<VkDeviceSize>(0));//@@@DFK
    GetDeviceTable(in_device)->GetDeviceMemoryCommitment(in_device, in_memory, out_pCommittedMemoryInBytes);//@@@HQA
}

void VulkanReplayConsumer::Process_vkBindBufferMemory(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            buffer,
    format::HandleId                            memory,
    VkDeviceSize                                memoryOffset)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);
    auto in_buffer = GetObjectInfoTable().GetBufferInfo(buffer);
    auto in_memory = GetObjectInfoTable().GetDeviceMemoryInfo(memory);//@@@DFK
    VkResult replay_result = OverrideBindBufferMemory(GetDeviceTable(in_device->handle)->BindBufferMemory, returnValue, in_device, in_buffer, in_memory, memoryOffset);
    CheckResult("vkBindBufferMemory", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkBindImageMemory(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            image,
    format::HandleId                            memory,
    VkDeviceSize                                memoryOffset)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);
    auto in_image = GetObjectInfoTable().GetImageInfo(image);
    auto in_memory = GetObjectInfoTable().GetDeviceMemoryInfo(memory);//@@@DFK
    VkResult replay_result = OverrideBindImageMemory(GetDeviceTable(in_device->handle)->BindImageMemory, returnValue, in_device, in_image, in_memory, memoryOffset);
    CheckResult("vkBindImageMemory", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetBufferMemoryRequirements(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            buffer,
    StructPointerDecoder<Decoded_VkMemoryRequirements>/*@@@PLQ*/* pMemoryRequirements)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkBuffer in_buffer = MapHandle<BufferInfo>(buffer, &VulkanObjectInfoTable::GetBufferInfo);
    VkMemoryRequirements* out_pMemoryRequirements = pMemoryRequirements->IsNull() ? nullptr : pMemoryRequirements->AllocateOutputData(1);//@@@DFK
    GetDeviceTable(in_device)->GetBufferMemoryRequirements(in_device, in_buffer, out_pMemoryRequirements);//@@@HQA
}

void VulkanReplayConsumer::Process_vkGetImageMemoryRequirements(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            image,
    StructPointerDecoder<Decoded_VkMemoryRequirements>/*@@@PLQ*/* pMemoryRequirements)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkImage in_image = MapHandle<ImageInfo>(image, &VulkanObjectInfoTable::GetImageInfo);
    VkMemoryRequirements* out_pMemoryRequirements = pMemoryRequirements->IsNull() ? nullptr : pMemoryRequirements->AllocateOutputData(1);//@@@DFK
    GetDeviceTable(in_device)->GetImageMemoryRequirements(in_device, in_image, out_pMemoryRequirements);//@@@HQA
}

void VulkanReplayConsumer::Process_vkGetImageSparseMemoryRequirements(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            image,
    PointerDecoder<uint32_t>*                   pSparseMemoryRequirementCount,
    StructPointerDecoder<Decoded_VkSparseImageMemoryRequirements>/*@@@PLQ*/* pSparseMemoryRequirements)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkImage in_image = MapHandle<ImageInfo>(image, &VulkanObjectInfoTable::GetImageInfo);
    uint32_t* out_pSparseMemoryRequirementCount = pSparseMemoryRequirementCount->IsNull() ? nullptr : pSparseMemoryRequirementCount->AllocateOutputData(1, GetOutputArrayCount<uint32_t, ImageInfo>("vkGetImageSparseMemoryRequirements", VK_SUCCESS, image, kImageArrayGetImageSparseMemoryRequirements, pSparseMemoryRequirementCount, pSparseMemoryRequirements, &VulkanObjectInfoTable::GetImageInfo));
    VkSparseImageMemoryRequirements* out_pSparseMemoryRequirements = pSparseMemoryRequirements->IsNull() ? nullptr : pSparseMemoryRequirements->AllocateOutputData(*out_pSparseMemoryRequirementCount);//@@@DFK
    GetDeviceTable(in_device)->GetImageSparseMemoryRequirements(in_device, in_image, out_pSparseMemoryRequirementCount, out_pSparseMemoryRequirements);//@@@HQA

    if (pSparseMemoryRequirements->IsNull()) { SetOutputArrayCount<ImageInfo>(image, kImageArrayGetImageSparseMemoryRequirements, *out_pSparseMemoryRequirementCount, &VulkanObjectInfoTable::GetImageInfo); }
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceSparseImageFormatProperties(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    VkFormat                                    format,
    VkImageType                                 type,
    VkSampleCountFlagBits                       samples,
    VkImageUsageFlags                           usage,
    VkImageTiling                               tiling,
    PointerDecoder<uint32_t>*                   pPropertyCount,
    StructPointerDecoder<Decoded_VkSparseImageFormatProperties>/*@@@PLQ*/* pProperties)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    uint32_t* out_pPropertyCount = pPropertyCount->IsNull() ? nullptr : pPropertyCount->AllocateOutputData(1, GetOutputArrayCount<uint32_t, PhysicalDeviceInfo>("vkGetPhysicalDeviceSparseImageFormatProperties", VK_SUCCESS, physicalDevice, kPhysicalDeviceArrayGetPhysicalDeviceSparseImageFormatProperties, pPropertyCount, pProperties, &VulkanObjectInfoTable::GetPhysicalDeviceInfo));
    VkSparseImageFormatProperties* out_pProperties = pProperties->IsNull() ? nullptr : pProperties->AllocateOutputData(*out_pPropertyCount);//@@@DFK
    GetInstanceTable(in_physicalDevice)->GetPhysicalDeviceSparseImageFormatProperties(in_physicalDevice, format, type, samples, usage, tiling, out_pPropertyCount, out_pProperties);//@@@HQA

    if (pProperties->IsNull()) { SetOutputArrayCount<PhysicalDeviceInfo>(physicalDevice, kPhysicalDeviceArrayGetPhysicalDeviceSparseImageFormatProperties, *out_pPropertyCount, &VulkanObjectInfoTable::GetPhysicalDeviceInfo); }
}

void VulkanReplayConsumer::Process_vkQueueBindSparse(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            queue,
    uint32_t                                    bindInfoCount,
    StructPointerDecoder<Decoded_VkBindSparseInfo>/*@@@PLQ*/* pBindInfo,
    format::HandleId                            fence)
{
    auto in_queue = GetObjectInfoTable().GetQueueInfo(queue);

    MapStructArrayHandles(pBindInfo->GetMetaStructPointer(), pBindInfo->GetLength(), GetObjectInfoTable());
    auto in_fence = GetObjectInfoTable().GetFenceInfo(fence);//@@@DFK
    VkResult replay_result = OverrideQueueBindSparse(GetDeviceTable(in_queue->handle)->QueueBindSparse, returnValue, in_queue, bindInfoCount, pBindInfo, in_fence);
    CheckResult("vkQueueBindSparse", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkCreateFence(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkFenceCreateInfo>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkFence>*              pFence)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkFenceCreateInfo* in_pCreateInfo = pCreateInfo->GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    if (!pFence->IsNull()) { pFence->SetHandleLength(1); }
    VkFence* out_pFence = pFence->GetHandlePointer();//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->CreateFence(in_device, in_pCreateInfo, in_pAllocator, out_pFence);
    CheckResult("vkCreateFence", returnValue, replay_result, call_info);

    AddHandle<FenceInfo>(device, pFence->GetPointer(), out_pFence, &VulkanObjectInfoTable::AddFenceInfo);
}

void VulkanReplayConsumer::Process_vkDestroyFence(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            fence,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkFence in_fence = MapHandle<FenceInfo>(fence, &VulkanObjectInfoTable::GetFenceInfo);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);//@@@DFK
    GetDeviceTable(in_device)->DestroyFence(in_device, in_fence, in_pAllocator);//@@@HQA
    RemoveHandle(fence, &VulkanObjectInfoTable::RemoveFenceInfo);
}

void VulkanReplayConsumer::Process_vkResetFences(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    fenceCount,
    HandlePointerDecoder<VkFence>*              pFences)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkFence* in_pFences = MapHandles<FenceInfo>(pFences, fenceCount, &VulkanObjectInfoTable::GetFenceInfo);//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->ResetFences(in_device, fenceCount, in_pFences);
    CheckResult("vkResetFences", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetFenceStatus(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            fence)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);
    auto in_fence = GetObjectInfoTable().GetFenceInfo(fence);//@@@DFK
    VkResult replay_result = OverrideGetFenceStatus(GetDeviceTable(in_device->handle)->GetFenceStatus, returnValue, in_device, in_fence);
    CheckResult("vkGetFenceStatus", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkWaitForFences(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    fenceCount,
    HandlePointerDecoder<VkFence>*              pFences,
    VkBool32                                    waitAll,
    uint64_t                                    timeout)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);
    MapHandles<FenceInfo>(pFences, fenceCount, &VulkanObjectInfoTable::GetFenceInfo);//@@@DFK
    VkResult replay_result = OverrideWaitForFences(GetDeviceTable(in_device->handle)->WaitForFences, returnValue, in_device, fenceCount, pFences, waitAll, timeout);
    CheckResult("vkWaitForFences", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkCreateSemaphore(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkSemaphoreCreateInfo>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkSemaphore>*          pSemaphore)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkSemaphoreCreateInfo* in_pCreateInfo = pCreateInfo->GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    if (!pSemaphore->IsNull()) { pSemaphore->SetHandleLength(1); }
    VkSemaphore* out_pSemaphore = pSemaphore->GetHandlePointer();//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->CreateSemaphore(in_device, in_pCreateInfo, in_pAllocator, out_pSemaphore);
    CheckResult("vkCreateSemaphore", returnValue, replay_result, call_info);

    AddHandle<SemaphoreInfo>(device, pSemaphore->GetPointer(), out_pSemaphore, &VulkanObjectInfoTable::AddSemaphoreInfo);
}

void VulkanReplayConsumer::Process_vkDestroySemaphore(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            semaphore,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkSemaphore in_semaphore = MapHandle<SemaphoreInfo>(semaphore, &VulkanObjectInfoTable::GetSemaphoreInfo);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);//@@@DFK
    GetDeviceTable(in_device)->DestroySemaphore(in_device, in_semaphore, in_pAllocator);//@@@HQA
    RemoveHandle(semaphore, &VulkanObjectInfoTable::RemoveSemaphoreInfo);
}

void VulkanReplayConsumer::Process_vkCreateEvent(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkEventCreateInfo>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkEvent>*              pEvent)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkEventCreateInfo* in_pCreateInfo = pCreateInfo->GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    if (!pEvent->IsNull()) { pEvent->SetHandleLength(1); }
    VkEvent* out_pEvent = pEvent->GetHandlePointer();//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->CreateEvent(in_device, in_pCreateInfo, in_pAllocator, out_pEvent);
    CheckResult("vkCreateEvent", returnValue, replay_result, call_info);

    AddHandle<EventInfo>(device, pEvent->GetPointer(), out_pEvent, &VulkanObjectInfoTable::AddEventInfo);
}

void VulkanReplayConsumer::Process_vkDestroyEvent(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            event,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkEvent in_event = MapHandle<EventInfo>(event, &VulkanObjectInfoTable::GetEventInfo);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);//@@@DFK
    GetDeviceTable(in_device)->DestroyEvent(in_device, in_event, in_pAllocator);//@@@HQA
    RemoveHandle(event, &VulkanObjectInfoTable::RemoveEventInfo);
}

void VulkanReplayConsumer::Process_vkGetEventStatus(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            event)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);
    auto in_event = GetObjectInfoTable().GetEventInfo(event);//@@@DFK
    VkResult replay_result = OverrideGetEventStatus(GetDeviceTable(in_device->handle)->GetEventStatus, returnValue, in_device, in_event);
    CheckResult("vkGetEventStatus", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkSetEvent(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            event)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkEvent in_event = MapHandle<EventInfo>(event, &VulkanObjectInfoTable::GetEventInfo);//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->SetEvent(in_device, in_event);
    CheckResult("vkSetEvent", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkResetEvent(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            event)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkEvent in_event = MapHandle<EventInfo>(event, &VulkanObjectInfoTable::GetEventInfo);//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->ResetEvent(in_device, in_event);
    CheckResult("vkResetEvent", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkCreateQueryPool(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkQueryPoolCreateInfo>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkQueryPool>*          pQueryPool)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkQueryPoolCreateInfo* in_pCreateInfo = pCreateInfo->GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    if (!pQueryPool->IsNull()) { pQueryPool->SetHandleLength(1); }
    VkQueryPool* out_pQueryPool = pQueryPool->GetHandlePointer();//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->CreateQueryPool(in_device, in_pCreateInfo, in_pAllocator, out_pQueryPool);
    CheckResult("vkCreateQueryPool", returnValue, replay_result, call_info);

    AddHandle<QueryPoolInfo>(device, pQueryPool->GetPointer(), out_pQueryPool, &VulkanObjectInfoTable::AddQueryPoolInfo);
}

void VulkanReplayConsumer::Process_vkDestroyQueryPool(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            queryPool,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkQueryPool in_queryPool = MapHandle<QueryPoolInfo>(queryPool, &VulkanObjectInfoTable::GetQueryPoolInfo);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);//@@@DFK
    GetDeviceTable(in_device)->DestroyQueryPool(in_device, in_queryPool, in_pAllocator);//@@@HQA
    RemoveHandle(queryPool, &VulkanObjectInfoTable::RemoveQueryPoolInfo);
}

void VulkanReplayConsumer::Process_vkGetQueryPoolResults(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            queryPool,
    uint32_t                                    firstQuery,
    uint32_t                                    queryCount,
    size_t                                      dataSize,
    PointerDecoder<uint8_t>*                    pData,
    VkDeviceSize                                stride,
    VkQueryResultFlags                          flags)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);
    auto in_queryPool = GetObjectInfoTable().GetQueryPoolInfo(queryPool);
    if (!pData->IsNull()) { pData->AllocateOutputData(dataSize); }//@@@DFK
    VkResult replay_result = OverrideGetQueryPoolResults(GetDeviceTable(in_device->handle)->GetQueryPoolResults, returnValue, in_device, in_queryPool, firstQuery, queryCount, dataSize, pData, stride, flags);
    CheckResult("vkGetQueryPoolResults", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkCreateBuffer(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkBufferCreateInfo>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkBuffer>*             pBuffer)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);
    if (!pBuffer->IsNull()) { pBuffer->SetHandleLength(1); }
    BufferInfo handle_info;
    pBuffer->SetConsumerData(0, &handle_info);//@@@DFK
    VkResult replay_result = OverrideCreateBuffer(GetDeviceTable(in_device->handle)->CreateBuffer, returnValue, in_device, pCreateInfo, pAllocator, pBuffer);
    CheckResult("vkCreateBuffer", returnValue, replay_result, call_info);

    AddHandle<BufferInfo>(device, pBuffer->GetPointer(), pBuffer->GetHandlePointer(), std::move(handle_info), &VulkanObjectInfoTable::AddBufferInfo);
}

void VulkanReplayConsumer::Process_vkDestroyBuffer(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            buffer,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);
    auto in_buffer = GetObjectInfoTable().GetBufferInfo(buffer);//@@@DFK
    OverrideDestroyBuffer(GetDeviceTable(in_device->handle)->DestroyBuffer, in_device, in_buffer, pAllocator);//@@@HQA
    RemoveHandle(buffer, &VulkanObjectInfoTable::RemoveBufferInfo);
}

void VulkanReplayConsumer::Process_vkCreateBufferView(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkBufferViewCreateInfo>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkBufferView>*         pView)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkBufferViewCreateInfo* in_pCreateInfo = pCreateInfo->GetPointer();
    MapStructHandles(pCreateInfo->GetMetaStructPointer(), GetObjectInfoTable());
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    if (!pView->IsNull()) { pView->SetHandleLength(1); }
    VkBufferView* out_pView = pView->GetHandlePointer();//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->CreateBufferView(in_device, in_pCreateInfo, in_pAllocator, out_pView);
    CheckResult("vkCreateBufferView", returnValue, replay_result, call_info);

    AddHandle<BufferViewInfo>(device, pView->GetPointer(), out_pView, &VulkanObjectInfoTable::AddBufferViewInfo);
}

void VulkanReplayConsumer::Process_vkDestroyBufferView(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            bufferView,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkBufferView in_bufferView = MapHandle<BufferViewInfo>(bufferView, &VulkanObjectInfoTable::GetBufferViewInfo);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);//@@@DFK
    GetDeviceTable(in_device)->DestroyBufferView(in_device, in_bufferView, in_pAllocator);//@@@HQA
    RemoveHandle(bufferView, &VulkanObjectInfoTable::RemoveBufferViewInfo);
}

void VulkanReplayConsumer::Process_vkCreateImage(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkImageCreateInfo>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkImage>*              pImage)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);

    MapStructHandles(pCreateInfo->GetMetaStructPointer(), GetObjectInfoTable());
    if (!pImage->IsNull()) { pImage->SetHandleLength(1); }
    ImageInfo handle_info;
    pImage->SetConsumerData(0, &handle_info);//@@@DFK
    VkResult replay_result = OverrideCreateImage(GetDeviceTable(in_device->handle)->CreateImage, returnValue, in_device, pCreateInfo, pAllocator, pImage);
    CheckResult("vkCreateImage", returnValue, replay_result, call_info);

    AddHandle<ImageInfo>(device, pImage->GetPointer(), pImage->GetHandlePointer(), std::move(handle_info), &VulkanObjectInfoTable::AddImageInfo);
}

void VulkanReplayConsumer::Process_vkDestroyImage(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            image,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);
    auto in_image = GetObjectInfoTable().GetImageInfo(image);//@@@DFK
    OverrideDestroyImage(GetDeviceTable(in_device->handle)->DestroyImage, in_device, in_image, pAllocator);//@@@HQA
    RemoveHandle(image, &VulkanObjectInfoTable::RemoveImageInfo);
}

void VulkanReplayConsumer::Process_vkGetImageSubresourceLayout(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            image,
    StructPointerDecoder<Decoded_VkImageSubresource>/*@@@PLQ*/* pSubresource,
    StructPointerDecoder<Decoded_VkSubresourceLayout>/*@@@PLQ*/* pLayout)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);
    auto in_image = GetObjectInfoTable().GetImageInfo(image);
    pLayout->IsNull() ? nullptr : pLayout->AllocateOutputData(1);//@@@DFK
    OverrideGetImageSubresourceLayout(GetDeviceTable(in_device->handle)->GetImageSubresourceLayout, in_device, in_image, pSubresource, pLayout);//@@@HQA
}

void VulkanReplayConsumer::Process_vkCreateImageView(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkImageViewCreateInfo>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkImageView>*          pView)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);

    MapStructHandles(pCreateInfo->GetMetaStructPointer(), GetObjectInfoTable());
    if (!pView->IsNull()) { pView->SetHandleLength(1); }
    ImageViewInfo handle_info;
    pView->SetConsumerData(0, &handle_info);//@@@DFK
    VkResult replay_result = OverrideCreateImageView(GetDeviceTable(in_device->handle)->CreateImageView, returnValue, in_device, pCreateInfo, pAllocator, pView);
    CheckResult("vkCreateImageView", returnValue, replay_result, call_info);

    AddHandle<ImageViewInfo>(device, pView->GetPointer(), pView->GetHandlePointer(), std::move(handle_info), &VulkanObjectInfoTable::AddImageViewInfo);
}

void VulkanReplayConsumer::Process_vkDestroyImageView(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            imageView,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkImageView in_imageView = MapHandle<ImageViewInfo>(imageView, &VulkanObjectInfoTable::GetImageViewInfo);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);//@@@DFK
    GetDeviceTable(in_device)->DestroyImageView(in_device, in_imageView, in_pAllocator);//@@@HQA
    RemoveHandle(imageView, &VulkanObjectInfoTable::RemoveImageViewInfo);
}

void VulkanReplayConsumer::Process_vkCreateShaderModule(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkShaderModuleCreateInfo>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkShaderModule>*       pShaderModule)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);

    MapStructHandles(pCreateInfo->GetMetaStructPointer(), GetObjectInfoTable());
    if (!pShaderModule->IsNull()) { pShaderModule->SetHandleLength(1); }
    ShaderModuleInfo handle_info;
    pShaderModule->SetConsumerData(0, &handle_info);//@@@DFK
    VkResult replay_result = OverrideCreateShaderModule(GetDeviceTable(in_device->handle)->CreateShaderModule, returnValue, in_device, pCreateInfo, pAllocator, pShaderModule);
    CheckResult("vkCreateShaderModule", returnValue, replay_result, call_info);

    AddHandle<ShaderModuleInfo>(device, pShaderModule->GetPointer(), pShaderModule->GetHandlePointer(), std::move(handle_info), &VulkanObjectInfoTable::AddShaderModuleInfo);
}

void VulkanReplayConsumer::Process_vkDestroyShaderModule(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            shaderModule,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkShaderModule in_shaderModule = MapHandle<ShaderModuleInfo>(shaderModule, &VulkanObjectInfoTable::GetShaderModuleInfo);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);//@@@DFK
    GetDeviceTable(in_device)->DestroyShaderModule(in_device, in_shaderModule, in_pAllocator);//@@@HQA
    RemoveHandle(shaderModule, &VulkanObjectInfoTable::RemoveShaderModuleInfo);
}

void VulkanReplayConsumer::Process_vkCreatePipelineCache(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkPipelineCacheCreateInfo>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkPipelineCache>*      pPipelineCache)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);
    if (!pPipelineCache->IsNull()) { pPipelineCache->SetHandleLength(1); }
    PipelineCacheInfo handle_info;
    pPipelineCache->SetConsumerData(0, &handle_info);//@@@DFK
    VkResult replay_result = OverrideCreatePipelineCache(GetDeviceTable(in_device->handle)->CreatePipelineCache, returnValue, in_device, pCreateInfo, pAllocator, pPipelineCache);
    CheckResult("vkCreatePipelineCache", returnValue, replay_result, call_info);

    AddHandle<PipelineCacheInfo>(device, pPipelineCache->GetPointer(), pPipelineCache->GetHandlePointer(), std::move(handle_info), &VulkanObjectInfoTable::AddPipelineCacheInfo);
}

void VulkanReplayConsumer::Process_vkDestroyPipelineCache(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            pipelineCache,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkPipelineCache in_pipelineCache = MapHandle<PipelineCacheInfo>(pipelineCache, &VulkanObjectInfoTable::GetPipelineCacheInfo);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);//@@@DFK
    GetDeviceTable(in_device)->DestroyPipelineCache(in_device, in_pipelineCache, in_pAllocator);//@@@HQA
    RemoveHandle(pipelineCache, &VulkanObjectInfoTable::RemovePipelineCacheInfo);
}

void VulkanReplayConsumer::Process_vkGetPipelineCacheData(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            pipelineCache,
    PointerDecoder<size_t>*                     pDataSize,
    PointerDecoder<uint8_t>*                    pData)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);
    auto in_pipelineCache = GetObjectInfoTable().GetPipelineCacheInfo(pipelineCache);
    pDataSize->IsNull() ? nullptr : pDataSize->AllocateOutputData(1, GetOutputArrayCount<size_t, PipelineCacheInfo>("vkGetPipelineCacheData", returnValue, pipelineCache, kPipelineCacheArrayGetPipelineCacheData, pDataSize, pData, &VulkanObjectInfoTable::GetPipelineCacheInfo));
    if (!pData->IsNull()) { pData->AllocateOutputData(*pDataSize->GetOutputPointer()); }//@@@DFK
    VkResult replay_result = OverrideGetPipelineCacheData(GetDeviceTable(in_device->handle)->GetPipelineCacheData, returnValue, in_device, in_pipelineCache, pDataSize, pData);
    CheckResult("vkGetPipelineCacheData", returnValue, replay_result, call_info);

    if (pData->IsNull()) { SetOutputArrayCount<PipelineCacheInfo>(pipelineCache, kPipelineCacheArrayGetPipelineCacheData, *pDataSize->GetOutputPointer(), &VulkanObjectInfoTable::GetPipelineCacheInfo); }
}

void VulkanReplayConsumer::Process_vkMergePipelineCaches(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            dstCache,
    uint32_t                                    srcCacheCount,
    HandlePointerDecoder<VkPipelineCache>*      pSrcCaches)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkPipelineCache in_dstCache = MapHandle<PipelineCacheInfo>(dstCache, &VulkanObjectInfoTable::GetPipelineCacheInfo);
    const VkPipelineCache* in_pSrcCaches = MapHandles<PipelineCacheInfo>(pSrcCaches, srcCacheCount, &VulkanObjectInfoTable::GetPipelineCacheInfo);//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->MergePipelineCaches(in_device, in_dstCache, srcCacheCount, in_pSrcCaches);
    CheckResult("vkMergePipelineCaches", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkCreateGraphicsPipelines(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            pipelineCache,
    uint32_t                                    createInfoCount,
    StructPointerDecoder<Decoded_VkGraphicsPipelineCreateInfo>/*@@@PLQ*/* pCreateInfos,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkPipeline>*           pPipelines)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkPipelineCache in_pipelineCache = MapHandle<PipelineCacheInfo>(pipelineCache, &VulkanObjectInfoTable::GetPipelineCacheInfo);
    const VkGraphicsPipelineCreateInfo* in_pCreateInfos = pCreateInfos->GetPointer();
    MapStructArrayHandles(pCreateInfos->GetMetaStructPointer(), pCreateInfos->GetLength(), GetObjectInfoTable());
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    if (!pPipelines->IsNull()) { pPipelines->SetHandleLength(createInfoCount); }
    VkPipeline* out_pPipelines = pPipelines->GetHandlePointer();//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->CreateGraphicsPipelines(in_device, in_pipelineCache, createInfoCount, in_pCreateInfos, in_pAllocator, out_pPipelines);
    CheckResult("vkCreateGraphicsPipelines", returnValue, replay_result, call_info);

    AddHandles<PipelineInfo>(device, pPipelines->GetPointer(), pPipelines->GetLength(), out_pPipelines, createInfoCount, &VulkanObjectInfoTable::AddPipelineInfo);
}

void VulkanReplayConsumer::Process_vkCreateComputePipelines(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            pipelineCache,
    uint32_t                                    createInfoCount,
    StructPointerDecoder<Decoded_VkComputePipelineCreateInfo>/*@@@PLQ*/* pCreateInfos,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkPipeline>*           pPipelines)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkPipelineCache in_pipelineCache = MapHandle<PipelineCacheInfo>(pipelineCache, &VulkanObjectInfoTable::GetPipelineCacheInfo);
    const VkComputePipelineCreateInfo* in_pCreateInfos = pCreateInfos->GetPointer();
    MapStructArrayHandles(pCreateInfos->GetMetaStructPointer(), pCreateInfos->GetLength(), GetObjectInfoTable());
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    if (!pPipelines->IsNull()) { pPipelines->SetHandleLength(createInfoCount); }
    VkPipeline* out_pPipelines = pPipelines->GetHandlePointer();//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->CreateComputePipelines(in_device, in_pipelineCache, createInfoCount, in_pCreateInfos, in_pAllocator, out_pPipelines);
    CheckResult("vkCreateComputePipelines", returnValue, replay_result, call_info);

    AddHandles<PipelineInfo>(device, pPipelines->GetPointer(), pPipelines->GetLength(), out_pPipelines, createInfoCount, &VulkanObjectInfoTable::AddPipelineInfo);
}

void VulkanReplayConsumer::Process_vkDestroyPipeline(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            pipeline,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkPipeline in_pipeline = MapHandle<PipelineInfo>(pipeline, &VulkanObjectInfoTable::GetPipelineInfo);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);//@@@DFK
    GetDeviceTable(in_device)->DestroyPipeline(in_device, in_pipeline, in_pAllocator);//@@@HQA
    RemoveHandle(pipeline, &VulkanObjectInfoTable::RemovePipelineInfo);
}

void VulkanReplayConsumer::Process_vkCreatePipelineLayout(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkPipelineLayoutCreateInfo>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkPipelineLayout>*     pPipelineLayout)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkPipelineLayoutCreateInfo* in_pCreateInfo = pCreateInfo->GetPointer();
    MapStructHandles(pCreateInfo->GetMetaStructPointer(), GetObjectInfoTable());
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    if (!pPipelineLayout->IsNull()) { pPipelineLayout->SetHandleLength(1); }
    VkPipelineLayout* out_pPipelineLayout = pPipelineLayout->GetHandlePointer();//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->CreatePipelineLayout(in_device, in_pCreateInfo, in_pAllocator, out_pPipelineLayout);
    CheckResult("vkCreatePipelineLayout", returnValue, replay_result, call_info);

    AddHandle<PipelineLayoutInfo>(device, pPipelineLayout->GetPointer(), out_pPipelineLayout, &VulkanObjectInfoTable::AddPipelineLayoutInfo);
}

void VulkanReplayConsumer::Process_vkDestroyPipelineLayout(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            pipelineLayout,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkPipelineLayout in_pipelineLayout = MapHandle<PipelineLayoutInfo>(pipelineLayout, &VulkanObjectInfoTable::GetPipelineLayoutInfo);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);//@@@DFK
    GetDeviceTable(in_device)->DestroyPipelineLayout(in_device, in_pipelineLayout, in_pAllocator);//@@@HQA
    RemoveHandle(pipelineLayout, &VulkanObjectInfoTable::RemovePipelineLayoutInfo);
}

void VulkanReplayConsumer::Process_vkCreateSampler(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkSamplerCreateInfo>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkSampler>*            pSampler)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkSamplerCreateInfo* in_pCreateInfo = pCreateInfo->GetPointer();
    MapStructHandles(pCreateInfo->GetMetaStructPointer(), GetObjectInfoTable());
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    if (!pSampler->IsNull()) { pSampler->SetHandleLength(1); }
    VkSampler* out_pSampler = pSampler->GetHandlePointer();//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->CreateSampler(in_device, in_pCreateInfo, in_pAllocator, out_pSampler);
    CheckResult("vkCreateSampler", returnValue, replay_result, call_info);

    AddHandle<SamplerInfo>(device, pSampler->GetPointer(), out_pSampler, &VulkanObjectInfoTable::AddSamplerInfo);
}

void VulkanReplayConsumer::Process_vkDestroySampler(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            sampler,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkSampler in_sampler = MapHandle<SamplerInfo>(sampler, &VulkanObjectInfoTable::GetSamplerInfo);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);//@@@DFK
    GetDeviceTable(in_device)->DestroySampler(in_device, in_sampler, in_pAllocator);//@@@HQA
    RemoveHandle(sampler, &VulkanObjectInfoTable::RemoveSamplerInfo);
}

void VulkanReplayConsumer::Process_vkCreateDescriptorSetLayout(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDescriptorSetLayoutCreateInfo>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkDescriptorSetLayout>* pSetLayout)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkDescriptorSetLayoutCreateInfo* in_pCreateInfo = pCreateInfo->GetPointer();
    MapStructHandles(pCreateInfo->GetMetaStructPointer(), GetObjectInfoTable());
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    if (!pSetLayout->IsNull()) { pSetLayout->SetHandleLength(1); }
    VkDescriptorSetLayout* out_pSetLayout = pSetLayout->GetHandlePointer();//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->CreateDescriptorSetLayout(in_device, in_pCreateInfo, in_pAllocator, out_pSetLayout);
    CheckResult("vkCreateDescriptorSetLayout", returnValue, replay_result, call_info);

    AddHandle<DescriptorSetLayoutInfo>(device, pSetLayout->GetPointer(), out_pSetLayout, &VulkanObjectInfoTable::AddDescriptorSetLayoutInfo);
}

void VulkanReplayConsumer::Process_vkDestroyDescriptorSetLayout(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            descriptorSetLayout,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkDescriptorSetLayout in_descriptorSetLayout = MapHandle<DescriptorSetLayoutInfo>(descriptorSetLayout, &VulkanObjectInfoTable::GetDescriptorSetLayoutInfo);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);//@@@DFK
    GetDeviceTable(in_device)->DestroyDescriptorSetLayout(in_device, in_descriptorSetLayout, in_pAllocator);//@@@HQA
    RemoveHandle(descriptorSetLayout, &VulkanObjectInfoTable::RemoveDescriptorSetLayoutInfo);
}

void VulkanReplayConsumer::Process_vkCreateDescriptorPool(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDescriptorPoolCreateInfo>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkDescriptorPool>*     pDescriptorPool)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);
    if (!pDescriptorPool->IsNull()) { pDescriptorPool->SetHandleLength(1); }
    DescriptorPoolInfo handle_info;
    pDescriptorPool->SetConsumerData(0, &handle_info);//@@@DFK
    VkResult replay_result = OverrideCreateDescriptorPool(GetDeviceTable(in_device->handle)->CreateDescriptorPool, returnValue, in_device, pCreateInfo, pAllocator, pDescriptorPool);
    CheckResult("vkCreateDescriptorPool", returnValue, replay_result, call_info);

    AddHandle<DescriptorPoolInfo>(device, pDescriptorPool->GetPointer(), pDescriptorPool->GetHandlePointer(), std::move(handle_info), &VulkanObjectInfoTable::AddDescriptorPoolInfo);
}

void VulkanReplayConsumer::Process_vkDestroyDescriptorPool(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            descriptorPool,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);
    auto in_descriptorPool = GetObjectInfoTable().GetDescriptorPoolInfo(descriptorPool);//@@@DFK
    OverrideDestroyDescriptorPool(GetDeviceTable(in_device->handle)->DestroyDescriptorPool, in_device, in_descriptorPool, pAllocator);//@@@HQA
    RemovePoolHandle<DescriptorPoolInfo>(descriptorPool, &VulkanObjectInfoTable::GetDescriptorPoolInfo, &VulkanObjectInfoTable::RemoveDescriptorPoolInfo, &VulkanObjectInfoTable::RemoveDescriptorSetInfo);
}

void VulkanReplayConsumer::Process_vkResetDescriptorPool(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            descriptorPool,
    VkDescriptorPoolResetFlags                  flags)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);
    auto in_descriptorPool = GetObjectInfoTable().GetDescriptorPoolInfo(descriptorPool);//@@@DFK
    VkResult replay_result = OverrideResetDescriptorPool(GetDeviceTable(in_device->handle)->ResetDescriptorPool, returnValue, in_device, in_descriptorPool, flags);
    CheckResult("vkResetDescriptorPool", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkAllocateDescriptorSets(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDescriptorSetAllocateInfo>/*@@@PLQ*/* pAllocateInfo,
    HandlePointerDecoder<VkDescriptorSet>*      pDescriptorSets)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);

    MapStructHandles(pAllocateInfo->GetMetaStructPointer(), GetObjectInfoTable());
    if (!pDescriptorSets->IsNull()) { pDescriptorSets->SetHandleLength(pAllocateInfo->GetPointer()->descriptorSetCount); }
    std::vector<DescriptorSetInfo> handle_info(pAllocateInfo->GetPointer()->descriptorSetCount);
    for (size_t i = 0; i < pAllocateInfo->GetPointer()->descriptorSetCount; ++i) { pDescriptorSets->SetConsumerData(i, &handle_info[i]); }//@@@DFK
    VkResult replay_result = OverrideAllocateDescriptorSets(GetDeviceTable(in_device->handle)->AllocateDescriptorSets, returnValue, in_device, pAllocateInfo, pDescriptorSets);
    CheckResult("vkAllocateDescriptorSets", returnValue, replay_result, call_info);

    AddPoolHandles<DescriptorPoolInfo, DescriptorSetInfo>(device, handle_mapping::GetPoolId(pAllocateInfo->GetMetaStructPointer()), pDescriptorSets->GetPointer(), pDescriptorSets->GetLength(), pDescriptorSets->GetHandlePointer(), pAllocateInfo->GetPointer()->descriptorSetCount, std::move(handle_info), &VulkanObjectInfoTable::GetDescriptorPoolInfo, &VulkanObjectInfoTable::AddDescriptorSetInfo);
}

void VulkanReplayConsumer::Process_vkFreeDescriptorSets(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            descriptorPool,
    uint32_t                                    descriptorSetCount,
    HandlePointerDecoder<VkDescriptorSet>*      pDescriptorSets)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkDescriptorPool in_descriptorPool = MapHandle<DescriptorPoolInfo>(descriptorPool, &VulkanObjectInfoTable::GetDescriptorPoolInfo);
    const VkDescriptorSet* in_pDescriptorSets = MapHandles<DescriptorSetInfo>(pDescriptorSets, descriptorSetCount, &VulkanObjectInfoTable::GetDescriptorSetInfo);//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->FreeDescriptorSets(in_device, in_descriptorPool, descriptorSetCount, in_pDescriptorSets);
    CheckResult("vkFreeDescriptorSets", returnValue, replay_result, call_info);
    RemovePoolHandles<DescriptorPoolInfo, DescriptorSetInfo>(descriptorPool, pDescriptorSets, descriptorSetCount, &VulkanObjectInfoTable::GetDescriptorPoolInfo, &VulkanObjectInfoTable::RemoveDescriptorSetInfo);
}

void VulkanReplayConsumer::Process_vkUpdateDescriptorSets(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    uint32_t                                    descriptorWriteCount,
    StructPointerDecoder<Decoded_VkWriteDescriptorSet>/*@@@PLQ*/* pDescriptorWrites,
    uint32_t                                    descriptorCopyCount,
    StructPointerDecoder<Decoded_VkCopyDescriptorSet>/*@@@PLQ*/* pDescriptorCopies)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkWriteDescriptorSet* in_pDescriptorWrites = pDescriptorWrites->GetPointer();
    MapStructArrayHandles(pDescriptorWrites->GetMetaStructPointer(), pDescriptorWrites->GetLength(), GetObjectInfoTable());
    const VkCopyDescriptorSet* in_pDescriptorCopies = pDescriptorCopies->GetPointer();
    MapStructArrayHandles(pDescriptorCopies->GetMetaStructPointer(), pDescriptorCopies->GetLength(), GetObjectInfoTable());//@@@DFK
    GetDeviceTable(in_device)->UpdateDescriptorSets(in_device, descriptorWriteCount, in_pDescriptorWrites, descriptorCopyCount, in_pDescriptorCopies);//@@@HQA
    //@@@TODO: VERIFY THIS IS CORRECT AND IS NEEDED
    UpdateDescriptorSets(descriptorWriteCount, pDescriptorWrites);
}

void VulkanReplayConsumer::Process_vkCreateFramebuffer(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkFramebufferCreateInfo>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkFramebuffer>*        pFramebuffer)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);

    MapStructHandles(pCreateInfo->GetMetaStructPointer(), GetObjectInfoTable());
    if (!pFramebuffer->IsNull()) { pFramebuffer->SetHandleLength(1); }
    FramebufferInfo handle_info;
    pFramebuffer->SetConsumerData(0, &handle_info);//@@@DFK
    VkResult replay_result = OverrideCreateFramebuffer(GetDeviceTable(in_device->handle)->CreateFramebuffer, returnValue, in_device, pCreateInfo, pAllocator, pFramebuffer);
    CheckResult("vkCreateFramebuffer", returnValue, replay_result, call_info);

    AddHandle<FramebufferInfo>(device, pFramebuffer->GetPointer(), pFramebuffer->GetHandlePointer(), std::move(handle_info), &VulkanObjectInfoTable::AddFramebufferInfo);
}

void VulkanReplayConsumer::Process_vkDestroyFramebuffer(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            framebuffer,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkFramebuffer in_framebuffer = MapHandle<FramebufferInfo>(framebuffer, &VulkanObjectInfoTable::GetFramebufferInfo);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);//@@@DFK
    GetDeviceTable(in_device)->DestroyFramebuffer(in_device, in_framebuffer, in_pAllocator);//@@@HQA
    RemoveHandle(framebuffer, &VulkanObjectInfoTable::RemoveFramebufferInfo);
}

void VulkanReplayConsumer::Process_vkCreateRenderPass(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkRenderPassCreateInfo>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkRenderPass>*         pRenderPass)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);
    if (!pRenderPass->IsNull()) { pRenderPass->SetHandleLength(1); }
    RenderPassInfo handle_info;
    pRenderPass->SetConsumerData(0, &handle_info);//@@@DFK
    VkResult replay_result = OverrideCreateRenderPass(GetDeviceTable(in_device->handle)->CreateRenderPass, returnValue, in_device, pCreateInfo, pAllocator, pRenderPass);
    CheckResult("vkCreateRenderPass", returnValue, replay_result, call_info);

    AddHandle<RenderPassInfo>(device, pRenderPass->GetPointer(), pRenderPass->GetHandlePointer(), std::move(handle_info), &VulkanObjectInfoTable::AddRenderPassInfo);
}

void VulkanReplayConsumer::Process_vkDestroyRenderPass(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            renderPass,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkRenderPass in_renderPass = MapHandle<RenderPassInfo>(renderPass, &VulkanObjectInfoTable::GetRenderPassInfo);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);//@@@DFK
    GetDeviceTable(in_device)->DestroyRenderPass(in_device, in_renderPass, in_pAllocator);//@@@HQA
    RemoveHandle(renderPass, &VulkanObjectInfoTable::RemoveRenderPassInfo);
}

void VulkanReplayConsumer::Process_vkGetRenderAreaGranularity(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            renderPass,
    StructPointerDecoder<Decoded_VkExtent2D>/*@@@PLQ*/* pGranularity)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkRenderPass in_renderPass = MapHandle<RenderPassInfo>(renderPass, &VulkanObjectInfoTable::GetRenderPassInfo);
    VkExtent2D* out_pGranularity = pGranularity->IsNull() ? nullptr : pGranularity->AllocateOutputData(1);//@@@DFK
    GetDeviceTable(in_device)->GetRenderAreaGranularity(in_device, in_renderPass, out_pGranularity);//@@@HQA
}

void VulkanReplayConsumer::Process_vkCreateCommandPool(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkCommandPoolCreateInfo>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkCommandPool>*        pCommandPool)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkCommandPoolCreateInfo* in_pCreateInfo = pCreateInfo->GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    if (!pCommandPool->IsNull()) { pCommandPool->SetHandleLength(1); }
    VkCommandPool* out_pCommandPool = pCommandPool->GetHandlePointer();//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->CreateCommandPool(in_device, in_pCreateInfo, in_pAllocator, out_pCommandPool);
    CheckResult("vkCreateCommandPool", returnValue, replay_result, call_info);

    AddHandle<CommandPoolInfo>(device, pCommandPool->GetPointer(), out_pCommandPool, &VulkanObjectInfoTable::AddCommandPoolInfo);
}

void VulkanReplayConsumer::Process_vkDestroyCommandPool(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            commandPool,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkCommandPool in_commandPool = MapHandle<CommandPoolInfo>(commandPool, &VulkanObjectInfoTable::GetCommandPoolInfo);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);//@@@DFK
    GetDeviceTable(in_device)->DestroyCommandPool(in_device, in_commandPool, in_pAllocator);//@@@HQA
    RemovePoolHandle<CommandPoolInfo>(commandPool, &VulkanObjectInfoTable::GetCommandPoolInfo, &VulkanObjectInfoTable::RemoveCommandPoolInfo, &VulkanObjectInfoTable::RemoveCommandBufferInfo);
}

void VulkanReplayConsumer::Process_vkResetCommandPool(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            commandPool,
    VkCommandPoolResetFlags                     flags)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkCommandPool in_commandPool = MapHandle<CommandPoolInfo>(commandPool, &VulkanObjectInfoTable::GetCommandPoolInfo);//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->ResetCommandPool(in_device, in_commandPool, flags);
    CheckResult("vkResetCommandPool", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkAllocateCommandBuffers(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkCommandBufferAllocateInfo>/*@@@PLQ*/* pAllocateInfo,
    HandlePointerDecoder<VkCommandBuffer>*      pCommandBuffers)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);

    MapStructHandles(pAllocateInfo->GetMetaStructPointer(), GetObjectInfoTable());
    if (!pCommandBuffers->IsNull()) { pCommandBuffers->SetHandleLength(pAllocateInfo->GetPointer()->commandBufferCount); }
    std::vector<CommandBufferInfo> handle_info(pAllocateInfo->GetPointer()->commandBufferCount);
    for (size_t i = 0; i < pAllocateInfo->GetPointer()->commandBufferCount; ++i) { pCommandBuffers->SetConsumerData(i, &handle_info[i]); }//@@@DFK
    VkResult replay_result = OverrideAllocateCommandBuffers(GetDeviceTable(in_device->handle)->AllocateCommandBuffers, returnValue, in_device, pAllocateInfo, pCommandBuffers);
    CheckResult("vkAllocateCommandBuffers", returnValue, replay_result, call_info);

    AddPoolHandles<CommandPoolInfo, CommandBufferInfo>(device, handle_mapping::GetPoolId(pAllocateInfo->GetMetaStructPointer()), pCommandBuffers->GetPointer(), pCommandBuffers->GetLength(), pCommandBuffers->GetHandlePointer(), pAllocateInfo->GetPointer()->commandBufferCount, std::move(handle_info), &VulkanObjectInfoTable::GetCommandPoolInfo, &VulkanObjectInfoTable::AddCommandBufferInfo);
}

void VulkanReplayConsumer::Process_vkFreeCommandBuffers(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            commandPool,
    uint32_t                                    commandBufferCount,
    HandlePointerDecoder<VkCommandBuffer>*      pCommandBuffers)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkCommandPool in_commandPool = MapHandle<CommandPoolInfo>(commandPool, &VulkanObjectInfoTable::GetCommandPoolInfo);
    const VkCommandBuffer* in_pCommandBuffers = MapHandles<CommandBufferInfo>(pCommandBuffers, commandBufferCount, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_device)->FreeCommandBuffers(in_device, in_commandPool, commandBufferCount, in_pCommandBuffers);//@@@HQA
    RemovePoolHandles<CommandPoolInfo, CommandBufferInfo>(commandPool, pCommandBuffers, commandBufferCount, &VulkanObjectInfoTable::GetCommandPoolInfo, &VulkanObjectInfoTable::RemoveCommandBufferInfo);
}

void VulkanReplayConsumer::Process_vkBeginCommandBuffer(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkCommandBufferBeginInfo>/*@@@PLQ*/* pBeginInfo)
{
    auto in_commandBuffer = GetObjectInfoTable().GetCommandBufferInfo(commandBuffer);

    MapStructHandles(pBeginInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    VkResult replay_result = OverrideBeginCommandBuffer(GetDeviceTable(in_commandBuffer->handle)->BeginCommandBuffer, returnValue, in_commandBuffer, pBeginInfo);
    CheckResult("vkBeginCommandBuffer", returnValue, replay_result, call_info);

    if (dumper.DumpingBeginCommandBufferIndex(call_info.index))
    {
        const CommandBufferInfo* cmd_buf_info = GetObjectInfoTable().GetCommandBufferInfo(commandBuffer);
        const DeviceInfo* device = GetObjectInfoTable().GetDeviceInfo(cmd_buf_info->parent_id);
        dumper.CloneCommandBuffer(commandBuffer, GetDeviceTable(device->handle)->AllocateCommandBuffers);
    }
}

void VulkanReplayConsumer::Process_vkEndCommandBuffer(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            commandBuffer)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    VkResult replay_result = GetDeviceTable(in_commandBuffer)->EndCommandBuffer(in_commandBuffer);
    CheckResult("vkEndCommandBuffer", returnValue, replay_result, call_info);

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->EndCommandBuffer(dumper.GetClonedCommandBuffer())/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkResetCommandBuffer(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            commandBuffer,
    VkCommandBufferResetFlags                   flags)
{
    auto in_commandBuffer = GetObjectInfoTable().GetCommandBufferInfo(commandBuffer);//@@@DFK
    VkResult replay_result = OverrideResetCommandBuffer(GetDeviceTable(in_commandBuffer->handle)->ResetCommandBuffer, returnValue, in_commandBuffer, flags);
    CheckResult("vkResetCommandBuffer", returnValue, replay_result, call_info);

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->ResetCommandBuffer(dumper.GetClonedCommandBuffer(), flags)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdBindPipeline(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkPipelineBindPoint                         pipelineBindPoint,
    format::HandleId                            pipeline)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkPipeline in_pipeline = MapHandle<PipelineInfo>(pipeline, &VulkanObjectInfoTable::GetPipelineInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdBindPipeline(in_commandBuffer, pipelineBindPoint, in_pipeline);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdBindPipeline(dumper.GetClonedCommandBuffer(), pipelineBindPoint, in_pipeline)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetViewport(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    firstViewport,
    uint32_t                                    viewportCount,
    StructPointerDecoder<Decoded_VkViewport>/*@@@PLQ*/* pViewports)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkViewport* in_pViewports = pViewports->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetViewport(in_commandBuffer, firstViewport, viewportCount, in_pViewports);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetViewport(dumper.GetClonedCommandBuffer(), firstViewport, viewportCount, in_pViewports)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetScissor(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    firstScissor,
    uint32_t                                    scissorCount,
    StructPointerDecoder<Decoded_VkRect2D>/*@@@PLQ*/* pScissors)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkRect2D* in_pScissors = pScissors->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetScissor(in_commandBuffer, firstScissor, scissorCount, in_pScissors);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetScissor(dumper.GetClonedCommandBuffer(), firstScissor, scissorCount, in_pScissors)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetLineWidth(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    float                                       lineWidth)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetLineWidth(in_commandBuffer, lineWidth);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetLineWidth(dumper.GetClonedCommandBuffer(), lineWidth)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetDepthBias(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    float                                       depthBiasConstantFactor,
    float                                       depthBiasClamp,
    float                                       depthBiasSlopeFactor)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetDepthBias(in_commandBuffer, depthBiasConstantFactor, depthBiasClamp, depthBiasSlopeFactor);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetDepthBias(dumper.GetClonedCommandBuffer(), depthBiasConstantFactor, depthBiasClamp, depthBiasSlopeFactor)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetBlendConstants(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    PointerDecoder<float>*                      blendConstants)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const float* in_blendConstants = blendConstants->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetBlendConstants(in_commandBuffer, in_blendConstants);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetBlendConstants(dumper.GetClonedCommandBuffer(), in_blendConstants)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetDepthBounds(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    float                                       minDepthBounds,
    float                                       maxDepthBounds)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetDepthBounds(in_commandBuffer, minDepthBounds, maxDepthBounds);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetDepthBounds(dumper.GetClonedCommandBuffer(), minDepthBounds, maxDepthBounds)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetStencilCompareMask(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkStencilFaceFlags                          faceMask,
    uint32_t                                    compareMask)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetStencilCompareMask(in_commandBuffer, faceMask, compareMask);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetStencilCompareMask(dumper.GetClonedCommandBuffer(), faceMask, compareMask)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetStencilWriteMask(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkStencilFaceFlags                          faceMask,
    uint32_t                                    writeMask)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetStencilWriteMask(in_commandBuffer, faceMask, writeMask);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetStencilWriteMask(dumper.GetClonedCommandBuffer(), faceMask, writeMask)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetStencilReference(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkStencilFaceFlags                          faceMask,
    uint32_t                                    reference)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetStencilReference(in_commandBuffer, faceMask, reference);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetStencilReference(dumper.GetClonedCommandBuffer(), faceMask, reference)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdBindDescriptorSets(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkPipelineBindPoint                         pipelineBindPoint,
    format::HandleId                            layout,
    uint32_t                                    firstSet,
    uint32_t                                    descriptorSetCount,
    HandlePointerDecoder<VkDescriptorSet>*      pDescriptorSets,
    uint32_t                                    dynamicOffsetCount,
    PointerDecoder<uint32_t>*                   pDynamicOffsets)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkPipelineLayout in_layout = MapHandle<PipelineLayoutInfo>(layout, &VulkanObjectInfoTable::GetPipelineLayoutInfo);
    const VkDescriptorSet* in_pDescriptorSets = MapHandles<DescriptorSetInfo>(pDescriptorSets, descriptorSetCount, &VulkanObjectInfoTable::GetDescriptorSetInfo);
    const uint32_t* in_pDynamicOffsets = pDynamicOffsets->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdBindDescriptorSets(in_commandBuffer, pipelineBindPoint, in_layout, firstSet, descriptorSetCount, in_pDescriptorSets, dynamicOffsetCount, in_pDynamicOffsets);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdBindDescriptorSets(dumper.GetClonedCommandBuffer(), pipelineBindPoint, in_layout, firstSet, descriptorSetCount, in_pDescriptorSets, dynamicOffsetCount, in_pDynamicOffsets)/*@@@ABC*/;//@@@HERE
        dumper.UpdateDescriptors(pipelineBindPoint, firstSet, pDescriptorSets->GetPointer(), descriptorSetCount);
    }
}

void VulkanReplayConsumer::Process_vkCmdBindIndexBuffer(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    VkIndexType                                 indexType)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkBuffer in_buffer = MapHandle<BufferInfo>(buffer, &VulkanObjectInfoTable::GetBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdBindIndexBuffer(in_commandBuffer, in_buffer, offset, indexType);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdBindIndexBuffer(dumper.GetClonedCommandBuffer(), in_buffer, offset, indexType)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdBindVertexBuffers(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    firstBinding,
    uint32_t                                    bindingCount,
    HandlePointerDecoder<VkBuffer>*             pBuffers,
    PointerDecoder<VkDeviceSize>*               pOffsets)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkBuffer* in_pBuffers = MapHandles<BufferInfo>(pBuffers, bindingCount, &VulkanObjectInfoTable::GetBufferInfo);
    const VkDeviceSize* in_pOffsets = pOffsets->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdBindVertexBuffers(in_commandBuffer, firstBinding, bindingCount, in_pBuffers, in_pOffsets);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdBindVertexBuffers(dumper.GetClonedCommandBuffer(), firstBinding, bindingCount, in_pBuffers, in_pOffsets)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdDraw(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    vertexCount,
    uint32_t                                    instanceCount,
    uint32_t                                    firstVertex,
    uint32_t                                    firstInstance)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdDraw(in_commandBuffer, vertexCount, instanceCount, firstVertex, firstInstance);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdDraw(dumper.GetClonedCommandBuffer(), vertexCount, instanceCount, firstVertex, firstInstance)/*@@@ABC*/;//@@@HERE
        if (dumper.DumpingDrawCallIndex(call_info.index))
        {
            dumper.FinalizeCommandBuffer(*GetDeviceTable(in_commandBuffer));
        }
    }
}

void VulkanReplayConsumer::Process_vkCmdDrawIndexed(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    indexCount,
    uint32_t                                    instanceCount,
    uint32_t                                    firstIndex,
    int32_t                                     vertexOffset,
    uint32_t                                    firstInstance)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdDrawIndexed(in_commandBuffer, indexCount, instanceCount, firstIndex, vertexOffset, firstInstance);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdDrawIndexed(dumper.GetClonedCommandBuffer(), indexCount, instanceCount, firstIndex, vertexOffset, firstInstance)/*@@@ABC*/;//@@@HERE
        if (dumper.DumpingDrawCallIndex(call_info.index))
        {
            dumper.FinalizeCommandBuffer(*GetDeviceTable(in_commandBuffer));
        }
    }
}

void VulkanReplayConsumer::Process_vkCmdDrawIndirect(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    uint32_t                                    drawCount,
    uint32_t                                    stride)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkBuffer in_buffer = MapHandle<BufferInfo>(buffer, &VulkanObjectInfoTable::GetBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdDrawIndirect(in_commandBuffer, in_buffer, offset, drawCount, stride);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdDrawIndirect(dumper.GetClonedCommandBuffer(), in_buffer, offset, drawCount, stride)/*@@@ABC*/;//@@@HERE
        if (dumper.DumpingDrawCallIndex(call_info.index))
        {
            dumper.FinalizeCommandBuffer(*GetDeviceTable(in_commandBuffer));
        }
    }
}

void VulkanReplayConsumer::Process_vkCmdDrawIndexedIndirect(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    uint32_t                                    drawCount,
    uint32_t                                    stride)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkBuffer in_buffer = MapHandle<BufferInfo>(buffer, &VulkanObjectInfoTable::GetBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdDrawIndexedIndirect(in_commandBuffer, in_buffer, offset, drawCount, stride);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdDrawIndexedIndirect(dumper.GetClonedCommandBuffer(), in_buffer, offset, drawCount, stride)/*@@@ABC*/;//@@@HERE
        if (dumper.DumpingDrawCallIndex(call_info.index))
        {
            dumper.FinalizeCommandBuffer(*GetDeviceTable(in_commandBuffer));
        }
    }
}

void VulkanReplayConsumer::Process_vkCmdDispatch(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    groupCountX,
    uint32_t                                    groupCountY,
    uint32_t                                    groupCountZ)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdDispatch(in_commandBuffer, groupCountX, groupCountY, groupCountZ);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdDispatch(dumper.GetClonedCommandBuffer(), groupCountX, groupCountY, groupCountZ)/*@@@ABC*/;//@@@HERE
        if (dumper.DumpingDispatchIndex(call_info.index))
        {
            dumper.FinalizeCommandBuffer(*GetDeviceTable(in_commandBuffer));
        }
    }
}

void VulkanReplayConsumer::Process_vkCmdDispatchIndirect(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkBuffer in_buffer = MapHandle<BufferInfo>(buffer, &VulkanObjectInfoTable::GetBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdDispatchIndirect(in_commandBuffer, in_buffer, offset);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdDispatchIndirect(dumper.GetClonedCommandBuffer(), in_buffer, offset)/*@@@ABC*/;//@@@HERE
        if (dumper.DumpingDrawCallIndex(call_info.index))
        {
            dumper.FinalizeCommandBuffer(*GetDeviceTable(in_commandBuffer));
        }
    }
}

void VulkanReplayConsumer::Process_vkCmdCopyBuffer(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            srcBuffer,
    format::HandleId                            dstBuffer,
    uint32_t                                    regionCount,
    StructPointerDecoder<Decoded_VkBufferCopy>/*@@@PLQ*/* pRegions)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkBuffer in_srcBuffer = MapHandle<BufferInfo>(srcBuffer, &VulkanObjectInfoTable::GetBufferInfo);
    VkBuffer in_dstBuffer = MapHandle<BufferInfo>(dstBuffer, &VulkanObjectInfoTable::GetBufferInfo);
    const VkBufferCopy* in_pRegions = pRegions->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdCopyBuffer(in_commandBuffer, in_srcBuffer, in_dstBuffer, regionCount, in_pRegions);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdCopyBuffer(dumper.GetClonedCommandBuffer(), in_srcBuffer, in_dstBuffer, regionCount, in_pRegions)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdCopyImage(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            srcImage,
    VkImageLayout                               srcImageLayout,
    format::HandleId                            dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    StructPointerDecoder<Decoded_VkImageCopy>/*@@@PLQ*/* pRegions)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkImage in_srcImage = MapHandle<ImageInfo>(srcImage, &VulkanObjectInfoTable::GetImageInfo);
    VkImage in_dstImage = MapHandle<ImageInfo>(dstImage, &VulkanObjectInfoTable::GetImageInfo);
    const VkImageCopy* in_pRegions = pRegions->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdCopyImage(in_commandBuffer, in_srcImage, srcImageLayout, in_dstImage, dstImageLayout, regionCount, in_pRegions);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdCopyImage(dumper.GetClonedCommandBuffer(), in_srcImage, srcImageLayout, in_dstImage, dstImageLayout, regionCount, in_pRegions)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdBlitImage(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            srcImage,
    VkImageLayout                               srcImageLayout,
    format::HandleId                            dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    StructPointerDecoder<Decoded_VkImageBlit>/*@@@PLQ*/* pRegions,
    VkFilter                                    filter)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkImage in_srcImage = MapHandle<ImageInfo>(srcImage, &VulkanObjectInfoTable::GetImageInfo);
    VkImage in_dstImage = MapHandle<ImageInfo>(dstImage, &VulkanObjectInfoTable::GetImageInfo);
    const VkImageBlit* in_pRegions = pRegions->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdBlitImage(in_commandBuffer, in_srcImage, srcImageLayout, in_dstImage, dstImageLayout, regionCount, in_pRegions, filter);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdBlitImage(dumper.GetClonedCommandBuffer(), in_srcImage, srcImageLayout, in_dstImage, dstImageLayout, regionCount, in_pRegions, filter)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdCopyBufferToImage(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            srcBuffer,
    format::HandleId                            dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    StructPointerDecoder<Decoded_VkBufferImageCopy>/*@@@PLQ*/* pRegions)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkBuffer in_srcBuffer = MapHandle<BufferInfo>(srcBuffer, &VulkanObjectInfoTable::GetBufferInfo);
    VkImage in_dstImage = MapHandle<ImageInfo>(dstImage, &VulkanObjectInfoTable::GetImageInfo);
    const VkBufferImageCopy* in_pRegions = pRegions->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdCopyBufferToImage(in_commandBuffer, in_srcBuffer, in_dstImage, dstImageLayout, regionCount, in_pRegions);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdCopyBufferToImage(dumper.GetClonedCommandBuffer(), in_srcBuffer, in_dstImage, dstImageLayout, regionCount, in_pRegions)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdCopyImageToBuffer(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            srcImage,
    VkImageLayout                               srcImageLayout,
    format::HandleId                            dstBuffer,
    uint32_t                                    regionCount,
    StructPointerDecoder<Decoded_VkBufferImageCopy>/*@@@PLQ*/* pRegions)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkImage in_srcImage = MapHandle<ImageInfo>(srcImage, &VulkanObjectInfoTable::GetImageInfo);
    VkBuffer in_dstBuffer = MapHandle<BufferInfo>(dstBuffer, &VulkanObjectInfoTable::GetBufferInfo);
    const VkBufferImageCopy* in_pRegions = pRegions->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdCopyImageToBuffer(in_commandBuffer, in_srcImage, srcImageLayout, in_dstBuffer, regionCount, in_pRegions);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdCopyImageToBuffer(dumper.GetClonedCommandBuffer(), in_srcImage, srcImageLayout, in_dstBuffer, regionCount, in_pRegions)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdUpdateBuffer(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            dstBuffer,
    VkDeviceSize                                dstOffset,
    VkDeviceSize                                dataSize,
    PointerDecoder<uint8_t>*                    pData)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkBuffer in_dstBuffer = MapHandle<BufferInfo>(dstBuffer, &VulkanObjectInfoTable::GetBufferInfo);
    const void* in_pData = pData->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdUpdateBuffer(in_commandBuffer, in_dstBuffer, dstOffset, dataSize, in_pData);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdUpdateBuffer(dumper.GetClonedCommandBuffer(), in_dstBuffer, dstOffset, dataSize, in_pData)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdFillBuffer(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            dstBuffer,
    VkDeviceSize                                dstOffset,
    VkDeviceSize                                size,
    uint32_t                                    data)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkBuffer in_dstBuffer = MapHandle<BufferInfo>(dstBuffer, &VulkanObjectInfoTable::GetBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdFillBuffer(in_commandBuffer, in_dstBuffer, dstOffset, size, data);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdFillBuffer(dumper.GetClonedCommandBuffer(), in_dstBuffer, dstOffset, size, data)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdClearColorImage(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            image,
    VkImageLayout                               imageLayout,
    StructPointerDecoder<Decoded_VkClearColorValue>/*@@@PLQ*/* pColor,
    uint32_t                                    rangeCount,
    StructPointerDecoder<Decoded_VkImageSubresourceRange>/*@@@PLQ*/* pRanges)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkImage in_image = MapHandle<ImageInfo>(image, &VulkanObjectInfoTable::GetImageInfo);
    const VkClearColorValue* in_pColor = pColor->GetPointer();
    const VkImageSubresourceRange* in_pRanges = pRanges->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdClearColorImage(in_commandBuffer, in_image, imageLayout, in_pColor, rangeCount, in_pRanges);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdClearColorImage(dumper.GetClonedCommandBuffer(), in_image, imageLayout, in_pColor, rangeCount, in_pRanges)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdClearDepthStencilImage(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            image,
    VkImageLayout                               imageLayout,
    StructPointerDecoder<Decoded_VkClearDepthStencilValue>/*@@@PLQ*/* pDepthStencil,
    uint32_t                                    rangeCount,
    StructPointerDecoder<Decoded_VkImageSubresourceRange>/*@@@PLQ*/* pRanges)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkImage in_image = MapHandle<ImageInfo>(image, &VulkanObjectInfoTable::GetImageInfo);
    const VkClearDepthStencilValue* in_pDepthStencil = pDepthStencil->GetPointer();
    const VkImageSubresourceRange* in_pRanges = pRanges->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdClearDepthStencilImage(in_commandBuffer, in_image, imageLayout, in_pDepthStencil, rangeCount, in_pRanges);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdClearDepthStencilImage(dumper.GetClonedCommandBuffer(), in_image, imageLayout, in_pDepthStencil, rangeCount, in_pRanges)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdClearAttachments(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    attachmentCount,
    StructPointerDecoder<Decoded_VkClearAttachment>/*@@@PLQ*/* pAttachments,
    uint32_t                                    rectCount,
    StructPointerDecoder<Decoded_VkClearRect>/*@@@PLQ*/* pRects)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkClearAttachment* in_pAttachments = pAttachments->GetPointer();
    const VkClearRect* in_pRects = pRects->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdClearAttachments(in_commandBuffer, attachmentCount, in_pAttachments, rectCount, in_pRects);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdClearAttachments(dumper.GetClonedCommandBuffer(), attachmentCount, in_pAttachments, rectCount, in_pRects)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdResolveImage(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            srcImage,
    VkImageLayout                               srcImageLayout,
    format::HandleId                            dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    StructPointerDecoder<Decoded_VkImageResolve>/*@@@PLQ*/* pRegions)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkImage in_srcImage = MapHandle<ImageInfo>(srcImage, &VulkanObjectInfoTable::GetImageInfo);
    VkImage in_dstImage = MapHandle<ImageInfo>(dstImage, &VulkanObjectInfoTable::GetImageInfo);
    const VkImageResolve* in_pRegions = pRegions->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdResolveImage(in_commandBuffer, in_srcImage, srcImageLayout, in_dstImage, dstImageLayout, regionCount, in_pRegions);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdResolveImage(dumper.GetClonedCommandBuffer(), in_srcImage, srcImageLayout, in_dstImage, dstImageLayout, regionCount, in_pRegions)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetEvent(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            event,
    VkPipelineStageFlags                        stageMask)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkEvent in_event = MapHandle<EventInfo>(event, &VulkanObjectInfoTable::GetEventInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetEvent(in_commandBuffer, in_event, stageMask);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetEvent(dumper.GetClonedCommandBuffer(), in_event, stageMask)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdResetEvent(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            event,
    VkPipelineStageFlags                        stageMask)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkEvent in_event = MapHandle<EventInfo>(event, &VulkanObjectInfoTable::GetEventInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdResetEvent(in_commandBuffer, in_event, stageMask);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdResetEvent(dumper.GetClonedCommandBuffer(), in_event, stageMask)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdWaitEvents(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    eventCount,
    HandlePointerDecoder<VkEvent>*              pEvents,
    VkPipelineStageFlags                        srcStageMask,
    VkPipelineStageFlags                        dstStageMask,
    uint32_t                                    memoryBarrierCount,
    StructPointerDecoder<Decoded_VkMemoryBarrier>/*@@@PLQ*/* pMemoryBarriers,
    uint32_t                                    bufferMemoryBarrierCount,
    StructPointerDecoder<Decoded_VkBufferMemoryBarrier>/*@@@PLQ*/* pBufferMemoryBarriers,
    uint32_t                                    imageMemoryBarrierCount,
    StructPointerDecoder<Decoded_VkImageMemoryBarrier>/*@@@PLQ*/* pImageMemoryBarriers)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkEvent* in_pEvents = MapHandles<EventInfo>(pEvents, eventCount, &VulkanObjectInfoTable::GetEventInfo);
    const VkMemoryBarrier* in_pMemoryBarriers = pMemoryBarriers->GetPointer();
    const VkBufferMemoryBarrier* in_pBufferMemoryBarriers = pBufferMemoryBarriers->GetPointer();
    MapStructArrayHandles(pBufferMemoryBarriers->GetMetaStructPointer(), pBufferMemoryBarriers->GetLength(), GetObjectInfoTable());
    const VkImageMemoryBarrier* in_pImageMemoryBarriers = pImageMemoryBarriers->GetPointer();
    MapStructArrayHandles(pImageMemoryBarriers->GetMetaStructPointer(), pImageMemoryBarriers->GetLength(), GetObjectInfoTable());//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdWaitEvents(in_commandBuffer, eventCount, in_pEvents, srcStageMask, dstStageMask, memoryBarrierCount, in_pMemoryBarriers, bufferMemoryBarrierCount, in_pBufferMemoryBarriers, imageMemoryBarrierCount, in_pImageMemoryBarriers);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdWaitEvents(dumper.GetClonedCommandBuffer(), eventCount, in_pEvents, srcStageMask, dstStageMask, memoryBarrierCount, in_pMemoryBarriers, bufferMemoryBarrierCount, in_pBufferMemoryBarriers, imageMemoryBarrierCount, in_pImageMemoryBarriers)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdPipelineBarrier(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkPipelineStageFlags                        srcStageMask,
    VkPipelineStageFlags                        dstStageMask,
    VkDependencyFlags                           dependencyFlags,
    uint32_t                                    memoryBarrierCount,
    StructPointerDecoder<Decoded_VkMemoryBarrier>/*@@@PLQ*/* pMemoryBarriers,
    uint32_t                                    bufferMemoryBarrierCount,
    StructPointerDecoder<Decoded_VkBufferMemoryBarrier>/*@@@PLQ*/* pBufferMemoryBarriers,
    uint32_t                                    imageMemoryBarrierCount,
    StructPointerDecoder<Decoded_VkImageMemoryBarrier>/*@@@PLQ*/* pImageMemoryBarriers)
{
    auto in_commandBuffer = GetObjectInfoTable().GetCommandBufferInfo(commandBuffer);

    MapStructArrayHandles(pBufferMemoryBarriers->GetMetaStructPointer(), pBufferMemoryBarriers->GetLength(), GetObjectInfoTable());

    MapStructArrayHandles(pImageMemoryBarriers->GetMetaStructPointer(), pImageMemoryBarriers->GetLength(), GetObjectInfoTable());//@@@DFK
    OverrideCmdPipelineBarrier(GetDeviceTable(in_commandBuffer->handle)->CmdPipelineBarrier, in_commandBuffer, srcStageMask, dstStageMask, dependencyFlags, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdPipelineBarrier(dumper.GetClonedCommandBuffer(), srcStageMask, dstStageMask, dependencyFlags, memoryBarrierCount, pMemoryBarriers->GetPointer(), bufferMemoryBarrierCount, pBufferMemoryBarriers->GetPointer(), imageMemoryBarrierCount, pImageMemoryBarriers->GetPointer())/*@@@xABC*/;//@@@xHERE
    }
}

void VulkanReplayConsumer::Process_vkCmdBeginQuery(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            queryPool,
    uint32_t                                    query,
    VkQueryControlFlags                         flags)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkQueryPool in_queryPool = MapHandle<QueryPoolInfo>(queryPool, &VulkanObjectInfoTable::GetQueryPoolInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdBeginQuery(in_commandBuffer, in_queryPool, query, flags);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdBeginQuery(dumper.GetClonedCommandBuffer(), in_queryPool, query, flags)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdEndQuery(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            queryPool,
    uint32_t                                    query)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkQueryPool in_queryPool = MapHandle<QueryPoolInfo>(queryPool, &VulkanObjectInfoTable::GetQueryPoolInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdEndQuery(in_commandBuffer, in_queryPool, query);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdEndQuery(dumper.GetClonedCommandBuffer(), in_queryPool, query)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdResetQueryPool(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            queryPool,
    uint32_t                                    firstQuery,
    uint32_t                                    queryCount)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkQueryPool in_queryPool = MapHandle<QueryPoolInfo>(queryPool, &VulkanObjectInfoTable::GetQueryPoolInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdResetQueryPool(in_commandBuffer, in_queryPool, firstQuery, queryCount);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdResetQueryPool(dumper.GetClonedCommandBuffer(), in_queryPool, firstQuery, queryCount)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdWriteTimestamp(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkPipelineStageFlagBits                     pipelineStage,
    format::HandleId                            queryPool,
    uint32_t                                    query)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkQueryPool in_queryPool = MapHandle<QueryPoolInfo>(queryPool, &VulkanObjectInfoTable::GetQueryPoolInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdWriteTimestamp(in_commandBuffer, pipelineStage, in_queryPool, query);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdWriteTimestamp(dumper.GetClonedCommandBuffer(), pipelineStage, in_queryPool, query)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdCopyQueryPoolResults(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            queryPool,
    uint32_t                                    firstQuery,
    uint32_t                                    queryCount,
    format::HandleId                            dstBuffer,
    VkDeviceSize                                dstOffset,
    VkDeviceSize                                stride,
    VkQueryResultFlags                          flags)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkQueryPool in_queryPool = MapHandle<QueryPoolInfo>(queryPool, &VulkanObjectInfoTable::GetQueryPoolInfo);
    VkBuffer in_dstBuffer = MapHandle<BufferInfo>(dstBuffer, &VulkanObjectInfoTable::GetBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdCopyQueryPoolResults(in_commandBuffer, in_queryPool, firstQuery, queryCount, in_dstBuffer, dstOffset, stride, flags);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdCopyQueryPoolResults(dumper.GetClonedCommandBuffer(), in_queryPool, firstQuery, queryCount, in_dstBuffer, dstOffset, stride, flags)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdPushConstants(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            layout,
    VkShaderStageFlags                          stageFlags,
    uint32_t                                    offset,
    uint32_t                                    size,
    PointerDecoder<uint8_t>*                    pValues)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkPipelineLayout in_layout = MapHandle<PipelineLayoutInfo>(layout, &VulkanObjectInfoTable::GetPipelineLayoutInfo);
    const void* in_pValues = pValues->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdPushConstants(in_commandBuffer, in_layout, stageFlags, offset, size, in_pValues);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdPushConstants(dumper.GetClonedCommandBuffer(), in_layout, stageFlags, offset, size, in_pValues)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdBeginRenderPass(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkRenderPassBeginInfo>/*@@@PLQ*/* pRenderPassBegin,
    VkSubpassContents                           contents)
{
    auto in_commandBuffer = GetObjectInfoTable().GetCommandBufferInfo(commandBuffer);

    MapStructHandles(pRenderPassBegin->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    OverrideCmdBeginRenderPass(GetDeviceTable(in_commandBuffer->handle)->CmdBeginRenderPass, in_commandBuffer, pRenderPassBegin, contents);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdBeginRenderPass(dumper.GetClonedCommandBuffer(), pRenderPassBegin->GetPointer(), contents)/*@@@xABC*/;//@@@xHERE
        dumper.EnterRenderPass();
    }
}

void VulkanReplayConsumer::Process_vkCmdNextSubpass(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkSubpassContents                           contents)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdNextSubpass(in_commandBuffer, contents);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdNextSubpass(dumper.GetClonedCommandBuffer(), contents)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdEndRenderPass(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdEndRenderPass(in_commandBuffer);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdEndRenderPass(dumper.GetClonedCommandBuffer())/*@@@ABC*/;//@@@HERE
        dumper.ExitRenderPass();
    }
}

void VulkanReplayConsumer::Process_vkCmdExecuteCommands(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    commandBufferCount,
    HandlePointerDecoder<VkCommandBuffer>*      pCommandBuffers)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkCommandBuffer* in_pCommandBuffers = MapHandles<CommandBufferInfo>(pCommandBuffers, commandBufferCount, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdExecuteCommands(in_commandBuffer, commandBufferCount, in_pCommandBuffers);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdExecuteCommands(dumper.GetClonedCommandBuffer(), commandBufferCount, in_pCommandBuffers)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkBindBufferMemory2(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    bindInfoCount,
    StructPointerDecoder<Decoded_VkBindBufferMemoryInfo>/*@@@PLQ*/* pBindInfos)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);

    MapStructArrayHandles(pBindInfos->GetMetaStructPointer(), pBindInfos->GetLength(), GetObjectInfoTable());//@@@DFK
    VkResult replay_result = OverrideBindBufferMemory2(GetDeviceTable(in_device->handle)->BindBufferMemory2, returnValue, in_device, bindInfoCount, pBindInfos);
    CheckResult("vkBindBufferMemory2", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkBindImageMemory2(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    bindInfoCount,
    StructPointerDecoder<Decoded_VkBindImageMemoryInfo>/*@@@PLQ*/* pBindInfos)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);

    MapStructArrayHandles(pBindInfos->GetMetaStructPointer(), pBindInfos->GetLength(), GetObjectInfoTable());//@@@DFK
    VkResult replay_result = OverrideBindImageMemory2(GetDeviceTable(in_device->handle)->BindImageMemory2, returnValue, in_device, bindInfoCount, pBindInfos);
    CheckResult("vkBindImageMemory2", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetDeviceGroupPeerMemoryFeatures(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    uint32_t                                    heapIndex,
    uint32_t                                    localDeviceIndex,
    uint32_t                                    remoteDeviceIndex,
    PointerDecoder<VkPeerMemoryFeatureFlags>*   pPeerMemoryFeatures)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkPeerMemoryFeatureFlags* out_pPeerMemoryFeatures = pPeerMemoryFeatures->IsNull() ? nullptr : pPeerMemoryFeatures->AllocateOutputData(1, static_cast<VkPeerMemoryFeatureFlags>(0));//@@@DFK
    GetDeviceTable(in_device)->GetDeviceGroupPeerMemoryFeatures(in_device, heapIndex, localDeviceIndex, remoteDeviceIndex, out_pPeerMemoryFeatures);//@@@HQA
}

void VulkanReplayConsumer::Process_vkCmdSetDeviceMask(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    deviceMask)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetDeviceMask(in_commandBuffer, deviceMask);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetDeviceMask(dumper.GetClonedCommandBuffer(), deviceMask)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdDispatchBase(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    baseGroupX,
    uint32_t                                    baseGroupY,
    uint32_t                                    baseGroupZ,
    uint32_t                                    groupCountX,
    uint32_t                                    groupCountY,
    uint32_t                                    groupCountZ)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdDispatchBase(in_commandBuffer, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdDispatchBase(dumper.GetClonedCommandBuffer(), baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ)/*@@@ABC*/;//@@@HERE
        if (dumper.DumpingDrawCallIndex(call_info.index))
        {
            dumper.FinalizeCommandBuffer(*GetDeviceTable(in_commandBuffer));
        }
    }
}

void VulkanReplayConsumer::Process_vkEnumeratePhysicalDeviceGroups(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    PointerDecoder<uint32_t>*                   pPhysicalDeviceGroupCount,
    StructPointerDecoder<Decoded_VkPhysicalDeviceGroupProperties>/*@@@PLQ*/* pPhysicalDeviceGroupProperties)
{
    auto in_instance = GetObjectInfoTable().GetInstanceInfo(instance);
    pPhysicalDeviceGroupCount->IsNull() ? nullptr : pPhysicalDeviceGroupCount->AllocateOutputData(1, GetOutputArrayCount<uint32_t, InstanceInfo>("vkEnumeratePhysicalDeviceGroups", returnValue, instance, kInstanceArrayEnumeratePhysicalDeviceGroups, pPhysicalDeviceGroupCount, pPhysicalDeviceGroupProperties, &VulkanObjectInfoTable::GetInstanceInfo));
    SetStructArrayHandleLengths<Decoded_VkPhysicalDeviceGroupProperties>(pPhysicalDeviceGroupProperties->GetMetaStructPointer(), pPhysicalDeviceGroupProperties->GetLength());
    if (!pPhysicalDeviceGroupProperties->IsNull()) { pPhysicalDeviceGroupProperties->AllocateOutputData(*pPhysicalDeviceGroupCount->GetOutputPointer(), VkPhysicalDeviceGroupProperties{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES, nullptr }); }//@@@DFK
    VkResult replay_result = OverrideEnumeratePhysicalDeviceGroups(GetInstanceTable(in_instance->handle)->EnumeratePhysicalDeviceGroups, returnValue, in_instance, pPhysicalDeviceGroupCount, pPhysicalDeviceGroupProperties);
    CheckResult("vkEnumeratePhysicalDeviceGroups", returnValue, replay_result, call_info);

    if (pPhysicalDeviceGroupProperties->IsNull()) { SetOutputArrayCount<InstanceInfo>(instance, kInstanceArrayEnumeratePhysicalDeviceGroups, *pPhysicalDeviceGroupCount->GetOutputPointer(), &VulkanObjectInfoTable::GetInstanceInfo); }
    AddStructArrayHandles<Decoded_VkPhysicalDeviceGroupProperties>(instance, pPhysicalDeviceGroupProperties->GetMetaStructPointer(), pPhysicalDeviceGroupProperties->GetLength(), pPhysicalDeviceGroupProperties->GetOutputPointer(), *pPhysicalDeviceGroupCount->GetOutputPointer(), &GetObjectInfoTable());
}

void VulkanReplayConsumer::Process_vkGetImageMemoryRequirements2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkImageMemoryRequirementsInfo2>/*@@@PLQ*/* pInfo,
    StructPointerDecoder<Decoded_VkMemoryRequirements2>/*@@@PLQ*/* pMemoryRequirements)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkImageMemoryRequirementsInfo2* in_pInfo = pInfo->GetPointer();
    MapStructHandles(pInfo->GetMetaStructPointer(), GetObjectInfoTable());
    VkMemoryRequirements2* out_pMemoryRequirements = pMemoryRequirements->IsNull() ? nullptr : pMemoryRequirements->AllocateOutputData(1, { VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2, nullptr });
    InitializeOutputStructPNext(pMemoryRequirements);//@@@DFK
    GetDeviceTable(in_device)->GetImageMemoryRequirements2(in_device, in_pInfo, out_pMemoryRequirements);//@@@HQA
}

void VulkanReplayConsumer::Process_vkGetBufferMemoryRequirements2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkBufferMemoryRequirementsInfo2>/*@@@PLQ*/* pInfo,
    StructPointerDecoder<Decoded_VkMemoryRequirements2>/*@@@PLQ*/* pMemoryRequirements)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkBufferMemoryRequirementsInfo2* in_pInfo = pInfo->GetPointer();
    MapStructHandles(pInfo->GetMetaStructPointer(), GetObjectInfoTable());
    VkMemoryRequirements2* out_pMemoryRequirements = pMemoryRequirements->IsNull() ? nullptr : pMemoryRequirements->AllocateOutputData(1, { VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2, nullptr });
    InitializeOutputStructPNext(pMemoryRequirements);//@@@DFK
    GetDeviceTable(in_device)->GetBufferMemoryRequirements2(in_device, in_pInfo, out_pMemoryRequirements);//@@@HQA
}

void VulkanReplayConsumer::Process_vkGetImageSparseMemoryRequirements2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkImageSparseMemoryRequirementsInfo2>/*@@@PLQ*/* pInfo,
    PointerDecoder<uint32_t>*                   pSparseMemoryRequirementCount,
    StructPointerDecoder<Decoded_VkSparseImageMemoryRequirements2>/*@@@PLQ*/* pSparseMemoryRequirements)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkImageSparseMemoryRequirementsInfo2* in_pInfo = pInfo->GetPointer();
    MapStructHandles(pInfo->GetMetaStructPointer(), GetObjectInfoTable());
    uint32_t* out_pSparseMemoryRequirementCount = pSparseMemoryRequirementCount->IsNull() ? nullptr : pSparseMemoryRequirementCount->AllocateOutputData(1, GetOutputArrayCount<uint32_t, DeviceInfo>("vkGetImageSparseMemoryRequirements2", VK_SUCCESS, device, kDeviceArrayGetImageSparseMemoryRequirements2, pSparseMemoryRequirementCount, pSparseMemoryRequirements, &VulkanObjectInfoTable::GetDeviceInfo));
    VkSparseImageMemoryRequirements2* out_pSparseMemoryRequirements = pSparseMemoryRequirements->IsNull() ? nullptr : pSparseMemoryRequirements->AllocateOutputData(*out_pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2{ VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2, nullptr });//@@@DFK
    GetDeviceTable(in_device)->GetImageSparseMemoryRequirements2(in_device, in_pInfo, out_pSparseMemoryRequirementCount, out_pSparseMemoryRequirements);//@@@HQA

    if (pSparseMemoryRequirements->IsNull()) { SetOutputArrayCount<DeviceInfo>(device, kDeviceArrayGetImageSparseMemoryRequirements2, *out_pSparseMemoryRequirementCount, &VulkanObjectInfoTable::GetDeviceInfo); }
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceFeatures2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceFeatures2>/*@@@PLQ*/* pFeatures)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    VkPhysicalDeviceFeatures2* out_pFeatures = pFeatures->IsNull() ? nullptr : pFeatures->AllocateOutputData(1, { VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2, nullptr });
    InitializeOutputStructPNext(pFeatures);//@@@DFK
    GetInstanceTable(in_physicalDevice)->GetPhysicalDeviceFeatures2(in_physicalDevice, out_pFeatures);//@@@HQA
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceProperties2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceProperties2>/*@@@PLQ*/* pProperties)
{
    auto in_physicalDevice = GetObjectInfoTable().GetPhysicalDeviceInfo(physicalDevice);
    pProperties->IsNull() ? nullptr : pProperties->AllocateOutputData(1, { VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2, nullptr });
    InitializeOutputStructPNext(pProperties);//@@@DFK
    OverrideGetPhysicalDeviceProperties2(GetInstanceTable(in_physicalDevice->handle)->GetPhysicalDeviceProperties2, in_physicalDevice, pProperties);//@@@HQA
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceFormatProperties2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    VkFormat                                    format,
    StructPointerDecoder<Decoded_VkFormatProperties2>/*@@@PLQ*/* pFormatProperties)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    VkFormatProperties2* out_pFormatProperties = pFormatProperties->IsNull() ? nullptr : pFormatProperties->AllocateOutputData(1, { VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2, nullptr });
    InitializeOutputStructPNext(pFormatProperties);//@@@DFK
    GetInstanceTable(in_physicalDevice)->GetPhysicalDeviceFormatProperties2(in_physicalDevice, format, out_pFormatProperties);//@@@HQA
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceImageFormatProperties2(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceImageFormatInfo2>/*@@@PLQ*/* pImageFormatInfo,
    StructPointerDecoder<Decoded_VkImageFormatProperties2>/*@@@PLQ*/* pImageFormatProperties)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    const VkPhysicalDeviceImageFormatInfo2* in_pImageFormatInfo = pImageFormatInfo->GetPointer();
    VkImageFormatProperties2* out_pImageFormatProperties = pImageFormatProperties->IsNull() ? nullptr : pImageFormatProperties->AllocateOutputData(1, { VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2, nullptr });
    InitializeOutputStructPNext(pImageFormatProperties);//@@@DFK
    VkResult replay_result = GetInstanceTable(in_physicalDevice)->GetPhysicalDeviceImageFormatProperties2(in_physicalDevice, in_pImageFormatInfo, out_pImageFormatProperties);
    CheckResult("vkGetPhysicalDeviceImageFormatProperties2", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceQueueFamilyProperties2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    PointerDecoder<uint32_t>*                   pQueueFamilyPropertyCount,
    StructPointerDecoder<Decoded_VkQueueFamilyProperties2>/*@@@PLQ*/* pQueueFamilyProperties)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    uint32_t* out_pQueueFamilyPropertyCount = pQueueFamilyPropertyCount->IsNull() ? nullptr : pQueueFamilyPropertyCount->AllocateOutputData(1, GetOutputArrayCount<uint32_t, PhysicalDeviceInfo>("vkGetPhysicalDeviceQueueFamilyProperties2", VK_SUCCESS, physicalDevice, kPhysicalDeviceArrayGetPhysicalDeviceQueueFamilyProperties2, pQueueFamilyPropertyCount, pQueueFamilyProperties, &VulkanObjectInfoTable::GetPhysicalDeviceInfo));
    VkQueueFamilyProperties2* out_pQueueFamilyProperties = pQueueFamilyProperties->IsNull() ? nullptr : pQueueFamilyProperties->AllocateOutputData(*out_pQueueFamilyPropertyCount, VkQueueFamilyProperties2{ VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2, nullptr });//@@@DFK
    GetInstanceTable(in_physicalDevice)->GetPhysicalDeviceQueueFamilyProperties2(in_physicalDevice, out_pQueueFamilyPropertyCount, out_pQueueFamilyProperties);//@@@HQA

    if (pQueueFamilyProperties->IsNull()) { SetOutputArrayCount<PhysicalDeviceInfo>(physicalDevice, kPhysicalDeviceArrayGetPhysicalDeviceQueueFamilyProperties2, *out_pQueueFamilyPropertyCount, &VulkanObjectInfoTable::GetPhysicalDeviceInfo); }
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceMemoryProperties2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceMemoryProperties2>/*@@@PLQ*/* pMemoryProperties)
{
    auto in_physicalDevice = GetObjectInfoTable().GetPhysicalDeviceInfo(physicalDevice);
    pMemoryProperties->IsNull() ? nullptr : pMemoryProperties->AllocateOutputData(1, { VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2, nullptr });
    InitializeOutputStructPNext(pMemoryProperties);//@@@DFK
    OverrideGetPhysicalDeviceMemoryProperties2(GetInstanceTable(in_physicalDevice->handle)->GetPhysicalDeviceMemoryProperties2, in_physicalDevice, pMemoryProperties);//@@@HQA
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceSparseImageFormatProperties2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceSparseImageFormatInfo2>/*@@@PLQ*/* pFormatInfo,
    PointerDecoder<uint32_t>*                   pPropertyCount,
    StructPointerDecoder<Decoded_VkSparseImageFormatProperties2>/*@@@PLQ*/* pProperties)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    const VkPhysicalDeviceSparseImageFormatInfo2* in_pFormatInfo = pFormatInfo->GetPointer();
    uint32_t* out_pPropertyCount = pPropertyCount->IsNull() ? nullptr : pPropertyCount->AllocateOutputData(1, GetOutputArrayCount<uint32_t, PhysicalDeviceInfo>("vkGetPhysicalDeviceSparseImageFormatProperties2", VK_SUCCESS, physicalDevice, kPhysicalDeviceArrayGetPhysicalDeviceSparseImageFormatProperties2, pPropertyCount, pProperties, &VulkanObjectInfoTable::GetPhysicalDeviceInfo));
    VkSparseImageFormatProperties2* out_pProperties = pProperties->IsNull() ? nullptr : pProperties->AllocateOutputData(*out_pPropertyCount, VkSparseImageFormatProperties2{ VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2, nullptr });//@@@DFK
    GetInstanceTable(in_physicalDevice)->GetPhysicalDeviceSparseImageFormatProperties2(in_physicalDevice, in_pFormatInfo, out_pPropertyCount, out_pProperties);//@@@HQA

    if (pProperties->IsNull()) { SetOutputArrayCount<PhysicalDeviceInfo>(physicalDevice, kPhysicalDeviceArrayGetPhysicalDeviceSparseImageFormatProperties2, *out_pPropertyCount, &VulkanObjectInfoTable::GetPhysicalDeviceInfo); }
}

void VulkanReplayConsumer::Process_vkTrimCommandPool(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            commandPool,
    VkCommandPoolTrimFlags                      flags)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkCommandPool in_commandPool = MapHandle<CommandPoolInfo>(commandPool, &VulkanObjectInfoTable::GetCommandPoolInfo);//@@@DFK
    GetDeviceTable(in_device)->TrimCommandPool(in_device, in_commandPool, flags);//@@@HQA
}

void VulkanReplayConsumer::Process_vkGetDeviceQueue2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDeviceQueueInfo2>/*@@@PLQ*/* pQueueInfo,
    HandlePointerDecoder<VkQueue>*              pQueue)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);
    if (!pQueue->IsNull()) { pQueue->SetHandleLength(1); }
    QueueInfo handle_info;
    pQueue->SetConsumerData(0, &handle_info);//@@@DFK
    OverrideGetDeviceQueue2(GetDeviceTable(in_device->handle)->GetDeviceQueue2, in_device, pQueueInfo, pQueue);//@@@HQA

    AddHandle<QueueInfo>(device, pQueue->GetPointer(), pQueue->GetHandlePointer(), std::move(handle_info), &VulkanObjectInfoTable::AddQueueInfo);
}

void VulkanReplayConsumer::Process_vkCreateSamplerYcbcrConversion(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkSamplerYcbcrConversionCreateInfo>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkSamplerYcbcrConversion>* pYcbcrConversion)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkSamplerYcbcrConversionCreateInfo* in_pCreateInfo = pCreateInfo->GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    if (!pYcbcrConversion->IsNull()) { pYcbcrConversion->SetHandleLength(1); }
    VkSamplerYcbcrConversion* out_pYcbcrConversion = pYcbcrConversion->GetHandlePointer();//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->CreateSamplerYcbcrConversion(in_device, in_pCreateInfo, in_pAllocator, out_pYcbcrConversion);
    CheckResult("vkCreateSamplerYcbcrConversion", returnValue, replay_result, call_info);

    AddHandle<SamplerYcbcrConversionInfo>(device, pYcbcrConversion->GetPointer(), out_pYcbcrConversion, &VulkanObjectInfoTable::AddSamplerYcbcrConversionInfo);
}

void VulkanReplayConsumer::Process_vkDestroySamplerYcbcrConversion(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            ycbcrConversion,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkSamplerYcbcrConversion in_ycbcrConversion = MapHandle<SamplerYcbcrConversionInfo>(ycbcrConversion, &VulkanObjectInfoTable::GetSamplerYcbcrConversionInfo);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);//@@@DFK
    GetDeviceTable(in_device)->DestroySamplerYcbcrConversion(in_device, in_ycbcrConversion, in_pAllocator);//@@@HQA
    RemoveHandle(ycbcrConversion, &VulkanObjectInfoTable::RemoveSamplerYcbcrConversionInfo);
}

void VulkanReplayConsumer::Process_vkCreateDescriptorUpdateTemplate(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDescriptorUpdateTemplateCreateInfo>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkDescriptorUpdateTemplate>* pDescriptorUpdateTemplate)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);

    MapStructHandles(pCreateInfo->GetMetaStructPointer(), GetObjectInfoTable());
    if (!pDescriptorUpdateTemplate->IsNull()) { pDescriptorUpdateTemplate->SetHandleLength(1); }
    DescriptorUpdateTemplateInfo handle_info;
    pDescriptorUpdateTemplate->SetConsumerData(0, &handle_info);//@@@DFK
    VkResult replay_result = OverrideCreateDescriptorUpdateTemplate(GetDeviceTable(in_device->handle)->CreateDescriptorUpdateTemplate, returnValue, in_device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate);
    CheckResult("vkCreateDescriptorUpdateTemplate", returnValue, replay_result, call_info);

    AddHandle<DescriptorUpdateTemplateInfo>(device, pDescriptorUpdateTemplate->GetPointer(), pDescriptorUpdateTemplate->GetHandlePointer(), std::move(handle_info), &VulkanObjectInfoTable::AddDescriptorUpdateTemplateInfo);
}

void VulkanReplayConsumer::Process_vkDestroyDescriptorUpdateTemplate(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            descriptorUpdateTemplate,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);
    auto in_descriptorUpdateTemplate = GetObjectInfoTable().GetDescriptorUpdateTemplateInfo(descriptorUpdateTemplate);//@@@DFK
    OverrideDestroyDescriptorUpdateTemplate(GetDeviceTable(in_device->handle)->DestroyDescriptorUpdateTemplate, in_device, in_descriptorUpdateTemplate, pAllocator);//@@@HQA
    RemoveHandle(descriptorUpdateTemplate, &VulkanObjectInfoTable::RemoveDescriptorUpdateTemplateInfo);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceExternalBufferProperties(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceExternalBufferInfo>/*@@@PLQ*/* pExternalBufferInfo,
    StructPointerDecoder<Decoded_VkExternalBufferProperties>/*@@@PLQ*/* pExternalBufferProperties)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    const VkPhysicalDeviceExternalBufferInfo* in_pExternalBufferInfo = pExternalBufferInfo->GetPointer();
    VkExternalBufferProperties* out_pExternalBufferProperties = pExternalBufferProperties->IsNull() ? nullptr : pExternalBufferProperties->AllocateOutputData(1, { VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES, nullptr });
    InitializeOutputStructPNext(pExternalBufferProperties);//@@@DFK
    GetInstanceTable(in_physicalDevice)->GetPhysicalDeviceExternalBufferProperties(in_physicalDevice, in_pExternalBufferInfo, out_pExternalBufferProperties);//@@@HQA
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceExternalFenceProperties(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceExternalFenceInfo>/*@@@PLQ*/* pExternalFenceInfo,
    StructPointerDecoder<Decoded_VkExternalFenceProperties>/*@@@PLQ*/* pExternalFenceProperties)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    const VkPhysicalDeviceExternalFenceInfo* in_pExternalFenceInfo = pExternalFenceInfo->GetPointer();
    VkExternalFenceProperties* out_pExternalFenceProperties = pExternalFenceProperties->IsNull() ? nullptr : pExternalFenceProperties->AllocateOutputData(1, { VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES, nullptr });
    InitializeOutputStructPNext(pExternalFenceProperties);//@@@DFK
    GetInstanceTable(in_physicalDevice)->GetPhysicalDeviceExternalFenceProperties(in_physicalDevice, in_pExternalFenceInfo, out_pExternalFenceProperties);//@@@HQA
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceExternalSemaphoreProperties(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceExternalSemaphoreInfo>/*@@@PLQ*/* pExternalSemaphoreInfo,
    StructPointerDecoder<Decoded_VkExternalSemaphoreProperties>/*@@@PLQ*/* pExternalSemaphoreProperties)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    const VkPhysicalDeviceExternalSemaphoreInfo* in_pExternalSemaphoreInfo = pExternalSemaphoreInfo->GetPointer();
    VkExternalSemaphoreProperties* out_pExternalSemaphoreProperties = pExternalSemaphoreProperties->IsNull() ? nullptr : pExternalSemaphoreProperties->AllocateOutputData(1, { VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES, nullptr });
    InitializeOutputStructPNext(pExternalSemaphoreProperties);//@@@DFK
    GetInstanceTable(in_physicalDevice)->GetPhysicalDeviceExternalSemaphoreProperties(in_physicalDevice, in_pExternalSemaphoreInfo, out_pExternalSemaphoreProperties);//@@@HQA
}

void VulkanReplayConsumer::Process_vkGetDescriptorSetLayoutSupport(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDescriptorSetLayoutCreateInfo>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkDescriptorSetLayoutSupport>/*@@@PLQ*/* pSupport)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkDescriptorSetLayoutCreateInfo* in_pCreateInfo = pCreateInfo->GetPointer();
    MapStructHandles(pCreateInfo->GetMetaStructPointer(), GetObjectInfoTable());
    VkDescriptorSetLayoutSupport* out_pSupport = pSupport->IsNull() ? nullptr : pSupport->AllocateOutputData(1, { VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT, nullptr });
    InitializeOutputStructPNext(pSupport);//@@@DFK
    GetDeviceTable(in_device)->GetDescriptorSetLayoutSupport(in_device, in_pCreateInfo, out_pSupport);//@@@HQA
}

void VulkanReplayConsumer::Process_vkCmdDrawIndirectCount(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    format::HandleId                            countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkBuffer in_buffer = MapHandle<BufferInfo>(buffer, &VulkanObjectInfoTable::GetBufferInfo);
    VkBuffer in_countBuffer = MapHandle<BufferInfo>(countBuffer, &VulkanObjectInfoTable::GetBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdDrawIndirectCount(in_commandBuffer, in_buffer, offset, in_countBuffer, countBufferOffset, maxDrawCount, stride);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdDrawIndirectCount(dumper.GetClonedCommandBuffer(), in_buffer, offset, in_countBuffer, countBufferOffset, maxDrawCount, stride)/*@@@ABC*/;//@@@HERE
        if (dumper.DumpingDrawCallIndex(call_info.index))
        {
            dumper.FinalizeCommandBuffer(*GetDeviceTable(in_commandBuffer));
        }
    }
}

void VulkanReplayConsumer::Process_vkCmdDrawIndexedIndirectCount(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    format::HandleId                            countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkBuffer in_buffer = MapHandle<BufferInfo>(buffer, &VulkanObjectInfoTable::GetBufferInfo);
    VkBuffer in_countBuffer = MapHandle<BufferInfo>(countBuffer, &VulkanObjectInfoTable::GetBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdDrawIndexedIndirectCount(in_commandBuffer, in_buffer, offset, in_countBuffer, countBufferOffset, maxDrawCount, stride);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdDrawIndexedIndirectCount(dumper.GetClonedCommandBuffer(), in_buffer, offset, in_countBuffer, countBufferOffset, maxDrawCount, stride)/*@@@ABC*/;//@@@HERE
        if (dumper.DumpingDrawCallIndex(call_info.index))
        {
            dumper.FinalizeCommandBuffer(*GetDeviceTable(in_commandBuffer));
        }
    }
}

void VulkanReplayConsumer::Process_vkCreateRenderPass2(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkRenderPassCreateInfo2>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkRenderPass>*         pRenderPass)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);
    if (!pRenderPass->IsNull()) { pRenderPass->SetHandleLength(1); }
    RenderPassInfo handle_info;
    pRenderPass->SetConsumerData(0, &handle_info);//@@@DFK
    VkResult replay_result = OverrideCreateRenderPass2(GetDeviceTable(in_device->handle)->CreateRenderPass2, returnValue, in_device, pCreateInfo, pAllocator, pRenderPass);
    CheckResult("vkCreateRenderPass2", returnValue, replay_result, call_info);

    AddHandle<RenderPassInfo>(device, pRenderPass->GetPointer(), pRenderPass->GetHandlePointer(), std::move(handle_info), &VulkanObjectInfoTable::AddRenderPassInfo);
}

void VulkanReplayConsumer::Process_vkCmdBeginRenderPass2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkRenderPassBeginInfo>/*@@@PLQ*/* pRenderPassBegin,
    StructPointerDecoder<Decoded_VkSubpassBeginInfo>/*@@@PLQ*/* pSubpassBeginInfo)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkRenderPassBeginInfo* in_pRenderPassBegin = pRenderPassBegin->GetPointer();
    MapStructHandles(pRenderPassBegin->GetMetaStructPointer(), GetObjectInfoTable());
    const VkSubpassBeginInfo* in_pSubpassBeginInfo = pSubpassBeginInfo->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdBeginRenderPass2(in_commandBuffer, in_pRenderPassBegin, in_pSubpassBeginInfo);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdBeginRenderPass2(dumper.GetClonedCommandBuffer(), in_pRenderPassBegin, in_pSubpassBeginInfo)/*@@@ABC*/;//@@@HERE
        //@@@TODO: vkCmdBeginRenderPass2 is not handled in the same way as vkCmdBeginRenderPass
    }
}

void VulkanReplayConsumer::Process_vkCmdNextSubpass2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkSubpassBeginInfo>/*@@@PLQ*/* pSubpassBeginInfo,
    StructPointerDecoder<Decoded_VkSubpassEndInfo>/*@@@PLQ*/* pSubpassEndInfo)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkSubpassBeginInfo* in_pSubpassBeginInfo = pSubpassBeginInfo->GetPointer();
    const VkSubpassEndInfo* in_pSubpassEndInfo = pSubpassEndInfo->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdNextSubpass2(in_commandBuffer, in_pSubpassBeginInfo, in_pSubpassEndInfo);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdNextSubpass2(dumper.GetClonedCommandBuffer(), in_pSubpassBeginInfo, in_pSubpassEndInfo)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdEndRenderPass2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkSubpassEndInfo>/*@@@PLQ*/* pSubpassEndInfo)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkSubpassEndInfo* in_pSubpassEndInfo = pSubpassEndInfo->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdEndRenderPass2(in_commandBuffer, in_pSubpassEndInfo);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdEndRenderPass2(dumper.GetClonedCommandBuffer(), in_pSubpassEndInfo)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkResetQueryPool(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            queryPool,
    uint32_t                                    firstQuery,
    uint32_t                                    queryCount)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkQueryPool in_queryPool = MapHandle<QueryPoolInfo>(queryPool, &VulkanObjectInfoTable::GetQueryPoolInfo);//@@@DFK
    GetDeviceTable(in_device)->ResetQueryPool(in_device, in_queryPool, firstQuery, queryCount);//@@@HQA
}

void VulkanReplayConsumer::Process_vkGetSemaphoreCounterValue(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            semaphore,
    PointerDecoder<uint64_t>*                   pValue)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkSemaphore in_semaphore = MapHandle<SemaphoreInfo>(semaphore, &VulkanObjectInfoTable::GetSemaphoreInfo);
    uint64_t* out_pValue = pValue->IsNull() ? nullptr : pValue->AllocateOutputData(1, static_cast<uint64_t>(0));//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->GetSemaphoreCounterValue(in_device, in_semaphore, out_pValue);
    CheckResult("vkGetSemaphoreCounterValue", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkWaitSemaphores(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkSemaphoreWaitInfo>/*@@@PLQ*/* pWaitInfo,
    uint64_t                                    timeout)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);

    MapStructHandles(pWaitInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    VkResult replay_result = OverrideWaitSemaphores(GetDeviceTable(in_device->handle)->WaitSemaphores, returnValue, in_device, pWaitInfo, timeout);
    CheckResult("vkWaitSemaphores", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkSignalSemaphore(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkSemaphoreSignalInfo>/*@@@PLQ*/* pSignalInfo)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkSemaphoreSignalInfo* in_pSignalInfo = pSignalInfo->GetPointer();
    MapStructHandles(pSignalInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->SignalSemaphore(in_device, in_pSignalInfo);
    CheckResult("vkSignalSemaphore", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetBufferDeviceAddress(
    const ApiCallInfo&                          call_info,
    VkDeviceAddress                             returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkBufferDeviceAddressInfo>/*@@@PLQ*/* pInfo)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);

    MapStructHandles(pInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    OverrideGetBufferDeviceAddress(GetDeviceTable(in_device->handle)->GetBufferDeviceAddress, in_device, pInfo);//@@@HQA
}

void VulkanReplayConsumer::Process_vkGetBufferOpaqueCaptureAddress(
    const ApiCallInfo&                          call_info,
    uint64_t                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkBufferDeviceAddressInfo>/*@@@PLQ*/* pInfo)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkBufferDeviceAddressInfo* in_pInfo = pInfo->GetPointer();
    MapStructHandles(pInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    GetDeviceTable(in_device)->GetBufferOpaqueCaptureAddress(in_device, in_pInfo);//@@@HQA
}

void VulkanReplayConsumer::Process_vkGetDeviceMemoryOpaqueCaptureAddress(
    const ApiCallInfo&                          call_info,
    uint64_t                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDeviceMemoryOpaqueCaptureAddressInfo>/*@@@PLQ*/* pInfo)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkDeviceMemoryOpaqueCaptureAddressInfo* in_pInfo = pInfo->GetPointer();
    MapStructHandles(pInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    GetDeviceTable(in_device)->GetDeviceMemoryOpaqueCaptureAddress(in_device, in_pInfo);//@@@HQA
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceToolProperties(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    PointerDecoder<uint32_t>*                   pToolCount,
    StructPointerDecoder<Decoded_VkPhysicalDeviceToolProperties>/*@@@PLQ*/* pToolProperties)
{
    auto in_physicalDevice = GetObjectInfoTable().GetPhysicalDeviceInfo(physicalDevice);
    pToolCount->IsNull() ? nullptr : pToolCount->AllocateOutputData(1, GetOutputArrayCount<uint32_t, PhysicalDeviceInfo>("vkGetPhysicalDeviceToolProperties", returnValue, physicalDevice, kPhysicalDeviceArrayGetPhysicalDeviceToolProperties, pToolCount, pToolProperties, &VulkanObjectInfoTable::GetPhysicalDeviceInfo));
    if (!pToolProperties->IsNull()) { pToolProperties->AllocateOutputData(*pToolCount->GetOutputPointer(), VkPhysicalDeviceToolProperties{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TOOL_PROPERTIES, nullptr }); }//@@@DFK
    VkResult replay_result = OverrideGetPhysicalDeviceToolProperties(GetInstanceTable(in_physicalDevice->handle)->GetPhysicalDeviceToolProperties, returnValue, in_physicalDevice, pToolCount, pToolProperties);
    CheckResult("vkGetPhysicalDeviceToolProperties", returnValue, replay_result, call_info);

    if (pToolProperties->IsNull()) { SetOutputArrayCount<PhysicalDeviceInfo>(physicalDevice, kPhysicalDeviceArrayGetPhysicalDeviceToolProperties, *pToolCount->GetOutputPointer(), &VulkanObjectInfoTable::GetPhysicalDeviceInfo); }
}

void VulkanReplayConsumer::Process_vkCreatePrivateDataSlot(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkPrivateDataSlotCreateInfo>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkPrivateDataSlot>*    pPrivateDataSlot)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkPrivateDataSlotCreateInfo* in_pCreateInfo = pCreateInfo->GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    if (!pPrivateDataSlot->IsNull()) { pPrivateDataSlot->SetHandleLength(1); }
    VkPrivateDataSlot* out_pPrivateDataSlot = pPrivateDataSlot->GetHandlePointer();//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->CreatePrivateDataSlot(in_device, in_pCreateInfo, in_pAllocator, out_pPrivateDataSlot);
    CheckResult("vkCreatePrivateDataSlot", returnValue, replay_result, call_info);

    AddHandle<PrivateDataSlotInfo>(device, pPrivateDataSlot->GetPointer(), out_pPrivateDataSlot, &VulkanObjectInfoTable::AddPrivateDataSlotInfo);
}

void VulkanReplayConsumer::Process_vkDestroyPrivateDataSlot(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            privateDataSlot,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkPrivateDataSlot in_privateDataSlot = MapHandle<PrivateDataSlotInfo>(privateDataSlot, &VulkanObjectInfoTable::GetPrivateDataSlotInfo);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);//@@@DFK
    GetDeviceTable(in_device)->DestroyPrivateDataSlot(in_device, in_privateDataSlot, in_pAllocator);//@@@HQA
    RemoveHandle(privateDataSlot, &VulkanObjectInfoTable::RemovePrivateDataSlotInfo);
}

void VulkanReplayConsumer::Process_vkSetPrivateData(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    VkObjectType                                objectType,
    uint64_t                                    objectHandle,
    format::HandleId                            privateDataSlot,
    uint64_t                                    data)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    uint64_t in_objectHandle = MapHandle(objectHandle, objectType);
    VkPrivateDataSlot in_privateDataSlot = MapHandle<PrivateDataSlotInfo>(privateDataSlot, &VulkanObjectInfoTable::GetPrivateDataSlotInfo);//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->SetPrivateData(in_device, objectType, in_objectHandle, in_privateDataSlot, data);
    CheckResult("vkSetPrivateData", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetPrivateData(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    VkObjectType                                objectType,
    uint64_t                                    objectHandle,
    format::HandleId                            privateDataSlot,
    PointerDecoder<uint64_t>*                   pData)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    uint64_t in_objectHandle = MapHandle(objectHandle, objectType);
    VkPrivateDataSlot in_privateDataSlot = MapHandle<PrivateDataSlotInfo>(privateDataSlot, &VulkanObjectInfoTable::GetPrivateDataSlotInfo);
    uint64_t* out_pData = pData->IsNull() ? nullptr : pData->AllocateOutputData(1, static_cast<uint64_t>(0));//@@@DFK
    GetDeviceTable(in_device)->GetPrivateData(in_device, objectType, in_objectHandle, in_privateDataSlot, out_pData);//@@@HQA
}

void VulkanReplayConsumer::Process_vkCmdSetEvent2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            event,
    StructPointerDecoder<Decoded_VkDependencyInfo>/*@@@PLQ*/* pDependencyInfo)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkEvent in_event = MapHandle<EventInfo>(event, &VulkanObjectInfoTable::GetEventInfo);
    const VkDependencyInfo* in_pDependencyInfo = pDependencyInfo->GetPointer();
    MapStructHandles(pDependencyInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetEvent2(in_commandBuffer, in_event, in_pDependencyInfo);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetEvent2(dumper.GetClonedCommandBuffer(), in_event, in_pDependencyInfo)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdResetEvent2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            event,
    VkPipelineStageFlags2                       stageMask)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkEvent in_event = MapHandle<EventInfo>(event, &VulkanObjectInfoTable::GetEventInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdResetEvent2(in_commandBuffer, in_event, stageMask);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdResetEvent2(dumper.GetClonedCommandBuffer(), in_event, stageMask)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdWaitEvents2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    eventCount,
    HandlePointerDecoder<VkEvent>*              pEvents,
    StructPointerDecoder<Decoded_VkDependencyInfo>/*@@@PLQ*/* pDependencyInfos)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkEvent* in_pEvents = MapHandles<EventInfo>(pEvents, eventCount, &VulkanObjectInfoTable::GetEventInfo);
    const VkDependencyInfo* in_pDependencyInfos = pDependencyInfos->GetPointer();
    MapStructArrayHandles(pDependencyInfos->GetMetaStructPointer(), pDependencyInfos->GetLength(), GetObjectInfoTable());//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdWaitEvents2(in_commandBuffer, eventCount, in_pEvents, in_pDependencyInfos);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdWaitEvents2(dumper.GetClonedCommandBuffer(), eventCount, in_pEvents, in_pDependencyInfos)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdPipelineBarrier2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkDependencyInfo>/*@@@PLQ*/* pDependencyInfo)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkDependencyInfo* in_pDependencyInfo = pDependencyInfo->GetPointer();
    MapStructHandles(pDependencyInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdPipelineBarrier2(in_commandBuffer, in_pDependencyInfo);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdPipelineBarrier2(dumper.GetClonedCommandBuffer(), in_pDependencyInfo)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdWriteTimestamp2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkPipelineStageFlags2                       stage,
    format::HandleId                            queryPool,
    uint32_t                                    query)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkQueryPool in_queryPool = MapHandle<QueryPoolInfo>(queryPool, &VulkanObjectInfoTable::GetQueryPoolInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdWriteTimestamp2(in_commandBuffer, stage, in_queryPool, query);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdWriteTimestamp2(dumper.GetClonedCommandBuffer(), stage, in_queryPool, query)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkQueueSubmit2(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            queue,
    uint32_t                                    submitCount,
    StructPointerDecoder<Decoded_VkSubmitInfo2>/*@@@PLQ*/* pSubmits,
    format::HandleId                            fence)
{
    auto in_queue = GetObjectInfoTable().GetQueueInfo(queue);

    MapStructArrayHandles(pSubmits->GetMetaStructPointer(), pSubmits->GetLength(), GetObjectInfoTable());
    auto in_fence = GetObjectInfoTable().GetFenceInfo(fence);//@@@DFK
    VkResult replay_result = OverrideQueueSubmit2(GetDeviceTable(in_queue->handle)->QueueSubmit2, returnValue, in_queue, submitCount, pSubmits, in_fence);
    CheckResult("vkQueueSubmit2", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkCmdCopyBuffer2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkCopyBufferInfo2>/*@@@PLQ*/* pCopyBufferInfo)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkCopyBufferInfo2* in_pCopyBufferInfo = pCopyBufferInfo->GetPointer();
    MapStructHandles(pCopyBufferInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdCopyBuffer2(in_commandBuffer, in_pCopyBufferInfo);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdCopyBuffer2(dumper.GetClonedCommandBuffer(), in_pCopyBufferInfo)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdCopyImage2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkCopyImageInfo2>/*@@@PLQ*/* pCopyImageInfo)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkCopyImageInfo2* in_pCopyImageInfo = pCopyImageInfo->GetPointer();
    MapStructHandles(pCopyImageInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdCopyImage2(in_commandBuffer, in_pCopyImageInfo);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdCopyImage2(dumper.GetClonedCommandBuffer(), in_pCopyImageInfo)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdCopyBufferToImage2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkCopyBufferToImageInfo2>/*@@@PLQ*/* pCopyBufferToImageInfo)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkCopyBufferToImageInfo2* in_pCopyBufferToImageInfo = pCopyBufferToImageInfo->GetPointer();
    MapStructHandles(pCopyBufferToImageInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdCopyBufferToImage2(in_commandBuffer, in_pCopyBufferToImageInfo);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdCopyBufferToImage2(dumper.GetClonedCommandBuffer(), in_pCopyBufferToImageInfo)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdCopyImageToBuffer2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkCopyImageToBufferInfo2>/*@@@PLQ*/* pCopyImageToBufferInfo)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkCopyImageToBufferInfo2* in_pCopyImageToBufferInfo = pCopyImageToBufferInfo->GetPointer();
    MapStructHandles(pCopyImageToBufferInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdCopyImageToBuffer2(in_commandBuffer, in_pCopyImageToBufferInfo);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdCopyImageToBuffer2(dumper.GetClonedCommandBuffer(), in_pCopyImageToBufferInfo)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdBlitImage2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkBlitImageInfo2>/*@@@PLQ*/* pBlitImageInfo)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkBlitImageInfo2* in_pBlitImageInfo = pBlitImageInfo->GetPointer();
    MapStructHandles(pBlitImageInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdBlitImage2(in_commandBuffer, in_pBlitImageInfo);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdBlitImage2(dumper.GetClonedCommandBuffer(), in_pBlitImageInfo)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdResolveImage2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkResolveImageInfo2>/*@@@PLQ*/* pResolveImageInfo)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkResolveImageInfo2* in_pResolveImageInfo = pResolveImageInfo->GetPointer();
    MapStructHandles(pResolveImageInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdResolveImage2(in_commandBuffer, in_pResolveImageInfo);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdResolveImage2(dumper.GetClonedCommandBuffer(), in_pResolveImageInfo)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdBeginRendering(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkRenderingInfo>/*@@@PLQ*/* pRenderingInfo)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkRenderingInfo* in_pRenderingInfo = pRenderingInfo->GetPointer();
    MapStructHandles(pRenderingInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdBeginRendering(in_commandBuffer, in_pRenderingInfo);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdBeginRendering(dumper.GetClonedCommandBuffer(), in_pRenderingInfo)/*@@@ABC*/;//@@@HERE
        const auto* rendering_info_meta = pRenderingInfo->GetMetaStructPointer();
        const auto* color_attachments_meta = rendering_info_meta->pColorAttachments->GetMetaStructPointer();
        std::vector<const ImageInfo*> color_att_img_infos(static_cast<size_t>(in_pRenderingInfo->colorAttachmentCount));
        std::vector<VkAttachmentStoreOp> color_att_storeOps(static_cast<size_t>(in_pRenderingInfo->colorAttachmentCount));
        for (uint32_t i =0; i < in_pRenderingInfo->colorAttachmentCount; ++i)
        {
            const ImageViewInfo *img_view_info = GetObjectInfoTable().GetImageViewInfo(color_attachments_meta[i].imageView);
            assert(img_view_info);
            const ImageInfo* img_info = GetObjectInfoTable().GetImageInfo(img_view_info->image_id);
            assert(img_info);
            color_att_img_infos[i] = img_info;
            color_att_storeOps[i] = in_pRenderingInfo->pColorAttachments[i].storeOp;
        }
        const auto* depth_attachment = rendering_info_meta->pDepthAttachment->GetMetaStructPointer();
        const ImageViewInfo *depth_img_view_info = GetObjectInfoTable().GetImageViewInfo(depth_attachment->imageView);
        assert(depth_img_view_info);
        const ImageInfo* depth_img_info = GetObjectInfoTable().GetImageInfo(depth_img_view_info->image_id);
        assert(depth_img_info);
        dumper.SetRenderTargets(color_att_img_infos, color_att_storeOps, depth_img_info, in_pRenderingInfo->pDepthAttachment->storeOp);
        dumper.SetRenderArea(in_pRenderingInfo->renderArea);
    }
}

void VulkanReplayConsumer::Process_vkCmdEndRendering(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdEndRendering(in_commandBuffer);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdEndRendering(dumper.GetClonedCommandBuffer())/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetCullMode(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkCullModeFlags                             cullMode)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetCullMode(in_commandBuffer, cullMode);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetCullMode(dumper.GetClonedCommandBuffer(), cullMode)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetFrontFace(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkFrontFace                                 frontFace)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetFrontFace(in_commandBuffer, frontFace);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetFrontFace(dumper.GetClonedCommandBuffer(), frontFace)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetPrimitiveTopology(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkPrimitiveTopology                         primitiveTopology)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetPrimitiveTopology(in_commandBuffer, primitiveTopology);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetPrimitiveTopology(dumper.GetClonedCommandBuffer(), primitiveTopology)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetViewportWithCount(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    viewportCount,
    StructPointerDecoder<Decoded_VkViewport>/*@@@PLQ*/* pViewports)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkViewport* in_pViewports = pViewports->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetViewportWithCount(in_commandBuffer, viewportCount, in_pViewports);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetViewportWithCount(dumper.GetClonedCommandBuffer(), viewportCount, in_pViewports)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetScissorWithCount(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    scissorCount,
    StructPointerDecoder<Decoded_VkRect2D>/*@@@PLQ*/* pScissors)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkRect2D* in_pScissors = pScissors->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetScissorWithCount(in_commandBuffer, scissorCount, in_pScissors);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetScissorWithCount(dumper.GetClonedCommandBuffer(), scissorCount, in_pScissors)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdBindVertexBuffers2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    firstBinding,
    uint32_t                                    bindingCount,
    HandlePointerDecoder<VkBuffer>*             pBuffers,
    PointerDecoder<VkDeviceSize>*               pOffsets,
    PointerDecoder<VkDeviceSize>*               pSizes,
    PointerDecoder<VkDeviceSize>*               pStrides)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkBuffer* in_pBuffers = MapHandles<BufferInfo>(pBuffers, bindingCount, &VulkanObjectInfoTable::GetBufferInfo);
    const VkDeviceSize* in_pOffsets = pOffsets->GetPointer();
    const VkDeviceSize* in_pSizes = pSizes->GetPointer();
    const VkDeviceSize* in_pStrides = pStrides->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdBindVertexBuffers2(in_commandBuffer, firstBinding, bindingCount, in_pBuffers, in_pOffsets, in_pSizes, in_pStrides);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdBindVertexBuffers2(dumper.GetClonedCommandBuffer(), firstBinding, bindingCount, in_pBuffers, in_pOffsets, in_pSizes, in_pStrides)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetDepthTestEnable(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    depthTestEnable)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetDepthTestEnable(in_commandBuffer, depthTestEnable);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetDepthTestEnable(dumper.GetClonedCommandBuffer(), depthTestEnable)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetDepthWriteEnable(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    depthWriteEnable)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetDepthWriteEnable(in_commandBuffer, depthWriteEnable);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetDepthWriteEnable(dumper.GetClonedCommandBuffer(), depthWriteEnable)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetDepthCompareOp(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkCompareOp                                 depthCompareOp)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetDepthCompareOp(in_commandBuffer, depthCompareOp);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetDepthCompareOp(dumper.GetClonedCommandBuffer(), depthCompareOp)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetDepthBoundsTestEnable(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    depthBoundsTestEnable)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetDepthBoundsTestEnable(in_commandBuffer, depthBoundsTestEnable);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetDepthBoundsTestEnable(dumper.GetClonedCommandBuffer(), depthBoundsTestEnable)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetStencilTestEnable(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    stencilTestEnable)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetStencilTestEnable(in_commandBuffer, stencilTestEnable);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetStencilTestEnable(dumper.GetClonedCommandBuffer(), stencilTestEnable)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetStencilOp(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkStencilFaceFlags                          faceMask,
    VkStencilOp                                 failOp,
    VkStencilOp                                 passOp,
    VkStencilOp                                 depthFailOp,
    VkCompareOp                                 compareOp)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetStencilOp(in_commandBuffer, faceMask, failOp, passOp, depthFailOp, compareOp);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetStencilOp(dumper.GetClonedCommandBuffer(), faceMask, failOp, passOp, depthFailOp, compareOp)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetRasterizerDiscardEnable(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    rasterizerDiscardEnable)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetRasterizerDiscardEnable(in_commandBuffer, rasterizerDiscardEnable);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetRasterizerDiscardEnable(dumper.GetClonedCommandBuffer(), rasterizerDiscardEnable)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetDepthBiasEnable(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    depthBiasEnable)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetDepthBiasEnable(in_commandBuffer, depthBiasEnable);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetDepthBiasEnable(dumper.GetClonedCommandBuffer(), depthBiasEnable)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetPrimitiveRestartEnable(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    primitiveRestartEnable)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetPrimitiveRestartEnable(in_commandBuffer, primitiveRestartEnable);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetPrimitiveRestartEnable(dumper.GetClonedCommandBuffer(), primitiveRestartEnable)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkGetDeviceBufferMemoryRequirements(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDeviceBufferMemoryRequirements>/*@@@PLQ*/* pInfo,
    StructPointerDecoder<Decoded_VkMemoryRequirements2>/*@@@PLQ*/* pMemoryRequirements)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkDeviceBufferMemoryRequirements* in_pInfo = pInfo->GetPointer();
    VkMemoryRequirements2* out_pMemoryRequirements = pMemoryRequirements->IsNull() ? nullptr : pMemoryRequirements->AllocateOutputData(1, { VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2, nullptr });
    InitializeOutputStructPNext(pMemoryRequirements);//@@@DFK
    GetDeviceTable(in_device)->GetDeviceBufferMemoryRequirements(in_device, in_pInfo, out_pMemoryRequirements);//@@@HQA
}

void VulkanReplayConsumer::Process_vkGetDeviceImageMemoryRequirements(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDeviceImageMemoryRequirements>/*@@@PLQ*/* pInfo,
    StructPointerDecoder<Decoded_VkMemoryRequirements2>/*@@@PLQ*/* pMemoryRequirements)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkDeviceImageMemoryRequirements* in_pInfo = pInfo->GetPointer();
    MapStructHandles(pInfo->GetMetaStructPointer(), GetObjectInfoTable());
    VkMemoryRequirements2* out_pMemoryRequirements = pMemoryRequirements->IsNull() ? nullptr : pMemoryRequirements->AllocateOutputData(1, { VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2, nullptr });
    InitializeOutputStructPNext(pMemoryRequirements);//@@@DFK
    GetDeviceTable(in_device)->GetDeviceImageMemoryRequirements(in_device, in_pInfo, out_pMemoryRequirements);//@@@HQA
}

void VulkanReplayConsumer::Process_vkGetDeviceImageSparseMemoryRequirements(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDeviceImageMemoryRequirements>/*@@@PLQ*/* pInfo,
    PointerDecoder<uint32_t>*                   pSparseMemoryRequirementCount,
    StructPointerDecoder<Decoded_VkSparseImageMemoryRequirements2>/*@@@PLQ*/* pSparseMemoryRequirements)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkDeviceImageMemoryRequirements* in_pInfo = pInfo->GetPointer();
    MapStructHandles(pInfo->GetMetaStructPointer(), GetObjectInfoTable());
    uint32_t* out_pSparseMemoryRequirementCount = pSparseMemoryRequirementCount->IsNull() ? nullptr : pSparseMemoryRequirementCount->AllocateOutputData(1, GetOutputArrayCount<uint32_t, DeviceInfo>("vkGetDeviceImageSparseMemoryRequirements", VK_SUCCESS, device, kDeviceArrayGetDeviceImageSparseMemoryRequirements, pSparseMemoryRequirementCount, pSparseMemoryRequirements, &VulkanObjectInfoTable::GetDeviceInfo));
    VkSparseImageMemoryRequirements2* out_pSparseMemoryRequirements = pSparseMemoryRequirements->IsNull() ? nullptr : pSparseMemoryRequirements->AllocateOutputData(*out_pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2{ VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2, nullptr });//@@@DFK
    GetDeviceTable(in_device)->GetDeviceImageSparseMemoryRequirements(in_device, in_pInfo, out_pSparseMemoryRequirementCount, out_pSparseMemoryRequirements);//@@@HQA

    if (pSparseMemoryRequirements->IsNull()) { SetOutputArrayCount<DeviceInfo>(device, kDeviceArrayGetDeviceImageSparseMemoryRequirements, *out_pSparseMemoryRequirementCount, &VulkanObjectInfoTable::GetDeviceInfo); }
}

void VulkanReplayConsumer::Process_vkDestroySurfaceKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            instance,
    format::HandleId                            surface,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator)
{
    auto in_instance = GetObjectInfoTable().GetInstanceInfo(instance);
    auto in_surface = GetObjectInfoTable().GetSurfaceKHRInfo(surface);
    if (in_surface == nullptr || in_surface->surface_creation_skipped) { return; }//@@@DFK
    OverrideDestroySurfaceKHR(GetInstanceTable(in_instance->handle)->DestroySurfaceKHR, in_instance, in_surface, pAllocator);//@@@HQA
    RemoveHandle(surface, &VulkanObjectInfoTable::RemoveSurfaceKHRInfo);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceSurfaceSupportKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    format::HandleId                            surface,
    PointerDecoder<VkBool32>*                   pSupported)
{
    if (options_.swapchain_option == util::SwapchainOption::kOffscreen)
    {
        GFXRECON_LOG_DEBUG("Skip vkGetPhysicalDeviceSurfaceSupportKHR for offscreen.");
        return;
    }
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    VkSurfaceKHR in_surface = MapHandle<SurfaceKHRInfo>(surface, &VulkanObjectInfoTable::GetSurfaceKHRInfo);
    if (GetObjectInfoTable().GetSurfaceKHRInfo(surface) == nullptr || GetObjectInfoTable().GetSurfaceKHRInfo(surface)->surface_creation_skipped) { return; }
    VkBool32* out_pSupported = pSupported->IsNull() ? nullptr : pSupported->AllocateOutputData(1, static_cast<VkBool32>(0));//@@@DFK
    VkResult replay_result = GetInstanceTable(in_physicalDevice)->GetPhysicalDeviceSurfaceSupportKHR(in_physicalDevice, queueFamilyIndex, in_surface, out_pSupported);
    CheckResult("vkGetPhysicalDeviceSurfaceSupportKHR", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceSurfaceCapabilitiesKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            surface,
    StructPointerDecoder<Decoded_VkSurfaceCapabilitiesKHR>/*@@@PLQ*/* pSurfaceCapabilities)
{
    if (options_.swapchain_option == util::SwapchainOption::kOffscreen)
    {
        GFXRECON_LOG_DEBUG("Skip vkGetPhysicalDeviceSurfaceCapabilitiesKHR for offscreen.");
        return;
    }
    auto in_physicalDevice = GetObjectInfoTable().GetPhysicalDeviceInfo(physicalDevice);
    auto in_surface = GetObjectInfoTable().GetSurfaceKHRInfo(surface);
    if (in_surface == nullptr || in_surface->surface_creation_skipped) { return; }
    pSurfaceCapabilities->IsNull() ? nullptr : pSurfaceCapabilities->AllocateOutputData(1);//@@@DFK
    VkResult replay_result = OverrideGetPhysicalDeviceSurfaceCapabilitiesKHR(GetInstanceTable(in_physicalDevice->handle)->GetPhysicalDeviceSurfaceCapabilitiesKHR, returnValue, in_physicalDevice, in_surface, pSurfaceCapabilities);
    CheckResult("vkGetPhysicalDeviceSurfaceCapabilitiesKHR", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceSurfaceFormatsKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            surface,
    PointerDecoder<uint32_t>*                   pSurfaceFormatCount,
    StructPointerDecoder<Decoded_VkSurfaceFormatKHR>/*@@@PLQ*/* pSurfaceFormats)
{
    if (options_.swapchain_option == util::SwapchainOption::kOffscreen)
    {
        GFXRECON_LOG_DEBUG("Skip vkGetPhysicalDeviceSurfaceFormatsKHR for offscreen.");
        return;
    }
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    VkSurfaceKHR in_surface = MapHandle<SurfaceKHRInfo>(surface, &VulkanObjectInfoTable::GetSurfaceKHRInfo);
    if (GetObjectInfoTable().GetSurfaceKHRInfo(surface) == nullptr || GetObjectInfoTable().GetSurfaceKHRInfo(surface)->surface_creation_skipped) { return; }
    uint32_t* out_pSurfaceFormatCount = pSurfaceFormatCount->IsNull() ? nullptr : pSurfaceFormatCount->AllocateOutputData(1, GetOutputArrayCount<uint32_t, SurfaceKHRInfo>("vkGetPhysicalDeviceSurfaceFormatsKHR", returnValue, surface, kSurfaceKHRArrayGetPhysicalDeviceSurfaceFormatsKHR, pSurfaceFormatCount, pSurfaceFormats, &VulkanObjectInfoTable::GetSurfaceKHRInfo));
    VkSurfaceFormatKHR* out_pSurfaceFormats = pSurfaceFormats->IsNull() ? nullptr : pSurfaceFormats->AllocateOutputData(*out_pSurfaceFormatCount);//@@@DFK
    VkResult replay_result = GetInstanceTable(in_physicalDevice)->GetPhysicalDeviceSurfaceFormatsKHR(in_physicalDevice, in_surface, out_pSurfaceFormatCount, out_pSurfaceFormats);
    CheckResult("vkGetPhysicalDeviceSurfaceFormatsKHR", returnValue, replay_result, call_info);

    if (pSurfaceFormats->IsNull()) { SetOutputArrayCount<SurfaceKHRInfo>(surface, kSurfaceKHRArrayGetPhysicalDeviceSurfaceFormatsKHR, *out_pSurfaceFormatCount, &VulkanObjectInfoTable::GetSurfaceKHRInfo); }
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceSurfacePresentModesKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            surface,
    PointerDecoder<uint32_t>*                   pPresentModeCount,
    PointerDecoder<VkPresentModeKHR>*           pPresentModes)
{
    if (options_.swapchain_option == util::SwapchainOption::kOffscreen)
    {
        GFXRECON_LOG_DEBUG("Skip vkGetPhysicalDeviceSurfacePresentModesKHR for offscreen.");
        return;
    }
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    VkSurfaceKHR in_surface = MapHandle<SurfaceKHRInfo>(surface, &VulkanObjectInfoTable::GetSurfaceKHRInfo);
    if (GetObjectInfoTable().GetSurfaceKHRInfo(surface) == nullptr || GetObjectInfoTable().GetSurfaceKHRInfo(surface)->surface_creation_skipped) { return; }
    uint32_t* out_pPresentModeCount = pPresentModeCount->IsNull() ? nullptr : pPresentModeCount->AllocateOutputData(1, GetOutputArrayCount<uint32_t, SurfaceKHRInfo>("vkGetPhysicalDeviceSurfacePresentModesKHR", returnValue, surface, kSurfaceKHRArrayGetPhysicalDeviceSurfacePresentModesKHR, pPresentModeCount, pPresentModes, &VulkanObjectInfoTable::GetSurfaceKHRInfo));
    VkPresentModeKHR* out_pPresentModes = pPresentModes->IsNull() ? nullptr : pPresentModes->AllocateOutputData(*out_pPresentModeCount);//@@@DFK
    VkResult replay_result = GetInstanceTable(in_physicalDevice)->GetPhysicalDeviceSurfacePresentModesKHR(in_physicalDevice, in_surface, out_pPresentModeCount, out_pPresentModes);
    CheckResult("vkGetPhysicalDeviceSurfacePresentModesKHR", returnValue, replay_result, call_info);

    if (pPresentModes->IsNull()) { SetOutputArrayCount<SurfaceKHRInfo>(surface, kSurfaceKHRArrayGetPhysicalDeviceSurfacePresentModesKHR, *out_pPresentModeCount, &VulkanObjectInfoTable::GetSurfaceKHRInfo); }
}

void VulkanReplayConsumer::Process_vkCreateSwapchainKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkSwapchainCreateInfoKHR>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkSwapchainKHR>*       pSwapchain)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);

    MapStructHandles(pCreateInfo->GetMetaStructPointer(), GetObjectInfoTable());
    if (!pSwapchain->IsNull()) { pSwapchain->SetHandleLength(1); }
    SwapchainKHRInfo handle_info;
    pSwapchain->SetConsumerData(0, &handle_info);//@@@DFK
    VkResult replay_result = OverrideCreateSwapchainKHR(GetDeviceTable(in_device->handle)->CreateSwapchainKHR, returnValue, in_device, pCreateInfo, pAllocator, pSwapchain);
    CheckResult("vkCreateSwapchainKHR", returnValue, replay_result, call_info);

    AddHandle<SwapchainKHRInfo>(device, pSwapchain->GetPointer(), pSwapchain->GetHandlePointer(), std::move(handle_info), &VulkanObjectInfoTable::AddSwapchainKHRInfo);
}

void VulkanReplayConsumer::Process_vkDestroySwapchainKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            swapchain,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);
    auto in_swapchain = GetObjectInfoTable().GetSwapchainKHRInfo(swapchain);//@@@DFK
    OverrideDestroySwapchainKHR(GetDeviceTable(in_device->handle)->DestroySwapchainKHR, in_device, in_swapchain, pAllocator);//@@@HQA
    RemoveHandle(swapchain, &VulkanObjectInfoTable::RemoveSwapchainKHRInfo);
}

void VulkanReplayConsumer::Process_vkGetSwapchainImagesKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain,
    PointerDecoder<uint32_t>*                   pSwapchainImageCount,
    HandlePointerDecoder<VkImage>*              pSwapchainImages)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);
    auto in_swapchain = GetObjectInfoTable().GetSwapchainKHRInfo(swapchain);
    pSwapchainImageCount->IsNull() ? nullptr : pSwapchainImageCount->AllocateOutputData(1, GetOutputArrayCount<uint32_t, SwapchainKHRInfo>("vkGetSwapchainImagesKHR", returnValue, swapchain, kSwapchainKHRArrayGetSwapchainImagesKHR, pSwapchainImageCount, pSwapchainImages, &VulkanObjectInfoTable::GetSwapchainKHRInfo));
    if (!pSwapchainImages->IsNull()) { pSwapchainImages->SetHandleLength(*pSwapchainImageCount->GetOutputPointer()); }
    std::vector<ImageInfo> handle_info(*pSwapchainImageCount->GetOutputPointer());
    for (size_t i = 0; i < *pSwapchainImageCount->GetOutputPointer(); ++i) { pSwapchainImages->SetConsumerData(i, &handle_info[i]); }//@@@DFK
    VkResult replay_result = OverrideGetSwapchainImagesKHR(GetDeviceTable(in_device->handle)->GetSwapchainImagesKHR, returnValue, in_device, in_swapchain, pSwapchainImageCount, pSwapchainImages);
    CheckResult("vkGetSwapchainImagesKHR", returnValue, replay_result, call_info);

    if (pSwapchainImages->IsNull()) { SetOutputArrayCount<SwapchainKHRInfo>(swapchain, kSwapchainKHRArrayGetSwapchainImagesKHR, *pSwapchainImageCount->GetOutputPointer(), &VulkanObjectInfoTable::GetSwapchainKHRInfo); }
    AddHandles<ImageInfo>(device, pSwapchainImages->GetPointer(), pSwapchainImages->GetLength(), pSwapchainImages->GetHandlePointer(), *pSwapchainImageCount->GetOutputPointer(), std::move(handle_info), &VulkanObjectInfoTable::AddImageInfo);
}

void VulkanReplayConsumer::Process_vkAcquireNextImageKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain,
    uint64_t                                    timeout,
    format::HandleId                            semaphore,
    format::HandleId                            fence,
    PointerDecoder<uint32_t>*                   pImageIndex)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);
    auto in_swapchain = GetObjectInfoTable().GetSwapchainKHRInfo(swapchain);
    auto in_semaphore = GetObjectInfoTable().GetSemaphoreInfo(semaphore);
    auto in_fence = GetObjectInfoTable().GetFenceInfo(fence);
    pImageIndex->IsNull() ? nullptr : pImageIndex->AllocateOutputData(1, static_cast<uint32_t>(0));//@@@DFK
    VkResult replay_result = OverrideAcquireNextImageKHR(GetDeviceTable(in_device->handle)->AcquireNextImageKHR, returnValue, in_device, in_swapchain, timeout, in_semaphore, in_fence, pImageIndex);
    CheckResult("vkAcquireNextImageKHR", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkQueuePresentKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            queue,
    StructPointerDecoder<Decoded_VkPresentInfoKHR>/*@@@PLQ*/* pPresentInfo)
{
    auto in_queue = GetObjectInfoTable().GetQueueInfo(queue);

    MapStructHandles(pPresentInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    VkResult replay_result = OverrideQueuePresentKHR(GetDeviceTable(in_queue->handle)->QueuePresentKHR, returnValue, in_queue, pPresentInfo);
    CheckResult("vkQueuePresentKHR", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetDeviceGroupPresentCapabilitiesKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDeviceGroupPresentCapabilitiesKHR>/*@@@PLQ*/* pDeviceGroupPresentCapabilities)
{
    if (options_.swapchain_option == util::SwapchainOption::kOffscreen)
    {
        GFXRECON_LOG_DEBUG("Skip vkGetDeviceGroupPresentCapabilitiesKHR for offscreen.");
        return;
    }
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkDeviceGroupPresentCapabilitiesKHR* out_pDeviceGroupPresentCapabilities = pDeviceGroupPresentCapabilities->IsNull() ? nullptr : pDeviceGroupPresentCapabilities->AllocateOutputData(1, { VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR, nullptr });
    InitializeOutputStructPNext(pDeviceGroupPresentCapabilities);//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->GetDeviceGroupPresentCapabilitiesKHR(in_device, out_pDeviceGroupPresentCapabilities);
    CheckResult("vkGetDeviceGroupPresentCapabilitiesKHR", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetDeviceGroupSurfacePresentModesKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            surface,
    PointerDecoder<VkDeviceGroupPresentModeFlagsKHR>* pModes)
{
    if (options_.swapchain_option == util::SwapchainOption::kOffscreen)
    {
        GFXRECON_LOG_DEBUG("Skip vkGetDeviceGroupSurfacePresentModesKHR for offscreen.");
        return;
    }
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkSurfaceKHR in_surface = MapHandle<SurfaceKHRInfo>(surface, &VulkanObjectInfoTable::GetSurfaceKHRInfo);
    if (GetObjectInfoTable().GetSurfaceKHRInfo(surface) == nullptr || GetObjectInfoTable().GetSurfaceKHRInfo(surface)->surface_creation_skipped) { return; }
    VkDeviceGroupPresentModeFlagsKHR* out_pModes = pModes->IsNull() ? nullptr : pModes->AllocateOutputData(1, static_cast<VkDeviceGroupPresentModeFlagsKHR>(0));//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->GetDeviceGroupSurfacePresentModesKHR(in_device, in_surface, out_pModes);
    CheckResult("vkGetDeviceGroupSurfacePresentModesKHR", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDevicePresentRectanglesKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            surface,
    PointerDecoder<uint32_t>*                   pRectCount,
    StructPointerDecoder<Decoded_VkRect2D>/*@@@PLQ*/* pRects)
{
    if (options_.swapchain_option == util::SwapchainOption::kOffscreen)
    {
        GFXRECON_LOG_DEBUG("Skip vkGetPhysicalDevicePresentRectanglesKHR for offscreen.");
        return;
    }
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    VkSurfaceKHR in_surface = MapHandle<SurfaceKHRInfo>(surface, &VulkanObjectInfoTable::GetSurfaceKHRInfo);
    if (GetObjectInfoTable().GetSurfaceKHRInfo(surface) == nullptr || GetObjectInfoTable().GetSurfaceKHRInfo(surface)->surface_creation_skipped) { return; }
    uint32_t* out_pRectCount = pRectCount->IsNull() ? nullptr : pRectCount->AllocateOutputData(1, GetOutputArrayCount<uint32_t, SurfaceKHRInfo>("vkGetPhysicalDevicePresentRectanglesKHR", returnValue, surface, kSurfaceKHRArrayGetPhysicalDevicePresentRectanglesKHR, pRectCount, pRects, &VulkanObjectInfoTable::GetSurfaceKHRInfo));
    VkRect2D* out_pRects = pRects->IsNull() ? nullptr : pRects->AllocateOutputData(*out_pRectCount);//@@@DFK
    VkResult replay_result = GetInstanceTable(in_physicalDevice)->GetPhysicalDevicePresentRectanglesKHR(in_physicalDevice, in_surface, out_pRectCount, out_pRects);
    CheckResult("vkGetPhysicalDevicePresentRectanglesKHR", returnValue, replay_result, call_info);

    if (pRects->IsNull()) { SetOutputArrayCount<SurfaceKHRInfo>(surface, kSurfaceKHRArrayGetPhysicalDevicePresentRectanglesKHR, *out_pRectCount, &VulkanObjectInfoTable::GetSurfaceKHRInfo); }
}

void VulkanReplayConsumer::Process_vkAcquireNextImage2KHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkAcquireNextImageInfoKHR>/*@@@PLQ*/* pAcquireInfo,
    PointerDecoder<uint32_t>*                   pImageIndex)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);

    MapStructHandles(pAcquireInfo->GetMetaStructPointer(), GetObjectInfoTable());
    pImageIndex->IsNull() ? nullptr : pImageIndex->AllocateOutputData(1, static_cast<uint32_t>(0));//@@@DFK
    VkResult replay_result = OverrideAcquireNextImage2KHR(GetDeviceTable(in_device->handle)->AcquireNextImage2KHR, returnValue, in_device, pAcquireInfo, pImageIndex);
    CheckResult("vkAcquireNextImage2KHR", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceDisplayPropertiesKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    PointerDecoder<uint32_t>*                   pPropertyCount,
    StructPointerDecoder<Decoded_VkDisplayPropertiesKHR>/*@@@PLQ*/* pProperties)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    uint32_t* out_pPropertyCount = pPropertyCount->IsNull() ? nullptr : pPropertyCount->AllocateOutputData(1, GetOutputArrayCount<uint32_t, PhysicalDeviceInfo>("vkGetPhysicalDeviceDisplayPropertiesKHR", returnValue, physicalDevice, kPhysicalDeviceArrayGetPhysicalDeviceDisplayPropertiesKHR, pPropertyCount, pProperties, &VulkanObjectInfoTable::GetPhysicalDeviceInfo));
    VkDisplayPropertiesKHR* out_pProperties = pProperties->IsNull() ? nullptr : pProperties->AllocateOutputData(*out_pPropertyCount);//@@@DFK
    VkResult replay_result = GetInstanceTable(in_physicalDevice)->GetPhysicalDeviceDisplayPropertiesKHR(in_physicalDevice, out_pPropertyCount, out_pProperties);
    CheckResult("vkGetPhysicalDeviceDisplayPropertiesKHR", returnValue, replay_result, call_info);

    if (pProperties->IsNull()) { SetOutputArrayCount<PhysicalDeviceInfo>(physicalDevice, kPhysicalDeviceArrayGetPhysicalDeviceDisplayPropertiesKHR, *out_pPropertyCount, &VulkanObjectInfoTable::GetPhysicalDeviceInfo); }
    AddStructArrayHandles<Decoded_VkDisplayPropertiesKHR>(physicalDevice, pProperties->GetMetaStructPointer(), pProperties->GetLength(), out_pProperties, *out_pPropertyCount, &GetObjectInfoTable());
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceDisplayPlanePropertiesKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    PointerDecoder<uint32_t>*                   pPropertyCount,
    StructPointerDecoder<Decoded_VkDisplayPlanePropertiesKHR>/*@@@PLQ*/* pProperties)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    uint32_t* out_pPropertyCount = pPropertyCount->IsNull() ? nullptr : pPropertyCount->AllocateOutputData(1, GetOutputArrayCount<uint32_t, PhysicalDeviceInfo>("vkGetPhysicalDeviceDisplayPlanePropertiesKHR", returnValue, physicalDevice, kPhysicalDeviceArrayGetPhysicalDeviceDisplayPlanePropertiesKHR, pPropertyCount, pProperties, &VulkanObjectInfoTable::GetPhysicalDeviceInfo));
    VkDisplayPlanePropertiesKHR* out_pProperties = pProperties->IsNull() ? nullptr : pProperties->AllocateOutputData(*out_pPropertyCount);//@@@DFK
    VkResult replay_result = GetInstanceTable(in_physicalDevice)->GetPhysicalDeviceDisplayPlanePropertiesKHR(in_physicalDevice, out_pPropertyCount, out_pProperties);
    CheckResult("vkGetPhysicalDeviceDisplayPlanePropertiesKHR", returnValue, replay_result, call_info);

    if (pProperties->IsNull()) { SetOutputArrayCount<PhysicalDeviceInfo>(physicalDevice, kPhysicalDeviceArrayGetPhysicalDeviceDisplayPlanePropertiesKHR, *out_pPropertyCount, &VulkanObjectInfoTable::GetPhysicalDeviceInfo); }
    AddStructArrayHandles<Decoded_VkDisplayPlanePropertiesKHR>(physicalDevice, pProperties->GetMetaStructPointer(), pProperties->GetLength(), out_pProperties, *out_pPropertyCount, &GetObjectInfoTable());
}

void VulkanReplayConsumer::Process_vkGetDisplayPlaneSupportedDisplaysKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    uint32_t                                    planeIndex,
    PointerDecoder<uint32_t>*                   pDisplayCount,
    HandlePointerDecoder<VkDisplayKHR>*         pDisplays)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    uint32_t* out_pDisplayCount = pDisplayCount->IsNull() ? nullptr : pDisplayCount->AllocateOutputData(1, GetOutputArrayCount<uint32_t, PhysicalDeviceInfo>("vkGetDisplayPlaneSupportedDisplaysKHR", returnValue, physicalDevice, kPhysicalDeviceArrayGetDisplayPlaneSupportedDisplaysKHR, pDisplayCount, pDisplays, &VulkanObjectInfoTable::GetPhysicalDeviceInfo));
    if (!pDisplays->IsNull()) { pDisplays->SetHandleLength(*out_pDisplayCount); }
    VkDisplayKHR* out_pDisplays = pDisplays->GetHandlePointer();//@@@DFK
    VkResult replay_result = GetInstanceTable(in_physicalDevice)->GetDisplayPlaneSupportedDisplaysKHR(in_physicalDevice, planeIndex, out_pDisplayCount, out_pDisplays);
    CheckResult("vkGetDisplayPlaneSupportedDisplaysKHR", returnValue, replay_result, call_info);

    if (pDisplays->IsNull()) { SetOutputArrayCount<PhysicalDeviceInfo>(physicalDevice, kPhysicalDeviceArrayGetDisplayPlaneSupportedDisplaysKHR, *out_pDisplayCount, &VulkanObjectInfoTable::GetPhysicalDeviceInfo); }
    AddHandles<DisplayKHRInfo>(physicalDevice, pDisplays->GetPointer(), pDisplays->GetLength(), out_pDisplays, *out_pDisplayCount, &VulkanObjectInfoTable::AddDisplayKHRInfo);
}

void VulkanReplayConsumer::Process_vkGetDisplayModePropertiesKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            display,
    PointerDecoder<uint32_t>*                   pPropertyCount,
    StructPointerDecoder<Decoded_VkDisplayModePropertiesKHR>/*@@@PLQ*/* pProperties)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    VkDisplayKHR in_display = MapHandle<DisplayKHRInfo>(display, &VulkanObjectInfoTable::GetDisplayKHRInfo);
    uint32_t* out_pPropertyCount = pPropertyCount->IsNull() ? nullptr : pPropertyCount->AllocateOutputData(1, GetOutputArrayCount<uint32_t, DisplayKHRInfo>("vkGetDisplayModePropertiesKHR", returnValue, display, kDisplayKHRArrayGetDisplayModePropertiesKHR, pPropertyCount, pProperties, &VulkanObjectInfoTable::GetDisplayKHRInfo));
    VkDisplayModePropertiesKHR* out_pProperties = pProperties->IsNull() ? nullptr : pProperties->AllocateOutputData(*out_pPropertyCount);//@@@DFK
    VkResult replay_result = GetInstanceTable(in_physicalDevice)->GetDisplayModePropertiesKHR(in_physicalDevice, in_display, out_pPropertyCount, out_pProperties);
    CheckResult("vkGetDisplayModePropertiesKHR", returnValue, replay_result, call_info);

    if (pProperties->IsNull()) { SetOutputArrayCount<DisplayKHRInfo>(display, kDisplayKHRArrayGetDisplayModePropertiesKHR, *out_pPropertyCount, &VulkanObjectInfoTable::GetDisplayKHRInfo); }
    AddStructArrayHandles<Decoded_VkDisplayModePropertiesKHR>(physicalDevice, pProperties->GetMetaStructPointer(), pProperties->GetLength(), out_pProperties, *out_pPropertyCount, &GetObjectInfoTable());
}

void VulkanReplayConsumer::Process_vkCreateDisplayModeKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            display,
    StructPointerDecoder<Decoded_VkDisplayModeCreateInfoKHR>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkDisplayModeKHR>*     pMode)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    VkDisplayKHR in_display = MapHandle<DisplayKHRInfo>(display, &VulkanObjectInfoTable::GetDisplayKHRInfo);
    const VkDisplayModeCreateInfoKHR* in_pCreateInfo = pCreateInfo->GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    if (!pMode->IsNull()) { pMode->SetHandleLength(1); }
    VkDisplayModeKHR* out_pMode = pMode->GetHandlePointer();//@@@DFK
    VkResult replay_result = GetInstanceTable(in_physicalDevice)->CreateDisplayModeKHR(in_physicalDevice, in_display, in_pCreateInfo, in_pAllocator, out_pMode);
    CheckResult("vkCreateDisplayModeKHR", returnValue, replay_result, call_info);

    AddHandle<DisplayModeKHRInfo>(physicalDevice, pMode->GetPointer(), out_pMode, &VulkanObjectInfoTable::AddDisplayModeKHRInfo);
}

void VulkanReplayConsumer::Process_vkGetDisplayPlaneCapabilitiesKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            mode,
    uint32_t                                    planeIndex,
    StructPointerDecoder<Decoded_VkDisplayPlaneCapabilitiesKHR>/*@@@PLQ*/* pCapabilities)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    VkDisplayModeKHR in_mode = MapHandle<DisplayModeKHRInfo>(mode, &VulkanObjectInfoTable::GetDisplayModeKHRInfo);
    VkDisplayPlaneCapabilitiesKHR* out_pCapabilities = pCapabilities->IsNull() ? nullptr : pCapabilities->AllocateOutputData(1);//@@@DFK
    VkResult replay_result = GetInstanceTable(in_physicalDevice)->GetDisplayPlaneCapabilitiesKHR(in_physicalDevice, in_mode, planeIndex, out_pCapabilities);
    CheckResult("vkGetDisplayPlaneCapabilitiesKHR", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkCreateDisplayPlaneSurfaceKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkDisplaySurfaceCreateInfoKHR>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    auto in_instance = GetObjectInfoTable().GetInstanceInfo(instance);

    MapStructHandles(pCreateInfo->GetMetaStructPointer(), GetObjectInfoTable());
    if (!pSurface->IsNull()) { pSurface->SetHandleLength(1); }
    SurfaceKHRInfo handle_info;
    pSurface->SetConsumerData(0, &handle_info);//@@@DFK
    VkResult replay_result = OverrideCreateDisplayPlaneSurfaceKHR(GetInstanceTable(in_instance->handle)->CreateDisplayPlaneSurfaceKHR, returnValue, in_instance, pCreateInfo, pAllocator, pSurface);
    CheckResult("vkCreateDisplayPlaneSurfaceKHR", returnValue, replay_result, call_info);

    AddHandle<SurfaceKHRInfo>(instance, pSurface->GetPointer(), pSurface->GetHandlePointer(), std::move(handle_info), &VulkanObjectInfoTable::AddSurfaceKHRInfo);
}

void VulkanReplayConsumer::Process_vkCreateSharedSwapchainsKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    swapchainCount,
    StructPointerDecoder<Decoded_VkSwapchainCreateInfoKHR>/*@@@PLQ*/* pCreateInfos,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkSwapchainKHR>*       pSwapchains)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);

    MapStructArrayHandles(pCreateInfos->GetMetaStructPointer(), pCreateInfos->GetLength(), GetObjectInfoTable());
    if (!pSwapchains->IsNull()) { pSwapchains->SetHandleLength(swapchainCount); }
    std::vector<SwapchainKHRInfo> handle_info(swapchainCount);
    for (size_t i = 0; i < swapchainCount; ++i) { pSwapchains->SetConsumerData(i, &handle_info[i]); }//@@@DFK
    VkResult replay_result = OverrideCreateSharedSwapchainsKHR(GetDeviceTable(in_device->handle)->CreateSharedSwapchainsKHR, returnValue, in_device, swapchainCount, pCreateInfos, pAllocator, pSwapchains);
    CheckResult("vkCreateSharedSwapchainsKHR", returnValue, replay_result, call_info);

    AddHandles<SwapchainKHRInfo>(device, pSwapchains->GetPointer(), pSwapchains->GetLength(), pSwapchains->GetHandlePointer(), swapchainCount, std::move(handle_info), &VulkanObjectInfoTable::AddSwapchainKHRInfo);
}

void VulkanReplayConsumer::Process_vkCreateXlibSurfaceKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkXlibSurfaceCreateInfoKHR>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    auto in_instance = GetObjectInfoTable().GetInstanceInfo(instance);
    if (!pSurface->IsNull()) { pSurface->SetHandleLength(1); }
    SurfaceKHRInfo handle_info;
    pSurface->SetConsumerData(0, &handle_info);//@@@DFK
    VkResult replay_result = OverrideCreateXlibSurfaceKHR(GetInstanceTable(in_instance->handle)->CreateXlibSurfaceKHR, returnValue, in_instance, pCreateInfo, pAllocator, pSurface);
    CheckResult("vkCreateXlibSurfaceKHR", returnValue, replay_result, call_info);

    AddHandle<SurfaceKHRInfo>(instance, pSurface->GetPointer(), pSurface->GetHandlePointer(), std::move(handle_info), &VulkanObjectInfoTable::AddSurfaceKHRInfo);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceXlibPresentationSupportKHR(
    const ApiCallInfo&                          call_info,
    VkBool32                                    returnValue,
    format::HandleId                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    uint64_t                                    dpy,
    size_t                                      visualID)
{
    auto in_physicalDevice = GetObjectInfoTable().GetPhysicalDeviceInfo(physicalDevice);
    Display* in_dpy = static_cast<Display*>(PreProcessExternalObject(dpy, format::ApiCallId::ApiCall_vkGetPhysicalDeviceXlibPresentationSupportKHR, "vkGetPhysicalDeviceXlibPresentationSupportKHR"));//@@@DFK
    OverrideGetPhysicalDeviceXlibPresentationSupportKHR(GetInstanceTable(in_physicalDevice->handle)->GetPhysicalDeviceXlibPresentationSupportKHR, in_physicalDevice, queueFamilyIndex, in_dpy, visualID);//@@@HQA
}

void VulkanReplayConsumer::Process_vkCreateXcbSurfaceKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkXcbSurfaceCreateInfoKHR>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    auto in_instance = GetObjectInfoTable().GetInstanceInfo(instance);
    if (!pSurface->IsNull()) { pSurface->SetHandleLength(1); }
    SurfaceKHRInfo handle_info;
    pSurface->SetConsumerData(0, &handle_info);//@@@DFK
    VkResult replay_result = OverrideCreateXcbSurfaceKHR(GetInstanceTable(in_instance->handle)->CreateXcbSurfaceKHR, returnValue, in_instance, pCreateInfo, pAllocator, pSurface);
    CheckResult("vkCreateXcbSurfaceKHR", returnValue, replay_result, call_info);

    AddHandle<SurfaceKHRInfo>(instance, pSurface->GetPointer(), pSurface->GetHandlePointer(), std::move(handle_info), &VulkanObjectInfoTable::AddSurfaceKHRInfo);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceXcbPresentationSupportKHR(
    const ApiCallInfo&                          call_info,
    VkBool32                                    returnValue,
    format::HandleId                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    uint64_t                                    connection,
    uint32_t                                    visual_id)
{
    auto in_physicalDevice = GetObjectInfoTable().GetPhysicalDeviceInfo(physicalDevice);
    xcb_connection_t* in_connection = static_cast<xcb_connection_t*>(PreProcessExternalObject(connection, format::ApiCallId::ApiCall_vkGetPhysicalDeviceXcbPresentationSupportKHR, "vkGetPhysicalDeviceXcbPresentationSupportKHR"));//@@@DFK
    OverrideGetPhysicalDeviceXcbPresentationSupportKHR(GetInstanceTable(in_physicalDevice->handle)->GetPhysicalDeviceXcbPresentationSupportKHR, in_physicalDevice, queueFamilyIndex, in_connection, visual_id);//@@@HQA
}

void VulkanReplayConsumer::Process_vkCreateWaylandSurfaceKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkWaylandSurfaceCreateInfoKHR>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    auto in_instance = GetObjectInfoTable().GetInstanceInfo(instance);
    if (!pSurface->IsNull()) { pSurface->SetHandleLength(1); }
    SurfaceKHRInfo handle_info;
    pSurface->SetConsumerData(0, &handle_info);//@@@DFK
    VkResult replay_result = OverrideCreateWaylandSurfaceKHR(GetInstanceTable(in_instance->handle)->CreateWaylandSurfaceKHR, returnValue, in_instance, pCreateInfo, pAllocator, pSurface);
    CheckResult("vkCreateWaylandSurfaceKHR", returnValue, replay_result, call_info);

    AddHandle<SurfaceKHRInfo>(instance, pSurface->GetPointer(), pSurface->GetHandlePointer(), std::move(handle_info), &VulkanObjectInfoTable::AddSurfaceKHRInfo);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceWaylandPresentationSupportKHR(
    const ApiCallInfo&                          call_info,
    VkBool32                                    returnValue,
    format::HandleId                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    uint64_t                                    display)
{
    auto in_physicalDevice = GetObjectInfoTable().GetPhysicalDeviceInfo(physicalDevice);
    struct wl_display* in_display = static_cast<struct wl_display*>(PreProcessExternalObject(display, format::ApiCallId::ApiCall_vkGetPhysicalDeviceWaylandPresentationSupportKHR, "vkGetPhysicalDeviceWaylandPresentationSupportKHR"));//@@@DFK
    OverrideGetPhysicalDeviceWaylandPresentationSupportKHR(GetInstanceTable(in_physicalDevice->handle)->GetPhysicalDeviceWaylandPresentationSupportKHR, in_physicalDevice, queueFamilyIndex, in_display);//@@@HQA
}

void VulkanReplayConsumer::Process_vkCreateAndroidSurfaceKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkAndroidSurfaceCreateInfoKHR>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    auto in_instance = GetObjectInfoTable().GetInstanceInfo(instance);
    if (!pSurface->IsNull()) { pSurface->SetHandleLength(1); }
    SurfaceKHRInfo handle_info;
    pSurface->SetConsumerData(0, &handle_info);//@@@DFK
    VkResult replay_result = OverrideCreateAndroidSurfaceKHR(GetInstanceTable(in_instance->handle)->CreateAndroidSurfaceKHR, returnValue, in_instance, pCreateInfo, pAllocator, pSurface);
    CheckResult("vkCreateAndroidSurfaceKHR", returnValue, replay_result, call_info);

    AddHandle<SurfaceKHRInfo>(instance, pSurface->GetPointer(), pSurface->GetHandlePointer(), std::move(handle_info), &VulkanObjectInfoTable::AddSurfaceKHRInfo);
}

void VulkanReplayConsumer::Process_vkCreateWin32SurfaceKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkWin32SurfaceCreateInfoKHR>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    auto in_instance = GetObjectInfoTable().GetInstanceInfo(instance);
    if (!pSurface->IsNull()) { pSurface->SetHandleLength(1); }
    SurfaceKHRInfo handle_info;
    pSurface->SetConsumerData(0, &handle_info);//@@@DFK
    VkResult replay_result = OverrideCreateWin32SurfaceKHR(GetInstanceTable(in_instance->handle)->CreateWin32SurfaceKHR, returnValue, in_instance, pCreateInfo, pAllocator, pSurface);
    CheckResult("vkCreateWin32SurfaceKHR", returnValue, replay_result, call_info);

    AddHandle<SurfaceKHRInfo>(instance, pSurface->GetPointer(), pSurface->GetHandlePointer(), std::move(handle_info), &VulkanObjectInfoTable::AddSurfaceKHRInfo);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceWin32PresentationSupportKHR(
    const ApiCallInfo&                          call_info,
    VkBool32                                    returnValue,
    format::HandleId                            physicalDevice,
    uint32_t                                    queueFamilyIndex)
{
    auto in_physicalDevice = GetObjectInfoTable().GetPhysicalDeviceInfo(physicalDevice);//@@@DFK
    OverrideGetPhysicalDeviceWin32PresentationSupportKHR(GetInstanceTable(in_physicalDevice->handle)->GetPhysicalDeviceWin32PresentationSupportKHR, in_physicalDevice, queueFamilyIndex);//@@@HQA
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceVideoCapabilitiesKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkVideoProfileInfoKHR>/*@@@PLQ*/* pVideoProfile,
    StructPointerDecoder<Decoded_VkVideoCapabilitiesKHR>/*@@@PLQ*/* pCapabilities)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    const VkVideoProfileInfoKHR* in_pVideoProfile = pVideoProfile->GetPointer();
    VkVideoCapabilitiesKHR* out_pCapabilities = pCapabilities->IsNull() ? nullptr : pCapabilities->AllocateOutputData(1, { VK_STRUCTURE_TYPE_VIDEO_CAPABILITIES_KHR, nullptr });
    InitializeOutputStructPNext(pCapabilities);//@@@DFK
    VkResult replay_result = GetInstanceTable(in_physicalDevice)->GetPhysicalDeviceVideoCapabilitiesKHR(in_physicalDevice, in_pVideoProfile, out_pCapabilities);
    CheckResult("vkGetPhysicalDeviceVideoCapabilitiesKHR", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceVideoFormatPropertiesKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceVideoFormatInfoKHR>/*@@@PLQ*/* pVideoFormatInfo,
    PointerDecoder<uint32_t>*                   pVideoFormatPropertyCount,
    StructPointerDecoder<Decoded_VkVideoFormatPropertiesKHR>/*@@@PLQ*/* pVideoFormatProperties)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    const VkPhysicalDeviceVideoFormatInfoKHR* in_pVideoFormatInfo = pVideoFormatInfo->GetPointer();
    uint32_t* out_pVideoFormatPropertyCount = pVideoFormatPropertyCount->IsNull() ? nullptr : pVideoFormatPropertyCount->AllocateOutputData(1, GetOutputArrayCount<uint32_t, PhysicalDeviceInfo>("vkGetPhysicalDeviceVideoFormatPropertiesKHR", returnValue, physicalDevice, kPhysicalDeviceArrayGetPhysicalDeviceVideoFormatPropertiesKHR, pVideoFormatPropertyCount, pVideoFormatProperties, &VulkanObjectInfoTable::GetPhysicalDeviceInfo));
    VkVideoFormatPropertiesKHR* out_pVideoFormatProperties = pVideoFormatProperties->IsNull() ? nullptr : pVideoFormatProperties->AllocateOutputData(*out_pVideoFormatPropertyCount, VkVideoFormatPropertiesKHR{ VK_STRUCTURE_TYPE_VIDEO_FORMAT_PROPERTIES_KHR, nullptr });//@@@DFK
    VkResult replay_result = GetInstanceTable(in_physicalDevice)->GetPhysicalDeviceVideoFormatPropertiesKHR(in_physicalDevice, in_pVideoFormatInfo, out_pVideoFormatPropertyCount, out_pVideoFormatProperties);
    CheckResult("vkGetPhysicalDeviceVideoFormatPropertiesKHR", returnValue, replay_result, call_info);

    if (pVideoFormatProperties->IsNull()) { SetOutputArrayCount<PhysicalDeviceInfo>(physicalDevice, kPhysicalDeviceArrayGetPhysicalDeviceVideoFormatPropertiesKHR, *out_pVideoFormatPropertyCount, &VulkanObjectInfoTable::GetPhysicalDeviceInfo); }
}

void VulkanReplayConsumer::Process_vkCreateVideoSessionKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkVideoSessionCreateInfoKHR>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkVideoSessionKHR>*    pVideoSession)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkVideoSessionCreateInfoKHR* in_pCreateInfo = pCreateInfo->GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    if (!pVideoSession->IsNull()) { pVideoSession->SetHandleLength(1); }
    VkVideoSessionKHR* out_pVideoSession = pVideoSession->GetHandlePointer();//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->CreateVideoSessionKHR(in_device, in_pCreateInfo, in_pAllocator, out_pVideoSession);
    CheckResult("vkCreateVideoSessionKHR", returnValue, replay_result, call_info);

    AddHandle<VideoSessionKHRInfo>(device, pVideoSession->GetPointer(), out_pVideoSession, &VulkanObjectInfoTable::AddVideoSessionKHRInfo);
}

void VulkanReplayConsumer::Process_vkDestroyVideoSessionKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            videoSession,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkVideoSessionKHR in_videoSession = MapHandle<VideoSessionKHRInfo>(videoSession, &VulkanObjectInfoTable::GetVideoSessionKHRInfo);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);//@@@DFK
    GetDeviceTable(in_device)->DestroyVideoSessionKHR(in_device, in_videoSession, in_pAllocator);//@@@HQA
    RemoveHandle(videoSession, &VulkanObjectInfoTable::RemoveVideoSessionKHRInfo);
}

void VulkanReplayConsumer::Process_vkGetVideoSessionMemoryRequirementsKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            videoSession,
    PointerDecoder<uint32_t>*                   pMemoryRequirementsCount,
    StructPointerDecoder<Decoded_VkVideoSessionMemoryRequirementsKHR>/*@@@PLQ*/* pMemoryRequirements)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkVideoSessionKHR in_videoSession = MapHandle<VideoSessionKHRInfo>(videoSession, &VulkanObjectInfoTable::GetVideoSessionKHRInfo);
    uint32_t* out_pMemoryRequirementsCount = pMemoryRequirementsCount->IsNull() ? nullptr : pMemoryRequirementsCount->AllocateOutputData(1, GetOutputArrayCount<uint32_t, VideoSessionKHRInfo>("vkGetVideoSessionMemoryRequirementsKHR", returnValue, videoSession, kVideoSessionKHRArrayGetVideoSessionMemoryRequirementsKHR, pMemoryRequirementsCount, pMemoryRequirements, &VulkanObjectInfoTable::GetVideoSessionKHRInfo));
    VkVideoSessionMemoryRequirementsKHR* out_pMemoryRequirements = pMemoryRequirements->IsNull() ? nullptr : pMemoryRequirements->AllocateOutputData(*out_pMemoryRequirementsCount, VkVideoSessionMemoryRequirementsKHR{ VK_STRUCTURE_TYPE_VIDEO_SESSION_MEMORY_REQUIREMENTS_KHR, nullptr });//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->GetVideoSessionMemoryRequirementsKHR(in_device, in_videoSession, out_pMemoryRequirementsCount, out_pMemoryRequirements);
    CheckResult("vkGetVideoSessionMemoryRequirementsKHR", returnValue, replay_result, call_info);

    if (pMemoryRequirements->IsNull()) { SetOutputArrayCount<VideoSessionKHRInfo>(videoSession, kVideoSessionKHRArrayGetVideoSessionMemoryRequirementsKHR, *out_pMemoryRequirementsCount, &VulkanObjectInfoTable::GetVideoSessionKHRInfo); }
}

void VulkanReplayConsumer::Process_vkBindVideoSessionMemoryKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            videoSession,
    uint32_t                                    bindSessionMemoryInfoCount,
    StructPointerDecoder<Decoded_VkBindVideoSessionMemoryInfoKHR>/*@@@PLQ*/* pBindSessionMemoryInfos)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkVideoSessionKHR in_videoSession = MapHandle<VideoSessionKHRInfo>(videoSession, &VulkanObjectInfoTable::GetVideoSessionKHRInfo);
    const VkBindVideoSessionMemoryInfoKHR* in_pBindSessionMemoryInfos = pBindSessionMemoryInfos->GetPointer();
    MapStructArrayHandles(pBindSessionMemoryInfos->GetMetaStructPointer(), pBindSessionMemoryInfos->GetLength(), GetObjectInfoTable());//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->BindVideoSessionMemoryKHR(in_device, in_videoSession, bindSessionMemoryInfoCount, in_pBindSessionMemoryInfos);
    CheckResult("vkBindVideoSessionMemoryKHR", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkCreateVideoSessionParametersKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkVideoSessionParametersCreateInfoKHR>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkVideoSessionParametersKHR>* pVideoSessionParameters)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkVideoSessionParametersCreateInfoKHR* in_pCreateInfo = pCreateInfo->GetPointer();
    MapStructHandles(pCreateInfo->GetMetaStructPointer(), GetObjectInfoTable());
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    if (!pVideoSessionParameters->IsNull()) { pVideoSessionParameters->SetHandleLength(1); }
    VkVideoSessionParametersKHR* out_pVideoSessionParameters = pVideoSessionParameters->GetHandlePointer();//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->CreateVideoSessionParametersKHR(in_device, in_pCreateInfo, in_pAllocator, out_pVideoSessionParameters);
    CheckResult("vkCreateVideoSessionParametersKHR", returnValue, replay_result, call_info);

    AddHandle<VideoSessionParametersKHRInfo>(device, pVideoSessionParameters->GetPointer(), out_pVideoSessionParameters, &VulkanObjectInfoTable::AddVideoSessionParametersKHRInfo);
}

void VulkanReplayConsumer::Process_vkUpdateVideoSessionParametersKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            videoSessionParameters,
    StructPointerDecoder<Decoded_VkVideoSessionParametersUpdateInfoKHR>/*@@@PLQ*/* pUpdateInfo)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkVideoSessionParametersKHR in_videoSessionParameters = MapHandle<VideoSessionParametersKHRInfo>(videoSessionParameters, &VulkanObjectInfoTable::GetVideoSessionParametersKHRInfo);
    const VkVideoSessionParametersUpdateInfoKHR* in_pUpdateInfo = pUpdateInfo->GetPointer();//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->UpdateVideoSessionParametersKHR(in_device, in_videoSessionParameters, in_pUpdateInfo);
    CheckResult("vkUpdateVideoSessionParametersKHR", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkDestroyVideoSessionParametersKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            videoSessionParameters,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkVideoSessionParametersKHR in_videoSessionParameters = MapHandle<VideoSessionParametersKHRInfo>(videoSessionParameters, &VulkanObjectInfoTable::GetVideoSessionParametersKHRInfo);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);//@@@DFK
    GetDeviceTable(in_device)->DestroyVideoSessionParametersKHR(in_device, in_videoSessionParameters, in_pAllocator);//@@@HQA
    RemoveHandle(videoSessionParameters, &VulkanObjectInfoTable::RemoveVideoSessionParametersKHRInfo);
}

void VulkanReplayConsumer::Process_vkCmdBeginVideoCodingKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkVideoBeginCodingInfoKHR>/*@@@PLQ*/* pBeginInfo)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkVideoBeginCodingInfoKHR* in_pBeginInfo = pBeginInfo->GetPointer();
    MapStructHandles(pBeginInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdBeginVideoCodingKHR(in_commandBuffer, in_pBeginInfo);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdBeginVideoCodingKHR(dumper.GetClonedCommandBuffer(), in_pBeginInfo)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdEndVideoCodingKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkVideoEndCodingInfoKHR>/*@@@PLQ*/* pEndCodingInfo)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkVideoEndCodingInfoKHR* in_pEndCodingInfo = pEndCodingInfo->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdEndVideoCodingKHR(in_commandBuffer, in_pEndCodingInfo);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdEndVideoCodingKHR(dumper.GetClonedCommandBuffer(), in_pEndCodingInfo)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdControlVideoCodingKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkVideoCodingControlInfoKHR>/*@@@PLQ*/* pCodingControlInfo)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkVideoCodingControlInfoKHR* in_pCodingControlInfo = pCodingControlInfo->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdControlVideoCodingKHR(in_commandBuffer, in_pCodingControlInfo);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdControlVideoCodingKHR(dumper.GetClonedCommandBuffer(), in_pCodingControlInfo)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdDecodeVideoKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkVideoDecodeInfoKHR>/*@@@PLQ*/* pDecodeInfo)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkVideoDecodeInfoKHR* in_pDecodeInfo = pDecodeInfo->GetPointer();
    MapStructHandles(pDecodeInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdDecodeVideoKHR(in_commandBuffer, in_pDecodeInfo);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdDecodeVideoKHR(dumper.GetClonedCommandBuffer(), in_pDecodeInfo)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdBeginRenderingKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkRenderingInfo>/*@@@PLQ*/* pRenderingInfo)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkRenderingInfo* in_pRenderingInfo = pRenderingInfo->GetPointer();
    MapStructHandles(pRenderingInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdBeginRenderingKHR(in_commandBuffer, in_pRenderingInfo);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdBeginRenderingKHR(dumper.GetClonedCommandBuffer(), in_pRenderingInfo)/*@@@ABC*/;//@@@HERE
        const auto* rendering_info_meta = pRenderingInfo->GetMetaStructPointer();
        const auto* color_attachments_meta = rendering_info_meta->pColorAttachments->GetMetaStructPointer();
        std::vector<const ImageInfo*> color_att_img_infos(static_cast<size_t>(in_pRenderingInfo->colorAttachmentCount));
        std::vector<VkAttachmentStoreOp> color_att_storeOps(static_cast<size_t>(in_pRenderingInfo->colorAttachmentCount));
        for (uint32_t i =0; i < in_pRenderingInfo->colorAttachmentCount; ++i)
        {
            const ImageViewInfo *img_view_info = GetObjectInfoTable().GetImageViewInfo(color_attachments_meta[i].imageView);
            assert(img_view_info);
            const ImageInfo* img_info = GetObjectInfoTable().GetImageInfo(img_view_info->image_id);
            assert(img_info);
            color_att_img_infos[i] = img_info;
            color_att_storeOps[i] = in_pRenderingInfo->pColorAttachments[i].storeOp;
        }
        const auto* depth_attachment = rendering_info_meta->pDepthAttachment->GetMetaStructPointer();
        const ImageViewInfo *depth_img_view_info = GetObjectInfoTable().GetImageViewInfo(depth_attachment->imageView);
        assert(depth_img_view_info);
        const ImageInfo* depth_img_info = GetObjectInfoTable().GetImageInfo(depth_img_view_info->image_id);
        assert(depth_img_info);
        dumper.SetRenderTargets(color_att_img_infos, color_att_storeOps, depth_img_info, in_pRenderingInfo->pDepthAttachment->storeOp);
        dumper.SetRenderArea(in_pRenderingInfo->renderArea);
    }
}

void VulkanReplayConsumer::Process_vkCmdEndRenderingKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdEndRenderingKHR(in_commandBuffer);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdEndRenderingKHR(dumper.GetClonedCommandBuffer())/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceFeatures2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceFeatures2>/*@@@PLQ*/* pFeatures)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    VkPhysicalDeviceFeatures2* out_pFeatures = pFeatures->IsNull() ? nullptr : pFeatures->AllocateOutputData(1, { VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2, nullptr });
    InitializeOutputStructPNext(pFeatures);//@@@DFK
    GetInstanceTable(in_physicalDevice)->GetPhysicalDeviceFeatures2KHR(in_physicalDevice, out_pFeatures);//@@@HQA
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceProperties2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceProperties2>/*@@@PLQ*/* pProperties)
{
    auto in_physicalDevice = GetObjectInfoTable().GetPhysicalDeviceInfo(physicalDevice);
    pProperties->IsNull() ? nullptr : pProperties->AllocateOutputData(1, { VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2, nullptr });
    InitializeOutputStructPNext(pProperties);//@@@DFK
    OverrideGetPhysicalDeviceProperties2(GetInstanceTable(in_physicalDevice->handle)->GetPhysicalDeviceProperties2KHR, in_physicalDevice, pProperties);//@@@HQA
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceFormatProperties2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    VkFormat                                    format,
    StructPointerDecoder<Decoded_VkFormatProperties2>/*@@@PLQ*/* pFormatProperties)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    VkFormatProperties2* out_pFormatProperties = pFormatProperties->IsNull() ? nullptr : pFormatProperties->AllocateOutputData(1, { VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2, nullptr });
    InitializeOutputStructPNext(pFormatProperties);//@@@DFK
    GetInstanceTable(in_physicalDevice)->GetPhysicalDeviceFormatProperties2KHR(in_physicalDevice, format, out_pFormatProperties);//@@@HQA
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceImageFormatProperties2KHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceImageFormatInfo2>/*@@@PLQ*/* pImageFormatInfo,
    StructPointerDecoder<Decoded_VkImageFormatProperties2>/*@@@PLQ*/* pImageFormatProperties)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    const VkPhysicalDeviceImageFormatInfo2* in_pImageFormatInfo = pImageFormatInfo->GetPointer();
    VkImageFormatProperties2* out_pImageFormatProperties = pImageFormatProperties->IsNull() ? nullptr : pImageFormatProperties->AllocateOutputData(1, { VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2, nullptr });
    InitializeOutputStructPNext(pImageFormatProperties);//@@@DFK
    VkResult replay_result = GetInstanceTable(in_physicalDevice)->GetPhysicalDeviceImageFormatProperties2KHR(in_physicalDevice, in_pImageFormatInfo, out_pImageFormatProperties);
    CheckResult("vkGetPhysicalDeviceImageFormatProperties2KHR", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceQueueFamilyProperties2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    PointerDecoder<uint32_t>*                   pQueueFamilyPropertyCount,
    StructPointerDecoder<Decoded_VkQueueFamilyProperties2>/*@@@PLQ*/* pQueueFamilyProperties)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    uint32_t* out_pQueueFamilyPropertyCount = pQueueFamilyPropertyCount->IsNull() ? nullptr : pQueueFamilyPropertyCount->AllocateOutputData(1, GetOutputArrayCount<uint32_t, PhysicalDeviceInfo>("vkGetPhysicalDeviceQueueFamilyProperties2KHR", VK_SUCCESS, physicalDevice, kPhysicalDeviceArrayGetPhysicalDeviceQueueFamilyProperties2KHR, pQueueFamilyPropertyCount, pQueueFamilyProperties, &VulkanObjectInfoTable::GetPhysicalDeviceInfo));
    VkQueueFamilyProperties2* out_pQueueFamilyProperties = pQueueFamilyProperties->IsNull() ? nullptr : pQueueFamilyProperties->AllocateOutputData(*out_pQueueFamilyPropertyCount, VkQueueFamilyProperties2{ VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2, nullptr });//@@@DFK
    GetInstanceTable(in_physicalDevice)->GetPhysicalDeviceQueueFamilyProperties2KHR(in_physicalDevice, out_pQueueFamilyPropertyCount, out_pQueueFamilyProperties);//@@@HQA

    if (pQueueFamilyProperties->IsNull()) { SetOutputArrayCount<PhysicalDeviceInfo>(physicalDevice, kPhysicalDeviceArrayGetPhysicalDeviceQueueFamilyProperties2KHR, *out_pQueueFamilyPropertyCount, &VulkanObjectInfoTable::GetPhysicalDeviceInfo); }
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceMemoryProperties2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceMemoryProperties2>/*@@@PLQ*/* pMemoryProperties)
{
    auto in_physicalDevice = GetObjectInfoTable().GetPhysicalDeviceInfo(physicalDevice);
    pMemoryProperties->IsNull() ? nullptr : pMemoryProperties->AllocateOutputData(1, { VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2, nullptr });
    InitializeOutputStructPNext(pMemoryProperties);//@@@DFK
    OverrideGetPhysicalDeviceMemoryProperties2(GetInstanceTable(in_physicalDevice->handle)->GetPhysicalDeviceMemoryProperties2KHR, in_physicalDevice, pMemoryProperties);//@@@HQA
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceSparseImageFormatProperties2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceSparseImageFormatInfo2>/*@@@PLQ*/* pFormatInfo,
    PointerDecoder<uint32_t>*                   pPropertyCount,
    StructPointerDecoder<Decoded_VkSparseImageFormatProperties2>/*@@@PLQ*/* pProperties)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    const VkPhysicalDeviceSparseImageFormatInfo2* in_pFormatInfo = pFormatInfo->GetPointer();
    uint32_t* out_pPropertyCount = pPropertyCount->IsNull() ? nullptr : pPropertyCount->AllocateOutputData(1, GetOutputArrayCount<uint32_t, PhysicalDeviceInfo>("vkGetPhysicalDeviceSparseImageFormatProperties2KHR", VK_SUCCESS, physicalDevice, kPhysicalDeviceArrayGetPhysicalDeviceSparseImageFormatProperties2KHR, pPropertyCount, pProperties, &VulkanObjectInfoTable::GetPhysicalDeviceInfo));
    VkSparseImageFormatProperties2* out_pProperties = pProperties->IsNull() ? nullptr : pProperties->AllocateOutputData(*out_pPropertyCount, VkSparseImageFormatProperties2{ VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2, nullptr });//@@@DFK
    GetInstanceTable(in_physicalDevice)->GetPhysicalDeviceSparseImageFormatProperties2KHR(in_physicalDevice, in_pFormatInfo, out_pPropertyCount, out_pProperties);//@@@HQA

    if (pProperties->IsNull()) { SetOutputArrayCount<PhysicalDeviceInfo>(physicalDevice, kPhysicalDeviceArrayGetPhysicalDeviceSparseImageFormatProperties2KHR, *out_pPropertyCount, &VulkanObjectInfoTable::GetPhysicalDeviceInfo); }
}

void VulkanReplayConsumer::Process_vkGetDeviceGroupPeerMemoryFeaturesKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    uint32_t                                    heapIndex,
    uint32_t                                    localDeviceIndex,
    uint32_t                                    remoteDeviceIndex,
    PointerDecoder<VkPeerMemoryFeatureFlags>*   pPeerMemoryFeatures)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkPeerMemoryFeatureFlags* out_pPeerMemoryFeatures = pPeerMemoryFeatures->IsNull() ? nullptr : pPeerMemoryFeatures->AllocateOutputData(1, static_cast<VkPeerMemoryFeatureFlags>(0));//@@@DFK
    GetDeviceTable(in_device)->GetDeviceGroupPeerMemoryFeaturesKHR(in_device, heapIndex, localDeviceIndex, remoteDeviceIndex, out_pPeerMemoryFeatures);//@@@HQA
}

void VulkanReplayConsumer::Process_vkCmdSetDeviceMaskKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    deviceMask)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetDeviceMaskKHR(in_commandBuffer, deviceMask);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetDeviceMaskKHR(dumper.GetClonedCommandBuffer(), deviceMask)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdDispatchBaseKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    baseGroupX,
    uint32_t                                    baseGroupY,
    uint32_t                                    baseGroupZ,
    uint32_t                                    groupCountX,
    uint32_t                                    groupCountY,
    uint32_t                                    groupCountZ)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdDispatchBaseKHR(in_commandBuffer, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdDispatchBaseKHR(dumper.GetClonedCommandBuffer(), baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ)/*@@@ABC*/;//@@@HERE
        if (dumper.DumpingDrawCallIndex(call_info.index))
        {
            dumper.FinalizeCommandBuffer(*GetDeviceTable(in_commandBuffer));
        }
    }
}

void VulkanReplayConsumer::Process_vkTrimCommandPoolKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            commandPool,
    VkCommandPoolTrimFlags                      flags)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkCommandPool in_commandPool = MapHandle<CommandPoolInfo>(commandPool, &VulkanObjectInfoTable::GetCommandPoolInfo);//@@@DFK
    GetDeviceTable(in_device)->TrimCommandPoolKHR(in_device, in_commandPool, flags);//@@@HQA
}

void VulkanReplayConsumer::Process_vkEnumeratePhysicalDeviceGroupsKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    PointerDecoder<uint32_t>*                   pPhysicalDeviceGroupCount,
    StructPointerDecoder<Decoded_VkPhysicalDeviceGroupProperties>/*@@@PLQ*/* pPhysicalDeviceGroupProperties)
{
    auto in_instance = GetObjectInfoTable().GetInstanceInfo(instance);
    pPhysicalDeviceGroupCount->IsNull() ? nullptr : pPhysicalDeviceGroupCount->AllocateOutputData(1, GetOutputArrayCount<uint32_t, InstanceInfo>("vkEnumeratePhysicalDeviceGroupsKHR", returnValue, instance, kInstanceArrayEnumeratePhysicalDeviceGroupsKHR, pPhysicalDeviceGroupCount, pPhysicalDeviceGroupProperties, &VulkanObjectInfoTable::GetInstanceInfo));
    SetStructArrayHandleLengths<Decoded_VkPhysicalDeviceGroupProperties>(pPhysicalDeviceGroupProperties->GetMetaStructPointer(), pPhysicalDeviceGroupProperties->GetLength());
    if (!pPhysicalDeviceGroupProperties->IsNull()) { pPhysicalDeviceGroupProperties->AllocateOutputData(*pPhysicalDeviceGroupCount->GetOutputPointer(), VkPhysicalDeviceGroupProperties{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES, nullptr }); }//@@@DFK
    VkResult replay_result = OverrideEnumeratePhysicalDeviceGroups(GetInstanceTable(in_instance->handle)->EnumeratePhysicalDeviceGroupsKHR, returnValue, in_instance, pPhysicalDeviceGroupCount, pPhysicalDeviceGroupProperties);
    CheckResult("vkEnumeratePhysicalDeviceGroupsKHR", returnValue, replay_result, call_info);

    if (pPhysicalDeviceGroupProperties->IsNull()) { SetOutputArrayCount<InstanceInfo>(instance, kInstanceArrayEnumeratePhysicalDeviceGroupsKHR, *pPhysicalDeviceGroupCount->GetOutputPointer(), &VulkanObjectInfoTable::GetInstanceInfo); }
    AddStructArrayHandles<Decoded_VkPhysicalDeviceGroupProperties>(instance, pPhysicalDeviceGroupProperties->GetMetaStructPointer(), pPhysicalDeviceGroupProperties->GetLength(), pPhysicalDeviceGroupProperties->GetOutputPointer(), *pPhysicalDeviceGroupCount->GetOutputPointer(), &GetObjectInfoTable());
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceExternalBufferPropertiesKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceExternalBufferInfo>/*@@@PLQ*/* pExternalBufferInfo,
    StructPointerDecoder<Decoded_VkExternalBufferProperties>/*@@@PLQ*/* pExternalBufferProperties)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    const VkPhysicalDeviceExternalBufferInfo* in_pExternalBufferInfo = pExternalBufferInfo->GetPointer();
    VkExternalBufferProperties* out_pExternalBufferProperties = pExternalBufferProperties->IsNull() ? nullptr : pExternalBufferProperties->AllocateOutputData(1, { VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES, nullptr });
    InitializeOutputStructPNext(pExternalBufferProperties);//@@@DFK
    GetInstanceTable(in_physicalDevice)->GetPhysicalDeviceExternalBufferPropertiesKHR(in_physicalDevice, in_pExternalBufferInfo, out_pExternalBufferProperties);//@@@HQA
}

void VulkanReplayConsumer::Process_vkGetMemoryWin32HandleKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkMemoryGetWin32HandleInfoKHR>/*@@@PLQ*/* pGetWin32HandleInfo,
    PointerDecoder<uint64_t, void*>*            pHandle)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkMemoryGetWin32HandleInfoKHR* in_pGetWin32HandleInfo = pGetWin32HandleInfo->GetPointer();
    MapStructHandles(pGetWin32HandleInfo->GetMetaStructPointer(), GetObjectInfoTable());
    HANDLE* out_pHandle = pHandle->IsNull() ? nullptr : reinterpret_cast<HANDLE*>(pHandle->AllocateOutputData(1));//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->GetMemoryWin32HandleKHR(in_device, in_pGetWin32HandleInfo, out_pHandle);
    CheckResult("vkGetMemoryWin32HandleKHR", returnValue, replay_result, call_info);

    PostProcessExternalObject(replay_result, (*pHandle->GetPointer()), static_cast<void*>(*out_pHandle), format::ApiCallId::ApiCall_vkGetMemoryWin32HandleKHR, "vkGetMemoryWin32HandleKHR");
}

void VulkanReplayConsumer::Process_vkGetMemoryWin32HandlePropertiesKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    VkExternalMemoryHandleTypeFlagBits          handleType,
    uint64_t                                    handle,
    StructPointerDecoder<Decoded_VkMemoryWin32HandlePropertiesKHR>/*@@@PLQ*/* pMemoryWin32HandleProperties)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    HANDLE in_handle = static_cast<HANDLE>(PreProcessExternalObject(handle, format::ApiCallId::ApiCall_vkGetMemoryWin32HandlePropertiesKHR, "vkGetMemoryWin32HandlePropertiesKHR"));
    VkMemoryWin32HandlePropertiesKHR* out_pMemoryWin32HandleProperties = pMemoryWin32HandleProperties->IsNull() ? nullptr : pMemoryWin32HandleProperties->AllocateOutputData(1, { VK_STRUCTURE_TYPE_MEMORY_WIN32_HANDLE_PROPERTIES_KHR, nullptr });
    InitializeOutputStructPNext(pMemoryWin32HandleProperties);//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->GetMemoryWin32HandlePropertiesKHR(in_device, handleType, in_handle, out_pMemoryWin32HandleProperties);
    CheckResult("vkGetMemoryWin32HandlePropertiesKHR", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetMemoryFdKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkMemoryGetFdInfoKHR>/*@@@PLQ*/* pGetFdInfo,
    PointerDecoder<int>*                        pFd)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkMemoryGetFdInfoKHR* in_pGetFdInfo = pGetFdInfo->GetPointer();
    MapStructHandles(pGetFdInfo->GetMetaStructPointer(), GetObjectInfoTable());
    int* out_pFd = pFd->IsNull() ? nullptr : pFd->AllocateOutputData(1, static_cast<int>(0));//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->GetMemoryFdKHR(in_device, in_pGetFdInfo, out_pFd);
    CheckResult("vkGetMemoryFdKHR", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetMemoryFdPropertiesKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    VkExternalMemoryHandleTypeFlagBits          handleType,
    int                                         fd,
    StructPointerDecoder<Decoded_VkMemoryFdPropertiesKHR>/*@@@PLQ*/* pMemoryFdProperties)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkMemoryFdPropertiesKHR* out_pMemoryFdProperties = pMemoryFdProperties->IsNull() ? nullptr : pMemoryFdProperties->AllocateOutputData(1, { VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR, nullptr });
    InitializeOutputStructPNext(pMemoryFdProperties);//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->GetMemoryFdPropertiesKHR(in_device, handleType, fd, out_pMemoryFdProperties);
    CheckResult("vkGetMemoryFdPropertiesKHR", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceExternalSemaphoreInfo>/*@@@PLQ*/* pExternalSemaphoreInfo,
    StructPointerDecoder<Decoded_VkExternalSemaphoreProperties>/*@@@PLQ*/* pExternalSemaphoreProperties)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    const VkPhysicalDeviceExternalSemaphoreInfo* in_pExternalSemaphoreInfo = pExternalSemaphoreInfo->GetPointer();
    VkExternalSemaphoreProperties* out_pExternalSemaphoreProperties = pExternalSemaphoreProperties->IsNull() ? nullptr : pExternalSemaphoreProperties->AllocateOutputData(1, { VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES, nullptr });
    InitializeOutputStructPNext(pExternalSemaphoreProperties);//@@@DFK
    GetInstanceTable(in_physicalDevice)->GetPhysicalDeviceExternalSemaphorePropertiesKHR(in_physicalDevice, in_pExternalSemaphoreInfo, out_pExternalSemaphoreProperties);//@@@HQA
}

void VulkanReplayConsumer::Process_vkImportSemaphoreWin32HandleKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkImportSemaphoreWin32HandleInfoKHR>/*@@@PLQ*/* pImportSemaphoreWin32HandleInfo)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);

    MapStructHandles(pImportSemaphoreWin32HandleInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    VkResult replay_result = OverrideImportSemaphoreWin32HandleKHR(GetDeviceTable(in_device->handle)->ImportSemaphoreWin32HandleKHR, returnValue, in_device, pImportSemaphoreWin32HandleInfo);
    CheckResult("vkImportSemaphoreWin32HandleKHR", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetSemaphoreWin32HandleKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkSemaphoreGetWin32HandleInfoKHR>/*@@@PLQ*/* pGetWin32HandleInfo,
    PointerDecoder<uint64_t, void*>*            pHandle)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkSemaphoreGetWin32HandleInfoKHR* in_pGetWin32HandleInfo = pGetWin32HandleInfo->GetPointer();
    MapStructHandles(pGetWin32HandleInfo->GetMetaStructPointer(), GetObjectInfoTable());
    HANDLE* out_pHandle = pHandle->IsNull() ? nullptr : reinterpret_cast<HANDLE*>(pHandle->AllocateOutputData(1));//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->GetSemaphoreWin32HandleKHR(in_device, in_pGetWin32HandleInfo, out_pHandle);
    CheckResult("vkGetSemaphoreWin32HandleKHR", returnValue, replay_result, call_info);

    PostProcessExternalObject(replay_result, (*pHandle->GetPointer()), static_cast<void*>(*out_pHandle), format::ApiCallId::ApiCall_vkGetSemaphoreWin32HandleKHR, "vkGetSemaphoreWin32HandleKHR");
}

void VulkanReplayConsumer::Process_vkImportSemaphoreFdKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkImportSemaphoreFdInfoKHR>/*@@@PLQ*/* pImportSemaphoreFdInfo)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);

    MapStructHandles(pImportSemaphoreFdInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    VkResult replay_result = OverrideImportSemaphoreFdKHR(GetDeviceTable(in_device->handle)->ImportSemaphoreFdKHR, returnValue, in_device, pImportSemaphoreFdInfo);
    CheckResult("vkImportSemaphoreFdKHR", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetSemaphoreFdKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkSemaphoreGetFdInfoKHR>/*@@@PLQ*/* pGetFdInfo,
    PointerDecoder<int>*                        pFd)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);

    MapStructHandles(pGetFdInfo->GetMetaStructPointer(), GetObjectInfoTable());
    pFd->IsNull() ? nullptr : pFd->AllocateOutputData(1, static_cast<int>(0));//@@@DFK
    VkResult replay_result = OverrideGetSemaphoreFdKHR(GetDeviceTable(in_device->handle)->GetSemaphoreFdKHR, returnValue, in_device, pGetFdInfo, pFd);
    CheckResult("vkGetSemaphoreFdKHR", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkCmdPushDescriptorSetKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkPipelineBindPoint                         pipelineBindPoint,
    format::HandleId                            layout,
    uint32_t                                    set,
    uint32_t                                    descriptorWriteCount,
    StructPointerDecoder<Decoded_VkWriteDescriptorSet>/*@@@PLQ*/* pDescriptorWrites)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkPipelineLayout in_layout = MapHandle<PipelineLayoutInfo>(layout, &VulkanObjectInfoTable::GetPipelineLayoutInfo);
    const VkWriteDescriptorSet* in_pDescriptorWrites = pDescriptorWrites->GetPointer();
    MapStructArrayHandles(pDescriptorWrites->GetMetaStructPointer(), pDescriptorWrites->GetLength(), GetObjectInfoTable());//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdPushDescriptorSetKHR(in_commandBuffer, pipelineBindPoint, in_layout, set, descriptorWriteCount, in_pDescriptorWrites);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdPushDescriptorSetKHR(dumper.GetClonedCommandBuffer(), pipelineBindPoint, in_layout, set, descriptorWriteCount, in_pDescriptorWrites)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCreateDescriptorUpdateTemplateKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDescriptorUpdateTemplateCreateInfo>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkDescriptorUpdateTemplate>* pDescriptorUpdateTemplate)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);

    MapStructHandles(pCreateInfo->GetMetaStructPointer(), GetObjectInfoTable());
    if (!pDescriptorUpdateTemplate->IsNull()) { pDescriptorUpdateTemplate->SetHandleLength(1); }
    DescriptorUpdateTemplateInfo handle_info;
    pDescriptorUpdateTemplate->SetConsumerData(0, &handle_info);//@@@DFK
    VkResult replay_result = OverrideCreateDescriptorUpdateTemplate(GetDeviceTable(in_device->handle)->CreateDescriptorUpdateTemplateKHR, returnValue, in_device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate);
    CheckResult("vkCreateDescriptorUpdateTemplateKHR", returnValue, replay_result, call_info);

    AddHandle<DescriptorUpdateTemplateInfo>(device, pDescriptorUpdateTemplate->GetPointer(), pDescriptorUpdateTemplate->GetHandlePointer(), std::move(handle_info), &VulkanObjectInfoTable::AddDescriptorUpdateTemplateInfo);
}

void VulkanReplayConsumer::Process_vkDestroyDescriptorUpdateTemplateKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            descriptorUpdateTemplate,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);
    auto in_descriptorUpdateTemplate = GetObjectInfoTable().GetDescriptorUpdateTemplateInfo(descriptorUpdateTemplate);//@@@DFK
    OverrideDestroyDescriptorUpdateTemplate(GetDeviceTable(in_device->handle)->DestroyDescriptorUpdateTemplateKHR, in_device, in_descriptorUpdateTemplate, pAllocator);//@@@HQA
    RemoveHandle(descriptorUpdateTemplate, &VulkanObjectInfoTable::RemoveDescriptorUpdateTemplateInfo);
}

void VulkanReplayConsumer::Process_vkCreateRenderPass2KHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkRenderPassCreateInfo2>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkRenderPass>*         pRenderPass)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);
    if (!pRenderPass->IsNull()) { pRenderPass->SetHandleLength(1); }
    RenderPassInfo handle_info;
    pRenderPass->SetConsumerData(0, &handle_info);//@@@DFK
    VkResult replay_result = OverrideCreateRenderPass2(GetDeviceTable(in_device->handle)->CreateRenderPass2KHR, returnValue, in_device, pCreateInfo, pAllocator, pRenderPass);
    CheckResult("vkCreateRenderPass2KHR", returnValue, replay_result, call_info);

    AddHandle<RenderPassInfo>(device, pRenderPass->GetPointer(), pRenderPass->GetHandlePointer(), std::move(handle_info), &VulkanObjectInfoTable::AddRenderPassInfo);
}

void VulkanReplayConsumer::Process_vkCmdBeginRenderPass2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkRenderPassBeginInfo>/*@@@PLQ*/* pRenderPassBegin,
    StructPointerDecoder<Decoded_VkSubpassBeginInfo>/*@@@PLQ*/* pSubpassBeginInfo)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkRenderPassBeginInfo* in_pRenderPassBegin = pRenderPassBegin->GetPointer();
    MapStructHandles(pRenderPassBegin->GetMetaStructPointer(), GetObjectInfoTable());
    const VkSubpassBeginInfo* in_pSubpassBeginInfo = pSubpassBeginInfo->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdBeginRenderPass2KHR(in_commandBuffer, in_pRenderPassBegin, in_pSubpassBeginInfo);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdBeginRenderPass2KHR(dumper.GetClonedCommandBuffer(), in_pRenderPassBegin, in_pSubpassBeginInfo)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdNextSubpass2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkSubpassBeginInfo>/*@@@PLQ*/* pSubpassBeginInfo,
    StructPointerDecoder<Decoded_VkSubpassEndInfo>/*@@@PLQ*/* pSubpassEndInfo)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkSubpassBeginInfo* in_pSubpassBeginInfo = pSubpassBeginInfo->GetPointer();
    const VkSubpassEndInfo* in_pSubpassEndInfo = pSubpassEndInfo->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdNextSubpass2KHR(in_commandBuffer, in_pSubpassBeginInfo, in_pSubpassEndInfo);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdNextSubpass2KHR(dumper.GetClonedCommandBuffer(), in_pSubpassBeginInfo, in_pSubpassEndInfo)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdEndRenderPass2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkSubpassEndInfo>/*@@@PLQ*/* pSubpassEndInfo)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkSubpassEndInfo* in_pSubpassEndInfo = pSubpassEndInfo->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdEndRenderPass2KHR(in_commandBuffer, in_pSubpassEndInfo);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdEndRenderPass2KHR(dumper.GetClonedCommandBuffer(), in_pSubpassEndInfo)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkGetSwapchainStatusKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain)
{
    if (options_.swapchain_option == util::SwapchainOption::kOffscreen)
    {
        GFXRECON_LOG_DEBUG("Skip vkGetSwapchainStatusKHR for offscreen.");
        return;
    }
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkSwapchainKHR in_swapchain = MapHandle<SwapchainKHRInfo>(swapchain, &VulkanObjectInfoTable::GetSwapchainKHRInfo);
    if (GetObjectInfoTable().GetSurfaceKHRInfo(GetObjectInfoTable().GetSwapchainKHRInfo(swapchain)->surface_id) == nullptr || GetObjectInfoTable().GetSurfaceKHRInfo(GetObjectInfoTable().GetSwapchainKHRInfo(swapchain)->surface_id)->surface_creation_skipped) { return; }//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->GetSwapchainStatusKHR(in_device, in_swapchain);
    CheckResult("vkGetSwapchainStatusKHR", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceExternalFencePropertiesKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceExternalFenceInfo>/*@@@PLQ*/* pExternalFenceInfo,
    StructPointerDecoder<Decoded_VkExternalFenceProperties>/*@@@PLQ*/* pExternalFenceProperties)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    const VkPhysicalDeviceExternalFenceInfo* in_pExternalFenceInfo = pExternalFenceInfo->GetPointer();
    VkExternalFenceProperties* out_pExternalFenceProperties = pExternalFenceProperties->IsNull() ? nullptr : pExternalFenceProperties->AllocateOutputData(1, { VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES, nullptr });
    InitializeOutputStructPNext(pExternalFenceProperties);//@@@DFK
    GetInstanceTable(in_physicalDevice)->GetPhysicalDeviceExternalFencePropertiesKHR(in_physicalDevice, in_pExternalFenceInfo, out_pExternalFenceProperties);//@@@HQA
}

void VulkanReplayConsumer::Process_vkImportFenceWin32HandleKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkImportFenceWin32HandleInfoKHR>/*@@@PLQ*/* pImportFenceWin32HandleInfo)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkImportFenceWin32HandleInfoKHR* in_pImportFenceWin32HandleInfo = pImportFenceWin32HandleInfo->GetPointer();
    MapStructHandles(pImportFenceWin32HandleInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->ImportFenceWin32HandleKHR(in_device, in_pImportFenceWin32HandleInfo);
    CheckResult("vkImportFenceWin32HandleKHR", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetFenceWin32HandleKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkFenceGetWin32HandleInfoKHR>/*@@@PLQ*/* pGetWin32HandleInfo,
    PointerDecoder<uint64_t, void*>*            pHandle)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkFenceGetWin32HandleInfoKHR* in_pGetWin32HandleInfo = pGetWin32HandleInfo->GetPointer();
    MapStructHandles(pGetWin32HandleInfo->GetMetaStructPointer(), GetObjectInfoTable());
    HANDLE* out_pHandle = pHandle->IsNull() ? nullptr : reinterpret_cast<HANDLE*>(pHandle->AllocateOutputData(1));//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->GetFenceWin32HandleKHR(in_device, in_pGetWin32HandleInfo, out_pHandle);
    CheckResult("vkGetFenceWin32HandleKHR", returnValue, replay_result, call_info);

    PostProcessExternalObject(replay_result, (*pHandle->GetPointer()), static_cast<void*>(*out_pHandle), format::ApiCallId::ApiCall_vkGetFenceWin32HandleKHR, "vkGetFenceWin32HandleKHR");
}

void VulkanReplayConsumer::Process_vkImportFenceFdKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkImportFenceFdInfoKHR>/*@@@PLQ*/* pImportFenceFdInfo)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkImportFenceFdInfoKHR* in_pImportFenceFdInfo = pImportFenceFdInfo->GetPointer();
    MapStructHandles(pImportFenceFdInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->ImportFenceFdKHR(in_device, in_pImportFenceFdInfo);
    CheckResult("vkImportFenceFdKHR", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetFenceFdKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkFenceGetFdInfoKHR>/*@@@PLQ*/* pGetFdInfo,
    PointerDecoder<int>*                        pFd)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkFenceGetFdInfoKHR* in_pGetFdInfo = pGetFdInfo->GetPointer();
    MapStructHandles(pGetFdInfo->GetMetaStructPointer(), GetObjectInfoTable());
    int* out_pFd = pFd->IsNull() ? nullptr : pFd->AllocateOutputData(1, static_cast<int>(0));//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->GetFenceFdKHR(in_device, in_pGetFdInfo, out_pFd);
    CheckResult("vkGetFenceFdKHR", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    PointerDecoder<uint32_t>*                   pCounterCount,
    StructPointerDecoder<Decoded_VkPerformanceCounterKHR>/*@@@PLQ*/* pCounters,
    StructPointerDecoder<Decoded_VkPerformanceCounterDescriptionKHR>/*@@@PLQ*/* pCounterDescriptions)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    uint32_t* out_pCounterCount = pCounterCount->IsNull() ? nullptr : pCounterCount->AllocateOutputData(1, GetOutputArrayCount<uint32_t, PhysicalDeviceInfo>("vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR", returnValue, physicalDevice, kPhysicalDeviceArrayEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR, pCounterCount, pCounterDescriptions, &VulkanObjectInfoTable::GetPhysicalDeviceInfo));
    VkPerformanceCounterKHR* out_pCounters = pCounters->IsNull() ? nullptr : pCounters->AllocateOutputData(*out_pCounterCount, VkPerformanceCounterKHR{ VK_STRUCTURE_TYPE_PERFORMANCE_COUNTER_KHR, nullptr });
    VkPerformanceCounterDescriptionKHR* out_pCounterDescriptions = pCounterDescriptions->IsNull() ? nullptr : pCounterDescriptions->AllocateOutputData(*out_pCounterCount, VkPerformanceCounterDescriptionKHR{ VK_STRUCTURE_TYPE_PERFORMANCE_COUNTER_DESCRIPTION_KHR, nullptr });//@@@DFK
    VkResult replay_result = GetInstanceTable(in_physicalDevice)->EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR(in_physicalDevice, queueFamilyIndex, out_pCounterCount, out_pCounters, out_pCounterDescriptions);
    CheckResult("vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR", returnValue, replay_result, call_info);

    if (pCounters->IsNull()) { SetOutputArrayCount<PhysicalDeviceInfo>(physicalDevice, kPhysicalDeviceArrayEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR, *out_pCounterCount, &VulkanObjectInfoTable::GetPhysicalDeviceInfo); }
    if (pCounterDescriptions->IsNull()) { SetOutputArrayCount<PhysicalDeviceInfo>(physicalDevice, kPhysicalDeviceArrayEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR, *out_pCounterCount, &VulkanObjectInfoTable::GetPhysicalDeviceInfo); }
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkQueryPoolPerformanceCreateInfoKHR>/*@@@PLQ*/* pPerformanceQueryCreateInfo,
    PointerDecoder<uint32_t>*                   pNumPasses)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    const VkQueryPoolPerformanceCreateInfoKHR* in_pPerformanceQueryCreateInfo = pPerformanceQueryCreateInfo->GetPointer();
    uint32_t* out_pNumPasses = pNumPasses->IsNull() ? nullptr : pNumPasses->AllocateOutputData(1, static_cast<uint32_t>(0));//@@@DFK
    GetInstanceTable(in_physicalDevice)->GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR(in_physicalDevice, in_pPerformanceQueryCreateInfo, out_pNumPasses);//@@@HQA
}

void VulkanReplayConsumer::Process_vkAcquireProfilingLockKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkAcquireProfilingLockInfoKHR>/*@@@PLQ*/* pInfo)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);//@@@DFK
    VkResult replay_result = OverrideAcquireProfilingLockKHR(GetDeviceTable(in_device->handle)->AcquireProfilingLockKHR, returnValue, in_device, pInfo);
    CheckResult("vkAcquireProfilingLockKHR", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkReleaseProfilingLockKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);//@@@DFK
    GetDeviceTable(in_device)->ReleaseProfilingLockKHR(in_device);//@@@HQA
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceSurfaceCapabilities2KHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceSurfaceInfo2KHR>/*@@@PLQ*/* pSurfaceInfo,
    StructPointerDecoder<Decoded_VkSurfaceCapabilities2KHR>/*@@@PLQ*/* pSurfaceCapabilities)
{
    if (options_.swapchain_option == util::SwapchainOption::kOffscreen)
    {
        GFXRECON_LOG_DEBUG("Skip vkGetPhysicalDeviceSurfaceCapabilities2KHR for offscreen.");
        return;
    }
    auto in_physicalDevice = GetObjectInfoTable().GetPhysicalDeviceInfo(physicalDevice);

    if (pSurfaceInfo->GetPointer()->surface == VK_NULL_HANDLE) { return; }
    MapStructHandles(pSurfaceInfo->GetMetaStructPointer(), GetObjectInfoTable());
    auto in_pSurfaceInfo_meta = pSurfaceInfo->GetMetaStructPointer();
    if (GetObjectInfoTable().GetSurfaceKHRInfo(in_pSurfaceInfo_meta->surface) == nullptr || GetObjectInfoTable().GetSurfaceKHRInfo(in_pSurfaceInfo_meta->surface)->surface_creation_skipped) { return; }
    pSurfaceCapabilities->IsNull() ? nullptr : pSurfaceCapabilities->AllocateOutputData(1, { VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_KHR, nullptr });
    InitializeOutputStructPNext(pSurfaceCapabilities);//@@@DFK
    VkResult replay_result = OverrideGetPhysicalDeviceSurfaceCapabilities2KHR(GetInstanceTable(in_physicalDevice->handle)->GetPhysicalDeviceSurfaceCapabilities2KHR, returnValue, in_physicalDevice, pSurfaceInfo, pSurfaceCapabilities);
    CheckResult("vkGetPhysicalDeviceSurfaceCapabilities2KHR", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceSurfaceFormats2KHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceSurfaceInfo2KHR>/*@@@PLQ*/* pSurfaceInfo,
    PointerDecoder<uint32_t>*                   pSurfaceFormatCount,
    StructPointerDecoder<Decoded_VkSurfaceFormat2KHR>/*@@@PLQ*/* pSurfaceFormats)
{
    if (options_.swapchain_option == util::SwapchainOption::kOffscreen)
    {
        GFXRECON_LOG_DEBUG("Skip vkGetPhysicalDeviceSurfaceFormats2KHR for offscreen.");
        return;
    }
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    const VkPhysicalDeviceSurfaceInfo2KHR* in_pSurfaceInfo = pSurfaceInfo->GetPointer();
    if (pSurfaceInfo->GetPointer()->surface == VK_NULL_HANDLE) { return; }
    MapStructHandles(pSurfaceInfo->GetMetaStructPointer(), GetObjectInfoTable());
    auto in_pSurfaceInfo_meta = pSurfaceInfo->GetMetaStructPointer();
    if (GetObjectInfoTable().GetSurfaceKHRInfo(in_pSurfaceInfo_meta->surface) == nullptr || GetObjectInfoTable().GetSurfaceKHRInfo(in_pSurfaceInfo_meta->surface)->surface_creation_skipped) { return; }
    uint32_t* out_pSurfaceFormatCount = pSurfaceFormatCount->IsNull() ? nullptr : pSurfaceFormatCount->AllocateOutputData(1, GetOutputArrayCount<uint32_t, PhysicalDeviceInfo>("vkGetPhysicalDeviceSurfaceFormats2KHR", returnValue, physicalDevice, kPhysicalDeviceArrayGetPhysicalDeviceSurfaceFormats2KHR, pSurfaceFormatCount, pSurfaceFormats, &VulkanObjectInfoTable::GetPhysicalDeviceInfo));
    VkSurfaceFormat2KHR* out_pSurfaceFormats = pSurfaceFormats->IsNull() ? nullptr : pSurfaceFormats->AllocateOutputData(*out_pSurfaceFormatCount, VkSurfaceFormat2KHR{ VK_STRUCTURE_TYPE_SURFACE_FORMAT_2_KHR, nullptr });//@@@DFK
    VkResult replay_result = GetInstanceTable(in_physicalDevice)->GetPhysicalDeviceSurfaceFormats2KHR(in_physicalDevice, in_pSurfaceInfo, out_pSurfaceFormatCount, out_pSurfaceFormats);
    CheckResult("vkGetPhysicalDeviceSurfaceFormats2KHR", returnValue, replay_result, call_info);

    if (pSurfaceFormats->IsNull()) { SetOutputArrayCount<PhysicalDeviceInfo>(physicalDevice, kPhysicalDeviceArrayGetPhysicalDeviceSurfaceFormats2KHR, *out_pSurfaceFormatCount, &VulkanObjectInfoTable::GetPhysicalDeviceInfo); }
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceDisplayProperties2KHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    PointerDecoder<uint32_t>*                   pPropertyCount,
    StructPointerDecoder<Decoded_VkDisplayProperties2KHR>/*@@@PLQ*/* pProperties)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    uint32_t* out_pPropertyCount = pPropertyCount->IsNull() ? nullptr : pPropertyCount->AllocateOutputData(1, GetOutputArrayCount<uint32_t, PhysicalDeviceInfo>("vkGetPhysicalDeviceDisplayProperties2KHR", returnValue, physicalDevice, kPhysicalDeviceArrayGetPhysicalDeviceDisplayProperties2KHR, pPropertyCount, pProperties, &VulkanObjectInfoTable::GetPhysicalDeviceInfo));
    VkDisplayProperties2KHR* out_pProperties = pProperties->IsNull() ? nullptr : pProperties->AllocateOutputData(*out_pPropertyCount, VkDisplayProperties2KHR{ VK_STRUCTURE_TYPE_DISPLAY_PROPERTIES_2_KHR, nullptr });//@@@DFK
    VkResult replay_result = GetInstanceTable(in_physicalDevice)->GetPhysicalDeviceDisplayProperties2KHR(in_physicalDevice, out_pPropertyCount, out_pProperties);
    CheckResult("vkGetPhysicalDeviceDisplayProperties2KHR", returnValue, replay_result, call_info);

    if (pProperties->IsNull()) { SetOutputArrayCount<PhysicalDeviceInfo>(physicalDevice, kPhysicalDeviceArrayGetPhysicalDeviceDisplayProperties2KHR, *out_pPropertyCount, &VulkanObjectInfoTable::GetPhysicalDeviceInfo); }
    AddStructArrayHandles<Decoded_VkDisplayProperties2KHR>(physicalDevice, pProperties->GetMetaStructPointer(), pProperties->GetLength(), out_pProperties, *out_pPropertyCount, &GetObjectInfoTable());
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceDisplayPlaneProperties2KHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    PointerDecoder<uint32_t>*                   pPropertyCount,
    StructPointerDecoder<Decoded_VkDisplayPlaneProperties2KHR>/*@@@PLQ*/* pProperties)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    uint32_t* out_pPropertyCount = pPropertyCount->IsNull() ? nullptr : pPropertyCount->AllocateOutputData(1, GetOutputArrayCount<uint32_t, PhysicalDeviceInfo>("vkGetPhysicalDeviceDisplayPlaneProperties2KHR", returnValue, physicalDevice, kPhysicalDeviceArrayGetPhysicalDeviceDisplayPlaneProperties2KHR, pPropertyCount, pProperties, &VulkanObjectInfoTable::GetPhysicalDeviceInfo));
    VkDisplayPlaneProperties2KHR* out_pProperties = pProperties->IsNull() ? nullptr : pProperties->AllocateOutputData(*out_pPropertyCount, VkDisplayPlaneProperties2KHR{ VK_STRUCTURE_TYPE_DISPLAY_PLANE_PROPERTIES_2_KHR, nullptr });//@@@DFK
    VkResult replay_result = GetInstanceTable(in_physicalDevice)->GetPhysicalDeviceDisplayPlaneProperties2KHR(in_physicalDevice, out_pPropertyCount, out_pProperties);
    CheckResult("vkGetPhysicalDeviceDisplayPlaneProperties2KHR", returnValue, replay_result, call_info);

    if (pProperties->IsNull()) { SetOutputArrayCount<PhysicalDeviceInfo>(physicalDevice, kPhysicalDeviceArrayGetPhysicalDeviceDisplayPlaneProperties2KHR, *out_pPropertyCount, &VulkanObjectInfoTable::GetPhysicalDeviceInfo); }
    AddStructArrayHandles<Decoded_VkDisplayPlaneProperties2KHR>(physicalDevice, pProperties->GetMetaStructPointer(), pProperties->GetLength(), out_pProperties, *out_pPropertyCount, &GetObjectInfoTable());
}

void VulkanReplayConsumer::Process_vkGetDisplayModeProperties2KHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            display,
    PointerDecoder<uint32_t>*                   pPropertyCount,
    StructPointerDecoder<Decoded_VkDisplayModeProperties2KHR>/*@@@PLQ*/* pProperties)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    VkDisplayKHR in_display = MapHandle<DisplayKHRInfo>(display, &VulkanObjectInfoTable::GetDisplayKHRInfo);
    uint32_t* out_pPropertyCount = pPropertyCount->IsNull() ? nullptr : pPropertyCount->AllocateOutputData(1, GetOutputArrayCount<uint32_t, DisplayKHRInfo>("vkGetDisplayModeProperties2KHR", returnValue, display, kDisplayKHRArrayGetDisplayModeProperties2KHR, pPropertyCount, pProperties, &VulkanObjectInfoTable::GetDisplayKHRInfo));
    VkDisplayModeProperties2KHR* out_pProperties = pProperties->IsNull() ? nullptr : pProperties->AllocateOutputData(*out_pPropertyCount, VkDisplayModeProperties2KHR{ VK_STRUCTURE_TYPE_DISPLAY_MODE_PROPERTIES_2_KHR, nullptr });//@@@DFK
    VkResult replay_result = GetInstanceTable(in_physicalDevice)->GetDisplayModeProperties2KHR(in_physicalDevice, in_display, out_pPropertyCount, out_pProperties);
    CheckResult("vkGetDisplayModeProperties2KHR", returnValue, replay_result, call_info);

    if (pProperties->IsNull()) { SetOutputArrayCount<DisplayKHRInfo>(display, kDisplayKHRArrayGetDisplayModeProperties2KHR, *out_pPropertyCount, &VulkanObjectInfoTable::GetDisplayKHRInfo); }
    AddStructArrayHandles<Decoded_VkDisplayModeProperties2KHR>(physicalDevice, pProperties->GetMetaStructPointer(), pProperties->GetLength(), out_pProperties, *out_pPropertyCount, &GetObjectInfoTable());
}

void VulkanReplayConsumer::Process_vkGetDisplayPlaneCapabilities2KHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkDisplayPlaneInfo2KHR>/*@@@PLQ*/* pDisplayPlaneInfo,
    StructPointerDecoder<Decoded_VkDisplayPlaneCapabilities2KHR>/*@@@PLQ*/* pCapabilities)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    const VkDisplayPlaneInfo2KHR* in_pDisplayPlaneInfo = pDisplayPlaneInfo->GetPointer();
    MapStructHandles(pDisplayPlaneInfo->GetMetaStructPointer(), GetObjectInfoTable());
    VkDisplayPlaneCapabilities2KHR* out_pCapabilities = pCapabilities->IsNull() ? nullptr : pCapabilities->AllocateOutputData(1, { VK_STRUCTURE_TYPE_DISPLAY_PLANE_CAPABILITIES_2_KHR, nullptr });
    InitializeOutputStructPNext(pCapabilities);//@@@DFK
    VkResult replay_result = GetInstanceTable(in_physicalDevice)->GetDisplayPlaneCapabilities2KHR(in_physicalDevice, in_pDisplayPlaneInfo, out_pCapabilities);
    CheckResult("vkGetDisplayPlaneCapabilities2KHR", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetImageMemoryRequirements2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkImageMemoryRequirementsInfo2>/*@@@PLQ*/* pInfo,
    StructPointerDecoder<Decoded_VkMemoryRequirements2>/*@@@PLQ*/* pMemoryRequirements)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkImageMemoryRequirementsInfo2* in_pInfo = pInfo->GetPointer();
    MapStructHandles(pInfo->GetMetaStructPointer(), GetObjectInfoTable());
    VkMemoryRequirements2* out_pMemoryRequirements = pMemoryRequirements->IsNull() ? nullptr : pMemoryRequirements->AllocateOutputData(1, { VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2, nullptr });
    InitializeOutputStructPNext(pMemoryRequirements);//@@@DFK
    GetDeviceTable(in_device)->GetImageMemoryRequirements2KHR(in_device, in_pInfo, out_pMemoryRequirements);//@@@HQA
}

void VulkanReplayConsumer::Process_vkGetBufferMemoryRequirements2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkBufferMemoryRequirementsInfo2>/*@@@PLQ*/* pInfo,
    StructPointerDecoder<Decoded_VkMemoryRequirements2>/*@@@PLQ*/* pMemoryRequirements)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkBufferMemoryRequirementsInfo2* in_pInfo = pInfo->GetPointer();
    MapStructHandles(pInfo->GetMetaStructPointer(), GetObjectInfoTable());
    VkMemoryRequirements2* out_pMemoryRequirements = pMemoryRequirements->IsNull() ? nullptr : pMemoryRequirements->AllocateOutputData(1, { VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2, nullptr });
    InitializeOutputStructPNext(pMemoryRequirements);//@@@DFK
    GetDeviceTable(in_device)->GetBufferMemoryRequirements2KHR(in_device, in_pInfo, out_pMemoryRequirements);//@@@HQA
}

void VulkanReplayConsumer::Process_vkGetImageSparseMemoryRequirements2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkImageSparseMemoryRequirementsInfo2>/*@@@PLQ*/* pInfo,
    PointerDecoder<uint32_t>*                   pSparseMemoryRequirementCount,
    StructPointerDecoder<Decoded_VkSparseImageMemoryRequirements2>/*@@@PLQ*/* pSparseMemoryRequirements)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkImageSparseMemoryRequirementsInfo2* in_pInfo = pInfo->GetPointer();
    MapStructHandles(pInfo->GetMetaStructPointer(), GetObjectInfoTable());
    uint32_t* out_pSparseMemoryRequirementCount = pSparseMemoryRequirementCount->IsNull() ? nullptr : pSparseMemoryRequirementCount->AllocateOutputData(1, GetOutputArrayCount<uint32_t, DeviceInfo>("vkGetImageSparseMemoryRequirements2KHR", VK_SUCCESS, device, kDeviceArrayGetImageSparseMemoryRequirements2KHR, pSparseMemoryRequirementCount, pSparseMemoryRequirements, &VulkanObjectInfoTable::GetDeviceInfo));
    VkSparseImageMemoryRequirements2* out_pSparseMemoryRequirements = pSparseMemoryRequirements->IsNull() ? nullptr : pSparseMemoryRequirements->AllocateOutputData(*out_pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2{ VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2, nullptr });//@@@DFK
    GetDeviceTable(in_device)->GetImageSparseMemoryRequirements2KHR(in_device, in_pInfo, out_pSparseMemoryRequirementCount, out_pSparseMemoryRequirements);//@@@HQA

    if (pSparseMemoryRequirements->IsNull()) { SetOutputArrayCount<DeviceInfo>(device, kDeviceArrayGetImageSparseMemoryRequirements2KHR, *out_pSparseMemoryRequirementCount, &VulkanObjectInfoTable::GetDeviceInfo); }
}

void VulkanReplayConsumer::Process_vkCreateSamplerYcbcrConversionKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkSamplerYcbcrConversionCreateInfo>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkSamplerYcbcrConversion>* pYcbcrConversion)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkSamplerYcbcrConversionCreateInfo* in_pCreateInfo = pCreateInfo->GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    if (!pYcbcrConversion->IsNull()) { pYcbcrConversion->SetHandleLength(1); }
    VkSamplerYcbcrConversion* out_pYcbcrConversion = pYcbcrConversion->GetHandlePointer();//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->CreateSamplerYcbcrConversionKHR(in_device, in_pCreateInfo, in_pAllocator, out_pYcbcrConversion);
    CheckResult("vkCreateSamplerYcbcrConversionKHR", returnValue, replay_result, call_info);

    AddHandle<SamplerYcbcrConversionInfo>(device, pYcbcrConversion->GetPointer(), out_pYcbcrConversion, &VulkanObjectInfoTable::AddSamplerYcbcrConversionInfo);
}

void VulkanReplayConsumer::Process_vkDestroySamplerYcbcrConversionKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            ycbcrConversion,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkSamplerYcbcrConversion in_ycbcrConversion = MapHandle<SamplerYcbcrConversionInfo>(ycbcrConversion, &VulkanObjectInfoTable::GetSamplerYcbcrConversionInfo);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);//@@@DFK
    GetDeviceTable(in_device)->DestroySamplerYcbcrConversionKHR(in_device, in_ycbcrConversion, in_pAllocator);//@@@HQA
    RemoveHandle(ycbcrConversion, &VulkanObjectInfoTable::RemoveSamplerYcbcrConversionInfo);
}

void VulkanReplayConsumer::Process_vkBindBufferMemory2KHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    bindInfoCount,
    StructPointerDecoder<Decoded_VkBindBufferMemoryInfo>/*@@@PLQ*/* pBindInfos)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);

    MapStructArrayHandles(pBindInfos->GetMetaStructPointer(), pBindInfos->GetLength(), GetObjectInfoTable());//@@@DFK
    VkResult replay_result = OverrideBindBufferMemory2(GetDeviceTable(in_device->handle)->BindBufferMemory2KHR, returnValue, in_device, bindInfoCount, pBindInfos);
    CheckResult("vkBindBufferMemory2KHR", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkBindImageMemory2KHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    bindInfoCount,
    StructPointerDecoder<Decoded_VkBindImageMemoryInfo>/*@@@PLQ*/* pBindInfos)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);

    MapStructArrayHandles(pBindInfos->GetMetaStructPointer(), pBindInfos->GetLength(), GetObjectInfoTable());//@@@DFK
    VkResult replay_result = OverrideBindImageMemory2(GetDeviceTable(in_device->handle)->BindImageMemory2KHR, returnValue, in_device, bindInfoCount, pBindInfos);
    CheckResult("vkBindImageMemory2KHR", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetDescriptorSetLayoutSupportKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDescriptorSetLayoutCreateInfo>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkDescriptorSetLayoutSupport>/*@@@PLQ*/* pSupport)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkDescriptorSetLayoutCreateInfo* in_pCreateInfo = pCreateInfo->GetPointer();
    MapStructHandles(pCreateInfo->GetMetaStructPointer(), GetObjectInfoTable());
    VkDescriptorSetLayoutSupport* out_pSupport = pSupport->IsNull() ? nullptr : pSupport->AllocateOutputData(1, { VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT, nullptr });
    InitializeOutputStructPNext(pSupport);//@@@DFK
    GetDeviceTable(in_device)->GetDescriptorSetLayoutSupportKHR(in_device, in_pCreateInfo, out_pSupport);//@@@HQA
}

void VulkanReplayConsumer::Process_vkCmdDrawIndirectCountKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    format::HandleId                            countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkBuffer in_buffer = MapHandle<BufferInfo>(buffer, &VulkanObjectInfoTable::GetBufferInfo);
    VkBuffer in_countBuffer = MapHandle<BufferInfo>(countBuffer, &VulkanObjectInfoTable::GetBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdDrawIndirectCountKHR(in_commandBuffer, in_buffer, offset, in_countBuffer, countBufferOffset, maxDrawCount, stride);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdDrawIndirectCountKHR(dumper.GetClonedCommandBuffer(), in_buffer, offset, in_countBuffer, countBufferOffset, maxDrawCount, stride)/*@@@ABC*/;//@@@HERE
        if (dumper.DumpingDrawCallIndex(call_info.index))
        {
            dumper.FinalizeCommandBuffer(*GetDeviceTable(in_commandBuffer));
        }
    }
}

void VulkanReplayConsumer::Process_vkCmdDrawIndexedIndirectCountKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    format::HandleId                            countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkBuffer in_buffer = MapHandle<BufferInfo>(buffer, &VulkanObjectInfoTable::GetBufferInfo);
    VkBuffer in_countBuffer = MapHandle<BufferInfo>(countBuffer, &VulkanObjectInfoTable::GetBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdDrawIndexedIndirectCountKHR(in_commandBuffer, in_buffer, offset, in_countBuffer, countBufferOffset, maxDrawCount, stride);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdDrawIndexedIndirectCountKHR(dumper.GetClonedCommandBuffer(), in_buffer, offset, in_countBuffer, countBufferOffset, maxDrawCount, stride)/*@@@ABC*/;//@@@HERE
        if (dumper.DumpingDrawCallIndex(call_info.index))
        {
            dumper.FinalizeCommandBuffer(*GetDeviceTable(in_commandBuffer));
        }
    }
}

void VulkanReplayConsumer::Process_vkGetSemaphoreCounterValueKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            semaphore,
    PointerDecoder<uint64_t>*                   pValue)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkSemaphore in_semaphore = MapHandle<SemaphoreInfo>(semaphore, &VulkanObjectInfoTable::GetSemaphoreInfo);
    uint64_t* out_pValue = pValue->IsNull() ? nullptr : pValue->AllocateOutputData(1, static_cast<uint64_t>(0));//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->GetSemaphoreCounterValueKHR(in_device, in_semaphore, out_pValue);
    CheckResult("vkGetSemaphoreCounterValueKHR", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkWaitSemaphoresKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkSemaphoreWaitInfo>/*@@@PLQ*/* pWaitInfo,
    uint64_t                                    timeout)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkSemaphoreWaitInfo* in_pWaitInfo = pWaitInfo->GetPointer();
    MapStructHandles(pWaitInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->WaitSemaphoresKHR(in_device, in_pWaitInfo, timeout);
    CheckResult("vkWaitSemaphoresKHR", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkSignalSemaphoreKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkSemaphoreSignalInfo>/*@@@PLQ*/* pSignalInfo)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkSemaphoreSignalInfo* in_pSignalInfo = pSignalInfo->GetPointer();
    MapStructHandles(pSignalInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->SignalSemaphoreKHR(in_device, in_pSignalInfo);
    CheckResult("vkSignalSemaphoreKHR", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceFragmentShadingRatesKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    PointerDecoder<uint32_t>*                   pFragmentShadingRateCount,
    StructPointerDecoder<Decoded_VkPhysicalDeviceFragmentShadingRateKHR>/*@@@PLQ*/* pFragmentShadingRates)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    uint32_t* out_pFragmentShadingRateCount = pFragmentShadingRateCount->IsNull() ? nullptr : pFragmentShadingRateCount->AllocateOutputData(1, GetOutputArrayCount<uint32_t, PhysicalDeviceInfo>("vkGetPhysicalDeviceFragmentShadingRatesKHR", returnValue, physicalDevice, kPhysicalDeviceArrayGetPhysicalDeviceFragmentShadingRatesKHR, pFragmentShadingRateCount, pFragmentShadingRates, &VulkanObjectInfoTable::GetPhysicalDeviceInfo));
    VkPhysicalDeviceFragmentShadingRateKHR* out_pFragmentShadingRates = pFragmentShadingRates->IsNull() ? nullptr : pFragmentShadingRates->AllocateOutputData(*out_pFragmentShadingRateCount, VkPhysicalDeviceFragmentShadingRateKHR{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_KHR, nullptr });//@@@DFK
    VkResult replay_result = GetInstanceTable(in_physicalDevice)->GetPhysicalDeviceFragmentShadingRatesKHR(in_physicalDevice, out_pFragmentShadingRateCount, out_pFragmentShadingRates);
    CheckResult("vkGetPhysicalDeviceFragmentShadingRatesKHR", returnValue, replay_result, call_info);

    if (pFragmentShadingRates->IsNull()) { SetOutputArrayCount<PhysicalDeviceInfo>(physicalDevice, kPhysicalDeviceArrayGetPhysicalDeviceFragmentShadingRatesKHR, *out_pFragmentShadingRateCount, &VulkanObjectInfoTable::GetPhysicalDeviceInfo); }
}

void VulkanReplayConsumer::Process_vkCmdSetFragmentShadingRateKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkExtent2D>/*@@@PLQ*/* pFragmentSize,
    PointerDecoder<VkFragmentShadingRateCombinerOpKHR>* combinerOps)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkExtent2D* in_pFragmentSize = pFragmentSize->GetPointer();
    const VkFragmentShadingRateCombinerOpKHR* in_combinerOps = combinerOps->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetFragmentShadingRateKHR(in_commandBuffer, in_pFragmentSize, in_combinerOps);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetFragmentShadingRateKHR(dumper.GetClonedCommandBuffer(), in_pFragmentSize, in_combinerOps)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkWaitForPresentKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain,
    uint64_t                                    presentId,
    uint64_t                                    timeout)
{
    if (options_.swapchain_option == util::SwapchainOption::kOffscreen)
    {
        GFXRECON_LOG_DEBUG("Skip vkWaitForPresentKHR for offscreen.");
        return;
    }
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);
    auto in_swapchain = GetObjectInfoTable().GetSwapchainKHRInfo(swapchain);//@@@DFK
    VkResult replay_result = OverrideWaitForPresentKHR(GetDeviceTable(in_device->handle)->WaitForPresentKHR, returnValue, in_device, in_swapchain, presentId, timeout);
    CheckResult("vkWaitForPresentKHR", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetBufferDeviceAddressKHR(
    const ApiCallInfo&                          call_info,
    VkDeviceAddress                             returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkBufferDeviceAddressInfo>/*@@@PLQ*/* pInfo)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);

    MapStructHandles(pInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    OverrideGetBufferDeviceAddress(GetDeviceTable(in_device->handle)->GetBufferDeviceAddressKHR, in_device, pInfo);//@@@HQA
}

void VulkanReplayConsumer::Process_vkGetBufferOpaqueCaptureAddressKHR(
    const ApiCallInfo&                          call_info,
    uint64_t                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkBufferDeviceAddressInfo>/*@@@PLQ*/* pInfo)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkBufferDeviceAddressInfo* in_pInfo = pInfo->GetPointer();
    MapStructHandles(pInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    GetDeviceTable(in_device)->GetBufferOpaqueCaptureAddressKHR(in_device, in_pInfo);//@@@HQA
}

void VulkanReplayConsumer::Process_vkGetDeviceMemoryOpaqueCaptureAddressKHR(
    const ApiCallInfo&                          call_info,
    uint64_t                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDeviceMemoryOpaqueCaptureAddressInfo>/*@@@PLQ*/* pInfo)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkDeviceMemoryOpaqueCaptureAddressInfo* in_pInfo = pInfo->GetPointer();
    MapStructHandles(pInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    GetDeviceTable(in_device)->GetDeviceMemoryOpaqueCaptureAddressKHR(in_device, in_pInfo);//@@@HQA
}

void VulkanReplayConsumer::Process_vkCreateDeferredOperationKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkDeferredOperationKHR>* pDeferredOperation)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    if (!pDeferredOperation->IsNull()) { pDeferredOperation->SetHandleLength(1); }
    VkDeferredOperationKHR* out_pDeferredOperation = pDeferredOperation->GetHandlePointer();//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->CreateDeferredOperationKHR(in_device, in_pAllocator, out_pDeferredOperation);
    CheckResult("vkCreateDeferredOperationKHR", returnValue, replay_result, call_info);

    AddHandle<DeferredOperationKHRInfo>(device, pDeferredOperation->GetPointer(), out_pDeferredOperation, &VulkanObjectInfoTable::AddDeferredOperationKHRInfo);
}

void VulkanReplayConsumer::Process_vkDestroyDeferredOperationKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            operation,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkDeferredOperationKHR in_operation = MapHandle<DeferredOperationKHRInfo>(operation, &VulkanObjectInfoTable::GetDeferredOperationKHRInfo);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);//@@@DFK
    GetDeviceTable(in_device)->DestroyDeferredOperationKHR(in_device, in_operation, in_pAllocator);//@@@HQA
    RemoveHandle(operation, &VulkanObjectInfoTable::RemoveDeferredOperationKHRInfo);
}

void VulkanReplayConsumer::Process_vkGetDeferredOperationMaxConcurrencyKHR(
    const ApiCallInfo&                          call_info,
    uint32_t                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            operation)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkDeferredOperationKHR in_operation = MapHandle<DeferredOperationKHRInfo>(operation, &VulkanObjectInfoTable::GetDeferredOperationKHRInfo);//@@@DFK
    GetDeviceTable(in_device)->GetDeferredOperationMaxConcurrencyKHR(in_device, in_operation);//@@@HQA
}

void VulkanReplayConsumer::Process_vkGetDeferredOperationResultKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            operation)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkDeferredOperationKHR in_operation = MapHandle<DeferredOperationKHRInfo>(operation, &VulkanObjectInfoTable::GetDeferredOperationKHRInfo);//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->GetDeferredOperationResultKHR(in_device, in_operation);
    CheckResult("vkGetDeferredOperationResultKHR", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkDeferredOperationJoinKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            operation)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);
    auto in_operation = GetObjectInfoTable().GetDeferredOperationKHRInfo(operation);//@@@DFK
    VkResult replay_result = OverrideDeferredOperationJoinKHR(GetDeviceTable(in_device->handle)->DeferredOperationJoinKHR, returnValue, in_device, in_operation);
    CheckResult("vkDeferredOperationJoinKHR", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetPipelineExecutablePropertiesKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkPipelineInfoKHR>/*@@@PLQ*/* pPipelineInfo,
    PointerDecoder<uint32_t>*                   pExecutableCount,
    StructPointerDecoder<Decoded_VkPipelineExecutablePropertiesKHR>/*@@@PLQ*/* pProperties)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkPipelineInfoKHR* in_pPipelineInfo = pPipelineInfo->GetPointer();
    MapStructHandles(pPipelineInfo->GetMetaStructPointer(), GetObjectInfoTable());
    uint32_t* out_pExecutableCount = pExecutableCount->IsNull() ? nullptr : pExecutableCount->AllocateOutputData(1, GetOutputArrayCount<uint32_t, DeviceInfo>("vkGetPipelineExecutablePropertiesKHR", returnValue, device, kDeviceArrayGetPipelineExecutablePropertiesKHR, pExecutableCount, pProperties, &VulkanObjectInfoTable::GetDeviceInfo));
    VkPipelineExecutablePropertiesKHR* out_pProperties = pProperties->IsNull() ? nullptr : pProperties->AllocateOutputData(*out_pExecutableCount, VkPipelineExecutablePropertiesKHR{ VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_PROPERTIES_KHR, nullptr });//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->GetPipelineExecutablePropertiesKHR(in_device, in_pPipelineInfo, out_pExecutableCount, out_pProperties);
    CheckResult("vkGetPipelineExecutablePropertiesKHR", returnValue, replay_result, call_info);

    if (pProperties->IsNull()) { SetOutputArrayCount<DeviceInfo>(device, kDeviceArrayGetPipelineExecutablePropertiesKHR, *out_pExecutableCount, &VulkanObjectInfoTable::GetDeviceInfo); }
}

void VulkanReplayConsumer::Process_vkGetPipelineExecutableStatisticsKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkPipelineExecutableInfoKHR>/*@@@PLQ*/* pExecutableInfo,
    PointerDecoder<uint32_t>*                   pStatisticCount,
    StructPointerDecoder<Decoded_VkPipelineExecutableStatisticKHR>/*@@@PLQ*/* pStatistics)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkPipelineExecutableInfoKHR* in_pExecutableInfo = pExecutableInfo->GetPointer();
    MapStructHandles(pExecutableInfo->GetMetaStructPointer(), GetObjectInfoTable());
    uint32_t* out_pStatisticCount = pStatisticCount->IsNull() ? nullptr : pStatisticCount->AllocateOutputData(1, GetOutputArrayCount<uint32_t, DeviceInfo>("vkGetPipelineExecutableStatisticsKHR", returnValue, device, kDeviceArrayGetPipelineExecutableStatisticsKHR, pStatisticCount, pStatistics, &VulkanObjectInfoTable::GetDeviceInfo));
    VkPipelineExecutableStatisticKHR* out_pStatistics = pStatistics->IsNull() ? nullptr : pStatistics->AllocateOutputData(*out_pStatisticCount, VkPipelineExecutableStatisticKHR{ VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_STATISTIC_KHR, nullptr });//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->GetPipelineExecutableStatisticsKHR(in_device, in_pExecutableInfo, out_pStatisticCount, out_pStatistics);
    CheckResult("vkGetPipelineExecutableStatisticsKHR", returnValue, replay_result, call_info);

    if (pStatistics->IsNull()) { SetOutputArrayCount<DeviceInfo>(device, kDeviceArrayGetPipelineExecutableStatisticsKHR, *out_pStatisticCount, &VulkanObjectInfoTable::GetDeviceInfo); }
}

void VulkanReplayConsumer::Process_vkGetPipelineExecutableInternalRepresentationsKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkPipelineExecutableInfoKHR>/*@@@PLQ*/* pExecutableInfo,
    PointerDecoder<uint32_t>*                   pInternalRepresentationCount,
    StructPointerDecoder<Decoded_VkPipelineExecutableInternalRepresentationKHR>/*@@@PLQ*/* pInternalRepresentations)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkPipelineExecutableInfoKHR* in_pExecutableInfo = pExecutableInfo->GetPointer();
    MapStructHandles(pExecutableInfo->GetMetaStructPointer(), GetObjectInfoTable());
    uint32_t* out_pInternalRepresentationCount = pInternalRepresentationCount->IsNull() ? nullptr : pInternalRepresentationCount->AllocateOutputData(1, GetOutputArrayCount<uint32_t, DeviceInfo>("vkGetPipelineExecutableInternalRepresentationsKHR", returnValue, device, kDeviceArrayGetPipelineExecutableInternalRepresentationsKHR, pInternalRepresentationCount, pInternalRepresentations, &VulkanObjectInfoTable::GetDeviceInfo));
    VkPipelineExecutableInternalRepresentationKHR* out_pInternalRepresentations = pInternalRepresentations->IsNull() ? nullptr : pInternalRepresentations->AllocateOutputData(*out_pInternalRepresentationCount, VkPipelineExecutableInternalRepresentationKHR{ VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INTERNAL_REPRESENTATION_KHR, nullptr });//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->GetPipelineExecutableInternalRepresentationsKHR(in_device, in_pExecutableInfo, out_pInternalRepresentationCount, out_pInternalRepresentations);
    CheckResult("vkGetPipelineExecutableInternalRepresentationsKHR", returnValue, replay_result, call_info);

    if (pInternalRepresentations->IsNull()) { SetOutputArrayCount<DeviceInfo>(device, kDeviceArrayGetPipelineExecutableInternalRepresentationsKHR, *out_pInternalRepresentationCount, &VulkanObjectInfoTable::GetDeviceInfo); }
}

void VulkanReplayConsumer::Process_vkMapMemory2KHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkMemoryMapInfoKHR>/*@@@PLQ*/* pMemoryMapInfo,
    PointerDecoder<uint64_t, void*>*            ppData)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkMemoryMapInfoKHR* in_pMemoryMapInfo = pMemoryMapInfo->GetPointer();
    MapStructHandles(pMemoryMapInfo->GetMetaStructPointer(), GetObjectInfoTable());
    void** out_ppData = ppData->IsNull() ? nullptr : ppData->AllocateOutputData(1);//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->MapMemory2KHR(in_device, in_pMemoryMapInfo, out_ppData);
    CheckResult("vkMapMemory2KHR", returnValue, replay_result, call_info);

    PostProcessExternalObject(replay_result, (*ppData->GetPointer()), *ppData->GetOutputPointer(), format::ApiCallId::ApiCall_vkMapMemory2KHR, "vkMapMemory2KHR");
}

void VulkanReplayConsumer::Process_vkUnmapMemory2KHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkMemoryUnmapInfoKHR>/*@@@PLQ*/* pMemoryUnmapInfo)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkMemoryUnmapInfoKHR* in_pMemoryUnmapInfo = pMemoryUnmapInfo->GetPointer();
    MapStructHandles(pMemoryUnmapInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->UnmapMemory2KHR(in_device, in_pMemoryUnmapInfo);
    CheckResult("vkUnmapMemory2KHR", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR>/*@@@PLQ*/* pQualityLevelInfo,
    StructPointerDecoder<Decoded_VkVideoEncodeQualityLevelPropertiesKHR>/*@@@PLQ*/* pQualityLevelProperties)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    const VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR* in_pQualityLevelInfo = pQualityLevelInfo->GetPointer();
    VkVideoEncodeQualityLevelPropertiesKHR* out_pQualityLevelProperties = pQualityLevelProperties->IsNull() ? nullptr : pQualityLevelProperties->AllocateOutputData(1, { VK_STRUCTURE_TYPE_VIDEO_ENCODE_QUALITY_LEVEL_PROPERTIES_KHR, nullptr });
    InitializeOutputStructPNext(pQualityLevelProperties);//@@@DFK
    VkResult replay_result = GetInstanceTable(in_physicalDevice)->GetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR(in_physicalDevice, in_pQualityLevelInfo, out_pQualityLevelProperties);
    CheckResult("vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetEncodedVideoSessionParametersKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkVideoEncodeSessionParametersGetInfoKHR>/*@@@PLQ*/* pVideoSessionParametersInfo,
    StructPointerDecoder<Decoded_VkVideoEncodeSessionParametersFeedbackInfoKHR>/*@@@PLQ*/* pFeedbackInfo,
    PointerDecoder<size_t>*                     pDataSize,
    PointerDecoder<uint8_t>*                    pData)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkVideoEncodeSessionParametersGetInfoKHR* in_pVideoSessionParametersInfo = pVideoSessionParametersInfo->GetPointer();
    MapStructHandles(pVideoSessionParametersInfo->GetMetaStructPointer(), GetObjectInfoTable());
    VkVideoEncodeSessionParametersFeedbackInfoKHR* out_pFeedbackInfo = pFeedbackInfo->IsNull() ? nullptr : pFeedbackInfo->AllocateOutputData(1, { VK_STRUCTURE_TYPE_VIDEO_ENCODE_SESSION_PARAMETERS_FEEDBACK_INFO_KHR, nullptr });
    InitializeOutputStructPNext(pFeedbackInfo);
    size_t* out_pDataSize = pDataSize->IsNull() ? nullptr : pDataSize->AllocateOutputData(1, GetOutputArrayCount<size_t, DeviceInfo>("vkGetEncodedVideoSessionParametersKHR", returnValue, device, kDeviceArrayGetEncodedVideoSessionParametersKHR, pDataSize, pData, &VulkanObjectInfoTable::GetDeviceInfo));
    void* out_pData = pData->IsNull() ? nullptr : pData->AllocateOutputData(*out_pDataSize);//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->GetEncodedVideoSessionParametersKHR(in_device, in_pVideoSessionParametersInfo, out_pFeedbackInfo, out_pDataSize, out_pData);
    CheckResult("vkGetEncodedVideoSessionParametersKHR", returnValue, replay_result, call_info);

    if (pData->IsNull()) { SetOutputArrayCount<DeviceInfo>(device, kDeviceArrayGetEncodedVideoSessionParametersKHR, *out_pDataSize, &VulkanObjectInfoTable::GetDeviceInfo); }
}

void VulkanReplayConsumer::Process_vkCmdEncodeVideoKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkVideoEncodeInfoKHR>/*@@@PLQ*/* pEncodeInfo)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkVideoEncodeInfoKHR* in_pEncodeInfo = pEncodeInfo->GetPointer();
    MapStructHandles(pEncodeInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdEncodeVideoKHR(in_commandBuffer, in_pEncodeInfo);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdEncodeVideoKHR(dumper.GetClonedCommandBuffer(), in_pEncodeInfo)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetEvent2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            event,
    StructPointerDecoder<Decoded_VkDependencyInfo>/*@@@PLQ*/* pDependencyInfo)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkEvent in_event = MapHandle<EventInfo>(event, &VulkanObjectInfoTable::GetEventInfo);
    const VkDependencyInfo* in_pDependencyInfo = pDependencyInfo->GetPointer();
    MapStructHandles(pDependencyInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetEvent2KHR(in_commandBuffer, in_event, in_pDependencyInfo);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetEvent2KHR(dumper.GetClonedCommandBuffer(), in_event, in_pDependencyInfo)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdResetEvent2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            event,
    VkPipelineStageFlags2                       stageMask)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkEvent in_event = MapHandle<EventInfo>(event, &VulkanObjectInfoTable::GetEventInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdResetEvent2KHR(in_commandBuffer, in_event, stageMask);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdResetEvent2KHR(dumper.GetClonedCommandBuffer(), in_event, stageMask)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdWaitEvents2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    eventCount,
    HandlePointerDecoder<VkEvent>*              pEvents,
    StructPointerDecoder<Decoded_VkDependencyInfo>/*@@@PLQ*/* pDependencyInfos)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkEvent* in_pEvents = MapHandles<EventInfo>(pEvents, eventCount, &VulkanObjectInfoTable::GetEventInfo);
    const VkDependencyInfo* in_pDependencyInfos = pDependencyInfos->GetPointer();
    MapStructArrayHandles(pDependencyInfos->GetMetaStructPointer(), pDependencyInfos->GetLength(), GetObjectInfoTable());//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdWaitEvents2KHR(in_commandBuffer, eventCount, in_pEvents, in_pDependencyInfos);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdWaitEvents2KHR(dumper.GetClonedCommandBuffer(), eventCount, in_pEvents, in_pDependencyInfos)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdPipelineBarrier2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkDependencyInfo>/*@@@PLQ*/* pDependencyInfo)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkDependencyInfo* in_pDependencyInfo = pDependencyInfo->GetPointer();
    MapStructHandles(pDependencyInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdPipelineBarrier2KHR(in_commandBuffer, in_pDependencyInfo);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdPipelineBarrier2KHR(dumper.GetClonedCommandBuffer(), in_pDependencyInfo)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdWriteTimestamp2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkPipelineStageFlags2                       stage,
    format::HandleId                            queryPool,
    uint32_t                                    query)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkQueryPool in_queryPool = MapHandle<QueryPoolInfo>(queryPool, &VulkanObjectInfoTable::GetQueryPoolInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdWriteTimestamp2KHR(in_commandBuffer, stage, in_queryPool, query);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdWriteTimestamp2KHR(dumper.GetClonedCommandBuffer(), stage, in_queryPool, query)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkQueueSubmit2KHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            queue,
    uint32_t                                    submitCount,
    StructPointerDecoder<Decoded_VkSubmitInfo2>/*@@@PLQ*/* pSubmits,
    format::HandleId                            fence)
{
    auto in_queue = GetObjectInfoTable().GetQueueInfo(queue);

    MapStructArrayHandles(pSubmits->GetMetaStructPointer(), pSubmits->GetLength(), GetObjectInfoTable());
    auto in_fence = GetObjectInfoTable().GetFenceInfo(fence);//@@@DFK
    VkResult replay_result = OverrideQueueSubmit2(GetDeviceTable(in_queue->handle)->QueueSubmit2KHR, returnValue, in_queue, submitCount, pSubmits, in_fence);
    CheckResult("vkQueueSubmit2KHR", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkCmdWriteBufferMarker2AMD(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkPipelineStageFlags2                       stage,
    format::HandleId                            dstBuffer,
    VkDeviceSize                                dstOffset,
    uint32_t                                    marker)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkBuffer in_dstBuffer = MapHandle<BufferInfo>(dstBuffer, &VulkanObjectInfoTable::GetBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdWriteBufferMarker2AMD(in_commandBuffer, stage, in_dstBuffer, dstOffset, marker);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdWriteBufferMarker2AMD(dumper.GetClonedCommandBuffer(), stage, in_dstBuffer, dstOffset, marker)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkGetQueueCheckpointData2NV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            queue,
    PointerDecoder<uint32_t>*                   pCheckpointDataCount,
    StructPointerDecoder<Decoded_VkCheckpointData2NV>/*@@@PLQ*/* pCheckpointData)
{
    VkQueue in_queue = MapHandle<QueueInfo>(queue, &VulkanObjectInfoTable::GetQueueInfo);
    uint32_t* out_pCheckpointDataCount = pCheckpointDataCount->IsNull() ? nullptr : pCheckpointDataCount->AllocateOutputData(1, GetOutputArrayCount<uint32_t, QueueInfo>("vkGetQueueCheckpointData2NV", VK_SUCCESS, queue, kQueueArrayGetQueueCheckpointData2NV, pCheckpointDataCount, pCheckpointData, &VulkanObjectInfoTable::GetQueueInfo));
    VkCheckpointData2NV* out_pCheckpointData = pCheckpointData->IsNull() ? nullptr : pCheckpointData->AllocateOutputData(*out_pCheckpointDataCount, VkCheckpointData2NV{ VK_STRUCTURE_TYPE_CHECKPOINT_DATA_2_NV, nullptr });//@@@DFK
    GetDeviceTable(in_queue)->GetQueueCheckpointData2NV(in_queue, out_pCheckpointDataCount, out_pCheckpointData);//@@@HQA

    if (pCheckpointData->IsNull()) { SetOutputArrayCount<QueueInfo>(queue, kQueueArrayGetQueueCheckpointData2NV, *out_pCheckpointDataCount, &VulkanObjectInfoTable::GetQueueInfo); }
}

void VulkanReplayConsumer::Process_vkCmdCopyBuffer2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkCopyBufferInfo2>/*@@@PLQ*/* pCopyBufferInfo)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkCopyBufferInfo2* in_pCopyBufferInfo = pCopyBufferInfo->GetPointer();
    MapStructHandles(pCopyBufferInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdCopyBuffer2KHR(in_commandBuffer, in_pCopyBufferInfo);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdCopyBuffer2KHR(dumper.GetClonedCommandBuffer(), in_pCopyBufferInfo)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdCopyImage2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkCopyImageInfo2>/*@@@PLQ*/* pCopyImageInfo)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkCopyImageInfo2* in_pCopyImageInfo = pCopyImageInfo->GetPointer();
    MapStructHandles(pCopyImageInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdCopyImage2KHR(in_commandBuffer, in_pCopyImageInfo);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdCopyImage2KHR(dumper.GetClonedCommandBuffer(), in_pCopyImageInfo)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdCopyBufferToImage2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkCopyBufferToImageInfo2>/*@@@PLQ*/* pCopyBufferToImageInfo)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkCopyBufferToImageInfo2* in_pCopyBufferToImageInfo = pCopyBufferToImageInfo->GetPointer();
    MapStructHandles(pCopyBufferToImageInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdCopyBufferToImage2KHR(in_commandBuffer, in_pCopyBufferToImageInfo);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdCopyBufferToImage2KHR(dumper.GetClonedCommandBuffer(), in_pCopyBufferToImageInfo)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdCopyImageToBuffer2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkCopyImageToBufferInfo2>/*@@@PLQ*/* pCopyImageToBufferInfo)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkCopyImageToBufferInfo2* in_pCopyImageToBufferInfo = pCopyImageToBufferInfo->GetPointer();
    MapStructHandles(pCopyImageToBufferInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdCopyImageToBuffer2KHR(in_commandBuffer, in_pCopyImageToBufferInfo);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdCopyImageToBuffer2KHR(dumper.GetClonedCommandBuffer(), in_pCopyImageToBufferInfo)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdBlitImage2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkBlitImageInfo2>/*@@@PLQ*/* pBlitImageInfo)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkBlitImageInfo2* in_pBlitImageInfo = pBlitImageInfo->GetPointer();
    MapStructHandles(pBlitImageInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdBlitImage2KHR(in_commandBuffer, in_pBlitImageInfo);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdBlitImage2KHR(dumper.GetClonedCommandBuffer(), in_pBlitImageInfo)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdResolveImage2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkResolveImageInfo2>/*@@@PLQ*/* pResolveImageInfo)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkResolveImageInfo2* in_pResolveImageInfo = pResolveImageInfo->GetPointer();
    MapStructHandles(pResolveImageInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdResolveImage2KHR(in_commandBuffer, in_pResolveImageInfo);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdResolveImage2KHR(dumper.GetClonedCommandBuffer(), in_pResolveImageInfo)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdTraceRaysIndirect2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkDeviceAddress                             indirectDeviceAddress)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdTraceRaysIndirect2KHR(in_commandBuffer, indirectDeviceAddress);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdTraceRaysIndirect2KHR(dumper.GetClonedCommandBuffer(), indirectDeviceAddress)/*@@@ABC*/;//@@@HERE
        if (dumper.DumpingTraceRaysIndex(call_info.index))
        {
            dumper.FinalizeCommandBuffer(*GetDeviceTable(in_commandBuffer));
        }
    }
}

void VulkanReplayConsumer::Process_vkGetDeviceBufferMemoryRequirementsKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDeviceBufferMemoryRequirements>/*@@@PLQ*/* pInfo,
    StructPointerDecoder<Decoded_VkMemoryRequirements2>/*@@@PLQ*/* pMemoryRequirements)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkDeviceBufferMemoryRequirements* in_pInfo = pInfo->GetPointer();
    VkMemoryRequirements2* out_pMemoryRequirements = pMemoryRequirements->IsNull() ? nullptr : pMemoryRequirements->AllocateOutputData(1, { VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2, nullptr });
    InitializeOutputStructPNext(pMemoryRequirements);//@@@DFK
    GetDeviceTable(in_device)->GetDeviceBufferMemoryRequirementsKHR(in_device, in_pInfo, out_pMemoryRequirements);//@@@HQA
}

void VulkanReplayConsumer::Process_vkGetDeviceImageMemoryRequirementsKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDeviceImageMemoryRequirements>/*@@@PLQ*/* pInfo,
    StructPointerDecoder<Decoded_VkMemoryRequirements2>/*@@@PLQ*/* pMemoryRequirements)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkDeviceImageMemoryRequirements* in_pInfo = pInfo->GetPointer();
    MapStructHandles(pInfo->GetMetaStructPointer(), GetObjectInfoTable());
    VkMemoryRequirements2* out_pMemoryRequirements = pMemoryRequirements->IsNull() ? nullptr : pMemoryRequirements->AllocateOutputData(1, { VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2, nullptr });
    InitializeOutputStructPNext(pMemoryRequirements);//@@@DFK
    GetDeviceTable(in_device)->GetDeviceImageMemoryRequirementsKHR(in_device, in_pInfo, out_pMemoryRequirements);//@@@HQA
}

void VulkanReplayConsumer::Process_vkGetDeviceImageSparseMemoryRequirementsKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDeviceImageMemoryRequirements>/*@@@PLQ*/* pInfo,
    PointerDecoder<uint32_t>*                   pSparseMemoryRequirementCount,
    StructPointerDecoder<Decoded_VkSparseImageMemoryRequirements2>/*@@@PLQ*/* pSparseMemoryRequirements)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkDeviceImageMemoryRequirements* in_pInfo = pInfo->GetPointer();
    MapStructHandles(pInfo->GetMetaStructPointer(), GetObjectInfoTable());
    uint32_t* out_pSparseMemoryRequirementCount = pSparseMemoryRequirementCount->IsNull() ? nullptr : pSparseMemoryRequirementCount->AllocateOutputData(1, GetOutputArrayCount<uint32_t, DeviceInfo>("vkGetDeviceImageSparseMemoryRequirementsKHR", VK_SUCCESS, device, kDeviceArrayGetDeviceImageSparseMemoryRequirementsKHR, pSparseMemoryRequirementCount, pSparseMemoryRequirements, &VulkanObjectInfoTable::GetDeviceInfo));
    VkSparseImageMemoryRequirements2* out_pSparseMemoryRequirements = pSparseMemoryRequirements->IsNull() ? nullptr : pSparseMemoryRequirements->AllocateOutputData(*out_pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2{ VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2, nullptr });//@@@DFK
    GetDeviceTable(in_device)->GetDeviceImageSparseMemoryRequirementsKHR(in_device, in_pInfo, out_pSparseMemoryRequirementCount, out_pSparseMemoryRequirements);//@@@HQA

    if (pSparseMemoryRequirements->IsNull()) { SetOutputArrayCount<DeviceInfo>(device, kDeviceArrayGetDeviceImageSparseMemoryRequirementsKHR, *out_pSparseMemoryRequirementCount, &VulkanObjectInfoTable::GetDeviceInfo); }
}

void VulkanReplayConsumer::Process_vkCmdBindIndexBuffer2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    VkDeviceSize                                size,
    VkIndexType                                 indexType)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkBuffer in_buffer = MapHandle<BufferInfo>(buffer, &VulkanObjectInfoTable::GetBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdBindIndexBuffer2KHR(in_commandBuffer, in_buffer, offset, size, indexType);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdBindIndexBuffer2KHR(dumper.GetClonedCommandBuffer(), in_buffer, offset, size, indexType)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkGetRenderingAreaGranularityKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkRenderingAreaInfoKHR>/*@@@PLQ*/* pRenderingAreaInfo,
    StructPointerDecoder<Decoded_VkExtent2D>/*@@@PLQ*/* pGranularity)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkRenderingAreaInfoKHR* in_pRenderingAreaInfo = pRenderingAreaInfo->GetPointer();
    VkExtent2D* out_pGranularity = pGranularity->IsNull() ? nullptr : pGranularity->AllocateOutputData(1);//@@@DFK
    GetDeviceTable(in_device)->GetRenderingAreaGranularityKHR(in_device, in_pRenderingAreaInfo, out_pGranularity);//@@@HQA
}

void VulkanReplayConsumer::Process_vkGetDeviceImageSubresourceLayoutKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDeviceImageSubresourceInfoKHR>/*@@@PLQ*/* pInfo,
    StructPointerDecoder<Decoded_VkSubresourceLayout2KHR>/*@@@PLQ*/* pLayout)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkDeviceImageSubresourceInfoKHR* in_pInfo = pInfo->GetPointer();
    MapStructHandles(pInfo->GetMetaStructPointer(), GetObjectInfoTable());
    VkSubresourceLayout2KHR* out_pLayout = pLayout->IsNull() ? nullptr : pLayout->AllocateOutputData(1, { VK_STRUCTURE_TYPE_SUBRESOURCE_LAYOUT_2_KHR, nullptr });
    InitializeOutputStructPNext(pLayout);//@@@DFK
    GetDeviceTable(in_device)->GetDeviceImageSubresourceLayoutKHR(in_device, in_pInfo, out_pLayout);//@@@HQA
}

void VulkanReplayConsumer::Process_vkGetImageSubresourceLayout2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            image,
    StructPointerDecoder<Decoded_VkImageSubresource2KHR>/*@@@PLQ*/* pSubresource,
    StructPointerDecoder<Decoded_VkSubresourceLayout2KHR>/*@@@PLQ*/* pLayout)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkImage in_image = MapHandle<ImageInfo>(image, &VulkanObjectInfoTable::GetImageInfo);
    const VkImageSubresource2KHR* in_pSubresource = pSubresource->GetPointer();
    VkSubresourceLayout2KHR* out_pLayout = pLayout->IsNull() ? nullptr : pLayout->AllocateOutputData(1, { VK_STRUCTURE_TYPE_SUBRESOURCE_LAYOUT_2_KHR, nullptr });
    InitializeOutputStructPNext(pLayout);//@@@DFK
    GetDeviceTable(in_device)->GetImageSubresourceLayout2KHR(in_device, in_image, in_pSubresource, out_pLayout);//@@@HQA
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    PointerDecoder<uint32_t>*                   pPropertyCount,
    StructPointerDecoder<Decoded_VkCooperativeMatrixPropertiesKHR>/*@@@PLQ*/* pProperties)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    uint32_t* out_pPropertyCount = pPropertyCount->IsNull() ? nullptr : pPropertyCount->AllocateOutputData(1, GetOutputArrayCount<uint32_t, PhysicalDeviceInfo>("vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR", returnValue, physicalDevice, kPhysicalDeviceArrayGetPhysicalDeviceCooperativeMatrixPropertiesKHR, pPropertyCount, pProperties, &VulkanObjectInfoTable::GetPhysicalDeviceInfo));
    VkCooperativeMatrixPropertiesKHR* out_pProperties = pProperties->IsNull() ? nullptr : pProperties->AllocateOutputData(*out_pPropertyCount, VkCooperativeMatrixPropertiesKHR{ VK_STRUCTURE_TYPE_COOPERATIVE_MATRIX_PROPERTIES_KHR, nullptr });//@@@DFK
    VkResult replay_result = GetInstanceTable(in_physicalDevice)->GetPhysicalDeviceCooperativeMatrixPropertiesKHR(in_physicalDevice, out_pPropertyCount, out_pProperties);
    CheckResult("vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR", returnValue, replay_result, call_info);

    if (pProperties->IsNull()) { SetOutputArrayCount<PhysicalDeviceInfo>(physicalDevice, kPhysicalDeviceArrayGetPhysicalDeviceCooperativeMatrixPropertiesKHR, *out_pPropertyCount, &VulkanObjectInfoTable::GetPhysicalDeviceInfo); }
}

void VulkanReplayConsumer::Process_vkFrameBoundaryANDROID(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            semaphore,
    format::HandleId                            image)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkSemaphore in_semaphore = MapHandle<SemaphoreInfo>(semaphore, &VulkanObjectInfoTable::GetSemaphoreInfo);
    VkImage in_image = MapHandle<ImageInfo>(image, &VulkanObjectInfoTable::GetImageInfo);//@@@DFK
    GetDeviceTable(in_device)->FrameBoundaryANDROID(in_device, in_semaphore, in_image);//@@@HQA
}

void VulkanReplayConsumer::Process_vkCreateDebugReportCallbackEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkDebugReportCallbackCreateInfoEXT>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkDebugReportCallbackEXT>* pCallback)
{
    auto in_instance = GetObjectInfoTable().GetInstanceInfo(instance);
    if (!pCallback->IsNull()) { pCallback->SetHandleLength(1); }
    DebugReportCallbackEXTInfo handle_info;
    pCallback->SetConsumerData(0, &handle_info);//@@@DFK
    VkResult replay_result = OverrideCreateDebugReportCallbackEXT(GetInstanceTable(in_instance->handle)->CreateDebugReportCallbackEXT, returnValue, in_instance, pCreateInfo, pAllocator, pCallback);
    CheckResult("vkCreateDebugReportCallbackEXT", returnValue, replay_result, call_info);

    AddHandle<DebugReportCallbackEXTInfo>(instance, pCallback->GetPointer(), pCallback->GetHandlePointer(), std::move(handle_info), &VulkanObjectInfoTable::AddDebugReportCallbackEXTInfo);
}

void VulkanReplayConsumer::Process_vkDestroyDebugReportCallbackEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            instance,
    format::HandleId                            callback,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator)
{
    VkInstance in_instance = MapHandle<InstanceInfo>(instance, &VulkanObjectInfoTable::GetInstanceInfo);
    VkDebugReportCallbackEXT in_callback = MapHandle<DebugReportCallbackEXTInfo>(callback, &VulkanObjectInfoTable::GetDebugReportCallbackEXTInfo);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);//@@@DFK
    GetInstanceTable(in_instance)->DestroyDebugReportCallbackEXT(in_instance, in_callback, in_pAllocator);//@@@HQA
    RemoveHandle(callback, &VulkanObjectInfoTable::RemoveDebugReportCallbackEXTInfo);
}

void VulkanReplayConsumer::Process_vkDebugReportMessageEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            instance,
    VkDebugReportFlagsEXT                       flags,
    VkDebugReportObjectTypeEXT                  objectType,
    uint64_t                                    object,
    size_t                                      location,
    int32_t                                     messageCode,
    StringDecoder*                              pLayerPrefix,
    StringDecoder*                              pMessage)
{
    VkInstance in_instance = MapHandle<InstanceInfo>(instance, &VulkanObjectInfoTable::GetInstanceInfo);
    uint64_t in_object = MapHandle(object, objectType);
    const char* in_pLayerPrefix = pLayerPrefix->GetPointer();
    const char* in_pMessage = pMessage->GetPointer();//@@@DFK
    GetInstanceTable(in_instance)->DebugReportMessageEXT(in_instance, flags, objectType, in_object, location, messageCode, in_pLayerPrefix, in_pMessage);//@@@HQA
}

void VulkanReplayConsumer::Process_vkDebugMarkerSetObjectTagEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDebugMarkerObjectTagInfoEXT>/*@@@PLQ*/* pTagInfo)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkDebugMarkerObjectTagInfoEXT* in_pTagInfo = pTagInfo->GetPointer();
    MapStructHandles(pTagInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->DebugMarkerSetObjectTagEXT(in_device, in_pTagInfo);
    CheckResult("vkDebugMarkerSetObjectTagEXT", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkDebugMarkerSetObjectNameEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDebugMarkerObjectNameInfoEXT>/*@@@PLQ*/* pNameInfo)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkDebugMarkerObjectNameInfoEXT* in_pNameInfo = pNameInfo->GetPointer();
    MapStructHandles(pNameInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->DebugMarkerSetObjectNameEXT(in_device, in_pNameInfo);
    CheckResult("vkDebugMarkerSetObjectNameEXT", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkCmdDebugMarkerBeginEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkDebugMarkerMarkerInfoEXT>/*@@@PLQ*/* pMarkerInfo)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkDebugMarkerMarkerInfoEXT* in_pMarkerInfo = pMarkerInfo->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdDebugMarkerBeginEXT(in_commandBuffer, in_pMarkerInfo);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdDebugMarkerBeginEXT(dumper.GetClonedCommandBuffer(), in_pMarkerInfo)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdDebugMarkerEndEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdDebugMarkerEndEXT(in_commandBuffer);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdDebugMarkerEndEXT(dumper.GetClonedCommandBuffer())/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdDebugMarkerInsertEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkDebugMarkerMarkerInfoEXT>/*@@@PLQ*/* pMarkerInfo)
{
    auto in_commandBuffer = GetObjectInfoTable().GetCommandBufferInfo(commandBuffer);//@@@DFK
    OverrideCmdDebugMarkerInsertEXT(GetDeviceTable(in_commandBuffer->handle)->CmdDebugMarkerInsertEXT, in_commandBuffer, pMarkerInfo);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdDebugMarkerInsertEXT(dumper.GetClonedCommandBuffer(), pMarkerInfo->GetPointer())/*@@@xABC*/;//@@@xHERE
    }
}

void VulkanReplayConsumer::Process_vkCmdBindTransformFeedbackBuffersEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    firstBinding,
    uint32_t                                    bindingCount,
    HandlePointerDecoder<VkBuffer>*             pBuffers,
    PointerDecoder<VkDeviceSize>*               pOffsets,
    PointerDecoder<VkDeviceSize>*               pSizes)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkBuffer* in_pBuffers = MapHandles<BufferInfo>(pBuffers, bindingCount, &VulkanObjectInfoTable::GetBufferInfo);
    const VkDeviceSize* in_pOffsets = pOffsets->GetPointer();
    const VkDeviceSize* in_pSizes = pSizes->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdBindTransformFeedbackBuffersEXT(in_commandBuffer, firstBinding, bindingCount, in_pBuffers, in_pOffsets, in_pSizes);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdBindTransformFeedbackBuffersEXT(dumper.GetClonedCommandBuffer(), firstBinding, bindingCount, in_pBuffers, in_pOffsets, in_pSizes)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdBeginTransformFeedbackEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    firstCounterBuffer,
    uint32_t                                    counterBufferCount,
    HandlePointerDecoder<VkBuffer>*             pCounterBuffers,
    PointerDecoder<VkDeviceSize>*               pCounterBufferOffsets)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkBuffer* in_pCounterBuffers = MapHandles<BufferInfo>(pCounterBuffers, counterBufferCount, &VulkanObjectInfoTable::GetBufferInfo);
    const VkDeviceSize* in_pCounterBufferOffsets = pCounterBufferOffsets->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdBeginTransformFeedbackEXT(in_commandBuffer, firstCounterBuffer, counterBufferCount, in_pCounterBuffers, in_pCounterBufferOffsets);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdBeginTransformFeedbackEXT(dumper.GetClonedCommandBuffer(), firstCounterBuffer, counterBufferCount, in_pCounterBuffers, in_pCounterBufferOffsets)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdEndTransformFeedbackEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    firstCounterBuffer,
    uint32_t                                    counterBufferCount,
    HandlePointerDecoder<VkBuffer>*             pCounterBuffers,
    PointerDecoder<VkDeviceSize>*               pCounterBufferOffsets)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkBuffer* in_pCounterBuffers = MapHandles<BufferInfo>(pCounterBuffers, counterBufferCount, &VulkanObjectInfoTable::GetBufferInfo);
    const VkDeviceSize* in_pCounterBufferOffsets = pCounterBufferOffsets->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdEndTransformFeedbackEXT(in_commandBuffer, firstCounterBuffer, counterBufferCount, in_pCounterBuffers, in_pCounterBufferOffsets);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdEndTransformFeedbackEXT(dumper.GetClonedCommandBuffer(), firstCounterBuffer, counterBufferCount, in_pCounterBuffers, in_pCounterBufferOffsets)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdBeginQueryIndexedEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            queryPool,
    uint32_t                                    query,
    VkQueryControlFlags                         flags,
    uint32_t                                    index)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkQueryPool in_queryPool = MapHandle<QueryPoolInfo>(queryPool, &VulkanObjectInfoTable::GetQueryPoolInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdBeginQueryIndexedEXT(in_commandBuffer, in_queryPool, query, flags, index);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdBeginQueryIndexedEXT(dumper.GetClonedCommandBuffer(), in_queryPool, query, flags, index)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdEndQueryIndexedEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            queryPool,
    uint32_t                                    query,
    uint32_t                                    index)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkQueryPool in_queryPool = MapHandle<QueryPoolInfo>(queryPool, &VulkanObjectInfoTable::GetQueryPoolInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdEndQueryIndexedEXT(in_commandBuffer, in_queryPool, query, index);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdEndQueryIndexedEXT(dumper.GetClonedCommandBuffer(), in_queryPool, query, index)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdDrawIndirectByteCountEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    instanceCount,
    uint32_t                                    firstInstance,
    format::HandleId                            counterBuffer,
    VkDeviceSize                                counterBufferOffset,
    uint32_t                                    counterOffset,
    uint32_t                                    vertexStride)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkBuffer in_counterBuffer = MapHandle<BufferInfo>(counterBuffer, &VulkanObjectInfoTable::GetBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdDrawIndirectByteCountEXT(in_commandBuffer, instanceCount, firstInstance, in_counterBuffer, counterBufferOffset, counterOffset, vertexStride);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdDrawIndirectByteCountEXT(dumper.GetClonedCommandBuffer(), instanceCount, firstInstance, in_counterBuffer, counterBufferOffset, counterOffset, vertexStride)/*@@@ABC*/;//@@@HERE
        if (dumper.DumpingDrawCallIndex(call_info.index))
        {
            dumper.FinalizeCommandBuffer(*GetDeviceTable(in_commandBuffer));
        }
    }
}

void VulkanReplayConsumer::Process_vkGetImageViewHandleNVX(
    const ApiCallInfo&                          call_info,
    uint32_t                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkImageViewHandleInfoNVX>/*@@@PLQ*/* pInfo)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkImageViewHandleInfoNVX* in_pInfo = pInfo->GetPointer();
    MapStructHandles(pInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    GetDeviceTable(in_device)->GetImageViewHandleNVX(in_device, in_pInfo);//@@@HQA
}

void VulkanReplayConsumer::Process_vkGetImageViewAddressNVX(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            imageView,
    StructPointerDecoder<Decoded_VkImageViewAddressPropertiesNVX>/*@@@PLQ*/* pProperties)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkImageView in_imageView = MapHandle<ImageViewInfo>(imageView, &VulkanObjectInfoTable::GetImageViewInfo);
    VkImageViewAddressPropertiesNVX* out_pProperties = pProperties->IsNull() ? nullptr : pProperties->AllocateOutputData(1, { VK_STRUCTURE_TYPE_IMAGE_VIEW_ADDRESS_PROPERTIES_NVX, nullptr });
    InitializeOutputStructPNext(pProperties);//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->GetImageViewAddressNVX(in_device, in_imageView, out_pProperties);
    CheckResult("vkGetImageViewAddressNVX", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkCmdDrawIndirectCountAMD(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    format::HandleId                            countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkBuffer in_buffer = MapHandle<BufferInfo>(buffer, &VulkanObjectInfoTable::GetBufferInfo);
    VkBuffer in_countBuffer = MapHandle<BufferInfo>(countBuffer, &VulkanObjectInfoTable::GetBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdDrawIndirectCountAMD(in_commandBuffer, in_buffer, offset, in_countBuffer, countBufferOffset, maxDrawCount, stride);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdDrawIndirectCountAMD(dumper.GetClonedCommandBuffer(), in_buffer, offset, in_countBuffer, countBufferOffset, maxDrawCount, stride)/*@@@ABC*/;//@@@HERE
        if (dumper.DumpingDrawCallIndex(call_info.index))
        {
            dumper.FinalizeCommandBuffer(*GetDeviceTable(in_commandBuffer));
        }
    }
}

void VulkanReplayConsumer::Process_vkCmdDrawIndexedIndirectCountAMD(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    format::HandleId                            countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkBuffer in_buffer = MapHandle<BufferInfo>(buffer, &VulkanObjectInfoTable::GetBufferInfo);
    VkBuffer in_countBuffer = MapHandle<BufferInfo>(countBuffer, &VulkanObjectInfoTable::GetBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdDrawIndexedIndirectCountAMD(in_commandBuffer, in_buffer, offset, in_countBuffer, countBufferOffset, maxDrawCount, stride);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdDrawIndexedIndirectCountAMD(dumper.GetClonedCommandBuffer(), in_buffer, offset, in_countBuffer, countBufferOffset, maxDrawCount, stride)/*@@@ABC*/;//@@@HERE
        if (dumper.DumpingDrawCallIndex(call_info.index))
        {
            dumper.FinalizeCommandBuffer(*GetDeviceTable(in_commandBuffer));
        }
    }
}

void VulkanReplayConsumer::Process_vkGetShaderInfoAMD(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            pipeline,
    VkShaderStageFlagBits                       shaderStage,
    VkShaderInfoTypeAMD                         infoType,
    PointerDecoder<size_t>*                     pInfoSize,
    PointerDecoder<uint8_t>*                    pInfo)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkPipeline in_pipeline = MapHandle<PipelineInfo>(pipeline, &VulkanObjectInfoTable::GetPipelineInfo);
    size_t* out_pInfoSize = pInfoSize->IsNull() ? nullptr : pInfoSize->AllocateOutputData(1, GetOutputArrayCount<size_t, PipelineInfo>("vkGetShaderInfoAMD", returnValue, pipeline, kPipelineArrayGetShaderInfoAMD, pInfoSize, pInfo, &VulkanObjectInfoTable::GetPipelineInfo));
    void* out_pInfo = pInfo->IsNull() ? nullptr : pInfo->AllocateOutputData(*out_pInfoSize);//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->GetShaderInfoAMD(in_device, in_pipeline, shaderStage, infoType, out_pInfoSize, out_pInfo);
    CheckResult("vkGetShaderInfoAMD", returnValue, replay_result, call_info);

    if (pInfo->IsNull()) { SetOutputArrayCount<PipelineInfo>(pipeline, kPipelineArrayGetShaderInfoAMD, *out_pInfoSize, &VulkanObjectInfoTable::GetPipelineInfo); }
}

void VulkanReplayConsumer::Process_vkCreateStreamDescriptorSurfaceGGP(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkStreamDescriptorSurfaceCreateInfoGGP>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    VkInstance in_instance = MapHandle<InstanceInfo>(instance, &VulkanObjectInfoTable::GetInstanceInfo);
    const VkStreamDescriptorSurfaceCreateInfoGGP* in_pCreateInfo = pCreateInfo->GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    if (!pSurface->IsNull()) { pSurface->SetHandleLength(1); }
    VkSurfaceKHR* out_pSurface = pSurface->GetHandlePointer();//@@@DFK
    VkResult replay_result = GetInstanceTable(in_instance)->CreateStreamDescriptorSurfaceGGP(in_instance, in_pCreateInfo, in_pAllocator, out_pSurface);
    CheckResult("vkCreateStreamDescriptorSurfaceGGP", returnValue, replay_result, call_info);

    AddHandle<SurfaceKHRInfo>(instance, pSurface->GetPointer(), out_pSurface, &VulkanObjectInfoTable::AddSurfaceKHRInfo);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceExternalImageFormatPropertiesNV(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    VkFormat                                    format,
    VkImageType                                 type,
    VkImageTiling                               tiling,
    VkImageUsageFlags                           usage,
    VkImageCreateFlags                          flags,
    VkExternalMemoryHandleTypeFlagsNV           externalHandleType,
    StructPointerDecoder<Decoded_VkExternalImageFormatPropertiesNV>/*@@@PLQ*/* pExternalImageFormatProperties)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    VkExternalImageFormatPropertiesNV* out_pExternalImageFormatProperties = pExternalImageFormatProperties->IsNull() ? nullptr : pExternalImageFormatProperties->AllocateOutputData(1);//@@@DFK
    VkResult replay_result = GetInstanceTable(in_physicalDevice)->GetPhysicalDeviceExternalImageFormatPropertiesNV(in_physicalDevice, format, type, tiling, usage, flags, externalHandleType, out_pExternalImageFormatProperties);
    CheckResult("vkGetPhysicalDeviceExternalImageFormatPropertiesNV", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetMemoryWin32HandleNV(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            memory,
    VkExternalMemoryHandleTypeFlagsNV           handleType,
    PointerDecoder<uint64_t, void*>*            pHandle)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkDeviceMemory in_memory = MapHandle<DeviceMemoryInfo>(memory, &VulkanObjectInfoTable::GetDeviceMemoryInfo);
    HANDLE* out_pHandle = pHandle->IsNull() ? nullptr : reinterpret_cast<HANDLE*>(pHandle->AllocateOutputData(1));//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->GetMemoryWin32HandleNV(in_device, in_memory, handleType, out_pHandle);
    CheckResult("vkGetMemoryWin32HandleNV", returnValue, replay_result, call_info);

    PostProcessExternalObject(replay_result, (*pHandle->GetPointer()), static_cast<void*>(*out_pHandle), format::ApiCallId::ApiCall_vkGetMemoryWin32HandleNV, "vkGetMemoryWin32HandleNV");
}

void VulkanReplayConsumer::Process_vkCreateViSurfaceNN(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkViSurfaceCreateInfoNN>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    VkInstance in_instance = MapHandle<InstanceInfo>(instance, &VulkanObjectInfoTable::GetInstanceInfo);
    const VkViSurfaceCreateInfoNN* in_pCreateInfo = pCreateInfo->GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    if (!pSurface->IsNull()) { pSurface->SetHandleLength(1); }
    VkSurfaceKHR* out_pSurface = pSurface->GetHandlePointer();//@@@DFK
    VkResult replay_result = GetInstanceTable(in_instance)->CreateViSurfaceNN(in_instance, in_pCreateInfo, in_pAllocator, out_pSurface);
    CheckResult("vkCreateViSurfaceNN", returnValue, replay_result, call_info);

    AddHandle<SurfaceKHRInfo>(instance, pSurface->GetPointer(), out_pSurface, &VulkanObjectInfoTable::AddSurfaceKHRInfo);
}

void VulkanReplayConsumer::Process_vkCmdBeginConditionalRenderingEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkConditionalRenderingBeginInfoEXT>/*@@@PLQ*/* pConditionalRenderingBegin)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkConditionalRenderingBeginInfoEXT* in_pConditionalRenderingBegin = pConditionalRenderingBegin->GetPointer();
    MapStructHandles(pConditionalRenderingBegin->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdBeginConditionalRenderingEXT(in_commandBuffer, in_pConditionalRenderingBegin);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdBeginConditionalRenderingEXT(dumper.GetClonedCommandBuffer(), in_pConditionalRenderingBegin)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdEndConditionalRenderingEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdEndConditionalRenderingEXT(in_commandBuffer);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdEndConditionalRenderingEXT(dumper.GetClonedCommandBuffer())/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetViewportWScalingNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    firstViewport,
    uint32_t                                    viewportCount,
    StructPointerDecoder<Decoded_VkViewportWScalingNV>/*@@@PLQ*/* pViewportWScalings)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkViewportWScalingNV* in_pViewportWScalings = pViewportWScalings->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetViewportWScalingNV(in_commandBuffer, firstViewport, viewportCount, in_pViewportWScalings);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetViewportWScalingNV(dumper.GetClonedCommandBuffer(), firstViewport, viewportCount, in_pViewportWScalings)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkReleaseDisplayEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            display)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    VkDisplayKHR in_display = MapHandle<DisplayKHRInfo>(display, &VulkanObjectInfoTable::GetDisplayKHRInfo);//@@@DFK
    VkResult replay_result = GetInstanceTable(in_physicalDevice)->ReleaseDisplayEXT(in_physicalDevice, in_display);
    CheckResult("vkReleaseDisplayEXT", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkAcquireXlibDisplayEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    uint64_t                                    dpy,
    format::HandleId                            display)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    Display* in_dpy = static_cast<Display*>(PreProcessExternalObject(dpy, format::ApiCallId::ApiCall_vkAcquireXlibDisplayEXT, "vkAcquireXlibDisplayEXT"));
    VkDisplayKHR in_display = MapHandle<DisplayKHRInfo>(display, &VulkanObjectInfoTable::GetDisplayKHRInfo);//@@@DFK
    VkResult replay_result = GetInstanceTable(in_physicalDevice)->AcquireXlibDisplayEXT(in_physicalDevice, in_dpy, in_display);
    CheckResult("vkAcquireXlibDisplayEXT", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetRandROutputDisplayEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    uint64_t                                    dpy,
    size_t                                      rrOutput,
    HandlePointerDecoder<VkDisplayKHR>*         pDisplay)
{
    auto in_physicalDevice = GetObjectInfoTable().GetPhysicalDeviceInfo(physicalDevice);
    Display* in_dpy = static_cast<Display*>(PreProcessExternalObject(dpy, format::ApiCallId::ApiCall_vkGetRandROutputDisplayEXT, "vkGetRandROutputDisplayEXT"));
    if (!pDisplay->IsNull()) { pDisplay->SetHandleLength(1); }
    DisplayKHRInfo handle_info;
    pDisplay->SetConsumerData(0, &handle_info);//@@@DFK
    VkResult replay_result = OverrideGetRandROutputDisplayEXT(GetInstanceTable(in_physicalDevice->handle)->GetRandROutputDisplayEXT, returnValue, in_physicalDevice, in_dpy, rrOutput, pDisplay);
    CheckResult("vkGetRandROutputDisplayEXT", returnValue, replay_result, call_info);

    AddHandle<DisplayKHRInfo>(physicalDevice, pDisplay->GetPointer(), pDisplay->GetHandlePointer(), std::move(handle_info), &VulkanObjectInfoTable::AddDisplayKHRInfo);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceSurfaceCapabilities2EXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            surface,
    StructPointerDecoder<Decoded_VkSurfaceCapabilities2EXT>/*@@@PLQ*/* pSurfaceCapabilities)
{
    if (options_.swapchain_option == util::SwapchainOption::kOffscreen)
    {
        GFXRECON_LOG_DEBUG("Skip vkGetPhysicalDeviceSurfaceCapabilities2EXT for offscreen.");
        return;
    }
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    VkSurfaceKHR in_surface = MapHandle<SurfaceKHRInfo>(surface, &VulkanObjectInfoTable::GetSurfaceKHRInfo);
    if (GetObjectInfoTable().GetSurfaceKHRInfo(surface) == nullptr || GetObjectInfoTable().GetSurfaceKHRInfo(surface)->surface_creation_skipped) { return; }
    VkSurfaceCapabilities2EXT* out_pSurfaceCapabilities = pSurfaceCapabilities->IsNull() ? nullptr : pSurfaceCapabilities->AllocateOutputData(1, { VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_EXT, nullptr });
    InitializeOutputStructPNext(pSurfaceCapabilities);//@@@DFK
    VkResult replay_result = GetInstanceTable(in_physicalDevice)->GetPhysicalDeviceSurfaceCapabilities2EXT(in_physicalDevice, in_surface, out_pSurfaceCapabilities);
    CheckResult("vkGetPhysicalDeviceSurfaceCapabilities2EXT", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkDisplayPowerControlEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            display,
    StructPointerDecoder<Decoded_VkDisplayPowerInfoEXT>/*@@@PLQ*/* pDisplayPowerInfo)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkDisplayKHR in_display = MapHandle<DisplayKHRInfo>(display, &VulkanObjectInfoTable::GetDisplayKHRInfo);
    const VkDisplayPowerInfoEXT* in_pDisplayPowerInfo = pDisplayPowerInfo->GetPointer();//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->DisplayPowerControlEXT(in_device, in_display, in_pDisplayPowerInfo);
    CheckResult("vkDisplayPowerControlEXT", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkRegisterDeviceEventEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDeviceEventInfoEXT>/*@@@PLQ*/* pDeviceEventInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkFence>*              pFence)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkDeviceEventInfoEXT* in_pDeviceEventInfo = pDeviceEventInfo->GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    if (!pFence->IsNull()) { pFence->SetHandleLength(1); }
    VkFence* out_pFence = pFence->GetHandlePointer();//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->RegisterDeviceEventEXT(in_device, in_pDeviceEventInfo, in_pAllocator, out_pFence);
    CheckResult("vkRegisterDeviceEventEXT", returnValue, replay_result, call_info);

    AddHandle<FenceInfo>(device, pFence->GetPointer(), out_pFence, &VulkanObjectInfoTable::AddFenceInfo);
}

void VulkanReplayConsumer::Process_vkRegisterDisplayEventEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            display,
    StructPointerDecoder<Decoded_VkDisplayEventInfoEXT>/*@@@PLQ*/* pDisplayEventInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkFence>*              pFence)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkDisplayKHR in_display = MapHandle<DisplayKHRInfo>(display, &VulkanObjectInfoTable::GetDisplayKHRInfo);
    const VkDisplayEventInfoEXT* in_pDisplayEventInfo = pDisplayEventInfo->GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    if (!pFence->IsNull()) { pFence->SetHandleLength(1); }
    VkFence* out_pFence = pFence->GetHandlePointer();//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->RegisterDisplayEventEXT(in_device, in_display, in_pDisplayEventInfo, in_pAllocator, out_pFence);
    CheckResult("vkRegisterDisplayEventEXT", returnValue, replay_result, call_info);

    AddHandle<FenceInfo>(device, pFence->GetPointer(), out_pFence, &VulkanObjectInfoTable::AddFenceInfo);
}

void VulkanReplayConsumer::Process_vkGetSwapchainCounterEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain,
    VkSurfaceCounterFlagBitsEXT                 counter,
    PointerDecoder<uint64_t>*                   pCounterValue)
{
    if (options_.swapchain_option == util::SwapchainOption::kOffscreen)
    {
        GFXRECON_LOG_DEBUG("Skip vkGetSwapchainCounterEXT for offscreen.");
        return;
    }
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkSwapchainKHR in_swapchain = MapHandle<SwapchainKHRInfo>(swapchain, &VulkanObjectInfoTable::GetSwapchainKHRInfo);
    if (GetObjectInfoTable().GetSurfaceKHRInfo(GetObjectInfoTable().GetSwapchainKHRInfo(swapchain)->surface_id) == nullptr || GetObjectInfoTable().GetSurfaceKHRInfo(GetObjectInfoTable().GetSwapchainKHRInfo(swapchain)->surface_id)->surface_creation_skipped) { return; }
    uint64_t* out_pCounterValue = pCounterValue->IsNull() ? nullptr : pCounterValue->AllocateOutputData(1, static_cast<uint64_t>(0));//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->GetSwapchainCounterEXT(in_device, in_swapchain, counter, out_pCounterValue);
    CheckResult("vkGetSwapchainCounterEXT", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetRefreshCycleDurationGOOGLE(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain,
    StructPointerDecoder<Decoded_VkRefreshCycleDurationGOOGLE>/*@@@PLQ*/* pDisplayTimingProperties)
{
    if (options_.swapchain_option == util::SwapchainOption::kOffscreen)
    {
        GFXRECON_LOG_DEBUG("Skip vkGetRefreshCycleDurationGOOGLE for offscreen.");
        return;
    }
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkSwapchainKHR in_swapchain = MapHandle<SwapchainKHRInfo>(swapchain, &VulkanObjectInfoTable::GetSwapchainKHRInfo);
    if (GetObjectInfoTable().GetSurfaceKHRInfo(GetObjectInfoTable().GetSwapchainKHRInfo(swapchain)->surface_id) == nullptr || GetObjectInfoTable().GetSurfaceKHRInfo(GetObjectInfoTable().GetSwapchainKHRInfo(swapchain)->surface_id)->surface_creation_skipped) { return; }
    VkRefreshCycleDurationGOOGLE* out_pDisplayTimingProperties = pDisplayTimingProperties->IsNull() ? nullptr : pDisplayTimingProperties->AllocateOutputData(1);//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->GetRefreshCycleDurationGOOGLE(in_device, in_swapchain, out_pDisplayTimingProperties);
    CheckResult("vkGetRefreshCycleDurationGOOGLE", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetPastPresentationTimingGOOGLE(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain,
    PointerDecoder<uint32_t>*                   pPresentationTimingCount,
    StructPointerDecoder<Decoded_VkPastPresentationTimingGOOGLE>/*@@@PLQ*/* pPresentationTimings)
{
    if (options_.swapchain_option == util::SwapchainOption::kOffscreen)
    {
        GFXRECON_LOG_DEBUG("Skip vkGetPastPresentationTimingGOOGLE for offscreen.");
        return;
    }
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkSwapchainKHR in_swapchain = MapHandle<SwapchainKHRInfo>(swapchain, &VulkanObjectInfoTable::GetSwapchainKHRInfo);
    if (GetObjectInfoTable().GetSurfaceKHRInfo(GetObjectInfoTable().GetSwapchainKHRInfo(swapchain)->surface_id) == nullptr || GetObjectInfoTable().GetSurfaceKHRInfo(GetObjectInfoTable().GetSwapchainKHRInfo(swapchain)->surface_id)->surface_creation_skipped) { return; }
    uint32_t* out_pPresentationTimingCount = pPresentationTimingCount->IsNull() ? nullptr : pPresentationTimingCount->AllocateOutputData(1, GetOutputArrayCount<uint32_t, SwapchainKHRInfo>("vkGetPastPresentationTimingGOOGLE", returnValue, swapchain, kSwapchainKHRArrayGetPastPresentationTimingGOOGLE, pPresentationTimingCount, pPresentationTimings, &VulkanObjectInfoTable::GetSwapchainKHRInfo));
    VkPastPresentationTimingGOOGLE* out_pPresentationTimings = pPresentationTimings->IsNull() ? nullptr : pPresentationTimings->AllocateOutputData(*out_pPresentationTimingCount);//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->GetPastPresentationTimingGOOGLE(in_device, in_swapchain, out_pPresentationTimingCount, out_pPresentationTimings);
    CheckResult("vkGetPastPresentationTimingGOOGLE", returnValue, replay_result, call_info);

    if (pPresentationTimings->IsNull()) { SetOutputArrayCount<SwapchainKHRInfo>(swapchain, kSwapchainKHRArrayGetPastPresentationTimingGOOGLE, *out_pPresentationTimingCount, &VulkanObjectInfoTable::GetSwapchainKHRInfo); }
}

void VulkanReplayConsumer::Process_vkCmdSetDiscardRectangleEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    firstDiscardRectangle,
    uint32_t                                    discardRectangleCount,
    StructPointerDecoder<Decoded_VkRect2D>/*@@@PLQ*/* pDiscardRectangles)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkRect2D* in_pDiscardRectangles = pDiscardRectangles->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetDiscardRectangleEXT(in_commandBuffer, firstDiscardRectangle, discardRectangleCount, in_pDiscardRectangles);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetDiscardRectangleEXT(dumper.GetClonedCommandBuffer(), firstDiscardRectangle, discardRectangleCount, in_pDiscardRectangles)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetDiscardRectangleEnableEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    discardRectangleEnable)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetDiscardRectangleEnableEXT(in_commandBuffer, discardRectangleEnable);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetDiscardRectangleEnableEXT(dumper.GetClonedCommandBuffer(), discardRectangleEnable)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetDiscardRectangleModeEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkDiscardRectangleModeEXT                   discardRectangleMode)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetDiscardRectangleModeEXT(in_commandBuffer, discardRectangleMode);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetDiscardRectangleModeEXT(dumper.GetClonedCommandBuffer(), discardRectangleMode)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkSetHdrMetadataEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    uint32_t                                    swapchainCount,
    HandlePointerDecoder<VkSwapchainKHR>*       pSwapchains,
    StructPointerDecoder<Decoded_VkHdrMetadataEXT>/*@@@PLQ*/* pMetadata)
{
    if (options_.swapchain_option == util::SwapchainOption::kOffscreen)
    {
        GFXRECON_LOG_DEBUG("Skip vkSetHdrMetadataEXT for offscreen.");
        return;
    }
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkSwapchainKHR* in_pSwapchains = MapHandles<SwapchainKHRInfo>(pSwapchains, swapchainCount, &VulkanObjectInfoTable::GetSwapchainKHRInfo);
    const VkHdrMetadataEXT* in_pMetadata = pMetadata->GetPointer();//@@@DFK
    GetDeviceTable(in_device)->SetHdrMetadataEXT(in_device, swapchainCount, in_pSwapchains, in_pMetadata);//@@@HQA
}

void VulkanReplayConsumer::Process_vkCreateIOSSurfaceMVK(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkIOSSurfaceCreateInfoMVK>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    VkInstance in_instance = MapHandle<InstanceInfo>(instance, &VulkanObjectInfoTable::GetInstanceInfo);
    const VkIOSSurfaceCreateInfoMVK* in_pCreateInfo = pCreateInfo->GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    if (!pSurface->IsNull()) { pSurface->SetHandleLength(1); }
    VkSurfaceKHR* out_pSurface = pSurface->GetHandlePointer();//@@@DFK
    VkResult replay_result = GetInstanceTable(in_instance)->CreateIOSSurfaceMVK(in_instance, in_pCreateInfo, in_pAllocator, out_pSurface);
    CheckResult("vkCreateIOSSurfaceMVK", returnValue, replay_result, call_info);

    AddHandle<SurfaceKHRInfo>(instance, pSurface->GetPointer(), out_pSurface, &VulkanObjectInfoTable::AddSurfaceKHRInfo);
}

void VulkanReplayConsumer::Process_vkCreateMacOSSurfaceMVK(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkMacOSSurfaceCreateInfoMVK>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    VkInstance in_instance = MapHandle<InstanceInfo>(instance, &VulkanObjectInfoTable::GetInstanceInfo);
    const VkMacOSSurfaceCreateInfoMVK* in_pCreateInfo = pCreateInfo->GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    if (!pSurface->IsNull()) { pSurface->SetHandleLength(1); }
    VkSurfaceKHR* out_pSurface = pSurface->GetHandlePointer();//@@@DFK
    VkResult replay_result = GetInstanceTable(in_instance)->CreateMacOSSurfaceMVK(in_instance, in_pCreateInfo, in_pAllocator, out_pSurface);
    CheckResult("vkCreateMacOSSurfaceMVK", returnValue, replay_result, call_info);

    AddHandle<SurfaceKHRInfo>(instance, pSurface->GetPointer(), out_pSurface, &VulkanObjectInfoTable::AddSurfaceKHRInfo);
}

void VulkanReplayConsumer::Process_vkSetDebugUtilsObjectNameEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDebugUtilsObjectNameInfoEXT>/*@@@PLQ*/* pNameInfo)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkDebugUtilsObjectNameInfoEXT* in_pNameInfo = pNameInfo->GetPointer();
    MapStructHandles(pNameInfo->GetMetaStructPointer(), GetObjectInfoTable());
    DeviceInfo* device_info = GetObjectInfoTable().GetDeviceInfo(device);
    VkPhysicalDevice             physical_device = device_info->parent;//@@@DFK
    VkResult replay_result = GetInstanceTable(physical_device)->SetDebugUtilsObjectNameEXT(in_device, in_pNameInfo);
    CheckResult("vkSetDebugUtilsObjectNameEXT", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkSetDebugUtilsObjectTagEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDebugUtilsObjectTagInfoEXT>/*@@@PLQ*/* pTagInfo)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkDebugUtilsObjectTagInfoEXT* in_pTagInfo = pTagInfo->GetPointer();
    MapStructHandles(pTagInfo->GetMetaStructPointer(), GetObjectInfoTable());
    DeviceInfo* device_info = GetObjectInfoTable().GetDeviceInfo(device);
    VkPhysicalDevice             physical_device = device_info->parent;//@@@DFK
    VkResult replay_result = GetInstanceTable(physical_device)->SetDebugUtilsObjectTagEXT(in_device, in_pTagInfo);
    CheckResult("vkSetDebugUtilsObjectTagEXT", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkQueueBeginDebugUtilsLabelEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            queue,
    StructPointerDecoder<Decoded_VkDebugUtilsLabelEXT>/*@@@PLQ*/* pLabelInfo)
{
    VkQueue in_queue = MapHandle<QueueInfo>(queue, &VulkanObjectInfoTable::GetQueueInfo);
    const VkDebugUtilsLabelEXT* in_pLabelInfo = pLabelInfo->GetPointer();//@@@DFK
    GetDeviceTable(in_queue)->QueueBeginDebugUtilsLabelEXT(in_queue, in_pLabelInfo);//@@@HQA
}

void VulkanReplayConsumer::Process_vkQueueEndDebugUtilsLabelEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            queue)
{
    VkQueue in_queue = MapHandle<QueueInfo>(queue, &VulkanObjectInfoTable::GetQueueInfo);//@@@DFK
    GetDeviceTable(in_queue)->QueueEndDebugUtilsLabelEXT(in_queue);//@@@HQA
}

void VulkanReplayConsumer::Process_vkQueueInsertDebugUtilsLabelEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            queue,
    StructPointerDecoder<Decoded_VkDebugUtilsLabelEXT>/*@@@PLQ*/* pLabelInfo)
{
    VkQueue in_queue = MapHandle<QueueInfo>(queue, &VulkanObjectInfoTable::GetQueueInfo);
    const VkDebugUtilsLabelEXT* in_pLabelInfo = pLabelInfo->GetPointer();//@@@DFK
    GetDeviceTable(in_queue)->QueueInsertDebugUtilsLabelEXT(in_queue, in_pLabelInfo);//@@@HQA
}

void VulkanReplayConsumer::Process_vkCmdBeginDebugUtilsLabelEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkDebugUtilsLabelEXT>/*@@@PLQ*/* pLabelInfo)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkDebugUtilsLabelEXT* in_pLabelInfo = pLabelInfo->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdBeginDebugUtilsLabelEXT(in_commandBuffer, in_pLabelInfo);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdBeginDebugUtilsLabelEXT(dumper.GetClonedCommandBuffer(), in_pLabelInfo)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdEndDebugUtilsLabelEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdEndDebugUtilsLabelEXT(in_commandBuffer);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdEndDebugUtilsLabelEXT(dumper.GetClonedCommandBuffer())/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdInsertDebugUtilsLabelEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkDebugUtilsLabelEXT>/*@@@PLQ*/* pLabelInfo)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkDebugUtilsLabelEXT* in_pLabelInfo = pLabelInfo->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdInsertDebugUtilsLabelEXT(in_commandBuffer, in_pLabelInfo);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdInsertDebugUtilsLabelEXT(dumper.GetClonedCommandBuffer(), in_pLabelInfo)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCreateDebugUtilsMessengerEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkDebugUtilsMessengerCreateInfoEXT>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkDebugUtilsMessengerEXT>* pMessenger)
{
    auto in_instance = GetObjectInfoTable().GetInstanceInfo(instance);
    if (!pMessenger->IsNull()) { pMessenger->SetHandleLength(1); }
    DebugUtilsMessengerEXTInfo handle_info;
    pMessenger->SetConsumerData(0, &handle_info);//@@@DFK
    VkResult replay_result = OverrideCreateDebugUtilsMessengerEXT(GetInstanceTable(in_instance->handle)->CreateDebugUtilsMessengerEXT, returnValue, in_instance, pCreateInfo, pAllocator, pMessenger);
    CheckResult("vkCreateDebugUtilsMessengerEXT", returnValue, replay_result, call_info);

    AddHandle<DebugUtilsMessengerEXTInfo>(instance, pMessenger->GetPointer(), pMessenger->GetHandlePointer(), std::move(handle_info), &VulkanObjectInfoTable::AddDebugUtilsMessengerEXTInfo);
}

void VulkanReplayConsumer::Process_vkDestroyDebugUtilsMessengerEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            instance,
    format::HandleId                            messenger,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator)
{
    VkInstance in_instance = MapHandle<InstanceInfo>(instance, &VulkanObjectInfoTable::GetInstanceInfo);
    VkDebugUtilsMessengerEXT in_messenger = MapHandle<DebugUtilsMessengerEXTInfo>(messenger, &VulkanObjectInfoTable::GetDebugUtilsMessengerEXTInfo);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);//@@@DFK
    GetInstanceTable(in_instance)->DestroyDebugUtilsMessengerEXT(in_instance, in_messenger, in_pAllocator);//@@@HQA
    RemoveHandle(messenger, &VulkanObjectInfoTable::RemoveDebugUtilsMessengerEXTInfo);
}

void VulkanReplayConsumer::Process_vkSubmitDebugUtilsMessageEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            instance,
    VkDebugUtilsMessageSeverityFlagBitsEXT      messageSeverity,
    VkDebugUtilsMessageTypeFlagsEXT             messageTypes,
    StructPointerDecoder<Decoded_VkDebugUtilsMessengerCallbackDataEXT>/*@@@PLQ*/* pCallbackData)
{
    VkInstance in_instance = MapHandle<InstanceInfo>(instance, &VulkanObjectInfoTable::GetInstanceInfo);
    const VkDebugUtilsMessengerCallbackDataEXT* in_pCallbackData = pCallbackData->GetPointer();//@@@DFK
    GetInstanceTable(in_instance)->SubmitDebugUtilsMessageEXT(in_instance, messageSeverity, messageTypes, in_pCallbackData);//@@@HQA
}

void VulkanReplayConsumer::Process_vkGetAndroidHardwareBufferPropertiesANDROID(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint64_t                                    buffer,
    StructPointerDecoder<Decoded_VkAndroidHardwareBufferPropertiesANDROID>/*@@@PLQ*/* pProperties)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);
    const struct AHardwareBuffer* in_buffer = static_cast<const struct AHardwareBuffer*>(PreProcessExternalObject(buffer, format::ApiCallId::ApiCall_vkGetAndroidHardwareBufferPropertiesANDROID, "vkGetAndroidHardwareBufferPropertiesANDROID"));
    pProperties->IsNull() ? nullptr : pProperties->AllocateOutputData(1, { VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_PROPERTIES_ANDROID, nullptr });
    InitializeOutputStructPNext(pProperties);//@@@DFK
    VkResult replay_result = OverrideGetAndroidHardwareBufferPropertiesANDROID(GetDeviceTable(in_device->handle)->GetAndroidHardwareBufferPropertiesANDROID, returnValue, in_device, in_buffer, pProperties);
    CheckResult("vkGetAndroidHardwareBufferPropertiesANDROID", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetMemoryAndroidHardwareBufferANDROID(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkMemoryGetAndroidHardwareBufferInfoANDROID>/*@@@PLQ*/* pInfo,
    PointerDecoder<uint64_t, void*>*            pBuffer)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkMemoryGetAndroidHardwareBufferInfoANDROID* in_pInfo = pInfo->GetPointer();
    MapStructHandles(pInfo->GetMetaStructPointer(), GetObjectInfoTable());
    struct AHardwareBuffer** out_pBuffer = pBuffer->IsNull() ? nullptr : reinterpret_cast<struct AHardwareBuffer**>(pBuffer->AllocateOutputData(1));//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->GetMemoryAndroidHardwareBufferANDROID(in_device, in_pInfo, out_pBuffer);
    CheckResult("vkGetMemoryAndroidHardwareBufferANDROID", returnValue, replay_result, call_info);

    PostProcessExternalObject(replay_result, (*pBuffer->GetPointer()), static_cast<void*>(*out_pBuffer), format::ApiCallId::ApiCall_vkGetMemoryAndroidHardwareBufferANDROID, "vkGetMemoryAndroidHardwareBufferANDROID");
}

void VulkanReplayConsumer::Process_vkCmdSetSampleLocationsEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkSampleLocationsInfoEXT>/*@@@PLQ*/* pSampleLocationsInfo)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkSampleLocationsInfoEXT* in_pSampleLocationsInfo = pSampleLocationsInfo->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetSampleLocationsEXT(in_commandBuffer, in_pSampleLocationsInfo);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetSampleLocationsEXT(dumper.GetClonedCommandBuffer(), in_pSampleLocationsInfo)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceMultisamplePropertiesEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    VkSampleCountFlagBits                       samples,
    StructPointerDecoder<Decoded_VkMultisamplePropertiesEXT>/*@@@PLQ*/* pMultisampleProperties)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    VkMultisamplePropertiesEXT* out_pMultisampleProperties = pMultisampleProperties->IsNull() ? nullptr : pMultisampleProperties->AllocateOutputData(1, { VK_STRUCTURE_TYPE_MULTISAMPLE_PROPERTIES_EXT, nullptr });
    InitializeOutputStructPNext(pMultisampleProperties);//@@@DFK
    GetInstanceTable(in_physicalDevice)->GetPhysicalDeviceMultisamplePropertiesEXT(in_physicalDevice, samples, out_pMultisampleProperties);//@@@HQA
}

void VulkanReplayConsumer::Process_vkGetImageDrmFormatModifierPropertiesEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            image,
    StructPointerDecoder<Decoded_VkImageDrmFormatModifierPropertiesEXT>/*@@@PLQ*/* pProperties)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkImage in_image = MapHandle<ImageInfo>(image, &VulkanObjectInfoTable::GetImageInfo);
    VkImageDrmFormatModifierPropertiesEXT* out_pProperties = pProperties->IsNull() ? nullptr : pProperties->AllocateOutputData(1, { VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT, nullptr });
    InitializeOutputStructPNext(pProperties);//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->GetImageDrmFormatModifierPropertiesEXT(in_device, in_image, out_pProperties);
    CheckResult("vkGetImageDrmFormatModifierPropertiesEXT", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkCreateValidationCacheEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkValidationCacheCreateInfoEXT>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkValidationCacheEXT>* pValidationCache)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkValidationCacheCreateInfoEXT* in_pCreateInfo = pCreateInfo->GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    if (!pValidationCache->IsNull()) { pValidationCache->SetHandleLength(1); }
    VkValidationCacheEXT* out_pValidationCache = pValidationCache->GetHandlePointer();//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->CreateValidationCacheEXT(in_device, in_pCreateInfo, in_pAllocator, out_pValidationCache);
    CheckResult("vkCreateValidationCacheEXT", returnValue, replay_result, call_info);

    AddHandle<ValidationCacheEXTInfo>(device, pValidationCache->GetPointer(), out_pValidationCache, &VulkanObjectInfoTable::AddValidationCacheEXTInfo);
}

void VulkanReplayConsumer::Process_vkDestroyValidationCacheEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            validationCache,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkValidationCacheEXT in_validationCache = MapHandle<ValidationCacheEXTInfo>(validationCache, &VulkanObjectInfoTable::GetValidationCacheEXTInfo);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);//@@@DFK
    GetDeviceTable(in_device)->DestroyValidationCacheEXT(in_device, in_validationCache, in_pAllocator);//@@@HQA
    RemoveHandle(validationCache, &VulkanObjectInfoTable::RemoveValidationCacheEXTInfo);
}

void VulkanReplayConsumer::Process_vkMergeValidationCachesEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            dstCache,
    uint32_t                                    srcCacheCount,
    HandlePointerDecoder<VkValidationCacheEXT>* pSrcCaches)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkValidationCacheEXT in_dstCache = MapHandle<ValidationCacheEXTInfo>(dstCache, &VulkanObjectInfoTable::GetValidationCacheEXTInfo);
    const VkValidationCacheEXT* in_pSrcCaches = MapHandles<ValidationCacheEXTInfo>(pSrcCaches, srcCacheCount, &VulkanObjectInfoTable::GetValidationCacheEXTInfo);//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->MergeValidationCachesEXT(in_device, in_dstCache, srcCacheCount, in_pSrcCaches);
    CheckResult("vkMergeValidationCachesEXT", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetValidationCacheDataEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            validationCache,
    PointerDecoder<size_t>*                     pDataSize,
    PointerDecoder<uint8_t>*                    pData)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkValidationCacheEXT in_validationCache = MapHandle<ValidationCacheEXTInfo>(validationCache, &VulkanObjectInfoTable::GetValidationCacheEXTInfo);
    size_t* out_pDataSize = pDataSize->IsNull() ? nullptr : pDataSize->AllocateOutputData(1, GetOutputArrayCount<size_t, ValidationCacheEXTInfo>("vkGetValidationCacheDataEXT", returnValue, validationCache, kValidationCacheEXTArrayGetValidationCacheDataEXT, pDataSize, pData, &VulkanObjectInfoTable::GetValidationCacheEXTInfo));
    void* out_pData = pData->IsNull() ? nullptr : pData->AllocateOutputData(*out_pDataSize);//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->GetValidationCacheDataEXT(in_device, in_validationCache, out_pDataSize, out_pData);
    CheckResult("vkGetValidationCacheDataEXT", returnValue, replay_result, call_info);

    if (pData->IsNull()) { SetOutputArrayCount<ValidationCacheEXTInfo>(validationCache, kValidationCacheEXTArrayGetValidationCacheDataEXT, *out_pDataSize, &VulkanObjectInfoTable::GetValidationCacheEXTInfo); }
}

void VulkanReplayConsumer::Process_vkCmdBindShadingRateImageNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            imageView,
    VkImageLayout                               imageLayout)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkImageView in_imageView = MapHandle<ImageViewInfo>(imageView, &VulkanObjectInfoTable::GetImageViewInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdBindShadingRateImageNV(in_commandBuffer, in_imageView, imageLayout);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdBindShadingRateImageNV(dumper.GetClonedCommandBuffer(), in_imageView, imageLayout)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetViewportShadingRatePaletteNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    firstViewport,
    uint32_t                                    viewportCount,
    StructPointerDecoder<Decoded_VkShadingRatePaletteNV>/*@@@PLQ*/* pShadingRatePalettes)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkShadingRatePaletteNV* in_pShadingRatePalettes = pShadingRatePalettes->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetViewportShadingRatePaletteNV(in_commandBuffer, firstViewport, viewportCount, in_pShadingRatePalettes);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetViewportShadingRatePaletteNV(dumper.GetClonedCommandBuffer(), firstViewport, viewportCount, in_pShadingRatePalettes)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetCoarseSampleOrderNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkCoarseSampleOrderTypeNV                   sampleOrderType,
    uint32_t                                    customSampleOrderCount,
    StructPointerDecoder<Decoded_VkCoarseSampleOrderCustomNV>/*@@@PLQ*/* pCustomSampleOrders)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkCoarseSampleOrderCustomNV* in_pCustomSampleOrders = pCustomSampleOrders->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetCoarseSampleOrderNV(in_commandBuffer, sampleOrderType, customSampleOrderCount, in_pCustomSampleOrders);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetCoarseSampleOrderNV(dumper.GetClonedCommandBuffer(), sampleOrderType, customSampleOrderCount, in_pCustomSampleOrders)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCreateAccelerationStructureNV(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkAccelerationStructureCreateInfoNV>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkAccelerationStructureNV>* pAccelerationStructure)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkAccelerationStructureCreateInfoNV* in_pCreateInfo = pCreateInfo->GetPointer();
    MapStructHandles(pCreateInfo->GetMetaStructPointer(), GetObjectInfoTable());
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    if (!pAccelerationStructure->IsNull()) { pAccelerationStructure->SetHandleLength(1); }
    VkAccelerationStructureNV* out_pAccelerationStructure = pAccelerationStructure->GetHandlePointer();//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->CreateAccelerationStructureNV(in_device, in_pCreateInfo, in_pAllocator, out_pAccelerationStructure);
    CheckResult("vkCreateAccelerationStructureNV", returnValue, replay_result, call_info);

    AddHandle<AccelerationStructureNVInfo>(device, pAccelerationStructure->GetPointer(), out_pAccelerationStructure, &VulkanObjectInfoTable::AddAccelerationStructureNVInfo);
}

void VulkanReplayConsumer::Process_vkDestroyAccelerationStructureNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            accelerationStructure,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkAccelerationStructureNV in_accelerationStructure = MapHandle<AccelerationStructureNVInfo>(accelerationStructure, &VulkanObjectInfoTable::GetAccelerationStructureNVInfo);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);//@@@DFK
    GetDeviceTable(in_device)->DestroyAccelerationStructureNV(in_device, in_accelerationStructure, in_pAllocator);//@@@HQA
    RemoveHandle(accelerationStructure, &VulkanObjectInfoTable::RemoveAccelerationStructureNVInfo);
}

void VulkanReplayConsumer::Process_vkGetAccelerationStructureMemoryRequirementsNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkAccelerationStructureMemoryRequirementsInfoNV>/*@@@PLQ*/* pInfo,
    StructPointerDecoder<Decoded_VkMemoryRequirements2KHR>/*@@@PLQ*/* pMemoryRequirements)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkAccelerationStructureMemoryRequirementsInfoNV* in_pInfo = pInfo->GetPointer();
    MapStructHandles(pInfo->GetMetaStructPointer(), GetObjectInfoTable());
    VkMemoryRequirements2KHR* out_pMemoryRequirements = pMemoryRequirements->IsNull() ? nullptr : pMemoryRequirements->AllocateOutputData(1);//@@@DFK
    GetDeviceTable(in_device)->GetAccelerationStructureMemoryRequirementsNV(in_device, in_pInfo, out_pMemoryRequirements);//@@@HQA
}

void VulkanReplayConsumer::Process_vkBindAccelerationStructureMemoryNV(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    bindInfoCount,
    StructPointerDecoder<Decoded_VkBindAccelerationStructureMemoryInfoNV>/*@@@PLQ*/* pBindInfos)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkBindAccelerationStructureMemoryInfoNV* in_pBindInfos = pBindInfos->GetPointer();
    MapStructArrayHandles(pBindInfos->GetMetaStructPointer(), pBindInfos->GetLength(), GetObjectInfoTable());//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->BindAccelerationStructureMemoryNV(in_device, bindInfoCount, in_pBindInfos);
    CheckResult("vkBindAccelerationStructureMemoryNV", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkCmdBuildAccelerationStructureNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkAccelerationStructureInfoNV>/*@@@PLQ*/* pInfo,
    format::HandleId                            instanceData,
    VkDeviceSize                                instanceOffset,
    VkBool32                                    update,
    format::HandleId                            dst,
    format::HandleId                            src,
    format::HandleId                            scratch,
    VkDeviceSize                                scratchOffset)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkAccelerationStructureInfoNV* in_pInfo = pInfo->GetPointer();
    MapStructHandles(pInfo->GetMetaStructPointer(), GetObjectInfoTable());
    VkBuffer in_instanceData = MapHandle<BufferInfo>(instanceData, &VulkanObjectInfoTable::GetBufferInfo);
    VkAccelerationStructureNV in_dst = MapHandle<AccelerationStructureNVInfo>(dst, &VulkanObjectInfoTable::GetAccelerationStructureNVInfo);
    VkAccelerationStructureNV in_src = MapHandle<AccelerationStructureNVInfo>(src, &VulkanObjectInfoTable::GetAccelerationStructureNVInfo);
    VkBuffer in_scratch = MapHandle<BufferInfo>(scratch, &VulkanObjectInfoTable::GetBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdBuildAccelerationStructureNV(in_commandBuffer, in_pInfo, in_instanceData, instanceOffset, update, in_dst, in_src, in_scratch, scratchOffset);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdBuildAccelerationStructureNV(dumper.GetClonedCommandBuffer(), in_pInfo, in_instanceData, instanceOffset, update, in_dst, in_src, in_scratch, scratchOffset)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdCopyAccelerationStructureNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            dst,
    format::HandleId                            src,
    VkCopyAccelerationStructureModeKHR          mode)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkAccelerationStructureNV in_dst = MapHandle<AccelerationStructureNVInfo>(dst, &VulkanObjectInfoTable::GetAccelerationStructureNVInfo);
    VkAccelerationStructureNV in_src = MapHandle<AccelerationStructureNVInfo>(src, &VulkanObjectInfoTable::GetAccelerationStructureNVInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdCopyAccelerationStructureNV(in_commandBuffer, in_dst, in_src, mode);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdCopyAccelerationStructureNV(dumper.GetClonedCommandBuffer(), in_dst, in_src, mode)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdTraceRaysNV(
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
    uint32_t                                    depth)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkBuffer in_raygenShaderBindingTableBuffer = MapHandle<BufferInfo>(raygenShaderBindingTableBuffer, &VulkanObjectInfoTable::GetBufferInfo);
    VkBuffer in_missShaderBindingTableBuffer = MapHandle<BufferInfo>(missShaderBindingTableBuffer, &VulkanObjectInfoTable::GetBufferInfo);
    VkBuffer in_hitShaderBindingTableBuffer = MapHandle<BufferInfo>(hitShaderBindingTableBuffer, &VulkanObjectInfoTable::GetBufferInfo);
    VkBuffer in_callableShaderBindingTableBuffer = MapHandle<BufferInfo>(callableShaderBindingTableBuffer, &VulkanObjectInfoTable::GetBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdTraceRaysNV(in_commandBuffer, in_raygenShaderBindingTableBuffer, raygenShaderBindingOffset, in_missShaderBindingTableBuffer, missShaderBindingOffset, missShaderBindingStride, in_hitShaderBindingTableBuffer, hitShaderBindingOffset, hitShaderBindingStride, in_callableShaderBindingTableBuffer, callableShaderBindingOffset, callableShaderBindingStride, width, height, depth);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdTraceRaysNV(dumper.GetClonedCommandBuffer(), in_raygenShaderBindingTableBuffer, raygenShaderBindingOffset, in_missShaderBindingTableBuffer, missShaderBindingOffset, missShaderBindingStride, in_hitShaderBindingTableBuffer, hitShaderBindingOffset, hitShaderBindingStride, in_callableShaderBindingTableBuffer, callableShaderBindingOffset, callableShaderBindingStride, width, height, depth)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCreateRayTracingPipelinesNV(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            pipelineCache,
    uint32_t                                    createInfoCount,
    StructPointerDecoder<Decoded_VkRayTracingPipelineCreateInfoNV>/*@@@PLQ*/* pCreateInfos,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkPipeline>*           pPipelines)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkPipelineCache in_pipelineCache = MapHandle<PipelineCacheInfo>(pipelineCache, &VulkanObjectInfoTable::GetPipelineCacheInfo);
    const VkRayTracingPipelineCreateInfoNV* in_pCreateInfos = pCreateInfos->GetPointer();
    MapStructArrayHandles(pCreateInfos->GetMetaStructPointer(), pCreateInfos->GetLength(), GetObjectInfoTable());
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    if (!pPipelines->IsNull()) { pPipelines->SetHandleLength(createInfoCount); }
    VkPipeline* out_pPipelines = pPipelines->GetHandlePointer();//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->CreateRayTracingPipelinesNV(in_device, in_pipelineCache, createInfoCount, in_pCreateInfos, in_pAllocator, out_pPipelines);
    CheckResult("vkCreateRayTracingPipelinesNV", returnValue, replay_result, call_info);

    AddHandles<PipelineInfo>(device, pPipelines->GetPointer(), pPipelines->GetLength(), out_pPipelines, createInfoCount, &VulkanObjectInfoTable::AddPipelineInfo);
}

void VulkanReplayConsumer::Process_vkGetRayTracingShaderGroupHandlesKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            pipeline,
    uint32_t                                    firstGroup,
    uint32_t                                    groupCount,
    size_t                                      dataSize,
    PointerDecoder<uint8_t>*                    pData)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);
    auto in_pipeline = GetObjectInfoTable().GetPipelineInfo(pipeline);
    if (!pData->IsNull()) { pData->AllocateOutputData(dataSize); }//@@@DFK
    VkResult replay_result = OverrideGetRayTracingShaderGroupHandlesKHR(GetDeviceTable(in_device->handle)->GetRayTracingShaderGroupHandlesKHR, returnValue, in_device, in_pipeline, firstGroup, groupCount, dataSize, pData);
    CheckResult("vkGetRayTracingShaderGroupHandlesKHR", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetRayTracingShaderGroupHandlesNV(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            pipeline,
    uint32_t                                    firstGroup,
    uint32_t                                    groupCount,
    size_t                                      dataSize,
    PointerDecoder<uint8_t>*                    pData)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkPipeline in_pipeline = MapHandle<PipelineInfo>(pipeline, &VulkanObjectInfoTable::GetPipelineInfo);
    void* out_pData = pData->IsNull() ? nullptr : pData->AllocateOutputData(dataSize);//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->GetRayTracingShaderGroupHandlesNV(in_device, in_pipeline, firstGroup, groupCount, dataSize, out_pData);
    CheckResult("vkGetRayTracingShaderGroupHandlesNV", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetAccelerationStructureHandleNV(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            accelerationStructure,
    size_t                                      dataSize,
    PointerDecoder<uint8_t>*                    pData)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkAccelerationStructureNV in_accelerationStructure = MapHandle<AccelerationStructureNVInfo>(accelerationStructure, &VulkanObjectInfoTable::GetAccelerationStructureNVInfo);
    void* out_pData = pData->IsNull() ? nullptr : pData->AllocateOutputData(dataSize);//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->GetAccelerationStructureHandleNV(in_device, in_accelerationStructure, dataSize, out_pData);
    CheckResult("vkGetAccelerationStructureHandleNV", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkCmdWriteAccelerationStructuresPropertiesNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    accelerationStructureCount,
    HandlePointerDecoder<VkAccelerationStructureNV>* pAccelerationStructures,
    VkQueryType                                 queryType,
    format::HandleId                            queryPool,
    uint32_t                                    firstQuery)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkAccelerationStructureNV* in_pAccelerationStructures = MapHandles<AccelerationStructureNVInfo>(pAccelerationStructures, accelerationStructureCount, &VulkanObjectInfoTable::GetAccelerationStructureNVInfo);
    VkQueryPool in_queryPool = MapHandle<QueryPoolInfo>(queryPool, &VulkanObjectInfoTable::GetQueryPoolInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdWriteAccelerationStructuresPropertiesNV(in_commandBuffer, accelerationStructureCount, in_pAccelerationStructures, queryType, in_queryPool, firstQuery);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdWriteAccelerationStructuresPropertiesNV(dumper.GetClonedCommandBuffer(), accelerationStructureCount, in_pAccelerationStructures, queryType, in_queryPool, firstQuery)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCompileDeferredNV(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            pipeline,
    uint32_t                                    shader)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkPipeline in_pipeline = MapHandle<PipelineInfo>(pipeline, &VulkanObjectInfoTable::GetPipelineInfo);//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->CompileDeferredNV(in_device, in_pipeline, shader);
    CheckResult("vkCompileDeferredNV", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetMemoryHostPointerPropertiesEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    VkExternalMemoryHandleTypeFlagBits          handleType,
    uint64_t                                    pHostPointer,
    StructPointerDecoder<Decoded_VkMemoryHostPointerPropertiesEXT>/*@@@PLQ*/* pMemoryHostPointerProperties)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const void* in_pHostPointer = PreProcessExternalObject(pHostPointer, format::ApiCallId::ApiCall_vkGetMemoryHostPointerPropertiesEXT, "vkGetMemoryHostPointerPropertiesEXT");
    VkMemoryHostPointerPropertiesEXT* out_pMemoryHostPointerProperties = pMemoryHostPointerProperties->IsNull() ? nullptr : pMemoryHostPointerProperties->AllocateOutputData(1, { VK_STRUCTURE_TYPE_MEMORY_HOST_POINTER_PROPERTIES_EXT, nullptr });
    InitializeOutputStructPNext(pMemoryHostPointerProperties);//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->GetMemoryHostPointerPropertiesEXT(in_device, handleType, in_pHostPointer, out_pMemoryHostPointerProperties);
    CheckResult("vkGetMemoryHostPointerPropertiesEXT", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkCmdWriteBufferMarkerAMD(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkPipelineStageFlagBits                     pipelineStage,
    format::HandleId                            dstBuffer,
    VkDeviceSize                                dstOffset,
    uint32_t                                    marker)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkBuffer in_dstBuffer = MapHandle<BufferInfo>(dstBuffer, &VulkanObjectInfoTable::GetBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdWriteBufferMarkerAMD(in_commandBuffer, pipelineStage, in_dstBuffer, dstOffset, marker);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdWriteBufferMarkerAMD(dumper.GetClonedCommandBuffer(), pipelineStage, in_dstBuffer, dstOffset, marker)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    PointerDecoder<uint32_t>*                   pTimeDomainCount,
    PointerDecoder<VkTimeDomainEXT>*            pTimeDomains)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    uint32_t* out_pTimeDomainCount = pTimeDomainCount->IsNull() ? nullptr : pTimeDomainCount->AllocateOutputData(1, GetOutputArrayCount<uint32_t, PhysicalDeviceInfo>("vkGetPhysicalDeviceCalibrateableTimeDomainsEXT", returnValue, physicalDevice, kPhysicalDeviceArrayGetPhysicalDeviceCalibrateableTimeDomainsEXT, pTimeDomainCount, pTimeDomains, &VulkanObjectInfoTable::GetPhysicalDeviceInfo));
    VkTimeDomainEXT* out_pTimeDomains = pTimeDomains->IsNull() ? nullptr : pTimeDomains->AllocateOutputData(*out_pTimeDomainCount);//@@@DFK
    VkResult replay_result = GetInstanceTable(in_physicalDevice)->GetPhysicalDeviceCalibrateableTimeDomainsEXT(in_physicalDevice, out_pTimeDomainCount, out_pTimeDomains);
    CheckResult("vkGetPhysicalDeviceCalibrateableTimeDomainsEXT", returnValue, replay_result, call_info);

    if (pTimeDomains->IsNull()) { SetOutputArrayCount<PhysicalDeviceInfo>(physicalDevice, kPhysicalDeviceArrayGetPhysicalDeviceCalibrateableTimeDomainsEXT, *out_pTimeDomainCount, &VulkanObjectInfoTable::GetPhysicalDeviceInfo); }
}

void VulkanReplayConsumer::Process_vkGetCalibratedTimestampsEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    timestampCount,
    StructPointerDecoder<Decoded_VkCalibratedTimestampInfoEXT>/*@@@PLQ*/* pTimestampInfos,
    PointerDecoder<uint64_t>*                   pTimestamps,
    PointerDecoder<uint64_t>*                   pMaxDeviation)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkCalibratedTimestampInfoEXT* in_pTimestampInfos = pTimestampInfos->GetPointer();
    uint64_t* out_pTimestamps = pTimestamps->IsNull() ? nullptr : pTimestamps->AllocateOutputData(timestampCount);
    uint64_t* out_pMaxDeviation = pMaxDeviation->IsNull() ? nullptr : pMaxDeviation->AllocateOutputData(1, static_cast<uint64_t>(0));//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->GetCalibratedTimestampsEXT(in_device, timestampCount, in_pTimestampInfos, out_pTimestamps, out_pMaxDeviation);
    CheckResult("vkGetCalibratedTimestampsEXT", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkCmdDrawMeshTasksNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    taskCount,
    uint32_t                                    firstTask)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdDrawMeshTasksNV(in_commandBuffer, taskCount, firstTask);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdDrawMeshTasksNV(dumper.GetClonedCommandBuffer(), taskCount, firstTask)/*@@@ABC*/;//@@@HERE
        if (dumper.DumpingDrawCallIndex(call_info.index))
        {
            dumper.FinalizeCommandBuffer(*GetDeviceTable(in_commandBuffer));
        }
    }
}

void VulkanReplayConsumer::Process_vkCmdDrawMeshTasksIndirectNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    uint32_t                                    drawCount,
    uint32_t                                    stride)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkBuffer in_buffer = MapHandle<BufferInfo>(buffer, &VulkanObjectInfoTable::GetBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdDrawMeshTasksIndirectNV(in_commandBuffer, in_buffer, offset, drawCount, stride);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdDrawMeshTasksIndirectNV(dumper.GetClonedCommandBuffer(), in_buffer, offset, drawCount, stride)/*@@@ABC*/;//@@@HERE
        if (dumper.DumpingDrawCallIndex(call_info.index))
        {
            dumper.FinalizeCommandBuffer(*GetDeviceTable(in_commandBuffer));
        }
    }
}

void VulkanReplayConsumer::Process_vkCmdDrawMeshTasksIndirectCountNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    format::HandleId                            countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkBuffer in_buffer = MapHandle<BufferInfo>(buffer, &VulkanObjectInfoTable::GetBufferInfo);
    VkBuffer in_countBuffer = MapHandle<BufferInfo>(countBuffer, &VulkanObjectInfoTable::GetBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdDrawMeshTasksIndirectCountNV(in_commandBuffer, in_buffer, offset, in_countBuffer, countBufferOffset, maxDrawCount, stride);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdDrawMeshTasksIndirectCountNV(dumper.GetClonedCommandBuffer(), in_buffer, offset, in_countBuffer, countBufferOffset, maxDrawCount, stride)/*@@@ABC*/;//@@@HERE
        if (dumper.DumpingDrawCallIndex(call_info.index))
        {
            dumper.FinalizeCommandBuffer(*GetDeviceTable(in_commandBuffer));
        }
    }
}

void VulkanReplayConsumer::Process_vkCmdSetExclusiveScissorEnableNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    firstExclusiveScissor,
    uint32_t                                    exclusiveScissorCount,
    PointerDecoder<VkBool32>*                   pExclusiveScissorEnables)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkBool32* in_pExclusiveScissorEnables = pExclusiveScissorEnables->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetExclusiveScissorEnableNV(in_commandBuffer, firstExclusiveScissor, exclusiveScissorCount, in_pExclusiveScissorEnables);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetExclusiveScissorEnableNV(dumper.GetClonedCommandBuffer(), firstExclusiveScissor, exclusiveScissorCount, in_pExclusiveScissorEnables)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetExclusiveScissorNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    firstExclusiveScissor,
    uint32_t                                    exclusiveScissorCount,
    StructPointerDecoder<Decoded_VkRect2D>/*@@@PLQ*/* pExclusiveScissors)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkRect2D* in_pExclusiveScissors = pExclusiveScissors->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetExclusiveScissorNV(in_commandBuffer, firstExclusiveScissor, exclusiveScissorCount, in_pExclusiveScissors);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetExclusiveScissorNV(dumper.GetClonedCommandBuffer(), firstExclusiveScissor, exclusiveScissorCount, in_pExclusiveScissors)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetCheckpointNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint64_t                                    pCheckpointMarker)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const void* in_pCheckpointMarker = PreProcessExternalObject(pCheckpointMarker, format::ApiCallId::ApiCall_vkCmdSetCheckpointNV, "vkCmdSetCheckpointNV");//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetCheckpointNV(in_commandBuffer, in_pCheckpointMarker);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetCheckpointNV(dumper.GetClonedCommandBuffer(), in_pCheckpointMarker)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkGetQueueCheckpointDataNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            queue,
    PointerDecoder<uint32_t>*                   pCheckpointDataCount,
    StructPointerDecoder<Decoded_VkCheckpointDataNV>/*@@@PLQ*/* pCheckpointData)
{
    VkQueue in_queue = MapHandle<QueueInfo>(queue, &VulkanObjectInfoTable::GetQueueInfo);
    uint32_t* out_pCheckpointDataCount = pCheckpointDataCount->IsNull() ? nullptr : pCheckpointDataCount->AllocateOutputData(1, GetOutputArrayCount<uint32_t, QueueInfo>("vkGetQueueCheckpointDataNV", VK_SUCCESS, queue, kQueueArrayGetQueueCheckpointDataNV, pCheckpointDataCount, pCheckpointData, &VulkanObjectInfoTable::GetQueueInfo));
    VkCheckpointDataNV* out_pCheckpointData = pCheckpointData->IsNull() ? nullptr : pCheckpointData->AllocateOutputData(*out_pCheckpointDataCount, VkCheckpointDataNV{ VK_STRUCTURE_TYPE_CHECKPOINT_DATA_NV, nullptr });//@@@DFK
    GetDeviceTable(in_queue)->GetQueueCheckpointDataNV(in_queue, out_pCheckpointDataCount, out_pCheckpointData);//@@@HQA

    if (pCheckpointData->IsNull()) { SetOutputArrayCount<QueueInfo>(queue, kQueueArrayGetQueueCheckpointDataNV, *out_pCheckpointDataCount, &VulkanObjectInfoTable::GetQueueInfo); }
}

void VulkanReplayConsumer::Process_vkInitializePerformanceApiINTEL(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkInitializePerformanceApiInfoINTEL>/*@@@PLQ*/* pInitializeInfo)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkInitializePerformanceApiInfoINTEL* in_pInitializeInfo = pInitializeInfo->GetPointer();//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->InitializePerformanceApiINTEL(in_device, in_pInitializeInfo);
    CheckResult("vkInitializePerformanceApiINTEL", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkUninitializePerformanceApiINTEL(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);//@@@DFK
    GetDeviceTable(in_device)->UninitializePerformanceApiINTEL(in_device);//@@@HQA
}

void VulkanReplayConsumer::Process_vkCmdSetPerformanceMarkerINTEL(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkPerformanceMarkerInfoINTEL>/*@@@PLQ*/* pMarkerInfo)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkPerformanceMarkerInfoINTEL* in_pMarkerInfo = pMarkerInfo->GetPointer();//@@@DFK
    VkResult replay_result = GetDeviceTable(in_commandBuffer)->CmdSetPerformanceMarkerINTEL(in_commandBuffer, in_pMarkerInfo);
    CheckResult("vkCmdSetPerformanceMarkerINTEL", returnValue, replay_result, call_info);

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetPerformanceMarkerINTEL(dumper.GetClonedCommandBuffer(), in_pMarkerInfo)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetPerformanceStreamMarkerINTEL(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkPerformanceStreamMarkerInfoINTEL>/*@@@PLQ*/* pMarkerInfo)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkPerformanceStreamMarkerInfoINTEL* in_pMarkerInfo = pMarkerInfo->GetPointer();//@@@DFK
    VkResult replay_result = GetDeviceTable(in_commandBuffer)->CmdSetPerformanceStreamMarkerINTEL(in_commandBuffer, in_pMarkerInfo);
    CheckResult("vkCmdSetPerformanceStreamMarkerINTEL", returnValue, replay_result, call_info);

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetPerformanceStreamMarkerINTEL(dumper.GetClonedCommandBuffer(), in_pMarkerInfo)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetPerformanceOverrideINTEL(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkPerformanceOverrideInfoINTEL>/*@@@PLQ*/* pOverrideInfo)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkPerformanceOverrideInfoINTEL* in_pOverrideInfo = pOverrideInfo->GetPointer();//@@@DFK
    VkResult replay_result = GetDeviceTable(in_commandBuffer)->CmdSetPerformanceOverrideINTEL(in_commandBuffer, in_pOverrideInfo);
    CheckResult("vkCmdSetPerformanceOverrideINTEL", returnValue, replay_result, call_info);

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetPerformanceOverrideINTEL(dumper.GetClonedCommandBuffer(), in_pOverrideInfo)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkAcquirePerformanceConfigurationINTEL(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkPerformanceConfigurationAcquireInfoINTEL>/*@@@PLQ*/* pAcquireInfo,
    HandlePointerDecoder<VkPerformanceConfigurationINTEL>* pConfiguration)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkPerformanceConfigurationAcquireInfoINTEL* in_pAcquireInfo = pAcquireInfo->GetPointer();
    if (!pConfiguration->IsNull()) { pConfiguration->SetHandleLength(1); }
    VkPerformanceConfigurationINTEL* out_pConfiguration = pConfiguration->GetHandlePointer();//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->AcquirePerformanceConfigurationINTEL(in_device, in_pAcquireInfo, out_pConfiguration);
    CheckResult("vkAcquirePerformanceConfigurationINTEL", returnValue, replay_result, call_info);

    AddHandle<PerformanceConfigurationINTELInfo>(device, pConfiguration->GetPointer(), out_pConfiguration, &VulkanObjectInfoTable::AddPerformanceConfigurationINTELInfo);
}

void VulkanReplayConsumer::Process_vkReleasePerformanceConfigurationINTEL(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            configuration)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkPerformanceConfigurationINTEL in_configuration = MapHandle<PerformanceConfigurationINTELInfo>(configuration, &VulkanObjectInfoTable::GetPerformanceConfigurationINTELInfo);//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->ReleasePerformanceConfigurationINTEL(in_device, in_configuration);
    CheckResult("vkReleasePerformanceConfigurationINTEL", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkQueueSetPerformanceConfigurationINTEL(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            queue,
    format::HandleId                            configuration)
{
    VkQueue in_queue = MapHandle<QueueInfo>(queue, &VulkanObjectInfoTable::GetQueueInfo);
    VkPerformanceConfigurationINTEL in_configuration = MapHandle<PerformanceConfigurationINTELInfo>(configuration, &VulkanObjectInfoTable::GetPerformanceConfigurationINTELInfo);//@@@DFK
    VkResult replay_result = GetDeviceTable(in_queue)->QueueSetPerformanceConfigurationINTEL(in_queue, in_configuration);
    CheckResult("vkQueueSetPerformanceConfigurationINTEL", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetPerformanceParameterINTEL(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    VkPerformanceParameterTypeINTEL             parameter,
    StructPointerDecoder<Decoded_VkPerformanceValueINTEL>/*@@@PLQ*/* pValue)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkPerformanceValueINTEL* out_pValue = pValue->IsNull() ? nullptr : pValue->AllocateOutputData(1);//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->GetPerformanceParameterINTEL(in_device, parameter, out_pValue);
    CheckResult("vkGetPerformanceParameterINTEL", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkSetLocalDimmingAMD(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            swapChain,
    VkBool32                                    localDimmingEnable)
{
    if (options_.swapchain_option == util::SwapchainOption::kOffscreen)
    {
        GFXRECON_LOG_DEBUG("Skip vkSetLocalDimmingAMD for offscreen.");
        return;
    }
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkSwapchainKHR in_swapChain = MapHandle<SwapchainKHRInfo>(swapChain, &VulkanObjectInfoTable::GetSwapchainKHRInfo);//@@@DFK
    GetDeviceTable(in_device)->SetLocalDimmingAMD(in_device, in_swapChain, localDimmingEnable);//@@@HQA
}

void VulkanReplayConsumer::Process_vkCreateImagePipeSurfaceFUCHSIA(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkImagePipeSurfaceCreateInfoFUCHSIA>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    VkInstance in_instance = MapHandle<InstanceInfo>(instance, &VulkanObjectInfoTable::GetInstanceInfo);
    const VkImagePipeSurfaceCreateInfoFUCHSIA* in_pCreateInfo = pCreateInfo->GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    if (!pSurface->IsNull()) { pSurface->SetHandleLength(1); }
    VkSurfaceKHR* out_pSurface = pSurface->GetHandlePointer();//@@@DFK
    VkResult replay_result = GetInstanceTable(in_instance)->CreateImagePipeSurfaceFUCHSIA(in_instance, in_pCreateInfo, in_pAllocator, out_pSurface);
    CheckResult("vkCreateImagePipeSurfaceFUCHSIA", returnValue, replay_result, call_info);

    AddHandle<SurfaceKHRInfo>(instance, pSurface->GetPointer(), out_pSurface, &VulkanObjectInfoTable::AddSurfaceKHRInfo);
}

void VulkanReplayConsumer::Process_vkCreateMetalSurfaceEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkMetalSurfaceCreateInfoEXT>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    VkInstance in_instance = MapHandle<InstanceInfo>(instance, &VulkanObjectInfoTable::GetInstanceInfo);
    const VkMetalSurfaceCreateInfoEXT* in_pCreateInfo = pCreateInfo->GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    if (!pSurface->IsNull()) { pSurface->SetHandleLength(1); }
    VkSurfaceKHR* out_pSurface = pSurface->GetHandlePointer();//@@@DFK
    VkResult replay_result = GetInstanceTable(in_instance)->CreateMetalSurfaceEXT(in_instance, in_pCreateInfo, in_pAllocator, out_pSurface);
    CheckResult("vkCreateMetalSurfaceEXT", returnValue, replay_result, call_info);

    AddHandle<SurfaceKHRInfo>(instance, pSurface->GetPointer(), out_pSurface, &VulkanObjectInfoTable::AddSurfaceKHRInfo);
}

void VulkanReplayConsumer::Process_vkGetBufferDeviceAddressEXT(
    const ApiCallInfo&                          call_info,
    VkDeviceAddress                             returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkBufferDeviceAddressInfo>/*@@@PLQ*/* pInfo)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkBufferDeviceAddressInfo* in_pInfo = pInfo->GetPointer();
    MapStructHandles(pInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    GetDeviceTable(in_device)->GetBufferDeviceAddressEXT(in_device, in_pInfo);//@@@HQA
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceToolPropertiesEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    PointerDecoder<uint32_t>*                   pToolCount,
    StructPointerDecoder<Decoded_VkPhysicalDeviceToolProperties>/*@@@PLQ*/* pToolProperties)
{
    auto in_physicalDevice = GetObjectInfoTable().GetPhysicalDeviceInfo(physicalDevice);
    pToolCount->IsNull() ? nullptr : pToolCount->AllocateOutputData(1, GetOutputArrayCount<uint32_t, PhysicalDeviceInfo>("vkGetPhysicalDeviceToolPropertiesEXT", returnValue, physicalDevice, kPhysicalDeviceArrayGetPhysicalDeviceToolPropertiesEXT, pToolCount, pToolProperties, &VulkanObjectInfoTable::GetPhysicalDeviceInfo));
    if (!pToolProperties->IsNull()) { pToolProperties->AllocateOutputData(*pToolCount->GetOutputPointer(), VkPhysicalDeviceToolProperties{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TOOL_PROPERTIES, nullptr }); }//@@@DFK
    VkResult replay_result = OverrideGetPhysicalDeviceToolProperties(GetInstanceTable(in_physicalDevice->handle)->GetPhysicalDeviceToolPropertiesEXT, returnValue, in_physicalDevice, pToolCount, pToolProperties);
    CheckResult("vkGetPhysicalDeviceToolPropertiesEXT", returnValue, replay_result, call_info);

    if (pToolProperties->IsNull()) { SetOutputArrayCount<PhysicalDeviceInfo>(physicalDevice, kPhysicalDeviceArrayGetPhysicalDeviceToolPropertiesEXT, *pToolCount->GetOutputPointer(), &VulkanObjectInfoTable::GetPhysicalDeviceInfo); }
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    PointerDecoder<uint32_t>*                   pPropertyCount,
    StructPointerDecoder<Decoded_VkCooperativeMatrixPropertiesNV>/*@@@PLQ*/* pProperties)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    uint32_t* out_pPropertyCount = pPropertyCount->IsNull() ? nullptr : pPropertyCount->AllocateOutputData(1, GetOutputArrayCount<uint32_t, PhysicalDeviceInfo>("vkGetPhysicalDeviceCooperativeMatrixPropertiesNV", returnValue, physicalDevice, kPhysicalDeviceArrayGetPhysicalDeviceCooperativeMatrixPropertiesNV, pPropertyCount, pProperties, &VulkanObjectInfoTable::GetPhysicalDeviceInfo));
    VkCooperativeMatrixPropertiesNV* out_pProperties = pProperties->IsNull() ? nullptr : pProperties->AllocateOutputData(*out_pPropertyCount, VkCooperativeMatrixPropertiesNV{ VK_STRUCTURE_TYPE_COOPERATIVE_MATRIX_PROPERTIES_NV, nullptr });//@@@DFK
    VkResult replay_result = GetInstanceTable(in_physicalDevice)->GetPhysicalDeviceCooperativeMatrixPropertiesNV(in_physicalDevice, out_pPropertyCount, out_pProperties);
    CheckResult("vkGetPhysicalDeviceCooperativeMatrixPropertiesNV", returnValue, replay_result, call_info);

    if (pProperties->IsNull()) { SetOutputArrayCount<PhysicalDeviceInfo>(physicalDevice, kPhysicalDeviceArrayGetPhysicalDeviceCooperativeMatrixPropertiesNV, *out_pPropertyCount, &VulkanObjectInfoTable::GetPhysicalDeviceInfo); }
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    PointerDecoder<uint32_t>*                   pCombinationCount,
    StructPointerDecoder<Decoded_VkFramebufferMixedSamplesCombinationNV>/*@@@PLQ*/* pCombinations)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    uint32_t* out_pCombinationCount = pCombinationCount->IsNull() ? nullptr : pCombinationCount->AllocateOutputData(1, GetOutputArrayCount<uint32_t, PhysicalDeviceInfo>("vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV", returnValue, physicalDevice, kPhysicalDeviceArrayGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV, pCombinationCount, pCombinations, &VulkanObjectInfoTable::GetPhysicalDeviceInfo));
    VkFramebufferMixedSamplesCombinationNV* out_pCombinations = pCombinations->IsNull() ? nullptr : pCombinations->AllocateOutputData(*out_pCombinationCount, VkFramebufferMixedSamplesCombinationNV{ VK_STRUCTURE_TYPE_FRAMEBUFFER_MIXED_SAMPLES_COMBINATION_NV, nullptr });//@@@DFK
    VkResult replay_result = GetInstanceTable(in_physicalDevice)->GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(in_physicalDevice, out_pCombinationCount, out_pCombinations);
    CheckResult("vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV", returnValue, replay_result, call_info);

    if (pCombinations->IsNull()) { SetOutputArrayCount<PhysicalDeviceInfo>(physicalDevice, kPhysicalDeviceArrayGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV, *out_pCombinationCount, &VulkanObjectInfoTable::GetPhysicalDeviceInfo); }
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceSurfacePresentModes2EXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceSurfaceInfo2KHR>/*@@@PLQ*/* pSurfaceInfo,
    PointerDecoder<uint32_t>*                   pPresentModeCount,
    PointerDecoder<VkPresentModeKHR>*           pPresentModes)
{
    if (options_.swapchain_option == util::SwapchainOption::kOffscreen)
    {
        GFXRECON_LOG_DEBUG("Skip vkGetPhysicalDeviceSurfacePresentModes2EXT for offscreen.");
        return;
    }
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    const VkPhysicalDeviceSurfaceInfo2KHR* in_pSurfaceInfo = pSurfaceInfo->GetPointer();
    if (pSurfaceInfo->GetPointer()->surface == VK_NULL_HANDLE) { return; }
    MapStructHandles(pSurfaceInfo->GetMetaStructPointer(), GetObjectInfoTable());
    auto in_pSurfaceInfo_meta = pSurfaceInfo->GetMetaStructPointer();
    if (GetObjectInfoTable().GetSurfaceKHRInfo(in_pSurfaceInfo_meta->surface) == nullptr || GetObjectInfoTable().GetSurfaceKHRInfo(in_pSurfaceInfo_meta->surface)->surface_creation_skipped) { return; }
    uint32_t* out_pPresentModeCount = pPresentModeCount->IsNull() ? nullptr : pPresentModeCount->AllocateOutputData(1, GetOutputArrayCount<uint32_t, PhysicalDeviceInfo>("vkGetPhysicalDeviceSurfacePresentModes2EXT", returnValue, physicalDevice, kPhysicalDeviceArrayGetPhysicalDeviceSurfacePresentModes2EXT, pPresentModeCount, pPresentModes, &VulkanObjectInfoTable::GetPhysicalDeviceInfo));
    VkPresentModeKHR* out_pPresentModes = pPresentModes->IsNull() ? nullptr : pPresentModes->AllocateOutputData(*out_pPresentModeCount);//@@@DFK
    VkResult replay_result = GetInstanceTable(in_physicalDevice)->GetPhysicalDeviceSurfacePresentModes2EXT(in_physicalDevice, in_pSurfaceInfo, out_pPresentModeCount, out_pPresentModes);
    CheckResult("vkGetPhysicalDeviceSurfacePresentModes2EXT", returnValue, replay_result, call_info);

    if (pPresentModes->IsNull()) { SetOutputArrayCount<PhysicalDeviceInfo>(physicalDevice, kPhysicalDeviceArrayGetPhysicalDeviceSurfacePresentModes2EXT, *out_pPresentModeCount, &VulkanObjectInfoTable::GetPhysicalDeviceInfo); }
}

void VulkanReplayConsumer::Process_vkAcquireFullScreenExclusiveModeEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain)
{
    if (options_.swapchain_option == util::SwapchainOption::kOffscreen)
    {
        GFXRECON_LOG_DEBUG("Skip vkAcquireFullScreenExclusiveModeEXT for offscreen.");
        return;
    }
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkSwapchainKHR in_swapchain = MapHandle<SwapchainKHRInfo>(swapchain, &VulkanObjectInfoTable::GetSwapchainKHRInfo);
    if (GetObjectInfoTable().GetSurfaceKHRInfo(GetObjectInfoTable().GetSwapchainKHRInfo(swapchain)->surface_id) == nullptr || GetObjectInfoTable().GetSurfaceKHRInfo(GetObjectInfoTable().GetSwapchainKHRInfo(swapchain)->surface_id)->surface_creation_skipped) { return; }//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->AcquireFullScreenExclusiveModeEXT(in_device, in_swapchain);
    CheckResult("vkAcquireFullScreenExclusiveModeEXT", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkReleaseFullScreenExclusiveModeEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain)
{
    if (options_.swapchain_option == util::SwapchainOption::kOffscreen)
    {
        GFXRECON_LOG_DEBUG("Skip vkReleaseFullScreenExclusiveModeEXT for offscreen.");
        return;
    }
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkSwapchainKHR in_swapchain = MapHandle<SwapchainKHRInfo>(swapchain, &VulkanObjectInfoTable::GetSwapchainKHRInfo);
    if (GetObjectInfoTable().GetSurfaceKHRInfo(GetObjectInfoTable().GetSwapchainKHRInfo(swapchain)->surface_id) == nullptr || GetObjectInfoTable().GetSurfaceKHRInfo(GetObjectInfoTable().GetSwapchainKHRInfo(swapchain)->surface_id)->surface_creation_skipped) { return; }//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->ReleaseFullScreenExclusiveModeEXT(in_device, in_swapchain);
    CheckResult("vkReleaseFullScreenExclusiveModeEXT", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetDeviceGroupSurfacePresentModes2EXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkPhysicalDeviceSurfaceInfo2KHR>/*@@@PLQ*/* pSurfaceInfo,
    PointerDecoder<VkDeviceGroupPresentModeFlagsKHR>* pModes)
{
    if (options_.swapchain_option == util::SwapchainOption::kOffscreen)
    {
        GFXRECON_LOG_DEBUG("Skip vkGetDeviceGroupSurfacePresentModes2EXT for offscreen.");
        return;
    }
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkPhysicalDeviceSurfaceInfo2KHR* in_pSurfaceInfo = pSurfaceInfo->GetPointer();
    if (pSurfaceInfo->GetPointer()->surface == VK_NULL_HANDLE) { return; }
    MapStructHandles(pSurfaceInfo->GetMetaStructPointer(), GetObjectInfoTable());
    auto in_pSurfaceInfo_meta = pSurfaceInfo->GetMetaStructPointer();
    if (GetObjectInfoTable().GetSurfaceKHRInfo(in_pSurfaceInfo_meta->surface) == nullptr || GetObjectInfoTable().GetSurfaceKHRInfo(in_pSurfaceInfo_meta->surface)->surface_creation_skipped) { return; }
    VkDeviceGroupPresentModeFlagsKHR* out_pModes = pModes->IsNull() ? nullptr : pModes->AllocateOutputData(1, static_cast<VkDeviceGroupPresentModeFlagsKHR>(0));//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->GetDeviceGroupSurfacePresentModes2EXT(in_device, in_pSurfaceInfo, out_pModes);
    CheckResult("vkGetDeviceGroupSurfacePresentModes2EXT", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkCreateHeadlessSurfaceEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkHeadlessSurfaceCreateInfoEXT>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    auto in_instance = GetObjectInfoTable().GetInstanceInfo(instance);
    if (!pSurface->IsNull()) { pSurface->SetHandleLength(1); }
    SurfaceKHRInfo handle_info;
    pSurface->SetConsumerData(0, &handle_info);//@@@DFK
    VkResult replay_result = OverrideCreateHeadlessSurfaceEXT(GetInstanceTable(in_instance->handle)->CreateHeadlessSurfaceEXT, returnValue, in_instance, pCreateInfo, pAllocator, pSurface);
    CheckResult("vkCreateHeadlessSurfaceEXT", returnValue, replay_result, call_info);

    AddHandle<SurfaceKHRInfo>(instance, pSurface->GetPointer(), pSurface->GetHandlePointer(), std::move(handle_info), &VulkanObjectInfoTable::AddSurfaceKHRInfo);
}

void VulkanReplayConsumer::Process_vkCmdSetLineStippleEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    lineStippleFactor,
    uint16_t                                    lineStipplePattern)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetLineStippleEXT(in_commandBuffer, lineStippleFactor, lineStipplePattern);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetLineStippleEXT(dumper.GetClonedCommandBuffer(), lineStippleFactor, lineStipplePattern)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkResetQueryPoolEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            queryPool,
    uint32_t                                    firstQuery,
    uint32_t                                    queryCount)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkQueryPool in_queryPool = MapHandle<QueryPoolInfo>(queryPool, &VulkanObjectInfoTable::GetQueryPoolInfo);//@@@DFK
    GetDeviceTable(in_device)->ResetQueryPoolEXT(in_device, in_queryPool, firstQuery, queryCount);//@@@HQA
}

void VulkanReplayConsumer::Process_vkCmdSetCullModeEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkCullModeFlags                             cullMode)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetCullModeEXT(in_commandBuffer, cullMode);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetCullModeEXT(dumper.GetClonedCommandBuffer(), cullMode)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetFrontFaceEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkFrontFace                                 frontFace)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetFrontFaceEXT(in_commandBuffer, frontFace);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetFrontFaceEXT(dumper.GetClonedCommandBuffer(), frontFace)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetPrimitiveTopologyEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkPrimitiveTopology                         primitiveTopology)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetPrimitiveTopologyEXT(in_commandBuffer, primitiveTopology);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetPrimitiveTopologyEXT(dumper.GetClonedCommandBuffer(), primitiveTopology)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetViewportWithCountEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    viewportCount,
    StructPointerDecoder<Decoded_VkViewport>/*@@@PLQ*/* pViewports)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkViewport* in_pViewports = pViewports->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetViewportWithCountEXT(in_commandBuffer, viewportCount, in_pViewports);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetViewportWithCountEXT(dumper.GetClonedCommandBuffer(), viewportCount, in_pViewports)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetScissorWithCountEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    scissorCount,
    StructPointerDecoder<Decoded_VkRect2D>/*@@@PLQ*/* pScissors)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkRect2D* in_pScissors = pScissors->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetScissorWithCountEXT(in_commandBuffer, scissorCount, in_pScissors);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetScissorWithCountEXT(dumper.GetClonedCommandBuffer(), scissorCount, in_pScissors)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdBindVertexBuffers2EXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    firstBinding,
    uint32_t                                    bindingCount,
    HandlePointerDecoder<VkBuffer>*             pBuffers,
    PointerDecoder<VkDeviceSize>*               pOffsets,
    PointerDecoder<VkDeviceSize>*               pSizes,
    PointerDecoder<VkDeviceSize>*               pStrides)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkBuffer* in_pBuffers = MapHandles<BufferInfo>(pBuffers, bindingCount, &VulkanObjectInfoTable::GetBufferInfo);
    const VkDeviceSize* in_pOffsets = pOffsets->GetPointer();
    const VkDeviceSize* in_pSizes = pSizes->GetPointer();
    const VkDeviceSize* in_pStrides = pStrides->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdBindVertexBuffers2EXT(in_commandBuffer, firstBinding, bindingCount, in_pBuffers, in_pOffsets, in_pSizes, in_pStrides);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdBindVertexBuffers2EXT(dumper.GetClonedCommandBuffer(), firstBinding, bindingCount, in_pBuffers, in_pOffsets, in_pSizes, in_pStrides)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetDepthTestEnableEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    depthTestEnable)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetDepthTestEnableEXT(in_commandBuffer, depthTestEnable);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetDepthTestEnableEXT(dumper.GetClonedCommandBuffer(), depthTestEnable)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetDepthWriteEnableEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    depthWriteEnable)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetDepthWriteEnableEXT(in_commandBuffer, depthWriteEnable);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetDepthWriteEnableEXT(dumper.GetClonedCommandBuffer(), depthWriteEnable)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetDepthCompareOpEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkCompareOp                                 depthCompareOp)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetDepthCompareOpEXT(in_commandBuffer, depthCompareOp);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetDepthCompareOpEXT(dumper.GetClonedCommandBuffer(), depthCompareOp)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetDepthBoundsTestEnableEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    depthBoundsTestEnable)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetDepthBoundsTestEnableEXT(in_commandBuffer, depthBoundsTestEnable);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetDepthBoundsTestEnableEXT(dumper.GetClonedCommandBuffer(), depthBoundsTestEnable)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetStencilTestEnableEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    stencilTestEnable)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetStencilTestEnableEXT(in_commandBuffer, stencilTestEnable);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetStencilTestEnableEXT(dumper.GetClonedCommandBuffer(), stencilTestEnable)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetStencilOpEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkStencilFaceFlags                          faceMask,
    VkStencilOp                                 failOp,
    VkStencilOp                                 passOp,
    VkStencilOp                                 depthFailOp,
    VkCompareOp                                 compareOp)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetStencilOpEXT(in_commandBuffer, faceMask, failOp, passOp, depthFailOp, compareOp);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetStencilOpEXT(dumper.GetClonedCommandBuffer(), faceMask, failOp, passOp, depthFailOp, compareOp)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCopyMemoryToImageEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkCopyMemoryToImageInfoEXT>/*@@@PLQ*/* pCopyMemoryToImageInfo)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkCopyMemoryToImageInfoEXT* in_pCopyMemoryToImageInfo = pCopyMemoryToImageInfo->GetPointer();
    MapStructHandles(pCopyMemoryToImageInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->CopyMemoryToImageEXT(in_device, in_pCopyMemoryToImageInfo);
    CheckResult("vkCopyMemoryToImageEXT", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkCopyImageToMemoryEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkCopyImageToMemoryInfoEXT>/*@@@PLQ*/* pCopyImageToMemoryInfo)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkCopyImageToMemoryInfoEXT* in_pCopyImageToMemoryInfo = pCopyImageToMemoryInfo->GetPointer();
    MapStructHandles(pCopyImageToMemoryInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->CopyImageToMemoryEXT(in_device, in_pCopyImageToMemoryInfo);
    CheckResult("vkCopyImageToMemoryEXT", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkCopyImageToImageEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkCopyImageToImageInfoEXT>/*@@@PLQ*/* pCopyImageToImageInfo)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkCopyImageToImageInfoEXT* in_pCopyImageToImageInfo = pCopyImageToImageInfo->GetPointer();
    MapStructHandles(pCopyImageToImageInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->CopyImageToImageEXT(in_device, in_pCopyImageToImageInfo);
    CheckResult("vkCopyImageToImageEXT", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkTransitionImageLayoutEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    transitionCount,
    StructPointerDecoder<Decoded_VkHostImageLayoutTransitionInfoEXT>/*@@@PLQ*/* pTransitions)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkHostImageLayoutTransitionInfoEXT* in_pTransitions = pTransitions->GetPointer();
    MapStructArrayHandles(pTransitions->GetMetaStructPointer(), pTransitions->GetLength(), GetObjectInfoTable());//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->TransitionImageLayoutEXT(in_device, transitionCount, in_pTransitions);
    CheckResult("vkTransitionImageLayoutEXT", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetImageSubresourceLayout2EXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            image,
    StructPointerDecoder<Decoded_VkImageSubresource2KHR>/*@@@PLQ*/* pSubresource,
    StructPointerDecoder<Decoded_VkSubresourceLayout2KHR>/*@@@PLQ*/* pLayout)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkImage in_image = MapHandle<ImageInfo>(image, &VulkanObjectInfoTable::GetImageInfo);
    const VkImageSubresource2KHR* in_pSubresource = pSubresource->GetPointer();
    VkSubresourceLayout2KHR* out_pLayout = pLayout->IsNull() ? nullptr : pLayout->AllocateOutputData(1, { VK_STRUCTURE_TYPE_SUBRESOURCE_LAYOUT_2_KHR, nullptr });
    InitializeOutputStructPNext(pLayout);//@@@DFK
    GetDeviceTable(in_device)->GetImageSubresourceLayout2EXT(in_device, in_image, in_pSubresource, out_pLayout);//@@@HQA
}

void VulkanReplayConsumer::Process_vkReleaseSwapchainImagesEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkReleaseSwapchainImagesInfoEXT>/*@@@PLQ*/* pReleaseInfo)
{
    if (options_.swapchain_option == util::SwapchainOption::kOffscreen)
    {
        GFXRECON_LOG_DEBUG("Skip vkReleaseSwapchainImagesEXT for offscreen.");
        return;
    }
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkReleaseSwapchainImagesInfoEXT* in_pReleaseInfo = pReleaseInfo->GetPointer();
    MapStructHandles(pReleaseInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->ReleaseSwapchainImagesEXT(in_device, in_pReleaseInfo);
    CheckResult("vkReleaseSwapchainImagesEXT", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetGeneratedCommandsMemoryRequirementsNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkGeneratedCommandsMemoryRequirementsInfoNV>/*@@@PLQ*/* pInfo,
    StructPointerDecoder<Decoded_VkMemoryRequirements2>/*@@@PLQ*/* pMemoryRequirements)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkGeneratedCommandsMemoryRequirementsInfoNV* in_pInfo = pInfo->GetPointer();
    MapStructHandles(pInfo->GetMetaStructPointer(), GetObjectInfoTable());
    VkMemoryRequirements2* out_pMemoryRequirements = pMemoryRequirements->IsNull() ? nullptr : pMemoryRequirements->AllocateOutputData(1, { VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2, nullptr });
    InitializeOutputStructPNext(pMemoryRequirements);//@@@DFK
    GetDeviceTable(in_device)->GetGeneratedCommandsMemoryRequirementsNV(in_device, in_pInfo, out_pMemoryRequirements);//@@@HQA
}

void VulkanReplayConsumer::Process_vkCmdPreprocessGeneratedCommandsNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkGeneratedCommandsInfoNV>/*@@@PLQ*/* pGeneratedCommandsInfo)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkGeneratedCommandsInfoNV* in_pGeneratedCommandsInfo = pGeneratedCommandsInfo->GetPointer();
    MapStructHandles(pGeneratedCommandsInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdPreprocessGeneratedCommandsNV(in_commandBuffer, in_pGeneratedCommandsInfo);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdPreprocessGeneratedCommandsNV(dumper.GetClonedCommandBuffer(), in_pGeneratedCommandsInfo)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdExecuteGeneratedCommandsNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    isPreprocessed,
    StructPointerDecoder<Decoded_VkGeneratedCommandsInfoNV>/*@@@PLQ*/* pGeneratedCommandsInfo)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkGeneratedCommandsInfoNV* in_pGeneratedCommandsInfo = pGeneratedCommandsInfo->GetPointer();
    MapStructHandles(pGeneratedCommandsInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdExecuteGeneratedCommandsNV(in_commandBuffer, isPreprocessed, in_pGeneratedCommandsInfo);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdExecuteGeneratedCommandsNV(dumper.GetClonedCommandBuffer(), isPreprocessed, in_pGeneratedCommandsInfo)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdBindPipelineShaderGroupNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkPipelineBindPoint                         pipelineBindPoint,
    format::HandleId                            pipeline,
    uint32_t                                    groupIndex)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkPipeline in_pipeline = MapHandle<PipelineInfo>(pipeline, &VulkanObjectInfoTable::GetPipelineInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdBindPipelineShaderGroupNV(in_commandBuffer, pipelineBindPoint, in_pipeline, groupIndex);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdBindPipelineShaderGroupNV(dumper.GetClonedCommandBuffer(), pipelineBindPoint, in_pipeline, groupIndex)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCreateIndirectCommandsLayoutNV(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkIndirectCommandsLayoutCreateInfoNV>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkIndirectCommandsLayoutNV>* pIndirectCommandsLayout)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkIndirectCommandsLayoutCreateInfoNV* in_pCreateInfo = pCreateInfo->GetPointer();
    MapStructHandles(pCreateInfo->GetMetaStructPointer(), GetObjectInfoTable());
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    if (!pIndirectCommandsLayout->IsNull()) { pIndirectCommandsLayout->SetHandleLength(1); }
    VkIndirectCommandsLayoutNV* out_pIndirectCommandsLayout = pIndirectCommandsLayout->GetHandlePointer();//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->CreateIndirectCommandsLayoutNV(in_device, in_pCreateInfo, in_pAllocator, out_pIndirectCommandsLayout);
    CheckResult("vkCreateIndirectCommandsLayoutNV", returnValue, replay_result, call_info);

    AddHandle<IndirectCommandsLayoutNVInfo>(device, pIndirectCommandsLayout->GetPointer(), out_pIndirectCommandsLayout, &VulkanObjectInfoTable::AddIndirectCommandsLayoutNVInfo);
}

void VulkanReplayConsumer::Process_vkDestroyIndirectCommandsLayoutNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            indirectCommandsLayout,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkIndirectCommandsLayoutNV in_indirectCommandsLayout = MapHandle<IndirectCommandsLayoutNVInfo>(indirectCommandsLayout, &VulkanObjectInfoTable::GetIndirectCommandsLayoutNVInfo);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);//@@@DFK
    GetDeviceTable(in_device)->DestroyIndirectCommandsLayoutNV(in_device, in_indirectCommandsLayout, in_pAllocator);//@@@HQA
    RemoveHandle(indirectCommandsLayout, &VulkanObjectInfoTable::RemoveIndirectCommandsLayoutNVInfo);
}

void VulkanReplayConsumer::Process_vkCmdSetDepthBias2EXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkDepthBiasInfoEXT>/*@@@PLQ*/* pDepthBiasInfo)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkDepthBiasInfoEXT* in_pDepthBiasInfo = pDepthBiasInfo->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetDepthBias2EXT(in_commandBuffer, in_pDepthBiasInfo);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetDepthBias2EXT(dumper.GetClonedCommandBuffer(), in_pDepthBiasInfo)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkAcquireDrmDisplayEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    int32_t                                     drmFd,
    format::HandleId                            display)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    VkDisplayKHR in_display = MapHandle<DisplayKHRInfo>(display, &VulkanObjectInfoTable::GetDisplayKHRInfo);//@@@DFK
    VkResult replay_result = GetInstanceTable(in_physicalDevice)->AcquireDrmDisplayEXT(in_physicalDevice, drmFd, in_display);
    CheckResult("vkAcquireDrmDisplayEXT", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetDrmDisplayEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    int32_t                                     drmFd,
    uint32_t                                    connectorId,
    HandlePointerDecoder<VkDisplayKHR>*         display)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    if (!display->IsNull()) { display->SetHandleLength(1); }
    VkDisplayKHR* out_display = display->GetHandlePointer();//@@@DFK
    VkResult replay_result = GetInstanceTable(in_physicalDevice)->GetDrmDisplayEXT(in_physicalDevice, drmFd, connectorId, out_display);
    CheckResult("vkGetDrmDisplayEXT", returnValue, replay_result, call_info);

    AddHandle<DisplayKHRInfo>(physicalDevice, display->GetPointer(), out_display, &VulkanObjectInfoTable::AddDisplayKHRInfo);
}

void VulkanReplayConsumer::Process_vkCreatePrivateDataSlotEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkPrivateDataSlotCreateInfo>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkPrivateDataSlot>*    pPrivateDataSlot)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkPrivateDataSlotCreateInfo* in_pCreateInfo = pCreateInfo->GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    if (!pPrivateDataSlot->IsNull()) { pPrivateDataSlot->SetHandleLength(1); }
    VkPrivateDataSlot* out_pPrivateDataSlot = pPrivateDataSlot->GetHandlePointer();//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->CreatePrivateDataSlotEXT(in_device, in_pCreateInfo, in_pAllocator, out_pPrivateDataSlot);
    CheckResult("vkCreatePrivateDataSlotEXT", returnValue, replay_result, call_info);

    AddHandle<PrivateDataSlotInfo>(device, pPrivateDataSlot->GetPointer(), out_pPrivateDataSlot, &VulkanObjectInfoTable::AddPrivateDataSlotInfo);
}

void VulkanReplayConsumer::Process_vkDestroyPrivateDataSlotEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            privateDataSlot,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkPrivateDataSlot in_privateDataSlot = MapHandle<PrivateDataSlotInfo>(privateDataSlot, &VulkanObjectInfoTable::GetPrivateDataSlotInfo);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);//@@@DFK
    GetDeviceTable(in_device)->DestroyPrivateDataSlotEXT(in_device, in_privateDataSlot, in_pAllocator);//@@@HQA
    RemoveHandle(privateDataSlot, &VulkanObjectInfoTable::RemovePrivateDataSlotInfo);
}

void VulkanReplayConsumer::Process_vkSetPrivateDataEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    VkObjectType                                objectType,
    uint64_t                                    objectHandle,
    format::HandleId                            privateDataSlot,
    uint64_t                                    data)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    uint64_t in_objectHandle = MapHandle(objectHandle, objectType);
    VkPrivateDataSlot in_privateDataSlot = MapHandle<PrivateDataSlotInfo>(privateDataSlot, &VulkanObjectInfoTable::GetPrivateDataSlotInfo);//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->SetPrivateDataEXT(in_device, objectType, in_objectHandle, in_privateDataSlot, data);
    CheckResult("vkSetPrivateDataEXT", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetPrivateDataEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    VkObjectType                                objectType,
    uint64_t                                    objectHandle,
    format::HandleId                            privateDataSlot,
    PointerDecoder<uint64_t>*                   pData)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    uint64_t in_objectHandle = MapHandle(objectHandle, objectType);
    VkPrivateDataSlot in_privateDataSlot = MapHandle<PrivateDataSlotInfo>(privateDataSlot, &VulkanObjectInfoTable::GetPrivateDataSlotInfo);
    uint64_t* out_pData = pData->IsNull() ? nullptr : pData->AllocateOutputData(1, static_cast<uint64_t>(0));//@@@DFK
    GetDeviceTable(in_device)->GetPrivateDataEXT(in_device, objectType, in_objectHandle, in_privateDataSlot, out_pData);//@@@HQA
}

void VulkanReplayConsumer::Process_vkCmdSetFragmentShadingRateEnumNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkFragmentShadingRateNV                     shadingRate,
    PointerDecoder<VkFragmentShadingRateCombinerOpKHR>* combinerOps)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkFragmentShadingRateCombinerOpKHR* in_combinerOps = combinerOps->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetFragmentShadingRateEnumNV(in_commandBuffer, shadingRate, in_combinerOps);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetFragmentShadingRateEnumNV(dumper.GetClonedCommandBuffer(), shadingRate, in_combinerOps)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkGetDeviceFaultInfoEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDeviceFaultCountsEXT>/*@@@PLQ*/* pFaultCounts,
    StructPointerDecoder<Decoded_VkDeviceFaultInfoEXT>/*@@@PLQ*/* pFaultInfo)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkDeviceFaultCountsEXT* out_pFaultCounts = pFaultCounts->IsNull() ? nullptr : pFaultCounts->AllocateOutputData(1, { VK_STRUCTURE_TYPE_DEVICE_FAULT_COUNTS_EXT, nullptr });
    InitializeOutputStructPNext(pFaultCounts);
    VkDeviceFaultInfoEXT* out_pFaultInfo = pFaultInfo->IsNull() ? nullptr : pFaultInfo->AllocateOutputData(1, { VK_STRUCTURE_TYPE_DEVICE_FAULT_INFO_EXT, nullptr });
    InitializeOutputStructPNext(pFaultInfo);//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->GetDeviceFaultInfoEXT(in_device, out_pFaultCounts, out_pFaultInfo);
    CheckResult("vkGetDeviceFaultInfoEXT", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkAcquireWinrtDisplayNV(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            display)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    VkDisplayKHR in_display = MapHandle<DisplayKHRInfo>(display, &VulkanObjectInfoTable::GetDisplayKHRInfo);//@@@DFK
    VkResult replay_result = GetInstanceTable(in_physicalDevice)->AcquireWinrtDisplayNV(in_physicalDevice, in_display);
    CheckResult("vkAcquireWinrtDisplayNV", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetWinrtDisplayNV(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    uint32_t                                    deviceRelativeId,
    HandlePointerDecoder<VkDisplayKHR>*         pDisplay)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    if (!pDisplay->IsNull()) { pDisplay->SetHandleLength(1); }
    VkDisplayKHR* out_pDisplay = pDisplay->GetHandlePointer();//@@@DFK
    VkResult replay_result = GetInstanceTable(in_physicalDevice)->GetWinrtDisplayNV(in_physicalDevice, deviceRelativeId, out_pDisplay);
    CheckResult("vkGetWinrtDisplayNV", returnValue, replay_result, call_info);

    AddHandle<DisplayKHRInfo>(physicalDevice, pDisplay->GetPointer(), out_pDisplay, &VulkanObjectInfoTable::AddDisplayKHRInfo);
}

void VulkanReplayConsumer::Process_vkCreateDirectFBSurfaceEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkDirectFBSurfaceCreateInfoEXT>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    VkInstance in_instance = MapHandle<InstanceInfo>(instance, &VulkanObjectInfoTable::GetInstanceInfo);
    const VkDirectFBSurfaceCreateInfoEXT* in_pCreateInfo = pCreateInfo->GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    if (!pSurface->IsNull()) { pSurface->SetHandleLength(1); }
    VkSurfaceKHR* out_pSurface = pSurface->GetHandlePointer();//@@@DFK
    VkResult replay_result = GetInstanceTable(in_instance)->CreateDirectFBSurfaceEXT(in_instance, in_pCreateInfo, in_pAllocator, out_pSurface);
    CheckResult("vkCreateDirectFBSurfaceEXT", returnValue, replay_result, call_info);

    AddHandle<SurfaceKHRInfo>(instance, pSurface->GetPointer(), out_pSurface, &VulkanObjectInfoTable::AddSurfaceKHRInfo);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceDirectFBPresentationSupportEXT(
    const ApiCallInfo&                          call_info,
    VkBool32                                    returnValue,
    format::HandleId                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    uint64_t                                    dfb)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    IDirectFB* in_dfb = static_cast<IDirectFB*>(PreProcessExternalObject(dfb, format::ApiCallId::ApiCall_vkGetPhysicalDeviceDirectFBPresentationSupportEXT, "vkGetPhysicalDeviceDirectFBPresentationSupportEXT"));//@@@DFK
    GetInstanceTable(in_physicalDevice)->GetPhysicalDeviceDirectFBPresentationSupportEXT(in_physicalDevice, queueFamilyIndex, in_dfb);//@@@HQA
}

void VulkanReplayConsumer::Process_vkCmdSetVertexInputEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    vertexBindingDescriptionCount,
    StructPointerDecoder<Decoded_VkVertexInputBindingDescription2EXT>/*@@@PLQ*/* pVertexBindingDescriptions,
    uint32_t                                    vertexAttributeDescriptionCount,
    StructPointerDecoder<Decoded_VkVertexInputAttributeDescription2EXT>/*@@@PLQ*/* pVertexAttributeDescriptions)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkVertexInputBindingDescription2EXT* in_pVertexBindingDescriptions = pVertexBindingDescriptions->GetPointer();
    const VkVertexInputAttributeDescription2EXT* in_pVertexAttributeDescriptions = pVertexAttributeDescriptions->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetVertexInputEXT(in_commandBuffer, vertexBindingDescriptionCount, in_pVertexBindingDescriptions, vertexAttributeDescriptionCount, in_pVertexAttributeDescriptions);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetVertexInputEXT(dumper.GetClonedCommandBuffer(), vertexBindingDescriptionCount, in_pVertexBindingDescriptions, vertexAttributeDescriptionCount, in_pVertexAttributeDescriptions)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkGetMemoryZirconHandleFUCHSIA(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkMemoryGetZirconHandleInfoFUCHSIA>/*@@@PLQ*/* pGetZirconHandleInfo,
    PointerDecoder<uint32_t>*                   pZirconHandle)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkMemoryGetZirconHandleInfoFUCHSIA* in_pGetZirconHandleInfo = pGetZirconHandleInfo->GetPointer();
    MapStructHandles(pGetZirconHandleInfo->GetMetaStructPointer(), GetObjectInfoTable());
    zx_handle_t* out_pZirconHandle = pZirconHandle->IsNull() ? nullptr : pZirconHandle->AllocateOutputData(1, static_cast<uint32_t>(0));//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->GetMemoryZirconHandleFUCHSIA(in_device, in_pGetZirconHandleInfo, out_pZirconHandle);
    CheckResult("vkGetMemoryZirconHandleFUCHSIA", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetMemoryZirconHandlePropertiesFUCHSIA(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    VkExternalMemoryHandleTypeFlagBits          handleType,
    uint32_t                                    zirconHandle,
    StructPointerDecoder<Decoded_VkMemoryZirconHandlePropertiesFUCHSIA>/*@@@PLQ*/* pMemoryZirconHandleProperties)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkMemoryZirconHandlePropertiesFUCHSIA* out_pMemoryZirconHandleProperties = pMemoryZirconHandleProperties->IsNull() ? nullptr : pMemoryZirconHandleProperties->AllocateOutputData(1, { VK_STRUCTURE_TYPE_MEMORY_ZIRCON_HANDLE_PROPERTIES_FUCHSIA, nullptr });
    InitializeOutputStructPNext(pMemoryZirconHandleProperties);//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->GetMemoryZirconHandlePropertiesFUCHSIA(in_device, handleType, zirconHandle, out_pMemoryZirconHandleProperties);
    CheckResult("vkGetMemoryZirconHandlePropertiesFUCHSIA", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkImportSemaphoreZirconHandleFUCHSIA(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkImportSemaphoreZirconHandleInfoFUCHSIA>/*@@@PLQ*/* pImportSemaphoreZirconHandleInfo)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkImportSemaphoreZirconHandleInfoFUCHSIA* in_pImportSemaphoreZirconHandleInfo = pImportSemaphoreZirconHandleInfo->GetPointer();
    MapStructHandles(pImportSemaphoreZirconHandleInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->ImportSemaphoreZirconHandleFUCHSIA(in_device, in_pImportSemaphoreZirconHandleInfo);
    CheckResult("vkImportSemaphoreZirconHandleFUCHSIA", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkGetSemaphoreZirconHandleFUCHSIA(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkSemaphoreGetZirconHandleInfoFUCHSIA>/*@@@PLQ*/* pGetZirconHandleInfo,
    PointerDecoder<uint32_t>*                   pZirconHandle)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkSemaphoreGetZirconHandleInfoFUCHSIA* in_pGetZirconHandleInfo = pGetZirconHandleInfo->GetPointer();
    MapStructHandles(pGetZirconHandleInfo->GetMetaStructPointer(), GetObjectInfoTable());
    zx_handle_t* out_pZirconHandle = pZirconHandle->IsNull() ? nullptr : pZirconHandle->AllocateOutputData(1, static_cast<uint32_t>(0));//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->GetSemaphoreZirconHandleFUCHSIA(in_device, in_pGetZirconHandleInfo, out_pZirconHandle);
    CheckResult("vkGetSemaphoreZirconHandleFUCHSIA", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkCmdBindInvocationMaskHUAWEI(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            imageView,
    VkImageLayout                               imageLayout)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkImageView in_imageView = MapHandle<ImageViewInfo>(imageView, &VulkanObjectInfoTable::GetImageViewInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdBindInvocationMaskHUAWEI(in_commandBuffer, in_imageView, imageLayout);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdBindInvocationMaskHUAWEI(dumper.GetClonedCommandBuffer(), in_imageView, imageLayout)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkGetMemoryRemoteAddressNV(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkMemoryGetRemoteAddressInfoNV>/*@@@PLQ*/* pMemoryGetRemoteAddressInfo,
    PointerDecoder<uint64_t, void*>*            pAddress)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkMemoryGetRemoteAddressInfoNV* in_pMemoryGetRemoteAddressInfo = pMemoryGetRemoteAddressInfo->GetPointer();
    MapStructHandles(pMemoryGetRemoteAddressInfo->GetMetaStructPointer(), GetObjectInfoTable());
    VkRemoteAddressNV* out_pAddress = pAddress->IsNull() ? nullptr : reinterpret_cast<VkRemoteAddressNV*>(pAddress->AllocateOutputData(1));//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->GetMemoryRemoteAddressNV(in_device, in_pMemoryGetRemoteAddressInfo, out_pAddress);
    CheckResult("vkGetMemoryRemoteAddressNV", returnValue, replay_result, call_info);

    PostProcessExternalObject(replay_result, (*pAddress->GetPointer()), static_cast<void*>(*out_pAddress), format::ApiCallId::ApiCall_vkGetMemoryRemoteAddressNV, "vkGetMemoryRemoteAddressNV");
}

void VulkanReplayConsumer::Process_vkCmdSetPatchControlPointsEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    patchControlPoints)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetPatchControlPointsEXT(in_commandBuffer, patchControlPoints);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetPatchControlPointsEXT(dumper.GetClonedCommandBuffer(), patchControlPoints)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetRasterizerDiscardEnableEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    rasterizerDiscardEnable)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetRasterizerDiscardEnableEXT(in_commandBuffer, rasterizerDiscardEnable);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetRasterizerDiscardEnableEXT(dumper.GetClonedCommandBuffer(), rasterizerDiscardEnable)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetDepthBiasEnableEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    depthBiasEnable)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetDepthBiasEnableEXT(in_commandBuffer, depthBiasEnable);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetDepthBiasEnableEXT(dumper.GetClonedCommandBuffer(), depthBiasEnable)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetLogicOpEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkLogicOp                                   logicOp)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetLogicOpEXT(in_commandBuffer, logicOp);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetLogicOpEXT(dumper.GetClonedCommandBuffer(), logicOp)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetPrimitiveRestartEnableEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    primitiveRestartEnable)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetPrimitiveRestartEnableEXT(in_commandBuffer, primitiveRestartEnable);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetPrimitiveRestartEnableEXT(dumper.GetClonedCommandBuffer(), primitiveRestartEnable)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCreateScreenSurfaceQNX(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkScreenSurfaceCreateInfoQNX>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    VkInstance in_instance = MapHandle<InstanceInfo>(instance, &VulkanObjectInfoTable::GetInstanceInfo);
    const VkScreenSurfaceCreateInfoQNX* in_pCreateInfo = pCreateInfo->GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    if (!pSurface->IsNull()) { pSurface->SetHandleLength(1); }
    VkSurfaceKHR* out_pSurface = pSurface->GetHandlePointer();//@@@DFK
    VkResult replay_result = GetInstanceTable(in_instance)->CreateScreenSurfaceQNX(in_instance, in_pCreateInfo, in_pAllocator, out_pSurface);
    CheckResult("vkCreateScreenSurfaceQNX", returnValue, replay_result, call_info);

    AddHandle<SurfaceKHRInfo>(instance, pSurface->GetPointer(), out_pSurface, &VulkanObjectInfoTable::AddSurfaceKHRInfo);
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceScreenPresentationSupportQNX(
    const ApiCallInfo&                          call_info,
    VkBool32                                    returnValue,
    format::HandleId                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    uint64_t                                    window)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    struct _screen_window* in_window = static_cast<struct _screen_window*>(PreProcessExternalObject(window, format::ApiCallId::ApiCall_vkGetPhysicalDeviceScreenPresentationSupportQNX, "vkGetPhysicalDeviceScreenPresentationSupportQNX"));//@@@DFK
    GetInstanceTable(in_physicalDevice)->GetPhysicalDeviceScreenPresentationSupportQNX(in_physicalDevice, queueFamilyIndex, in_window);//@@@HQA
}

void VulkanReplayConsumer::Process_vkCmdSetColorWriteEnableEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    attachmentCount,
    PointerDecoder<VkBool32>*                   pColorWriteEnables)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkBool32* in_pColorWriteEnables = pColorWriteEnables->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetColorWriteEnableEXT(in_commandBuffer, attachmentCount, in_pColorWriteEnables);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetColorWriteEnableEXT(dumper.GetClonedCommandBuffer(), attachmentCount, in_pColorWriteEnables)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdDrawMultiEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    drawCount,
    StructPointerDecoder<Decoded_VkMultiDrawInfoEXT>/*@@@PLQ*/* pVertexInfo,
    uint32_t                                    instanceCount,
    uint32_t                                    firstInstance,
    uint32_t                                    stride)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkMultiDrawInfoEXT* in_pVertexInfo = pVertexInfo->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdDrawMultiEXT(in_commandBuffer, drawCount, in_pVertexInfo, instanceCount, firstInstance, stride);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdDrawMultiEXT(dumper.GetClonedCommandBuffer(), drawCount, in_pVertexInfo, instanceCount, firstInstance, stride)/*@@@ABC*/;//@@@HERE
        if (dumper.DumpingDrawCallIndex(call_info.index))
        {
            dumper.FinalizeCommandBuffer(*GetDeviceTable(in_commandBuffer));
        }
    }
}

void VulkanReplayConsumer::Process_vkCmdDrawMultiIndexedEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    drawCount,
    StructPointerDecoder<Decoded_VkMultiDrawIndexedInfoEXT>/*@@@PLQ*/* pIndexInfo,
    uint32_t                                    instanceCount,
    uint32_t                                    firstInstance,
    uint32_t                                    stride,
    PointerDecoder<int32_t>*                    pVertexOffset)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkMultiDrawIndexedInfoEXT* in_pIndexInfo = pIndexInfo->GetPointer();
    const int32_t* in_pVertexOffset = pVertexOffset->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdDrawMultiIndexedEXT(in_commandBuffer, drawCount, in_pIndexInfo, instanceCount, firstInstance, stride, in_pVertexOffset);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdDrawMultiIndexedEXT(dumper.GetClonedCommandBuffer(), drawCount, in_pIndexInfo, instanceCount, firstInstance, stride, in_pVertexOffset)/*@@@ABC*/;//@@@HERE
        if (dumper.DumpingDrawCallIndex(call_info.index))
        {
            dumper.FinalizeCommandBuffer(*GetDeviceTable(in_commandBuffer));
        }
    }
}

void VulkanReplayConsumer::Process_vkCreateMicromapEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkMicromapCreateInfoEXT>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkMicromapEXT>*        pMicromap)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkMicromapCreateInfoEXT* in_pCreateInfo = pCreateInfo->GetPointer();
    MapStructHandles(pCreateInfo->GetMetaStructPointer(), GetObjectInfoTable());
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    if (!pMicromap->IsNull()) { pMicromap->SetHandleLength(1); }
    VkMicromapEXT* out_pMicromap = pMicromap->GetHandlePointer();//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->CreateMicromapEXT(in_device, in_pCreateInfo, in_pAllocator, out_pMicromap);
    CheckResult("vkCreateMicromapEXT", returnValue, replay_result, call_info);

    AddHandle<MicromapEXTInfo>(device, pMicromap->GetPointer(), out_pMicromap, &VulkanObjectInfoTable::AddMicromapEXTInfo);
}

void VulkanReplayConsumer::Process_vkDestroyMicromapEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            micromap,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkMicromapEXT in_micromap = MapHandle<MicromapEXTInfo>(micromap, &VulkanObjectInfoTable::GetMicromapEXTInfo);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);//@@@DFK
    GetDeviceTable(in_device)->DestroyMicromapEXT(in_device, in_micromap, in_pAllocator);//@@@HQA
    RemoveHandle(micromap, &VulkanObjectInfoTable::RemoveMicromapEXTInfo);
}

void VulkanReplayConsumer::Process_vkCmdBuildMicromapsEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    infoCount,
    StructPointerDecoder<Decoded_VkMicromapBuildInfoEXT>/*@@@PLQ*/* pInfos)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkMicromapBuildInfoEXT* in_pInfos = pInfos->GetPointer();
    MapStructArrayHandles(pInfos->GetMetaStructPointer(), pInfos->GetLength(), GetObjectInfoTable());//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdBuildMicromapsEXT(in_commandBuffer, infoCount, in_pInfos);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdBuildMicromapsEXT(dumper.GetClonedCommandBuffer(), infoCount, in_pInfos)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkBuildMicromapsEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            deferredOperation,
    uint32_t                                    infoCount,
    StructPointerDecoder<Decoded_VkMicromapBuildInfoEXT>/*@@@PLQ*/* pInfos)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkDeferredOperationKHR in_deferredOperation = MapHandle<DeferredOperationKHRInfo>(deferredOperation, &VulkanObjectInfoTable::GetDeferredOperationKHRInfo);
    const VkMicromapBuildInfoEXT* in_pInfos = pInfos->GetPointer();
    MapStructArrayHandles(pInfos->GetMetaStructPointer(), pInfos->GetLength(), GetObjectInfoTable());//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->BuildMicromapsEXT(in_device, in_deferredOperation, infoCount, in_pInfos);
    CheckResult("vkBuildMicromapsEXT", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkCopyMicromapEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            deferredOperation,
    StructPointerDecoder<Decoded_VkCopyMicromapInfoEXT>/*@@@PLQ*/* pInfo)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkDeferredOperationKHR in_deferredOperation = MapHandle<DeferredOperationKHRInfo>(deferredOperation, &VulkanObjectInfoTable::GetDeferredOperationKHRInfo);
    const VkCopyMicromapInfoEXT* in_pInfo = pInfo->GetPointer();
    MapStructHandles(pInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->CopyMicromapEXT(in_device, in_deferredOperation, in_pInfo);
    CheckResult("vkCopyMicromapEXT", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkCopyMicromapToMemoryEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            deferredOperation,
    StructPointerDecoder<Decoded_VkCopyMicromapToMemoryInfoEXT>/*@@@PLQ*/* pInfo)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkDeferredOperationKHR in_deferredOperation = MapHandle<DeferredOperationKHRInfo>(deferredOperation, &VulkanObjectInfoTable::GetDeferredOperationKHRInfo);
    const VkCopyMicromapToMemoryInfoEXT* in_pInfo = pInfo->GetPointer();
    MapStructHandles(pInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->CopyMicromapToMemoryEXT(in_device, in_deferredOperation, in_pInfo);
    CheckResult("vkCopyMicromapToMemoryEXT", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkCopyMemoryToMicromapEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            deferredOperation,
    StructPointerDecoder<Decoded_VkCopyMemoryToMicromapInfoEXT>/*@@@PLQ*/* pInfo)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkDeferredOperationKHR in_deferredOperation = MapHandle<DeferredOperationKHRInfo>(deferredOperation, &VulkanObjectInfoTable::GetDeferredOperationKHRInfo);
    const VkCopyMemoryToMicromapInfoEXT* in_pInfo = pInfo->GetPointer();
    MapStructHandles(pInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->CopyMemoryToMicromapEXT(in_device, in_deferredOperation, in_pInfo);
    CheckResult("vkCopyMemoryToMicromapEXT", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkWriteMicromapsPropertiesEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    micromapCount,
    HandlePointerDecoder<VkMicromapEXT>*        pMicromaps,
    VkQueryType                                 queryType,
    size_t                                      dataSize,
    PointerDecoder<uint8_t>*                    pData,
    size_t                                      stride)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkMicromapEXT* in_pMicromaps = MapHandles<MicromapEXTInfo>(pMicromaps, micromapCount, &VulkanObjectInfoTable::GetMicromapEXTInfo);
    void* out_pData = pData->IsNull() ? nullptr : pData->AllocateOutputData(dataSize);//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->WriteMicromapsPropertiesEXT(in_device, micromapCount, in_pMicromaps, queryType, dataSize, out_pData, stride);
    CheckResult("vkWriteMicromapsPropertiesEXT", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkCmdCopyMicromapEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkCopyMicromapInfoEXT>/*@@@PLQ*/* pInfo)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkCopyMicromapInfoEXT* in_pInfo = pInfo->GetPointer();
    MapStructHandles(pInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdCopyMicromapEXT(in_commandBuffer, in_pInfo);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdCopyMicromapEXT(dumper.GetClonedCommandBuffer(), in_pInfo)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdCopyMicromapToMemoryEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkCopyMicromapToMemoryInfoEXT>/*@@@PLQ*/* pInfo)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkCopyMicromapToMemoryInfoEXT* in_pInfo = pInfo->GetPointer();
    MapStructHandles(pInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdCopyMicromapToMemoryEXT(in_commandBuffer, in_pInfo);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdCopyMicromapToMemoryEXT(dumper.GetClonedCommandBuffer(), in_pInfo)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdCopyMemoryToMicromapEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkCopyMemoryToMicromapInfoEXT>/*@@@PLQ*/* pInfo)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkCopyMemoryToMicromapInfoEXT* in_pInfo = pInfo->GetPointer();
    MapStructHandles(pInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdCopyMemoryToMicromapEXT(in_commandBuffer, in_pInfo);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdCopyMemoryToMicromapEXT(dumper.GetClonedCommandBuffer(), in_pInfo)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdWriteMicromapsPropertiesEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    micromapCount,
    HandlePointerDecoder<VkMicromapEXT>*        pMicromaps,
    VkQueryType                                 queryType,
    format::HandleId                            queryPool,
    uint32_t                                    firstQuery)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkMicromapEXT* in_pMicromaps = MapHandles<MicromapEXTInfo>(pMicromaps, micromapCount, &VulkanObjectInfoTable::GetMicromapEXTInfo);
    VkQueryPool in_queryPool = MapHandle<QueryPoolInfo>(queryPool, &VulkanObjectInfoTable::GetQueryPoolInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdWriteMicromapsPropertiesEXT(in_commandBuffer, micromapCount, in_pMicromaps, queryType, in_queryPool, firstQuery);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdWriteMicromapsPropertiesEXT(dumper.GetClonedCommandBuffer(), micromapCount, in_pMicromaps, queryType, in_queryPool, firstQuery)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkGetDeviceMicromapCompatibilityEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkMicromapVersionInfoEXT>/*@@@PLQ*/* pVersionInfo,
    PointerDecoder<VkAccelerationStructureCompatibilityKHR>* pCompatibility)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkMicromapVersionInfoEXT* in_pVersionInfo = pVersionInfo->GetPointer();
    VkAccelerationStructureCompatibilityKHR* out_pCompatibility = pCompatibility->IsNull() ? nullptr : pCompatibility->AllocateOutputData(1, static_cast<VkAccelerationStructureCompatibilityKHR>(0));//@@@DFK
    GetDeviceTable(in_device)->GetDeviceMicromapCompatibilityEXT(in_device, in_pVersionInfo, out_pCompatibility);//@@@HQA
}

void VulkanReplayConsumer::Process_vkGetMicromapBuildSizesEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    VkAccelerationStructureBuildTypeKHR         buildType,
    StructPointerDecoder<Decoded_VkMicromapBuildInfoEXT>/*@@@PLQ*/* pBuildInfo,
    StructPointerDecoder<Decoded_VkMicromapBuildSizesInfoEXT>/*@@@PLQ*/* pSizeInfo)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkMicromapBuildInfoEXT* in_pBuildInfo = pBuildInfo->GetPointer();
    MapStructHandles(pBuildInfo->GetMetaStructPointer(), GetObjectInfoTable());
    VkMicromapBuildSizesInfoEXT* out_pSizeInfo = pSizeInfo->IsNull() ? nullptr : pSizeInfo->AllocateOutputData(1, { VK_STRUCTURE_TYPE_MICROMAP_BUILD_SIZES_INFO_EXT, nullptr });
    InitializeOutputStructPNext(pSizeInfo);//@@@DFK
    GetDeviceTable(in_device)->GetMicromapBuildSizesEXT(in_device, buildType, in_pBuildInfo, out_pSizeInfo);//@@@HQA
}

void VulkanReplayConsumer::Process_vkCmdDrawClusterHUAWEI(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    groupCountX,
    uint32_t                                    groupCountY,
    uint32_t                                    groupCountZ)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdDrawClusterHUAWEI(in_commandBuffer, groupCountX, groupCountY, groupCountZ);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdDrawClusterHUAWEI(dumper.GetClonedCommandBuffer(), groupCountX, groupCountY, groupCountZ)/*@@@ABC*/;//@@@HERE
        if (dumper.DumpingDrawCallIndex(call_info.index))
        {
            dumper.FinalizeCommandBuffer(*GetDeviceTable(in_commandBuffer));
        }
    }
}

void VulkanReplayConsumer::Process_vkCmdDrawClusterIndirectHUAWEI(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkBuffer in_buffer = MapHandle<BufferInfo>(buffer, &VulkanObjectInfoTable::GetBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdDrawClusterIndirectHUAWEI(in_commandBuffer, in_buffer, offset);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdDrawClusterIndirectHUAWEI(dumper.GetClonedCommandBuffer(), in_buffer, offset)/*@@@ABC*/;//@@@HERE
        if (dumper.DumpingDrawCallIndex(call_info.index))
        {
            dumper.FinalizeCommandBuffer(*GetDeviceTable(in_commandBuffer));
        }
    }
}

void VulkanReplayConsumer::Process_vkSetDeviceMemoryPriorityEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            memory,
    float                                       priority)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkDeviceMemory in_memory = MapHandle<DeviceMemoryInfo>(memory, &VulkanObjectInfoTable::GetDeviceMemoryInfo);//@@@DFK
    GetDeviceTable(in_device)->SetDeviceMemoryPriorityEXT(in_device, in_memory, priority);//@@@HQA
}

void VulkanReplayConsumer::Process_vkGetDescriptorSetLayoutHostMappingInfoVALVE(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDescriptorSetBindingReferenceVALVE>/*@@@PLQ*/* pBindingReference,
    StructPointerDecoder<Decoded_VkDescriptorSetLayoutHostMappingInfoVALVE>/*@@@PLQ*/* pHostMapping)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkDescriptorSetBindingReferenceVALVE* in_pBindingReference = pBindingReference->GetPointer();
    MapStructHandles(pBindingReference->GetMetaStructPointer(), GetObjectInfoTable());
    VkDescriptorSetLayoutHostMappingInfoVALVE* out_pHostMapping = pHostMapping->IsNull() ? nullptr : pHostMapping->AllocateOutputData(1, { VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_HOST_MAPPING_INFO_VALVE, nullptr });
    InitializeOutputStructPNext(pHostMapping);//@@@DFK
    GetDeviceTable(in_device)->GetDescriptorSetLayoutHostMappingInfoVALVE(in_device, in_pBindingReference, out_pHostMapping);//@@@HQA
}

void VulkanReplayConsumer::Process_vkGetDescriptorSetHostMappingVALVE(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            descriptorSet,
    PointerDecoder<uint64_t, void*>*            ppData)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkDescriptorSet in_descriptorSet = MapHandle<DescriptorSetInfo>(descriptorSet, &VulkanObjectInfoTable::GetDescriptorSetInfo);
    void** out_ppData = ppData->IsNull() ? nullptr : ppData->AllocateOutputData(1);//@@@DFK
    GetDeviceTable(in_device)->GetDescriptorSetHostMappingVALVE(in_device, in_descriptorSet, out_ppData);//@@@HQA

    PostProcessExternalObject(VK_SUCCESS, (*ppData->GetPointer()), *ppData->GetOutputPointer(), format::ApiCallId::ApiCall_vkGetDescriptorSetHostMappingVALVE, "vkGetDescriptorSetHostMappingVALVE");
}

void VulkanReplayConsumer::Process_vkGetPipelineIndirectMemoryRequirementsNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkComputePipelineCreateInfo>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkMemoryRequirements2>/*@@@PLQ*/* pMemoryRequirements)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkComputePipelineCreateInfo* in_pCreateInfo = pCreateInfo->GetPointer();
    MapStructHandles(pCreateInfo->GetMetaStructPointer(), GetObjectInfoTable());
    VkMemoryRequirements2* out_pMemoryRequirements = pMemoryRequirements->IsNull() ? nullptr : pMemoryRequirements->AllocateOutputData(1, { VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2, nullptr });
    InitializeOutputStructPNext(pMemoryRequirements);//@@@DFK
    GetDeviceTable(in_device)->GetPipelineIndirectMemoryRequirementsNV(in_device, in_pCreateInfo, out_pMemoryRequirements);//@@@HQA
}

void VulkanReplayConsumer::Process_vkCmdUpdatePipelineIndirectBufferNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkPipelineBindPoint                         pipelineBindPoint,
    format::HandleId                            pipeline)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkPipeline in_pipeline = MapHandle<PipelineInfo>(pipeline, &VulkanObjectInfoTable::GetPipelineInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdUpdatePipelineIndirectBufferNV(in_commandBuffer, pipelineBindPoint, in_pipeline);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdUpdatePipelineIndirectBufferNV(dumper.GetClonedCommandBuffer(), pipelineBindPoint, in_pipeline)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkGetPipelineIndirectDeviceAddressNV(
    const ApiCallInfo&                          call_info,
    VkDeviceAddress                             returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkPipelineIndirectDeviceAddressInfoNV>/*@@@PLQ*/* pInfo)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkPipelineIndirectDeviceAddressInfoNV* in_pInfo = pInfo->GetPointer();
    MapStructHandles(pInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    GetDeviceTable(in_device)->GetPipelineIndirectDeviceAddressNV(in_device, in_pInfo);//@@@HQA
}

void VulkanReplayConsumer::Process_vkCmdSetTessellationDomainOriginEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkTessellationDomainOrigin                  domainOrigin)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetTessellationDomainOriginEXT(in_commandBuffer, domainOrigin);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetTessellationDomainOriginEXT(dumper.GetClonedCommandBuffer(), domainOrigin)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetDepthClampEnableEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    depthClampEnable)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetDepthClampEnableEXT(in_commandBuffer, depthClampEnable);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetDepthClampEnableEXT(dumper.GetClonedCommandBuffer(), depthClampEnable)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetPolygonModeEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkPolygonMode                               polygonMode)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetPolygonModeEXT(in_commandBuffer, polygonMode);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetPolygonModeEXT(dumper.GetClonedCommandBuffer(), polygonMode)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetRasterizationSamplesEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkSampleCountFlagBits                       rasterizationSamples)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetRasterizationSamplesEXT(in_commandBuffer, rasterizationSamples);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetRasterizationSamplesEXT(dumper.GetClonedCommandBuffer(), rasterizationSamples)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetSampleMaskEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkSampleCountFlagBits                       samples,
    PointerDecoder<VkSampleMask>*               pSampleMask)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkSampleMask* in_pSampleMask = pSampleMask->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetSampleMaskEXT(in_commandBuffer, samples, in_pSampleMask);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetSampleMaskEXT(dumper.GetClonedCommandBuffer(), samples, in_pSampleMask)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetAlphaToCoverageEnableEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    alphaToCoverageEnable)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetAlphaToCoverageEnableEXT(in_commandBuffer, alphaToCoverageEnable);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetAlphaToCoverageEnableEXT(dumper.GetClonedCommandBuffer(), alphaToCoverageEnable)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetAlphaToOneEnableEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    alphaToOneEnable)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetAlphaToOneEnableEXT(in_commandBuffer, alphaToOneEnable);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetAlphaToOneEnableEXT(dumper.GetClonedCommandBuffer(), alphaToOneEnable)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetLogicOpEnableEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    logicOpEnable)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetLogicOpEnableEXT(in_commandBuffer, logicOpEnable);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetLogicOpEnableEXT(dumper.GetClonedCommandBuffer(), logicOpEnable)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetColorBlendEnableEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    firstAttachment,
    uint32_t                                    attachmentCount,
    PointerDecoder<VkBool32>*                   pColorBlendEnables)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkBool32* in_pColorBlendEnables = pColorBlendEnables->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetColorBlendEnableEXT(in_commandBuffer, firstAttachment, attachmentCount, in_pColorBlendEnables);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetColorBlendEnableEXT(dumper.GetClonedCommandBuffer(), firstAttachment, attachmentCount, in_pColorBlendEnables)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetColorBlendEquationEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    firstAttachment,
    uint32_t                                    attachmentCount,
    StructPointerDecoder<Decoded_VkColorBlendEquationEXT>/*@@@PLQ*/* pColorBlendEquations)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkColorBlendEquationEXT* in_pColorBlendEquations = pColorBlendEquations->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetColorBlendEquationEXT(in_commandBuffer, firstAttachment, attachmentCount, in_pColorBlendEquations);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetColorBlendEquationEXT(dumper.GetClonedCommandBuffer(), firstAttachment, attachmentCount, in_pColorBlendEquations)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetColorWriteMaskEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    firstAttachment,
    uint32_t                                    attachmentCount,
    PointerDecoder<VkColorComponentFlags>*      pColorWriteMasks)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkColorComponentFlags* in_pColorWriteMasks = pColorWriteMasks->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetColorWriteMaskEXT(in_commandBuffer, firstAttachment, attachmentCount, in_pColorWriteMasks);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetColorWriteMaskEXT(dumper.GetClonedCommandBuffer(), firstAttachment, attachmentCount, in_pColorWriteMasks)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetRasterizationStreamEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    rasterizationStream)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetRasterizationStreamEXT(in_commandBuffer, rasterizationStream);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetRasterizationStreamEXT(dumper.GetClonedCommandBuffer(), rasterizationStream)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetConservativeRasterizationModeEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkConservativeRasterizationModeEXT          conservativeRasterizationMode)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetConservativeRasterizationModeEXT(in_commandBuffer, conservativeRasterizationMode);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetConservativeRasterizationModeEXT(dumper.GetClonedCommandBuffer(), conservativeRasterizationMode)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetExtraPrimitiveOverestimationSizeEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    float                                       extraPrimitiveOverestimationSize)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetExtraPrimitiveOverestimationSizeEXT(in_commandBuffer, extraPrimitiveOverestimationSize);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetExtraPrimitiveOverestimationSizeEXT(dumper.GetClonedCommandBuffer(), extraPrimitiveOverestimationSize)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetDepthClipEnableEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    depthClipEnable)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetDepthClipEnableEXT(in_commandBuffer, depthClipEnable);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetDepthClipEnableEXT(dumper.GetClonedCommandBuffer(), depthClipEnable)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetSampleLocationsEnableEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    sampleLocationsEnable)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetSampleLocationsEnableEXT(in_commandBuffer, sampleLocationsEnable);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetSampleLocationsEnableEXT(dumper.GetClonedCommandBuffer(), sampleLocationsEnable)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetColorBlendAdvancedEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    firstAttachment,
    uint32_t                                    attachmentCount,
    StructPointerDecoder<Decoded_VkColorBlendAdvancedEXT>/*@@@PLQ*/* pColorBlendAdvanced)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkColorBlendAdvancedEXT* in_pColorBlendAdvanced = pColorBlendAdvanced->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetColorBlendAdvancedEXT(in_commandBuffer, firstAttachment, attachmentCount, in_pColorBlendAdvanced);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetColorBlendAdvancedEXT(dumper.GetClonedCommandBuffer(), firstAttachment, attachmentCount, in_pColorBlendAdvanced)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetProvokingVertexModeEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkProvokingVertexModeEXT                    provokingVertexMode)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetProvokingVertexModeEXT(in_commandBuffer, provokingVertexMode);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetProvokingVertexModeEXT(dumper.GetClonedCommandBuffer(), provokingVertexMode)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetLineRasterizationModeEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkLineRasterizationModeEXT                  lineRasterizationMode)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetLineRasterizationModeEXT(in_commandBuffer, lineRasterizationMode);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetLineRasterizationModeEXT(dumper.GetClonedCommandBuffer(), lineRasterizationMode)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetLineStippleEnableEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    stippledLineEnable)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetLineStippleEnableEXT(in_commandBuffer, stippledLineEnable);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetLineStippleEnableEXT(dumper.GetClonedCommandBuffer(), stippledLineEnable)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetDepthClipNegativeOneToOneEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    negativeOneToOne)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetDepthClipNegativeOneToOneEXT(in_commandBuffer, negativeOneToOne);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetDepthClipNegativeOneToOneEXT(dumper.GetClonedCommandBuffer(), negativeOneToOne)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetViewportWScalingEnableNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    viewportWScalingEnable)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetViewportWScalingEnableNV(in_commandBuffer, viewportWScalingEnable);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetViewportWScalingEnableNV(dumper.GetClonedCommandBuffer(), viewportWScalingEnable)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetViewportSwizzleNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    firstViewport,
    uint32_t                                    viewportCount,
    StructPointerDecoder<Decoded_VkViewportSwizzleNV>/*@@@PLQ*/* pViewportSwizzles)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkViewportSwizzleNV* in_pViewportSwizzles = pViewportSwizzles->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetViewportSwizzleNV(in_commandBuffer, firstViewport, viewportCount, in_pViewportSwizzles);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetViewportSwizzleNV(dumper.GetClonedCommandBuffer(), firstViewport, viewportCount, in_pViewportSwizzles)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetCoverageToColorEnableNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    coverageToColorEnable)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetCoverageToColorEnableNV(in_commandBuffer, coverageToColorEnable);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetCoverageToColorEnableNV(dumper.GetClonedCommandBuffer(), coverageToColorEnable)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetCoverageToColorLocationNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    coverageToColorLocation)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetCoverageToColorLocationNV(in_commandBuffer, coverageToColorLocation);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetCoverageToColorLocationNV(dumper.GetClonedCommandBuffer(), coverageToColorLocation)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetCoverageModulationModeNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkCoverageModulationModeNV                  coverageModulationMode)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetCoverageModulationModeNV(in_commandBuffer, coverageModulationMode);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetCoverageModulationModeNV(dumper.GetClonedCommandBuffer(), coverageModulationMode)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetCoverageModulationTableEnableNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    coverageModulationTableEnable)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetCoverageModulationTableEnableNV(in_commandBuffer, coverageModulationTableEnable);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetCoverageModulationTableEnableNV(dumper.GetClonedCommandBuffer(), coverageModulationTableEnable)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetCoverageModulationTableNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    coverageModulationTableCount,
    PointerDecoder<float>*                      pCoverageModulationTable)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const float* in_pCoverageModulationTable = pCoverageModulationTable->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetCoverageModulationTableNV(in_commandBuffer, coverageModulationTableCount, in_pCoverageModulationTable);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetCoverageModulationTableNV(dumper.GetClonedCommandBuffer(), coverageModulationTableCount, in_pCoverageModulationTable)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetShadingRateImageEnableNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    shadingRateImageEnable)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetShadingRateImageEnableNV(in_commandBuffer, shadingRateImageEnable);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetShadingRateImageEnableNV(dumper.GetClonedCommandBuffer(), shadingRateImageEnable)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetRepresentativeFragmentTestEnableNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    representativeFragmentTestEnable)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetRepresentativeFragmentTestEnableNV(in_commandBuffer, representativeFragmentTestEnable);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetRepresentativeFragmentTestEnableNV(dumper.GetClonedCommandBuffer(), representativeFragmentTestEnable)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdSetCoverageReductionModeNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkCoverageReductionModeNV                   coverageReductionMode)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetCoverageReductionModeNV(in_commandBuffer, coverageReductionMode);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetCoverageReductionModeNV(dumper.GetClonedCommandBuffer(), coverageReductionMode)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkGetShaderModuleIdentifierEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            shaderModule,
    StructPointerDecoder<Decoded_VkShaderModuleIdentifierEXT>/*@@@PLQ*/* pIdentifier)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkShaderModule in_shaderModule = MapHandle<ShaderModuleInfo>(shaderModule, &VulkanObjectInfoTable::GetShaderModuleInfo);
    VkShaderModuleIdentifierEXT* out_pIdentifier = pIdentifier->IsNull() ? nullptr : pIdentifier->AllocateOutputData(1, { VK_STRUCTURE_TYPE_SHADER_MODULE_IDENTIFIER_EXT, nullptr });
    InitializeOutputStructPNext(pIdentifier);//@@@DFK
    GetDeviceTable(in_device)->GetShaderModuleIdentifierEXT(in_device, in_shaderModule, out_pIdentifier);//@@@HQA
}

void VulkanReplayConsumer::Process_vkGetShaderModuleCreateInfoIdentifierEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkShaderModuleCreateInfo>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkShaderModuleIdentifierEXT>/*@@@PLQ*/* pIdentifier)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkShaderModuleCreateInfo* in_pCreateInfo = pCreateInfo->GetPointer();
    MapStructHandles(pCreateInfo->GetMetaStructPointer(), GetObjectInfoTable());
    VkShaderModuleIdentifierEXT* out_pIdentifier = pIdentifier->IsNull() ? nullptr : pIdentifier->AllocateOutputData(1, { VK_STRUCTURE_TYPE_SHADER_MODULE_IDENTIFIER_EXT, nullptr });
    InitializeOutputStructPNext(pIdentifier);//@@@DFK
    GetDeviceTable(in_device)->GetShaderModuleCreateInfoIdentifierEXT(in_device, in_pCreateInfo, out_pIdentifier);//@@@HQA
}

void VulkanReplayConsumer::Process_vkGetPhysicalDeviceOpticalFlowImageFormatsNV(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkOpticalFlowImageFormatInfoNV>/*@@@PLQ*/* pOpticalFlowImageFormatInfo,
    PointerDecoder<uint32_t>*                   pFormatCount,
    StructPointerDecoder<Decoded_VkOpticalFlowImageFormatPropertiesNV>/*@@@PLQ*/* pImageFormatProperties)
{
    VkPhysicalDevice in_physicalDevice = MapHandle<PhysicalDeviceInfo>(physicalDevice, &VulkanObjectInfoTable::GetPhysicalDeviceInfo);
    const VkOpticalFlowImageFormatInfoNV* in_pOpticalFlowImageFormatInfo = pOpticalFlowImageFormatInfo->GetPointer();
    uint32_t* out_pFormatCount = pFormatCount->IsNull() ? nullptr : pFormatCount->AllocateOutputData(1, GetOutputArrayCount<uint32_t, PhysicalDeviceInfo>("vkGetPhysicalDeviceOpticalFlowImageFormatsNV", returnValue, physicalDevice, kPhysicalDeviceArrayGetPhysicalDeviceOpticalFlowImageFormatsNV, pFormatCount, pImageFormatProperties, &VulkanObjectInfoTable::GetPhysicalDeviceInfo));
    VkOpticalFlowImageFormatPropertiesNV* out_pImageFormatProperties = pImageFormatProperties->IsNull() ? nullptr : pImageFormatProperties->AllocateOutputData(*out_pFormatCount, VkOpticalFlowImageFormatPropertiesNV{ VK_STRUCTURE_TYPE_OPTICAL_FLOW_IMAGE_FORMAT_PROPERTIES_NV, nullptr });//@@@DFK
    VkResult replay_result = GetInstanceTable(in_physicalDevice)->GetPhysicalDeviceOpticalFlowImageFormatsNV(in_physicalDevice, in_pOpticalFlowImageFormatInfo, out_pFormatCount, out_pImageFormatProperties);
    CheckResult("vkGetPhysicalDeviceOpticalFlowImageFormatsNV", returnValue, replay_result, call_info);

    if (pImageFormatProperties->IsNull()) { SetOutputArrayCount<PhysicalDeviceInfo>(physicalDevice, kPhysicalDeviceArrayGetPhysicalDeviceOpticalFlowImageFormatsNV, *out_pFormatCount, &VulkanObjectInfoTable::GetPhysicalDeviceInfo); }
}

void VulkanReplayConsumer::Process_vkCreateOpticalFlowSessionNV(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkOpticalFlowSessionCreateInfoNV>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkOpticalFlowSessionNV>* pSession)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkOpticalFlowSessionCreateInfoNV* in_pCreateInfo = pCreateInfo->GetPointer();
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    if (!pSession->IsNull()) { pSession->SetHandleLength(1); }
    VkOpticalFlowSessionNV* out_pSession = pSession->GetHandlePointer();//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->CreateOpticalFlowSessionNV(in_device, in_pCreateInfo, in_pAllocator, out_pSession);
    CheckResult("vkCreateOpticalFlowSessionNV", returnValue, replay_result, call_info);

    AddHandle<OpticalFlowSessionNVInfo>(device, pSession->GetPointer(), out_pSession, &VulkanObjectInfoTable::AddOpticalFlowSessionNVInfo);
}

void VulkanReplayConsumer::Process_vkDestroyOpticalFlowSessionNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            session,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkOpticalFlowSessionNV in_session = MapHandle<OpticalFlowSessionNVInfo>(session, &VulkanObjectInfoTable::GetOpticalFlowSessionNVInfo);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);//@@@DFK
    GetDeviceTable(in_device)->DestroyOpticalFlowSessionNV(in_device, in_session, in_pAllocator);//@@@HQA
    RemoveHandle(session, &VulkanObjectInfoTable::RemoveOpticalFlowSessionNVInfo);
}

void VulkanReplayConsumer::Process_vkBindOpticalFlowSessionImageNV(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            session,
    VkOpticalFlowSessionBindingPointNV          bindingPoint,
    format::HandleId                            view,
    VkImageLayout                               layout)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkOpticalFlowSessionNV in_session = MapHandle<OpticalFlowSessionNVInfo>(session, &VulkanObjectInfoTable::GetOpticalFlowSessionNVInfo);
    VkImageView in_view = MapHandle<ImageViewInfo>(view, &VulkanObjectInfoTable::GetImageViewInfo);//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->BindOpticalFlowSessionImageNV(in_device, in_session, bindingPoint, in_view, layout);
    CheckResult("vkBindOpticalFlowSessionImageNV", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkCmdOpticalFlowExecuteNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            session,
    StructPointerDecoder<Decoded_VkOpticalFlowExecuteInfoNV>/*@@@PLQ*/* pExecuteInfo)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkOpticalFlowSessionNV in_session = MapHandle<OpticalFlowSessionNVInfo>(session, &VulkanObjectInfoTable::GetOpticalFlowSessionNVInfo);
    const VkOpticalFlowExecuteInfoNV* in_pExecuteInfo = pExecuteInfo->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdOpticalFlowExecuteNV(in_commandBuffer, in_session, in_pExecuteInfo);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdOpticalFlowExecuteNV(dumper.GetClonedCommandBuffer(), in_session, in_pExecuteInfo)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCreateShadersEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    createInfoCount,
    StructPointerDecoder<Decoded_VkShaderCreateInfoEXT>/*@@@PLQ*/* pCreateInfos,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkShaderEXT>*          pShaders)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkShaderCreateInfoEXT* in_pCreateInfos = pCreateInfos->GetPointer();
    MapStructArrayHandles(pCreateInfos->GetMetaStructPointer(), pCreateInfos->GetLength(), GetObjectInfoTable());
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);
    if (!pShaders->IsNull()) { pShaders->SetHandleLength(createInfoCount); }
    VkShaderEXT* out_pShaders = pShaders->GetHandlePointer();//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->CreateShadersEXT(in_device, createInfoCount, in_pCreateInfos, in_pAllocator, out_pShaders);
    CheckResult("vkCreateShadersEXT", returnValue, replay_result, call_info);

    AddHandles<ShaderEXTInfo>(device, pShaders->GetPointer(), pShaders->GetLength(), out_pShaders, createInfoCount, &VulkanObjectInfoTable::AddShaderEXTInfo);
}

void VulkanReplayConsumer::Process_vkDestroyShaderEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            shader,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkShaderEXT in_shader = MapHandle<ShaderEXTInfo>(shader, &VulkanObjectInfoTable::GetShaderEXTInfo);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);//@@@DFK
    GetDeviceTable(in_device)->DestroyShaderEXT(in_device, in_shader, in_pAllocator);//@@@HQA
    RemoveHandle(shader, &VulkanObjectInfoTable::RemoveShaderEXTInfo);
}

void VulkanReplayConsumer::Process_vkGetShaderBinaryDataEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            shader,
    PointerDecoder<size_t>*                     pDataSize,
    PointerDecoder<uint8_t>*                    pData)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkShaderEXT in_shader = MapHandle<ShaderEXTInfo>(shader, &VulkanObjectInfoTable::GetShaderEXTInfo);
    size_t* out_pDataSize = pDataSize->IsNull() ? nullptr : pDataSize->AllocateOutputData(1, GetOutputArrayCount<size_t, ShaderEXTInfo>("vkGetShaderBinaryDataEXT", returnValue, shader, kShaderEXTArrayGetShaderBinaryDataEXT, pDataSize, pData, &VulkanObjectInfoTable::GetShaderEXTInfo));
    void* out_pData = pData->IsNull() ? nullptr : pData->AllocateOutputData(*out_pDataSize);//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->GetShaderBinaryDataEXT(in_device, in_shader, out_pDataSize, out_pData);
    CheckResult("vkGetShaderBinaryDataEXT", returnValue, replay_result, call_info);

    if (pData->IsNull()) { SetOutputArrayCount<ShaderEXTInfo>(shader, kShaderEXTArrayGetShaderBinaryDataEXT, *out_pDataSize, &VulkanObjectInfoTable::GetShaderEXTInfo); }
}

void VulkanReplayConsumer::Process_vkCmdBindShadersEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    stageCount,
    PointerDecoder<VkShaderStageFlagBits>*      pStages,
    HandlePointerDecoder<VkShaderEXT>*          pShaders)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkShaderStageFlagBits* in_pStages = pStages->GetPointer();
    const VkShaderEXT* in_pShaders = MapHandles<ShaderEXTInfo>(pShaders, stageCount, &VulkanObjectInfoTable::GetShaderEXTInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdBindShadersEXT(in_commandBuffer, stageCount, in_pStages, in_pShaders);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdBindShadersEXT(dumper.GetClonedCommandBuffer(), stageCount, in_pStages, in_pShaders)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkGetFramebufferTilePropertiesQCOM(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            framebuffer,
    PointerDecoder<uint32_t>*                   pPropertiesCount,
    StructPointerDecoder<Decoded_VkTilePropertiesQCOM>/*@@@PLQ*/* pProperties)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkFramebuffer in_framebuffer = MapHandle<FramebufferInfo>(framebuffer, &VulkanObjectInfoTable::GetFramebufferInfo);
    uint32_t* out_pPropertiesCount = pPropertiesCount->IsNull() ? nullptr : pPropertiesCount->AllocateOutputData(1, GetOutputArrayCount<uint32_t, FramebufferInfo>("vkGetFramebufferTilePropertiesQCOM", returnValue, framebuffer, kFramebufferArrayGetFramebufferTilePropertiesQCOM, pPropertiesCount, pProperties, &VulkanObjectInfoTable::GetFramebufferInfo));
    VkTilePropertiesQCOM* out_pProperties = pProperties->IsNull() ? nullptr : pProperties->AllocateOutputData(*out_pPropertiesCount, VkTilePropertiesQCOM{ VK_STRUCTURE_TYPE_TILE_PROPERTIES_QCOM, nullptr });//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->GetFramebufferTilePropertiesQCOM(in_device, in_framebuffer, out_pPropertiesCount, out_pProperties);
    CheckResult("vkGetFramebufferTilePropertiesQCOM", returnValue, replay_result, call_info);

    if (pProperties->IsNull()) { SetOutputArrayCount<FramebufferInfo>(framebuffer, kFramebufferArrayGetFramebufferTilePropertiesQCOM, *out_pPropertiesCount, &VulkanObjectInfoTable::GetFramebufferInfo); }
}

void VulkanReplayConsumer::Process_vkGetDynamicRenderingTilePropertiesQCOM(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkRenderingInfo>/*@@@PLQ*/* pRenderingInfo,
    StructPointerDecoder<Decoded_VkTilePropertiesQCOM>/*@@@PLQ*/* pProperties)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkRenderingInfo* in_pRenderingInfo = pRenderingInfo->GetPointer();
    MapStructHandles(pRenderingInfo->GetMetaStructPointer(), GetObjectInfoTable());
    VkTilePropertiesQCOM* out_pProperties = pProperties->IsNull() ? nullptr : pProperties->AllocateOutputData(1, { VK_STRUCTURE_TYPE_TILE_PROPERTIES_QCOM, nullptr });
    InitializeOutputStructPNext(pProperties);//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->GetDynamicRenderingTilePropertiesQCOM(in_device, in_pRenderingInfo, out_pProperties);
    CheckResult("vkGetDynamicRenderingTilePropertiesQCOM", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkCmdSetAttachmentFeedbackLoopEnableEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkImageAspectFlags                          aspectMask)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetAttachmentFeedbackLoopEnableEXT(in_commandBuffer, aspectMask);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetAttachmentFeedbackLoopEnableEXT(dumper.GetClonedCommandBuffer(), aspectMask)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCreateAccelerationStructureKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkAccelerationStructureCreateInfoKHR>/*@@@PLQ*/* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkAccelerationStructureKHR>* pAccelerationStructure)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);

    MapStructHandles(pCreateInfo->GetMetaStructPointer(), GetObjectInfoTable());
    if (!pAccelerationStructure->IsNull()) { pAccelerationStructure->SetHandleLength(1); }
    AccelerationStructureKHRInfo handle_info;
    pAccelerationStructure->SetConsumerData(0, &handle_info);//@@@DFK
    VkResult replay_result = OverrideCreateAccelerationStructureKHR(GetDeviceTable(in_device->handle)->CreateAccelerationStructureKHR, returnValue, in_device, pCreateInfo, pAllocator, pAccelerationStructure);
    CheckResult("vkCreateAccelerationStructureKHR", returnValue, replay_result, call_info);

    AddHandle<AccelerationStructureKHRInfo>(device, pAccelerationStructure->GetPointer(), pAccelerationStructure->GetHandlePointer(), std::move(handle_info), &VulkanObjectInfoTable::AddAccelerationStructureKHRInfo);
}

void VulkanReplayConsumer::Process_vkDestroyAccelerationStructureKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            accelerationStructure,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkAccelerationStructureKHR in_accelerationStructure = MapHandle<AccelerationStructureKHRInfo>(accelerationStructure, &VulkanObjectInfoTable::GetAccelerationStructureKHRInfo);
    const VkAllocationCallbacks* in_pAllocator = GetAllocationCallbacks(pAllocator);//@@@DFK
    GetDeviceTable(in_device)->DestroyAccelerationStructureKHR(in_device, in_accelerationStructure, in_pAllocator);//@@@HQA
    RemoveHandle(accelerationStructure, &VulkanObjectInfoTable::RemoveAccelerationStructureKHRInfo);
}

void VulkanReplayConsumer::Process_vkCmdBuildAccelerationStructuresKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    infoCount,
    StructPointerDecoder<Decoded_VkAccelerationStructureBuildGeometryInfoKHR>/*@@@PLQ*/* pInfos,
    StructPointerDecoder<Decoded_VkAccelerationStructureBuildRangeInfoKHR*>/*@@@EHI*/* ppBuildRangeInfos)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkAccelerationStructureBuildGeometryInfoKHR* in_pInfos = pInfos->GetPointer();
    MapStructArrayHandles(pInfos->GetMetaStructPointer(), pInfos->GetLength(), GetObjectInfoTable());
    const VkAccelerationStructureBuildRangeInfoKHR* const* in_ppBuildRangeInfos = ppBuildRangeInfos->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdBuildAccelerationStructuresKHR(in_commandBuffer, infoCount, in_pInfos, in_ppBuildRangeInfos);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdBuildAccelerationStructuresKHR(dumper.GetClonedCommandBuffer(), infoCount, in_pInfos, in_ppBuildRangeInfos)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdBuildAccelerationStructuresIndirectKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    infoCount,
    StructPointerDecoder<Decoded_VkAccelerationStructureBuildGeometryInfoKHR>/*@@@PLQ*/* pInfos,
    PointerDecoder<VkDeviceAddress>*            pIndirectDeviceAddresses,
    PointerDecoder<uint32_t>*                   pIndirectStrides,
    PointerDecoder<uint32_t*>*                  ppMaxPrimitiveCounts)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkAccelerationStructureBuildGeometryInfoKHR* in_pInfos = pInfos->GetPointer();
    MapStructArrayHandles(pInfos->GetMetaStructPointer(), pInfos->GetLength(), GetObjectInfoTable());
    const VkDeviceAddress* in_pIndirectDeviceAddresses = pIndirectDeviceAddresses->GetPointer();
    const uint32_t* in_pIndirectStrides = pIndirectStrides->GetPointer();
    const uint32_t* const* in_ppMaxPrimitiveCounts = ppMaxPrimitiveCounts->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdBuildAccelerationStructuresIndirectKHR(in_commandBuffer, infoCount, in_pInfos, in_pIndirectDeviceAddresses, in_pIndirectStrides, in_ppMaxPrimitiveCounts);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdBuildAccelerationStructuresIndirectKHR(dumper.GetClonedCommandBuffer(), infoCount, in_pInfos, in_pIndirectDeviceAddresses, in_pIndirectStrides, in_ppMaxPrimitiveCounts)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCopyAccelerationStructureToMemoryKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            deferredOperation,
    StructPointerDecoder<Decoded_VkCopyAccelerationStructureToMemoryInfoKHR>/*@@@PLQ*/* pInfo)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkDeferredOperationKHR in_deferredOperation = MapHandle<DeferredOperationKHRInfo>(deferredOperation, &VulkanObjectInfoTable::GetDeferredOperationKHRInfo);
    const VkCopyAccelerationStructureToMemoryInfoKHR* in_pInfo = pInfo->GetPointer();
    MapStructHandles(pInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->CopyAccelerationStructureToMemoryKHR(in_device, in_deferredOperation, in_pInfo);
    CheckResult("vkCopyAccelerationStructureToMemoryKHR", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkCopyMemoryToAccelerationStructureKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            deferredOperation,
    StructPointerDecoder<Decoded_VkCopyMemoryToAccelerationStructureInfoKHR>/*@@@PLQ*/* pInfo)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkDeferredOperationKHR in_deferredOperation = MapHandle<DeferredOperationKHRInfo>(deferredOperation, &VulkanObjectInfoTable::GetDeferredOperationKHRInfo);
    const VkCopyMemoryToAccelerationStructureInfoKHR* in_pInfo = pInfo->GetPointer();
    MapStructHandles(pInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->CopyMemoryToAccelerationStructureKHR(in_device, in_deferredOperation, in_pInfo);
    CheckResult("vkCopyMemoryToAccelerationStructureKHR", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkWriteAccelerationStructuresPropertiesKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    accelerationStructureCount,
    HandlePointerDecoder<VkAccelerationStructureKHR>* pAccelerationStructures,
    VkQueryType                                 queryType,
    size_t                                      dataSize,
    PointerDecoder<uint8_t>*                    pData,
    size_t                                      stride)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkAccelerationStructureKHR* in_pAccelerationStructures = MapHandles<AccelerationStructureKHRInfo>(pAccelerationStructures, accelerationStructureCount, &VulkanObjectInfoTable::GetAccelerationStructureKHRInfo);
    void* out_pData = pData->IsNull() ? nullptr : pData->AllocateOutputData(dataSize);//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->WriteAccelerationStructuresPropertiesKHR(in_device, accelerationStructureCount, in_pAccelerationStructures, queryType, dataSize, out_pData, stride);
    CheckResult("vkWriteAccelerationStructuresPropertiesKHR", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkCmdCopyAccelerationStructureKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkCopyAccelerationStructureInfoKHR>/*@@@PLQ*/* pInfo)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkCopyAccelerationStructureInfoKHR* in_pInfo = pInfo->GetPointer();
    MapStructHandles(pInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdCopyAccelerationStructureKHR(in_commandBuffer, in_pInfo);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdCopyAccelerationStructureKHR(dumper.GetClonedCommandBuffer(), in_pInfo)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdCopyAccelerationStructureToMemoryKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkCopyAccelerationStructureToMemoryInfoKHR>/*@@@PLQ*/* pInfo)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkCopyAccelerationStructureToMemoryInfoKHR* in_pInfo = pInfo->GetPointer();
    MapStructHandles(pInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdCopyAccelerationStructureToMemoryKHR(in_commandBuffer, in_pInfo);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdCopyAccelerationStructureToMemoryKHR(dumper.GetClonedCommandBuffer(), in_pInfo)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdCopyMemoryToAccelerationStructureKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkCopyMemoryToAccelerationStructureInfoKHR>/*@@@PLQ*/* pInfo)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkCopyMemoryToAccelerationStructureInfoKHR* in_pInfo = pInfo->GetPointer();
    MapStructHandles(pInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdCopyMemoryToAccelerationStructureKHR(in_commandBuffer, in_pInfo);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdCopyMemoryToAccelerationStructureKHR(dumper.GetClonedCommandBuffer(), in_pInfo)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkGetAccelerationStructureDeviceAddressKHR(
    const ApiCallInfo&                          call_info,
    VkDeviceAddress                             returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkAccelerationStructureDeviceAddressInfoKHR>/*@@@PLQ*/* pInfo)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);

    MapStructHandles(pInfo->GetMetaStructPointer(), GetObjectInfoTable());//@@@DFK
    OverrideGetAccelerationStructureDeviceAddressKHR(GetDeviceTable(in_device->handle)->GetAccelerationStructureDeviceAddressKHR, in_device, pInfo);//@@@HQA
}

void VulkanReplayConsumer::Process_vkCmdWriteAccelerationStructuresPropertiesKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    accelerationStructureCount,
    HandlePointerDecoder<VkAccelerationStructureKHR>* pAccelerationStructures,
    VkQueryType                                 queryType,
    format::HandleId                            queryPool,
    uint32_t                                    firstQuery)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkAccelerationStructureKHR* in_pAccelerationStructures = MapHandles<AccelerationStructureKHRInfo>(pAccelerationStructures, accelerationStructureCount, &VulkanObjectInfoTable::GetAccelerationStructureKHRInfo);
    VkQueryPool in_queryPool = MapHandle<QueryPoolInfo>(queryPool, &VulkanObjectInfoTable::GetQueryPoolInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdWriteAccelerationStructuresPropertiesKHR(in_commandBuffer, accelerationStructureCount, in_pAccelerationStructures, queryType, in_queryPool, firstQuery);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdWriteAccelerationStructuresPropertiesKHR(dumper.GetClonedCommandBuffer(), accelerationStructureCount, in_pAccelerationStructures, queryType, in_queryPool, firstQuery)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkGetDeviceAccelerationStructureCompatibilityKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkAccelerationStructureVersionInfoKHR>/*@@@PLQ*/* pVersionInfo,
    PointerDecoder<VkAccelerationStructureCompatibilityKHR>* pCompatibility)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkAccelerationStructureVersionInfoKHR* in_pVersionInfo = pVersionInfo->GetPointer();
    VkAccelerationStructureCompatibilityKHR* out_pCompatibility = pCompatibility->IsNull() ? nullptr : pCompatibility->AllocateOutputData(1, static_cast<VkAccelerationStructureCompatibilityKHR>(0));//@@@DFK
    GetDeviceTable(in_device)->GetDeviceAccelerationStructureCompatibilityKHR(in_device, in_pVersionInfo, out_pCompatibility);//@@@HQA
}

void VulkanReplayConsumer::Process_vkGetAccelerationStructureBuildSizesKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    VkAccelerationStructureBuildTypeKHR         buildType,
    StructPointerDecoder<Decoded_VkAccelerationStructureBuildGeometryInfoKHR>/*@@@PLQ*/* pBuildInfo,
    PointerDecoder<uint32_t>*                   pMaxPrimitiveCounts,
    StructPointerDecoder<Decoded_VkAccelerationStructureBuildSizesInfoKHR>/*@@@PLQ*/* pSizeInfo)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    const VkAccelerationStructureBuildGeometryInfoKHR* in_pBuildInfo = pBuildInfo->GetPointer();
    MapStructHandles(pBuildInfo->GetMetaStructPointer(), GetObjectInfoTable());
    const uint32_t* in_pMaxPrimitiveCounts = pMaxPrimitiveCounts->GetPointer();
    VkAccelerationStructureBuildSizesInfoKHR* out_pSizeInfo = pSizeInfo->IsNull() ? nullptr : pSizeInfo->AllocateOutputData(1, { VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_BUILD_SIZES_INFO_KHR, nullptr });
    InitializeOutputStructPNext(pSizeInfo);//@@@DFK
    GetDeviceTable(in_device)->GetAccelerationStructureBuildSizesKHR(in_device, buildType, in_pBuildInfo, in_pMaxPrimitiveCounts, out_pSizeInfo);//@@@HQA
}

void VulkanReplayConsumer::Process_vkCmdTraceRaysKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkStridedDeviceAddressRegionKHR>/*@@@PLQ*/* pRaygenShaderBindingTable,
    StructPointerDecoder<Decoded_VkStridedDeviceAddressRegionKHR>/*@@@PLQ*/* pMissShaderBindingTable,
    StructPointerDecoder<Decoded_VkStridedDeviceAddressRegionKHR>/*@@@PLQ*/* pHitShaderBindingTable,
    StructPointerDecoder<Decoded_VkStridedDeviceAddressRegionKHR>/*@@@PLQ*/* pCallableShaderBindingTable,
    uint32_t                                    width,
    uint32_t                                    height,
    uint32_t                                    depth)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkStridedDeviceAddressRegionKHR* in_pRaygenShaderBindingTable = pRaygenShaderBindingTable->GetPointer();
    const VkStridedDeviceAddressRegionKHR* in_pMissShaderBindingTable = pMissShaderBindingTable->GetPointer();
    const VkStridedDeviceAddressRegionKHR* in_pHitShaderBindingTable = pHitShaderBindingTable->GetPointer();
    const VkStridedDeviceAddressRegionKHR* in_pCallableShaderBindingTable = pCallableShaderBindingTable->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdTraceRaysKHR(in_commandBuffer, in_pRaygenShaderBindingTable, in_pMissShaderBindingTable, in_pHitShaderBindingTable, in_pCallableShaderBindingTable, width, height, depth);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdTraceRaysKHR(dumper.GetClonedCommandBuffer(), in_pRaygenShaderBindingTable, in_pMissShaderBindingTable, in_pHitShaderBindingTable, in_pCallableShaderBindingTable, width, height, depth)/*@@@ABC*/;//@@@HERE
        if (dumper.DumpingTraceRaysIndex(call_info.index))
        {
            dumper.FinalizeCommandBuffer(*GetDeviceTable(in_commandBuffer));
        }
    }
}

void VulkanReplayConsumer::Process_vkCreateRayTracingPipelinesKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            deferredOperation,
    format::HandleId                            pipelineCache,
    uint32_t                                    createInfoCount,
    StructPointerDecoder<Decoded_VkRayTracingPipelineCreateInfoKHR>/*@@@PLQ*/* pCreateInfos,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>/*@@@PLQ*/* pAllocator,
    HandlePointerDecoder<VkPipeline>*           pPipelines)
{
    auto in_device = GetObjectInfoTable().GetDeviceInfo(device);
    auto in_deferredOperation = GetObjectInfoTable().GetDeferredOperationKHRInfo(deferredOperation);
    auto in_pipelineCache = GetObjectInfoTable().GetPipelineCacheInfo(pipelineCache);

    MapStructArrayHandles(pCreateInfos->GetMetaStructPointer(), pCreateInfos->GetLength(), GetObjectInfoTable());
    if (!pPipelines->IsNull()) { pPipelines->SetHandleLength(createInfoCount); }
    std::vector<PipelineInfo> handle_info(createInfoCount);
    for (size_t i = 0; i < createInfoCount; ++i) { pPipelines->SetConsumerData(i, &handle_info[i]); }//@@@DFK
    VkResult replay_result = OverrideCreateRayTracingPipelinesKHR(GetDeviceTable(in_device->handle)->CreateRayTracingPipelinesKHR, returnValue, in_device, in_deferredOperation, in_pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
    CheckResult("vkCreateRayTracingPipelinesKHR", returnValue, replay_result, call_info);

    AddHandles<PipelineInfo>(device, pPipelines->GetPointer(), pPipelines->GetLength(), pPipelines->GetHandlePointer(), createInfoCount, std::move(handle_info), &VulkanObjectInfoTable::AddPipelineInfo);
}

void VulkanReplayConsumer::Process_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            pipeline,
    uint32_t                                    firstGroup,
    uint32_t                                    groupCount,
    size_t                                      dataSize,
    PointerDecoder<uint8_t>*                    pData)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkPipeline in_pipeline = MapHandle<PipelineInfo>(pipeline, &VulkanObjectInfoTable::GetPipelineInfo);
    void* out_pData = pData->IsNull() ? nullptr : pData->AllocateOutputData(dataSize);//@@@DFK
    VkResult replay_result = GetDeviceTable(in_device)->GetRayTracingCaptureReplayShaderGroupHandlesKHR(in_device, in_pipeline, firstGroup, groupCount, dataSize, out_pData);
    CheckResult("vkGetRayTracingCaptureReplayShaderGroupHandlesKHR", returnValue, replay_result, call_info);
}

void VulkanReplayConsumer::Process_vkCmdTraceRaysIndirectKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkStridedDeviceAddressRegionKHR>/*@@@PLQ*/* pRaygenShaderBindingTable,
    StructPointerDecoder<Decoded_VkStridedDeviceAddressRegionKHR>/*@@@PLQ*/* pMissShaderBindingTable,
    StructPointerDecoder<Decoded_VkStridedDeviceAddressRegionKHR>/*@@@PLQ*/* pHitShaderBindingTable,
    StructPointerDecoder<Decoded_VkStridedDeviceAddressRegionKHR>/*@@@PLQ*/* pCallableShaderBindingTable,
    VkDeviceAddress                             indirectDeviceAddress)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    const VkStridedDeviceAddressRegionKHR* in_pRaygenShaderBindingTable = pRaygenShaderBindingTable->GetPointer();
    const VkStridedDeviceAddressRegionKHR* in_pMissShaderBindingTable = pMissShaderBindingTable->GetPointer();
    const VkStridedDeviceAddressRegionKHR* in_pHitShaderBindingTable = pHitShaderBindingTable->GetPointer();
    const VkStridedDeviceAddressRegionKHR* in_pCallableShaderBindingTable = pCallableShaderBindingTable->GetPointer();//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdTraceRaysIndirectKHR(in_commandBuffer, in_pRaygenShaderBindingTable, in_pMissShaderBindingTable, in_pHitShaderBindingTable, in_pCallableShaderBindingTable, indirectDeviceAddress);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdTraceRaysIndirectKHR(dumper.GetClonedCommandBuffer(), in_pRaygenShaderBindingTable, in_pMissShaderBindingTable, in_pHitShaderBindingTable, in_pCallableShaderBindingTable, indirectDeviceAddress)/*@@@ABC*/;//@@@HERE
        if (dumper.DumpingTraceRaysIndex(call_info.index))
        {
            dumper.FinalizeCommandBuffer(*GetDeviceTable(in_commandBuffer));
        }
    }
}

void VulkanReplayConsumer::Process_vkGetRayTracingShaderGroupStackSizeKHR(
    const ApiCallInfo&                          call_info,
    VkDeviceSize                                returnValue,
    format::HandleId                            device,
    format::HandleId                            pipeline,
    uint32_t                                    group,
    VkShaderGroupShaderKHR                      groupShader)
{
    VkDevice in_device = MapHandle<DeviceInfo>(device, &VulkanObjectInfoTable::GetDeviceInfo);
    VkPipeline in_pipeline = MapHandle<PipelineInfo>(pipeline, &VulkanObjectInfoTable::GetPipelineInfo);//@@@DFK
    GetDeviceTable(in_device)->GetRayTracingShaderGroupStackSizeKHR(in_device, in_pipeline, group, groupShader);//@@@HQA
}

void VulkanReplayConsumer::Process_vkCmdSetRayTracingPipelineStackSizeKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    pipelineStackSize)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdSetRayTracingPipelineStackSizeKHR(in_commandBuffer, pipelineStackSize);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdSetRayTracingPipelineStackSizeKHR(dumper.GetClonedCommandBuffer(), pipelineStackSize)/*@@@ABC*/;//@@@HERE
    }
}

void VulkanReplayConsumer::Process_vkCmdDrawMeshTasksEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    groupCountX,
    uint32_t                                    groupCountY,
    uint32_t                                    groupCountZ)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdDrawMeshTasksEXT(in_commandBuffer, groupCountX, groupCountY, groupCountZ);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdDrawMeshTasksEXT(dumper.GetClonedCommandBuffer(), groupCountX, groupCountY, groupCountZ)/*@@@ABC*/;//@@@HERE
        if (dumper.DumpingDrawCallIndex(call_info.index))
        {
            dumper.FinalizeCommandBuffer(*GetDeviceTable(in_commandBuffer));
        }
    }
}

void VulkanReplayConsumer::Process_vkCmdDrawMeshTasksIndirectEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    uint32_t                                    drawCount,
    uint32_t                                    stride)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkBuffer in_buffer = MapHandle<BufferInfo>(buffer, &VulkanObjectInfoTable::GetBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdDrawMeshTasksIndirectEXT(in_commandBuffer, in_buffer, offset, drawCount, stride);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdDrawMeshTasksIndirectEXT(dumper.GetClonedCommandBuffer(), in_buffer, offset, drawCount, stride)/*@@@ABC*/;//@@@HERE
        if (dumper.DumpingDrawCallIndex(call_info.index))
        {
            dumper.FinalizeCommandBuffer(*GetDeviceTable(in_commandBuffer));
        }
    }
}

void VulkanReplayConsumer::Process_vkCmdDrawMeshTasksIndirectCountEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    format::HandleId                            countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride)
{
    VkCommandBuffer in_commandBuffer = MapHandle<CommandBufferInfo>(commandBuffer, &VulkanObjectInfoTable::GetCommandBufferInfo);
    VkBuffer in_buffer = MapHandle<BufferInfo>(buffer, &VulkanObjectInfoTable::GetBufferInfo);
    VkBuffer in_countBuffer = MapHandle<BufferInfo>(countBuffer, &VulkanObjectInfoTable::GetBufferInfo);//@@@DFK
    GetDeviceTable(in_commandBuffer)->CmdDrawMeshTasksIndirectCountEXT(in_commandBuffer, in_buffer, offset, in_countBuffer, countBufferOffset, maxDrawCount, stride);//@@@HQA

    // Push command in the command buffer clone
    if (dumper.IsRecording())
    {
        GetDeviceTable(dumper.GetClonedCommandBuffer())->CmdDrawMeshTasksIndirectCountEXT(dumper.GetClonedCommandBuffer(), in_buffer, offset, in_countBuffer, countBufferOffset, maxDrawCount, stride)/*@@@ABC*/;//@@@HERE
        if (dumper.DumpingDrawCallIndex(call_info.index))
        {
            dumper.FinalizeCommandBuffer(*GetDeviceTable(in_commandBuffer));
        }
    }
}

static void InitializeOutputStructPNextImpl(const VkBaseInStructure* in_pnext, VkBaseOutStructure* output_struct)
{
    while(in_pnext)
    {
        switch(in_pnext->sType)
        {
            case VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkBufferMemoryBarrier>());
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkImageMemoryBarrier>());
                break;
            }
            case VK_STRUCTURE_TYPE_MEMORY_BARRIER:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkMemoryBarrier>());
                break;
            }
            case VK_STRUCTURE_TYPE_APPLICATION_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkApplicationInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkInstanceCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDeviceQueueCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDeviceCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_SUBMIT_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSubmitInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkMappedMemoryRange>());
                break;
            }
            case VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkMemoryAllocateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_BIND_SPARSE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkBindSparseInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_FENCE_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkFenceCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSemaphoreCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_EVENT_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkEventCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkQueryPoolCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkBufferCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkBufferViewCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkImageCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkImageViewCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkShaderModuleCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineCacheCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineShaderStageCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkComputePipelineCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineVertexInputStateCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineInputAssemblyStateCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineTessellationStateCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineViewportStateCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineRasterizationStateCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineMultisampleStateCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineDepthStencilStateCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineColorBlendStateCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineDynamicStateCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkGraphicsPipelineCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineLayoutCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSamplerCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkCopyDescriptorSet>());
                break;
            }
            case VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDescriptorPoolCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDescriptorSetAllocateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDescriptorSetLayoutCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkWriteDescriptorSet>());
                break;
            }
            case VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkFramebufferCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkRenderPassCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkCommandPoolCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkCommandBufferAllocateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkCommandBufferInheritanceInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkCommandBufferBeginInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkRenderPassBeginInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceSubgroupProperties>());
                break;
            }
            case VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkBindBufferMemoryInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkBindImageMemoryInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDevice16BitStorageFeatures>());
                break;
            }
            case VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkMemoryDedicatedRequirements>());
                break;
            }
            case VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkMemoryDedicatedAllocateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkMemoryAllocateFlagsInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDeviceGroupRenderPassBeginInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDeviceGroupCommandBufferBeginInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDeviceGroupSubmitInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDeviceGroupBindSparseInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkBindBufferMemoryDeviceGroupInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkBindImageMemoryDeviceGroupInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceGroupProperties>());
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDeviceGroupDeviceCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkBufferMemoryRequirementsInfo2>());
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkImageMemoryRequirementsInfo2>());
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkImageSparseMemoryRequirementsInfo2>());
                break;
            }
            case VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkMemoryRequirements2>());
                break;
            }
            case VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSparseImageMemoryRequirements2>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceFeatures2>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceProperties2>());
                break;
            }
            case VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkFormatProperties2>());
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkImageFormatProperties2>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceImageFormatInfo2>());
                break;
            }
            case VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkQueueFamilyProperties2>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceMemoryProperties2>());
                break;
            }
            case VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSparseImageFormatProperties2>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceSparseImageFormatInfo2>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDevicePointClippingProperties>());
                break;
            }
            case VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkRenderPassInputAttachmentAspectCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkImageViewUsageCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineTessellationDomainOriginStateCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkRenderPassMultiviewCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceMultiviewFeatures>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceMultiviewProperties>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceVariablePointersFeatures>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceProtectedMemoryFeatures>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceProtectedMemoryProperties>());
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_QUEUE_INFO_2:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDeviceQueueInfo2>());
                break;
            }
            case VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkProtectedSubmitInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSamplerYcbcrConversionCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSamplerYcbcrConversionInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkBindImagePlaneMemoryInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkImagePlaneMemoryRequirementsInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceSamplerYcbcrConversionFeatures>());
                break;
            }
            case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSamplerYcbcrConversionImageFormatProperties>());
                break;
            }
            case VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDescriptorUpdateTemplateCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceExternalImageFormatInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkExternalImageFormatProperties>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceExternalBufferInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkExternalBufferProperties>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceIDProperties>());
                break;
            }
            case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkExternalMemoryImageCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkExternalMemoryBufferCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkExportMemoryAllocateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceExternalFenceInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkExternalFenceProperties>());
                break;
            }
            case VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkExportFenceCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkExportSemaphoreCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceExternalSemaphoreInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkExternalSemaphoreProperties>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceMaintenance3Properties>());
                break;
            }
            case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDescriptorSetLayoutSupport>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceShaderDrawParametersFeatures>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceVulkan11Features>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_PROPERTIES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceVulkan11Properties>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceVulkan12Features>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_PROPERTIES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceVulkan12Properties>());
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkImageFormatListCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_2:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkAttachmentDescription2>());
                break;
            }
            case VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_2:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkAttachmentReference2>());
                break;
            }
            case VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_2:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSubpassDescription2>());
                break;
            }
            case VK_STRUCTURE_TYPE_SUBPASS_DEPENDENCY_2:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSubpassDependency2>());
                break;
            }
            case VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO_2:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkRenderPassCreateInfo2>());
                break;
            }
            case VK_STRUCTURE_TYPE_SUBPASS_BEGIN_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSubpassBeginInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_SUBPASS_END_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSubpassEndInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDevice8BitStorageFeatures>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceDriverProperties>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceShaderAtomicInt64Features>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceShaderFloat16Int8Features>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceFloatControlsProperties>());
                break;
            }
            case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDescriptorSetLayoutBindingFlagsCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceDescriptorIndexingFeatures>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceDescriptorIndexingProperties>());
                break;
            }
            case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDescriptorSetVariableDescriptorCountAllocateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDescriptorSetVariableDescriptorCountLayoutSupport>());
                break;
            }
            case VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSubpassDescriptionDepthStencilResolve>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceDepthStencilResolveProperties>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceScalarBlockLayoutFeatures>());
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkImageStencilUsageCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSamplerReductionModeCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceSamplerFilterMinmaxProperties>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceVulkanMemoryModelFeatures>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceImagelessFramebufferFeatures>());
                break;
            }
            case VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENT_IMAGE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkFramebufferAttachmentImageInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENTS_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkFramebufferAttachmentsCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_RENDER_PASS_ATTACHMENT_BEGIN_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkRenderPassAttachmentBeginInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceUniformBufferStandardLayoutFeatures>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures>());
                break;
            }
            case VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_STENCIL_LAYOUT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkAttachmentReferenceStencilLayout>());
                break;
            }
            case VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_STENCIL_LAYOUT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkAttachmentDescriptionStencilLayout>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceHostQueryResetFeatures>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceTimelineSemaphoreFeatures>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceTimelineSemaphoreProperties>());
                break;
            }
            case VK_STRUCTURE_TYPE_SEMAPHORE_TYPE_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSemaphoreTypeCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_TIMELINE_SEMAPHORE_SUBMIT_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkTimelineSemaphoreSubmitInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_SEMAPHORE_WAIT_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSemaphoreWaitInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_SEMAPHORE_SIGNAL_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSemaphoreSignalInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceBufferDeviceAddressFeatures>());
                break;
            }
            case VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkBufferDeviceAddressInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_BUFFER_OPAQUE_CAPTURE_ADDRESS_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkBufferOpaqueCaptureAddressCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_MEMORY_OPAQUE_CAPTURE_ADDRESS_ALLOCATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkMemoryOpaqueCaptureAddressAllocateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_MEMORY_OPAQUE_CAPTURE_ADDRESS_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDeviceMemoryOpaqueCaptureAddressInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceVulkan13Features>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_PROPERTIES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceVulkan13Properties>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineCreationFeedbackCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TERMINATE_INVOCATION_FEATURES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceShaderTerminateInvocationFeatures>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TOOL_PROPERTIES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceToolProperties>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDevicePrivateDataFeatures>());
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_PRIVATE_DATA_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDevicePrivateDataCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_PRIVATE_DATA_SLOT_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPrivateDataSlotCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDevicePipelineCreationCacheControlFeatures>());
                break;
            }
            case VK_STRUCTURE_TYPE_MEMORY_BARRIER_2:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkMemoryBarrier2>());
                break;
            }
            case VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER_2:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkBufferMemoryBarrier2>());
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER_2:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkImageMemoryBarrier2>());
                break;
            }
            case VK_STRUCTURE_TYPE_DEPENDENCY_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDependencyInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_SEMAPHORE_SUBMIT_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSemaphoreSubmitInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_COMMAND_BUFFER_SUBMIT_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkCommandBufferSubmitInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_SUBMIT_INFO_2:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSubmitInfo2>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceSynchronization2Features>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ZERO_INITIALIZE_WORKGROUP_MEMORY_FEATURES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceImageRobustnessFeatures>());
                break;
            }
            case VK_STRUCTURE_TYPE_BUFFER_COPY_2:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkBufferCopy2>());
                break;
            }
            case VK_STRUCTURE_TYPE_COPY_BUFFER_INFO_2:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkCopyBufferInfo2>());
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_COPY_2:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkImageCopy2>());
                break;
            }
            case VK_STRUCTURE_TYPE_COPY_IMAGE_INFO_2:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkCopyImageInfo2>());
                break;
            }
            case VK_STRUCTURE_TYPE_BUFFER_IMAGE_COPY_2:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkBufferImageCopy2>());
                break;
            }
            case VK_STRUCTURE_TYPE_COPY_BUFFER_TO_IMAGE_INFO_2:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkCopyBufferToImageInfo2>());
                break;
            }
            case VK_STRUCTURE_TYPE_COPY_IMAGE_TO_BUFFER_INFO_2:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkCopyImageToBufferInfo2>());
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_BLIT_2:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkImageBlit2>());
                break;
            }
            case VK_STRUCTURE_TYPE_BLIT_IMAGE_INFO_2:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkBlitImageInfo2>());
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_RESOLVE_2:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkImageResolve2>());
                break;
            }
            case VK_STRUCTURE_TYPE_RESOLVE_IMAGE_INFO_2:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkResolveImageInfo2>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceSubgroupSizeControlFeatures>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceSubgroupSizeControlProperties>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineShaderStageRequiredSubgroupSizeCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceInlineUniformBlockFeatures>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceInlineUniformBlockProperties>());
                break;
            }
            case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkWriteDescriptorSetInlineUniformBlock>());
                break;
            }
            case VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDescriptorPoolInlineUniformBlockCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceTextureCompressionASTCHDRFeatures>());
                break;
            }
            case VK_STRUCTURE_TYPE_RENDERING_ATTACHMENT_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkRenderingAttachmentInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_RENDERING_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkRenderingInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_RENDERING_CREATE_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineRenderingCreateInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceDynamicRenderingFeatures>());
                break;
            }
            case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_RENDERING_INFO:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkCommandBufferInheritanceRenderingInfo>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_FEATURES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceShaderIntegerDotProductFeatures>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_PROPERTIES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceShaderIntegerDotProductProperties>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceTexelBufferAlignmentProperties>());
                break;
            }
            case VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_3:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkFormatProperties3>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceMaintenance4Features>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_PROPERTIES:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceMaintenance4Properties>());
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_BUFFER_MEMORY_REQUIREMENTS:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDeviceBufferMemoryRequirements>());
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_IMAGE_MEMORY_REQUIREMENTS:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDeviceImageMemoryRequirements>());
                break;
            }
            case VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSwapchainCreateInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_PRESENT_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPresentInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkImageSwapchainCreateInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkBindImageMemorySwapchainInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkAcquireNextImageInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDeviceGroupPresentCapabilitiesKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDeviceGroupPresentInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDeviceGroupSwapchainCreateInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_DISPLAY_MODE_CREATE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDisplayModeCreateInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDisplaySurfaceCreateInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDisplayPresentInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_XLIB_SURFACE_CREATE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkXlibSurfaceCreateInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_XCB_SURFACE_CREATE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkXcbSurfaceCreateInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_WAYLAND_SURFACE_CREATE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkWaylandSurfaceCreateInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_ANDROID_SURFACE_CREATE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkAndroidSurfaceCreateInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkWin32SurfaceCreateInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_QUEUE_FAMILY_QUERY_RESULT_STATUS_PROPERTIES_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkQueueFamilyQueryResultStatusPropertiesKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_QUEUE_FAMILY_VIDEO_PROPERTIES_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkQueueFamilyVideoPropertiesKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_PROFILE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoProfileInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_PROFILE_LIST_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoProfileListInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_CAPABILITIES_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoCapabilitiesKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_FORMAT_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceVideoFormatInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_FORMAT_PROPERTIES_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoFormatPropertiesKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_PICTURE_RESOURCE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoPictureResourceInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_REFERENCE_SLOT_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoReferenceSlotInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_SESSION_MEMORY_REQUIREMENTS_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoSessionMemoryRequirementsKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_BIND_VIDEO_SESSION_MEMORY_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkBindVideoSessionMemoryInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_SESSION_CREATE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoSessionCreateInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_SESSION_PARAMETERS_CREATE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoSessionParametersCreateInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_SESSION_PARAMETERS_UPDATE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoSessionParametersUpdateInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_BEGIN_CODING_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoBeginCodingInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_END_CODING_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoEndCodingInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_CODING_CONTROL_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoCodingControlInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_CAPABILITIES_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoDecodeCapabilitiesKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_USAGE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoDecodeUsageInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoDecodeInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_PROFILE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoDecodeH264ProfileInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_CAPABILITIES_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoDecodeH264CapabilitiesKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_SESSION_PARAMETERS_ADD_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoDecodeH264SessionParametersAddInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_SESSION_PARAMETERS_CREATE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoDecodeH264SessionParametersCreateInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_PICTURE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoDecodeH264PictureInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_DPB_SLOT_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoDecodeH264DpbSlotInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_RENDERING_FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkRenderingFragmentShadingRateAttachmentInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_RENDERING_FRAGMENT_DENSITY_MAP_ATTACHMENT_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkRenderingFragmentDensityMapAttachmentInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_ATTACHMENT_SAMPLE_COUNT_INFO_AMD:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkAttachmentSampleCountInfoAMD>());
                break;
            }
            case VK_STRUCTURE_TYPE_MULTIVIEW_PER_VIEW_ATTRIBUTES_INFO_NVX:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkMultiviewPerViewAttributesInfoNVX>());
                break;
            }
            case VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkImportMemoryWin32HandleInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkExportMemoryWin32HandleInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_MEMORY_WIN32_HANDLE_PROPERTIES_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkMemoryWin32HandlePropertiesKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_MEMORY_GET_WIN32_HANDLE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkMemoryGetWin32HandleInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkImportMemoryFdInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkMemoryFdPropertiesKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_MEMORY_GET_FD_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkMemoryGetFdInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkWin32KeyedMutexAcquireReleaseInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkImportSemaphoreWin32HandleInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkExportSemaphoreWin32HandleInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_D3D12_FENCE_SUBMIT_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkD3D12FenceSubmitInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_SEMAPHORE_GET_WIN32_HANDLE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSemaphoreGetWin32HandleInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkImportSemaphoreFdInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_SEMAPHORE_GET_FD_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSemaphoreGetFdInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDevicePushDescriptorPropertiesKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPresentRegionsKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSharedPresentSurfaceCapabilitiesKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_IMPORT_FENCE_WIN32_HANDLE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkImportFenceWin32HandleInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_EXPORT_FENCE_WIN32_HANDLE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkExportFenceWin32HandleInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_FENCE_GET_WIN32_HANDLE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkFenceGetWin32HandleInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_IMPORT_FENCE_FD_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkImportFenceFdInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_FENCE_GET_FD_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkFenceGetFdInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDevicePerformanceQueryFeaturesKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_PROPERTIES_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDevicePerformanceQueryPropertiesKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_PERFORMANCE_COUNTER_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPerformanceCounterKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_PERFORMANCE_COUNTER_DESCRIPTION_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPerformanceCounterDescriptionKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_CREATE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkQueryPoolPerformanceCreateInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_ACQUIRE_PROFILING_LOCK_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkAcquireProfilingLockInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_PERFORMANCE_QUERY_SUBMIT_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPerformanceQuerySubmitInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceSurfaceInfo2KHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSurfaceCapabilities2KHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_SURFACE_FORMAT_2_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSurfaceFormat2KHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_DISPLAY_PROPERTIES_2_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDisplayProperties2KHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_DISPLAY_PLANE_PROPERTIES_2_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDisplayPlaneProperties2KHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_DISPLAY_MODE_PROPERTIES_2_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDisplayModeProperties2KHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_DISPLAY_PLANE_INFO_2_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDisplayPlaneInfo2KHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_DISPLAY_PLANE_CAPABILITIES_2_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDisplayPlaneCapabilities2KHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PORTABILITY_SUBSET_FEATURES_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDevicePortabilitySubsetFeaturesKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PORTABILITY_SUBSET_PROPERTIES_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDevicePortabilitySubsetPropertiesKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceShaderClockFeaturesKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_PROFILE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoDecodeH265ProfileInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_CAPABILITIES_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoDecodeH265CapabilitiesKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_SESSION_PARAMETERS_ADD_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoDecodeH265SessionParametersAddInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_SESSION_PARAMETERS_CREATE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoDecodeH265SessionParametersCreateInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_PICTURE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoDecodeH265PictureInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_DPB_SLOT_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoDecodeH265DpbSlotInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDeviceQueueGlobalPriorityCreateInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GLOBAL_PRIORITY_QUERY_FEATURES_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_QUEUE_FAMILY_GLOBAL_PRIORITY_PROPERTIES_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkQueueFamilyGlobalPriorityPropertiesKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkFragmentShadingRateAttachmentInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_FRAGMENT_SHADING_RATE_STATE_CREATE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineFragmentShadingRateStateCreateInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_FEATURES_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceFragmentShadingRateFeaturesKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_PROPERTIES_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceFragmentShadingRatePropertiesKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceFragmentShadingRateKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_SURFACE_PROTECTED_CAPABILITIES_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSurfaceProtectedCapabilitiesKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_WAIT_FEATURES_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDevicePresentWaitFeaturesKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_PROPERTIES_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineExecutablePropertiesKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineExecutableInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_STATISTIC_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineExecutableStatisticKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INTERNAL_REPRESENTATION_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineExecutableInternalRepresentationKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_MEMORY_MAP_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkMemoryMapInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_MEMORY_UNMAP_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkMemoryUnmapInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_LIBRARY_CREATE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineLibraryCreateInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_PRESENT_ID_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPresentIdKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_ID_FEATURES_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDevicePresentIdFeaturesKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoEncodeInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_CAPABILITIES_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoEncodeCapabilitiesKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_QUERY_POOL_VIDEO_ENCODE_FEEDBACK_CREATE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkQueryPoolVideoEncodeFeedbackCreateInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_USAGE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoEncodeUsageInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_RATE_CONTROL_LAYER_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoEncodeRateControlLayerInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_RATE_CONTROL_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoEncodeRateControlInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_ENCODE_QUALITY_LEVEL_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_QUALITY_LEVEL_PROPERTIES_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoEncodeQualityLevelPropertiesKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_QUALITY_LEVEL_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoEncodeQualityLevelInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_SESSION_PARAMETERS_GET_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoEncodeSessionParametersGetInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_SESSION_PARAMETERS_FEEDBACK_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoEncodeSessionParametersFeedbackInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_2_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkQueueFamilyCheckpointProperties2NV>());
                break;
            }
            case VK_STRUCTURE_TYPE_CHECKPOINT_DATA_2_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkCheckpointData2NV>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_PROPERTIES_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_UNIFORM_CONTROL_FLOW_FEATURES_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_WORKGROUP_MEMORY_EXPLICIT_LAYOUT_FEATURES_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MAINTENANCE_1_FEATURES_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_5_FEATURES_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceMaintenance5FeaturesKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_5_PROPERTIES_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceMaintenance5PropertiesKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_RENDERING_AREA_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkRenderingAreaInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_SUBRESOURCE_2_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkImageSubresource2KHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_IMAGE_SUBRESOURCE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDeviceImageSubresourceInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_SUBRESOURCE_LAYOUT_2_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSubresourceLayout2KHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_CREATE_FLAGS_2_CREATE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineCreateFlags2CreateInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_BUFFER_USAGE_FLAGS_2_CREATE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkBufferUsageFlags2CreateInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_POSITION_FETCH_FEATURES_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_COOPERATIVE_MATRIX_PROPERTIES_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkCooperativeMatrixPropertiesKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceCooperativeMatrixFeaturesKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceCooperativeMatrixPropertiesKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDebugReportCallbackCreateInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineRasterizationStateRasterizationOrderAMD>());
                break;
            }
            case VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDebugMarkerObjectNameInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDebugMarkerObjectTagInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDebugMarkerMarkerInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDedicatedAllocationImageCreateInfoNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDedicatedAllocationBufferCreateInfoNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDedicatedAllocationMemoryAllocateInfoNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceTransformFeedbackFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceTransformFeedbackPropertiesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineRasterizationStateStreamCreateInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_VIEW_HANDLE_INFO_NVX:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkImageViewHandleInfoNVX>());
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_VIEW_ADDRESS_PROPERTIES_NVX:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkImageViewAddressPropertiesNVX>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_CAPABILITIES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoEncodeH264CapabilitiesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_QUALITY_LEVEL_PROPERTIES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoEncodeH264QualityLevelPropertiesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_CREATE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoEncodeH264SessionCreateInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_PARAMETERS_ADD_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoEncodeH264SessionParametersAddInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_PARAMETERS_CREATE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoEncodeH264SessionParametersCreateInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_PARAMETERS_GET_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoEncodeH264SessionParametersGetInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_PARAMETERS_FEEDBACK_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoEncodeH264SessionParametersFeedbackInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_NALU_SLICE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoEncodeH264NaluSliceInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_PICTURE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoEncodeH264PictureInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_DPB_SLOT_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoEncodeH264DpbSlotInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_PROFILE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoEncodeH264ProfileInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_RATE_CONTROL_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoEncodeH264RateControlInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_RATE_CONTROL_LAYER_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoEncodeH264RateControlLayerInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_GOP_REMAINING_FRAME_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoEncodeH264GopRemainingFrameInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_CAPABILITIES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoEncodeH265CapabilitiesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_CREATE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoEncodeH265SessionCreateInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_QUALITY_LEVEL_PROPERTIES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoEncodeH265QualityLevelPropertiesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_PARAMETERS_ADD_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoEncodeH265SessionParametersAddInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_PARAMETERS_CREATE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoEncodeH265SessionParametersCreateInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_PARAMETERS_GET_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoEncodeH265SessionParametersGetInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_PARAMETERS_FEEDBACK_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoEncodeH265SessionParametersFeedbackInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_NALU_SLICE_SEGMENT_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoEncodeH265NaluSliceSegmentInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_PICTURE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoEncodeH265PictureInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_DPB_SLOT_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoEncodeH265DpbSlotInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_PROFILE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoEncodeH265ProfileInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_RATE_CONTROL_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoEncodeH265RateControlInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_RATE_CONTROL_LAYER_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoEncodeH265RateControlLayerInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_GOP_REMAINING_FRAME_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVideoEncodeH265GopRemainingFrameInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkTextureLODGatherFormatPropertiesAMD>());
                break;
            }
            case VK_STRUCTURE_TYPE_STREAM_DESCRIPTOR_SURFACE_CREATE_INFO_GGP:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkStreamDescriptorSurfaceCreateInfoGGP>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceCornerSampledImageFeaturesNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkExternalMemoryImageCreateInfoNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkExportMemoryAllocateInfoNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkImportMemoryWin32HandleInfoNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkExportMemoryWin32HandleInfoNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkWin32KeyedMutexAcquireReleaseInfoNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkValidationFlagsEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_VI_SURFACE_CREATE_INFO_NN:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkViSurfaceCreateInfoNN>());
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_VIEW_ASTC_DECODE_MODE_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkImageViewASTCDecodeModeEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceASTCDecodeFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDevicePipelineRobustnessFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_PROPERTIES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDevicePipelineRobustnessPropertiesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_ROBUSTNESS_CREATE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineRobustnessCreateInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_CONDITIONAL_RENDERING_BEGIN_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkConditionalRenderingBeginInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceConditionalRenderingFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkCommandBufferInheritanceConditionalRenderingInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineViewportWScalingStateCreateInfoNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSurfaceCapabilities2EXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDisplayPowerInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDeviceEventInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDisplayEventInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSwapchainCounterCreateInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPresentTimesInfoGOOGLE>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineViewportSwizzleStateCreateInfoNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceDiscardRectanglePropertiesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineDiscardRectangleStateCreateInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceConservativeRasterizationPropertiesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineRasterizationConservativeStateCreateInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceDepthClipEnableFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineRasterizationDepthClipStateCreateInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_HDR_METADATA_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkHdrMetadataEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_IOS_SURFACE_CREATE_INFO_MVK:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkIOSSurfaceCreateInfoMVK>());
                break;
            }
            case VK_STRUCTURE_TYPE_MACOS_SURFACE_CREATE_INFO_MVK:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkMacOSSurfaceCreateInfoMVK>());
                break;
            }
            case VK_STRUCTURE_TYPE_DEBUG_UTILS_LABEL_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDebugUtilsLabelEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDebugUtilsObjectNameInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDebugUtilsMessengerCallbackDataEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDebugUtilsMessengerCreateInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_TAG_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDebugUtilsObjectTagInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_USAGE_ANDROID:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkAndroidHardwareBufferUsageANDROID>());
                break;
            }
            case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_PROPERTIES_ANDROID:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkAndroidHardwareBufferPropertiesANDROID>());
                break;
            }
            case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_ANDROID:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkAndroidHardwareBufferFormatPropertiesANDROID>());
                break;
            }
            case VK_STRUCTURE_TYPE_IMPORT_ANDROID_HARDWARE_BUFFER_INFO_ANDROID:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkImportAndroidHardwareBufferInfoANDROID>());
                break;
            }
            case VK_STRUCTURE_TYPE_MEMORY_GET_ANDROID_HARDWARE_BUFFER_INFO_ANDROID:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkMemoryGetAndroidHardwareBufferInfoANDROID>());
                break;
            }
            case VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkExternalFormatANDROID>());
                break;
            }
            case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_2_ANDROID:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkAndroidHardwareBufferFormatProperties2ANDROID>());
                break;
            }
            case VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSampleLocationsInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkRenderPassSampleLocationsBeginInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineSampleLocationsStateCreateInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceSampleLocationsPropertiesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_MULTISAMPLE_PROPERTIES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkMultisamplePropertiesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineColorBlendAdvancedStateCreateInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineCoverageToColorStateCreateInfoNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineCoverageModulationStateCreateInfoNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_PROPERTIES_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceShaderSMBuiltinsPropertiesNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceShaderSMBuiltinsFeaturesNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDrmFormatModifierPropertiesListEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceImageDrmFormatModifierInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkImageDrmFormatModifierListCreateInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_EXPLICIT_CREATE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkImageDrmFormatModifierExplicitCreateInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkImageDrmFormatModifierPropertiesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_2_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDrmFormatModifierPropertiesList2EXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_VALIDATION_CACHE_CREATE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkValidationCacheCreateInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkShaderModuleValidationCacheCreateInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineViewportShadingRateImageStateCreateInfoNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceShadingRateImageFeaturesNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceShadingRateImagePropertiesNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineViewportCoarseSampleOrderStateCreateInfoNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkRayTracingShaderGroupCreateInfoNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkRayTracingPipelineCreateInfoNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_GEOMETRY_TRIANGLES_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkGeometryTrianglesNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_GEOMETRY_AABB_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkGeometryAABBNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_GEOMETRY_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkGeometryNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_INFO_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkAccelerationStructureInfoNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkAccelerationStructureCreateInfoNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkBindAccelerationStructureMemoryInfoNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkWriteDescriptorSetAccelerationStructureNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkAccelerationStructureMemoryRequirementsInfoNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceRayTracingPropertiesNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineRepresentativeFragmentTestStateCreateInfoNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceImageViewImageFormatInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkFilterCubicImageViewImageFormatPropertiesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkImportMemoryHostPointerInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_MEMORY_HOST_POINTER_PROPERTIES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkMemoryHostPointerPropertiesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceExternalMemoryHostPropertiesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineCompilerControlCreateInfoAMD>());
                break;
            }
            case VK_STRUCTURE_TYPE_CALIBRATED_TIMESTAMP_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkCalibratedTimestampInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceShaderCorePropertiesAMD>());
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDeviceMemoryOverallocationCreateInfoAMD>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineVertexInputDivisorStateCreateInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PRESENT_FRAME_TOKEN_GGP:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPresentFrameTokenGGP>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceComputeShaderDerivativesFeaturesNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceMeshShaderFeaturesNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceMeshShaderPropertiesNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceShaderImageFootprintFeaturesNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineViewportExclusiveScissorStateCreateInfoNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceExclusiveScissorFeaturesNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkQueueFamilyCheckpointPropertiesNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_CHECKPOINT_DATA_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkCheckpointDataNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL>());
                break;
            }
            case VK_STRUCTURE_TYPE_INITIALIZE_PERFORMANCE_API_INFO_INTEL:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkInitializePerformanceApiInfoINTEL>());
                break;
            }
            case VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_QUERY_CREATE_INFO_INTEL:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkQueryPoolPerformanceQueryCreateInfoINTEL>());
                break;
            }
            case VK_STRUCTURE_TYPE_PERFORMANCE_MARKER_INFO_INTEL:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPerformanceMarkerInfoINTEL>());
                break;
            }
            case VK_STRUCTURE_TYPE_PERFORMANCE_STREAM_MARKER_INFO_INTEL:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPerformanceStreamMarkerInfoINTEL>());
                break;
            }
            case VK_STRUCTURE_TYPE_PERFORMANCE_OVERRIDE_INFO_INTEL:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPerformanceOverrideInfoINTEL>());
                break;
            }
            case VK_STRUCTURE_TYPE_PERFORMANCE_CONFIGURATION_ACQUIRE_INFO_INTEL:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPerformanceConfigurationAcquireInfoINTEL>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDevicePCIBusInfoPropertiesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_DISPLAY_NATIVE_HDR_SURFACE_CAPABILITIES_AMD:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDisplayNativeHdrSurfaceCapabilitiesAMD>());
                break;
            }
            case VK_STRUCTURE_TYPE_SWAPCHAIN_DISPLAY_NATIVE_HDR_CREATE_INFO_AMD:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSwapchainDisplayNativeHdrCreateInfoAMD>());
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGEPIPE_SURFACE_CREATE_INFO_FUCHSIA:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkImagePipeSurfaceCreateInfoFUCHSIA>());
                break;
            }
            case VK_STRUCTURE_TYPE_METAL_SURFACE_CREATE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkMetalSurfaceCreateInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceFragmentDensityMapFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceFragmentDensityMapPropertiesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkRenderPassFragmentDensityMapCreateInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_2_AMD:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceShaderCoreProperties2AMD>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceCoherentMemoryFeaturesAMD>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceMemoryBudgetPropertiesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceMemoryPriorityFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_MEMORY_PRIORITY_ALLOCATE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkMemoryPriorityAllocateInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceBufferDeviceAddressFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkBufferDeviceAddressCreateInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkValidationFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_COOPERATIVE_MATRIX_PROPERTIES_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkCooperativeMatrixPropertiesNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceCooperativeMatrixFeaturesNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceCooperativeMatrixPropertiesNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceCoverageReductionModeFeaturesNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_REDUCTION_STATE_CREATE_INFO_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineCoverageReductionStateCreateInfoNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_FRAMEBUFFER_MIXED_SAMPLES_COMBINATION_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkFramebufferMixedSamplesCombinationNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceYcbcrImageArraysFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceProvokingVertexFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_PROPERTIES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceProvokingVertexPropertiesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_PROVOKING_VERTEX_STATE_CREATE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineRasterizationProvokingVertexStateCreateInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSurfaceFullScreenExclusiveInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_FULL_SCREEN_EXCLUSIVE_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSurfaceCapabilitiesFullScreenExclusiveEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_WIN32_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSurfaceFullScreenExclusiveWin32InfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_HEADLESS_SURFACE_CREATE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkHeadlessSurfaceCreateInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceLineRasterizationFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceLineRasterizationPropertiesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineRasterizationLineStateCreateInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceShaderAtomicFloatFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceIndexTypeUint8FeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceExtendedDynamicStateFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_IMAGE_COPY_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceHostImageCopyFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_IMAGE_COPY_PROPERTIES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceHostImageCopyPropertiesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_MEMORY_TO_IMAGE_COPY_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkMemoryToImageCopyEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_TO_MEMORY_COPY_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkImageToMemoryCopyEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_COPY_MEMORY_TO_IMAGE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkCopyMemoryToImageInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_COPY_IMAGE_TO_MEMORY_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkCopyImageToMemoryInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_COPY_IMAGE_TO_IMAGE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkCopyImageToImageInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_HOST_IMAGE_LAYOUT_TRANSITION_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkHostImageLayoutTransitionInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_SUBRESOURCE_HOST_MEMCPY_SIZE_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSubresourceHostMemcpySizeEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_HOST_IMAGE_COPY_DEVICE_PERFORMANCE_QUERY_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkHostImageCopyDevicePerformanceQueryEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_2_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_SURFACE_PRESENT_MODE_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSurfacePresentModeEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_SURFACE_PRESENT_SCALING_CAPABILITIES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSurfacePresentScalingCapabilitiesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_SURFACE_PRESENT_MODE_COMPATIBILITY_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSurfacePresentModeCompatibilityEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SWAPCHAIN_MAINTENANCE_1_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_FENCE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSwapchainPresentFenceInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_MODES_CREATE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSwapchainPresentModesCreateInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_MODE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSwapchainPresentModeInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_SCALING_CREATE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSwapchainPresentScalingCreateInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_RELEASE_SWAPCHAIN_IMAGES_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkReleaseSwapchainImagesInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_PROPERTIES_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_GRAPHICS_SHADER_GROUP_CREATE_INFO_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkGraphicsShaderGroupCreateInfoNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_SHADER_GROUPS_CREATE_INFO_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkGraphicsPipelineShaderGroupsCreateInfoNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_TOKEN_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkIndirectCommandsLayoutTokenNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkIndirectCommandsLayoutCreateInfoNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_GENERATED_COMMANDS_INFO_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkGeneratedCommandsInfoNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_GENERATED_COMMANDS_MEMORY_REQUIREMENTS_INFO_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkGeneratedCommandsMemoryRequirementsInfoNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INHERITED_VIEWPORT_SCISSOR_FEATURES_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceInheritedViewportScissorFeaturesNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_VIEWPORT_SCISSOR_INFO_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkCommandBufferInheritanceViewportScissorInfoNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_RENDER_PASS_TRANSFORM_BEGIN_INFO_QCOM:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkRenderPassTransformBeginInfoQCOM>());
                break;
            }
            case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_RENDER_PASS_TRANSFORM_INFO_QCOM:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkCommandBufferInheritanceRenderPassTransformInfoQCOM>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_BIAS_CONTROL_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceDepthBiasControlFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_DEPTH_BIAS_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDepthBiasInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_DEPTH_BIAS_REPRESENTATION_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDepthBiasRepresentationInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_MEMORY_REPORT_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceDeviceMemoryReportFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_MEMORY_REPORT_CALLBACK_DATA_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDeviceMemoryReportCallbackDataEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_DEVICE_MEMORY_REPORT_CREATE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDeviceDeviceMemoryReportCreateInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceRobustness2FeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_PROPERTIES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceRobustness2PropertiesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_SAMPLER_CUSTOM_BORDER_COLOR_CREATE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSamplerCustomBorderColorCreateInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_PROPERTIES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceCustomBorderColorPropertiesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceCustomBorderColorFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_BARRIER_FEATURES_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDevicePresentBarrierFeaturesNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_PRESENT_BARRIER_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSurfaceCapabilitiesPresentBarrierNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_BARRIER_CREATE_INFO_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSwapchainPresentBarrierCreateInfoNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DIAGNOSTICS_CONFIG_FEATURES_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceDiagnosticsConfigFeaturesNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_DIAGNOSTICS_CONFIG_CREATE_INFO_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDeviceDiagnosticsConfigCreateInfoNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_QUERY_LOW_LATENCY_SUPPORT_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkQueryLowLatencySupportNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_PROPERTIES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_LIBRARY_CREATE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkGraphicsPipelineLibraryCreateInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_EARLY_AND_LATE_FRAGMENT_TESTS_FEATURES_AMD:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_FEATURES_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_PROPERTIES_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_FRAGMENT_SHADING_RATE_ENUM_STATE_CREATE_INFO_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineFragmentShadingRateEnumStateCreateInfoNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_MOTION_TRIANGLES_DATA_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkAccelerationStructureGeometryMotionTrianglesDataNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MOTION_INFO_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkAccelerationStructureMotionInfoNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MOTION_BLUR_FEATURES_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceRayTracingMotionBlurFeaturesNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_2_PLANE_444_FORMATS_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceFragmentDensityMap2FeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_PROPERTIES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceFragmentDensityMap2PropertiesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_COPY_COMMAND_TRANSFORM_INFO_QCOM:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkCopyCommandTransformInfoQCOM>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceImageCompressionControlFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_COMPRESSION_CONTROL_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkImageCompressionControlEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_COMPRESSION_PROPERTIES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkImageCompressionPropertiesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_LAYOUT_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_4444_FORMATS_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDevice4444FormatsFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FAULT_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceFaultFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_FAULT_COUNTS_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDeviceFaultCountsEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_FAULT_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDeviceFaultInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RGBA10X6_FORMATS_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_DIRECTFB_SURFACE_CREATE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDirectFBSurfaceCreateInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MUTABLE_DESCRIPTOR_TYPE_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_MUTABLE_DESCRIPTOR_TYPE_CREATE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkMutableDescriptorTypeCreateInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_INPUT_DYNAMIC_STATE_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_VERTEX_INPUT_BINDING_DESCRIPTION_2_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVertexInputBindingDescription2EXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_VERTEX_INPUT_ATTRIBUTE_DESCRIPTION_2_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkVertexInputAttributeDescription2EXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRM_PROPERTIES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceDrmPropertiesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ADDRESS_BINDING_REPORT_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceAddressBindingReportFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_ADDRESS_BINDING_CALLBACK_DATA_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDeviceAddressBindingCallbackDataEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_CONTROL_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceDepthClipControlFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_DEPTH_CLIP_CONTROL_CREATE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineViewportDepthClipControlCreateInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVE_TOPOLOGY_LIST_RESTART_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_IMPORT_MEMORY_ZIRCON_HANDLE_INFO_FUCHSIA:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkImportMemoryZirconHandleInfoFUCHSIA>());
                break;
            }
            case VK_STRUCTURE_TYPE_MEMORY_ZIRCON_HANDLE_PROPERTIES_FUCHSIA:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkMemoryZirconHandlePropertiesFUCHSIA>());
                break;
            }
            case VK_STRUCTURE_TYPE_MEMORY_GET_ZIRCON_HANDLE_INFO_FUCHSIA:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkMemoryGetZirconHandleInfoFUCHSIA>());
                break;
            }
            case VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_ZIRCON_HANDLE_INFO_FUCHSIA:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkImportSemaphoreZirconHandleInfoFUCHSIA>());
                break;
            }
            case VK_STRUCTURE_TYPE_SEMAPHORE_GET_ZIRCON_HANDLE_INFO_FUCHSIA:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSemaphoreGetZirconHandleInfoFUCHSIA>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INVOCATION_MASK_FEATURES_HUAWEI:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceInvocationMaskFeaturesHUAWEI>());
                break;
            }
            case VK_STRUCTURE_TYPE_MEMORY_GET_REMOTE_ADDRESS_INFO_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkMemoryGetRemoteAddressInfoNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_RDMA_FEATURES_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceExternalMemoryRDMAFeaturesNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAME_BOUNDARY_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceFrameBoundaryFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_FRAME_BOUNDARY_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkFrameBoundaryEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_SUBPASS_RESOLVE_PERFORMANCE_QUERY_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSubpassResolvePerformanceQueryEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkMultisampledRenderToSingleSampledInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_2_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceExtendedDynamicState2FeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_SCREEN_SURFACE_CREATE_INFO_QNX:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkScreenSurfaceCreateInfoQNX>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COLOR_WRITE_ENABLE_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceColorWriteEnableFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_COLOR_WRITE_CREATE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineColorWriteCreateInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVES_GENERATED_QUERY_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_MIN_LOD_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceImageViewMinLodFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_VIEW_MIN_LOD_CREATE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkImageViewMinLodCreateInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceMultiDrawFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_PROPERTIES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceMultiDrawPropertiesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_2D_VIEW_OF_3D_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceImage2DViewOf3DFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TILE_IMAGE_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceShaderTileImageFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TILE_IMAGE_PROPERTIES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceShaderTileImagePropertiesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_MICROMAP_BUILD_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkMicromapBuildInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_MICROMAP_CREATE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkMicromapCreateInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPACITY_MICROMAP_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceOpacityMicromapFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPACITY_MICROMAP_PROPERTIES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceOpacityMicromapPropertiesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_MICROMAP_VERSION_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkMicromapVersionInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_COPY_MICROMAP_TO_MEMORY_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkCopyMicromapToMemoryInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_COPY_MEMORY_TO_MICROMAP_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkCopyMemoryToMicromapInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_COPY_MICROMAP_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkCopyMicromapInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_MICROMAP_BUILD_SIZES_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkMicromapBuildSizesInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_TRIANGLES_OPACITY_MICROMAP_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkAccelerationStructureTrianglesOpacityMicromapEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISPLACEMENT_MICROMAP_FEATURES_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceDisplacementMicromapFeaturesNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISPLACEMENT_MICROMAP_PROPERTIES_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceDisplacementMicromapPropertiesNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_TRIANGLES_DISPLACEMENT_MICROMAP_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkAccelerationStructureTrianglesDisplacementMicromapNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_FEATURES_HUAWEI:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_PROPERTIES_HUAWEI:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BORDER_COLOR_SWIZZLE_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceBorderColorSwizzleFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_SAMPLER_BORDER_COLOR_COMPONENT_MAPPING_CREATE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSamplerBorderColorComponentMappingCreateInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PAGEABLE_DEVICE_LOCAL_MEMORY_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_ARM:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceShaderCorePropertiesARM>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_SLICED_VIEW_OF_3D_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_VIEW_SLICED_CREATE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkImageViewSlicedCreateInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_SET_HOST_MAPPING_FEATURES_VALVE:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE>());
                break;
            }
            case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_BINDING_REFERENCE_VALVE:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDescriptorSetBindingReferenceVALVE>());
                break;
            }
            case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_HOST_MAPPING_INFO_VALVE:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDescriptorSetLayoutHostMappingInfoVALVE>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLAMP_ZERO_ONE_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceDepthClampZeroOneFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NON_SEAMLESS_CUBE_MAP_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_FEATURES_QCOM:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_PROPERTIES_QCOM:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM>());
                break;
            }
            case VK_STRUCTURE_TYPE_SUBPASS_FRAGMENT_DENSITY_MAP_OFFSET_END_INFO_QCOM:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSubpassFragmentDensityMapOffsetEndInfoQCOM>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_COMPUTE_FEATURES_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_INDIRECT_BUFFER_INFO_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkComputePipelineIndirectBufferInfoNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_INDIRECT_DEVICE_ADDRESS_INFO_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineIndirectDeviceAddressInfoNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINEAR_COLOR_ATTACHMENT_FEATURES_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceLinearColorAttachmentFeaturesNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_SWAPCHAIN_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_VIEW_SAMPLE_WEIGHT_CREATE_INFO_QCOM:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkImageViewSampleWeightCreateInfoQCOM>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_FEATURES_QCOM:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceImageProcessingFeaturesQCOM>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_PROPERTIES_QCOM:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceImageProcessingPropertiesQCOM>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NESTED_COMMAND_BUFFER_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceNestedCommandBufferFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NESTED_COMMAND_BUFFER_PROPERTIES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceNestedCommandBufferPropertiesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_ACQUIRE_UNMODIFIED_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkExternalMemoryAcquireUnmodifiedEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceExtendedDynamicState3FeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_PROPERTIES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceExtendedDynamicState3PropertiesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_MERGE_FEEDBACK_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_RENDER_PASS_CREATION_CONTROL_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkRenderPassCreationControlEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_RENDER_PASS_CREATION_FEEDBACK_CREATE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkRenderPassCreationFeedbackCreateInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_RENDER_PASS_SUBPASS_FEEDBACK_CREATE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkRenderPassSubpassFeedbackCreateInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_DIRECT_DRIVER_LOADING_INFO_LUNARG:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDirectDriverLoadingInfoLUNARG>());
                break;
            }
            case VK_STRUCTURE_TYPE_DIRECT_DRIVER_LOADING_LIST_LUNARG:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkDirectDriverLoadingListLUNARG>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_PROPERTIES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_MODULE_IDENTIFIER_CREATE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPipelineShaderStageModuleIdentifierCreateInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_SHADER_MODULE_IDENTIFIER_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkShaderModuleIdentifierEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPTICAL_FLOW_FEATURES_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceOpticalFlowFeaturesNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPTICAL_FLOW_PROPERTIES_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceOpticalFlowPropertiesNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_OPTICAL_FLOW_IMAGE_FORMAT_INFO_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkOpticalFlowImageFormatInfoNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_OPTICAL_FLOW_IMAGE_FORMAT_PROPERTIES_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkOpticalFlowImageFormatPropertiesNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_OPTICAL_FLOW_SESSION_CREATE_INFO_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkOpticalFlowSessionCreateInfoNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_OPTICAL_FLOW_SESSION_CREATE_PRIVATE_DATA_INFO_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkOpticalFlowSessionCreatePrivateDataInfoNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_OPTICAL_FLOW_EXECUTE_INFO_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkOpticalFlowExecuteInfoNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LEGACY_DITHERING_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceLegacyDitheringFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROTECTED_ACCESS_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDevicePipelineProtectedAccessFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FORMAT_RESOLVE_FEATURES_ANDROID:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceExternalFormatResolveFeaturesANDROID>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FORMAT_RESOLVE_PROPERTIES_ANDROID:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceExternalFormatResolvePropertiesANDROID>());
                break;
            }
            case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_RESOLVE_PROPERTIES_ANDROID:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkAndroidHardwareBufferFormatResolvePropertiesANDROID>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_OBJECT_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceShaderObjectFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_OBJECT_PROPERTIES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceShaderObjectPropertiesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_SHADER_CREATE_INFO_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkShaderCreateInfoEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TILE_PROPERTIES_FEATURES_QCOM:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceTilePropertiesFeaturesQCOM>());
                break;
            }
            case VK_STRUCTURE_TYPE_TILE_PROPERTIES_QCOM:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkTilePropertiesQCOM>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_AMIGO_PROFILING_FEATURES_SEC:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceAmigoProfilingFeaturesSEC>());
                break;
            }
            case VK_STRUCTURE_TYPE_AMIGO_PROFILING_SUBMIT_INFO_SEC:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkAmigoProfilingSubmitInfoSEC>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_VIEWPORTS_FEATURES_QCOM:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_PROPERTIES_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_FEATURES_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_SPARSE_ADDRESS_SPACE_FEATURES_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_SPARSE_ADDRESS_SPACE_PROPERTIES_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_FEATURES_ARM:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_PROPERTIES_ARM:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_LIBRARY_GROUP_HANDLES_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_UNUSED_ATTACHMENTS_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_RENDER_AREAS_FEATURES_QCOM:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM>());
                break;
            }
            case VK_STRUCTURE_TYPE_MULTIVIEW_PER_VIEW_RENDER_AREAS_RENDER_PASS_BEGIN_INFO_QCOM:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_2_FEATURES_QCOM:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceImageProcessing2FeaturesQCOM>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_2_PROPERTIES_QCOM:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceImageProcessing2PropertiesQCOM>());
                break;
            }
            case VK_STRUCTURE_TYPE_SAMPLER_BLOCK_MATCH_WINDOW_CREATE_INFO_QCOM:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSamplerBlockMatchWindowCreateInfoQCOM>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUBIC_WEIGHTS_FEATURES_QCOM:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceCubicWeightsFeaturesQCOM>());
                break;
            }
            case VK_STRUCTURE_TYPE_SAMPLER_CUBIC_WEIGHTS_CREATE_INFO_QCOM:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSamplerCubicWeightsCreateInfoQCOM>());
                break;
            }
            case VK_STRUCTURE_TYPE_BLIT_IMAGE_CUBIC_WEIGHTS_INFO_QCOM:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkBlitImageCubicWeightsInfoQCOM>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_DEGAMMA_FEATURES_QCOM:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceYcbcrDegammaFeaturesQCOM>());
                break;
            }
            case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_YCBCR_DEGAMMA_CREATE_INFO_QCOM:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUBIC_CLAMP_FEATURES_QCOM:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceCubicClampFeaturesQCOM>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_DYNAMIC_STATE_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LAYERED_DRIVER_PROPERTIES_MSFT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceLayeredDriverPropertiesMSFT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_POOL_OVERALLOCATION_FEATURES_NV:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV>());
                break;
            }
            case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_TRIANGLES_DATA_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkAccelerationStructureGeometryTrianglesDataKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_AABBS_DATA_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkAccelerationStructureGeometryAabbsDataKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_INSTANCES_DATA_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkAccelerationStructureGeometryInstancesDataKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkAccelerationStructureGeometryKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_BUILD_GEOMETRY_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkAccelerationStructureBuildGeometryInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkAccelerationStructureCreateInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkWriteDescriptorSetAccelerationStructureKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceAccelerationStructureFeaturesKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_PROPERTIES_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceAccelerationStructurePropertiesKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_DEVICE_ADDRESS_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkAccelerationStructureDeviceAddressInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_VERSION_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkAccelerationStructureVersionInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_COPY_ACCELERATION_STRUCTURE_TO_MEMORY_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkCopyAccelerationStructureToMemoryInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_COPY_MEMORY_TO_ACCELERATION_STRUCTURE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkCopyMemoryToAccelerationStructureInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_COPY_ACCELERATION_STRUCTURE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkCopyAccelerationStructureInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_BUILD_SIZES_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkAccelerationStructureBuildSizesInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkRayTracingShaderGroupCreateInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_INTERFACE_CREATE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkRayTracingPipelineInterfaceCreateInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkRayTracingPipelineCreateInfoKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceRayTracingPipelineFeaturesKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_PROPERTIES_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceRayTracingPipelinePropertiesKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceRayQueryFeaturesKHR>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceMeshShaderFeaturesEXT>());
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_EXT:
            {
                output_struct->pNext = reinterpret_cast<VkBaseOutStructure*>(DecodeAllocator::Allocate<VkPhysicalDeviceMeshShaderPropertiesEXT>());
                break;
            }
            default:
                break;
        }
        output_struct = output_struct->pNext;
        output_struct->sType = in_pnext->sType;
        in_pnext = in_pnext->pNext;
    }
}

template <typename T>
void InitializeOutputStructPNext(StructPointerDecoder<T> *decoder)
{
    if(decoder->IsNull()) return;
    size_t len = decoder->GetOutputLength();
    auto input = decoder->GetPointer();
    auto output = decoder->GetOutputPointer();
    for( size_t i = 0 ; i < len; ++i )
    {
        const auto* in_pnext = reinterpret_cast<const VkBaseInStructure*>(input[i].pNext);
        if( in_pnext == nullptr ) continue;
        auto* output_struct = reinterpret_cast<VkBaseOutStructure*>(&output[i]);
        InitializeOutputStructPNextImpl(in_pnext, output_struct);
    }
}

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)
