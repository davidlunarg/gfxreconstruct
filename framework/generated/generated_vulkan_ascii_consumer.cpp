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
    HandlePointerDecoder<VkInstance>*           pInstance)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreateInstance(pCreateInfo, pAllocator, pInstance)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: const VkInstanceCreateInfo* pCreateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkInstanceCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkInstance* pInstance
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pInstance:                      "); // HRW
    OutputString(outputFile, "VkInstance* = "); // TEQ
    if (pInstance.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pInstance = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pInstance.GetPointer(), vinfo_pInstance); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyInstance(
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkDestroyInstance(instance, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkInstance instance
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "instance:                       "); // HRW
    OutputString(outputFile, "VkInstance = "); // TEQ
    AddrToString(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkEnumeratePhysicalDevices(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    PointerDecoder<uint32_t>*                   pPhysicalDeviceCount,
    HandlePointerDecoder<VkPhysicalDevice>*     pPhysicalDevices)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkEnumeratePhysicalDevices(instance, pPhysicalDeviceCount, pPhysicalDevices)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "instance:                       "); // HRW
    OutputString(outputFile, "VkInstance = "); // TEQ
    AddrToString(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pPhysicalDeviceCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pPhysicalDeviceCount:           "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pPhysicalDeviceCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pPhysicalDeviceCount = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pPhysicalDeviceCount.GetPointer(), vinfo_pPhysicalDeviceCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPhysicalDevice* pPhysicalDevices
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pPhysicalDevices:               "); // HRW
    OutputString(outputFile, "VkPhysicalDevice* = "); // TEQ
    if (pPhysicalDevices.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pPhysicalDevices.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pPhysicalDevices = {true, false, false, nullptr};
        ArrayToString(outputFile, indent, 0, "VkPhysicalDevice*", &pPhysicalDevices, "pPhysicalDevices", *pPhysicalDeviceCount.GetPointer(), vinfo_pPhysicalDevices); // AUC
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceFeatures(
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceFeatures>* pFeatures)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceFeatures(physicalDevice, pFeatures)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPhysicalDeviceFeatures* pFeatures
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pFeatures:                      "); // HRW
    OutputString(outputFile, "VkPhysicalDeviceFeatures* = "); // TEQ
    if (pFeatures.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pFeatures.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pFeatures.GetMetaStructPointer(), indent+1,pFeatures.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceFormatProperties(
    format::HandleId                            physicalDevice,
    VkFormat                                    format,
    StructPointerDecoder<Decoded_VkFormatProperties>* pFormatProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceFormatProperties(physicalDevice, format, pFormatProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFormat format
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "format:                         "); // HRW
    OutputString(outputFile, "VkFormat = "); // TEQ
    EnumToStringVkFormat(outputFile, format); // VSA
    OutputString(outputFile, " (");
    UnsignedDecimalToString(outputFile, format);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFormatProperties* pFormatProperties
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pFormatProperties:              "); // HRW
    OutputString(outputFile, "VkFormatProperties* = "); // TEQ
    if (pFormatProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pFormatProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pFormatProperties.GetMetaStructPointer(), indent+1,pFormatProperties.GetAddress()); // GLM
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
    StructPointerDecoder<Decoded_VkImageFormatProperties>* pImageFormatProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceImageFormatProperties(physicalDevice, format, type, tiling, usage, flags, pImageFormatProperties)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFormat format
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "format:                         "); // HRW
    OutputString(outputFile, "VkFormat = "); // TEQ
    EnumToStringVkFormat(outputFile, format); // VSA
    OutputString(outputFile, " (");
    UnsignedDecimalToString(outputFile, format);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageType type
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "type:                           "); // HRW
    OutputString(outputFile, "VkImageType = "); // TEQ
    EnumToStringVkImageType(outputFile, type); // VSA
    OutputString(outputFile, " (");
    UnsignedDecimalToString(outputFile, type);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageTiling tiling
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "tiling:                         "); // HRW
    OutputString(outputFile, "VkImageTiling = "); // TEQ
    EnumToStringVkImageTiling(outputFile, tiling); // VSA
    OutputString(outputFile, " (");
    UnsignedDecimalToString(outputFile, tiling);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageUsageFlags usage
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "usage:                          "); // HRW
    OutputString(outputFile, "VkImageUsageFlags = "); // TEQ
    FlagsToString(outputFile, usage, EnumToStringVkImageUsageFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageCreateFlags flags
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "flags:                          "); // HRW
    OutputString(outputFile, "VkImageCreateFlags = "); // TEQ
    FlagsToString(outputFile, flags, EnumToStringVkImageCreateFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageFormatProperties* pImageFormatProperties
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pImageFormatProperties:         "); // HRW
    OutputString(outputFile, "VkImageFormatProperties* = "); // TEQ
    if (pImageFormatProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pImageFormatProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pImageFormatProperties.GetMetaStructPointer(), indent+1,pImageFormatProperties.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceProperties(
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceProperties>* pProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceProperties(physicalDevice, pProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPhysicalDeviceProperties* pProperties
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pProperties:                    "); // HRW
    OutputString(outputFile, "VkPhysicalDeviceProperties* = "); // TEQ
    if (pProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pProperties.GetMetaStructPointer(), indent+1,pProperties.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceQueueFamilyProperties(
    format::HandleId                            physicalDevice,
    PointerDecoder<uint32_t>*                   pQueueFamilyPropertyCount,
    StructPointerDecoder<Decoded_VkQueueFamilyProperties>* pQueueFamilyProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceQueueFamilyProperties(physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pQueueFamilyPropertyCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pQueueFamilyPropertyCount:      "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pQueueFamilyPropertyCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pQueueFamilyPropertyCount = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pQueueFamilyPropertyCount.GetPointer(), vinfo_pQueueFamilyPropertyCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueueFamilyProperties* pQueueFamilyProperties
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pQueueFamilyProperties:         "); // HRW
    OutputString(outputFile, "VkQueueFamilyProperties* = "); // TEQ
    if (pQueueFamilyProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pQueueFamilyProperties.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkQueueFamilyProperties>(outputFile, indent+1, 1, "VkQueueFamilyProperties", pQueueFamilyProperties.GetMetaStructPointer(), "pQueueFamilyProperties", *pQueueFamilyPropertyCount.GetPointer(), false, pQueueFamilyProperties.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceMemoryProperties(
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceMemoryProperties>* pMemoryProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceMemoryProperties(physicalDevice, pMemoryProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPhysicalDeviceMemoryProperties* pMemoryProperties
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pMemoryProperties:              "); // HRW
    OutputString(outputFile, "VkPhysicalDeviceMemoryProperties* = "); // TEQ
    if (pMemoryProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pMemoryProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pMemoryProperties.GetMetaStructPointer(), indent+1,pMemoryProperties.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateDevice(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkDeviceCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkDevice>*             pDevice)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreateDevice(physicalDevice, pCreateInfo, pAllocator, pDevice)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDeviceCreateInfo* pCreateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkDeviceCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDevice* pDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pDevice:                        "); // HRW
    OutputString(outputFile, "VkDevice* = "); // TEQ
    if (pDevice.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pDevice = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pDevice.GetPointer(), vinfo_pDevice); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyDevice(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkDestroyDevice(device, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetDeviceQueue(
    format::HandleId                            device,
    uint32_t                                    queueFamilyIndex,
    uint32_t                                    queueIndex,
    HandlePointerDecoder<VkQueue>*              pQueue)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetDeviceQueue(device, queueFamilyIndex, queueIndex, pQueue)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t queueFamilyIndex
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "queueFamilyIndex:               "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, queueFamilyIndex); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t queueIndex
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "queueIndex:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, queueIndex); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueue* pQueue
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pQueue:                         "); // HRW
    OutputString(outputFile, "VkQueue* = "); // TEQ
    if (pQueue.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pQueue = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pQueue.GetPointer(), vinfo_pQueue); // PWS
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkQueueSubmit(queue, submitCount, pSubmits, fence)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkQueue queue
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "queue:                          "); // HRW
    OutputString(outputFile, "VkQueue = "); // TEQ
    AddrToString(outputFile, queue); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t submitCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "submitCount:                    "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, submitCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSubmitInfo* pSubmits
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSubmits:                       "); // HRW
    OutputString(outputFile, "const VkSubmitInfo* = "); // TEQ
    if (pSubmits.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pSubmits.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkSubmitInfo>(outputFile, indent+1, 1, "VkSubmitInfo", pSubmits.GetMetaStructPointer(), "pSubmits", submitCount, false, pSubmits.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFence fence
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "fence:                          "); // HRW
    OutputString(outputFile, "VkFence = "); // TEQ
    AddrToString(outputFile, fence); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkQueueWaitIdle(
    VkResult                                    returnValue,
    format::HandleId                            queue)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkQueueWaitIdle(queue)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkQueue queue
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "queue:                          "); // HRW
    OutputString(outputFile, "VkQueue = "); // TEQ
    AddrToString(outputFile, queue); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDeviceWaitIdle(
    VkResult                                    returnValue,
    format::HandleId                            device)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkDeviceWaitIdle(device)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkAllocateMemory(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkMemoryAllocateInfo>& pAllocateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkDeviceMemory>*       pMemory)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkAllocateMemory(device, pAllocateInfo, pAllocator, pMemory)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkMemoryAllocateInfo* pAllocateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocateInfo:                  "); // HRW
    OutputString(outputFile, "const VkMemoryAllocateInfo* = "); // TEQ
    if (pAllocateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocateInfo.GetMetaStructPointer(), indent+1,pAllocateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceMemory* pMemory
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pMemory:                        "); // HRW
    OutputString(outputFile, "VkDeviceMemory* = "); // TEQ
    if (pMemory.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pMemory = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pMemory.GetPointer(), vinfo_pMemory); // PWS
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkFreeMemory(device, memory, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceMemory memory
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "memory:                         "); // HRW
    OutputString(outputFile, "VkDeviceMemory = "); // TEQ
    AddrToString(outputFile, memory); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
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
    PointerDecoder<uint64_t, void*>*            ppData)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkMapMemory(device, memory, offset, size, flags, ppData)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceMemory memory
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "memory:                         "); // HRW
    OutputString(outputFile, "VkDeviceMemory = "); // TEQ
    AddrToString(outputFile, memory); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize offset
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "offset:                         "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    SignedDecimalToString(outputFile, offset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize size
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "size:                           "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    SignedDecimalToString(outputFile, size); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkMemoryMapFlags flags
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "flags:                          "); // HRW
    OutputString(outputFile, "VkMemoryMapFlags = "); // TEQ
    UnsignedDecimalToString(outputFile, flags); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: void** ppData
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "ppData:                         "); // HRW
    OutputString(outputFile, "void** = "); // TEQ
    if (ppData.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_ppData = {true, false, false, nullptr};
        ScalarValueToString(outputFile, ppData.GetPointer(), vinfo_ppData); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkUnmapMemory(
    format::HandleId                            device,
    format::HandleId                            memory)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkUnmapMemory(device, memory)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceMemory memory
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "memory:                         "); // HRW
    OutputString(outputFile, "VkDeviceMemory = "); // TEQ
    AddrToString(outputFile, memory); // PAQ
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkFlushMappedMemoryRanges(device, memoryRangeCount, pMemoryRanges)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t memoryRangeCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "memoryRangeCount:               "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, memoryRangeCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkMappedMemoryRange* pMemoryRanges
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pMemoryRanges:                  "); // HRW
    OutputString(outputFile, "const VkMappedMemoryRange* = "); // TEQ
    if (pMemoryRanges.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pMemoryRanges.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkMappedMemoryRange>(outputFile, indent+1, 1, "VkMappedMemoryRange", pMemoryRanges.GetMetaStructPointer(), "pMemoryRanges", memoryRangeCount, false, pMemoryRanges.GetAddress());  // CCO
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkInvalidateMappedMemoryRanges(device, memoryRangeCount, pMemoryRanges)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t memoryRangeCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "memoryRangeCount:               "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, memoryRangeCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkMappedMemoryRange* pMemoryRanges
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pMemoryRanges:                  "); // HRW
    OutputString(outputFile, "const VkMappedMemoryRange* = "); // TEQ
    if (pMemoryRanges.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pMemoryRanges.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkMappedMemoryRange>(outputFile, indent+1, 1, "VkMappedMemoryRange", pMemoryRanges.GetMetaStructPointer(), "pMemoryRanges", memoryRangeCount, false, pMemoryRanges.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetDeviceMemoryCommitment(
    format::HandleId                            device,
    format::HandleId                            memory,
    PointerDecoder<VkDeviceSize>*               pCommittedMemoryInBytes)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetDeviceMemoryCommitment(device, memory, pCommittedMemoryInBytes)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceMemory memory
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "memory:                         "); // HRW
    OutputString(outputFile, "VkDeviceMemory = "); // TEQ
    AddrToString(outputFile, memory); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize* pCommittedMemoryInBytes
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCommittedMemoryInBytes:        "); // HRW
    OutputString(outputFile, "VkDeviceSize* = "); // TEQ
    if (pCommittedMemoryInBytes.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pCommittedMemoryInBytes = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pCommittedMemoryInBytes.GetPointer(), vinfo_pCommittedMemoryInBytes); // PWS
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkBindBufferMemory(device, buffer, memory, memoryOffset)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer buffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "buffer:                         "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    AddrToString(outputFile, buffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceMemory memory
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "memory:                         "); // HRW
    OutputString(outputFile, "VkDeviceMemory = "); // TEQ
    AddrToString(outputFile, memory); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize memoryOffset
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "memoryOffset:                   "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    SignedDecimalToString(outputFile, memoryOffset); // EQA
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkBindImageMemory(device, image, memory, memoryOffset)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage image
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "image:                          "); // HRW
    OutputString(outputFile, "VkImage = "); // TEQ
    AddrToString(outputFile, image); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceMemory memory
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "memory:                         "); // HRW
    OutputString(outputFile, "VkDeviceMemory = "); // TEQ
    AddrToString(outputFile, memory); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize memoryOffset
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "memoryOffset:                   "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    SignedDecimalToString(outputFile, memoryOffset); // EQA
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetBufferMemoryRequirements(
    format::HandleId                            device,
    format::HandleId                            buffer,
    StructPointerDecoder<Decoded_VkMemoryRequirements>* pMemoryRequirements)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetBufferMemoryRequirements(device, buffer, pMemoryRequirements)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer buffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "buffer:                         "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    AddrToString(outputFile, buffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkMemoryRequirements* pMemoryRequirements
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pMemoryRequirements:            "); // HRW
    OutputString(outputFile, "VkMemoryRequirements* = "); // TEQ
    if (pMemoryRequirements.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pMemoryRequirements.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pMemoryRequirements.GetMetaStructPointer(), indent+1,pMemoryRequirements.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetImageMemoryRequirements(
    format::HandleId                            device,
    format::HandleId                            image,
    StructPointerDecoder<Decoded_VkMemoryRequirements>* pMemoryRequirements)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetImageMemoryRequirements(device, image, pMemoryRequirements)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage image
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "image:                          "); // HRW
    OutputString(outputFile, "VkImage = "); // TEQ
    AddrToString(outputFile, image); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkMemoryRequirements* pMemoryRequirements
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pMemoryRequirements:            "); // HRW
    OutputString(outputFile, "VkMemoryRequirements* = "); // TEQ
    if (pMemoryRequirements.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pMemoryRequirements.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pMemoryRequirements.GetMetaStructPointer(), indent+1,pMemoryRequirements.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetImageSparseMemoryRequirements(
    format::HandleId                            device,
    format::HandleId                            image,
    PointerDecoder<uint32_t>*                   pSparseMemoryRequirementCount,
    StructPointerDecoder<Decoded_VkSparseImageMemoryRequirements>* pSparseMemoryRequirements)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetImageSparseMemoryRequirements(device, image, pSparseMemoryRequirementCount, pSparseMemoryRequirements)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage image
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "image:                          "); // HRW
    OutputString(outputFile, "VkImage = "); // TEQ
    AddrToString(outputFile, image); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pSparseMemoryRequirementCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSparseMemoryRequirementCount:  "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pSparseMemoryRequirementCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pSparseMemoryRequirementCount = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pSparseMemoryRequirementCount.GetPointer(), vinfo_pSparseMemoryRequirementCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSparseImageMemoryRequirements* pSparseMemoryRequirements
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSparseMemoryRequirements:      "); // HRW
    OutputString(outputFile, "VkSparseImageMemoryRequirements* = "); // TEQ
    if (pSparseMemoryRequirements.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pSparseMemoryRequirements.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkSparseImageMemoryRequirements>(outputFile, indent+1, 1, "VkSparseImageMemoryRequirements", pSparseMemoryRequirements.GetMetaStructPointer(), "pSparseMemoryRequirements", *pSparseMemoryRequirementCount.GetPointer(), false, pSparseMemoryRequirements.GetAddress());  // CCO
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
    PointerDecoder<uint32_t>*                   pPropertyCount,
    StructPointerDecoder<Decoded_VkSparseImageFormatProperties>* pProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceSparseImageFormatProperties(physicalDevice, format, type, samples, usage, tiling, pPropertyCount, pProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFormat format
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "format:                         "); // HRW
    OutputString(outputFile, "VkFormat = "); // TEQ
    EnumToStringVkFormat(outputFile, format); // VSA
    OutputString(outputFile, " (");
    UnsignedDecimalToString(outputFile, format);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageType type
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "type:                           "); // HRW
    OutputString(outputFile, "VkImageType = "); // TEQ
    EnumToStringVkImageType(outputFile, type); // VSA
    OutputString(outputFile, " (");
    UnsignedDecimalToString(outputFile, type);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSampleCountFlagBits samples
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "samples:                        "); // HRW
    OutputString(outputFile, "VkSampleCountFlagBits = "); // TEQ
    EnumToStringVkSampleCountFlagBits(outputFile, samples); // VSA
    OutputString(outputFile, " (");
    UnsignedDecimalToString(outputFile, samples);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageUsageFlags usage
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "usage:                          "); // HRW
    OutputString(outputFile, "VkImageUsageFlags = "); // TEQ
    FlagsToString(outputFile, usage, EnumToStringVkImageUsageFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageTiling tiling
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "tiling:                         "); // HRW
    OutputString(outputFile, "VkImageTiling = "); // TEQ
    EnumToStringVkImageTiling(outputFile, tiling); // VSA
    OutputString(outputFile, " (");
    UnsignedDecimalToString(outputFile, tiling);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pPropertyCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pPropertyCount:                 "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pPropertyCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pPropertyCount = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pPropertyCount.GetPointer(), vinfo_pPropertyCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSparseImageFormatProperties* pProperties
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pProperties:                    "); // HRW
    OutputString(outputFile, "VkSparseImageFormatProperties* = "); // TEQ
    if (pProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pProperties.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkSparseImageFormatProperties>(outputFile, indent+1, 1, "VkSparseImageFormatProperties", pProperties.GetMetaStructPointer(), "pProperties", *pPropertyCount.GetPointer(), false, pProperties.GetAddress());  // CCO
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkQueueBindSparse(queue, bindInfoCount, pBindInfo, fence)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkQueue queue
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "queue:                          "); // HRW
    OutputString(outputFile, "VkQueue = "); // TEQ
    AddrToString(outputFile, queue); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t bindInfoCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "bindInfoCount:                  "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, bindInfoCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBindSparseInfo* pBindInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pBindInfo:                      "); // HRW
    OutputString(outputFile, "const VkBindSparseInfo* = "); // TEQ
    if (pBindInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pBindInfo.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkBindSparseInfo>(outputFile, indent+1, 1, "VkBindSparseInfo", pBindInfo.GetMetaStructPointer(), "pBindInfo", bindInfoCount, false, pBindInfo.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFence fence
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "fence:                          "); // HRW
    OutputString(outputFile, "VkFence = "); // TEQ
    AddrToString(outputFile, fence); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateFence(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkFenceCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkFence>*              pFence)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreateFence(device, pCreateInfo, pAllocator, pFence)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkFenceCreateInfo* pCreateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkFenceCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFence* pFence
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pFence:                         "); // HRW
    OutputString(outputFile, "VkFence* = "); // TEQ
    if (pFence.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pFence = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pFence.GetPointer(), vinfo_pFence); // PWS
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkDestroyFence(device, fence, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFence fence
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "fence:                          "); // HRW
    OutputString(outputFile, "VkFence = "); // TEQ
    AddrToString(outputFile, fence); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkResetFences(device, fenceCount, pFences)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t fenceCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "fenceCount:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, fenceCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkFence* pFences
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pFences:                        "); // HRW
    OutputString(outputFile, "const VkFence* = "); // TEQ
    if (pFences.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pFences.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pFences = {true, false, false, nullptr};
        ArrayToString(outputFile, indent, 0, "const VkFence*", &pFences, "pFences", fenceCount, vinfo_pFences); // AUC
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetFenceStatus(device, fence)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFence fence
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "fence:                          "); // HRW
    OutputString(outputFile, "VkFence = "); // TEQ
    AddrToString(outputFile, fence); // PAQ
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkWaitForFences(device, fenceCount, pFences, waitAll, timeout)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t fenceCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "fenceCount:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, fenceCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkFence* pFences
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pFences:                        "); // HRW
    OutputString(outputFile, "const VkFence* = "); // TEQ
    if (pFences.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pFences.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pFences = {true, false, false, nullptr};
        ArrayToString(outputFile, indent, 0, "const VkFence*", &pFences, "pFences", fenceCount, vinfo_pFences); // AUC
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBool32 waitAll
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "waitAll:                        "); // HRW
    OutputString(outputFile, "VkBool32 = "); // TEQ
    SignedDecimalToString(outputFile, waitAll); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint64_t timeout
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "timeout:                        "); // HRW
    OutputString(outputFile, "uint64_t = "); // TEQ
    UnsignedDecimalToString(outputFile, timeout); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateSemaphore(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSemaphoreCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkSemaphore>*          pSemaphore)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreateSemaphore(device, pCreateInfo, pAllocator, pSemaphore)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSemaphoreCreateInfo* pCreateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkSemaphoreCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSemaphore* pSemaphore
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSemaphore:                     "); // HRW
    OutputString(outputFile, "VkSemaphore* = "); // TEQ
    if (pSemaphore.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pSemaphore = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pSemaphore.GetPointer(), vinfo_pSemaphore); // PWS
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkDestroySemaphore(device, semaphore, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSemaphore semaphore
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "semaphore:                      "); // HRW
    OutputString(outputFile, "VkSemaphore = "); // TEQ
    AddrToString(outputFile, semaphore); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateEvent(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkEventCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkEvent>*              pEvent)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreateEvent(device, pCreateInfo, pAllocator, pEvent)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkEventCreateInfo* pCreateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkEventCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkEvent* pEvent
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pEvent:                         "); // HRW
    OutputString(outputFile, "VkEvent* = "); // TEQ
    if (pEvent.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pEvent = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pEvent.GetPointer(), vinfo_pEvent); // PWS
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkDestroyEvent(device, event, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkEvent event
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "event:                          "); // HRW
    OutputString(outputFile, "VkEvent = "); // TEQ
    AddrToString(outputFile, event); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetEventStatus(device, event)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkEvent event
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "event:                          "); // HRW
    OutputString(outputFile, "VkEvent = "); // TEQ
    AddrToString(outputFile, event); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkSetEvent(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            event)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkSetEvent(device, event)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkEvent event
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "event:                          "); // HRW
    OutputString(outputFile, "VkEvent = "); // TEQ
    AddrToString(outputFile, event); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkResetEvent(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            event)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkResetEvent(device, event)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkEvent event
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "event:                          "); // HRW
    OutputString(outputFile, "VkEvent = "); // TEQ
    AddrToString(outputFile, event); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateQueryPool(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkQueryPoolCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkQueryPool>*          pQueryPool)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreateQueryPool(device, pCreateInfo, pAllocator, pQueryPool)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkQueryPoolCreateInfo* pCreateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkQueryPoolCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryPool* pQueryPool
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pQueryPool:                     "); // HRW
    OutputString(outputFile, "VkQueryPool* = "); // TEQ
    if (pQueryPool.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pQueryPool = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pQueryPool.GetPointer(), vinfo_pQueryPool); // PWS
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkDestroyQueryPool(device, queryPool, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryPool queryPool
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "queryPool:                      "); // HRW
    OutputString(outputFile, "VkQueryPool = "); // TEQ
    AddrToString(outputFile, queryPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
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
    PointerDecoder<uint8_t>*                    pData,
    VkDeviceSize                                stride,
    VkQueryResultFlags                          flags)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetQueryPoolResults(device, queryPool, firstQuery, queryCount, dataSize, pData, stride, flags)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryPool queryPool
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "queryPool:                      "); // HRW
    OutputString(outputFile, "VkQueryPool = "); // TEQ
    AddrToString(outputFile, queryPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstQuery
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "firstQuery:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, firstQuery); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t queryCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "queryCount:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, queryCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: size_t dataSize
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "dataSize:                       "); // HRW
    OutputString(outputFile, "size_t = "); // TEQ
    UnsignedDecimalToString(outputFile, dataSize); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: void* pData
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pData:                          "); // HRW
    OutputString(outputFile, "void* = "); // TEQ
    if (pData.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pData.GetAddress()); // AHW
        ScalarValueToStringStruct vinfo_pData = {false, false, false, nullptr};
        ArrayToString(outputFile, indent, 0, "void*", &pData, "pData", dataSize, vinfo_pData); // PRC
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize stride
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "stride:                         "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    SignedDecimalToString(outputFile, stride); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryResultFlags flags
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "flags:                          "); // HRW
    OutputString(outputFile, "VkQueryResultFlags = "); // TEQ
    FlagsToString(outputFile, flags, EnumToStringVkQueryResultFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateBuffer(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkBufferCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkBuffer>*             pBuffer)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreateBuffer(device, pCreateInfo, pAllocator, pBuffer)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBufferCreateInfo* pCreateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkBufferCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer* pBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pBuffer:                        "); // HRW
    OutputString(outputFile, "VkBuffer* = "); // TEQ
    if (pBuffer.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pBuffer = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pBuffer.GetPointer(), vinfo_pBuffer); // PWS
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkDestroyBuffer(device, buffer, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer buffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "buffer:                         "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    AddrToString(outputFile, buffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateBufferView(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkBufferViewCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkBufferView>*         pView)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreateBufferView(device, pCreateInfo, pAllocator, pView)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBufferViewCreateInfo* pCreateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkBufferViewCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBufferView* pView
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pView:                          "); // HRW
    OutputString(outputFile, "VkBufferView* = "); // TEQ
    if (pView.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, *(static_cast<uint64_t*>(pView.GetPointer()))); // PWA
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkDestroyBufferView(device, bufferView, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBufferView bufferView
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "bufferView:                     "); // HRW
    OutputString(outputFile, "VkBufferView = "); // TEQ
    AddrToString(outputFile, bufferView); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateImage(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImageCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkImage>*              pImage)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreateImage(device, pCreateInfo, pAllocator, pImage)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImageCreateInfo* pCreateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkImageCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage* pImage
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pImage:                         "); // HRW
    OutputString(outputFile, "VkImage* = "); // TEQ
    if (pImage.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pImage = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pImage.GetPointer(), vinfo_pImage); // PWS
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkDestroyImage(device, image, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage image
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "image:                          "); // HRW
    OutputString(outputFile, "VkImage = "); // TEQ
    AddrToString(outputFile, image); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetImageSubresourceLayout(
    format::HandleId                            device,
    format::HandleId                            image,
    const StructPointerDecoder<Decoded_VkImageSubresource>& pSubresource,
    StructPointerDecoder<Decoded_VkSubresourceLayout>* pLayout)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetImageSubresourceLayout(device, image, pSubresource, pLayout)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage image
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "image:                          "); // HRW
    OutputString(outputFile, "VkImage = "); // TEQ
    AddrToString(outputFile, image); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImageSubresource* pSubresource
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSubresource:                   "); // HRW
    OutputString(outputFile, "const VkImageSubresource* = "); // TEQ
    if (pSubresource.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pSubresource.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pSubresource.GetMetaStructPointer(), indent+1,pSubresource.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSubresourceLayout* pLayout
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pLayout:                        "); // HRW
    OutputString(outputFile, "VkSubresourceLayout* = "); // TEQ
    if (pLayout.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pLayout.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pLayout.GetMetaStructPointer(), indent+1,pLayout.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateImageView(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImageViewCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkImageView>*          pView)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreateImageView(device, pCreateInfo, pAllocator, pView)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImageViewCreateInfo* pCreateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkImageViewCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageView* pView
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pView:                          "); // HRW
    OutputString(outputFile, "VkImageView* = "); // TEQ
    if (pView.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, *(static_cast<uint64_t*>(pView.GetPointer()))); // PWA
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkDestroyImageView(device, imageView, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageView imageView
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "imageView:                      "); // HRW
    OutputString(outputFile, "VkImageView = "); // TEQ
    AddrToString(outputFile, imageView); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateShaderModule(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkShaderModuleCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkShaderModule>*       pShaderModule)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreateShaderModule(device, pCreateInfo, pAllocator, pShaderModule)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkShaderModuleCreateInfo* pCreateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkShaderModuleCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkShaderModule* pShaderModule
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pShaderModule:                  "); // HRW
    OutputString(outputFile, "VkShaderModule* = "); // TEQ
    if (pShaderModule.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pShaderModule = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pShaderModule.GetPointer(), vinfo_pShaderModule); // PWS
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkDestroyShaderModule(device, shaderModule, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkShaderModule shaderModule
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "shaderModule:                   "); // HRW
    OutputString(outputFile, "VkShaderModule = "); // TEQ
    AddrToString(outputFile, shaderModule); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreatePipelineCache(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkPipelineCacheCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkPipelineCache>*      pPipelineCache)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreatePipelineCache(device, pCreateInfo, pAllocator, pPipelineCache)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPipelineCacheCreateInfo* pCreateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkPipelineCacheCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineCache* pPipelineCache
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pPipelineCache:                 "); // HRW
    OutputString(outputFile, "VkPipelineCache* = "); // TEQ
    if (pPipelineCache.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pPipelineCache = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pPipelineCache.GetPointer(), vinfo_pPipelineCache); // PWS
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkDestroyPipelineCache(device, pipelineCache, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineCache pipelineCache
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pipelineCache:                  "); // HRW
    OutputString(outputFile, "VkPipelineCache = "); // TEQ
    AddrToString(outputFile, pipelineCache); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPipelineCacheData(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            pipelineCache,
    PointerDecoder<size_t>*                     pDataSize,
    PointerDecoder<uint8_t>*                    pData)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPipelineCacheData(device, pipelineCache, pDataSize, pData)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineCache pipelineCache
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pipelineCache:                  "); // HRW
    OutputString(outputFile, "VkPipelineCache = "); // TEQ
    AddrToString(outputFile, pipelineCache); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: size_t* pDataSize
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pDataSize:                      "); // HRW
    OutputString(outputFile, "size_t* = "); // TEQ
    if (pDataSize.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pDataSize = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pDataSize.GetPointer(), vinfo_pDataSize); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: void* pData
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pData:                          "); // HRW
    OutputString(outputFile, "void* = "); // TEQ
    if (pData.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pData.GetAddress()); // AHW
        ScalarValueToStringStruct vinfo_pData = {false, false, false, nullptr};
        ArrayToString(outputFile, indent, 0, "void*", &pData, "pData", *pDataSize.GetPointer(), vinfo_pData); // PRC
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkMergePipelineCaches(device, dstCache, srcCacheCount, pSrcCaches)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineCache dstCache
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "dstCache:                       "); // HRW
    OutputString(outputFile, "VkPipelineCache = "); // TEQ
    AddrToString(outputFile, dstCache); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t srcCacheCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "srcCacheCount:                  "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, srcCacheCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPipelineCache* pSrcCaches
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSrcCaches:                     "); // HRW
    OutputString(outputFile, "const VkPipelineCache* = "); // TEQ
    if (pSrcCaches.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pSrcCaches.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pSrcCaches = {true, false, false, nullptr};
        ArrayToString(outputFile, indent, 0, "const VkPipelineCache*", &pSrcCaches, "pSrcCaches", srcCacheCount, vinfo_pSrcCaches); // AUC
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
    HandlePointerDecoder<VkPipeline>*           pPipelines)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreateGraphicsPipelines(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineCache pipelineCache
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pipelineCache:                  "); // HRW
    OutputString(outputFile, "VkPipelineCache = "); // TEQ
    AddrToString(outputFile, pipelineCache); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t createInfoCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "createInfoCount:                "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, createInfoCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkGraphicsPipelineCreateInfo* pCreateInfos
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfos:                   "); // HRW
    OutputString(outputFile, "const VkGraphicsPipelineCreateInfo* = "); // TEQ
    if (pCreateInfos.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfos.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkGraphicsPipelineCreateInfo>(outputFile, indent+1, 1, "VkGraphicsPipelineCreateInfo", pCreateInfos.GetMetaStructPointer(), "pCreateInfos", createInfoCount, false, pCreateInfos.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipeline* pPipelines
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pPipelines:                     "); // HRW
    OutputString(outputFile, "VkPipeline* = "); // TEQ
    if (pPipelines.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pPipelines.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pPipelines = {true, false, false, nullptr};
        ArrayToString(outputFile, indent, 0, "VkPipeline*", &pPipelines, "pPipelines", createInfoCount, vinfo_pPipelines); // AUC
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
    HandlePointerDecoder<VkPipeline>*           pPipelines)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreateComputePipelines(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineCache pipelineCache
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pipelineCache:                  "); // HRW
    OutputString(outputFile, "VkPipelineCache = "); // TEQ
    AddrToString(outputFile, pipelineCache); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t createInfoCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "createInfoCount:                "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, createInfoCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkComputePipelineCreateInfo* pCreateInfos
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfos:                   "); // HRW
    OutputString(outputFile, "const VkComputePipelineCreateInfo* = "); // TEQ
    if (pCreateInfos.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfos.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkComputePipelineCreateInfo>(outputFile, indent+1, 1, "VkComputePipelineCreateInfo", pCreateInfos.GetMetaStructPointer(), "pCreateInfos", createInfoCount, false, pCreateInfos.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipeline* pPipelines
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pPipelines:                     "); // HRW
    OutputString(outputFile, "VkPipeline* = "); // TEQ
    if (pPipelines.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pPipelines.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pPipelines = {true, false, false, nullptr};
        ArrayToString(outputFile, indent, 0, "VkPipeline*", &pPipelines, "pPipelines", createInfoCount, vinfo_pPipelines); // AUC
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkDestroyPipeline(device, pipeline, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipeline pipeline
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pipeline:                       "); // HRW
    OutputString(outputFile, "VkPipeline = "); // TEQ
    AddrToString(outputFile, pipeline); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreatePipelineLayout(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkPipelineLayoutCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkPipelineLayout>*     pPipelineLayout)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreatePipelineLayout(device, pCreateInfo, pAllocator, pPipelineLayout)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPipelineLayoutCreateInfo* pCreateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkPipelineLayoutCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineLayout* pPipelineLayout
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pPipelineLayout:                "); // HRW
    OutputString(outputFile, "VkPipelineLayout* = "); // TEQ
    if (pPipelineLayout.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pPipelineLayout = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pPipelineLayout.GetPointer(), vinfo_pPipelineLayout); // PWS
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkDestroyPipelineLayout(device, pipelineLayout, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineLayout pipelineLayout
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pipelineLayout:                 "); // HRW
    OutputString(outputFile, "VkPipelineLayout = "); // TEQ
    AddrToString(outputFile, pipelineLayout); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateSampler(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSamplerCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkSampler>*            pSampler)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreateSampler(device, pCreateInfo, pAllocator, pSampler)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSamplerCreateInfo* pCreateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkSamplerCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSampler* pSampler
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSampler:                       "); // HRW
    OutputString(outputFile, "VkSampler* = "); // TEQ
    if (pSampler.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pSampler = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pSampler.GetPointer(), vinfo_pSampler); // PWS
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkDestroySampler(device, sampler, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSampler sampler
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "sampler:                        "); // HRW
    OutputString(outputFile, "VkSampler = "); // TEQ
    AddrToString(outputFile, sampler); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateDescriptorSetLayout(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDescriptorSetLayoutCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkDescriptorSetLayout>* pSetLayout)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreateDescriptorSetLayout(device, pCreateInfo, pAllocator, pSetLayout)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDescriptorSetLayoutCreateInfo* pCreateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkDescriptorSetLayoutCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDescriptorSetLayout* pSetLayout
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSetLayout:                     "); // HRW
    OutputString(outputFile, "VkDescriptorSetLayout* = "); // TEQ
    if (pSetLayout.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pSetLayout = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pSetLayout.GetPointer(), vinfo_pSetLayout); // PWS
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkDestroyDescriptorSetLayout(device, descriptorSetLayout, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDescriptorSetLayout descriptorSetLayout
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "descriptorSetLayout:            "); // HRW
    OutputString(outputFile, "VkDescriptorSetLayout = "); // TEQ
    AddrToString(outputFile, descriptorSetLayout); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateDescriptorPool(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDescriptorPoolCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkDescriptorPool>*     pDescriptorPool)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreateDescriptorPool(device, pCreateInfo, pAllocator, pDescriptorPool)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDescriptorPoolCreateInfo* pCreateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkDescriptorPoolCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDescriptorPool* pDescriptorPool
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pDescriptorPool:                "); // HRW
    OutputString(outputFile, "VkDescriptorPool* = "); // TEQ
    if (pDescriptorPool.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pDescriptorPool = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pDescriptorPool.GetPointer(), vinfo_pDescriptorPool); // PWS
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkDestroyDescriptorPool(device, descriptorPool, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDescriptorPool descriptorPool
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "descriptorPool:                 "); // HRW
    OutputString(outputFile, "VkDescriptorPool = "); // TEQ
    AddrToString(outputFile, descriptorPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkResetDescriptorPool(device, descriptorPool, flags)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDescriptorPool descriptorPool
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "descriptorPool:                 "); // HRW
    OutputString(outputFile, "VkDescriptorPool = "); // TEQ
    AddrToString(outputFile, descriptorPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDescriptorPoolResetFlags flags
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "flags:                          "); // HRW
    OutputString(outputFile, "VkDescriptorPoolResetFlags = "); // TEQ
    UnsignedDecimalToString(outputFile, flags); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkAllocateDescriptorSets(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDescriptorSetAllocateInfo>& pAllocateInfo,
    HandlePointerDecoder<VkDescriptorSet>*      pDescriptorSets)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkAllocateDescriptorSets(device, pAllocateInfo, pDescriptorSets)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDescriptorSetAllocateInfo* pAllocateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocateInfo:                  "); // HRW
    OutputString(outputFile, "const VkDescriptorSetAllocateInfo* = "); // TEQ
    if (pAllocateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocateInfo.GetMetaStructPointer(), indent+1,pAllocateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDescriptorSet* pDescriptorSets
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pDescriptorSets:                "); // HRW
    OutputString(outputFile, "VkDescriptorSet* = "); // TEQ
    if (pDescriptorSets.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pDescriptorSets.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pDescriptorSets = {true, false, false, nullptr};
        ArrayToString(outputFile, indent, 0, "VkDescriptorSet*", &pDescriptorSets, "pDescriptorSets", pAllocateInfo.GetPointer()->descriptorSetCount, vinfo_pDescriptorSets); // AUC
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkFreeDescriptorSets(device, descriptorPool, descriptorSetCount, pDescriptorSets)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDescriptorPool descriptorPool
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "descriptorPool:                 "); // HRW
    OutputString(outputFile, "VkDescriptorPool = "); // TEQ
    AddrToString(outputFile, descriptorPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t descriptorSetCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "descriptorSetCount:             "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, descriptorSetCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDescriptorSet* pDescriptorSets
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pDescriptorSets:                "); // HRW
    OutputString(outputFile, "const VkDescriptorSet* = "); // TEQ
    if (pDescriptorSets.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pDescriptorSets.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pDescriptorSets = {true, false, false, nullptr};
        ArrayToString(outputFile, indent, 0, "const VkDescriptorSet*", &pDescriptorSets, "pDescriptorSets", descriptorSetCount, vinfo_pDescriptorSets); // AUC
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkUpdateDescriptorSets(device, descriptorWriteCount, pDescriptorWrites, descriptorCopyCount, pDescriptorCopies)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t descriptorWriteCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "descriptorWriteCount:           "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, descriptorWriteCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkWriteDescriptorSet* pDescriptorWrites
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pDescriptorWrites:              "); // HRW
    OutputString(outputFile, "const VkWriteDescriptorSet* = "); // TEQ
    if (pDescriptorWrites.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pDescriptorWrites.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkWriteDescriptorSet>(outputFile, indent+1, 1, "VkWriteDescriptorSet", pDescriptorWrites.GetMetaStructPointer(), "pDescriptorWrites", descriptorWriteCount, false, pDescriptorWrites.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t descriptorCopyCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "descriptorCopyCount:            "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, descriptorCopyCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkCopyDescriptorSet* pDescriptorCopies
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pDescriptorCopies:              "); // HRW
    OutputString(outputFile, "const VkCopyDescriptorSet* = "); // TEQ
    if (pDescriptorCopies.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pDescriptorCopies.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkCopyDescriptorSet>(outputFile, indent+1, 1, "VkCopyDescriptorSet", pDescriptorCopies.GetMetaStructPointer(), "pDescriptorCopies", descriptorCopyCount, false, pDescriptorCopies.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateFramebuffer(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkFramebufferCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkFramebuffer>*        pFramebuffer)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreateFramebuffer(device, pCreateInfo, pAllocator, pFramebuffer)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkFramebufferCreateInfo* pCreateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkFramebufferCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFramebuffer* pFramebuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pFramebuffer:                   "); // HRW
    OutputString(outputFile, "VkFramebuffer* = "); // TEQ
    if (pFramebuffer.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pFramebuffer = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pFramebuffer.GetPointer(), vinfo_pFramebuffer); // PWS
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkDestroyFramebuffer(device, framebuffer, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFramebuffer framebuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "framebuffer:                    "); // HRW
    OutputString(outputFile, "VkFramebuffer = "); // TEQ
    AddrToString(outputFile, framebuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateRenderPass(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkRenderPassCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkRenderPass>*         pRenderPass)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreateRenderPass(device, pCreateInfo, pAllocator, pRenderPass)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkRenderPassCreateInfo* pCreateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkRenderPassCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkRenderPass* pRenderPass
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pRenderPass:                    "); // HRW
    OutputString(outputFile, "VkRenderPass* = "); // TEQ
    if (pRenderPass.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pRenderPass = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pRenderPass.GetPointer(), vinfo_pRenderPass); // PWS
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkDestroyRenderPass(device, renderPass, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkRenderPass renderPass
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "renderPass:                     "); // HRW
    OutputString(outputFile, "VkRenderPass = "); // TEQ
    AddrToString(outputFile, renderPass); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetRenderAreaGranularity(
    format::HandleId                            device,
    format::HandleId                            renderPass,
    StructPointerDecoder<Decoded_VkExtent2D>*   pGranularity)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetRenderAreaGranularity(device, renderPass, pGranularity)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkRenderPass renderPass
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "renderPass:                     "); // HRW
    OutputString(outputFile, "VkRenderPass = "); // TEQ
    AddrToString(outputFile, renderPass); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkExtent2D* pGranularity
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pGranularity:                   "); // HRW
    OutputString(outputFile, "VkExtent2D* = "); // TEQ
    if (pGranularity.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pGranularity.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pGranularity.GetMetaStructPointer(), indent+1,pGranularity.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateCommandPool(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkCommandPoolCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkCommandPool>*        pCommandPool)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreateCommandPool(device, pCreateInfo, pAllocator, pCommandPool)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkCommandPoolCreateInfo* pCreateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkCommandPoolCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkCommandPool* pCommandPool
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCommandPool:                   "); // HRW
    OutputString(outputFile, "VkCommandPool* = "); // TEQ
    if (pCommandPool.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pCommandPool = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pCommandPool.GetPointer(), vinfo_pCommandPool); // PWS
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkDestroyCommandPool(device, commandPool, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkCommandPool commandPool
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandPool:                    "); // HRW
    OutputString(outputFile, "VkCommandPool = "); // TEQ
    AddrToString(outputFile, commandPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkResetCommandPool(device, commandPool, flags)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkCommandPool commandPool
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandPool:                    "); // HRW
    OutputString(outputFile, "VkCommandPool = "); // TEQ
    AddrToString(outputFile, commandPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkCommandPoolResetFlags flags
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "flags:                          "); // HRW
    OutputString(outputFile, "VkCommandPoolResetFlags = "); // TEQ
    FlagsToString(outputFile, flags, EnumToStringVkCommandPoolResetFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkAllocateCommandBuffers(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkCommandBufferAllocateInfo>& pAllocateInfo,
    HandlePointerDecoder<VkCommandBuffer>*      pCommandBuffers)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkAllocateCommandBuffers(device, pAllocateInfo, pCommandBuffers)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkCommandBufferAllocateInfo* pAllocateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocateInfo:                  "); // HRW
    OutputString(outputFile, "const VkCommandBufferAllocateInfo* = "); // TEQ
    if (pAllocateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocateInfo.GetMetaStructPointer(), indent+1,pAllocateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkCommandBuffer* pCommandBuffers
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCommandBuffers:                "); // HRW
    OutputString(outputFile, "VkCommandBuffer* = "); // TEQ
    if (pCommandBuffers.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCommandBuffers.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pCommandBuffers = {true, false, false, nullptr};
        ArrayToString(outputFile, indent, 0, "VkCommandBuffer*", &pCommandBuffers, "pCommandBuffers", pAllocateInfo.GetPointer()->commandBufferCount, vinfo_pCommandBuffers); // AUC
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkFreeCommandBuffers(device, commandPool, commandBufferCount, pCommandBuffers)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkCommandPool commandPool
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandPool:                    "); // HRW
    OutputString(outputFile, "VkCommandPool = "); // TEQ
    AddrToString(outputFile, commandPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t commandBufferCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBufferCount:             "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, commandBufferCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkCommandBuffer* pCommandBuffers
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCommandBuffers:                "); // HRW
    OutputString(outputFile, "const VkCommandBuffer* = "); // TEQ
    if (pCommandBuffers.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCommandBuffers.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pCommandBuffers = {true, false, false, nullptr};
        ArrayToString(outputFile, indent, 0, "const VkCommandBuffer*", &pCommandBuffers, "pCommandBuffers", commandBufferCount, vinfo_pCommandBuffers); // AUC
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkBeginCommandBuffer(commandBuffer, pBeginInfo)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkCommandBufferBeginInfo* pBeginInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pBeginInfo:                     "); // HRW
    OutputString(outputFile, "const VkCommandBufferBeginInfo* = "); // TEQ
    if (pBeginInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pBeginInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pBeginInfo.GetMetaStructPointer(), indent+1,pBeginInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkEndCommandBuffer(
    VkResult                                    returnValue,
    format::HandleId                            commandBuffer)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkEndCommandBuffer(commandBuffer)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkResetCommandBuffer(
    VkResult                                    returnValue,
    format::HandleId                            commandBuffer,
    VkCommandBufferResetFlags                   flags)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkResetCommandBuffer(commandBuffer, flags)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkCommandBufferResetFlags flags
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "flags:                          "); // HRW
    OutputString(outputFile, "VkCommandBufferResetFlags = "); // TEQ
    FlagsToString(outputFile, flags, EnumToStringVkCommandBufferResetFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdBindPipeline(
    format::HandleId                            commandBuffer,
    VkPipelineBindPoint                         pipelineBindPoint,
    format::HandleId                            pipeline)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdBindPipeline(commandBuffer, pipelineBindPoint, pipeline)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineBindPoint pipelineBindPoint
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pipelineBindPoint:              "); // HRW
    OutputString(outputFile, "VkPipelineBindPoint = "); // TEQ
    EnumToStringVkPipelineBindPoint(outputFile, pipelineBindPoint); // VSA
    OutputString(outputFile, " (");
    UnsignedDecimalToString(outputFile, pipelineBindPoint);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipeline pipeline
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pipeline:                       "); // HRW
    OutputString(outputFile, "VkPipeline = "); // TEQ
    AddrToString(outputFile, pipeline); // PAQ
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdSetViewport(commandBuffer, firstViewport, viewportCount, pViewports)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstViewport
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "firstViewport:                  "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, firstViewport); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t viewportCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "viewportCount:                  "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, viewportCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkViewport* pViewports
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pViewports:                     "); // HRW
    OutputString(outputFile, "const VkViewport* = "); // TEQ
    if (pViewports.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pViewports.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkViewport>(outputFile, indent+1, 1, "VkViewport", pViewports.GetMetaStructPointer(), "pViewports", viewportCount, false, pViewports.GetAddress());  // CCO
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdSetScissor(commandBuffer, firstScissor, scissorCount, pScissors)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstScissor
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "firstScissor:                   "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, firstScissor); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t scissorCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "scissorCount:                   "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, scissorCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkRect2D* pScissors
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pScissors:                      "); // HRW
    OutputString(outputFile, "const VkRect2D* = "); // TEQ
    if (pScissors.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pScissors.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkRect2D>(outputFile, indent+1, 1, "VkRect2D", pScissors.GetMetaStructPointer(), "pScissors", scissorCount, false, pScissors.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdSetLineWidth(
    format::HandleId                            commandBuffer,
    float                                       lineWidth)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdSetLineWidth(commandBuffer, lineWidth)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: float lineWidth
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "lineWidth:                      "); // HRW
    OutputString(outputFile, "float = "); // TEQ
    DoubleToString(outputFile, lineWidth); // PEZ
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdSetDepthBias(commandBuffer, depthBiasConstantFactor, depthBiasClamp, depthBiasSlopeFactor)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: float depthBiasConstantFactor
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "depthBiasConstantFactor:        "); // HRW
    OutputString(outputFile, "float = "); // TEQ
    DoubleToString(outputFile, depthBiasConstantFactor); // PEZ
    OutputString(outputFile, "\n"); // HHS

    // func arg: float depthBiasClamp
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "depthBiasClamp:                 "); // HRW
    OutputString(outputFile, "float = "); // TEQ
    DoubleToString(outputFile, depthBiasClamp); // PEZ
    OutputString(outputFile, "\n"); // HHS

    // func arg: float depthBiasSlopeFactor
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "depthBiasSlopeFactor:           "); // HRW
    OutputString(outputFile, "float = "); // TEQ
    DoubleToString(outputFile, depthBiasSlopeFactor); // PEZ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdSetBlendConstants(
    format::HandleId                            commandBuffer,
    const PointerDecoder<float>&                blendConstants)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdSetBlendConstants(commandBuffer, blendConstants)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const float blendConstants
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "blendConstants:                 "); // HRW
    OutputString(outputFile, "float"); // JUQ
    OutputString(outputFile, "[");
    OutputString(outputFile, "4"); // DFX
    OutputString(outputFile, "] = ");
    ScalarValueToStringStruct vinfo_blendConstants = {false, false, false, nullptr};
    ArrayOfScalarsToString<float>(outputFile, indent, 0, "const float", blendConstants.GetPointer(), "blendConstants", 4, vinfo_blendConstants); // JPA
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdSetDepthBounds(
    format::HandleId                            commandBuffer,
    float                                       minDepthBounds,
    float                                       maxDepthBounds)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdSetDepthBounds(commandBuffer, minDepthBounds, maxDepthBounds)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: float minDepthBounds
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "minDepthBounds:                 "); // HRW
    OutputString(outputFile, "float = "); // TEQ
    DoubleToString(outputFile, minDepthBounds); // PEZ
    OutputString(outputFile, "\n"); // HHS

    // func arg: float maxDepthBounds
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "maxDepthBounds:                 "); // HRW
    OutputString(outputFile, "float = "); // TEQ
    DoubleToString(outputFile, maxDepthBounds); // PEZ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdSetStencilCompareMask(
    format::HandleId                            commandBuffer,
    VkStencilFaceFlags                          faceMask,
    uint32_t                                    compareMask)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdSetStencilCompareMask(commandBuffer, faceMask, compareMask)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkStencilFaceFlags faceMask
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "faceMask:                       "); // HRW
    OutputString(outputFile, "VkStencilFaceFlags = "); // TEQ
    FlagsToString(outputFile, faceMask, EnumToStringVkStencilFaceFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t compareMask
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "compareMask:                    "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, compareMask); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdSetStencilWriteMask(
    format::HandleId                            commandBuffer,
    VkStencilFaceFlags                          faceMask,
    uint32_t                                    writeMask)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdSetStencilWriteMask(commandBuffer, faceMask, writeMask)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkStencilFaceFlags faceMask
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "faceMask:                       "); // HRW
    OutputString(outputFile, "VkStencilFaceFlags = "); // TEQ
    FlagsToString(outputFile, faceMask, EnumToStringVkStencilFaceFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t writeMask
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "writeMask:                      "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, writeMask); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdSetStencilReference(
    format::HandleId                            commandBuffer,
    VkStencilFaceFlags                          faceMask,
    uint32_t                                    reference)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdSetStencilReference(commandBuffer, faceMask, reference)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkStencilFaceFlags faceMask
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "faceMask:                       "); // HRW
    OutputString(outputFile, "VkStencilFaceFlags = "); // TEQ
    FlagsToString(outputFile, faceMask, EnumToStringVkStencilFaceFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t reference
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "reference:                      "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, reference); // UYW
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdBindDescriptorSets(commandBuffer, pipelineBindPoint, layout, firstSet, descriptorSetCount, pDescriptorSets, dynamicOffsetCount, pDynamicOffsets)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineBindPoint pipelineBindPoint
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pipelineBindPoint:              "); // HRW
    OutputString(outputFile, "VkPipelineBindPoint = "); // TEQ
    EnumToStringVkPipelineBindPoint(outputFile, pipelineBindPoint); // VSA
    OutputString(outputFile, " (");
    UnsignedDecimalToString(outputFile, pipelineBindPoint);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineLayout layout
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "layout:                         "); // HRW
    OutputString(outputFile, "VkPipelineLayout = "); // TEQ
    AddrToString(outputFile, layout); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstSet
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "firstSet:                       "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, firstSet); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t descriptorSetCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "descriptorSetCount:             "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, descriptorSetCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDescriptorSet* pDescriptorSets
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pDescriptorSets:                "); // HRW
    OutputString(outputFile, "const VkDescriptorSet* = "); // TEQ
    if (pDescriptorSets.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pDescriptorSets.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pDescriptorSets = {true, false, false, nullptr};
        ArrayToString(outputFile, indent, 0, "const VkDescriptorSet*", &pDescriptorSets, "pDescriptorSets", descriptorSetCount, vinfo_pDescriptorSets); // AUC
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t dynamicOffsetCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "dynamicOffsetCount:             "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, dynamicOffsetCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const uint32_t* pDynamicOffsets
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pDynamicOffsets:                "); // HRW
    OutputString(outputFile, "const uint32_t* = "); // TEQ
    if (pDynamicOffsets.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pDynamicOffsets.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pDynamicOffsets = {false, false, false, nullptr};
        ArrayToString(outputFile, indent, 0, "const uint32_t*", &pDynamicOffsets, "pDynamicOffsets", dynamicOffsetCount, vinfo_pDynamicOffsets); // AUC
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdBindIndexBuffer(commandBuffer, buffer, offset, indexType)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer buffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "buffer:                         "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    AddrToString(outputFile, buffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize offset
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "offset:                         "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    SignedDecimalToString(outputFile, offset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkIndexType indexType
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "indexType:                      "); // HRW
    OutputString(outputFile, "VkIndexType = "); // TEQ
    EnumToStringVkIndexType(outputFile, indexType); // VSA
    OutputString(outputFile, " (");
    UnsignedDecimalToString(outputFile, indexType);
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdBindVertexBuffers(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstBinding
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "firstBinding:                   "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, firstBinding); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t bindingCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "bindingCount:                   "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, bindingCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBuffer* pBuffers
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pBuffers:                       "); // HRW
    OutputString(outputFile, "const VkBuffer* = "); // TEQ
    if (pBuffers.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pBuffers.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pBuffers = {true, false, false, nullptr};
        ArrayToString(outputFile, indent, 0, "const VkBuffer*", &pBuffers, "pBuffers", bindingCount, vinfo_pBuffers); // AUC
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDeviceSize* pOffsets
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pOffsets:                       "); // HRW
    OutputString(outputFile, "const VkDeviceSize* = "); // TEQ
    if (pOffsets.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pOffsets.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pOffsets = {false, false, false, nullptr};
        ArrayToString(outputFile, indent, 0, "const VkDeviceSize*", &pOffsets, "pOffsets", bindingCount, vinfo_pOffsets); // AUC
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdDraw(commandBuffer, vertexCount, instanceCount, firstVertex, firstInstance)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t vertexCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "vertexCount:                    "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, vertexCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t instanceCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "instanceCount:                  "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, instanceCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstVertex
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "firstVertex:                    "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, firstVertex); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstInstance
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "firstInstance:                  "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, firstInstance); // UYW
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdDrawIndexed(commandBuffer, indexCount, instanceCount, firstIndex, vertexOffset, firstInstance)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t indexCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "indexCount:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, indexCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t instanceCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "instanceCount:                  "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, instanceCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstIndex
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "firstIndex:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, firstIndex); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: int32_t vertexOffset
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "vertexOffset:                   "); // HRW
    OutputString(outputFile, "int32_t = "); // TEQ
    SignedDecimalToString(outputFile, vertexOffset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstInstance
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "firstInstance:                  "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, firstInstance); // UYW
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdDrawIndirect(commandBuffer, buffer, offset, drawCount, stride)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer buffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "buffer:                         "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    AddrToString(outputFile, buffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize offset
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "offset:                         "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    SignedDecimalToString(outputFile, offset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t drawCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "drawCount:                      "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, drawCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t stride
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "stride:                         "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, stride); // UYW
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdDrawIndexedIndirect(commandBuffer, buffer, offset, drawCount, stride)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer buffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "buffer:                         "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    AddrToString(outputFile, buffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize offset
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "offset:                         "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    SignedDecimalToString(outputFile, offset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t drawCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "drawCount:                      "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, drawCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t stride
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "stride:                         "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, stride); // UYW
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdDispatch(commandBuffer, groupCountX, groupCountY, groupCountZ)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t groupCountX
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "groupCountX:                    "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, groupCountX); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t groupCountY
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "groupCountY:                    "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, groupCountY); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t groupCountZ
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "groupCountZ:                    "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, groupCountZ); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdDispatchIndirect(
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdDispatchIndirect(commandBuffer, buffer, offset)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer buffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "buffer:                         "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    AddrToString(outputFile, buffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize offset
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "offset:                         "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    SignedDecimalToString(outputFile, offset); // EQA
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdCopyBuffer(commandBuffer, srcBuffer, dstBuffer, regionCount, pRegions)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer srcBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "srcBuffer:                      "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    AddrToString(outputFile, srcBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer dstBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "dstBuffer:                      "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    AddrToString(outputFile, dstBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t regionCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "regionCount:                    "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, regionCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBufferCopy* pRegions
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pRegions:                       "); // HRW
    OutputString(outputFile, "const VkBufferCopy* = "); // TEQ
    if (pRegions.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pRegions.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkBufferCopy>(outputFile, indent+1, 1, "VkBufferCopy", pRegions.GetMetaStructPointer(), "pRegions", regionCount, false, pRegions.GetAddress());  // CCO
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdCopyImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage srcImage
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "srcImage:                       "); // HRW
    OutputString(outputFile, "VkImage = "); // TEQ
    AddrToString(outputFile, srcImage); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageLayout srcImageLayout
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "srcImageLayout:                 "); // HRW
    OutputString(outputFile, "VkImageLayout = "); // TEQ
    EnumToStringVkImageLayout(outputFile, srcImageLayout); // VSA
    OutputString(outputFile, " (");
    UnsignedDecimalToString(outputFile, srcImageLayout);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage dstImage
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "dstImage:                       "); // HRW
    OutputString(outputFile, "VkImage = "); // TEQ
    AddrToString(outputFile, dstImage); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageLayout dstImageLayout
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "dstImageLayout:                 "); // HRW
    OutputString(outputFile, "VkImageLayout = "); // TEQ
    EnumToStringVkImageLayout(outputFile, dstImageLayout); // VSA
    OutputString(outputFile, " (");
    UnsignedDecimalToString(outputFile, dstImageLayout);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t regionCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "regionCount:                    "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, regionCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImageCopy* pRegions
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pRegions:                       "); // HRW
    OutputString(outputFile, "const VkImageCopy* = "); // TEQ
    if (pRegions.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pRegions.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkImageCopy>(outputFile, indent+1, 1, "VkImageCopy", pRegions.GetMetaStructPointer(), "pRegions", regionCount, false, pRegions.GetAddress());  // CCO
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdBlitImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions, filter)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage srcImage
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "srcImage:                       "); // HRW
    OutputString(outputFile, "VkImage = "); // TEQ
    AddrToString(outputFile, srcImage); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageLayout srcImageLayout
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "srcImageLayout:                 "); // HRW
    OutputString(outputFile, "VkImageLayout = "); // TEQ
    EnumToStringVkImageLayout(outputFile, srcImageLayout); // VSA
    OutputString(outputFile, " (");
    UnsignedDecimalToString(outputFile, srcImageLayout);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage dstImage
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "dstImage:                       "); // HRW
    OutputString(outputFile, "VkImage = "); // TEQ
    AddrToString(outputFile, dstImage); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageLayout dstImageLayout
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "dstImageLayout:                 "); // HRW
    OutputString(outputFile, "VkImageLayout = "); // TEQ
    EnumToStringVkImageLayout(outputFile, dstImageLayout); // VSA
    OutputString(outputFile, " (");
    UnsignedDecimalToString(outputFile, dstImageLayout);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t regionCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "regionCount:                    "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, regionCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImageBlit* pRegions
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pRegions:                       "); // HRW
    OutputString(outputFile, "const VkImageBlit* = "); // TEQ
    if (pRegions.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pRegions.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkImageBlit>(outputFile, indent+1, 1, "VkImageBlit", pRegions.GetMetaStructPointer(), "pRegions", regionCount, false, pRegions.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFilter filter
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "filter:                         "); // HRW
    OutputString(outputFile, "VkFilter = "); // TEQ
    EnumToStringVkFilter(outputFile, filter); // VSA
    OutputString(outputFile, " (");
    UnsignedDecimalToString(outputFile, filter);
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdCopyBufferToImage(commandBuffer, srcBuffer, dstImage, dstImageLayout, regionCount, pRegions)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer srcBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "srcBuffer:                      "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    AddrToString(outputFile, srcBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage dstImage
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "dstImage:                       "); // HRW
    OutputString(outputFile, "VkImage = "); // TEQ
    AddrToString(outputFile, dstImage); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageLayout dstImageLayout
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "dstImageLayout:                 "); // HRW
    OutputString(outputFile, "VkImageLayout = "); // TEQ
    EnumToStringVkImageLayout(outputFile, dstImageLayout); // VSA
    OutputString(outputFile, " (");
    UnsignedDecimalToString(outputFile, dstImageLayout);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t regionCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "regionCount:                    "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, regionCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBufferImageCopy* pRegions
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pRegions:                       "); // HRW
    OutputString(outputFile, "const VkBufferImageCopy* = "); // TEQ
    if (pRegions.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pRegions.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkBufferImageCopy>(outputFile, indent+1, 1, "VkBufferImageCopy", pRegions.GetMetaStructPointer(), "pRegions", regionCount, false, pRegions.GetAddress());  // CCO
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdCopyImageToBuffer(commandBuffer, srcImage, srcImageLayout, dstBuffer, regionCount, pRegions)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage srcImage
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "srcImage:                       "); // HRW
    OutputString(outputFile, "VkImage = "); // TEQ
    AddrToString(outputFile, srcImage); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageLayout srcImageLayout
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "srcImageLayout:                 "); // HRW
    OutputString(outputFile, "VkImageLayout = "); // TEQ
    EnumToStringVkImageLayout(outputFile, srcImageLayout); // VSA
    OutputString(outputFile, " (");
    UnsignedDecimalToString(outputFile, srcImageLayout);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer dstBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "dstBuffer:                      "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    AddrToString(outputFile, dstBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t regionCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "regionCount:                    "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, regionCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBufferImageCopy* pRegions
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pRegions:                       "); // HRW
    OutputString(outputFile, "const VkBufferImageCopy* = "); // TEQ
    if (pRegions.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pRegions.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkBufferImageCopy>(outputFile, indent+1, 1, "VkBufferImageCopy", pRegions.GetMetaStructPointer(), "pRegions", regionCount, false, pRegions.GetAddress());  // CCO
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdUpdateBuffer(commandBuffer, dstBuffer, dstOffset, dataSize, pData)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer dstBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "dstBuffer:                      "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    AddrToString(outputFile, dstBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize dstOffset
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "dstOffset:                      "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    SignedDecimalToString(outputFile, dstOffset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize dataSize
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "dataSize:                       "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    SignedDecimalToString(outputFile, dataSize); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: const void* pData
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pData:                          "); // HRW
    OutputString(outputFile, "const void* = "); // TEQ
    if (pData.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pData.GetAddress()); // AHW
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdFillBuffer(commandBuffer, dstBuffer, dstOffset, size, data)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer dstBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "dstBuffer:                      "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    AddrToString(outputFile, dstBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize dstOffset
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "dstOffset:                      "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    SignedDecimalToString(outputFile, dstOffset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize size
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "size:                           "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    SignedDecimalToString(outputFile, size); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t data
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "data:                           "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, data); // UYW
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdClearColorImage(commandBuffer, image, imageLayout, pColor, rangeCount, pRanges)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage image
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "image:                          "); // HRW
    OutputString(outputFile, "VkImage = "); // TEQ
    AddrToString(outputFile, image); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageLayout imageLayout
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "imageLayout:                    "); // HRW
    OutputString(outputFile, "VkImageLayout = "); // TEQ
    EnumToStringVkImageLayout(outputFile, imageLayout); // VSA
    OutputString(outputFile, " (");
    UnsignedDecimalToString(outputFile, imageLayout);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkClearColorValue* pColor
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pColor:                         "); // HRW
    OutputString(outputFile, "const VkClearColorValue* = "); // TEQ
    if (pColor.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pColor.GetAddress()); // JHI
        OutputString(outputFile, " (Union)");
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pColor.GetMetaStructPointer(), indent+1,pColor.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t rangeCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "rangeCount:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, rangeCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImageSubresourceRange* pRanges
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pRanges:                        "); // HRW
    OutputString(outputFile, "const VkImageSubresourceRange* = "); // TEQ
    if (pRanges.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pRanges.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkImageSubresourceRange>(outputFile, indent+1, 1, "VkImageSubresourceRange", pRanges.GetMetaStructPointer(), "pRanges", rangeCount, false, pRanges.GetAddress());  // CCO
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdClearDepthStencilImage(commandBuffer, image, imageLayout, pDepthStencil, rangeCount, pRanges)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage image
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "image:                          "); // HRW
    OutputString(outputFile, "VkImage = "); // TEQ
    AddrToString(outputFile, image); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageLayout imageLayout
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "imageLayout:                    "); // HRW
    OutputString(outputFile, "VkImageLayout = "); // TEQ
    EnumToStringVkImageLayout(outputFile, imageLayout); // VSA
    OutputString(outputFile, " (");
    UnsignedDecimalToString(outputFile, imageLayout);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkClearDepthStencilValue* pDepthStencil
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pDepthStencil:                  "); // HRW
    OutputString(outputFile, "const VkClearDepthStencilValue* = "); // TEQ
    if (pDepthStencil.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pDepthStencil.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pDepthStencil.GetMetaStructPointer(), indent+1,pDepthStencil.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t rangeCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "rangeCount:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, rangeCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImageSubresourceRange* pRanges
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pRanges:                        "); // HRW
    OutputString(outputFile, "const VkImageSubresourceRange* = "); // TEQ
    if (pRanges.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pRanges.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkImageSubresourceRange>(outputFile, indent+1, 1, "VkImageSubresourceRange", pRanges.GetMetaStructPointer(), "pRanges", rangeCount, false, pRanges.GetAddress());  // CCO
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdClearAttachments(commandBuffer, attachmentCount, pAttachments, rectCount, pRects)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t attachmentCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "attachmentCount:                "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, attachmentCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkClearAttachment* pAttachments
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAttachments:                   "); // HRW
    OutputString(outputFile, "const VkClearAttachment* = "); // TEQ
    if (pAttachments.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAttachments.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkClearAttachment>(outputFile, indent+1, 1, "VkClearAttachment", pAttachments.GetMetaStructPointer(), "pAttachments", attachmentCount, false, pAttachments.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t rectCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "rectCount:                      "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, rectCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkClearRect* pRects
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pRects:                         "); // HRW
    OutputString(outputFile, "const VkClearRect* = "); // TEQ
    if (pRects.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pRects.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkClearRect>(outputFile, indent+1, 1, "VkClearRect", pRects.GetMetaStructPointer(), "pRects", rectCount, false, pRects.GetAddress());  // CCO
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdResolveImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage srcImage
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "srcImage:                       "); // HRW
    OutputString(outputFile, "VkImage = "); // TEQ
    AddrToString(outputFile, srcImage); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageLayout srcImageLayout
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "srcImageLayout:                 "); // HRW
    OutputString(outputFile, "VkImageLayout = "); // TEQ
    EnumToStringVkImageLayout(outputFile, srcImageLayout); // VSA
    OutputString(outputFile, " (");
    UnsignedDecimalToString(outputFile, srcImageLayout);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage dstImage
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "dstImage:                       "); // HRW
    OutputString(outputFile, "VkImage = "); // TEQ
    AddrToString(outputFile, dstImage); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageLayout dstImageLayout
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "dstImageLayout:                 "); // HRW
    OutputString(outputFile, "VkImageLayout = "); // TEQ
    EnumToStringVkImageLayout(outputFile, dstImageLayout); // VSA
    OutputString(outputFile, " (");
    UnsignedDecimalToString(outputFile, dstImageLayout);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t regionCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "regionCount:                    "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, regionCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImageResolve* pRegions
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pRegions:                       "); // HRW
    OutputString(outputFile, "const VkImageResolve* = "); // TEQ
    if (pRegions.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pRegions.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkImageResolve>(outputFile, indent+1, 1, "VkImageResolve", pRegions.GetMetaStructPointer(), "pRegions", regionCount, false, pRegions.GetAddress());  // CCO
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdSetEvent(commandBuffer, event, stageMask)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkEvent event
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "event:                          "); // HRW
    OutputString(outputFile, "VkEvent = "); // TEQ
    AddrToString(outputFile, event); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineStageFlags stageMask
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "stageMask:                      "); // HRW
    OutputString(outputFile, "VkPipelineStageFlags = "); // TEQ
    FlagsToString(outputFile, stageMask, EnumToStringVkPipelineStageFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdResetEvent(
    format::HandleId                            commandBuffer,
    format::HandleId                            event,
    VkPipelineStageFlags                        stageMask)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdResetEvent(commandBuffer, event, stageMask)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkEvent event
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "event:                          "); // HRW
    OutputString(outputFile, "VkEvent = "); // TEQ
    AddrToString(outputFile, event); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineStageFlags stageMask
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "stageMask:                      "); // HRW
    OutputString(outputFile, "VkPipelineStageFlags = "); // TEQ
    FlagsToString(outputFile, stageMask, EnumToStringVkPipelineStageFlagBits); // URW
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdWaitEvents(commandBuffer, eventCount, pEvents, srcStageMask, dstStageMask, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t eventCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "eventCount:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, eventCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkEvent* pEvents
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pEvents:                        "); // HRW
    OutputString(outputFile, "const VkEvent* = "); // TEQ
    if (pEvents.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pEvents.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pEvents = {true, false, false, nullptr};
        ArrayToString(outputFile, indent, 0, "const VkEvent*", &pEvents, "pEvents", eventCount, vinfo_pEvents); // AUC
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineStageFlags srcStageMask
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "srcStageMask:                   "); // HRW
    OutputString(outputFile, "VkPipelineStageFlags = "); // TEQ
    FlagsToString(outputFile, srcStageMask, EnumToStringVkPipelineStageFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineStageFlags dstStageMask
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "dstStageMask:                   "); // HRW
    OutputString(outputFile, "VkPipelineStageFlags = "); // TEQ
    FlagsToString(outputFile, dstStageMask, EnumToStringVkPipelineStageFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t memoryBarrierCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "memoryBarrierCount:             "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, memoryBarrierCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkMemoryBarrier* pMemoryBarriers
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pMemoryBarriers:                "); // HRW
    OutputString(outputFile, "const VkMemoryBarrier* = "); // TEQ
    if (pMemoryBarriers.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pMemoryBarriers.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkMemoryBarrier>(outputFile, indent+1, 1, "VkMemoryBarrier", pMemoryBarriers.GetMetaStructPointer(), "pMemoryBarriers", memoryBarrierCount, false, pMemoryBarriers.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t bufferMemoryBarrierCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "bufferMemoryBarrierCount:       "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, bufferMemoryBarrierCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBufferMemoryBarrier* pBufferMemoryBarriers
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pBufferMemoryBarriers:          "); // HRW
    OutputString(outputFile, "const VkBufferMemoryBarrier* = "); // TEQ
    if (pBufferMemoryBarriers.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pBufferMemoryBarriers.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkBufferMemoryBarrier>(outputFile, indent+1, 1, "VkBufferMemoryBarrier", pBufferMemoryBarriers.GetMetaStructPointer(), "pBufferMemoryBarriers", bufferMemoryBarrierCount, false, pBufferMemoryBarriers.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t imageMemoryBarrierCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "imageMemoryBarrierCount:        "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, imageMemoryBarrierCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImageMemoryBarrier* pImageMemoryBarriers
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pImageMemoryBarriers:           "); // HRW
    OutputString(outputFile, "const VkImageMemoryBarrier* = "); // TEQ
    if (pImageMemoryBarriers.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pImageMemoryBarriers.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkImageMemoryBarrier>(outputFile, indent+1, 1, "VkImageMemoryBarrier", pImageMemoryBarriers.GetMetaStructPointer(), "pImageMemoryBarriers", imageMemoryBarrierCount, false, pImageMemoryBarriers.GetAddress());  // CCO
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdPipelineBarrier(commandBuffer, srcStageMask, dstStageMask, dependencyFlags, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineStageFlags srcStageMask
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "srcStageMask:                   "); // HRW
    OutputString(outputFile, "VkPipelineStageFlags = "); // TEQ
    FlagsToString(outputFile, srcStageMask, EnumToStringVkPipelineStageFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineStageFlags dstStageMask
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "dstStageMask:                   "); // HRW
    OutputString(outputFile, "VkPipelineStageFlags = "); // TEQ
    FlagsToString(outputFile, dstStageMask, EnumToStringVkPipelineStageFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDependencyFlags dependencyFlags
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "dependencyFlags:                "); // HRW
    OutputString(outputFile, "VkDependencyFlags = "); // TEQ
    FlagsToString(outputFile, dependencyFlags, EnumToStringVkDependencyFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t memoryBarrierCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "memoryBarrierCount:             "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, memoryBarrierCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkMemoryBarrier* pMemoryBarriers
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pMemoryBarriers:                "); // HRW
    OutputString(outputFile, "const VkMemoryBarrier* = "); // TEQ
    if (pMemoryBarriers.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pMemoryBarriers.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkMemoryBarrier>(outputFile, indent+1, 1, "VkMemoryBarrier", pMemoryBarriers.GetMetaStructPointer(), "pMemoryBarriers", memoryBarrierCount, false, pMemoryBarriers.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t bufferMemoryBarrierCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "bufferMemoryBarrierCount:       "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, bufferMemoryBarrierCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBufferMemoryBarrier* pBufferMemoryBarriers
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pBufferMemoryBarriers:          "); // HRW
    OutputString(outputFile, "const VkBufferMemoryBarrier* = "); // TEQ
    if (pBufferMemoryBarriers.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pBufferMemoryBarriers.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkBufferMemoryBarrier>(outputFile, indent+1, 1, "VkBufferMemoryBarrier", pBufferMemoryBarriers.GetMetaStructPointer(), "pBufferMemoryBarriers", bufferMemoryBarrierCount, false, pBufferMemoryBarriers.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t imageMemoryBarrierCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "imageMemoryBarrierCount:        "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, imageMemoryBarrierCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImageMemoryBarrier* pImageMemoryBarriers
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pImageMemoryBarriers:           "); // HRW
    OutputString(outputFile, "const VkImageMemoryBarrier* = "); // TEQ
    if (pImageMemoryBarriers.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pImageMemoryBarriers.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkImageMemoryBarrier>(outputFile, indent+1, 1, "VkImageMemoryBarrier", pImageMemoryBarriers.GetMetaStructPointer(), "pImageMemoryBarriers", imageMemoryBarrierCount, false, pImageMemoryBarriers.GetAddress());  // CCO
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdBeginQuery(commandBuffer, queryPool, query, flags)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryPool queryPool
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "queryPool:                      "); // HRW
    OutputString(outputFile, "VkQueryPool = "); // TEQ
    AddrToString(outputFile, queryPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t query
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "query:                          "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, query); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryControlFlags flags
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "flags:                          "); // HRW
    OutputString(outputFile, "VkQueryControlFlags = "); // TEQ
    FlagsToString(outputFile, flags, EnumToStringVkQueryControlFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdEndQuery(
    format::HandleId                            commandBuffer,
    format::HandleId                            queryPool,
    uint32_t                                    query)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdEndQuery(commandBuffer, queryPool, query)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryPool queryPool
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "queryPool:                      "); // HRW
    OutputString(outputFile, "VkQueryPool = "); // TEQ
    AddrToString(outputFile, queryPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t query
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "query:                          "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, query); // UYW
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdResetQueryPool(commandBuffer, queryPool, firstQuery, queryCount)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryPool queryPool
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "queryPool:                      "); // HRW
    OutputString(outputFile, "VkQueryPool = "); // TEQ
    AddrToString(outputFile, queryPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstQuery
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "firstQuery:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, firstQuery); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t queryCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "queryCount:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, queryCount); // UYW
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdWriteTimestamp(commandBuffer, pipelineStage, queryPool, query)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineStageFlagBits pipelineStage
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pipelineStage:                  "); // HRW
    OutputString(outputFile, "VkPipelineStageFlagBits = "); // TEQ
    EnumToStringVkPipelineStageFlagBits(outputFile, pipelineStage); // VSA
    OutputString(outputFile, " (");
    UnsignedDecimalToString(outputFile, pipelineStage);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryPool queryPool
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "queryPool:                      "); // HRW
    OutputString(outputFile, "VkQueryPool = "); // TEQ
    AddrToString(outputFile, queryPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t query
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "query:                          "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, query); // UYW
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdCopyQueryPoolResults(commandBuffer, queryPool, firstQuery, queryCount, dstBuffer, dstOffset, stride, flags)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryPool queryPool
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "queryPool:                      "); // HRW
    OutputString(outputFile, "VkQueryPool = "); // TEQ
    AddrToString(outputFile, queryPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstQuery
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "firstQuery:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, firstQuery); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t queryCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "queryCount:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, queryCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer dstBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "dstBuffer:                      "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    AddrToString(outputFile, dstBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize dstOffset
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "dstOffset:                      "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    SignedDecimalToString(outputFile, dstOffset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize stride
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "stride:                         "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    SignedDecimalToString(outputFile, stride); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryResultFlags flags
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "flags:                          "); // HRW
    OutputString(outputFile, "VkQueryResultFlags = "); // TEQ
    FlagsToString(outputFile, flags, EnumToStringVkQueryResultFlagBits); // URW
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdPushConstants(commandBuffer, layout, stageFlags, offset, size, pValues)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineLayout layout
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "layout:                         "); // HRW
    OutputString(outputFile, "VkPipelineLayout = "); // TEQ
    AddrToString(outputFile, layout); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkShaderStageFlags stageFlags
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "stageFlags:                     "); // HRW
    OutputString(outputFile, "VkShaderStageFlags = "); // TEQ
    FlagsToString(outputFile, stageFlags, EnumToStringVkShaderStageFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t offset
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "offset:                         "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, offset); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t size
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "size:                           "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, size); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const void* pValues
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pValues:                        "); // HRW
    OutputString(outputFile, "const void* = "); // TEQ
    if (pValues.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pValues.GetAddress()); // AHW
        ScalarValueToStringStruct vinfo_pValues = {false, false, false, nullptr};
        ArrayToString(outputFile, indent, 0, "const void*", &pValues, "pValues", size, vinfo_pValues); // PRC
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdBeginRenderPass(commandBuffer, pRenderPassBegin, contents)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkRenderPassBeginInfo* pRenderPassBegin
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pRenderPassBegin:               "); // HRW
    OutputString(outputFile, "const VkRenderPassBeginInfo* = "); // TEQ
    if (pRenderPassBegin.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pRenderPassBegin.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pRenderPassBegin.GetMetaStructPointer(), indent+1,pRenderPassBegin.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSubpassContents contents
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "contents:                       "); // HRW
    OutputString(outputFile, "VkSubpassContents = "); // TEQ
    EnumToStringVkSubpassContents(outputFile, contents); // VSA
    OutputString(outputFile, " (");
    UnsignedDecimalToString(outputFile, contents);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdNextSubpass(
    format::HandleId                            commandBuffer,
    VkSubpassContents                           contents)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdNextSubpass(commandBuffer, contents)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSubpassContents contents
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "contents:                       "); // HRW
    OutputString(outputFile, "VkSubpassContents = "); // TEQ
    EnumToStringVkSubpassContents(outputFile, contents); // VSA
    OutputString(outputFile, " (");
    UnsignedDecimalToString(outputFile, contents);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdEndRenderPass(
    format::HandleId                            commandBuffer)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdEndRenderPass(commandBuffer)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdExecuteCommands(
    format::HandleId                            commandBuffer,
    uint32_t                                    commandBufferCount,
    const HandlePointerDecoder<VkCommandBuffer>& pCommandBuffers)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdExecuteCommands(commandBuffer, commandBufferCount, pCommandBuffers)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t commandBufferCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBufferCount:             "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, commandBufferCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkCommandBuffer* pCommandBuffers
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCommandBuffers:                "); // HRW
    OutputString(outputFile, "const VkCommandBuffer* = "); // TEQ
    if (pCommandBuffers.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCommandBuffers.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pCommandBuffers = {true, false, false, nullptr};
        ArrayToString(outputFile, indent, 0, "const VkCommandBuffer*", &pCommandBuffers, "pCommandBuffers", commandBufferCount, vinfo_pCommandBuffers); // AUC
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkBindBufferMemory2(device, bindInfoCount, pBindInfos)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t bindInfoCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "bindInfoCount:                  "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, bindInfoCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBindBufferMemoryInfo* pBindInfos
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pBindInfos:                     "); // HRW
    OutputString(outputFile, "const VkBindBufferMemoryInfo* = "); // TEQ
    if (pBindInfos.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pBindInfos.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkBindBufferMemoryInfo>(outputFile, indent+1, 1, "VkBindBufferMemoryInfo", pBindInfos.GetMetaStructPointer(), "pBindInfos", bindInfoCount, false, pBindInfos.GetAddress());  // CCO
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkBindImageMemory2(device, bindInfoCount, pBindInfos)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t bindInfoCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "bindInfoCount:                  "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, bindInfoCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBindImageMemoryInfo* pBindInfos
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pBindInfos:                     "); // HRW
    OutputString(outputFile, "const VkBindImageMemoryInfo* = "); // TEQ
    if (pBindInfos.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pBindInfos.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkBindImageMemoryInfo>(outputFile, indent+1, 1, "VkBindImageMemoryInfo", pBindInfos.GetMetaStructPointer(), "pBindInfos", bindInfoCount, false, pBindInfos.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetDeviceGroupPeerMemoryFeatures(
    format::HandleId                            device,
    uint32_t                                    heapIndex,
    uint32_t                                    localDeviceIndex,
    uint32_t                                    remoteDeviceIndex,
    PointerDecoder<VkPeerMemoryFeatureFlags>*   pPeerMemoryFeatures)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetDeviceGroupPeerMemoryFeatures(device, heapIndex, localDeviceIndex, remoteDeviceIndex, pPeerMemoryFeatures)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t heapIndex
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "heapIndex:                      "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, heapIndex); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t localDeviceIndex
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "localDeviceIndex:               "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, localDeviceIndex); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t remoteDeviceIndex
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "remoteDeviceIndex:              "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, remoteDeviceIndex); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPeerMemoryFeatureFlags* pPeerMemoryFeatures
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pPeerMemoryFeatures:            "); // HRW
    OutputString(outputFile, "VkPeerMemoryFeatureFlags* = "); // TEQ
    if (pPeerMemoryFeatures.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pPeerMemoryFeatures = {false, false, true, EnumToStringVkPeerMemoryFeatureFlagBits};
        ScalarValueToString(outputFile, pPeerMemoryFeatures.GetPointer(), vinfo_pPeerMemoryFeatures); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdSetDeviceMask(
    format::HandleId                            commandBuffer,
    uint32_t                                    deviceMask)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdSetDeviceMask(commandBuffer, deviceMask)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t deviceMask
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "deviceMask:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, deviceMask); // UYW
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdDispatchBase(commandBuffer, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t baseGroupX
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "baseGroupX:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, baseGroupX); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t baseGroupY
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "baseGroupY:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, baseGroupY); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t baseGroupZ
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "baseGroupZ:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, baseGroupZ); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t groupCountX
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "groupCountX:                    "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, groupCountX); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t groupCountY
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "groupCountY:                    "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, groupCountY); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t groupCountZ
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "groupCountZ:                    "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, groupCountZ); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkEnumeratePhysicalDeviceGroups(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    PointerDecoder<uint32_t>*                   pPhysicalDeviceGroupCount,
    StructPointerDecoder<Decoded_VkPhysicalDeviceGroupProperties>* pPhysicalDeviceGroupProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkEnumeratePhysicalDeviceGroups(instance, pPhysicalDeviceGroupCount, pPhysicalDeviceGroupProperties)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "instance:                       "); // HRW
    OutputString(outputFile, "VkInstance = "); // TEQ
    AddrToString(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pPhysicalDeviceGroupCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pPhysicalDeviceGroupCount:      "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pPhysicalDeviceGroupCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pPhysicalDeviceGroupCount = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pPhysicalDeviceGroupCount.GetPointer(), vinfo_pPhysicalDeviceGroupCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pPhysicalDeviceGroupProperties: "); // HRW
    OutputString(outputFile, "VkPhysicalDeviceGroupProperties* = "); // TEQ
    if (pPhysicalDeviceGroupProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pPhysicalDeviceGroupProperties.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkPhysicalDeviceGroupProperties>(outputFile, indent+1, 1, "VkPhysicalDeviceGroupProperties", pPhysicalDeviceGroupProperties.GetMetaStructPointer(), "pPhysicalDeviceGroupProperties", *pPhysicalDeviceGroupCount.GetPointer(), false, pPhysicalDeviceGroupProperties.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetImageMemoryRequirements2(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImageMemoryRequirementsInfo2>& pInfo,
    StructPointerDecoder<Decoded_VkMemoryRequirements2>* pMemoryRequirements)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetImageMemoryRequirements2(device, pInfo, pMemoryRequirements)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImageMemoryRequirementsInfo2* pInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pInfo:                          "); // HRW
    OutputString(outputFile, "const VkImageMemoryRequirementsInfo2* = "); // TEQ
    if (pInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pInfo.GetMetaStructPointer(), indent+1,pInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkMemoryRequirements2* pMemoryRequirements
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pMemoryRequirements:            "); // HRW
    OutputString(outputFile, "VkMemoryRequirements2* = "); // TEQ
    if (pMemoryRequirements.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pMemoryRequirements.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pMemoryRequirements.GetMetaStructPointer(), indent+1,pMemoryRequirements.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetBufferMemoryRequirements2(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkBufferMemoryRequirementsInfo2>& pInfo,
    StructPointerDecoder<Decoded_VkMemoryRequirements2>* pMemoryRequirements)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetBufferMemoryRequirements2(device, pInfo, pMemoryRequirements)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBufferMemoryRequirementsInfo2* pInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pInfo:                          "); // HRW
    OutputString(outputFile, "const VkBufferMemoryRequirementsInfo2* = "); // TEQ
    if (pInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pInfo.GetMetaStructPointer(), indent+1,pInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkMemoryRequirements2* pMemoryRequirements
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pMemoryRequirements:            "); // HRW
    OutputString(outputFile, "VkMemoryRequirements2* = "); // TEQ
    if (pMemoryRequirements.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pMemoryRequirements.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pMemoryRequirements.GetMetaStructPointer(), indent+1,pMemoryRequirements.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetImageSparseMemoryRequirements2(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImageSparseMemoryRequirementsInfo2>& pInfo,
    PointerDecoder<uint32_t>*                   pSparseMemoryRequirementCount,
    StructPointerDecoder<Decoded_VkSparseImageMemoryRequirements2>* pSparseMemoryRequirements)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetImageSparseMemoryRequirements2(device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImageSparseMemoryRequirementsInfo2* pInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pInfo:                          "); // HRW
    OutputString(outputFile, "const VkImageSparseMemoryRequirementsInfo2* = "); // TEQ
    if (pInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pInfo.GetMetaStructPointer(), indent+1,pInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pSparseMemoryRequirementCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSparseMemoryRequirementCount:  "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pSparseMemoryRequirementCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pSparseMemoryRequirementCount = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pSparseMemoryRequirementCount.GetPointer(), vinfo_pSparseMemoryRequirementCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSparseImageMemoryRequirements2* pSparseMemoryRequirements
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSparseMemoryRequirements:      "); // HRW
    OutputString(outputFile, "VkSparseImageMemoryRequirements2* = "); // TEQ
    if (pSparseMemoryRequirements.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pSparseMemoryRequirements.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkSparseImageMemoryRequirements2>(outputFile, indent+1, 1, "VkSparseImageMemoryRequirements2", pSparseMemoryRequirements.GetMetaStructPointer(), "pSparseMemoryRequirements", *pSparseMemoryRequirementCount.GetPointer(), false, pSparseMemoryRequirements.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceFeatures2(
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceFeatures2>* pFeatures)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceFeatures2(physicalDevice, pFeatures)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPhysicalDeviceFeatures2* pFeatures
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pFeatures:                      "); // HRW
    OutputString(outputFile, "VkPhysicalDeviceFeatures2* = "); // TEQ
    if (pFeatures.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pFeatures.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pFeatures.GetMetaStructPointer(), indent+1,pFeatures.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceProperties2(
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceProperties2>* pProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceProperties2(physicalDevice, pProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPhysicalDeviceProperties2* pProperties
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pProperties:                    "); // HRW
    OutputString(outputFile, "VkPhysicalDeviceProperties2* = "); // TEQ
    if (pProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pProperties.GetMetaStructPointer(), indent+1,pProperties.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceFormatProperties2(
    format::HandleId                            physicalDevice,
    VkFormat                                    format,
    StructPointerDecoder<Decoded_VkFormatProperties2>* pFormatProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceFormatProperties2(physicalDevice, format, pFormatProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFormat format
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "format:                         "); // HRW
    OutputString(outputFile, "VkFormat = "); // TEQ
    EnumToStringVkFormat(outputFile, format); // VSA
    OutputString(outputFile, " (");
    UnsignedDecimalToString(outputFile, format);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFormatProperties2* pFormatProperties
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pFormatProperties:              "); // HRW
    OutputString(outputFile, "VkFormatProperties2* = "); // TEQ
    if (pFormatProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pFormatProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pFormatProperties.GetMetaStructPointer(), indent+1,pFormatProperties.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceImageFormatProperties2(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceImageFormatInfo2>& pImageFormatInfo,
    StructPointerDecoder<Decoded_VkImageFormatProperties2>* pImageFormatProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceImageFormatProperties2(physicalDevice, pImageFormatInfo, pImageFormatProperties)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPhysicalDeviceImageFormatInfo2* pImageFormatInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pImageFormatInfo:               "); // HRW
    OutputString(outputFile, "const VkPhysicalDeviceImageFormatInfo2* = "); // TEQ
    if (pImageFormatInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pImageFormatInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pImageFormatInfo.GetMetaStructPointer(), indent+1,pImageFormatInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageFormatProperties2* pImageFormatProperties
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pImageFormatProperties:         "); // HRW
    OutputString(outputFile, "VkImageFormatProperties2* = "); // TEQ
    if (pImageFormatProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pImageFormatProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pImageFormatProperties.GetMetaStructPointer(), indent+1,pImageFormatProperties.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceQueueFamilyProperties2(
    format::HandleId                            physicalDevice,
    PointerDecoder<uint32_t>*                   pQueueFamilyPropertyCount,
    StructPointerDecoder<Decoded_VkQueueFamilyProperties2>* pQueueFamilyProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceQueueFamilyProperties2(physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pQueueFamilyPropertyCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pQueueFamilyPropertyCount:      "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pQueueFamilyPropertyCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pQueueFamilyPropertyCount = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pQueueFamilyPropertyCount.GetPointer(), vinfo_pQueueFamilyPropertyCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueueFamilyProperties2* pQueueFamilyProperties
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pQueueFamilyProperties:         "); // HRW
    OutputString(outputFile, "VkQueueFamilyProperties2* = "); // TEQ
    if (pQueueFamilyProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pQueueFamilyProperties.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkQueueFamilyProperties2>(outputFile, indent+1, 1, "VkQueueFamilyProperties2", pQueueFamilyProperties.GetMetaStructPointer(), "pQueueFamilyProperties", *pQueueFamilyPropertyCount.GetPointer(), false, pQueueFamilyProperties.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceMemoryProperties2(
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceMemoryProperties2>* pMemoryProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceMemoryProperties2(physicalDevice, pMemoryProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPhysicalDeviceMemoryProperties2* pMemoryProperties
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pMemoryProperties:              "); // HRW
    OutputString(outputFile, "VkPhysicalDeviceMemoryProperties2* = "); // TEQ
    if (pMemoryProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pMemoryProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pMemoryProperties.GetMetaStructPointer(), indent+1,pMemoryProperties.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSparseImageFormatProperties2(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceSparseImageFormatInfo2>& pFormatInfo,
    PointerDecoder<uint32_t>*                   pPropertyCount,
    StructPointerDecoder<Decoded_VkSparseImageFormatProperties2>* pProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceSparseImageFormatProperties2(physicalDevice, pFormatInfo, pPropertyCount, pProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pFormatInfo:                    "); // HRW
    OutputString(outputFile, "const VkPhysicalDeviceSparseImageFormatInfo2* = "); // TEQ
    if (pFormatInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pFormatInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pFormatInfo.GetMetaStructPointer(), indent+1,pFormatInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pPropertyCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pPropertyCount:                 "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pPropertyCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pPropertyCount = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pPropertyCount.GetPointer(), vinfo_pPropertyCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSparseImageFormatProperties2* pProperties
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pProperties:                    "); // HRW
    OutputString(outputFile, "VkSparseImageFormatProperties2* = "); // TEQ
    if (pProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pProperties.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkSparseImageFormatProperties2>(outputFile, indent+1, 1, "VkSparseImageFormatProperties2", pProperties.GetMetaStructPointer(), "pProperties", *pPropertyCount.GetPointer(), false, pProperties.GetAddress());  // CCO
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkTrimCommandPool(device, commandPool, flags)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkCommandPool commandPool
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandPool:                    "); // HRW
    OutputString(outputFile, "VkCommandPool = "); // TEQ
    AddrToString(outputFile, commandPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkCommandPoolTrimFlags flags
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "flags:                          "); // HRW
    OutputString(outputFile, "VkCommandPoolTrimFlags = "); // TEQ
    UnsignedDecimalToString(outputFile, flags); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetDeviceQueue2(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDeviceQueueInfo2>& pQueueInfo,
    HandlePointerDecoder<VkQueue>*              pQueue)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetDeviceQueue2(device, pQueueInfo, pQueue)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDeviceQueueInfo2* pQueueInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pQueueInfo:                     "); // HRW
    OutputString(outputFile, "const VkDeviceQueueInfo2* = "); // TEQ
    if (pQueueInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pQueueInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pQueueInfo.GetMetaStructPointer(), indent+1,pQueueInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueue* pQueue
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pQueue:                         "); // HRW
    OutputString(outputFile, "VkQueue* = "); // TEQ
    if (pQueue.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pQueue = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pQueue.GetPointer(), vinfo_pQueue); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateSamplerYcbcrConversion(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSamplerYcbcrConversionCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkSamplerYcbcrConversion>* pYcbcrConversion)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreateSamplerYcbcrConversion(device, pCreateInfo, pAllocator, pYcbcrConversion)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSamplerYcbcrConversionCreateInfo* pCreateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkSamplerYcbcrConversionCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSamplerYcbcrConversion* pYcbcrConversion
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pYcbcrConversion:               "); // HRW
    OutputString(outputFile, "VkSamplerYcbcrConversion* = "); // TEQ
    if (pYcbcrConversion.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pYcbcrConversion = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pYcbcrConversion.GetPointer(), vinfo_pYcbcrConversion); // PWS
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkDestroySamplerYcbcrConversion(device, ycbcrConversion, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSamplerYcbcrConversion ycbcrConversion
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "ycbcrConversion:                "); // HRW
    OutputString(outputFile, "VkSamplerYcbcrConversion = "); // TEQ
    AddrToString(outputFile, ycbcrConversion); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateDescriptorUpdateTemplate(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDescriptorUpdateTemplateCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkDescriptorUpdateTemplate>* pDescriptorUpdateTemplate)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreateDescriptorUpdateTemplate(device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkDescriptorUpdateTemplateCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDescriptorUpdateTemplate* pDescriptorUpdateTemplate
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pDescriptorUpdateTemplate:      "); // HRW
    OutputString(outputFile, "VkDescriptorUpdateTemplate* = "); // TEQ
    if (pDescriptorUpdateTemplate.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pDescriptorUpdateTemplate = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pDescriptorUpdateTemplate.GetPointer(), vinfo_pDescriptorUpdateTemplate); // PWS
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkDestroyDescriptorUpdateTemplate(device, descriptorUpdateTemplate, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDescriptorUpdateTemplate descriptorUpdateTemplate
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "descriptorUpdateTemplate:       "); // HRW
    OutputString(outputFile, "VkDescriptorUpdateTemplate = "); // TEQ
    AddrToString(outputFile, descriptorUpdateTemplate); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceExternalBufferProperties(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceExternalBufferInfo>& pExternalBufferInfo,
    StructPointerDecoder<Decoded_VkExternalBufferProperties>* pExternalBufferProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceExternalBufferProperties(physicalDevice, pExternalBufferInfo, pExternalBufferProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPhysicalDeviceExternalBufferInfo* pExternalBufferInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pExternalBufferInfo:            "); // HRW
    OutputString(outputFile, "const VkPhysicalDeviceExternalBufferInfo* = "); // TEQ
    if (pExternalBufferInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pExternalBufferInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pExternalBufferInfo.GetMetaStructPointer(), indent+1,pExternalBufferInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkExternalBufferProperties* pExternalBufferProperties
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pExternalBufferProperties:      "); // HRW
    OutputString(outputFile, "VkExternalBufferProperties* = "); // TEQ
    if (pExternalBufferProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pExternalBufferProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pExternalBufferProperties.GetMetaStructPointer(), indent+1,pExternalBufferProperties.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceExternalFenceProperties(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceExternalFenceInfo>& pExternalFenceInfo,
    StructPointerDecoder<Decoded_VkExternalFenceProperties>* pExternalFenceProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceExternalFenceProperties(physicalDevice, pExternalFenceInfo, pExternalFenceProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPhysicalDeviceExternalFenceInfo* pExternalFenceInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pExternalFenceInfo:             "); // HRW
    OutputString(outputFile, "const VkPhysicalDeviceExternalFenceInfo* = "); // TEQ
    if (pExternalFenceInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pExternalFenceInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pExternalFenceInfo.GetMetaStructPointer(), indent+1,pExternalFenceInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkExternalFenceProperties* pExternalFenceProperties
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pExternalFenceProperties:       "); // HRW
    OutputString(outputFile, "VkExternalFenceProperties* = "); // TEQ
    if (pExternalFenceProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pExternalFenceProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pExternalFenceProperties.GetMetaStructPointer(), indent+1,pExternalFenceProperties.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceExternalSemaphoreProperties(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceExternalSemaphoreInfo>& pExternalSemaphoreInfo,
    StructPointerDecoder<Decoded_VkExternalSemaphoreProperties>* pExternalSemaphoreProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceExternalSemaphoreProperties(physicalDevice, pExternalSemaphoreInfo, pExternalSemaphoreProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pExternalSemaphoreInfo:         "); // HRW
    OutputString(outputFile, "const VkPhysicalDeviceExternalSemaphoreInfo* = "); // TEQ
    if (pExternalSemaphoreInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pExternalSemaphoreInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pExternalSemaphoreInfo.GetMetaStructPointer(), indent+1,pExternalSemaphoreInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkExternalSemaphoreProperties* pExternalSemaphoreProperties
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pExternalSemaphoreProperties:   "); // HRW
    OutputString(outputFile, "VkExternalSemaphoreProperties* = "); // TEQ
    if (pExternalSemaphoreProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pExternalSemaphoreProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pExternalSemaphoreProperties.GetMetaStructPointer(), indent+1,pExternalSemaphoreProperties.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetDescriptorSetLayoutSupport(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDescriptorSetLayoutCreateInfo>& pCreateInfo,
    StructPointerDecoder<Decoded_VkDescriptorSetLayoutSupport>* pSupport)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetDescriptorSetLayoutSupport(device, pCreateInfo, pSupport)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDescriptorSetLayoutCreateInfo* pCreateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkDescriptorSetLayoutCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDescriptorSetLayoutSupport* pSupport
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSupport:                       "); // HRW
    OutputString(outputFile, "VkDescriptorSetLayoutSupport* = "); // TEQ
    if (pSupport.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pSupport.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pSupport.GetMetaStructPointer(), indent+1,pSupport.GetAddress()); // GLM
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkDestroySurfaceKHR(instance, surface, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkInstance instance
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "instance:                       "); // HRW
    OutputString(outputFile, "VkInstance = "); // TEQ
    AddrToString(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR surface
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "surface:                        "); // HRW
    OutputString(outputFile, "VkSurfaceKHR = "); // TEQ
    AddrToString(outputFile, surface); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSurfaceSupportKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    format::HandleId                            surface,
    PointerDecoder<VkBool32>*                   pSupported)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceSurfaceSupportKHR(physicalDevice, queueFamilyIndex, surface, pSupported)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t queueFamilyIndex
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "queueFamilyIndex:               "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, queueFamilyIndex); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR surface
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "surface:                        "); // HRW
    OutputString(outputFile, "VkSurfaceKHR = "); // TEQ
    AddrToString(outputFile, surface); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBool32* pSupported
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSupported:                     "); // HRW
    OutputString(outputFile, "VkBool32* = "); // TEQ
    if (pSupported.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pSupported = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pSupported.GetPointer(), vinfo_pSupported); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSurfaceCapabilitiesKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            surface,
    StructPointerDecoder<Decoded_VkSurfaceCapabilitiesKHR>* pSurfaceCapabilities)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceSurfaceCapabilitiesKHR(physicalDevice, surface, pSurfaceCapabilities)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR surface
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "surface:                        "); // HRW
    OutputString(outputFile, "VkSurfaceKHR = "); // TEQ
    AddrToString(outputFile, surface); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceCapabilitiesKHR* pSurfaceCapabilities
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSurfaceCapabilities:           "); // HRW
    OutputString(outputFile, "VkSurfaceCapabilitiesKHR* = "); // TEQ
    if (pSurfaceCapabilities.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pSurfaceCapabilities.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pSurfaceCapabilities.GetMetaStructPointer(), indent+1,pSurfaceCapabilities.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSurfaceFormatsKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            surface,
    PointerDecoder<uint32_t>*                   pSurfaceFormatCount,
    StructPointerDecoder<Decoded_VkSurfaceFormatKHR>* pSurfaceFormats)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceSurfaceFormatsKHR(physicalDevice, surface, pSurfaceFormatCount, pSurfaceFormats)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR surface
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "surface:                        "); // HRW
    OutputString(outputFile, "VkSurfaceKHR = "); // TEQ
    AddrToString(outputFile, surface); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pSurfaceFormatCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSurfaceFormatCount:            "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pSurfaceFormatCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pSurfaceFormatCount = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pSurfaceFormatCount.GetPointer(), vinfo_pSurfaceFormatCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceFormatKHR* pSurfaceFormats
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSurfaceFormats:                "); // HRW
    OutputString(outputFile, "VkSurfaceFormatKHR* = "); // TEQ
    if (pSurfaceFormats.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pSurfaceFormats.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkSurfaceFormatKHR>(outputFile, indent+1, 1, "VkSurfaceFormatKHR", pSurfaceFormats.GetMetaStructPointer(), "pSurfaceFormats", *pSurfaceFormatCount.GetPointer(), false, pSurfaceFormats.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSurfacePresentModesKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            surface,
    PointerDecoder<uint32_t>*                   pPresentModeCount,
    PointerDecoder<VkPresentModeKHR>*           pPresentModes)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceSurfacePresentModesKHR(physicalDevice, surface, pPresentModeCount, pPresentModes)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR surface
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "surface:                        "); // HRW
    OutputString(outputFile, "VkSurfaceKHR = "); // TEQ
    AddrToString(outputFile, surface); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pPresentModeCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pPresentModeCount:              "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pPresentModeCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pPresentModeCount = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pPresentModeCount.GetPointer(), vinfo_pPresentModeCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPresentModeKHR* pPresentModes
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pPresentModes:                  "); // HRW
    OutputString(outputFile, "VkPresentModeKHR* = "); // TEQ
    if (pPresentModes.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pPresentModes.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pPresentModes = {false, true, false, EnumToStringVkPresentModeKHR};
        ArrayToString(outputFile, indent, 0, "VkPresentModeKHR*", &pPresentModes, "pPresentModes", *pPresentModeCount.GetPointer(), vinfo_pPresentModes); // AUC
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateSwapchainKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSwapchainCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkSwapchainKHR>*       pSwapchain)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreateSwapchainKHR(device, pCreateInfo, pAllocator, pSwapchain)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSwapchainCreateInfoKHR* pCreateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkSwapchainCreateInfoKHR* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSwapchainKHR* pSwapchain
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSwapchain:                     "); // HRW
    OutputString(outputFile, "VkSwapchainKHR* = "); // TEQ
    if (pSwapchain.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pSwapchain = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pSwapchain.GetPointer(), vinfo_pSwapchain); // PWS
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkDestroySwapchainKHR(device, swapchain, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSwapchainKHR swapchain
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "swapchain:                      "); // HRW
    OutputString(outputFile, "VkSwapchainKHR = "); // TEQ
    AddrToString(outputFile, swapchain); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetSwapchainImagesKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain,
    PointerDecoder<uint32_t>*                   pSwapchainImageCount,
    HandlePointerDecoder<VkImage>*              pSwapchainImages)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetSwapchainImagesKHR(device, swapchain, pSwapchainImageCount, pSwapchainImages)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSwapchainKHR swapchain
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "swapchain:                      "); // HRW
    OutputString(outputFile, "VkSwapchainKHR = "); // TEQ
    AddrToString(outputFile, swapchain); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pSwapchainImageCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSwapchainImageCount:           "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pSwapchainImageCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pSwapchainImageCount = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pSwapchainImageCount.GetPointer(), vinfo_pSwapchainImageCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage* pSwapchainImages
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSwapchainImages:               "); // HRW
    OutputString(outputFile, "VkImage* = "); // TEQ
    if (pSwapchainImages.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pSwapchainImages.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pSwapchainImages = {true, false, false, nullptr};
        ArrayToString(outputFile, indent, 0, "VkImage*", &pSwapchainImages, "pSwapchainImages", *pSwapchainImageCount.GetPointer(), vinfo_pSwapchainImages); // AUC
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
    PointerDecoder<uint32_t>*                   pImageIndex)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkAcquireNextImageKHR(device, swapchain, timeout, semaphore, fence, pImageIndex)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSwapchainKHR swapchain
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "swapchain:                      "); // HRW
    OutputString(outputFile, "VkSwapchainKHR = "); // TEQ
    AddrToString(outputFile, swapchain); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint64_t timeout
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "timeout:                        "); // HRW
    OutputString(outputFile, "uint64_t = "); // TEQ
    UnsignedDecimalToString(outputFile, timeout); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSemaphore semaphore
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "semaphore:                      "); // HRW
    OutputString(outputFile, "VkSemaphore = "); // TEQ
    AddrToString(outputFile, semaphore); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFence fence
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "fence:                          "); // HRW
    OutputString(outputFile, "VkFence = "); // TEQ
    AddrToString(outputFile, fence); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pImageIndex
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pImageIndex:                    "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pImageIndex.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pImageIndex = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pImageIndex.GetPointer(), vinfo_pImageIndex); // PWS
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkQueuePresentKHR(queue, pPresentInfo)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkQueue queue
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "queue:                          "); // HRW
    OutputString(outputFile, "VkQueue = "); // TEQ
    AddrToString(outputFile, queue); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPresentInfoKHR* pPresentInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pPresentInfo:                   "); // HRW
    OutputString(outputFile, "const VkPresentInfoKHR* = "); // TEQ
    if (pPresentInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pPresentInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pPresentInfo.GetMetaStructPointer(), indent+1,pPresentInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetDeviceGroupPresentCapabilitiesKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDeviceGroupPresentCapabilitiesKHR>* pDeviceGroupPresentCapabilities)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetDeviceGroupPresentCapabilitiesKHR(device, pDeviceGroupPresentCapabilities)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceGroupPresentCapabilitiesKHR* pDeviceGroupPresentCapabilities
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pDeviceGroupPresentCapabilities: "); // HRW
    OutputString(outputFile, "VkDeviceGroupPresentCapabilitiesKHR* = "); // TEQ
    if (pDeviceGroupPresentCapabilities.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pDeviceGroupPresentCapabilities.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pDeviceGroupPresentCapabilities.GetMetaStructPointer(), indent+1,pDeviceGroupPresentCapabilities.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetDeviceGroupSurfacePresentModesKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            surface,
    PointerDecoder<VkDeviceGroupPresentModeFlagsKHR>* pModes)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetDeviceGroupSurfacePresentModesKHR(device, surface, pModes)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR surface
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "surface:                        "); // HRW
    OutputString(outputFile, "VkSurfaceKHR = "); // TEQ
    AddrToString(outputFile, surface); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceGroupPresentModeFlagsKHR* pModes
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pModes:                         "); // HRW
    OutputString(outputFile, "VkDeviceGroupPresentModeFlagsKHR* = "); // TEQ
    if (pModes.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pModes = {false, false, true, EnumToStringVkDeviceGroupPresentModeFlagBitsKHR};
        ScalarValueToString(outputFile, pModes.GetPointer(), vinfo_pModes); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDevicePresentRectanglesKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            surface,
    PointerDecoder<uint32_t>*                   pRectCount,
    StructPointerDecoder<Decoded_VkRect2D>*     pRects)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDevicePresentRectanglesKHR(physicalDevice, surface, pRectCount, pRects)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR surface
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "surface:                        "); // HRW
    OutputString(outputFile, "VkSurfaceKHR = "); // TEQ
    AddrToString(outputFile, surface); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pRectCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pRectCount:                     "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pRectCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pRectCount = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pRectCount.GetPointer(), vinfo_pRectCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkRect2D* pRects
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pRects:                         "); // HRW
    OutputString(outputFile, "VkRect2D* = "); // TEQ
    if (pRects.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pRects.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkRect2D>(outputFile, indent+1, 1, "VkRect2D", pRects.GetMetaStructPointer(), "pRects", *pRectCount.GetPointer(), false, pRects.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkAcquireNextImage2KHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkAcquireNextImageInfoKHR>& pAcquireInfo,
    PointerDecoder<uint32_t>*                   pImageIndex)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkAcquireNextImage2KHR(device, pAcquireInfo, pImageIndex)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAcquireNextImageInfoKHR* pAcquireInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAcquireInfo:                   "); // HRW
    OutputString(outputFile, "const VkAcquireNextImageInfoKHR* = "); // TEQ
    if (pAcquireInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAcquireInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAcquireInfo.GetMetaStructPointer(), indent+1,pAcquireInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pImageIndex
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pImageIndex:                    "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pImageIndex.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pImageIndex = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pImageIndex.GetPointer(), vinfo_pImageIndex); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceDisplayPropertiesKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    PointerDecoder<uint32_t>*                   pPropertyCount,
    StructPointerDecoder<Decoded_VkDisplayPropertiesKHR>* pProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceDisplayPropertiesKHR(physicalDevice, pPropertyCount, pProperties)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pPropertyCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pPropertyCount:                 "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pPropertyCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pPropertyCount = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pPropertyCount.GetPointer(), vinfo_pPropertyCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayPropertiesKHR* pProperties
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pProperties:                    "); // HRW
    OutputString(outputFile, "VkDisplayPropertiesKHR* = "); // TEQ
    if (pProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pProperties.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkDisplayPropertiesKHR>(outputFile, indent+1, 1, "VkDisplayPropertiesKHR", pProperties.GetMetaStructPointer(), "pProperties", *pPropertyCount.GetPointer(), false, pProperties.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceDisplayPlanePropertiesKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    PointerDecoder<uint32_t>*                   pPropertyCount,
    StructPointerDecoder<Decoded_VkDisplayPlanePropertiesKHR>* pProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceDisplayPlanePropertiesKHR(physicalDevice, pPropertyCount, pProperties)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pPropertyCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pPropertyCount:                 "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pPropertyCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pPropertyCount = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pPropertyCount.GetPointer(), vinfo_pPropertyCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayPlanePropertiesKHR* pProperties
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pProperties:                    "); // HRW
    OutputString(outputFile, "VkDisplayPlanePropertiesKHR* = "); // TEQ
    if (pProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pProperties.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkDisplayPlanePropertiesKHR>(outputFile, indent+1, 1, "VkDisplayPlanePropertiesKHR", pProperties.GetMetaStructPointer(), "pProperties", *pPropertyCount.GetPointer(), false, pProperties.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetDisplayPlaneSupportedDisplaysKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    uint32_t                                    planeIndex,
    PointerDecoder<uint32_t>*                   pDisplayCount,
    HandlePointerDecoder<VkDisplayKHR>*         pDisplays)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetDisplayPlaneSupportedDisplaysKHR(physicalDevice, planeIndex, pDisplayCount, pDisplays)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t planeIndex
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "planeIndex:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, planeIndex); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pDisplayCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pDisplayCount:                  "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pDisplayCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pDisplayCount = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pDisplayCount.GetPointer(), vinfo_pDisplayCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayKHR* pDisplays
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pDisplays:                      "); // HRW
    OutputString(outputFile, "VkDisplayKHR* = "); // TEQ
    if (pDisplays.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pDisplays.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pDisplays = {true, false, false, nullptr};
        ArrayToString(outputFile, indent, 0, "VkDisplayKHR*", &pDisplays, "pDisplays", *pDisplayCount.GetPointer(), vinfo_pDisplays); // AUC
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetDisplayModePropertiesKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            display,
    PointerDecoder<uint32_t>*                   pPropertyCount,
    StructPointerDecoder<Decoded_VkDisplayModePropertiesKHR>* pProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetDisplayModePropertiesKHR(physicalDevice, display, pPropertyCount, pProperties)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayKHR display
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "display:                        "); // HRW
    OutputString(outputFile, "VkDisplayKHR = "); // TEQ
    AddrToString(outputFile, display); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pPropertyCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pPropertyCount:                 "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pPropertyCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pPropertyCount = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pPropertyCount.GetPointer(), vinfo_pPropertyCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayModePropertiesKHR* pProperties
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pProperties:                    "); // HRW
    OutputString(outputFile, "VkDisplayModePropertiesKHR* = "); // TEQ
    if (pProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pProperties.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkDisplayModePropertiesKHR>(outputFile, indent+1, 1, "VkDisplayModePropertiesKHR", pProperties.GetMetaStructPointer(), "pProperties", *pPropertyCount.GetPointer(), false, pProperties.GetAddress());  // CCO
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
    HandlePointerDecoder<VkDisplayModeKHR>*     pMode)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreateDisplayModeKHR(physicalDevice, display, pCreateInfo, pAllocator, pMode)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayKHR display
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "display:                        "); // HRW
    OutputString(outputFile, "VkDisplayKHR = "); // TEQ
    AddrToString(outputFile, display); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDisplayModeCreateInfoKHR* pCreateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkDisplayModeCreateInfoKHR* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayModeKHR* pMode
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pMode:                          "); // HRW
    OutputString(outputFile, "VkDisplayModeKHR* = "); // TEQ
    if (pMode.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pMode = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pMode.GetPointer(), vinfo_pMode); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetDisplayPlaneCapabilitiesKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            mode,
    uint32_t                                    planeIndex,
    StructPointerDecoder<Decoded_VkDisplayPlaneCapabilitiesKHR>* pCapabilities)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetDisplayPlaneCapabilitiesKHR(physicalDevice, mode, planeIndex, pCapabilities)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayModeKHR mode
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "mode:                           "); // HRW
    OutputString(outputFile, "VkDisplayModeKHR = "); // TEQ
    AddrToString(outputFile, mode); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t planeIndex
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "planeIndex:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, planeIndex); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayPlaneCapabilitiesKHR* pCapabilities
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCapabilities:                  "); // HRW
    OutputString(outputFile, "VkDisplayPlaneCapabilitiesKHR* = "); // TEQ
    if (pCapabilities.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCapabilities.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCapabilities.GetMetaStructPointer(), indent+1,pCapabilities.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateDisplayPlaneSurfaceKHR(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkDisplaySurfaceCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreateDisplayPlaneSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "instance:                       "); // HRW
    OutputString(outputFile, "VkInstance = "); // TEQ
    AddrToString(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDisplaySurfaceCreateInfoKHR* pCreateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkDisplaySurfaceCreateInfoKHR* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR* pSurface
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSurface:                       "); // HRW
    OutputString(outputFile, "VkSurfaceKHR* = "); // TEQ
    if (pSurface.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pSurface = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pSurface.GetPointer(), vinfo_pSurface); // PWS
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
    HandlePointerDecoder<VkSwapchainKHR>*       pSwapchains)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreateSharedSwapchainsKHR(device, swapchainCount, pCreateInfos, pAllocator, pSwapchains)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t swapchainCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "swapchainCount:                 "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, swapchainCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSwapchainCreateInfoKHR* pCreateInfos
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfos:                   "); // HRW
    OutputString(outputFile, "const VkSwapchainCreateInfoKHR* = "); // TEQ
    if (pCreateInfos.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfos.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkSwapchainCreateInfoKHR>(outputFile, indent+1, 1, "VkSwapchainCreateInfoKHR", pCreateInfos.GetMetaStructPointer(), "pCreateInfos", swapchainCount, false, pCreateInfos.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSwapchainKHR* pSwapchains
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSwapchains:                    "); // HRW
    OutputString(outputFile, "VkSwapchainKHR* = "); // TEQ
    if (pSwapchains.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pSwapchains.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pSwapchains = {true, false, false, nullptr};
        ArrayToString(outputFile, indent, 0, "VkSwapchainKHR*", &pSwapchains, "pSwapchains", swapchainCount, vinfo_pSwapchains); // AUC
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateXlibSurfaceKHR(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkXlibSurfaceCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreateXlibSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "instance:                       "); // HRW
    OutputString(outputFile, "VkInstance = "); // TEQ
    AddrToString(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkXlibSurfaceCreateInfoKHR* pCreateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkXlibSurfaceCreateInfoKHR* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR* pSurface
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSurface:                       "); // HRW
    OutputString(outputFile, "VkSurfaceKHR* = "); // TEQ
    if (pSurface.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pSurface = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pSurface.GetPointer(), vinfo_pSurface); // PWS
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceXlibPresentationSupportKHR(physicalDevice, queueFamilyIndex, dpy, visualID)");
    fprintf(outputFile, " returns %u:\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t queueFamilyIndex
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "queueFamilyIndex:               "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, queueFamilyIndex); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: void* dpy
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "dpy:                            "); // HRW
    OutputString(outputFile, "void* = "); // TEQ
    AddrToString(outputFile, dpy); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: size_t visualID
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "visualID:                       "); // HRW
    OutputString(outputFile, "size_t = "); // TEQ
    UnsignedDecimalToString(outputFile, visualID); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateXcbSurfaceKHR(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkXcbSurfaceCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreateXcbSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "instance:                       "); // HRW
    OutputString(outputFile, "VkInstance = "); // TEQ
    AddrToString(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkXcbSurfaceCreateInfoKHR* pCreateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkXcbSurfaceCreateInfoKHR* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR* pSurface
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSurface:                       "); // HRW
    OutputString(outputFile, "VkSurfaceKHR* = "); // TEQ
    if (pSurface.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pSurface = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pSurface.GetPointer(), vinfo_pSurface); // PWS
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceXcbPresentationSupportKHR(physicalDevice, queueFamilyIndex, connection, visual_id)");
    fprintf(outputFile, " returns %u:\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t queueFamilyIndex
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "queueFamilyIndex:               "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, queueFamilyIndex); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: void* connection
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "connection:                     "); // HRW
    OutputString(outputFile, "void* = "); // TEQ
    if ( !connection) // WWW
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, connection); // PWR
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t visual_id
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "visual_id:                      "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, visual_id); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateWaylandSurfaceKHR(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkWaylandSurfaceCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreateWaylandSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "instance:                       "); // HRW
    OutputString(outputFile, "VkInstance = "); // TEQ
    AddrToString(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkWaylandSurfaceCreateInfoKHR* pCreateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkWaylandSurfaceCreateInfoKHR* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR* pSurface
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSurface:                       "); // HRW
    OutputString(outputFile, "VkSurfaceKHR* = "); // TEQ
    if (pSurface.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pSurface = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pSurface.GetPointer(), vinfo_pSurface); // PWS
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceWaylandPresentationSupportKHR(physicalDevice, queueFamilyIndex, display)");
    fprintf(outputFile, " returns %u:\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t queueFamilyIndex
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "queueFamilyIndex:               "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, queueFamilyIndex); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: struct void* display
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "display:                        "); // HRW
    OutputString(outputFile, "struct void* = "); // TEQ
    if ( !display) // WWW
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, display); // PWR
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateAndroidSurfaceKHR(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkAndroidSurfaceCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreateAndroidSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "instance:                       "); // HRW
    OutputString(outputFile, "VkInstance = "); // TEQ
    AddrToString(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAndroidSurfaceCreateInfoKHR* pCreateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkAndroidSurfaceCreateInfoKHR* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR* pSurface
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSurface:                       "); // HRW
    OutputString(outputFile, "VkSurfaceKHR* = "); // TEQ
    if (pSurface.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pSurface = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pSurface.GetPointer(), vinfo_pSurface); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateWin32SurfaceKHR(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkWin32SurfaceCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreateWin32SurfaceKHR(instance, pCreateInfo, pAllocator, pSurface)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "instance:                       "); // HRW
    OutputString(outputFile, "VkInstance = "); // TEQ
    AddrToString(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkWin32SurfaceCreateInfoKHR* pCreateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkWin32SurfaceCreateInfoKHR* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR* pSurface
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSurface:                       "); // HRW
    OutputString(outputFile, "VkSurfaceKHR* = "); // TEQ
    if (pSurface.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pSurface = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pSurface.GetPointer(), vinfo_pSurface); // PWS
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceWin32PresentationSupportKHR(physicalDevice, queueFamilyIndex)");
    fprintf(outputFile, " returns %u:\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t queueFamilyIndex
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "queueFamilyIndex:               "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, queueFamilyIndex); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceFeatures2KHR(
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceFeatures2>* pFeatures)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceFeatures2KHR(physicalDevice, pFeatures)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPhysicalDeviceFeatures2* pFeatures
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pFeatures:                      "); // HRW
    OutputString(outputFile, "VkPhysicalDeviceFeatures2* = "); // TEQ
    if (pFeatures.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pFeatures.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pFeatures.GetMetaStructPointer(), indent+1,pFeatures.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceProperties2KHR(
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceProperties2>* pProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceProperties2KHR(physicalDevice, pProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPhysicalDeviceProperties2* pProperties
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pProperties:                    "); // HRW
    OutputString(outputFile, "VkPhysicalDeviceProperties2* = "); // TEQ
    if (pProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pProperties.GetMetaStructPointer(), indent+1,pProperties.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceFormatProperties2KHR(
    format::HandleId                            physicalDevice,
    VkFormat                                    format,
    StructPointerDecoder<Decoded_VkFormatProperties2>* pFormatProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceFormatProperties2KHR(physicalDevice, format, pFormatProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFormat format
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "format:                         "); // HRW
    OutputString(outputFile, "VkFormat = "); // TEQ
    EnumToStringVkFormat(outputFile, format); // VSA
    OutputString(outputFile, " (");
    UnsignedDecimalToString(outputFile, format);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFormatProperties2* pFormatProperties
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pFormatProperties:              "); // HRW
    OutputString(outputFile, "VkFormatProperties2* = "); // TEQ
    if (pFormatProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pFormatProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pFormatProperties.GetMetaStructPointer(), indent+1,pFormatProperties.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceImageFormatProperties2KHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceImageFormatInfo2>& pImageFormatInfo,
    StructPointerDecoder<Decoded_VkImageFormatProperties2>* pImageFormatProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceImageFormatProperties2KHR(physicalDevice, pImageFormatInfo, pImageFormatProperties)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPhysicalDeviceImageFormatInfo2* pImageFormatInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pImageFormatInfo:               "); // HRW
    OutputString(outputFile, "const VkPhysicalDeviceImageFormatInfo2* = "); // TEQ
    if (pImageFormatInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pImageFormatInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pImageFormatInfo.GetMetaStructPointer(), indent+1,pImageFormatInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageFormatProperties2* pImageFormatProperties
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pImageFormatProperties:         "); // HRW
    OutputString(outputFile, "VkImageFormatProperties2* = "); // TEQ
    if (pImageFormatProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pImageFormatProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pImageFormatProperties.GetMetaStructPointer(), indent+1,pImageFormatProperties.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceQueueFamilyProperties2KHR(
    format::HandleId                            physicalDevice,
    PointerDecoder<uint32_t>*                   pQueueFamilyPropertyCount,
    StructPointerDecoder<Decoded_VkQueueFamilyProperties2>* pQueueFamilyProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceQueueFamilyProperties2KHR(physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pQueueFamilyPropertyCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pQueueFamilyPropertyCount:      "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pQueueFamilyPropertyCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pQueueFamilyPropertyCount = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pQueueFamilyPropertyCount.GetPointer(), vinfo_pQueueFamilyPropertyCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueueFamilyProperties2* pQueueFamilyProperties
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pQueueFamilyProperties:         "); // HRW
    OutputString(outputFile, "VkQueueFamilyProperties2* = "); // TEQ
    if (pQueueFamilyProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pQueueFamilyProperties.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkQueueFamilyProperties2>(outputFile, indent+1, 1, "VkQueueFamilyProperties2", pQueueFamilyProperties.GetMetaStructPointer(), "pQueueFamilyProperties", *pQueueFamilyPropertyCount.GetPointer(), false, pQueueFamilyProperties.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceMemoryProperties2KHR(
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceMemoryProperties2>* pMemoryProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceMemoryProperties2KHR(physicalDevice, pMemoryProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPhysicalDeviceMemoryProperties2* pMemoryProperties
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pMemoryProperties:              "); // HRW
    OutputString(outputFile, "VkPhysicalDeviceMemoryProperties2* = "); // TEQ
    if (pMemoryProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pMemoryProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pMemoryProperties.GetMetaStructPointer(), indent+1,pMemoryProperties.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSparseImageFormatProperties2KHR(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceSparseImageFormatInfo2>& pFormatInfo,
    PointerDecoder<uint32_t>*                   pPropertyCount,
    StructPointerDecoder<Decoded_VkSparseImageFormatProperties2>* pProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceSparseImageFormatProperties2KHR(physicalDevice, pFormatInfo, pPropertyCount, pProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pFormatInfo:                    "); // HRW
    OutputString(outputFile, "const VkPhysicalDeviceSparseImageFormatInfo2* = "); // TEQ
    if (pFormatInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pFormatInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pFormatInfo.GetMetaStructPointer(), indent+1,pFormatInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pPropertyCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pPropertyCount:                 "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pPropertyCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pPropertyCount = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pPropertyCount.GetPointer(), vinfo_pPropertyCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSparseImageFormatProperties2* pProperties
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pProperties:                    "); // HRW
    OutputString(outputFile, "VkSparseImageFormatProperties2* = "); // TEQ
    if (pProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pProperties.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkSparseImageFormatProperties2>(outputFile, indent+1, 1, "VkSparseImageFormatProperties2", pProperties.GetMetaStructPointer(), "pProperties", *pPropertyCount.GetPointer(), false, pProperties.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetDeviceGroupPeerMemoryFeaturesKHR(
    format::HandleId                            device,
    uint32_t                                    heapIndex,
    uint32_t                                    localDeviceIndex,
    uint32_t                                    remoteDeviceIndex,
    PointerDecoder<VkPeerMemoryFeatureFlags>*   pPeerMemoryFeatures)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetDeviceGroupPeerMemoryFeaturesKHR(device, heapIndex, localDeviceIndex, remoteDeviceIndex, pPeerMemoryFeatures)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t heapIndex
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "heapIndex:                      "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, heapIndex); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t localDeviceIndex
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "localDeviceIndex:               "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, localDeviceIndex); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t remoteDeviceIndex
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "remoteDeviceIndex:              "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, remoteDeviceIndex); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPeerMemoryFeatureFlags* pPeerMemoryFeatures
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pPeerMemoryFeatures:            "); // HRW
    OutputString(outputFile, "VkPeerMemoryFeatureFlags* = "); // TEQ
    if (pPeerMemoryFeatures.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pPeerMemoryFeatures = {false, false, true, EnumToStringVkPeerMemoryFeatureFlagBits};
        ScalarValueToString(outputFile, pPeerMemoryFeatures.GetPointer(), vinfo_pPeerMemoryFeatures); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdSetDeviceMaskKHR(
    format::HandleId                            commandBuffer,
    uint32_t                                    deviceMask)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdSetDeviceMaskKHR(commandBuffer, deviceMask)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t deviceMask
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "deviceMask:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, deviceMask); // UYW
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdDispatchBaseKHR(commandBuffer, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t baseGroupX
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "baseGroupX:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, baseGroupX); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t baseGroupY
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "baseGroupY:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, baseGroupY); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t baseGroupZ
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "baseGroupZ:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, baseGroupZ); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t groupCountX
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "groupCountX:                    "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, groupCountX); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t groupCountY
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "groupCountY:                    "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, groupCountY); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t groupCountZ
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "groupCountZ:                    "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, groupCountZ); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkTrimCommandPoolKHR(
    format::HandleId                            device,
    format::HandleId                            commandPool,
    VkCommandPoolTrimFlags                      flags)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkTrimCommandPoolKHR(device, commandPool, flags)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkCommandPool commandPool
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandPool:                    "); // HRW
    OutputString(outputFile, "VkCommandPool = "); // TEQ
    AddrToString(outputFile, commandPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkCommandPoolTrimFlags flags
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "flags:                          "); // HRW
    OutputString(outputFile, "VkCommandPoolTrimFlags = "); // TEQ
    UnsignedDecimalToString(outputFile, flags); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkEnumeratePhysicalDeviceGroupsKHR(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    PointerDecoder<uint32_t>*                   pPhysicalDeviceGroupCount,
    StructPointerDecoder<Decoded_VkPhysicalDeviceGroupProperties>* pPhysicalDeviceGroupProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkEnumeratePhysicalDeviceGroupsKHR(instance, pPhysicalDeviceGroupCount, pPhysicalDeviceGroupProperties)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "instance:                       "); // HRW
    OutputString(outputFile, "VkInstance = "); // TEQ
    AddrToString(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pPhysicalDeviceGroupCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pPhysicalDeviceGroupCount:      "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pPhysicalDeviceGroupCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pPhysicalDeviceGroupCount = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pPhysicalDeviceGroupCount.GetPointer(), vinfo_pPhysicalDeviceGroupCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pPhysicalDeviceGroupProperties: "); // HRW
    OutputString(outputFile, "VkPhysicalDeviceGroupProperties* = "); // TEQ
    if (pPhysicalDeviceGroupProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pPhysicalDeviceGroupProperties.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkPhysicalDeviceGroupProperties>(outputFile, indent+1, 1, "VkPhysicalDeviceGroupProperties", pPhysicalDeviceGroupProperties.GetMetaStructPointer(), "pPhysicalDeviceGroupProperties", *pPhysicalDeviceGroupCount.GetPointer(), false, pPhysicalDeviceGroupProperties.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceExternalBufferPropertiesKHR(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceExternalBufferInfo>& pExternalBufferInfo,
    StructPointerDecoder<Decoded_VkExternalBufferProperties>* pExternalBufferProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceExternalBufferPropertiesKHR(physicalDevice, pExternalBufferInfo, pExternalBufferProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPhysicalDeviceExternalBufferInfo* pExternalBufferInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pExternalBufferInfo:            "); // HRW
    OutputString(outputFile, "const VkPhysicalDeviceExternalBufferInfo* = "); // TEQ
    if (pExternalBufferInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pExternalBufferInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pExternalBufferInfo.GetMetaStructPointer(), indent+1,pExternalBufferInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkExternalBufferProperties* pExternalBufferProperties
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pExternalBufferProperties:      "); // HRW
    OutputString(outputFile, "VkExternalBufferProperties* = "); // TEQ
    if (pExternalBufferProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pExternalBufferProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pExternalBufferProperties.GetMetaStructPointer(), indent+1,pExternalBufferProperties.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetMemoryWin32HandleKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkMemoryGetWin32HandleInfoKHR>& pGetWin32HandleInfo,
    PointerDecoder<uint64_t, void*>*            pHandle)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetMemoryWin32HandleKHR(device, pGetWin32HandleInfo, pHandle)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkMemoryGetWin32HandleInfoKHR* pGetWin32HandleInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pGetWin32HandleInfo:            "); // HRW
    OutputString(outputFile, "const VkMemoryGetWin32HandleInfoKHR* = "); // TEQ
    if (pGetWin32HandleInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pGetWin32HandleInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pGetWin32HandleInfo.GetMetaStructPointer(), indent+1,pGetWin32HandleInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: void** pHandle
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pHandle:                        "); // HRW
    OutputString(outputFile, "void** = "); // TEQ
    if (pHandle.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pHandle = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pHandle.GetPointer(), vinfo_pHandle); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetMemoryWin32HandlePropertiesKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    VkExternalMemoryHandleTypeFlagBits          handleType,
    uint64_t                                    handle,
    StructPointerDecoder<Decoded_VkMemoryWin32HandlePropertiesKHR>* pMemoryWin32HandleProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetMemoryWin32HandlePropertiesKHR(device, handleType, handle, pMemoryWin32HandleProperties)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkExternalMemoryHandleTypeFlagBits handleType
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "handleType:                     "); // HRW
    OutputString(outputFile, "VkExternalMemoryHandleTypeFlagBits = "); // TEQ
    EnumToStringVkExternalMemoryHandleTypeFlagBits(outputFile, handleType); // VSA
    OutputString(outputFile, " (");
    UnsignedDecimalToString(outputFile, handleType);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: void* handle
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "handle:                         "); // HRW
    OutputString(outputFile, "void* = "); // TEQ
    if ( !handle) // WWW
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, handle); // PWR
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkMemoryWin32HandlePropertiesKHR* pMemoryWin32HandleProperties
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pMemoryWin32HandleProperties:   "); // HRW
    OutputString(outputFile, "VkMemoryWin32HandlePropertiesKHR* = "); // TEQ
    if (pMemoryWin32HandleProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pMemoryWin32HandleProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pMemoryWin32HandleProperties.GetMetaStructPointer(), indent+1,pMemoryWin32HandleProperties.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetMemoryFdKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkMemoryGetFdInfoKHR>& pGetFdInfo,
    PointerDecoder<int>*                        pFd)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetMemoryFdKHR(device, pGetFdInfo, pFd)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkMemoryGetFdInfoKHR* pGetFdInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pGetFdInfo:                     "); // HRW
    OutputString(outputFile, "const VkMemoryGetFdInfoKHR* = "); // TEQ
    if (pGetFdInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pGetFdInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pGetFdInfo.GetMetaStructPointer(), indent+1,pGetFdInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: int* pFd
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pFd:                            "); // HRW
    OutputString(outputFile, "int* = "); // TEQ
    if (pFd.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pFd = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pFd.GetPointer(), vinfo_pFd); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetMemoryFdPropertiesKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    VkExternalMemoryHandleTypeFlagBits          handleType,
    int                                         fd,
    StructPointerDecoder<Decoded_VkMemoryFdPropertiesKHR>* pMemoryFdProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetMemoryFdPropertiesKHR(device, handleType, fd, pMemoryFdProperties)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkExternalMemoryHandleTypeFlagBits handleType
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "handleType:                     "); // HRW
    OutputString(outputFile, "VkExternalMemoryHandleTypeFlagBits = "); // TEQ
    EnumToStringVkExternalMemoryHandleTypeFlagBits(outputFile, handleType); // VSA
    OutputString(outputFile, " (");
    UnsignedDecimalToString(outputFile, handleType);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: int fd
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "fd:                             "); // HRW
    OutputString(outputFile, "int = "); // TEQ
    SignedDecimalToString(outputFile, fd); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkMemoryFdPropertiesKHR* pMemoryFdProperties
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pMemoryFdProperties:            "); // HRW
    OutputString(outputFile, "VkMemoryFdPropertiesKHR* = "); // TEQ
    if (pMemoryFdProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pMemoryFdProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pMemoryFdProperties.GetMetaStructPointer(), indent+1,pMemoryFdProperties.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceExternalSemaphoreInfo>& pExternalSemaphoreInfo,
    StructPointerDecoder<Decoded_VkExternalSemaphoreProperties>* pExternalSemaphoreProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceExternalSemaphorePropertiesKHR(physicalDevice, pExternalSemaphoreInfo, pExternalSemaphoreProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pExternalSemaphoreInfo:         "); // HRW
    OutputString(outputFile, "const VkPhysicalDeviceExternalSemaphoreInfo* = "); // TEQ
    if (pExternalSemaphoreInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pExternalSemaphoreInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pExternalSemaphoreInfo.GetMetaStructPointer(), indent+1,pExternalSemaphoreInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkExternalSemaphoreProperties* pExternalSemaphoreProperties
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pExternalSemaphoreProperties:   "); // HRW
    OutputString(outputFile, "VkExternalSemaphoreProperties* = "); // TEQ
    if (pExternalSemaphoreProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pExternalSemaphoreProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pExternalSemaphoreProperties.GetMetaStructPointer(), indent+1,pExternalSemaphoreProperties.GetAddress()); // GLM
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkImportSemaphoreWin32HandleKHR(device, pImportSemaphoreWin32HandleInfo)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImportSemaphoreWin32HandleInfoKHR* pImportSemaphoreWin32HandleInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pImportSemaphoreWin32HandleInfo: "); // HRW
    OutputString(outputFile, "const VkImportSemaphoreWin32HandleInfoKHR* = "); // TEQ
    if (pImportSemaphoreWin32HandleInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pImportSemaphoreWin32HandleInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pImportSemaphoreWin32HandleInfo.GetMetaStructPointer(), indent+1,pImportSemaphoreWin32HandleInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetSemaphoreWin32HandleKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSemaphoreGetWin32HandleInfoKHR>& pGetWin32HandleInfo,
    PointerDecoder<uint64_t, void*>*            pHandle)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetSemaphoreWin32HandleKHR(device, pGetWin32HandleInfo, pHandle)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSemaphoreGetWin32HandleInfoKHR* pGetWin32HandleInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pGetWin32HandleInfo:            "); // HRW
    OutputString(outputFile, "const VkSemaphoreGetWin32HandleInfoKHR* = "); // TEQ
    if (pGetWin32HandleInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pGetWin32HandleInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pGetWin32HandleInfo.GetMetaStructPointer(), indent+1,pGetWin32HandleInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: void** pHandle
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pHandle:                        "); // HRW
    OutputString(outputFile, "void** = "); // TEQ
    if (pHandle.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pHandle = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pHandle.GetPointer(), vinfo_pHandle); // PWS
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkImportSemaphoreFdKHR(device, pImportSemaphoreFdInfo)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImportSemaphoreFdInfoKHR* pImportSemaphoreFdInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pImportSemaphoreFdInfo:         "); // HRW
    OutputString(outputFile, "const VkImportSemaphoreFdInfoKHR* = "); // TEQ
    if (pImportSemaphoreFdInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pImportSemaphoreFdInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pImportSemaphoreFdInfo.GetMetaStructPointer(), indent+1,pImportSemaphoreFdInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetSemaphoreFdKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSemaphoreGetFdInfoKHR>& pGetFdInfo,
    PointerDecoder<int>*                        pFd)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetSemaphoreFdKHR(device, pGetFdInfo, pFd)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSemaphoreGetFdInfoKHR* pGetFdInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pGetFdInfo:                     "); // HRW
    OutputString(outputFile, "const VkSemaphoreGetFdInfoKHR* = "); // TEQ
    if (pGetFdInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pGetFdInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pGetFdInfo.GetMetaStructPointer(), indent+1,pGetFdInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: int* pFd
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pFd:                            "); // HRW
    OutputString(outputFile, "int* = "); // TEQ
    if (pFd.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pFd = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pFd.GetPointer(), vinfo_pFd); // PWS
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdPushDescriptorSetKHR(commandBuffer, pipelineBindPoint, layout, set, descriptorWriteCount, pDescriptorWrites)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineBindPoint pipelineBindPoint
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pipelineBindPoint:              "); // HRW
    OutputString(outputFile, "VkPipelineBindPoint = "); // TEQ
    EnumToStringVkPipelineBindPoint(outputFile, pipelineBindPoint); // VSA
    OutputString(outputFile, " (");
    UnsignedDecimalToString(outputFile, pipelineBindPoint);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineLayout layout
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "layout:                         "); // HRW
    OutputString(outputFile, "VkPipelineLayout = "); // TEQ
    AddrToString(outputFile, layout); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t set
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "set:                            "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, set); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t descriptorWriteCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "descriptorWriteCount:           "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, descriptorWriteCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkWriteDescriptorSet* pDescriptorWrites
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pDescriptorWrites:              "); // HRW
    OutputString(outputFile, "const VkWriteDescriptorSet* = "); // TEQ
    if (pDescriptorWrites.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pDescriptorWrites.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkWriteDescriptorSet>(outputFile, indent+1, 1, "VkWriteDescriptorSet", pDescriptorWrites.GetMetaStructPointer(), "pDescriptorWrites", descriptorWriteCount, false, pDescriptorWrites.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateDescriptorUpdateTemplateKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDescriptorUpdateTemplateCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkDescriptorUpdateTemplate>* pDescriptorUpdateTemplate)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreateDescriptorUpdateTemplateKHR(device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkDescriptorUpdateTemplateCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDescriptorUpdateTemplate* pDescriptorUpdateTemplate
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pDescriptorUpdateTemplate:      "); // HRW
    OutputString(outputFile, "VkDescriptorUpdateTemplate* = "); // TEQ
    if (pDescriptorUpdateTemplate.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pDescriptorUpdateTemplate = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pDescriptorUpdateTemplate.GetPointer(), vinfo_pDescriptorUpdateTemplate); // PWS
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkDestroyDescriptorUpdateTemplateKHR(device, descriptorUpdateTemplate, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDescriptorUpdateTemplate descriptorUpdateTemplate
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "descriptorUpdateTemplate:       "); // HRW
    OutputString(outputFile, "VkDescriptorUpdateTemplate = "); // TEQ
    AddrToString(outputFile, descriptorUpdateTemplate); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateRenderPass2KHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkRenderPassCreateInfo2KHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkRenderPass>*         pRenderPass)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreateRenderPass2KHR(device, pCreateInfo, pAllocator, pRenderPass)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkRenderPassCreateInfo2KHR* pCreateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkRenderPassCreateInfo2KHR* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkRenderPass* pRenderPass
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pRenderPass:                    "); // HRW
    OutputString(outputFile, "VkRenderPass* = "); // TEQ
    if (pRenderPass.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pRenderPass = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pRenderPass.GetPointer(), vinfo_pRenderPass); // PWS
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdBeginRenderPass2KHR(commandBuffer, pRenderPassBegin, pSubpassBeginInfo)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkRenderPassBeginInfo* pRenderPassBegin
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pRenderPassBegin:               "); // HRW
    OutputString(outputFile, "const VkRenderPassBeginInfo* = "); // TEQ
    if (pRenderPassBegin.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pRenderPassBegin.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pRenderPassBegin.GetMetaStructPointer(), indent+1,pRenderPassBegin.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSubpassBeginInfoKHR* pSubpassBeginInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSubpassBeginInfo:              "); // HRW
    OutputString(outputFile, "const VkSubpassBeginInfoKHR* = "); // TEQ
    if (pSubpassBeginInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pSubpassBeginInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pSubpassBeginInfo.GetMetaStructPointer(), indent+1,pSubpassBeginInfo.GetAddress()); // GLM
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdNextSubpass2KHR(commandBuffer, pSubpassBeginInfo, pSubpassEndInfo)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSubpassBeginInfoKHR* pSubpassBeginInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSubpassBeginInfo:              "); // HRW
    OutputString(outputFile, "const VkSubpassBeginInfoKHR* = "); // TEQ
    if (pSubpassBeginInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pSubpassBeginInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pSubpassBeginInfo.GetMetaStructPointer(), indent+1,pSubpassBeginInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSubpassEndInfoKHR* pSubpassEndInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSubpassEndInfo:                "); // HRW
    OutputString(outputFile, "const VkSubpassEndInfoKHR* = "); // TEQ
    if (pSubpassEndInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pSubpassEndInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pSubpassEndInfo.GetMetaStructPointer(), indent+1,pSubpassEndInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdEndRenderPass2KHR(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkSubpassEndInfoKHR>& pSubpassEndInfo)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdEndRenderPass2KHR(commandBuffer, pSubpassEndInfo)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSubpassEndInfoKHR* pSubpassEndInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSubpassEndInfo:                "); // HRW
    OutputString(outputFile, "const VkSubpassEndInfoKHR* = "); // TEQ
    if (pSubpassEndInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pSubpassEndInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pSubpassEndInfo.GetMetaStructPointer(), indent+1,pSubpassEndInfo.GetAddress()); // GLM
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetSwapchainStatusKHR(device, swapchain)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSwapchainKHR swapchain
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "swapchain:                      "); // HRW
    OutputString(outputFile, "VkSwapchainKHR = "); // TEQ
    AddrToString(outputFile, swapchain); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceExternalFencePropertiesKHR(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceExternalFenceInfo>& pExternalFenceInfo,
    StructPointerDecoder<Decoded_VkExternalFenceProperties>* pExternalFenceProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceExternalFencePropertiesKHR(physicalDevice, pExternalFenceInfo, pExternalFenceProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPhysicalDeviceExternalFenceInfo* pExternalFenceInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pExternalFenceInfo:             "); // HRW
    OutputString(outputFile, "const VkPhysicalDeviceExternalFenceInfo* = "); // TEQ
    if (pExternalFenceInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pExternalFenceInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pExternalFenceInfo.GetMetaStructPointer(), indent+1,pExternalFenceInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkExternalFenceProperties* pExternalFenceProperties
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pExternalFenceProperties:       "); // HRW
    OutputString(outputFile, "VkExternalFenceProperties* = "); // TEQ
    if (pExternalFenceProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pExternalFenceProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pExternalFenceProperties.GetMetaStructPointer(), indent+1,pExternalFenceProperties.GetAddress()); // GLM
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkImportFenceWin32HandleKHR(device, pImportFenceWin32HandleInfo)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImportFenceWin32HandleInfoKHR* pImportFenceWin32HandleInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pImportFenceWin32HandleInfo:    "); // HRW
    OutputString(outputFile, "const VkImportFenceWin32HandleInfoKHR* = "); // TEQ
    if (pImportFenceWin32HandleInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pImportFenceWin32HandleInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pImportFenceWin32HandleInfo.GetMetaStructPointer(), indent+1,pImportFenceWin32HandleInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetFenceWin32HandleKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkFenceGetWin32HandleInfoKHR>& pGetWin32HandleInfo,
    PointerDecoder<uint64_t, void*>*            pHandle)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetFenceWin32HandleKHR(device, pGetWin32HandleInfo, pHandle)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkFenceGetWin32HandleInfoKHR* pGetWin32HandleInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pGetWin32HandleInfo:            "); // HRW
    OutputString(outputFile, "const VkFenceGetWin32HandleInfoKHR* = "); // TEQ
    if (pGetWin32HandleInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pGetWin32HandleInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pGetWin32HandleInfo.GetMetaStructPointer(), indent+1,pGetWin32HandleInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: void** pHandle
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pHandle:                        "); // HRW
    OutputString(outputFile, "void** = "); // TEQ
    if (pHandle.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pHandle = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pHandle.GetPointer(), vinfo_pHandle); // PWS
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkImportFenceFdKHR(device, pImportFenceFdInfo)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImportFenceFdInfoKHR* pImportFenceFdInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pImportFenceFdInfo:             "); // HRW
    OutputString(outputFile, "const VkImportFenceFdInfoKHR* = "); // TEQ
    if (pImportFenceFdInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pImportFenceFdInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pImportFenceFdInfo.GetMetaStructPointer(), indent+1,pImportFenceFdInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetFenceFdKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkFenceGetFdInfoKHR>& pGetFdInfo,
    PointerDecoder<int>*                        pFd)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetFenceFdKHR(device, pGetFdInfo, pFd)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkFenceGetFdInfoKHR* pGetFdInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pGetFdInfo:                     "); // HRW
    OutputString(outputFile, "const VkFenceGetFdInfoKHR* = "); // TEQ
    if (pGetFdInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pGetFdInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pGetFdInfo.GetMetaStructPointer(), indent+1,pGetFdInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: int* pFd
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pFd:                            "); // HRW
    OutputString(outputFile, "int* = "); // TEQ
    if (pFd.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pFd = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pFd.GetPointer(), vinfo_pFd); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSurfaceCapabilities2KHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceSurfaceInfo2KHR>& pSurfaceInfo,
    StructPointerDecoder<Decoded_VkSurfaceCapabilities2KHR>* pSurfaceCapabilities)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceSurfaceCapabilities2KHR(physicalDevice, pSurfaceInfo, pSurfaceCapabilities)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSurfaceInfo:                   "); // HRW
    OutputString(outputFile, "const VkPhysicalDeviceSurfaceInfo2KHR* = "); // TEQ
    if (pSurfaceInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pSurfaceInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pSurfaceInfo.GetMetaStructPointer(), indent+1,pSurfaceInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceCapabilities2KHR* pSurfaceCapabilities
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSurfaceCapabilities:           "); // HRW
    OutputString(outputFile, "VkSurfaceCapabilities2KHR* = "); // TEQ
    if (pSurfaceCapabilities.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pSurfaceCapabilities.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pSurfaceCapabilities.GetMetaStructPointer(), indent+1,pSurfaceCapabilities.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSurfaceFormats2KHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceSurfaceInfo2KHR>& pSurfaceInfo,
    PointerDecoder<uint32_t>*                   pSurfaceFormatCount,
    StructPointerDecoder<Decoded_VkSurfaceFormat2KHR>* pSurfaceFormats)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceSurfaceFormats2KHR(physicalDevice, pSurfaceInfo, pSurfaceFormatCount, pSurfaceFormats)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSurfaceInfo:                   "); // HRW
    OutputString(outputFile, "const VkPhysicalDeviceSurfaceInfo2KHR* = "); // TEQ
    if (pSurfaceInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pSurfaceInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pSurfaceInfo.GetMetaStructPointer(), indent+1,pSurfaceInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pSurfaceFormatCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSurfaceFormatCount:            "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pSurfaceFormatCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pSurfaceFormatCount = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pSurfaceFormatCount.GetPointer(), vinfo_pSurfaceFormatCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceFormat2KHR* pSurfaceFormats
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSurfaceFormats:                "); // HRW
    OutputString(outputFile, "VkSurfaceFormat2KHR* = "); // TEQ
    if (pSurfaceFormats.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pSurfaceFormats.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkSurfaceFormat2KHR>(outputFile, indent+1, 1, "VkSurfaceFormat2KHR", pSurfaceFormats.GetMetaStructPointer(), "pSurfaceFormats", *pSurfaceFormatCount.GetPointer(), false, pSurfaceFormats.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceDisplayProperties2KHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    PointerDecoder<uint32_t>*                   pPropertyCount,
    StructPointerDecoder<Decoded_VkDisplayProperties2KHR>* pProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceDisplayProperties2KHR(physicalDevice, pPropertyCount, pProperties)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pPropertyCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pPropertyCount:                 "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pPropertyCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pPropertyCount = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pPropertyCount.GetPointer(), vinfo_pPropertyCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayProperties2KHR* pProperties
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pProperties:                    "); // HRW
    OutputString(outputFile, "VkDisplayProperties2KHR* = "); // TEQ
    if (pProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pProperties.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkDisplayProperties2KHR>(outputFile, indent+1, 1, "VkDisplayProperties2KHR", pProperties.GetMetaStructPointer(), "pProperties", *pPropertyCount.GetPointer(), false, pProperties.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceDisplayPlaneProperties2KHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    PointerDecoder<uint32_t>*                   pPropertyCount,
    StructPointerDecoder<Decoded_VkDisplayPlaneProperties2KHR>* pProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceDisplayPlaneProperties2KHR(physicalDevice, pPropertyCount, pProperties)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pPropertyCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pPropertyCount:                 "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pPropertyCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pPropertyCount = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pPropertyCount.GetPointer(), vinfo_pPropertyCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayPlaneProperties2KHR* pProperties
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pProperties:                    "); // HRW
    OutputString(outputFile, "VkDisplayPlaneProperties2KHR* = "); // TEQ
    if (pProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pProperties.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkDisplayPlaneProperties2KHR>(outputFile, indent+1, 1, "VkDisplayPlaneProperties2KHR", pProperties.GetMetaStructPointer(), "pProperties", *pPropertyCount.GetPointer(), false, pProperties.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetDisplayModeProperties2KHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            display,
    PointerDecoder<uint32_t>*                   pPropertyCount,
    StructPointerDecoder<Decoded_VkDisplayModeProperties2KHR>* pProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetDisplayModeProperties2KHR(physicalDevice, display, pPropertyCount, pProperties)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayKHR display
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "display:                        "); // HRW
    OutputString(outputFile, "VkDisplayKHR = "); // TEQ
    AddrToString(outputFile, display); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pPropertyCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pPropertyCount:                 "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pPropertyCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pPropertyCount = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pPropertyCount.GetPointer(), vinfo_pPropertyCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayModeProperties2KHR* pProperties
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pProperties:                    "); // HRW
    OutputString(outputFile, "VkDisplayModeProperties2KHR* = "); // TEQ
    if (pProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pProperties.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkDisplayModeProperties2KHR>(outputFile, indent+1, 1, "VkDisplayModeProperties2KHR", pProperties.GetMetaStructPointer(), "pProperties", *pPropertyCount.GetPointer(), false, pProperties.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetDisplayPlaneCapabilities2KHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkDisplayPlaneInfo2KHR>& pDisplayPlaneInfo,
    StructPointerDecoder<Decoded_VkDisplayPlaneCapabilities2KHR>* pCapabilities)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetDisplayPlaneCapabilities2KHR(physicalDevice, pDisplayPlaneInfo, pCapabilities)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDisplayPlaneInfo2KHR* pDisplayPlaneInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pDisplayPlaneInfo:              "); // HRW
    OutputString(outputFile, "const VkDisplayPlaneInfo2KHR* = "); // TEQ
    if (pDisplayPlaneInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pDisplayPlaneInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pDisplayPlaneInfo.GetMetaStructPointer(), indent+1,pDisplayPlaneInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayPlaneCapabilities2KHR* pCapabilities
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCapabilities:                  "); // HRW
    OutputString(outputFile, "VkDisplayPlaneCapabilities2KHR* = "); // TEQ
    if (pCapabilities.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCapabilities.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCapabilities.GetMetaStructPointer(), indent+1,pCapabilities.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetImageMemoryRequirements2KHR(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImageMemoryRequirementsInfo2>& pInfo,
    StructPointerDecoder<Decoded_VkMemoryRequirements2>* pMemoryRequirements)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetImageMemoryRequirements2KHR(device, pInfo, pMemoryRequirements)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImageMemoryRequirementsInfo2* pInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pInfo:                          "); // HRW
    OutputString(outputFile, "const VkImageMemoryRequirementsInfo2* = "); // TEQ
    if (pInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pInfo.GetMetaStructPointer(), indent+1,pInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkMemoryRequirements2* pMemoryRequirements
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pMemoryRequirements:            "); // HRW
    OutputString(outputFile, "VkMemoryRequirements2* = "); // TEQ
    if (pMemoryRequirements.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pMemoryRequirements.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pMemoryRequirements.GetMetaStructPointer(), indent+1,pMemoryRequirements.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetBufferMemoryRequirements2KHR(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkBufferMemoryRequirementsInfo2>& pInfo,
    StructPointerDecoder<Decoded_VkMemoryRequirements2>* pMemoryRequirements)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetBufferMemoryRequirements2KHR(device, pInfo, pMemoryRequirements)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBufferMemoryRequirementsInfo2* pInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pInfo:                          "); // HRW
    OutputString(outputFile, "const VkBufferMemoryRequirementsInfo2* = "); // TEQ
    if (pInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pInfo.GetMetaStructPointer(), indent+1,pInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkMemoryRequirements2* pMemoryRequirements
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pMemoryRequirements:            "); // HRW
    OutputString(outputFile, "VkMemoryRequirements2* = "); // TEQ
    if (pMemoryRequirements.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pMemoryRequirements.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pMemoryRequirements.GetMetaStructPointer(), indent+1,pMemoryRequirements.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetImageSparseMemoryRequirements2KHR(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImageSparseMemoryRequirementsInfo2>& pInfo,
    PointerDecoder<uint32_t>*                   pSparseMemoryRequirementCount,
    StructPointerDecoder<Decoded_VkSparseImageMemoryRequirements2>* pSparseMemoryRequirements)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetImageSparseMemoryRequirements2KHR(device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImageSparseMemoryRequirementsInfo2* pInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pInfo:                          "); // HRW
    OutputString(outputFile, "const VkImageSparseMemoryRequirementsInfo2* = "); // TEQ
    if (pInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pInfo.GetMetaStructPointer(), indent+1,pInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pSparseMemoryRequirementCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSparseMemoryRequirementCount:  "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pSparseMemoryRequirementCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pSparseMemoryRequirementCount = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pSparseMemoryRequirementCount.GetPointer(), vinfo_pSparseMemoryRequirementCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSparseImageMemoryRequirements2* pSparseMemoryRequirements
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSparseMemoryRequirements:      "); // HRW
    OutputString(outputFile, "VkSparseImageMemoryRequirements2* = "); // TEQ
    if (pSparseMemoryRequirements.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pSparseMemoryRequirements.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkSparseImageMemoryRequirements2>(outputFile, indent+1, 1, "VkSparseImageMemoryRequirements2", pSparseMemoryRequirements.GetMetaStructPointer(), "pSparseMemoryRequirements", *pSparseMemoryRequirementCount.GetPointer(), false, pSparseMemoryRequirements.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateSamplerYcbcrConversionKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSamplerYcbcrConversionCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkSamplerYcbcrConversion>* pYcbcrConversion)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreateSamplerYcbcrConversionKHR(device, pCreateInfo, pAllocator, pYcbcrConversion)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSamplerYcbcrConversionCreateInfo* pCreateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkSamplerYcbcrConversionCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSamplerYcbcrConversion* pYcbcrConversion
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pYcbcrConversion:               "); // HRW
    OutputString(outputFile, "VkSamplerYcbcrConversion* = "); // TEQ
    if (pYcbcrConversion.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pYcbcrConversion = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pYcbcrConversion.GetPointer(), vinfo_pYcbcrConversion); // PWS
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkDestroySamplerYcbcrConversionKHR(device, ycbcrConversion, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSamplerYcbcrConversion ycbcrConversion
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "ycbcrConversion:                "); // HRW
    OutputString(outputFile, "VkSamplerYcbcrConversion = "); // TEQ
    AddrToString(outputFile, ycbcrConversion); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkBindBufferMemory2KHR(device, bindInfoCount, pBindInfos)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t bindInfoCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "bindInfoCount:                  "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, bindInfoCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBindBufferMemoryInfo* pBindInfos
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pBindInfos:                     "); // HRW
    OutputString(outputFile, "const VkBindBufferMemoryInfo* = "); // TEQ
    if (pBindInfos.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pBindInfos.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkBindBufferMemoryInfo>(outputFile, indent+1, 1, "VkBindBufferMemoryInfo", pBindInfos.GetMetaStructPointer(), "pBindInfos", bindInfoCount, false, pBindInfos.GetAddress());  // CCO
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkBindImageMemory2KHR(device, bindInfoCount, pBindInfos)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t bindInfoCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "bindInfoCount:                  "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, bindInfoCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBindImageMemoryInfo* pBindInfos
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pBindInfos:                     "); // HRW
    OutputString(outputFile, "const VkBindImageMemoryInfo* = "); // TEQ
    if (pBindInfos.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pBindInfos.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkBindImageMemoryInfo>(outputFile, indent+1, 1, "VkBindImageMemoryInfo", pBindInfos.GetMetaStructPointer(), "pBindInfos", bindInfoCount, false, pBindInfos.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetDescriptorSetLayoutSupportKHR(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDescriptorSetLayoutCreateInfo>& pCreateInfo,
    StructPointerDecoder<Decoded_VkDescriptorSetLayoutSupport>* pSupport)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetDescriptorSetLayoutSupportKHR(device, pCreateInfo, pSupport)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDescriptorSetLayoutCreateInfo* pCreateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkDescriptorSetLayoutCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDescriptorSetLayoutSupport* pSupport
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSupport:                       "); // HRW
    OutputString(outputFile, "VkDescriptorSetLayoutSupport* = "); // TEQ
    if (pSupport.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pSupport.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pSupport.GetMetaStructPointer(), indent+1,pSupport.GetAddress()); // GLM
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdDrawIndirectCountKHR(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer buffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "buffer:                         "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    AddrToString(outputFile, buffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize offset
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "offset:                         "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    SignedDecimalToString(outputFile, offset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer countBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "countBuffer:                    "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    AddrToString(outputFile, countBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize countBufferOffset
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "countBufferOffset:              "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    SignedDecimalToString(outputFile, countBufferOffset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t maxDrawCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "maxDrawCount:                   "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, maxDrawCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t stride
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "stride:                         "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, stride); // UYW
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdDrawIndexedIndirectCountKHR(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer buffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "buffer:                         "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    AddrToString(outputFile, buffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize offset
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "offset:                         "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    SignedDecimalToString(outputFile, offset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer countBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "countBuffer:                    "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    AddrToString(outputFile, countBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize countBufferOffset
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "countBufferOffset:              "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    SignedDecimalToString(outputFile, countBufferOffset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t maxDrawCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "maxDrawCount:                   "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, maxDrawCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t stride
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "stride:                         "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, stride); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetSemaphoreCounterValueKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            semaphore,
    PointerDecoder<uint64_t>*                   pValue)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetSemaphoreCounterValueKHR(device, semaphore, pValue)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSemaphore semaphore
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "semaphore:                      "); // HRW
    OutputString(outputFile, "VkSemaphore = "); // TEQ
    AddrToString(outputFile, semaphore); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint64_t* pValue
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pValue:                         "); // HRW
    OutputString(outputFile, "uint64_t* = "); // TEQ
    if (pValue.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pValue = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pValue.GetPointer(), vinfo_pValue); // PWS
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkWaitSemaphoresKHR(device, pWaitInfo, timeout)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSemaphoreWaitInfoKHR* pWaitInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pWaitInfo:                      "); // HRW
    OutputString(outputFile, "const VkSemaphoreWaitInfoKHR* = "); // TEQ
    if (pWaitInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pWaitInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pWaitInfo.GetMetaStructPointer(), indent+1,pWaitInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint64_t timeout
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "timeout:                        "); // HRW
    OutputString(outputFile, "uint64_t = "); // TEQ
    UnsignedDecimalToString(outputFile, timeout); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkSignalSemaphoreKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSemaphoreSignalInfoKHR>& pSignalInfo)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkSignalSemaphoreKHR(device, pSignalInfo)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSemaphoreSignalInfoKHR* pSignalInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSignalInfo:                    "); // HRW
    OutputString(outputFile, "const VkSemaphoreSignalInfoKHR* = "); // TEQ
    if (pSignalInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pSignalInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pSignalInfo.GetMetaStructPointer(), indent+1,pSignalInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetPipelineExecutablePropertiesKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkPipelineInfoKHR>& pPipelineInfo,
    PointerDecoder<uint32_t>*                   pExecutableCount,
    StructPointerDecoder<Decoded_VkPipelineExecutablePropertiesKHR>* pProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPipelineExecutablePropertiesKHR(device, pPipelineInfo, pExecutableCount, pProperties)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPipelineInfoKHR* pPipelineInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pPipelineInfo:                  "); // HRW
    OutputString(outputFile, "const VkPipelineInfoKHR* = "); // TEQ
    if (pPipelineInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pPipelineInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pPipelineInfo.GetMetaStructPointer(), indent+1,pPipelineInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pExecutableCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pExecutableCount:               "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pExecutableCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pExecutableCount = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pExecutableCount.GetPointer(), vinfo_pExecutableCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineExecutablePropertiesKHR* pProperties
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pProperties:                    "); // HRW
    OutputString(outputFile, "VkPipelineExecutablePropertiesKHR* = "); // TEQ
    if (pProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pProperties.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkPipelineExecutablePropertiesKHR>(outputFile, indent+1, 1, "VkPipelineExecutablePropertiesKHR", pProperties.GetMetaStructPointer(), "pProperties", *pExecutableCount.GetPointer(), false, pProperties.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPipelineExecutableStatisticsKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkPipelineExecutableInfoKHR>& pExecutableInfo,
    PointerDecoder<uint32_t>*                   pStatisticCount,
    StructPointerDecoder<Decoded_VkPipelineExecutableStatisticKHR>* pStatistics)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPipelineExecutableStatisticsKHR(device, pExecutableInfo, pStatisticCount, pStatistics)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPipelineExecutableInfoKHR* pExecutableInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pExecutableInfo:                "); // HRW
    OutputString(outputFile, "const VkPipelineExecutableInfoKHR* = "); // TEQ
    if (pExecutableInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pExecutableInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pExecutableInfo.GetMetaStructPointer(), indent+1,pExecutableInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pStatisticCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pStatisticCount:                "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pStatisticCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pStatisticCount = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pStatisticCount.GetPointer(), vinfo_pStatisticCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineExecutableStatisticKHR* pStatistics
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pStatistics:                    "); // HRW
    OutputString(outputFile, "VkPipelineExecutableStatisticKHR* = "); // TEQ
    if (pStatistics.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pStatistics.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkPipelineExecutableStatisticKHR>(outputFile, indent+1, 1, "VkPipelineExecutableStatisticKHR", pStatistics.GetMetaStructPointer(), "pStatistics", *pStatisticCount.GetPointer(), false, pStatistics.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPipelineExecutableInternalRepresentationsKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkPipelineExecutableInfoKHR>& pExecutableInfo,
    PointerDecoder<uint32_t>*                   pInternalRepresentationCount,
    StructPointerDecoder<Decoded_VkPipelineExecutableInternalRepresentationKHR>* pInternalRepresentations)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPipelineExecutableInternalRepresentationsKHR(device, pExecutableInfo, pInternalRepresentationCount, pInternalRepresentations)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPipelineExecutableInfoKHR* pExecutableInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pExecutableInfo:                "); // HRW
    OutputString(outputFile, "const VkPipelineExecutableInfoKHR* = "); // TEQ
    if (pExecutableInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pExecutableInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pExecutableInfo.GetMetaStructPointer(), indent+1,pExecutableInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pInternalRepresentationCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pInternalRepresentationCount:   "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pInternalRepresentationCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pInternalRepresentationCount = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pInternalRepresentationCount.GetPointer(), vinfo_pInternalRepresentationCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineExecutableInternalRepresentationKHR* pInternalRepresentations
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pInternalRepresentations:       "); // HRW
    OutputString(outputFile, "VkPipelineExecutableInternalRepresentationKHR* = "); // TEQ
    if (pInternalRepresentations.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pInternalRepresentations.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkPipelineExecutableInternalRepresentationKHR>(outputFile, indent+1, 1, "VkPipelineExecutableInternalRepresentationKHR", pInternalRepresentations.GetMetaStructPointer(), "pInternalRepresentations", *pInternalRepresentationCount.GetPointer(), false, pInternalRepresentations.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateDebugReportCallbackEXT(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkDebugReportCallbackCreateInfoEXT>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkDebugReportCallbackEXT>* pCallback)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreateDebugReportCallbackEXT(instance, pCreateInfo, pAllocator, pCallback)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "instance:                       "); // HRW
    OutputString(outputFile, "VkInstance = "); // TEQ
    AddrToString(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDebugReportCallbackCreateInfoEXT* pCreateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkDebugReportCallbackCreateInfoEXT* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDebugReportCallbackEXT* pCallback
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCallback:                      "); // HRW
    OutputString(outputFile, "VkDebugReportCallbackEXT* = "); // TEQ
    if (pCallback.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pCallback = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pCallback.GetPointer(), vinfo_pCallback); // PWS
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkDestroyDebugReportCallbackEXT(instance, callback, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkInstance instance
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "instance:                       "); // HRW
    OutputString(outputFile, "VkInstance = "); // TEQ
    AddrToString(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDebugReportCallbackEXT callback
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "callback:                       "); // HRW
    OutputString(outputFile, "VkDebugReportCallbackEXT = "); // TEQ
    AddrToString(outputFile, callback); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkDebugReportMessageEXT(instance, flags, objectType, object, location, messageCode, pLayerPrefix, pMessage)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkInstance instance
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "instance:                       "); // HRW
    OutputString(outputFile, "VkInstance = "); // TEQ
    AddrToString(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDebugReportFlagsEXT flags
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "flags:                          "); // HRW
    OutputString(outputFile, "VkDebugReportFlagsEXT = "); // TEQ
    FlagsToString(outputFile, flags, EnumToStringVkDebugReportFlagBitsEXT); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDebugReportObjectTypeEXT objectType
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "objectType:                     "); // HRW
    OutputString(outputFile, "VkDebugReportObjectTypeEXT = "); // TEQ
    EnumToStringVkDebugReportObjectTypeEXT(outputFile, objectType); // VSA
    OutputString(outputFile, " (");
    UnsignedDecimalToString(outputFile, objectType);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint64_t object
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "object:                         "); // HRW
    OutputString(outputFile, "uint64_t = "); // TEQ
    UnsignedDecimalToString(outputFile, object); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: size_t location
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "location:                       "); // HRW
    OutputString(outputFile, "size_t = "); // TEQ
    UnsignedDecimalToString(outputFile, location); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: int32_t messageCode
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "messageCode:                    "); // HRW
    OutputString(outputFile, "int32_t = "); // TEQ
    SignedDecimalToString(outputFile, messageCode); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: const char* pLayerPrefix
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pLayerPrefix:                   "); // HRW
    OutputString(outputFile, "const char* = "); // TEQ
    StringToQuotedString(outputFile, pLayerPrefix.GetPointer()); // TGH
    OutputString(outputFile, "\n"); // HHS

    // func arg: const char* pMessage
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pMessage:                       "); // HRW
    OutputString(outputFile, "const char* = "); // TEQ
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkDebugMarkerSetObjectTagEXT(device, pTagInfo)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDebugMarkerObjectTagInfoEXT* pTagInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pTagInfo:                       "); // HRW
    OutputString(outputFile, "const VkDebugMarkerObjectTagInfoEXT* = "); // TEQ
    if (pTagInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pTagInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pTagInfo.GetMetaStructPointer(), indent+1,pTagInfo.GetAddress()); // GLM
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkDebugMarkerSetObjectNameEXT(device, pNameInfo)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDebugMarkerObjectNameInfoEXT* pNameInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pNameInfo:                      "); // HRW
    OutputString(outputFile, "const VkDebugMarkerObjectNameInfoEXT* = "); // TEQ
    if (pNameInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pNameInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pNameInfo.GetMetaStructPointer(), indent+1,pNameInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdDebugMarkerBeginEXT(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkDebugMarkerMarkerInfoEXT>& pMarkerInfo)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdDebugMarkerBeginEXT(commandBuffer, pMarkerInfo)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDebugMarkerMarkerInfoEXT* pMarkerInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pMarkerInfo:                    "); // HRW
    OutputString(outputFile, "const VkDebugMarkerMarkerInfoEXT* = "); // TEQ
    if (pMarkerInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pMarkerInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pMarkerInfo.GetMetaStructPointer(), indent+1,pMarkerInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdDebugMarkerEndEXT(
    format::HandleId                            commandBuffer)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdDebugMarkerEndEXT(commandBuffer)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdDebugMarkerInsertEXT(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkDebugMarkerMarkerInfoEXT>& pMarkerInfo)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdDebugMarkerInsertEXT(commandBuffer, pMarkerInfo)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDebugMarkerMarkerInfoEXT* pMarkerInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pMarkerInfo:                    "); // HRW
    OutputString(outputFile, "const VkDebugMarkerMarkerInfoEXT* = "); // TEQ
    if (pMarkerInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pMarkerInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pMarkerInfo.GetMetaStructPointer(), indent+1,pMarkerInfo.GetAddress()); // GLM
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdBindTransformFeedbackBuffersEXT(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets, pSizes)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstBinding
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "firstBinding:                   "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, firstBinding); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t bindingCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "bindingCount:                   "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, bindingCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBuffer* pBuffers
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pBuffers:                       "); // HRW
    OutputString(outputFile, "const VkBuffer* = "); // TEQ
    if (pBuffers.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pBuffers.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pBuffers = {true, false, false, nullptr};
        ArrayToString(outputFile, indent, 0, "const VkBuffer*", &pBuffers, "pBuffers", bindingCount, vinfo_pBuffers); // AUC
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDeviceSize* pOffsets
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pOffsets:                       "); // HRW
    OutputString(outputFile, "const VkDeviceSize* = "); // TEQ
    if (pOffsets.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pOffsets.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pOffsets = {false, false, false, nullptr};
        ArrayToString(outputFile, indent, 0, "const VkDeviceSize*", &pOffsets, "pOffsets", bindingCount, vinfo_pOffsets); // AUC
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDeviceSize* pSizes
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSizes:                         "); // HRW
    OutputString(outputFile, "const VkDeviceSize* = "); // TEQ
    if (pSizes.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pSizes.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pSizes = {false, false, false, nullptr};
        ArrayToString(outputFile, indent, 0, "const VkDeviceSize*", &pSizes, "pSizes", bindingCount, vinfo_pSizes); // AUC
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdBeginTransformFeedbackEXT(commandBuffer, firstCounterBuffer, counterBufferCount, pCounterBuffers, pCounterBufferOffsets)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstCounterBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "firstCounterBuffer:             "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, firstCounterBuffer); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t counterBufferCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "counterBufferCount:             "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, counterBufferCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBuffer* pCounterBuffers
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCounterBuffers:                "); // HRW
    OutputString(outputFile, "const VkBuffer* = "); // TEQ
    if (pCounterBuffers.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCounterBuffers.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pCounterBuffers = {true, false, false, nullptr};
        ArrayToString(outputFile, indent, 0, "const VkBuffer*", &pCounterBuffers, "pCounterBuffers", counterBufferCount, vinfo_pCounterBuffers); // AUC
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDeviceSize* pCounterBufferOffsets
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCounterBufferOffsets:          "); // HRW
    OutputString(outputFile, "const VkDeviceSize* = "); // TEQ
    if (pCounterBufferOffsets.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCounterBufferOffsets.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pCounterBufferOffsets = {false, false, false, nullptr};
        ArrayToString(outputFile, indent, 0, "const VkDeviceSize*", &pCounterBufferOffsets, "pCounterBufferOffsets", counterBufferCount, vinfo_pCounterBufferOffsets); // AUC
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdEndTransformFeedbackEXT(commandBuffer, firstCounterBuffer, counterBufferCount, pCounterBuffers, pCounterBufferOffsets)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstCounterBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "firstCounterBuffer:             "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, firstCounterBuffer); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t counterBufferCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "counterBufferCount:             "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, counterBufferCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBuffer* pCounterBuffers
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCounterBuffers:                "); // HRW
    OutputString(outputFile, "const VkBuffer* = "); // TEQ
    if (pCounterBuffers.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCounterBuffers.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pCounterBuffers = {true, false, false, nullptr};
        ArrayToString(outputFile, indent, 0, "const VkBuffer*", &pCounterBuffers, "pCounterBuffers", counterBufferCount, vinfo_pCounterBuffers); // AUC
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDeviceSize* pCounterBufferOffsets
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCounterBufferOffsets:          "); // HRW
    OutputString(outputFile, "const VkDeviceSize* = "); // TEQ
    if (pCounterBufferOffsets.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCounterBufferOffsets.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pCounterBufferOffsets = {false, false, false, nullptr};
        ArrayToString(outputFile, indent, 0, "const VkDeviceSize*", &pCounterBufferOffsets, "pCounterBufferOffsets", counterBufferCount, vinfo_pCounterBufferOffsets); // AUC
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdBeginQueryIndexedEXT(commandBuffer, queryPool, query, flags, index)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryPool queryPool
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "queryPool:                      "); // HRW
    OutputString(outputFile, "VkQueryPool = "); // TEQ
    AddrToString(outputFile, queryPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t query
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "query:                          "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, query); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryControlFlags flags
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "flags:                          "); // HRW
    OutputString(outputFile, "VkQueryControlFlags = "); // TEQ
    FlagsToString(outputFile, flags, EnumToStringVkQueryControlFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t index
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "index:                          "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, index); // UYW
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdEndQueryIndexedEXT(commandBuffer, queryPool, query, index)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryPool queryPool
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "queryPool:                      "); // HRW
    OutputString(outputFile, "VkQueryPool = "); // TEQ
    AddrToString(outputFile, queryPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t query
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "query:                          "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, query); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t index
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "index:                          "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, index); // UYW
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdDrawIndirectByteCountEXT(commandBuffer, instanceCount, firstInstance, counterBuffer, counterBufferOffset, counterOffset, vertexStride)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t instanceCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "instanceCount:                  "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, instanceCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstInstance
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "firstInstance:                  "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, firstInstance); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer counterBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "counterBuffer:                  "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    AddrToString(outputFile, counterBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize counterBufferOffset
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "counterBufferOffset:            "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    SignedDecimalToString(outputFile, counterBufferOffset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t counterOffset
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "counterOffset:                  "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, counterOffset); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t vertexStride
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "vertexStride:                   "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, vertexStride); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetImageViewHandleNVX(
    uint32_t                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImageViewHandleInfoNVX>& pInfo)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetImageViewHandleNVX(device, pInfo)");
    fprintf(outputFile, " returns %u:\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImageViewHandleInfoNVX* pInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pInfo:                          "); // HRW
    OutputString(outputFile, "const VkImageViewHandleInfoNVX* = "); // TEQ
    if (pInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pInfo.GetMetaStructPointer(), indent+1,pInfo.GetAddress()); // GLM
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdDrawIndirectCountAMD(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer buffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "buffer:                         "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    AddrToString(outputFile, buffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize offset
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "offset:                         "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    SignedDecimalToString(outputFile, offset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer countBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "countBuffer:                    "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    AddrToString(outputFile, countBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize countBufferOffset
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "countBufferOffset:              "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    SignedDecimalToString(outputFile, countBufferOffset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t maxDrawCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "maxDrawCount:                   "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, maxDrawCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t stride
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "stride:                         "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, stride); // UYW
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdDrawIndexedIndirectCountAMD(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer buffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "buffer:                         "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    AddrToString(outputFile, buffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize offset
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "offset:                         "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    SignedDecimalToString(outputFile, offset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer countBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "countBuffer:                    "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    AddrToString(outputFile, countBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize countBufferOffset
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "countBufferOffset:              "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    SignedDecimalToString(outputFile, countBufferOffset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t maxDrawCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "maxDrawCount:                   "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, maxDrawCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t stride
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "stride:                         "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, stride); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetShaderInfoAMD(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            pipeline,
    VkShaderStageFlagBits                       shaderStage,
    VkShaderInfoTypeAMD                         infoType,
    PointerDecoder<size_t>*                     pInfoSize,
    PointerDecoder<uint8_t>*                    pInfo)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetShaderInfoAMD(device, pipeline, shaderStage, infoType, pInfoSize, pInfo)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipeline pipeline
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pipeline:                       "); // HRW
    OutputString(outputFile, "VkPipeline = "); // TEQ
    AddrToString(outputFile, pipeline); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkShaderStageFlagBits shaderStage
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "shaderStage:                    "); // HRW
    OutputString(outputFile, "VkShaderStageFlagBits = "); // TEQ
    EnumToStringVkShaderStageFlagBits(outputFile, shaderStage); // VSA
    OutputString(outputFile, " (");
    UnsignedDecimalToString(outputFile, shaderStage);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkShaderInfoTypeAMD infoType
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "infoType:                       "); // HRW
    OutputString(outputFile, "VkShaderInfoTypeAMD = "); // TEQ
    EnumToStringVkShaderInfoTypeAMD(outputFile, infoType); // VSA
    OutputString(outputFile, " (");
    UnsignedDecimalToString(outputFile, infoType);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: size_t* pInfoSize
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pInfoSize:                      "); // HRW
    OutputString(outputFile, "size_t* = "); // TEQ
    if (pInfoSize.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pInfoSize = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pInfoSize.GetPointer(), vinfo_pInfoSize); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: void* pInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pInfo:                          "); // HRW
    OutputString(outputFile, "void* = "); // TEQ
    if (pInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pInfo.GetAddress()); // AHW
        ScalarValueToStringStruct vinfo_pInfo = {false, false, false, nullptr};
        ArrayToString(outputFile, indent, 0, "void*", &pInfo, "pInfo", *pInfoSize.GetPointer(), vinfo_pInfo); // PRC
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateStreamDescriptorSurfaceGGP(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkStreamDescriptorSurfaceCreateInfoGGP>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreateStreamDescriptorSurfaceGGP(instance, pCreateInfo, pAllocator, pSurface)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "instance:                       "); // HRW
    OutputString(outputFile, "VkInstance = "); // TEQ
    AddrToString(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkStreamDescriptorSurfaceCreateInfoGGP* pCreateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkStreamDescriptorSurfaceCreateInfoGGP* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR* pSurface
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSurface:                       "); // HRW
    OutputString(outputFile, "VkSurfaceKHR* = "); // TEQ
    if (pSurface.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pSurface = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pSurface.GetPointer(), vinfo_pSurface); // PWS
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
    StructPointerDecoder<Decoded_VkExternalImageFormatPropertiesNV>* pExternalImageFormatProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceExternalImageFormatPropertiesNV(physicalDevice, format, type, tiling, usage, flags, externalHandleType, pExternalImageFormatProperties)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFormat format
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "format:                         "); // HRW
    OutputString(outputFile, "VkFormat = "); // TEQ
    EnumToStringVkFormat(outputFile, format); // VSA
    OutputString(outputFile, " (");
    UnsignedDecimalToString(outputFile, format);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageType type
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "type:                           "); // HRW
    OutputString(outputFile, "VkImageType = "); // TEQ
    EnumToStringVkImageType(outputFile, type); // VSA
    OutputString(outputFile, " (");
    UnsignedDecimalToString(outputFile, type);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageTiling tiling
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "tiling:                         "); // HRW
    OutputString(outputFile, "VkImageTiling = "); // TEQ
    EnumToStringVkImageTiling(outputFile, tiling); // VSA
    OutputString(outputFile, " (");
    UnsignedDecimalToString(outputFile, tiling);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageUsageFlags usage
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "usage:                          "); // HRW
    OutputString(outputFile, "VkImageUsageFlags = "); // TEQ
    FlagsToString(outputFile, usage, EnumToStringVkImageUsageFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageCreateFlags flags
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "flags:                          "); // HRW
    OutputString(outputFile, "VkImageCreateFlags = "); // TEQ
    FlagsToString(outputFile, flags, EnumToStringVkImageCreateFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkExternalMemoryHandleTypeFlagsNV externalHandleType
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "externalHandleType:             "); // HRW
    OutputString(outputFile, "VkExternalMemoryHandleTypeFlagsNV = "); // TEQ
    FlagsToString(outputFile, externalHandleType, EnumToStringVkExternalMemoryHandleTypeFlagBitsNV); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkExternalImageFormatPropertiesNV* pExternalImageFormatProperties
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pExternalImageFormatProperties: "); // HRW
    OutputString(outputFile, "VkExternalImageFormatPropertiesNV* = "); // TEQ
    if (pExternalImageFormatProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pExternalImageFormatProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pExternalImageFormatProperties.GetMetaStructPointer(), indent+1,pExternalImageFormatProperties.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetMemoryWin32HandleNV(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            memory,
    VkExternalMemoryHandleTypeFlagsNV           handleType,
    PointerDecoder<uint64_t, void*>*            pHandle)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetMemoryWin32HandleNV(device, memory, handleType, pHandle)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceMemory memory
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "memory:                         "); // HRW
    OutputString(outputFile, "VkDeviceMemory = "); // TEQ
    AddrToString(outputFile, memory); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkExternalMemoryHandleTypeFlagsNV handleType
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "handleType:                     "); // HRW
    OutputString(outputFile, "VkExternalMemoryHandleTypeFlagsNV = "); // TEQ
    FlagsToString(outputFile, handleType, EnumToStringVkExternalMemoryHandleTypeFlagBitsNV); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: void** pHandle
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pHandle:                        "); // HRW
    OutputString(outputFile, "void** = "); // TEQ
    if (pHandle.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pHandle = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pHandle.GetPointer(), vinfo_pHandle); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateViSurfaceNN(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkViSurfaceCreateInfoNN>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreateViSurfaceNN(instance, pCreateInfo, pAllocator, pSurface)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "instance:                       "); // HRW
    OutputString(outputFile, "VkInstance = "); // TEQ
    AddrToString(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkViSurfaceCreateInfoNN* pCreateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkViSurfaceCreateInfoNN* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR* pSurface
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSurface:                       "); // HRW
    OutputString(outputFile, "VkSurfaceKHR* = "); // TEQ
    if (pSurface.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pSurface = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pSurface.GetPointer(), vinfo_pSurface); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCmdBeginConditionalRenderingEXT(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkConditionalRenderingBeginInfoEXT>& pConditionalRenderingBegin)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdBeginConditionalRenderingEXT(commandBuffer, pConditionalRenderingBegin)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkConditionalRenderingBeginInfoEXT* pConditionalRenderingBegin
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pConditionalRenderingBegin:     "); // HRW
    OutputString(outputFile, "const VkConditionalRenderingBeginInfoEXT* = "); // TEQ
    if (pConditionalRenderingBegin.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pConditionalRenderingBegin.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pConditionalRenderingBegin.GetMetaStructPointer(), indent+1,pConditionalRenderingBegin.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdEndConditionalRenderingEXT(
    format::HandleId                            commandBuffer)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdEndConditionalRenderingEXT(commandBuffer)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCmdProcessCommandsNVX(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkCmdProcessCommandsInfoNVX>& pProcessCommandsInfo)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdProcessCommandsNVX(commandBuffer, pProcessCommandsInfo)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkCmdProcessCommandsInfoNVX* pProcessCommandsInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pProcessCommandsInfo:           "); // HRW
    OutputString(outputFile, "const VkCmdProcessCommandsInfoNVX* = "); // TEQ
    if (pProcessCommandsInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pProcessCommandsInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pProcessCommandsInfo.GetMetaStructPointer(), indent+1,pProcessCommandsInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdReserveSpaceForCommandsNVX(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkCmdReserveSpaceForCommandsInfoNVX>& pReserveSpaceInfo)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdReserveSpaceForCommandsNVX(commandBuffer, pReserveSpaceInfo)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkCmdReserveSpaceForCommandsInfoNVX* pReserveSpaceInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pReserveSpaceInfo:              "); // HRW
    OutputString(outputFile, "const VkCmdReserveSpaceForCommandsInfoNVX* = "); // TEQ
    if (pReserveSpaceInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pReserveSpaceInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pReserveSpaceInfo.GetMetaStructPointer(), indent+1,pReserveSpaceInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateIndirectCommandsLayoutNVX(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkIndirectCommandsLayoutCreateInfoNVX>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkIndirectCommandsLayoutNVX>* pIndirectCommandsLayout)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreateIndirectCommandsLayoutNVX(device, pCreateInfo, pAllocator, pIndirectCommandsLayout)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkIndirectCommandsLayoutCreateInfoNVX* pCreateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkIndirectCommandsLayoutCreateInfoNVX* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkIndirectCommandsLayoutNVX* pIndirectCommandsLayout
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pIndirectCommandsLayout:        "); // HRW
    OutputString(outputFile, "VkIndirectCommandsLayoutNVX* = "); // TEQ
    if (pIndirectCommandsLayout.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pIndirectCommandsLayout = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pIndirectCommandsLayout.GetPointer(), vinfo_pIndirectCommandsLayout); // PWS
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkDestroyIndirectCommandsLayoutNVX(device, indirectCommandsLayout, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkIndirectCommandsLayoutNVX indirectCommandsLayout
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "indirectCommandsLayout:         "); // HRW
    OutputString(outputFile, "VkIndirectCommandsLayoutNVX = "); // TEQ
    AddrToString(outputFile, indirectCommandsLayout); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateObjectTableNVX(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkObjectTableCreateInfoNVX>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkObjectTableNVX>*     pObjectTable)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreateObjectTableNVX(device, pCreateInfo, pAllocator, pObjectTable)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkObjectTableCreateInfoNVX* pCreateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkObjectTableCreateInfoNVX* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkObjectTableNVX* pObjectTable
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pObjectTable:                   "); // HRW
    OutputString(outputFile, "VkObjectTableNVX* = "); // TEQ
    if (pObjectTable.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pObjectTable = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pObjectTable.GetPointer(), vinfo_pObjectTable); // PWS
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkDestroyObjectTableNVX(device, objectTable, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkObjectTableNVX objectTable
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "objectTable:                    "); // HRW
    OutputString(outputFile, "VkObjectTableNVX = "); // TEQ
    AddrToString(outputFile, objectTable); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkUnregisterObjectsNVX(device, objectTable, objectCount, pObjectEntryTypes, pObjectIndices)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkObjectTableNVX objectTable
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "objectTable:                    "); // HRW
    OutputString(outputFile, "VkObjectTableNVX = "); // TEQ
    AddrToString(outputFile, objectTable); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t objectCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "objectCount:                    "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, objectCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkObjectEntryTypeNVX* pObjectEntryTypes
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pObjectEntryTypes:              "); // HRW
    OutputString(outputFile, "const VkObjectEntryTypeNVX* = "); // TEQ
    if (pObjectEntryTypes.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pObjectEntryTypes.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pObjectEntryTypes = {false, true, false, EnumToStringVkObjectEntryTypeNVX};
        ArrayToString(outputFile, indent, 0, "const VkObjectEntryTypeNVX*", &pObjectEntryTypes, "pObjectEntryTypes", objectCount, vinfo_pObjectEntryTypes); // AUC
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const uint32_t* pObjectIndices
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pObjectIndices:                 "); // HRW
    OutputString(outputFile, "const uint32_t* = "); // TEQ
    if (pObjectIndices.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pObjectIndices.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pObjectIndices = {false, false, false, nullptr};
        ArrayToString(outputFile, indent, 0, "const uint32_t*", &pObjectIndices, "pObjectIndices", objectCount, vinfo_pObjectIndices); // AUC
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX(
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkDeviceGeneratedCommandsFeaturesNVX>* pFeatures,
    StructPointerDecoder<Decoded_VkDeviceGeneratedCommandsLimitsNVX>* pLimits)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX(physicalDevice, pFeatures, pLimits)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceGeneratedCommandsFeaturesNVX* pFeatures
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pFeatures:                      "); // HRW
    OutputString(outputFile, "VkDeviceGeneratedCommandsFeaturesNVX* = "); // TEQ
    if (pFeatures.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pFeatures.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pFeatures.GetMetaStructPointer(), indent+1,pFeatures.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceGeneratedCommandsLimitsNVX* pLimits
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pLimits:                        "); // HRW
    OutputString(outputFile, "VkDeviceGeneratedCommandsLimitsNVX* = "); // TEQ
    if (pLimits.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pLimits.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pLimits.GetMetaStructPointer(), indent+1,pLimits.GetAddress()); // GLM
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdSetViewportWScalingNV(commandBuffer, firstViewport, viewportCount, pViewportWScalings)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstViewport
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "firstViewport:                  "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, firstViewport); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t viewportCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "viewportCount:                  "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, viewportCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkViewportWScalingNV* pViewportWScalings
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pViewportWScalings:             "); // HRW
    OutputString(outputFile, "const VkViewportWScalingNV* = "); // TEQ
    if (pViewportWScalings.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pViewportWScalings.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkViewportWScalingNV>(outputFile, indent+1, 1, "VkViewportWScalingNV", pViewportWScalings.GetMetaStructPointer(), "pViewportWScalings", viewportCount, false, pViewportWScalings.GetAddress());  // CCO
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkReleaseDisplayEXT(physicalDevice, display)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayKHR display
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "display:                        "); // HRW
    OutputString(outputFile, "VkDisplayKHR = "); // TEQ
    AddrToString(outputFile, display); // PAQ
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkAcquireXlibDisplayEXT(physicalDevice, dpy, display)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: void* dpy
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "dpy:                            "); // HRW
    OutputString(outputFile, "void* = "); // TEQ
    AddrToString(outputFile, dpy); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayKHR display
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "display:                        "); // HRW
    OutputString(outputFile, "VkDisplayKHR = "); // TEQ
    AddrToString(outputFile, display); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetRandROutputDisplayEXT(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    uint64_t                                    dpy,
    size_t                                      rrOutput,
    HandlePointerDecoder<VkDisplayKHR>*         pDisplay)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetRandROutputDisplayEXT(physicalDevice, dpy, rrOutput, pDisplay)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: void* dpy
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "dpy:                            "); // HRW
    OutputString(outputFile, "void* = "); // TEQ
    AddrToString(outputFile, dpy); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: size_t rrOutput
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "rrOutput:                       "); // HRW
    OutputString(outputFile, "size_t = "); // TEQ
    UnsignedDecimalToString(outputFile, rrOutput); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayKHR* pDisplay
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pDisplay:                       "); // HRW
    OutputString(outputFile, "VkDisplayKHR* = "); // TEQ
    if (pDisplay.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pDisplay = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pDisplay.GetPointer(), vinfo_pDisplay); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSurfaceCapabilities2EXT(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            surface,
    StructPointerDecoder<Decoded_VkSurfaceCapabilities2EXT>* pSurfaceCapabilities)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceSurfaceCapabilities2EXT(physicalDevice, surface, pSurfaceCapabilities)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR surface
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "surface:                        "); // HRW
    OutputString(outputFile, "VkSurfaceKHR = "); // TEQ
    AddrToString(outputFile, surface); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceCapabilities2EXT* pSurfaceCapabilities
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSurfaceCapabilities:           "); // HRW
    OutputString(outputFile, "VkSurfaceCapabilities2EXT* = "); // TEQ
    if (pSurfaceCapabilities.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pSurfaceCapabilities.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pSurfaceCapabilities.GetMetaStructPointer(), indent+1,pSurfaceCapabilities.GetAddress()); // GLM
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkDisplayPowerControlEXT(device, display, pDisplayPowerInfo)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayKHR display
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "display:                        "); // HRW
    OutputString(outputFile, "VkDisplayKHR = "); // TEQ
    AddrToString(outputFile, display); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDisplayPowerInfoEXT* pDisplayPowerInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pDisplayPowerInfo:              "); // HRW
    OutputString(outputFile, "const VkDisplayPowerInfoEXT* = "); // TEQ
    if (pDisplayPowerInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pDisplayPowerInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pDisplayPowerInfo.GetMetaStructPointer(), indent+1,pDisplayPowerInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkRegisterDeviceEventEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDeviceEventInfoEXT>& pDeviceEventInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkFence>*              pFence)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkRegisterDeviceEventEXT(device, pDeviceEventInfo, pAllocator, pFence)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDeviceEventInfoEXT* pDeviceEventInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pDeviceEventInfo:               "); // HRW
    OutputString(outputFile, "const VkDeviceEventInfoEXT* = "); // TEQ
    if (pDeviceEventInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pDeviceEventInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pDeviceEventInfo.GetMetaStructPointer(), indent+1,pDeviceEventInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFence* pFence
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pFence:                         "); // HRW
    OutputString(outputFile, "VkFence* = "); // TEQ
    if (pFence.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pFence = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pFence.GetPointer(), vinfo_pFence); // PWS
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
    HandlePointerDecoder<VkFence>*              pFence)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkRegisterDisplayEventEXT(device, display, pDisplayEventInfo, pAllocator, pFence)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayKHR display
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "display:                        "); // HRW
    OutputString(outputFile, "VkDisplayKHR = "); // TEQ
    AddrToString(outputFile, display); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDisplayEventInfoEXT* pDisplayEventInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pDisplayEventInfo:              "); // HRW
    OutputString(outputFile, "const VkDisplayEventInfoEXT* = "); // TEQ
    if (pDisplayEventInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pDisplayEventInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pDisplayEventInfo.GetMetaStructPointer(), indent+1,pDisplayEventInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFence* pFence
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pFence:                         "); // HRW
    OutputString(outputFile, "VkFence* = "); // TEQ
    if (pFence.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pFence = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pFence.GetPointer(), vinfo_pFence); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetSwapchainCounterEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain,
    VkSurfaceCounterFlagBitsEXT                 counter,
    PointerDecoder<uint64_t>*                   pCounterValue)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetSwapchainCounterEXT(device, swapchain, counter, pCounterValue)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSwapchainKHR swapchain
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "swapchain:                      "); // HRW
    OutputString(outputFile, "VkSwapchainKHR = "); // TEQ
    AddrToString(outputFile, swapchain); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceCounterFlagBitsEXT counter
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "counter:                        "); // HRW
    OutputString(outputFile, "VkSurfaceCounterFlagBitsEXT = "); // TEQ
    EnumToStringVkSurfaceCounterFlagBitsEXT(outputFile, counter); // VSA
    OutputString(outputFile, " (");
    UnsignedDecimalToString(outputFile, counter);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint64_t* pCounterValue
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCounterValue:                  "); // HRW
    OutputString(outputFile, "uint64_t* = "); // TEQ
    if (pCounterValue.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pCounterValue = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pCounterValue.GetPointer(), vinfo_pCounterValue); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetRefreshCycleDurationGOOGLE(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain,
    StructPointerDecoder<Decoded_VkRefreshCycleDurationGOOGLE>* pDisplayTimingProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetRefreshCycleDurationGOOGLE(device, swapchain, pDisplayTimingProperties)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSwapchainKHR swapchain
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "swapchain:                      "); // HRW
    OutputString(outputFile, "VkSwapchainKHR = "); // TEQ
    AddrToString(outputFile, swapchain); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkRefreshCycleDurationGOOGLE* pDisplayTimingProperties
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pDisplayTimingProperties:       "); // HRW
    OutputString(outputFile, "VkRefreshCycleDurationGOOGLE* = "); // TEQ
    if (pDisplayTimingProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pDisplayTimingProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pDisplayTimingProperties.GetMetaStructPointer(), indent+1,pDisplayTimingProperties.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPastPresentationTimingGOOGLE(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain,
    PointerDecoder<uint32_t>*                   pPresentationTimingCount,
    StructPointerDecoder<Decoded_VkPastPresentationTimingGOOGLE>* pPresentationTimings)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPastPresentationTimingGOOGLE(device, swapchain, pPresentationTimingCount, pPresentationTimings)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSwapchainKHR swapchain
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "swapchain:                      "); // HRW
    OutputString(outputFile, "VkSwapchainKHR = "); // TEQ
    AddrToString(outputFile, swapchain); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pPresentationTimingCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pPresentationTimingCount:       "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pPresentationTimingCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pPresentationTimingCount = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pPresentationTimingCount.GetPointer(), vinfo_pPresentationTimingCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPastPresentationTimingGOOGLE* pPresentationTimings
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pPresentationTimings:           "); // HRW
    OutputString(outputFile, "VkPastPresentationTimingGOOGLE* = "); // TEQ
    if (pPresentationTimings.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pPresentationTimings.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkPastPresentationTimingGOOGLE>(outputFile, indent+1, 1, "VkPastPresentationTimingGOOGLE", pPresentationTimings.GetMetaStructPointer(), "pPresentationTimings", *pPresentationTimingCount.GetPointer(), false, pPresentationTimings.GetAddress());  // CCO
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdSetDiscardRectangleEXT(commandBuffer, firstDiscardRectangle, discardRectangleCount, pDiscardRectangles)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstDiscardRectangle
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "firstDiscardRectangle:          "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, firstDiscardRectangle); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t discardRectangleCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "discardRectangleCount:          "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, discardRectangleCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkRect2D* pDiscardRectangles
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pDiscardRectangles:             "); // HRW
    OutputString(outputFile, "const VkRect2D* = "); // TEQ
    if (pDiscardRectangles.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pDiscardRectangles.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkRect2D>(outputFile, indent+1, 1, "VkRect2D", pDiscardRectangles.GetMetaStructPointer(), "pDiscardRectangles", discardRectangleCount, false, pDiscardRectangles.GetAddress());  // CCO
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkSetHdrMetadataEXT(device, swapchainCount, pSwapchains, pMetadata)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t swapchainCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "swapchainCount:                 "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, swapchainCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSwapchainKHR* pSwapchains
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSwapchains:                    "); // HRW
    OutputString(outputFile, "const VkSwapchainKHR* = "); // TEQ
    if (pSwapchains.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pSwapchains.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pSwapchains = {true, false, false, nullptr};
        ArrayToString(outputFile, indent, 0, "const VkSwapchainKHR*", &pSwapchains, "pSwapchains", swapchainCount, vinfo_pSwapchains); // AUC
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkHdrMetadataEXT* pMetadata
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pMetadata:                      "); // HRW
    OutputString(outputFile, "const VkHdrMetadataEXT* = "); // TEQ
    if (pMetadata.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pMetadata.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkHdrMetadataEXT>(outputFile, indent+1, 1, "VkHdrMetadataEXT", pMetadata.GetMetaStructPointer(), "pMetadata", swapchainCount, false, pMetadata.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateIOSSurfaceMVK(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkIOSSurfaceCreateInfoMVK>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreateIOSSurfaceMVK(instance, pCreateInfo, pAllocator, pSurface)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "instance:                       "); // HRW
    OutputString(outputFile, "VkInstance = "); // TEQ
    AddrToString(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkIOSSurfaceCreateInfoMVK* pCreateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkIOSSurfaceCreateInfoMVK* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR* pSurface
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSurface:                       "); // HRW
    OutputString(outputFile, "VkSurfaceKHR* = "); // TEQ
    if (pSurface.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pSurface = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pSurface.GetPointer(), vinfo_pSurface); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateMacOSSurfaceMVK(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkMacOSSurfaceCreateInfoMVK>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreateMacOSSurfaceMVK(instance, pCreateInfo, pAllocator, pSurface)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "instance:                       "); // HRW
    OutputString(outputFile, "VkInstance = "); // TEQ
    AddrToString(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkMacOSSurfaceCreateInfoMVK* pCreateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkMacOSSurfaceCreateInfoMVK* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR* pSurface
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSurface:                       "); // HRW
    OutputString(outputFile, "VkSurfaceKHR* = "); // TEQ
    if (pSurface.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pSurface = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pSurface.GetPointer(), vinfo_pSurface); // PWS
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkSetDebugUtilsObjectNameEXT(device, pNameInfo)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDebugUtilsObjectNameInfoEXT* pNameInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pNameInfo:                      "); // HRW
    OutputString(outputFile, "const VkDebugUtilsObjectNameInfoEXT* = "); // TEQ
    if (pNameInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pNameInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pNameInfo.GetMetaStructPointer(), indent+1,pNameInfo.GetAddress()); // GLM
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkSetDebugUtilsObjectTagEXT(device, pTagInfo)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDebugUtilsObjectTagInfoEXT* pTagInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pTagInfo:                       "); // HRW
    OutputString(outputFile, "const VkDebugUtilsObjectTagInfoEXT* = "); // TEQ
    if (pTagInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pTagInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pTagInfo.GetMetaStructPointer(), indent+1,pTagInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkQueueBeginDebugUtilsLabelEXT(
    format::HandleId                            queue,
    const StructPointerDecoder<Decoded_VkDebugUtilsLabelEXT>& pLabelInfo)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkQueueBeginDebugUtilsLabelEXT(queue, pLabelInfo)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkQueue queue
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "queue:                          "); // HRW
    OutputString(outputFile, "VkQueue = "); // TEQ
    AddrToString(outputFile, queue); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDebugUtilsLabelEXT* pLabelInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pLabelInfo:                     "); // HRW
    OutputString(outputFile, "const VkDebugUtilsLabelEXT* = "); // TEQ
    if (pLabelInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pLabelInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pLabelInfo.GetMetaStructPointer(), indent+1,pLabelInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkQueueEndDebugUtilsLabelEXT(
    format::HandleId                            queue)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkQueueEndDebugUtilsLabelEXT(queue)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkQueue queue
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "queue:                          "); // HRW
    OutputString(outputFile, "VkQueue = "); // TEQ
    AddrToString(outputFile, queue); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkQueueInsertDebugUtilsLabelEXT(
    format::HandleId                            queue,
    const StructPointerDecoder<Decoded_VkDebugUtilsLabelEXT>& pLabelInfo)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkQueueInsertDebugUtilsLabelEXT(queue, pLabelInfo)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkQueue queue
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "queue:                          "); // HRW
    OutputString(outputFile, "VkQueue = "); // TEQ
    AddrToString(outputFile, queue); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDebugUtilsLabelEXT* pLabelInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pLabelInfo:                     "); // HRW
    OutputString(outputFile, "const VkDebugUtilsLabelEXT* = "); // TEQ
    if (pLabelInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pLabelInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pLabelInfo.GetMetaStructPointer(), indent+1,pLabelInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdBeginDebugUtilsLabelEXT(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkDebugUtilsLabelEXT>& pLabelInfo)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdBeginDebugUtilsLabelEXT(commandBuffer, pLabelInfo)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDebugUtilsLabelEXT* pLabelInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pLabelInfo:                     "); // HRW
    OutputString(outputFile, "const VkDebugUtilsLabelEXT* = "); // TEQ
    if (pLabelInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pLabelInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pLabelInfo.GetMetaStructPointer(), indent+1,pLabelInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdEndDebugUtilsLabelEXT(
    format::HandleId                            commandBuffer)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdEndDebugUtilsLabelEXT(commandBuffer)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdInsertDebugUtilsLabelEXT(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkDebugUtilsLabelEXT>& pLabelInfo)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdInsertDebugUtilsLabelEXT(commandBuffer, pLabelInfo)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDebugUtilsLabelEXT* pLabelInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pLabelInfo:                     "); // HRW
    OutputString(outputFile, "const VkDebugUtilsLabelEXT* = "); // TEQ
    if (pLabelInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pLabelInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pLabelInfo.GetMetaStructPointer(), indent+1,pLabelInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateDebugUtilsMessengerEXT(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkDebugUtilsMessengerCreateInfoEXT>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkDebugUtilsMessengerEXT>* pMessenger)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreateDebugUtilsMessengerEXT(instance, pCreateInfo, pAllocator, pMessenger)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "instance:                       "); // HRW
    OutputString(outputFile, "VkInstance = "); // TEQ
    AddrToString(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDebugUtilsMessengerCreateInfoEXT* pCreateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkDebugUtilsMessengerCreateInfoEXT* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDebugUtilsMessengerEXT* pMessenger
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pMessenger:                     "); // HRW
    OutputString(outputFile, "VkDebugUtilsMessengerEXT* = "); // TEQ
    if (pMessenger.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pMessenger = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pMessenger.GetPointer(), vinfo_pMessenger); // PWS
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkDestroyDebugUtilsMessengerEXT(instance, messenger, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkInstance instance
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "instance:                       "); // HRW
    OutputString(outputFile, "VkInstance = "); // TEQ
    AddrToString(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDebugUtilsMessengerEXT messenger
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "messenger:                      "); // HRW
    OutputString(outputFile, "VkDebugUtilsMessengerEXT = "); // TEQ
    AddrToString(outputFile, messenger); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkSubmitDebugUtilsMessageEXT(instance, messageSeverity, messageTypes, pCallbackData)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkInstance instance
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "instance:                       "); // HRW
    OutputString(outputFile, "VkInstance = "); // TEQ
    AddrToString(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "messageSeverity:                "); // HRW
    OutputString(outputFile, "VkDebugUtilsMessageSeverityFlagBitsEXT = "); // TEQ
    EnumToStringVkDebugUtilsMessageSeverityFlagBitsEXT(outputFile, messageSeverity); // VSA
    OutputString(outputFile, " (");
    UnsignedDecimalToString(outputFile, messageSeverity);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDebugUtilsMessageTypeFlagsEXT messageTypes
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "messageTypes:                   "); // HRW
    OutputString(outputFile, "VkDebugUtilsMessageTypeFlagsEXT = "); // TEQ
    FlagsToString(outputFile, messageTypes, EnumToStringVkDebugUtilsMessageTypeFlagBitsEXT); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDebugUtilsMessengerCallbackDataEXT* pCallbackData
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCallbackData:                  "); // HRW
    OutputString(outputFile, "const VkDebugUtilsMessengerCallbackDataEXT* = "); // TEQ
    if (pCallbackData.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCallbackData.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCallbackData.GetMetaStructPointer(), indent+1,pCallbackData.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetAndroidHardwareBufferPropertiesANDROID(
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint64_t                                    buffer,
    StructPointerDecoder<Decoded_VkAndroidHardwareBufferPropertiesANDROID>* pProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetAndroidHardwareBufferPropertiesANDROID(device, buffer, pProperties)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const struct void* buffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "buffer:                         "); // HRW
    OutputString(outputFile, "const struct void* = "); // TEQ
    if ( !buffer) // WWW
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, buffer); // PWR
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkAndroidHardwareBufferPropertiesANDROID* pProperties
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pProperties:                    "); // HRW
    OutputString(outputFile, "VkAndroidHardwareBufferPropertiesANDROID* = "); // TEQ
    if (pProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pProperties.GetMetaStructPointer(), indent+1,pProperties.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetMemoryAndroidHardwareBufferANDROID(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkMemoryGetAndroidHardwareBufferInfoANDROID>& pInfo,
    PointerDecoder<uint64_t, void*>*            pBuffer)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetMemoryAndroidHardwareBufferANDROID(device, pInfo, pBuffer)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkMemoryGetAndroidHardwareBufferInfoANDROID* pInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pInfo:                          "); // HRW
    OutputString(outputFile, "const VkMemoryGetAndroidHardwareBufferInfoANDROID* = "); // TEQ
    if (pInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pInfo.GetMetaStructPointer(), indent+1,pInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: struct void** pBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pBuffer:                        "); // HRW
    OutputString(outputFile, "struct void** = "); // TEQ
    if (pBuffer.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pBuffer = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pBuffer.GetPointer(), vinfo_pBuffer); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCmdSetSampleLocationsEXT(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkSampleLocationsInfoEXT>& pSampleLocationsInfo)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdSetSampleLocationsEXT(commandBuffer, pSampleLocationsInfo)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSampleLocationsInfoEXT* pSampleLocationsInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSampleLocationsInfo:           "); // HRW
    OutputString(outputFile, "const VkSampleLocationsInfoEXT* = "); // TEQ
    if (pSampleLocationsInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pSampleLocationsInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pSampleLocationsInfo.GetMetaStructPointer(), indent+1,pSampleLocationsInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceMultisamplePropertiesEXT(
    format::HandleId                            physicalDevice,
    VkSampleCountFlagBits                       samples,
    StructPointerDecoder<Decoded_VkMultisamplePropertiesEXT>* pMultisampleProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceMultisamplePropertiesEXT(physicalDevice, samples, pMultisampleProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSampleCountFlagBits samples
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "samples:                        "); // HRW
    OutputString(outputFile, "VkSampleCountFlagBits = "); // TEQ
    EnumToStringVkSampleCountFlagBits(outputFile, samples); // VSA
    OutputString(outputFile, " (");
    UnsignedDecimalToString(outputFile, samples);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkMultisamplePropertiesEXT* pMultisampleProperties
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pMultisampleProperties:         "); // HRW
    OutputString(outputFile, "VkMultisamplePropertiesEXT* = "); // TEQ
    if (pMultisampleProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pMultisampleProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pMultisampleProperties.GetMetaStructPointer(), indent+1,pMultisampleProperties.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetImageDrmFormatModifierPropertiesEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            image,
    StructPointerDecoder<Decoded_VkImageDrmFormatModifierPropertiesEXT>* pProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetImageDrmFormatModifierPropertiesEXT(device, image, pProperties)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage image
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "image:                          "); // HRW
    OutputString(outputFile, "VkImage = "); // TEQ
    AddrToString(outputFile, image); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageDrmFormatModifierPropertiesEXT* pProperties
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pProperties:                    "); // HRW
    OutputString(outputFile, "VkImageDrmFormatModifierPropertiesEXT* = "); // TEQ
    if (pProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pProperties.GetMetaStructPointer(), indent+1,pProperties.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateValidationCacheEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkValidationCacheCreateInfoEXT>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkValidationCacheEXT>* pValidationCache)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreateValidationCacheEXT(device, pCreateInfo, pAllocator, pValidationCache)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkValidationCacheCreateInfoEXT* pCreateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkValidationCacheCreateInfoEXT* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkValidationCacheEXT* pValidationCache
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pValidationCache:               "); // HRW
    OutputString(outputFile, "VkValidationCacheEXT* = "); // TEQ
    if (pValidationCache.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pValidationCache = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pValidationCache.GetPointer(), vinfo_pValidationCache); // PWS
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkDestroyValidationCacheEXT(device, validationCache, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkValidationCacheEXT validationCache
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "validationCache:                "); // HRW
    OutputString(outputFile, "VkValidationCacheEXT = "); // TEQ
    AddrToString(outputFile, validationCache); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkMergeValidationCachesEXT(device, dstCache, srcCacheCount, pSrcCaches)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkValidationCacheEXT dstCache
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "dstCache:                       "); // HRW
    OutputString(outputFile, "VkValidationCacheEXT = "); // TEQ
    AddrToString(outputFile, dstCache); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t srcCacheCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "srcCacheCount:                  "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, srcCacheCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkValidationCacheEXT* pSrcCaches
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSrcCaches:                     "); // HRW
    OutputString(outputFile, "const VkValidationCacheEXT* = "); // TEQ
    if (pSrcCaches.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pSrcCaches.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pSrcCaches = {true, false, false, nullptr};
        ArrayToString(outputFile, indent, 0, "const VkValidationCacheEXT*", &pSrcCaches, "pSrcCaches", srcCacheCount, vinfo_pSrcCaches); // AUC
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetValidationCacheDataEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            validationCache,
    PointerDecoder<size_t>*                     pDataSize,
    PointerDecoder<uint8_t>*                    pData)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetValidationCacheDataEXT(device, validationCache, pDataSize, pData)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkValidationCacheEXT validationCache
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "validationCache:                "); // HRW
    OutputString(outputFile, "VkValidationCacheEXT = "); // TEQ
    AddrToString(outputFile, validationCache); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: size_t* pDataSize
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pDataSize:                      "); // HRW
    OutputString(outputFile, "size_t* = "); // TEQ
    if (pDataSize.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pDataSize = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pDataSize.GetPointer(), vinfo_pDataSize); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: void* pData
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pData:                          "); // HRW
    OutputString(outputFile, "void* = "); // TEQ
    if (pData.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pData.GetAddress()); // AHW
        ScalarValueToStringStruct vinfo_pData = {false, false, false, nullptr};
        ArrayToString(outputFile, indent, 0, "void*", &pData, "pData", *pDataSize.GetPointer(), vinfo_pData); // PRC
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdBindShadingRateImageNV(commandBuffer, imageView, imageLayout)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageView imageView
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "imageView:                      "); // HRW
    OutputString(outputFile, "VkImageView = "); // TEQ
    AddrToString(outputFile, imageView); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageLayout imageLayout
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "imageLayout:                    "); // HRW
    OutputString(outputFile, "VkImageLayout = "); // TEQ
    EnumToStringVkImageLayout(outputFile, imageLayout); // VSA
    OutputString(outputFile, " (");
    UnsignedDecimalToString(outputFile, imageLayout);
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdSetViewportShadingRatePaletteNV(commandBuffer, firstViewport, viewportCount, pShadingRatePalettes)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstViewport
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "firstViewport:                  "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, firstViewport); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t viewportCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "viewportCount:                  "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, viewportCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkShadingRatePaletteNV* pShadingRatePalettes
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pShadingRatePalettes:           "); // HRW
    OutputString(outputFile, "const VkShadingRatePaletteNV* = "); // TEQ
    if (pShadingRatePalettes.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pShadingRatePalettes.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkShadingRatePaletteNV>(outputFile, indent+1, 1, "VkShadingRatePaletteNV", pShadingRatePalettes.GetMetaStructPointer(), "pShadingRatePalettes", viewportCount, false, pShadingRatePalettes.GetAddress());  // CCO
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdSetCoarseSampleOrderNV(commandBuffer, sampleOrderType, customSampleOrderCount, pCustomSampleOrders)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkCoarseSampleOrderTypeNV sampleOrderType
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "sampleOrderType:                "); // HRW
    OutputString(outputFile, "VkCoarseSampleOrderTypeNV = "); // TEQ
    EnumToStringVkCoarseSampleOrderTypeNV(outputFile, sampleOrderType); // VSA
    OutputString(outputFile, " (");
    UnsignedDecimalToString(outputFile, sampleOrderType);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t customSampleOrderCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "customSampleOrderCount:         "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, customSampleOrderCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkCoarseSampleOrderCustomNV* pCustomSampleOrders
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCustomSampleOrders:            "); // HRW
    OutputString(outputFile, "const VkCoarseSampleOrderCustomNV* = "); // TEQ
    if (pCustomSampleOrders.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCustomSampleOrders.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkCoarseSampleOrderCustomNV>(outputFile, indent+1, 1, "VkCoarseSampleOrderCustomNV", pCustomSampleOrders.GetMetaStructPointer(), "pCustomSampleOrders", customSampleOrderCount, false, pCustomSampleOrders.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateAccelerationStructureNV(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkAccelerationStructureCreateInfoNV>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkAccelerationStructureNV>* pAccelerationStructure)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreateAccelerationStructureNV(device, pCreateInfo, pAllocator, pAccelerationStructure)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAccelerationStructureCreateInfoNV* pCreateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkAccelerationStructureCreateInfoNV* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkAccelerationStructureNV* pAccelerationStructure
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAccelerationStructure:         "); // HRW
    OutputString(outputFile, "VkAccelerationStructureNV* = "); // TEQ
    if (pAccelerationStructure.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pAccelerationStructure = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pAccelerationStructure.GetPointer(), vinfo_pAccelerationStructure); // PWS
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkDestroyAccelerationStructureNV(device, accelerationStructure, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkAccelerationStructureNV accelerationStructure
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "accelerationStructure:          "); // HRW
    OutputString(outputFile, "VkAccelerationStructureNV = "); // TEQ
    AddrToString(outputFile, accelerationStructure); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetAccelerationStructureMemoryRequirementsNV(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkAccelerationStructureMemoryRequirementsInfoNV>& pInfo,
    StructPointerDecoder<Decoded_VkMemoryRequirements2KHR>* pMemoryRequirements)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetAccelerationStructureMemoryRequirementsNV(device, pInfo, pMemoryRequirements)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAccelerationStructureMemoryRequirementsInfoNV* pInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pInfo:                          "); // HRW
    OutputString(outputFile, "const VkAccelerationStructureMemoryRequirementsInfoNV* = "); // TEQ
    if (pInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pInfo.GetMetaStructPointer(), indent+1,pInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkMemoryRequirements2KHR* pMemoryRequirements
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pMemoryRequirements:            "); // HRW
    OutputString(outputFile, "VkMemoryRequirements2KHR* = "); // TEQ
    if (pMemoryRequirements.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pMemoryRequirements.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pMemoryRequirements.GetMetaStructPointer(), indent+1,pMemoryRequirements.GetAddress()); // GLM
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkBindAccelerationStructureMemoryNV(device, bindInfoCount, pBindInfos)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t bindInfoCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "bindInfoCount:                  "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, bindInfoCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBindAccelerationStructureMemoryInfoNV* pBindInfos
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pBindInfos:                     "); // HRW
    OutputString(outputFile, "const VkBindAccelerationStructureMemoryInfoNV* = "); // TEQ
    if (pBindInfos.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pBindInfos.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkBindAccelerationStructureMemoryInfoNV>(outputFile, indent+1, 1, "VkBindAccelerationStructureMemoryInfoNV", pBindInfos.GetMetaStructPointer(), "pBindInfos", bindInfoCount, false, pBindInfos.GetAddress());  // CCO
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdBuildAccelerationStructureNV(commandBuffer, pInfo, instanceData, instanceOffset, update, dst, src, scratch, scratchOffset)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAccelerationStructureInfoNV* pInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pInfo:                          "); // HRW
    OutputString(outputFile, "const VkAccelerationStructureInfoNV* = "); // TEQ
    if (pInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pInfo.GetMetaStructPointer(), indent+1,pInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer instanceData
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "instanceData:                   "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    AddrToString(outputFile, instanceData); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize instanceOffset
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "instanceOffset:                 "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    SignedDecimalToString(outputFile, instanceOffset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBool32 update
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "update:                         "); // HRW
    OutputString(outputFile, "VkBool32 = "); // TEQ
    SignedDecimalToString(outputFile, update); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkAccelerationStructureNV dst
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "dst:                            "); // HRW
    OutputString(outputFile, "VkAccelerationStructureNV = "); // TEQ
    AddrToString(outputFile, dst); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkAccelerationStructureNV src
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "src:                            "); // HRW
    OutputString(outputFile, "VkAccelerationStructureNV = "); // TEQ
    AddrToString(outputFile, src); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer scratch
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "scratch:                        "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    AddrToString(outputFile, scratch); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize scratchOffset
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "scratchOffset:                  "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    SignedDecimalToString(outputFile, scratchOffset); // EQA
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdCopyAccelerationStructureNV(commandBuffer, dst, src, mode)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkAccelerationStructureNV dst
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "dst:                            "); // HRW
    OutputString(outputFile, "VkAccelerationStructureNV = "); // TEQ
    AddrToString(outputFile, dst); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkAccelerationStructureNV src
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "src:                            "); // HRW
    OutputString(outputFile, "VkAccelerationStructureNV = "); // TEQ
    AddrToString(outputFile, src); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkCopyAccelerationStructureModeNV mode
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "mode:                           "); // HRW
    OutputString(outputFile, "VkCopyAccelerationStructureModeNV = "); // TEQ
    EnumToStringVkCopyAccelerationStructureModeNV(outputFile, mode); // VSA
    OutputString(outputFile, " (");
    UnsignedDecimalToString(outputFile, mode);
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdTraceRaysNV(commandBuffer, raygenShaderBindingTableBuffer, raygenShaderBindingOffset, missShaderBindingTableBuffer, missShaderBindingOffset, missShaderBindingStride, hitShaderBindingTableBuffer, hitShaderBindingOffset, hitShaderBindingStride, callableShaderBindingTableBuffer, callableShaderBindingOffset, callableShaderBindingStride, width, height, depth)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer raygenShaderBindingTableBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "raygenShaderBindingTableBuffer: "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    AddrToString(outputFile, raygenShaderBindingTableBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize raygenShaderBindingOffset
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "raygenShaderBindingOffset:      "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    SignedDecimalToString(outputFile, raygenShaderBindingOffset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer missShaderBindingTableBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "missShaderBindingTableBuffer:   "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    AddrToString(outputFile, missShaderBindingTableBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize missShaderBindingOffset
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "missShaderBindingOffset:        "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    SignedDecimalToString(outputFile, missShaderBindingOffset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize missShaderBindingStride
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "missShaderBindingStride:        "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    SignedDecimalToString(outputFile, missShaderBindingStride); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer hitShaderBindingTableBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "hitShaderBindingTableBuffer:    "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    AddrToString(outputFile, hitShaderBindingTableBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize hitShaderBindingOffset
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "hitShaderBindingOffset:         "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    SignedDecimalToString(outputFile, hitShaderBindingOffset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize hitShaderBindingStride
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "hitShaderBindingStride:         "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    SignedDecimalToString(outputFile, hitShaderBindingStride); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer callableShaderBindingTableBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "callableShaderBindingTableBuffer: "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    AddrToString(outputFile, callableShaderBindingTableBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize callableShaderBindingOffset
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "callableShaderBindingOffset:    "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    SignedDecimalToString(outputFile, callableShaderBindingOffset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize callableShaderBindingStride
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "callableShaderBindingStride:    "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    SignedDecimalToString(outputFile, callableShaderBindingStride); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t width
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "width:                          "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, width); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t height
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "height:                         "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, height); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t depth
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "depth:                          "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, depth); // UYW
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
    HandlePointerDecoder<VkPipeline>*           pPipelines)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreateRayTracingPipelinesNV(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineCache pipelineCache
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pipelineCache:                  "); // HRW
    OutputString(outputFile, "VkPipelineCache = "); // TEQ
    AddrToString(outputFile, pipelineCache); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t createInfoCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "createInfoCount:                "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, createInfoCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkRayTracingPipelineCreateInfoNV* pCreateInfos
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfos:                   "); // HRW
    OutputString(outputFile, "const VkRayTracingPipelineCreateInfoNV* = "); // TEQ
    if (pCreateInfos.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfos.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkRayTracingPipelineCreateInfoNV>(outputFile, indent+1, 1, "VkRayTracingPipelineCreateInfoNV", pCreateInfos.GetMetaStructPointer(), "pCreateInfos", createInfoCount, false, pCreateInfos.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipeline* pPipelines
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pPipelines:                     "); // HRW
    OutputString(outputFile, "VkPipeline* = "); // TEQ
    if (pPipelines.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pPipelines.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pPipelines = {true, false, false, nullptr};
        ArrayToString(outputFile, indent, 0, "VkPipeline*", &pPipelines, "pPipelines", createInfoCount, vinfo_pPipelines); // AUC
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
    PointerDecoder<uint8_t>*                    pData)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetRayTracingShaderGroupHandlesNV(device, pipeline, firstGroup, groupCount, dataSize, pData)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipeline pipeline
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pipeline:                       "); // HRW
    OutputString(outputFile, "VkPipeline = "); // TEQ
    AddrToString(outputFile, pipeline); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstGroup
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "firstGroup:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, firstGroup); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t groupCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "groupCount:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, groupCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: size_t dataSize
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "dataSize:                       "); // HRW
    OutputString(outputFile, "size_t = "); // TEQ
    UnsignedDecimalToString(outputFile, dataSize); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: void* pData
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pData:                          "); // HRW
    OutputString(outputFile, "void* = "); // TEQ
    if (pData.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pData.GetAddress()); // AHW
        ScalarValueToStringStruct vinfo_pData = {false, false, false, nullptr};
        ArrayToString(outputFile, indent, 0, "void*", &pData, "pData", dataSize, vinfo_pData); // PRC
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetAccelerationStructureHandleNV(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            accelerationStructure,
    size_t                                      dataSize,
    PointerDecoder<uint8_t>*                    pData)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetAccelerationStructureHandleNV(device, accelerationStructure, dataSize, pData)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkAccelerationStructureNV accelerationStructure
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "accelerationStructure:          "); // HRW
    OutputString(outputFile, "VkAccelerationStructureNV = "); // TEQ
    AddrToString(outputFile, accelerationStructure); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: size_t dataSize
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "dataSize:                       "); // HRW
    OutputString(outputFile, "size_t = "); // TEQ
    UnsignedDecimalToString(outputFile, dataSize); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: void* pData
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pData:                          "); // HRW
    OutputString(outputFile, "void* = "); // TEQ
    if (pData.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pData.GetAddress()); // AHW
        ScalarValueToStringStruct vinfo_pData = {false, false, false, nullptr};
        ArrayToString(outputFile, indent, 0, "void*", &pData, "pData", dataSize, vinfo_pData); // PRC
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdWriteAccelerationStructuresPropertiesNV(commandBuffer, accelerationStructureCount, pAccelerationStructures, queryType, queryPool, firstQuery)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t accelerationStructureCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "accelerationStructureCount:     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, accelerationStructureCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAccelerationStructureNV* pAccelerationStructures
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAccelerationStructures:        "); // HRW
    OutputString(outputFile, "const VkAccelerationStructureNV* = "); // TEQ
    if (pAccelerationStructures.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAccelerationStructures.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pAccelerationStructures = {true, false, false, nullptr};
        ArrayToString(outputFile, indent, 0, "const VkAccelerationStructureNV*", &pAccelerationStructures, "pAccelerationStructures", accelerationStructureCount, vinfo_pAccelerationStructures); // AUC
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryType queryType
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "queryType:                      "); // HRW
    OutputString(outputFile, "VkQueryType = "); // TEQ
    EnumToStringVkQueryType(outputFile, queryType); // VSA
    OutputString(outputFile, " (");
    UnsignedDecimalToString(outputFile, queryType);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryPool queryPool
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "queryPool:                      "); // HRW
    OutputString(outputFile, "VkQueryPool = "); // TEQ
    AddrToString(outputFile, queryPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstQuery
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "firstQuery:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, firstQuery); // UYW
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCompileDeferredNV(device, pipeline, shader)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipeline pipeline
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pipeline:                       "); // HRW
    OutputString(outputFile, "VkPipeline = "); // TEQ
    AddrToString(outputFile, pipeline); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t shader
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "shader:                         "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, shader); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetMemoryHostPointerPropertiesEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    VkExternalMemoryHandleTypeFlagBits          handleType,
    uint64_t                                    pHostPointer,
    StructPointerDecoder<Decoded_VkMemoryHostPointerPropertiesEXT>* pMemoryHostPointerProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetMemoryHostPointerPropertiesEXT(device, handleType, pHostPointer, pMemoryHostPointerProperties)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkExternalMemoryHandleTypeFlagBits handleType
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "handleType:                     "); // HRW
    OutputString(outputFile, "VkExternalMemoryHandleTypeFlagBits = "); // TEQ
    EnumToStringVkExternalMemoryHandleTypeFlagBits(outputFile, handleType); // VSA
    OutputString(outputFile, " (");
    UnsignedDecimalToString(outputFile, handleType);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: const void* pHostPointer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pHostPointer:                   "); // HRW
    OutputString(outputFile, "const void* = "); // TEQ
    if ( !pHostPointer) // WWW
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pHostPointer); // PWR
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkMemoryHostPointerPropertiesEXT* pMemoryHostPointerProperties
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pMemoryHostPointerProperties:   "); // HRW
    OutputString(outputFile, "VkMemoryHostPointerPropertiesEXT* = "); // TEQ
    if (pMemoryHostPointerProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pMemoryHostPointerProperties.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pMemoryHostPointerProperties.GetMetaStructPointer(), indent+1,pMemoryHostPointerProperties.GetAddress()); // GLM
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdWriteBufferMarkerAMD(commandBuffer, pipelineStage, dstBuffer, dstOffset, marker)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineStageFlagBits pipelineStage
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pipelineStage:                  "); // HRW
    OutputString(outputFile, "VkPipelineStageFlagBits = "); // TEQ
    EnumToStringVkPipelineStageFlagBits(outputFile, pipelineStage); // VSA
    OutputString(outputFile, " (");
    UnsignedDecimalToString(outputFile, pipelineStage);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer dstBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "dstBuffer:                      "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    AddrToString(outputFile, dstBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize dstOffset
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "dstOffset:                      "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    SignedDecimalToString(outputFile, dstOffset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t marker
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "marker:                         "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, marker); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    PointerDecoder<uint32_t>*                   pTimeDomainCount,
    PointerDecoder<VkTimeDomainEXT>*            pTimeDomains)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceCalibrateableTimeDomainsEXT(physicalDevice, pTimeDomainCount, pTimeDomains)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pTimeDomainCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pTimeDomainCount:               "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pTimeDomainCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pTimeDomainCount = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pTimeDomainCount.GetPointer(), vinfo_pTimeDomainCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkTimeDomainEXT* pTimeDomains
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pTimeDomains:                   "); // HRW
    OutputString(outputFile, "VkTimeDomainEXT* = "); // TEQ
    if (pTimeDomains.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pTimeDomains.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pTimeDomains = {false, true, false, EnumToStringVkTimeDomainEXT};
        ArrayToString(outputFile, indent, 0, "VkTimeDomainEXT*", &pTimeDomains, "pTimeDomains", *pTimeDomainCount.GetPointer(), vinfo_pTimeDomains); // AUC
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetCalibratedTimestampsEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    timestampCount,
    const StructPointerDecoder<Decoded_VkCalibratedTimestampInfoEXT>& pTimestampInfos,
    PointerDecoder<uint64_t>*                   pTimestamps,
    PointerDecoder<uint64_t>*                   pMaxDeviation)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetCalibratedTimestampsEXT(device, timestampCount, pTimestampInfos, pTimestamps, pMaxDeviation)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t timestampCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "timestampCount:                 "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, timestampCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkCalibratedTimestampInfoEXT* pTimestampInfos
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pTimestampInfos:                "); // HRW
    OutputString(outputFile, "const VkCalibratedTimestampInfoEXT* = "); // TEQ
    if (pTimestampInfos.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pTimestampInfos.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkCalibratedTimestampInfoEXT>(outputFile, indent+1, 1, "VkCalibratedTimestampInfoEXT", pTimestampInfos.GetMetaStructPointer(), "pTimestampInfos", timestampCount, false, pTimestampInfos.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint64_t* pTimestamps
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pTimestamps:                    "); // HRW
    OutputString(outputFile, "uint64_t* = "); // TEQ
    if (pTimestamps.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pTimestamps.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pTimestamps = {false, false, false, nullptr};
        ArrayToString(outputFile, indent, 0, "uint64_t*", &pTimestamps, "pTimestamps", timestampCount, vinfo_pTimestamps); // AUC
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint64_t* pMaxDeviation
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pMaxDeviation:                  "); // HRW
    OutputString(outputFile, "uint64_t* = "); // TEQ
    if (pMaxDeviation.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pMaxDeviation = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pMaxDeviation.GetPointer(), vinfo_pMaxDeviation); // PWS
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdDrawMeshTasksNV(commandBuffer, taskCount, firstTask)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t taskCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "taskCount:                      "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, taskCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstTask
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "firstTask:                      "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, firstTask); // UYW
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdDrawMeshTasksIndirectNV(commandBuffer, buffer, offset, drawCount, stride)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer buffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "buffer:                         "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    AddrToString(outputFile, buffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize offset
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "offset:                         "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    SignedDecimalToString(outputFile, offset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t drawCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "drawCount:                      "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, drawCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t stride
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "stride:                         "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, stride); // UYW
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdDrawMeshTasksIndirectCountNV(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer buffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "buffer:                         "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    AddrToString(outputFile, buffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize offset
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "offset:                         "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    SignedDecimalToString(outputFile, offset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer countBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "countBuffer:                    "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    AddrToString(outputFile, countBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize countBufferOffset
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "countBufferOffset:              "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    SignedDecimalToString(outputFile, countBufferOffset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t maxDrawCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "maxDrawCount:                   "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, maxDrawCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t stride
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "stride:                         "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, stride); // UYW
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdSetExclusiveScissorNV(commandBuffer, firstExclusiveScissor, exclusiveScissorCount, pExclusiveScissors)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstExclusiveScissor
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "firstExclusiveScissor:          "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, firstExclusiveScissor); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t exclusiveScissorCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "exclusiveScissorCount:          "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, exclusiveScissorCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkRect2D* pExclusiveScissors
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pExclusiveScissors:             "); // HRW
    OutputString(outputFile, "const VkRect2D* = "); // TEQ
    if (pExclusiveScissors.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pExclusiveScissors.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkRect2D>(outputFile, indent+1, 1, "VkRect2D", pExclusiveScissors.GetMetaStructPointer(), "pExclusiveScissors", exclusiveScissorCount, false, pExclusiveScissors.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCmdSetCheckpointNV(
    format::HandleId                            commandBuffer,
    uint64_t                                    pCheckpointMarker)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdSetCheckpointNV(commandBuffer, pCheckpointMarker)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const void* pCheckpointMarker
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCheckpointMarker:              "); // HRW
    OutputString(outputFile, "const void* = "); // TEQ
    if ( !pCheckpointMarker) // WWW
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCheckpointMarker); // PWR
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetQueueCheckpointDataNV(
    format::HandleId                            queue,
    PointerDecoder<uint32_t>*                   pCheckpointDataCount,
    StructPointerDecoder<Decoded_VkCheckpointDataNV>* pCheckpointData)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetQueueCheckpointDataNV(queue, pCheckpointDataCount, pCheckpointData)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkQueue queue
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "queue:                          "); // HRW
    OutputString(outputFile, "VkQueue = "); // TEQ
    AddrToString(outputFile, queue); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pCheckpointDataCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCheckpointDataCount:           "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pCheckpointDataCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pCheckpointDataCount = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pCheckpointDataCount.GetPointer(), vinfo_pCheckpointDataCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkCheckpointDataNV* pCheckpointData
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCheckpointData:                "); // HRW
    OutputString(outputFile, "VkCheckpointDataNV* = "); // TEQ
    if (pCheckpointData.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCheckpointData.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkCheckpointDataNV>(outputFile, indent+1, 1, "VkCheckpointDataNV", pCheckpointData.GetMetaStructPointer(), "pCheckpointData", *pCheckpointDataCount.GetPointer(), false, pCheckpointData.GetAddress());  // CCO
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkInitializePerformanceApiINTEL(device, pInitializeInfo)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkInitializePerformanceApiInfoINTEL* pInitializeInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pInitializeInfo:                "); // HRW
    OutputString(outputFile, "const VkInitializePerformanceApiInfoINTEL* = "); // TEQ
    if (pInitializeInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pInitializeInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pInitializeInfo.GetMetaStructPointer(), indent+1,pInitializeInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkUninitializePerformanceApiINTEL(
    format::HandleId                            device)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkUninitializePerformanceApiINTEL(device)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdSetPerformanceMarkerINTEL(
    VkResult                                    returnValue,
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkPerformanceMarkerInfoINTEL>& pMarkerInfo)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdSetPerformanceMarkerINTEL(commandBuffer, pMarkerInfo)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPerformanceMarkerInfoINTEL* pMarkerInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pMarkerInfo:                    "); // HRW
    OutputString(outputFile, "const VkPerformanceMarkerInfoINTEL* = "); // TEQ
    if (pMarkerInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pMarkerInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pMarkerInfo.GetMetaStructPointer(), indent+1,pMarkerInfo.GetAddress()); // GLM
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdSetPerformanceStreamMarkerINTEL(commandBuffer, pMarkerInfo)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPerformanceStreamMarkerInfoINTEL* pMarkerInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pMarkerInfo:                    "); // HRW
    OutputString(outputFile, "const VkPerformanceStreamMarkerInfoINTEL* = "); // TEQ
    if (pMarkerInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pMarkerInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pMarkerInfo.GetMetaStructPointer(), indent+1,pMarkerInfo.GetAddress()); // GLM
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdSetPerformanceOverrideINTEL(commandBuffer, pOverrideInfo)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPerformanceOverrideInfoINTEL* pOverrideInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pOverrideInfo:                  "); // HRW
    OutputString(outputFile, "const VkPerformanceOverrideInfoINTEL* = "); // TEQ
    if (pOverrideInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pOverrideInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pOverrideInfo.GetMetaStructPointer(), indent+1,pOverrideInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkAcquirePerformanceConfigurationINTEL(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkPerformanceConfigurationAcquireInfoINTEL>& pAcquireInfo,
    HandlePointerDecoder<VkPerformanceConfigurationINTEL>* pConfiguration)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkAcquirePerformanceConfigurationINTEL(device, pAcquireInfo, pConfiguration)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPerformanceConfigurationAcquireInfoINTEL* pAcquireInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAcquireInfo:                   "); // HRW
    OutputString(outputFile, "const VkPerformanceConfigurationAcquireInfoINTEL* = "); // TEQ
    if (pAcquireInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAcquireInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAcquireInfo.GetMetaStructPointer(), indent+1,pAcquireInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPerformanceConfigurationINTEL* pConfiguration
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pConfiguration:                 "); // HRW
    OutputString(outputFile, "VkPerformanceConfigurationINTEL* = "); // TEQ
    if (pConfiguration.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pConfiguration = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pConfiguration.GetPointer(), vinfo_pConfiguration); // PWS
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkReleasePerformanceConfigurationINTEL(device, configuration)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPerformanceConfigurationINTEL configuration
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "configuration:                  "); // HRW
    OutputString(outputFile, "VkPerformanceConfigurationINTEL = "); // TEQ
    AddrToString(outputFile, configuration); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkQueueSetPerformanceConfigurationINTEL(
    VkResult                                    returnValue,
    format::HandleId                            queue,
    format::HandleId                            configuration)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkQueueSetPerformanceConfigurationINTEL(queue, configuration)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkQueue queue
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "queue:                          "); // HRW
    OutputString(outputFile, "VkQueue = "); // TEQ
    AddrToString(outputFile, queue); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPerformanceConfigurationINTEL configuration
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "configuration:                  "); // HRW
    OutputString(outputFile, "VkPerformanceConfigurationINTEL = "); // TEQ
    AddrToString(outputFile, configuration); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPerformanceParameterINTEL(
    VkResult                                    returnValue,
    format::HandleId                            device,
    VkPerformanceParameterTypeINTEL             parameter,
    StructPointerDecoder<Decoded_VkPerformanceValueINTEL>* pValue)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPerformanceParameterINTEL(device, parameter, pValue)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPerformanceParameterTypeINTEL parameter
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "parameter:                      "); // HRW
    OutputString(outputFile, "VkPerformanceParameterTypeINTEL = "); // TEQ
    EnumToStringVkPerformanceParameterTypeINTEL(outputFile, parameter); // VSA
    OutputString(outputFile, " (");
    UnsignedDecimalToString(outputFile, parameter);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPerformanceValueINTEL* pValue
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pValue:                         "); // HRW
    OutputString(outputFile, "VkPerformanceValueINTEL* = "); // TEQ
    if (pValue.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pValue.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pValue.GetMetaStructPointer(), indent+1,pValue.GetAddress()); // GLM
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkSetLocalDimmingAMD(device, swapChain, localDimmingEnable)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSwapchainKHR swapChain
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "swapChain:                      "); // HRW
    OutputString(outputFile, "VkSwapchainKHR = "); // TEQ
    AddrToString(outputFile, swapChain); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBool32 localDimmingEnable
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "localDimmingEnable:             "); // HRW
    OutputString(outputFile, "VkBool32 = "); // TEQ
    SignedDecimalToString(outputFile, localDimmingEnable); // EQA
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateImagePipeSurfaceFUCHSIA(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkImagePipeSurfaceCreateInfoFUCHSIA>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreateImagePipeSurfaceFUCHSIA(instance, pCreateInfo, pAllocator, pSurface)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "instance:                       "); // HRW
    OutputString(outputFile, "VkInstance = "); // TEQ
    AddrToString(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImagePipeSurfaceCreateInfoFUCHSIA* pCreateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkImagePipeSurfaceCreateInfoFUCHSIA* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR* pSurface
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSurface:                       "); // HRW
    OutputString(outputFile, "VkSurfaceKHR* = "); // TEQ
    if (pSurface.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pSurface = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pSurface.GetPointer(), vinfo_pSurface); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateMetalSurfaceEXT(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkMetalSurfaceCreateInfoEXT>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreateMetalSurfaceEXT(instance, pCreateInfo, pAllocator, pSurface)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "instance:                       "); // HRW
    OutputString(outputFile, "VkInstance = "); // TEQ
    AddrToString(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkMetalSurfaceCreateInfoEXT* pCreateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkMetalSurfaceCreateInfoEXT* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR* pSurface
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSurface:                       "); // HRW
    OutputString(outputFile, "VkSurfaceKHR* = "); // TEQ
    if (pSurface.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pSurface = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pSurface.GetPointer(), vinfo_pSurface); // PWS
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetBufferDeviceAddressEXT(device, pInfo)");
    fprintf(outputFile, " returns 0x%" PRIx64 ":\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBufferDeviceAddressInfoEXT* pInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pInfo:                          "); // HRW
    OutputString(outputFile, "const VkBufferDeviceAddressInfoEXT* = "); // TEQ
    if (pInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pInfo.GetMetaStructPointer(), indent+1,pInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    PointerDecoder<uint32_t>*                   pPropertyCount,
    StructPointerDecoder<Decoded_VkCooperativeMatrixPropertiesNV>* pProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceCooperativeMatrixPropertiesNV(physicalDevice, pPropertyCount, pProperties)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pPropertyCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pPropertyCount:                 "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pPropertyCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pPropertyCount = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pPropertyCount.GetPointer(), vinfo_pPropertyCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkCooperativeMatrixPropertiesNV* pProperties
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pProperties:                    "); // HRW
    OutputString(outputFile, "VkCooperativeMatrixPropertiesNV* = "); // TEQ
    if (pProperties.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pProperties.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkCooperativeMatrixPropertiesNV>(outputFile, indent+1, 1, "VkCooperativeMatrixPropertiesNV", pProperties.GetMetaStructPointer(), "pProperties", *pPropertyCount.GetPointer(), false, pProperties.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    PointerDecoder<uint32_t>*                   pCombinationCount,
    StructPointerDecoder<Decoded_VkFramebufferMixedSamplesCombinationNV>* pCombinations)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(physicalDevice, pCombinationCount, pCombinations)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pCombinationCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCombinationCount:              "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pCombinationCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pCombinationCount = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pCombinationCount.GetPointer(), vinfo_pCombinationCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFramebufferMixedSamplesCombinationNV* pCombinations
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCombinations:                  "); // HRW
    OutputString(outputFile, "VkFramebufferMixedSamplesCombinationNV* = "); // TEQ
    if (pCombinations.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCombinations.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkFramebufferMixedSamplesCombinationNV>(outputFile, indent+1, 1, "VkFramebufferMixedSamplesCombinationNV", pCombinations.GetMetaStructPointer(), "pCombinations", *pCombinationCount.GetPointer(), false, pCombinations.GetAddress());  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSurfacePresentModes2EXT(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceSurfaceInfo2KHR>& pSurfaceInfo,
    PointerDecoder<uint32_t>*                   pPresentModeCount,
    PointerDecoder<VkPresentModeKHR>*           pPresentModes)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetPhysicalDeviceSurfacePresentModes2EXT(physicalDevice, pSurfaceInfo, pPresentModeCount, pPresentModes)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    AddrToString(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSurfaceInfo:                   "); // HRW
    OutputString(outputFile, "const VkPhysicalDeviceSurfaceInfo2KHR* = "); // TEQ
    if (pSurfaceInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pSurfaceInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pSurfaceInfo.GetMetaStructPointer(), indent+1,pSurfaceInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pPresentModeCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pPresentModeCount:              "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pPresentModeCount.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pPresentModeCount = {false, false, false, nullptr};
        ScalarValueToString(outputFile, pPresentModeCount.GetPointer(), vinfo_pPresentModeCount); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPresentModeKHR* pPresentModes
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pPresentModes:                  "); // HRW
    OutputString(outputFile, "VkPresentModeKHR* = "); // TEQ
    if (pPresentModes.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pPresentModes.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pPresentModes = {false, true, false, EnumToStringVkPresentModeKHR};
        ArrayToString(outputFile, indent, 0, "VkPresentModeKHR*", &pPresentModes, "pPresentModes", *pPresentModeCount.GetPointer(), vinfo_pPresentModes); // AUC
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkAcquireFullScreenExclusiveModeEXT(device, swapchain)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSwapchainKHR swapchain
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "swapchain:                      "); // HRW
    OutputString(outputFile, "VkSwapchainKHR = "); // TEQ
    AddrToString(outputFile, swapchain); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkReleaseFullScreenExclusiveModeEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkReleaseFullScreenExclusiveModeEXT(device, swapchain)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSwapchainKHR swapchain
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "swapchain:                      "); // HRW
    OutputString(outputFile, "VkSwapchainKHR = "); // TEQ
    AddrToString(outputFile, swapchain); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetDeviceGroupSurfacePresentModes2EXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceSurfaceInfo2KHR>& pSurfaceInfo,
    PointerDecoder<VkDeviceGroupPresentModeFlagsKHR>* pModes)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkGetDeviceGroupSurfacePresentModes2EXT(device, pSurfaceInfo, pModes)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSurfaceInfo:                   "); // HRW
    OutputString(outputFile, "const VkPhysicalDeviceSurfaceInfo2KHR* = "); // TEQ
    if (pSurfaceInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pSurfaceInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pSurfaceInfo.GetMetaStructPointer(), indent+1,pSurfaceInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceGroupPresentModeFlagsKHR* pModes
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pModes:                         "); // HRW
    OutputString(outputFile, "VkDeviceGroupPresentModeFlagsKHR* = "); // TEQ
    if (pModes.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pModes = {false, false, true, EnumToStringVkDeviceGroupPresentModeFlagBitsKHR};
        ScalarValueToString(outputFile, pModes.GetPointer(), vinfo_pModes); // PWS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateHeadlessSurfaceEXT(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkHeadlessSurfaceCreateInfoEXT>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCreateHeadlessSurfaceEXT(instance, pCreateInfo, pAllocator, pSurface)");
    fprintf(outputFile, " returns VkResult ");
    EnumToStringVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "instance:                       "); // HRW
    OutputString(outputFile, "VkInstance = "); // TEQ
    AddrToString(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkHeadlessSurfaceCreateInfoEXT* pCreateInfo
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkHeadlessSurfaceCreateInfoEXT* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1,pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        AddrToString(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        StructureToString(outputFile, *pAllocator.GetMetaStructPointer(), indent+1,pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR* pSurface
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "pSurface:                       "); // HRW
    OutputString(outputFile, "VkSurfaceKHR* = "); // TEQ
    if (pSurface.GetPointer() == nullptr) // WWY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        ScalarValueToStringStruct vinfo_pSurface = {true, false, false, nullptr};
        ScalarValueToString(outputFile, pSurface.GetPointer(), vinfo_pSurface); // PWS
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkCmdSetLineStippleEXT(commandBuffer, lineStippleFactor, lineStipplePattern)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    AddrToString(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t lineStippleFactor
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "lineStippleFactor:              "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, lineStippleFactor); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint16_t lineStipplePattern
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "lineStipplePattern:             "); // HRW
    OutputString(outputFile, "uint16_t = "); // TEQ
    UnsignedDecimalToString(outputFile, lineStipplePattern); // UYW
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
    FILE* outputFile = GetFile();
    fprintf(outputFile, "vkResetQueryPoolEXT(device, queryPool, firstQuery, queryCount)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    AddrToString(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryPool queryPool
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "queryPool:                      "); // HRW
    OutputString(outputFile, "VkQueryPool = "); // TEQ
    AddrToString(outputFile, queryPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstQuery
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "firstQuery:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, firstQuery); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t queryCount
    IndentSpaces(outputFile, indent);
    OutputString(outputFile, "queryCount:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    UnsignedDecimalToString(outputFile, queryCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)
