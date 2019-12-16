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

#include "generated/generated_vulkan_ascii_consumer.h"
#include "generated/generated_vulkan_ascii_enum_util.h"
#include "generated/generated_vulkan_ascii_struct_util.h"
#include "format/platform_types.h"
#include "util/defines.h"
#include "util/ascii_utils.h"
#include "vulkan/vulkan.h"
#include <functional>
#include <inttypes.h>
#include <string>

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)

void VulkanAsciiConsumer::Process_vkCreateInstance(
    VkResult                                    returnValue,
    const StructPointerDecoder<Decoded_VkInstanceCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkInstance>&     pInstance)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreateInstance(pCreateInfo, pAllocator, pInstance)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: const VkInstanceCreateInfo* pCreateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); //HRW
    OutputString(outputFile, "const VkInstanceCreateInfo* = "); //TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkInstance* pInstance
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pInstance:                      "); //HRW
    OutputString(outputFile, "VkInstance* = "); //TEQ
    if (pInstance.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pInstance = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pInstance.GetPointer(), vinfo_pInstance); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyInstance(
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkDestroyInstance(instance, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkInstance instance
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "instance:                       "); //HRW
    OutputString(outputFile, "VkInstance = "); //TEQ
    OutputAddr(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkEnumeratePhysicalDevices(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const PointerDecoder<uint32_t>&             pPhysicalDeviceCount,
    const HandlePointerDecoder<VkPhysicalDevice>& pPhysicalDevices)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkEnumeratePhysicalDevices(instance, pPhysicalDeviceCount, pPhysicalDevices)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "instance:                       "); //HRW
    OutputString(outputFile, "VkInstance = "); //TEQ
    OutputAddr(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pPhysicalDeviceCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pPhysicalDeviceCount:           "); //HRW
    OutputString(outputFile, "uint32_t* = "); //TEQ
    if (pPhysicalDeviceCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pPhysicalDeviceCount = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pPhysicalDeviceCount.GetPointer(), vinfo_pPhysicalDeviceCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPhysicalDevice* pPhysicalDevices
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pPhysicalDevices:               "); //HRW
    OutputString(outputFile, "VkPhysicalDevice* = "); //TEQ
    if (pPhysicalDevices.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pPhysicalDevices.GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pPhysicalDevices = {true, false, false, nullptr};
        OutputArray<VkPhysicalDevice*>(outputFile, indent, 1, "VkPhysicalDevice*", reinterpret_cast<VkPhysicalDevice*>(pPhysicalDevices.GetPointer()), "pPhysicalDevices", *pPhysicalDeviceCount.GetPointer(),  vinfo_pPhysicalDevices);  // CXC
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceFeatures(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceFeatures>& pFeatures)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceFeatures(physicalDevice, pFeatures)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPhysicalDeviceFeatures* pFeatures
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pFeatures:                      "); //HRW
    OutputString(outputFile, "VkPhysicalDeviceFeatures* = "); //TEQ
    if (pFeatures.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pFeatures.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pFeatures.GetMetaStructPointer(), indent+1,pFeatures.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceFormatProperties(
    format::HandleId                            physicalDevice,
    VkFormat                                    format,
    const StructPointerDecoder<Decoded_VkFormatProperties>& pFormatProperties)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceFormatProperties(physicalDevice, format, pFormatProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFormat format
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "format:                         "); //HRW
    OutputString(outputFile, "VkFormat = "); //TEQ
    OutputEnumVkFormat(outputFile, format); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimal(outputFile, format);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFormatProperties* pFormatProperties
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pFormatProperties:              "); //HRW
    OutputString(outputFile, "VkFormatProperties* = "); //TEQ
    if (pFormatProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pFormatProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pFormatProperties.GetMetaStructPointer(), indent+1,pFormatProperties.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceImageFormatProperties(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    VkFormat                                    format,
    VkImageType                                 type,
    VkImageTiling                               tiling,
    VkImageUsageFlags                           usage,
    VkImageCreateFlags                          flags,
    const StructPointerDecoder<Decoded_VkImageFormatProperties>& pImageFormatProperties)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceImageFormatProperties(physicalDevice, format, type, tiling, usage, flags, pImageFormatProperties)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFormat format
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "format:                         "); //HRW
    OutputString(outputFile, "VkFormat = "); //TEQ
    OutputEnumVkFormat(outputFile, format); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimal(outputFile, format);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageType type
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "type:                           "); //HRW
    OutputString(outputFile, "VkImageType = "); //TEQ
    OutputEnumVkImageType(outputFile, type); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimal(outputFile, type);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageTiling tiling
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "tiling:                         "); //HRW
    OutputString(outputFile, "VkImageTiling = "); //TEQ
    OutputEnumVkImageTiling(outputFile, tiling); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimal(outputFile, tiling);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageUsageFlags usage
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "usage:                          "); //HRW
    OutputString(outputFile, "VkImageUsageFlags = "); //TEQ
    OutputFlags(outputFile, usage, OutputEnumVkImageUsageFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageCreateFlags flags
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "flags:                          "); //HRW
    OutputString(outputFile, "VkImageCreateFlags = "); //TEQ
    OutputFlags(outputFile, flags, OutputEnumVkImageCreateFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageFormatProperties* pImageFormatProperties
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pImageFormatProperties:         "); //HRW
    OutputString(outputFile, "VkImageFormatProperties* = "); //TEQ
    if (pImageFormatProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pImageFormatProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pImageFormatProperties.GetMetaStructPointer(), indent+1,pImageFormatProperties.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceProperties(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceProperties>& pProperties)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceProperties(physicalDevice, pProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPhysicalDeviceProperties* pProperties
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pProperties:                    "); //HRW
    OutputString(outputFile, "VkPhysicalDeviceProperties* = "); //TEQ
    if (pProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pProperties.GetMetaStructPointer(), indent+1,pProperties.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceQueueFamilyProperties(
    format::HandleId                            physicalDevice,
    const PointerDecoder<uint32_t>&             pQueueFamilyPropertyCount,
    const StructPointerDecoder<Decoded_VkQueueFamilyProperties>& pQueueFamilyProperties)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceQueueFamilyProperties(physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pQueueFamilyPropertyCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pQueueFamilyPropertyCount:      "); //HRW
    OutputString(outputFile, "uint32_t* = "); //TEQ
    if (pQueueFamilyPropertyCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pQueueFamilyPropertyCount = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pQueueFamilyPropertyCount.GetPointer(), vinfo_pQueueFamilyPropertyCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueueFamilyProperties* pQueueFamilyProperties
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pQueueFamilyProperties:         "); //HRW
    OutputString(outputFile, "VkQueueFamilyProperties* = "); //TEQ
    if (pQueueFamilyProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pQueueFamilyProperties.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkQueueFamilyProperties>(outputFile, indent+1, 1, "VkQueueFamilyProperties", pQueueFamilyProperties.GetMetaStructPointer(), "pQueueFamilyProperties", *pQueueFamilyPropertyCount.GetPointer(), false, pQueueFamilyProperties.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceMemoryProperties(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceMemoryProperties>& pMemoryProperties)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceMemoryProperties(physicalDevice, pMemoryProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPhysicalDeviceMemoryProperties* pMemoryProperties
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pMemoryProperties:              "); //HRW
    OutputString(outputFile, "VkPhysicalDeviceMemoryProperties* = "); //TEQ
    if (pMemoryProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pMemoryProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pMemoryProperties.GetMetaStructPointer(), indent+1,pMemoryProperties.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateDevice(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkDeviceCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkDevice>&       pDevice)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreateDevice(physicalDevice, pCreateInfo, pAllocator, pDevice)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDeviceCreateInfo* pCreateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); //HRW
    OutputString(outputFile, "const VkDeviceCreateInfo* = "); //TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDevice* pDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pDevice:                        "); //HRW
    OutputString(outputFile, "VkDevice* = "); //TEQ
    if (pDevice.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pDevice = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pDevice.GetPointer(), vinfo_pDevice); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyDevice(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkDestroyDevice(device, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetDeviceQueue(
    format::HandleId                            device,
    uint32_t                                    queueFamilyIndex,
    uint32_t                                    queueIndex,
    const HandlePointerDecoder<VkQueue>&        pQueue)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetDeviceQueue(device, queueFamilyIndex, queueIndex, pQueue)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t queueFamilyIndex
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "queueFamilyIndex:               "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, queueFamilyIndex); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t queueIndex
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "queueIndex:                     "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, queueIndex); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueue* pQueue
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pQueue:                         "); //HRW
    OutputString(outputFile, "VkQueue* = "); //TEQ
    if (pQueue.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pQueue = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pQueue.GetPointer(), vinfo_pQueue); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkQueueSubmit(
    VkResult                                    returnValue,
    format::HandleId                            queue,
    uint32_t                                    submitCount,
    const StructPointerDecoder<Decoded_VkSubmitInfo>& pSubmits,
    format::HandleId                            fence)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkQueueSubmit(queue, submitCount, pSubmits, fence)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkQueue queue
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "queue:                          "); //HRW
    OutputString(outputFile, "VkQueue = "); //TEQ
    OutputAddr(outputFile, queue); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t submitCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "submitCount:                    "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, submitCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSubmitInfo* pSubmits
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSubmits:                       "); //HRW
    OutputString(outputFile, "const VkSubmitInfo* = "); //TEQ
    if (pSubmits.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pSubmits.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkSubmitInfo>(outputFile, indent+1, 1, "VkSubmitInfo", pSubmits.GetMetaStructPointer(), "pSubmits", submitCount, false, pSubmits.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFence fence
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "fence:                          "); //HRW
    OutputString(outputFile, "VkFence = "); //TEQ
    OutputAddr(outputFile, fence); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkQueueWaitIdle(
    VkResult                                    returnValue,
    format::HandleId                            queue)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkQueueWaitIdle(queue)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkQueue queue
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "queue:                          "); //HRW
    OutputString(outputFile, "VkQueue = "); //TEQ
    OutputAddr(outputFile, queue); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDeviceWaitIdle(
    VkResult                                    returnValue,
    format::HandleId                            device)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkDeviceWaitIdle(device)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkAllocateMemory(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkMemoryAllocateInfo>& pAllocateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkDeviceMemory>& pMemory)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkAllocateMemory(device, pAllocateInfo, pAllocator, pMemory)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkMemoryAllocateInfo* pAllocateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocateInfo:                  "); //HRW
    OutputString(outputFile, "const VkMemoryAllocateInfo* = "); //TEQ
    if (pAllocateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocateInfo.GetMetaStructPointer(), indent+1,pAllocateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceMemory* pMemory
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pMemory:                        "); //HRW
    OutputString(outputFile, "VkDeviceMemory* = "); //TEQ
    if (pMemory.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pMemory = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pMemory.GetPointer(), vinfo_pMemory); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkFreeMemory(
    format::HandleId                            device,
    format::HandleId                            memory,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkFreeMemory(device, memory, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceMemory memory
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "memory:                         "); //HRW
    OutputString(outputFile, "VkDeviceMemory = "); //TEQ
    OutputAddr(outputFile, memory); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkMapMemory(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            memory,
    VkDeviceSize                                offset,
    VkDeviceSize                                size,
    VkMemoryMapFlags                            flags,
    const PointerDecoder<uint64_t>&             ppData)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkMapMemory(device, memory, offset, size, flags, ppData)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceMemory memory
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "memory:                         "); //HRW
    OutputString(outputFile, "VkDeviceMemory = "); //TEQ
    OutputAddr(outputFile, memory); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize offset
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "offset:                         "); //HRW
    OutputString(outputFile, "VkDeviceSize = "); //TEQ
    OutputSignedDecimal(outputFile, offset); //EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize size
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "size:                           "); //HRW
    OutputString(outputFile, "VkDeviceSize = "); //TEQ
    OutputSignedDecimal(outputFile, size); //EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkMemoryMapFlags flags
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "flags:                          "); //HRW
    OutputString(outputFile, "VkMemoryMapFlags = "); //TEQ
    OutputUnsignedDecimal(outputFile, flags); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: void** ppData
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "ppData:                         "); //HRW
    OutputString(outputFile, "void** = "); //TEQ
    if (ppData.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_ppData = {true, false, false, nullptr};
        OutputScalarValue(outputFile, ppData.GetPointer(), vinfo_ppData); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkUnmapMemory(
    format::HandleId                            device,
    format::HandleId                            memory)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkUnmapMemory(device, memory)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceMemory memory
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "memory:                         "); //HRW
    OutputString(outputFile, "VkDeviceMemory = "); //TEQ
    OutputAddr(outputFile, memory); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkFlushMappedMemoryRanges(
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    memoryRangeCount,
    const StructPointerDecoder<Decoded_VkMappedMemoryRange>& pMemoryRanges)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkFlushMappedMemoryRanges(device, memoryRangeCount, pMemoryRanges)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t memoryRangeCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "memoryRangeCount:               "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, memoryRangeCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkMappedMemoryRange* pMemoryRanges
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pMemoryRanges:                  "); //HRW
    OutputString(outputFile, "const VkMappedMemoryRange* = "); //TEQ
    if (pMemoryRanges.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pMemoryRanges.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkMappedMemoryRange>(outputFile, indent+1, 1, "VkMappedMemoryRange", pMemoryRanges.GetMetaStructPointer(), "pMemoryRanges", memoryRangeCount, false, pMemoryRanges.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkInvalidateMappedMemoryRanges(
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    memoryRangeCount,
    const StructPointerDecoder<Decoded_VkMappedMemoryRange>& pMemoryRanges)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkInvalidateMappedMemoryRanges(device, memoryRangeCount, pMemoryRanges)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t memoryRangeCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "memoryRangeCount:               "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, memoryRangeCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkMappedMemoryRange* pMemoryRanges
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pMemoryRanges:                  "); //HRW
    OutputString(outputFile, "const VkMappedMemoryRange* = "); //TEQ
    if (pMemoryRanges.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pMemoryRanges.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkMappedMemoryRange>(outputFile, indent+1, 1, "VkMappedMemoryRange", pMemoryRanges.GetMetaStructPointer(), "pMemoryRanges", memoryRangeCount, false, pMemoryRanges.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetDeviceMemoryCommitment(
    format::HandleId                            device,
    format::HandleId                            memory,
    const PointerDecoder<VkDeviceSize>&         pCommittedMemoryInBytes)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetDeviceMemoryCommitment(device, memory, pCommittedMemoryInBytes)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceMemory memory
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "memory:                         "); //HRW
    OutputString(outputFile, "VkDeviceMemory = "); //TEQ
    OutputAddr(outputFile, memory); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize* pCommittedMemoryInBytes
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCommittedMemoryInBytes:        "); //HRW
    OutputString(outputFile, "VkDeviceSize* = "); //TEQ
    if (pCommittedMemoryInBytes.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pCommittedMemoryInBytes = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pCommittedMemoryInBytes.GetPointer(), vinfo_pCommittedMemoryInBytes); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkBindBufferMemory(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            buffer,
    format::HandleId                            memory,
    VkDeviceSize                                memoryOffset)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkBindBufferMemory(device, buffer, memory, memoryOffset)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer buffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "buffer:                         "); //HRW
    OutputString(outputFile, "VkBuffer = "); //TEQ
    OutputAddr(outputFile, buffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceMemory memory
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "memory:                         "); //HRW
    OutputString(outputFile, "VkDeviceMemory = "); //TEQ
    OutputAddr(outputFile, memory); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize memoryOffset
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "memoryOffset:                   "); //HRW
    OutputString(outputFile, "VkDeviceSize = "); //TEQ
    OutputSignedDecimal(outputFile, memoryOffset); //EQA
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkBindImageMemory(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            image,
    format::HandleId                            memory,
    VkDeviceSize                                memoryOffset)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkBindImageMemory(device, image, memory, memoryOffset)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage image
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "image:                          "); //HRW
    OutputString(outputFile, "VkImage = "); //TEQ
    OutputAddr(outputFile, image); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceMemory memory
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "memory:                         "); //HRW
    OutputString(outputFile, "VkDeviceMemory = "); //TEQ
    OutputAddr(outputFile, memory); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize memoryOffset
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "memoryOffset:                   "); //HRW
    OutputString(outputFile, "VkDeviceSize = "); //TEQ
    OutputSignedDecimal(outputFile, memoryOffset); //EQA
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetBufferMemoryRequirements(
    format::HandleId                            device,
    format::HandleId                            buffer,
    const StructPointerDecoder<Decoded_VkMemoryRequirements>& pMemoryRequirements)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetBufferMemoryRequirements(device, buffer, pMemoryRequirements)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer buffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "buffer:                         "); //HRW
    OutputString(outputFile, "VkBuffer = "); //TEQ
    OutputAddr(outputFile, buffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkMemoryRequirements* pMemoryRequirements
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pMemoryRequirements:            "); //HRW
    OutputString(outputFile, "VkMemoryRequirements* = "); //TEQ
    if (pMemoryRequirements.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pMemoryRequirements.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pMemoryRequirements.GetMetaStructPointer(), indent+1,pMemoryRequirements.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetImageMemoryRequirements(
    format::HandleId                            device,
    format::HandleId                            image,
    const StructPointerDecoder<Decoded_VkMemoryRequirements>& pMemoryRequirements)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetImageMemoryRequirements(device, image, pMemoryRequirements)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage image
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "image:                          "); //HRW
    OutputString(outputFile, "VkImage = "); //TEQ
    OutputAddr(outputFile, image); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkMemoryRequirements* pMemoryRequirements
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pMemoryRequirements:            "); //HRW
    OutputString(outputFile, "VkMemoryRequirements* = "); //TEQ
    if (pMemoryRequirements.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pMemoryRequirements.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pMemoryRequirements.GetMetaStructPointer(), indent+1,pMemoryRequirements.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetImageSparseMemoryRequirements(
    format::HandleId                            device,
    format::HandleId                            image,
    const PointerDecoder<uint32_t>&             pSparseMemoryRequirementCount,
    const StructPointerDecoder<Decoded_VkSparseImageMemoryRequirements>& pSparseMemoryRequirements)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetImageSparseMemoryRequirements(device, image, pSparseMemoryRequirementCount, pSparseMemoryRequirements)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage image
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "image:                          "); //HRW
    OutputString(outputFile, "VkImage = "); //TEQ
    OutputAddr(outputFile, image); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pSparseMemoryRequirementCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSparseMemoryRequirementCount:  "); //HRW
    OutputString(outputFile, "uint32_t* = "); //TEQ
    if (pSparseMemoryRequirementCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pSparseMemoryRequirementCount = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pSparseMemoryRequirementCount.GetPointer(), vinfo_pSparseMemoryRequirementCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSparseImageMemoryRequirements* pSparseMemoryRequirements
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSparseMemoryRequirements:      "); //HRW
    OutputString(outputFile, "VkSparseImageMemoryRequirements* = "); //TEQ
    if (pSparseMemoryRequirements.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pSparseMemoryRequirements.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkSparseImageMemoryRequirements>(outputFile, indent+1, 1, "VkSparseImageMemoryRequirements", pSparseMemoryRequirements.GetMetaStructPointer(), "pSparseMemoryRequirements", *pSparseMemoryRequirementCount.GetPointer(), false, pSparseMemoryRequirements.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSparseImageFormatProperties(
    format::HandleId                            physicalDevice,
    VkFormat                                    format,
    VkImageType                                 type,
    VkSampleCountFlagBits                       samples,
    VkImageUsageFlags                           usage,
    VkImageTiling                               tiling,
    const PointerDecoder<uint32_t>&             pPropertyCount,
    const StructPointerDecoder<Decoded_VkSparseImageFormatProperties>& pProperties)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceSparseImageFormatProperties(physicalDevice, format, type, samples, usage, tiling, pPropertyCount, pProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFormat format
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "format:                         "); //HRW
    OutputString(outputFile, "VkFormat = "); //TEQ
    OutputEnumVkFormat(outputFile, format); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimal(outputFile, format);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageType type
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "type:                           "); //HRW
    OutputString(outputFile, "VkImageType = "); //TEQ
    OutputEnumVkImageType(outputFile, type); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimal(outputFile, type);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSampleCountFlagBits samples
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "samples:                        "); //HRW
    OutputString(outputFile, "VkSampleCountFlagBits = "); //TEQ
    OutputEnumVkSampleCountFlagBits(outputFile, samples); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimal(outputFile, samples);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageUsageFlags usage
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "usage:                          "); //HRW
    OutputString(outputFile, "VkImageUsageFlags = "); //TEQ
    OutputFlags(outputFile, usage, OutputEnumVkImageUsageFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageTiling tiling
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "tiling:                         "); //HRW
    OutputString(outputFile, "VkImageTiling = "); //TEQ
    OutputEnumVkImageTiling(outputFile, tiling); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimal(outputFile, tiling);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pPropertyCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pPropertyCount:                 "); //HRW
    OutputString(outputFile, "uint32_t* = "); //TEQ
    if (pPropertyCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pPropertyCount = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pPropertyCount.GetPointer(), vinfo_pPropertyCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSparseImageFormatProperties* pProperties
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pProperties:                    "); //HRW
    OutputString(outputFile, "VkSparseImageFormatProperties* = "); //TEQ
    if (pProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pProperties.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkSparseImageFormatProperties>(outputFile, indent+1, 1, "VkSparseImageFormatProperties", pProperties.GetMetaStructPointer(), "pProperties", *pPropertyCount.GetPointer(), false, pProperties.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkQueueBindSparse(
    VkResult                                    returnValue,
    format::HandleId                            queue,
    uint32_t                                    bindInfoCount,
    const StructPointerDecoder<Decoded_VkBindSparseInfo>& pBindInfo,
    format::HandleId                            fence)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkQueueBindSparse(queue, bindInfoCount, pBindInfo, fence)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkQueue queue
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "queue:                          "); //HRW
    OutputString(outputFile, "VkQueue = "); //TEQ
    OutputAddr(outputFile, queue); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t bindInfoCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "bindInfoCount:                  "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, bindInfoCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBindSparseInfo* pBindInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pBindInfo:                      "); //HRW
    OutputString(outputFile, "const VkBindSparseInfo* = "); //TEQ
    if (pBindInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pBindInfo.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkBindSparseInfo>(outputFile, indent+1, 1, "VkBindSparseInfo", pBindInfo.GetMetaStructPointer(), "pBindInfo", bindInfoCount, false, pBindInfo.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFence fence
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "fence:                          "); //HRW
    OutputString(outputFile, "VkFence = "); //TEQ
    OutputAddr(outputFile, fence); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateFence(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkFenceCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkFence>&        pFence)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreateFence(device, pCreateInfo, pAllocator, pFence)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkFenceCreateInfo* pCreateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); //HRW
    OutputString(outputFile, "const VkFenceCreateInfo* = "); //TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFence* pFence
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pFence:                         "); //HRW
    OutputString(outputFile, "VkFence* = "); //TEQ
    if (pFence.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pFence = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pFence.GetPointer(), vinfo_pFence); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyFence(
    format::HandleId                            device,
    format::HandleId                            fence,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkDestroyFence(device, fence, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFence fence
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "fence:                          "); //HRW
    OutputString(outputFile, "VkFence = "); //TEQ
    OutputAddr(outputFile, fence); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkResetFences(
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    fenceCount,
    const HandlePointerDecoder<VkFence>&        pFences)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkResetFences(device, fenceCount, pFences)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t fenceCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "fenceCount:                     "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, fenceCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkFence* pFences
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pFences:                        "); //HRW
    OutputString(outputFile, "const VkFence* = "); //TEQ
    if (pFences.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pFences.GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pFences = {true, false, false, nullptr};
        OutputArray<const VkFence*>(outputFile, indent, 1, "const VkFence*", reinterpret_cast<const VkFence*>(pFences.GetPointer()), "pFences", fenceCount,  vinfo_pFences);  // CXC
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetFenceStatus(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            fence)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetFenceStatus(device, fence)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFence fence
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "fence:                          "); //HRW
    OutputString(outputFile, "VkFence = "); //TEQ
    OutputAddr(outputFile, fence); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkWaitForFences(
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    fenceCount,
    const HandlePointerDecoder<VkFence>&        pFences,
    VkBool32                                    waitAll,
    uint64_t                                    timeout)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkWaitForFences(device, fenceCount, pFences, waitAll, timeout)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t fenceCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "fenceCount:                     "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, fenceCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkFence* pFences
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pFences:                        "); //HRW
    OutputString(outputFile, "const VkFence* = "); //TEQ
    if (pFences.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pFences.GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pFences = {true, false, false, nullptr};
        OutputArray<const VkFence*>(outputFile, indent, 1, "const VkFence*", reinterpret_cast<const VkFence*>(pFences.GetPointer()), "pFences", fenceCount,  vinfo_pFences);  // CXC
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBool32 waitAll
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "waitAll:                        "); //HRW
    OutputString(outputFile, "VkBool32 = "); //TEQ
    OutputSignedDecimal(outputFile, waitAll); //EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint64_t timeout
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "timeout:                        "); //HRW
    OutputString(outputFile, "uint64_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, timeout); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateSemaphore(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSemaphoreCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSemaphore>&    pSemaphore)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreateSemaphore(device, pCreateInfo, pAllocator, pSemaphore)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSemaphoreCreateInfo* pCreateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); //HRW
    OutputString(outputFile, "const VkSemaphoreCreateInfo* = "); //TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSemaphore* pSemaphore
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSemaphore:                     "); //HRW
    OutputString(outputFile, "VkSemaphore* = "); //TEQ
    if (pSemaphore.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pSemaphore = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pSemaphore.GetPointer(), vinfo_pSemaphore); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroySemaphore(
    format::HandleId                            device,
    format::HandleId                            semaphore,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkDestroySemaphore(device, semaphore, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSemaphore semaphore
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "semaphore:                      "); //HRW
    OutputString(outputFile, "VkSemaphore = "); //TEQ
    OutputAddr(outputFile, semaphore); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateEvent(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkEventCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkEvent>&        pEvent)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreateEvent(device, pCreateInfo, pAllocator, pEvent)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkEventCreateInfo* pCreateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); //HRW
    OutputString(outputFile, "const VkEventCreateInfo* = "); //TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkEvent* pEvent
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pEvent:                         "); //HRW
    OutputString(outputFile, "VkEvent* = "); //TEQ
    if (pEvent.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pEvent = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pEvent.GetPointer(), vinfo_pEvent); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyEvent(
    format::HandleId                            device,
    format::HandleId                            event,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkDestroyEvent(device, event, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkEvent event
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "event:                          "); //HRW
    OutputString(outputFile, "VkEvent = "); //TEQ
    OutputAddr(outputFile, event); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetEventStatus(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            event)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetEventStatus(device, event)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkEvent event
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "event:                          "); //HRW
    OutputString(outputFile, "VkEvent = "); //TEQ
    OutputAddr(outputFile, event); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkSetEvent(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            event)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkSetEvent(device, event)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkEvent event
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "event:                          "); //HRW
    OutputString(outputFile, "VkEvent = "); //TEQ
    OutputAddr(outputFile, event); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkResetEvent(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            event)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkResetEvent(device, event)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkEvent event
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "event:                          "); //HRW
    OutputString(outputFile, "VkEvent = "); //TEQ
    OutputAddr(outputFile, event); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateQueryPool(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkQueryPoolCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkQueryPool>&    pQueryPool)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreateQueryPool(device, pCreateInfo, pAllocator, pQueryPool)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkQueryPoolCreateInfo* pCreateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); //HRW
    OutputString(outputFile, "const VkQueryPoolCreateInfo* = "); //TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryPool* pQueryPool
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pQueryPool:                     "); //HRW
    OutputString(outputFile, "VkQueryPool* = "); //TEQ
    if (pQueryPool.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pQueryPool = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pQueryPool.GetPointer(), vinfo_pQueryPool); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyQueryPool(
    format::HandleId                            device,
    format::HandleId                            queryPool,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkDestroyQueryPool(device, queryPool, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryPool queryPool
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "queryPool:                      "); //HRW
    OutputString(outputFile, "VkQueryPool = "); //TEQ
    OutputAddr(outputFile, queryPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetQueryPoolResults(
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
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetQueryPoolResults(device, queryPool, firstQuery, queryCount, dataSize, pData, stride, flags)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryPool queryPool
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "queryPool:                      "); //HRW
    OutputString(outputFile, "VkQueryPool = "); //TEQ
    OutputAddr(outputFile, queryPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstQuery
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "firstQuery:                     "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, firstQuery); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t queryCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "queryCount:                     "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, queryCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: size_t dataSize
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "dataSize:                       "); //HRW
    OutputString(outputFile, "size_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, dataSize); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: void* pData
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pData:                          "); //HRW
    OutputString(outputFile, "void* = "); //TEQ
    if (pData.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pData.GetAddress()); // AHW
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize stride
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "stride:                         "); //HRW
    OutputString(outputFile, "VkDeviceSize = "); //TEQ
    OutputSignedDecimal(outputFile, stride); //EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryResultFlags flags
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "flags:                          "); //HRW
    OutputString(outputFile, "VkQueryResultFlags = "); //TEQ
    OutputFlags(outputFile, flags, OutputEnumVkQueryResultFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateBuffer(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkBufferCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkBuffer>&       pBuffer)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreateBuffer(device, pCreateInfo, pAllocator, pBuffer)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBufferCreateInfo* pCreateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); //HRW
    OutputString(outputFile, "const VkBufferCreateInfo* = "); //TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer* pBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pBuffer:                        "); //HRW
    OutputString(outputFile, "VkBuffer* = "); //TEQ
    if (pBuffer.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pBuffer = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pBuffer.GetPointer(), vinfo_pBuffer); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyBuffer(
    format::HandleId                            device,
    format::HandleId                            buffer,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkDestroyBuffer(device, buffer, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer buffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "buffer:                         "); //HRW
    OutputString(outputFile, "VkBuffer = "); //TEQ
    OutputAddr(outputFile, buffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateBufferView(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkBufferViewCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkBufferView>&   pView)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreateBufferView(device, pCreateInfo, pAllocator, pView)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBufferViewCreateInfo* pCreateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); //HRW
    OutputString(outputFile, "const VkBufferViewCreateInfo* = "); //TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBufferView* pView
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pView:                          "); //HRW
    OutputString(outputFile, "VkBufferView* = "); //TEQ
    if (pView.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, *(static_cast<uint64_t*>(pView.GetPointer()))); // PWA
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyBufferView(
    format::HandleId                            device,
    format::HandleId                            bufferView,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkDestroyBufferView(device, bufferView, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBufferView bufferView
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "bufferView:                     "); //HRW
    OutputString(outputFile, "VkBufferView = "); //TEQ
    OutputAddr(outputFile, bufferView); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateImage(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImageCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkImage>&        pImage)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreateImage(device, pCreateInfo, pAllocator, pImage)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImageCreateInfo* pCreateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); //HRW
    OutputString(outputFile, "const VkImageCreateInfo* = "); //TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage* pImage
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pImage:                         "); //HRW
    OutputString(outputFile, "VkImage* = "); //TEQ
    if (pImage.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pImage = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pImage.GetPointer(), vinfo_pImage); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyImage(
    format::HandleId                            device,
    format::HandleId                            image,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkDestroyImage(device, image, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage image
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "image:                          "); //HRW
    OutputString(outputFile, "VkImage = "); //TEQ
    OutputAddr(outputFile, image); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetImageSubresourceLayout(
    format::HandleId                            device,
    format::HandleId                            image,
    const StructPointerDecoder<Decoded_VkImageSubresource>& pSubresource,
    const StructPointerDecoder<Decoded_VkSubresourceLayout>& pLayout)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetImageSubresourceLayout(device, image, pSubresource, pLayout)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage image
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "image:                          "); //HRW
    OutputString(outputFile, "VkImage = "); //TEQ
    OutputAddr(outputFile, image); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImageSubresource* pSubresource
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSubresource:                   "); //HRW
    OutputString(outputFile, "const VkImageSubresource* = "); //TEQ
    if (pSubresource.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pSubresource.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pSubresource.GetMetaStructPointer(), indent+1,pSubresource.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSubresourceLayout* pLayout
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pLayout:                        "); //HRW
    OutputString(outputFile, "VkSubresourceLayout* = "); //TEQ
    if (pLayout.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pLayout.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pLayout.GetMetaStructPointer(), indent+1,pLayout.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateImageView(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImageViewCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkImageView>&    pView)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreateImageView(device, pCreateInfo, pAllocator, pView)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImageViewCreateInfo* pCreateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); //HRW
    OutputString(outputFile, "const VkImageViewCreateInfo* = "); //TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageView* pView
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pView:                          "); //HRW
    OutputString(outputFile, "VkImageView* = "); //TEQ
    if (pView.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, *(static_cast<uint64_t*>(pView.GetPointer()))); // PWA
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyImageView(
    format::HandleId                            device,
    format::HandleId                            imageView,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkDestroyImageView(device, imageView, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageView imageView
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "imageView:                      "); //HRW
    OutputString(outputFile, "VkImageView = "); //TEQ
    OutputAddr(outputFile, imageView); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateShaderModule(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkShaderModuleCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkShaderModule>& pShaderModule)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreateShaderModule(device, pCreateInfo, pAllocator, pShaderModule)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkShaderModuleCreateInfo* pCreateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); //HRW
    OutputString(outputFile, "const VkShaderModuleCreateInfo* = "); //TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkShaderModule* pShaderModule
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pShaderModule:                  "); //HRW
    OutputString(outputFile, "VkShaderModule* = "); //TEQ
    if (pShaderModule.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pShaderModule = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pShaderModule.GetPointer(), vinfo_pShaderModule); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyShaderModule(
    format::HandleId                            device,
    format::HandleId                            shaderModule,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkDestroyShaderModule(device, shaderModule, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkShaderModule shaderModule
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "shaderModule:                   "); //HRW
    OutputString(outputFile, "VkShaderModule = "); //TEQ
    OutputAddr(outputFile, shaderModule); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreatePipelineCache(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkPipelineCacheCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkPipelineCache>& pPipelineCache)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreatePipelineCache(device, pCreateInfo, pAllocator, pPipelineCache)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPipelineCacheCreateInfo* pCreateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); //HRW
    OutputString(outputFile, "const VkPipelineCacheCreateInfo* = "); //TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineCache* pPipelineCache
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pPipelineCache:                 "); //HRW
    OutputString(outputFile, "VkPipelineCache* = "); //TEQ
    if (pPipelineCache.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pPipelineCache = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pPipelineCache.GetPointer(), vinfo_pPipelineCache); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyPipelineCache(
    format::HandleId                            device,
    format::HandleId                            pipelineCache,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkDestroyPipelineCache(device, pipelineCache, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineCache pipelineCache
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pipelineCache:                  "); //HRW
    OutputString(outputFile, "VkPipelineCache = "); //TEQ
    OutputAddr(outputFile, pipelineCache); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPipelineCacheData(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            pipelineCache,
    const PointerDecoder<size_t>&               pDataSize,
    const PointerDecoder<uint8_t>&              pData)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPipelineCacheData(device, pipelineCache, pDataSize, pData)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineCache pipelineCache
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pipelineCache:                  "); //HRW
    OutputString(outputFile, "VkPipelineCache = "); //TEQ
    OutputAddr(outputFile, pipelineCache); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: size_t* pDataSize
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pDataSize:                      "); //HRW
    OutputString(outputFile, "size_t* = "); //TEQ
    if (pDataSize.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pDataSize = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pDataSize.GetPointer(), vinfo_pDataSize); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: void* pData
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pData:                          "); //HRW
    OutputString(outputFile, "void* = "); //TEQ
    if (pData.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pData.GetAddress()); // AHW
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkMergePipelineCaches(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            dstCache,
    uint32_t                                    srcCacheCount,
    const HandlePointerDecoder<VkPipelineCache>& pSrcCaches)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkMergePipelineCaches(device, dstCache, srcCacheCount, pSrcCaches)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineCache dstCache
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "dstCache:                       "); //HRW
    OutputString(outputFile, "VkPipelineCache = "); //TEQ
    OutputAddr(outputFile, dstCache); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t srcCacheCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "srcCacheCount:                  "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, srcCacheCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPipelineCache* pSrcCaches
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSrcCaches:                     "); //HRW
    OutputString(outputFile, "const VkPipelineCache* = "); //TEQ
    if (pSrcCaches.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pSrcCaches.GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pSrcCaches = {true, false, false, nullptr};
        OutputArray<const VkPipelineCache*>(outputFile, indent, 1, "const VkPipelineCache*", reinterpret_cast<const VkPipelineCache*>(pSrcCaches.GetPointer()), "pSrcCaches", srcCacheCount,  vinfo_pSrcCaches);  // CXC
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateGraphicsPipelines(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            pipelineCache,
    uint32_t                                    createInfoCount,
    const StructPointerDecoder<Decoded_VkGraphicsPipelineCreateInfo>& pCreateInfos,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkPipeline>&     pPipelines)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreateGraphicsPipelines(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineCache pipelineCache
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pipelineCache:                  "); //HRW
    OutputString(outputFile, "VkPipelineCache = "); //TEQ
    OutputAddr(outputFile, pipelineCache); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t createInfoCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "createInfoCount:                "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, createInfoCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkGraphicsPipelineCreateInfo* pCreateInfos
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfos:                   "); //HRW
    OutputString(outputFile, "const VkGraphicsPipelineCreateInfo* = "); //TEQ
    if (pCreateInfos.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfos.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkGraphicsPipelineCreateInfo>(outputFile, indent+1, 1, "VkGraphicsPipelineCreateInfo", pCreateInfos.GetMetaStructPointer(), "pCreateInfos", createInfoCount, false, pCreateInfos.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipeline* pPipelines
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pPipelines:                     "); //HRW
    OutputString(outputFile, "VkPipeline* = "); //TEQ
    if (pPipelines.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pPipelines.GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pPipelines = {true, false, false, nullptr};
        OutputArray<VkPipeline*>(outputFile, indent, 1, "VkPipeline*", reinterpret_cast<VkPipeline*>(pPipelines.GetPointer()), "pPipelines", createInfoCount,  vinfo_pPipelines);  // CXC
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateComputePipelines(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            pipelineCache,
    uint32_t                                    createInfoCount,
    const StructPointerDecoder<Decoded_VkComputePipelineCreateInfo>& pCreateInfos,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkPipeline>&     pPipelines)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreateComputePipelines(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineCache pipelineCache
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pipelineCache:                  "); //HRW
    OutputString(outputFile, "VkPipelineCache = "); //TEQ
    OutputAddr(outputFile, pipelineCache); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t createInfoCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "createInfoCount:                "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, createInfoCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkComputePipelineCreateInfo* pCreateInfos
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfos:                   "); //HRW
    OutputString(outputFile, "const VkComputePipelineCreateInfo* = "); //TEQ
    if (pCreateInfos.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfos.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkComputePipelineCreateInfo>(outputFile, indent+1, 1, "VkComputePipelineCreateInfo", pCreateInfos.GetMetaStructPointer(), "pCreateInfos", createInfoCount, false, pCreateInfos.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipeline* pPipelines
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pPipelines:                     "); //HRW
    OutputString(outputFile, "VkPipeline* = "); //TEQ
    if (pPipelines.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pPipelines.GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pPipelines = {true, false, false, nullptr};
        OutputArray<VkPipeline*>(outputFile, indent, 1, "VkPipeline*", reinterpret_cast<VkPipeline*>(pPipelines.GetPointer()), "pPipelines", createInfoCount,  vinfo_pPipelines);  // CXC
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyPipeline(
    format::HandleId                            device,
    format::HandleId                            pipeline,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkDestroyPipeline(device, pipeline, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipeline pipeline
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pipeline:                       "); //HRW
    OutputString(outputFile, "VkPipeline = "); //TEQ
    OutputAddr(outputFile, pipeline); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreatePipelineLayout(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkPipelineLayoutCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkPipelineLayout>& pPipelineLayout)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreatePipelineLayout(device, pCreateInfo, pAllocator, pPipelineLayout)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPipelineLayoutCreateInfo* pCreateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); //HRW
    OutputString(outputFile, "const VkPipelineLayoutCreateInfo* = "); //TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineLayout* pPipelineLayout
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pPipelineLayout:                "); //HRW
    OutputString(outputFile, "VkPipelineLayout* = "); //TEQ
    if (pPipelineLayout.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pPipelineLayout = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pPipelineLayout.GetPointer(), vinfo_pPipelineLayout); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyPipelineLayout(
    format::HandleId                            device,
    format::HandleId                            pipelineLayout,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkDestroyPipelineLayout(device, pipelineLayout, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineLayout pipelineLayout
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pipelineLayout:                 "); //HRW
    OutputString(outputFile, "VkPipelineLayout = "); //TEQ
    OutputAddr(outputFile, pipelineLayout); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateSampler(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSamplerCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSampler>&      pSampler)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreateSampler(device, pCreateInfo, pAllocator, pSampler)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSamplerCreateInfo* pCreateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); //HRW
    OutputString(outputFile, "const VkSamplerCreateInfo* = "); //TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSampler* pSampler
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSampler:                       "); //HRW
    OutputString(outputFile, "VkSampler* = "); //TEQ
    if (pSampler.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pSampler = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pSampler.GetPointer(), vinfo_pSampler); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroySampler(
    format::HandleId                            device,
    format::HandleId                            sampler,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkDestroySampler(device, sampler, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSampler sampler
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "sampler:                        "); //HRW
    OutputString(outputFile, "VkSampler = "); //TEQ
    OutputAddr(outputFile, sampler); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateDescriptorSetLayout(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDescriptorSetLayoutCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkDescriptorSetLayout>& pSetLayout)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreateDescriptorSetLayout(device, pCreateInfo, pAllocator, pSetLayout)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDescriptorSetLayoutCreateInfo* pCreateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); //HRW
    OutputString(outputFile, "const VkDescriptorSetLayoutCreateInfo* = "); //TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDescriptorSetLayout* pSetLayout
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSetLayout:                     "); //HRW
    OutputString(outputFile, "VkDescriptorSetLayout* = "); //TEQ
    if (pSetLayout.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pSetLayout = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pSetLayout.GetPointer(), vinfo_pSetLayout); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyDescriptorSetLayout(
    format::HandleId                            device,
    format::HandleId                            descriptorSetLayout,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkDestroyDescriptorSetLayout(device, descriptorSetLayout, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDescriptorSetLayout descriptorSetLayout
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "descriptorSetLayout:            "); //HRW
    OutputString(outputFile, "VkDescriptorSetLayout = "); //TEQ
    OutputAddr(outputFile, descriptorSetLayout); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateDescriptorPool(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDescriptorPoolCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkDescriptorPool>& pDescriptorPool)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreateDescriptorPool(device, pCreateInfo, pAllocator, pDescriptorPool)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDescriptorPoolCreateInfo* pCreateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); //HRW
    OutputString(outputFile, "const VkDescriptorPoolCreateInfo* = "); //TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDescriptorPool* pDescriptorPool
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pDescriptorPool:                "); //HRW
    OutputString(outputFile, "VkDescriptorPool* = "); //TEQ
    if (pDescriptorPool.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pDescriptorPool = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pDescriptorPool.GetPointer(), vinfo_pDescriptorPool); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyDescriptorPool(
    format::HandleId                            device,
    format::HandleId                            descriptorPool,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkDestroyDescriptorPool(device, descriptorPool, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDescriptorPool descriptorPool
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "descriptorPool:                 "); //HRW
    OutputString(outputFile, "VkDescriptorPool = "); //TEQ
    OutputAddr(outputFile, descriptorPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkResetDescriptorPool(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            descriptorPool,
    VkDescriptorPoolResetFlags                  flags)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkResetDescriptorPool(device, descriptorPool, flags)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDescriptorPool descriptorPool
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "descriptorPool:                 "); //HRW
    OutputString(outputFile, "VkDescriptorPool = "); //TEQ
    OutputAddr(outputFile, descriptorPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDescriptorPoolResetFlags flags
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "flags:                          "); //HRW
    OutputString(outputFile, "VkDescriptorPoolResetFlags = "); //TEQ
    OutputUnsignedDecimal(outputFile, flags); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkAllocateDescriptorSets(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDescriptorSetAllocateInfo>& pAllocateInfo,
    const HandlePointerDecoder<VkDescriptorSet>& pDescriptorSets)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkAllocateDescriptorSets(device, pAllocateInfo, pDescriptorSets)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDescriptorSetAllocateInfo* pAllocateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocateInfo:                  "); //HRW
    OutputString(outputFile, "const VkDescriptorSetAllocateInfo* = "); //TEQ
    if (pAllocateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocateInfo.GetMetaStructPointer(), indent+1,pAllocateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDescriptorSet* pDescriptorSets
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pDescriptorSets:                "); //HRW
    OutputString(outputFile, "VkDescriptorSet* = "); //TEQ
    if (pDescriptorSets.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pDescriptorSets.GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pDescriptorSets = {true, false, false, nullptr};
        OutputArray<VkDescriptorSet*>(outputFile, indent, 1, "VkDescriptorSet*", reinterpret_cast<VkDescriptorSet*>(pDescriptorSets.GetPointer()), "pDescriptorSets", pAllocateInfo.GetPointer()->descriptorSetCount,  vinfo_pDescriptorSets);  // CXC
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkFreeDescriptorSets(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            descriptorPool,
    uint32_t                                    descriptorSetCount,
    const HandlePointerDecoder<VkDescriptorSet>& pDescriptorSets)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkFreeDescriptorSets(device, descriptorPool, descriptorSetCount, pDescriptorSets)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDescriptorPool descriptorPool
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "descriptorPool:                 "); //HRW
    OutputString(outputFile, "VkDescriptorPool = "); //TEQ
    OutputAddr(outputFile, descriptorPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t descriptorSetCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "descriptorSetCount:             "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, descriptorSetCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDescriptorSet* pDescriptorSets
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pDescriptorSets:                "); //HRW
    OutputString(outputFile, "const VkDescriptorSet* = "); //TEQ
    if (pDescriptorSets.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pDescriptorSets.GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pDescriptorSets = {true, false, false, nullptr};
        OutputArray<const VkDescriptorSet*>(outputFile, indent, 1, "const VkDescriptorSet*", reinterpret_cast<const VkDescriptorSet*>(pDescriptorSets.GetPointer()), "pDescriptorSets", descriptorSetCount,  vinfo_pDescriptorSets);  // CXC
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkUpdateDescriptorSets(
    format::HandleId                            device,
    uint32_t                                    descriptorWriteCount,
    const StructPointerDecoder<Decoded_VkWriteDescriptorSet>& pDescriptorWrites,
    uint32_t                                    descriptorCopyCount,
    const StructPointerDecoder<Decoded_VkCopyDescriptorSet>& pDescriptorCopies)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkUpdateDescriptorSets(device, descriptorWriteCount, pDescriptorWrites, descriptorCopyCount, pDescriptorCopies)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t descriptorWriteCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "descriptorWriteCount:           "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, descriptorWriteCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkWriteDescriptorSet* pDescriptorWrites
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pDescriptorWrites:              "); //HRW
    OutputString(outputFile, "const VkWriteDescriptorSet* = "); //TEQ
    if (pDescriptorWrites.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pDescriptorWrites.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkWriteDescriptorSet>(outputFile, indent+1, 1, "VkWriteDescriptorSet", pDescriptorWrites.GetMetaStructPointer(), "pDescriptorWrites", descriptorWriteCount, false, pDescriptorWrites.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t descriptorCopyCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "descriptorCopyCount:            "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, descriptorCopyCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkCopyDescriptorSet* pDescriptorCopies
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pDescriptorCopies:              "); //HRW
    OutputString(outputFile, "const VkCopyDescriptorSet* = "); //TEQ
    if (pDescriptorCopies.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pDescriptorCopies.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkCopyDescriptorSet>(outputFile, indent+1, 1, "VkCopyDescriptorSet", pDescriptorCopies.GetMetaStructPointer(), "pDescriptorCopies", descriptorCopyCount, false, pDescriptorCopies.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateFramebuffer(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkFramebufferCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkFramebuffer>&  pFramebuffer)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreateFramebuffer(device, pCreateInfo, pAllocator, pFramebuffer)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkFramebufferCreateInfo* pCreateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); //HRW
    OutputString(outputFile, "const VkFramebufferCreateInfo* = "); //TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFramebuffer* pFramebuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pFramebuffer:                   "); //HRW
    OutputString(outputFile, "VkFramebuffer* = "); //TEQ
    if (pFramebuffer.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pFramebuffer = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pFramebuffer.GetPointer(), vinfo_pFramebuffer); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyFramebuffer(
    format::HandleId                            device,
    format::HandleId                            framebuffer,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkDestroyFramebuffer(device, framebuffer, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFramebuffer framebuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "framebuffer:                    "); //HRW
    OutputString(outputFile, "VkFramebuffer = "); //TEQ
    OutputAddr(outputFile, framebuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateRenderPass(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkRenderPassCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkRenderPass>&   pRenderPass)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreateRenderPass(device, pCreateInfo, pAllocator, pRenderPass)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkRenderPassCreateInfo* pCreateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); //HRW
    OutputString(outputFile, "const VkRenderPassCreateInfo* = "); //TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkRenderPass* pRenderPass
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pRenderPass:                    "); //HRW
    OutputString(outputFile, "VkRenderPass* = "); //TEQ
    if (pRenderPass.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pRenderPass = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pRenderPass.GetPointer(), vinfo_pRenderPass); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyRenderPass(
    format::HandleId                            device,
    format::HandleId                            renderPass,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkDestroyRenderPass(device, renderPass, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkRenderPass renderPass
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "renderPass:                     "); //HRW
    OutputString(outputFile, "VkRenderPass = "); //TEQ
    OutputAddr(outputFile, renderPass); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetRenderAreaGranularity(
    format::HandleId                            device,
    format::HandleId                            renderPass,
    const StructPointerDecoder<Decoded_VkExtent2D>& pGranularity)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetRenderAreaGranularity(device, renderPass, pGranularity)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkRenderPass renderPass
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "renderPass:                     "); //HRW
    OutputString(outputFile, "VkRenderPass = "); //TEQ
    OutputAddr(outputFile, renderPass); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkExtent2D* pGranularity
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pGranularity:                   "); //HRW
    OutputString(outputFile, "VkExtent2D* = "); //TEQ
    if (pGranularity.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pGranularity.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pGranularity.GetMetaStructPointer(), indent+1,pGranularity.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateCommandPool(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkCommandPoolCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkCommandPool>&  pCommandPool)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreateCommandPool(device, pCreateInfo, pAllocator, pCommandPool)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkCommandPoolCreateInfo* pCreateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); //HRW
    OutputString(outputFile, "const VkCommandPoolCreateInfo* = "); //TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkCommandPool* pCommandPool
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCommandPool:                   "); //HRW
    OutputString(outputFile, "VkCommandPool* = "); //TEQ
    if (pCommandPool.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pCommandPool = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pCommandPool.GetPointer(), vinfo_pCommandPool); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyCommandPool(
    format::HandleId                            device,
    format::HandleId                            commandPool,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkDestroyCommandPool(device, commandPool, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkCommandPool commandPool
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandPool:                    "); //HRW
    OutputString(outputFile, "VkCommandPool = "); //TEQ
    OutputAddr(outputFile, commandPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkResetCommandPool(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            commandPool,
    VkCommandPoolResetFlags                     flags)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkResetCommandPool(device, commandPool, flags)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkCommandPool commandPool
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandPool:                    "); //HRW
    OutputString(outputFile, "VkCommandPool = "); //TEQ
    OutputAddr(outputFile, commandPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkCommandPoolResetFlags flags
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "flags:                          "); //HRW
    OutputString(outputFile, "VkCommandPoolResetFlags = "); //TEQ
    OutputFlags(outputFile, flags, OutputEnumVkCommandPoolResetFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkAllocateCommandBuffers(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkCommandBufferAllocateInfo>& pAllocateInfo,
    const HandlePointerDecoder<VkCommandBuffer>& pCommandBuffers)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkAllocateCommandBuffers(device, pAllocateInfo, pCommandBuffers)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkCommandBufferAllocateInfo* pAllocateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocateInfo:                  "); //HRW
    OutputString(outputFile, "const VkCommandBufferAllocateInfo* = "); //TEQ
    if (pAllocateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocateInfo.GetMetaStructPointer(), indent+1,pAllocateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkCommandBuffer* pCommandBuffers
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCommandBuffers:                "); //HRW
    OutputString(outputFile, "VkCommandBuffer* = "); //TEQ
    if (pCommandBuffers.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCommandBuffers.GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pCommandBuffers = {true, false, false, nullptr};
        OutputArray<VkCommandBuffer*>(outputFile, indent, 1, "VkCommandBuffer*", reinterpret_cast<VkCommandBuffer*>(pCommandBuffers.GetPointer()), "pCommandBuffers", pAllocateInfo.GetPointer()->commandBufferCount,  vinfo_pCommandBuffers);  // CXC
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkFreeCommandBuffers(
    format::HandleId                            device,
    format::HandleId                            commandPool,
    uint32_t                                    commandBufferCount,
    const HandlePointerDecoder<VkCommandBuffer>& pCommandBuffers)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkFreeCommandBuffers(device, commandPool, commandBufferCount, pCommandBuffers)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkCommandPool commandPool
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandPool:                    "); //HRW
    OutputString(outputFile, "VkCommandPool = "); //TEQ
    OutputAddr(outputFile, commandPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t commandBufferCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBufferCount:             "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, commandBufferCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkCommandBuffer* pCommandBuffers
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCommandBuffers:                "); //HRW
    OutputString(outputFile, "const VkCommandBuffer* = "); //TEQ
    if (pCommandBuffers.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCommandBuffers.GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pCommandBuffers = {true, false, false, nullptr};
        OutputArray<const VkCommandBuffer*>(outputFile, indent, 1, "const VkCommandBuffer*", reinterpret_cast<const VkCommandBuffer*>(pCommandBuffers.GetPointer()), "pCommandBuffers", commandBufferCount,  vinfo_pCommandBuffers);  // CXC
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkBeginCommandBuffer(
    VkResult                                    returnValue,
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkCommandBufferBeginInfo>& pBeginInfo)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkBeginCommandBuffer(commandBuffer, pBeginInfo)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkCommandBufferBeginInfo* pBeginInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pBeginInfo:                     "); //HRW
    OutputString(outputFile, "const VkCommandBufferBeginInfo* = "); //TEQ
    if (pBeginInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pBeginInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pBeginInfo.GetMetaStructPointer(), indent+1,pBeginInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkEndCommandBuffer(
    VkResult                                    returnValue,
    format::HandleId                            commandBuffer)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkEndCommandBuffer(commandBuffer)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkResetCommandBuffer(
    VkResult                                    returnValue,
    format::HandleId                            commandBuffer,
    VkCommandBufferResetFlags                   flags)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkResetCommandBuffer(commandBuffer, flags)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkCommandBufferResetFlags flags
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "flags:                          "); //HRW
    OutputString(outputFile, "VkCommandBufferResetFlags = "); //TEQ
    OutputFlags(outputFile, flags, OutputEnumVkCommandBufferResetFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdBindPipeline(
    format::HandleId                            commandBuffer,
    VkPipelineBindPoint                         pipelineBindPoint,
    format::HandleId                            pipeline)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdBindPipeline(commandBuffer, pipelineBindPoint, pipeline)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineBindPoint pipelineBindPoint
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pipelineBindPoint:              "); //HRW
    OutputString(outputFile, "VkPipelineBindPoint = "); //TEQ
    OutputEnumVkPipelineBindPoint(outputFile, pipelineBindPoint); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimal(outputFile, pipelineBindPoint);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipeline pipeline
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pipeline:                       "); //HRW
    OutputString(outputFile, "VkPipeline = "); //TEQ
    OutputAddr(outputFile, pipeline); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdSetViewport(
    format::HandleId                            commandBuffer,
    uint32_t                                    firstViewport,
    uint32_t                                    viewportCount,
    const StructPointerDecoder<Decoded_VkViewport>& pViewports)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdSetViewport(commandBuffer, firstViewport, viewportCount, pViewports)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstViewport
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "firstViewport:                  "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, firstViewport); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t viewportCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "viewportCount:                  "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, viewportCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkViewport* pViewports
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pViewports:                     "); //HRW
    OutputString(outputFile, "const VkViewport* = "); //TEQ
    if (pViewports.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pViewports.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkViewport>(outputFile, indent+1, 1, "VkViewport", pViewports.GetMetaStructPointer(), "pViewports", viewportCount, false, pViewports.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdSetScissor(
    format::HandleId                            commandBuffer,
    uint32_t                                    firstScissor,
    uint32_t                                    scissorCount,
    const StructPointerDecoder<Decoded_VkRect2D>& pScissors)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdSetScissor(commandBuffer, firstScissor, scissorCount, pScissors)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstScissor
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "firstScissor:                   "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, firstScissor); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t scissorCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "scissorCount:                   "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, scissorCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkRect2D* pScissors
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pScissors:                      "); //HRW
    OutputString(outputFile, "const VkRect2D* = "); //TEQ
    if (pScissors.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pScissors.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkRect2D>(outputFile, indent+1, 1, "VkRect2D", pScissors.GetMetaStructPointer(), "pScissors", scissorCount, false, pScissors.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdSetLineWidth(
    format::HandleId                            commandBuffer,
    float                                       lineWidth)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdSetLineWidth(commandBuffer, lineWidth)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: float lineWidth
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "lineWidth:                      "); //HRW
    OutputString(outputFile, "float = "); //TEQ
    OutputDouble(outputFile, lineWidth); // PEZ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdSetDepthBias(
    format::HandleId                            commandBuffer,
    float                                       depthBiasConstantFactor,
    float                                       depthBiasClamp,
    float                                       depthBiasSlopeFactor)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdSetDepthBias(commandBuffer, depthBiasConstantFactor, depthBiasClamp, depthBiasSlopeFactor)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: float depthBiasConstantFactor
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "depthBiasConstantFactor:        "); //HRW
    OutputString(outputFile, "float = "); //TEQ
    OutputDouble(outputFile, depthBiasConstantFactor); // PEZ
    OutputString(outputFile, "\n"); // HHS

    // func arg: float depthBiasClamp
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "depthBiasClamp:                 "); //HRW
    OutputString(outputFile, "float = "); //TEQ
    OutputDouble(outputFile, depthBiasClamp); // PEZ
    OutputString(outputFile, "\n"); // HHS

    // func arg: float depthBiasSlopeFactor
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "depthBiasSlopeFactor:           "); //HRW
    OutputString(outputFile, "float = "); //TEQ
    OutputDouble(outputFile, depthBiasSlopeFactor); // PEZ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdSetBlendConstants(
    format::HandleId                            commandBuffer,
    const PointerDecoder<float>&                blendConstants)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdSetBlendConstants(commandBuffer, blendConstants)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const float blendConstants
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "blendConstants:                 "); //HRW
    OutputString(outputFile, "float"); //JUQ
    OutputString(outputFile, "[");
    OutputString(outputFile, "4"); //DFX
    OutputString(outputFile, "] = ");
    OutputScalarValueStructInfo vinfo_blendConstants = {false, false, false, nullptr}; // YPS
    OutputArray<float*>(outputFile, indent, 0, "const float", blendConstants.GetPointer(), "blendConstants", 4, vinfo_blendConstants); // JNA
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdSetDepthBounds(
    format::HandleId                            commandBuffer,
    float                                       minDepthBounds,
    float                                       maxDepthBounds)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdSetDepthBounds(commandBuffer, minDepthBounds, maxDepthBounds)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: float minDepthBounds
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "minDepthBounds:                 "); //HRW
    OutputString(outputFile, "float = "); //TEQ
    OutputDouble(outputFile, minDepthBounds); // PEZ
    OutputString(outputFile, "\n"); // HHS

    // func arg: float maxDepthBounds
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "maxDepthBounds:                 "); //HRW
    OutputString(outputFile, "float = "); //TEQ
    OutputDouble(outputFile, maxDepthBounds); // PEZ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdSetStencilCompareMask(
    format::HandleId                            commandBuffer,
    VkStencilFaceFlags                          faceMask,
    uint32_t                                    compareMask)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdSetStencilCompareMask(commandBuffer, faceMask, compareMask)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkStencilFaceFlags faceMask
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "faceMask:                       "); //HRW
    OutputString(outputFile, "VkStencilFaceFlags = "); //TEQ
    OutputFlags(outputFile, faceMask, OutputEnumVkStencilFaceFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t compareMask
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "compareMask:                    "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, compareMask); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdSetStencilWriteMask(
    format::HandleId                            commandBuffer,
    VkStencilFaceFlags                          faceMask,
    uint32_t                                    writeMask)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdSetStencilWriteMask(commandBuffer, faceMask, writeMask)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkStencilFaceFlags faceMask
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "faceMask:                       "); //HRW
    OutputString(outputFile, "VkStencilFaceFlags = "); //TEQ
    OutputFlags(outputFile, faceMask, OutputEnumVkStencilFaceFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t writeMask
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "writeMask:                      "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, writeMask); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdSetStencilReference(
    format::HandleId                            commandBuffer,
    VkStencilFaceFlags                          faceMask,
    uint32_t                                    reference)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdSetStencilReference(commandBuffer, faceMask, reference)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkStencilFaceFlags faceMask
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "faceMask:                       "); //HRW
    OutputString(outputFile, "VkStencilFaceFlags = "); //TEQ
    OutputFlags(outputFile, faceMask, OutputEnumVkStencilFaceFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t reference
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "reference:                      "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, reference); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdBindDescriptorSets(
    format::HandleId                            commandBuffer,
    VkPipelineBindPoint                         pipelineBindPoint,
    format::HandleId                            layout,
    uint32_t                                    firstSet,
    uint32_t                                    descriptorSetCount,
    const HandlePointerDecoder<VkDescriptorSet>& pDescriptorSets,
    uint32_t                                    dynamicOffsetCount,
    const PointerDecoder<uint32_t>&             pDynamicOffsets)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdBindDescriptorSets(commandBuffer, pipelineBindPoint, layout, firstSet, descriptorSetCount, pDescriptorSets, dynamicOffsetCount, pDynamicOffsets)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineBindPoint pipelineBindPoint
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pipelineBindPoint:              "); //HRW
    OutputString(outputFile, "VkPipelineBindPoint = "); //TEQ
    OutputEnumVkPipelineBindPoint(outputFile, pipelineBindPoint); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimal(outputFile, pipelineBindPoint);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineLayout layout
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "layout:                         "); //HRW
    OutputString(outputFile, "VkPipelineLayout = "); //TEQ
    OutputAddr(outputFile, layout); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstSet
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "firstSet:                       "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, firstSet); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t descriptorSetCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "descriptorSetCount:             "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, descriptorSetCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDescriptorSet* pDescriptorSets
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pDescriptorSets:                "); //HRW
    OutputString(outputFile, "const VkDescriptorSet* = "); //TEQ
    if (pDescriptorSets.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pDescriptorSets.GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pDescriptorSets = {true, false, false, nullptr};
        OutputArray<const VkDescriptorSet*>(outputFile, indent, 1, "const VkDescriptorSet*", reinterpret_cast<const VkDescriptorSet*>(pDescriptorSets.GetPointer()), "pDescriptorSets", descriptorSetCount,  vinfo_pDescriptorSets);  // CXC
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t dynamicOffsetCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "dynamicOffsetCount:             "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, dynamicOffsetCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const uint32_t* pDynamicOffsets
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pDynamicOffsets:                "); //HRW
    OutputString(outputFile, "const uint32_t* = "); //TEQ
    if (pDynamicOffsets.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pDynamicOffsets.GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pDynamicOffsets = {false, false, false, nullptr};
        OutputArray<const uint32_t*>(outputFile, indent, 1, "const uint32_t*", reinterpret_cast<const uint32_t*>(pDynamicOffsets.GetPointer()), "pDynamicOffsets", dynamicOffsetCount,  vinfo_pDynamicOffsets);  // CXC
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdBindIndexBuffer(
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    VkIndexType                                 indexType)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdBindIndexBuffer(commandBuffer, buffer, offset, indexType)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer buffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "buffer:                         "); //HRW
    OutputString(outputFile, "VkBuffer = "); //TEQ
    OutputAddr(outputFile, buffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize offset
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "offset:                         "); //HRW
    OutputString(outputFile, "VkDeviceSize = "); //TEQ
    OutputSignedDecimal(outputFile, offset); //EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkIndexType indexType
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "indexType:                      "); //HRW
    OutputString(outputFile, "VkIndexType = "); //TEQ
    OutputEnumVkIndexType(outputFile, indexType); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimal(outputFile, indexType);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdBindVertexBuffers(
    format::HandleId                            commandBuffer,
    uint32_t                                    firstBinding,
    uint32_t                                    bindingCount,
    const HandlePointerDecoder<VkBuffer>&       pBuffers,
    const PointerDecoder<VkDeviceSize>&         pOffsets)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdBindVertexBuffers(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstBinding
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "firstBinding:                   "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, firstBinding); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t bindingCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "bindingCount:                   "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, bindingCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBuffer* pBuffers
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pBuffers:                       "); //HRW
    OutputString(outputFile, "const VkBuffer* = "); //TEQ
    if (pBuffers.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pBuffers.GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pBuffers = {true, false, false, nullptr};
        OutputArray<const VkBuffer*>(outputFile, indent, 1, "const VkBuffer*", reinterpret_cast<const VkBuffer*>(pBuffers.GetPointer()), "pBuffers", bindingCount,  vinfo_pBuffers);  // CXC
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDeviceSize* pOffsets
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pOffsets:                       "); //HRW
    OutputString(outputFile, "const VkDeviceSize* = "); //TEQ
    if (pOffsets.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pOffsets.GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pOffsets = {false, false, false, nullptr};
        OutputArray<const VkDeviceSize*>(outputFile, indent, 1, "const VkDeviceSize*", reinterpret_cast<const VkDeviceSize*>(pOffsets.GetPointer()), "pOffsets", bindingCount,  vinfo_pOffsets);  // CXC
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdDraw(
    format::HandleId                            commandBuffer,
    uint32_t                                    vertexCount,
    uint32_t                                    instanceCount,
    uint32_t                                    firstVertex,
    uint32_t                                    firstInstance)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdDraw(commandBuffer, vertexCount, instanceCount, firstVertex, firstInstance)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t vertexCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "vertexCount:                    "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, vertexCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t instanceCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "instanceCount:                  "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, instanceCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstVertex
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "firstVertex:                    "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, firstVertex); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstInstance
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "firstInstance:                  "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, firstInstance); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdDrawIndexed(
    format::HandleId                            commandBuffer,
    uint32_t                                    indexCount,
    uint32_t                                    instanceCount,
    uint32_t                                    firstIndex,
    int32_t                                     vertexOffset,
    uint32_t                                    firstInstance)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdDrawIndexed(commandBuffer, indexCount, instanceCount, firstIndex, vertexOffset, firstInstance)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t indexCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "indexCount:                     "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, indexCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t instanceCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "instanceCount:                  "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, instanceCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstIndex
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "firstIndex:                     "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, firstIndex); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: int32_t vertexOffset
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "vertexOffset:                   "); //HRW
    OutputString(outputFile, "int32_t = "); //TEQ
    OutputSignedDecimal(outputFile, vertexOffset); //EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstInstance
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "firstInstance:                  "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, firstInstance); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdDrawIndirect(
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    uint32_t                                    drawCount,
    uint32_t                                    stride)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdDrawIndirect(commandBuffer, buffer, offset, drawCount, stride)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer buffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "buffer:                         "); //HRW
    OutputString(outputFile, "VkBuffer = "); //TEQ
    OutputAddr(outputFile, buffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize offset
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "offset:                         "); //HRW
    OutputString(outputFile, "VkDeviceSize = "); //TEQ
    OutputSignedDecimal(outputFile, offset); //EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t drawCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "drawCount:                      "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, drawCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t stride
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "stride:                         "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, stride); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdDrawIndexedIndirect(
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    uint32_t                                    drawCount,
    uint32_t                                    stride)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdDrawIndexedIndirect(commandBuffer, buffer, offset, drawCount, stride)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer buffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "buffer:                         "); //HRW
    OutputString(outputFile, "VkBuffer = "); //TEQ
    OutputAddr(outputFile, buffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize offset
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "offset:                         "); //HRW
    OutputString(outputFile, "VkDeviceSize = "); //TEQ
    OutputSignedDecimal(outputFile, offset); //EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t drawCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "drawCount:                      "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, drawCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t stride
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "stride:                         "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, stride); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdDispatch(
    format::HandleId                            commandBuffer,
    uint32_t                                    groupCountX,
    uint32_t                                    groupCountY,
    uint32_t                                    groupCountZ)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdDispatch(commandBuffer, groupCountX, groupCountY, groupCountZ)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t groupCountX
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "groupCountX:                    "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, groupCountX); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t groupCountY
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "groupCountY:                    "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, groupCountY); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t groupCountZ
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "groupCountZ:                    "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, groupCountZ); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdDispatchIndirect(
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdDispatchIndirect(commandBuffer, buffer, offset)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer buffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "buffer:                         "); //HRW
    OutputString(outputFile, "VkBuffer = "); //TEQ
    OutputAddr(outputFile, buffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize offset
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "offset:                         "); //HRW
    OutputString(outputFile, "VkDeviceSize = "); //TEQ
    OutputSignedDecimal(outputFile, offset); //EQA
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdCopyBuffer(
    format::HandleId                            commandBuffer,
    format::HandleId                            srcBuffer,
    format::HandleId                            dstBuffer,
    uint32_t                                    regionCount,
    const StructPointerDecoder<Decoded_VkBufferCopy>& pRegions)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdCopyBuffer(commandBuffer, srcBuffer, dstBuffer, regionCount, pRegions)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer srcBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "srcBuffer:                      "); //HRW
    OutputString(outputFile, "VkBuffer = "); //TEQ
    OutputAddr(outputFile, srcBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer dstBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "dstBuffer:                      "); //HRW
    OutputString(outputFile, "VkBuffer = "); //TEQ
    OutputAddr(outputFile, dstBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t regionCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "regionCount:                    "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, regionCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBufferCopy* pRegions
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pRegions:                       "); //HRW
    OutputString(outputFile, "const VkBufferCopy* = "); //TEQ
    if (pRegions.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pRegions.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkBufferCopy>(outputFile, indent+1, 1, "VkBufferCopy", pRegions.GetMetaStructPointer(), "pRegions", regionCount, false, pRegions.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdCopyImage(
    format::HandleId                            commandBuffer,
    format::HandleId                            srcImage,
    VkImageLayout                               srcImageLayout,
    format::HandleId                            dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    const StructPointerDecoder<Decoded_VkImageCopy>& pRegions)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdCopyImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage srcImage
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "srcImage:                       "); //HRW
    OutputString(outputFile, "VkImage = "); //TEQ
    OutputAddr(outputFile, srcImage); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageLayout srcImageLayout
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "srcImageLayout:                 "); //HRW
    OutputString(outputFile, "VkImageLayout = "); //TEQ
    OutputEnumVkImageLayout(outputFile, srcImageLayout); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimal(outputFile, srcImageLayout);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage dstImage
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "dstImage:                       "); //HRW
    OutputString(outputFile, "VkImage = "); //TEQ
    OutputAddr(outputFile, dstImage); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageLayout dstImageLayout
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "dstImageLayout:                 "); //HRW
    OutputString(outputFile, "VkImageLayout = "); //TEQ
    OutputEnumVkImageLayout(outputFile, dstImageLayout); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimal(outputFile, dstImageLayout);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t regionCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "regionCount:                    "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, regionCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImageCopy* pRegions
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pRegions:                       "); //HRW
    OutputString(outputFile, "const VkImageCopy* = "); //TEQ
    if (pRegions.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pRegions.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkImageCopy>(outputFile, indent+1, 1, "VkImageCopy", pRegions.GetMetaStructPointer(), "pRegions", regionCount, false, pRegions.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdBlitImage(
    format::HandleId                            commandBuffer,
    format::HandleId                            srcImage,
    VkImageLayout                               srcImageLayout,
    format::HandleId                            dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    const StructPointerDecoder<Decoded_VkImageBlit>& pRegions,
    VkFilter                                    filter)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdBlitImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions, filter)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage srcImage
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "srcImage:                       "); //HRW
    OutputString(outputFile, "VkImage = "); //TEQ
    OutputAddr(outputFile, srcImage); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageLayout srcImageLayout
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "srcImageLayout:                 "); //HRW
    OutputString(outputFile, "VkImageLayout = "); //TEQ
    OutputEnumVkImageLayout(outputFile, srcImageLayout); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimal(outputFile, srcImageLayout);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage dstImage
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "dstImage:                       "); //HRW
    OutputString(outputFile, "VkImage = "); //TEQ
    OutputAddr(outputFile, dstImage); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageLayout dstImageLayout
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "dstImageLayout:                 "); //HRW
    OutputString(outputFile, "VkImageLayout = "); //TEQ
    OutputEnumVkImageLayout(outputFile, dstImageLayout); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimal(outputFile, dstImageLayout);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t regionCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "regionCount:                    "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, regionCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImageBlit* pRegions
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pRegions:                       "); //HRW
    OutputString(outputFile, "const VkImageBlit* = "); //TEQ
    if (pRegions.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pRegions.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkImageBlit>(outputFile, indent+1, 1, "VkImageBlit", pRegions.GetMetaStructPointer(), "pRegions", regionCount, false, pRegions.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFilter filter
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "filter:                         "); //HRW
    OutputString(outputFile, "VkFilter = "); //TEQ
    OutputEnumVkFilter(outputFile, filter); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimal(outputFile, filter);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdCopyBufferToImage(
    format::HandleId                            commandBuffer,
    format::HandleId                            srcBuffer,
    format::HandleId                            dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    const StructPointerDecoder<Decoded_VkBufferImageCopy>& pRegions)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdCopyBufferToImage(commandBuffer, srcBuffer, dstImage, dstImageLayout, regionCount, pRegions)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer srcBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "srcBuffer:                      "); //HRW
    OutputString(outputFile, "VkBuffer = "); //TEQ
    OutputAddr(outputFile, srcBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage dstImage
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "dstImage:                       "); //HRW
    OutputString(outputFile, "VkImage = "); //TEQ
    OutputAddr(outputFile, dstImage); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageLayout dstImageLayout
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "dstImageLayout:                 "); //HRW
    OutputString(outputFile, "VkImageLayout = "); //TEQ
    OutputEnumVkImageLayout(outputFile, dstImageLayout); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimal(outputFile, dstImageLayout);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t regionCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "regionCount:                    "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, regionCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBufferImageCopy* pRegions
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pRegions:                       "); //HRW
    OutputString(outputFile, "const VkBufferImageCopy* = "); //TEQ
    if (pRegions.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pRegions.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkBufferImageCopy>(outputFile, indent+1, 1, "VkBufferImageCopy", pRegions.GetMetaStructPointer(), "pRegions", regionCount, false, pRegions.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdCopyImageToBuffer(
    format::HandleId                            commandBuffer,
    format::HandleId                            srcImage,
    VkImageLayout                               srcImageLayout,
    format::HandleId                            dstBuffer,
    uint32_t                                    regionCount,
    const StructPointerDecoder<Decoded_VkBufferImageCopy>& pRegions)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdCopyImageToBuffer(commandBuffer, srcImage, srcImageLayout, dstBuffer, regionCount, pRegions)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage srcImage
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "srcImage:                       "); //HRW
    OutputString(outputFile, "VkImage = "); //TEQ
    OutputAddr(outputFile, srcImage); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageLayout srcImageLayout
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "srcImageLayout:                 "); //HRW
    OutputString(outputFile, "VkImageLayout = "); //TEQ
    OutputEnumVkImageLayout(outputFile, srcImageLayout); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimal(outputFile, srcImageLayout);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer dstBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "dstBuffer:                      "); //HRW
    OutputString(outputFile, "VkBuffer = "); //TEQ
    OutputAddr(outputFile, dstBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t regionCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "regionCount:                    "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, regionCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBufferImageCopy* pRegions
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pRegions:                       "); //HRW
    OutputString(outputFile, "const VkBufferImageCopy* = "); //TEQ
    if (pRegions.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pRegions.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkBufferImageCopy>(outputFile, indent+1, 1, "VkBufferImageCopy", pRegions.GetMetaStructPointer(), "pRegions", regionCount, false, pRegions.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdUpdateBuffer(
    format::HandleId                            commandBuffer,
    format::HandleId                            dstBuffer,
    VkDeviceSize                                dstOffset,
    VkDeviceSize                                dataSize,
    const PointerDecoder<uint8_t>&              pData)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdUpdateBuffer(commandBuffer, dstBuffer, dstOffset, dataSize, pData)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer dstBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "dstBuffer:                      "); //HRW
    OutputString(outputFile, "VkBuffer = "); //TEQ
    OutputAddr(outputFile, dstBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize dstOffset
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "dstOffset:                      "); //HRW
    OutputString(outputFile, "VkDeviceSize = "); //TEQ
    OutputSignedDecimal(outputFile, dstOffset); //EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize dataSize
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "dataSize:                       "); //HRW
    OutputString(outputFile, "VkDeviceSize = "); //TEQ
    OutputSignedDecimal(outputFile, dataSize); //EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: const void* pData
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pData:                          "); //HRW
    OutputString(outputFile, "const void* = "); //TEQ
    if (pData.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pData.GetAddress()); // AHW
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdFillBuffer(
    format::HandleId                            commandBuffer,
    format::HandleId                            dstBuffer,
    VkDeviceSize                                dstOffset,
    VkDeviceSize                                size,
    uint32_t                                    data)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdFillBuffer(commandBuffer, dstBuffer, dstOffset, size, data)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer dstBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "dstBuffer:                      "); //HRW
    OutputString(outputFile, "VkBuffer = "); //TEQ
    OutputAddr(outputFile, dstBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize dstOffset
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "dstOffset:                      "); //HRW
    OutputString(outputFile, "VkDeviceSize = "); //TEQ
    OutputSignedDecimal(outputFile, dstOffset); //EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize size
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "size:                           "); //HRW
    OutputString(outputFile, "VkDeviceSize = "); //TEQ
    OutputSignedDecimal(outputFile, size); //EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t data
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "data:                           "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, data); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdClearColorImage(
    format::HandleId                            commandBuffer,
    format::HandleId                            image,
    VkImageLayout                               imageLayout,
    const StructPointerDecoder<Decoded_VkClearColorValue>& pColor,
    uint32_t                                    rangeCount,
    const StructPointerDecoder<Decoded_VkImageSubresourceRange>& pRanges)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdClearColorImage(commandBuffer, image, imageLayout, pColor, rangeCount, pRanges)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage image
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "image:                          "); //HRW
    OutputString(outputFile, "VkImage = "); //TEQ
    OutputAddr(outputFile, image); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageLayout imageLayout
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "imageLayout:                    "); //HRW
    OutputString(outputFile, "VkImageLayout = "); //TEQ
    OutputEnumVkImageLayout(outputFile, imageLayout); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimal(outputFile, imageLayout);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkClearColorValue* pColor
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pColor:                         "); //HRW
    OutputString(outputFile, "const VkClearColorValue* = "); //TEQ
    if (pColor.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pColor.GetAddress()); // JHI
        OutputString(outputFile, " (Union)");
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pColor.GetMetaStructPointer(), indent+1,pColor.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t rangeCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "rangeCount:                     "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, rangeCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImageSubresourceRange* pRanges
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pRanges:                        "); //HRW
    OutputString(outputFile, "const VkImageSubresourceRange* = "); //TEQ
    if (pRanges.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pRanges.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkImageSubresourceRange>(outputFile, indent+1, 1, "VkImageSubresourceRange", pRanges.GetMetaStructPointer(), "pRanges", rangeCount, false, pRanges.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdClearDepthStencilImage(
    format::HandleId                            commandBuffer,
    format::HandleId                            image,
    VkImageLayout                               imageLayout,
    const StructPointerDecoder<Decoded_VkClearDepthStencilValue>& pDepthStencil,
    uint32_t                                    rangeCount,
    const StructPointerDecoder<Decoded_VkImageSubresourceRange>& pRanges)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdClearDepthStencilImage(commandBuffer, image, imageLayout, pDepthStencil, rangeCount, pRanges)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage image
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "image:                          "); //HRW
    OutputString(outputFile, "VkImage = "); //TEQ
    OutputAddr(outputFile, image); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageLayout imageLayout
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "imageLayout:                    "); //HRW
    OutputString(outputFile, "VkImageLayout = "); //TEQ
    OutputEnumVkImageLayout(outputFile, imageLayout); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimal(outputFile, imageLayout);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkClearDepthStencilValue* pDepthStencil
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pDepthStencil:                  "); //HRW
    OutputString(outputFile, "const VkClearDepthStencilValue* = "); //TEQ
    if (pDepthStencil.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pDepthStencil.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pDepthStencil.GetMetaStructPointer(), indent+1,pDepthStencil.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t rangeCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "rangeCount:                     "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, rangeCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImageSubresourceRange* pRanges
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pRanges:                        "); //HRW
    OutputString(outputFile, "const VkImageSubresourceRange* = "); //TEQ
    if (pRanges.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pRanges.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkImageSubresourceRange>(outputFile, indent+1, 1, "VkImageSubresourceRange", pRanges.GetMetaStructPointer(), "pRanges", rangeCount, false, pRanges.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdClearAttachments(
    format::HandleId                            commandBuffer,
    uint32_t                                    attachmentCount,
    const StructPointerDecoder<Decoded_VkClearAttachment>& pAttachments,
    uint32_t                                    rectCount,
    const StructPointerDecoder<Decoded_VkClearRect>& pRects)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdClearAttachments(commandBuffer, attachmentCount, pAttachments, rectCount, pRects)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t attachmentCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "attachmentCount:                "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, attachmentCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkClearAttachment* pAttachments
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAttachments:                   "); //HRW
    OutputString(outputFile, "const VkClearAttachment* = "); //TEQ
    if (pAttachments.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAttachments.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkClearAttachment>(outputFile, indent+1, 1, "VkClearAttachment", pAttachments.GetMetaStructPointer(), "pAttachments", attachmentCount, false, pAttachments.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t rectCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "rectCount:                      "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, rectCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkClearRect* pRects
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pRects:                         "); //HRW
    OutputString(outputFile, "const VkClearRect* = "); //TEQ
    if (pRects.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pRects.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkClearRect>(outputFile, indent+1, 1, "VkClearRect", pRects.GetMetaStructPointer(), "pRects", rectCount, false, pRects.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdResolveImage(
    format::HandleId                            commandBuffer,
    format::HandleId                            srcImage,
    VkImageLayout                               srcImageLayout,
    format::HandleId                            dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    const StructPointerDecoder<Decoded_VkImageResolve>& pRegions)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdResolveImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage srcImage
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "srcImage:                       "); //HRW
    OutputString(outputFile, "VkImage = "); //TEQ
    OutputAddr(outputFile, srcImage); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageLayout srcImageLayout
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "srcImageLayout:                 "); //HRW
    OutputString(outputFile, "VkImageLayout = "); //TEQ
    OutputEnumVkImageLayout(outputFile, srcImageLayout); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimal(outputFile, srcImageLayout);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage dstImage
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "dstImage:                       "); //HRW
    OutputString(outputFile, "VkImage = "); //TEQ
    OutputAddr(outputFile, dstImage); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageLayout dstImageLayout
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "dstImageLayout:                 "); //HRW
    OutputString(outputFile, "VkImageLayout = "); //TEQ
    OutputEnumVkImageLayout(outputFile, dstImageLayout); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimal(outputFile, dstImageLayout);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t regionCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "regionCount:                    "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, regionCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImageResolve* pRegions
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pRegions:                       "); //HRW
    OutputString(outputFile, "const VkImageResolve* = "); //TEQ
    if (pRegions.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pRegions.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkImageResolve>(outputFile, indent+1, 1, "VkImageResolve", pRegions.GetMetaStructPointer(), "pRegions", regionCount, false, pRegions.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdSetEvent(
    format::HandleId                            commandBuffer,
    format::HandleId                            event,
    VkPipelineStageFlags                        stageMask)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdSetEvent(commandBuffer, event, stageMask)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkEvent event
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "event:                          "); //HRW
    OutputString(outputFile, "VkEvent = "); //TEQ
    OutputAddr(outputFile, event); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineStageFlags stageMask
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "stageMask:                      "); //HRW
    OutputString(outputFile, "VkPipelineStageFlags = "); //TEQ
    OutputFlags(outputFile, stageMask, OutputEnumVkPipelineStageFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdResetEvent(
    format::HandleId                            commandBuffer,
    format::HandleId                            event,
    VkPipelineStageFlags                        stageMask)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdResetEvent(commandBuffer, event, stageMask)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkEvent event
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "event:                          "); //HRW
    OutputString(outputFile, "VkEvent = "); //TEQ
    OutputAddr(outputFile, event); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineStageFlags stageMask
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "stageMask:                      "); //HRW
    OutputString(outputFile, "VkPipelineStageFlags = "); //TEQ
    OutputFlags(outputFile, stageMask, OutputEnumVkPipelineStageFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdWaitEvents(
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
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdWaitEvents(commandBuffer, eventCount, pEvents, srcStageMask, dstStageMask, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t eventCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "eventCount:                     "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, eventCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkEvent* pEvents
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pEvents:                        "); //HRW
    OutputString(outputFile, "const VkEvent* = "); //TEQ
    if (pEvents.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pEvents.GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pEvents = {true, false, false, nullptr};
        OutputArray<const VkEvent*>(outputFile, indent, 1, "const VkEvent*", reinterpret_cast<const VkEvent*>(pEvents.GetPointer()), "pEvents", eventCount,  vinfo_pEvents);  // CXC
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineStageFlags srcStageMask
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "srcStageMask:                   "); //HRW
    OutputString(outputFile, "VkPipelineStageFlags = "); //TEQ
    OutputFlags(outputFile, srcStageMask, OutputEnumVkPipelineStageFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineStageFlags dstStageMask
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "dstStageMask:                   "); //HRW
    OutputString(outputFile, "VkPipelineStageFlags = "); //TEQ
    OutputFlags(outputFile, dstStageMask, OutputEnumVkPipelineStageFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t memoryBarrierCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "memoryBarrierCount:             "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, memoryBarrierCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkMemoryBarrier* pMemoryBarriers
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pMemoryBarriers:                "); //HRW
    OutputString(outputFile, "const VkMemoryBarrier* = "); //TEQ
    if (pMemoryBarriers.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pMemoryBarriers.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkMemoryBarrier>(outputFile, indent+1, 1, "VkMemoryBarrier", pMemoryBarriers.GetMetaStructPointer(), "pMemoryBarriers", memoryBarrierCount, false, pMemoryBarriers.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t bufferMemoryBarrierCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "bufferMemoryBarrierCount:       "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, bufferMemoryBarrierCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBufferMemoryBarrier* pBufferMemoryBarriers
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pBufferMemoryBarriers:          "); //HRW
    OutputString(outputFile, "const VkBufferMemoryBarrier* = "); //TEQ
    if (pBufferMemoryBarriers.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pBufferMemoryBarriers.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkBufferMemoryBarrier>(outputFile, indent+1, 1, "VkBufferMemoryBarrier", pBufferMemoryBarriers.GetMetaStructPointer(), "pBufferMemoryBarriers", bufferMemoryBarrierCount, false, pBufferMemoryBarriers.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t imageMemoryBarrierCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "imageMemoryBarrierCount:        "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, imageMemoryBarrierCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImageMemoryBarrier* pImageMemoryBarriers
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pImageMemoryBarriers:           "); //HRW
    OutputString(outputFile, "const VkImageMemoryBarrier* = "); //TEQ
    if (pImageMemoryBarriers.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pImageMemoryBarriers.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkImageMemoryBarrier>(outputFile, indent+1, 1, "VkImageMemoryBarrier", pImageMemoryBarriers.GetMetaStructPointer(), "pImageMemoryBarriers", imageMemoryBarrierCount, false, pImageMemoryBarriers.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdPipelineBarrier(
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
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdPipelineBarrier(commandBuffer, srcStageMask, dstStageMask, dependencyFlags, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineStageFlags srcStageMask
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "srcStageMask:                   "); //HRW
    OutputString(outputFile, "VkPipelineStageFlags = "); //TEQ
    OutputFlags(outputFile, srcStageMask, OutputEnumVkPipelineStageFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineStageFlags dstStageMask
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "dstStageMask:                   "); //HRW
    OutputString(outputFile, "VkPipelineStageFlags = "); //TEQ
    OutputFlags(outputFile, dstStageMask, OutputEnumVkPipelineStageFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDependencyFlags dependencyFlags
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "dependencyFlags:                "); //HRW
    OutputString(outputFile, "VkDependencyFlags = "); //TEQ
    OutputFlags(outputFile, dependencyFlags, OutputEnumVkDependencyFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t memoryBarrierCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "memoryBarrierCount:             "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, memoryBarrierCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkMemoryBarrier* pMemoryBarriers
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pMemoryBarriers:                "); //HRW
    OutputString(outputFile, "const VkMemoryBarrier* = "); //TEQ
    if (pMemoryBarriers.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pMemoryBarriers.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkMemoryBarrier>(outputFile, indent+1, 1, "VkMemoryBarrier", pMemoryBarriers.GetMetaStructPointer(), "pMemoryBarriers", memoryBarrierCount, false, pMemoryBarriers.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t bufferMemoryBarrierCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "bufferMemoryBarrierCount:       "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, bufferMemoryBarrierCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBufferMemoryBarrier* pBufferMemoryBarriers
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pBufferMemoryBarriers:          "); //HRW
    OutputString(outputFile, "const VkBufferMemoryBarrier* = "); //TEQ
    if (pBufferMemoryBarriers.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pBufferMemoryBarriers.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkBufferMemoryBarrier>(outputFile, indent+1, 1, "VkBufferMemoryBarrier", pBufferMemoryBarriers.GetMetaStructPointer(), "pBufferMemoryBarriers", bufferMemoryBarrierCount, false, pBufferMemoryBarriers.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t imageMemoryBarrierCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "imageMemoryBarrierCount:        "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, imageMemoryBarrierCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImageMemoryBarrier* pImageMemoryBarriers
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pImageMemoryBarriers:           "); //HRW
    OutputString(outputFile, "const VkImageMemoryBarrier* = "); //TEQ
    if (pImageMemoryBarriers.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pImageMemoryBarriers.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkImageMemoryBarrier>(outputFile, indent+1, 1, "VkImageMemoryBarrier", pImageMemoryBarriers.GetMetaStructPointer(), "pImageMemoryBarriers", imageMemoryBarrierCount, false, pImageMemoryBarriers.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdBeginQuery(
    format::HandleId                            commandBuffer,
    format::HandleId                            queryPool,
    uint32_t                                    query,
    VkQueryControlFlags                         flags)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdBeginQuery(commandBuffer, queryPool, query, flags)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryPool queryPool
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "queryPool:                      "); //HRW
    OutputString(outputFile, "VkQueryPool = "); //TEQ
    OutputAddr(outputFile, queryPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t query
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "query:                          "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, query); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryControlFlags flags
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "flags:                          "); //HRW
    OutputString(outputFile, "VkQueryControlFlags = "); //TEQ
    OutputFlags(outputFile, flags, OutputEnumVkQueryControlFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdEndQuery(
    format::HandleId                            commandBuffer,
    format::HandleId                            queryPool,
    uint32_t                                    query)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdEndQuery(commandBuffer, queryPool, query)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryPool queryPool
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "queryPool:                      "); //HRW
    OutputString(outputFile, "VkQueryPool = "); //TEQ
    OutputAddr(outputFile, queryPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t query
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "query:                          "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, query); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdResetQueryPool(
    format::HandleId                            commandBuffer,
    format::HandleId                            queryPool,
    uint32_t                                    firstQuery,
    uint32_t                                    queryCount)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdResetQueryPool(commandBuffer, queryPool, firstQuery, queryCount)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryPool queryPool
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "queryPool:                      "); //HRW
    OutputString(outputFile, "VkQueryPool = "); //TEQ
    OutputAddr(outputFile, queryPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstQuery
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "firstQuery:                     "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, firstQuery); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t queryCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "queryCount:                     "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, queryCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdWriteTimestamp(
    format::HandleId                            commandBuffer,
    VkPipelineStageFlagBits                     pipelineStage,
    format::HandleId                            queryPool,
    uint32_t                                    query)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdWriteTimestamp(commandBuffer, pipelineStage, queryPool, query)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineStageFlagBits pipelineStage
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pipelineStage:                  "); //HRW
    OutputString(outputFile, "VkPipelineStageFlagBits = "); //TEQ
    OutputEnumVkPipelineStageFlagBits(outputFile, pipelineStage); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimal(outputFile, pipelineStage);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryPool queryPool
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "queryPool:                      "); //HRW
    OutputString(outputFile, "VkQueryPool = "); //TEQ
    OutputAddr(outputFile, queryPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t query
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "query:                          "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, query); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdCopyQueryPoolResults(
    format::HandleId                            commandBuffer,
    format::HandleId                            queryPool,
    uint32_t                                    firstQuery,
    uint32_t                                    queryCount,
    format::HandleId                            dstBuffer,
    VkDeviceSize                                dstOffset,
    VkDeviceSize                                stride,
    VkQueryResultFlags                          flags)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdCopyQueryPoolResults(commandBuffer, queryPool, firstQuery, queryCount, dstBuffer, dstOffset, stride, flags)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryPool queryPool
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "queryPool:                      "); //HRW
    OutputString(outputFile, "VkQueryPool = "); //TEQ
    OutputAddr(outputFile, queryPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstQuery
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "firstQuery:                     "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, firstQuery); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t queryCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "queryCount:                     "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, queryCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer dstBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "dstBuffer:                      "); //HRW
    OutputString(outputFile, "VkBuffer = "); //TEQ
    OutputAddr(outputFile, dstBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize dstOffset
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "dstOffset:                      "); //HRW
    OutputString(outputFile, "VkDeviceSize = "); //TEQ
    OutputSignedDecimal(outputFile, dstOffset); //EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize stride
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "stride:                         "); //HRW
    OutputString(outputFile, "VkDeviceSize = "); //TEQ
    OutputSignedDecimal(outputFile, stride); //EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryResultFlags flags
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "flags:                          "); //HRW
    OutputString(outputFile, "VkQueryResultFlags = "); //TEQ
    OutputFlags(outputFile, flags, OutputEnumVkQueryResultFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdPushConstants(
    format::HandleId                            commandBuffer,
    format::HandleId                            layout,
    VkShaderStageFlags                          stageFlags,
    uint32_t                                    offset,
    uint32_t                                    size,
    const PointerDecoder<uint8_t>&              pValues)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdPushConstants(commandBuffer, layout, stageFlags, offset, size, pValues)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineLayout layout
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "layout:                         "); //HRW
    OutputString(outputFile, "VkPipelineLayout = "); //TEQ
    OutputAddr(outputFile, layout); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkShaderStageFlags stageFlags
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "stageFlags:                     "); //HRW
    OutputString(outputFile, "VkShaderStageFlags = "); //TEQ
    OutputFlags(outputFile, stageFlags, OutputEnumVkShaderStageFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t offset
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "offset:                         "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, offset); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t size
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "size:                           "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, size); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const void* pValues
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pValues:                        "); //HRW
    OutputString(outputFile, "const void* = "); //TEQ
    if (pValues.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pValues.GetAddress()); // AHW
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdBeginRenderPass(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkRenderPassBeginInfo>& pRenderPassBegin,
    VkSubpassContents                           contents)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdBeginRenderPass(commandBuffer, pRenderPassBegin, contents)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkRenderPassBeginInfo* pRenderPassBegin
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pRenderPassBegin:               "); //HRW
    OutputString(outputFile, "const VkRenderPassBeginInfo* = "); //TEQ
    if (pRenderPassBegin.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pRenderPassBegin.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pRenderPassBegin.GetMetaStructPointer(), indent+1,pRenderPassBegin.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSubpassContents contents
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "contents:                       "); //HRW
    OutputString(outputFile, "VkSubpassContents = "); //TEQ
    OutputEnumVkSubpassContents(outputFile, contents); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimal(outputFile, contents);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdNextSubpass(
    format::HandleId                            commandBuffer,
    VkSubpassContents                           contents)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdNextSubpass(commandBuffer, contents)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSubpassContents contents
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "contents:                       "); //HRW
    OutputString(outputFile, "VkSubpassContents = "); //TEQ
    OutputEnumVkSubpassContents(outputFile, contents); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimal(outputFile, contents);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdEndRenderPass(
    format::HandleId                            commandBuffer)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdEndRenderPass(commandBuffer)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdExecuteCommands(
    format::HandleId                            commandBuffer,
    uint32_t                                    commandBufferCount,
    const HandlePointerDecoder<VkCommandBuffer>& pCommandBuffers)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdExecuteCommands(commandBuffer, commandBufferCount, pCommandBuffers)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t commandBufferCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBufferCount:             "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, commandBufferCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkCommandBuffer* pCommandBuffers
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCommandBuffers:                "); //HRW
    OutputString(outputFile, "const VkCommandBuffer* = "); //TEQ
    if (pCommandBuffers.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCommandBuffers.GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pCommandBuffers = {true, false, false, nullptr};
        OutputArray<const VkCommandBuffer*>(outputFile, indent, 1, "const VkCommandBuffer*", reinterpret_cast<const VkCommandBuffer*>(pCommandBuffers.GetPointer()), "pCommandBuffers", commandBufferCount,  vinfo_pCommandBuffers);  // CXC
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkBindBufferMemory2(
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    bindInfoCount,
    const StructPointerDecoder<Decoded_VkBindBufferMemoryInfo>& pBindInfos)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkBindBufferMemory2(device, bindInfoCount, pBindInfos)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t bindInfoCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "bindInfoCount:                  "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, bindInfoCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBindBufferMemoryInfo* pBindInfos
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pBindInfos:                     "); //HRW
    OutputString(outputFile, "const VkBindBufferMemoryInfo* = "); //TEQ
    if (pBindInfos.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pBindInfos.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkBindBufferMemoryInfo>(outputFile, indent+1, 1, "VkBindBufferMemoryInfo", pBindInfos.GetMetaStructPointer(), "pBindInfos", bindInfoCount, false, pBindInfos.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkBindImageMemory2(
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    bindInfoCount,
    const StructPointerDecoder<Decoded_VkBindImageMemoryInfo>& pBindInfos)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkBindImageMemory2(device, bindInfoCount, pBindInfos)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t bindInfoCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "bindInfoCount:                  "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, bindInfoCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBindImageMemoryInfo* pBindInfos
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pBindInfos:                     "); //HRW
    OutputString(outputFile, "const VkBindImageMemoryInfo* = "); //TEQ
    if (pBindInfos.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pBindInfos.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkBindImageMemoryInfo>(outputFile, indent+1, 1, "VkBindImageMemoryInfo", pBindInfos.GetMetaStructPointer(), "pBindInfos", bindInfoCount, false, pBindInfos.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetDeviceGroupPeerMemoryFeatures(
    format::HandleId                            device,
    uint32_t                                    heapIndex,
    uint32_t                                    localDeviceIndex,
    uint32_t                                    remoteDeviceIndex,
    const PointerDecoder<VkPeerMemoryFeatureFlags>& pPeerMemoryFeatures)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetDeviceGroupPeerMemoryFeatures(device, heapIndex, localDeviceIndex, remoteDeviceIndex, pPeerMemoryFeatures)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t heapIndex
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "heapIndex:                      "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, heapIndex); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t localDeviceIndex
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "localDeviceIndex:               "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, localDeviceIndex); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t remoteDeviceIndex
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "remoteDeviceIndex:              "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, remoteDeviceIndex); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPeerMemoryFeatureFlags* pPeerMemoryFeatures
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pPeerMemoryFeatures:            "); //HRW
    OutputString(outputFile, "VkPeerMemoryFeatureFlags* = "); //TEQ
    if (pPeerMemoryFeatures.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pPeerMemoryFeatures = {false, false, true, OutputEnumVkPeerMemoryFeatureFlagBits};
        OutputScalarValue(outputFile, pPeerMemoryFeatures.GetPointer(), vinfo_pPeerMemoryFeatures); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdSetDeviceMask(
    format::HandleId                            commandBuffer,
    uint32_t                                    deviceMask)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdSetDeviceMask(commandBuffer, deviceMask)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t deviceMask
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "deviceMask:                     "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, deviceMask); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdDispatchBase(
    format::HandleId                            commandBuffer,
    uint32_t                                    baseGroupX,
    uint32_t                                    baseGroupY,
    uint32_t                                    baseGroupZ,
    uint32_t                                    groupCountX,
    uint32_t                                    groupCountY,
    uint32_t                                    groupCountZ)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdDispatchBase(commandBuffer, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t baseGroupX
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "baseGroupX:                     "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, baseGroupX); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t baseGroupY
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "baseGroupY:                     "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, baseGroupY); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t baseGroupZ
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "baseGroupZ:                     "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, baseGroupZ); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t groupCountX
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "groupCountX:                    "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, groupCountX); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t groupCountY
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "groupCountY:                    "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, groupCountY); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t groupCountZ
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "groupCountZ:                    "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, groupCountZ); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkEnumeratePhysicalDeviceGroups(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const PointerDecoder<uint32_t>&             pPhysicalDeviceGroupCount,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceGroupProperties>& pPhysicalDeviceGroupProperties)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkEnumeratePhysicalDeviceGroups(instance, pPhysicalDeviceGroupCount, pPhysicalDeviceGroupProperties)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "instance:                       "); //HRW
    OutputString(outputFile, "VkInstance = "); //TEQ
    OutputAddr(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pPhysicalDeviceGroupCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pPhysicalDeviceGroupCount:      "); //HRW
    OutputString(outputFile, "uint32_t* = "); //TEQ
    if (pPhysicalDeviceGroupCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pPhysicalDeviceGroupCount = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pPhysicalDeviceGroupCount.GetPointer(), vinfo_pPhysicalDeviceGroupCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pPhysicalDeviceGroupProperties: "); //HRW
    OutputString(outputFile, "VkPhysicalDeviceGroupProperties* = "); //TEQ
    if (pPhysicalDeviceGroupProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pPhysicalDeviceGroupProperties.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkPhysicalDeviceGroupProperties>(outputFile, indent+1, 1, "VkPhysicalDeviceGroupProperties", pPhysicalDeviceGroupProperties.GetMetaStructPointer(), "pPhysicalDeviceGroupProperties", *pPhysicalDeviceGroupCount.GetPointer(), false, pPhysicalDeviceGroupProperties.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetImageMemoryRequirements2(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImageMemoryRequirementsInfo2>& pInfo,
    const StructPointerDecoder<Decoded_VkMemoryRequirements2>& pMemoryRequirements)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetImageMemoryRequirements2(device, pInfo, pMemoryRequirements)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImageMemoryRequirementsInfo2* pInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pInfo:                          "); //HRW
    OutputString(outputFile, "const VkImageMemoryRequirementsInfo2* = "); //TEQ
    if (pInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pInfo.GetMetaStructPointer(), indent+1,pInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkMemoryRequirements2* pMemoryRequirements
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pMemoryRequirements:            "); //HRW
    OutputString(outputFile, "VkMemoryRequirements2* = "); //TEQ
    if (pMemoryRequirements.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pMemoryRequirements.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pMemoryRequirements.GetMetaStructPointer(), indent+1,pMemoryRequirements.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetBufferMemoryRequirements2(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkBufferMemoryRequirementsInfo2>& pInfo,
    const StructPointerDecoder<Decoded_VkMemoryRequirements2>& pMemoryRequirements)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetBufferMemoryRequirements2(device, pInfo, pMemoryRequirements)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBufferMemoryRequirementsInfo2* pInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pInfo:                          "); //HRW
    OutputString(outputFile, "const VkBufferMemoryRequirementsInfo2* = "); //TEQ
    if (pInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pInfo.GetMetaStructPointer(), indent+1,pInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkMemoryRequirements2* pMemoryRequirements
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pMemoryRequirements:            "); //HRW
    OutputString(outputFile, "VkMemoryRequirements2* = "); //TEQ
    if (pMemoryRequirements.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pMemoryRequirements.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pMemoryRequirements.GetMetaStructPointer(), indent+1,pMemoryRequirements.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetImageSparseMemoryRequirements2(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImageSparseMemoryRequirementsInfo2>& pInfo,
    const PointerDecoder<uint32_t>&             pSparseMemoryRequirementCount,
    const StructPointerDecoder<Decoded_VkSparseImageMemoryRequirements2>& pSparseMemoryRequirements)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetImageSparseMemoryRequirements2(device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImageSparseMemoryRequirementsInfo2* pInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pInfo:                          "); //HRW
    OutputString(outputFile, "const VkImageSparseMemoryRequirementsInfo2* = "); //TEQ
    if (pInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pInfo.GetMetaStructPointer(), indent+1,pInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pSparseMemoryRequirementCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSparseMemoryRequirementCount:  "); //HRW
    OutputString(outputFile, "uint32_t* = "); //TEQ
    if (pSparseMemoryRequirementCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pSparseMemoryRequirementCount = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pSparseMemoryRequirementCount.GetPointer(), vinfo_pSparseMemoryRequirementCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSparseImageMemoryRequirements2* pSparseMemoryRequirements
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSparseMemoryRequirements:      "); //HRW
    OutputString(outputFile, "VkSparseImageMemoryRequirements2* = "); //TEQ
    if (pSparseMemoryRequirements.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pSparseMemoryRequirements.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkSparseImageMemoryRequirements2>(outputFile, indent+1, 1, "VkSparseImageMemoryRequirements2", pSparseMemoryRequirements.GetMetaStructPointer(), "pSparseMemoryRequirements", *pSparseMemoryRequirementCount.GetPointer(), false, pSparseMemoryRequirements.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceFeatures2(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceFeatures2>& pFeatures)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceFeatures2(physicalDevice, pFeatures)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPhysicalDeviceFeatures2* pFeatures
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pFeatures:                      "); //HRW
    OutputString(outputFile, "VkPhysicalDeviceFeatures2* = "); //TEQ
    if (pFeatures.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pFeatures.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pFeatures.GetMetaStructPointer(), indent+1,pFeatures.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceProperties2(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceProperties2>& pProperties)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceProperties2(physicalDevice, pProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPhysicalDeviceProperties2* pProperties
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pProperties:                    "); //HRW
    OutputString(outputFile, "VkPhysicalDeviceProperties2* = "); //TEQ
    if (pProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pProperties.GetMetaStructPointer(), indent+1,pProperties.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceFormatProperties2(
    format::HandleId                            physicalDevice,
    VkFormat                                    format,
    const StructPointerDecoder<Decoded_VkFormatProperties2>& pFormatProperties)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceFormatProperties2(physicalDevice, format, pFormatProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFormat format
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "format:                         "); //HRW
    OutputString(outputFile, "VkFormat = "); //TEQ
    OutputEnumVkFormat(outputFile, format); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimal(outputFile, format);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFormatProperties2* pFormatProperties
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pFormatProperties:              "); //HRW
    OutputString(outputFile, "VkFormatProperties2* = "); //TEQ
    if (pFormatProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pFormatProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pFormatProperties.GetMetaStructPointer(), indent+1,pFormatProperties.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceImageFormatProperties2(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceImageFormatInfo2>& pImageFormatInfo,
    const StructPointerDecoder<Decoded_VkImageFormatProperties2>& pImageFormatProperties)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceImageFormatProperties2(physicalDevice, pImageFormatInfo, pImageFormatProperties)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPhysicalDeviceImageFormatInfo2* pImageFormatInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pImageFormatInfo:               "); //HRW
    OutputString(outputFile, "const VkPhysicalDeviceImageFormatInfo2* = "); //TEQ
    if (pImageFormatInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pImageFormatInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pImageFormatInfo.GetMetaStructPointer(), indent+1,pImageFormatInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageFormatProperties2* pImageFormatProperties
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pImageFormatProperties:         "); //HRW
    OutputString(outputFile, "VkImageFormatProperties2* = "); //TEQ
    if (pImageFormatProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pImageFormatProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pImageFormatProperties.GetMetaStructPointer(), indent+1,pImageFormatProperties.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceQueueFamilyProperties2(
    format::HandleId                            physicalDevice,
    const PointerDecoder<uint32_t>&             pQueueFamilyPropertyCount,
    const StructPointerDecoder<Decoded_VkQueueFamilyProperties2>& pQueueFamilyProperties)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceQueueFamilyProperties2(physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pQueueFamilyPropertyCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pQueueFamilyPropertyCount:      "); //HRW
    OutputString(outputFile, "uint32_t* = "); //TEQ
    if (pQueueFamilyPropertyCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pQueueFamilyPropertyCount = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pQueueFamilyPropertyCount.GetPointer(), vinfo_pQueueFamilyPropertyCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueueFamilyProperties2* pQueueFamilyProperties
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pQueueFamilyProperties:         "); //HRW
    OutputString(outputFile, "VkQueueFamilyProperties2* = "); //TEQ
    if (pQueueFamilyProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pQueueFamilyProperties.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkQueueFamilyProperties2>(outputFile, indent+1, 1, "VkQueueFamilyProperties2", pQueueFamilyProperties.GetMetaStructPointer(), "pQueueFamilyProperties", *pQueueFamilyPropertyCount.GetPointer(), false, pQueueFamilyProperties.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceMemoryProperties2(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceMemoryProperties2>& pMemoryProperties)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceMemoryProperties2(physicalDevice, pMemoryProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPhysicalDeviceMemoryProperties2* pMemoryProperties
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pMemoryProperties:              "); //HRW
    OutputString(outputFile, "VkPhysicalDeviceMemoryProperties2* = "); //TEQ
    if (pMemoryProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pMemoryProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pMemoryProperties.GetMetaStructPointer(), indent+1,pMemoryProperties.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSparseImageFormatProperties2(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceSparseImageFormatInfo2>& pFormatInfo,
    const PointerDecoder<uint32_t>&             pPropertyCount,
    const StructPointerDecoder<Decoded_VkSparseImageFormatProperties2>& pProperties)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceSparseImageFormatProperties2(physicalDevice, pFormatInfo, pPropertyCount, pProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pFormatInfo:                    "); //HRW
    OutputString(outputFile, "const VkPhysicalDeviceSparseImageFormatInfo2* = "); //TEQ
    if (pFormatInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pFormatInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pFormatInfo.GetMetaStructPointer(), indent+1,pFormatInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pPropertyCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pPropertyCount:                 "); //HRW
    OutputString(outputFile, "uint32_t* = "); //TEQ
    if (pPropertyCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pPropertyCount = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pPropertyCount.GetPointer(), vinfo_pPropertyCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSparseImageFormatProperties2* pProperties
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pProperties:                    "); //HRW
    OutputString(outputFile, "VkSparseImageFormatProperties2* = "); //TEQ
    if (pProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pProperties.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkSparseImageFormatProperties2>(outputFile, indent+1, 1, "VkSparseImageFormatProperties2", pProperties.GetMetaStructPointer(), "pProperties", *pPropertyCount.GetPointer(), false, pProperties.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkTrimCommandPool(
    format::HandleId                            device,
    format::HandleId                            commandPool,
    VkCommandPoolTrimFlags                      flags)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkTrimCommandPool(device, commandPool, flags)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkCommandPool commandPool
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandPool:                    "); //HRW
    OutputString(outputFile, "VkCommandPool = "); //TEQ
    OutputAddr(outputFile, commandPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkCommandPoolTrimFlags flags
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "flags:                          "); //HRW
    OutputString(outputFile, "VkCommandPoolTrimFlags = "); //TEQ
    OutputUnsignedDecimal(outputFile, flags); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetDeviceQueue2(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDeviceQueueInfo2>& pQueueInfo,
    const HandlePointerDecoder<VkQueue>&        pQueue)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetDeviceQueue2(device, pQueueInfo, pQueue)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDeviceQueueInfo2* pQueueInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pQueueInfo:                     "); //HRW
    OutputString(outputFile, "const VkDeviceQueueInfo2* = "); //TEQ
    if (pQueueInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pQueueInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pQueueInfo.GetMetaStructPointer(), indent+1,pQueueInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueue* pQueue
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pQueue:                         "); //HRW
    OutputString(outputFile, "VkQueue* = "); //TEQ
    if (pQueue.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pQueue = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pQueue.GetPointer(), vinfo_pQueue); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateSamplerYcbcrConversion(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSamplerYcbcrConversionCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSamplerYcbcrConversion>& pYcbcrConversion)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreateSamplerYcbcrConversion(device, pCreateInfo, pAllocator, pYcbcrConversion)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSamplerYcbcrConversionCreateInfo* pCreateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); //HRW
    OutputString(outputFile, "const VkSamplerYcbcrConversionCreateInfo* = "); //TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSamplerYcbcrConversion* pYcbcrConversion
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pYcbcrConversion:               "); //HRW
    OutputString(outputFile, "VkSamplerYcbcrConversion* = "); //TEQ
    if (pYcbcrConversion.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pYcbcrConversion = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pYcbcrConversion.GetPointer(), vinfo_pYcbcrConversion); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroySamplerYcbcrConversion(
    format::HandleId                            device,
    format::HandleId                            ycbcrConversion,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkDestroySamplerYcbcrConversion(device, ycbcrConversion, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSamplerYcbcrConversion ycbcrConversion
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "ycbcrConversion:                "); //HRW
    OutputString(outputFile, "VkSamplerYcbcrConversion = "); //TEQ
    OutputAddr(outputFile, ycbcrConversion); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateDescriptorUpdateTemplate(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDescriptorUpdateTemplateCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkDescriptorUpdateTemplate>& pDescriptorUpdateTemplate)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreateDescriptorUpdateTemplate(device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); //HRW
    OutputString(outputFile, "const VkDescriptorUpdateTemplateCreateInfo* = "); //TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDescriptorUpdateTemplate* pDescriptorUpdateTemplate
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pDescriptorUpdateTemplate:      "); //HRW
    OutputString(outputFile, "VkDescriptorUpdateTemplate* = "); //TEQ
    if (pDescriptorUpdateTemplate.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pDescriptorUpdateTemplate = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pDescriptorUpdateTemplate.GetPointer(), vinfo_pDescriptorUpdateTemplate); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyDescriptorUpdateTemplate(
    format::HandleId                            device,
    format::HandleId                            descriptorUpdateTemplate,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkDestroyDescriptorUpdateTemplate(device, descriptorUpdateTemplate, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDescriptorUpdateTemplate descriptorUpdateTemplate
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "descriptorUpdateTemplate:       "); //HRW
    OutputString(outputFile, "VkDescriptorUpdateTemplate = "); //TEQ
    OutputAddr(outputFile, descriptorUpdateTemplate); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceExternalBufferProperties(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceExternalBufferInfo>& pExternalBufferInfo,
    const StructPointerDecoder<Decoded_VkExternalBufferProperties>& pExternalBufferProperties)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceExternalBufferProperties(physicalDevice, pExternalBufferInfo, pExternalBufferProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPhysicalDeviceExternalBufferInfo* pExternalBufferInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pExternalBufferInfo:            "); //HRW
    OutputString(outputFile, "const VkPhysicalDeviceExternalBufferInfo* = "); //TEQ
    if (pExternalBufferInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pExternalBufferInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pExternalBufferInfo.GetMetaStructPointer(), indent+1,pExternalBufferInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkExternalBufferProperties* pExternalBufferProperties
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pExternalBufferProperties:      "); //HRW
    OutputString(outputFile, "VkExternalBufferProperties* = "); //TEQ
    if (pExternalBufferProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pExternalBufferProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pExternalBufferProperties.GetMetaStructPointer(), indent+1,pExternalBufferProperties.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceExternalFenceProperties(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceExternalFenceInfo>& pExternalFenceInfo,
    const StructPointerDecoder<Decoded_VkExternalFenceProperties>& pExternalFenceProperties)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceExternalFenceProperties(physicalDevice, pExternalFenceInfo, pExternalFenceProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPhysicalDeviceExternalFenceInfo* pExternalFenceInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pExternalFenceInfo:             "); //HRW
    OutputString(outputFile, "const VkPhysicalDeviceExternalFenceInfo* = "); //TEQ
    if (pExternalFenceInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pExternalFenceInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pExternalFenceInfo.GetMetaStructPointer(), indent+1,pExternalFenceInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkExternalFenceProperties* pExternalFenceProperties
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pExternalFenceProperties:       "); //HRW
    OutputString(outputFile, "VkExternalFenceProperties* = "); //TEQ
    if (pExternalFenceProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pExternalFenceProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pExternalFenceProperties.GetMetaStructPointer(), indent+1,pExternalFenceProperties.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceExternalSemaphoreProperties(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceExternalSemaphoreInfo>& pExternalSemaphoreInfo,
    const StructPointerDecoder<Decoded_VkExternalSemaphoreProperties>& pExternalSemaphoreProperties)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceExternalSemaphoreProperties(physicalDevice, pExternalSemaphoreInfo, pExternalSemaphoreProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pExternalSemaphoreInfo:         "); //HRW
    OutputString(outputFile, "const VkPhysicalDeviceExternalSemaphoreInfo* = "); //TEQ
    if (pExternalSemaphoreInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pExternalSemaphoreInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pExternalSemaphoreInfo.GetMetaStructPointer(), indent+1,pExternalSemaphoreInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkExternalSemaphoreProperties* pExternalSemaphoreProperties
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pExternalSemaphoreProperties:   "); //HRW
    OutputString(outputFile, "VkExternalSemaphoreProperties* = "); //TEQ
    if (pExternalSemaphoreProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pExternalSemaphoreProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pExternalSemaphoreProperties.GetMetaStructPointer(), indent+1,pExternalSemaphoreProperties.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetDescriptorSetLayoutSupport(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDescriptorSetLayoutCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkDescriptorSetLayoutSupport>& pSupport)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetDescriptorSetLayoutSupport(device, pCreateInfo, pSupport)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDescriptorSetLayoutCreateInfo* pCreateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); //HRW
    OutputString(outputFile, "const VkDescriptorSetLayoutCreateInfo* = "); //TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDescriptorSetLayoutSupport* pSupport
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSupport:                       "); //HRW
    OutputString(outputFile, "VkDescriptorSetLayoutSupport* = "); //TEQ
    if (pSupport.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pSupport.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pSupport.GetMetaStructPointer(), indent+1,pSupport.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkDestroySurfaceKHR(
    format::HandleId                            instance,
    format::HandleId                            surface,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkDestroySurfaceKHR(instance, surface, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkInstance instance
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "instance:                       "); //HRW
    OutputString(outputFile, "VkInstance = "); //TEQ
    OutputAddr(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR surface
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "surface:                        "); //HRW
    OutputString(outputFile, "VkSurfaceKHR = "); //TEQ
    OutputAddr(outputFile, surface); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSurfaceSupportKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    format::HandleId                            surface,
    const PointerDecoder<VkBool32>&             pSupported)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceSurfaceSupportKHR(physicalDevice, queueFamilyIndex, surface, pSupported)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t queueFamilyIndex
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "queueFamilyIndex:               "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, queueFamilyIndex); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR surface
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "surface:                        "); //HRW
    OutputString(outputFile, "VkSurfaceKHR = "); //TEQ
    OutputAddr(outputFile, surface); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBool32* pSupported
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSupported:                     "); //HRW
    OutputString(outputFile, "VkBool32* = "); //TEQ
    if (pSupported.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pSupported = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pSupported.GetPointer(), vinfo_pSupported); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSurfaceCapabilitiesKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            surface,
    const StructPointerDecoder<Decoded_VkSurfaceCapabilitiesKHR>& pSurfaceCapabilities)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceSurfaceCapabilitiesKHR(physicalDevice, surface, pSurfaceCapabilities)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR surface
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "surface:                        "); //HRW
    OutputString(outputFile, "VkSurfaceKHR = "); //TEQ
    OutputAddr(outputFile, surface); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceCapabilitiesKHR* pSurfaceCapabilities
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSurfaceCapabilities:           "); //HRW
    OutputString(outputFile, "VkSurfaceCapabilitiesKHR* = "); //TEQ
    if (pSurfaceCapabilities.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pSurfaceCapabilities.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pSurfaceCapabilities.GetMetaStructPointer(), indent+1,pSurfaceCapabilities.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSurfaceFormatsKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            surface,
    const PointerDecoder<uint32_t>&             pSurfaceFormatCount,
    const StructPointerDecoder<Decoded_VkSurfaceFormatKHR>& pSurfaceFormats)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceSurfaceFormatsKHR(physicalDevice, surface, pSurfaceFormatCount, pSurfaceFormats)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR surface
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "surface:                        "); //HRW
    OutputString(outputFile, "VkSurfaceKHR = "); //TEQ
    OutputAddr(outputFile, surface); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pSurfaceFormatCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSurfaceFormatCount:            "); //HRW
    OutputString(outputFile, "uint32_t* = "); //TEQ
    if (pSurfaceFormatCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pSurfaceFormatCount = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pSurfaceFormatCount.GetPointer(), vinfo_pSurfaceFormatCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceFormatKHR* pSurfaceFormats
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSurfaceFormats:                "); //HRW
    OutputString(outputFile, "VkSurfaceFormatKHR* = "); //TEQ
    if (pSurfaceFormats.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pSurfaceFormats.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkSurfaceFormatKHR>(outputFile, indent+1, 1, "VkSurfaceFormatKHR", pSurfaceFormats.GetMetaStructPointer(), "pSurfaceFormats", *pSurfaceFormatCount.GetPointer(), false, pSurfaceFormats.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSurfacePresentModesKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            surface,
    const PointerDecoder<uint32_t>&             pPresentModeCount,
    const PointerDecoder<VkPresentModeKHR>&     pPresentModes)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceSurfacePresentModesKHR(physicalDevice, surface, pPresentModeCount, pPresentModes)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR surface
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "surface:                        "); //HRW
    OutputString(outputFile, "VkSurfaceKHR = "); //TEQ
    OutputAddr(outputFile, surface); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pPresentModeCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pPresentModeCount:              "); //HRW
    OutputString(outputFile, "uint32_t* = "); //TEQ
    if (pPresentModeCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pPresentModeCount = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pPresentModeCount.GetPointer(), vinfo_pPresentModeCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPresentModeKHR* pPresentModes
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pPresentModes:                  "); //HRW
    OutputString(outputFile, "VkPresentModeKHR* = "); //TEQ
    if (pPresentModes.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pPresentModes.GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pPresentModes = {false, true, false, OutputEnumVkPresentModeKHR};
        OutputArray<VkPresentModeKHR*>(outputFile, indent, 1, "VkPresentModeKHR*", reinterpret_cast<VkPresentModeKHR*>(pPresentModes.GetPointer()), "pPresentModes", *pPresentModeCount.GetPointer(),  vinfo_pPresentModes);  // CXC
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateSwapchainKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSwapchainCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSwapchainKHR>& pSwapchain)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreateSwapchainKHR(device, pCreateInfo, pAllocator, pSwapchain)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSwapchainCreateInfoKHR* pCreateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); //HRW
    OutputString(outputFile, "const VkSwapchainCreateInfoKHR* = "); //TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSwapchainKHR* pSwapchain
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSwapchain:                     "); //HRW
    OutputString(outputFile, "VkSwapchainKHR* = "); //TEQ
    if (pSwapchain.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pSwapchain = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pSwapchain.GetPointer(), vinfo_pSwapchain); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroySwapchainKHR(
    format::HandleId                            device,
    format::HandleId                            swapchain,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkDestroySwapchainKHR(device, swapchain, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSwapchainKHR swapchain
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "swapchain:                      "); //HRW
    OutputString(outputFile, "VkSwapchainKHR = "); //TEQ
    OutputAddr(outputFile, swapchain); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetSwapchainImagesKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain,
    const PointerDecoder<uint32_t>&             pSwapchainImageCount,
    const HandlePointerDecoder<VkImage>&        pSwapchainImages)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetSwapchainImagesKHR(device, swapchain, pSwapchainImageCount, pSwapchainImages)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSwapchainKHR swapchain
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "swapchain:                      "); //HRW
    OutputString(outputFile, "VkSwapchainKHR = "); //TEQ
    OutputAddr(outputFile, swapchain); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pSwapchainImageCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSwapchainImageCount:           "); //HRW
    OutputString(outputFile, "uint32_t* = "); //TEQ
    if (pSwapchainImageCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pSwapchainImageCount = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pSwapchainImageCount.GetPointer(), vinfo_pSwapchainImageCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage* pSwapchainImages
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSwapchainImages:               "); //HRW
    OutputString(outputFile, "VkImage* = "); //TEQ
    if (pSwapchainImages.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pSwapchainImages.GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pSwapchainImages = {true, false, false, nullptr};
        OutputArray<VkImage*>(outputFile, indent, 1, "VkImage*", reinterpret_cast<VkImage*>(pSwapchainImages.GetPointer()), "pSwapchainImages", *pSwapchainImageCount.GetPointer(),  vinfo_pSwapchainImages);  // CXC
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkAcquireNextImageKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain,
    uint64_t                                    timeout,
    format::HandleId                            semaphore,
    format::HandleId                            fence,
    const PointerDecoder<uint32_t>&             pImageIndex)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkAcquireNextImageKHR(device, swapchain, timeout, semaphore, fence, pImageIndex)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSwapchainKHR swapchain
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "swapchain:                      "); //HRW
    OutputString(outputFile, "VkSwapchainKHR = "); //TEQ
    OutputAddr(outputFile, swapchain); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint64_t timeout
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "timeout:                        "); //HRW
    OutputString(outputFile, "uint64_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, timeout); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSemaphore semaphore
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "semaphore:                      "); //HRW
    OutputString(outputFile, "VkSemaphore = "); //TEQ
    OutputAddr(outputFile, semaphore); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFence fence
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "fence:                          "); //HRW
    OutputString(outputFile, "VkFence = "); //TEQ
    OutputAddr(outputFile, fence); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pImageIndex
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pImageIndex:                    "); //HRW
    OutputString(outputFile, "uint32_t* = "); //TEQ
    if (pImageIndex.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pImageIndex = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pImageIndex.GetPointer(), vinfo_pImageIndex); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkQueuePresentKHR(
    VkResult                                    returnValue,
    format::HandleId                            queue,
    const StructPointerDecoder<Decoded_VkPresentInfoKHR>& pPresentInfo)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkQueuePresentKHR(queue, pPresentInfo)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkQueue queue
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "queue:                          "); //HRW
    OutputString(outputFile, "VkQueue = "); //TEQ
    OutputAddr(outputFile, queue); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPresentInfoKHR* pPresentInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pPresentInfo:                   "); //HRW
    OutputString(outputFile, "const VkPresentInfoKHR* = "); //TEQ
    if (pPresentInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pPresentInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pPresentInfo.GetMetaStructPointer(), indent+1,pPresentInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetDeviceGroupPresentCapabilitiesKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDeviceGroupPresentCapabilitiesKHR>& pDeviceGroupPresentCapabilities)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetDeviceGroupPresentCapabilitiesKHR(device, pDeviceGroupPresentCapabilities)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceGroupPresentCapabilitiesKHR* pDeviceGroupPresentCapabilities
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pDeviceGroupPresentCapabilities: "); //HRW
    OutputString(outputFile, "VkDeviceGroupPresentCapabilitiesKHR* = "); //TEQ
    if (pDeviceGroupPresentCapabilities.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pDeviceGroupPresentCapabilities.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pDeviceGroupPresentCapabilities.GetMetaStructPointer(), indent+1,pDeviceGroupPresentCapabilities.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetDeviceGroupSurfacePresentModesKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            surface,
    const PointerDecoder<VkDeviceGroupPresentModeFlagsKHR>& pModes)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetDeviceGroupSurfacePresentModesKHR(device, surface, pModes)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR surface
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "surface:                        "); //HRW
    OutputString(outputFile, "VkSurfaceKHR = "); //TEQ
    OutputAddr(outputFile, surface); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceGroupPresentModeFlagsKHR* pModes
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pModes:                         "); //HRW
    OutputString(outputFile, "VkDeviceGroupPresentModeFlagsKHR* = "); //TEQ
    if (pModes.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pModes = {false, false, true, OutputEnumVkDeviceGroupPresentModeFlagBitsKHR};
        OutputScalarValue(outputFile, pModes.GetPointer(), vinfo_pModes); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDevicePresentRectanglesKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            surface,
    const PointerDecoder<uint32_t>&             pRectCount,
    const StructPointerDecoder<Decoded_VkRect2D>& pRects)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDevicePresentRectanglesKHR(physicalDevice, surface, pRectCount, pRects)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR surface
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "surface:                        "); //HRW
    OutputString(outputFile, "VkSurfaceKHR = "); //TEQ
    OutputAddr(outputFile, surface); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pRectCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pRectCount:                     "); //HRW
    OutputString(outputFile, "uint32_t* = "); //TEQ
    if (pRectCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pRectCount = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pRectCount.GetPointer(), vinfo_pRectCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkRect2D* pRects
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pRects:                         "); //HRW
    OutputString(outputFile, "VkRect2D* = "); //TEQ
    if (pRects.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pRects.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkRect2D>(outputFile, indent+1, 1, "VkRect2D", pRects.GetMetaStructPointer(), "pRects", *pRectCount.GetPointer(), false, pRects.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkAcquireNextImage2KHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkAcquireNextImageInfoKHR>& pAcquireInfo,
    const PointerDecoder<uint32_t>&             pImageIndex)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkAcquireNextImage2KHR(device, pAcquireInfo, pImageIndex)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAcquireNextImageInfoKHR* pAcquireInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAcquireInfo:                   "); //HRW
    OutputString(outputFile, "const VkAcquireNextImageInfoKHR* = "); //TEQ
    if (pAcquireInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAcquireInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAcquireInfo.GetMetaStructPointer(), indent+1,pAcquireInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pImageIndex
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pImageIndex:                    "); //HRW
    OutputString(outputFile, "uint32_t* = "); //TEQ
    if (pImageIndex.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pImageIndex = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pImageIndex.GetPointer(), vinfo_pImageIndex); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceDisplayPropertiesKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const PointerDecoder<uint32_t>&             pPropertyCount,
    const StructPointerDecoder<Decoded_VkDisplayPropertiesKHR>& pProperties)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceDisplayPropertiesKHR(physicalDevice, pPropertyCount, pProperties)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pPropertyCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pPropertyCount:                 "); //HRW
    OutputString(outputFile, "uint32_t* = "); //TEQ
    if (pPropertyCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pPropertyCount = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pPropertyCount.GetPointer(), vinfo_pPropertyCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayPropertiesKHR* pProperties
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pProperties:                    "); //HRW
    OutputString(outputFile, "VkDisplayPropertiesKHR* = "); //TEQ
    if (pProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pProperties.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkDisplayPropertiesKHR>(outputFile, indent+1, 1, "VkDisplayPropertiesKHR", pProperties.GetMetaStructPointer(), "pProperties", *pPropertyCount.GetPointer(), false, pProperties.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceDisplayPlanePropertiesKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const PointerDecoder<uint32_t>&             pPropertyCount,
    const StructPointerDecoder<Decoded_VkDisplayPlanePropertiesKHR>& pProperties)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceDisplayPlanePropertiesKHR(physicalDevice, pPropertyCount, pProperties)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pPropertyCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pPropertyCount:                 "); //HRW
    OutputString(outputFile, "uint32_t* = "); //TEQ
    if (pPropertyCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pPropertyCount = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pPropertyCount.GetPointer(), vinfo_pPropertyCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayPlanePropertiesKHR* pProperties
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pProperties:                    "); //HRW
    OutputString(outputFile, "VkDisplayPlanePropertiesKHR* = "); //TEQ
    if (pProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pProperties.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkDisplayPlanePropertiesKHR>(outputFile, indent+1, 1, "VkDisplayPlanePropertiesKHR", pProperties.GetMetaStructPointer(), "pProperties", *pPropertyCount.GetPointer(), false, pProperties.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetDisplayPlaneSupportedDisplaysKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    uint32_t                                    planeIndex,
    const PointerDecoder<uint32_t>&             pDisplayCount,
    const HandlePointerDecoder<VkDisplayKHR>&   pDisplays)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetDisplayPlaneSupportedDisplaysKHR(physicalDevice, planeIndex, pDisplayCount, pDisplays)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t planeIndex
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "planeIndex:                     "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, planeIndex); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pDisplayCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pDisplayCount:                  "); //HRW
    OutputString(outputFile, "uint32_t* = "); //TEQ
    if (pDisplayCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pDisplayCount = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pDisplayCount.GetPointer(), vinfo_pDisplayCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayKHR* pDisplays
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pDisplays:                      "); //HRW
    OutputString(outputFile, "VkDisplayKHR* = "); //TEQ
    if (pDisplays.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pDisplays.GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pDisplays = {true, false, false, nullptr};
        OutputArray<VkDisplayKHR*>(outputFile, indent, 1, "VkDisplayKHR*", reinterpret_cast<VkDisplayKHR*>(pDisplays.GetPointer()), "pDisplays", *pDisplayCount.GetPointer(),  vinfo_pDisplays);  // CXC
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetDisplayModePropertiesKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            display,
    const PointerDecoder<uint32_t>&             pPropertyCount,
    const StructPointerDecoder<Decoded_VkDisplayModePropertiesKHR>& pProperties)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetDisplayModePropertiesKHR(physicalDevice, display, pPropertyCount, pProperties)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayKHR display
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "display:                        "); //HRW
    OutputString(outputFile, "VkDisplayKHR = "); //TEQ
    OutputAddr(outputFile, display); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pPropertyCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pPropertyCount:                 "); //HRW
    OutputString(outputFile, "uint32_t* = "); //TEQ
    if (pPropertyCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pPropertyCount = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pPropertyCount.GetPointer(), vinfo_pPropertyCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayModePropertiesKHR* pProperties
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pProperties:                    "); //HRW
    OutputString(outputFile, "VkDisplayModePropertiesKHR* = "); //TEQ
    if (pProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pProperties.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkDisplayModePropertiesKHR>(outputFile, indent+1, 1, "VkDisplayModePropertiesKHR", pProperties.GetMetaStructPointer(), "pProperties", *pPropertyCount.GetPointer(), false, pProperties.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateDisplayModeKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            display,
    const StructPointerDecoder<Decoded_VkDisplayModeCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkDisplayModeKHR>& pMode)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreateDisplayModeKHR(physicalDevice, display, pCreateInfo, pAllocator, pMode)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayKHR display
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "display:                        "); //HRW
    OutputString(outputFile, "VkDisplayKHR = "); //TEQ
    OutputAddr(outputFile, display); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDisplayModeCreateInfoKHR* pCreateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); //HRW
    OutputString(outputFile, "const VkDisplayModeCreateInfoKHR* = "); //TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayModeKHR* pMode
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pMode:                          "); //HRW
    OutputString(outputFile, "VkDisplayModeKHR* = "); //TEQ
    if (pMode.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pMode = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pMode.GetPointer(), vinfo_pMode); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetDisplayPlaneCapabilitiesKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            mode,
    uint32_t                                    planeIndex,
    const StructPointerDecoder<Decoded_VkDisplayPlaneCapabilitiesKHR>& pCapabilities)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetDisplayPlaneCapabilitiesKHR(physicalDevice, mode, planeIndex, pCapabilities)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayModeKHR mode
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "mode:                           "); //HRW
    OutputString(outputFile, "VkDisplayModeKHR = "); //TEQ
    OutputAddr(outputFile, mode); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t planeIndex
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "planeIndex:                     "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, planeIndex); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayPlaneCapabilitiesKHR* pCapabilities
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCapabilities:                  "); //HRW
    OutputString(outputFile, "VkDisplayPlaneCapabilitiesKHR* = "); //TEQ
    if (pCapabilities.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCapabilities.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCapabilities.GetMetaStructPointer(), indent+1,pCapabilities.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateDisplayPlaneSurfaceKHR(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkDisplaySurfaceCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreateDisplayPlaneSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "instance:                       "); //HRW
    OutputString(outputFile, "VkInstance = "); //TEQ
    OutputAddr(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDisplaySurfaceCreateInfoKHR* pCreateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); //HRW
    OutputString(outputFile, "const VkDisplaySurfaceCreateInfoKHR* = "); //TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR* pSurface
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSurface:                       "); //HRW
    OutputString(outputFile, "VkSurfaceKHR* = "); //TEQ
    if (pSurface.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pSurface = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pSurface.GetPointer(), vinfo_pSurface); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateSharedSwapchainsKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    swapchainCount,
    const StructPointerDecoder<Decoded_VkSwapchainCreateInfoKHR>& pCreateInfos,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSwapchainKHR>& pSwapchains)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreateSharedSwapchainsKHR(device, swapchainCount, pCreateInfos, pAllocator, pSwapchains)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t swapchainCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "swapchainCount:                 "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, swapchainCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSwapchainCreateInfoKHR* pCreateInfos
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfos:                   "); //HRW
    OutputString(outputFile, "const VkSwapchainCreateInfoKHR* = "); //TEQ
    if (pCreateInfos.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfos.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkSwapchainCreateInfoKHR>(outputFile, indent+1, 1, "VkSwapchainCreateInfoKHR", pCreateInfos.GetMetaStructPointer(), "pCreateInfos", swapchainCount, false, pCreateInfos.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSwapchainKHR* pSwapchains
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSwapchains:                    "); //HRW
    OutputString(outputFile, "VkSwapchainKHR* = "); //TEQ
    if (pSwapchains.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pSwapchains.GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pSwapchains = {true, false, false, nullptr};
        OutputArray<VkSwapchainKHR*>(outputFile, indent, 1, "VkSwapchainKHR*", reinterpret_cast<VkSwapchainKHR*>(pSwapchains.GetPointer()), "pSwapchains", swapchainCount,  vinfo_pSwapchains);  // CXC
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateXlibSurfaceKHR(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkXlibSurfaceCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreateXlibSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "instance:                       "); //HRW
    OutputString(outputFile, "VkInstance = "); //TEQ
    OutputAddr(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkXlibSurfaceCreateInfoKHR* pCreateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); //HRW
    OutputString(outputFile, "const VkXlibSurfaceCreateInfoKHR* = "); //TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR* pSurface
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSurface:                       "); //HRW
    OutputString(outputFile, "VkSurfaceKHR* = "); //TEQ
    if (pSurface.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pSurface = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pSurface.GetPointer(), vinfo_pSurface); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceXlibPresentationSupportKHR(
    VkBool32                                    returnValue,
    format::HandleId                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    uint64_t                                    dpy,
    size_t                                      visualID)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceXlibPresentationSupportKHR(physicalDevice, queueFamilyIndex, dpy, visualID)");
    fprintf(outputFile, " returns %u:\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t queueFamilyIndex
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "queueFamilyIndex:               "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, queueFamilyIndex); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: void* dpy
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "dpy:                            "); //HRW
    OutputString(outputFile, "void* = "); //TEQ
    OutputAddr(outputFile, dpy); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: size_t visualID
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "visualID:                       "); //HRW
    OutputString(outputFile, "size_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, visualID); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateXcbSurfaceKHR(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkXcbSurfaceCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreateXcbSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "instance:                       "); //HRW
    OutputString(outputFile, "VkInstance = "); //TEQ
    OutputAddr(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkXcbSurfaceCreateInfoKHR* pCreateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); //HRW
    OutputString(outputFile, "const VkXcbSurfaceCreateInfoKHR* = "); //TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR* pSurface
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSurface:                       "); //HRW
    OutputString(outputFile, "VkSurfaceKHR* = "); //TEQ
    if (pSurface.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pSurface = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pSurface.GetPointer(), vinfo_pSurface); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceXcbPresentationSupportKHR(
    VkBool32                                    returnValue,
    format::HandleId                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    uint64_t                                    connection,
    uint32_t                                    visual_id)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceXcbPresentationSupportKHR(physicalDevice, queueFamilyIndex, connection, visual_id)");
    fprintf(outputFile, " returns %u:\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t queueFamilyIndex
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "queueFamilyIndex:               "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, queueFamilyIndex); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: void* connection
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "connection:                     "); //HRW
    OutputString(outputFile, "void* = "); //TEQ
    if ( !connection) // WWW
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, connection); // PWR
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t visual_id
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "visual_id:                      "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, visual_id); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateWaylandSurfaceKHR(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkWaylandSurfaceCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreateWaylandSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "instance:                       "); //HRW
    OutputString(outputFile, "VkInstance = "); //TEQ
    OutputAddr(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkWaylandSurfaceCreateInfoKHR* pCreateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); //HRW
    OutputString(outputFile, "const VkWaylandSurfaceCreateInfoKHR* = "); //TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR* pSurface
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSurface:                       "); //HRW
    OutputString(outputFile, "VkSurfaceKHR* = "); //TEQ
    if (pSurface.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pSurface = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pSurface.GetPointer(), vinfo_pSurface); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceWaylandPresentationSupportKHR(
    VkBool32                                    returnValue,
    format::HandleId                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    uint64_t                                    display)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceWaylandPresentationSupportKHR(physicalDevice, queueFamilyIndex, display)");
    fprintf(outputFile, " returns %u:\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t queueFamilyIndex
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "queueFamilyIndex:               "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, queueFamilyIndex); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: struct void* display
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "display:                        "); //HRW
    OutputString(outputFile, "struct void* = "); //TEQ
    if ( !display) // WWW
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, display); // PWR
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateAndroidSurfaceKHR(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkAndroidSurfaceCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreateAndroidSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "instance:                       "); //HRW
    OutputString(outputFile, "VkInstance = "); //TEQ
    OutputAddr(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAndroidSurfaceCreateInfoKHR* pCreateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); //HRW
    OutputString(outputFile, "const VkAndroidSurfaceCreateInfoKHR* = "); //TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR* pSurface
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSurface:                       "); //HRW
    OutputString(outputFile, "VkSurfaceKHR* = "); //TEQ
    if (pSurface.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pSurface = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pSurface.GetPointer(), vinfo_pSurface); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateWin32SurfaceKHR(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkWin32SurfaceCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreateWin32SurfaceKHR(instance, pCreateInfo, pAllocator, pSurface)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "instance:                       "); //HRW
    OutputString(outputFile, "VkInstance = "); //TEQ
    OutputAddr(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkWin32SurfaceCreateInfoKHR* pCreateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); //HRW
    OutputString(outputFile, "const VkWin32SurfaceCreateInfoKHR* = "); //TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR* pSurface
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSurface:                       "); //HRW
    OutputString(outputFile, "VkSurfaceKHR* = "); //TEQ
    if (pSurface.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pSurface = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pSurface.GetPointer(), vinfo_pSurface); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceWin32PresentationSupportKHR(
    VkBool32                                    returnValue,
    format::HandleId                            physicalDevice,
    uint32_t                                    queueFamilyIndex)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceWin32PresentationSupportKHR(physicalDevice, queueFamilyIndex)");
    fprintf(outputFile, " returns %u:\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t queueFamilyIndex
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "queueFamilyIndex:               "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, queueFamilyIndex); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceFeatures2KHR(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceFeatures2>& pFeatures)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceFeatures2KHR(physicalDevice, pFeatures)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPhysicalDeviceFeatures2* pFeatures
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pFeatures:                      "); //HRW
    OutputString(outputFile, "VkPhysicalDeviceFeatures2* = "); //TEQ
    if (pFeatures.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pFeatures.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pFeatures.GetMetaStructPointer(), indent+1,pFeatures.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceProperties2KHR(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceProperties2>& pProperties)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceProperties2KHR(physicalDevice, pProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPhysicalDeviceProperties2* pProperties
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pProperties:                    "); //HRW
    OutputString(outputFile, "VkPhysicalDeviceProperties2* = "); //TEQ
    if (pProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pProperties.GetMetaStructPointer(), indent+1,pProperties.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceFormatProperties2KHR(
    format::HandleId                            physicalDevice,
    VkFormat                                    format,
    const StructPointerDecoder<Decoded_VkFormatProperties2>& pFormatProperties)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceFormatProperties2KHR(physicalDevice, format, pFormatProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFormat format
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "format:                         "); //HRW
    OutputString(outputFile, "VkFormat = "); //TEQ
    OutputEnumVkFormat(outputFile, format); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimal(outputFile, format);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFormatProperties2* pFormatProperties
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pFormatProperties:              "); //HRW
    OutputString(outputFile, "VkFormatProperties2* = "); //TEQ
    if (pFormatProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pFormatProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pFormatProperties.GetMetaStructPointer(), indent+1,pFormatProperties.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceImageFormatProperties2KHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceImageFormatInfo2>& pImageFormatInfo,
    const StructPointerDecoder<Decoded_VkImageFormatProperties2>& pImageFormatProperties)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceImageFormatProperties2KHR(physicalDevice, pImageFormatInfo, pImageFormatProperties)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPhysicalDeviceImageFormatInfo2* pImageFormatInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pImageFormatInfo:               "); //HRW
    OutputString(outputFile, "const VkPhysicalDeviceImageFormatInfo2* = "); //TEQ
    if (pImageFormatInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pImageFormatInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pImageFormatInfo.GetMetaStructPointer(), indent+1,pImageFormatInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageFormatProperties2* pImageFormatProperties
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pImageFormatProperties:         "); //HRW
    OutputString(outputFile, "VkImageFormatProperties2* = "); //TEQ
    if (pImageFormatProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pImageFormatProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pImageFormatProperties.GetMetaStructPointer(), indent+1,pImageFormatProperties.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceQueueFamilyProperties2KHR(
    format::HandleId                            physicalDevice,
    const PointerDecoder<uint32_t>&             pQueueFamilyPropertyCount,
    const StructPointerDecoder<Decoded_VkQueueFamilyProperties2>& pQueueFamilyProperties)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceQueueFamilyProperties2KHR(physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pQueueFamilyPropertyCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pQueueFamilyPropertyCount:      "); //HRW
    OutputString(outputFile, "uint32_t* = "); //TEQ
    if (pQueueFamilyPropertyCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pQueueFamilyPropertyCount = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pQueueFamilyPropertyCount.GetPointer(), vinfo_pQueueFamilyPropertyCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueueFamilyProperties2* pQueueFamilyProperties
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pQueueFamilyProperties:         "); //HRW
    OutputString(outputFile, "VkQueueFamilyProperties2* = "); //TEQ
    if (pQueueFamilyProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pQueueFamilyProperties.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkQueueFamilyProperties2>(outputFile, indent+1, 1, "VkQueueFamilyProperties2", pQueueFamilyProperties.GetMetaStructPointer(), "pQueueFamilyProperties", *pQueueFamilyPropertyCount.GetPointer(), false, pQueueFamilyProperties.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceMemoryProperties2KHR(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceMemoryProperties2>& pMemoryProperties)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceMemoryProperties2KHR(physicalDevice, pMemoryProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPhysicalDeviceMemoryProperties2* pMemoryProperties
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pMemoryProperties:              "); //HRW
    OutputString(outputFile, "VkPhysicalDeviceMemoryProperties2* = "); //TEQ
    if (pMemoryProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pMemoryProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pMemoryProperties.GetMetaStructPointer(), indent+1,pMemoryProperties.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSparseImageFormatProperties2KHR(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceSparseImageFormatInfo2>& pFormatInfo,
    const PointerDecoder<uint32_t>&             pPropertyCount,
    const StructPointerDecoder<Decoded_VkSparseImageFormatProperties2>& pProperties)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceSparseImageFormatProperties2KHR(physicalDevice, pFormatInfo, pPropertyCount, pProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pFormatInfo:                    "); //HRW
    OutputString(outputFile, "const VkPhysicalDeviceSparseImageFormatInfo2* = "); //TEQ
    if (pFormatInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pFormatInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pFormatInfo.GetMetaStructPointer(), indent+1,pFormatInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pPropertyCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pPropertyCount:                 "); //HRW
    OutputString(outputFile, "uint32_t* = "); //TEQ
    if (pPropertyCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pPropertyCount = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pPropertyCount.GetPointer(), vinfo_pPropertyCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSparseImageFormatProperties2* pProperties
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pProperties:                    "); //HRW
    OutputString(outputFile, "VkSparseImageFormatProperties2* = "); //TEQ
    if (pProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pProperties.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkSparseImageFormatProperties2>(outputFile, indent+1, 1, "VkSparseImageFormatProperties2", pProperties.GetMetaStructPointer(), "pProperties", *pPropertyCount.GetPointer(), false, pProperties.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetDeviceGroupPeerMemoryFeaturesKHR(
    format::HandleId                            device,
    uint32_t                                    heapIndex,
    uint32_t                                    localDeviceIndex,
    uint32_t                                    remoteDeviceIndex,
    const PointerDecoder<VkPeerMemoryFeatureFlags>& pPeerMemoryFeatures)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetDeviceGroupPeerMemoryFeaturesKHR(device, heapIndex, localDeviceIndex, remoteDeviceIndex, pPeerMemoryFeatures)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t heapIndex
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "heapIndex:                      "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, heapIndex); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t localDeviceIndex
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "localDeviceIndex:               "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, localDeviceIndex); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t remoteDeviceIndex
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "remoteDeviceIndex:              "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, remoteDeviceIndex); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPeerMemoryFeatureFlags* pPeerMemoryFeatures
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pPeerMemoryFeatures:            "); //HRW
    OutputString(outputFile, "VkPeerMemoryFeatureFlags* = "); //TEQ
    if (pPeerMemoryFeatures.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pPeerMemoryFeatures = {false, false, true, OutputEnumVkPeerMemoryFeatureFlagBits};
        OutputScalarValue(outputFile, pPeerMemoryFeatures.GetPointer(), vinfo_pPeerMemoryFeatures); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdSetDeviceMaskKHR(
    format::HandleId                            commandBuffer,
    uint32_t                                    deviceMask)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdSetDeviceMaskKHR(commandBuffer, deviceMask)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t deviceMask
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "deviceMask:                     "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, deviceMask); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdDispatchBaseKHR(
    format::HandleId                            commandBuffer,
    uint32_t                                    baseGroupX,
    uint32_t                                    baseGroupY,
    uint32_t                                    baseGroupZ,
    uint32_t                                    groupCountX,
    uint32_t                                    groupCountY,
    uint32_t                                    groupCountZ)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdDispatchBaseKHR(commandBuffer, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t baseGroupX
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "baseGroupX:                     "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, baseGroupX); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t baseGroupY
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "baseGroupY:                     "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, baseGroupY); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t baseGroupZ
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "baseGroupZ:                     "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, baseGroupZ); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t groupCountX
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "groupCountX:                    "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, groupCountX); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t groupCountY
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "groupCountY:                    "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, groupCountY); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t groupCountZ
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "groupCountZ:                    "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, groupCountZ); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkTrimCommandPoolKHR(
    format::HandleId                            device,
    format::HandleId                            commandPool,
    VkCommandPoolTrimFlags                      flags)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkTrimCommandPoolKHR(device, commandPool, flags)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkCommandPool commandPool
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandPool:                    "); //HRW
    OutputString(outputFile, "VkCommandPool = "); //TEQ
    OutputAddr(outputFile, commandPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkCommandPoolTrimFlags flags
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "flags:                          "); //HRW
    OutputString(outputFile, "VkCommandPoolTrimFlags = "); //TEQ
    OutputUnsignedDecimal(outputFile, flags); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkEnumeratePhysicalDeviceGroupsKHR(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const PointerDecoder<uint32_t>&             pPhysicalDeviceGroupCount,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceGroupProperties>& pPhysicalDeviceGroupProperties)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkEnumeratePhysicalDeviceGroupsKHR(instance, pPhysicalDeviceGroupCount, pPhysicalDeviceGroupProperties)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "instance:                       "); //HRW
    OutputString(outputFile, "VkInstance = "); //TEQ
    OutputAddr(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pPhysicalDeviceGroupCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pPhysicalDeviceGroupCount:      "); //HRW
    OutputString(outputFile, "uint32_t* = "); //TEQ
    if (pPhysicalDeviceGroupCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pPhysicalDeviceGroupCount = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pPhysicalDeviceGroupCount.GetPointer(), vinfo_pPhysicalDeviceGroupCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pPhysicalDeviceGroupProperties: "); //HRW
    OutputString(outputFile, "VkPhysicalDeviceGroupProperties* = "); //TEQ
    if (pPhysicalDeviceGroupProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pPhysicalDeviceGroupProperties.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkPhysicalDeviceGroupProperties>(outputFile, indent+1, 1, "VkPhysicalDeviceGroupProperties", pPhysicalDeviceGroupProperties.GetMetaStructPointer(), "pPhysicalDeviceGroupProperties", *pPhysicalDeviceGroupCount.GetPointer(), false, pPhysicalDeviceGroupProperties.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceExternalBufferPropertiesKHR(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceExternalBufferInfo>& pExternalBufferInfo,
    const StructPointerDecoder<Decoded_VkExternalBufferProperties>& pExternalBufferProperties)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceExternalBufferPropertiesKHR(physicalDevice, pExternalBufferInfo, pExternalBufferProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPhysicalDeviceExternalBufferInfo* pExternalBufferInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pExternalBufferInfo:            "); //HRW
    OutputString(outputFile, "const VkPhysicalDeviceExternalBufferInfo* = "); //TEQ
    if (pExternalBufferInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pExternalBufferInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pExternalBufferInfo.GetMetaStructPointer(), indent+1,pExternalBufferInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkExternalBufferProperties* pExternalBufferProperties
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pExternalBufferProperties:      "); //HRW
    OutputString(outputFile, "VkExternalBufferProperties* = "); //TEQ
    if (pExternalBufferProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pExternalBufferProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pExternalBufferProperties.GetMetaStructPointer(), indent+1,pExternalBufferProperties.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetMemoryWin32HandleKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkMemoryGetWin32HandleInfoKHR>& pGetWin32HandleInfo,
    const PointerDecoder<uint64_t>&             pHandle)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetMemoryWin32HandleKHR(device, pGetWin32HandleInfo, pHandle)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkMemoryGetWin32HandleInfoKHR* pGetWin32HandleInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pGetWin32HandleInfo:            "); //HRW
    OutputString(outputFile, "const VkMemoryGetWin32HandleInfoKHR* = "); //TEQ
    if (pGetWin32HandleInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pGetWin32HandleInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pGetWin32HandleInfo.GetMetaStructPointer(), indent+1,pGetWin32HandleInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: void** pHandle
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pHandle:                        "); //HRW
    OutputString(outputFile, "void** = "); //TEQ
    if (pHandle.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pHandle = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pHandle.GetPointer(), vinfo_pHandle); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetMemoryWin32HandlePropertiesKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    VkExternalMemoryHandleTypeFlagBits          handleType,
    uint64_t                                    handle,
    const StructPointerDecoder<Decoded_VkMemoryWin32HandlePropertiesKHR>& pMemoryWin32HandleProperties)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetMemoryWin32HandlePropertiesKHR(device, handleType, handle, pMemoryWin32HandleProperties)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkExternalMemoryHandleTypeFlagBits handleType
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "handleType:                     "); //HRW
    OutputString(outputFile, "VkExternalMemoryHandleTypeFlagBits = "); //TEQ
    OutputEnumVkExternalMemoryHandleTypeFlagBits(outputFile, handleType); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimal(outputFile, handleType);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: void* handle
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "handle:                         "); //HRW
    OutputString(outputFile, "void* = "); //TEQ
    if ( !handle) // WWW
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, handle); // PWR
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkMemoryWin32HandlePropertiesKHR* pMemoryWin32HandleProperties
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pMemoryWin32HandleProperties:   "); //HRW
    OutputString(outputFile, "VkMemoryWin32HandlePropertiesKHR* = "); //TEQ
    if (pMemoryWin32HandleProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pMemoryWin32HandleProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pMemoryWin32HandleProperties.GetMetaStructPointer(), indent+1,pMemoryWin32HandleProperties.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetMemoryFdKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkMemoryGetFdInfoKHR>& pGetFdInfo,
    const PointerDecoder<int>&                  pFd)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetMemoryFdKHR(device, pGetFdInfo, pFd)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkMemoryGetFdInfoKHR* pGetFdInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pGetFdInfo:                     "); //HRW
    OutputString(outputFile, "const VkMemoryGetFdInfoKHR* = "); //TEQ
    if (pGetFdInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pGetFdInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pGetFdInfo.GetMetaStructPointer(), indent+1,pGetFdInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: int* pFd
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pFd:                            "); //HRW
    OutputString(outputFile, "int* = "); //TEQ
    if (pFd.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pFd = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pFd.GetPointer(), vinfo_pFd); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetMemoryFdPropertiesKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    VkExternalMemoryHandleTypeFlagBits          handleType,
    int                                         fd,
    const StructPointerDecoder<Decoded_VkMemoryFdPropertiesKHR>& pMemoryFdProperties)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetMemoryFdPropertiesKHR(device, handleType, fd, pMemoryFdProperties)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkExternalMemoryHandleTypeFlagBits handleType
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "handleType:                     "); //HRW
    OutputString(outputFile, "VkExternalMemoryHandleTypeFlagBits = "); //TEQ
    OutputEnumVkExternalMemoryHandleTypeFlagBits(outputFile, handleType); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimal(outputFile, handleType);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: int fd
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "fd:                             "); //HRW
    OutputString(outputFile, "int = "); //TEQ
    OutputSignedDecimal(outputFile, fd); //EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkMemoryFdPropertiesKHR* pMemoryFdProperties
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pMemoryFdProperties:            "); //HRW
    OutputString(outputFile, "VkMemoryFdPropertiesKHR* = "); //TEQ
    if (pMemoryFdProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pMemoryFdProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pMemoryFdProperties.GetMetaStructPointer(), indent+1,pMemoryFdProperties.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceExternalSemaphoreInfo>& pExternalSemaphoreInfo,
    const StructPointerDecoder<Decoded_VkExternalSemaphoreProperties>& pExternalSemaphoreProperties)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceExternalSemaphorePropertiesKHR(physicalDevice, pExternalSemaphoreInfo, pExternalSemaphoreProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pExternalSemaphoreInfo:         "); //HRW
    OutputString(outputFile, "const VkPhysicalDeviceExternalSemaphoreInfo* = "); //TEQ
    if (pExternalSemaphoreInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pExternalSemaphoreInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pExternalSemaphoreInfo.GetMetaStructPointer(), indent+1,pExternalSemaphoreInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkExternalSemaphoreProperties* pExternalSemaphoreProperties
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pExternalSemaphoreProperties:   "); //HRW
    OutputString(outputFile, "VkExternalSemaphoreProperties* = "); //TEQ
    if (pExternalSemaphoreProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pExternalSemaphoreProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pExternalSemaphoreProperties.GetMetaStructPointer(), indent+1,pExternalSemaphoreProperties.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkImportSemaphoreWin32HandleKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImportSemaphoreWin32HandleInfoKHR>& pImportSemaphoreWin32HandleInfo)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkImportSemaphoreWin32HandleKHR(device, pImportSemaphoreWin32HandleInfo)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImportSemaphoreWin32HandleInfoKHR* pImportSemaphoreWin32HandleInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pImportSemaphoreWin32HandleInfo: "); //HRW
    OutputString(outputFile, "const VkImportSemaphoreWin32HandleInfoKHR* = "); //TEQ
    if (pImportSemaphoreWin32HandleInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pImportSemaphoreWin32HandleInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pImportSemaphoreWin32HandleInfo.GetMetaStructPointer(), indent+1,pImportSemaphoreWin32HandleInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetSemaphoreWin32HandleKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSemaphoreGetWin32HandleInfoKHR>& pGetWin32HandleInfo,
    const PointerDecoder<uint64_t>&             pHandle)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetSemaphoreWin32HandleKHR(device, pGetWin32HandleInfo, pHandle)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSemaphoreGetWin32HandleInfoKHR* pGetWin32HandleInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pGetWin32HandleInfo:            "); //HRW
    OutputString(outputFile, "const VkSemaphoreGetWin32HandleInfoKHR* = "); //TEQ
    if (pGetWin32HandleInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pGetWin32HandleInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pGetWin32HandleInfo.GetMetaStructPointer(), indent+1,pGetWin32HandleInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: void** pHandle
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pHandle:                        "); //HRW
    OutputString(outputFile, "void** = "); //TEQ
    if (pHandle.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pHandle = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pHandle.GetPointer(), vinfo_pHandle); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkImportSemaphoreFdKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImportSemaphoreFdInfoKHR>& pImportSemaphoreFdInfo)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkImportSemaphoreFdKHR(device, pImportSemaphoreFdInfo)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImportSemaphoreFdInfoKHR* pImportSemaphoreFdInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pImportSemaphoreFdInfo:         "); //HRW
    OutputString(outputFile, "const VkImportSemaphoreFdInfoKHR* = "); //TEQ
    if (pImportSemaphoreFdInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pImportSemaphoreFdInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pImportSemaphoreFdInfo.GetMetaStructPointer(), indent+1,pImportSemaphoreFdInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetSemaphoreFdKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSemaphoreGetFdInfoKHR>& pGetFdInfo,
    const PointerDecoder<int>&                  pFd)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetSemaphoreFdKHR(device, pGetFdInfo, pFd)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSemaphoreGetFdInfoKHR* pGetFdInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pGetFdInfo:                     "); //HRW
    OutputString(outputFile, "const VkSemaphoreGetFdInfoKHR* = "); //TEQ
    if (pGetFdInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pGetFdInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pGetFdInfo.GetMetaStructPointer(), indent+1,pGetFdInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: int* pFd
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pFd:                            "); //HRW
    OutputString(outputFile, "int* = "); //TEQ
    if (pFd.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pFd = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pFd.GetPointer(), vinfo_pFd); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCmdPushDescriptorSetKHR(
    format::HandleId                            commandBuffer,
    VkPipelineBindPoint                         pipelineBindPoint,
    format::HandleId                            layout,
    uint32_t                                    set,
    uint32_t                                    descriptorWriteCount,
    const StructPointerDecoder<Decoded_VkWriteDescriptorSet>& pDescriptorWrites)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdPushDescriptorSetKHR(commandBuffer, pipelineBindPoint, layout, set, descriptorWriteCount, pDescriptorWrites)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineBindPoint pipelineBindPoint
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pipelineBindPoint:              "); //HRW
    OutputString(outputFile, "VkPipelineBindPoint = "); //TEQ
    OutputEnumVkPipelineBindPoint(outputFile, pipelineBindPoint); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimal(outputFile, pipelineBindPoint);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineLayout layout
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "layout:                         "); //HRW
    OutputString(outputFile, "VkPipelineLayout = "); //TEQ
    OutputAddr(outputFile, layout); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t set
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "set:                            "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, set); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t descriptorWriteCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "descriptorWriteCount:           "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, descriptorWriteCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkWriteDescriptorSet* pDescriptorWrites
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pDescriptorWrites:              "); //HRW
    OutputString(outputFile, "const VkWriteDescriptorSet* = "); //TEQ
    if (pDescriptorWrites.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pDescriptorWrites.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkWriteDescriptorSet>(outputFile, indent+1, 1, "VkWriteDescriptorSet", pDescriptorWrites.GetMetaStructPointer(), "pDescriptorWrites", descriptorWriteCount, false, pDescriptorWrites.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateDescriptorUpdateTemplateKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDescriptorUpdateTemplateCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkDescriptorUpdateTemplate>& pDescriptorUpdateTemplate)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreateDescriptorUpdateTemplateKHR(device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); //HRW
    OutputString(outputFile, "const VkDescriptorUpdateTemplateCreateInfo* = "); //TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDescriptorUpdateTemplate* pDescriptorUpdateTemplate
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pDescriptorUpdateTemplate:      "); //HRW
    OutputString(outputFile, "VkDescriptorUpdateTemplate* = "); //TEQ
    if (pDescriptorUpdateTemplate.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pDescriptorUpdateTemplate = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pDescriptorUpdateTemplate.GetPointer(), vinfo_pDescriptorUpdateTemplate); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyDescriptorUpdateTemplateKHR(
    format::HandleId                            device,
    format::HandleId                            descriptorUpdateTemplate,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkDestroyDescriptorUpdateTemplateKHR(device, descriptorUpdateTemplate, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDescriptorUpdateTemplate descriptorUpdateTemplate
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "descriptorUpdateTemplate:       "); //HRW
    OutputString(outputFile, "VkDescriptorUpdateTemplate = "); //TEQ
    OutputAddr(outputFile, descriptorUpdateTemplate); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateRenderPass2KHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkRenderPassCreateInfo2KHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkRenderPass>&   pRenderPass)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreateRenderPass2KHR(device, pCreateInfo, pAllocator, pRenderPass)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkRenderPassCreateInfo2KHR* pCreateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); //HRW
    OutputString(outputFile, "const VkRenderPassCreateInfo2KHR* = "); //TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkRenderPass* pRenderPass
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pRenderPass:                    "); //HRW
    OutputString(outputFile, "VkRenderPass* = "); //TEQ
    if (pRenderPass.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pRenderPass = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pRenderPass.GetPointer(), vinfo_pRenderPass); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdBeginRenderPass2KHR(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkRenderPassBeginInfo>& pRenderPassBegin,
    const StructPointerDecoder<Decoded_VkSubpassBeginInfoKHR>& pSubpassBeginInfo)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdBeginRenderPass2KHR(commandBuffer, pRenderPassBegin, pSubpassBeginInfo)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkRenderPassBeginInfo* pRenderPassBegin
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pRenderPassBegin:               "); //HRW
    OutputString(outputFile, "const VkRenderPassBeginInfo* = "); //TEQ
    if (pRenderPassBegin.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pRenderPassBegin.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pRenderPassBegin.GetMetaStructPointer(), indent+1,pRenderPassBegin.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSubpassBeginInfoKHR* pSubpassBeginInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSubpassBeginInfo:              "); //HRW
    OutputString(outputFile, "const VkSubpassBeginInfoKHR* = "); //TEQ
    if (pSubpassBeginInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pSubpassBeginInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pSubpassBeginInfo.GetMetaStructPointer(), indent+1,pSubpassBeginInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdNextSubpass2KHR(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkSubpassBeginInfoKHR>& pSubpassBeginInfo,
    const StructPointerDecoder<Decoded_VkSubpassEndInfoKHR>& pSubpassEndInfo)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdNextSubpass2KHR(commandBuffer, pSubpassBeginInfo, pSubpassEndInfo)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSubpassBeginInfoKHR* pSubpassBeginInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSubpassBeginInfo:              "); //HRW
    OutputString(outputFile, "const VkSubpassBeginInfoKHR* = "); //TEQ
    if (pSubpassBeginInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pSubpassBeginInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pSubpassBeginInfo.GetMetaStructPointer(), indent+1,pSubpassBeginInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSubpassEndInfoKHR* pSubpassEndInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSubpassEndInfo:                "); //HRW
    OutputString(outputFile, "const VkSubpassEndInfoKHR* = "); //TEQ
    if (pSubpassEndInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pSubpassEndInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pSubpassEndInfo.GetMetaStructPointer(), indent+1,pSubpassEndInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdEndRenderPass2KHR(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkSubpassEndInfoKHR>& pSubpassEndInfo)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdEndRenderPass2KHR(commandBuffer, pSubpassEndInfo)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSubpassEndInfoKHR* pSubpassEndInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSubpassEndInfo:                "); //HRW
    OutputString(outputFile, "const VkSubpassEndInfoKHR* = "); //TEQ
    if (pSubpassEndInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pSubpassEndInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pSubpassEndInfo.GetMetaStructPointer(), indent+1,pSubpassEndInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetSwapchainStatusKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetSwapchainStatusKHR(device, swapchain)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSwapchainKHR swapchain
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "swapchain:                      "); //HRW
    OutputString(outputFile, "VkSwapchainKHR = "); //TEQ
    OutputAddr(outputFile, swapchain); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceExternalFencePropertiesKHR(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceExternalFenceInfo>& pExternalFenceInfo,
    const StructPointerDecoder<Decoded_VkExternalFenceProperties>& pExternalFenceProperties)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceExternalFencePropertiesKHR(physicalDevice, pExternalFenceInfo, pExternalFenceProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPhysicalDeviceExternalFenceInfo* pExternalFenceInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pExternalFenceInfo:             "); //HRW
    OutputString(outputFile, "const VkPhysicalDeviceExternalFenceInfo* = "); //TEQ
    if (pExternalFenceInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pExternalFenceInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pExternalFenceInfo.GetMetaStructPointer(), indent+1,pExternalFenceInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkExternalFenceProperties* pExternalFenceProperties
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pExternalFenceProperties:       "); //HRW
    OutputString(outputFile, "VkExternalFenceProperties* = "); //TEQ
    if (pExternalFenceProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pExternalFenceProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pExternalFenceProperties.GetMetaStructPointer(), indent+1,pExternalFenceProperties.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkImportFenceWin32HandleKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImportFenceWin32HandleInfoKHR>& pImportFenceWin32HandleInfo)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkImportFenceWin32HandleKHR(device, pImportFenceWin32HandleInfo)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImportFenceWin32HandleInfoKHR* pImportFenceWin32HandleInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pImportFenceWin32HandleInfo:    "); //HRW
    OutputString(outputFile, "const VkImportFenceWin32HandleInfoKHR* = "); //TEQ
    if (pImportFenceWin32HandleInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pImportFenceWin32HandleInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pImportFenceWin32HandleInfo.GetMetaStructPointer(), indent+1,pImportFenceWin32HandleInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetFenceWin32HandleKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkFenceGetWin32HandleInfoKHR>& pGetWin32HandleInfo,
    const PointerDecoder<uint64_t>&             pHandle)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetFenceWin32HandleKHR(device, pGetWin32HandleInfo, pHandle)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkFenceGetWin32HandleInfoKHR* pGetWin32HandleInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pGetWin32HandleInfo:            "); //HRW
    OutputString(outputFile, "const VkFenceGetWin32HandleInfoKHR* = "); //TEQ
    if (pGetWin32HandleInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pGetWin32HandleInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pGetWin32HandleInfo.GetMetaStructPointer(), indent+1,pGetWin32HandleInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: void** pHandle
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pHandle:                        "); //HRW
    OutputString(outputFile, "void** = "); //TEQ
    if (pHandle.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pHandle = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pHandle.GetPointer(), vinfo_pHandle); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkImportFenceFdKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImportFenceFdInfoKHR>& pImportFenceFdInfo)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkImportFenceFdKHR(device, pImportFenceFdInfo)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImportFenceFdInfoKHR* pImportFenceFdInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pImportFenceFdInfo:             "); //HRW
    OutputString(outputFile, "const VkImportFenceFdInfoKHR* = "); //TEQ
    if (pImportFenceFdInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pImportFenceFdInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pImportFenceFdInfo.GetMetaStructPointer(), indent+1,pImportFenceFdInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetFenceFdKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkFenceGetFdInfoKHR>& pGetFdInfo,
    const PointerDecoder<int>&                  pFd)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetFenceFdKHR(device, pGetFdInfo, pFd)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkFenceGetFdInfoKHR* pGetFdInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pGetFdInfo:                     "); //HRW
    OutputString(outputFile, "const VkFenceGetFdInfoKHR* = "); //TEQ
    if (pGetFdInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pGetFdInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pGetFdInfo.GetMetaStructPointer(), indent+1,pGetFdInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: int* pFd
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pFd:                            "); //HRW
    OutputString(outputFile, "int* = "); //TEQ
    if (pFd.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pFd = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pFd.GetPointer(), vinfo_pFd); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSurfaceCapabilities2KHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceSurfaceInfo2KHR>& pSurfaceInfo,
    const StructPointerDecoder<Decoded_VkSurfaceCapabilities2KHR>& pSurfaceCapabilities)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceSurfaceCapabilities2KHR(physicalDevice, pSurfaceInfo, pSurfaceCapabilities)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSurfaceInfo:                   "); //HRW
    OutputString(outputFile, "const VkPhysicalDeviceSurfaceInfo2KHR* = "); //TEQ
    if (pSurfaceInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pSurfaceInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pSurfaceInfo.GetMetaStructPointer(), indent+1,pSurfaceInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceCapabilities2KHR* pSurfaceCapabilities
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSurfaceCapabilities:           "); //HRW
    OutputString(outputFile, "VkSurfaceCapabilities2KHR* = "); //TEQ
    if (pSurfaceCapabilities.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pSurfaceCapabilities.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pSurfaceCapabilities.GetMetaStructPointer(), indent+1,pSurfaceCapabilities.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSurfaceFormats2KHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceSurfaceInfo2KHR>& pSurfaceInfo,
    const PointerDecoder<uint32_t>&             pSurfaceFormatCount,
    const StructPointerDecoder<Decoded_VkSurfaceFormat2KHR>& pSurfaceFormats)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceSurfaceFormats2KHR(physicalDevice, pSurfaceInfo, pSurfaceFormatCount, pSurfaceFormats)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSurfaceInfo:                   "); //HRW
    OutputString(outputFile, "const VkPhysicalDeviceSurfaceInfo2KHR* = "); //TEQ
    if (pSurfaceInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pSurfaceInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pSurfaceInfo.GetMetaStructPointer(), indent+1,pSurfaceInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pSurfaceFormatCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSurfaceFormatCount:            "); //HRW
    OutputString(outputFile, "uint32_t* = "); //TEQ
    if (pSurfaceFormatCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pSurfaceFormatCount = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pSurfaceFormatCount.GetPointer(), vinfo_pSurfaceFormatCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceFormat2KHR* pSurfaceFormats
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSurfaceFormats:                "); //HRW
    OutputString(outputFile, "VkSurfaceFormat2KHR* = "); //TEQ
    if (pSurfaceFormats.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pSurfaceFormats.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkSurfaceFormat2KHR>(outputFile, indent+1, 1, "VkSurfaceFormat2KHR", pSurfaceFormats.GetMetaStructPointer(), "pSurfaceFormats", *pSurfaceFormatCount.GetPointer(), false, pSurfaceFormats.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceDisplayProperties2KHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const PointerDecoder<uint32_t>&             pPropertyCount,
    const StructPointerDecoder<Decoded_VkDisplayProperties2KHR>& pProperties)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceDisplayProperties2KHR(physicalDevice, pPropertyCount, pProperties)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pPropertyCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pPropertyCount:                 "); //HRW
    OutputString(outputFile, "uint32_t* = "); //TEQ
    if (pPropertyCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pPropertyCount = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pPropertyCount.GetPointer(), vinfo_pPropertyCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayProperties2KHR* pProperties
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pProperties:                    "); //HRW
    OutputString(outputFile, "VkDisplayProperties2KHR* = "); //TEQ
    if (pProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pProperties.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkDisplayProperties2KHR>(outputFile, indent+1, 1, "VkDisplayProperties2KHR", pProperties.GetMetaStructPointer(), "pProperties", *pPropertyCount.GetPointer(), false, pProperties.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceDisplayPlaneProperties2KHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const PointerDecoder<uint32_t>&             pPropertyCount,
    const StructPointerDecoder<Decoded_VkDisplayPlaneProperties2KHR>& pProperties)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceDisplayPlaneProperties2KHR(physicalDevice, pPropertyCount, pProperties)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pPropertyCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pPropertyCount:                 "); //HRW
    OutputString(outputFile, "uint32_t* = "); //TEQ
    if (pPropertyCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pPropertyCount = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pPropertyCount.GetPointer(), vinfo_pPropertyCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayPlaneProperties2KHR* pProperties
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pProperties:                    "); //HRW
    OutputString(outputFile, "VkDisplayPlaneProperties2KHR* = "); //TEQ
    if (pProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pProperties.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkDisplayPlaneProperties2KHR>(outputFile, indent+1, 1, "VkDisplayPlaneProperties2KHR", pProperties.GetMetaStructPointer(), "pProperties", *pPropertyCount.GetPointer(), false, pProperties.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetDisplayModeProperties2KHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            display,
    const PointerDecoder<uint32_t>&             pPropertyCount,
    const StructPointerDecoder<Decoded_VkDisplayModeProperties2KHR>& pProperties)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetDisplayModeProperties2KHR(physicalDevice, display, pPropertyCount, pProperties)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayKHR display
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "display:                        "); //HRW
    OutputString(outputFile, "VkDisplayKHR = "); //TEQ
    OutputAddr(outputFile, display); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pPropertyCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pPropertyCount:                 "); //HRW
    OutputString(outputFile, "uint32_t* = "); //TEQ
    if (pPropertyCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pPropertyCount = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pPropertyCount.GetPointer(), vinfo_pPropertyCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayModeProperties2KHR* pProperties
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pProperties:                    "); //HRW
    OutputString(outputFile, "VkDisplayModeProperties2KHR* = "); //TEQ
    if (pProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pProperties.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkDisplayModeProperties2KHR>(outputFile, indent+1, 1, "VkDisplayModeProperties2KHR", pProperties.GetMetaStructPointer(), "pProperties", *pPropertyCount.GetPointer(), false, pProperties.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetDisplayPlaneCapabilities2KHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkDisplayPlaneInfo2KHR>& pDisplayPlaneInfo,
    const StructPointerDecoder<Decoded_VkDisplayPlaneCapabilities2KHR>& pCapabilities)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetDisplayPlaneCapabilities2KHR(physicalDevice, pDisplayPlaneInfo, pCapabilities)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDisplayPlaneInfo2KHR* pDisplayPlaneInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pDisplayPlaneInfo:              "); //HRW
    OutputString(outputFile, "const VkDisplayPlaneInfo2KHR* = "); //TEQ
    if (pDisplayPlaneInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pDisplayPlaneInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pDisplayPlaneInfo.GetMetaStructPointer(), indent+1,pDisplayPlaneInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayPlaneCapabilities2KHR* pCapabilities
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCapabilities:                  "); //HRW
    OutputString(outputFile, "VkDisplayPlaneCapabilities2KHR* = "); //TEQ
    if (pCapabilities.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCapabilities.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCapabilities.GetMetaStructPointer(), indent+1,pCapabilities.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetImageMemoryRequirements2KHR(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImageMemoryRequirementsInfo2>& pInfo,
    const StructPointerDecoder<Decoded_VkMemoryRequirements2>& pMemoryRequirements)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetImageMemoryRequirements2KHR(device, pInfo, pMemoryRequirements)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImageMemoryRequirementsInfo2* pInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pInfo:                          "); //HRW
    OutputString(outputFile, "const VkImageMemoryRequirementsInfo2* = "); //TEQ
    if (pInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pInfo.GetMetaStructPointer(), indent+1,pInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkMemoryRequirements2* pMemoryRequirements
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pMemoryRequirements:            "); //HRW
    OutputString(outputFile, "VkMemoryRequirements2* = "); //TEQ
    if (pMemoryRequirements.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pMemoryRequirements.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pMemoryRequirements.GetMetaStructPointer(), indent+1,pMemoryRequirements.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetBufferMemoryRequirements2KHR(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkBufferMemoryRequirementsInfo2>& pInfo,
    const StructPointerDecoder<Decoded_VkMemoryRequirements2>& pMemoryRequirements)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetBufferMemoryRequirements2KHR(device, pInfo, pMemoryRequirements)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBufferMemoryRequirementsInfo2* pInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pInfo:                          "); //HRW
    OutputString(outputFile, "const VkBufferMemoryRequirementsInfo2* = "); //TEQ
    if (pInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pInfo.GetMetaStructPointer(), indent+1,pInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkMemoryRequirements2* pMemoryRequirements
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pMemoryRequirements:            "); //HRW
    OutputString(outputFile, "VkMemoryRequirements2* = "); //TEQ
    if (pMemoryRequirements.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pMemoryRequirements.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pMemoryRequirements.GetMetaStructPointer(), indent+1,pMemoryRequirements.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetImageSparseMemoryRequirements2KHR(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImageSparseMemoryRequirementsInfo2>& pInfo,
    const PointerDecoder<uint32_t>&             pSparseMemoryRequirementCount,
    const StructPointerDecoder<Decoded_VkSparseImageMemoryRequirements2>& pSparseMemoryRequirements)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetImageSparseMemoryRequirements2KHR(device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImageSparseMemoryRequirementsInfo2* pInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pInfo:                          "); //HRW
    OutputString(outputFile, "const VkImageSparseMemoryRequirementsInfo2* = "); //TEQ
    if (pInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pInfo.GetMetaStructPointer(), indent+1,pInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pSparseMemoryRequirementCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSparseMemoryRequirementCount:  "); //HRW
    OutputString(outputFile, "uint32_t* = "); //TEQ
    if (pSparseMemoryRequirementCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pSparseMemoryRequirementCount = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pSparseMemoryRequirementCount.GetPointer(), vinfo_pSparseMemoryRequirementCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSparseImageMemoryRequirements2* pSparseMemoryRequirements
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSparseMemoryRequirements:      "); //HRW
    OutputString(outputFile, "VkSparseImageMemoryRequirements2* = "); //TEQ
    if (pSparseMemoryRequirements.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pSparseMemoryRequirements.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkSparseImageMemoryRequirements2>(outputFile, indent+1, 1, "VkSparseImageMemoryRequirements2", pSparseMemoryRequirements.GetMetaStructPointer(), "pSparseMemoryRequirements", *pSparseMemoryRequirementCount.GetPointer(), false, pSparseMemoryRequirements.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateSamplerYcbcrConversionKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSamplerYcbcrConversionCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSamplerYcbcrConversion>& pYcbcrConversion)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreateSamplerYcbcrConversionKHR(device, pCreateInfo, pAllocator, pYcbcrConversion)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSamplerYcbcrConversionCreateInfo* pCreateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); //HRW
    OutputString(outputFile, "const VkSamplerYcbcrConversionCreateInfo* = "); //TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSamplerYcbcrConversion* pYcbcrConversion
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pYcbcrConversion:               "); //HRW
    OutputString(outputFile, "VkSamplerYcbcrConversion* = "); //TEQ
    if (pYcbcrConversion.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pYcbcrConversion = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pYcbcrConversion.GetPointer(), vinfo_pYcbcrConversion); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroySamplerYcbcrConversionKHR(
    format::HandleId                            device,
    format::HandleId                            ycbcrConversion,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkDestroySamplerYcbcrConversionKHR(device, ycbcrConversion, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSamplerYcbcrConversion ycbcrConversion
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "ycbcrConversion:                "); //HRW
    OutputString(outputFile, "VkSamplerYcbcrConversion = "); //TEQ
    OutputAddr(outputFile, ycbcrConversion); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkBindBufferMemory2KHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    bindInfoCount,
    const StructPointerDecoder<Decoded_VkBindBufferMemoryInfo>& pBindInfos)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkBindBufferMemory2KHR(device, bindInfoCount, pBindInfos)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t bindInfoCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "bindInfoCount:                  "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, bindInfoCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBindBufferMemoryInfo* pBindInfos
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pBindInfos:                     "); //HRW
    OutputString(outputFile, "const VkBindBufferMemoryInfo* = "); //TEQ
    if (pBindInfos.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pBindInfos.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkBindBufferMemoryInfo>(outputFile, indent+1, 1, "VkBindBufferMemoryInfo", pBindInfos.GetMetaStructPointer(), "pBindInfos", bindInfoCount, false, pBindInfos.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkBindImageMemory2KHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    bindInfoCount,
    const StructPointerDecoder<Decoded_VkBindImageMemoryInfo>& pBindInfos)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkBindImageMemory2KHR(device, bindInfoCount, pBindInfos)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t bindInfoCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "bindInfoCount:                  "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, bindInfoCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBindImageMemoryInfo* pBindInfos
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pBindInfos:                     "); //HRW
    OutputString(outputFile, "const VkBindImageMemoryInfo* = "); //TEQ
    if (pBindInfos.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pBindInfos.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkBindImageMemoryInfo>(outputFile, indent+1, 1, "VkBindImageMemoryInfo", pBindInfos.GetMetaStructPointer(), "pBindInfos", bindInfoCount, false, pBindInfos.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetDescriptorSetLayoutSupportKHR(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDescriptorSetLayoutCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkDescriptorSetLayoutSupport>& pSupport)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetDescriptorSetLayoutSupportKHR(device, pCreateInfo, pSupport)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDescriptorSetLayoutCreateInfo* pCreateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); //HRW
    OutputString(outputFile, "const VkDescriptorSetLayoutCreateInfo* = "); //TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDescriptorSetLayoutSupport* pSupport
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSupport:                       "); //HRW
    OutputString(outputFile, "VkDescriptorSetLayoutSupport* = "); //TEQ
    if (pSupport.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pSupport.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pSupport.GetMetaStructPointer(), indent+1,pSupport.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCmdDrawIndirectCountKHR(
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    format::HandleId                            countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdDrawIndirectCountKHR(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer buffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "buffer:                         "); //HRW
    OutputString(outputFile, "VkBuffer = "); //TEQ
    OutputAddr(outputFile, buffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize offset
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "offset:                         "); //HRW
    OutputString(outputFile, "VkDeviceSize = "); //TEQ
    OutputSignedDecimal(outputFile, offset); //EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer countBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "countBuffer:                    "); //HRW
    OutputString(outputFile, "VkBuffer = "); //TEQ
    OutputAddr(outputFile, countBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize countBufferOffset
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "countBufferOffset:              "); //HRW
    OutputString(outputFile, "VkDeviceSize = "); //TEQ
    OutputSignedDecimal(outputFile, countBufferOffset); //EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t maxDrawCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "maxDrawCount:                   "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, maxDrawCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t stride
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "stride:                         "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, stride); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdDrawIndexedIndirectCountKHR(
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    format::HandleId                            countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdDrawIndexedIndirectCountKHR(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer buffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "buffer:                         "); //HRW
    OutputString(outputFile, "VkBuffer = "); //TEQ
    OutputAddr(outputFile, buffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize offset
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "offset:                         "); //HRW
    OutputString(outputFile, "VkDeviceSize = "); //TEQ
    OutputSignedDecimal(outputFile, offset); //EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer countBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "countBuffer:                    "); //HRW
    OutputString(outputFile, "VkBuffer = "); //TEQ
    OutputAddr(outputFile, countBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize countBufferOffset
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "countBufferOffset:              "); //HRW
    OutputString(outputFile, "VkDeviceSize = "); //TEQ
    OutputSignedDecimal(outputFile, countBufferOffset); //EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t maxDrawCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "maxDrawCount:                   "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, maxDrawCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t stride
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "stride:                         "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, stride); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetSemaphoreCounterValueKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            semaphore,
    const PointerDecoder<uint64_t>&             pValue)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetSemaphoreCounterValueKHR(device, semaphore, pValue)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSemaphore semaphore
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "semaphore:                      "); //HRW
    OutputString(outputFile, "VkSemaphore = "); //TEQ
    OutputAddr(outputFile, semaphore); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint64_t* pValue
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pValue:                         "); //HRW
    OutputString(outputFile, "uint64_t* = "); //TEQ
    if (pValue.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pValue = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pValue.GetPointer(), vinfo_pValue); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkWaitSemaphoresKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSemaphoreWaitInfoKHR>& pWaitInfo,
    uint64_t                                    timeout)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkWaitSemaphoresKHR(device, pWaitInfo, timeout)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSemaphoreWaitInfoKHR* pWaitInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pWaitInfo:                      "); //HRW
    OutputString(outputFile, "const VkSemaphoreWaitInfoKHR* = "); //TEQ
    if (pWaitInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pWaitInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pWaitInfo.GetMetaStructPointer(), indent+1,pWaitInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint64_t timeout
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "timeout:                        "); //HRW
    OutputString(outputFile, "uint64_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, timeout); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkSignalSemaphoreKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSemaphoreSignalInfoKHR>& pSignalInfo)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkSignalSemaphoreKHR(device, pSignalInfo)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSemaphoreSignalInfoKHR* pSignalInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSignalInfo:                    "); //HRW
    OutputString(outputFile, "const VkSemaphoreSignalInfoKHR* = "); //TEQ
    if (pSignalInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pSignalInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pSignalInfo.GetMetaStructPointer(), indent+1,pSignalInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetPipelineExecutablePropertiesKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkPipelineInfoKHR>& pPipelineInfo,
    const PointerDecoder<uint32_t>&             pExecutableCount,
    const StructPointerDecoder<Decoded_VkPipelineExecutablePropertiesKHR>& pProperties)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPipelineExecutablePropertiesKHR(device, pPipelineInfo, pExecutableCount, pProperties)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPipelineInfoKHR* pPipelineInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pPipelineInfo:                  "); //HRW
    OutputString(outputFile, "const VkPipelineInfoKHR* = "); //TEQ
    if (pPipelineInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pPipelineInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pPipelineInfo.GetMetaStructPointer(), indent+1,pPipelineInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pExecutableCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pExecutableCount:               "); //HRW
    OutputString(outputFile, "uint32_t* = "); //TEQ
    if (pExecutableCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pExecutableCount = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pExecutableCount.GetPointer(), vinfo_pExecutableCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineExecutablePropertiesKHR* pProperties
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pProperties:                    "); //HRW
    OutputString(outputFile, "VkPipelineExecutablePropertiesKHR* = "); //TEQ
    if (pProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pProperties.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkPipelineExecutablePropertiesKHR>(outputFile, indent+1, 1, "VkPipelineExecutablePropertiesKHR", pProperties.GetMetaStructPointer(), "pProperties", *pExecutableCount.GetPointer(), false, pProperties.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPipelineExecutableStatisticsKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkPipelineExecutableInfoKHR>& pExecutableInfo,
    const PointerDecoder<uint32_t>&             pStatisticCount,
    const StructPointerDecoder<Decoded_VkPipelineExecutableStatisticKHR>& pStatistics)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPipelineExecutableStatisticsKHR(device, pExecutableInfo, pStatisticCount, pStatistics)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPipelineExecutableInfoKHR* pExecutableInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pExecutableInfo:                "); //HRW
    OutputString(outputFile, "const VkPipelineExecutableInfoKHR* = "); //TEQ
    if (pExecutableInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pExecutableInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pExecutableInfo.GetMetaStructPointer(), indent+1,pExecutableInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pStatisticCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pStatisticCount:                "); //HRW
    OutputString(outputFile, "uint32_t* = "); //TEQ
    if (pStatisticCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pStatisticCount = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pStatisticCount.GetPointer(), vinfo_pStatisticCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineExecutableStatisticKHR* pStatistics
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pStatistics:                    "); //HRW
    OutputString(outputFile, "VkPipelineExecutableStatisticKHR* = "); //TEQ
    if (pStatistics.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pStatistics.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkPipelineExecutableStatisticKHR>(outputFile, indent+1, 1, "VkPipelineExecutableStatisticKHR", pStatistics.GetMetaStructPointer(), "pStatistics", *pStatisticCount.GetPointer(), false, pStatistics.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPipelineExecutableInternalRepresentationsKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkPipelineExecutableInfoKHR>& pExecutableInfo,
    const PointerDecoder<uint32_t>&             pInternalRepresentationCount,
    const StructPointerDecoder<Decoded_VkPipelineExecutableInternalRepresentationKHR>& pInternalRepresentations)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPipelineExecutableInternalRepresentationsKHR(device, pExecutableInfo, pInternalRepresentationCount, pInternalRepresentations)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPipelineExecutableInfoKHR* pExecutableInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pExecutableInfo:                "); //HRW
    OutputString(outputFile, "const VkPipelineExecutableInfoKHR* = "); //TEQ
    if (pExecutableInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pExecutableInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pExecutableInfo.GetMetaStructPointer(), indent+1,pExecutableInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pInternalRepresentationCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pInternalRepresentationCount:   "); //HRW
    OutputString(outputFile, "uint32_t* = "); //TEQ
    if (pInternalRepresentationCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pInternalRepresentationCount = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pInternalRepresentationCount.GetPointer(), vinfo_pInternalRepresentationCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineExecutableInternalRepresentationKHR* pInternalRepresentations
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pInternalRepresentations:       "); //HRW
    OutputString(outputFile, "VkPipelineExecutableInternalRepresentationKHR* = "); //TEQ
    if (pInternalRepresentations.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pInternalRepresentations.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkPipelineExecutableInternalRepresentationKHR>(outputFile, indent+1, 1, "VkPipelineExecutableInternalRepresentationKHR", pInternalRepresentations.GetMetaStructPointer(), "pInternalRepresentations", *pInternalRepresentationCount.GetPointer(), false, pInternalRepresentations.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateDebugReportCallbackEXT(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkDebugReportCallbackCreateInfoEXT>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkDebugReportCallbackEXT>& pCallback)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreateDebugReportCallbackEXT(instance, pCreateInfo, pAllocator, pCallback)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "instance:                       "); //HRW
    OutputString(outputFile, "VkInstance = "); //TEQ
    OutputAddr(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDebugReportCallbackCreateInfoEXT* pCreateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); //HRW
    OutputString(outputFile, "const VkDebugReportCallbackCreateInfoEXT* = "); //TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDebugReportCallbackEXT* pCallback
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCallback:                      "); //HRW
    OutputString(outputFile, "VkDebugReportCallbackEXT* = "); //TEQ
    if (pCallback.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pCallback = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pCallback.GetPointer(), vinfo_pCallback); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyDebugReportCallbackEXT(
    format::HandleId                            instance,
    format::HandleId                            callback,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkDestroyDebugReportCallbackEXT(instance, callback, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkInstance instance
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "instance:                       "); //HRW
    OutputString(outputFile, "VkInstance = "); //TEQ
    OutputAddr(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDebugReportCallbackEXT callback
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "callback:                       "); //HRW
    OutputString(outputFile, "VkDebugReportCallbackEXT = "); //TEQ
    OutputAddr(outputFile, callback); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDebugReportMessageEXT(
    format::HandleId                            instance,
    VkDebugReportFlagsEXT                       flags,
    VkDebugReportObjectTypeEXT                  objectType,
    uint64_t                                    object,
    size_t                                      location,
    int32_t                                     messageCode,
    const StringDecoder&                        pLayerPrefix,
    const StringDecoder&                        pMessage)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkDebugReportMessageEXT(instance, flags, objectType, object, location, messageCode, pLayerPrefix, pMessage)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkInstance instance
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "instance:                       "); //HRW
    OutputString(outputFile, "VkInstance = "); //TEQ
    OutputAddr(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDebugReportFlagsEXT flags
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "flags:                          "); //HRW
    OutputString(outputFile, "VkDebugReportFlagsEXT = "); //TEQ
    OutputFlags(outputFile, flags, OutputEnumVkDebugReportFlagBitsEXT); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDebugReportObjectTypeEXT objectType
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "objectType:                     "); //HRW
    OutputString(outputFile, "VkDebugReportObjectTypeEXT = "); //TEQ
    OutputEnumVkDebugReportObjectTypeEXT(outputFile, objectType); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimal(outputFile, objectType);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint64_t object
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "object:                         "); //HRW
    OutputString(outputFile, "uint64_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, object); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: size_t location
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "location:                       "); //HRW
    OutputString(outputFile, "size_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, location); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: int32_t messageCode
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "messageCode:                    "); //HRW
    OutputString(outputFile, "int32_t = "); //TEQ
    OutputSignedDecimal(outputFile, messageCode); //EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: const char* pLayerPrefix
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pLayerPrefix:                   "); //HRW
    OutputString(outputFile, "const char* = "); //TEQ
    StringToQuotedString(outputFile, pLayerPrefix.GetPointer()); // TGH
    OutputString(outputFile, "\n"); // HHS

    // func arg: const char* pMessage
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pMessage:                       "); //HRW
    OutputString(outputFile, "const char* = "); //TEQ
    StringToQuotedString(outputFile, pMessage.GetPointer()); // TGH
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkDebugMarkerSetObjectTagEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDebugMarkerObjectTagInfoEXT>& pTagInfo)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkDebugMarkerSetObjectTagEXT(device, pTagInfo)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDebugMarkerObjectTagInfoEXT* pTagInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pTagInfo:                       "); //HRW
    OutputString(outputFile, "const VkDebugMarkerObjectTagInfoEXT* = "); //TEQ
    if (pTagInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pTagInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pTagInfo.GetMetaStructPointer(), indent+1,pTagInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDebugMarkerSetObjectNameEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDebugMarkerObjectNameInfoEXT>& pNameInfo)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkDebugMarkerSetObjectNameEXT(device, pNameInfo)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDebugMarkerObjectNameInfoEXT* pNameInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pNameInfo:                      "); //HRW
    OutputString(outputFile, "const VkDebugMarkerObjectNameInfoEXT* = "); //TEQ
    if (pNameInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pNameInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pNameInfo.GetMetaStructPointer(), indent+1,pNameInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdDebugMarkerBeginEXT(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkDebugMarkerMarkerInfoEXT>& pMarkerInfo)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdDebugMarkerBeginEXT(commandBuffer, pMarkerInfo)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDebugMarkerMarkerInfoEXT* pMarkerInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pMarkerInfo:                    "); //HRW
    OutputString(outputFile, "const VkDebugMarkerMarkerInfoEXT* = "); //TEQ
    if (pMarkerInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pMarkerInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pMarkerInfo.GetMetaStructPointer(), indent+1,pMarkerInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdDebugMarkerEndEXT(
    format::HandleId                            commandBuffer)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdDebugMarkerEndEXT(commandBuffer)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdDebugMarkerInsertEXT(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkDebugMarkerMarkerInfoEXT>& pMarkerInfo)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdDebugMarkerInsertEXT(commandBuffer, pMarkerInfo)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDebugMarkerMarkerInfoEXT* pMarkerInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pMarkerInfo:                    "); //HRW
    OutputString(outputFile, "const VkDebugMarkerMarkerInfoEXT* = "); //TEQ
    if (pMarkerInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pMarkerInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pMarkerInfo.GetMetaStructPointer(), indent+1,pMarkerInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCmdBindTransformFeedbackBuffersEXT(
    format::HandleId                            commandBuffer,
    uint32_t                                    firstBinding,
    uint32_t                                    bindingCount,
    const HandlePointerDecoder<VkBuffer>&       pBuffers,
    const PointerDecoder<VkDeviceSize>&         pOffsets,
    const PointerDecoder<VkDeviceSize>&         pSizes)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdBindTransformFeedbackBuffersEXT(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets, pSizes)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstBinding
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "firstBinding:                   "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, firstBinding); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t bindingCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "bindingCount:                   "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, bindingCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBuffer* pBuffers
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pBuffers:                       "); //HRW
    OutputString(outputFile, "const VkBuffer* = "); //TEQ
    if (pBuffers.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pBuffers.GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pBuffers = {true, false, false, nullptr};
        OutputArray<const VkBuffer*>(outputFile, indent, 1, "const VkBuffer*", reinterpret_cast<const VkBuffer*>(pBuffers.GetPointer()), "pBuffers", bindingCount,  vinfo_pBuffers);  // CXC
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDeviceSize* pOffsets
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pOffsets:                       "); //HRW
    OutputString(outputFile, "const VkDeviceSize* = "); //TEQ
    if (pOffsets.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pOffsets.GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pOffsets = {false, false, false, nullptr};
        OutputArray<const VkDeviceSize*>(outputFile, indent, 1, "const VkDeviceSize*", reinterpret_cast<const VkDeviceSize*>(pOffsets.GetPointer()), "pOffsets", bindingCount,  vinfo_pOffsets);  // CXC
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDeviceSize* pSizes
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSizes:                         "); //HRW
    OutputString(outputFile, "const VkDeviceSize* = "); //TEQ
    if (pSizes.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pSizes.GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pSizes = {false, false, false, nullptr};
        OutputArray<const VkDeviceSize*>(outputFile, indent, 1, "const VkDeviceSize*", reinterpret_cast<const VkDeviceSize*>(pSizes.GetPointer()), "pSizes", bindingCount,  vinfo_pSizes);  // CXC
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdBeginTransformFeedbackEXT(
    format::HandleId                            commandBuffer,
    uint32_t                                    firstCounterBuffer,
    uint32_t                                    counterBufferCount,
    const HandlePointerDecoder<VkBuffer>&       pCounterBuffers,
    const PointerDecoder<VkDeviceSize>&         pCounterBufferOffsets)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdBeginTransformFeedbackEXT(commandBuffer, firstCounterBuffer, counterBufferCount, pCounterBuffers, pCounterBufferOffsets)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstCounterBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "firstCounterBuffer:             "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, firstCounterBuffer); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t counterBufferCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "counterBufferCount:             "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, counterBufferCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBuffer* pCounterBuffers
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCounterBuffers:                "); //HRW
    OutputString(outputFile, "const VkBuffer* = "); //TEQ
    if (pCounterBuffers.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCounterBuffers.GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pCounterBuffers = {true, false, false, nullptr};
        OutputArray<const VkBuffer*>(outputFile, indent, 1, "const VkBuffer*", reinterpret_cast<const VkBuffer*>(pCounterBuffers.GetPointer()), "pCounterBuffers", counterBufferCount,  vinfo_pCounterBuffers);  // CXC
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDeviceSize* pCounterBufferOffsets
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCounterBufferOffsets:          "); //HRW
    OutputString(outputFile, "const VkDeviceSize* = "); //TEQ
    if (pCounterBufferOffsets.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCounterBufferOffsets.GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pCounterBufferOffsets = {false, false, false, nullptr};
        OutputArray<const VkDeviceSize*>(outputFile, indent, 1, "const VkDeviceSize*", reinterpret_cast<const VkDeviceSize*>(pCounterBufferOffsets.GetPointer()), "pCounterBufferOffsets", counterBufferCount,  vinfo_pCounterBufferOffsets);  // CXC
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdEndTransformFeedbackEXT(
    format::HandleId                            commandBuffer,
    uint32_t                                    firstCounterBuffer,
    uint32_t                                    counterBufferCount,
    const HandlePointerDecoder<VkBuffer>&       pCounterBuffers,
    const PointerDecoder<VkDeviceSize>&         pCounterBufferOffsets)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdEndTransformFeedbackEXT(commandBuffer, firstCounterBuffer, counterBufferCount, pCounterBuffers, pCounterBufferOffsets)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstCounterBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "firstCounterBuffer:             "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, firstCounterBuffer); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t counterBufferCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "counterBufferCount:             "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, counterBufferCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBuffer* pCounterBuffers
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCounterBuffers:                "); //HRW
    OutputString(outputFile, "const VkBuffer* = "); //TEQ
    if (pCounterBuffers.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCounterBuffers.GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pCounterBuffers = {true, false, false, nullptr};
        OutputArray<const VkBuffer*>(outputFile, indent, 1, "const VkBuffer*", reinterpret_cast<const VkBuffer*>(pCounterBuffers.GetPointer()), "pCounterBuffers", counterBufferCount,  vinfo_pCounterBuffers);  // CXC
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDeviceSize* pCounterBufferOffsets
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCounterBufferOffsets:          "); //HRW
    OutputString(outputFile, "const VkDeviceSize* = "); //TEQ
    if (pCounterBufferOffsets.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCounterBufferOffsets.GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pCounterBufferOffsets = {false, false, false, nullptr};
        OutputArray<const VkDeviceSize*>(outputFile, indent, 1, "const VkDeviceSize*", reinterpret_cast<const VkDeviceSize*>(pCounterBufferOffsets.GetPointer()), "pCounterBufferOffsets", counterBufferCount,  vinfo_pCounterBufferOffsets);  // CXC
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdBeginQueryIndexedEXT(
    format::HandleId                            commandBuffer,
    format::HandleId                            queryPool,
    uint32_t                                    query,
    VkQueryControlFlags                         flags,
    uint32_t                                    index)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdBeginQueryIndexedEXT(commandBuffer, queryPool, query, flags, index)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryPool queryPool
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "queryPool:                      "); //HRW
    OutputString(outputFile, "VkQueryPool = "); //TEQ
    OutputAddr(outputFile, queryPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t query
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "query:                          "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, query); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryControlFlags flags
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "flags:                          "); //HRW
    OutputString(outputFile, "VkQueryControlFlags = "); //TEQ
    OutputFlags(outputFile, flags, OutputEnumVkQueryControlFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t index
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "index:                          "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, index); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdEndQueryIndexedEXT(
    format::HandleId                            commandBuffer,
    format::HandleId                            queryPool,
    uint32_t                                    query,
    uint32_t                                    index)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdEndQueryIndexedEXT(commandBuffer, queryPool, query, index)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryPool queryPool
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "queryPool:                      "); //HRW
    OutputString(outputFile, "VkQueryPool = "); //TEQ
    OutputAddr(outputFile, queryPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t query
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "query:                          "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, query); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t index
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "index:                          "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, index); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdDrawIndirectByteCountEXT(
    format::HandleId                            commandBuffer,
    uint32_t                                    instanceCount,
    uint32_t                                    firstInstance,
    format::HandleId                            counterBuffer,
    VkDeviceSize                                counterBufferOffset,
    uint32_t                                    counterOffset,
    uint32_t                                    vertexStride)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdDrawIndirectByteCountEXT(commandBuffer, instanceCount, firstInstance, counterBuffer, counterBufferOffset, counterOffset, vertexStride)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t instanceCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "instanceCount:                  "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, instanceCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstInstance
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "firstInstance:                  "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, firstInstance); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer counterBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "counterBuffer:                  "); //HRW
    OutputString(outputFile, "VkBuffer = "); //TEQ
    OutputAddr(outputFile, counterBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize counterBufferOffset
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "counterBufferOffset:            "); //HRW
    OutputString(outputFile, "VkDeviceSize = "); //TEQ
    OutputSignedDecimal(outputFile, counterBufferOffset); //EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t counterOffset
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "counterOffset:                  "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, counterOffset); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t vertexStride
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "vertexStride:                   "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, vertexStride); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetImageViewHandleNVX(
    uint32_t                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImageViewHandleInfoNVX>& pInfo)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetImageViewHandleNVX(device, pInfo)");
    fprintf(outputFile, " returns %u:\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImageViewHandleInfoNVX* pInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pInfo:                          "); //HRW
    OutputString(outputFile, "const VkImageViewHandleInfoNVX* = "); //TEQ
    if (pInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pInfo.GetMetaStructPointer(), indent+1,pInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCmdDrawIndirectCountAMD(
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    format::HandleId                            countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdDrawIndirectCountAMD(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer buffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "buffer:                         "); //HRW
    OutputString(outputFile, "VkBuffer = "); //TEQ
    OutputAddr(outputFile, buffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize offset
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "offset:                         "); //HRW
    OutputString(outputFile, "VkDeviceSize = "); //TEQ
    OutputSignedDecimal(outputFile, offset); //EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer countBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "countBuffer:                    "); //HRW
    OutputString(outputFile, "VkBuffer = "); //TEQ
    OutputAddr(outputFile, countBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize countBufferOffset
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "countBufferOffset:              "); //HRW
    OutputString(outputFile, "VkDeviceSize = "); //TEQ
    OutputSignedDecimal(outputFile, countBufferOffset); //EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t maxDrawCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "maxDrawCount:                   "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, maxDrawCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t stride
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "stride:                         "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, stride); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdDrawIndexedIndirectCountAMD(
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    format::HandleId                            countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdDrawIndexedIndirectCountAMD(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer buffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "buffer:                         "); //HRW
    OutputString(outputFile, "VkBuffer = "); //TEQ
    OutputAddr(outputFile, buffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize offset
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "offset:                         "); //HRW
    OutputString(outputFile, "VkDeviceSize = "); //TEQ
    OutputSignedDecimal(outputFile, offset); //EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer countBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "countBuffer:                    "); //HRW
    OutputString(outputFile, "VkBuffer = "); //TEQ
    OutputAddr(outputFile, countBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize countBufferOffset
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "countBufferOffset:              "); //HRW
    OutputString(outputFile, "VkDeviceSize = "); //TEQ
    OutputSignedDecimal(outputFile, countBufferOffset); //EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t maxDrawCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "maxDrawCount:                   "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, maxDrawCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t stride
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "stride:                         "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, stride); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetShaderInfoAMD(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            pipeline,
    VkShaderStageFlagBits                       shaderStage,
    VkShaderInfoTypeAMD                         infoType,
    const PointerDecoder<size_t>&               pInfoSize,
    const PointerDecoder<uint8_t>&              pInfo)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetShaderInfoAMD(device, pipeline, shaderStage, infoType, pInfoSize, pInfo)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipeline pipeline
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pipeline:                       "); //HRW
    OutputString(outputFile, "VkPipeline = "); //TEQ
    OutputAddr(outputFile, pipeline); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkShaderStageFlagBits shaderStage
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "shaderStage:                    "); //HRW
    OutputString(outputFile, "VkShaderStageFlagBits = "); //TEQ
    OutputEnumVkShaderStageFlagBits(outputFile, shaderStage); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimal(outputFile, shaderStage);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkShaderInfoTypeAMD infoType
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "infoType:                       "); //HRW
    OutputString(outputFile, "VkShaderInfoTypeAMD = "); //TEQ
    OutputEnumVkShaderInfoTypeAMD(outputFile, infoType); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimal(outputFile, infoType);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: size_t* pInfoSize
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pInfoSize:                      "); //HRW
    OutputString(outputFile, "size_t* = "); //TEQ
    if (pInfoSize.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pInfoSize = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pInfoSize.GetPointer(), vinfo_pInfoSize); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: void* pInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pInfo:                          "); //HRW
    OutputString(outputFile, "void* = "); //TEQ
    if (pInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pInfo.GetAddress()); // AHW
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateStreamDescriptorSurfaceGGP(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkStreamDescriptorSurfaceCreateInfoGGP>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreateStreamDescriptorSurfaceGGP(instance, pCreateInfo, pAllocator, pSurface)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "instance:                       "); //HRW
    OutputString(outputFile, "VkInstance = "); //TEQ
    OutputAddr(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkStreamDescriptorSurfaceCreateInfoGGP* pCreateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); //HRW
    OutputString(outputFile, "const VkStreamDescriptorSurfaceCreateInfoGGP* = "); //TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR* pSurface
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSurface:                       "); //HRW
    OutputString(outputFile, "VkSurfaceKHR* = "); //TEQ
    if (pSurface.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pSurface = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pSurface.GetPointer(), vinfo_pSurface); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceExternalImageFormatPropertiesNV(
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
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceExternalImageFormatPropertiesNV(physicalDevice, format, type, tiling, usage, flags, externalHandleType, pExternalImageFormatProperties)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFormat format
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "format:                         "); //HRW
    OutputString(outputFile, "VkFormat = "); //TEQ
    OutputEnumVkFormat(outputFile, format); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimal(outputFile, format);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageType type
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "type:                           "); //HRW
    OutputString(outputFile, "VkImageType = "); //TEQ
    OutputEnumVkImageType(outputFile, type); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimal(outputFile, type);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageTiling tiling
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "tiling:                         "); //HRW
    OutputString(outputFile, "VkImageTiling = "); //TEQ
    OutputEnumVkImageTiling(outputFile, tiling); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimal(outputFile, tiling);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageUsageFlags usage
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "usage:                          "); //HRW
    OutputString(outputFile, "VkImageUsageFlags = "); //TEQ
    OutputFlags(outputFile, usage, OutputEnumVkImageUsageFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageCreateFlags flags
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "flags:                          "); //HRW
    OutputString(outputFile, "VkImageCreateFlags = "); //TEQ
    OutputFlags(outputFile, flags, OutputEnumVkImageCreateFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkExternalMemoryHandleTypeFlagsNV externalHandleType
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "externalHandleType:             "); //HRW
    OutputString(outputFile, "VkExternalMemoryHandleTypeFlagsNV = "); //TEQ
    OutputFlags(outputFile, externalHandleType, OutputEnumVkExternalMemoryHandleTypeFlagBitsNV); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkExternalImageFormatPropertiesNV* pExternalImageFormatProperties
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pExternalImageFormatProperties: "); //HRW
    OutputString(outputFile, "VkExternalImageFormatPropertiesNV* = "); //TEQ
    if (pExternalImageFormatProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pExternalImageFormatProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pExternalImageFormatProperties.GetMetaStructPointer(), indent+1,pExternalImageFormatProperties.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetMemoryWin32HandleNV(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            memory,
    VkExternalMemoryHandleTypeFlagsNV           handleType,
    const PointerDecoder<uint64_t>&             pHandle)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetMemoryWin32HandleNV(device, memory, handleType, pHandle)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceMemory memory
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "memory:                         "); //HRW
    OutputString(outputFile, "VkDeviceMemory = "); //TEQ
    OutputAddr(outputFile, memory); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkExternalMemoryHandleTypeFlagsNV handleType
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "handleType:                     "); //HRW
    OutputString(outputFile, "VkExternalMemoryHandleTypeFlagsNV = "); //TEQ
    OutputFlags(outputFile, handleType, OutputEnumVkExternalMemoryHandleTypeFlagBitsNV); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: void** pHandle
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pHandle:                        "); //HRW
    OutputString(outputFile, "void** = "); //TEQ
    if (pHandle.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pHandle = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pHandle.GetPointer(), vinfo_pHandle); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateViSurfaceNN(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkViSurfaceCreateInfoNN>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreateViSurfaceNN(instance, pCreateInfo, pAllocator, pSurface)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "instance:                       "); //HRW
    OutputString(outputFile, "VkInstance = "); //TEQ
    OutputAddr(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkViSurfaceCreateInfoNN* pCreateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); //HRW
    OutputString(outputFile, "const VkViSurfaceCreateInfoNN* = "); //TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR* pSurface
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSurface:                       "); //HRW
    OutputString(outputFile, "VkSurfaceKHR* = "); //TEQ
    if (pSurface.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pSurface = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pSurface.GetPointer(), vinfo_pSurface); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCmdBeginConditionalRenderingEXT(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkConditionalRenderingBeginInfoEXT>& pConditionalRenderingBegin)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdBeginConditionalRenderingEXT(commandBuffer, pConditionalRenderingBegin)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkConditionalRenderingBeginInfoEXT* pConditionalRenderingBegin
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pConditionalRenderingBegin:     "); //HRW
    OutputString(outputFile, "const VkConditionalRenderingBeginInfoEXT* = "); //TEQ
    if (pConditionalRenderingBegin.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pConditionalRenderingBegin.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pConditionalRenderingBegin.GetMetaStructPointer(), indent+1,pConditionalRenderingBegin.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdEndConditionalRenderingEXT(
    format::HandleId                            commandBuffer)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdEndConditionalRenderingEXT(commandBuffer)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCmdProcessCommandsNVX(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkCmdProcessCommandsInfoNVX>& pProcessCommandsInfo)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdProcessCommandsNVX(commandBuffer, pProcessCommandsInfo)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkCmdProcessCommandsInfoNVX* pProcessCommandsInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pProcessCommandsInfo:           "); //HRW
    OutputString(outputFile, "const VkCmdProcessCommandsInfoNVX* = "); //TEQ
    if (pProcessCommandsInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pProcessCommandsInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pProcessCommandsInfo.GetMetaStructPointer(), indent+1,pProcessCommandsInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdReserveSpaceForCommandsNVX(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkCmdReserveSpaceForCommandsInfoNVX>& pReserveSpaceInfo)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdReserveSpaceForCommandsNVX(commandBuffer, pReserveSpaceInfo)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkCmdReserveSpaceForCommandsInfoNVX* pReserveSpaceInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pReserveSpaceInfo:              "); //HRW
    OutputString(outputFile, "const VkCmdReserveSpaceForCommandsInfoNVX* = "); //TEQ
    if (pReserveSpaceInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pReserveSpaceInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pReserveSpaceInfo.GetMetaStructPointer(), indent+1,pReserveSpaceInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateIndirectCommandsLayoutNVX(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkIndirectCommandsLayoutCreateInfoNVX>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkIndirectCommandsLayoutNVX>& pIndirectCommandsLayout)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreateIndirectCommandsLayoutNVX(device, pCreateInfo, pAllocator, pIndirectCommandsLayout)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkIndirectCommandsLayoutCreateInfoNVX* pCreateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); //HRW
    OutputString(outputFile, "const VkIndirectCommandsLayoutCreateInfoNVX* = "); //TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkIndirectCommandsLayoutNVX* pIndirectCommandsLayout
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pIndirectCommandsLayout:        "); //HRW
    OutputString(outputFile, "VkIndirectCommandsLayoutNVX* = "); //TEQ
    if (pIndirectCommandsLayout.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pIndirectCommandsLayout = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pIndirectCommandsLayout.GetPointer(), vinfo_pIndirectCommandsLayout); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyIndirectCommandsLayoutNVX(
    format::HandleId                            device,
    format::HandleId                            indirectCommandsLayout,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkDestroyIndirectCommandsLayoutNVX(device, indirectCommandsLayout, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkIndirectCommandsLayoutNVX indirectCommandsLayout
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "indirectCommandsLayout:         "); //HRW
    OutputString(outputFile, "VkIndirectCommandsLayoutNVX = "); //TEQ
    OutputAddr(outputFile, indirectCommandsLayout); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateObjectTableNVX(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkObjectTableCreateInfoNVX>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkObjectTableNVX>& pObjectTable)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreateObjectTableNVX(device, pCreateInfo, pAllocator, pObjectTable)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkObjectTableCreateInfoNVX* pCreateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); //HRW
    OutputString(outputFile, "const VkObjectTableCreateInfoNVX* = "); //TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkObjectTableNVX* pObjectTable
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pObjectTable:                   "); //HRW
    OutputString(outputFile, "VkObjectTableNVX* = "); //TEQ
    if (pObjectTable.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pObjectTable = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pObjectTable.GetPointer(), vinfo_pObjectTable); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyObjectTableNVX(
    format::HandleId                            device,
    format::HandleId                            objectTable,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkDestroyObjectTableNVX(device, objectTable, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkObjectTableNVX objectTable
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "objectTable:                    "); //HRW
    OutputString(outputFile, "VkObjectTableNVX = "); //TEQ
    OutputAddr(outputFile, objectTable); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkUnregisterObjectsNVX(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            objectTable,
    uint32_t                                    objectCount,
    const PointerDecoder<VkObjectEntryTypeNVX>& pObjectEntryTypes,
    const PointerDecoder<uint32_t>&             pObjectIndices)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkUnregisterObjectsNVX(device, objectTable, objectCount, pObjectEntryTypes, pObjectIndices)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkObjectTableNVX objectTable
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "objectTable:                    "); //HRW
    OutputString(outputFile, "VkObjectTableNVX = "); //TEQ
    OutputAddr(outputFile, objectTable); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t objectCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "objectCount:                    "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, objectCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkObjectEntryTypeNVX* pObjectEntryTypes
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pObjectEntryTypes:              "); //HRW
    OutputString(outputFile, "const VkObjectEntryTypeNVX* = "); //TEQ
    if (pObjectEntryTypes.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pObjectEntryTypes.GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pObjectEntryTypes = {false, true, false, OutputEnumVkObjectEntryTypeNVX};
        OutputArray<const VkObjectEntryTypeNVX*>(outputFile, indent, 1, "const VkObjectEntryTypeNVX*", reinterpret_cast<const VkObjectEntryTypeNVX*>(pObjectEntryTypes.GetPointer()), "pObjectEntryTypes", objectCount,  vinfo_pObjectEntryTypes);  // CXC
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const uint32_t* pObjectIndices
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pObjectIndices:                 "); //HRW
    OutputString(outputFile, "const uint32_t* = "); //TEQ
    if (pObjectIndices.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pObjectIndices.GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pObjectIndices = {false, false, false, nullptr};
        OutputArray<const uint32_t*>(outputFile, indent, 1, "const uint32_t*", reinterpret_cast<const uint32_t*>(pObjectIndices.GetPointer()), "pObjectIndices", objectCount,  vinfo_pObjectIndices);  // CXC
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkDeviceGeneratedCommandsFeaturesNVX>& pFeatures,
    const StructPointerDecoder<Decoded_VkDeviceGeneratedCommandsLimitsNVX>& pLimits)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX(physicalDevice, pFeatures, pLimits)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceGeneratedCommandsFeaturesNVX* pFeatures
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pFeatures:                      "); //HRW
    OutputString(outputFile, "VkDeviceGeneratedCommandsFeaturesNVX* = "); //TEQ
    if (pFeatures.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pFeatures.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pFeatures.GetMetaStructPointer(), indent+1,pFeatures.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceGeneratedCommandsLimitsNVX* pLimits
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pLimits:                        "); //HRW
    OutputString(outputFile, "VkDeviceGeneratedCommandsLimitsNVX* = "); //TEQ
    if (pLimits.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pLimits.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pLimits.GetMetaStructPointer(), indent+1,pLimits.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCmdSetViewportWScalingNV(
    format::HandleId                            commandBuffer,
    uint32_t                                    firstViewport,
    uint32_t                                    viewportCount,
    const StructPointerDecoder<Decoded_VkViewportWScalingNV>& pViewportWScalings)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdSetViewportWScalingNV(commandBuffer, firstViewport, viewportCount, pViewportWScalings)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstViewport
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "firstViewport:                  "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, firstViewport); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t viewportCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "viewportCount:                  "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, viewportCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkViewportWScalingNV* pViewportWScalings
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pViewportWScalings:             "); //HRW
    OutputString(outputFile, "const VkViewportWScalingNV* = "); //TEQ
    if (pViewportWScalings.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pViewportWScalings.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkViewportWScalingNV>(outputFile, indent+1, 1, "VkViewportWScalingNV", pViewportWScalings.GetMetaStructPointer(), "pViewportWScalings", viewportCount, false, pViewportWScalings.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkReleaseDisplayEXT(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            display)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkReleaseDisplayEXT(physicalDevice, display)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayKHR display
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "display:                        "); //HRW
    OutputString(outputFile, "VkDisplayKHR = "); //TEQ
    OutputAddr(outputFile, display); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkAcquireXlibDisplayEXT(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    uint64_t                                    dpy,
    format::HandleId                            display)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkAcquireXlibDisplayEXT(physicalDevice, dpy, display)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: void* dpy
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "dpy:                            "); //HRW
    OutputString(outputFile, "void* = "); //TEQ
    OutputAddr(outputFile, dpy); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayKHR display
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "display:                        "); //HRW
    OutputString(outputFile, "VkDisplayKHR = "); //TEQ
    OutputAddr(outputFile, display); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetRandROutputDisplayEXT(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    uint64_t                                    dpy,
    size_t                                      rrOutput,
    const HandlePointerDecoder<VkDisplayKHR>&   pDisplay)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetRandROutputDisplayEXT(physicalDevice, dpy, rrOutput, pDisplay)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: void* dpy
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "dpy:                            "); //HRW
    OutputString(outputFile, "void* = "); //TEQ
    OutputAddr(outputFile, dpy); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: size_t rrOutput
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "rrOutput:                       "); //HRW
    OutputString(outputFile, "size_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, rrOutput); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayKHR* pDisplay
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pDisplay:                       "); //HRW
    OutputString(outputFile, "VkDisplayKHR* = "); //TEQ
    if (pDisplay.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pDisplay = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pDisplay.GetPointer(), vinfo_pDisplay); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSurfaceCapabilities2EXT(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            surface,
    const StructPointerDecoder<Decoded_VkSurfaceCapabilities2EXT>& pSurfaceCapabilities)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceSurfaceCapabilities2EXT(physicalDevice, surface, pSurfaceCapabilities)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR surface
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "surface:                        "); //HRW
    OutputString(outputFile, "VkSurfaceKHR = "); //TEQ
    OutputAddr(outputFile, surface); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceCapabilities2EXT* pSurfaceCapabilities
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSurfaceCapabilities:           "); //HRW
    OutputString(outputFile, "VkSurfaceCapabilities2EXT* = "); //TEQ
    if (pSurfaceCapabilities.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pSurfaceCapabilities.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pSurfaceCapabilities.GetMetaStructPointer(), indent+1,pSurfaceCapabilities.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkDisplayPowerControlEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            display,
    const StructPointerDecoder<Decoded_VkDisplayPowerInfoEXT>& pDisplayPowerInfo)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkDisplayPowerControlEXT(device, display, pDisplayPowerInfo)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayKHR display
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "display:                        "); //HRW
    OutputString(outputFile, "VkDisplayKHR = "); //TEQ
    OutputAddr(outputFile, display); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDisplayPowerInfoEXT* pDisplayPowerInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pDisplayPowerInfo:              "); //HRW
    OutputString(outputFile, "const VkDisplayPowerInfoEXT* = "); //TEQ
    if (pDisplayPowerInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pDisplayPowerInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pDisplayPowerInfo.GetMetaStructPointer(), indent+1,pDisplayPowerInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkRegisterDeviceEventEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDeviceEventInfoEXT>& pDeviceEventInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkFence>&        pFence)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkRegisterDeviceEventEXT(device, pDeviceEventInfo, pAllocator, pFence)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDeviceEventInfoEXT* pDeviceEventInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pDeviceEventInfo:               "); //HRW
    OutputString(outputFile, "const VkDeviceEventInfoEXT* = "); //TEQ
    if (pDeviceEventInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pDeviceEventInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pDeviceEventInfo.GetMetaStructPointer(), indent+1,pDeviceEventInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFence* pFence
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pFence:                         "); //HRW
    OutputString(outputFile, "VkFence* = "); //TEQ
    if (pFence.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pFence = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pFence.GetPointer(), vinfo_pFence); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkRegisterDisplayEventEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            display,
    const StructPointerDecoder<Decoded_VkDisplayEventInfoEXT>& pDisplayEventInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkFence>&        pFence)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkRegisterDisplayEventEXT(device, display, pDisplayEventInfo, pAllocator, pFence)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayKHR display
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "display:                        "); //HRW
    OutputString(outputFile, "VkDisplayKHR = "); //TEQ
    OutputAddr(outputFile, display); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDisplayEventInfoEXT* pDisplayEventInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pDisplayEventInfo:              "); //HRW
    OutputString(outputFile, "const VkDisplayEventInfoEXT* = "); //TEQ
    if (pDisplayEventInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pDisplayEventInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pDisplayEventInfo.GetMetaStructPointer(), indent+1,pDisplayEventInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFence* pFence
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pFence:                         "); //HRW
    OutputString(outputFile, "VkFence* = "); //TEQ
    if (pFence.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pFence = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pFence.GetPointer(), vinfo_pFence); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetSwapchainCounterEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain,
    VkSurfaceCounterFlagBitsEXT                 counter,
    const PointerDecoder<uint64_t>&             pCounterValue)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetSwapchainCounterEXT(device, swapchain, counter, pCounterValue)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSwapchainKHR swapchain
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "swapchain:                      "); //HRW
    OutputString(outputFile, "VkSwapchainKHR = "); //TEQ
    OutputAddr(outputFile, swapchain); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceCounterFlagBitsEXT counter
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "counter:                        "); //HRW
    OutputString(outputFile, "VkSurfaceCounterFlagBitsEXT = "); //TEQ
    OutputEnumVkSurfaceCounterFlagBitsEXT(outputFile, counter); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimal(outputFile, counter);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint64_t* pCounterValue
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCounterValue:                  "); //HRW
    OutputString(outputFile, "uint64_t* = "); //TEQ
    if (pCounterValue.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pCounterValue = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pCounterValue.GetPointer(), vinfo_pCounterValue); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetRefreshCycleDurationGOOGLE(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain,
    const StructPointerDecoder<Decoded_VkRefreshCycleDurationGOOGLE>& pDisplayTimingProperties)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetRefreshCycleDurationGOOGLE(device, swapchain, pDisplayTimingProperties)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSwapchainKHR swapchain
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "swapchain:                      "); //HRW
    OutputString(outputFile, "VkSwapchainKHR = "); //TEQ
    OutputAddr(outputFile, swapchain); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkRefreshCycleDurationGOOGLE* pDisplayTimingProperties
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pDisplayTimingProperties:       "); //HRW
    OutputString(outputFile, "VkRefreshCycleDurationGOOGLE* = "); //TEQ
    if (pDisplayTimingProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pDisplayTimingProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pDisplayTimingProperties.GetMetaStructPointer(), indent+1,pDisplayTimingProperties.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPastPresentationTimingGOOGLE(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain,
    const PointerDecoder<uint32_t>&             pPresentationTimingCount,
    const StructPointerDecoder<Decoded_VkPastPresentationTimingGOOGLE>& pPresentationTimings)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPastPresentationTimingGOOGLE(device, swapchain, pPresentationTimingCount, pPresentationTimings)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSwapchainKHR swapchain
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "swapchain:                      "); //HRW
    OutputString(outputFile, "VkSwapchainKHR = "); //TEQ
    OutputAddr(outputFile, swapchain); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pPresentationTimingCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pPresentationTimingCount:       "); //HRW
    OutputString(outputFile, "uint32_t* = "); //TEQ
    if (pPresentationTimingCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pPresentationTimingCount = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pPresentationTimingCount.GetPointer(), vinfo_pPresentationTimingCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPastPresentationTimingGOOGLE* pPresentationTimings
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pPresentationTimings:           "); //HRW
    OutputString(outputFile, "VkPastPresentationTimingGOOGLE* = "); //TEQ
    if (pPresentationTimings.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pPresentationTimings.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkPastPresentationTimingGOOGLE>(outputFile, indent+1, 1, "VkPastPresentationTimingGOOGLE", pPresentationTimings.GetMetaStructPointer(), "pPresentationTimings", *pPresentationTimingCount.GetPointer(), false, pPresentationTimings.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCmdSetDiscardRectangleEXT(
    format::HandleId                            commandBuffer,
    uint32_t                                    firstDiscardRectangle,
    uint32_t                                    discardRectangleCount,
    const StructPointerDecoder<Decoded_VkRect2D>& pDiscardRectangles)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdSetDiscardRectangleEXT(commandBuffer, firstDiscardRectangle, discardRectangleCount, pDiscardRectangles)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstDiscardRectangle
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "firstDiscardRectangle:          "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, firstDiscardRectangle); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t discardRectangleCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "discardRectangleCount:          "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, discardRectangleCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkRect2D* pDiscardRectangles
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pDiscardRectangles:             "); //HRW
    OutputString(outputFile, "const VkRect2D* = "); //TEQ
    if (pDiscardRectangles.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pDiscardRectangles.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkRect2D>(outputFile, indent+1, 1, "VkRect2D", pDiscardRectangles.GetMetaStructPointer(), "pDiscardRectangles", discardRectangleCount, false, pDiscardRectangles.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkSetHdrMetadataEXT(
    format::HandleId                            device,
    uint32_t                                    swapchainCount,
    const HandlePointerDecoder<VkSwapchainKHR>& pSwapchains,
    const StructPointerDecoder<Decoded_VkHdrMetadataEXT>& pMetadata)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkSetHdrMetadataEXT(device, swapchainCount, pSwapchains, pMetadata)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t swapchainCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "swapchainCount:                 "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, swapchainCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSwapchainKHR* pSwapchains
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSwapchains:                    "); //HRW
    OutputString(outputFile, "const VkSwapchainKHR* = "); //TEQ
    if (pSwapchains.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pSwapchains.GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pSwapchains = {true, false, false, nullptr};
        OutputArray<const VkSwapchainKHR*>(outputFile, indent, 1, "const VkSwapchainKHR*", reinterpret_cast<const VkSwapchainKHR*>(pSwapchains.GetPointer()), "pSwapchains", swapchainCount,  vinfo_pSwapchains);  // CXC
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkHdrMetadataEXT* pMetadata
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pMetadata:                      "); //HRW
    OutputString(outputFile, "const VkHdrMetadataEXT* = "); //TEQ
    if (pMetadata.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pMetadata.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkHdrMetadataEXT>(outputFile, indent+1, 1, "VkHdrMetadataEXT", pMetadata.GetMetaStructPointer(), "pMetadata", swapchainCount, false, pMetadata.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateIOSSurfaceMVK(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkIOSSurfaceCreateInfoMVK>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreateIOSSurfaceMVK(instance, pCreateInfo, pAllocator, pSurface)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "instance:                       "); //HRW
    OutputString(outputFile, "VkInstance = "); //TEQ
    OutputAddr(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkIOSSurfaceCreateInfoMVK* pCreateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); //HRW
    OutputString(outputFile, "const VkIOSSurfaceCreateInfoMVK* = "); //TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR* pSurface
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSurface:                       "); //HRW
    OutputString(outputFile, "VkSurfaceKHR* = "); //TEQ
    if (pSurface.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pSurface = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pSurface.GetPointer(), vinfo_pSurface); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateMacOSSurfaceMVK(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkMacOSSurfaceCreateInfoMVK>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreateMacOSSurfaceMVK(instance, pCreateInfo, pAllocator, pSurface)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "instance:                       "); //HRW
    OutputString(outputFile, "VkInstance = "); //TEQ
    OutputAddr(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkMacOSSurfaceCreateInfoMVK* pCreateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); //HRW
    OutputString(outputFile, "const VkMacOSSurfaceCreateInfoMVK* = "); //TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR* pSurface
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSurface:                       "); //HRW
    OutputString(outputFile, "VkSurfaceKHR* = "); //TEQ
    if (pSurface.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pSurface = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pSurface.GetPointer(), vinfo_pSurface); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkSetDebugUtilsObjectNameEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDebugUtilsObjectNameInfoEXT>& pNameInfo)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkSetDebugUtilsObjectNameEXT(device, pNameInfo)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDebugUtilsObjectNameInfoEXT* pNameInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pNameInfo:                      "); //HRW
    OutputString(outputFile, "const VkDebugUtilsObjectNameInfoEXT* = "); //TEQ
    if (pNameInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pNameInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pNameInfo.GetMetaStructPointer(), indent+1,pNameInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkSetDebugUtilsObjectTagEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDebugUtilsObjectTagInfoEXT>& pTagInfo)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkSetDebugUtilsObjectTagEXT(device, pTagInfo)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDebugUtilsObjectTagInfoEXT* pTagInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pTagInfo:                       "); //HRW
    OutputString(outputFile, "const VkDebugUtilsObjectTagInfoEXT* = "); //TEQ
    if (pTagInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pTagInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pTagInfo.GetMetaStructPointer(), indent+1,pTagInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkQueueBeginDebugUtilsLabelEXT(
    format::HandleId                            queue,
    const StructPointerDecoder<Decoded_VkDebugUtilsLabelEXT>& pLabelInfo)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkQueueBeginDebugUtilsLabelEXT(queue, pLabelInfo)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkQueue queue
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "queue:                          "); //HRW
    OutputString(outputFile, "VkQueue = "); //TEQ
    OutputAddr(outputFile, queue); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDebugUtilsLabelEXT* pLabelInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pLabelInfo:                     "); //HRW
    OutputString(outputFile, "const VkDebugUtilsLabelEXT* = "); //TEQ
    if (pLabelInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pLabelInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pLabelInfo.GetMetaStructPointer(), indent+1,pLabelInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkQueueEndDebugUtilsLabelEXT(
    format::HandleId                            queue)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkQueueEndDebugUtilsLabelEXT(queue)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkQueue queue
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "queue:                          "); //HRW
    OutputString(outputFile, "VkQueue = "); //TEQ
    OutputAddr(outputFile, queue); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkQueueInsertDebugUtilsLabelEXT(
    format::HandleId                            queue,
    const StructPointerDecoder<Decoded_VkDebugUtilsLabelEXT>& pLabelInfo)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkQueueInsertDebugUtilsLabelEXT(queue, pLabelInfo)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkQueue queue
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "queue:                          "); //HRW
    OutputString(outputFile, "VkQueue = "); //TEQ
    OutputAddr(outputFile, queue); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDebugUtilsLabelEXT* pLabelInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pLabelInfo:                     "); //HRW
    OutputString(outputFile, "const VkDebugUtilsLabelEXT* = "); //TEQ
    if (pLabelInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pLabelInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pLabelInfo.GetMetaStructPointer(), indent+1,pLabelInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdBeginDebugUtilsLabelEXT(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkDebugUtilsLabelEXT>& pLabelInfo)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdBeginDebugUtilsLabelEXT(commandBuffer, pLabelInfo)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDebugUtilsLabelEXT* pLabelInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pLabelInfo:                     "); //HRW
    OutputString(outputFile, "const VkDebugUtilsLabelEXT* = "); //TEQ
    if (pLabelInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pLabelInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pLabelInfo.GetMetaStructPointer(), indent+1,pLabelInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdEndDebugUtilsLabelEXT(
    format::HandleId                            commandBuffer)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdEndDebugUtilsLabelEXT(commandBuffer)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdInsertDebugUtilsLabelEXT(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkDebugUtilsLabelEXT>& pLabelInfo)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdInsertDebugUtilsLabelEXT(commandBuffer, pLabelInfo)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDebugUtilsLabelEXT* pLabelInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pLabelInfo:                     "); //HRW
    OutputString(outputFile, "const VkDebugUtilsLabelEXT* = "); //TEQ
    if (pLabelInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pLabelInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pLabelInfo.GetMetaStructPointer(), indent+1,pLabelInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateDebugUtilsMessengerEXT(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkDebugUtilsMessengerCreateInfoEXT>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkDebugUtilsMessengerEXT>& pMessenger)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreateDebugUtilsMessengerEXT(instance, pCreateInfo, pAllocator, pMessenger)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "instance:                       "); //HRW
    OutputString(outputFile, "VkInstance = "); //TEQ
    OutputAddr(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDebugUtilsMessengerCreateInfoEXT* pCreateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); //HRW
    OutputString(outputFile, "const VkDebugUtilsMessengerCreateInfoEXT* = "); //TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDebugUtilsMessengerEXT* pMessenger
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pMessenger:                     "); //HRW
    OutputString(outputFile, "VkDebugUtilsMessengerEXT* = "); //TEQ
    if (pMessenger.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pMessenger = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pMessenger.GetPointer(), vinfo_pMessenger); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyDebugUtilsMessengerEXT(
    format::HandleId                            instance,
    format::HandleId                            messenger,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkDestroyDebugUtilsMessengerEXT(instance, messenger, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkInstance instance
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "instance:                       "); //HRW
    OutputString(outputFile, "VkInstance = "); //TEQ
    OutputAddr(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDebugUtilsMessengerEXT messenger
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "messenger:                      "); //HRW
    OutputString(outputFile, "VkDebugUtilsMessengerEXT = "); //TEQ
    OutputAddr(outputFile, messenger); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkSubmitDebugUtilsMessageEXT(
    format::HandleId                            instance,
    VkDebugUtilsMessageSeverityFlagBitsEXT      messageSeverity,
    VkDebugUtilsMessageTypeFlagsEXT             messageTypes,
    const StructPointerDecoder<Decoded_VkDebugUtilsMessengerCallbackDataEXT>& pCallbackData)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkSubmitDebugUtilsMessageEXT(instance, messageSeverity, messageTypes, pCallbackData)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkInstance instance
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "instance:                       "); //HRW
    OutputString(outputFile, "VkInstance = "); //TEQ
    OutputAddr(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "messageSeverity:                "); //HRW
    OutputString(outputFile, "VkDebugUtilsMessageSeverityFlagBitsEXT = "); //TEQ
    OutputEnumVkDebugUtilsMessageSeverityFlagBitsEXT(outputFile, messageSeverity); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimal(outputFile, messageSeverity);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDebugUtilsMessageTypeFlagsEXT messageTypes
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "messageTypes:                   "); //HRW
    OutputString(outputFile, "VkDebugUtilsMessageTypeFlagsEXT = "); //TEQ
    OutputFlags(outputFile, messageTypes, OutputEnumVkDebugUtilsMessageTypeFlagBitsEXT); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDebugUtilsMessengerCallbackDataEXT* pCallbackData
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCallbackData:                  "); //HRW
    OutputString(outputFile, "const VkDebugUtilsMessengerCallbackDataEXT* = "); //TEQ
    if (pCallbackData.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCallbackData.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCallbackData.GetMetaStructPointer(), indent+1,pCallbackData.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetAndroidHardwareBufferPropertiesANDROID(
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint64_t                                    buffer,
    const StructPointerDecoder<Decoded_VkAndroidHardwareBufferPropertiesANDROID>& pProperties)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetAndroidHardwareBufferPropertiesANDROID(device, buffer, pProperties)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const struct void* buffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "buffer:                         "); //HRW
    OutputString(outputFile, "const struct void* = "); //TEQ
    if ( !buffer) // WWW
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, buffer); // PWR
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkAndroidHardwareBufferPropertiesANDROID* pProperties
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pProperties:                    "); //HRW
    OutputString(outputFile, "VkAndroidHardwareBufferPropertiesANDROID* = "); //TEQ
    if (pProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pProperties.GetMetaStructPointer(), indent+1,pProperties.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetMemoryAndroidHardwareBufferANDROID(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkMemoryGetAndroidHardwareBufferInfoANDROID>& pInfo,
    const PointerDecoder<uint64_t>&             pBuffer)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetMemoryAndroidHardwareBufferANDROID(device, pInfo, pBuffer)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkMemoryGetAndroidHardwareBufferInfoANDROID* pInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pInfo:                          "); //HRW
    OutputString(outputFile, "const VkMemoryGetAndroidHardwareBufferInfoANDROID* = "); //TEQ
    if (pInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pInfo.GetMetaStructPointer(), indent+1,pInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: struct void** pBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pBuffer:                        "); //HRW
    OutputString(outputFile, "struct void** = "); //TEQ
    if (pBuffer.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pBuffer = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pBuffer.GetPointer(), vinfo_pBuffer); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCmdSetSampleLocationsEXT(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkSampleLocationsInfoEXT>& pSampleLocationsInfo)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdSetSampleLocationsEXT(commandBuffer, pSampleLocationsInfo)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSampleLocationsInfoEXT* pSampleLocationsInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSampleLocationsInfo:           "); //HRW
    OutputString(outputFile, "const VkSampleLocationsInfoEXT* = "); //TEQ
    if (pSampleLocationsInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pSampleLocationsInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pSampleLocationsInfo.GetMetaStructPointer(), indent+1,pSampleLocationsInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceMultisamplePropertiesEXT(
    format::HandleId                            physicalDevice,
    VkSampleCountFlagBits                       samples,
    const StructPointerDecoder<Decoded_VkMultisamplePropertiesEXT>& pMultisampleProperties)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceMultisamplePropertiesEXT(physicalDevice, samples, pMultisampleProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSampleCountFlagBits samples
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "samples:                        "); //HRW
    OutputString(outputFile, "VkSampleCountFlagBits = "); //TEQ
    OutputEnumVkSampleCountFlagBits(outputFile, samples); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimal(outputFile, samples);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkMultisamplePropertiesEXT* pMultisampleProperties
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pMultisampleProperties:         "); //HRW
    OutputString(outputFile, "VkMultisamplePropertiesEXT* = "); //TEQ
    if (pMultisampleProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pMultisampleProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pMultisampleProperties.GetMetaStructPointer(), indent+1,pMultisampleProperties.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetImageDrmFormatModifierPropertiesEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            image,
    const StructPointerDecoder<Decoded_VkImageDrmFormatModifierPropertiesEXT>& pProperties)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetImageDrmFormatModifierPropertiesEXT(device, image, pProperties)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage image
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "image:                          "); //HRW
    OutputString(outputFile, "VkImage = "); //TEQ
    OutputAddr(outputFile, image); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageDrmFormatModifierPropertiesEXT* pProperties
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pProperties:                    "); //HRW
    OutputString(outputFile, "VkImageDrmFormatModifierPropertiesEXT* = "); //TEQ
    if (pProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pProperties.GetMetaStructPointer(), indent+1,pProperties.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateValidationCacheEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkValidationCacheCreateInfoEXT>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkValidationCacheEXT>& pValidationCache)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreateValidationCacheEXT(device, pCreateInfo, pAllocator, pValidationCache)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkValidationCacheCreateInfoEXT* pCreateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); //HRW
    OutputString(outputFile, "const VkValidationCacheCreateInfoEXT* = "); //TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkValidationCacheEXT* pValidationCache
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pValidationCache:               "); //HRW
    OutputString(outputFile, "VkValidationCacheEXT* = "); //TEQ
    if (pValidationCache.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pValidationCache = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pValidationCache.GetPointer(), vinfo_pValidationCache); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyValidationCacheEXT(
    format::HandleId                            device,
    format::HandleId                            validationCache,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkDestroyValidationCacheEXT(device, validationCache, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkValidationCacheEXT validationCache
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "validationCache:                "); //HRW
    OutputString(outputFile, "VkValidationCacheEXT = "); //TEQ
    OutputAddr(outputFile, validationCache); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkMergeValidationCachesEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            dstCache,
    uint32_t                                    srcCacheCount,
    const HandlePointerDecoder<VkValidationCacheEXT>& pSrcCaches)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkMergeValidationCachesEXT(device, dstCache, srcCacheCount, pSrcCaches)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkValidationCacheEXT dstCache
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "dstCache:                       "); //HRW
    OutputString(outputFile, "VkValidationCacheEXT = "); //TEQ
    OutputAddr(outputFile, dstCache); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t srcCacheCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "srcCacheCount:                  "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, srcCacheCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkValidationCacheEXT* pSrcCaches
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSrcCaches:                     "); //HRW
    OutputString(outputFile, "const VkValidationCacheEXT* = "); //TEQ
    if (pSrcCaches.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pSrcCaches.GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pSrcCaches = {true, false, false, nullptr};
        OutputArray<const VkValidationCacheEXT*>(outputFile, indent, 1, "const VkValidationCacheEXT*", reinterpret_cast<const VkValidationCacheEXT*>(pSrcCaches.GetPointer()), "pSrcCaches", srcCacheCount,  vinfo_pSrcCaches);  // CXC
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetValidationCacheDataEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            validationCache,
    const PointerDecoder<size_t>&               pDataSize,
    const PointerDecoder<uint8_t>&              pData)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetValidationCacheDataEXT(device, validationCache, pDataSize, pData)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkValidationCacheEXT validationCache
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "validationCache:                "); //HRW
    OutputString(outputFile, "VkValidationCacheEXT = "); //TEQ
    OutputAddr(outputFile, validationCache); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: size_t* pDataSize
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pDataSize:                      "); //HRW
    OutputString(outputFile, "size_t* = "); //TEQ
    if (pDataSize.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pDataSize = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pDataSize.GetPointer(), vinfo_pDataSize); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: void* pData
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pData:                          "); //HRW
    OutputString(outputFile, "void* = "); //TEQ
    if (pData.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pData.GetAddress()); // AHW
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCmdBindShadingRateImageNV(
    format::HandleId                            commandBuffer,
    format::HandleId                            imageView,
    VkImageLayout                               imageLayout)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdBindShadingRateImageNV(commandBuffer, imageView, imageLayout)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageView imageView
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "imageView:                      "); //HRW
    OutputString(outputFile, "VkImageView = "); //TEQ
    OutputAddr(outputFile, imageView); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageLayout imageLayout
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "imageLayout:                    "); //HRW
    OutputString(outputFile, "VkImageLayout = "); //TEQ
    OutputEnumVkImageLayout(outputFile, imageLayout); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimal(outputFile, imageLayout);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdSetViewportShadingRatePaletteNV(
    format::HandleId                            commandBuffer,
    uint32_t                                    firstViewport,
    uint32_t                                    viewportCount,
    const StructPointerDecoder<Decoded_VkShadingRatePaletteNV>& pShadingRatePalettes)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdSetViewportShadingRatePaletteNV(commandBuffer, firstViewport, viewportCount, pShadingRatePalettes)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstViewport
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "firstViewport:                  "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, firstViewport); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t viewportCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "viewportCount:                  "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, viewportCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkShadingRatePaletteNV* pShadingRatePalettes
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pShadingRatePalettes:           "); //HRW
    OutputString(outputFile, "const VkShadingRatePaletteNV* = "); //TEQ
    if (pShadingRatePalettes.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pShadingRatePalettes.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkShadingRatePaletteNV>(outputFile, indent+1, 1, "VkShadingRatePaletteNV", pShadingRatePalettes.GetMetaStructPointer(), "pShadingRatePalettes", viewportCount, false, pShadingRatePalettes.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdSetCoarseSampleOrderNV(
    format::HandleId                            commandBuffer,
    VkCoarseSampleOrderTypeNV                   sampleOrderType,
    uint32_t                                    customSampleOrderCount,
    const StructPointerDecoder<Decoded_VkCoarseSampleOrderCustomNV>& pCustomSampleOrders)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdSetCoarseSampleOrderNV(commandBuffer, sampleOrderType, customSampleOrderCount, pCustomSampleOrders)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkCoarseSampleOrderTypeNV sampleOrderType
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "sampleOrderType:                "); //HRW
    OutputString(outputFile, "VkCoarseSampleOrderTypeNV = "); //TEQ
    OutputEnumVkCoarseSampleOrderTypeNV(outputFile, sampleOrderType); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimal(outputFile, sampleOrderType);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t customSampleOrderCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "customSampleOrderCount:         "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, customSampleOrderCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkCoarseSampleOrderCustomNV* pCustomSampleOrders
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCustomSampleOrders:            "); //HRW
    OutputString(outputFile, "const VkCoarseSampleOrderCustomNV* = "); //TEQ
    if (pCustomSampleOrders.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCustomSampleOrders.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkCoarseSampleOrderCustomNV>(outputFile, indent+1, 1, "VkCoarseSampleOrderCustomNV", pCustomSampleOrders.GetMetaStructPointer(), "pCustomSampleOrders", customSampleOrderCount, false, pCustomSampleOrders.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateAccelerationStructureNV(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkAccelerationStructureCreateInfoNV>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkAccelerationStructureNV>& pAccelerationStructure)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreateAccelerationStructureNV(device, pCreateInfo, pAllocator, pAccelerationStructure)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAccelerationStructureCreateInfoNV* pCreateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); //HRW
    OutputString(outputFile, "const VkAccelerationStructureCreateInfoNV* = "); //TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkAccelerationStructureNV* pAccelerationStructure
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAccelerationStructure:         "); //HRW
    OutputString(outputFile, "VkAccelerationStructureNV* = "); //TEQ
    if (pAccelerationStructure.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pAccelerationStructure = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pAccelerationStructure.GetPointer(), vinfo_pAccelerationStructure); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyAccelerationStructureNV(
    format::HandleId                            device,
    format::HandleId                            accelerationStructure,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkDestroyAccelerationStructureNV(device, accelerationStructure, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkAccelerationStructureNV accelerationStructure
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "accelerationStructure:          "); //HRW
    OutputString(outputFile, "VkAccelerationStructureNV = "); //TEQ
    OutputAddr(outputFile, accelerationStructure); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetAccelerationStructureMemoryRequirementsNV(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkAccelerationStructureMemoryRequirementsInfoNV>& pInfo,
    const StructPointerDecoder<Decoded_VkMemoryRequirements2KHR>& pMemoryRequirements)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetAccelerationStructureMemoryRequirementsNV(device, pInfo, pMemoryRequirements)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAccelerationStructureMemoryRequirementsInfoNV* pInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pInfo:                          "); //HRW
    OutputString(outputFile, "const VkAccelerationStructureMemoryRequirementsInfoNV* = "); //TEQ
    if (pInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pInfo.GetMetaStructPointer(), indent+1,pInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkMemoryRequirements2KHR* pMemoryRequirements
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pMemoryRequirements:            "); //HRW
    OutputString(outputFile, "VkMemoryRequirements2KHR* = "); //TEQ
    if (pMemoryRequirements.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pMemoryRequirements.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pMemoryRequirements.GetMetaStructPointer(), indent+1,pMemoryRequirements.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkBindAccelerationStructureMemoryNV(
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    bindInfoCount,
    const StructPointerDecoder<Decoded_VkBindAccelerationStructureMemoryInfoNV>& pBindInfos)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkBindAccelerationStructureMemoryNV(device, bindInfoCount, pBindInfos)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t bindInfoCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "bindInfoCount:                  "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, bindInfoCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBindAccelerationStructureMemoryInfoNV* pBindInfos
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pBindInfos:                     "); //HRW
    OutputString(outputFile, "const VkBindAccelerationStructureMemoryInfoNV* = "); //TEQ
    if (pBindInfos.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pBindInfos.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkBindAccelerationStructureMemoryInfoNV>(outputFile, indent+1, 1, "VkBindAccelerationStructureMemoryInfoNV", pBindInfos.GetMetaStructPointer(), "pBindInfos", bindInfoCount, false, pBindInfos.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdBuildAccelerationStructureNV(
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
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdBuildAccelerationStructureNV(commandBuffer, pInfo, instanceData, instanceOffset, update, dst, src, scratch, scratchOffset)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAccelerationStructureInfoNV* pInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pInfo:                          "); //HRW
    OutputString(outputFile, "const VkAccelerationStructureInfoNV* = "); //TEQ
    if (pInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pInfo.GetMetaStructPointer(), indent+1,pInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer instanceData
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "instanceData:                   "); //HRW
    OutputString(outputFile, "VkBuffer = "); //TEQ
    OutputAddr(outputFile, instanceData); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize instanceOffset
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "instanceOffset:                 "); //HRW
    OutputString(outputFile, "VkDeviceSize = "); //TEQ
    OutputSignedDecimal(outputFile, instanceOffset); //EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBool32 update
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "update:                         "); //HRW
    OutputString(outputFile, "VkBool32 = "); //TEQ
    OutputSignedDecimal(outputFile, update); //EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkAccelerationStructureNV dst
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "dst:                            "); //HRW
    OutputString(outputFile, "VkAccelerationStructureNV = "); //TEQ
    OutputAddr(outputFile, dst); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkAccelerationStructureNV src
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "src:                            "); //HRW
    OutputString(outputFile, "VkAccelerationStructureNV = "); //TEQ
    OutputAddr(outputFile, src); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer scratch
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "scratch:                        "); //HRW
    OutputString(outputFile, "VkBuffer = "); //TEQ
    OutputAddr(outputFile, scratch); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize scratchOffset
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "scratchOffset:                  "); //HRW
    OutputString(outputFile, "VkDeviceSize = "); //TEQ
    OutputSignedDecimal(outputFile, scratchOffset); //EQA
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdCopyAccelerationStructureNV(
    format::HandleId                            commandBuffer,
    format::HandleId                            dst,
    format::HandleId                            src,
    VkCopyAccelerationStructureModeNV           mode)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdCopyAccelerationStructureNV(commandBuffer, dst, src, mode)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkAccelerationStructureNV dst
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "dst:                            "); //HRW
    OutputString(outputFile, "VkAccelerationStructureNV = "); //TEQ
    OutputAddr(outputFile, dst); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkAccelerationStructureNV src
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "src:                            "); //HRW
    OutputString(outputFile, "VkAccelerationStructureNV = "); //TEQ
    OutputAddr(outputFile, src); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkCopyAccelerationStructureModeNV mode
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "mode:                           "); //HRW
    OutputString(outputFile, "VkCopyAccelerationStructureModeNV = "); //TEQ
    OutputEnumVkCopyAccelerationStructureModeNV(outputFile, mode); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimal(outputFile, mode);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdTraceRaysNV(
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
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdTraceRaysNV(commandBuffer, raygenShaderBindingTableBuffer, raygenShaderBindingOffset, missShaderBindingTableBuffer, missShaderBindingOffset, missShaderBindingStride, hitShaderBindingTableBuffer, hitShaderBindingOffset, hitShaderBindingStride, callableShaderBindingTableBuffer, callableShaderBindingOffset, callableShaderBindingStride, width, height, depth)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer raygenShaderBindingTableBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "raygenShaderBindingTableBuffer: "); //HRW
    OutputString(outputFile, "VkBuffer = "); //TEQ
    OutputAddr(outputFile, raygenShaderBindingTableBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize raygenShaderBindingOffset
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "raygenShaderBindingOffset:      "); //HRW
    OutputString(outputFile, "VkDeviceSize = "); //TEQ
    OutputSignedDecimal(outputFile, raygenShaderBindingOffset); //EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer missShaderBindingTableBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "missShaderBindingTableBuffer:   "); //HRW
    OutputString(outputFile, "VkBuffer = "); //TEQ
    OutputAddr(outputFile, missShaderBindingTableBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize missShaderBindingOffset
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "missShaderBindingOffset:        "); //HRW
    OutputString(outputFile, "VkDeviceSize = "); //TEQ
    OutputSignedDecimal(outputFile, missShaderBindingOffset); //EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize missShaderBindingStride
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "missShaderBindingStride:        "); //HRW
    OutputString(outputFile, "VkDeviceSize = "); //TEQ
    OutputSignedDecimal(outputFile, missShaderBindingStride); //EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer hitShaderBindingTableBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "hitShaderBindingTableBuffer:    "); //HRW
    OutputString(outputFile, "VkBuffer = "); //TEQ
    OutputAddr(outputFile, hitShaderBindingTableBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize hitShaderBindingOffset
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "hitShaderBindingOffset:         "); //HRW
    OutputString(outputFile, "VkDeviceSize = "); //TEQ
    OutputSignedDecimal(outputFile, hitShaderBindingOffset); //EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize hitShaderBindingStride
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "hitShaderBindingStride:         "); //HRW
    OutputString(outputFile, "VkDeviceSize = "); //TEQ
    OutputSignedDecimal(outputFile, hitShaderBindingStride); //EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer callableShaderBindingTableBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "callableShaderBindingTableBuffer: "); //HRW
    OutputString(outputFile, "VkBuffer = "); //TEQ
    OutputAddr(outputFile, callableShaderBindingTableBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize callableShaderBindingOffset
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "callableShaderBindingOffset:    "); //HRW
    OutputString(outputFile, "VkDeviceSize = "); //TEQ
    OutputSignedDecimal(outputFile, callableShaderBindingOffset); //EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize callableShaderBindingStride
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "callableShaderBindingStride:    "); //HRW
    OutputString(outputFile, "VkDeviceSize = "); //TEQ
    OutputSignedDecimal(outputFile, callableShaderBindingStride); //EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t width
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "width:                          "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, width); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t height
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "height:                         "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, height); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t depth
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "depth:                          "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, depth); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateRayTracingPipelinesNV(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            pipelineCache,
    uint32_t                                    createInfoCount,
    const StructPointerDecoder<Decoded_VkRayTracingPipelineCreateInfoNV>& pCreateInfos,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkPipeline>&     pPipelines)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreateRayTracingPipelinesNV(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineCache pipelineCache
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pipelineCache:                  "); //HRW
    OutputString(outputFile, "VkPipelineCache = "); //TEQ
    OutputAddr(outputFile, pipelineCache); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t createInfoCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "createInfoCount:                "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, createInfoCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkRayTracingPipelineCreateInfoNV* pCreateInfos
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfos:                   "); //HRW
    OutputString(outputFile, "const VkRayTracingPipelineCreateInfoNV* = "); //TEQ
    if (pCreateInfos.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfos.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkRayTracingPipelineCreateInfoNV>(outputFile, indent+1, 1, "VkRayTracingPipelineCreateInfoNV", pCreateInfos.GetMetaStructPointer(), "pCreateInfos", createInfoCount, false, pCreateInfos.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipeline* pPipelines
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pPipelines:                     "); //HRW
    OutputString(outputFile, "VkPipeline* = "); //TEQ
    if (pPipelines.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pPipelines.GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pPipelines = {true, false, false, nullptr};
        OutputArray<VkPipeline*>(outputFile, indent, 1, "VkPipeline*", reinterpret_cast<VkPipeline*>(pPipelines.GetPointer()), "pPipelines", createInfoCount,  vinfo_pPipelines);  // CXC
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetRayTracingShaderGroupHandlesNV(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            pipeline,
    uint32_t                                    firstGroup,
    uint32_t                                    groupCount,
    size_t                                      dataSize,
    const PointerDecoder<uint8_t>&              pData)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetRayTracingShaderGroupHandlesNV(device, pipeline, firstGroup, groupCount, dataSize, pData)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipeline pipeline
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pipeline:                       "); //HRW
    OutputString(outputFile, "VkPipeline = "); //TEQ
    OutputAddr(outputFile, pipeline); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstGroup
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "firstGroup:                     "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, firstGroup); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t groupCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "groupCount:                     "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, groupCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: size_t dataSize
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "dataSize:                       "); //HRW
    OutputString(outputFile, "size_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, dataSize); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: void* pData
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pData:                          "); //HRW
    OutputString(outputFile, "void* = "); //TEQ
    if (pData.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pData.GetAddress()); // AHW
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetAccelerationStructureHandleNV(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            accelerationStructure,
    size_t                                      dataSize,
    const PointerDecoder<uint8_t>&              pData)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetAccelerationStructureHandleNV(device, accelerationStructure, dataSize, pData)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkAccelerationStructureNV accelerationStructure
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "accelerationStructure:          "); //HRW
    OutputString(outputFile, "VkAccelerationStructureNV = "); //TEQ
    OutputAddr(outputFile, accelerationStructure); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: size_t dataSize
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "dataSize:                       "); //HRW
    OutputString(outputFile, "size_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, dataSize); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: void* pData
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pData:                          "); //HRW
    OutputString(outputFile, "void* = "); //TEQ
    if (pData.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pData.GetAddress()); // AHW
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdWriteAccelerationStructuresPropertiesNV(
    format::HandleId                            commandBuffer,
    uint32_t                                    accelerationStructureCount,
    const HandlePointerDecoder<VkAccelerationStructureNV>& pAccelerationStructures,
    VkQueryType                                 queryType,
    format::HandleId                            queryPool,
    uint32_t                                    firstQuery)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdWriteAccelerationStructuresPropertiesNV(commandBuffer, accelerationStructureCount, pAccelerationStructures, queryType, queryPool, firstQuery)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t accelerationStructureCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "accelerationStructureCount:     "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, accelerationStructureCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAccelerationStructureNV* pAccelerationStructures
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAccelerationStructures:        "); //HRW
    OutputString(outputFile, "const VkAccelerationStructureNV* = "); //TEQ
    if (pAccelerationStructures.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAccelerationStructures.GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pAccelerationStructures = {true, false, false, nullptr};
        OutputArray<const VkAccelerationStructureNV*>(outputFile, indent, 1, "const VkAccelerationStructureNV*", reinterpret_cast<const VkAccelerationStructureNV*>(pAccelerationStructures.GetPointer()), "pAccelerationStructures", accelerationStructureCount,  vinfo_pAccelerationStructures);  // CXC
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryType queryType
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "queryType:                      "); //HRW
    OutputString(outputFile, "VkQueryType = "); //TEQ
    OutputEnumVkQueryType(outputFile, queryType); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimal(outputFile, queryType);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryPool queryPool
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "queryPool:                      "); //HRW
    OutputString(outputFile, "VkQueryPool = "); //TEQ
    OutputAddr(outputFile, queryPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstQuery
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "firstQuery:                     "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, firstQuery); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCompileDeferredNV(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            pipeline,
    uint32_t                                    shader)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCompileDeferredNV(device, pipeline, shader)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipeline pipeline
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pipeline:                       "); //HRW
    OutputString(outputFile, "VkPipeline = "); //TEQ
    OutputAddr(outputFile, pipeline); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t shader
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "shader:                         "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, shader); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetMemoryHostPointerPropertiesEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    VkExternalMemoryHandleTypeFlagBits          handleType,
    uint64_t                                    pHostPointer,
    const StructPointerDecoder<Decoded_VkMemoryHostPointerPropertiesEXT>& pMemoryHostPointerProperties)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetMemoryHostPointerPropertiesEXT(device, handleType, pHostPointer, pMemoryHostPointerProperties)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkExternalMemoryHandleTypeFlagBits handleType
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "handleType:                     "); //HRW
    OutputString(outputFile, "VkExternalMemoryHandleTypeFlagBits = "); //TEQ
    OutputEnumVkExternalMemoryHandleTypeFlagBits(outputFile, handleType); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimal(outputFile, handleType);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: const void* pHostPointer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pHostPointer:                   "); //HRW
    OutputString(outputFile, "const void* = "); //TEQ
    if ( !pHostPointer) // WWW
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pHostPointer); // PWR
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkMemoryHostPointerPropertiesEXT* pMemoryHostPointerProperties
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pMemoryHostPointerProperties:   "); //HRW
    OutputString(outputFile, "VkMemoryHostPointerPropertiesEXT* = "); //TEQ
    if (pMemoryHostPointerProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pMemoryHostPointerProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pMemoryHostPointerProperties.GetMetaStructPointer(), indent+1,pMemoryHostPointerProperties.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCmdWriteBufferMarkerAMD(
    format::HandleId                            commandBuffer,
    VkPipelineStageFlagBits                     pipelineStage,
    format::HandleId                            dstBuffer,
    VkDeviceSize                                dstOffset,
    uint32_t                                    marker)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdWriteBufferMarkerAMD(commandBuffer, pipelineStage, dstBuffer, dstOffset, marker)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineStageFlagBits pipelineStage
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pipelineStage:                  "); //HRW
    OutputString(outputFile, "VkPipelineStageFlagBits = "); //TEQ
    OutputEnumVkPipelineStageFlagBits(outputFile, pipelineStage); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimal(outputFile, pipelineStage);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer dstBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "dstBuffer:                      "); //HRW
    OutputString(outputFile, "VkBuffer = "); //TEQ
    OutputAddr(outputFile, dstBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize dstOffset
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "dstOffset:                      "); //HRW
    OutputString(outputFile, "VkDeviceSize = "); //TEQ
    OutputSignedDecimal(outputFile, dstOffset); //EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t marker
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "marker:                         "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, marker); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const PointerDecoder<uint32_t>&             pTimeDomainCount,
    const PointerDecoder<VkTimeDomainEXT>&      pTimeDomains)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceCalibrateableTimeDomainsEXT(physicalDevice, pTimeDomainCount, pTimeDomains)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pTimeDomainCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pTimeDomainCount:               "); //HRW
    OutputString(outputFile, "uint32_t* = "); //TEQ
    if (pTimeDomainCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pTimeDomainCount = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pTimeDomainCount.GetPointer(), vinfo_pTimeDomainCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkTimeDomainEXT* pTimeDomains
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pTimeDomains:                   "); //HRW
    OutputString(outputFile, "VkTimeDomainEXT* = "); //TEQ
    if (pTimeDomains.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pTimeDomains.GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pTimeDomains = {false, true, false, OutputEnumVkTimeDomainEXT};
        OutputArray<VkTimeDomainEXT*>(outputFile, indent, 1, "VkTimeDomainEXT*", reinterpret_cast<VkTimeDomainEXT*>(pTimeDomains.GetPointer()), "pTimeDomains", *pTimeDomainCount.GetPointer(),  vinfo_pTimeDomains);  // CXC
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetCalibratedTimestampsEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    timestampCount,
    const StructPointerDecoder<Decoded_VkCalibratedTimestampInfoEXT>& pTimestampInfos,
    const PointerDecoder<uint64_t>&             pTimestamps,
    const PointerDecoder<uint64_t>&             pMaxDeviation)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetCalibratedTimestampsEXT(device, timestampCount, pTimestampInfos, pTimestamps, pMaxDeviation)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t timestampCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "timestampCount:                 "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, timestampCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkCalibratedTimestampInfoEXT* pTimestampInfos
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pTimestampInfos:                "); //HRW
    OutputString(outputFile, "const VkCalibratedTimestampInfoEXT* = "); //TEQ
    if (pTimestampInfos.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pTimestampInfos.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkCalibratedTimestampInfoEXT>(outputFile, indent+1, 1, "VkCalibratedTimestampInfoEXT", pTimestampInfos.GetMetaStructPointer(), "pTimestampInfos", timestampCount, false, pTimestampInfos.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint64_t* pTimestamps
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pTimestamps:                    "); //HRW
    OutputString(outputFile, "uint64_t* = "); //TEQ
    if (pTimestamps.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pTimestamps.GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pTimestamps = {false, false, false, nullptr};
        OutputArray<uint64_t*>(outputFile, indent, 1, "uint64_t*", reinterpret_cast<uint64_t*>(pTimestamps.GetPointer()), "pTimestamps", timestampCount,  vinfo_pTimestamps);  // CXC
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint64_t* pMaxDeviation
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pMaxDeviation:                  "); //HRW
    OutputString(outputFile, "uint64_t* = "); //TEQ
    if (pMaxDeviation.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pMaxDeviation = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pMaxDeviation.GetPointer(), vinfo_pMaxDeviation); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCmdDrawMeshTasksNV(
    format::HandleId                            commandBuffer,
    uint32_t                                    taskCount,
    uint32_t                                    firstTask)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdDrawMeshTasksNV(commandBuffer, taskCount, firstTask)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t taskCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "taskCount:                      "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, taskCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstTask
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "firstTask:                      "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, firstTask); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdDrawMeshTasksIndirectNV(
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    uint32_t                                    drawCount,
    uint32_t                                    stride)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdDrawMeshTasksIndirectNV(commandBuffer, buffer, offset, drawCount, stride)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer buffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "buffer:                         "); //HRW
    OutputString(outputFile, "VkBuffer = "); //TEQ
    OutputAddr(outputFile, buffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize offset
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "offset:                         "); //HRW
    OutputString(outputFile, "VkDeviceSize = "); //TEQ
    OutputSignedDecimal(outputFile, offset); //EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t drawCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "drawCount:                      "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, drawCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t stride
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "stride:                         "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, stride); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdDrawMeshTasksIndirectCountNV(
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    format::HandleId                            countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdDrawMeshTasksIndirectCountNV(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer buffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "buffer:                         "); //HRW
    OutputString(outputFile, "VkBuffer = "); //TEQ
    OutputAddr(outputFile, buffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize offset
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "offset:                         "); //HRW
    OutputString(outputFile, "VkDeviceSize = "); //TEQ
    OutputSignedDecimal(outputFile, offset); //EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer countBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "countBuffer:                    "); //HRW
    OutputString(outputFile, "VkBuffer = "); //TEQ
    OutputAddr(outputFile, countBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize countBufferOffset
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "countBufferOffset:              "); //HRW
    OutputString(outputFile, "VkDeviceSize = "); //TEQ
    OutputSignedDecimal(outputFile, countBufferOffset); //EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t maxDrawCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "maxDrawCount:                   "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, maxDrawCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t stride
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "stride:                         "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, stride); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCmdSetExclusiveScissorNV(
    format::HandleId                            commandBuffer,
    uint32_t                                    firstExclusiveScissor,
    uint32_t                                    exclusiveScissorCount,
    const StructPointerDecoder<Decoded_VkRect2D>& pExclusiveScissors)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdSetExclusiveScissorNV(commandBuffer, firstExclusiveScissor, exclusiveScissorCount, pExclusiveScissors)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstExclusiveScissor
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "firstExclusiveScissor:          "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, firstExclusiveScissor); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t exclusiveScissorCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "exclusiveScissorCount:          "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, exclusiveScissorCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkRect2D* pExclusiveScissors
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pExclusiveScissors:             "); //HRW
    OutputString(outputFile, "const VkRect2D* = "); //TEQ
    if (pExclusiveScissors.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pExclusiveScissors.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkRect2D>(outputFile, indent+1, 1, "VkRect2D", pExclusiveScissors.GetMetaStructPointer(), "pExclusiveScissors", exclusiveScissorCount, false, pExclusiveScissors.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCmdSetCheckpointNV(
    format::HandleId                            commandBuffer,
    uint64_t                                    pCheckpointMarker)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdSetCheckpointNV(commandBuffer, pCheckpointMarker)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const void* pCheckpointMarker
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCheckpointMarker:              "); //HRW
    OutputString(outputFile, "const void* = "); //TEQ
    if ( !pCheckpointMarker) // WWW
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCheckpointMarker); // PWR
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetQueueCheckpointDataNV(
    format::HandleId                            queue,
    const PointerDecoder<uint32_t>&             pCheckpointDataCount,
    const StructPointerDecoder<Decoded_VkCheckpointDataNV>& pCheckpointData)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetQueueCheckpointDataNV(queue, pCheckpointDataCount, pCheckpointData)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkQueue queue
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "queue:                          "); //HRW
    OutputString(outputFile, "VkQueue = "); //TEQ
    OutputAddr(outputFile, queue); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pCheckpointDataCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCheckpointDataCount:           "); //HRW
    OutputString(outputFile, "uint32_t* = "); //TEQ
    if (pCheckpointDataCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pCheckpointDataCount = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pCheckpointDataCount.GetPointer(), vinfo_pCheckpointDataCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkCheckpointDataNV* pCheckpointData
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCheckpointData:                "); //HRW
    OutputString(outputFile, "VkCheckpointDataNV* = "); //TEQ
    if (pCheckpointData.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCheckpointData.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkCheckpointDataNV>(outputFile, indent+1, 1, "VkCheckpointDataNV", pCheckpointData.GetMetaStructPointer(), "pCheckpointData", *pCheckpointDataCount.GetPointer(), false, pCheckpointData.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkInitializePerformanceApiINTEL(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkInitializePerformanceApiInfoINTEL>& pInitializeInfo)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkInitializePerformanceApiINTEL(device, pInitializeInfo)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkInitializePerformanceApiInfoINTEL* pInitializeInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pInitializeInfo:                "); //HRW
    OutputString(outputFile, "const VkInitializePerformanceApiInfoINTEL* = "); //TEQ
    if (pInitializeInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pInitializeInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pInitializeInfo.GetMetaStructPointer(), indent+1,pInitializeInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkUninitializePerformanceApiINTEL(
    format::HandleId                            device)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkUninitializePerformanceApiINTEL(device)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdSetPerformanceMarkerINTEL(
    VkResult                                    returnValue,
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkPerformanceMarkerInfoINTEL>& pMarkerInfo)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdSetPerformanceMarkerINTEL(commandBuffer, pMarkerInfo)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPerformanceMarkerInfoINTEL* pMarkerInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pMarkerInfo:                    "); //HRW
    OutputString(outputFile, "const VkPerformanceMarkerInfoINTEL* = "); //TEQ
    if (pMarkerInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pMarkerInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pMarkerInfo.GetMetaStructPointer(), indent+1,pMarkerInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdSetPerformanceStreamMarkerINTEL(
    VkResult                                    returnValue,
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkPerformanceStreamMarkerInfoINTEL>& pMarkerInfo)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdSetPerformanceStreamMarkerINTEL(commandBuffer, pMarkerInfo)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPerformanceStreamMarkerInfoINTEL* pMarkerInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pMarkerInfo:                    "); //HRW
    OutputString(outputFile, "const VkPerformanceStreamMarkerInfoINTEL* = "); //TEQ
    if (pMarkerInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pMarkerInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pMarkerInfo.GetMetaStructPointer(), indent+1,pMarkerInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdSetPerformanceOverrideINTEL(
    VkResult                                    returnValue,
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkPerformanceOverrideInfoINTEL>& pOverrideInfo)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdSetPerformanceOverrideINTEL(commandBuffer, pOverrideInfo)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPerformanceOverrideInfoINTEL* pOverrideInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pOverrideInfo:                  "); //HRW
    OutputString(outputFile, "const VkPerformanceOverrideInfoINTEL* = "); //TEQ
    if (pOverrideInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pOverrideInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pOverrideInfo.GetMetaStructPointer(), indent+1,pOverrideInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkAcquirePerformanceConfigurationINTEL(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkPerformanceConfigurationAcquireInfoINTEL>& pAcquireInfo,
    const HandlePointerDecoder<VkPerformanceConfigurationINTEL>& pConfiguration)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkAcquirePerformanceConfigurationINTEL(device, pAcquireInfo, pConfiguration)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPerformanceConfigurationAcquireInfoINTEL* pAcquireInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAcquireInfo:                   "); //HRW
    OutputString(outputFile, "const VkPerformanceConfigurationAcquireInfoINTEL* = "); //TEQ
    if (pAcquireInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAcquireInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAcquireInfo.GetMetaStructPointer(), indent+1,pAcquireInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPerformanceConfigurationINTEL* pConfiguration
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pConfiguration:                 "); //HRW
    OutputString(outputFile, "VkPerformanceConfigurationINTEL* = "); //TEQ
    if (pConfiguration.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pConfiguration = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pConfiguration.GetPointer(), vinfo_pConfiguration); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkReleasePerformanceConfigurationINTEL(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            configuration)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkReleasePerformanceConfigurationINTEL(device, configuration)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPerformanceConfigurationINTEL configuration
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "configuration:                  "); //HRW
    OutputString(outputFile, "VkPerformanceConfigurationINTEL = "); //TEQ
    OutputAddr(outputFile, configuration); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkQueueSetPerformanceConfigurationINTEL(
    VkResult                                    returnValue,
    format::HandleId                            queue,
    format::HandleId                            configuration)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkQueueSetPerformanceConfigurationINTEL(queue, configuration)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkQueue queue
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "queue:                          "); //HRW
    OutputString(outputFile, "VkQueue = "); //TEQ
    OutputAddr(outputFile, queue); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPerformanceConfigurationINTEL configuration
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "configuration:                  "); //HRW
    OutputString(outputFile, "VkPerformanceConfigurationINTEL = "); //TEQ
    OutputAddr(outputFile, configuration); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPerformanceParameterINTEL(
    VkResult                                    returnValue,
    format::HandleId                            device,
    VkPerformanceParameterTypeINTEL             parameter,
    const StructPointerDecoder<Decoded_VkPerformanceValueINTEL>& pValue)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPerformanceParameterINTEL(device, parameter, pValue)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPerformanceParameterTypeINTEL parameter
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "parameter:                      "); //HRW
    OutputString(outputFile, "VkPerformanceParameterTypeINTEL = "); //TEQ
    OutputEnumVkPerformanceParameterTypeINTEL(outputFile, parameter); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimal(outputFile, parameter);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPerformanceValueINTEL* pValue
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pValue:                         "); //HRW
    OutputString(outputFile, "VkPerformanceValueINTEL* = "); //TEQ
    if (pValue.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pValue.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pValue.GetMetaStructPointer(), indent+1,pValue.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkSetLocalDimmingAMD(
    format::HandleId                            device,
    format::HandleId                            swapChain,
    VkBool32                                    localDimmingEnable)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkSetLocalDimmingAMD(device, swapChain, localDimmingEnable)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSwapchainKHR swapChain
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "swapChain:                      "); //HRW
    OutputString(outputFile, "VkSwapchainKHR = "); //TEQ
    OutputAddr(outputFile, swapChain); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBool32 localDimmingEnable
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "localDimmingEnable:             "); //HRW
    OutputString(outputFile, "VkBool32 = "); //TEQ
    OutputSignedDecimal(outputFile, localDimmingEnable); //EQA
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateImagePipeSurfaceFUCHSIA(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkImagePipeSurfaceCreateInfoFUCHSIA>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreateImagePipeSurfaceFUCHSIA(instance, pCreateInfo, pAllocator, pSurface)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "instance:                       "); //HRW
    OutputString(outputFile, "VkInstance = "); //TEQ
    OutputAddr(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImagePipeSurfaceCreateInfoFUCHSIA* pCreateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); //HRW
    OutputString(outputFile, "const VkImagePipeSurfaceCreateInfoFUCHSIA* = "); //TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR* pSurface
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSurface:                       "); //HRW
    OutputString(outputFile, "VkSurfaceKHR* = "); //TEQ
    if (pSurface.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pSurface = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pSurface.GetPointer(), vinfo_pSurface); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateMetalSurfaceEXT(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkMetalSurfaceCreateInfoEXT>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreateMetalSurfaceEXT(instance, pCreateInfo, pAllocator, pSurface)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "instance:                       "); //HRW
    OutputString(outputFile, "VkInstance = "); //TEQ
    OutputAddr(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkMetalSurfaceCreateInfoEXT* pCreateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); //HRW
    OutputString(outputFile, "const VkMetalSurfaceCreateInfoEXT* = "); //TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR* pSurface
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSurface:                       "); //HRW
    OutputString(outputFile, "VkSurfaceKHR* = "); //TEQ
    if (pSurface.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pSurface = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pSurface.GetPointer(), vinfo_pSurface); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetBufferDeviceAddressEXT(
    VkDeviceAddress                             returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkBufferDeviceAddressInfoEXT>& pInfo)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetBufferDeviceAddressEXT(device, pInfo)");
    fprintf(outputFile, " returns 0x%" PRIx64 ":\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBufferDeviceAddressInfoEXT* pInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pInfo:                          "); //HRW
    OutputString(outputFile, "const VkBufferDeviceAddressInfoEXT* = "); //TEQ
    if (pInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pInfo.GetMetaStructPointer(), indent+1,pInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const PointerDecoder<uint32_t>&             pPropertyCount,
    const StructPointerDecoder<Decoded_VkCooperativeMatrixPropertiesNV>& pProperties)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceCooperativeMatrixPropertiesNV(physicalDevice, pPropertyCount, pProperties)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pPropertyCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pPropertyCount:                 "); //HRW
    OutputString(outputFile, "uint32_t* = "); //TEQ
    if (pPropertyCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pPropertyCount = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pPropertyCount.GetPointer(), vinfo_pPropertyCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkCooperativeMatrixPropertiesNV* pProperties
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pProperties:                    "); //HRW
    OutputString(outputFile, "VkCooperativeMatrixPropertiesNV* = "); //TEQ
    if (pProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pProperties.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkCooperativeMatrixPropertiesNV>(outputFile, indent+1, 1, "VkCooperativeMatrixPropertiesNV", pProperties.GetMetaStructPointer(), "pProperties", *pPropertyCount.GetPointer(), false, pProperties.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const PointerDecoder<uint32_t>&             pCombinationCount,
    const StructPointerDecoder<Decoded_VkFramebufferMixedSamplesCombinationNV>& pCombinations)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(physicalDevice, pCombinationCount, pCombinations)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pCombinationCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCombinationCount:              "); //HRW
    OutputString(outputFile, "uint32_t* = "); //TEQ
    if (pCombinationCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pCombinationCount = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pCombinationCount.GetPointer(), vinfo_pCombinationCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFramebufferMixedSamplesCombinationNV* pCombinations
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCombinations:                  "); //HRW
    OutputString(outputFile, "VkFramebufferMixedSamplesCombinationNV* = "); //TEQ
    if (pCombinations.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCombinations.GetAddress()); // WUS
        OutputArrayOfStructs<Decoded_VkFramebufferMixedSamplesCombinationNV>(outputFile, indent+1, 1, "VkFramebufferMixedSamplesCombinationNV", pCombinations.GetMetaStructPointer(), "pCombinations", *pCombinationCount.GetPointer(), false, pCombinations.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSurfacePresentModes2EXT(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceSurfaceInfo2KHR>& pSurfaceInfo,
    const PointerDecoder<uint32_t>&             pPresentModeCount,
    const PointerDecoder<VkPresentModeKHR>&     pPresentModes)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceSurfacePresentModes2EXT(physicalDevice, pSurfaceInfo, pPresentModeCount, pPresentModes)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); //HRW
    OutputString(outputFile, "VkPhysicalDevice = "); //TEQ
    OutputAddr(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSurfaceInfo:                   "); //HRW
    OutputString(outputFile, "const VkPhysicalDeviceSurfaceInfo2KHR* = "); //TEQ
    if (pSurfaceInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pSurfaceInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pSurfaceInfo.GetMetaStructPointer(), indent+1,pSurfaceInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pPresentModeCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pPresentModeCount:              "); //HRW
    OutputString(outputFile, "uint32_t* = "); //TEQ
    if (pPresentModeCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pPresentModeCount = {false, false, false, nullptr};
        OutputScalarValue(outputFile, pPresentModeCount.GetPointer(), vinfo_pPresentModeCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPresentModeKHR* pPresentModes
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pPresentModes:                  "); //HRW
    OutputString(outputFile, "VkPresentModeKHR* = "); //TEQ
    if (pPresentModes.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pPresentModes.GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pPresentModes = {false, true, false, OutputEnumVkPresentModeKHR};
        OutputArray<VkPresentModeKHR*>(outputFile, indent, 1, "VkPresentModeKHR*", reinterpret_cast<VkPresentModeKHR*>(pPresentModes.GetPointer()), "pPresentModes", *pPresentModeCount.GetPointer(),  vinfo_pPresentModes);  // CXC
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkAcquireFullScreenExclusiveModeEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkAcquireFullScreenExclusiveModeEXT(device, swapchain)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSwapchainKHR swapchain
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "swapchain:                      "); //HRW
    OutputString(outputFile, "VkSwapchainKHR = "); //TEQ
    OutputAddr(outputFile, swapchain); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkReleaseFullScreenExclusiveModeEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkReleaseFullScreenExclusiveModeEXT(device, swapchain)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSwapchainKHR swapchain
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "swapchain:                      "); //HRW
    OutputString(outputFile, "VkSwapchainKHR = "); //TEQ
    OutputAddr(outputFile, swapchain); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetDeviceGroupSurfacePresentModes2EXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceSurfaceInfo2KHR>& pSurfaceInfo,
    const PointerDecoder<VkDeviceGroupPresentModeFlagsKHR>& pModes)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkGetDeviceGroupSurfacePresentModes2EXT(device, pSurfaceInfo, pModes)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSurfaceInfo:                   "); //HRW
    OutputString(outputFile, "const VkPhysicalDeviceSurfaceInfo2KHR* = "); //TEQ
    if (pSurfaceInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pSurfaceInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pSurfaceInfo.GetMetaStructPointer(), indent+1,pSurfaceInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceGroupPresentModeFlagsKHR* pModes
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pModes:                         "); //HRW
    OutputString(outputFile, "VkDeviceGroupPresentModeFlagsKHR* = "); //TEQ
    if (pModes.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pModes = {false, false, true, OutputEnumVkDeviceGroupPresentModeFlagBitsKHR};
        OutputScalarValue(outputFile, pModes.GetPointer(), vinfo_pModes); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateHeadlessSurfaceEXT(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkHeadlessSurfaceCreateInfoEXT>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCreateHeadlessSurfaceEXT(instance, pCreateInfo, pAllocator, pSurface)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "instance:                       "); //HRW
    OutputString(outputFile, "VkInstance = "); //TEQ
    OutputAddr(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkHeadlessSurfaceCreateInfoEXT* pCreateInfo
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); //HRW
    OutputString(outputFile, "const VkHeadlessSurfaceCreateInfoEXT* = "); //TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); //HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); //TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddr(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        OutputStructure(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR* pSurface
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "pSurface:                       "); //HRW
    OutputString(outputFile, "VkSurfaceKHR* = "); //TEQ
    if (pSurface.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pSurface = {true, false, false, nullptr};
        OutputScalarValue(outputFile, pSurface.GetPointer(), vinfo_pSurface); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCmdSetLineStippleEXT(
    format::HandleId                            commandBuffer,
    uint32_t                                    lineStippleFactor,
    uint16_t                                    lineStipplePattern)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkCmdSetLineStippleEXT(commandBuffer, lineStippleFactor, lineStipplePattern)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); //HRW
    OutputString(outputFile, "VkCommandBuffer = "); //TEQ
    OutputAddr(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t lineStippleFactor
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "lineStippleFactor:              "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, lineStippleFactor); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint16_t lineStipplePattern
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "lineStipplePattern:             "); //HRW
    OutputString(outputFile, "uint16_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, lineStipplePattern); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkResetQueryPoolEXT(
    format::HandleId                            device,
    format::HandleId                            queryPool,
    uint32_t                                    firstQuery,
    uint32_t                                    queryCount)
{
    uint32_t indent = 1;
    FILE *outputFile = GetFile();
    fprintf(outputFile, "vkResetQueryPoolEXT(device, queryPool, firstQuery, queryCount)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "device:                         "); //HRW
    OutputString(outputFile, "VkDevice = "); //TEQ
    OutputAddr(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryPool queryPool
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "queryPool:                      "); //HRW
    OutputString(outputFile, "VkQueryPool = "); //TEQ
    OutputAddr(outputFile, queryPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstQuery
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "firstQuery:                     "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, firstQuery); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t queryCount
    OutputIndent(outputFile, indent);
    OutputString(outputFile, "queryCount:                     "); //HRW
    OutputString(outputFile, "uint32_t = "); //TEQ
    OutputUnsignedDecimal(outputFile, queryCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)
