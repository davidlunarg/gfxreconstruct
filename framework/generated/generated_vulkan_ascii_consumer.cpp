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
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreateInstance(pCreateInfo, pAllocator, pInstance)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: const VkInstanceCreateInfo* pCreateInfo
    IndentSpaces(out, indent);
    *out += "pCreateInfo:                    ";
    *out += "const VkInstanceCreateInfo* = "; // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkInstance* pInstance
    IndentSpaces(out, indent);
    *out += "pInstance:                      ";
    *out += "VkInstance* = "; // TEQ
    if (pInstance.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pInstance = {true, false, false, nullptr};
        ScalarValueToString(out, pInstance.GetPointer(), vinfo_pInstance); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkDestroyInstance(
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkDestroyInstance(instance, pAllocator)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkInstance instance
    IndentSpaces(out, indent);
    *out += "instance:                       ";
    *out += "VkInstance = "; // TEQ
    AddrToString(out, instance); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkEnumeratePhysicalDevices(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const PointerDecoder<uint32_t>&             pPhysicalDeviceCount,
    const HandlePointerDecoder<VkPhysicalDevice>& pPhysicalDevices)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkEnumeratePhysicalDevices(instance, pPhysicalDeviceCount, pPhysicalDevices)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkInstance instance
    IndentSpaces(out, indent);
    *out += "instance:                       ";
    *out += "VkInstance = "; // TEQ
    AddrToString(out, instance); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t* pPhysicalDeviceCount
    IndentSpaces(out, indent);
    *out += "pPhysicalDeviceCount:           ";
    *out += "uint32_t* = "; // TEQ
    if (pPhysicalDeviceCount.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pPhysicalDeviceCount = {false, false, false, nullptr};
        ScalarValueToString(out, pPhysicalDeviceCount.GetPointer(), vinfo_pPhysicalDeviceCount); // PWS
    }
    outString += "\n";   // HHS

    // func arg: VkPhysicalDevice* pPhysicalDevices
    IndentSpaces(out, indent);
    *out += "pPhysicalDevices:               ";
    *out += "VkPhysicalDevice* = "; // TEQ
    if (pPhysicalDevices.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pPhysicalDevices.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pPhysicalDevices = {true, false, false, nullptr};
        ArrayToString<HandlePointerDecoder<VkPhysicalDevice>>(out, indent, 1, "VkPhysicalDevice*", &pPhysicalDevices, "pPhysicalDevices", *pPhysicalDeviceCount.GetPointer(),  vinfo_pPhysicalDevices);  // CXC
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceFeatures(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceFeatures>& pFeatures)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceFeatures(physicalDevice, pFeatures)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: VkPhysicalDeviceFeatures* pFeatures
    IndentSpaces(out, indent);
    *out += "pFeatures:                      ";
    *out += "VkPhysicalDeviceFeatures* = "; // TEQ
    if (pFeatures.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pFeatures.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pFeatures.GetMetaStructPointer(), indent+1, pFeatures.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceFormatProperties(
    format::HandleId                            physicalDevice,
    VkFormat                                    format,
    const StructPointerDecoder<Decoded_VkFormatProperties>& pFormatProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceFormatProperties(physicalDevice, format, pFormatProperties)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: VkFormat format
    IndentSpaces(out, indent);
    *out += "format:                         ";
    *out += "VkFormat = "; // TEQ
    EnumToStringVkFormat(out, format); // VSA
    *out += " (";
    UnsignedDecimalToString(out, format);
    *out += ")";
    outString += "\n";   // HHS

    // func arg: VkFormatProperties* pFormatProperties
    IndentSpaces(out, indent);
    *out += "pFormatProperties:              ";
    *out += "VkFormatProperties* = "; // TEQ
    if (pFormatProperties.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pFormatProperties.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pFormatProperties.GetMetaStructPointer(), indent+1, pFormatProperties.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
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
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceImageFormatProperties(physicalDevice, format, type, tiling, usage, flags, pImageFormatProperties)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: VkFormat format
    IndentSpaces(out, indent);
    *out += "format:                         ";
    *out += "VkFormat = "; // TEQ
    EnumToStringVkFormat(out, format); // VSA
    *out += " (";
    UnsignedDecimalToString(out, format);
    *out += ")";
    outString += "\n";   // HHS

    // func arg: VkImageType type
    IndentSpaces(out, indent);
    *out += "type:                           ";
    *out += "VkImageType = "; // TEQ
    EnumToStringVkImageType(out, type); // VSA
    *out += " (";
    UnsignedDecimalToString(out, type);
    *out += ")";
    outString += "\n";   // HHS

    // func arg: VkImageTiling tiling
    IndentSpaces(out, indent);
    *out += "tiling:                         ";
    *out += "VkImageTiling = "; // TEQ
    EnumToStringVkImageTiling(out, tiling); // VSA
    *out += " (";
    UnsignedDecimalToString(out, tiling);
    *out += ")";
    outString += "\n";   // HHS

    // func arg: VkImageUsageFlags usage
    IndentSpaces(out, indent);
    *out += "usage:                          ";
    *out += "VkImageUsageFlags = "; // TEQ
    FlagsToString(out, usage, EnumToStringVkImageUsageFlagBits); // URW
    outString += "\n";   // HHS

    // func arg: VkImageCreateFlags flags
    IndentSpaces(out, indent);
    *out += "flags:                          ";
    *out += "VkImageCreateFlags = "; // TEQ
    FlagsToString(out, flags, EnumToStringVkImageCreateFlagBits); // URW
    outString += "\n";   // HHS

    // func arg: VkImageFormatProperties* pImageFormatProperties
    IndentSpaces(out, indent);
    *out += "pImageFormatProperties:         ";
    *out += "VkImageFormatProperties* = "; // TEQ
    if (pImageFormatProperties.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pImageFormatProperties.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pImageFormatProperties.GetMetaStructPointer(), indent+1, pImageFormatProperties.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceProperties(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceProperties>& pProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceProperties(physicalDevice, pProperties)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: VkPhysicalDeviceProperties* pProperties
    IndentSpaces(out, indent);
    *out += "pProperties:                    ";
    *out += "VkPhysicalDeviceProperties* = "; // TEQ
    if (pProperties.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pProperties.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pProperties.GetMetaStructPointer(), indent+1, pProperties.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceQueueFamilyProperties(
    format::HandleId                            physicalDevice,
    const PointerDecoder<uint32_t>&             pQueueFamilyPropertyCount,
    const StructPointerDecoder<Decoded_VkQueueFamilyProperties>& pQueueFamilyProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceQueueFamilyProperties(physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t* pQueueFamilyPropertyCount
    IndentSpaces(out, indent);
    *out += "pQueueFamilyPropertyCount:      ";
    *out += "uint32_t* = "; // TEQ
    if (pQueueFamilyPropertyCount.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pQueueFamilyPropertyCount = {false, false, false, nullptr};
        ScalarValueToString(out, pQueueFamilyPropertyCount.GetPointer(), vinfo_pQueueFamilyPropertyCount); // PWS
    }
    outString += "\n";   // HHS

    // func arg: VkQueueFamilyProperties* pQueueFamilyProperties
    IndentSpaces(out, indent);
    *out += "pQueueFamilyProperties:         ";
    *out += "VkQueueFamilyProperties* = "; // TEQ
    if (pQueueFamilyProperties.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pQueueFamilyProperties.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkQueueFamilyProperties>(out, indent+1, 1, "VkQueueFamilyProperties", pQueueFamilyProperties.GetMetaStructPointer(), "pQueueFamilyProperties", *pQueueFamilyPropertyCount.GetPointer(), false, pQueueFamilyProperties.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceMemoryProperties(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceMemoryProperties>& pMemoryProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceMemoryProperties(physicalDevice, pMemoryProperties)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: VkPhysicalDeviceMemoryProperties* pMemoryProperties
    IndentSpaces(out, indent);
    *out += "pMemoryProperties:              ";
    *out += "VkPhysicalDeviceMemoryProperties* = "; // TEQ
    if (pMemoryProperties.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pMemoryProperties.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pMemoryProperties.GetMetaStructPointer(), indent+1, pMemoryProperties.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCreateDevice(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkDeviceCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkDevice>&       pDevice)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreateDevice(physicalDevice, pCreateInfo, pAllocator, pDevice)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkDeviceCreateInfo* pCreateInfo
    IndentSpaces(out, indent);
    *out += "pCreateInfo:                    ";
    *out += "const VkDeviceCreateInfo* = "; // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkDevice* pDevice
    IndentSpaces(out, indent);
    *out += "pDevice:                        ";
    *out += "VkDevice* = "; // TEQ
    if (pDevice.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pDevice = {true, false, false, nullptr};
        ScalarValueToString(out, pDevice.GetPointer(), vinfo_pDevice); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkDestroyDevice(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkDestroyDevice(device, pAllocator)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetDeviceQueue(
    format::HandleId                            device,
    uint32_t                                    queueFamilyIndex,
    uint32_t                                    queueIndex,
    const HandlePointerDecoder<VkQueue>&        pQueue)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetDeviceQueue(device, queueFamilyIndex, queueIndex, pQueue)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t queueFamilyIndex
    IndentSpaces(out, indent);
    *out += "queueFamilyIndex:               ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, queueFamilyIndex); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t queueIndex
    IndentSpaces(out, indent);
    *out += "queueIndex:                     ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, queueIndex); // UYW
    outString += "\n";   // HHS

    // func arg: VkQueue* pQueue
    IndentSpaces(out, indent);
    *out += "pQueue:                         ";
    *out += "VkQueue* = "; // TEQ
    if (pQueue.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pQueue = {true, false, false, nullptr};
        ScalarValueToString(out, pQueue.GetPointer(), vinfo_pQueue); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkQueueSubmit(
    VkResult                                    returnValue,
    format::HandleId                            queue,
    uint32_t                                    submitCount,
    const StructPointerDecoder<Decoded_VkSubmitInfo>& pSubmits,
    format::HandleId                            fence)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkQueueSubmit(queue, submitCount, pSubmits, fence)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkQueue queue
    IndentSpaces(out, indent);
    *out += "queue:                          ";
    *out += "VkQueue = "; // TEQ
    AddrToString(out, queue); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t submitCount
    IndentSpaces(out, indent);
    *out += "submitCount:                    ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, submitCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkSubmitInfo* pSubmits
    IndentSpaces(out, indent);
    *out += "pSubmits:                       ";
    *out += "const VkSubmitInfo* = "; // TEQ
    if (pSubmits.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pSubmits.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkSubmitInfo>(out, indent+1, 1, "VkSubmitInfo", pSubmits.GetMetaStructPointer(), "pSubmits", submitCount, false, pSubmits.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    // func arg: VkFence fence
    IndentSpaces(out, indent);
    *out += "fence:                          ";
    *out += "VkFence = "; // TEQ
    AddrToString(out, fence); // PAQ
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkQueueWaitIdle(
    VkResult                                    returnValue,
    format::HandleId                            queue)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkQueueWaitIdle(queue)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkQueue queue
    IndentSpaces(out, indent);
    *out += "queue:                          ";
    *out += "VkQueue = "; // TEQ
    AddrToString(out, queue); // PAQ
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkDeviceWaitIdle(
    VkResult                                    returnValue,
    format::HandleId                            device)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkDeviceWaitIdle(device)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkAllocateMemory(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkMemoryAllocateInfo>& pAllocateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkDeviceMemory>& pMemory)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkAllocateMemory(device, pAllocateInfo, pAllocator, pMemory)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkMemoryAllocateInfo* pAllocateInfo
    IndentSpaces(out, indent);
    *out += "pAllocateInfo:                  ";
    *out += "const VkMemoryAllocateInfo* = "; // TEQ
    if (pAllocateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocateInfo.GetMetaStructPointer(), indent+1, pAllocateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkDeviceMemory* pMemory
    IndentSpaces(out, indent);
    *out += "pMemory:                        ";
    *out += "VkDeviceMemory* = "; // TEQ
    if (pMemory.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pMemory = {true, false, false, nullptr};
        ScalarValueToString(out, pMemory.GetPointer(), vinfo_pMemory); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkFreeMemory(
    format::HandleId                            device,
    format::HandleId                            memory,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkFreeMemory(device, memory, pAllocator)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDeviceMemory memory
    IndentSpaces(out, indent);
    *out += "memory:                         ";
    *out += "VkDeviceMemory = "; // TEQ
    AddrToString(out, memory); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
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
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkMapMemory(device, memory, offset, size, flags, ppData)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDeviceMemory memory
    IndentSpaces(out, indent);
    *out += "memory:                         ";
    *out += "VkDeviceMemory = "; // TEQ
    AddrToString(out, memory); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDeviceSize offset
    IndentSpaces(out, indent);
    *out += "offset:                         ";
    *out += "VkDeviceSize = "; // TEQ
    SignedDecimalToString(out, offset); //EQA
    outString += "\n";   // HHS

    // func arg: VkDeviceSize size
    IndentSpaces(out, indent);
    *out += "size:                           ";
    *out += "VkDeviceSize = "; // TEQ
    SignedDecimalToString(out, size); //EQA
    outString += "\n";   // HHS

    // func arg: VkMemoryMapFlags flags
    IndentSpaces(out, indent);
    *out += "flags:                          ";
    *out += "VkMemoryMapFlags = "; // TEQ
    UnsignedDecimalToString(out, flags); // UYW
    outString += "\n";   // HHS

    // func arg: void** ppData
    IndentSpaces(out, indent);
    *out += "ppData:                         ";
    *out += "void** = "; // TEQ
    if (ppData.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_ppData = {true, false, false, nullptr};
        ScalarValueToString(out, ppData.GetPointer(), vinfo_ppData); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkUnmapMemory(
    format::HandleId                            device,
    format::HandleId                            memory)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkUnmapMemory(device, memory)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDeviceMemory memory
    IndentSpaces(out, indent);
    *out += "memory:                         ";
    *out += "VkDeviceMemory = "; // TEQ
    AddrToString(out, memory); // PAQ
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkFlushMappedMemoryRanges(
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    memoryRangeCount,
    const StructPointerDecoder<Decoded_VkMappedMemoryRange>& pMemoryRanges)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkFlushMappedMemoryRanges(device, memoryRangeCount, pMemoryRanges)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t memoryRangeCount
    IndentSpaces(out, indent);
    *out += "memoryRangeCount:               ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, memoryRangeCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkMappedMemoryRange* pMemoryRanges
    IndentSpaces(out, indent);
    *out += "pMemoryRanges:                  ";
    *out += "const VkMappedMemoryRange* = "; // TEQ
    if (pMemoryRanges.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pMemoryRanges.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkMappedMemoryRange>(out, indent+1, 1, "VkMappedMemoryRange", pMemoryRanges.GetMetaStructPointer(), "pMemoryRanges", memoryRangeCount, false, pMemoryRanges.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkInvalidateMappedMemoryRanges(
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    memoryRangeCount,
    const StructPointerDecoder<Decoded_VkMappedMemoryRange>& pMemoryRanges)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkInvalidateMappedMemoryRanges(device, memoryRangeCount, pMemoryRanges)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t memoryRangeCount
    IndentSpaces(out, indent);
    *out += "memoryRangeCount:               ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, memoryRangeCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkMappedMemoryRange* pMemoryRanges
    IndentSpaces(out, indent);
    *out += "pMemoryRanges:                  ";
    *out += "const VkMappedMemoryRange* = "; // TEQ
    if (pMemoryRanges.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pMemoryRanges.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkMappedMemoryRange>(out, indent+1, 1, "VkMappedMemoryRange", pMemoryRanges.GetMetaStructPointer(), "pMemoryRanges", memoryRangeCount, false, pMemoryRanges.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetDeviceMemoryCommitment(
    format::HandleId                            device,
    format::HandleId                            memory,
    const PointerDecoder<VkDeviceSize>&         pCommittedMemoryInBytes)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetDeviceMemoryCommitment(device, memory, pCommittedMemoryInBytes)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDeviceMemory memory
    IndentSpaces(out, indent);
    *out += "memory:                         ";
    *out += "VkDeviceMemory = "; // TEQ
    AddrToString(out, memory); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDeviceSize* pCommittedMemoryInBytes
    IndentSpaces(out, indent);
    *out += "pCommittedMemoryInBytes:        ";
    *out += "VkDeviceSize* = "; // TEQ
    if (pCommittedMemoryInBytes.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pCommittedMemoryInBytes = {false, false, false, nullptr};
        ScalarValueToString(out, pCommittedMemoryInBytes.GetPointer(), vinfo_pCommittedMemoryInBytes); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkBindBufferMemory(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            buffer,
    format::HandleId                            memory,
    VkDeviceSize                                memoryOffset)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkBindBufferMemory(device, buffer, memory, memoryOffset)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkBuffer buffer
    IndentSpaces(out, indent);
    *out += "buffer:                         ";
    *out += "VkBuffer = "; // TEQ
    AddrToString(out, buffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDeviceMemory memory
    IndentSpaces(out, indent);
    *out += "memory:                         ";
    *out += "VkDeviceMemory = "; // TEQ
    AddrToString(out, memory); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDeviceSize memoryOffset
    IndentSpaces(out, indent);
    *out += "memoryOffset:                   ";
    *out += "VkDeviceSize = "; // TEQ
    SignedDecimalToString(out, memoryOffset); //EQA
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkBindImageMemory(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            image,
    format::HandleId                            memory,
    VkDeviceSize                                memoryOffset)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkBindImageMemory(device, image, memory, memoryOffset)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkImage image
    IndentSpaces(out, indent);
    *out += "image:                          ";
    *out += "VkImage = "; // TEQ
    AddrToString(out, image); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDeviceMemory memory
    IndentSpaces(out, indent);
    *out += "memory:                         ";
    *out += "VkDeviceMemory = "; // TEQ
    AddrToString(out, memory); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDeviceSize memoryOffset
    IndentSpaces(out, indent);
    *out += "memoryOffset:                   ";
    *out += "VkDeviceSize = "; // TEQ
    SignedDecimalToString(out, memoryOffset); //EQA
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetBufferMemoryRequirements(
    format::HandleId                            device,
    format::HandleId                            buffer,
    const StructPointerDecoder<Decoded_VkMemoryRequirements>& pMemoryRequirements)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetBufferMemoryRequirements(device, buffer, pMemoryRequirements)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkBuffer buffer
    IndentSpaces(out, indent);
    *out += "buffer:                         ";
    *out += "VkBuffer = "; // TEQ
    AddrToString(out, buffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkMemoryRequirements* pMemoryRequirements
    IndentSpaces(out, indent);
    *out += "pMemoryRequirements:            ";
    *out += "VkMemoryRequirements* = "; // TEQ
    if (pMemoryRequirements.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pMemoryRequirements.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pMemoryRequirements.GetMetaStructPointer(), indent+1, pMemoryRequirements.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetImageMemoryRequirements(
    format::HandleId                            device,
    format::HandleId                            image,
    const StructPointerDecoder<Decoded_VkMemoryRequirements>& pMemoryRequirements)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetImageMemoryRequirements(device, image, pMemoryRequirements)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkImage image
    IndentSpaces(out, indent);
    *out += "image:                          ";
    *out += "VkImage = "; // TEQ
    AddrToString(out, image); // PAQ
    outString += "\n";   // HHS

    // func arg: VkMemoryRequirements* pMemoryRequirements
    IndentSpaces(out, indent);
    *out += "pMemoryRequirements:            ";
    *out += "VkMemoryRequirements* = "; // TEQ
    if (pMemoryRequirements.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pMemoryRequirements.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pMemoryRequirements.GetMetaStructPointer(), indent+1, pMemoryRequirements.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetImageSparseMemoryRequirements(
    format::HandleId                            device,
    format::HandleId                            image,
    const PointerDecoder<uint32_t>&             pSparseMemoryRequirementCount,
    const StructPointerDecoder<Decoded_VkSparseImageMemoryRequirements>& pSparseMemoryRequirements)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetImageSparseMemoryRequirements(device, image, pSparseMemoryRequirementCount, pSparseMemoryRequirements)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkImage image
    IndentSpaces(out, indent);
    *out += "image:                          ";
    *out += "VkImage = "; // TEQ
    AddrToString(out, image); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t* pSparseMemoryRequirementCount
    IndentSpaces(out, indent);
    *out += "pSparseMemoryRequirementCount:  ";
    *out += "uint32_t* = "; // TEQ
    if (pSparseMemoryRequirementCount.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pSparseMemoryRequirementCount = {false, false, false, nullptr};
        ScalarValueToString(out, pSparseMemoryRequirementCount.GetPointer(), vinfo_pSparseMemoryRequirementCount); // PWS
    }
    outString += "\n";   // HHS

    // func arg: VkSparseImageMemoryRequirements* pSparseMemoryRequirements
    IndentSpaces(out, indent);
    *out += "pSparseMemoryRequirements:      ";
    *out += "VkSparseImageMemoryRequirements* = "; // TEQ
    if (pSparseMemoryRequirements.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pSparseMemoryRequirements.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkSparseImageMemoryRequirements>(out, indent+1, 1, "VkSparseImageMemoryRequirements", pSparseMemoryRequirements.GetMetaStructPointer(), "pSparseMemoryRequirements", *pSparseMemoryRequirementCount.GetPointer(), false, pSparseMemoryRequirements.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
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
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceSparseImageFormatProperties(physicalDevice, format, type, samples, usage, tiling, pPropertyCount, pProperties)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: VkFormat format
    IndentSpaces(out, indent);
    *out += "format:                         ";
    *out += "VkFormat = "; // TEQ
    EnumToStringVkFormat(out, format); // VSA
    *out += " (";
    UnsignedDecimalToString(out, format);
    *out += ")";
    outString += "\n";   // HHS

    // func arg: VkImageType type
    IndentSpaces(out, indent);
    *out += "type:                           ";
    *out += "VkImageType = "; // TEQ
    EnumToStringVkImageType(out, type); // VSA
    *out += " (";
    UnsignedDecimalToString(out, type);
    *out += ")";
    outString += "\n";   // HHS

    // func arg: VkSampleCountFlagBits samples
    IndentSpaces(out, indent);
    *out += "samples:                        ";
    *out += "VkSampleCountFlagBits = "; // TEQ
    EnumToStringVkSampleCountFlagBits(out, samples); // VSA
    *out += " (";
    UnsignedDecimalToString(out, samples);
    *out += ")";
    outString += "\n";   // HHS

    // func arg: VkImageUsageFlags usage
    IndentSpaces(out, indent);
    *out += "usage:                          ";
    *out += "VkImageUsageFlags = "; // TEQ
    FlagsToString(out, usage, EnumToStringVkImageUsageFlagBits); // URW
    outString += "\n";   // HHS

    // func arg: VkImageTiling tiling
    IndentSpaces(out, indent);
    *out += "tiling:                         ";
    *out += "VkImageTiling = "; // TEQ
    EnumToStringVkImageTiling(out, tiling); // VSA
    *out += " (";
    UnsignedDecimalToString(out, tiling);
    *out += ")";
    outString += "\n";   // HHS

    // func arg: uint32_t* pPropertyCount
    IndentSpaces(out, indent);
    *out += "pPropertyCount:                 ";
    *out += "uint32_t* = "; // TEQ
    if (pPropertyCount.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pPropertyCount = {false, false, false, nullptr};
        ScalarValueToString(out, pPropertyCount.GetPointer(), vinfo_pPropertyCount); // PWS
    }
    outString += "\n";   // HHS

    // func arg: VkSparseImageFormatProperties* pProperties
    IndentSpaces(out, indent);
    *out += "pProperties:                    ";
    *out += "VkSparseImageFormatProperties* = "; // TEQ
    if (pProperties.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pProperties.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkSparseImageFormatProperties>(out, indent+1, 1, "VkSparseImageFormatProperties", pProperties.GetMetaStructPointer(), "pProperties", *pPropertyCount.GetPointer(), false, pProperties.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkQueueBindSparse(
    VkResult                                    returnValue,
    format::HandleId                            queue,
    uint32_t                                    bindInfoCount,
    const StructPointerDecoder<Decoded_VkBindSparseInfo>& pBindInfo,
    format::HandleId                            fence)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkQueueBindSparse(queue, bindInfoCount, pBindInfo, fence)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkQueue queue
    IndentSpaces(out, indent);
    *out += "queue:                          ";
    *out += "VkQueue = "; // TEQ
    AddrToString(out, queue); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t bindInfoCount
    IndentSpaces(out, indent);
    *out += "bindInfoCount:                  ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, bindInfoCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkBindSparseInfo* pBindInfo
    IndentSpaces(out, indent);
    *out += "pBindInfo:                      ";
    *out += "const VkBindSparseInfo* = "; // TEQ
    if (pBindInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pBindInfo.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkBindSparseInfo>(out, indent+1, 1, "VkBindSparseInfo", pBindInfo.GetMetaStructPointer(), "pBindInfo", bindInfoCount, false, pBindInfo.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    // func arg: VkFence fence
    IndentSpaces(out, indent);
    *out += "fence:                          ";
    *out += "VkFence = "; // TEQ
    AddrToString(out, fence); // PAQ
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCreateFence(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkFenceCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkFence>&        pFence)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreateFence(device, pCreateInfo, pAllocator, pFence)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkFenceCreateInfo* pCreateInfo
    IndentSpaces(out, indent);
    *out += "pCreateInfo:                    ";
    *out += "const VkFenceCreateInfo* = "; // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkFence* pFence
    IndentSpaces(out, indent);
    *out += "pFence:                         ";
    *out += "VkFence* = "; // TEQ
    if (pFence.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pFence = {true, false, false, nullptr};
        ScalarValueToString(out, pFence.GetPointer(), vinfo_pFence); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkDestroyFence(
    format::HandleId                            device,
    format::HandleId                            fence,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkDestroyFence(device, fence, pAllocator)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkFence fence
    IndentSpaces(out, indent);
    *out += "fence:                          ";
    *out += "VkFence = "; // TEQ
    AddrToString(out, fence); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkResetFences(
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    fenceCount,
    const HandlePointerDecoder<VkFence>&        pFences)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkResetFences(device, fenceCount, pFences)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t fenceCount
    IndentSpaces(out, indent);
    *out += "fenceCount:                     ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, fenceCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkFence* pFences
    IndentSpaces(out, indent);
    *out += "pFences:                        ";
    *out += "const VkFence* = "; // TEQ
    if (pFences.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pFences.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pFences = {true, false, false, nullptr};
        ArrayToString<HandlePointerDecoder<VkFence>>(out, indent, 1, "const VkFence*", &pFences, "pFences", fenceCount,  vinfo_pFences);  // CXC
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetFenceStatus(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            fence)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetFenceStatus(device, fence)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkFence fence
    IndentSpaces(out, indent);
    *out += "fence:                          ";
    *out += "VkFence = "; // TEQ
    AddrToString(out, fence); // PAQ
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkWaitForFences(
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    fenceCount,
    const HandlePointerDecoder<VkFence>&        pFences,
    VkBool32                                    waitAll,
    uint64_t                                    timeout)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkWaitForFences(device, fenceCount, pFences, waitAll, timeout)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t fenceCount
    IndentSpaces(out, indent);
    *out += "fenceCount:                     ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, fenceCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkFence* pFences
    IndentSpaces(out, indent);
    *out += "pFences:                        ";
    *out += "const VkFence* = "; // TEQ
    if (pFences.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pFences.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pFences = {true, false, false, nullptr};
        ArrayToString<HandlePointerDecoder<VkFence>>(out, indent, 1, "const VkFence*", &pFences, "pFences", fenceCount,  vinfo_pFences);  // CXC
    }
    outString += "\n";   // HHS

    // func arg: VkBool32 waitAll
    IndentSpaces(out, indent);
    *out += "waitAll:                        ";
    *out += "VkBool32 = "; // TEQ
    SignedDecimalToString(out, waitAll); //EQA
    outString += "\n";   // HHS

    // func arg: uint64_t timeout
    IndentSpaces(out, indent);
    *out += "timeout:                        ";
    *out += "uint64_t = "; // TEQ
    UnsignedDecimalToString(out, timeout); // UYW
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCreateSemaphore(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSemaphoreCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSemaphore>&    pSemaphore)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreateSemaphore(device, pCreateInfo, pAllocator, pSemaphore)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkSemaphoreCreateInfo* pCreateInfo
    IndentSpaces(out, indent);
    *out += "pCreateInfo:                    ";
    *out += "const VkSemaphoreCreateInfo* = "; // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkSemaphore* pSemaphore
    IndentSpaces(out, indent);
    *out += "pSemaphore:                     ";
    *out += "VkSemaphore* = "; // TEQ
    if (pSemaphore.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pSemaphore = {true, false, false, nullptr};
        ScalarValueToString(out, pSemaphore.GetPointer(), vinfo_pSemaphore); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkDestroySemaphore(
    format::HandleId                            device,
    format::HandleId                            semaphore,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkDestroySemaphore(device, semaphore, pAllocator)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkSemaphore semaphore
    IndentSpaces(out, indent);
    *out += "semaphore:                      ";
    *out += "VkSemaphore = "; // TEQ
    AddrToString(out, semaphore); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCreateEvent(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkEventCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkEvent>&        pEvent)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreateEvent(device, pCreateInfo, pAllocator, pEvent)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkEventCreateInfo* pCreateInfo
    IndentSpaces(out, indent);
    *out += "pCreateInfo:                    ";
    *out += "const VkEventCreateInfo* = "; // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkEvent* pEvent
    IndentSpaces(out, indent);
    *out += "pEvent:                         ";
    *out += "VkEvent* = "; // TEQ
    if (pEvent.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pEvent = {true, false, false, nullptr};
        ScalarValueToString(out, pEvent.GetPointer(), vinfo_pEvent); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkDestroyEvent(
    format::HandleId                            device,
    format::HandleId                            event,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkDestroyEvent(device, event, pAllocator)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkEvent event
    IndentSpaces(out, indent);
    *out += "event:                          ";
    *out += "VkEvent = "; // TEQ
    AddrToString(out, event); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetEventStatus(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            event)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetEventStatus(device, event)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkEvent event
    IndentSpaces(out, indent);
    *out += "event:                          ";
    *out += "VkEvent = "; // TEQ
    AddrToString(out, event); // PAQ
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkSetEvent(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            event)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkSetEvent(device, event)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkEvent event
    IndentSpaces(out, indent);
    *out += "event:                          ";
    *out += "VkEvent = "; // TEQ
    AddrToString(out, event); // PAQ
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkResetEvent(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            event)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkResetEvent(device, event)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkEvent event
    IndentSpaces(out, indent);
    *out += "event:                          ";
    *out += "VkEvent = "; // TEQ
    AddrToString(out, event); // PAQ
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCreateQueryPool(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkQueryPoolCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkQueryPool>&    pQueryPool)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreateQueryPool(device, pCreateInfo, pAllocator, pQueryPool)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkQueryPoolCreateInfo* pCreateInfo
    IndentSpaces(out, indent);
    *out += "pCreateInfo:                    ";
    *out += "const VkQueryPoolCreateInfo* = "; // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkQueryPool* pQueryPool
    IndentSpaces(out, indent);
    *out += "pQueryPool:                     ";
    *out += "VkQueryPool* = "; // TEQ
    if (pQueryPool.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pQueryPool = {true, false, false, nullptr};
        ScalarValueToString(out, pQueryPool.GetPointer(), vinfo_pQueryPool); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkDestroyQueryPool(
    format::HandleId                            device,
    format::HandleId                            queryPool,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkDestroyQueryPool(device, queryPool, pAllocator)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkQueryPool queryPool
    IndentSpaces(out, indent);
    *out += "queryPool:                      ";
    *out += "VkQueryPool = "; // TEQ
    AddrToString(out, queryPool); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
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
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetQueryPoolResults(device, queryPool, firstQuery, queryCount, dataSize, pData, stride, flags)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkQueryPool queryPool
    IndentSpaces(out, indent);
    *out += "queryPool:                      ";
    *out += "VkQueryPool = "; // TEQ
    AddrToString(out, queryPool); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t firstQuery
    IndentSpaces(out, indent);
    *out += "firstQuery:                     ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, firstQuery); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t queryCount
    IndentSpaces(out, indent);
    *out += "queryCount:                     ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, queryCount); // UYW
    outString += "\n";   // HHS

    // func arg: size_t dataSize
    IndentSpaces(out, indent);
    *out += "dataSize:                       ";
    *out += "size_t = "; // TEQ
    UnsignedDecimalToString(out, dataSize); // UYW
    outString += "\n";   // HHS

    // func arg: void* pData
    IndentSpaces(out, indent);
    *out += "pData:                          ";
    *out += "void* = "; // TEQ
    if (pData.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pData.GetAddress()); // AHW
    }
    outString += "\n";   // HHS

    // func arg: VkDeviceSize stride
    IndentSpaces(out, indent);
    *out += "stride:                         ";
    *out += "VkDeviceSize = "; // TEQ
    SignedDecimalToString(out, stride); //EQA
    outString += "\n";   // HHS

    // func arg: VkQueryResultFlags flags
    IndentSpaces(out, indent);
    *out += "flags:                          ";
    *out += "VkQueryResultFlags = "; // TEQ
    FlagsToString(out, flags, EnumToStringVkQueryResultFlagBits); // URW
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCreateBuffer(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkBufferCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkBuffer>&       pBuffer)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreateBuffer(device, pCreateInfo, pAllocator, pBuffer)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkBufferCreateInfo* pCreateInfo
    IndentSpaces(out, indent);
    *out += "pCreateInfo:                    ";
    *out += "const VkBufferCreateInfo* = "; // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkBuffer* pBuffer
    IndentSpaces(out, indent);
    *out += "pBuffer:                        ";
    *out += "VkBuffer* = "; // TEQ
    if (pBuffer.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pBuffer = {true, false, false, nullptr};
        ScalarValueToString(out, pBuffer.GetPointer(), vinfo_pBuffer); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkDestroyBuffer(
    format::HandleId                            device,
    format::HandleId                            buffer,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkDestroyBuffer(device, buffer, pAllocator)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkBuffer buffer
    IndentSpaces(out, indent);
    *out += "buffer:                         ";
    *out += "VkBuffer = "; // TEQ
    AddrToString(out, buffer); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCreateBufferView(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkBufferViewCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkBufferView>&   pView)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreateBufferView(device, pCreateInfo, pAllocator, pView)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkBufferViewCreateInfo* pCreateInfo
    IndentSpaces(out, indent);
    *out += "pCreateInfo:                    ";
    *out += "const VkBufferViewCreateInfo* = "; // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkBufferView* pView
    IndentSpaces(out, indent);
    *out += "pView:                          ";
    *out += "VkBufferView* = "; // TEQ
    if (pView.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, *(static_cast<uint64_t*>(pView.GetPointer()))); // PWA
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkDestroyBufferView(
    format::HandleId                            device,
    format::HandleId                            bufferView,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkDestroyBufferView(device, bufferView, pAllocator)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkBufferView bufferView
    IndentSpaces(out, indent);
    *out += "bufferView:                     ";
    *out += "VkBufferView = "; // TEQ
    AddrToString(out, bufferView); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCreateImage(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImageCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkImage>&        pImage)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreateImage(device, pCreateInfo, pAllocator, pImage)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkImageCreateInfo* pCreateInfo
    IndentSpaces(out, indent);
    *out += "pCreateInfo:                    ";
    *out += "const VkImageCreateInfo* = "; // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkImage* pImage
    IndentSpaces(out, indent);
    *out += "pImage:                         ";
    *out += "VkImage* = "; // TEQ
    if (pImage.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pImage = {true, false, false, nullptr};
        ScalarValueToString(out, pImage.GetPointer(), vinfo_pImage); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkDestroyImage(
    format::HandleId                            device,
    format::HandleId                            image,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkDestroyImage(device, image, pAllocator)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkImage image
    IndentSpaces(out, indent);
    *out += "image:                          ";
    *out += "VkImage = "; // TEQ
    AddrToString(out, image); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetImageSubresourceLayout(
    format::HandleId                            device,
    format::HandleId                            image,
    const StructPointerDecoder<Decoded_VkImageSubresource>& pSubresource,
    const StructPointerDecoder<Decoded_VkSubresourceLayout>& pLayout)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetImageSubresourceLayout(device, image, pSubresource, pLayout)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkImage image
    IndentSpaces(out, indent);
    *out += "image:                          ";
    *out += "VkImage = "; // TEQ
    AddrToString(out, image); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkImageSubresource* pSubresource
    IndentSpaces(out, indent);
    *out += "pSubresource:                   ";
    *out += "const VkImageSubresource* = "; // TEQ
    if (pSubresource.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pSubresource.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pSubresource.GetMetaStructPointer(), indent+1, pSubresource.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkSubresourceLayout* pLayout
    IndentSpaces(out, indent);
    *out += "pLayout:                        ";
    *out += "VkSubresourceLayout* = "; // TEQ
    if (pLayout.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pLayout.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pLayout.GetMetaStructPointer(), indent+1, pLayout.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCreateImageView(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImageViewCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkImageView>&    pView)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreateImageView(device, pCreateInfo, pAllocator, pView)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkImageViewCreateInfo* pCreateInfo
    IndentSpaces(out, indent);
    *out += "pCreateInfo:                    ";
    *out += "const VkImageViewCreateInfo* = "; // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkImageView* pView
    IndentSpaces(out, indent);
    *out += "pView:                          ";
    *out += "VkImageView* = "; // TEQ
    if (pView.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, *(static_cast<uint64_t*>(pView.GetPointer()))); // PWA
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkDestroyImageView(
    format::HandleId                            device,
    format::HandleId                            imageView,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkDestroyImageView(device, imageView, pAllocator)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkImageView imageView
    IndentSpaces(out, indent);
    *out += "imageView:                      ";
    *out += "VkImageView = "; // TEQ
    AddrToString(out, imageView); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCreateShaderModule(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkShaderModuleCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkShaderModule>& pShaderModule)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreateShaderModule(device, pCreateInfo, pAllocator, pShaderModule)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkShaderModuleCreateInfo* pCreateInfo
    IndentSpaces(out, indent);
    *out += "pCreateInfo:                    ";
    *out += "const VkShaderModuleCreateInfo* = "; // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkShaderModule* pShaderModule
    IndentSpaces(out, indent);
    *out += "pShaderModule:                  ";
    *out += "VkShaderModule* = "; // TEQ
    if (pShaderModule.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pShaderModule = {true, false, false, nullptr};
        ScalarValueToString(out, pShaderModule.GetPointer(), vinfo_pShaderModule); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkDestroyShaderModule(
    format::HandleId                            device,
    format::HandleId                            shaderModule,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkDestroyShaderModule(device, shaderModule, pAllocator)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkShaderModule shaderModule
    IndentSpaces(out, indent);
    *out += "shaderModule:                   ";
    *out += "VkShaderModule = "; // TEQ
    AddrToString(out, shaderModule); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCreatePipelineCache(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkPipelineCacheCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkPipelineCache>& pPipelineCache)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreatePipelineCache(device, pCreateInfo, pAllocator, pPipelineCache)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkPipelineCacheCreateInfo* pCreateInfo
    IndentSpaces(out, indent);
    *out += "pCreateInfo:                    ";
    *out += "const VkPipelineCacheCreateInfo* = "; // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkPipelineCache* pPipelineCache
    IndentSpaces(out, indent);
    *out += "pPipelineCache:                 ";
    *out += "VkPipelineCache* = "; // TEQ
    if (pPipelineCache.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pPipelineCache = {true, false, false, nullptr};
        ScalarValueToString(out, pPipelineCache.GetPointer(), vinfo_pPipelineCache); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkDestroyPipelineCache(
    format::HandleId                            device,
    format::HandleId                            pipelineCache,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkDestroyPipelineCache(device, pipelineCache, pAllocator)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkPipelineCache pipelineCache
    IndentSpaces(out, indent);
    *out += "pipelineCache:                  ";
    *out += "VkPipelineCache = "; // TEQ
    AddrToString(out, pipelineCache); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetPipelineCacheData(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            pipelineCache,
    const PointerDecoder<size_t>&               pDataSize,
    const PointerDecoder<uint8_t>&              pData)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPipelineCacheData(device, pipelineCache, pDataSize, pData)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkPipelineCache pipelineCache
    IndentSpaces(out, indent);
    *out += "pipelineCache:                  ";
    *out += "VkPipelineCache = "; // TEQ
    AddrToString(out, pipelineCache); // PAQ
    outString += "\n";   // HHS

    // func arg: size_t* pDataSize
    IndentSpaces(out, indent);
    *out += "pDataSize:                      ";
    *out += "size_t* = "; // TEQ
    if (pDataSize.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pDataSize = {false, false, false, nullptr};
        ScalarValueToString(out, pDataSize.GetPointer(), vinfo_pDataSize); // PWS
    }
    outString += "\n";   // HHS

    // func arg: void* pData
    IndentSpaces(out, indent);
    *out += "pData:                          ";
    *out += "void* = "; // TEQ
    if (pData.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pData.GetAddress()); // AHW
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkMergePipelineCaches(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            dstCache,
    uint32_t                                    srcCacheCount,
    const HandlePointerDecoder<VkPipelineCache>& pSrcCaches)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkMergePipelineCaches(device, dstCache, srcCacheCount, pSrcCaches)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkPipelineCache dstCache
    IndentSpaces(out, indent);
    *out += "dstCache:                       ";
    *out += "VkPipelineCache = "; // TEQ
    AddrToString(out, dstCache); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t srcCacheCount
    IndentSpaces(out, indent);
    *out += "srcCacheCount:                  ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, srcCacheCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkPipelineCache* pSrcCaches
    IndentSpaces(out, indent);
    *out += "pSrcCaches:                     ";
    *out += "const VkPipelineCache* = "; // TEQ
    if (pSrcCaches.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pSrcCaches.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pSrcCaches = {true, false, false, nullptr};
        ArrayToString<HandlePointerDecoder<VkPipelineCache>>(out, indent, 1, "const VkPipelineCache*", &pSrcCaches, "pSrcCaches", srcCacheCount,  vinfo_pSrcCaches);  // CXC
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
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
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreateGraphicsPipelines(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkPipelineCache pipelineCache
    IndentSpaces(out, indent);
    *out += "pipelineCache:                  ";
    *out += "VkPipelineCache = "; // TEQ
    AddrToString(out, pipelineCache); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t createInfoCount
    IndentSpaces(out, indent);
    *out += "createInfoCount:                ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, createInfoCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkGraphicsPipelineCreateInfo* pCreateInfos
    IndentSpaces(out, indent);
    *out += "pCreateInfos:                   ";
    *out += "const VkGraphicsPipelineCreateInfo* = "; // TEQ
    if (pCreateInfos.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfos.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkGraphicsPipelineCreateInfo>(out, indent+1, 1, "VkGraphicsPipelineCreateInfo", pCreateInfos.GetMetaStructPointer(), "pCreateInfos", createInfoCount, false, pCreateInfos.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkPipeline* pPipelines
    IndentSpaces(out, indent);
    *out += "pPipelines:                     ";
    *out += "VkPipeline* = "; // TEQ
    if (pPipelines.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pPipelines.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pPipelines = {true, false, false, nullptr};
        ArrayToString<HandlePointerDecoder<VkPipeline>>(out, indent, 1, "VkPipeline*", &pPipelines, "pPipelines", createInfoCount,  vinfo_pPipelines);  // CXC
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
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
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreateComputePipelines(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkPipelineCache pipelineCache
    IndentSpaces(out, indent);
    *out += "pipelineCache:                  ";
    *out += "VkPipelineCache = "; // TEQ
    AddrToString(out, pipelineCache); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t createInfoCount
    IndentSpaces(out, indent);
    *out += "createInfoCount:                ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, createInfoCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkComputePipelineCreateInfo* pCreateInfos
    IndentSpaces(out, indent);
    *out += "pCreateInfos:                   ";
    *out += "const VkComputePipelineCreateInfo* = "; // TEQ
    if (pCreateInfos.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfos.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkComputePipelineCreateInfo>(out, indent+1, 1, "VkComputePipelineCreateInfo", pCreateInfos.GetMetaStructPointer(), "pCreateInfos", createInfoCount, false, pCreateInfos.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkPipeline* pPipelines
    IndentSpaces(out, indent);
    *out += "pPipelines:                     ";
    *out += "VkPipeline* = "; // TEQ
    if (pPipelines.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pPipelines.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pPipelines = {true, false, false, nullptr};
        ArrayToString<HandlePointerDecoder<VkPipeline>>(out, indent, 1, "VkPipeline*", &pPipelines, "pPipelines", createInfoCount,  vinfo_pPipelines);  // CXC
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkDestroyPipeline(
    format::HandleId                            device,
    format::HandleId                            pipeline,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkDestroyPipeline(device, pipeline, pAllocator)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkPipeline pipeline
    IndentSpaces(out, indent);
    *out += "pipeline:                       ";
    *out += "VkPipeline = "; // TEQ
    AddrToString(out, pipeline); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCreatePipelineLayout(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkPipelineLayoutCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkPipelineLayout>& pPipelineLayout)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreatePipelineLayout(device, pCreateInfo, pAllocator, pPipelineLayout)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkPipelineLayoutCreateInfo* pCreateInfo
    IndentSpaces(out, indent);
    *out += "pCreateInfo:                    ";
    *out += "const VkPipelineLayoutCreateInfo* = "; // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkPipelineLayout* pPipelineLayout
    IndentSpaces(out, indent);
    *out += "pPipelineLayout:                ";
    *out += "VkPipelineLayout* = "; // TEQ
    if (pPipelineLayout.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pPipelineLayout = {true, false, false, nullptr};
        ScalarValueToString(out, pPipelineLayout.GetPointer(), vinfo_pPipelineLayout); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkDestroyPipelineLayout(
    format::HandleId                            device,
    format::HandleId                            pipelineLayout,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkDestroyPipelineLayout(device, pipelineLayout, pAllocator)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkPipelineLayout pipelineLayout
    IndentSpaces(out, indent);
    *out += "pipelineLayout:                 ";
    *out += "VkPipelineLayout = "; // TEQ
    AddrToString(out, pipelineLayout); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCreateSampler(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSamplerCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSampler>&      pSampler)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreateSampler(device, pCreateInfo, pAllocator, pSampler)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkSamplerCreateInfo* pCreateInfo
    IndentSpaces(out, indent);
    *out += "pCreateInfo:                    ";
    *out += "const VkSamplerCreateInfo* = "; // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkSampler* pSampler
    IndentSpaces(out, indent);
    *out += "pSampler:                       ";
    *out += "VkSampler* = "; // TEQ
    if (pSampler.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pSampler = {true, false, false, nullptr};
        ScalarValueToString(out, pSampler.GetPointer(), vinfo_pSampler); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkDestroySampler(
    format::HandleId                            device,
    format::HandleId                            sampler,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkDestroySampler(device, sampler, pAllocator)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkSampler sampler
    IndentSpaces(out, indent);
    *out += "sampler:                        ";
    *out += "VkSampler = "; // TEQ
    AddrToString(out, sampler); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCreateDescriptorSetLayout(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDescriptorSetLayoutCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkDescriptorSetLayout>& pSetLayout)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreateDescriptorSetLayout(device, pCreateInfo, pAllocator, pSetLayout)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkDescriptorSetLayoutCreateInfo* pCreateInfo
    IndentSpaces(out, indent);
    *out += "pCreateInfo:                    ";
    *out += "const VkDescriptorSetLayoutCreateInfo* = "; // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkDescriptorSetLayout* pSetLayout
    IndentSpaces(out, indent);
    *out += "pSetLayout:                     ";
    *out += "VkDescriptorSetLayout* = "; // TEQ
    if (pSetLayout.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pSetLayout = {true, false, false, nullptr};
        ScalarValueToString(out, pSetLayout.GetPointer(), vinfo_pSetLayout); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkDestroyDescriptorSetLayout(
    format::HandleId                            device,
    format::HandleId                            descriptorSetLayout,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkDestroyDescriptorSetLayout(device, descriptorSetLayout, pAllocator)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDescriptorSetLayout descriptorSetLayout
    IndentSpaces(out, indent);
    *out += "descriptorSetLayout:            ";
    *out += "VkDescriptorSetLayout = "; // TEQ
    AddrToString(out, descriptorSetLayout); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCreateDescriptorPool(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDescriptorPoolCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkDescriptorPool>& pDescriptorPool)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreateDescriptorPool(device, pCreateInfo, pAllocator, pDescriptorPool)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkDescriptorPoolCreateInfo* pCreateInfo
    IndentSpaces(out, indent);
    *out += "pCreateInfo:                    ";
    *out += "const VkDescriptorPoolCreateInfo* = "; // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkDescriptorPool* pDescriptorPool
    IndentSpaces(out, indent);
    *out += "pDescriptorPool:                ";
    *out += "VkDescriptorPool* = "; // TEQ
    if (pDescriptorPool.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pDescriptorPool = {true, false, false, nullptr};
        ScalarValueToString(out, pDescriptorPool.GetPointer(), vinfo_pDescriptorPool); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkDestroyDescriptorPool(
    format::HandleId                            device,
    format::HandleId                            descriptorPool,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkDestroyDescriptorPool(device, descriptorPool, pAllocator)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDescriptorPool descriptorPool
    IndentSpaces(out, indent);
    *out += "descriptorPool:                 ";
    *out += "VkDescriptorPool = "; // TEQ
    AddrToString(out, descriptorPool); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkResetDescriptorPool(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            descriptorPool,
    VkDescriptorPoolResetFlags                  flags)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkResetDescriptorPool(device, descriptorPool, flags)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDescriptorPool descriptorPool
    IndentSpaces(out, indent);
    *out += "descriptorPool:                 ";
    *out += "VkDescriptorPool = "; // TEQ
    AddrToString(out, descriptorPool); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDescriptorPoolResetFlags flags
    IndentSpaces(out, indent);
    *out += "flags:                          ";
    *out += "VkDescriptorPoolResetFlags = "; // TEQ
    UnsignedDecimalToString(out, flags); // UYW
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkAllocateDescriptorSets(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDescriptorSetAllocateInfo>& pAllocateInfo,
    const HandlePointerDecoder<VkDescriptorSet>& pDescriptorSets)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkAllocateDescriptorSets(device, pAllocateInfo, pDescriptorSets)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkDescriptorSetAllocateInfo* pAllocateInfo
    IndentSpaces(out, indent);
    *out += "pAllocateInfo:                  ";
    *out += "const VkDescriptorSetAllocateInfo* = "; // TEQ
    if (pAllocateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocateInfo.GetMetaStructPointer(), indent+1, pAllocateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkDescriptorSet* pDescriptorSets
    IndentSpaces(out, indent);
    *out += "pDescriptorSets:                ";
    *out += "VkDescriptorSet* = "; // TEQ
    if (pDescriptorSets.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pDescriptorSets.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pDescriptorSets = {true, false, false, nullptr};
        ArrayToString<HandlePointerDecoder<VkDescriptorSet>>(out, indent, 1, "VkDescriptorSet*", &pDescriptorSets, "pDescriptorSets", pAllocateInfo.GetPointer()->descriptorSetCount,  vinfo_pDescriptorSets);  // CXC
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkFreeDescriptorSets(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            descriptorPool,
    uint32_t                                    descriptorSetCount,
    const HandlePointerDecoder<VkDescriptorSet>& pDescriptorSets)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkFreeDescriptorSets(device, descriptorPool, descriptorSetCount, pDescriptorSets)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDescriptorPool descriptorPool
    IndentSpaces(out, indent);
    *out += "descriptorPool:                 ";
    *out += "VkDescriptorPool = "; // TEQ
    AddrToString(out, descriptorPool); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t descriptorSetCount
    IndentSpaces(out, indent);
    *out += "descriptorSetCount:             ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, descriptorSetCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkDescriptorSet* pDescriptorSets
    IndentSpaces(out, indent);
    *out += "pDescriptorSets:                ";
    *out += "const VkDescriptorSet* = "; // TEQ
    if (pDescriptorSets.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pDescriptorSets.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pDescriptorSets = {true, false, false, nullptr};
        ArrayToString<HandlePointerDecoder<VkDescriptorSet>>(out, indent, 1, "const VkDescriptorSet*", &pDescriptorSets, "pDescriptorSets", descriptorSetCount,  vinfo_pDescriptorSets);  // CXC
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkUpdateDescriptorSets(
    format::HandleId                            device,
    uint32_t                                    descriptorWriteCount,
    const StructPointerDecoder<Decoded_VkWriteDescriptorSet>& pDescriptorWrites,
    uint32_t                                    descriptorCopyCount,
    const StructPointerDecoder<Decoded_VkCopyDescriptorSet>& pDescriptorCopies)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkUpdateDescriptorSets(device, descriptorWriteCount, pDescriptorWrites, descriptorCopyCount, pDescriptorCopies)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t descriptorWriteCount
    IndentSpaces(out, indent);
    *out += "descriptorWriteCount:           ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, descriptorWriteCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkWriteDescriptorSet* pDescriptorWrites
    IndentSpaces(out, indent);
    *out += "pDescriptorWrites:              ";
    *out += "const VkWriteDescriptorSet* = "; // TEQ
    if (pDescriptorWrites.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pDescriptorWrites.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkWriteDescriptorSet>(out, indent+1, 1, "VkWriteDescriptorSet", pDescriptorWrites.GetMetaStructPointer(), "pDescriptorWrites", descriptorWriteCount, false, pDescriptorWrites.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    // func arg: uint32_t descriptorCopyCount
    IndentSpaces(out, indent);
    *out += "descriptorCopyCount:            ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, descriptorCopyCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkCopyDescriptorSet* pDescriptorCopies
    IndentSpaces(out, indent);
    *out += "pDescriptorCopies:              ";
    *out += "const VkCopyDescriptorSet* = "; // TEQ
    if (pDescriptorCopies.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pDescriptorCopies.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkCopyDescriptorSet>(out, indent+1, 1, "VkCopyDescriptorSet", pDescriptorCopies.GetMetaStructPointer(), "pDescriptorCopies", descriptorCopyCount, false, pDescriptorCopies.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCreateFramebuffer(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkFramebufferCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkFramebuffer>&  pFramebuffer)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreateFramebuffer(device, pCreateInfo, pAllocator, pFramebuffer)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkFramebufferCreateInfo* pCreateInfo
    IndentSpaces(out, indent);
    *out += "pCreateInfo:                    ";
    *out += "const VkFramebufferCreateInfo* = "; // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkFramebuffer* pFramebuffer
    IndentSpaces(out, indent);
    *out += "pFramebuffer:                   ";
    *out += "VkFramebuffer* = "; // TEQ
    if (pFramebuffer.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pFramebuffer = {true, false, false, nullptr};
        ScalarValueToString(out, pFramebuffer.GetPointer(), vinfo_pFramebuffer); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkDestroyFramebuffer(
    format::HandleId                            device,
    format::HandleId                            framebuffer,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkDestroyFramebuffer(device, framebuffer, pAllocator)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkFramebuffer framebuffer
    IndentSpaces(out, indent);
    *out += "framebuffer:                    ";
    *out += "VkFramebuffer = "; // TEQ
    AddrToString(out, framebuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCreateRenderPass(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkRenderPassCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkRenderPass>&   pRenderPass)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreateRenderPass(device, pCreateInfo, pAllocator, pRenderPass)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkRenderPassCreateInfo* pCreateInfo
    IndentSpaces(out, indent);
    *out += "pCreateInfo:                    ";
    *out += "const VkRenderPassCreateInfo* = "; // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkRenderPass* pRenderPass
    IndentSpaces(out, indent);
    *out += "pRenderPass:                    ";
    *out += "VkRenderPass* = "; // TEQ
    if (pRenderPass.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pRenderPass = {true, false, false, nullptr};
        ScalarValueToString(out, pRenderPass.GetPointer(), vinfo_pRenderPass); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkDestroyRenderPass(
    format::HandleId                            device,
    format::HandleId                            renderPass,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkDestroyRenderPass(device, renderPass, pAllocator)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkRenderPass renderPass
    IndentSpaces(out, indent);
    *out += "renderPass:                     ";
    *out += "VkRenderPass = "; // TEQ
    AddrToString(out, renderPass); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetRenderAreaGranularity(
    format::HandleId                            device,
    format::HandleId                            renderPass,
    const StructPointerDecoder<Decoded_VkExtent2D>& pGranularity)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetRenderAreaGranularity(device, renderPass, pGranularity)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkRenderPass renderPass
    IndentSpaces(out, indent);
    *out += "renderPass:                     ";
    *out += "VkRenderPass = "; // TEQ
    AddrToString(out, renderPass); // PAQ
    outString += "\n";   // HHS

    // func arg: VkExtent2D* pGranularity
    IndentSpaces(out, indent);
    *out += "pGranularity:                   ";
    *out += "VkExtent2D* = "; // TEQ
    if (pGranularity.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pGranularity.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pGranularity.GetMetaStructPointer(), indent+1, pGranularity.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCreateCommandPool(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkCommandPoolCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkCommandPool>&  pCommandPool)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreateCommandPool(device, pCreateInfo, pAllocator, pCommandPool)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkCommandPoolCreateInfo* pCreateInfo
    IndentSpaces(out, indent);
    *out += "pCreateInfo:                    ";
    *out += "const VkCommandPoolCreateInfo* = "; // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkCommandPool* pCommandPool
    IndentSpaces(out, indent);
    *out += "pCommandPool:                   ";
    *out += "VkCommandPool* = "; // TEQ
    if (pCommandPool.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pCommandPool = {true, false, false, nullptr};
        ScalarValueToString(out, pCommandPool.GetPointer(), vinfo_pCommandPool); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkDestroyCommandPool(
    format::HandleId                            device,
    format::HandleId                            commandPool,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkDestroyCommandPool(device, commandPool, pAllocator)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkCommandPool commandPool
    IndentSpaces(out, indent);
    *out += "commandPool:                    ";
    *out += "VkCommandPool = "; // TEQ
    AddrToString(out, commandPool); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkResetCommandPool(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            commandPool,
    VkCommandPoolResetFlags                     flags)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkResetCommandPool(device, commandPool, flags)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkCommandPool commandPool
    IndentSpaces(out, indent);
    *out += "commandPool:                    ";
    *out += "VkCommandPool = "; // TEQ
    AddrToString(out, commandPool); // PAQ
    outString += "\n";   // HHS

    // func arg: VkCommandPoolResetFlags flags
    IndentSpaces(out, indent);
    *out += "flags:                          ";
    *out += "VkCommandPoolResetFlags = "; // TEQ
    FlagsToString(out, flags, EnumToStringVkCommandPoolResetFlagBits); // URW
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkAllocateCommandBuffers(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkCommandBufferAllocateInfo>& pAllocateInfo,
    const HandlePointerDecoder<VkCommandBuffer>& pCommandBuffers)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkAllocateCommandBuffers(device, pAllocateInfo, pCommandBuffers)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkCommandBufferAllocateInfo* pAllocateInfo
    IndentSpaces(out, indent);
    *out += "pAllocateInfo:                  ";
    *out += "const VkCommandBufferAllocateInfo* = "; // TEQ
    if (pAllocateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocateInfo.GetMetaStructPointer(), indent+1, pAllocateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkCommandBuffer* pCommandBuffers
    IndentSpaces(out, indent);
    *out += "pCommandBuffers:                ";
    *out += "VkCommandBuffer* = "; // TEQ
    if (pCommandBuffers.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCommandBuffers.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pCommandBuffers = {true, false, false, nullptr};
        ArrayToString<HandlePointerDecoder<VkCommandBuffer>>(out, indent, 1, "VkCommandBuffer*", &pCommandBuffers, "pCommandBuffers", pAllocateInfo.GetPointer()->commandBufferCount,  vinfo_pCommandBuffers);  // CXC
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkFreeCommandBuffers(
    format::HandleId                            device,
    format::HandleId                            commandPool,
    uint32_t                                    commandBufferCount,
    const HandlePointerDecoder<VkCommandBuffer>& pCommandBuffers)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkFreeCommandBuffers(device, commandPool, commandBufferCount, pCommandBuffers)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkCommandPool commandPool
    IndentSpaces(out, indent);
    *out += "commandPool:                    ";
    *out += "VkCommandPool = "; // TEQ
    AddrToString(out, commandPool); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t commandBufferCount
    IndentSpaces(out, indent);
    *out += "commandBufferCount:             ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, commandBufferCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkCommandBuffer* pCommandBuffers
    IndentSpaces(out, indent);
    *out += "pCommandBuffers:                ";
    *out += "const VkCommandBuffer* = "; // TEQ
    if (pCommandBuffers.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCommandBuffers.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pCommandBuffers = {true, false, false, nullptr};
        ArrayToString<HandlePointerDecoder<VkCommandBuffer>>(out, indent, 1, "const VkCommandBuffer*", &pCommandBuffers, "pCommandBuffers", commandBufferCount,  vinfo_pCommandBuffers);  // CXC
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkBeginCommandBuffer(
    VkResult                                    returnValue,
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkCommandBufferBeginInfo>& pBeginInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkBeginCommandBuffer(commandBuffer, pBeginInfo)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkCommandBufferBeginInfo* pBeginInfo
    IndentSpaces(out, indent);
    *out += "pBeginInfo:                     ";
    *out += "const VkCommandBufferBeginInfo* = "; // TEQ
    if (pBeginInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pBeginInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pBeginInfo.GetMetaStructPointer(), indent+1, pBeginInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkEndCommandBuffer(
    VkResult                                    returnValue,
    format::HandleId                            commandBuffer)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkEndCommandBuffer(commandBuffer)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkResetCommandBuffer(
    VkResult                                    returnValue,
    format::HandleId                            commandBuffer,
    VkCommandBufferResetFlags                   flags)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkResetCommandBuffer(commandBuffer, flags)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkCommandBufferResetFlags flags
    IndentSpaces(out, indent);
    *out += "flags:                          ";
    *out += "VkCommandBufferResetFlags = "; // TEQ
    FlagsToString(out, flags, EnumToStringVkCommandBufferResetFlagBits); // URW
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdBindPipeline(
    format::HandleId                            commandBuffer,
    VkPipelineBindPoint                         pipelineBindPoint,
    format::HandleId                            pipeline)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdBindPipeline(commandBuffer, pipelineBindPoint, pipeline)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkPipelineBindPoint pipelineBindPoint
    IndentSpaces(out, indent);
    *out += "pipelineBindPoint:              ";
    *out += "VkPipelineBindPoint = "; // TEQ
    EnumToStringVkPipelineBindPoint(out, pipelineBindPoint); // VSA
    *out += " (";
    UnsignedDecimalToString(out, pipelineBindPoint);
    *out += ")";
    outString += "\n";   // HHS

    // func arg: VkPipeline pipeline
    IndentSpaces(out, indent);
    *out += "pipeline:                       ";
    *out += "VkPipeline = "; // TEQ
    AddrToString(out, pipeline); // PAQ
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdSetViewport(
    format::HandleId                            commandBuffer,
    uint32_t                                    firstViewport,
    uint32_t                                    viewportCount,
    const StructPointerDecoder<Decoded_VkViewport>& pViewports)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdSetViewport(commandBuffer, firstViewport, viewportCount, pViewports)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t firstViewport
    IndentSpaces(out, indent);
    *out += "firstViewport:                  ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, firstViewport); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t viewportCount
    IndentSpaces(out, indent);
    *out += "viewportCount:                  ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, viewportCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkViewport* pViewports
    IndentSpaces(out, indent);
    *out += "pViewports:                     ";
    *out += "const VkViewport* = "; // TEQ
    if (pViewports.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pViewports.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkViewport>(out, indent+1, 1, "VkViewport", pViewports.GetMetaStructPointer(), "pViewports", viewportCount, false, pViewports.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdSetScissor(
    format::HandleId                            commandBuffer,
    uint32_t                                    firstScissor,
    uint32_t                                    scissorCount,
    const StructPointerDecoder<Decoded_VkRect2D>& pScissors)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdSetScissor(commandBuffer, firstScissor, scissorCount, pScissors)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t firstScissor
    IndentSpaces(out, indent);
    *out += "firstScissor:                   ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, firstScissor); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t scissorCount
    IndentSpaces(out, indent);
    *out += "scissorCount:                   ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, scissorCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkRect2D* pScissors
    IndentSpaces(out, indent);
    *out += "pScissors:                      ";
    *out += "const VkRect2D* = "; // TEQ
    if (pScissors.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pScissors.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkRect2D>(out, indent+1, 1, "VkRect2D", pScissors.GetMetaStructPointer(), "pScissors", scissorCount, false, pScissors.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdSetLineWidth(
    format::HandleId                            commandBuffer,
    float                                       lineWidth)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdSetLineWidth(commandBuffer, lineWidth)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: float lineWidth
    IndentSpaces(out, indent);
    *out += "lineWidth:                      ";
    *out += "float = "; // TEQ
    DoubleToString(out, lineWidth); // PEZ
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdSetDepthBias(
    format::HandleId                            commandBuffer,
    float                                       depthBiasConstantFactor,
    float                                       depthBiasClamp,
    float                                       depthBiasSlopeFactor)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdSetDepthBias(commandBuffer, depthBiasConstantFactor, depthBiasClamp, depthBiasSlopeFactor)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: float depthBiasConstantFactor
    IndentSpaces(out, indent);
    *out += "depthBiasConstantFactor:        ";
    *out += "float = "; // TEQ
    DoubleToString(out, depthBiasConstantFactor); // PEZ
    outString += "\n";   // HHS

    // func arg: float depthBiasClamp
    IndentSpaces(out, indent);
    *out += "depthBiasClamp:                 ";
    *out += "float = "; // TEQ
    DoubleToString(out, depthBiasClamp); // PEZ
    outString += "\n";   // HHS

    // func arg: float depthBiasSlopeFactor
    IndentSpaces(out, indent);
    *out += "depthBiasSlopeFactor:           ";
    *out += "float = "; // TEQ
    DoubleToString(out, depthBiasSlopeFactor); // PEZ
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdSetBlendConstants(
    format::HandleId                            commandBuffer,
    const PointerDecoder<float>&                blendConstants)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdSetBlendConstants(commandBuffer, blendConstants)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: const float blendConstants
    IndentSpaces(out, indent);
    *out += "blendConstants:                 ";
    *out += "float[";
    *out += "4"; // TPK
    *out += "] = ";
    ScalarValueToStringStruct vinfo_blendConstants = {false, false, false, nullptr};
    ArrayOfScalarsToString<float>(out, indent, 0, "const float", blendConstants.GetPointer(), "blendConstants", 4, vinfo_blendConstants); // JPA
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdSetDepthBounds(
    format::HandleId                            commandBuffer,
    float                                       minDepthBounds,
    float                                       maxDepthBounds)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdSetDepthBounds(commandBuffer, minDepthBounds, maxDepthBounds)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: float minDepthBounds
    IndentSpaces(out, indent);
    *out += "minDepthBounds:                 ";
    *out += "float = "; // TEQ
    DoubleToString(out, minDepthBounds); // PEZ
    outString += "\n";   // HHS

    // func arg: float maxDepthBounds
    IndentSpaces(out, indent);
    *out += "maxDepthBounds:                 ";
    *out += "float = "; // TEQ
    DoubleToString(out, maxDepthBounds); // PEZ
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdSetStencilCompareMask(
    format::HandleId                            commandBuffer,
    VkStencilFaceFlags                          faceMask,
    uint32_t                                    compareMask)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdSetStencilCompareMask(commandBuffer, faceMask, compareMask)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkStencilFaceFlags faceMask
    IndentSpaces(out, indent);
    *out += "faceMask:                       ";
    *out += "VkStencilFaceFlags = "; // TEQ
    FlagsToString(out, faceMask, EnumToStringVkStencilFaceFlagBits); // URW
    outString += "\n";   // HHS

    // func arg: uint32_t compareMask
    IndentSpaces(out, indent);
    *out += "compareMask:                    ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, compareMask); // UYW
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdSetStencilWriteMask(
    format::HandleId                            commandBuffer,
    VkStencilFaceFlags                          faceMask,
    uint32_t                                    writeMask)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdSetStencilWriteMask(commandBuffer, faceMask, writeMask)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkStencilFaceFlags faceMask
    IndentSpaces(out, indent);
    *out += "faceMask:                       ";
    *out += "VkStencilFaceFlags = "; // TEQ
    FlagsToString(out, faceMask, EnumToStringVkStencilFaceFlagBits); // URW
    outString += "\n";   // HHS

    // func arg: uint32_t writeMask
    IndentSpaces(out, indent);
    *out += "writeMask:                      ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, writeMask); // UYW
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdSetStencilReference(
    format::HandleId                            commandBuffer,
    VkStencilFaceFlags                          faceMask,
    uint32_t                                    reference)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdSetStencilReference(commandBuffer, faceMask, reference)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkStencilFaceFlags faceMask
    IndentSpaces(out, indent);
    *out += "faceMask:                       ";
    *out += "VkStencilFaceFlags = "; // TEQ
    FlagsToString(out, faceMask, EnumToStringVkStencilFaceFlagBits); // URW
    outString += "\n";   // HHS

    // func arg: uint32_t reference
    IndentSpaces(out, indent);
    *out += "reference:                      ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, reference); // UYW
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
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
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdBindDescriptorSets(commandBuffer, pipelineBindPoint, layout, firstSet, descriptorSetCount, pDescriptorSets, dynamicOffsetCount, pDynamicOffsets)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkPipelineBindPoint pipelineBindPoint
    IndentSpaces(out, indent);
    *out += "pipelineBindPoint:              ";
    *out += "VkPipelineBindPoint = "; // TEQ
    EnumToStringVkPipelineBindPoint(out, pipelineBindPoint); // VSA
    *out += " (";
    UnsignedDecimalToString(out, pipelineBindPoint);
    *out += ")";
    outString += "\n";   // HHS

    // func arg: VkPipelineLayout layout
    IndentSpaces(out, indent);
    *out += "layout:                         ";
    *out += "VkPipelineLayout = "; // TEQ
    AddrToString(out, layout); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t firstSet
    IndentSpaces(out, indent);
    *out += "firstSet:                       ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, firstSet); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t descriptorSetCount
    IndentSpaces(out, indent);
    *out += "descriptorSetCount:             ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, descriptorSetCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkDescriptorSet* pDescriptorSets
    IndentSpaces(out, indent);
    *out += "pDescriptorSets:                ";
    *out += "const VkDescriptorSet* = "; // TEQ
    if (pDescriptorSets.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pDescriptorSets.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pDescriptorSets = {true, false, false, nullptr};
        ArrayToString<HandlePointerDecoder<VkDescriptorSet>>(out, indent, 1, "const VkDescriptorSet*", &pDescriptorSets, "pDescriptorSets", descriptorSetCount,  vinfo_pDescriptorSets);  // CXC
    }
    outString += "\n";   // HHS

    // func arg: uint32_t dynamicOffsetCount
    IndentSpaces(out, indent);
    *out += "dynamicOffsetCount:             ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, dynamicOffsetCount); // UYW
    outString += "\n";   // HHS

    // func arg: const uint32_t* pDynamicOffsets
    IndentSpaces(out, indent);
    *out += "pDynamicOffsets:                ";
    *out += "const uint32_t* = "; // TEQ
    if (pDynamicOffsets.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pDynamicOffsets.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pDynamicOffsets = {false, false, false, nullptr};
        ArrayToString<PointerDecoder<uint32_t>>(out, indent, 1, "const uint32_t*", &pDynamicOffsets, "pDynamicOffsets", dynamicOffsetCount,  vinfo_pDynamicOffsets);  // CXC
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdBindIndexBuffer(
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    VkIndexType                                 indexType)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdBindIndexBuffer(commandBuffer, buffer, offset, indexType)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkBuffer buffer
    IndentSpaces(out, indent);
    *out += "buffer:                         ";
    *out += "VkBuffer = "; // TEQ
    AddrToString(out, buffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDeviceSize offset
    IndentSpaces(out, indent);
    *out += "offset:                         ";
    *out += "VkDeviceSize = "; // TEQ
    SignedDecimalToString(out, offset); //EQA
    outString += "\n";   // HHS

    // func arg: VkIndexType indexType
    IndentSpaces(out, indent);
    *out += "indexType:                      ";
    *out += "VkIndexType = "; // TEQ
    EnumToStringVkIndexType(out, indexType); // VSA
    *out += " (";
    UnsignedDecimalToString(out, indexType);
    *out += ")";
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdBindVertexBuffers(
    format::HandleId                            commandBuffer,
    uint32_t                                    firstBinding,
    uint32_t                                    bindingCount,
    const HandlePointerDecoder<VkBuffer>&       pBuffers,
    const PointerDecoder<VkDeviceSize>&         pOffsets)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdBindVertexBuffers(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t firstBinding
    IndentSpaces(out, indent);
    *out += "firstBinding:                   ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, firstBinding); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t bindingCount
    IndentSpaces(out, indent);
    *out += "bindingCount:                   ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, bindingCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkBuffer* pBuffers
    IndentSpaces(out, indent);
    *out += "pBuffers:                       ";
    *out += "const VkBuffer* = "; // TEQ
    if (pBuffers.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pBuffers.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pBuffers = {true, false, false, nullptr};
        ArrayToString<HandlePointerDecoder<VkBuffer>>(out, indent, 1, "const VkBuffer*", &pBuffers, "pBuffers", bindingCount,  vinfo_pBuffers);  // CXC
    }
    outString += "\n";   // HHS

    // func arg: const VkDeviceSize* pOffsets
    IndentSpaces(out, indent);
    *out += "pOffsets:                       ";
    *out += "const VkDeviceSize* = "; // TEQ
    if (pOffsets.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pOffsets.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pOffsets = {false, false, false, nullptr};
        ArrayToString<PointerDecoder<VkDeviceSize>>(out, indent, 1, "const VkDeviceSize*", &pOffsets, "pOffsets", bindingCount,  vinfo_pOffsets);  // CXC
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdDraw(
    format::HandleId                            commandBuffer,
    uint32_t                                    vertexCount,
    uint32_t                                    instanceCount,
    uint32_t                                    firstVertex,
    uint32_t                                    firstInstance)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdDraw(commandBuffer, vertexCount, instanceCount, firstVertex, firstInstance)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t vertexCount
    IndentSpaces(out, indent);
    *out += "vertexCount:                    ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, vertexCount); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t instanceCount
    IndentSpaces(out, indent);
    *out += "instanceCount:                  ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, instanceCount); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t firstVertex
    IndentSpaces(out, indent);
    *out += "firstVertex:                    ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, firstVertex); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t firstInstance
    IndentSpaces(out, indent);
    *out += "firstInstance:                  ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, firstInstance); // UYW
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdDrawIndexed(
    format::HandleId                            commandBuffer,
    uint32_t                                    indexCount,
    uint32_t                                    instanceCount,
    uint32_t                                    firstIndex,
    int32_t                                     vertexOffset,
    uint32_t                                    firstInstance)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdDrawIndexed(commandBuffer, indexCount, instanceCount, firstIndex, vertexOffset, firstInstance)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t indexCount
    IndentSpaces(out, indent);
    *out += "indexCount:                     ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, indexCount); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t instanceCount
    IndentSpaces(out, indent);
    *out += "instanceCount:                  ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, instanceCount); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t firstIndex
    IndentSpaces(out, indent);
    *out += "firstIndex:                     ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, firstIndex); // UYW
    outString += "\n";   // HHS

    // func arg: int32_t vertexOffset
    IndentSpaces(out, indent);
    *out += "vertexOffset:                   ";
    *out += "int32_t = "; // TEQ
    SignedDecimalToString(out, vertexOffset); //EQA
    outString += "\n";   // HHS

    // func arg: uint32_t firstInstance
    IndentSpaces(out, indent);
    *out += "firstInstance:                  ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, firstInstance); // UYW
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdDrawIndirect(
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    uint32_t                                    drawCount,
    uint32_t                                    stride)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdDrawIndirect(commandBuffer, buffer, offset, drawCount, stride)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkBuffer buffer
    IndentSpaces(out, indent);
    *out += "buffer:                         ";
    *out += "VkBuffer = "; // TEQ
    AddrToString(out, buffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDeviceSize offset
    IndentSpaces(out, indent);
    *out += "offset:                         ";
    *out += "VkDeviceSize = "; // TEQ
    SignedDecimalToString(out, offset); //EQA
    outString += "\n";   // HHS

    // func arg: uint32_t drawCount
    IndentSpaces(out, indent);
    *out += "drawCount:                      ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, drawCount); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t stride
    IndentSpaces(out, indent);
    *out += "stride:                         ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, stride); // UYW
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdDrawIndexedIndirect(
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    uint32_t                                    drawCount,
    uint32_t                                    stride)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdDrawIndexedIndirect(commandBuffer, buffer, offset, drawCount, stride)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkBuffer buffer
    IndentSpaces(out, indent);
    *out += "buffer:                         ";
    *out += "VkBuffer = "; // TEQ
    AddrToString(out, buffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDeviceSize offset
    IndentSpaces(out, indent);
    *out += "offset:                         ";
    *out += "VkDeviceSize = "; // TEQ
    SignedDecimalToString(out, offset); //EQA
    outString += "\n";   // HHS

    // func arg: uint32_t drawCount
    IndentSpaces(out, indent);
    *out += "drawCount:                      ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, drawCount); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t stride
    IndentSpaces(out, indent);
    *out += "stride:                         ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, stride); // UYW
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdDispatch(
    format::HandleId                            commandBuffer,
    uint32_t                                    groupCountX,
    uint32_t                                    groupCountY,
    uint32_t                                    groupCountZ)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdDispatch(commandBuffer, groupCountX, groupCountY, groupCountZ)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t groupCountX
    IndentSpaces(out, indent);
    *out += "groupCountX:                    ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, groupCountX); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t groupCountY
    IndentSpaces(out, indent);
    *out += "groupCountY:                    ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, groupCountY); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t groupCountZ
    IndentSpaces(out, indent);
    *out += "groupCountZ:                    ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, groupCountZ); // UYW
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdDispatchIndirect(
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdDispatchIndirect(commandBuffer, buffer, offset)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkBuffer buffer
    IndentSpaces(out, indent);
    *out += "buffer:                         ";
    *out += "VkBuffer = "; // TEQ
    AddrToString(out, buffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDeviceSize offset
    IndentSpaces(out, indent);
    *out += "offset:                         ";
    *out += "VkDeviceSize = "; // TEQ
    SignedDecimalToString(out, offset); //EQA
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdCopyBuffer(
    format::HandleId                            commandBuffer,
    format::HandleId                            srcBuffer,
    format::HandleId                            dstBuffer,
    uint32_t                                    regionCount,
    const StructPointerDecoder<Decoded_VkBufferCopy>& pRegions)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdCopyBuffer(commandBuffer, srcBuffer, dstBuffer, regionCount, pRegions)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkBuffer srcBuffer
    IndentSpaces(out, indent);
    *out += "srcBuffer:                      ";
    *out += "VkBuffer = "; // TEQ
    AddrToString(out, srcBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkBuffer dstBuffer
    IndentSpaces(out, indent);
    *out += "dstBuffer:                      ";
    *out += "VkBuffer = "; // TEQ
    AddrToString(out, dstBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t regionCount
    IndentSpaces(out, indent);
    *out += "regionCount:                    ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, regionCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkBufferCopy* pRegions
    IndentSpaces(out, indent);
    *out += "pRegions:                       ";
    *out += "const VkBufferCopy* = "; // TEQ
    if (pRegions.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pRegions.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkBufferCopy>(out, indent+1, 1, "VkBufferCopy", pRegions.GetMetaStructPointer(), "pRegions", regionCount, false, pRegions.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
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
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdCopyImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkImage srcImage
    IndentSpaces(out, indent);
    *out += "srcImage:                       ";
    *out += "VkImage = "; // TEQ
    AddrToString(out, srcImage); // PAQ
    outString += "\n";   // HHS

    // func arg: VkImageLayout srcImageLayout
    IndentSpaces(out, indent);
    *out += "srcImageLayout:                 ";
    *out += "VkImageLayout = "; // TEQ
    EnumToStringVkImageLayout(out, srcImageLayout); // VSA
    *out += " (";
    UnsignedDecimalToString(out, srcImageLayout);
    *out += ")";
    outString += "\n";   // HHS

    // func arg: VkImage dstImage
    IndentSpaces(out, indent);
    *out += "dstImage:                       ";
    *out += "VkImage = "; // TEQ
    AddrToString(out, dstImage); // PAQ
    outString += "\n";   // HHS

    // func arg: VkImageLayout dstImageLayout
    IndentSpaces(out, indent);
    *out += "dstImageLayout:                 ";
    *out += "VkImageLayout = "; // TEQ
    EnumToStringVkImageLayout(out, dstImageLayout); // VSA
    *out += " (";
    UnsignedDecimalToString(out, dstImageLayout);
    *out += ")";
    outString += "\n";   // HHS

    // func arg: uint32_t regionCount
    IndentSpaces(out, indent);
    *out += "regionCount:                    ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, regionCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkImageCopy* pRegions
    IndentSpaces(out, indent);
    *out += "pRegions:                       ";
    *out += "const VkImageCopy* = "; // TEQ
    if (pRegions.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pRegions.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkImageCopy>(out, indent+1, 1, "VkImageCopy", pRegions.GetMetaStructPointer(), "pRegions", regionCount, false, pRegions.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
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
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdBlitImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions, filter)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkImage srcImage
    IndentSpaces(out, indent);
    *out += "srcImage:                       ";
    *out += "VkImage = "; // TEQ
    AddrToString(out, srcImage); // PAQ
    outString += "\n";   // HHS

    // func arg: VkImageLayout srcImageLayout
    IndentSpaces(out, indent);
    *out += "srcImageLayout:                 ";
    *out += "VkImageLayout = "; // TEQ
    EnumToStringVkImageLayout(out, srcImageLayout); // VSA
    *out += " (";
    UnsignedDecimalToString(out, srcImageLayout);
    *out += ")";
    outString += "\n";   // HHS

    // func arg: VkImage dstImage
    IndentSpaces(out, indent);
    *out += "dstImage:                       ";
    *out += "VkImage = "; // TEQ
    AddrToString(out, dstImage); // PAQ
    outString += "\n";   // HHS

    // func arg: VkImageLayout dstImageLayout
    IndentSpaces(out, indent);
    *out += "dstImageLayout:                 ";
    *out += "VkImageLayout = "; // TEQ
    EnumToStringVkImageLayout(out, dstImageLayout); // VSA
    *out += " (";
    UnsignedDecimalToString(out, dstImageLayout);
    *out += ")";
    outString += "\n";   // HHS

    // func arg: uint32_t regionCount
    IndentSpaces(out, indent);
    *out += "regionCount:                    ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, regionCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkImageBlit* pRegions
    IndentSpaces(out, indent);
    *out += "pRegions:                       ";
    *out += "const VkImageBlit* = "; // TEQ
    if (pRegions.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pRegions.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkImageBlit>(out, indent+1, 1, "VkImageBlit", pRegions.GetMetaStructPointer(), "pRegions", regionCount, false, pRegions.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    // func arg: VkFilter filter
    IndentSpaces(out, indent);
    *out += "filter:                         ";
    *out += "VkFilter = "; // TEQ
    EnumToStringVkFilter(out, filter); // VSA
    *out += " (";
    UnsignedDecimalToString(out, filter);
    *out += ")";
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdCopyBufferToImage(
    format::HandleId                            commandBuffer,
    format::HandleId                            srcBuffer,
    format::HandleId                            dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    const StructPointerDecoder<Decoded_VkBufferImageCopy>& pRegions)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdCopyBufferToImage(commandBuffer, srcBuffer, dstImage, dstImageLayout, regionCount, pRegions)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkBuffer srcBuffer
    IndentSpaces(out, indent);
    *out += "srcBuffer:                      ";
    *out += "VkBuffer = "; // TEQ
    AddrToString(out, srcBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkImage dstImage
    IndentSpaces(out, indent);
    *out += "dstImage:                       ";
    *out += "VkImage = "; // TEQ
    AddrToString(out, dstImage); // PAQ
    outString += "\n";   // HHS

    // func arg: VkImageLayout dstImageLayout
    IndentSpaces(out, indent);
    *out += "dstImageLayout:                 ";
    *out += "VkImageLayout = "; // TEQ
    EnumToStringVkImageLayout(out, dstImageLayout); // VSA
    *out += " (";
    UnsignedDecimalToString(out, dstImageLayout);
    *out += ")";
    outString += "\n";   // HHS

    // func arg: uint32_t regionCount
    IndentSpaces(out, indent);
    *out += "regionCount:                    ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, regionCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkBufferImageCopy* pRegions
    IndentSpaces(out, indent);
    *out += "pRegions:                       ";
    *out += "const VkBufferImageCopy* = "; // TEQ
    if (pRegions.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pRegions.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkBufferImageCopy>(out, indent+1, 1, "VkBufferImageCopy", pRegions.GetMetaStructPointer(), "pRegions", regionCount, false, pRegions.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdCopyImageToBuffer(
    format::HandleId                            commandBuffer,
    format::HandleId                            srcImage,
    VkImageLayout                               srcImageLayout,
    format::HandleId                            dstBuffer,
    uint32_t                                    regionCount,
    const StructPointerDecoder<Decoded_VkBufferImageCopy>& pRegions)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdCopyImageToBuffer(commandBuffer, srcImage, srcImageLayout, dstBuffer, regionCount, pRegions)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkImage srcImage
    IndentSpaces(out, indent);
    *out += "srcImage:                       ";
    *out += "VkImage = "; // TEQ
    AddrToString(out, srcImage); // PAQ
    outString += "\n";   // HHS

    // func arg: VkImageLayout srcImageLayout
    IndentSpaces(out, indent);
    *out += "srcImageLayout:                 ";
    *out += "VkImageLayout = "; // TEQ
    EnumToStringVkImageLayout(out, srcImageLayout); // VSA
    *out += " (";
    UnsignedDecimalToString(out, srcImageLayout);
    *out += ")";
    outString += "\n";   // HHS

    // func arg: VkBuffer dstBuffer
    IndentSpaces(out, indent);
    *out += "dstBuffer:                      ";
    *out += "VkBuffer = "; // TEQ
    AddrToString(out, dstBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t regionCount
    IndentSpaces(out, indent);
    *out += "regionCount:                    ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, regionCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkBufferImageCopy* pRegions
    IndentSpaces(out, indent);
    *out += "pRegions:                       ";
    *out += "const VkBufferImageCopy* = "; // TEQ
    if (pRegions.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pRegions.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkBufferImageCopy>(out, indent+1, 1, "VkBufferImageCopy", pRegions.GetMetaStructPointer(), "pRegions", regionCount, false, pRegions.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdUpdateBuffer(
    format::HandleId                            commandBuffer,
    format::HandleId                            dstBuffer,
    VkDeviceSize                                dstOffset,
    VkDeviceSize                                dataSize,
    const PointerDecoder<uint8_t>&              pData)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdUpdateBuffer(commandBuffer, dstBuffer, dstOffset, dataSize, pData)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkBuffer dstBuffer
    IndentSpaces(out, indent);
    *out += "dstBuffer:                      ";
    *out += "VkBuffer = "; // TEQ
    AddrToString(out, dstBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDeviceSize dstOffset
    IndentSpaces(out, indent);
    *out += "dstOffset:                      ";
    *out += "VkDeviceSize = "; // TEQ
    SignedDecimalToString(out, dstOffset); //EQA
    outString += "\n";   // HHS

    // func arg: VkDeviceSize dataSize
    IndentSpaces(out, indent);
    *out += "dataSize:                       ";
    *out += "VkDeviceSize = "; // TEQ
    SignedDecimalToString(out, dataSize); //EQA
    outString += "\n";   // HHS

    // func arg: const void* pData
    IndentSpaces(out, indent);
    *out += "pData:                          ";
    *out += "const void* = "; // TEQ
    if (pData.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pData.GetAddress()); // AHW
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdFillBuffer(
    format::HandleId                            commandBuffer,
    format::HandleId                            dstBuffer,
    VkDeviceSize                                dstOffset,
    VkDeviceSize                                size,
    uint32_t                                    data)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdFillBuffer(commandBuffer, dstBuffer, dstOffset, size, data)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkBuffer dstBuffer
    IndentSpaces(out, indent);
    *out += "dstBuffer:                      ";
    *out += "VkBuffer = "; // TEQ
    AddrToString(out, dstBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDeviceSize dstOffset
    IndentSpaces(out, indent);
    *out += "dstOffset:                      ";
    *out += "VkDeviceSize = "; // TEQ
    SignedDecimalToString(out, dstOffset); //EQA
    outString += "\n";   // HHS

    // func arg: VkDeviceSize size
    IndentSpaces(out, indent);
    *out += "size:                           ";
    *out += "VkDeviceSize = "; // TEQ
    SignedDecimalToString(out, size); //EQA
    outString += "\n";   // HHS

    // func arg: uint32_t data
    IndentSpaces(out, indent);
    *out += "data:                           ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, data); // UYW
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdClearColorImage(
    format::HandleId                            commandBuffer,
    format::HandleId                            image,
    VkImageLayout                               imageLayout,
    const StructPointerDecoder<Decoded_VkClearColorValue>& pColor,
    uint32_t                                    rangeCount,
    const StructPointerDecoder<Decoded_VkImageSubresourceRange>& pRanges)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdClearColorImage(commandBuffer, image, imageLayout, pColor, rangeCount, pRanges)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkImage image
    IndentSpaces(out, indent);
    *out += "image:                          ";
    *out += "VkImage = "; // TEQ
    AddrToString(out, image); // PAQ
    outString += "\n";   // HHS

    // func arg: VkImageLayout imageLayout
    IndentSpaces(out, indent);
    *out += "imageLayout:                    ";
    *out += "VkImageLayout = "; // TEQ
    EnumToStringVkImageLayout(out, imageLayout); // VSA
    *out += " (";
    UnsignedDecimalToString(out, imageLayout);
    *out += ")";
    outString += "\n";   // HHS

    // func arg: const VkClearColorValue* pColor
    IndentSpaces(out, indent);
    *out += "pColor:                         ";
    *out += "const VkClearColorValue* = "; // TEQ
    if (pColor.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pColor.GetAddress()); // JHI
        *out += " (Union)";
        *out += ":";
        StructureToString(out, *pColor.GetMetaStructPointer(), indent+1, pColor.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: uint32_t rangeCount
    IndentSpaces(out, indent);
    *out += "rangeCount:                     ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, rangeCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkImageSubresourceRange* pRanges
    IndentSpaces(out, indent);
    *out += "pRanges:                        ";
    *out += "const VkImageSubresourceRange* = "; // TEQ
    if (pRanges.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pRanges.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkImageSubresourceRange>(out, indent+1, 1, "VkImageSubresourceRange", pRanges.GetMetaStructPointer(), "pRanges", rangeCount, false, pRanges.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdClearDepthStencilImage(
    format::HandleId                            commandBuffer,
    format::HandleId                            image,
    VkImageLayout                               imageLayout,
    const StructPointerDecoder<Decoded_VkClearDepthStencilValue>& pDepthStencil,
    uint32_t                                    rangeCount,
    const StructPointerDecoder<Decoded_VkImageSubresourceRange>& pRanges)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdClearDepthStencilImage(commandBuffer, image, imageLayout, pDepthStencil, rangeCount, pRanges)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkImage image
    IndentSpaces(out, indent);
    *out += "image:                          ";
    *out += "VkImage = "; // TEQ
    AddrToString(out, image); // PAQ
    outString += "\n";   // HHS

    // func arg: VkImageLayout imageLayout
    IndentSpaces(out, indent);
    *out += "imageLayout:                    ";
    *out += "VkImageLayout = "; // TEQ
    EnumToStringVkImageLayout(out, imageLayout); // VSA
    *out += " (";
    UnsignedDecimalToString(out, imageLayout);
    *out += ")";
    outString += "\n";   // HHS

    // func arg: const VkClearDepthStencilValue* pDepthStencil
    IndentSpaces(out, indent);
    *out += "pDepthStencil:                  ";
    *out += "const VkClearDepthStencilValue* = "; // TEQ
    if (pDepthStencil.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pDepthStencil.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pDepthStencil.GetMetaStructPointer(), indent+1, pDepthStencil.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: uint32_t rangeCount
    IndentSpaces(out, indent);
    *out += "rangeCount:                     ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, rangeCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkImageSubresourceRange* pRanges
    IndentSpaces(out, indent);
    *out += "pRanges:                        ";
    *out += "const VkImageSubresourceRange* = "; // TEQ
    if (pRanges.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pRanges.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkImageSubresourceRange>(out, indent+1, 1, "VkImageSubresourceRange", pRanges.GetMetaStructPointer(), "pRanges", rangeCount, false, pRanges.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdClearAttachments(
    format::HandleId                            commandBuffer,
    uint32_t                                    attachmentCount,
    const StructPointerDecoder<Decoded_VkClearAttachment>& pAttachments,
    uint32_t                                    rectCount,
    const StructPointerDecoder<Decoded_VkClearRect>& pRects)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdClearAttachments(commandBuffer, attachmentCount, pAttachments, rectCount, pRects)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t attachmentCount
    IndentSpaces(out, indent);
    *out += "attachmentCount:                ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, attachmentCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkClearAttachment* pAttachments
    IndentSpaces(out, indent);
    *out += "pAttachments:                   ";
    *out += "const VkClearAttachment* = "; // TEQ
    if (pAttachments.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAttachments.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkClearAttachment>(out, indent+1, 1, "VkClearAttachment", pAttachments.GetMetaStructPointer(), "pAttachments", attachmentCount, false, pAttachments.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    // func arg: uint32_t rectCount
    IndentSpaces(out, indent);
    *out += "rectCount:                      ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, rectCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkClearRect* pRects
    IndentSpaces(out, indent);
    *out += "pRects:                         ";
    *out += "const VkClearRect* = "; // TEQ
    if (pRects.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pRects.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkClearRect>(out, indent+1, 1, "VkClearRect", pRects.GetMetaStructPointer(), "pRects", rectCount, false, pRects.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
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
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdResolveImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkImage srcImage
    IndentSpaces(out, indent);
    *out += "srcImage:                       ";
    *out += "VkImage = "; // TEQ
    AddrToString(out, srcImage); // PAQ
    outString += "\n";   // HHS

    // func arg: VkImageLayout srcImageLayout
    IndentSpaces(out, indent);
    *out += "srcImageLayout:                 ";
    *out += "VkImageLayout = "; // TEQ
    EnumToStringVkImageLayout(out, srcImageLayout); // VSA
    *out += " (";
    UnsignedDecimalToString(out, srcImageLayout);
    *out += ")";
    outString += "\n";   // HHS

    // func arg: VkImage dstImage
    IndentSpaces(out, indent);
    *out += "dstImage:                       ";
    *out += "VkImage = "; // TEQ
    AddrToString(out, dstImage); // PAQ
    outString += "\n";   // HHS

    // func arg: VkImageLayout dstImageLayout
    IndentSpaces(out, indent);
    *out += "dstImageLayout:                 ";
    *out += "VkImageLayout = "; // TEQ
    EnumToStringVkImageLayout(out, dstImageLayout); // VSA
    *out += " (";
    UnsignedDecimalToString(out, dstImageLayout);
    *out += ")";
    outString += "\n";   // HHS

    // func arg: uint32_t regionCount
    IndentSpaces(out, indent);
    *out += "regionCount:                    ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, regionCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkImageResolve* pRegions
    IndentSpaces(out, indent);
    *out += "pRegions:                       ";
    *out += "const VkImageResolve* = "; // TEQ
    if (pRegions.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pRegions.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkImageResolve>(out, indent+1, 1, "VkImageResolve", pRegions.GetMetaStructPointer(), "pRegions", regionCount, false, pRegions.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdSetEvent(
    format::HandleId                            commandBuffer,
    format::HandleId                            event,
    VkPipelineStageFlags                        stageMask)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdSetEvent(commandBuffer, event, stageMask)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkEvent event
    IndentSpaces(out, indent);
    *out += "event:                          ";
    *out += "VkEvent = "; // TEQ
    AddrToString(out, event); // PAQ
    outString += "\n";   // HHS

    // func arg: VkPipelineStageFlags stageMask
    IndentSpaces(out, indent);
    *out += "stageMask:                      ";
    *out += "VkPipelineStageFlags = "; // TEQ
    FlagsToString(out, stageMask, EnumToStringVkPipelineStageFlagBits); // URW
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdResetEvent(
    format::HandleId                            commandBuffer,
    format::HandleId                            event,
    VkPipelineStageFlags                        stageMask)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdResetEvent(commandBuffer, event, stageMask)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkEvent event
    IndentSpaces(out, indent);
    *out += "event:                          ";
    *out += "VkEvent = "; // TEQ
    AddrToString(out, event); // PAQ
    outString += "\n";   // HHS

    // func arg: VkPipelineStageFlags stageMask
    IndentSpaces(out, indent);
    *out += "stageMask:                      ";
    *out += "VkPipelineStageFlags = "; // TEQ
    FlagsToString(out, stageMask, EnumToStringVkPipelineStageFlagBits); // URW
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
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
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdWaitEvents(commandBuffer, eventCount, pEvents, srcStageMask, dstStageMask, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t eventCount
    IndentSpaces(out, indent);
    *out += "eventCount:                     ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, eventCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkEvent* pEvents
    IndentSpaces(out, indent);
    *out += "pEvents:                        ";
    *out += "const VkEvent* = "; // TEQ
    if (pEvents.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pEvents.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pEvents = {true, false, false, nullptr};
        ArrayToString<HandlePointerDecoder<VkEvent>>(out, indent, 1, "const VkEvent*", &pEvents, "pEvents", eventCount,  vinfo_pEvents);  // CXC
    }
    outString += "\n";   // HHS

    // func arg: VkPipelineStageFlags srcStageMask
    IndentSpaces(out, indent);
    *out += "srcStageMask:                   ";
    *out += "VkPipelineStageFlags = "; // TEQ
    FlagsToString(out, srcStageMask, EnumToStringVkPipelineStageFlagBits); // URW
    outString += "\n";   // HHS

    // func arg: VkPipelineStageFlags dstStageMask
    IndentSpaces(out, indent);
    *out += "dstStageMask:                   ";
    *out += "VkPipelineStageFlags = "; // TEQ
    FlagsToString(out, dstStageMask, EnumToStringVkPipelineStageFlagBits); // URW
    outString += "\n";   // HHS

    // func arg: uint32_t memoryBarrierCount
    IndentSpaces(out, indent);
    *out += "memoryBarrierCount:             ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, memoryBarrierCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkMemoryBarrier* pMemoryBarriers
    IndentSpaces(out, indent);
    *out += "pMemoryBarriers:                ";
    *out += "const VkMemoryBarrier* = "; // TEQ
    if (pMemoryBarriers.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pMemoryBarriers.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkMemoryBarrier>(out, indent+1, 1, "VkMemoryBarrier", pMemoryBarriers.GetMetaStructPointer(), "pMemoryBarriers", memoryBarrierCount, false, pMemoryBarriers.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    // func arg: uint32_t bufferMemoryBarrierCount
    IndentSpaces(out, indent);
    *out += "bufferMemoryBarrierCount:       ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, bufferMemoryBarrierCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkBufferMemoryBarrier* pBufferMemoryBarriers
    IndentSpaces(out, indent);
    *out += "pBufferMemoryBarriers:          ";
    *out += "const VkBufferMemoryBarrier* = "; // TEQ
    if (pBufferMemoryBarriers.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pBufferMemoryBarriers.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkBufferMemoryBarrier>(out, indent+1, 1, "VkBufferMemoryBarrier", pBufferMemoryBarriers.GetMetaStructPointer(), "pBufferMemoryBarriers", bufferMemoryBarrierCount, false, pBufferMemoryBarriers.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    // func arg: uint32_t imageMemoryBarrierCount
    IndentSpaces(out, indent);
    *out += "imageMemoryBarrierCount:        ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, imageMemoryBarrierCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkImageMemoryBarrier* pImageMemoryBarriers
    IndentSpaces(out, indent);
    *out += "pImageMemoryBarriers:           ";
    *out += "const VkImageMemoryBarrier* = "; // TEQ
    if (pImageMemoryBarriers.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pImageMemoryBarriers.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkImageMemoryBarrier>(out, indent+1, 1, "VkImageMemoryBarrier", pImageMemoryBarriers.GetMetaStructPointer(), "pImageMemoryBarriers", imageMemoryBarrierCount, false, pImageMemoryBarriers.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
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
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdPipelineBarrier(commandBuffer, srcStageMask, dstStageMask, dependencyFlags, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkPipelineStageFlags srcStageMask
    IndentSpaces(out, indent);
    *out += "srcStageMask:                   ";
    *out += "VkPipelineStageFlags = "; // TEQ
    FlagsToString(out, srcStageMask, EnumToStringVkPipelineStageFlagBits); // URW
    outString += "\n";   // HHS

    // func arg: VkPipelineStageFlags dstStageMask
    IndentSpaces(out, indent);
    *out += "dstStageMask:                   ";
    *out += "VkPipelineStageFlags = "; // TEQ
    FlagsToString(out, dstStageMask, EnumToStringVkPipelineStageFlagBits); // URW
    outString += "\n";   // HHS

    // func arg: VkDependencyFlags dependencyFlags
    IndentSpaces(out, indent);
    *out += "dependencyFlags:                ";
    *out += "VkDependencyFlags = "; // TEQ
    FlagsToString(out, dependencyFlags, EnumToStringVkDependencyFlagBits); // URW
    outString += "\n";   // HHS

    // func arg: uint32_t memoryBarrierCount
    IndentSpaces(out, indent);
    *out += "memoryBarrierCount:             ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, memoryBarrierCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkMemoryBarrier* pMemoryBarriers
    IndentSpaces(out, indent);
    *out += "pMemoryBarriers:                ";
    *out += "const VkMemoryBarrier* = "; // TEQ
    if (pMemoryBarriers.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pMemoryBarriers.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkMemoryBarrier>(out, indent+1, 1, "VkMemoryBarrier", pMemoryBarriers.GetMetaStructPointer(), "pMemoryBarriers", memoryBarrierCount, false, pMemoryBarriers.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    // func arg: uint32_t bufferMemoryBarrierCount
    IndentSpaces(out, indent);
    *out += "bufferMemoryBarrierCount:       ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, bufferMemoryBarrierCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkBufferMemoryBarrier* pBufferMemoryBarriers
    IndentSpaces(out, indent);
    *out += "pBufferMemoryBarriers:          ";
    *out += "const VkBufferMemoryBarrier* = "; // TEQ
    if (pBufferMemoryBarriers.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pBufferMemoryBarriers.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkBufferMemoryBarrier>(out, indent+1, 1, "VkBufferMemoryBarrier", pBufferMemoryBarriers.GetMetaStructPointer(), "pBufferMemoryBarriers", bufferMemoryBarrierCount, false, pBufferMemoryBarriers.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    // func arg: uint32_t imageMemoryBarrierCount
    IndentSpaces(out, indent);
    *out += "imageMemoryBarrierCount:        ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, imageMemoryBarrierCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkImageMemoryBarrier* pImageMemoryBarriers
    IndentSpaces(out, indent);
    *out += "pImageMemoryBarriers:           ";
    *out += "const VkImageMemoryBarrier* = "; // TEQ
    if (pImageMemoryBarriers.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pImageMemoryBarriers.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkImageMemoryBarrier>(out, indent+1, 1, "VkImageMemoryBarrier", pImageMemoryBarriers.GetMetaStructPointer(), "pImageMemoryBarriers", imageMemoryBarrierCount, false, pImageMemoryBarriers.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdBeginQuery(
    format::HandleId                            commandBuffer,
    format::HandleId                            queryPool,
    uint32_t                                    query,
    VkQueryControlFlags                         flags)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdBeginQuery(commandBuffer, queryPool, query, flags)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkQueryPool queryPool
    IndentSpaces(out, indent);
    *out += "queryPool:                      ";
    *out += "VkQueryPool = "; // TEQ
    AddrToString(out, queryPool); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t query
    IndentSpaces(out, indent);
    *out += "query:                          ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, query); // UYW
    outString += "\n";   // HHS

    // func arg: VkQueryControlFlags flags
    IndentSpaces(out, indent);
    *out += "flags:                          ";
    *out += "VkQueryControlFlags = "; // TEQ
    FlagsToString(out, flags, EnumToStringVkQueryControlFlagBits); // URW
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdEndQuery(
    format::HandleId                            commandBuffer,
    format::HandleId                            queryPool,
    uint32_t                                    query)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdEndQuery(commandBuffer, queryPool, query)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkQueryPool queryPool
    IndentSpaces(out, indent);
    *out += "queryPool:                      ";
    *out += "VkQueryPool = "; // TEQ
    AddrToString(out, queryPool); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t query
    IndentSpaces(out, indent);
    *out += "query:                          ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, query); // UYW
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdResetQueryPool(
    format::HandleId                            commandBuffer,
    format::HandleId                            queryPool,
    uint32_t                                    firstQuery,
    uint32_t                                    queryCount)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdResetQueryPool(commandBuffer, queryPool, firstQuery, queryCount)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkQueryPool queryPool
    IndentSpaces(out, indent);
    *out += "queryPool:                      ";
    *out += "VkQueryPool = "; // TEQ
    AddrToString(out, queryPool); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t firstQuery
    IndentSpaces(out, indent);
    *out += "firstQuery:                     ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, firstQuery); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t queryCount
    IndentSpaces(out, indent);
    *out += "queryCount:                     ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, queryCount); // UYW
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdWriteTimestamp(
    format::HandleId                            commandBuffer,
    VkPipelineStageFlagBits                     pipelineStage,
    format::HandleId                            queryPool,
    uint32_t                                    query)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdWriteTimestamp(commandBuffer, pipelineStage, queryPool, query)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkPipelineStageFlagBits pipelineStage
    IndentSpaces(out, indent);
    *out += "pipelineStage:                  ";
    *out += "VkPipelineStageFlagBits = "; // TEQ
    EnumToStringVkPipelineStageFlagBits(out, pipelineStage); // VSA
    *out += " (";
    UnsignedDecimalToString(out, pipelineStage);
    *out += ")";
    outString += "\n";   // HHS

    // func arg: VkQueryPool queryPool
    IndentSpaces(out, indent);
    *out += "queryPool:                      ";
    *out += "VkQueryPool = "; // TEQ
    AddrToString(out, queryPool); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t query
    IndentSpaces(out, indent);
    *out += "query:                          ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, query); // UYW
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
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
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdCopyQueryPoolResults(commandBuffer, queryPool, firstQuery, queryCount, dstBuffer, dstOffset, stride, flags)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkQueryPool queryPool
    IndentSpaces(out, indent);
    *out += "queryPool:                      ";
    *out += "VkQueryPool = "; // TEQ
    AddrToString(out, queryPool); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t firstQuery
    IndentSpaces(out, indent);
    *out += "firstQuery:                     ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, firstQuery); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t queryCount
    IndentSpaces(out, indent);
    *out += "queryCount:                     ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, queryCount); // UYW
    outString += "\n";   // HHS

    // func arg: VkBuffer dstBuffer
    IndentSpaces(out, indent);
    *out += "dstBuffer:                      ";
    *out += "VkBuffer = "; // TEQ
    AddrToString(out, dstBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDeviceSize dstOffset
    IndentSpaces(out, indent);
    *out += "dstOffset:                      ";
    *out += "VkDeviceSize = "; // TEQ
    SignedDecimalToString(out, dstOffset); //EQA
    outString += "\n";   // HHS

    // func arg: VkDeviceSize stride
    IndentSpaces(out, indent);
    *out += "stride:                         ";
    *out += "VkDeviceSize = "; // TEQ
    SignedDecimalToString(out, stride); //EQA
    outString += "\n";   // HHS

    // func arg: VkQueryResultFlags flags
    IndentSpaces(out, indent);
    *out += "flags:                          ";
    *out += "VkQueryResultFlags = "; // TEQ
    FlagsToString(out, flags, EnumToStringVkQueryResultFlagBits); // URW
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdPushConstants(
    format::HandleId                            commandBuffer,
    format::HandleId                            layout,
    VkShaderStageFlags                          stageFlags,
    uint32_t                                    offset,
    uint32_t                                    size,
    const PointerDecoder<uint8_t>&              pValues)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdPushConstants(commandBuffer, layout, stageFlags, offset, size, pValues)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkPipelineLayout layout
    IndentSpaces(out, indent);
    *out += "layout:                         ";
    *out += "VkPipelineLayout = "; // TEQ
    AddrToString(out, layout); // PAQ
    outString += "\n";   // HHS

    // func arg: VkShaderStageFlags stageFlags
    IndentSpaces(out, indent);
    *out += "stageFlags:                     ";
    *out += "VkShaderStageFlags = "; // TEQ
    FlagsToString(out, stageFlags, EnumToStringVkShaderStageFlagBits); // URW
    outString += "\n";   // HHS

    // func arg: uint32_t offset
    IndentSpaces(out, indent);
    *out += "offset:                         ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, offset); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t size
    IndentSpaces(out, indent);
    *out += "size:                           ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, size); // UYW
    outString += "\n";   // HHS

    // func arg: const void* pValues
    IndentSpaces(out, indent);
    *out += "pValues:                        ";
    *out += "const void* = "; // TEQ
    if (pValues.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pValues.GetAddress()); // AHW
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdBeginRenderPass(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkRenderPassBeginInfo>& pRenderPassBegin,
    VkSubpassContents                           contents)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdBeginRenderPass(commandBuffer, pRenderPassBegin, contents)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkRenderPassBeginInfo* pRenderPassBegin
    IndentSpaces(out, indent);
    *out += "pRenderPassBegin:               ";
    *out += "const VkRenderPassBeginInfo* = "; // TEQ
    if (pRenderPassBegin.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pRenderPassBegin.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pRenderPassBegin.GetMetaStructPointer(), indent+1, pRenderPassBegin.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkSubpassContents contents
    IndentSpaces(out, indent);
    *out += "contents:                       ";
    *out += "VkSubpassContents = "; // TEQ
    EnumToStringVkSubpassContents(out, contents); // VSA
    *out += " (";
    UnsignedDecimalToString(out, contents);
    *out += ")";
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdNextSubpass(
    format::HandleId                            commandBuffer,
    VkSubpassContents                           contents)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdNextSubpass(commandBuffer, contents)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkSubpassContents contents
    IndentSpaces(out, indent);
    *out += "contents:                       ";
    *out += "VkSubpassContents = "; // TEQ
    EnumToStringVkSubpassContents(out, contents); // VSA
    *out += " (";
    UnsignedDecimalToString(out, contents);
    *out += ")";
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdEndRenderPass(
    format::HandleId                            commandBuffer)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdEndRenderPass(commandBuffer)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdExecuteCommands(
    format::HandleId                            commandBuffer,
    uint32_t                                    commandBufferCount,
    const HandlePointerDecoder<VkCommandBuffer>& pCommandBuffers)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdExecuteCommands(commandBuffer, commandBufferCount, pCommandBuffers)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t commandBufferCount
    IndentSpaces(out, indent);
    *out += "commandBufferCount:             ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, commandBufferCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkCommandBuffer* pCommandBuffers
    IndentSpaces(out, indent);
    *out += "pCommandBuffers:                ";
    *out += "const VkCommandBuffer* = "; // TEQ
    if (pCommandBuffers.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCommandBuffers.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pCommandBuffers = {true, false, false, nullptr};
        ArrayToString<HandlePointerDecoder<VkCommandBuffer>>(out, indent, 1, "const VkCommandBuffer*", &pCommandBuffers, "pCommandBuffers", commandBufferCount,  vinfo_pCommandBuffers);  // CXC
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkBindBufferMemory2(
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    bindInfoCount,
    const StructPointerDecoder<Decoded_VkBindBufferMemoryInfo>& pBindInfos)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkBindBufferMemory2(device, bindInfoCount, pBindInfos)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t bindInfoCount
    IndentSpaces(out, indent);
    *out += "bindInfoCount:                  ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, bindInfoCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkBindBufferMemoryInfo* pBindInfos
    IndentSpaces(out, indent);
    *out += "pBindInfos:                     ";
    *out += "const VkBindBufferMemoryInfo* = "; // TEQ
    if (pBindInfos.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pBindInfos.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkBindBufferMemoryInfo>(out, indent+1, 1, "VkBindBufferMemoryInfo", pBindInfos.GetMetaStructPointer(), "pBindInfos", bindInfoCount, false, pBindInfos.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkBindImageMemory2(
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    bindInfoCount,
    const StructPointerDecoder<Decoded_VkBindImageMemoryInfo>& pBindInfos)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkBindImageMemory2(device, bindInfoCount, pBindInfos)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t bindInfoCount
    IndentSpaces(out, indent);
    *out += "bindInfoCount:                  ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, bindInfoCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkBindImageMemoryInfo* pBindInfos
    IndentSpaces(out, indent);
    *out += "pBindInfos:                     ";
    *out += "const VkBindImageMemoryInfo* = "; // TEQ
    if (pBindInfos.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pBindInfos.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkBindImageMemoryInfo>(out, indent+1, 1, "VkBindImageMemoryInfo", pBindInfos.GetMetaStructPointer(), "pBindInfos", bindInfoCount, false, pBindInfos.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetDeviceGroupPeerMemoryFeatures(
    format::HandleId                            device,
    uint32_t                                    heapIndex,
    uint32_t                                    localDeviceIndex,
    uint32_t                                    remoteDeviceIndex,
    const PointerDecoder<VkPeerMemoryFeatureFlags>& pPeerMemoryFeatures)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetDeviceGroupPeerMemoryFeatures(device, heapIndex, localDeviceIndex, remoteDeviceIndex, pPeerMemoryFeatures)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t heapIndex
    IndentSpaces(out, indent);
    *out += "heapIndex:                      ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, heapIndex); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t localDeviceIndex
    IndentSpaces(out, indent);
    *out += "localDeviceIndex:               ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, localDeviceIndex); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t remoteDeviceIndex
    IndentSpaces(out, indent);
    *out += "remoteDeviceIndex:              ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, remoteDeviceIndex); // UYW
    outString += "\n";   // HHS

    // func arg: VkPeerMemoryFeatureFlags* pPeerMemoryFeatures
    IndentSpaces(out, indent);
    *out += "pPeerMemoryFeatures:            ";
    *out += "VkPeerMemoryFeatureFlags* = "; // TEQ
    if (pPeerMemoryFeatures.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pPeerMemoryFeatures = {false, false, true, EnumToStringVkPeerMemoryFeatureFlagBits};
        ScalarValueToString(out, pPeerMemoryFeatures.GetPointer(), vinfo_pPeerMemoryFeatures); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdSetDeviceMask(
    format::HandleId                            commandBuffer,
    uint32_t                                    deviceMask)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdSetDeviceMask(commandBuffer, deviceMask)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t deviceMask
    IndentSpaces(out, indent);
    *out += "deviceMask:                     ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, deviceMask); // UYW
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
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
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdDispatchBase(commandBuffer, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t baseGroupX
    IndentSpaces(out, indent);
    *out += "baseGroupX:                     ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, baseGroupX); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t baseGroupY
    IndentSpaces(out, indent);
    *out += "baseGroupY:                     ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, baseGroupY); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t baseGroupZ
    IndentSpaces(out, indent);
    *out += "baseGroupZ:                     ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, baseGroupZ); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t groupCountX
    IndentSpaces(out, indent);
    *out += "groupCountX:                    ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, groupCountX); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t groupCountY
    IndentSpaces(out, indent);
    *out += "groupCountY:                    ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, groupCountY); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t groupCountZ
    IndentSpaces(out, indent);
    *out += "groupCountZ:                    ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, groupCountZ); // UYW
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkEnumeratePhysicalDeviceGroups(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const PointerDecoder<uint32_t>&             pPhysicalDeviceGroupCount,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceGroupProperties>& pPhysicalDeviceGroupProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkEnumeratePhysicalDeviceGroups(instance, pPhysicalDeviceGroupCount, pPhysicalDeviceGroupProperties)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkInstance instance
    IndentSpaces(out, indent);
    *out += "instance:                       ";
    *out += "VkInstance = "; // TEQ
    AddrToString(out, instance); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t* pPhysicalDeviceGroupCount
    IndentSpaces(out, indent);
    *out += "pPhysicalDeviceGroupCount:      ";
    *out += "uint32_t* = "; // TEQ
    if (pPhysicalDeviceGroupCount.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pPhysicalDeviceGroupCount = {false, false, false, nullptr};
        ScalarValueToString(out, pPhysicalDeviceGroupCount.GetPointer(), vinfo_pPhysicalDeviceGroupCount); // PWS
    }
    outString += "\n";   // HHS

    // func arg: VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties
    IndentSpaces(out, indent);
    *out += "pPhysicalDeviceGroupProperties: ";
    *out += "VkPhysicalDeviceGroupProperties* = "; // TEQ
    if (pPhysicalDeviceGroupProperties.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pPhysicalDeviceGroupProperties.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkPhysicalDeviceGroupProperties>(out, indent+1, 1, "VkPhysicalDeviceGroupProperties", pPhysicalDeviceGroupProperties.GetMetaStructPointer(), "pPhysicalDeviceGroupProperties", *pPhysicalDeviceGroupCount.GetPointer(), false, pPhysicalDeviceGroupProperties.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetImageMemoryRequirements2(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImageMemoryRequirementsInfo2>& pInfo,
    const StructPointerDecoder<Decoded_VkMemoryRequirements2>& pMemoryRequirements)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetImageMemoryRequirements2(device, pInfo, pMemoryRequirements)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkImageMemoryRequirementsInfo2* pInfo
    IndentSpaces(out, indent);
    *out += "pInfo:                          ";
    *out += "const VkImageMemoryRequirementsInfo2* = "; // TEQ
    if (pInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pInfo.GetMetaStructPointer(), indent+1, pInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkMemoryRequirements2* pMemoryRequirements
    IndentSpaces(out, indent);
    *out += "pMemoryRequirements:            ";
    *out += "VkMemoryRequirements2* = "; // TEQ
    if (pMemoryRequirements.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pMemoryRequirements.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pMemoryRequirements.GetMetaStructPointer(), indent+1, pMemoryRequirements.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetBufferMemoryRequirements2(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkBufferMemoryRequirementsInfo2>& pInfo,
    const StructPointerDecoder<Decoded_VkMemoryRequirements2>& pMemoryRequirements)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetBufferMemoryRequirements2(device, pInfo, pMemoryRequirements)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkBufferMemoryRequirementsInfo2* pInfo
    IndentSpaces(out, indent);
    *out += "pInfo:                          ";
    *out += "const VkBufferMemoryRequirementsInfo2* = "; // TEQ
    if (pInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pInfo.GetMetaStructPointer(), indent+1, pInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkMemoryRequirements2* pMemoryRequirements
    IndentSpaces(out, indent);
    *out += "pMemoryRequirements:            ";
    *out += "VkMemoryRequirements2* = "; // TEQ
    if (pMemoryRequirements.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pMemoryRequirements.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pMemoryRequirements.GetMetaStructPointer(), indent+1, pMemoryRequirements.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetImageSparseMemoryRequirements2(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImageSparseMemoryRequirementsInfo2>& pInfo,
    const PointerDecoder<uint32_t>&             pSparseMemoryRequirementCount,
    const StructPointerDecoder<Decoded_VkSparseImageMemoryRequirements2>& pSparseMemoryRequirements)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetImageSparseMemoryRequirements2(device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkImageSparseMemoryRequirementsInfo2* pInfo
    IndentSpaces(out, indent);
    *out += "pInfo:                          ";
    *out += "const VkImageSparseMemoryRequirementsInfo2* = "; // TEQ
    if (pInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pInfo.GetMetaStructPointer(), indent+1, pInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: uint32_t* pSparseMemoryRequirementCount
    IndentSpaces(out, indent);
    *out += "pSparseMemoryRequirementCount:  ";
    *out += "uint32_t* = "; // TEQ
    if (pSparseMemoryRequirementCount.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pSparseMemoryRequirementCount = {false, false, false, nullptr};
        ScalarValueToString(out, pSparseMemoryRequirementCount.GetPointer(), vinfo_pSparseMemoryRequirementCount); // PWS
    }
    outString += "\n";   // HHS

    // func arg: VkSparseImageMemoryRequirements2* pSparseMemoryRequirements
    IndentSpaces(out, indent);
    *out += "pSparseMemoryRequirements:      ";
    *out += "VkSparseImageMemoryRequirements2* = "; // TEQ
    if (pSparseMemoryRequirements.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pSparseMemoryRequirements.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkSparseImageMemoryRequirements2>(out, indent+1, 1, "VkSparseImageMemoryRequirements2", pSparseMemoryRequirements.GetMetaStructPointer(), "pSparseMemoryRequirements", *pSparseMemoryRequirementCount.GetPointer(), false, pSparseMemoryRequirements.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceFeatures2(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceFeatures2>& pFeatures)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceFeatures2(physicalDevice, pFeatures)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: VkPhysicalDeviceFeatures2* pFeatures
    IndentSpaces(out, indent);
    *out += "pFeatures:                      ";
    *out += "VkPhysicalDeviceFeatures2* = "; // TEQ
    if (pFeatures.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pFeatures.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pFeatures.GetMetaStructPointer(), indent+1, pFeatures.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceProperties2(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceProperties2>& pProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceProperties2(physicalDevice, pProperties)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: VkPhysicalDeviceProperties2* pProperties
    IndentSpaces(out, indent);
    *out += "pProperties:                    ";
    *out += "VkPhysicalDeviceProperties2* = "; // TEQ
    if (pProperties.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pProperties.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pProperties.GetMetaStructPointer(), indent+1, pProperties.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceFormatProperties2(
    format::HandleId                            physicalDevice,
    VkFormat                                    format,
    const StructPointerDecoder<Decoded_VkFormatProperties2>& pFormatProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceFormatProperties2(physicalDevice, format, pFormatProperties)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: VkFormat format
    IndentSpaces(out, indent);
    *out += "format:                         ";
    *out += "VkFormat = "; // TEQ
    EnumToStringVkFormat(out, format); // VSA
    *out += " (";
    UnsignedDecimalToString(out, format);
    *out += ")";
    outString += "\n";   // HHS

    // func arg: VkFormatProperties2* pFormatProperties
    IndentSpaces(out, indent);
    *out += "pFormatProperties:              ";
    *out += "VkFormatProperties2* = "; // TEQ
    if (pFormatProperties.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pFormatProperties.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pFormatProperties.GetMetaStructPointer(), indent+1, pFormatProperties.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceImageFormatProperties2(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceImageFormatInfo2>& pImageFormatInfo,
    const StructPointerDecoder<Decoded_VkImageFormatProperties2>& pImageFormatProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceImageFormatProperties2(physicalDevice, pImageFormatInfo, pImageFormatProperties)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkPhysicalDeviceImageFormatInfo2* pImageFormatInfo
    IndentSpaces(out, indent);
    *out += "pImageFormatInfo:               ";
    *out += "const VkPhysicalDeviceImageFormatInfo2* = "; // TEQ
    if (pImageFormatInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pImageFormatInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pImageFormatInfo.GetMetaStructPointer(), indent+1, pImageFormatInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkImageFormatProperties2* pImageFormatProperties
    IndentSpaces(out, indent);
    *out += "pImageFormatProperties:         ";
    *out += "VkImageFormatProperties2* = "; // TEQ
    if (pImageFormatProperties.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pImageFormatProperties.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pImageFormatProperties.GetMetaStructPointer(), indent+1, pImageFormatProperties.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceQueueFamilyProperties2(
    format::HandleId                            physicalDevice,
    const PointerDecoder<uint32_t>&             pQueueFamilyPropertyCount,
    const StructPointerDecoder<Decoded_VkQueueFamilyProperties2>& pQueueFamilyProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceQueueFamilyProperties2(physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t* pQueueFamilyPropertyCount
    IndentSpaces(out, indent);
    *out += "pQueueFamilyPropertyCount:      ";
    *out += "uint32_t* = "; // TEQ
    if (pQueueFamilyPropertyCount.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pQueueFamilyPropertyCount = {false, false, false, nullptr};
        ScalarValueToString(out, pQueueFamilyPropertyCount.GetPointer(), vinfo_pQueueFamilyPropertyCount); // PWS
    }
    outString += "\n";   // HHS

    // func arg: VkQueueFamilyProperties2* pQueueFamilyProperties
    IndentSpaces(out, indent);
    *out += "pQueueFamilyProperties:         ";
    *out += "VkQueueFamilyProperties2* = "; // TEQ
    if (pQueueFamilyProperties.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pQueueFamilyProperties.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkQueueFamilyProperties2>(out, indent+1, 1, "VkQueueFamilyProperties2", pQueueFamilyProperties.GetMetaStructPointer(), "pQueueFamilyProperties", *pQueueFamilyPropertyCount.GetPointer(), false, pQueueFamilyProperties.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceMemoryProperties2(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceMemoryProperties2>& pMemoryProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceMemoryProperties2(physicalDevice, pMemoryProperties)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: VkPhysicalDeviceMemoryProperties2* pMemoryProperties
    IndentSpaces(out, indent);
    *out += "pMemoryProperties:              ";
    *out += "VkPhysicalDeviceMemoryProperties2* = "; // TEQ
    if (pMemoryProperties.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pMemoryProperties.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pMemoryProperties.GetMetaStructPointer(), indent+1, pMemoryProperties.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSparseImageFormatProperties2(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceSparseImageFormatInfo2>& pFormatInfo,
    const PointerDecoder<uint32_t>&             pPropertyCount,
    const StructPointerDecoder<Decoded_VkSparseImageFormatProperties2>& pProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceSparseImageFormatProperties2(physicalDevice, pFormatInfo, pPropertyCount, pProperties)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo
    IndentSpaces(out, indent);
    *out += "pFormatInfo:                    ";
    *out += "const VkPhysicalDeviceSparseImageFormatInfo2* = "; // TEQ
    if (pFormatInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pFormatInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pFormatInfo.GetMetaStructPointer(), indent+1, pFormatInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: uint32_t* pPropertyCount
    IndentSpaces(out, indent);
    *out += "pPropertyCount:                 ";
    *out += "uint32_t* = "; // TEQ
    if (pPropertyCount.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pPropertyCount = {false, false, false, nullptr};
        ScalarValueToString(out, pPropertyCount.GetPointer(), vinfo_pPropertyCount); // PWS
    }
    outString += "\n";   // HHS

    // func arg: VkSparseImageFormatProperties2* pProperties
    IndentSpaces(out, indent);
    *out += "pProperties:                    ";
    *out += "VkSparseImageFormatProperties2* = "; // TEQ
    if (pProperties.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pProperties.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkSparseImageFormatProperties2>(out, indent+1, 1, "VkSparseImageFormatProperties2", pProperties.GetMetaStructPointer(), "pProperties", *pPropertyCount.GetPointer(), false, pProperties.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkTrimCommandPool(
    format::HandleId                            device,
    format::HandleId                            commandPool,
    VkCommandPoolTrimFlags                      flags)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkTrimCommandPool(device, commandPool, flags)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkCommandPool commandPool
    IndentSpaces(out, indent);
    *out += "commandPool:                    ";
    *out += "VkCommandPool = "; // TEQ
    AddrToString(out, commandPool); // PAQ
    outString += "\n";   // HHS

    // func arg: VkCommandPoolTrimFlags flags
    IndentSpaces(out, indent);
    *out += "flags:                          ";
    *out += "VkCommandPoolTrimFlags = "; // TEQ
    UnsignedDecimalToString(out, flags); // UYW
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetDeviceQueue2(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDeviceQueueInfo2>& pQueueInfo,
    const HandlePointerDecoder<VkQueue>&        pQueue)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetDeviceQueue2(device, pQueueInfo, pQueue)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkDeviceQueueInfo2* pQueueInfo
    IndentSpaces(out, indent);
    *out += "pQueueInfo:                     ";
    *out += "const VkDeviceQueueInfo2* = "; // TEQ
    if (pQueueInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pQueueInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pQueueInfo.GetMetaStructPointer(), indent+1, pQueueInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkQueue* pQueue
    IndentSpaces(out, indent);
    *out += "pQueue:                         ";
    *out += "VkQueue* = "; // TEQ
    if (pQueue.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pQueue = {true, false, false, nullptr};
        ScalarValueToString(out, pQueue.GetPointer(), vinfo_pQueue); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCreateSamplerYcbcrConversion(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSamplerYcbcrConversionCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSamplerYcbcrConversion>& pYcbcrConversion)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreateSamplerYcbcrConversion(device, pCreateInfo, pAllocator, pYcbcrConversion)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkSamplerYcbcrConversionCreateInfo* pCreateInfo
    IndentSpaces(out, indent);
    *out += "pCreateInfo:                    ";
    *out += "const VkSamplerYcbcrConversionCreateInfo* = "; // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkSamplerYcbcrConversion* pYcbcrConversion
    IndentSpaces(out, indent);
    *out += "pYcbcrConversion:               ";
    *out += "VkSamplerYcbcrConversion* = "; // TEQ
    if (pYcbcrConversion.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pYcbcrConversion = {true, false, false, nullptr};
        ScalarValueToString(out, pYcbcrConversion.GetPointer(), vinfo_pYcbcrConversion); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkDestroySamplerYcbcrConversion(
    format::HandleId                            device,
    format::HandleId                            ycbcrConversion,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkDestroySamplerYcbcrConversion(device, ycbcrConversion, pAllocator)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkSamplerYcbcrConversion ycbcrConversion
    IndentSpaces(out, indent);
    *out += "ycbcrConversion:                ";
    *out += "VkSamplerYcbcrConversion = "; // TEQ
    AddrToString(out, ycbcrConversion); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCreateDescriptorUpdateTemplate(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDescriptorUpdateTemplateCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkDescriptorUpdateTemplate>& pDescriptorUpdateTemplate)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreateDescriptorUpdateTemplate(device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo
    IndentSpaces(out, indent);
    *out += "pCreateInfo:                    ";
    *out += "const VkDescriptorUpdateTemplateCreateInfo* = "; // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkDescriptorUpdateTemplate* pDescriptorUpdateTemplate
    IndentSpaces(out, indent);
    *out += "pDescriptorUpdateTemplate:      ";
    *out += "VkDescriptorUpdateTemplate* = "; // TEQ
    if (pDescriptorUpdateTemplate.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pDescriptorUpdateTemplate = {true, false, false, nullptr};
        ScalarValueToString(out, pDescriptorUpdateTemplate.GetPointer(), vinfo_pDescriptorUpdateTemplate); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkDestroyDescriptorUpdateTemplate(
    format::HandleId                            device,
    format::HandleId                            descriptorUpdateTemplate,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkDestroyDescriptorUpdateTemplate(device, descriptorUpdateTemplate, pAllocator)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDescriptorUpdateTemplate descriptorUpdateTemplate
    IndentSpaces(out, indent);
    *out += "descriptorUpdateTemplate:       ";
    *out += "VkDescriptorUpdateTemplate = "; // TEQ
    AddrToString(out, descriptorUpdateTemplate); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceExternalBufferProperties(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceExternalBufferInfo>& pExternalBufferInfo,
    const StructPointerDecoder<Decoded_VkExternalBufferProperties>& pExternalBufferProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceExternalBufferProperties(physicalDevice, pExternalBufferInfo, pExternalBufferProperties)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkPhysicalDeviceExternalBufferInfo* pExternalBufferInfo
    IndentSpaces(out, indent);
    *out += "pExternalBufferInfo:            ";
    *out += "const VkPhysicalDeviceExternalBufferInfo* = "; // TEQ
    if (pExternalBufferInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pExternalBufferInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pExternalBufferInfo.GetMetaStructPointer(), indent+1, pExternalBufferInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkExternalBufferProperties* pExternalBufferProperties
    IndentSpaces(out, indent);
    *out += "pExternalBufferProperties:      ";
    *out += "VkExternalBufferProperties* = "; // TEQ
    if (pExternalBufferProperties.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pExternalBufferProperties.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pExternalBufferProperties.GetMetaStructPointer(), indent+1, pExternalBufferProperties.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceExternalFenceProperties(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceExternalFenceInfo>& pExternalFenceInfo,
    const StructPointerDecoder<Decoded_VkExternalFenceProperties>& pExternalFenceProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceExternalFenceProperties(physicalDevice, pExternalFenceInfo, pExternalFenceProperties)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkPhysicalDeviceExternalFenceInfo* pExternalFenceInfo
    IndentSpaces(out, indent);
    *out += "pExternalFenceInfo:             ";
    *out += "const VkPhysicalDeviceExternalFenceInfo* = "; // TEQ
    if (pExternalFenceInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pExternalFenceInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pExternalFenceInfo.GetMetaStructPointer(), indent+1, pExternalFenceInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkExternalFenceProperties* pExternalFenceProperties
    IndentSpaces(out, indent);
    *out += "pExternalFenceProperties:       ";
    *out += "VkExternalFenceProperties* = "; // TEQ
    if (pExternalFenceProperties.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pExternalFenceProperties.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pExternalFenceProperties.GetMetaStructPointer(), indent+1, pExternalFenceProperties.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceExternalSemaphoreProperties(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceExternalSemaphoreInfo>& pExternalSemaphoreInfo,
    const StructPointerDecoder<Decoded_VkExternalSemaphoreProperties>& pExternalSemaphoreProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceExternalSemaphoreProperties(physicalDevice, pExternalSemaphoreInfo, pExternalSemaphoreProperties)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo
    IndentSpaces(out, indent);
    *out += "pExternalSemaphoreInfo:         ";
    *out += "const VkPhysicalDeviceExternalSemaphoreInfo* = "; // TEQ
    if (pExternalSemaphoreInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pExternalSemaphoreInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pExternalSemaphoreInfo.GetMetaStructPointer(), indent+1, pExternalSemaphoreInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkExternalSemaphoreProperties* pExternalSemaphoreProperties
    IndentSpaces(out, indent);
    *out += "pExternalSemaphoreProperties:   ";
    *out += "VkExternalSemaphoreProperties* = "; // TEQ
    if (pExternalSemaphoreProperties.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pExternalSemaphoreProperties.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pExternalSemaphoreProperties.GetMetaStructPointer(), indent+1, pExternalSemaphoreProperties.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetDescriptorSetLayoutSupport(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDescriptorSetLayoutCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkDescriptorSetLayoutSupport>& pSupport)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetDescriptorSetLayoutSupport(device, pCreateInfo, pSupport)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkDescriptorSetLayoutCreateInfo* pCreateInfo
    IndentSpaces(out, indent);
    *out += "pCreateInfo:                    ";
    *out += "const VkDescriptorSetLayoutCreateInfo* = "; // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkDescriptorSetLayoutSupport* pSupport
    IndentSpaces(out, indent);
    *out += "pSupport:                       ";
    *out += "VkDescriptorSetLayoutSupport* = "; // TEQ
    if (pSupport.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pSupport.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pSupport.GetMetaStructPointer(), indent+1, pSupport.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkDestroySurfaceKHR(
    format::HandleId                            instance,
    format::HandleId                            surface,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkDestroySurfaceKHR(instance, surface, pAllocator)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkInstance instance
    IndentSpaces(out, indent);
    *out += "instance:                       ";
    *out += "VkInstance = "; // TEQ
    AddrToString(out, instance); // PAQ
    outString += "\n";   // HHS

    // func arg: VkSurfaceKHR surface
    IndentSpaces(out, indent);
    *out += "surface:                        ";
    *out += "VkSurfaceKHR = "; // TEQ
    AddrToString(out, surface); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSurfaceSupportKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    format::HandleId                            surface,
    const PointerDecoder<VkBool32>&             pSupported)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceSurfaceSupportKHR(physicalDevice, queueFamilyIndex, surface, pSupported)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t queueFamilyIndex
    IndentSpaces(out, indent);
    *out += "queueFamilyIndex:               ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, queueFamilyIndex); // UYW
    outString += "\n";   // HHS

    // func arg: VkSurfaceKHR surface
    IndentSpaces(out, indent);
    *out += "surface:                        ";
    *out += "VkSurfaceKHR = "; // TEQ
    AddrToString(out, surface); // PAQ
    outString += "\n";   // HHS

    // func arg: VkBool32* pSupported
    IndentSpaces(out, indent);
    *out += "pSupported:                     ";
    *out += "VkBool32* = "; // TEQ
    if (pSupported.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pSupported = {false, false, false, nullptr};
        ScalarValueToString(out, pSupported.GetPointer(), vinfo_pSupported); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSurfaceCapabilitiesKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            surface,
    const StructPointerDecoder<Decoded_VkSurfaceCapabilitiesKHR>& pSurfaceCapabilities)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceSurfaceCapabilitiesKHR(physicalDevice, surface, pSurfaceCapabilities)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: VkSurfaceKHR surface
    IndentSpaces(out, indent);
    *out += "surface:                        ";
    *out += "VkSurfaceKHR = "; // TEQ
    AddrToString(out, surface); // PAQ
    outString += "\n";   // HHS

    // func arg: VkSurfaceCapabilitiesKHR* pSurfaceCapabilities
    IndentSpaces(out, indent);
    *out += "pSurfaceCapabilities:           ";
    *out += "VkSurfaceCapabilitiesKHR* = "; // TEQ
    if (pSurfaceCapabilities.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pSurfaceCapabilities.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pSurfaceCapabilities.GetMetaStructPointer(), indent+1, pSurfaceCapabilities.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSurfaceFormatsKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            surface,
    const PointerDecoder<uint32_t>&             pSurfaceFormatCount,
    const StructPointerDecoder<Decoded_VkSurfaceFormatKHR>& pSurfaceFormats)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceSurfaceFormatsKHR(physicalDevice, surface, pSurfaceFormatCount, pSurfaceFormats)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: VkSurfaceKHR surface
    IndentSpaces(out, indent);
    *out += "surface:                        ";
    *out += "VkSurfaceKHR = "; // TEQ
    AddrToString(out, surface); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t* pSurfaceFormatCount
    IndentSpaces(out, indent);
    *out += "pSurfaceFormatCount:            ";
    *out += "uint32_t* = "; // TEQ
    if (pSurfaceFormatCount.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pSurfaceFormatCount = {false, false, false, nullptr};
        ScalarValueToString(out, pSurfaceFormatCount.GetPointer(), vinfo_pSurfaceFormatCount); // PWS
    }
    outString += "\n";   // HHS

    // func arg: VkSurfaceFormatKHR* pSurfaceFormats
    IndentSpaces(out, indent);
    *out += "pSurfaceFormats:                ";
    *out += "VkSurfaceFormatKHR* = "; // TEQ
    if (pSurfaceFormats.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pSurfaceFormats.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkSurfaceFormatKHR>(out, indent+1, 1, "VkSurfaceFormatKHR", pSurfaceFormats.GetMetaStructPointer(), "pSurfaceFormats", *pSurfaceFormatCount.GetPointer(), false, pSurfaceFormats.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSurfacePresentModesKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            surface,
    const PointerDecoder<uint32_t>&             pPresentModeCount,
    const PointerDecoder<VkPresentModeKHR>&     pPresentModes)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceSurfacePresentModesKHR(physicalDevice, surface, pPresentModeCount, pPresentModes)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: VkSurfaceKHR surface
    IndentSpaces(out, indent);
    *out += "surface:                        ";
    *out += "VkSurfaceKHR = "; // TEQ
    AddrToString(out, surface); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t* pPresentModeCount
    IndentSpaces(out, indent);
    *out += "pPresentModeCount:              ";
    *out += "uint32_t* = "; // TEQ
    if (pPresentModeCount.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pPresentModeCount = {false, false, false, nullptr};
        ScalarValueToString(out, pPresentModeCount.GetPointer(), vinfo_pPresentModeCount); // PWS
    }
    outString += "\n";   // HHS

    // func arg: VkPresentModeKHR* pPresentModes
    IndentSpaces(out, indent);
    *out += "pPresentModes:                  ";
    *out += "VkPresentModeKHR* = "; // TEQ
    if (pPresentModes.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pPresentModes.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pPresentModes = {false, true, false, EnumToStringVkPresentModeKHR};
        ArrayToString<PointerDecoder<VkPresentModeKHR>>(out, indent, 1, "VkPresentModeKHR*", &pPresentModes, "pPresentModes", *pPresentModeCount.GetPointer(),  vinfo_pPresentModes);  // CXC
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkCreateSwapchainKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSwapchainCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSwapchainKHR>& pSwapchain)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreateSwapchainKHR(device, pCreateInfo, pAllocator, pSwapchain)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkSwapchainCreateInfoKHR* pCreateInfo
    IndentSpaces(out, indent);
    *out += "pCreateInfo:                    ";
    *out += "const VkSwapchainCreateInfoKHR* = "; // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkSwapchainKHR* pSwapchain
    IndentSpaces(out, indent);
    *out += "pSwapchain:                     ";
    *out += "VkSwapchainKHR* = "; // TEQ
    if (pSwapchain.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pSwapchain = {true, false, false, nullptr};
        ScalarValueToString(out, pSwapchain.GetPointer(), vinfo_pSwapchain); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkDestroySwapchainKHR(
    format::HandleId                            device,
    format::HandleId                            swapchain,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkDestroySwapchainKHR(device, swapchain, pAllocator)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkSwapchainKHR swapchain
    IndentSpaces(out, indent);
    *out += "swapchain:                      ";
    *out += "VkSwapchainKHR = "; // TEQ
    AddrToString(out, swapchain); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetSwapchainImagesKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain,
    const PointerDecoder<uint32_t>&             pSwapchainImageCount,
    const HandlePointerDecoder<VkImage>&        pSwapchainImages)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetSwapchainImagesKHR(device, swapchain, pSwapchainImageCount, pSwapchainImages)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkSwapchainKHR swapchain
    IndentSpaces(out, indent);
    *out += "swapchain:                      ";
    *out += "VkSwapchainKHR = "; // TEQ
    AddrToString(out, swapchain); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t* pSwapchainImageCount
    IndentSpaces(out, indent);
    *out += "pSwapchainImageCount:           ";
    *out += "uint32_t* = "; // TEQ
    if (pSwapchainImageCount.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pSwapchainImageCount = {false, false, false, nullptr};
        ScalarValueToString(out, pSwapchainImageCount.GetPointer(), vinfo_pSwapchainImageCount); // PWS
    }
    outString += "\n";   // HHS

    // func arg: VkImage* pSwapchainImages
    IndentSpaces(out, indent);
    *out += "pSwapchainImages:               ";
    *out += "VkImage* = "; // TEQ
    if (pSwapchainImages.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pSwapchainImages.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pSwapchainImages = {true, false, false, nullptr};
        ArrayToString<HandlePointerDecoder<VkImage>>(out, indent, 1, "VkImage*", &pSwapchainImages, "pSwapchainImages", *pSwapchainImageCount.GetPointer(),  vinfo_pSwapchainImages);  // CXC
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
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
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkAcquireNextImageKHR(device, swapchain, timeout, semaphore, fence, pImageIndex)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkSwapchainKHR swapchain
    IndentSpaces(out, indent);
    *out += "swapchain:                      ";
    *out += "VkSwapchainKHR = "; // TEQ
    AddrToString(out, swapchain); // PAQ
    outString += "\n";   // HHS

    // func arg: uint64_t timeout
    IndentSpaces(out, indent);
    *out += "timeout:                        ";
    *out += "uint64_t = "; // TEQ
    UnsignedDecimalToString(out, timeout); // UYW
    outString += "\n";   // HHS

    // func arg: VkSemaphore semaphore
    IndentSpaces(out, indent);
    *out += "semaphore:                      ";
    *out += "VkSemaphore = "; // TEQ
    AddrToString(out, semaphore); // PAQ
    outString += "\n";   // HHS

    // func arg: VkFence fence
    IndentSpaces(out, indent);
    *out += "fence:                          ";
    *out += "VkFence = "; // TEQ
    AddrToString(out, fence); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t* pImageIndex
    IndentSpaces(out, indent);
    *out += "pImageIndex:                    ";
    *out += "uint32_t* = "; // TEQ
    if (pImageIndex.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pImageIndex = {false, false, false, nullptr};
        ScalarValueToString(out, pImageIndex.GetPointer(), vinfo_pImageIndex); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkQueuePresentKHR(
    VkResult                                    returnValue,
    format::HandleId                            queue,
    const StructPointerDecoder<Decoded_VkPresentInfoKHR>& pPresentInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkQueuePresentKHR(queue, pPresentInfo)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkQueue queue
    IndentSpaces(out, indent);
    *out += "queue:                          ";
    *out += "VkQueue = "; // TEQ
    AddrToString(out, queue); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkPresentInfoKHR* pPresentInfo
    IndentSpaces(out, indent);
    *out += "pPresentInfo:                   ";
    *out += "const VkPresentInfoKHR* = "; // TEQ
    if (pPresentInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pPresentInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pPresentInfo.GetMetaStructPointer(), indent+1, pPresentInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetDeviceGroupPresentCapabilitiesKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDeviceGroupPresentCapabilitiesKHR>& pDeviceGroupPresentCapabilities)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetDeviceGroupPresentCapabilitiesKHR(device, pDeviceGroupPresentCapabilities)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDeviceGroupPresentCapabilitiesKHR* pDeviceGroupPresentCapabilities
    IndentSpaces(out, indent);
    *out += "pDeviceGroupPresentCapabilities: ";
    *out += "VkDeviceGroupPresentCapabilitiesKHR* = "; // TEQ
    if (pDeviceGroupPresentCapabilities.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pDeviceGroupPresentCapabilities.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pDeviceGroupPresentCapabilities.GetMetaStructPointer(), indent+1, pDeviceGroupPresentCapabilities.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetDeviceGroupSurfacePresentModesKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            surface,
    const PointerDecoder<VkDeviceGroupPresentModeFlagsKHR>& pModes)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetDeviceGroupSurfacePresentModesKHR(device, surface, pModes)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkSurfaceKHR surface
    IndentSpaces(out, indent);
    *out += "surface:                        ";
    *out += "VkSurfaceKHR = "; // TEQ
    AddrToString(out, surface); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDeviceGroupPresentModeFlagsKHR* pModes
    IndentSpaces(out, indent);
    *out += "pModes:                         ";
    *out += "VkDeviceGroupPresentModeFlagsKHR* = "; // TEQ
    if (pModes.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pModes = {false, false, true, EnumToStringVkDeviceGroupPresentModeFlagBitsKHR};
        ScalarValueToString(out, pModes.GetPointer(), vinfo_pModes); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDevicePresentRectanglesKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            surface,
    const PointerDecoder<uint32_t>&             pRectCount,
    const StructPointerDecoder<Decoded_VkRect2D>& pRects)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDevicePresentRectanglesKHR(physicalDevice, surface, pRectCount, pRects)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: VkSurfaceKHR surface
    IndentSpaces(out, indent);
    *out += "surface:                        ";
    *out += "VkSurfaceKHR = "; // TEQ
    AddrToString(out, surface); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t* pRectCount
    IndentSpaces(out, indent);
    *out += "pRectCount:                     ";
    *out += "uint32_t* = "; // TEQ
    if (pRectCount.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pRectCount = {false, false, false, nullptr};
        ScalarValueToString(out, pRectCount.GetPointer(), vinfo_pRectCount); // PWS
    }
    outString += "\n";   // HHS

    // func arg: VkRect2D* pRects
    IndentSpaces(out, indent);
    *out += "pRects:                         ";
    *out += "VkRect2D* = "; // TEQ
    if (pRects.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pRects.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkRect2D>(out, indent+1, 1, "VkRect2D", pRects.GetMetaStructPointer(), "pRects", *pRectCount.GetPointer(), false, pRects.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkAcquireNextImage2KHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkAcquireNextImageInfoKHR>& pAcquireInfo,
    const PointerDecoder<uint32_t>&             pImageIndex)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkAcquireNextImage2KHR(device, pAcquireInfo, pImageIndex)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkAcquireNextImageInfoKHR* pAcquireInfo
    IndentSpaces(out, indent);
    *out += "pAcquireInfo:                   ";
    *out += "const VkAcquireNextImageInfoKHR* = "; // TEQ
    if (pAcquireInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAcquireInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAcquireInfo.GetMetaStructPointer(), indent+1, pAcquireInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: uint32_t* pImageIndex
    IndentSpaces(out, indent);
    *out += "pImageIndex:                    ";
    *out += "uint32_t* = "; // TEQ
    if (pImageIndex.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pImageIndex = {false, false, false, nullptr};
        ScalarValueToString(out, pImageIndex.GetPointer(), vinfo_pImageIndex); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceDisplayPropertiesKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const PointerDecoder<uint32_t>&             pPropertyCount,
    const StructPointerDecoder<Decoded_VkDisplayPropertiesKHR>& pProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceDisplayPropertiesKHR(physicalDevice, pPropertyCount, pProperties)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t* pPropertyCount
    IndentSpaces(out, indent);
    *out += "pPropertyCount:                 ";
    *out += "uint32_t* = "; // TEQ
    if (pPropertyCount.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pPropertyCount = {false, false, false, nullptr};
        ScalarValueToString(out, pPropertyCount.GetPointer(), vinfo_pPropertyCount); // PWS
    }
    outString += "\n";   // HHS

    // func arg: VkDisplayPropertiesKHR* pProperties
    IndentSpaces(out, indent);
    *out += "pProperties:                    ";
    *out += "VkDisplayPropertiesKHR* = "; // TEQ
    if (pProperties.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pProperties.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkDisplayPropertiesKHR>(out, indent+1, 1, "VkDisplayPropertiesKHR", pProperties.GetMetaStructPointer(), "pProperties", *pPropertyCount.GetPointer(), false, pProperties.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceDisplayPlanePropertiesKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const PointerDecoder<uint32_t>&             pPropertyCount,
    const StructPointerDecoder<Decoded_VkDisplayPlanePropertiesKHR>& pProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceDisplayPlanePropertiesKHR(physicalDevice, pPropertyCount, pProperties)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t* pPropertyCount
    IndentSpaces(out, indent);
    *out += "pPropertyCount:                 ";
    *out += "uint32_t* = "; // TEQ
    if (pPropertyCount.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pPropertyCount = {false, false, false, nullptr};
        ScalarValueToString(out, pPropertyCount.GetPointer(), vinfo_pPropertyCount); // PWS
    }
    outString += "\n";   // HHS

    // func arg: VkDisplayPlanePropertiesKHR* pProperties
    IndentSpaces(out, indent);
    *out += "pProperties:                    ";
    *out += "VkDisplayPlanePropertiesKHR* = "; // TEQ
    if (pProperties.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pProperties.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkDisplayPlanePropertiesKHR>(out, indent+1, 1, "VkDisplayPlanePropertiesKHR", pProperties.GetMetaStructPointer(), "pProperties", *pPropertyCount.GetPointer(), false, pProperties.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetDisplayPlaneSupportedDisplaysKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    uint32_t                                    planeIndex,
    const PointerDecoder<uint32_t>&             pDisplayCount,
    const HandlePointerDecoder<VkDisplayKHR>&   pDisplays)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetDisplayPlaneSupportedDisplaysKHR(physicalDevice, planeIndex, pDisplayCount, pDisplays)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t planeIndex
    IndentSpaces(out, indent);
    *out += "planeIndex:                     ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, planeIndex); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t* pDisplayCount
    IndentSpaces(out, indent);
    *out += "pDisplayCount:                  ";
    *out += "uint32_t* = "; // TEQ
    if (pDisplayCount.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pDisplayCount = {false, false, false, nullptr};
        ScalarValueToString(out, pDisplayCount.GetPointer(), vinfo_pDisplayCount); // PWS
    }
    outString += "\n";   // HHS

    // func arg: VkDisplayKHR* pDisplays
    IndentSpaces(out, indent);
    *out += "pDisplays:                      ";
    *out += "VkDisplayKHR* = "; // TEQ
    if (pDisplays.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pDisplays.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pDisplays = {true, false, false, nullptr};
        ArrayToString<HandlePointerDecoder<VkDisplayKHR>>(out, indent, 1, "VkDisplayKHR*", &pDisplays, "pDisplays", *pDisplayCount.GetPointer(),  vinfo_pDisplays);  // CXC
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetDisplayModePropertiesKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            display,
    const PointerDecoder<uint32_t>&             pPropertyCount,
    const StructPointerDecoder<Decoded_VkDisplayModePropertiesKHR>& pProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetDisplayModePropertiesKHR(physicalDevice, display, pPropertyCount, pProperties)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDisplayKHR display
    IndentSpaces(out, indent);
    *out += "display:                        ";
    *out += "VkDisplayKHR = "; // TEQ
    AddrToString(out, display); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t* pPropertyCount
    IndentSpaces(out, indent);
    *out += "pPropertyCount:                 ";
    *out += "uint32_t* = "; // TEQ
    if (pPropertyCount.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pPropertyCount = {false, false, false, nullptr};
        ScalarValueToString(out, pPropertyCount.GetPointer(), vinfo_pPropertyCount); // PWS
    }
    outString += "\n";   // HHS

    // func arg: VkDisplayModePropertiesKHR* pProperties
    IndentSpaces(out, indent);
    *out += "pProperties:                    ";
    *out += "VkDisplayModePropertiesKHR* = "; // TEQ
    if (pProperties.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pProperties.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkDisplayModePropertiesKHR>(out, indent+1, 1, "VkDisplayModePropertiesKHR", pProperties.GetMetaStructPointer(), "pProperties", *pPropertyCount.GetPointer(), false, pProperties.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCreateDisplayModeKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            display,
    const StructPointerDecoder<Decoded_VkDisplayModeCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkDisplayModeKHR>& pMode)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreateDisplayModeKHR(physicalDevice, display, pCreateInfo, pAllocator, pMode)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDisplayKHR display
    IndentSpaces(out, indent);
    *out += "display:                        ";
    *out += "VkDisplayKHR = "; // TEQ
    AddrToString(out, display); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkDisplayModeCreateInfoKHR* pCreateInfo
    IndentSpaces(out, indent);
    *out += "pCreateInfo:                    ";
    *out += "const VkDisplayModeCreateInfoKHR* = "; // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkDisplayModeKHR* pMode
    IndentSpaces(out, indent);
    *out += "pMode:                          ";
    *out += "VkDisplayModeKHR* = "; // TEQ
    if (pMode.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pMode = {true, false, false, nullptr};
        ScalarValueToString(out, pMode.GetPointer(), vinfo_pMode); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetDisplayPlaneCapabilitiesKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            mode,
    uint32_t                                    planeIndex,
    const StructPointerDecoder<Decoded_VkDisplayPlaneCapabilitiesKHR>& pCapabilities)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetDisplayPlaneCapabilitiesKHR(physicalDevice, mode, planeIndex, pCapabilities)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDisplayModeKHR mode
    IndentSpaces(out, indent);
    *out += "mode:                           ";
    *out += "VkDisplayModeKHR = "; // TEQ
    AddrToString(out, mode); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t planeIndex
    IndentSpaces(out, indent);
    *out += "planeIndex:                     ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, planeIndex); // UYW
    outString += "\n";   // HHS

    // func arg: VkDisplayPlaneCapabilitiesKHR* pCapabilities
    IndentSpaces(out, indent);
    *out += "pCapabilities:                  ";
    *out += "VkDisplayPlaneCapabilitiesKHR* = "; // TEQ
    if (pCapabilities.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCapabilities.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCapabilities.GetMetaStructPointer(), indent+1, pCapabilities.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCreateDisplayPlaneSurfaceKHR(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkDisplaySurfaceCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreateDisplayPlaneSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkInstance instance
    IndentSpaces(out, indent);
    *out += "instance:                       ";
    *out += "VkInstance = "; // TEQ
    AddrToString(out, instance); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkDisplaySurfaceCreateInfoKHR* pCreateInfo
    IndentSpaces(out, indent);
    *out += "pCreateInfo:                    ";
    *out += "const VkDisplaySurfaceCreateInfoKHR* = "; // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkSurfaceKHR* pSurface
    IndentSpaces(out, indent);
    *out += "pSurface:                       ";
    *out += "VkSurfaceKHR* = "; // TEQ
    if (pSurface.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pSurface = {true, false, false, nullptr};
        ScalarValueToString(out, pSurface.GetPointer(), vinfo_pSurface); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkCreateSharedSwapchainsKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    swapchainCount,
    const StructPointerDecoder<Decoded_VkSwapchainCreateInfoKHR>& pCreateInfos,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSwapchainKHR>& pSwapchains)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreateSharedSwapchainsKHR(device, swapchainCount, pCreateInfos, pAllocator, pSwapchains)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t swapchainCount
    IndentSpaces(out, indent);
    *out += "swapchainCount:                 ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, swapchainCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkSwapchainCreateInfoKHR* pCreateInfos
    IndentSpaces(out, indent);
    *out += "pCreateInfos:                   ";
    *out += "const VkSwapchainCreateInfoKHR* = "; // TEQ
    if (pCreateInfos.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfos.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkSwapchainCreateInfoKHR>(out, indent+1, 1, "VkSwapchainCreateInfoKHR", pCreateInfos.GetMetaStructPointer(), "pCreateInfos", swapchainCount, false, pCreateInfos.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkSwapchainKHR* pSwapchains
    IndentSpaces(out, indent);
    *out += "pSwapchains:                    ";
    *out += "VkSwapchainKHR* = "; // TEQ
    if (pSwapchains.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pSwapchains.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pSwapchains = {true, false, false, nullptr};
        ArrayToString<HandlePointerDecoder<VkSwapchainKHR>>(out, indent, 1, "VkSwapchainKHR*", &pSwapchains, "pSwapchains", swapchainCount,  vinfo_pSwapchains);  // CXC
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkCreateXlibSurfaceKHR(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkXlibSurfaceCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreateXlibSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkInstance instance
    IndentSpaces(out, indent);
    *out += "instance:                       ";
    *out += "VkInstance = "; // TEQ
    AddrToString(out, instance); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkXlibSurfaceCreateInfoKHR* pCreateInfo
    IndentSpaces(out, indent);
    *out += "pCreateInfo:                    ";
    *out += "const VkXlibSurfaceCreateInfoKHR* = "; // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkSurfaceKHR* pSurface
    IndentSpaces(out, indent);
    *out += "pSurface:                       ";
    *out += "VkSurfaceKHR* = "; // TEQ
    if (pSurface.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pSurface = {true, false, false, nullptr};
        ScalarValueToString(out, pSurface.GetPointer(), vinfo_pSurface); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceXlibPresentationSupportKHR(
    VkBool32                                    returnValue,
    format::HandleId                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    uint64_t                                    dpy,
    size_t                                      visualID)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceXlibPresentationSupportKHR(physicalDevice, queueFamilyIndex, dpy, visualID)");
    fprintf(GetFile(), " returns %u:\n", returnValue);
    outString = ""; //UYT

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t queueFamilyIndex
    IndentSpaces(out, indent);
    *out += "queueFamilyIndex:               ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, queueFamilyIndex); // UYW
    outString += "\n";   // HHS

    // func arg: void* dpy
    IndentSpaces(out, indent);
    *out += "dpy:                            ";
    *out += "void* = "; // TEQ
    AddrToString(out, dpy); // PAQ
    outString += "\n";   // HHS

    // func arg: size_t visualID
    IndentSpaces(out, indent);
    *out += "visualID:                       ";
    *out += "size_t = "; // TEQ
    UnsignedDecimalToString(out, visualID); // UYW
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkCreateXcbSurfaceKHR(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkXcbSurfaceCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreateXcbSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkInstance instance
    IndentSpaces(out, indent);
    *out += "instance:                       ";
    *out += "VkInstance = "; // TEQ
    AddrToString(out, instance); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkXcbSurfaceCreateInfoKHR* pCreateInfo
    IndentSpaces(out, indent);
    *out += "pCreateInfo:                    ";
    *out += "const VkXcbSurfaceCreateInfoKHR* = "; // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkSurfaceKHR* pSurface
    IndentSpaces(out, indent);
    *out += "pSurface:                       ";
    *out += "VkSurfaceKHR* = "; // TEQ
    if (pSurface.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pSurface = {true, false, false, nullptr};
        ScalarValueToString(out, pSurface.GetPointer(), vinfo_pSurface); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceXcbPresentationSupportKHR(
    VkBool32                                    returnValue,
    format::HandleId                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    uint64_t                                    connection,
    uint32_t                                    visual_id)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceXcbPresentationSupportKHR(physicalDevice, queueFamilyIndex, connection, visual_id)");
    fprintf(GetFile(), " returns %u:\n", returnValue);
    outString = ""; //UYT

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t queueFamilyIndex
    IndentSpaces(out, indent);
    *out += "queueFamilyIndex:               ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, queueFamilyIndex); // UYW
    outString += "\n";   // HHS

    // func arg: void* connection
    IndentSpaces(out, indent);
    *out += "connection:                     ";
    *out += "void* = "; // TEQ
    if ( !connection) // WWW
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, connection); // PWR
    }
    outString += "\n";   // HHS

    // func arg: uint32_t visual_id
    IndentSpaces(out, indent);
    *out += "visual_id:                      ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, visual_id); // UYW
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkCreateWaylandSurfaceKHR(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkWaylandSurfaceCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreateWaylandSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkInstance instance
    IndentSpaces(out, indent);
    *out += "instance:                       ";
    *out += "VkInstance = "; // TEQ
    AddrToString(out, instance); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkWaylandSurfaceCreateInfoKHR* pCreateInfo
    IndentSpaces(out, indent);
    *out += "pCreateInfo:                    ";
    *out += "const VkWaylandSurfaceCreateInfoKHR* = "; // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkSurfaceKHR* pSurface
    IndentSpaces(out, indent);
    *out += "pSurface:                       ";
    *out += "VkSurfaceKHR* = "; // TEQ
    if (pSurface.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pSurface = {true, false, false, nullptr};
        ScalarValueToString(out, pSurface.GetPointer(), vinfo_pSurface); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceWaylandPresentationSupportKHR(
    VkBool32                                    returnValue,
    format::HandleId                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    uint64_t                                    display)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceWaylandPresentationSupportKHR(physicalDevice, queueFamilyIndex, display)");
    fprintf(GetFile(), " returns %u:\n", returnValue);
    outString = ""; //UYT

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t queueFamilyIndex
    IndentSpaces(out, indent);
    *out += "queueFamilyIndex:               ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, queueFamilyIndex); // UYW
    outString += "\n";   // HHS

    // func arg: struct void* display
    IndentSpaces(out, indent);
    *out += "display:                        ";
    *out += "struct void* = "; // TEQ
    if ( !display) // WWW
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, display); // PWR
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkCreateAndroidSurfaceKHR(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkAndroidSurfaceCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreateAndroidSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkInstance instance
    IndentSpaces(out, indent);
    *out += "instance:                       ";
    *out += "VkInstance = "; // TEQ
    AddrToString(out, instance); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkAndroidSurfaceCreateInfoKHR* pCreateInfo
    IndentSpaces(out, indent);
    *out += "pCreateInfo:                    ";
    *out += "const VkAndroidSurfaceCreateInfoKHR* = "; // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkSurfaceKHR* pSurface
    IndentSpaces(out, indent);
    *out += "pSurface:                       ";
    *out += "VkSurfaceKHR* = "; // TEQ
    if (pSurface.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pSurface = {true, false, false, nullptr};
        ScalarValueToString(out, pSurface.GetPointer(), vinfo_pSurface); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkCreateWin32SurfaceKHR(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkWin32SurfaceCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreateWin32SurfaceKHR(instance, pCreateInfo, pAllocator, pSurface)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkInstance instance
    IndentSpaces(out, indent);
    *out += "instance:                       ";
    *out += "VkInstance = "; // TEQ
    AddrToString(out, instance); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkWin32SurfaceCreateInfoKHR* pCreateInfo
    IndentSpaces(out, indent);
    *out += "pCreateInfo:                    ";
    *out += "const VkWin32SurfaceCreateInfoKHR* = "; // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkSurfaceKHR* pSurface
    IndentSpaces(out, indent);
    *out += "pSurface:                       ";
    *out += "VkSurfaceKHR* = "; // TEQ
    if (pSurface.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pSurface = {true, false, false, nullptr};
        ScalarValueToString(out, pSurface.GetPointer(), vinfo_pSurface); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceWin32PresentationSupportKHR(
    VkBool32                                    returnValue,
    format::HandleId                            physicalDevice,
    uint32_t                                    queueFamilyIndex)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceWin32PresentationSupportKHR(physicalDevice, queueFamilyIndex)");
    fprintf(GetFile(), " returns %u:\n", returnValue);
    outString = ""; //UYT

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t queueFamilyIndex
    IndentSpaces(out, indent);
    *out += "queueFamilyIndex:               ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, queueFamilyIndex); // UYW
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceFeatures2KHR(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceFeatures2>& pFeatures)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceFeatures2KHR(physicalDevice, pFeatures)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: VkPhysicalDeviceFeatures2* pFeatures
    IndentSpaces(out, indent);
    *out += "pFeatures:                      ";
    *out += "VkPhysicalDeviceFeatures2* = "; // TEQ
    if (pFeatures.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pFeatures.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pFeatures.GetMetaStructPointer(), indent+1, pFeatures.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceProperties2KHR(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceProperties2>& pProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceProperties2KHR(physicalDevice, pProperties)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: VkPhysicalDeviceProperties2* pProperties
    IndentSpaces(out, indent);
    *out += "pProperties:                    ";
    *out += "VkPhysicalDeviceProperties2* = "; // TEQ
    if (pProperties.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pProperties.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pProperties.GetMetaStructPointer(), indent+1, pProperties.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceFormatProperties2KHR(
    format::HandleId                            physicalDevice,
    VkFormat                                    format,
    const StructPointerDecoder<Decoded_VkFormatProperties2>& pFormatProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceFormatProperties2KHR(physicalDevice, format, pFormatProperties)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: VkFormat format
    IndentSpaces(out, indent);
    *out += "format:                         ";
    *out += "VkFormat = "; // TEQ
    EnumToStringVkFormat(out, format); // VSA
    *out += " (";
    UnsignedDecimalToString(out, format);
    *out += ")";
    outString += "\n";   // HHS

    // func arg: VkFormatProperties2* pFormatProperties
    IndentSpaces(out, indent);
    *out += "pFormatProperties:              ";
    *out += "VkFormatProperties2* = "; // TEQ
    if (pFormatProperties.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pFormatProperties.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pFormatProperties.GetMetaStructPointer(), indent+1, pFormatProperties.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceImageFormatProperties2KHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceImageFormatInfo2>& pImageFormatInfo,
    const StructPointerDecoder<Decoded_VkImageFormatProperties2>& pImageFormatProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceImageFormatProperties2KHR(physicalDevice, pImageFormatInfo, pImageFormatProperties)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkPhysicalDeviceImageFormatInfo2* pImageFormatInfo
    IndentSpaces(out, indent);
    *out += "pImageFormatInfo:               ";
    *out += "const VkPhysicalDeviceImageFormatInfo2* = "; // TEQ
    if (pImageFormatInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pImageFormatInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pImageFormatInfo.GetMetaStructPointer(), indent+1, pImageFormatInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkImageFormatProperties2* pImageFormatProperties
    IndentSpaces(out, indent);
    *out += "pImageFormatProperties:         ";
    *out += "VkImageFormatProperties2* = "; // TEQ
    if (pImageFormatProperties.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pImageFormatProperties.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pImageFormatProperties.GetMetaStructPointer(), indent+1, pImageFormatProperties.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceQueueFamilyProperties2KHR(
    format::HandleId                            physicalDevice,
    const PointerDecoder<uint32_t>&             pQueueFamilyPropertyCount,
    const StructPointerDecoder<Decoded_VkQueueFamilyProperties2>& pQueueFamilyProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceQueueFamilyProperties2KHR(physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t* pQueueFamilyPropertyCount
    IndentSpaces(out, indent);
    *out += "pQueueFamilyPropertyCount:      ";
    *out += "uint32_t* = "; // TEQ
    if (pQueueFamilyPropertyCount.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pQueueFamilyPropertyCount = {false, false, false, nullptr};
        ScalarValueToString(out, pQueueFamilyPropertyCount.GetPointer(), vinfo_pQueueFamilyPropertyCount); // PWS
    }
    outString += "\n";   // HHS

    // func arg: VkQueueFamilyProperties2* pQueueFamilyProperties
    IndentSpaces(out, indent);
    *out += "pQueueFamilyProperties:         ";
    *out += "VkQueueFamilyProperties2* = "; // TEQ
    if (pQueueFamilyProperties.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pQueueFamilyProperties.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkQueueFamilyProperties2>(out, indent+1, 1, "VkQueueFamilyProperties2", pQueueFamilyProperties.GetMetaStructPointer(), "pQueueFamilyProperties", *pQueueFamilyPropertyCount.GetPointer(), false, pQueueFamilyProperties.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceMemoryProperties2KHR(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceMemoryProperties2>& pMemoryProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceMemoryProperties2KHR(physicalDevice, pMemoryProperties)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: VkPhysicalDeviceMemoryProperties2* pMemoryProperties
    IndentSpaces(out, indent);
    *out += "pMemoryProperties:              ";
    *out += "VkPhysicalDeviceMemoryProperties2* = "; // TEQ
    if (pMemoryProperties.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pMemoryProperties.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pMemoryProperties.GetMetaStructPointer(), indent+1, pMemoryProperties.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSparseImageFormatProperties2KHR(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceSparseImageFormatInfo2>& pFormatInfo,
    const PointerDecoder<uint32_t>&             pPropertyCount,
    const StructPointerDecoder<Decoded_VkSparseImageFormatProperties2>& pProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceSparseImageFormatProperties2KHR(physicalDevice, pFormatInfo, pPropertyCount, pProperties)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo
    IndentSpaces(out, indent);
    *out += "pFormatInfo:                    ";
    *out += "const VkPhysicalDeviceSparseImageFormatInfo2* = "; // TEQ
    if (pFormatInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pFormatInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pFormatInfo.GetMetaStructPointer(), indent+1, pFormatInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: uint32_t* pPropertyCount
    IndentSpaces(out, indent);
    *out += "pPropertyCount:                 ";
    *out += "uint32_t* = "; // TEQ
    if (pPropertyCount.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pPropertyCount = {false, false, false, nullptr};
        ScalarValueToString(out, pPropertyCount.GetPointer(), vinfo_pPropertyCount); // PWS
    }
    outString += "\n";   // HHS

    // func arg: VkSparseImageFormatProperties2* pProperties
    IndentSpaces(out, indent);
    *out += "pProperties:                    ";
    *out += "VkSparseImageFormatProperties2* = "; // TEQ
    if (pProperties.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pProperties.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkSparseImageFormatProperties2>(out, indent+1, 1, "VkSparseImageFormatProperties2", pProperties.GetMetaStructPointer(), "pProperties", *pPropertyCount.GetPointer(), false, pProperties.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkGetDeviceGroupPeerMemoryFeaturesKHR(
    format::HandleId                            device,
    uint32_t                                    heapIndex,
    uint32_t                                    localDeviceIndex,
    uint32_t                                    remoteDeviceIndex,
    const PointerDecoder<VkPeerMemoryFeatureFlags>& pPeerMemoryFeatures)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetDeviceGroupPeerMemoryFeaturesKHR(device, heapIndex, localDeviceIndex, remoteDeviceIndex, pPeerMemoryFeatures)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t heapIndex
    IndentSpaces(out, indent);
    *out += "heapIndex:                      ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, heapIndex); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t localDeviceIndex
    IndentSpaces(out, indent);
    *out += "localDeviceIndex:               ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, localDeviceIndex); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t remoteDeviceIndex
    IndentSpaces(out, indent);
    *out += "remoteDeviceIndex:              ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, remoteDeviceIndex); // UYW
    outString += "\n";   // HHS

    // func arg: VkPeerMemoryFeatureFlags* pPeerMemoryFeatures
    IndentSpaces(out, indent);
    *out += "pPeerMemoryFeatures:            ";
    *out += "VkPeerMemoryFeatureFlags* = "; // TEQ
    if (pPeerMemoryFeatures.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pPeerMemoryFeatures = {false, false, true, EnumToStringVkPeerMemoryFeatureFlagBits};
        ScalarValueToString(out, pPeerMemoryFeatures.GetPointer(), vinfo_pPeerMemoryFeatures); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdSetDeviceMaskKHR(
    format::HandleId                            commandBuffer,
    uint32_t                                    deviceMask)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdSetDeviceMaskKHR(commandBuffer, deviceMask)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t deviceMask
    IndentSpaces(out, indent);
    *out += "deviceMask:                     ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, deviceMask); // UYW
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
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
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdDispatchBaseKHR(commandBuffer, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t baseGroupX
    IndentSpaces(out, indent);
    *out += "baseGroupX:                     ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, baseGroupX); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t baseGroupY
    IndentSpaces(out, indent);
    *out += "baseGroupY:                     ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, baseGroupY); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t baseGroupZ
    IndentSpaces(out, indent);
    *out += "baseGroupZ:                     ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, baseGroupZ); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t groupCountX
    IndentSpaces(out, indent);
    *out += "groupCountX:                    ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, groupCountX); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t groupCountY
    IndentSpaces(out, indent);
    *out += "groupCountY:                    ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, groupCountY); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t groupCountZ
    IndentSpaces(out, indent);
    *out += "groupCountZ:                    ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, groupCountZ); // UYW
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkTrimCommandPoolKHR(
    format::HandleId                            device,
    format::HandleId                            commandPool,
    VkCommandPoolTrimFlags                      flags)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkTrimCommandPoolKHR(device, commandPool, flags)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkCommandPool commandPool
    IndentSpaces(out, indent);
    *out += "commandPool:                    ";
    *out += "VkCommandPool = "; // TEQ
    AddrToString(out, commandPool); // PAQ
    outString += "\n";   // HHS

    // func arg: VkCommandPoolTrimFlags flags
    IndentSpaces(out, indent);
    *out += "flags:                          ";
    *out += "VkCommandPoolTrimFlags = "; // TEQ
    UnsignedDecimalToString(out, flags); // UYW
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkEnumeratePhysicalDeviceGroupsKHR(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const PointerDecoder<uint32_t>&             pPhysicalDeviceGroupCount,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceGroupProperties>& pPhysicalDeviceGroupProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkEnumeratePhysicalDeviceGroupsKHR(instance, pPhysicalDeviceGroupCount, pPhysicalDeviceGroupProperties)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkInstance instance
    IndentSpaces(out, indent);
    *out += "instance:                       ";
    *out += "VkInstance = "; // TEQ
    AddrToString(out, instance); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t* pPhysicalDeviceGroupCount
    IndentSpaces(out, indent);
    *out += "pPhysicalDeviceGroupCount:      ";
    *out += "uint32_t* = "; // TEQ
    if (pPhysicalDeviceGroupCount.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pPhysicalDeviceGroupCount = {false, false, false, nullptr};
        ScalarValueToString(out, pPhysicalDeviceGroupCount.GetPointer(), vinfo_pPhysicalDeviceGroupCount); // PWS
    }
    outString += "\n";   // HHS

    // func arg: VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties
    IndentSpaces(out, indent);
    *out += "pPhysicalDeviceGroupProperties: ";
    *out += "VkPhysicalDeviceGroupProperties* = "; // TEQ
    if (pPhysicalDeviceGroupProperties.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pPhysicalDeviceGroupProperties.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkPhysicalDeviceGroupProperties>(out, indent+1, 1, "VkPhysicalDeviceGroupProperties", pPhysicalDeviceGroupProperties.GetMetaStructPointer(), "pPhysicalDeviceGroupProperties", *pPhysicalDeviceGroupCount.GetPointer(), false, pPhysicalDeviceGroupProperties.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceExternalBufferPropertiesKHR(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceExternalBufferInfo>& pExternalBufferInfo,
    const StructPointerDecoder<Decoded_VkExternalBufferProperties>& pExternalBufferProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceExternalBufferPropertiesKHR(physicalDevice, pExternalBufferInfo, pExternalBufferProperties)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkPhysicalDeviceExternalBufferInfo* pExternalBufferInfo
    IndentSpaces(out, indent);
    *out += "pExternalBufferInfo:            ";
    *out += "const VkPhysicalDeviceExternalBufferInfo* = "; // TEQ
    if (pExternalBufferInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pExternalBufferInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pExternalBufferInfo.GetMetaStructPointer(), indent+1, pExternalBufferInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkExternalBufferProperties* pExternalBufferProperties
    IndentSpaces(out, indent);
    *out += "pExternalBufferProperties:      ";
    *out += "VkExternalBufferProperties* = "; // TEQ
    if (pExternalBufferProperties.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pExternalBufferProperties.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pExternalBufferProperties.GetMetaStructPointer(), indent+1, pExternalBufferProperties.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkGetMemoryWin32HandleKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkMemoryGetWin32HandleInfoKHR>& pGetWin32HandleInfo,
    const PointerDecoder<uint64_t>&             pHandle)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetMemoryWin32HandleKHR(device, pGetWin32HandleInfo, pHandle)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkMemoryGetWin32HandleInfoKHR* pGetWin32HandleInfo
    IndentSpaces(out, indent);
    *out += "pGetWin32HandleInfo:            ";
    *out += "const VkMemoryGetWin32HandleInfoKHR* = "; // TEQ
    if (pGetWin32HandleInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pGetWin32HandleInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pGetWin32HandleInfo.GetMetaStructPointer(), indent+1, pGetWin32HandleInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: void** pHandle
    IndentSpaces(out, indent);
    *out += "pHandle:                        ";
    *out += "void** = "; // TEQ
    if (pHandle.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pHandle = {false, false, false, nullptr};
        ScalarValueToString(out, pHandle.GetPointer(), vinfo_pHandle); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetMemoryWin32HandlePropertiesKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    VkExternalMemoryHandleTypeFlagBits          handleType,
    uint64_t                                    handle,
    const StructPointerDecoder<Decoded_VkMemoryWin32HandlePropertiesKHR>& pMemoryWin32HandleProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetMemoryWin32HandlePropertiesKHR(device, handleType, handle, pMemoryWin32HandleProperties)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkExternalMemoryHandleTypeFlagBits handleType
    IndentSpaces(out, indent);
    *out += "handleType:                     ";
    *out += "VkExternalMemoryHandleTypeFlagBits = "; // TEQ
    EnumToStringVkExternalMemoryHandleTypeFlagBits(out, handleType); // VSA
    *out += " (";
    UnsignedDecimalToString(out, handleType);
    *out += ")";
    outString += "\n";   // HHS

    // func arg: void* handle
    IndentSpaces(out, indent);
    *out += "handle:                         ";
    *out += "void* = "; // TEQ
    if ( !handle) // WWW
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, handle); // PWR
    }
    outString += "\n";   // HHS

    // func arg: VkMemoryWin32HandlePropertiesKHR* pMemoryWin32HandleProperties
    IndentSpaces(out, indent);
    *out += "pMemoryWin32HandleProperties:   ";
    *out += "VkMemoryWin32HandlePropertiesKHR* = "; // TEQ
    if (pMemoryWin32HandleProperties.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pMemoryWin32HandleProperties.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pMemoryWin32HandleProperties.GetMetaStructPointer(), indent+1, pMemoryWin32HandleProperties.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkGetMemoryFdKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkMemoryGetFdInfoKHR>& pGetFdInfo,
    const PointerDecoder<int>&                  pFd)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetMemoryFdKHR(device, pGetFdInfo, pFd)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkMemoryGetFdInfoKHR* pGetFdInfo
    IndentSpaces(out, indent);
    *out += "pGetFdInfo:                     ";
    *out += "const VkMemoryGetFdInfoKHR* = "; // TEQ
    if (pGetFdInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pGetFdInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pGetFdInfo.GetMetaStructPointer(), indent+1, pGetFdInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: int* pFd
    IndentSpaces(out, indent);
    *out += "pFd:                            ";
    *out += "int* = "; // TEQ
    if (pFd.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pFd = {false, false, false, nullptr};
        ScalarValueToString(out, pFd.GetPointer(), vinfo_pFd); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetMemoryFdPropertiesKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    VkExternalMemoryHandleTypeFlagBits          handleType,
    int                                         fd,
    const StructPointerDecoder<Decoded_VkMemoryFdPropertiesKHR>& pMemoryFdProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetMemoryFdPropertiesKHR(device, handleType, fd, pMemoryFdProperties)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkExternalMemoryHandleTypeFlagBits handleType
    IndentSpaces(out, indent);
    *out += "handleType:                     ";
    *out += "VkExternalMemoryHandleTypeFlagBits = "; // TEQ
    EnumToStringVkExternalMemoryHandleTypeFlagBits(out, handleType); // VSA
    *out += " (";
    UnsignedDecimalToString(out, handleType);
    *out += ")";
    outString += "\n";   // HHS

    // func arg: int fd
    IndentSpaces(out, indent);
    *out += "fd:                             ";
    *out += "int = "; // TEQ
    SignedDecimalToString(out, fd); //EQA
    outString += "\n";   // HHS

    // func arg: VkMemoryFdPropertiesKHR* pMemoryFdProperties
    IndentSpaces(out, indent);
    *out += "pMemoryFdProperties:            ";
    *out += "VkMemoryFdPropertiesKHR* = "; // TEQ
    if (pMemoryFdProperties.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pMemoryFdProperties.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pMemoryFdProperties.GetMetaStructPointer(), indent+1, pMemoryFdProperties.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceExternalSemaphoreInfo>& pExternalSemaphoreInfo,
    const StructPointerDecoder<Decoded_VkExternalSemaphoreProperties>& pExternalSemaphoreProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceExternalSemaphorePropertiesKHR(physicalDevice, pExternalSemaphoreInfo, pExternalSemaphoreProperties)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo
    IndentSpaces(out, indent);
    *out += "pExternalSemaphoreInfo:         ";
    *out += "const VkPhysicalDeviceExternalSemaphoreInfo* = "; // TEQ
    if (pExternalSemaphoreInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pExternalSemaphoreInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pExternalSemaphoreInfo.GetMetaStructPointer(), indent+1, pExternalSemaphoreInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkExternalSemaphoreProperties* pExternalSemaphoreProperties
    IndentSpaces(out, indent);
    *out += "pExternalSemaphoreProperties:   ";
    *out += "VkExternalSemaphoreProperties* = "; // TEQ
    if (pExternalSemaphoreProperties.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pExternalSemaphoreProperties.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pExternalSemaphoreProperties.GetMetaStructPointer(), indent+1, pExternalSemaphoreProperties.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkImportSemaphoreWin32HandleKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImportSemaphoreWin32HandleInfoKHR>& pImportSemaphoreWin32HandleInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkImportSemaphoreWin32HandleKHR(device, pImportSemaphoreWin32HandleInfo)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkImportSemaphoreWin32HandleInfoKHR* pImportSemaphoreWin32HandleInfo
    IndentSpaces(out, indent);
    *out += "pImportSemaphoreWin32HandleInfo: ";
    *out += "const VkImportSemaphoreWin32HandleInfoKHR* = "; // TEQ
    if (pImportSemaphoreWin32HandleInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pImportSemaphoreWin32HandleInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pImportSemaphoreWin32HandleInfo.GetMetaStructPointer(), indent+1, pImportSemaphoreWin32HandleInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetSemaphoreWin32HandleKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSemaphoreGetWin32HandleInfoKHR>& pGetWin32HandleInfo,
    const PointerDecoder<uint64_t>&             pHandle)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetSemaphoreWin32HandleKHR(device, pGetWin32HandleInfo, pHandle)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkSemaphoreGetWin32HandleInfoKHR* pGetWin32HandleInfo
    IndentSpaces(out, indent);
    *out += "pGetWin32HandleInfo:            ";
    *out += "const VkSemaphoreGetWin32HandleInfoKHR* = "; // TEQ
    if (pGetWin32HandleInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pGetWin32HandleInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pGetWin32HandleInfo.GetMetaStructPointer(), indent+1, pGetWin32HandleInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: void** pHandle
    IndentSpaces(out, indent);
    *out += "pHandle:                        ";
    *out += "void** = "; // TEQ
    if (pHandle.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pHandle = {false, false, false, nullptr};
        ScalarValueToString(out, pHandle.GetPointer(), vinfo_pHandle); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkImportSemaphoreFdKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImportSemaphoreFdInfoKHR>& pImportSemaphoreFdInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkImportSemaphoreFdKHR(device, pImportSemaphoreFdInfo)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkImportSemaphoreFdInfoKHR* pImportSemaphoreFdInfo
    IndentSpaces(out, indent);
    *out += "pImportSemaphoreFdInfo:         ";
    *out += "const VkImportSemaphoreFdInfoKHR* = "; // TEQ
    if (pImportSemaphoreFdInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pImportSemaphoreFdInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pImportSemaphoreFdInfo.GetMetaStructPointer(), indent+1, pImportSemaphoreFdInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetSemaphoreFdKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSemaphoreGetFdInfoKHR>& pGetFdInfo,
    const PointerDecoder<int>&                  pFd)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetSemaphoreFdKHR(device, pGetFdInfo, pFd)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkSemaphoreGetFdInfoKHR* pGetFdInfo
    IndentSpaces(out, indent);
    *out += "pGetFdInfo:                     ";
    *out += "const VkSemaphoreGetFdInfoKHR* = "; // TEQ
    if (pGetFdInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pGetFdInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pGetFdInfo.GetMetaStructPointer(), indent+1, pGetFdInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: int* pFd
    IndentSpaces(out, indent);
    *out += "pFd:                            ";
    *out += "int* = "; // TEQ
    if (pFd.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pFd = {false, false, false, nullptr};
        ScalarValueToString(out, pFd.GetPointer(), vinfo_pFd); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkCmdPushDescriptorSetKHR(
    format::HandleId                            commandBuffer,
    VkPipelineBindPoint                         pipelineBindPoint,
    format::HandleId                            layout,
    uint32_t                                    set,
    uint32_t                                    descriptorWriteCount,
    const StructPointerDecoder<Decoded_VkWriteDescriptorSet>& pDescriptorWrites)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdPushDescriptorSetKHR(commandBuffer, pipelineBindPoint, layout, set, descriptorWriteCount, pDescriptorWrites)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkPipelineBindPoint pipelineBindPoint
    IndentSpaces(out, indent);
    *out += "pipelineBindPoint:              ";
    *out += "VkPipelineBindPoint = "; // TEQ
    EnumToStringVkPipelineBindPoint(out, pipelineBindPoint); // VSA
    *out += " (";
    UnsignedDecimalToString(out, pipelineBindPoint);
    *out += ")";
    outString += "\n";   // HHS

    // func arg: VkPipelineLayout layout
    IndentSpaces(out, indent);
    *out += "layout:                         ";
    *out += "VkPipelineLayout = "; // TEQ
    AddrToString(out, layout); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t set
    IndentSpaces(out, indent);
    *out += "set:                            ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, set); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t descriptorWriteCount
    IndentSpaces(out, indent);
    *out += "descriptorWriteCount:           ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, descriptorWriteCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkWriteDescriptorSet* pDescriptorWrites
    IndentSpaces(out, indent);
    *out += "pDescriptorWrites:              ";
    *out += "const VkWriteDescriptorSet* = "; // TEQ
    if (pDescriptorWrites.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pDescriptorWrites.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkWriteDescriptorSet>(out, indent+1, 1, "VkWriteDescriptorSet", pDescriptorWrites.GetMetaStructPointer(), "pDescriptorWrites", descriptorWriteCount, false, pDescriptorWrites.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkCreateDescriptorUpdateTemplateKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDescriptorUpdateTemplateCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkDescriptorUpdateTemplate>& pDescriptorUpdateTemplate)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreateDescriptorUpdateTemplateKHR(device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo
    IndentSpaces(out, indent);
    *out += "pCreateInfo:                    ";
    *out += "const VkDescriptorUpdateTemplateCreateInfo* = "; // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkDescriptorUpdateTemplate* pDescriptorUpdateTemplate
    IndentSpaces(out, indent);
    *out += "pDescriptorUpdateTemplate:      ";
    *out += "VkDescriptorUpdateTemplate* = "; // TEQ
    if (pDescriptorUpdateTemplate.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pDescriptorUpdateTemplate = {true, false, false, nullptr};
        ScalarValueToString(out, pDescriptorUpdateTemplate.GetPointer(), vinfo_pDescriptorUpdateTemplate); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkDestroyDescriptorUpdateTemplateKHR(
    format::HandleId                            device,
    format::HandleId                            descriptorUpdateTemplate,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkDestroyDescriptorUpdateTemplateKHR(device, descriptorUpdateTemplate, pAllocator)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDescriptorUpdateTemplate descriptorUpdateTemplate
    IndentSpaces(out, indent);
    *out += "descriptorUpdateTemplate:       ";
    *out += "VkDescriptorUpdateTemplate = "; // TEQ
    AddrToString(out, descriptorUpdateTemplate); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkCreateRenderPass2KHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkRenderPassCreateInfo2KHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkRenderPass>&   pRenderPass)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreateRenderPass2KHR(device, pCreateInfo, pAllocator, pRenderPass)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkRenderPassCreateInfo2KHR* pCreateInfo
    IndentSpaces(out, indent);
    *out += "pCreateInfo:                    ";
    *out += "const VkRenderPassCreateInfo2KHR* = "; // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkRenderPass* pRenderPass
    IndentSpaces(out, indent);
    *out += "pRenderPass:                    ";
    *out += "VkRenderPass* = "; // TEQ
    if (pRenderPass.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pRenderPass = {true, false, false, nullptr};
        ScalarValueToString(out, pRenderPass.GetPointer(), vinfo_pRenderPass); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdBeginRenderPass2KHR(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkRenderPassBeginInfo>& pRenderPassBegin,
    const StructPointerDecoder<Decoded_VkSubpassBeginInfoKHR>& pSubpassBeginInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdBeginRenderPass2KHR(commandBuffer, pRenderPassBegin, pSubpassBeginInfo)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkRenderPassBeginInfo* pRenderPassBegin
    IndentSpaces(out, indent);
    *out += "pRenderPassBegin:               ";
    *out += "const VkRenderPassBeginInfo* = "; // TEQ
    if (pRenderPassBegin.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pRenderPassBegin.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pRenderPassBegin.GetMetaStructPointer(), indent+1, pRenderPassBegin.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkSubpassBeginInfoKHR* pSubpassBeginInfo
    IndentSpaces(out, indent);
    *out += "pSubpassBeginInfo:              ";
    *out += "const VkSubpassBeginInfoKHR* = "; // TEQ
    if (pSubpassBeginInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pSubpassBeginInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pSubpassBeginInfo.GetMetaStructPointer(), indent+1, pSubpassBeginInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdNextSubpass2KHR(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkSubpassBeginInfoKHR>& pSubpassBeginInfo,
    const StructPointerDecoder<Decoded_VkSubpassEndInfoKHR>& pSubpassEndInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdNextSubpass2KHR(commandBuffer, pSubpassBeginInfo, pSubpassEndInfo)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkSubpassBeginInfoKHR* pSubpassBeginInfo
    IndentSpaces(out, indent);
    *out += "pSubpassBeginInfo:              ";
    *out += "const VkSubpassBeginInfoKHR* = "; // TEQ
    if (pSubpassBeginInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pSubpassBeginInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pSubpassBeginInfo.GetMetaStructPointer(), indent+1, pSubpassBeginInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkSubpassEndInfoKHR* pSubpassEndInfo
    IndentSpaces(out, indent);
    *out += "pSubpassEndInfo:                ";
    *out += "const VkSubpassEndInfoKHR* = "; // TEQ
    if (pSubpassEndInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pSubpassEndInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pSubpassEndInfo.GetMetaStructPointer(), indent+1, pSubpassEndInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdEndRenderPass2KHR(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkSubpassEndInfoKHR>& pSubpassEndInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdEndRenderPass2KHR(commandBuffer, pSubpassEndInfo)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkSubpassEndInfoKHR* pSubpassEndInfo
    IndentSpaces(out, indent);
    *out += "pSubpassEndInfo:                ";
    *out += "const VkSubpassEndInfoKHR* = "; // TEQ
    if (pSubpassEndInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pSubpassEndInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pSubpassEndInfo.GetMetaStructPointer(), indent+1, pSubpassEndInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkGetSwapchainStatusKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetSwapchainStatusKHR(device, swapchain)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkSwapchainKHR swapchain
    IndentSpaces(out, indent);
    *out += "swapchain:                      ";
    *out += "VkSwapchainKHR = "; // TEQ
    AddrToString(out, swapchain); // PAQ
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceExternalFencePropertiesKHR(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceExternalFenceInfo>& pExternalFenceInfo,
    const StructPointerDecoder<Decoded_VkExternalFenceProperties>& pExternalFenceProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceExternalFencePropertiesKHR(physicalDevice, pExternalFenceInfo, pExternalFenceProperties)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkPhysicalDeviceExternalFenceInfo* pExternalFenceInfo
    IndentSpaces(out, indent);
    *out += "pExternalFenceInfo:             ";
    *out += "const VkPhysicalDeviceExternalFenceInfo* = "; // TEQ
    if (pExternalFenceInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pExternalFenceInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pExternalFenceInfo.GetMetaStructPointer(), indent+1, pExternalFenceInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkExternalFenceProperties* pExternalFenceProperties
    IndentSpaces(out, indent);
    *out += "pExternalFenceProperties:       ";
    *out += "VkExternalFenceProperties* = "; // TEQ
    if (pExternalFenceProperties.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pExternalFenceProperties.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pExternalFenceProperties.GetMetaStructPointer(), indent+1, pExternalFenceProperties.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkImportFenceWin32HandleKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImportFenceWin32HandleInfoKHR>& pImportFenceWin32HandleInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkImportFenceWin32HandleKHR(device, pImportFenceWin32HandleInfo)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkImportFenceWin32HandleInfoKHR* pImportFenceWin32HandleInfo
    IndentSpaces(out, indent);
    *out += "pImportFenceWin32HandleInfo:    ";
    *out += "const VkImportFenceWin32HandleInfoKHR* = "; // TEQ
    if (pImportFenceWin32HandleInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pImportFenceWin32HandleInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pImportFenceWin32HandleInfo.GetMetaStructPointer(), indent+1, pImportFenceWin32HandleInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetFenceWin32HandleKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkFenceGetWin32HandleInfoKHR>& pGetWin32HandleInfo,
    const PointerDecoder<uint64_t>&             pHandle)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetFenceWin32HandleKHR(device, pGetWin32HandleInfo, pHandle)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkFenceGetWin32HandleInfoKHR* pGetWin32HandleInfo
    IndentSpaces(out, indent);
    *out += "pGetWin32HandleInfo:            ";
    *out += "const VkFenceGetWin32HandleInfoKHR* = "; // TEQ
    if (pGetWin32HandleInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pGetWin32HandleInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pGetWin32HandleInfo.GetMetaStructPointer(), indent+1, pGetWin32HandleInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: void** pHandle
    IndentSpaces(out, indent);
    *out += "pHandle:                        ";
    *out += "void** = "; // TEQ
    if (pHandle.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pHandle = {false, false, false, nullptr};
        ScalarValueToString(out, pHandle.GetPointer(), vinfo_pHandle); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkImportFenceFdKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImportFenceFdInfoKHR>& pImportFenceFdInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkImportFenceFdKHR(device, pImportFenceFdInfo)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkImportFenceFdInfoKHR* pImportFenceFdInfo
    IndentSpaces(out, indent);
    *out += "pImportFenceFdInfo:             ";
    *out += "const VkImportFenceFdInfoKHR* = "; // TEQ
    if (pImportFenceFdInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pImportFenceFdInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pImportFenceFdInfo.GetMetaStructPointer(), indent+1, pImportFenceFdInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetFenceFdKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkFenceGetFdInfoKHR>& pGetFdInfo,
    const PointerDecoder<int>&                  pFd)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetFenceFdKHR(device, pGetFdInfo, pFd)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkFenceGetFdInfoKHR* pGetFdInfo
    IndentSpaces(out, indent);
    *out += "pGetFdInfo:                     ";
    *out += "const VkFenceGetFdInfoKHR* = "; // TEQ
    if (pGetFdInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pGetFdInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pGetFdInfo.GetMetaStructPointer(), indent+1, pGetFdInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: int* pFd
    IndentSpaces(out, indent);
    *out += "pFd:                            ";
    *out += "int* = "; // TEQ
    if (pFd.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pFd = {false, false, false, nullptr};
        ScalarValueToString(out, pFd.GetPointer(), vinfo_pFd); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSurfaceCapabilities2KHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceSurfaceInfo2KHR>& pSurfaceInfo,
    const StructPointerDecoder<Decoded_VkSurfaceCapabilities2KHR>& pSurfaceCapabilities)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceSurfaceCapabilities2KHR(physicalDevice, pSurfaceInfo, pSurfaceCapabilities)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo
    IndentSpaces(out, indent);
    *out += "pSurfaceInfo:                   ";
    *out += "const VkPhysicalDeviceSurfaceInfo2KHR* = "; // TEQ
    if (pSurfaceInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pSurfaceInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pSurfaceInfo.GetMetaStructPointer(), indent+1, pSurfaceInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkSurfaceCapabilities2KHR* pSurfaceCapabilities
    IndentSpaces(out, indent);
    *out += "pSurfaceCapabilities:           ";
    *out += "VkSurfaceCapabilities2KHR* = "; // TEQ
    if (pSurfaceCapabilities.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pSurfaceCapabilities.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pSurfaceCapabilities.GetMetaStructPointer(), indent+1, pSurfaceCapabilities.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSurfaceFormats2KHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceSurfaceInfo2KHR>& pSurfaceInfo,
    const PointerDecoder<uint32_t>&             pSurfaceFormatCount,
    const StructPointerDecoder<Decoded_VkSurfaceFormat2KHR>& pSurfaceFormats)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceSurfaceFormats2KHR(physicalDevice, pSurfaceInfo, pSurfaceFormatCount, pSurfaceFormats)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo
    IndentSpaces(out, indent);
    *out += "pSurfaceInfo:                   ";
    *out += "const VkPhysicalDeviceSurfaceInfo2KHR* = "; // TEQ
    if (pSurfaceInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pSurfaceInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pSurfaceInfo.GetMetaStructPointer(), indent+1, pSurfaceInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: uint32_t* pSurfaceFormatCount
    IndentSpaces(out, indent);
    *out += "pSurfaceFormatCount:            ";
    *out += "uint32_t* = "; // TEQ
    if (pSurfaceFormatCount.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pSurfaceFormatCount = {false, false, false, nullptr};
        ScalarValueToString(out, pSurfaceFormatCount.GetPointer(), vinfo_pSurfaceFormatCount); // PWS
    }
    outString += "\n";   // HHS

    // func arg: VkSurfaceFormat2KHR* pSurfaceFormats
    IndentSpaces(out, indent);
    *out += "pSurfaceFormats:                ";
    *out += "VkSurfaceFormat2KHR* = "; // TEQ
    if (pSurfaceFormats.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pSurfaceFormats.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkSurfaceFormat2KHR>(out, indent+1, 1, "VkSurfaceFormat2KHR", pSurfaceFormats.GetMetaStructPointer(), "pSurfaceFormats", *pSurfaceFormatCount.GetPointer(), false, pSurfaceFormats.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceDisplayProperties2KHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const PointerDecoder<uint32_t>&             pPropertyCount,
    const StructPointerDecoder<Decoded_VkDisplayProperties2KHR>& pProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceDisplayProperties2KHR(physicalDevice, pPropertyCount, pProperties)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t* pPropertyCount
    IndentSpaces(out, indent);
    *out += "pPropertyCount:                 ";
    *out += "uint32_t* = "; // TEQ
    if (pPropertyCount.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pPropertyCount = {false, false, false, nullptr};
        ScalarValueToString(out, pPropertyCount.GetPointer(), vinfo_pPropertyCount); // PWS
    }
    outString += "\n";   // HHS

    // func arg: VkDisplayProperties2KHR* pProperties
    IndentSpaces(out, indent);
    *out += "pProperties:                    ";
    *out += "VkDisplayProperties2KHR* = "; // TEQ
    if (pProperties.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pProperties.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkDisplayProperties2KHR>(out, indent+1, 1, "VkDisplayProperties2KHR", pProperties.GetMetaStructPointer(), "pProperties", *pPropertyCount.GetPointer(), false, pProperties.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceDisplayPlaneProperties2KHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const PointerDecoder<uint32_t>&             pPropertyCount,
    const StructPointerDecoder<Decoded_VkDisplayPlaneProperties2KHR>& pProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceDisplayPlaneProperties2KHR(physicalDevice, pPropertyCount, pProperties)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t* pPropertyCount
    IndentSpaces(out, indent);
    *out += "pPropertyCount:                 ";
    *out += "uint32_t* = "; // TEQ
    if (pPropertyCount.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pPropertyCount = {false, false, false, nullptr};
        ScalarValueToString(out, pPropertyCount.GetPointer(), vinfo_pPropertyCount); // PWS
    }
    outString += "\n";   // HHS

    // func arg: VkDisplayPlaneProperties2KHR* pProperties
    IndentSpaces(out, indent);
    *out += "pProperties:                    ";
    *out += "VkDisplayPlaneProperties2KHR* = "; // TEQ
    if (pProperties.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pProperties.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkDisplayPlaneProperties2KHR>(out, indent+1, 1, "VkDisplayPlaneProperties2KHR", pProperties.GetMetaStructPointer(), "pProperties", *pPropertyCount.GetPointer(), false, pProperties.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetDisplayModeProperties2KHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            display,
    const PointerDecoder<uint32_t>&             pPropertyCount,
    const StructPointerDecoder<Decoded_VkDisplayModeProperties2KHR>& pProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetDisplayModeProperties2KHR(physicalDevice, display, pPropertyCount, pProperties)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDisplayKHR display
    IndentSpaces(out, indent);
    *out += "display:                        ";
    *out += "VkDisplayKHR = "; // TEQ
    AddrToString(out, display); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t* pPropertyCount
    IndentSpaces(out, indent);
    *out += "pPropertyCount:                 ";
    *out += "uint32_t* = "; // TEQ
    if (pPropertyCount.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pPropertyCount = {false, false, false, nullptr};
        ScalarValueToString(out, pPropertyCount.GetPointer(), vinfo_pPropertyCount); // PWS
    }
    outString += "\n";   // HHS

    // func arg: VkDisplayModeProperties2KHR* pProperties
    IndentSpaces(out, indent);
    *out += "pProperties:                    ";
    *out += "VkDisplayModeProperties2KHR* = "; // TEQ
    if (pProperties.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pProperties.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkDisplayModeProperties2KHR>(out, indent+1, 1, "VkDisplayModeProperties2KHR", pProperties.GetMetaStructPointer(), "pProperties", *pPropertyCount.GetPointer(), false, pProperties.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetDisplayPlaneCapabilities2KHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkDisplayPlaneInfo2KHR>& pDisplayPlaneInfo,
    const StructPointerDecoder<Decoded_VkDisplayPlaneCapabilities2KHR>& pCapabilities)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetDisplayPlaneCapabilities2KHR(physicalDevice, pDisplayPlaneInfo, pCapabilities)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkDisplayPlaneInfo2KHR* pDisplayPlaneInfo
    IndentSpaces(out, indent);
    *out += "pDisplayPlaneInfo:              ";
    *out += "const VkDisplayPlaneInfo2KHR* = "; // TEQ
    if (pDisplayPlaneInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pDisplayPlaneInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pDisplayPlaneInfo.GetMetaStructPointer(), indent+1, pDisplayPlaneInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkDisplayPlaneCapabilities2KHR* pCapabilities
    IndentSpaces(out, indent);
    *out += "pCapabilities:                  ";
    *out += "VkDisplayPlaneCapabilities2KHR* = "; // TEQ
    if (pCapabilities.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCapabilities.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCapabilities.GetMetaStructPointer(), indent+1, pCapabilities.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkGetImageMemoryRequirements2KHR(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImageMemoryRequirementsInfo2>& pInfo,
    const StructPointerDecoder<Decoded_VkMemoryRequirements2>& pMemoryRequirements)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetImageMemoryRequirements2KHR(device, pInfo, pMemoryRequirements)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkImageMemoryRequirementsInfo2* pInfo
    IndentSpaces(out, indent);
    *out += "pInfo:                          ";
    *out += "const VkImageMemoryRequirementsInfo2* = "; // TEQ
    if (pInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pInfo.GetMetaStructPointer(), indent+1, pInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkMemoryRequirements2* pMemoryRequirements
    IndentSpaces(out, indent);
    *out += "pMemoryRequirements:            ";
    *out += "VkMemoryRequirements2* = "; // TEQ
    if (pMemoryRequirements.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pMemoryRequirements.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pMemoryRequirements.GetMetaStructPointer(), indent+1, pMemoryRequirements.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetBufferMemoryRequirements2KHR(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkBufferMemoryRequirementsInfo2>& pInfo,
    const StructPointerDecoder<Decoded_VkMemoryRequirements2>& pMemoryRequirements)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetBufferMemoryRequirements2KHR(device, pInfo, pMemoryRequirements)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkBufferMemoryRequirementsInfo2* pInfo
    IndentSpaces(out, indent);
    *out += "pInfo:                          ";
    *out += "const VkBufferMemoryRequirementsInfo2* = "; // TEQ
    if (pInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pInfo.GetMetaStructPointer(), indent+1, pInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkMemoryRequirements2* pMemoryRequirements
    IndentSpaces(out, indent);
    *out += "pMemoryRequirements:            ";
    *out += "VkMemoryRequirements2* = "; // TEQ
    if (pMemoryRequirements.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pMemoryRequirements.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pMemoryRequirements.GetMetaStructPointer(), indent+1, pMemoryRequirements.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetImageSparseMemoryRequirements2KHR(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImageSparseMemoryRequirementsInfo2>& pInfo,
    const PointerDecoder<uint32_t>&             pSparseMemoryRequirementCount,
    const StructPointerDecoder<Decoded_VkSparseImageMemoryRequirements2>& pSparseMemoryRequirements)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetImageSparseMemoryRequirements2KHR(device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkImageSparseMemoryRequirementsInfo2* pInfo
    IndentSpaces(out, indent);
    *out += "pInfo:                          ";
    *out += "const VkImageSparseMemoryRequirementsInfo2* = "; // TEQ
    if (pInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pInfo.GetMetaStructPointer(), indent+1, pInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: uint32_t* pSparseMemoryRequirementCount
    IndentSpaces(out, indent);
    *out += "pSparseMemoryRequirementCount:  ";
    *out += "uint32_t* = "; // TEQ
    if (pSparseMemoryRequirementCount.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pSparseMemoryRequirementCount = {false, false, false, nullptr};
        ScalarValueToString(out, pSparseMemoryRequirementCount.GetPointer(), vinfo_pSparseMemoryRequirementCount); // PWS
    }
    outString += "\n";   // HHS

    // func arg: VkSparseImageMemoryRequirements2* pSparseMemoryRequirements
    IndentSpaces(out, indent);
    *out += "pSparseMemoryRequirements:      ";
    *out += "VkSparseImageMemoryRequirements2* = "; // TEQ
    if (pSparseMemoryRequirements.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pSparseMemoryRequirements.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkSparseImageMemoryRequirements2>(out, indent+1, 1, "VkSparseImageMemoryRequirements2", pSparseMemoryRequirements.GetMetaStructPointer(), "pSparseMemoryRequirements", *pSparseMemoryRequirementCount.GetPointer(), false, pSparseMemoryRequirements.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkCreateSamplerYcbcrConversionKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSamplerYcbcrConversionCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSamplerYcbcrConversion>& pYcbcrConversion)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreateSamplerYcbcrConversionKHR(device, pCreateInfo, pAllocator, pYcbcrConversion)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkSamplerYcbcrConversionCreateInfo* pCreateInfo
    IndentSpaces(out, indent);
    *out += "pCreateInfo:                    ";
    *out += "const VkSamplerYcbcrConversionCreateInfo* = "; // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkSamplerYcbcrConversion* pYcbcrConversion
    IndentSpaces(out, indent);
    *out += "pYcbcrConversion:               ";
    *out += "VkSamplerYcbcrConversion* = "; // TEQ
    if (pYcbcrConversion.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pYcbcrConversion = {true, false, false, nullptr};
        ScalarValueToString(out, pYcbcrConversion.GetPointer(), vinfo_pYcbcrConversion); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkDestroySamplerYcbcrConversionKHR(
    format::HandleId                            device,
    format::HandleId                            ycbcrConversion,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkDestroySamplerYcbcrConversionKHR(device, ycbcrConversion, pAllocator)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkSamplerYcbcrConversion ycbcrConversion
    IndentSpaces(out, indent);
    *out += "ycbcrConversion:                ";
    *out += "VkSamplerYcbcrConversion = "; // TEQ
    AddrToString(out, ycbcrConversion); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkBindBufferMemory2KHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    bindInfoCount,
    const StructPointerDecoder<Decoded_VkBindBufferMemoryInfo>& pBindInfos)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkBindBufferMemory2KHR(device, bindInfoCount, pBindInfos)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t bindInfoCount
    IndentSpaces(out, indent);
    *out += "bindInfoCount:                  ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, bindInfoCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkBindBufferMemoryInfo* pBindInfos
    IndentSpaces(out, indent);
    *out += "pBindInfos:                     ";
    *out += "const VkBindBufferMemoryInfo* = "; // TEQ
    if (pBindInfos.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pBindInfos.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkBindBufferMemoryInfo>(out, indent+1, 1, "VkBindBufferMemoryInfo", pBindInfos.GetMetaStructPointer(), "pBindInfos", bindInfoCount, false, pBindInfos.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkBindImageMemory2KHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    bindInfoCount,
    const StructPointerDecoder<Decoded_VkBindImageMemoryInfo>& pBindInfos)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkBindImageMemory2KHR(device, bindInfoCount, pBindInfos)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t bindInfoCount
    IndentSpaces(out, indent);
    *out += "bindInfoCount:                  ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, bindInfoCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkBindImageMemoryInfo* pBindInfos
    IndentSpaces(out, indent);
    *out += "pBindInfos:                     ";
    *out += "const VkBindImageMemoryInfo* = "; // TEQ
    if (pBindInfos.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pBindInfos.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkBindImageMemoryInfo>(out, indent+1, 1, "VkBindImageMemoryInfo", pBindInfos.GetMetaStructPointer(), "pBindInfos", bindInfoCount, false, pBindInfos.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkGetDescriptorSetLayoutSupportKHR(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDescriptorSetLayoutCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkDescriptorSetLayoutSupport>& pSupport)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetDescriptorSetLayoutSupportKHR(device, pCreateInfo, pSupport)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkDescriptorSetLayoutCreateInfo* pCreateInfo
    IndentSpaces(out, indent);
    *out += "pCreateInfo:                    ";
    *out += "const VkDescriptorSetLayoutCreateInfo* = "; // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkDescriptorSetLayoutSupport* pSupport
    IndentSpaces(out, indent);
    *out += "pSupport:                       ";
    *out += "VkDescriptorSetLayoutSupport* = "; // TEQ
    if (pSupport.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pSupport.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pSupport.GetMetaStructPointer(), indent+1, pSupport.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
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
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdDrawIndirectCountKHR(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkBuffer buffer
    IndentSpaces(out, indent);
    *out += "buffer:                         ";
    *out += "VkBuffer = "; // TEQ
    AddrToString(out, buffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDeviceSize offset
    IndentSpaces(out, indent);
    *out += "offset:                         ";
    *out += "VkDeviceSize = "; // TEQ
    SignedDecimalToString(out, offset); //EQA
    outString += "\n";   // HHS

    // func arg: VkBuffer countBuffer
    IndentSpaces(out, indent);
    *out += "countBuffer:                    ";
    *out += "VkBuffer = "; // TEQ
    AddrToString(out, countBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDeviceSize countBufferOffset
    IndentSpaces(out, indent);
    *out += "countBufferOffset:              ";
    *out += "VkDeviceSize = "; // TEQ
    SignedDecimalToString(out, countBufferOffset); //EQA
    outString += "\n";   // HHS

    // func arg: uint32_t maxDrawCount
    IndentSpaces(out, indent);
    *out += "maxDrawCount:                   ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, maxDrawCount); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t stride
    IndentSpaces(out, indent);
    *out += "stride:                         ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, stride); // UYW
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
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
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdDrawIndexedIndirectCountKHR(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkBuffer buffer
    IndentSpaces(out, indent);
    *out += "buffer:                         ";
    *out += "VkBuffer = "; // TEQ
    AddrToString(out, buffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDeviceSize offset
    IndentSpaces(out, indent);
    *out += "offset:                         ";
    *out += "VkDeviceSize = "; // TEQ
    SignedDecimalToString(out, offset); //EQA
    outString += "\n";   // HHS

    // func arg: VkBuffer countBuffer
    IndentSpaces(out, indent);
    *out += "countBuffer:                    ";
    *out += "VkBuffer = "; // TEQ
    AddrToString(out, countBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDeviceSize countBufferOffset
    IndentSpaces(out, indent);
    *out += "countBufferOffset:              ";
    *out += "VkDeviceSize = "; // TEQ
    SignedDecimalToString(out, countBufferOffset); //EQA
    outString += "\n";   // HHS

    // func arg: uint32_t maxDrawCount
    IndentSpaces(out, indent);
    *out += "maxDrawCount:                   ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, maxDrawCount); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t stride
    IndentSpaces(out, indent);
    *out += "stride:                         ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, stride); // UYW
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkGetSemaphoreCounterValueKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            semaphore,
    const PointerDecoder<uint64_t>&             pValue)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetSemaphoreCounterValueKHR(device, semaphore, pValue)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkSemaphore semaphore
    IndentSpaces(out, indent);
    *out += "semaphore:                      ";
    *out += "VkSemaphore = "; // TEQ
    AddrToString(out, semaphore); // PAQ
    outString += "\n";   // HHS

    // func arg: uint64_t* pValue
    IndentSpaces(out, indent);
    *out += "pValue:                         ";
    *out += "uint64_t* = "; // TEQ
    if (pValue.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pValue = {false, false, false, nullptr};
        ScalarValueToString(out, pValue.GetPointer(), vinfo_pValue); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkWaitSemaphoresKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSemaphoreWaitInfoKHR>& pWaitInfo,
    uint64_t                                    timeout)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkWaitSemaphoresKHR(device, pWaitInfo, timeout)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkSemaphoreWaitInfoKHR* pWaitInfo
    IndentSpaces(out, indent);
    *out += "pWaitInfo:                      ";
    *out += "const VkSemaphoreWaitInfoKHR* = "; // TEQ
    if (pWaitInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pWaitInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pWaitInfo.GetMetaStructPointer(), indent+1, pWaitInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: uint64_t timeout
    IndentSpaces(out, indent);
    *out += "timeout:                        ";
    *out += "uint64_t = "; // TEQ
    UnsignedDecimalToString(out, timeout); // UYW
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkSignalSemaphoreKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSemaphoreSignalInfoKHR>& pSignalInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkSignalSemaphoreKHR(device, pSignalInfo)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkSemaphoreSignalInfoKHR* pSignalInfo
    IndentSpaces(out, indent);
    *out += "pSignalInfo:                    ";
    *out += "const VkSemaphoreSignalInfoKHR* = "; // TEQ
    if (pSignalInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pSignalInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pSignalInfo.GetMetaStructPointer(), indent+1, pSignalInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkGetPipelineExecutablePropertiesKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkPipelineInfoKHR>& pPipelineInfo,
    const PointerDecoder<uint32_t>&             pExecutableCount,
    const StructPointerDecoder<Decoded_VkPipelineExecutablePropertiesKHR>& pProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPipelineExecutablePropertiesKHR(device, pPipelineInfo, pExecutableCount, pProperties)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkPipelineInfoKHR* pPipelineInfo
    IndentSpaces(out, indent);
    *out += "pPipelineInfo:                  ";
    *out += "const VkPipelineInfoKHR* = "; // TEQ
    if (pPipelineInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pPipelineInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pPipelineInfo.GetMetaStructPointer(), indent+1, pPipelineInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: uint32_t* pExecutableCount
    IndentSpaces(out, indent);
    *out += "pExecutableCount:               ";
    *out += "uint32_t* = "; // TEQ
    if (pExecutableCount.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pExecutableCount = {false, false, false, nullptr};
        ScalarValueToString(out, pExecutableCount.GetPointer(), vinfo_pExecutableCount); // PWS
    }
    outString += "\n";   // HHS

    // func arg: VkPipelineExecutablePropertiesKHR* pProperties
    IndentSpaces(out, indent);
    *out += "pProperties:                    ";
    *out += "VkPipelineExecutablePropertiesKHR* = "; // TEQ
    if (pProperties.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pProperties.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkPipelineExecutablePropertiesKHR>(out, indent+1, 1, "VkPipelineExecutablePropertiesKHR", pProperties.GetMetaStructPointer(), "pProperties", *pExecutableCount.GetPointer(), false, pProperties.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetPipelineExecutableStatisticsKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkPipelineExecutableInfoKHR>& pExecutableInfo,
    const PointerDecoder<uint32_t>&             pStatisticCount,
    const StructPointerDecoder<Decoded_VkPipelineExecutableStatisticKHR>& pStatistics)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPipelineExecutableStatisticsKHR(device, pExecutableInfo, pStatisticCount, pStatistics)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkPipelineExecutableInfoKHR* pExecutableInfo
    IndentSpaces(out, indent);
    *out += "pExecutableInfo:                ";
    *out += "const VkPipelineExecutableInfoKHR* = "; // TEQ
    if (pExecutableInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pExecutableInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pExecutableInfo.GetMetaStructPointer(), indent+1, pExecutableInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: uint32_t* pStatisticCount
    IndentSpaces(out, indent);
    *out += "pStatisticCount:                ";
    *out += "uint32_t* = "; // TEQ
    if (pStatisticCount.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pStatisticCount = {false, false, false, nullptr};
        ScalarValueToString(out, pStatisticCount.GetPointer(), vinfo_pStatisticCount); // PWS
    }
    outString += "\n";   // HHS

    // func arg: VkPipelineExecutableStatisticKHR* pStatistics
    IndentSpaces(out, indent);
    *out += "pStatistics:                    ";
    *out += "VkPipelineExecutableStatisticKHR* = "; // TEQ
    if (pStatistics.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pStatistics.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkPipelineExecutableStatisticKHR>(out, indent+1, 1, "VkPipelineExecutableStatisticKHR", pStatistics.GetMetaStructPointer(), "pStatistics", *pStatisticCount.GetPointer(), false, pStatistics.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetPipelineExecutableInternalRepresentationsKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkPipelineExecutableInfoKHR>& pExecutableInfo,
    const PointerDecoder<uint32_t>&             pInternalRepresentationCount,
    const StructPointerDecoder<Decoded_VkPipelineExecutableInternalRepresentationKHR>& pInternalRepresentations)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPipelineExecutableInternalRepresentationsKHR(device, pExecutableInfo, pInternalRepresentationCount, pInternalRepresentations)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkPipelineExecutableInfoKHR* pExecutableInfo
    IndentSpaces(out, indent);
    *out += "pExecutableInfo:                ";
    *out += "const VkPipelineExecutableInfoKHR* = "; // TEQ
    if (pExecutableInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pExecutableInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pExecutableInfo.GetMetaStructPointer(), indent+1, pExecutableInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: uint32_t* pInternalRepresentationCount
    IndentSpaces(out, indent);
    *out += "pInternalRepresentationCount:   ";
    *out += "uint32_t* = "; // TEQ
    if (pInternalRepresentationCount.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pInternalRepresentationCount = {false, false, false, nullptr};
        ScalarValueToString(out, pInternalRepresentationCount.GetPointer(), vinfo_pInternalRepresentationCount); // PWS
    }
    outString += "\n";   // HHS

    // func arg: VkPipelineExecutableInternalRepresentationKHR* pInternalRepresentations
    IndentSpaces(out, indent);
    *out += "pInternalRepresentations:       ";
    *out += "VkPipelineExecutableInternalRepresentationKHR* = "; // TEQ
    if (pInternalRepresentations.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pInternalRepresentations.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkPipelineExecutableInternalRepresentationKHR>(out, indent+1, 1, "VkPipelineExecutableInternalRepresentationKHR", pInternalRepresentations.GetMetaStructPointer(), "pInternalRepresentations", *pInternalRepresentationCount.GetPointer(), false, pInternalRepresentations.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkCreateDebugReportCallbackEXT(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkDebugReportCallbackCreateInfoEXT>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkDebugReportCallbackEXT>& pCallback)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreateDebugReportCallbackEXT(instance, pCreateInfo, pAllocator, pCallback)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkInstance instance
    IndentSpaces(out, indent);
    *out += "instance:                       ";
    *out += "VkInstance = "; // TEQ
    AddrToString(out, instance); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkDebugReportCallbackCreateInfoEXT* pCreateInfo
    IndentSpaces(out, indent);
    *out += "pCreateInfo:                    ";
    *out += "const VkDebugReportCallbackCreateInfoEXT* = "; // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkDebugReportCallbackEXT* pCallback
    IndentSpaces(out, indent);
    *out += "pCallback:                      ";
    *out += "VkDebugReportCallbackEXT* = "; // TEQ
    if (pCallback.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pCallback = {true, false, false, nullptr};
        ScalarValueToString(out, pCallback.GetPointer(), vinfo_pCallback); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkDestroyDebugReportCallbackEXT(
    format::HandleId                            instance,
    format::HandleId                            callback,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkDestroyDebugReportCallbackEXT(instance, callback, pAllocator)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkInstance instance
    IndentSpaces(out, indent);
    *out += "instance:                       ";
    *out += "VkInstance = "; // TEQ
    AddrToString(out, instance); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDebugReportCallbackEXT callback
    IndentSpaces(out, indent);
    *out += "callback:                       ";
    *out += "VkDebugReportCallbackEXT = "; // TEQ
    AddrToString(out, callback); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
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
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkDebugReportMessageEXT(instance, flags, objectType, object, location, messageCode, pLayerPrefix, pMessage)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkInstance instance
    IndentSpaces(out, indent);
    *out += "instance:                       ";
    *out += "VkInstance = "; // TEQ
    AddrToString(out, instance); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDebugReportFlagsEXT flags
    IndentSpaces(out, indent);
    *out += "flags:                          ";
    *out += "VkDebugReportFlagsEXT = "; // TEQ
    FlagsToString(out, flags, EnumToStringVkDebugReportFlagBitsEXT); // URW
    outString += "\n";   // HHS

    // func arg: VkDebugReportObjectTypeEXT objectType
    IndentSpaces(out, indent);
    *out += "objectType:                     ";
    *out += "VkDebugReportObjectTypeEXT = "; // TEQ
    EnumToStringVkDebugReportObjectTypeEXT(out, objectType); // VSA
    *out += " (";
    UnsignedDecimalToString(out, objectType);
    *out += ")";
    outString += "\n";   // HHS

    // func arg: uint64_t object
    IndentSpaces(out, indent);
    *out += "object:                         ";
    *out += "uint64_t = "; // TEQ
    UnsignedDecimalToString(out, object); // UYW
    outString += "\n";   // HHS

    // func arg: size_t location
    IndentSpaces(out, indent);
    *out += "location:                       ";
    *out += "size_t = "; // TEQ
    UnsignedDecimalToString(out, location); // UYW
    outString += "\n";   // HHS

    // func arg: int32_t messageCode
    IndentSpaces(out, indent);
    *out += "messageCode:                    ";
    *out += "int32_t = "; // TEQ
    SignedDecimalToString(out, messageCode); //EQA
    outString += "\n";   // HHS

    // func arg: const char* pLayerPrefix
    IndentSpaces(out, indent);
    *out += "pLayerPrefix:                   ";
    *out += "const char* = "; // TEQ
    StringToQuotedString(out, pLayerPrefix.GetPointer()); // TGH
    outString += "\n";   // HHS

    // func arg: const char* pMessage
    IndentSpaces(out, indent);
    *out += "pMessage:                       ";
    *out += "const char* = "; // TEQ
    StringToQuotedString(out, pMessage.GetPointer()); // TGH
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkDebugMarkerSetObjectTagEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDebugMarkerObjectTagInfoEXT>& pTagInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkDebugMarkerSetObjectTagEXT(device, pTagInfo)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkDebugMarkerObjectTagInfoEXT* pTagInfo
    IndentSpaces(out, indent);
    *out += "pTagInfo:                       ";
    *out += "const VkDebugMarkerObjectTagInfoEXT* = "; // TEQ
    if (pTagInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pTagInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pTagInfo.GetMetaStructPointer(), indent+1, pTagInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkDebugMarkerSetObjectNameEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDebugMarkerObjectNameInfoEXT>& pNameInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkDebugMarkerSetObjectNameEXT(device, pNameInfo)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkDebugMarkerObjectNameInfoEXT* pNameInfo
    IndentSpaces(out, indent);
    *out += "pNameInfo:                      ";
    *out += "const VkDebugMarkerObjectNameInfoEXT* = "; // TEQ
    if (pNameInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pNameInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pNameInfo.GetMetaStructPointer(), indent+1, pNameInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdDebugMarkerBeginEXT(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkDebugMarkerMarkerInfoEXT>& pMarkerInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdDebugMarkerBeginEXT(commandBuffer, pMarkerInfo)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkDebugMarkerMarkerInfoEXT* pMarkerInfo
    IndentSpaces(out, indent);
    *out += "pMarkerInfo:                    ";
    *out += "const VkDebugMarkerMarkerInfoEXT* = "; // TEQ
    if (pMarkerInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pMarkerInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pMarkerInfo.GetMetaStructPointer(), indent+1, pMarkerInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdDebugMarkerEndEXT(
    format::HandleId                            commandBuffer)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdDebugMarkerEndEXT(commandBuffer)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdDebugMarkerInsertEXT(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkDebugMarkerMarkerInfoEXT>& pMarkerInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdDebugMarkerInsertEXT(commandBuffer, pMarkerInfo)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkDebugMarkerMarkerInfoEXT* pMarkerInfo
    IndentSpaces(out, indent);
    *out += "pMarkerInfo:                    ";
    *out += "const VkDebugMarkerMarkerInfoEXT* = "; // TEQ
    if (pMarkerInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pMarkerInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pMarkerInfo.GetMetaStructPointer(), indent+1, pMarkerInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkCmdBindTransformFeedbackBuffersEXT(
    format::HandleId                            commandBuffer,
    uint32_t                                    firstBinding,
    uint32_t                                    bindingCount,
    const HandlePointerDecoder<VkBuffer>&       pBuffers,
    const PointerDecoder<VkDeviceSize>&         pOffsets,
    const PointerDecoder<VkDeviceSize>&         pSizes)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdBindTransformFeedbackBuffersEXT(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets, pSizes)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t firstBinding
    IndentSpaces(out, indent);
    *out += "firstBinding:                   ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, firstBinding); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t bindingCount
    IndentSpaces(out, indent);
    *out += "bindingCount:                   ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, bindingCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkBuffer* pBuffers
    IndentSpaces(out, indent);
    *out += "pBuffers:                       ";
    *out += "const VkBuffer* = "; // TEQ
    if (pBuffers.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pBuffers.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pBuffers = {true, false, false, nullptr};
        ArrayToString<HandlePointerDecoder<VkBuffer>>(out, indent, 1, "const VkBuffer*", &pBuffers, "pBuffers", bindingCount,  vinfo_pBuffers);  // CXC
    }
    outString += "\n";   // HHS

    // func arg: const VkDeviceSize* pOffsets
    IndentSpaces(out, indent);
    *out += "pOffsets:                       ";
    *out += "const VkDeviceSize* = "; // TEQ
    if (pOffsets.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pOffsets.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pOffsets = {false, false, false, nullptr};
        ArrayToString<PointerDecoder<VkDeviceSize>>(out, indent, 1, "const VkDeviceSize*", &pOffsets, "pOffsets", bindingCount,  vinfo_pOffsets);  // CXC
    }
    outString += "\n";   // HHS

    // func arg: const VkDeviceSize* pSizes
    IndentSpaces(out, indent);
    *out += "pSizes:                         ";
    *out += "const VkDeviceSize* = "; // TEQ
    if (pSizes.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pSizes.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pSizes = {false, false, false, nullptr};
        ArrayToString<PointerDecoder<VkDeviceSize>>(out, indent, 1, "const VkDeviceSize*", &pSizes, "pSizes", bindingCount,  vinfo_pSizes);  // CXC
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdBeginTransformFeedbackEXT(
    format::HandleId                            commandBuffer,
    uint32_t                                    firstCounterBuffer,
    uint32_t                                    counterBufferCount,
    const HandlePointerDecoder<VkBuffer>&       pCounterBuffers,
    const PointerDecoder<VkDeviceSize>&         pCounterBufferOffsets)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdBeginTransformFeedbackEXT(commandBuffer, firstCounterBuffer, counterBufferCount, pCounterBuffers, pCounterBufferOffsets)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t firstCounterBuffer
    IndentSpaces(out, indent);
    *out += "firstCounterBuffer:             ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, firstCounterBuffer); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t counterBufferCount
    IndentSpaces(out, indent);
    *out += "counterBufferCount:             ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, counterBufferCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkBuffer* pCounterBuffers
    IndentSpaces(out, indent);
    *out += "pCounterBuffers:                ";
    *out += "const VkBuffer* = "; // TEQ
    if (pCounterBuffers.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCounterBuffers.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pCounterBuffers = {true, false, false, nullptr};
        ArrayToString<HandlePointerDecoder<VkBuffer>>(out, indent, 1, "const VkBuffer*", &pCounterBuffers, "pCounterBuffers", counterBufferCount,  vinfo_pCounterBuffers);  // CXC
    }
    outString += "\n";   // HHS

    // func arg: const VkDeviceSize* pCounterBufferOffsets
    IndentSpaces(out, indent);
    *out += "pCounterBufferOffsets:          ";
    *out += "const VkDeviceSize* = "; // TEQ
    if (pCounterBufferOffsets.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCounterBufferOffsets.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pCounterBufferOffsets = {false, false, false, nullptr};
        ArrayToString<PointerDecoder<VkDeviceSize>>(out, indent, 1, "const VkDeviceSize*", &pCounterBufferOffsets, "pCounterBufferOffsets", counterBufferCount,  vinfo_pCounterBufferOffsets);  // CXC
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdEndTransformFeedbackEXT(
    format::HandleId                            commandBuffer,
    uint32_t                                    firstCounterBuffer,
    uint32_t                                    counterBufferCount,
    const HandlePointerDecoder<VkBuffer>&       pCounterBuffers,
    const PointerDecoder<VkDeviceSize>&         pCounterBufferOffsets)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdEndTransformFeedbackEXT(commandBuffer, firstCounterBuffer, counterBufferCount, pCounterBuffers, pCounterBufferOffsets)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t firstCounterBuffer
    IndentSpaces(out, indent);
    *out += "firstCounterBuffer:             ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, firstCounterBuffer); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t counterBufferCount
    IndentSpaces(out, indent);
    *out += "counterBufferCount:             ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, counterBufferCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkBuffer* pCounterBuffers
    IndentSpaces(out, indent);
    *out += "pCounterBuffers:                ";
    *out += "const VkBuffer* = "; // TEQ
    if (pCounterBuffers.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCounterBuffers.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pCounterBuffers = {true, false, false, nullptr};
        ArrayToString<HandlePointerDecoder<VkBuffer>>(out, indent, 1, "const VkBuffer*", &pCounterBuffers, "pCounterBuffers", counterBufferCount,  vinfo_pCounterBuffers);  // CXC
    }
    outString += "\n";   // HHS

    // func arg: const VkDeviceSize* pCounterBufferOffsets
    IndentSpaces(out, indent);
    *out += "pCounterBufferOffsets:          ";
    *out += "const VkDeviceSize* = "; // TEQ
    if (pCounterBufferOffsets.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCounterBufferOffsets.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pCounterBufferOffsets = {false, false, false, nullptr};
        ArrayToString<PointerDecoder<VkDeviceSize>>(out, indent, 1, "const VkDeviceSize*", &pCounterBufferOffsets, "pCounterBufferOffsets", counterBufferCount,  vinfo_pCounterBufferOffsets);  // CXC
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdBeginQueryIndexedEXT(
    format::HandleId                            commandBuffer,
    format::HandleId                            queryPool,
    uint32_t                                    query,
    VkQueryControlFlags                         flags,
    uint32_t                                    index)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdBeginQueryIndexedEXT(commandBuffer, queryPool, query, flags, index)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkQueryPool queryPool
    IndentSpaces(out, indent);
    *out += "queryPool:                      ";
    *out += "VkQueryPool = "; // TEQ
    AddrToString(out, queryPool); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t query
    IndentSpaces(out, indent);
    *out += "query:                          ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, query); // UYW
    outString += "\n";   // HHS

    // func arg: VkQueryControlFlags flags
    IndentSpaces(out, indent);
    *out += "flags:                          ";
    *out += "VkQueryControlFlags = "; // TEQ
    FlagsToString(out, flags, EnumToStringVkQueryControlFlagBits); // URW
    outString += "\n";   // HHS

    // func arg: uint32_t index
    IndentSpaces(out, indent);
    *out += "index:                          ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, index); // UYW
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdEndQueryIndexedEXT(
    format::HandleId                            commandBuffer,
    format::HandleId                            queryPool,
    uint32_t                                    query,
    uint32_t                                    index)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdEndQueryIndexedEXT(commandBuffer, queryPool, query, index)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkQueryPool queryPool
    IndentSpaces(out, indent);
    *out += "queryPool:                      ";
    *out += "VkQueryPool = "; // TEQ
    AddrToString(out, queryPool); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t query
    IndentSpaces(out, indent);
    *out += "query:                          ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, query); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t index
    IndentSpaces(out, indent);
    *out += "index:                          ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, index); // UYW
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
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
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdDrawIndirectByteCountEXT(commandBuffer, instanceCount, firstInstance, counterBuffer, counterBufferOffset, counterOffset, vertexStride)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t instanceCount
    IndentSpaces(out, indent);
    *out += "instanceCount:                  ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, instanceCount); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t firstInstance
    IndentSpaces(out, indent);
    *out += "firstInstance:                  ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, firstInstance); // UYW
    outString += "\n";   // HHS

    // func arg: VkBuffer counterBuffer
    IndentSpaces(out, indent);
    *out += "counterBuffer:                  ";
    *out += "VkBuffer = "; // TEQ
    AddrToString(out, counterBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDeviceSize counterBufferOffset
    IndentSpaces(out, indent);
    *out += "counterBufferOffset:            ";
    *out += "VkDeviceSize = "; // TEQ
    SignedDecimalToString(out, counterBufferOffset); //EQA
    outString += "\n";   // HHS

    // func arg: uint32_t counterOffset
    IndentSpaces(out, indent);
    *out += "counterOffset:                  ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, counterOffset); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t vertexStride
    IndentSpaces(out, indent);
    *out += "vertexStride:                   ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, vertexStride); // UYW
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkGetImageViewHandleNVX(
    uint32_t                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImageViewHandleInfoNVX>& pInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetImageViewHandleNVX(device, pInfo)");
    fprintf(GetFile(), " returns %u:\n", returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkImageViewHandleInfoNVX* pInfo
    IndentSpaces(out, indent);
    *out += "pInfo:                          ";
    *out += "const VkImageViewHandleInfoNVX* = "; // TEQ
    if (pInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pInfo.GetMetaStructPointer(), indent+1, pInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
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
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdDrawIndirectCountAMD(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkBuffer buffer
    IndentSpaces(out, indent);
    *out += "buffer:                         ";
    *out += "VkBuffer = "; // TEQ
    AddrToString(out, buffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDeviceSize offset
    IndentSpaces(out, indent);
    *out += "offset:                         ";
    *out += "VkDeviceSize = "; // TEQ
    SignedDecimalToString(out, offset); //EQA
    outString += "\n";   // HHS

    // func arg: VkBuffer countBuffer
    IndentSpaces(out, indent);
    *out += "countBuffer:                    ";
    *out += "VkBuffer = "; // TEQ
    AddrToString(out, countBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDeviceSize countBufferOffset
    IndentSpaces(out, indent);
    *out += "countBufferOffset:              ";
    *out += "VkDeviceSize = "; // TEQ
    SignedDecimalToString(out, countBufferOffset); //EQA
    outString += "\n";   // HHS

    // func arg: uint32_t maxDrawCount
    IndentSpaces(out, indent);
    *out += "maxDrawCount:                   ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, maxDrawCount); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t stride
    IndentSpaces(out, indent);
    *out += "stride:                         ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, stride); // UYW
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
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
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdDrawIndexedIndirectCountAMD(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkBuffer buffer
    IndentSpaces(out, indent);
    *out += "buffer:                         ";
    *out += "VkBuffer = "; // TEQ
    AddrToString(out, buffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDeviceSize offset
    IndentSpaces(out, indent);
    *out += "offset:                         ";
    *out += "VkDeviceSize = "; // TEQ
    SignedDecimalToString(out, offset); //EQA
    outString += "\n";   // HHS

    // func arg: VkBuffer countBuffer
    IndentSpaces(out, indent);
    *out += "countBuffer:                    ";
    *out += "VkBuffer = "; // TEQ
    AddrToString(out, countBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDeviceSize countBufferOffset
    IndentSpaces(out, indent);
    *out += "countBufferOffset:              ";
    *out += "VkDeviceSize = "; // TEQ
    SignedDecimalToString(out, countBufferOffset); //EQA
    outString += "\n";   // HHS

    // func arg: uint32_t maxDrawCount
    IndentSpaces(out, indent);
    *out += "maxDrawCount:                   ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, maxDrawCount); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t stride
    IndentSpaces(out, indent);
    *out += "stride:                         ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, stride); // UYW
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
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
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetShaderInfoAMD(device, pipeline, shaderStage, infoType, pInfoSize, pInfo)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkPipeline pipeline
    IndentSpaces(out, indent);
    *out += "pipeline:                       ";
    *out += "VkPipeline = "; // TEQ
    AddrToString(out, pipeline); // PAQ
    outString += "\n";   // HHS

    // func arg: VkShaderStageFlagBits shaderStage
    IndentSpaces(out, indent);
    *out += "shaderStage:                    ";
    *out += "VkShaderStageFlagBits = "; // TEQ
    EnumToStringVkShaderStageFlagBits(out, shaderStage); // VSA
    *out += " (";
    UnsignedDecimalToString(out, shaderStage);
    *out += ")";
    outString += "\n";   // HHS

    // func arg: VkShaderInfoTypeAMD infoType
    IndentSpaces(out, indent);
    *out += "infoType:                       ";
    *out += "VkShaderInfoTypeAMD = "; // TEQ
    EnumToStringVkShaderInfoTypeAMD(out, infoType); // VSA
    *out += " (";
    UnsignedDecimalToString(out, infoType);
    *out += ")";
    outString += "\n";   // HHS

    // func arg: size_t* pInfoSize
    IndentSpaces(out, indent);
    *out += "pInfoSize:                      ";
    *out += "size_t* = "; // TEQ
    if (pInfoSize.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pInfoSize = {false, false, false, nullptr};
        ScalarValueToString(out, pInfoSize.GetPointer(), vinfo_pInfoSize); // PWS
    }
    outString += "\n";   // HHS

    // func arg: void* pInfo
    IndentSpaces(out, indent);
    *out += "pInfo:                          ";
    *out += "void* = "; // TEQ
    if (pInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pInfo.GetAddress()); // AHW
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkCreateStreamDescriptorSurfaceGGP(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkStreamDescriptorSurfaceCreateInfoGGP>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreateStreamDescriptorSurfaceGGP(instance, pCreateInfo, pAllocator, pSurface)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkInstance instance
    IndentSpaces(out, indent);
    *out += "instance:                       ";
    *out += "VkInstance = "; // TEQ
    AddrToString(out, instance); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkStreamDescriptorSurfaceCreateInfoGGP* pCreateInfo
    IndentSpaces(out, indent);
    *out += "pCreateInfo:                    ";
    *out += "const VkStreamDescriptorSurfaceCreateInfoGGP* = "; // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkSurfaceKHR* pSurface
    IndentSpaces(out, indent);
    *out += "pSurface:                       ";
    *out += "VkSurfaceKHR* = "; // TEQ
    if (pSurface.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pSurface = {true, false, false, nullptr};
        ScalarValueToString(out, pSurface.GetPointer(), vinfo_pSurface); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
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
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceExternalImageFormatPropertiesNV(physicalDevice, format, type, tiling, usage, flags, externalHandleType, pExternalImageFormatProperties)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: VkFormat format
    IndentSpaces(out, indent);
    *out += "format:                         ";
    *out += "VkFormat = "; // TEQ
    EnumToStringVkFormat(out, format); // VSA
    *out += " (";
    UnsignedDecimalToString(out, format);
    *out += ")";
    outString += "\n";   // HHS

    // func arg: VkImageType type
    IndentSpaces(out, indent);
    *out += "type:                           ";
    *out += "VkImageType = "; // TEQ
    EnumToStringVkImageType(out, type); // VSA
    *out += " (";
    UnsignedDecimalToString(out, type);
    *out += ")";
    outString += "\n";   // HHS

    // func arg: VkImageTiling tiling
    IndentSpaces(out, indent);
    *out += "tiling:                         ";
    *out += "VkImageTiling = "; // TEQ
    EnumToStringVkImageTiling(out, tiling); // VSA
    *out += " (";
    UnsignedDecimalToString(out, tiling);
    *out += ")";
    outString += "\n";   // HHS

    // func arg: VkImageUsageFlags usage
    IndentSpaces(out, indent);
    *out += "usage:                          ";
    *out += "VkImageUsageFlags = "; // TEQ
    FlagsToString(out, usage, EnumToStringVkImageUsageFlagBits); // URW
    outString += "\n";   // HHS

    // func arg: VkImageCreateFlags flags
    IndentSpaces(out, indent);
    *out += "flags:                          ";
    *out += "VkImageCreateFlags = "; // TEQ
    FlagsToString(out, flags, EnumToStringVkImageCreateFlagBits); // URW
    outString += "\n";   // HHS

    // func arg: VkExternalMemoryHandleTypeFlagsNV externalHandleType
    IndentSpaces(out, indent);
    *out += "externalHandleType:             ";
    *out += "VkExternalMemoryHandleTypeFlagsNV = "; // TEQ
    FlagsToString(out, externalHandleType, EnumToStringVkExternalMemoryHandleTypeFlagBitsNV); // URW
    outString += "\n";   // HHS

    // func arg: VkExternalImageFormatPropertiesNV* pExternalImageFormatProperties
    IndentSpaces(out, indent);
    *out += "pExternalImageFormatProperties: ";
    *out += "VkExternalImageFormatPropertiesNV* = "; // TEQ
    if (pExternalImageFormatProperties.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pExternalImageFormatProperties.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pExternalImageFormatProperties.GetMetaStructPointer(), indent+1, pExternalImageFormatProperties.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkGetMemoryWin32HandleNV(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            memory,
    VkExternalMemoryHandleTypeFlagsNV           handleType,
    const PointerDecoder<uint64_t>&             pHandle)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetMemoryWin32HandleNV(device, memory, handleType, pHandle)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDeviceMemory memory
    IndentSpaces(out, indent);
    *out += "memory:                         ";
    *out += "VkDeviceMemory = "; // TEQ
    AddrToString(out, memory); // PAQ
    outString += "\n";   // HHS

    // func arg: VkExternalMemoryHandleTypeFlagsNV handleType
    IndentSpaces(out, indent);
    *out += "handleType:                     ";
    *out += "VkExternalMemoryHandleTypeFlagsNV = "; // TEQ
    FlagsToString(out, handleType, EnumToStringVkExternalMemoryHandleTypeFlagBitsNV); // URW
    outString += "\n";   // HHS

    // func arg: void** pHandle
    IndentSpaces(out, indent);
    *out += "pHandle:                        ";
    *out += "void** = "; // TEQ
    if (pHandle.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pHandle = {false, false, false, nullptr};
        ScalarValueToString(out, pHandle.GetPointer(), vinfo_pHandle); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkCreateViSurfaceNN(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkViSurfaceCreateInfoNN>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreateViSurfaceNN(instance, pCreateInfo, pAllocator, pSurface)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkInstance instance
    IndentSpaces(out, indent);
    *out += "instance:                       ";
    *out += "VkInstance = "; // TEQ
    AddrToString(out, instance); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkViSurfaceCreateInfoNN* pCreateInfo
    IndentSpaces(out, indent);
    *out += "pCreateInfo:                    ";
    *out += "const VkViSurfaceCreateInfoNN* = "; // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkSurfaceKHR* pSurface
    IndentSpaces(out, indent);
    *out += "pSurface:                       ";
    *out += "VkSurfaceKHR* = "; // TEQ
    if (pSurface.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pSurface = {true, false, false, nullptr};
        ScalarValueToString(out, pSurface.GetPointer(), vinfo_pSurface); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkCmdBeginConditionalRenderingEXT(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkConditionalRenderingBeginInfoEXT>& pConditionalRenderingBegin)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdBeginConditionalRenderingEXT(commandBuffer, pConditionalRenderingBegin)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkConditionalRenderingBeginInfoEXT* pConditionalRenderingBegin
    IndentSpaces(out, indent);
    *out += "pConditionalRenderingBegin:     ";
    *out += "const VkConditionalRenderingBeginInfoEXT* = "; // TEQ
    if (pConditionalRenderingBegin.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pConditionalRenderingBegin.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pConditionalRenderingBegin.GetMetaStructPointer(), indent+1, pConditionalRenderingBegin.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdEndConditionalRenderingEXT(
    format::HandleId                            commandBuffer)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdEndConditionalRenderingEXT(commandBuffer)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkCmdProcessCommandsNVX(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkCmdProcessCommandsInfoNVX>& pProcessCommandsInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdProcessCommandsNVX(commandBuffer, pProcessCommandsInfo)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkCmdProcessCommandsInfoNVX* pProcessCommandsInfo
    IndentSpaces(out, indent);
    *out += "pProcessCommandsInfo:           ";
    *out += "const VkCmdProcessCommandsInfoNVX* = "; // TEQ
    if (pProcessCommandsInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pProcessCommandsInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pProcessCommandsInfo.GetMetaStructPointer(), indent+1, pProcessCommandsInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdReserveSpaceForCommandsNVX(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkCmdReserveSpaceForCommandsInfoNVX>& pReserveSpaceInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdReserveSpaceForCommandsNVX(commandBuffer, pReserveSpaceInfo)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkCmdReserveSpaceForCommandsInfoNVX* pReserveSpaceInfo
    IndentSpaces(out, indent);
    *out += "pReserveSpaceInfo:              ";
    *out += "const VkCmdReserveSpaceForCommandsInfoNVX* = "; // TEQ
    if (pReserveSpaceInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pReserveSpaceInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pReserveSpaceInfo.GetMetaStructPointer(), indent+1, pReserveSpaceInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCreateIndirectCommandsLayoutNVX(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkIndirectCommandsLayoutCreateInfoNVX>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkIndirectCommandsLayoutNVX>& pIndirectCommandsLayout)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreateIndirectCommandsLayoutNVX(device, pCreateInfo, pAllocator, pIndirectCommandsLayout)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkIndirectCommandsLayoutCreateInfoNVX* pCreateInfo
    IndentSpaces(out, indent);
    *out += "pCreateInfo:                    ";
    *out += "const VkIndirectCommandsLayoutCreateInfoNVX* = "; // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkIndirectCommandsLayoutNVX* pIndirectCommandsLayout
    IndentSpaces(out, indent);
    *out += "pIndirectCommandsLayout:        ";
    *out += "VkIndirectCommandsLayoutNVX* = "; // TEQ
    if (pIndirectCommandsLayout.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pIndirectCommandsLayout = {true, false, false, nullptr};
        ScalarValueToString(out, pIndirectCommandsLayout.GetPointer(), vinfo_pIndirectCommandsLayout); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkDestroyIndirectCommandsLayoutNVX(
    format::HandleId                            device,
    format::HandleId                            indirectCommandsLayout,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkDestroyIndirectCommandsLayoutNVX(device, indirectCommandsLayout, pAllocator)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkIndirectCommandsLayoutNVX indirectCommandsLayout
    IndentSpaces(out, indent);
    *out += "indirectCommandsLayout:         ";
    *out += "VkIndirectCommandsLayoutNVX = "; // TEQ
    AddrToString(out, indirectCommandsLayout); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCreateObjectTableNVX(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkObjectTableCreateInfoNVX>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkObjectTableNVX>& pObjectTable)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreateObjectTableNVX(device, pCreateInfo, pAllocator, pObjectTable)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkObjectTableCreateInfoNVX* pCreateInfo
    IndentSpaces(out, indent);
    *out += "pCreateInfo:                    ";
    *out += "const VkObjectTableCreateInfoNVX* = "; // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkObjectTableNVX* pObjectTable
    IndentSpaces(out, indent);
    *out += "pObjectTable:                   ";
    *out += "VkObjectTableNVX* = "; // TEQ
    if (pObjectTable.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pObjectTable = {true, false, false, nullptr};
        ScalarValueToString(out, pObjectTable.GetPointer(), vinfo_pObjectTable); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkDestroyObjectTableNVX(
    format::HandleId                            device,
    format::HandleId                            objectTable,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkDestroyObjectTableNVX(device, objectTable, pAllocator)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkObjectTableNVX objectTable
    IndentSpaces(out, indent);
    *out += "objectTable:                    ";
    *out += "VkObjectTableNVX = "; // TEQ
    AddrToString(out, objectTable); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkUnregisterObjectsNVX(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            objectTable,
    uint32_t                                    objectCount,
    const PointerDecoder<VkObjectEntryTypeNVX>& pObjectEntryTypes,
    const PointerDecoder<uint32_t>&             pObjectIndices)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkUnregisterObjectsNVX(device, objectTable, objectCount, pObjectEntryTypes, pObjectIndices)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkObjectTableNVX objectTable
    IndentSpaces(out, indent);
    *out += "objectTable:                    ";
    *out += "VkObjectTableNVX = "; // TEQ
    AddrToString(out, objectTable); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t objectCount
    IndentSpaces(out, indent);
    *out += "objectCount:                    ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, objectCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkObjectEntryTypeNVX* pObjectEntryTypes
    IndentSpaces(out, indent);
    *out += "pObjectEntryTypes:              ";
    *out += "const VkObjectEntryTypeNVX* = "; // TEQ
    if (pObjectEntryTypes.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pObjectEntryTypes.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pObjectEntryTypes = {false, true, false, EnumToStringVkObjectEntryTypeNVX};
        ArrayToString<PointerDecoder<VkObjectEntryTypeNVX>>(out, indent, 1, "const VkObjectEntryTypeNVX*", &pObjectEntryTypes, "pObjectEntryTypes", objectCount,  vinfo_pObjectEntryTypes);  // CXC
    }
    outString += "\n";   // HHS

    // func arg: const uint32_t* pObjectIndices
    IndentSpaces(out, indent);
    *out += "pObjectIndices:                 ";
    *out += "const uint32_t* = "; // TEQ
    if (pObjectIndices.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pObjectIndices.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pObjectIndices = {false, false, false, nullptr};
        ArrayToString<PointerDecoder<uint32_t>>(out, indent, 1, "const uint32_t*", &pObjectIndices, "pObjectIndices", objectCount,  vinfo_pObjectIndices);  // CXC
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkDeviceGeneratedCommandsFeaturesNVX>& pFeatures,
    const StructPointerDecoder<Decoded_VkDeviceGeneratedCommandsLimitsNVX>& pLimits)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX(physicalDevice, pFeatures, pLimits)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDeviceGeneratedCommandsFeaturesNVX* pFeatures
    IndentSpaces(out, indent);
    *out += "pFeatures:                      ";
    *out += "VkDeviceGeneratedCommandsFeaturesNVX* = "; // TEQ
    if (pFeatures.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pFeatures.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pFeatures.GetMetaStructPointer(), indent+1, pFeatures.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkDeviceGeneratedCommandsLimitsNVX* pLimits
    IndentSpaces(out, indent);
    *out += "pLimits:                        ";
    *out += "VkDeviceGeneratedCommandsLimitsNVX* = "; // TEQ
    if (pLimits.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pLimits.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pLimits.GetMetaStructPointer(), indent+1, pLimits.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkCmdSetViewportWScalingNV(
    format::HandleId                            commandBuffer,
    uint32_t                                    firstViewport,
    uint32_t                                    viewportCount,
    const StructPointerDecoder<Decoded_VkViewportWScalingNV>& pViewportWScalings)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdSetViewportWScalingNV(commandBuffer, firstViewport, viewportCount, pViewportWScalings)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t firstViewport
    IndentSpaces(out, indent);
    *out += "firstViewport:                  ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, firstViewport); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t viewportCount
    IndentSpaces(out, indent);
    *out += "viewportCount:                  ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, viewportCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkViewportWScalingNV* pViewportWScalings
    IndentSpaces(out, indent);
    *out += "pViewportWScalings:             ";
    *out += "const VkViewportWScalingNV* = "; // TEQ
    if (pViewportWScalings.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pViewportWScalings.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkViewportWScalingNV>(out, indent+1, 1, "VkViewportWScalingNV", pViewportWScalings.GetMetaStructPointer(), "pViewportWScalings", viewportCount, false, pViewportWScalings.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkReleaseDisplayEXT(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            display)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkReleaseDisplayEXT(physicalDevice, display)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDisplayKHR display
    IndentSpaces(out, indent);
    *out += "display:                        ";
    *out += "VkDisplayKHR = "; // TEQ
    AddrToString(out, display); // PAQ
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkAcquireXlibDisplayEXT(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    uint64_t                                    dpy,
    format::HandleId                            display)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkAcquireXlibDisplayEXT(physicalDevice, dpy, display)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: void* dpy
    IndentSpaces(out, indent);
    *out += "dpy:                            ";
    *out += "void* = "; // TEQ
    AddrToString(out, dpy); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDisplayKHR display
    IndentSpaces(out, indent);
    *out += "display:                        ";
    *out += "VkDisplayKHR = "; // TEQ
    AddrToString(out, display); // PAQ
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetRandROutputDisplayEXT(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    uint64_t                                    dpy,
    size_t                                      rrOutput,
    const HandlePointerDecoder<VkDisplayKHR>&   pDisplay)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetRandROutputDisplayEXT(physicalDevice, dpy, rrOutput, pDisplay)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: void* dpy
    IndentSpaces(out, indent);
    *out += "dpy:                            ";
    *out += "void* = "; // TEQ
    AddrToString(out, dpy); // PAQ
    outString += "\n";   // HHS

    // func arg: size_t rrOutput
    IndentSpaces(out, indent);
    *out += "rrOutput:                       ";
    *out += "size_t = "; // TEQ
    UnsignedDecimalToString(out, rrOutput); // UYW
    outString += "\n";   // HHS

    // func arg: VkDisplayKHR* pDisplay
    IndentSpaces(out, indent);
    *out += "pDisplay:                       ";
    *out += "VkDisplayKHR* = "; // TEQ
    if (pDisplay.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pDisplay = {true, false, false, nullptr};
        ScalarValueToString(out, pDisplay.GetPointer(), vinfo_pDisplay); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSurfaceCapabilities2EXT(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            surface,
    const StructPointerDecoder<Decoded_VkSurfaceCapabilities2EXT>& pSurfaceCapabilities)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceSurfaceCapabilities2EXT(physicalDevice, surface, pSurfaceCapabilities)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: VkSurfaceKHR surface
    IndentSpaces(out, indent);
    *out += "surface:                        ";
    *out += "VkSurfaceKHR = "; // TEQ
    AddrToString(out, surface); // PAQ
    outString += "\n";   // HHS

    // func arg: VkSurfaceCapabilities2EXT* pSurfaceCapabilities
    IndentSpaces(out, indent);
    *out += "pSurfaceCapabilities:           ";
    *out += "VkSurfaceCapabilities2EXT* = "; // TEQ
    if (pSurfaceCapabilities.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pSurfaceCapabilities.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pSurfaceCapabilities.GetMetaStructPointer(), indent+1, pSurfaceCapabilities.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkDisplayPowerControlEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            display,
    const StructPointerDecoder<Decoded_VkDisplayPowerInfoEXT>& pDisplayPowerInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkDisplayPowerControlEXT(device, display, pDisplayPowerInfo)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDisplayKHR display
    IndentSpaces(out, indent);
    *out += "display:                        ";
    *out += "VkDisplayKHR = "; // TEQ
    AddrToString(out, display); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkDisplayPowerInfoEXT* pDisplayPowerInfo
    IndentSpaces(out, indent);
    *out += "pDisplayPowerInfo:              ";
    *out += "const VkDisplayPowerInfoEXT* = "; // TEQ
    if (pDisplayPowerInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pDisplayPowerInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pDisplayPowerInfo.GetMetaStructPointer(), indent+1, pDisplayPowerInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkRegisterDeviceEventEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDeviceEventInfoEXT>& pDeviceEventInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkFence>&        pFence)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkRegisterDeviceEventEXT(device, pDeviceEventInfo, pAllocator, pFence)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkDeviceEventInfoEXT* pDeviceEventInfo
    IndentSpaces(out, indent);
    *out += "pDeviceEventInfo:               ";
    *out += "const VkDeviceEventInfoEXT* = "; // TEQ
    if (pDeviceEventInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pDeviceEventInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pDeviceEventInfo.GetMetaStructPointer(), indent+1, pDeviceEventInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkFence* pFence
    IndentSpaces(out, indent);
    *out += "pFence:                         ";
    *out += "VkFence* = "; // TEQ
    if (pFence.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pFence = {true, false, false, nullptr};
        ScalarValueToString(out, pFence.GetPointer(), vinfo_pFence); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkRegisterDisplayEventEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            display,
    const StructPointerDecoder<Decoded_VkDisplayEventInfoEXT>& pDisplayEventInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkFence>&        pFence)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkRegisterDisplayEventEXT(device, display, pDisplayEventInfo, pAllocator, pFence)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDisplayKHR display
    IndentSpaces(out, indent);
    *out += "display:                        ";
    *out += "VkDisplayKHR = "; // TEQ
    AddrToString(out, display); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkDisplayEventInfoEXT* pDisplayEventInfo
    IndentSpaces(out, indent);
    *out += "pDisplayEventInfo:              ";
    *out += "const VkDisplayEventInfoEXT* = "; // TEQ
    if (pDisplayEventInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pDisplayEventInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pDisplayEventInfo.GetMetaStructPointer(), indent+1, pDisplayEventInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkFence* pFence
    IndentSpaces(out, indent);
    *out += "pFence:                         ";
    *out += "VkFence* = "; // TEQ
    if (pFence.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pFence = {true, false, false, nullptr};
        ScalarValueToString(out, pFence.GetPointer(), vinfo_pFence); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetSwapchainCounterEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain,
    VkSurfaceCounterFlagBitsEXT                 counter,
    const PointerDecoder<uint64_t>&             pCounterValue)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetSwapchainCounterEXT(device, swapchain, counter, pCounterValue)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkSwapchainKHR swapchain
    IndentSpaces(out, indent);
    *out += "swapchain:                      ";
    *out += "VkSwapchainKHR = "; // TEQ
    AddrToString(out, swapchain); // PAQ
    outString += "\n";   // HHS

    // func arg: VkSurfaceCounterFlagBitsEXT counter
    IndentSpaces(out, indent);
    *out += "counter:                        ";
    *out += "VkSurfaceCounterFlagBitsEXT = "; // TEQ
    EnumToStringVkSurfaceCounterFlagBitsEXT(out, counter); // VSA
    *out += " (";
    UnsignedDecimalToString(out, counter);
    *out += ")";
    outString += "\n";   // HHS

    // func arg: uint64_t* pCounterValue
    IndentSpaces(out, indent);
    *out += "pCounterValue:                  ";
    *out += "uint64_t* = "; // TEQ
    if (pCounterValue.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pCounterValue = {false, false, false, nullptr};
        ScalarValueToString(out, pCounterValue.GetPointer(), vinfo_pCounterValue); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkGetRefreshCycleDurationGOOGLE(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain,
    const StructPointerDecoder<Decoded_VkRefreshCycleDurationGOOGLE>& pDisplayTimingProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetRefreshCycleDurationGOOGLE(device, swapchain, pDisplayTimingProperties)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkSwapchainKHR swapchain
    IndentSpaces(out, indent);
    *out += "swapchain:                      ";
    *out += "VkSwapchainKHR = "; // TEQ
    AddrToString(out, swapchain); // PAQ
    outString += "\n";   // HHS

    // func arg: VkRefreshCycleDurationGOOGLE* pDisplayTimingProperties
    IndentSpaces(out, indent);
    *out += "pDisplayTimingProperties:       ";
    *out += "VkRefreshCycleDurationGOOGLE* = "; // TEQ
    if (pDisplayTimingProperties.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pDisplayTimingProperties.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pDisplayTimingProperties.GetMetaStructPointer(), indent+1, pDisplayTimingProperties.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetPastPresentationTimingGOOGLE(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain,
    const PointerDecoder<uint32_t>&             pPresentationTimingCount,
    const StructPointerDecoder<Decoded_VkPastPresentationTimingGOOGLE>& pPresentationTimings)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPastPresentationTimingGOOGLE(device, swapchain, pPresentationTimingCount, pPresentationTimings)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkSwapchainKHR swapchain
    IndentSpaces(out, indent);
    *out += "swapchain:                      ";
    *out += "VkSwapchainKHR = "; // TEQ
    AddrToString(out, swapchain); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t* pPresentationTimingCount
    IndentSpaces(out, indent);
    *out += "pPresentationTimingCount:       ";
    *out += "uint32_t* = "; // TEQ
    if (pPresentationTimingCount.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pPresentationTimingCount = {false, false, false, nullptr};
        ScalarValueToString(out, pPresentationTimingCount.GetPointer(), vinfo_pPresentationTimingCount); // PWS
    }
    outString += "\n";   // HHS

    // func arg: VkPastPresentationTimingGOOGLE* pPresentationTimings
    IndentSpaces(out, indent);
    *out += "pPresentationTimings:           ";
    *out += "VkPastPresentationTimingGOOGLE* = "; // TEQ
    if (pPresentationTimings.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pPresentationTimings.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkPastPresentationTimingGOOGLE>(out, indent+1, 1, "VkPastPresentationTimingGOOGLE", pPresentationTimings.GetMetaStructPointer(), "pPresentationTimings", *pPresentationTimingCount.GetPointer(), false, pPresentationTimings.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkCmdSetDiscardRectangleEXT(
    format::HandleId                            commandBuffer,
    uint32_t                                    firstDiscardRectangle,
    uint32_t                                    discardRectangleCount,
    const StructPointerDecoder<Decoded_VkRect2D>& pDiscardRectangles)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdSetDiscardRectangleEXT(commandBuffer, firstDiscardRectangle, discardRectangleCount, pDiscardRectangles)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t firstDiscardRectangle
    IndentSpaces(out, indent);
    *out += "firstDiscardRectangle:          ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, firstDiscardRectangle); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t discardRectangleCount
    IndentSpaces(out, indent);
    *out += "discardRectangleCount:          ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, discardRectangleCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkRect2D* pDiscardRectangles
    IndentSpaces(out, indent);
    *out += "pDiscardRectangles:             ";
    *out += "const VkRect2D* = "; // TEQ
    if (pDiscardRectangles.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pDiscardRectangles.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkRect2D>(out, indent+1, 1, "VkRect2D", pDiscardRectangles.GetMetaStructPointer(), "pDiscardRectangles", discardRectangleCount, false, pDiscardRectangles.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkSetHdrMetadataEXT(
    format::HandleId                            device,
    uint32_t                                    swapchainCount,
    const HandlePointerDecoder<VkSwapchainKHR>& pSwapchains,
    const StructPointerDecoder<Decoded_VkHdrMetadataEXT>& pMetadata)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkSetHdrMetadataEXT(device, swapchainCount, pSwapchains, pMetadata)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t swapchainCount
    IndentSpaces(out, indent);
    *out += "swapchainCount:                 ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, swapchainCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkSwapchainKHR* pSwapchains
    IndentSpaces(out, indent);
    *out += "pSwapchains:                    ";
    *out += "const VkSwapchainKHR* = "; // TEQ
    if (pSwapchains.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pSwapchains.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pSwapchains = {true, false, false, nullptr};
        ArrayToString<HandlePointerDecoder<VkSwapchainKHR>>(out, indent, 1, "const VkSwapchainKHR*", &pSwapchains, "pSwapchains", swapchainCount,  vinfo_pSwapchains);  // CXC
    }
    outString += "\n";   // HHS

    // func arg: const VkHdrMetadataEXT* pMetadata
    IndentSpaces(out, indent);
    *out += "pMetadata:                      ";
    *out += "const VkHdrMetadataEXT* = "; // TEQ
    if (pMetadata.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pMetadata.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkHdrMetadataEXT>(out, indent+1, 1, "VkHdrMetadataEXT", pMetadata.GetMetaStructPointer(), "pMetadata", swapchainCount, false, pMetadata.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkCreateIOSSurfaceMVK(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkIOSSurfaceCreateInfoMVK>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreateIOSSurfaceMVK(instance, pCreateInfo, pAllocator, pSurface)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkInstance instance
    IndentSpaces(out, indent);
    *out += "instance:                       ";
    *out += "VkInstance = "; // TEQ
    AddrToString(out, instance); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkIOSSurfaceCreateInfoMVK* pCreateInfo
    IndentSpaces(out, indent);
    *out += "pCreateInfo:                    ";
    *out += "const VkIOSSurfaceCreateInfoMVK* = "; // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkSurfaceKHR* pSurface
    IndentSpaces(out, indent);
    *out += "pSurface:                       ";
    *out += "VkSurfaceKHR* = "; // TEQ
    if (pSurface.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pSurface = {true, false, false, nullptr};
        ScalarValueToString(out, pSurface.GetPointer(), vinfo_pSurface); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkCreateMacOSSurfaceMVK(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkMacOSSurfaceCreateInfoMVK>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreateMacOSSurfaceMVK(instance, pCreateInfo, pAllocator, pSurface)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkInstance instance
    IndentSpaces(out, indent);
    *out += "instance:                       ";
    *out += "VkInstance = "; // TEQ
    AddrToString(out, instance); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkMacOSSurfaceCreateInfoMVK* pCreateInfo
    IndentSpaces(out, indent);
    *out += "pCreateInfo:                    ";
    *out += "const VkMacOSSurfaceCreateInfoMVK* = "; // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkSurfaceKHR* pSurface
    IndentSpaces(out, indent);
    *out += "pSurface:                       ";
    *out += "VkSurfaceKHR* = "; // TEQ
    if (pSurface.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pSurface = {true, false, false, nullptr};
        ScalarValueToString(out, pSurface.GetPointer(), vinfo_pSurface); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkSetDebugUtilsObjectNameEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDebugUtilsObjectNameInfoEXT>& pNameInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkSetDebugUtilsObjectNameEXT(device, pNameInfo)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkDebugUtilsObjectNameInfoEXT* pNameInfo
    IndentSpaces(out, indent);
    *out += "pNameInfo:                      ";
    *out += "const VkDebugUtilsObjectNameInfoEXT* = "; // TEQ
    if (pNameInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pNameInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pNameInfo.GetMetaStructPointer(), indent+1, pNameInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkSetDebugUtilsObjectTagEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDebugUtilsObjectTagInfoEXT>& pTagInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkSetDebugUtilsObjectTagEXT(device, pTagInfo)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkDebugUtilsObjectTagInfoEXT* pTagInfo
    IndentSpaces(out, indent);
    *out += "pTagInfo:                       ";
    *out += "const VkDebugUtilsObjectTagInfoEXT* = "; // TEQ
    if (pTagInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pTagInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pTagInfo.GetMetaStructPointer(), indent+1, pTagInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkQueueBeginDebugUtilsLabelEXT(
    format::HandleId                            queue,
    const StructPointerDecoder<Decoded_VkDebugUtilsLabelEXT>& pLabelInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkQueueBeginDebugUtilsLabelEXT(queue, pLabelInfo)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkQueue queue
    IndentSpaces(out, indent);
    *out += "queue:                          ";
    *out += "VkQueue = "; // TEQ
    AddrToString(out, queue); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkDebugUtilsLabelEXT* pLabelInfo
    IndentSpaces(out, indent);
    *out += "pLabelInfo:                     ";
    *out += "const VkDebugUtilsLabelEXT* = "; // TEQ
    if (pLabelInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pLabelInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pLabelInfo.GetMetaStructPointer(), indent+1, pLabelInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkQueueEndDebugUtilsLabelEXT(
    format::HandleId                            queue)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkQueueEndDebugUtilsLabelEXT(queue)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkQueue queue
    IndentSpaces(out, indent);
    *out += "queue:                          ";
    *out += "VkQueue = "; // TEQ
    AddrToString(out, queue); // PAQ
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkQueueInsertDebugUtilsLabelEXT(
    format::HandleId                            queue,
    const StructPointerDecoder<Decoded_VkDebugUtilsLabelEXT>& pLabelInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkQueueInsertDebugUtilsLabelEXT(queue, pLabelInfo)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkQueue queue
    IndentSpaces(out, indent);
    *out += "queue:                          ";
    *out += "VkQueue = "; // TEQ
    AddrToString(out, queue); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkDebugUtilsLabelEXT* pLabelInfo
    IndentSpaces(out, indent);
    *out += "pLabelInfo:                     ";
    *out += "const VkDebugUtilsLabelEXT* = "; // TEQ
    if (pLabelInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pLabelInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pLabelInfo.GetMetaStructPointer(), indent+1, pLabelInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdBeginDebugUtilsLabelEXT(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkDebugUtilsLabelEXT>& pLabelInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdBeginDebugUtilsLabelEXT(commandBuffer, pLabelInfo)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkDebugUtilsLabelEXT* pLabelInfo
    IndentSpaces(out, indent);
    *out += "pLabelInfo:                     ";
    *out += "const VkDebugUtilsLabelEXT* = "; // TEQ
    if (pLabelInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pLabelInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pLabelInfo.GetMetaStructPointer(), indent+1, pLabelInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdEndDebugUtilsLabelEXT(
    format::HandleId                            commandBuffer)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdEndDebugUtilsLabelEXT(commandBuffer)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdInsertDebugUtilsLabelEXT(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkDebugUtilsLabelEXT>& pLabelInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdInsertDebugUtilsLabelEXT(commandBuffer, pLabelInfo)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkDebugUtilsLabelEXT* pLabelInfo
    IndentSpaces(out, indent);
    *out += "pLabelInfo:                     ";
    *out += "const VkDebugUtilsLabelEXT* = "; // TEQ
    if (pLabelInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pLabelInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pLabelInfo.GetMetaStructPointer(), indent+1, pLabelInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCreateDebugUtilsMessengerEXT(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkDebugUtilsMessengerCreateInfoEXT>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkDebugUtilsMessengerEXT>& pMessenger)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreateDebugUtilsMessengerEXT(instance, pCreateInfo, pAllocator, pMessenger)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkInstance instance
    IndentSpaces(out, indent);
    *out += "instance:                       ";
    *out += "VkInstance = "; // TEQ
    AddrToString(out, instance); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkDebugUtilsMessengerCreateInfoEXT* pCreateInfo
    IndentSpaces(out, indent);
    *out += "pCreateInfo:                    ";
    *out += "const VkDebugUtilsMessengerCreateInfoEXT* = "; // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkDebugUtilsMessengerEXT* pMessenger
    IndentSpaces(out, indent);
    *out += "pMessenger:                     ";
    *out += "VkDebugUtilsMessengerEXT* = "; // TEQ
    if (pMessenger.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pMessenger = {true, false, false, nullptr};
        ScalarValueToString(out, pMessenger.GetPointer(), vinfo_pMessenger); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkDestroyDebugUtilsMessengerEXT(
    format::HandleId                            instance,
    format::HandleId                            messenger,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkDestroyDebugUtilsMessengerEXT(instance, messenger, pAllocator)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkInstance instance
    IndentSpaces(out, indent);
    *out += "instance:                       ";
    *out += "VkInstance = "; // TEQ
    AddrToString(out, instance); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDebugUtilsMessengerEXT messenger
    IndentSpaces(out, indent);
    *out += "messenger:                      ";
    *out += "VkDebugUtilsMessengerEXT = "; // TEQ
    AddrToString(out, messenger); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkSubmitDebugUtilsMessageEXT(
    format::HandleId                            instance,
    VkDebugUtilsMessageSeverityFlagBitsEXT      messageSeverity,
    VkDebugUtilsMessageTypeFlagsEXT             messageTypes,
    const StructPointerDecoder<Decoded_VkDebugUtilsMessengerCallbackDataEXT>& pCallbackData)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkSubmitDebugUtilsMessageEXT(instance, messageSeverity, messageTypes, pCallbackData)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkInstance instance
    IndentSpaces(out, indent);
    *out += "instance:                       ";
    *out += "VkInstance = "; // TEQ
    AddrToString(out, instance); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity
    IndentSpaces(out, indent);
    *out += "messageSeverity:                ";
    *out += "VkDebugUtilsMessageSeverityFlagBitsEXT = "; // TEQ
    EnumToStringVkDebugUtilsMessageSeverityFlagBitsEXT(out, messageSeverity); // VSA
    *out += " (";
    UnsignedDecimalToString(out, messageSeverity);
    *out += ")";
    outString += "\n";   // HHS

    // func arg: VkDebugUtilsMessageTypeFlagsEXT messageTypes
    IndentSpaces(out, indent);
    *out += "messageTypes:                   ";
    *out += "VkDebugUtilsMessageTypeFlagsEXT = "; // TEQ
    FlagsToString(out, messageTypes, EnumToStringVkDebugUtilsMessageTypeFlagBitsEXT); // URW
    outString += "\n";   // HHS

    // func arg: const VkDebugUtilsMessengerCallbackDataEXT* pCallbackData
    IndentSpaces(out, indent);
    *out += "pCallbackData:                  ";
    *out += "const VkDebugUtilsMessengerCallbackDataEXT* = "; // TEQ
    if (pCallbackData.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCallbackData.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCallbackData.GetMetaStructPointer(), indent+1, pCallbackData.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkGetAndroidHardwareBufferPropertiesANDROID(
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint64_t                                    buffer,
    const StructPointerDecoder<Decoded_VkAndroidHardwareBufferPropertiesANDROID>& pProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetAndroidHardwareBufferPropertiesANDROID(device, buffer, pProperties)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const struct void* buffer
    IndentSpaces(out, indent);
    *out += "buffer:                         ";
    *out += "const struct void* = "; // TEQ
    if ( !buffer) // WWW
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, buffer); // PWR
    }
    outString += "\n";   // HHS

    // func arg: VkAndroidHardwareBufferPropertiesANDROID* pProperties
    IndentSpaces(out, indent);
    *out += "pProperties:                    ";
    *out += "VkAndroidHardwareBufferPropertiesANDROID* = "; // TEQ
    if (pProperties.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pProperties.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pProperties.GetMetaStructPointer(), indent+1, pProperties.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetMemoryAndroidHardwareBufferANDROID(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkMemoryGetAndroidHardwareBufferInfoANDROID>& pInfo,
    const PointerDecoder<uint64_t>&             pBuffer)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetMemoryAndroidHardwareBufferANDROID(device, pInfo, pBuffer)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkMemoryGetAndroidHardwareBufferInfoANDROID* pInfo
    IndentSpaces(out, indent);
    *out += "pInfo:                          ";
    *out += "const VkMemoryGetAndroidHardwareBufferInfoANDROID* = "; // TEQ
    if (pInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pInfo.GetMetaStructPointer(), indent+1, pInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: struct void** pBuffer
    IndentSpaces(out, indent);
    *out += "pBuffer:                        ";
    *out += "struct void** = "; // TEQ
    if (pBuffer.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pBuffer = {false, false, false, nullptr};
        ScalarValueToString(out, pBuffer.GetPointer(), vinfo_pBuffer); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkCmdSetSampleLocationsEXT(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkSampleLocationsInfoEXT>& pSampleLocationsInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdSetSampleLocationsEXT(commandBuffer, pSampleLocationsInfo)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkSampleLocationsInfoEXT* pSampleLocationsInfo
    IndentSpaces(out, indent);
    *out += "pSampleLocationsInfo:           ";
    *out += "const VkSampleLocationsInfoEXT* = "; // TEQ
    if (pSampleLocationsInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pSampleLocationsInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pSampleLocationsInfo.GetMetaStructPointer(), indent+1, pSampleLocationsInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceMultisamplePropertiesEXT(
    format::HandleId                            physicalDevice,
    VkSampleCountFlagBits                       samples,
    const StructPointerDecoder<Decoded_VkMultisamplePropertiesEXT>& pMultisampleProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceMultisamplePropertiesEXT(physicalDevice, samples, pMultisampleProperties)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: VkSampleCountFlagBits samples
    IndentSpaces(out, indent);
    *out += "samples:                        ";
    *out += "VkSampleCountFlagBits = "; // TEQ
    EnumToStringVkSampleCountFlagBits(out, samples); // VSA
    *out += " (";
    UnsignedDecimalToString(out, samples);
    *out += ")";
    outString += "\n";   // HHS

    // func arg: VkMultisamplePropertiesEXT* pMultisampleProperties
    IndentSpaces(out, indent);
    *out += "pMultisampleProperties:         ";
    *out += "VkMultisamplePropertiesEXT* = "; // TEQ
    if (pMultisampleProperties.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pMultisampleProperties.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pMultisampleProperties.GetMetaStructPointer(), indent+1, pMultisampleProperties.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkGetImageDrmFormatModifierPropertiesEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            image,
    const StructPointerDecoder<Decoded_VkImageDrmFormatModifierPropertiesEXT>& pProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetImageDrmFormatModifierPropertiesEXT(device, image, pProperties)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkImage image
    IndentSpaces(out, indent);
    *out += "image:                          ";
    *out += "VkImage = "; // TEQ
    AddrToString(out, image); // PAQ
    outString += "\n";   // HHS

    // func arg: VkImageDrmFormatModifierPropertiesEXT* pProperties
    IndentSpaces(out, indent);
    *out += "pProperties:                    ";
    *out += "VkImageDrmFormatModifierPropertiesEXT* = "; // TEQ
    if (pProperties.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pProperties.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pProperties.GetMetaStructPointer(), indent+1, pProperties.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkCreateValidationCacheEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkValidationCacheCreateInfoEXT>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkValidationCacheEXT>& pValidationCache)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreateValidationCacheEXT(device, pCreateInfo, pAllocator, pValidationCache)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkValidationCacheCreateInfoEXT* pCreateInfo
    IndentSpaces(out, indent);
    *out += "pCreateInfo:                    ";
    *out += "const VkValidationCacheCreateInfoEXT* = "; // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkValidationCacheEXT* pValidationCache
    IndentSpaces(out, indent);
    *out += "pValidationCache:               ";
    *out += "VkValidationCacheEXT* = "; // TEQ
    if (pValidationCache.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pValidationCache = {true, false, false, nullptr};
        ScalarValueToString(out, pValidationCache.GetPointer(), vinfo_pValidationCache); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkDestroyValidationCacheEXT(
    format::HandleId                            device,
    format::HandleId                            validationCache,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkDestroyValidationCacheEXT(device, validationCache, pAllocator)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkValidationCacheEXT validationCache
    IndentSpaces(out, indent);
    *out += "validationCache:                ";
    *out += "VkValidationCacheEXT = "; // TEQ
    AddrToString(out, validationCache); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkMergeValidationCachesEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            dstCache,
    uint32_t                                    srcCacheCount,
    const HandlePointerDecoder<VkValidationCacheEXT>& pSrcCaches)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkMergeValidationCachesEXT(device, dstCache, srcCacheCount, pSrcCaches)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkValidationCacheEXT dstCache
    IndentSpaces(out, indent);
    *out += "dstCache:                       ";
    *out += "VkValidationCacheEXT = "; // TEQ
    AddrToString(out, dstCache); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t srcCacheCount
    IndentSpaces(out, indent);
    *out += "srcCacheCount:                  ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, srcCacheCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkValidationCacheEXT* pSrcCaches
    IndentSpaces(out, indent);
    *out += "pSrcCaches:                     ";
    *out += "const VkValidationCacheEXT* = "; // TEQ
    if (pSrcCaches.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pSrcCaches.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pSrcCaches = {true, false, false, nullptr};
        ArrayToString<HandlePointerDecoder<VkValidationCacheEXT>>(out, indent, 1, "const VkValidationCacheEXT*", &pSrcCaches, "pSrcCaches", srcCacheCount,  vinfo_pSrcCaches);  // CXC
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetValidationCacheDataEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            validationCache,
    const PointerDecoder<size_t>&               pDataSize,
    const PointerDecoder<uint8_t>&              pData)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetValidationCacheDataEXT(device, validationCache, pDataSize, pData)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkValidationCacheEXT validationCache
    IndentSpaces(out, indent);
    *out += "validationCache:                ";
    *out += "VkValidationCacheEXT = "; // TEQ
    AddrToString(out, validationCache); // PAQ
    outString += "\n";   // HHS

    // func arg: size_t* pDataSize
    IndentSpaces(out, indent);
    *out += "pDataSize:                      ";
    *out += "size_t* = "; // TEQ
    if (pDataSize.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pDataSize = {false, false, false, nullptr};
        ScalarValueToString(out, pDataSize.GetPointer(), vinfo_pDataSize); // PWS
    }
    outString += "\n";   // HHS

    // func arg: void* pData
    IndentSpaces(out, indent);
    *out += "pData:                          ";
    *out += "void* = "; // TEQ
    if (pData.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pData.GetAddress()); // AHW
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkCmdBindShadingRateImageNV(
    format::HandleId                            commandBuffer,
    format::HandleId                            imageView,
    VkImageLayout                               imageLayout)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdBindShadingRateImageNV(commandBuffer, imageView, imageLayout)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkImageView imageView
    IndentSpaces(out, indent);
    *out += "imageView:                      ";
    *out += "VkImageView = "; // TEQ
    AddrToString(out, imageView); // PAQ
    outString += "\n";   // HHS

    // func arg: VkImageLayout imageLayout
    IndentSpaces(out, indent);
    *out += "imageLayout:                    ";
    *out += "VkImageLayout = "; // TEQ
    EnumToStringVkImageLayout(out, imageLayout); // VSA
    *out += " (";
    UnsignedDecimalToString(out, imageLayout);
    *out += ")";
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdSetViewportShadingRatePaletteNV(
    format::HandleId                            commandBuffer,
    uint32_t                                    firstViewport,
    uint32_t                                    viewportCount,
    const StructPointerDecoder<Decoded_VkShadingRatePaletteNV>& pShadingRatePalettes)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdSetViewportShadingRatePaletteNV(commandBuffer, firstViewport, viewportCount, pShadingRatePalettes)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t firstViewport
    IndentSpaces(out, indent);
    *out += "firstViewport:                  ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, firstViewport); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t viewportCount
    IndentSpaces(out, indent);
    *out += "viewportCount:                  ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, viewportCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkShadingRatePaletteNV* pShadingRatePalettes
    IndentSpaces(out, indent);
    *out += "pShadingRatePalettes:           ";
    *out += "const VkShadingRatePaletteNV* = "; // TEQ
    if (pShadingRatePalettes.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pShadingRatePalettes.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkShadingRatePaletteNV>(out, indent+1, 1, "VkShadingRatePaletteNV", pShadingRatePalettes.GetMetaStructPointer(), "pShadingRatePalettes", viewportCount, false, pShadingRatePalettes.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdSetCoarseSampleOrderNV(
    format::HandleId                            commandBuffer,
    VkCoarseSampleOrderTypeNV                   sampleOrderType,
    uint32_t                                    customSampleOrderCount,
    const StructPointerDecoder<Decoded_VkCoarseSampleOrderCustomNV>& pCustomSampleOrders)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdSetCoarseSampleOrderNV(commandBuffer, sampleOrderType, customSampleOrderCount, pCustomSampleOrders)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkCoarseSampleOrderTypeNV sampleOrderType
    IndentSpaces(out, indent);
    *out += "sampleOrderType:                ";
    *out += "VkCoarseSampleOrderTypeNV = "; // TEQ
    EnumToStringVkCoarseSampleOrderTypeNV(out, sampleOrderType); // VSA
    *out += " (";
    UnsignedDecimalToString(out, sampleOrderType);
    *out += ")";
    outString += "\n";   // HHS

    // func arg: uint32_t customSampleOrderCount
    IndentSpaces(out, indent);
    *out += "customSampleOrderCount:         ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, customSampleOrderCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkCoarseSampleOrderCustomNV* pCustomSampleOrders
    IndentSpaces(out, indent);
    *out += "pCustomSampleOrders:            ";
    *out += "const VkCoarseSampleOrderCustomNV* = "; // TEQ
    if (pCustomSampleOrders.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCustomSampleOrders.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkCoarseSampleOrderCustomNV>(out, indent+1, 1, "VkCoarseSampleOrderCustomNV", pCustomSampleOrders.GetMetaStructPointer(), "pCustomSampleOrders", customSampleOrderCount, false, pCustomSampleOrders.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkCreateAccelerationStructureNV(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkAccelerationStructureCreateInfoNV>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkAccelerationStructureNV>& pAccelerationStructure)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreateAccelerationStructureNV(device, pCreateInfo, pAllocator, pAccelerationStructure)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkAccelerationStructureCreateInfoNV* pCreateInfo
    IndentSpaces(out, indent);
    *out += "pCreateInfo:                    ";
    *out += "const VkAccelerationStructureCreateInfoNV* = "; // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkAccelerationStructureNV* pAccelerationStructure
    IndentSpaces(out, indent);
    *out += "pAccelerationStructure:         ";
    *out += "VkAccelerationStructureNV* = "; // TEQ
    if (pAccelerationStructure.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pAccelerationStructure = {true, false, false, nullptr};
        ScalarValueToString(out, pAccelerationStructure.GetPointer(), vinfo_pAccelerationStructure); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkDestroyAccelerationStructureNV(
    format::HandleId                            device,
    format::HandleId                            accelerationStructure,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkDestroyAccelerationStructureNV(device, accelerationStructure, pAllocator)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkAccelerationStructureNV accelerationStructure
    IndentSpaces(out, indent);
    *out += "accelerationStructure:          ";
    *out += "VkAccelerationStructureNV = "; // TEQ
    AddrToString(out, accelerationStructure); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetAccelerationStructureMemoryRequirementsNV(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkAccelerationStructureMemoryRequirementsInfoNV>& pInfo,
    const StructPointerDecoder<Decoded_VkMemoryRequirements2KHR>& pMemoryRequirements)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetAccelerationStructureMemoryRequirementsNV(device, pInfo, pMemoryRequirements)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkAccelerationStructureMemoryRequirementsInfoNV* pInfo
    IndentSpaces(out, indent);
    *out += "pInfo:                          ";
    *out += "const VkAccelerationStructureMemoryRequirementsInfoNV* = "; // TEQ
    if (pInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pInfo.GetMetaStructPointer(), indent+1, pInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkMemoryRequirements2KHR* pMemoryRequirements
    IndentSpaces(out, indent);
    *out += "pMemoryRequirements:            ";
    *out += "VkMemoryRequirements2KHR* = "; // TEQ
    if (pMemoryRequirements.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pMemoryRequirements.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pMemoryRequirements.GetMetaStructPointer(), indent+1, pMemoryRequirements.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkBindAccelerationStructureMemoryNV(
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    bindInfoCount,
    const StructPointerDecoder<Decoded_VkBindAccelerationStructureMemoryInfoNV>& pBindInfos)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkBindAccelerationStructureMemoryNV(device, bindInfoCount, pBindInfos)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t bindInfoCount
    IndentSpaces(out, indent);
    *out += "bindInfoCount:                  ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, bindInfoCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkBindAccelerationStructureMemoryInfoNV* pBindInfos
    IndentSpaces(out, indent);
    *out += "pBindInfos:                     ";
    *out += "const VkBindAccelerationStructureMemoryInfoNV* = "; // TEQ
    if (pBindInfos.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pBindInfos.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkBindAccelerationStructureMemoryInfoNV>(out, indent+1, 1, "VkBindAccelerationStructureMemoryInfoNV", pBindInfos.GetMetaStructPointer(), "pBindInfos", bindInfoCount, false, pBindInfos.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
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
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdBuildAccelerationStructureNV(commandBuffer, pInfo, instanceData, instanceOffset, update, dst, src, scratch, scratchOffset)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkAccelerationStructureInfoNV* pInfo
    IndentSpaces(out, indent);
    *out += "pInfo:                          ";
    *out += "const VkAccelerationStructureInfoNV* = "; // TEQ
    if (pInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pInfo.GetMetaStructPointer(), indent+1, pInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkBuffer instanceData
    IndentSpaces(out, indent);
    *out += "instanceData:                   ";
    *out += "VkBuffer = "; // TEQ
    AddrToString(out, instanceData); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDeviceSize instanceOffset
    IndentSpaces(out, indent);
    *out += "instanceOffset:                 ";
    *out += "VkDeviceSize = "; // TEQ
    SignedDecimalToString(out, instanceOffset); //EQA
    outString += "\n";   // HHS

    // func arg: VkBool32 update
    IndentSpaces(out, indent);
    *out += "update:                         ";
    *out += "VkBool32 = "; // TEQ
    SignedDecimalToString(out, update); //EQA
    outString += "\n";   // HHS

    // func arg: VkAccelerationStructureNV dst
    IndentSpaces(out, indent);
    *out += "dst:                            ";
    *out += "VkAccelerationStructureNV = "; // TEQ
    AddrToString(out, dst); // PAQ
    outString += "\n";   // HHS

    // func arg: VkAccelerationStructureNV src
    IndentSpaces(out, indent);
    *out += "src:                            ";
    *out += "VkAccelerationStructureNV = "; // TEQ
    AddrToString(out, src); // PAQ
    outString += "\n";   // HHS

    // func arg: VkBuffer scratch
    IndentSpaces(out, indent);
    *out += "scratch:                        ";
    *out += "VkBuffer = "; // TEQ
    AddrToString(out, scratch); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDeviceSize scratchOffset
    IndentSpaces(out, indent);
    *out += "scratchOffset:                  ";
    *out += "VkDeviceSize = "; // TEQ
    SignedDecimalToString(out, scratchOffset); //EQA
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdCopyAccelerationStructureNV(
    format::HandleId                            commandBuffer,
    format::HandleId                            dst,
    format::HandleId                            src,
    VkCopyAccelerationStructureModeNV           mode)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdCopyAccelerationStructureNV(commandBuffer, dst, src, mode)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkAccelerationStructureNV dst
    IndentSpaces(out, indent);
    *out += "dst:                            ";
    *out += "VkAccelerationStructureNV = "; // TEQ
    AddrToString(out, dst); // PAQ
    outString += "\n";   // HHS

    // func arg: VkAccelerationStructureNV src
    IndentSpaces(out, indent);
    *out += "src:                            ";
    *out += "VkAccelerationStructureNV = "; // TEQ
    AddrToString(out, src); // PAQ
    outString += "\n";   // HHS

    // func arg: VkCopyAccelerationStructureModeNV mode
    IndentSpaces(out, indent);
    *out += "mode:                           ";
    *out += "VkCopyAccelerationStructureModeNV = "; // TEQ
    EnumToStringVkCopyAccelerationStructureModeNV(out, mode); // VSA
    *out += " (";
    UnsignedDecimalToString(out, mode);
    *out += ")";
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
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
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdTraceRaysNV(commandBuffer, raygenShaderBindingTableBuffer, raygenShaderBindingOffset, missShaderBindingTableBuffer, missShaderBindingOffset, missShaderBindingStride, hitShaderBindingTableBuffer, hitShaderBindingOffset, hitShaderBindingStride, callableShaderBindingTableBuffer, callableShaderBindingOffset, callableShaderBindingStride, width, height, depth)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkBuffer raygenShaderBindingTableBuffer
    IndentSpaces(out, indent);
    *out += "raygenShaderBindingTableBuffer: ";
    *out += "VkBuffer = "; // TEQ
    AddrToString(out, raygenShaderBindingTableBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDeviceSize raygenShaderBindingOffset
    IndentSpaces(out, indent);
    *out += "raygenShaderBindingOffset:      ";
    *out += "VkDeviceSize = "; // TEQ
    SignedDecimalToString(out, raygenShaderBindingOffset); //EQA
    outString += "\n";   // HHS

    // func arg: VkBuffer missShaderBindingTableBuffer
    IndentSpaces(out, indent);
    *out += "missShaderBindingTableBuffer:   ";
    *out += "VkBuffer = "; // TEQ
    AddrToString(out, missShaderBindingTableBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDeviceSize missShaderBindingOffset
    IndentSpaces(out, indent);
    *out += "missShaderBindingOffset:        ";
    *out += "VkDeviceSize = "; // TEQ
    SignedDecimalToString(out, missShaderBindingOffset); //EQA
    outString += "\n";   // HHS

    // func arg: VkDeviceSize missShaderBindingStride
    IndentSpaces(out, indent);
    *out += "missShaderBindingStride:        ";
    *out += "VkDeviceSize = "; // TEQ
    SignedDecimalToString(out, missShaderBindingStride); //EQA
    outString += "\n";   // HHS

    // func arg: VkBuffer hitShaderBindingTableBuffer
    IndentSpaces(out, indent);
    *out += "hitShaderBindingTableBuffer:    ";
    *out += "VkBuffer = "; // TEQ
    AddrToString(out, hitShaderBindingTableBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDeviceSize hitShaderBindingOffset
    IndentSpaces(out, indent);
    *out += "hitShaderBindingOffset:         ";
    *out += "VkDeviceSize = "; // TEQ
    SignedDecimalToString(out, hitShaderBindingOffset); //EQA
    outString += "\n";   // HHS

    // func arg: VkDeviceSize hitShaderBindingStride
    IndentSpaces(out, indent);
    *out += "hitShaderBindingStride:         ";
    *out += "VkDeviceSize = "; // TEQ
    SignedDecimalToString(out, hitShaderBindingStride); //EQA
    outString += "\n";   // HHS

    // func arg: VkBuffer callableShaderBindingTableBuffer
    IndentSpaces(out, indent);
    *out += "callableShaderBindingTableBuffer: ";
    *out += "VkBuffer = "; // TEQ
    AddrToString(out, callableShaderBindingTableBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDeviceSize callableShaderBindingOffset
    IndentSpaces(out, indent);
    *out += "callableShaderBindingOffset:    ";
    *out += "VkDeviceSize = "; // TEQ
    SignedDecimalToString(out, callableShaderBindingOffset); //EQA
    outString += "\n";   // HHS

    // func arg: VkDeviceSize callableShaderBindingStride
    IndentSpaces(out, indent);
    *out += "callableShaderBindingStride:    ";
    *out += "VkDeviceSize = "; // TEQ
    SignedDecimalToString(out, callableShaderBindingStride); //EQA
    outString += "\n";   // HHS

    // func arg: uint32_t width
    IndentSpaces(out, indent);
    *out += "width:                          ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, width); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t height
    IndentSpaces(out, indent);
    *out += "height:                         ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, height); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t depth
    IndentSpaces(out, indent);
    *out += "depth:                          ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, depth); // UYW
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
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
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreateRayTracingPipelinesNV(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkPipelineCache pipelineCache
    IndentSpaces(out, indent);
    *out += "pipelineCache:                  ";
    *out += "VkPipelineCache = "; // TEQ
    AddrToString(out, pipelineCache); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t createInfoCount
    IndentSpaces(out, indent);
    *out += "createInfoCount:                ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, createInfoCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkRayTracingPipelineCreateInfoNV* pCreateInfos
    IndentSpaces(out, indent);
    *out += "pCreateInfos:                   ";
    *out += "const VkRayTracingPipelineCreateInfoNV* = "; // TEQ
    if (pCreateInfos.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfos.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkRayTracingPipelineCreateInfoNV>(out, indent+1, 1, "VkRayTracingPipelineCreateInfoNV", pCreateInfos.GetMetaStructPointer(), "pCreateInfos", createInfoCount, false, pCreateInfos.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkPipeline* pPipelines
    IndentSpaces(out, indent);
    *out += "pPipelines:                     ";
    *out += "VkPipeline* = "; // TEQ
    if (pPipelines.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pPipelines.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pPipelines = {true, false, false, nullptr};
        ArrayToString<HandlePointerDecoder<VkPipeline>>(out, indent, 1, "VkPipeline*", &pPipelines, "pPipelines", createInfoCount,  vinfo_pPipelines);  // CXC
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
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
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetRayTracingShaderGroupHandlesNV(device, pipeline, firstGroup, groupCount, dataSize, pData)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkPipeline pipeline
    IndentSpaces(out, indent);
    *out += "pipeline:                       ";
    *out += "VkPipeline = "; // TEQ
    AddrToString(out, pipeline); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t firstGroup
    IndentSpaces(out, indent);
    *out += "firstGroup:                     ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, firstGroup); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t groupCount
    IndentSpaces(out, indent);
    *out += "groupCount:                     ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, groupCount); // UYW
    outString += "\n";   // HHS

    // func arg: size_t dataSize
    IndentSpaces(out, indent);
    *out += "dataSize:                       ";
    *out += "size_t = "; // TEQ
    UnsignedDecimalToString(out, dataSize); // UYW
    outString += "\n";   // HHS

    // func arg: void* pData
    IndentSpaces(out, indent);
    *out += "pData:                          ";
    *out += "void* = "; // TEQ
    if (pData.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pData.GetAddress()); // AHW
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetAccelerationStructureHandleNV(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            accelerationStructure,
    size_t                                      dataSize,
    const PointerDecoder<uint8_t>&              pData)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetAccelerationStructureHandleNV(device, accelerationStructure, dataSize, pData)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkAccelerationStructureNV accelerationStructure
    IndentSpaces(out, indent);
    *out += "accelerationStructure:          ";
    *out += "VkAccelerationStructureNV = "; // TEQ
    AddrToString(out, accelerationStructure); // PAQ
    outString += "\n";   // HHS

    // func arg: size_t dataSize
    IndentSpaces(out, indent);
    *out += "dataSize:                       ";
    *out += "size_t = "; // TEQ
    UnsignedDecimalToString(out, dataSize); // UYW
    outString += "\n";   // HHS

    // func arg: void* pData
    IndentSpaces(out, indent);
    *out += "pData:                          ";
    *out += "void* = "; // TEQ
    if (pData.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pData.GetAddress()); // AHW
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdWriteAccelerationStructuresPropertiesNV(
    format::HandleId                            commandBuffer,
    uint32_t                                    accelerationStructureCount,
    const HandlePointerDecoder<VkAccelerationStructureNV>& pAccelerationStructures,
    VkQueryType                                 queryType,
    format::HandleId                            queryPool,
    uint32_t                                    firstQuery)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdWriteAccelerationStructuresPropertiesNV(commandBuffer, accelerationStructureCount, pAccelerationStructures, queryType, queryPool, firstQuery)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t accelerationStructureCount
    IndentSpaces(out, indent);
    *out += "accelerationStructureCount:     ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, accelerationStructureCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkAccelerationStructureNV* pAccelerationStructures
    IndentSpaces(out, indent);
    *out += "pAccelerationStructures:        ";
    *out += "const VkAccelerationStructureNV* = "; // TEQ
    if (pAccelerationStructures.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAccelerationStructures.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pAccelerationStructures = {true, false, false, nullptr};
        ArrayToString<HandlePointerDecoder<VkAccelerationStructureNV>>(out, indent, 1, "const VkAccelerationStructureNV*", &pAccelerationStructures, "pAccelerationStructures", accelerationStructureCount,  vinfo_pAccelerationStructures);  // CXC
    }
    outString += "\n";   // HHS

    // func arg: VkQueryType queryType
    IndentSpaces(out, indent);
    *out += "queryType:                      ";
    *out += "VkQueryType = "; // TEQ
    EnumToStringVkQueryType(out, queryType); // VSA
    *out += " (";
    UnsignedDecimalToString(out, queryType);
    *out += ")";
    outString += "\n";   // HHS

    // func arg: VkQueryPool queryPool
    IndentSpaces(out, indent);
    *out += "queryPool:                      ";
    *out += "VkQueryPool = "; // TEQ
    AddrToString(out, queryPool); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t firstQuery
    IndentSpaces(out, indent);
    *out += "firstQuery:                     ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, firstQuery); // UYW
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCompileDeferredNV(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            pipeline,
    uint32_t                                    shader)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCompileDeferredNV(device, pipeline, shader)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkPipeline pipeline
    IndentSpaces(out, indent);
    *out += "pipeline:                       ";
    *out += "VkPipeline = "; // TEQ
    AddrToString(out, pipeline); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t shader
    IndentSpaces(out, indent);
    *out += "shader:                         ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, shader); // UYW
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkGetMemoryHostPointerPropertiesEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    VkExternalMemoryHandleTypeFlagBits          handleType,
    uint64_t                                    pHostPointer,
    const StructPointerDecoder<Decoded_VkMemoryHostPointerPropertiesEXT>& pMemoryHostPointerProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetMemoryHostPointerPropertiesEXT(device, handleType, pHostPointer, pMemoryHostPointerProperties)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkExternalMemoryHandleTypeFlagBits handleType
    IndentSpaces(out, indent);
    *out += "handleType:                     ";
    *out += "VkExternalMemoryHandleTypeFlagBits = "; // TEQ
    EnumToStringVkExternalMemoryHandleTypeFlagBits(out, handleType); // VSA
    *out += " (";
    UnsignedDecimalToString(out, handleType);
    *out += ")";
    outString += "\n";   // HHS

    // func arg: const void* pHostPointer
    IndentSpaces(out, indent);
    *out += "pHostPointer:                   ";
    *out += "const void* = "; // TEQ
    if ( !pHostPointer) // WWW
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pHostPointer); // PWR
    }
    outString += "\n";   // HHS

    // func arg: VkMemoryHostPointerPropertiesEXT* pMemoryHostPointerProperties
    IndentSpaces(out, indent);
    *out += "pMemoryHostPointerProperties:   ";
    *out += "VkMemoryHostPointerPropertiesEXT* = "; // TEQ
    if (pMemoryHostPointerProperties.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pMemoryHostPointerProperties.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pMemoryHostPointerProperties.GetMetaStructPointer(), indent+1, pMemoryHostPointerProperties.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkCmdWriteBufferMarkerAMD(
    format::HandleId                            commandBuffer,
    VkPipelineStageFlagBits                     pipelineStage,
    format::HandleId                            dstBuffer,
    VkDeviceSize                                dstOffset,
    uint32_t                                    marker)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdWriteBufferMarkerAMD(commandBuffer, pipelineStage, dstBuffer, dstOffset, marker)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkPipelineStageFlagBits pipelineStage
    IndentSpaces(out, indent);
    *out += "pipelineStage:                  ";
    *out += "VkPipelineStageFlagBits = "; // TEQ
    EnumToStringVkPipelineStageFlagBits(out, pipelineStage); // VSA
    *out += " (";
    UnsignedDecimalToString(out, pipelineStage);
    *out += ")";
    outString += "\n";   // HHS

    // func arg: VkBuffer dstBuffer
    IndentSpaces(out, indent);
    *out += "dstBuffer:                      ";
    *out += "VkBuffer = "; // TEQ
    AddrToString(out, dstBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDeviceSize dstOffset
    IndentSpaces(out, indent);
    *out += "dstOffset:                      ";
    *out += "VkDeviceSize = "; // TEQ
    SignedDecimalToString(out, dstOffset); //EQA
    outString += "\n";   // HHS

    // func arg: uint32_t marker
    IndentSpaces(out, indent);
    *out += "marker:                         ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, marker); // UYW
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const PointerDecoder<uint32_t>&             pTimeDomainCount,
    const PointerDecoder<VkTimeDomainEXT>&      pTimeDomains)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceCalibrateableTimeDomainsEXT(physicalDevice, pTimeDomainCount, pTimeDomains)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t* pTimeDomainCount
    IndentSpaces(out, indent);
    *out += "pTimeDomainCount:               ";
    *out += "uint32_t* = "; // TEQ
    if (pTimeDomainCount.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pTimeDomainCount = {false, false, false, nullptr};
        ScalarValueToString(out, pTimeDomainCount.GetPointer(), vinfo_pTimeDomainCount); // PWS
    }
    outString += "\n";   // HHS

    // func arg: VkTimeDomainEXT* pTimeDomains
    IndentSpaces(out, indent);
    *out += "pTimeDomains:                   ";
    *out += "VkTimeDomainEXT* = "; // TEQ
    if (pTimeDomains.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pTimeDomains.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pTimeDomains = {false, true, false, EnumToStringVkTimeDomainEXT};
        ArrayToString<PointerDecoder<VkTimeDomainEXT>>(out, indent, 1, "VkTimeDomainEXT*", &pTimeDomains, "pTimeDomains", *pTimeDomainCount.GetPointer(),  vinfo_pTimeDomains);  // CXC
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetCalibratedTimestampsEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    timestampCount,
    const StructPointerDecoder<Decoded_VkCalibratedTimestampInfoEXT>& pTimestampInfos,
    const PointerDecoder<uint64_t>&             pTimestamps,
    const PointerDecoder<uint64_t>&             pMaxDeviation)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetCalibratedTimestampsEXT(device, timestampCount, pTimestampInfos, pTimestamps, pMaxDeviation)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t timestampCount
    IndentSpaces(out, indent);
    *out += "timestampCount:                 ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, timestampCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkCalibratedTimestampInfoEXT* pTimestampInfos
    IndentSpaces(out, indent);
    *out += "pTimestampInfos:                ";
    *out += "const VkCalibratedTimestampInfoEXT* = "; // TEQ
    if (pTimestampInfos.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pTimestampInfos.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkCalibratedTimestampInfoEXT>(out, indent+1, 1, "VkCalibratedTimestampInfoEXT", pTimestampInfos.GetMetaStructPointer(), "pTimestampInfos", timestampCount, false, pTimestampInfos.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    // func arg: uint64_t* pTimestamps
    IndentSpaces(out, indent);
    *out += "pTimestamps:                    ";
    *out += "uint64_t* = "; // TEQ
    if (pTimestamps.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pTimestamps.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pTimestamps = {false, false, false, nullptr};
        ArrayToString<PointerDecoder<uint64_t>>(out, indent, 1, "uint64_t*", &pTimestamps, "pTimestamps", timestampCount,  vinfo_pTimestamps);  // CXC
    }
    outString += "\n";   // HHS

    // func arg: uint64_t* pMaxDeviation
    IndentSpaces(out, indent);
    *out += "pMaxDeviation:                  ";
    *out += "uint64_t* = "; // TEQ
    if (pMaxDeviation.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pMaxDeviation = {false, false, false, nullptr};
        ScalarValueToString(out, pMaxDeviation.GetPointer(), vinfo_pMaxDeviation); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkCmdDrawMeshTasksNV(
    format::HandleId                            commandBuffer,
    uint32_t                                    taskCount,
    uint32_t                                    firstTask)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdDrawMeshTasksNV(commandBuffer, taskCount, firstTask)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t taskCount
    IndentSpaces(out, indent);
    *out += "taskCount:                      ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, taskCount); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t firstTask
    IndentSpaces(out, indent);
    *out += "firstTask:                      ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, firstTask); // UYW
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdDrawMeshTasksIndirectNV(
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    uint32_t                                    drawCount,
    uint32_t                                    stride)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdDrawMeshTasksIndirectNV(commandBuffer, buffer, offset, drawCount, stride)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkBuffer buffer
    IndentSpaces(out, indent);
    *out += "buffer:                         ";
    *out += "VkBuffer = "; // TEQ
    AddrToString(out, buffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDeviceSize offset
    IndentSpaces(out, indent);
    *out += "offset:                         ";
    *out += "VkDeviceSize = "; // TEQ
    SignedDecimalToString(out, offset); //EQA
    outString += "\n";   // HHS

    // func arg: uint32_t drawCount
    IndentSpaces(out, indent);
    *out += "drawCount:                      ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, drawCount); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t stride
    IndentSpaces(out, indent);
    *out += "stride:                         ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, stride); // UYW
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
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
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdDrawMeshTasksIndirectCountNV(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkBuffer buffer
    IndentSpaces(out, indent);
    *out += "buffer:                         ";
    *out += "VkBuffer = "; // TEQ
    AddrToString(out, buffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDeviceSize offset
    IndentSpaces(out, indent);
    *out += "offset:                         ";
    *out += "VkDeviceSize = "; // TEQ
    SignedDecimalToString(out, offset); //EQA
    outString += "\n";   // HHS

    // func arg: VkBuffer countBuffer
    IndentSpaces(out, indent);
    *out += "countBuffer:                    ";
    *out += "VkBuffer = "; // TEQ
    AddrToString(out, countBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: VkDeviceSize countBufferOffset
    IndentSpaces(out, indent);
    *out += "countBufferOffset:              ";
    *out += "VkDeviceSize = "; // TEQ
    SignedDecimalToString(out, countBufferOffset); //EQA
    outString += "\n";   // HHS

    // func arg: uint32_t maxDrawCount
    IndentSpaces(out, indent);
    *out += "maxDrawCount:                   ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, maxDrawCount); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t stride
    IndentSpaces(out, indent);
    *out += "stride:                         ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, stride); // UYW
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkCmdSetExclusiveScissorNV(
    format::HandleId                            commandBuffer,
    uint32_t                                    firstExclusiveScissor,
    uint32_t                                    exclusiveScissorCount,
    const StructPointerDecoder<Decoded_VkRect2D>& pExclusiveScissors)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdSetExclusiveScissorNV(commandBuffer, firstExclusiveScissor, exclusiveScissorCount, pExclusiveScissors)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t firstExclusiveScissor
    IndentSpaces(out, indent);
    *out += "firstExclusiveScissor:          ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, firstExclusiveScissor); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t exclusiveScissorCount
    IndentSpaces(out, indent);
    *out += "exclusiveScissorCount:          ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, exclusiveScissorCount); // UYW
    outString += "\n";   // HHS

    // func arg: const VkRect2D* pExclusiveScissors
    IndentSpaces(out, indent);
    *out += "pExclusiveScissors:             ";
    *out += "const VkRect2D* = "; // TEQ
    if (pExclusiveScissors.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pExclusiveScissors.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkRect2D>(out, indent+1, 1, "VkRect2D", pExclusiveScissors.GetMetaStructPointer(), "pExclusiveScissors", exclusiveScissorCount, false, pExclusiveScissors.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkCmdSetCheckpointNV(
    format::HandleId                            commandBuffer,
    uint64_t                                    pCheckpointMarker)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdSetCheckpointNV(commandBuffer, pCheckpointMarker)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: const void* pCheckpointMarker
    IndentSpaces(out, indent);
    *out += "pCheckpointMarker:              ";
    *out += "const void* = "; // TEQ
    if ( !pCheckpointMarker) // WWW
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCheckpointMarker); // PWR
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetQueueCheckpointDataNV(
    format::HandleId                            queue,
    const PointerDecoder<uint32_t>&             pCheckpointDataCount,
    const StructPointerDecoder<Decoded_VkCheckpointDataNV>& pCheckpointData)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetQueueCheckpointDataNV(queue, pCheckpointDataCount, pCheckpointData)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkQueue queue
    IndentSpaces(out, indent);
    *out += "queue:                          ";
    *out += "VkQueue = "; // TEQ
    AddrToString(out, queue); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t* pCheckpointDataCount
    IndentSpaces(out, indent);
    *out += "pCheckpointDataCount:           ";
    *out += "uint32_t* = "; // TEQ
    if (pCheckpointDataCount.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pCheckpointDataCount = {false, false, false, nullptr};
        ScalarValueToString(out, pCheckpointDataCount.GetPointer(), vinfo_pCheckpointDataCount); // PWS
    }
    outString += "\n";   // HHS

    // func arg: VkCheckpointDataNV* pCheckpointData
    IndentSpaces(out, indent);
    *out += "pCheckpointData:                ";
    *out += "VkCheckpointDataNV* = "; // TEQ
    if (pCheckpointData.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCheckpointData.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkCheckpointDataNV>(out, indent+1, 1, "VkCheckpointDataNV", pCheckpointData.GetMetaStructPointer(), "pCheckpointData", *pCheckpointDataCount.GetPointer(), false, pCheckpointData.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkInitializePerformanceApiINTEL(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkInitializePerformanceApiInfoINTEL>& pInitializeInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkInitializePerformanceApiINTEL(device, pInitializeInfo)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkInitializePerformanceApiInfoINTEL* pInitializeInfo
    IndentSpaces(out, indent);
    *out += "pInitializeInfo:                ";
    *out += "const VkInitializePerformanceApiInfoINTEL* = "; // TEQ
    if (pInitializeInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pInitializeInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pInitializeInfo.GetMetaStructPointer(), indent+1, pInitializeInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkUninitializePerformanceApiINTEL(
    format::HandleId                            device)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkUninitializePerformanceApiINTEL(device)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdSetPerformanceMarkerINTEL(
    VkResult                                    returnValue,
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkPerformanceMarkerInfoINTEL>& pMarkerInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdSetPerformanceMarkerINTEL(commandBuffer, pMarkerInfo)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkPerformanceMarkerInfoINTEL* pMarkerInfo
    IndentSpaces(out, indent);
    *out += "pMarkerInfo:                    ";
    *out += "const VkPerformanceMarkerInfoINTEL* = "; // TEQ
    if (pMarkerInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pMarkerInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pMarkerInfo.GetMetaStructPointer(), indent+1, pMarkerInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdSetPerformanceStreamMarkerINTEL(
    VkResult                                    returnValue,
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkPerformanceStreamMarkerInfoINTEL>& pMarkerInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdSetPerformanceStreamMarkerINTEL(commandBuffer, pMarkerInfo)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkPerformanceStreamMarkerInfoINTEL* pMarkerInfo
    IndentSpaces(out, indent);
    *out += "pMarkerInfo:                    ";
    *out += "const VkPerformanceStreamMarkerInfoINTEL* = "; // TEQ
    if (pMarkerInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pMarkerInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pMarkerInfo.GetMetaStructPointer(), indent+1, pMarkerInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkCmdSetPerformanceOverrideINTEL(
    VkResult                                    returnValue,
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkPerformanceOverrideInfoINTEL>& pOverrideInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdSetPerformanceOverrideINTEL(commandBuffer, pOverrideInfo)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkPerformanceOverrideInfoINTEL* pOverrideInfo
    IndentSpaces(out, indent);
    *out += "pOverrideInfo:                  ";
    *out += "const VkPerformanceOverrideInfoINTEL* = "; // TEQ
    if (pOverrideInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pOverrideInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pOverrideInfo.GetMetaStructPointer(), indent+1, pOverrideInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkAcquirePerformanceConfigurationINTEL(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkPerformanceConfigurationAcquireInfoINTEL>& pAcquireInfo,
    const HandlePointerDecoder<VkPerformanceConfigurationINTEL>& pConfiguration)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkAcquirePerformanceConfigurationINTEL(device, pAcquireInfo, pConfiguration)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkPerformanceConfigurationAcquireInfoINTEL* pAcquireInfo
    IndentSpaces(out, indent);
    *out += "pAcquireInfo:                   ";
    *out += "const VkPerformanceConfigurationAcquireInfoINTEL* = "; // TEQ
    if (pAcquireInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAcquireInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAcquireInfo.GetMetaStructPointer(), indent+1, pAcquireInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkPerformanceConfigurationINTEL* pConfiguration
    IndentSpaces(out, indent);
    *out += "pConfiguration:                 ";
    *out += "VkPerformanceConfigurationINTEL* = "; // TEQ
    if (pConfiguration.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pConfiguration = {true, false, false, nullptr};
        ScalarValueToString(out, pConfiguration.GetPointer(), vinfo_pConfiguration); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkReleasePerformanceConfigurationINTEL(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            configuration)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkReleasePerformanceConfigurationINTEL(device, configuration)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkPerformanceConfigurationINTEL configuration
    IndentSpaces(out, indent);
    *out += "configuration:                  ";
    *out += "VkPerformanceConfigurationINTEL = "; // TEQ
    AddrToString(out, configuration); // PAQ
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkQueueSetPerformanceConfigurationINTEL(
    VkResult                                    returnValue,
    format::HandleId                            queue,
    format::HandleId                            configuration)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkQueueSetPerformanceConfigurationINTEL(queue, configuration)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkQueue queue
    IndentSpaces(out, indent);
    *out += "queue:                          ";
    *out += "VkQueue = "; // TEQ
    AddrToString(out, queue); // PAQ
    outString += "\n";   // HHS

    // func arg: VkPerformanceConfigurationINTEL configuration
    IndentSpaces(out, indent);
    *out += "configuration:                  ";
    *out += "VkPerformanceConfigurationINTEL = "; // TEQ
    AddrToString(out, configuration); // PAQ
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetPerformanceParameterINTEL(
    VkResult                                    returnValue,
    format::HandleId                            device,
    VkPerformanceParameterTypeINTEL             parameter,
    const StructPointerDecoder<Decoded_VkPerformanceValueINTEL>& pValue)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPerformanceParameterINTEL(device, parameter, pValue)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkPerformanceParameterTypeINTEL parameter
    IndentSpaces(out, indent);
    *out += "parameter:                      ";
    *out += "VkPerformanceParameterTypeINTEL = "; // TEQ
    EnumToStringVkPerformanceParameterTypeINTEL(out, parameter); // VSA
    *out += " (";
    UnsignedDecimalToString(out, parameter);
    *out += ")";
    outString += "\n";   // HHS

    // func arg: VkPerformanceValueINTEL* pValue
    IndentSpaces(out, indent);
    *out += "pValue:                         ";
    *out += "VkPerformanceValueINTEL* = "; // TEQ
    if (pValue.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pValue.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pValue.GetMetaStructPointer(), indent+1, pValue.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkSetLocalDimmingAMD(
    format::HandleId                            device,
    format::HandleId                            swapChain,
    VkBool32                                    localDimmingEnable)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkSetLocalDimmingAMD(device, swapChain, localDimmingEnable)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkSwapchainKHR swapChain
    IndentSpaces(out, indent);
    *out += "swapChain:                      ";
    *out += "VkSwapchainKHR = "; // TEQ
    AddrToString(out, swapChain); // PAQ
    outString += "\n";   // HHS

    // func arg: VkBool32 localDimmingEnable
    IndentSpaces(out, indent);
    *out += "localDimmingEnable:             ";
    *out += "VkBool32 = "; // TEQ
    SignedDecimalToString(out, localDimmingEnable); //EQA
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkCreateImagePipeSurfaceFUCHSIA(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkImagePipeSurfaceCreateInfoFUCHSIA>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreateImagePipeSurfaceFUCHSIA(instance, pCreateInfo, pAllocator, pSurface)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkInstance instance
    IndentSpaces(out, indent);
    *out += "instance:                       ";
    *out += "VkInstance = "; // TEQ
    AddrToString(out, instance); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkImagePipeSurfaceCreateInfoFUCHSIA* pCreateInfo
    IndentSpaces(out, indent);
    *out += "pCreateInfo:                    ";
    *out += "const VkImagePipeSurfaceCreateInfoFUCHSIA* = "; // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkSurfaceKHR* pSurface
    IndentSpaces(out, indent);
    *out += "pSurface:                       ";
    *out += "VkSurfaceKHR* = "; // TEQ
    if (pSurface.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pSurface = {true, false, false, nullptr};
        ScalarValueToString(out, pSurface.GetPointer(), vinfo_pSurface); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkCreateMetalSurfaceEXT(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkMetalSurfaceCreateInfoEXT>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreateMetalSurfaceEXT(instance, pCreateInfo, pAllocator, pSurface)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkInstance instance
    IndentSpaces(out, indent);
    *out += "instance:                       ";
    *out += "VkInstance = "; // TEQ
    AddrToString(out, instance); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkMetalSurfaceCreateInfoEXT* pCreateInfo
    IndentSpaces(out, indent);
    *out += "pCreateInfo:                    ";
    *out += "const VkMetalSurfaceCreateInfoEXT* = "; // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkSurfaceKHR* pSurface
    IndentSpaces(out, indent);
    *out += "pSurface:                       ";
    *out += "VkSurfaceKHR* = "; // TEQ
    if (pSurface.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pSurface = {true, false, false, nullptr};
        ScalarValueToString(out, pSurface.GetPointer(), vinfo_pSurface); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkGetBufferDeviceAddressEXT(
    VkDeviceAddress                             returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkBufferDeviceAddressInfoEXT>& pInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetBufferDeviceAddressEXT(device, pInfo)");
    fprintf(GetFile(), " returns 0x%" PRIx64 ":\n", returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkBufferDeviceAddressInfoEXT* pInfo
    IndentSpaces(out, indent);
    *out += "pInfo:                          ";
    *out += "const VkBufferDeviceAddressInfoEXT* = "; // TEQ
    if (pInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pInfo.GetMetaStructPointer(), indent+1, pInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const PointerDecoder<uint32_t>&             pPropertyCount,
    const StructPointerDecoder<Decoded_VkCooperativeMatrixPropertiesNV>& pProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceCooperativeMatrixPropertiesNV(physicalDevice, pPropertyCount, pProperties)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t* pPropertyCount
    IndentSpaces(out, indent);
    *out += "pPropertyCount:                 ";
    *out += "uint32_t* = "; // TEQ
    if (pPropertyCount.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pPropertyCount = {false, false, false, nullptr};
        ScalarValueToString(out, pPropertyCount.GetPointer(), vinfo_pPropertyCount); // PWS
    }
    outString += "\n";   // HHS

    // func arg: VkCooperativeMatrixPropertiesNV* pProperties
    IndentSpaces(out, indent);
    *out += "pProperties:                    ";
    *out += "VkCooperativeMatrixPropertiesNV* = "; // TEQ
    if (pProperties.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pProperties.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkCooperativeMatrixPropertiesNV>(out, indent+1, 1, "VkCooperativeMatrixPropertiesNV", pProperties.GetMetaStructPointer(), "pProperties", *pPropertyCount.GetPointer(), false, pProperties.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const PointerDecoder<uint32_t>&             pCombinationCount,
    const StructPointerDecoder<Decoded_VkFramebufferMixedSamplesCombinationNV>& pCombinations)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(physicalDevice, pCombinationCount, pCombinations)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t* pCombinationCount
    IndentSpaces(out, indent);
    *out += "pCombinationCount:              ";
    *out += "uint32_t* = "; // TEQ
    if (pCombinationCount.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pCombinationCount = {false, false, false, nullptr};
        ScalarValueToString(out, pCombinationCount.GetPointer(), vinfo_pCombinationCount); // PWS
    }
    outString += "\n";   // HHS

    // func arg: VkFramebufferMixedSamplesCombinationNV* pCombinations
    IndentSpaces(out, indent);
    *out += "pCombinations:                  ";
    *out += "VkFramebufferMixedSamplesCombinationNV* = "; // TEQ
    if (pCombinations.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCombinations.GetAddress()); // WUS
        ArrayOfStructsToString<Decoded_VkFramebufferMixedSamplesCombinationNV>(out, indent+1, 1, "VkFramebufferMixedSamplesCombinationNV", pCombinations.GetMetaStructPointer(), "pCombinations", *pCombinationCount.GetPointer(), false, pCombinations.GetAddress());  // CCO
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSurfacePresentModes2EXT(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceSurfaceInfo2KHR>& pSurfaceInfo,
    const PointerDecoder<uint32_t>&             pPresentModeCount,
    const PointerDecoder<VkPresentModeKHR>&     pPresentModes)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetPhysicalDeviceSurfacePresentModes2EXT(physicalDevice, pSurfaceInfo, pPresentModeCount, pPresentModes)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkPhysicalDevice physicalDevice
    IndentSpaces(out, indent);
    *out += "physicalDevice:                 ";
    *out += "VkPhysicalDevice = "; // TEQ
    AddrToString(out, physicalDevice); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo
    IndentSpaces(out, indent);
    *out += "pSurfaceInfo:                   ";
    *out += "const VkPhysicalDeviceSurfaceInfo2KHR* = "; // TEQ
    if (pSurfaceInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pSurfaceInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pSurfaceInfo.GetMetaStructPointer(), indent+1, pSurfaceInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: uint32_t* pPresentModeCount
    IndentSpaces(out, indent);
    *out += "pPresentModeCount:              ";
    *out += "uint32_t* = "; // TEQ
    if (pPresentModeCount.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pPresentModeCount = {false, false, false, nullptr};
        ScalarValueToString(out, pPresentModeCount.GetPointer(), vinfo_pPresentModeCount); // PWS
    }
    outString += "\n";   // HHS

    // func arg: VkPresentModeKHR* pPresentModes
    IndentSpaces(out, indent);
    *out += "pPresentModes:                  ";
    *out += "VkPresentModeKHR* = "; // TEQ
    if (pPresentModes.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pPresentModes.GetAddress()); // PAZ
        ScalarValueToStringStruct vinfo_pPresentModes = {false, true, false, EnumToStringVkPresentModeKHR};
        ArrayToString<PointerDecoder<VkPresentModeKHR>>(out, indent, 1, "VkPresentModeKHR*", &pPresentModes, "pPresentModes", *pPresentModeCount.GetPointer(),  vinfo_pPresentModes);  // CXC
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkAcquireFullScreenExclusiveModeEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkAcquireFullScreenExclusiveModeEXT(device, swapchain)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkSwapchainKHR swapchain
    IndentSpaces(out, indent);
    *out += "swapchain:                      ";
    *out += "VkSwapchainKHR = "; // TEQ
    AddrToString(out, swapchain); // PAQ
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkReleaseFullScreenExclusiveModeEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkReleaseFullScreenExclusiveModeEXT(device, swapchain)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkSwapchainKHR swapchain
    IndentSpaces(out, indent);
    *out += "swapchain:                      ";
    *out += "VkSwapchainKHR = "; // TEQ
    AddrToString(out, swapchain); // PAQ
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

void VulkanAsciiConsumer::Process_vkGetDeviceGroupSurfacePresentModes2EXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceSurfaceInfo2KHR>& pSurfaceInfo,
    const PointerDecoder<VkDeviceGroupPresentModeFlagsKHR>& pModes)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkGetDeviceGroupSurfacePresentModes2EXT(device, pSurfaceInfo, pModes)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo
    IndentSpaces(out, indent);
    *out += "pSurfaceInfo:                   ";
    *out += "const VkPhysicalDeviceSurfaceInfo2KHR* = "; // TEQ
    if (pSurfaceInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pSurfaceInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pSurfaceInfo.GetMetaStructPointer(), indent+1, pSurfaceInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkDeviceGroupPresentModeFlagsKHR* pModes
    IndentSpaces(out, indent);
    *out += "pModes:                         ";
    *out += "VkDeviceGroupPresentModeFlagsKHR* = "; // TEQ
    if (pModes.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pModes = {false, false, true, EnumToStringVkDeviceGroupPresentModeFlagBitsKHR};
        ScalarValueToString(out, pModes.GetPointer(), vinfo_pModes); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkCreateHeadlessSurfaceEXT(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkHeadlessSurfaceCreateInfoEXT>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCreateHeadlessSurfaceEXT(instance, pCreateInfo, pAllocator, pSurface)");
    EnumToStringVkResult(&outString, returnValue);
    fprintf(GetFile(), " returns VkResult %s (%" PRId32 "):\n", outString.c_str(), returnValue);
    outString = ""; //UYT

    // func arg: VkInstance instance
    IndentSpaces(out, indent);
    *out += "instance:                       ";
    *out += "VkInstance = "; // TEQ
    AddrToString(out, instance); // PAQ
    outString += "\n";   // HHS

    // func arg: const VkHeadlessSurfaceCreateInfoEXT* pCreateInfo
    IndentSpaces(out, indent);
    *out += "pCreateInfo:                    ";
    *out += "const VkHeadlessSurfaceCreateInfoEXT* = "; // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pCreateInfo.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    IndentSpaces(out, indent);
    *out += "pAllocator:                     ";
    *out += "const VkAllocationCallbacks* = "; // TEQ
    if (pAllocator.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        AddrToString(out, pAllocator.GetAddress()); // JHI
        *out += ":";
        StructureToString(out, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    outString += "\n";   // HHS

    // func arg: VkSurfaceKHR* pSurface
    IndentSpaces(out, indent);
    *out += "pSurface:                       ";
    *out += "VkSurfaceKHR* = "; // TEQ
    if (pSurface.GetPointer() == nullptr) // WWY
    {
        *out += "NULL";
    }
    else
    {
        ScalarValueToStringStruct vinfo_pSurface = {true, false, false, nullptr};
        ScalarValueToString(out, pSurface.GetPointer(), vinfo_pSurface); // PWS
    }
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkCmdSetLineStippleEXT(
    format::HandleId                            commandBuffer,
    uint32_t                                    lineStippleFactor,
    uint16_t                                    lineStipplePattern)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkCmdSetLineStippleEXT(commandBuffer, lineStippleFactor, lineStipplePattern)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    IndentSpaces(out, indent);
    *out += "commandBuffer:                  ";
    *out += "VkCommandBuffer = "; // TEQ
    AddrToString(out, commandBuffer); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t lineStippleFactor
    IndentSpaces(out, indent);
    *out += "lineStippleFactor:              ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, lineStippleFactor); // UYW
    outString += "\n";   // HHS

    // func arg: uint16_t lineStipplePattern
    IndentSpaces(out, indent);
    *out += "lineStipplePattern:             ";
    *out += "uint16_t = "; // TEQ
    UnsignedDecimalToString(out, lineStipplePattern); // UYW
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}


void VulkanAsciiConsumer::Process_vkResetQueryPoolEXT(
    format::HandleId                            device,
    format::HandleId                            queryPool,
    uint32_t                                    firstQuery,
    uint32_t                                    queryCount)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "vkResetQueryPoolEXT(device, queryPool, firstQuery, queryCount)");
    fprintf(GetFile(), " returns void:\n");

    // func arg: VkDevice device
    IndentSpaces(out, indent);
    *out += "device:                         ";
    *out += "VkDevice = "; // TEQ
    AddrToString(out, device); // PAQ
    outString += "\n";   // HHS

    // func arg: VkQueryPool queryPool
    IndentSpaces(out, indent);
    *out += "queryPool:                      ";
    *out += "VkQueryPool = "; // TEQ
    AddrToString(out, queryPool); // PAQ
    outString += "\n";   // HHS

    // func arg: uint32_t firstQuery
    IndentSpaces(out, indent);
    *out += "firstQuery:                     ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, firstQuery); // UYW
    outString += "\n";   // HHS

    // func arg: uint32_t queryCount
    IndentSpaces(out, indent);
    *out += "queryCount:                     ";
    *out += "uint32_t = "; // TEQ
    UnsignedDecimalToString(out, queryCount); // UYW
    outString += "\n";   // HHS

    outString += "\n";   // HDS
    fprintf(GetFile(), "%s", outString.c_str());
}

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)
