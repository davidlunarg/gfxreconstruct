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

#include "decode/api_decoder.h"
#include "format/platform_types.h"
#include "generated/generated_vulkan_ascii_consumer.h"
#include "generated/generated_vulkan_ascii_struct_util.h"
#include "generated/generated_vulkan_enum_output_util.h"
#include "util/defines.h"
#include "util/ascii_utils.h"
#include "vulkan/vulkan.h"
#include <functional>
#include <inttypes.h>
#include <string>

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)

static uint32_t frameNumber = 0; // FNA

void VulkanAsciiConsumer::Process_vkCreateInstance(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    const StructPointerDecoder<Decoded_VkInstanceCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkInstance>*           pInstance)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreateInstance(pCreateInfo, pAllocator, pInstance)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: const VkInstanceCreateInfo* pCreateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkInstanceCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pCreateInfo.HasData() && pCreateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkInstance* pInstance
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pInstance:                      "); // HRW
    OutputString(outputFile, "VkInstance* = "); // TEQ
    if (pInstance->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pInstance = {true, false, false, nullptr};
        if (pInstance->HasData() && pInstance->HasAddress())
            OutputScalarValueAscii(outputFile, pInstance->GetPointer(), vinfo_pInstance); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyInstance(
    const ApiCallInfo&                          call_info,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkDestroyInstance(instance, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkInstance instance
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "instance:                       "); // HRW
    OutputString(outputFile, "VkInstance = "); // TEQ
    OutputAddrAscii(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkEnumeratePhysicalDevices(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            instance,
    PointerDecoder<uint32_t>*                   pPhysicalDeviceCount,
    HandlePointerDecoder<VkPhysicalDevice>*     pPhysicalDevices)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkEnumeratePhysicalDevices(instance, pPhysicalDeviceCount, pPhysicalDevices)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "instance:                       "); // HRW
    OutputString(outputFile, "VkInstance = "); // TEQ
    OutputAddrAscii(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pPhysicalDeviceCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pPhysicalDeviceCount:           "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pPhysicalDeviceCount->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pPhysicalDeviceCount = {false, false, false, nullptr};
        if (pPhysicalDeviceCount->HasData() && pPhysicalDeviceCount->HasAddress())
            OutputScalarValueAscii(outputFile, pPhysicalDeviceCount->GetPointer(), vinfo_pPhysicalDeviceCount); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPhysicalDevice* pPhysicalDevices
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pPhysicalDevices:               "); // HRW
    OutputString(outputFile, "VkPhysicalDevice* = "); // TEQ
    if (pPhysicalDevices->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pPhysicalDevices->GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pPhysicalDevices = {true, false, false, nullptr};
        OutputArrayAscii(outputFile, indent, "VkPhysicalDevice*", pPhysicalDevices, "pPhysicalDevices", *pPhysicalDeviceCount->GetPointer(), vinfo_pPhysicalDevices); // AUB
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceFeatures(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceFeatures>* pFeatures)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceFeatures(physicalDevice, pFeatures)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPhysicalDeviceFeatures* pFeatures
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pFeatures:                      "); // HRW
    OutputString(outputFile, "VkPhysicalDeviceFeatures* = "); // TEQ
    if (pFeatures->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pFeatures->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pFeatures->HasData() && pFeatures->HasAddress())
            OutputStructureAscii(outputFile, *pFeatures->GetMetaStructPointer(), indent+1, pFeatures->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceFormatProperties(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    VkFormat                                    format,
    StructPointerDecoder<Decoded_VkFormatProperties>* pFormatProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceFormatProperties(physicalDevice, format, pFormatProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFormat format
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "format:                         "); // HRW
    OutputString(outputFile, "VkFormat = "); // TEQ
    OutputEnumVkFormat(outputFile, format); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimalAscii(outputFile, format);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFormatProperties* pFormatProperties
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pFormatProperties:              "); // HRW
    OutputString(outputFile, "VkFormatProperties* = "); // TEQ
    if (pFormatProperties->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pFormatProperties->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pFormatProperties->HasData() && pFormatProperties->HasAddress())
            OutputStructureAscii(outputFile, *pFormatProperties->GetMetaStructPointer(), indent+1, pFormatProperties->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceImageFormatProperties(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
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
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceImageFormatProperties(physicalDevice, format, type, tiling, usage, flags, pImageFormatProperties)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFormat format
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "format:                         "); // HRW
    OutputString(outputFile, "VkFormat = "); // TEQ
    OutputEnumVkFormat(outputFile, format); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimalAscii(outputFile, format);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageType type
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "type:                           "); // HRW
    OutputString(outputFile, "VkImageType = "); // TEQ
    OutputEnumVkImageType(outputFile, type); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimalAscii(outputFile, type);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageTiling tiling
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "tiling:                         "); // HRW
    OutputString(outputFile, "VkImageTiling = "); // TEQ
    OutputEnumVkImageTiling(outputFile, tiling); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimalAscii(outputFile, tiling);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageUsageFlags usage
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "usage:                          "); // HRW
    OutputString(outputFile, "VkImageUsageFlags = "); // TEQ
    OutputFlagsAscii(outputFile, usage, OutputEnumVkImageUsageFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageCreateFlags flags
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "flags:                          "); // HRW
    OutputString(outputFile, "VkImageCreateFlags = "); // TEQ
    OutputFlagsAscii(outputFile, flags, OutputEnumVkImageCreateFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageFormatProperties* pImageFormatProperties
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pImageFormatProperties:         "); // HRW
    OutputString(outputFile, "VkImageFormatProperties* = "); // TEQ
    if (pImageFormatProperties->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pImageFormatProperties->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pImageFormatProperties->HasData() && pImageFormatProperties->HasAddress())
            OutputStructureAscii(outputFile, *pImageFormatProperties->GetMetaStructPointer(), indent+1, pImageFormatProperties->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceProperties(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceProperties>* pProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceProperties(physicalDevice, pProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPhysicalDeviceProperties* pProperties
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pProperties:                    "); // HRW
    OutputString(outputFile, "VkPhysicalDeviceProperties* = "); // TEQ
    if (pProperties->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pProperties->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pProperties->HasData() && pProperties->HasAddress())
            OutputStructureAscii(outputFile, *pProperties->GetMetaStructPointer(), indent+1, pProperties->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceQueueFamilyProperties(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    PointerDecoder<uint32_t>*                   pQueueFamilyPropertyCount,
    StructPointerDecoder<Decoded_VkQueueFamilyProperties>* pQueueFamilyProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceQueueFamilyProperties(physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pQueueFamilyPropertyCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pQueueFamilyPropertyCount:      "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pQueueFamilyPropertyCount->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pQueueFamilyPropertyCount = {false, false, false, nullptr};
        if (pQueueFamilyPropertyCount->HasData() && pQueueFamilyPropertyCount->HasAddress())
            OutputScalarValueAscii(outputFile, pQueueFamilyPropertyCount->GetPointer(), vinfo_pQueueFamilyPropertyCount); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueueFamilyProperties* pQueueFamilyProperties
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pQueueFamilyProperties:         "); // HRW
    OutputString(outputFile, "VkQueueFamilyProperties* = "); // TEQ
    if (pQueueFamilyProperties->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pQueueFamilyProperties->GetAddress()); // WUS
        if (pQueueFamilyProperties->HasData() && pQueueFamilyProperties->HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkQueueFamilyProperties", pQueueFamilyProperties->GetMetaStructPointer(), "pQueueFamilyProperties", *pQueueFamilyPropertyCount->GetPointer(), false, pQueueFamilyProperties->GetAddress(), sizeof(VkQueueFamilyProperties));  // CCN
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceMemoryProperties(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceMemoryProperties>* pMemoryProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceMemoryProperties(physicalDevice, pMemoryProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPhysicalDeviceMemoryProperties* pMemoryProperties
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pMemoryProperties:              "); // HRW
    OutputString(outputFile, "VkPhysicalDeviceMemoryProperties* = "); // TEQ
    if (pMemoryProperties->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pMemoryProperties->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pMemoryProperties->HasData() && pMemoryProperties->HasAddress())
            OutputStructureAscii(outputFile, *pMemoryProperties->GetMetaStructPointer(), indent+1, pMemoryProperties->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateDevice(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkDeviceCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkDevice>*             pDevice)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreateDevice(physicalDevice, pCreateInfo, pAllocator, pDevice)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDeviceCreateInfo* pCreateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkDeviceCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pCreateInfo.HasData() && pCreateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDevice* pDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pDevice:                        "); // HRW
    OutputString(outputFile, "VkDevice* = "); // TEQ
    if (pDevice->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pDevice = {true, false, false, nullptr};
        if (pDevice->HasData() && pDevice->HasAddress())
            OutputScalarValueAscii(outputFile, pDevice->GetPointer(), vinfo_pDevice); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyDevice(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkDestroyDevice(device, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetDeviceQueue(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    uint32_t                                    queueFamilyIndex,
    uint32_t                                    queueIndex,
    HandlePointerDecoder<VkQueue>*              pQueue)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetDeviceQueue(device, queueFamilyIndex, queueIndex, pQueue)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t queueFamilyIndex
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "queueFamilyIndex:               "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, queueFamilyIndex); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t queueIndex
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "queueIndex:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, queueIndex); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueue* pQueue
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pQueue:                         "); // HRW
    OutputString(outputFile, "VkQueue* = "); // TEQ
    if (pQueue->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pQueue = {true, false, false, nullptr};
        if (pQueue->HasData() && pQueue->HasAddress())
            OutputScalarValueAscii(outputFile, pQueue->GetPointer(), vinfo_pQueue); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkQueueSubmit(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            queue,
    uint32_t                                    submitCount,
    const StructPointerDecoder<Decoded_VkSubmitInfo>& pSubmits,
    format::HandleId                            fence)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkQueueSubmit(queue, submitCount, pSubmits, fence)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkQueue queue
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "queue:                          "); // HRW
    OutputString(outputFile, "VkQueue = "); // TEQ
    OutputAddrAscii(outputFile, queue); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t submitCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "submitCount:                    "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, submitCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSubmitInfo* pSubmits
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSubmits:                       "); // HRW
    OutputString(outputFile, "const VkSubmitInfo* = "); // TEQ
    if (pSubmits.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pSubmits.GetAddress()); // WVS
        if (pSubmits.HasData() && pSubmits.HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkSubmitInfo", pSubmits.GetMetaStructPointer(), "pSubmits", submitCount, false, pSubmits.GetAddress(), sizeof(VkSubmitInfo));  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFence fence
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "fence:                          "); // HRW
    OutputString(outputFile, "VkFence = "); // TEQ
    OutputAddrAscii(outputFile, fence); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkQueueWaitIdle(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            queue)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkQueueWaitIdle(queue)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkQueue queue
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "queue:                          "); // HRW
    OutputString(outputFile, "VkQueue = "); // TEQ
    OutputAddrAscii(outputFile, queue); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDeviceWaitIdle(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkDeviceWaitIdle(device)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkAllocateMemory(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkMemoryAllocateInfo>& pAllocateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkDeviceMemory>*       pMemory)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkAllocateMemory(device, pAllocateInfo, pAllocator, pMemory)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkMemoryAllocateInfo* pAllocateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocateInfo:                  "); // HRW
    OutputString(outputFile, "const VkMemoryAllocateInfo* = "); // TEQ
    if (pAllocateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocateInfo.HasData() && pAllocateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pAllocateInfo.GetMetaStructPointer(), indent+1, pAllocateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceMemory* pMemory
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pMemory:                        "); // HRW
    OutputString(outputFile, "VkDeviceMemory* = "); // TEQ
    if (pMemory->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pMemory = {true, false, false, nullptr};
        if (pMemory->HasData() && pMemory->HasAddress())
            OutputScalarValueAscii(outputFile, pMemory->GetPointer(), vinfo_pMemory); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkFreeMemory(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            memory,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkFreeMemory(device, memory, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceMemory memory
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "memory:                         "); // HRW
    OutputString(outputFile, "VkDeviceMemory = "); // TEQ
    OutputAddrAscii(outputFile, memory); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkMapMemory(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            memory,
    VkDeviceSize                                offset,
    VkDeviceSize                                size,
    VkMemoryMapFlags                            flags,
    PointerDecoder<uint64_t, void*>*            ppData)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkMapMemory(device, memory, offset, size, flags, ppData)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceMemory memory
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "memory:                         "); // HRW
    OutputString(outputFile, "VkDeviceMemory = "); // TEQ
    OutputAddrAscii(outputFile, memory); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize offset
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "offset:                         "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    OutputSignedDecimalAscii(outputFile, offset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize size
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "size:                           "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    OutputSignedDecimalAscii(outputFile, size); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkMemoryMapFlags flags
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "flags:                          "); // HRW
    OutputString(outputFile, "VkMemoryMapFlags = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, flags); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: void** ppData
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "ppData:                         "); // HRW
    OutputString(outputFile, "void** = "); // TEQ
    if (ppData->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_ppData = {true, false, false, nullptr};
        if (ppData->HasData() && ppData->HasAddress())
            OutputScalarValueAscii(outputFile, ppData->GetPointer(), vinfo_ppData); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkUnmapMemory(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            memory)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkUnmapMemory(device, memory)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceMemory memory
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "memory:                         "); // HRW
    OutputString(outputFile, "VkDeviceMemory = "); // TEQ
    OutputAddrAscii(outputFile, memory); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkFlushMappedMemoryRanges(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    uint32_t                                    memoryRangeCount,
    const StructPointerDecoder<Decoded_VkMappedMemoryRange>& pMemoryRanges)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkFlushMappedMemoryRanges(device, memoryRangeCount, pMemoryRanges)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t memoryRangeCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "memoryRangeCount:               "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, memoryRangeCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkMappedMemoryRange* pMemoryRanges
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pMemoryRanges:                  "); // HRW
    OutputString(outputFile, "const VkMappedMemoryRange* = "); // TEQ
    if (pMemoryRanges.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pMemoryRanges.GetAddress()); // WVS
        if (pMemoryRanges.HasData() && pMemoryRanges.HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkMappedMemoryRange", pMemoryRanges.GetMetaStructPointer(), "pMemoryRanges", memoryRangeCount, false, pMemoryRanges.GetAddress(), sizeof(VkMappedMemoryRange));  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkInvalidateMappedMemoryRanges(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    uint32_t                                    memoryRangeCount,
    const StructPointerDecoder<Decoded_VkMappedMemoryRange>& pMemoryRanges)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkInvalidateMappedMemoryRanges(device, memoryRangeCount, pMemoryRanges)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t memoryRangeCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "memoryRangeCount:               "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, memoryRangeCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkMappedMemoryRange* pMemoryRanges
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pMemoryRanges:                  "); // HRW
    OutputString(outputFile, "const VkMappedMemoryRange* = "); // TEQ
    if (pMemoryRanges.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pMemoryRanges.GetAddress()); // WVS
        if (pMemoryRanges.HasData() && pMemoryRanges.HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkMappedMemoryRange", pMemoryRanges.GetMetaStructPointer(), "pMemoryRanges", memoryRangeCount, false, pMemoryRanges.GetAddress(), sizeof(VkMappedMemoryRange));  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetDeviceMemoryCommitment(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            memory,
    PointerDecoder<VkDeviceSize>*               pCommittedMemoryInBytes)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetDeviceMemoryCommitment(device, memory, pCommittedMemoryInBytes)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceMemory memory
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "memory:                         "); // HRW
    OutputString(outputFile, "VkDeviceMemory = "); // TEQ
    OutputAddrAscii(outputFile, memory); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize* pCommittedMemoryInBytes
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCommittedMemoryInBytes:        "); // HRW
    OutputString(outputFile, "VkDeviceSize* = "); // TEQ
    if (pCommittedMemoryInBytes->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pCommittedMemoryInBytes = {false, false, false, nullptr};
        if (pCommittedMemoryInBytes->HasData() && pCommittedMemoryInBytes->HasAddress())
            OutputScalarValueAscii(outputFile, pCommittedMemoryInBytes->GetPointer(), vinfo_pCommittedMemoryInBytes); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkBindBufferMemory(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            buffer,
    format::HandleId                            memory,
    VkDeviceSize                                memoryOffset)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkBindBufferMemory(device, buffer, memory, memoryOffset)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer buffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "buffer:                         "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    OutputAddrAscii(outputFile, buffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceMemory memory
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "memory:                         "); // HRW
    OutputString(outputFile, "VkDeviceMemory = "); // TEQ
    OutputAddrAscii(outputFile, memory); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize memoryOffset
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "memoryOffset:                   "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    OutputSignedDecimalAscii(outputFile, memoryOffset); // EQA
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkBindImageMemory(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            image,
    format::HandleId                            memory,
    VkDeviceSize                                memoryOffset)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkBindImageMemory(device, image, memory, memoryOffset)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage image
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "image:                          "); // HRW
    OutputString(outputFile, "VkImage = "); // TEQ
    OutputAddrAscii(outputFile, image); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceMemory memory
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "memory:                         "); // HRW
    OutputString(outputFile, "VkDeviceMemory = "); // TEQ
    OutputAddrAscii(outputFile, memory); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize memoryOffset
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "memoryOffset:                   "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    OutputSignedDecimalAscii(outputFile, memoryOffset); // EQA
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetBufferMemoryRequirements(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            buffer,
    StructPointerDecoder<Decoded_VkMemoryRequirements>* pMemoryRequirements)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetBufferMemoryRequirements(device, buffer, pMemoryRequirements)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer buffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "buffer:                         "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    OutputAddrAscii(outputFile, buffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkMemoryRequirements* pMemoryRequirements
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pMemoryRequirements:            "); // HRW
    OutputString(outputFile, "VkMemoryRequirements* = "); // TEQ
    if (pMemoryRequirements->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pMemoryRequirements->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pMemoryRequirements->HasData() && pMemoryRequirements->HasAddress())
            OutputStructureAscii(outputFile, *pMemoryRequirements->GetMetaStructPointer(), indent+1, pMemoryRequirements->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetImageMemoryRequirements(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            image,
    StructPointerDecoder<Decoded_VkMemoryRequirements>* pMemoryRequirements)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetImageMemoryRequirements(device, image, pMemoryRequirements)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage image
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "image:                          "); // HRW
    OutputString(outputFile, "VkImage = "); // TEQ
    OutputAddrAscii(outputFile, image); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkMemoryRequirements* pMemoryRequirements
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pMemoryRequirements:            "); // HRW
    OutputString(outputFile, "VkMemoryRequirements* = "); // TEQ
    if (pMemoryRequirements->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pMemoryRequirements->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pMemoryRequirements->HasData() && pMemoryRequirements->HasAddress())
            OutputStructureAscii(outputFile, *pMemoryRequirements->GetMetaStructPointer(), indent+1, pMemoryRequirements->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetImageSparseMemoryRequirements(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            image,
    PointerDecoder<uint32_t>*                   pSparseMemoryRequirementCount,
    StructPointerDecoder<Decoded_VkSparseImageMemoryRequirements>* pSparseMemoryRequirements)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetImageSparseMemoryRequirements(device, image, pSparseMemoryRequirementCount, pSparseMemoryRequirements)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage image
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "image:                          "); // HRW
    OutputString(outputFile, "VkImage = "); // TEQ
    OutputAddrAscii(outputFile, image); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pSparseMemoryRequirementCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSparseMemoryRequirementCount:  "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pSparseMemoryRequirementCount->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pSparseMemoryRequirementCount = {false, false, false, nullptr};
        if (pSparseMemoryRequirementCount->HasData() && pSparseMemoryRequirementCount->HasAddress())
            OutputScalarValueAscii(outputFile, pSparseMemoryRequirementCount->GetPointer(), vinfo_pSparseMemoryRequirementCount); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSparseImageMemoryRequirements* pSparseMemoryRequirements
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSparseMemoryRequirements:      "); // HRW
    OutputString(outputFile, "VkSparseImageMemoryRequirements* = "); // TEQ
    if (pSparseMemoryRequirements->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pSparseMemoryRequirements->GetAddress()); // WUS
        if (pSparseMemoryRequirements->HasData() && pSparseMemoryRequirements->HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkSparseImageMemoryRequirements", pSparseMemoryRequirements->GetMetaStructPointer(), "pSparseMemoryRequirements", *pSparseMemoryRequirementCount->GetPointer(), false, pSparseMemoryRequirements->GetAddress(), sizeof(VkSparseImageMemoryRequirements));  // CCN
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSparseImageFormatProperties(
    const ApiCallInfo&                          call_info,
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
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceSparseImageFormatProperties(physicalDevice, format, type, samples, usage, tiling, pPropertyCount, pProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFormat format
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "format:                         "); // HRW
    OutputString(outputFile, "VkFormat = "); // TEQ
    OutputEnumVkFormat(outputFile, format); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimalAscii(outputFile, format);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageType type
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "type:                           "); // HRW
    OutputString(outputFile, "VkImageType = "); // TEQ
    OutputEnumVkImageType(outputFile, type); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimalAscii(outputFile, type);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSampleCountFlagBits samples
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "samples:                        "); // HRW
    OutputString(outputFile, "VkSampleCountFlagBits = "); // TEQ
    OutputEnumVkSampleCountFlagBits(outputFile, samples); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimalAscii(outputFile, samples);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageUsageFlags usage
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "usage:                          "); // HRW
    OutputString(outputFile, "VkImageUsageFlags = "); // TEQ
    OutputFlagsAscii(outputFile, usage, OutputEnumVkImageUsageFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageTiling tiling
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "tiling:                         "); // HRW
    OutputString(outputFile, "VkImageTiling = "); // TEQ
    OutputEnumVkImageTiling(outputFile, tiling); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimalAscii(outputFile, tiling);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pPropertyCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pPropertyCount:                 "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pPropertyCount->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pPropertyCount = {false, false, false, nullptr};
        if (pPropertyCount->HasData() && pPropertyCount->HasAddress())
            OutputScalarValueAscii(outputFile, pPropertyCount->GetPointer(), vinfo_pPropertyCount); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSparseImageFormatProperties* pProperties
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pProperties:                    "); // HRW
    OutputString(outputFile, "VkSparseImageFormatProperties* = "); // TEQ
    if (pProperties->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pProperties->GetAddress()); // WUS
        if (pProperties->HasData() && pProperties->HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkSparseImageFormatProperties", pProperties->GetMetaStructPointer(), "pProperties", *pPropertyCount->GetPointer(), false, pProperties->GetAddress(), sizeof(VkSparseImageFormatProperties));  // CCN
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkQueueBindSparse(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            queue,
    uint32_t                                    bindInfoCount,
    const StructPointerDecoder<Decoded_VkBindSparseInfo>& pBindInfo,
    format::HandleId                            fence)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkQueueBindSparse(queue, bindInfoCount, pBindInfo, fence)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkQueue queue
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "queue:                          "); // HRW
    OutputString(outputFile, "VkQueue = "); // TEQ
    OutputAddrAscii(outputFile, queue); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t bindInfoCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "bindInfoCount:                  "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, bindInfoCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBindSparseInfo* pBindInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pBindInfo:                      "); // HRW
    OutputString(outputFile, "const VkBindSparseInfo* = "); // TEQ
    if (pBindInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pBindInfo.GetAddress()); // WVS
        if (pBindInfo.HasData() && pBindInfo.HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkBindSparseInfo", pBindInfo.GetMetaStructPointer(), "pBindInfo", bindInfoCount, false, pBindInfo.GetAddress(), sizeof(VkBindSparseInfo));  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFence fence
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "fence:                          "); // HRW
    OutputString(outputFile, "VkFence = "); // TEQ
    OutputAddrAscii(outputFile, fence); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateFence(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkFenceCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkFence>*              pFence)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreateFence(device, pCreateInfo, pAllocator, pFence)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkFenceCreateInfo* pCreateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkFenceCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pCreateInfo.HasData() && pCreateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFence* pFence
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pFence:                         "); // HRW
    OutputString(outputFile, "VkFence* = "); // TEQ
    if (pFence->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pFence = {true, false, false, nullptr};
        if (pFence->HasData() && pFence->HasAddress())
            OutputScalarValueAscii(outputFile, pFence->GetPointer(), vinfo_pFence); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyFence(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            fence,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkDestroyFence(device, fence, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFence fence
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "fence:                          "); // HRW
    OutputString(outputFile, "VkFence = "); // TEQ
    OutputAddrAscii(outputFile, fence); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkResetFences(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    uint32_t                                    fenceCount,
    const HandlePointerDecoder<VkFence>&        pFences)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkResetFences(device, fenceCount, pFences)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t fenceCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "fenceCount:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, fenceCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkFence* pFences
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pFences:                        "); // HRW
    OutputString(outputFile, "const VkFence* = "); // TEQ
    if (pFences.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pFences.GetAddress()); // PBZ
        OutputScalarValueStructInfo vinfo_pFences = {true, false, false, nullptr};
        OutputArrayAscii(outputFile, indent, "const VkFence*", &pFences, "pFences", fenceCount, vinfo_pFences); // AUB
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetFenceStatus(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            fence)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetFenceStatus(device, fence)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFence fence
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "fence:                          "); // HRW
    OutputString(outputFile, "VkFence = "); // TEQ
    OutputAddrAscii(outputFile, fence); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkWaitForFences(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    uint32_t                                    fenceCount,
    const HandlePointerDecoder<VkFence>&        pFences,
    VkBool32                                    waitAll,
    uint64_t                                    timeout)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkWaitForFences(device, fenceCount, pFences, waitAll, timeout)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t fenceCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "fenceCount:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, fenceCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkFence* pFences
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pFences:                        "); // HRW
    OutputString(outputFile, "const VkFence* = "); // TEQ
    if (pFences.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pFences.GetAddress()); // PBZ
        OutputScalarValueStructInfo vinfo_pFences = {true, false, false, nullptr};
        OutputArrayAscii(outputFile, indent, "const VkFence*", &pFences, "pFences", fenceCount, vinfo_pFences); // AUB
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBool32 waitAll
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "waitAll:                        "); // HRW
    OutputString(outputFile, "VkBool32 = "); // TEQ
    OutputSignedDecimalAscii(outputFile, waitAll); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint64_t timeout
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "timeout:                        "); // HRW
    OutputString(outputFile, "uint64_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, timeout); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateSemaphore(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSemaphoreCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkSemaphore>*          pSemaphore)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreateSemaphore(device, pCreateInfo, pAllocator, pSemaphore)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSemaphoreCreateInfo* pCreateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkSemaphoreCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pCreateInfo.HasData() && pCreateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSemaphore* pSemaphore
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSemaphore:                     "); // HRW
    OutputString(outputFile, "VkSemaphore* = "); // TEQ
    if (pSemaphore->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pSemaphore = {true, false, false, nullptr};
        if (pSemaphore->HasData() && pSemaphore->HasAddress())
            OutputScalarValueAscii(outputFile, pSemaphore->GetPointer(), vinfo_pSemaphore); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroySemaphore(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            semaphore,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkDestroySemaphore(device, semaphore, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSemaphore semaphore
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "semaphore:                      "); // HRW
    OutputString(outputFile, "VkSemaphore = "); // TEQ
    OutputAddrAscii(outputFile, semaphore); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateEvent(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkEventCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkEvent>*              pEvent)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreateEvent(device, pCreateInfo, pAllocator, pEvent)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkEventCreateInfo* pCreateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkEventCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pCreateInfo.HasData() && pCreateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkEvent* pEvent
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pEvent:                         "); // HRW
    OutputString(outputFile, "VkEvent* = "); // TEQ
    if (pEvent->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pEvent = {true, false, false, nullptr};
        if (pEvent->HasData() && pEvent->HasAddress())
            OutputScalarValueAscii(outputFile, pEvent->GetPointer(), vinfo_pEvent); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyEvent(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            event,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkDestroyEvent(device, event, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkEvent event
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "event:                          "); // HRW
    OutputString(outputFile, "VkEvent = "); // TEQ
    OutputAddrAscii(outputFile, event); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetEventStatus(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            event)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetEventStatus(device, event)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkEvent event
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "event:                          "); // HRW
    OutputString(outputFile, "VkEvent = "); // TEQ
    OutputAddrAscii(outputFile, event); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkSetEvent(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            event)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkSetEvent(device, event)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkEvent event
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "event:                          "); // HRW
    OutputString(outputFile, "VkEvent = "); // TEQ
    OutputAddrAscii(outputFile, event); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkResetEvent(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            event)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkResetEvent(device, event)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkEvent event
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "event:                          "); // HRW
    OutputString(outputFile, "VkEvent = "); // TEQ
    OutputAddrAscii(outputFile, event); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateQueryPool(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkQueryPoolCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkQueryPool>*          pQueryPool)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreateQueryPool(device, pCreateInfo, pAllocator, pQueryPool)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkQueryPoolCreateInfo* pCreateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkQueryPoolCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pCreateInfo.HasData() && pCreateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryPool* pQueryPool
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pQueryPool:                     "); // HRW
    OutputString(outputFile, "VkQueryPool* = "); // TEQ
    if (pQueryPool->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pQueryPool = {true, false, false, nullptr};
        if (pQueryPool->HasData() && pQueryPool->HasAddress())
            OutputScalarValueAscii(outputFile, pQueryPool->GetPointer(), vinfo_pQueryPool); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyQueryPool(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            queryPool,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkDestroyQueryPool(device, queryPool, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryPool queryPool
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "queryPool:                      "); // HRW
    OutputString(outputFile, "VkQueryPool = "); // TEQ
    OutputAddrAscii(outputFile, queryPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetQueryPoolResults(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
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
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetQueryPoolResults(device, queryPool, firstQuery, queryCount, dataSize, pData, stride, flags)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryPool queryPool
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "queryPool:                      "); // HRW
    OutputString(outputFile, "VkQueryPool = "); // TEQ
    OutputAddrAscii(outputFile, queryPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstQuery
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "firstQuery:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, firstQuery); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t queryCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "queryCount:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, queryCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: size_t dataSize
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "dataSize:                       "); // HRW
    OutputString(outputFile, "size_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, dataSize); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: void* pData
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pData:                          "); // HRW
    OutputString(outputFile, "void* = "); // TEQ
    if (pData->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pData->GetAddress()); // AHW
        OutputScalarValueStructInfo vinfo_pData = {false, false, false, nullptr};
        OutputArrayAscii(outputFile, indent, "void*", pData, "pData", dataSize, vinfo_pData); // PRC
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize stride
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "stride:                         "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    OutputSignedDecimalAscii(outputFile, stride); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryResultFlags flags
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "flags:                          "); // HRW
    OutputString(outputFile, "VkQueryResultFlags = "); // TEQ
    OutputFlagsAscii(outputFile, flags, OutputEnumVkQueryResultFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateBuffer(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkBufferCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkBuffer>*             pBuffer)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreateBuffer(device, pCreateInfo, pAllocator, pBuffer)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBufferCreateInfo* pCreateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkBufferCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pCreateInfo.HasData() && pCreateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer* pBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pBuffer:                        "); // HRW
    OutputString(outputFile, "VkBuffer* = "); // TEQ
    if (pBuffer->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pBuffer = {true, false, false, nullptr};
        if (pBuffer->HasData() && pBuffer->HasAddress())
            OutputScalarValueAscii(outputFile, pBuffer->GetPointer(), vinfo_pBuffer); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyBuffer(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            buffer,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkDestroyBuffer(device, buffer, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer buffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "buffer:                         "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    OutputAddrAscii(outputFile, buffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateBufferView(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkBufferViewCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkBufferView>*         pView)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreateBufferView(device, pCreateInfo, pAllocator, pView)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBufferViewCreateInfo* pCreateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkBufferViewCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pCreateInfo.HasData() && pCreateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBufferView* pView
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pView:                          "); // HRW
    OutputString(outputFile, "VkBufferView* = "); // TEQ
    if (pView->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, *(pView->GetPointer())); // PWA
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyBufferView(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            bufferView,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkDestroyBufferView(device, bufferView, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBufferView bufferView
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "bufferView:                     "); // HRW
    OutputString(outputFile, "VkBufferView = "); // TEQ
    OutputAddrAscii(outputFile, bufferView); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateImage(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImageCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkImage>*              pImage)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreateImage(device, pCreateInfo, pAllocator, pImage)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImageCreateInfo* pCreateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkImageCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pCreateInfo.HasData() && pCreateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage* pImage
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pImage:                         "); // HRW
    OutputString(outputFile, "VkImage* = "); // TEQ
    if (pImage->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pImage = {true, false, false, nullptr};
        if (pImage->HasData() && pImage->HasAddress())
            OutputScalarValueAscii(outputFile, pImage->GetPointer(), vinfo_pImage); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyImage(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            image,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkDestroyImage(device, image, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage image
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "image:                          "); // HRW
    OutputString(outputFile, "VkImage = "); // TEQ
    OutputAddrAscii(outputFile, image); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetImageSubresourceLayout(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            image,
    const StructPointerDecoder<Decoded_VkImageSubresource>& pSubresource,
    StructPointerDecoder<Decoded_VkSubresourceLayout>* pLayout)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetImageSubresourceLayout(device, image, pSubresource, pLayout)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage image
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "image:                          "); // HRW
    OutputString(outputFile, "VkImage = "); // TEQ
    OutputAddrAscii(outputFile, image); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImageSubresource* pSubresource
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSubresource:                   "); // HRW
    OutputString(outputFile, "const VkImageSubresource* = "); // TEQ
    if (pSubresource.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pSubresource.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pSubresource.HasData() && pSubresource.HasAddress())
            OutputStructureAscii(outputFile, *pSubresource.GetMetaStructPointer(), indent+1, pSubresource.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSubresourceLayout* pLayout
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pLayout:                        "); // HRW
    OutputString(outputFile, "VkSubresourceLayout* = "); // TEQ
    if (pLayout->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pLayout->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pLayout->HasData() && pLayout->HasAddress())
            OutputStructureAscii(outputFile, *pLayout->GetMetaStructPointer(), indent+1, pLayout->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateImageView(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImageViewCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkImageView>*          pView)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreateImageView(device, pCreateInfo, pAllocator, pView)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImageViewCreateInfo* pCreateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkImageViewCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pCreateInfo.HasData() && pCreateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageView* pView
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pView:                          "); // HRW
    OutputString(outputFile, "VkImageView* = "); // TEQ
    if (pView->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, *(pView->GetPointer())); // PWA
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyImageView(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            imageView,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkDestroyImageView(device, imageView, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageView imageView
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "imageView:                      "); // HRW
    OutputString(outputFile, "VkImageView = "); // TEQ
    OutputAddrAscii(outputFile, imageView); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateShaderModule(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkShaderModuleCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkShaderModule>*       pShaderModule)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreateShaderModule(device, pCreateInfo, pAllocator, pShaderModule)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkShaderModuleCreateInfo* pCreateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkShaderModuleCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pCreateInfo.HasData() && pCreateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkShaderModule* pShaderModule
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pShaderModule:                  "); // HRW
    OutputString(outputFile, "VkShaderModule* = "); // TEQ
    if (pShaderModule->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pShaderModule = {true, false, false, nullptr};
        if (pShaderModule->HasData() && pShaderModule->HasAddress())
            OutputScalarValueAscii(outputFile, pShaderModule->GetPointer(), vinfo_pShaderModule); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyShaderModule(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            shaderModule,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkDestroyShaderModule(device, shaderModule, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkShaderModule shaderModule
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "shaderModule:                   "); // HRW
    OutputString(outputFile, "VkShaderModule = "); // TEQ
    OutputAddrAscii(outputFile, shaderModule); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreatePipelineCache(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkPipelineCacheCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkPipelineCache>*      pPipelineCache)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreatePipelineCache(device, pCreateInfo, pAllocator, pPipelineCache)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPipelineCacheCreateInfo* pCreateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkPipelineCacheCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pCreateInfo.HasData() && pCreateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineCache* pPipelineCache
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pPipelineCache:                 "); // HRW
    OutputString(outputFile, "VkPipelineCache* = "); // TEQ
    if (pPipelineCache->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pPipelineCache = {true, false, false, nullptr};
        if (pPipelineCache->HasData() && pPipelineCache->HasAddress())
            OutputScalarValueAscii(outputFile, pPipelineCache->GetPointer(), vinfo_pPipelineCache); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyPipelineCache(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            pipelineCache,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkDestroyPipelineCache(device, pipelineCache, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineCache pipelineCache
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pipelineCache:                  "); // HRW
    OutputString(outputFile, "VkPipelineCache = "); // TEQ
    OutputAddrAscii(outputFile, pipelineCache); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPipelineCacheData(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            pipelineCache,
    PointerDecoder<size_t>*                     pDataSize,
    PointerDecoder<uint8_t>*                    pData)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPipelineCacheData(device, pipelineCache, pDataSize, pData)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineCache pipelineCache
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pipelineCache:                  "); // HRW
    OutputString(outputFile, "VkPipelineCache = "); // TEQ
    OutputAddrAscii(outputFile, pipelineCache); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: size_t* pDataSize
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pDataSize:                      "); // HRW
    OutputString(outputFile, "size_t* = "); // TEQ
    if (pDataSize->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pDataSize = {false, false, false, nullptr};
        if (pDataSize->HasData() && pDataSize->HasAddress())
            OutputScalarValueAscii(outputFile, pDataSize->GetPointer(), vinfo_pDataSize); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: void* pData
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pData:                          "); // HRW
    OutputString(outputFile, "void* = "); // TEQ
    if (pData->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pData->GetAddress()); // AHW
        OutputScalarValueStructInfo vinfo_pData = {false, false, false, nullptr};
        OutputArrayAscii(outputFile, indent, "void*", pData, "pData", *pDataSize->GetPointer(), vinfo_pData); // PRC
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkMergePipelineCaches(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            dstCache,
    uint32_t                                    srcCacheCount,
    const HandlePointerDecoder<VkPipelineCache>& pSrcCaches)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkMergePipelineCaches(device, dstCache, srcCacheCount, pSrcCaches)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineCache dstCache
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "dstCache:                       "); // HRW
    OutputString(outputFile, "VkPipelineCache = "); // TEQ
    OutputAddrAscii(outputFile, dstCache); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t srcCacheCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "srcCacheCount:                  "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, srcCacheCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPipelineCache* pSrcCaches
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSrcCaches:                     "); // HRW
    OutputString(outputFile, "const VkPipelineCache* = "); // TEQ
    if (pSrcCaches.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pSrcCaches.GetAddress()); // PBZ
        OutputScalarValueStructInfo vinfo_pSrcCaches = {true, false, false, nullptr};
        OutputArrayAscii(outputFile, indent, "const VkPipelineCache*", &pSrcCaches, "pSrcCaches", srcCacheCount, vinfo_pSrcCaches); // AUB
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateGraphicsPipelines(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            pipelineCache,
    uint32_t                                    createInfoCount,
    const StructPointerDecoder<Decoded_VkGraphicsPipelineCreateInfo>& pCreateInfos,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkPipeline>*           pPipelines)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreateGraphicsPipelines(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineCache pipelineCache
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pipelineCache:                  "); // HRW
    OutputString(outputFile, "VkPipelineCache = "); // TEQ
    OutputAddrAscii(outputFile, pipelineCache); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t createInfoCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "createInfoCount:                "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, createInfoCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkGraphicsPipelineCreateInfo* pCreateInfos
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfos:                   "); // HRW
    OutputString(outputFile, "const VkGraphicsPipelineCreateInfo* = "); // TEQ
    if (pCreateInfos.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfos.GetAddress()); // WVS
        if (pCreateInfos.HasData() && pCreateInfos.HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkGraphicsPipelineCreateInfo", pCreateInfos.GetMetaStructPointer(), "pCreateInfos", createInfoCount, false, pCreateInfos.GetAddress(), sizeof(VkGraphicsPipelineCreateInfo));  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipeline* pPipelines
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pPipelines:                     "); // HRW
    OutputString(outputFile, "VkPipeline* = "); // TEQ
    if (pPipelines->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pPipelines->GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pPipelines = {true, false, false, nullptr};
        OutputArrayAscii(outputFile, indent, "VkPipeline*", pPipelines, "pPipelines", createInfoCount, vinfo_pPipelines); // AUB
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateComputePipelines(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            pipelineCache,
    uint32_t                                    createInfoCount,
    const StructPointerDecoder<Decoded_VkComputePipelineCreateInfo>& pCreateInfos,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkPipeline>*           pPipelines)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreateComputePipelines(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineCache pipelineCache
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pipelineCache:                  "); // HRW
    OutputString(outputFile, "VkPipelineCache = "); // TEQ
    OutputAddrAscii(outputFile, pipelineCache); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t createInfoCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "createInfoCount:                "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, createInfoCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkComputePipelineCreateInfo* pCreateInfos
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfos:                   "); // HRW
    OutputString(outputFile, "const VkComputePipelineCreateInfo* = "); // TEQ
    if (pCreateInfos.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfos.GetAddress()); // WVS
        if (pCreateInfos.HasData() && pCreateInfos.HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkComputePipelineCreateInfo", pCreateInfos.GetMetaStructPointer(), "pCreateInfos", createInfoCount, false, pCreateInfos.GetAddress(), sizeof(VkComputePipelineCreateInfo));  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipeline* pPipelines
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pPipelines:                     "); // HRW
    OutputString(outputFile, "VkPipeline* = "); // TEQ
    if (pPipelines->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pPipelines->GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pPipelines = {true, false, false, nullptr};
        OutputArrayAscii(outputFile, indent, "VkPipeline*", pPipelines, "pPipelines", createInfoCount, vinfo_pPipelines); // AUB
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyPipeline(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            pipeline,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkDestroyPipeline(device, pipeline, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipeline pipeline
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pipeline:                       "); // HRW
    OutputString(outputFile, "VkPipeline = "); // TEQ
    OutputAddrAscii(outputFile, pipeline); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreatePipelineLayout(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkPipelineLayoutCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkPipelineLayout>*     pPipelineLayout)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreatePipelineLayout(device, pCreateInfo, pAllocator, pPipelineLayout)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPipelineLayoutCreateInfo* pCreateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkPipelineLayoutCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pCreateInfo.HasData() && pCreateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineLayout* pPipelineLayout
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pPipelineLayout:                "); // HRW
    OutputString(outputFile, "VkPipelineLayout* = "); // TEQ
    if (pPipelineLayout->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pPipelineLayout = {true, false, false, nullptr};
        if (pPipelineLayout->HasData() && pPipelineLayout->HasAddress())
            OutputScalarValueAscii(outputFile, pPipelineLayout->GetPointer(), vinfo_pPipelineLayout); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyPipelineLayout(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            pipelineLayout,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkDestroyPipelineLayout(device, pipelineLayout, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineLayout pipelineLayout
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pipelineLayout:                 "); // HRW
    OutputString(outputFile, "VkPipelineLayout = "); // TEQ
    OutputAddrAscii(outputFile, pipelineLayout); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateSampler(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSamplerCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkSampler>*            pSampler)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreateSampler(device, pCreateInfo, pAllocator, pSampler)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSamplerCreateInfo* pCreateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkSamplerCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pCreateInfo.HasData() && pCreateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSampler* pSampler
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSampler:                       "); // HRW
    OutputString(outputFile, "VkSampler* = "); // TEQ
    if (pSampler->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pSampler = {true, false, false, nullptr};
        if (pSampler->HasData() && pSampler->HasAddress())
            OutputScalarValueAscii(outputFile, pSampler->GetPointer(), vinfo_pSampler); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroySampler(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            sampler,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkDestroySampler(device, sampler, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSampler sampler
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "sampler:                        "); // HRW
    OutputString(outputFile, "VkSampler = "); // TEQ
    OutputAddrAscii(outputFile, sampler); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateDescriptorSetLayout(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDescriptorSetLayoutCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkDescriptorSetLayout>* pSetLayout)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreateDescriptorSetLayout(device, pCreateInfo, pAllocator, pSetLayout)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDescriptorSetLayoutCreateInfo* pCreateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkDescriptorSetLayoutCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pCreateInfo.HasData() && pCreateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDescriptorSetLayout* pSetLayout
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSetLayout:                     "); // HRW
    OutputString(outputFile, "VkDescriptorSetLayout* = "); // TEQ
    if (pSetLayout->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pSetLayout = {true, false, false, nullptr};
        if (pSetLayout->HasData() && pSetLayout->HasAddress())
            OutputScalarValueAscii(outputFile, pSetLayout->GetPointer(), vinfo_pSetLayout); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyDescriptorSetLayout(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            descriptorSetLayout,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkDestroyDescriptorSetLayout(device, descriptorSetLayout, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDescriptorSetLayout descriptorSetLayout
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "descriptorSetLayout:            "); // HRW
    OutputString(outputFile, "VkDescriptorSetLayout = "); // TEQ
    OutputAddrAscii(outputFile, descriptorSetLayout); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateDescriptorPool(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDescriptorPoolCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkDescriptorPool>*     pDescriptorPool)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreateDescriptorPool(device, pCreateInfo, pAllocator, pDescriptorPool)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDescriptorPoolCreateInfo* pCreateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkDescriptorPoolCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pCreateInfo.HasData() && pCreateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDescriptorPool* pDescriptorPool
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pDescriptorPool:                "); // HRW
    OutputString(outputFile, "VkDescriptorPool* = "); // TEQ
    if (pDescriptorPool->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pDescriptorPool = {true, false, false, nullptr};
        if (pDescriptorPool->HasData() && pDescriptorPool->HasAddress())
            OutputScalarValueAscii(outputFile, pDescriptorPool->GetPointer(), vinfo_pDescriptorPool); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyDescriptorPool(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            descriptorPool,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkDestroyDescriptorPool(device, descriptorPool, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDescriptorPool descriptorPool
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "descriptorPool:                 "); // HRW
    OutputString(outputFile, "VkDescriptorPool = "); // TEQ
    OutputAddrAscii(outputFile, descriptorPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkResetDescriptorPool(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            descriptorPool,
    VkDescriptorPoolResetFlags                  flags)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkResetDescriptorPool(device, descriptorPool, flags)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDescriptorPool descriptorPool
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "descriptorPool:                 "); // HRW
    OutputString(outputFile, "VkDescriptorPool = "); // TEQ
    OutputAddrAscii(outputFile, descriptorPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDescriptorPoolResetFlags flags
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "flags:                          "); // HRW
    OutputString(outputFile, "VkDescriptorPoolResetFlags = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, flags); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkAllocateDescriptorSets(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDescriptorSetAllocateInfo>& pAllocateInfo,
    HandlePointerDecoder<VkDescriptorSet>*      pDescriptorSets)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkAllocateDescriptorSets(device, pAllocateInfo, pDescriptorSets)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDescriptorSetAllocateInfo* pAllocateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocateInfo:                  "); // HRW
    OutputString(outputFile, "const VkDescriptorSetAllocateInfo* = "); // TEQ
    if (pAllocateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocateInfo.HasData() && pAllocateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pAllocateInfo.GetMetaStructPointer(), indent+1, pAllocateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDescriptorSet* pDescriptorSets
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pDescriptorSets:                "); // HRW
    OutputString(outputFile, "VkDescriptorSet* = "); // TEQ
    if (pDescriptorSets->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pDescriptorSets->GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pDescriptorSets = {true, false, false, nullptr};
        OutputArrayAscii(outputFile, indent, "VkDescriptorSet*", pDescriptorSets, "pDescriptorSets", pAllocateInfo.GetPointer()->descriptorSetCount, vinfo_pDescriptorSets); // AUB
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkFreeDescriptorSets(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            descriptorPool,
    uint32_t                                    descriptorSetCount,
    const HandlePointerDecoder<VkDescriptorSet>& pDescriptorSets)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkFreeDescriptorSets(device, descriptorPool, descriptorSetCount, pDescriptorSets)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDescriptorPool descriptorPool
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "descriptorPool:                 "); // HRW
    OutputString(outputFile, "VkDescriptorPool = "); // TEQ
    OutputAddrAscii(outputFile, descriptorPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t descriptorSetCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "descriptorSetCount:             "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, descriptorSetCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDescriptorSet* pDescriptorSets
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pDescriptorSets:                "); // HRW
    OutputString(outputFile, "const VkDescriptorSet* = "); // TEQ
    if (pDescriptorSets.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pDescriptorSets.GetAddress()); // PBZ
        OutputScalarValueStructInfo vinfo_pDescriptorSets = {true, false, false, nullptr};
        OutputArrayAscii(outputFile, indent, "const VkDescriptorSet*", &pDescriptorSets, "pDescriptorSets", descriptorSetCount, vinfo_pDescriptorSets); // AUB
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkUpdateDescriptorSets(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    uint32_t                                    descriptorWriteCount,
    const StructPointerDecoder<Decoded_VkWriteDescriptorSet>& pDescriptorWrites,
    uint32_t                                    descriptorCopyCount,
    const StructPointerDecoder<Decoded_VkCopyDescriptorSet>& pDescriptorCopies)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkUpdateDescriptorSets(device, descriptorWriteCount, pDescriptorWrites, descriptorCopyCount, pDescriptorCopies)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t descriptorWriteCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "descriptorWriteCount:           "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, descriptorWriteCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkWriteDescriptorSet* pDescriptorWrites
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pDescriptorWrites:              "); // HRW
    OutputString(outputFile, "const VkWriteDescriptorSet* = "); // TEQ
    if (pDescriptorWrites.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pDescriptorWrites.GetAddress()); // WVS
        if (pDescriptorWrites.HasData() && pDescriptorWrites.HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkWriteDescriptorSet", pDescriptorWrites.GetMetaStructPointer(), "pDescriptorWrites", descriptorWriteCount, false, pDescriptorWrites.GetAddress(), sizeof(VkWriteDescriptorSet));  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t descriptorCopyCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "descriptorCopyCount:            "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, descriptorCopyCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkCopyDescriptorSet* pDescriptorCopies
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pDescriptorCopies:              "); // HRW
    OutputString(outputFile, "const VkCopyDescriptorSet* = "); // TEQ
    if (pDescriptorCopies.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pDescriptorCopies.GetAddress()); // WVS
        if (pDescriptorCopies.HasData() && pDescriptorCopies.HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkCopyDescriptorSet", pDescriptorCopies.GetMetaStructPointer(), "pDescriptorCopies", descriptorCopyCount, false, pDescriptorCopies.GetAddress(), sizeof(VkCopyDescriptorSet));  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateFramebuffer(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkFramebufferCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkFramebuffer>*        pFramebuffer)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreateFramebuffer(device, pCreateInfo, pAllocator, pFramebuffer)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkFramebufferCreateInfo* pCreateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkFramebufferCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pCreateInfo.HasData() && pCreateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFramebuffer* pFramebuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pFramebuffer:                   "); // HRW
    OutputString(outputFile, "VkFramebuffer* = "); // TEQ
    if (pFramebuffer->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pFramebuffer = {true, false, false, nullptr};
        if (pFramebuffer->HasData() && pFramebuffer->HasAddress())
            OutputScalarValueAscii(outputFile, pFramebuffer->GetPointer(), vinfo_pFramebuffer); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyFramebuffer(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            framebuffer,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkDestroyFramebuffer(device, framebuffer, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFramebuffer framebuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "framebuffer:                    "); // HRW
    OutputString(outputFile, "VkFramebuffer = "); // TEQ
    OutputAddrAscii(outputFile, framebuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateRenderPass(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkRenderPassCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkRenderPass>*         pRenderPass)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreateRenderPass(device, pCreateInfo, pAllocator, pRenderPass)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkRenderPassCreateInfo* pCreateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkRenderPassCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pCreateInfo.HasData() && pCreateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkRenderPass* pRenderPass
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pRenderPass:                    "); // HRW
    OutputString(outputFile, "VkRenderPass* = "); // TEQ
    if (pRenderPass->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pRenderPass = {true, false, false, nullptr};
        if (pRenderPass->HasData() && pRenderPass->HasAddress())
            OutputScalarValueAscii(outputFile, pRenderPass->GetPointer(), vinfo_pRenderPass); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyRenderPass(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            renderPass,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkDestroyRenderPass(device, renderPass, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkRenderPass renderPass
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "renderPass:                     "); // HRW
    OutputString(outputFile, "VkRenderPass = "); // TEQ
    OutputAddrAscii(outputFile, renderPass); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetRenderAreaGranularity(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            renderPass,
    StructPointerDecoder<Decoded_VkExtent2D>*   pGranularity)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetRenderAreaGranularity(device, renderPass, pGranularity)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkRenderPass renderPass
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "renderPass:                     "); // HRW
    OutputString(outputFile, "VkRenderPass = "); // TEQ
    OutputAddrAscii(outputFile, renderPass); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkExtent2D* pGranularity
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pGranularity:                   "); // HRW
    OutputString(outputFile, "VkExtent2D* = "); // TEQ
    if (pGranularity->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pGranularity->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pGranularity->HasData() && pGranularity->HasAddress())
            OutputStructureAscii(outputFile, *pGranularity->GetMetaStructPointer(), indent+1, pGranularity->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateCommandPool(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkCommandPoolCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkCommandPool>*        pCommandPool)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreateCommandPool(device, pCreateInfo, pAllocator, pCommandPool)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkCommandPoolCreateInfo* pCreateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkCommandPoolCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pCreateInfo.HasData() && pCreateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkCommandPool* pCommandPool
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCommandPool:                   "); // HRW
    OutputString(outputFile, "VkCommandPool* = "); // TEQ
    if (pCommandPool->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pCommandPool = {true, false, false, nullptr};
        if (pCommandPool->HasData() && pCommandPool->HasAddress())
            OutputScalarValueAscii(outputFile, pCommandPool->GetPointer(), vinfo_pCommandPool); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyCommandPool(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            commandPool,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkDestroyCommandPool(device, commandPool, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkCommandPool commandPool
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandPool:                    "); // HRW
    OutputString(outputFile, "VkCommandPool = "); // TEQ
    OutputAddrAscii(outputFile, commandPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkResetCommandPool(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            commandPool,
    VkCommandPoolResetFlags                     flags)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkResetCommandPool(device, commandPool, flags)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkCommandPool commandPool
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandPool:                    "); // HRW
    OutputString(outputFile, "VkCommandPool = "); // TEQ
    OutputAddrAscii(outputFile, commandPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkCommandPoolResetFlags flags
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "flags:                          "); // HRW
    OutputString(outputFile, "VkCommandPoolResetFlags = "); // TEQ
    OutputFlagsAscii(outputFile, flags, OutputEnumVkCommandPoolResetFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkAllocateCommandBuffers(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkCommandBufferAllocateInfo>& pAllocateInfo,
    HandlePointerDecoder<VkCommandBuffer>*      pCommandBuffers)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkAllocateCommandBuffers(device, pAllocateInfo, pCommandBuffers)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkCommandBufferAllocateInfo* pAllocateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocateInfo:                  "); // HRW
    OutputString(outputFile, "const VkCommandBufferAllocateInfo* = "); // TEQ
    if (pAllocateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocateInfo.HasData() && pAllocateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pAllocateInfo.GetMetaStructPointer(), indent+1, pAllocateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkCommandBuffer* pCommandBuffers
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCommandBuffers:                "); // HRW
    OutputString(outputFile, "VkCommandBuffer* = "); // TEQ
    if (pCommandBuffers->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCommandBuffers->GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pCommandBuffers = {true, false, false, nullptr};
        OutputArrayAscii(outputFile, indent, "VkCommandBuffer*", pCommandBuffers, "pCommandBuffers", pAllocateInfo.GetPointer()->commandBufferCount, vinfo_pCommandBuffers); // AUB
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkFreeCommandBuffers(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            commandPool,
    uint32_t                                    commandBufferCount,
    const HandlePointerDecoder<VkCommandBuffer>& pCommandBuffers)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkFreeCommandBuffers(device, commandPool, commandBufferCount, pCommandBuffers)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkCommandPool commandPool
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandPool:                    "); // HRW
    OutputString(outputFile, "VkCommandPool = "); // TEQ
    OutputAddrAscii(outputFile, commandPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t commandBufferCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBufferCount:             "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, commandBufferCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkCommandBuffer* pCommandBuffers
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCommandBuffers:                "); // HRW
    OutputString(outputFile, "const VkCommandBuffer* = "); // TEQ
    if (pCommandBuffers.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCommandBuffers.GetAddress()); // PBZ
        OutputScalarValueStructInfo vinfo_pCommandBuffers = {true, false, false, nullptr};
        OutputArrayAscii(outputFile, indent, "const VkCommandBuffer*", &pCommandBuffers, "pCommandBuffers", commandBufferCount, vinfo_pCommandBuffers); // AUB
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkBeginCommandBuffer(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkCommandBufferBeginInfo>& pBeginInfo)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkBeginCommandBuffer(commandBuffer, pBeginInfo)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkCommandBufferBeginInfo* pBeginInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pBeginInfo:                     "); // HRW
    OutputString(outputFile, "const VkCommandBufferBeginInfo* = "); // TEQ
    if (pBeginInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pBeginInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pBeginInfo.HasData() && pBeginInfo.HasAddress())
            OutputStructureAscii(outputFile, *pBeginInfo.GetMetaStructPointer(), indent+1, pBeginInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkEndCommandBuffer(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkEndCommandBuffer(commandBuffer)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkResetCommandBuffer(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkCommandBufferResetFlags                   flags)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkResetCommandBuffer(commandBuffer, flags)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkCommandBufferResetFlags flags
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "flags:                          "); // HRW
    OutputString(outputFile, "VkCommandBufferResetFlags = "); // TEQ
    OutputFlagsAscii(outputFile, flags, OutputEnumVkCommandBufferResetFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdBindPipeline(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkPipelineBindPoint                         pipelineBindPoint,
    format::HandleId                            pipeline)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdBindPipeline(commandBuffer, pipelineBindPoint, pipeline)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineBindPoint pipelineBindPoint
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pipelineBindPoint:              "); // HRW
    OutputString(outputFile, "VkPipelineBindPoint = "); // TEQ
    OutputEnumVkPipelineBindPoint(outputFile, pipelineBindPoint); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimalAscii(outputFile, pipelineBindPoint);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipeline pipeline
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pipeline:                       "); // HRW
    OutputString(outputFile, "VkPipeline = "); // TEQ
    OutputAddrAscii(outputFile, pipeline); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdSetViewport(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    firstViewport,
    uint32_t                                    viewportCount,
    const StructPointerDecoder<Decoded_VkViewport>& pViewports)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdSetViewport(commandBuffer, firstViewport, viewportCount, pViewports)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstViewport
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "firstViewport:                  "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, firstViewport); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t viewportCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "viewportCount:                  "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, viewportCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkViewport* pViewports
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pViewports:                     "); // HRW
    OutputString(outputFile, "const VkViewport* = "); // TEQ
    if (pViewports.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pViewports.GetAddress()); // WVS
        if (pViewports.HasData() && pViewports.HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkViewport", pViewports.GetMetaStructPointer(), "pViewports", viewportCount, false, pViewports.GetAddress(), sizeof(VkViewport));  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdSetScissor(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    firstScissor,
    uint32_t                                    scissorCount,
    const StructPointerDecoder<Decoded_VkRect2D>& pScissors)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdSetScissor(commandBuffer, firstScissor, scissorCount, pScissors)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstScissor
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "firstScissor:                   "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, firstScissor); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t scissorCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "scissorCount:                   "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, scissorCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkRect2D* pScissors
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pScissors:                      "); // HRW
    OutputString(outputFile, "const VkRect2D* = "); // TEQ
    if (pScissors.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pScissors.GetAddress()); // WVS
        if (pScissors.HasData() && pScissors.HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkRect2D", pScissors.GetMetaStructPointer(), "pScissors", scissorCount, false, pScissors.GetAddress(), sizeof(VkRect2D));  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdSetLineWidth(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    float                                       lineWidth)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdSetLineWidth(commandBuffer, lineWidth)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: float lineWidth
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "lineWidth:                      "); // HRW
    OutputString(outputFile, "float = "); // TEQ
    OutputDoubleAscii(outputFile, lineWidth); // PEZ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdSetDepthBias(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    float                                       depthBiasConstantFactor,
    float                                       depthBiasClamp,
    float                                       depthBiasSlopeFactor)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdSetDepthBias(commandBuffer, depthBiasConstantFactor, depthBiasClamp, depthBiasSlopeFactor)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: float depthBiasConstantFactor
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "depthBiasConstantFactor:        "); // HRW
    OutputString(outputFile, "float = "); // TEQ
    OutputDoubleAscii(outputFile, depthBiasConstantFactor); // PEZ
    OutputString(outputFile, "\n"); // HHS

    // func arg: float depthBiasClamp
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "depthBiasClamp:                 "); // HRW
    OutputString(outputFile, "float = "); // TEQ
    OutputDoubleAscii(outputFile, depthBiasClamp); // PEZ
    OutputString(outputFile, "\n"); // HHS

    // func arg: float depthBiasSlopeFactor
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "depthBiasSlopeFactor:           "); // HRW
    OutputString(outputFile, "float = "); // TEQ
    OutputDoubleAscii(outputFile, depthBiasSlopeFactor); // PEZ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdSetBlendConstants(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    const PointerDecoder<float>&                blendConstants)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdSetBlendConstants(commandBuffer, blendConstants)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const float blendConstants
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "blendConstants:                 "); // HRW
    OutputString(outputFile, "float"); // JUQ
    OutputString(outputFile, "[");
    OutputString(outputFile, "4"); // DFX
    OutputString(outputFile, "] = ");
    OutputScalarValueStructInfo vinfo_blendConstants = {false, false, false, nullptr};
    if (blendConstants.HasData() && blendConstants.HasAddress())
        OutputArrayOfScalarsAscii(outputFile, indent, "const float", blendConstants.GetPointer(), "blendConstants", 4, vinfo_blendConstants); // JPA
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdSetDepthBounds(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    float                                       minDepthBounds,
    float                                       maxDepthBounds)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdSetDepthBounds(commandBuffer, minDepthBounds, maxDepthBounds)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: float minDepthBounds
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "minDepthBounds:                 "); // HRW
    OutputString(outputFile, "float = "); // TEQ
    OutputDoubleAscii(outputFile, minDepthBounds); // PEZ
    OutputString(outputFile, "\n"); // HHS

    // func arg: float maxDepthBounds
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "maxDepthBounds:                 "); // HRW
    OutputString(outputFile, "float = "); // TEQ
    OutputDoubleAscii(outputFile, maxDepthBounds); // PEZ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdSetStencilCompareMask(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkStencilFaceFlags                          faceMask,
    uint32_t                                    compareMask)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdSetStencilCompareMask(commandBuffer, faceMask, compareMask)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkStencilFaceFlags faceMask
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "faceMask:                       "); // HRW
    OutputString(outputFile, "VkStencilFaceFlags = "); // TEQ
    OutputFlagsAscii(outputFile, faceMask, OutputEnumVkStencilFaceFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t compareMask
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "compareMask:                    "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, compareMask); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdSetStencilWriteMask(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkStencilFaceFlags                          faceMask,
    uint32_t                                    writeMask)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdSetStencilWriteMask(commandBuffer, faceMask, writeMask)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkStencilFaceFlags faceMask
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "faceMask:                       "); // HRW
    OutputString(outputFile, "VkStencilFaceFlags = "); // TEQ
    OutputFlagsAscii(outputFile, faceMask, OutputEnumVkStencilFaceFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t writeMask
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "writeMask:                      "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, writeMask); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdSetStencilReference(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkStencilFaceFlags                          faceMask,
    uint32_t                                    reference)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdSetStencilReference(commandBuffer, faceMask, reference)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkStencilFaceFlags faceMask
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "faceMask:                       "); // HRW
    OutputString(outputFile, "VkStencilFaceFlags = "); // TEQ
    OutputFlagsAscii(outputFile, faceMask, OutputEnumVkStencilFaceFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t reference
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "reference:                      "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, reference); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdBindDescriptorSets(
    const ApiCallInfo&                          call_info,
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
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdBindDescriptorSets(commandBuffer, pipelineBindPoint, layout, firstSet, descriptorSetCount, pDescriptorSets, dynamicOffsetCount, pDynamicOffsets)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineBindPoint pipelineBindPoint
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pipelineBindPoint:              "); // HRW
    OutputString(outputFile, "VkPipelineBindPoint = "); // TEQ
    OutputEnumVkPipelineBindPoint(outputFile, pipelineBindPoint); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimalAscii(outputFile, pipelineBindPoint);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineLayout layout
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "layout:                         "); // HRW
    OutputString(outputFile, "VkPipelineLayout = "); // TEQ
    OutputAddrAscii(outputFile, layout); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstSet
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "firstSet:                       "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, firstSet); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t descriptorSetCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "descriptorSetCount:             "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, descriptorSetCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDescriptorSet* pDescriptorSets
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pDescriptorSets:                "); // HRW
    OutputString(outputFile, "const VkDescriptorSet* = "); // TEQ
    if (pDescriptorSets.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pDescriptorSets.GetAddress()); // PBZ
        OutputScalarValueStructInfo vinfo_pDescriptorSets = {true, false, false, nullptr};
        OutputArrayAscii(outputFile, indent, "const VkDescriptorSet*", &pDescriptorSets, "pDescriptorSets", descriptorSetCount, vinfo_pDescriptorSets); // AUB
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t dynamicOffsetCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "dynamicOffsetCount:             "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, dynamicOffsetCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const uint32_t* pDynamicOffsets
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pDynamicOffsets:                "); // HRW
    OutputString(outputFile, "const uint32_t* = "); // TEQ
    if (pDynamicOffsets.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pDynamicOffsets.GetAddress()); // PBZ
        OutputScalarValueStructInfo vinfo_pDynamicOffsets = {false, false, false, nullptr};
        OutputArrayAscii(outputFile, indent, "const uint32_t*", &pDynamicOffsets, "pDynamicOffsets", dynamicOffsetCount, vinfo_pDynamicOffsets); // AUB
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdBindIndexBuffer(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    VkIndexType                                 indexType)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdBindIndexBuffer(commandBuffer, buffer, offset, indexType)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer buffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "buffer:                         "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    OutputAddrAscii(outputFile, buffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize offset
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "offset:                         "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    OutputSignedDecimalAscii(outputFile, offset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkIndexType indexType
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "indexType:                      "); // HRW
    OutputString(outputFile, "VkIndexType = "); // TEQ
    OutputEnumVkIndexType(outputFile, indexType); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimalAscii(outputFile, indexType);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdBindVertexBuffers(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    firstBinding,
    uint32_t                                    bindingCount,
    const HandlePointerDecoder<VkBuffer>&       pBuffers,
    const PointerDecoder<VkDeviceSize>&         pOffsets)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdBindVertexBuffers(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstBinding
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "firstBinding:                   "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, firstBinding); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t bindingCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "bindingCount:                   "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, bindingCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBuffer* pBuffers
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pBuffers:                       "); // HRW
    OutputString(outputFile, "const VkBuffer* = "); // TEQ
    if (pBuffers.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pBuffers.GetAddress()); // PBZ
        OutputScalarValueStructInfo vinfo_pBuffers = {true, false, false, nullptr};
        OutputArrayAscii(outputFile, indent, "const VkBuffer*", &pBuffers, "pBuffers", bindingCount, vinfo_pBuffers); // AUB
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDeviceSize* pOffsets
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pOffsets:                       "); // HRW
    OutputString(outputFile, "const VkDeviceSize* = "); // TEQ
    if (pOffsets.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pOffsets.GetAddress()); // PBZ
        OutputScalarValueStructInfo vinfo_pOffsets = {false, false, false, nullptr};
        OutputArrayAscii(outputFile, indent, "const VkDeviceSize*", &pOffsets, "pOffsets", bindingCount, vinfo_pOffsets); // AUB
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdDraw(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    vertexCount,
    uint32_t                                    instanceCount,
    uint32_t                                    firstVertex,
    uint32_t                                    firstInstance)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdDraw(commandBuffer, vertexCount, instanceCount, firstVertex, firstInstance)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t vertexCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "vertexCount:                    "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, vertexCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t instanceCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "instanceCount:                  "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, instanceCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstVertex
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "firstVertex:                    "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, firstVertex); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstInstance
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "firstInstance:                  "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, firstInstance); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdDrawIndexed(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    indexCount,
    uint32_t                                    instanceCount,
    uint32_t                                    firstIndex,
    int32_t                                     vertexOffset,
    uint32_t                                    firstInstance)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdDrawIndexed(commandBuffer, indexCount, instanceCount, firstIndex, vertexOffset, firstInstance)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t indexCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "indexCount:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, indexCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t instanceCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "instanceCount:                  "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, instanceCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstIndex
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "firstIndex:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, firstIndex); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: int32_t vertexOffset
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "vertexOffset:                   "); // HRW
    OutputString(outputFile, "int32_t = "); // TEQ
    OutputSignedDecimalAscii(outputFile, vertexOffset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstInstance
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "firstInstance:                  "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, firstInstance); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdDrawIndirect(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    uint32_t                                    drawCount,
    uint32_t                                    stride)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdDrawIndirect(commandBuffer, buffer, offset, drawCount, stride)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer buffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "buffer:                         "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    OutputAddrAscii(outputFile, buffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize offset
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "offset:                         "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    OutputSignedDecimalAscii(outputFile, offset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t drawCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "drawCount:                      "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, drawCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t stride
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "stride:                         "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, stride); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdDrawIndexedIndirect(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    uint32_t                                    drawCount,
    uint32_t                                    stride)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdDrawIndexedIndirect(commandBuffer, buffer, offset, drawCount, stride)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer buffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "buffer:                         "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    OutputAddrAscii(outputFile, buffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize offset
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "offset:                         "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    OutputSignedDecimalAscii(outputFile, offset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t drawCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "drawCount:                      "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, drawCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t stride
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "stride:                         "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, stride); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdDispatch(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    groupCountX,
    uint32_t                                    groupCountY,
    uint32_t                                    groupCountZ)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdDispatch(commandBuffer, groupCountX, groupCountY, groupCountZ)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t groupCountX
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "groupCountX:                    "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, groupCountX); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t groupCountY
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "groupCountY:                    "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, groupCountY); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t groupCountZ
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "groupCountZ:                    "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, groupCountZ); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdDispatchIndirect(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdDispatchIndirect(commandBuffer, buffer, offset)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer buffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "buffer:                         "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    OutputAddrAscii(outputFile, buffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize offset
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "offset:                         "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    OutputSignedDecimalAscii(outputFile, offset); // EQA
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdCopyBuffer(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            srcBuffer,
    format::HandleId                            dstBuffer,
    uint32_t                                    regionCount,
    const StructPointerDecoder<Decoded_VkBufferCopy>& pRegions)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdCopyBuffer(commandBuffer, srcBuffer, dstBuffer, regionCount, pRegions)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer srcBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "srcBuffer:                      "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    OutputAddrAscii(outputFile, srcBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer dstBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "dstBuffer:                      "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    OutputAddrAscii(outputFile, dstBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t regionCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "regionCount:                    "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, regionCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBufferCopy* pRegions
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pRegions:                       "); // HRW
    OutputString(outputFile, "const VkBufferCopy* = "); // TEQ
    if (pRegions.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pRegions.GetAddress()); // WVS
        if (pRegions.HasData() && pRegions.HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkBufferCopy", pRegions.GetMetaStructPointer(), "pRegions", regionCount, false, pRegions.GetAddress(), sizeof(VkBufferCopy));  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdCopyImage(
    const ApiCallInfo&                          call_info,
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
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdCopyImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage srcImage
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "srcImage:                       "); // HRW
    OutputString(outputFile, "VkImage = "); // TEQ
    OutputAddrAscii(outputFile, srcImage); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageLayout srcImageLayout
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "srcImageLayout:                 "); // HRW
    OutputString(outputFile, "VkImageLayout = "); // TEQ
    OutputEnumVkImageLayout(outputFile, srcImageLayout); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimalAscii(outputFile, srcImageLayout);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage dstImage
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "dstImage:                       "); // HRW
    OutputString(outputFile, "VkImage = "); // TEQ
    OutputAddrAscii(outputFile, dstImage); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageLayout dstImageLayout
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "dstImageLayout:                 "); // HRW
    OutputString(outputFile, "VkImageLayout = "); // TEQ
    OutputEnumVkImageLayout(outputFile, dstImageLayout); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimalAscii(outputFile, dstImageLayout);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t regionCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "regionCount:                    "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, regionCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImageCopy* pRegions
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pRegions:                       "); // HRW
    OutputString(outputFile, "const VkImageCopy* = "); // TEQ
    if (pRegions.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pRegions.GetAddress()); // WVS
        if (pRegions.HasData() && pRegions.HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkImageCopy", pRegions.GetMetaStructPointer(), "pRegions", regionCount, false, pRegions.GetAddress(), sizeof(VkImageCopy));  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdBlitImage(
    const ApiCallInfo&                          call_info,
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
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdBlitImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions, filter)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage srcImage
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "srcImage:                       "); // HRW
    OutputString(outputFile, "VkImage = "); // TEQ
    OutputAddrAscii(outputFile, srcImage); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageLayout srcImageLayout
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "srcImageLayout:                 "); // HRW
    OutputString(outputFile, "VkImageLayout = "); // TEQ
    OutputEnumVkImageLayout(outputFile, srcImageLayout); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimalAscii(outputFile, srcImageLayout);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage dstImage
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "dstImage:                       "); // HRW
    OutputString(outputFile, "VkImage = "); // TEQ
    OutputAddrAscii(outputFile, dstImage); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageLayout dstImageLayout
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "dstImageLayout:                 "); // HRW
    OutputString(outputFile, "VkImageLayout = "); // TEQ
    OutputEnumVkImageLayout(outputFile, dstImageLayout); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimalAscii(outputFile, dstImageLayout);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t regionCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "regionCount:                    "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, regionCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImageBlit* pRegions
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pRegions:                       "); // HRW
    OutputString(outputFile, "const VkImageBlit* = "); // TEQ
    if (pRegions.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pRegions.GetAddress()); // WVS
        if (pRegions.HasData() && pRegions.HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkImageBlit", pRegions.GetMetaStructPointer(), "pRegions", regionCount, false, pRegions.GetAddress(), sizeof(VkImageBlit));  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFilter filter
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "filter:                         "); // HRW
    OutputString(outputFile, "VkFilter = "); // TEQ
    OutputEnumVkFilter(outputFile, filter); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimalAscii(outputFile, filter);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdCopyBufferToImage(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            srcBuffer,
    format::HandleId                            dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    const StructPointerDecoder<Decoded_VkBufferImageCopy>& pRegions)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdCopyBufferToImage(commandBuffer, srcBuffer, dstImage, dstImageLayout, regionCount, pRegions)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer srcBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "srcBuffer:                      "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    OutputAddrAscii(outputFile, srcBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage dstImage
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "dstImage:                       "); // HRW
    OutputString(outputFile, "VkImage = "); // TEQ
    OutputAddrAscii(outputFile, dstImage); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageLayout dstImageLayout
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "dstImageLayout:                 "); // HRW
    OutputString(outputFile, "VkImageLayout = "); // TEQ
    OutputEnumVkImageLayout(outputFile, dstImageLayout); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimalAscii(outputFile, dstImageLayout);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t regionCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "regionCount:                    "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, regionCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBufferImageCopy* pRegions
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pRegions:                       "); // HRW
    OutputString(outputFile, "const VkBufferImageCopy* = "); // TEQ
    if (pRegions.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pRegions.GetAddress()); // WVS
        if (pRegions.HasData() && pRegions.HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkBufferImageCopy", pRegions.GetMetaStructPointer(), "pRegions", regionCount, false, pRegions.GetAddress(), sizeof(VkBufferImageCopy));  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdCopyImageToBuffer(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            srcImage,
    VkImageLayout                               srcImageLayout,
    format::HandleId                            dstBuffer,
    uint32_t                                    regionCount,
    const StructPointerDecoder<Decoded_VkBufferImageCopy>& pRegions)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdCopyImageToBuffer(commandBuffer, srcImage, srcImageLayout, dstBuffer, regionCount, pRegions)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage srcImage
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "srcImage:                       "); // HRW
    OutputString(outputFile, "VkImage = "); // TEQ
    OutputAddrAscii(outputFile, srcImage); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageLayout srcImageLayout
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "srcImageLayout:                 "); // HRW
    OutputString(outputFile, "VkImageLayout = "); // TEQ
    OutputEnumVkImageLayout(outputFile, srcImageLayout); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimalAscii(outputFile, srcImageLayout);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer dstBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "dstBuffer:                      "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    OutputAddrAscii(outputFile, dstBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t regionCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "regionCount:                    "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, regionCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBufferImageCopy* pRegions
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pRegions:                       "); // HRW
    OutputString(outputFile, "const VkBufferImageCopy* = "); // TEQ
    if (pRegions.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pRegions.GetAddress()); // WVS
        if (pRegions.HasData() && pRegions.HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkBufferImageCopy", pRegions.GetMetaStructPointer(), "pRegions", regionCount, false, pRegions.GetAddress(), sizeof(VkBufferImageCopy));  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdUpdateBuffer(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            dstBuffer,
    VkDeviceSize                                dstOffset,
    VkDeviceSize                                dataSize,
    const PointerDecoder<uint8_t>&              pData)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdUpdateBuffer(commandBuffer, dstBuffer, dstOffset, dataSize, pData)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer dstBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "dstBuffer:                      "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    OutputAddrAscii(outputFile, dstBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize dstOffset
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "dstOffset:                      "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    OutputSignedDecimalAscii(outputFile, dstOffset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize dataSize
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "dataSize:                       "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    OutputSignedDecimalAscii(outputFile, dataSize); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: const void* pData
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pData:                          "); // HRW
    OutputString(outputFile, "const void* = "); // TEQ
    if (pData.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pData.GetAddress()); // AHW
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdFillBuffer(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            dstBuffer,
    VkDeviceSize                                dstOffset,
    VkDeviceSize                                size,
    uint32_t                                    data)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdFillBuffer(commandBuffer, dstBuffer, dstOffset, size, data)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer dstBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "dstBuffer:                      "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    OutputAddrAscii(outputFile, dstBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize dstOffset
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "dstOffset:                      "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    OutputSignedDecimalAscii(outputFile, dstOffset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize size
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "size:                           "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    OutputSignedDecimalAscii(outputFile, size); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t data
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "data:                           "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, data); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdClearColorImage(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            image,
    VkImageLayout                               imageLayout,
    const StructPointerDecoder<Decoded_VkClearColorValue>& pColor,
    uint32_t                                    rangeCount,
    const StructPointerDecoder<Decoded_VkImageSubresourceRange>& pRanges)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdClearColorImage(commandBuffer, image, imageLayout, pColor, rangeCount, pRanges)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage image
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "image:                          "); // HRW
    OutputString(outputFile, "VkImage = "); // TEQ
    OutputAddrAscii(outputFile, image); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageLayout imageLayout
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "imageLayout:                    "); // HRW
    OutputString(outputFile, "VkImageLayout = "); // TEQ
    OutputEnumVkImageLayout(outputFile, imageLayout); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimalAscii(outputFile, imageLayout);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkClearColorValue* pColor
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pColor:                         "); // HRW
    OutputString(outputFile, "const VkClearColorValue* = "); // TEQ
    if (pColor.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pColor.GetAddress()); // JHI
        OutputString(outputFile, " (Union)");
        OutputString(outputFile, ":");
        if (pColor.HasData() && pColor.HasAddress())
            OutputStructureAscii(outputFile, *pColor.GetMetaStructPointer(), indent+1, pColor.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t rangeCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "rangeCount:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, rangeCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImageSubresourceRange* pRanges
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pRanges:                        "); // HRW
    OutputString(outputFile, "const VkImageSubresourceRange* = "); // TEQ
    if (pRanges.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pRanges.GetAddress()); // WVS
        if (pRanges.HasData() && pRanges.HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkImageSubresourceRange", pRanges.GetMetaStructPointer(), "pRanges", rangeCount, false, pRanges.GetAddress(), sizeof(VkImageSubresourceRange));  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdClearDepthStencilImage(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            image,
    VkImageLayout                               imageLayout,
    const StructPointerDecoder<Decoded_VkClearDepthStencilValue>& pDepthStencil,
    uint32_t                                    rangeCount,
    const StructPointerDecoder<Decoded_VkImageSubresourceRange>& pRanges)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdClearDepthStencilImage(commandBuffer, image, imageLayout, pDepthStencil, rangeCount, pRanges)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage image
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "image:                          "); // HRW
    OutputString(outputFile, "VkImage = "); // TEQ
    OutputAddrAscii(outputFile, image); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageLayout imageLayout
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "imageLayout:                    "); // HRW
    OutputString(outputFile, "VkImageLayout = "); // TEQ
    OutputEnumVkImageLayout(outputFile, imageLayout); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimalAscii(outputFile, imageLayout);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkClearDepthStencilValue* pDepthStencil
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pDepthStencil:                  "); // HRW
    OutputString(outputFile, "const VkClearDepthStencilValue* = "); // TEQ
    if (pDepthStencil.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pDepthStencil.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pDepthStencil.HasData() && pDepthStencil.HasAddress())
            OutputStructureAscii(outputFile, *pDepthStencil.GetMetaStructPointer(), indent+1, pDepthStencil.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t rangeCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "rangeCount:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, rangeCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImageSubresourceRange* pRanges
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pRanges:                        "); // HRW
    OutputString(outputFile, "const VkImageSubresourceRange* = "); // TEQ
    if (pRanges.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pRanges.GetAddress()); // WVS
        if (pRanges.HasData() && pRanges.HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkImageSubresourceRange", pRanges.GetMetaStructPointer(), "pRanges", rangeCount, false, pRanges.GetAddress(), sizeof(VkImageSubresourceRange));  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdClearAttachments(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    attachmentCount,
    const StructPointerDecoder<Decoded_VkClearAttachment>& pAttachments,
    uint32_t                                    rectCount,
    const StructPointerDecoder<Decoded_VkClearRect>& pRects)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdClearAttachments(commandBuffer, attachmentCount, pAttachments, rectCount, pRects)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t attachmentCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "attachmentCount:                "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, attachmentCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkClearAttachment* pAttachments
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAttachments:                   "); // HRW
    OutputString(outputFile, "const VkClearAttachment* = "); // TEQ
    if (pAttachments.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAttachments.GetAddress()); // WVS
        if (pAttachments.HasData() && pAttachments.HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkClearAttachment", pAttachments.GetMetaStructPointer(), "pAttachments", attachmentCount, false, pAttachments.GetAddress(), sizeof(VkClearAttachment));  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t rectCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "rectCount:                      "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, rectCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkClearRect* pRects
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pRects:                         "); // HRW
    OutputString(outputFile, "const VkClearRect* = "); // TEQ
    if (pRects.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pRects.GetAddress()); // WVS
        if (pRects.HasData() && pRects.HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkClearRect", pRects.GetMetaStructPointer(), "pRects", rectCount, false, pRects.GetAddress(), sizeof(VkClearRect));  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdResolveImage(
    const ApiCallInfo&                          call_info,
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
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdResolveImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage srcImage
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "srcImage:                       "); // HRW
    OutputString(outputFile, "VkImage = "); // TEQ
    OutputAddrAscii(outputFile, srcImage); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageLayout srcImageLayout
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "srcImageLayout:                 "); // HRW
    OutputString(outputFile, "VkImageLayout = "); // TEQ
    OutputEnumVkImageLayout(outputFile, srcImageLayout); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimalAscii(outputFile, srcImageLayout);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage dstImage
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "dstImage:                       "); // HRW
    OutputString(outputFile, "VkImage = "); // TEQ
    OutputAddrAscii(outputFile, dstImage); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageLayout dstImageLayout
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "dstImageLayout:                 "); // HRW
    OutputString(outputFile, "VkImageLayout = "); // TEQ
    OutputEnumVkImageLayout(outputFile, dstImageLayout); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimalAscii(outputFile, dstImageLayout);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t regionCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "regionCount:                    "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, regionCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImageResolve* pRegions
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pRegions:                       "); // HRW
    OutputString(outputFile, "const VkImageResolve* = "); // TEQ
    if (pRegions.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pRegions.GetAddress()); // WVS
        if (pRegions.HasData() && pRegions.HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkImageResolve", pRegions.GetMetaStructPointer(), "pRegions", regionCount, false, pRegions.GetAddress(), sizeof(VkImageResolve));  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdSetEvent(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            event,
    VkPipelineStageFlags                        stageMask)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdSetEvent(commandBuffer, event, stageMask)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkEvent event
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "event:                          "); // HRW
    OutputString(outputFile, "VkEvent = "); // TEQ
    OutputAddrAscii(outputFile, event); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineStageFlags stageMask
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "stageMask:                      "); // HRW
    OutputString(outputFile, "VkPipelineStageFlags = "); // TEQ
    OutputFlagsAscii(outputFile, stageMask, OutputEnumVkPipelineStageFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdResetEvent(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            event,
    VkPipelineStageFlags                        stageMask)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdResetEvent(commandBuffer, event, stageMask)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkEvent event
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "event:                          "); // HRW
    OutputString(outputFile, "VkEvent = "); // TEQ
    OutputAddrAscii(outputFile, event); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineStageFlags stageMask
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "stageMask:                      "); // HRW
    OutputString(outputFile, "VkPipelineStageFlags = "); // TEQ
    OutputFlagsAscii(outputFile, stageMask, OutputEnumVkPipelineStageFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdWaitEvents(
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
    const StructPointerDecoder<Decoded_VkImageMemoryBarrier>& pImageMemoryBarriers)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdWaitEvents(commandBuffer, eventCount, pEvents, srcStageMask, dstStageMask, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t eventCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "eventCount:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, eventCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkEvent* pEvents
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pEvents:                        "); // HRW
    OutputString(outputFile, "const VkEvent* = "); // TEQ
    if (pEvents.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pEvents.GetAddress()); // PBZ
        OutputScalarValueStructInfo vinfo_pEvents = {true, false, false, nullptr};
        OutputArrayAscii(outputFile, indent, "const VkEvent*", &pEvents, "pEvents", eventCount, vinfo_pEvents); // AUB
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineStageFlags srcStageMask
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "srcStageMask:                   "); // HRW
    OutputString(outputFile, "VkPipelineStageFlags = "); // TEQ
    OutputFlagsAscii(outputFile, srcStageMask, OutputEnumVkPipelineStageFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineStageFlags dstStageMask
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "dstStageMask:                   "); // HRW
    OutputString(outputFile, "VkPipelineStageFlags = "); // TEQ
    OutputFlagsAscii(outputFile, dstStageMask, OutputEnumVkPipelineStageFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t memoryBarrierCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "memoryBarrierCount:             "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, memoryBarrierCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkMemoryBarrier* pMemoryBarriers
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pMemoryBarriers:                "); // HRW
    OutputString(outputFile, "const VkMemoryBarrier* = "); // TEQ
    if (pMemoryBarriers.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pMemoryBarriers.GetAddress()); // WVS
        if (pMemoryBarriers.HasData() && pMemoryBarriers.HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkMemoryBarrier", pMemoryBarriers.GetMetaStructPointer(), "pMemoryBarriers", memoryBarrierCount, false, pMemoryBarriers.GetAddress(), sizeof(VkMemoryBarrier));  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t bufferMemoryBarrierCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "bufferMemoryBarrierCount:       "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, bufferMemoryBarrierCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBufferMemoryBarrier* pBufferMemoryBarriers
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pBufferMemoryBarriers:          "); // HRW
    OutputString(outputFile, "const VkBufferMemoryBarrier* = "); // TEQ
    if (pBufferMemoryBarriers.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pBufferMemoryBarriers.GetAddress()); // WVS
        if (pBufferMemoryBarriers.HasData() && pBufferMemoryBarriers.HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkBufferMemoryBarrier", pBufferMemoryBarriers.GetMetaStructPointer(), "pBufferMemoryBarriers", bufferMemoryBarrierCount, false, pBufferMemoryBarriers.GetAddress(), sizeof(VkBufferMemoryBarrier));  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t imageMemoryBarrierCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "imageMemoryBarrierCount:        "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, imageMemoryBarrierCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImageMemoryBarrier* pImageMemoryBarriers
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pImageMemoryBarriers:           "); // HRW
    OutputString(outputFile, "const VkImageMemoryBarrier* = "); // TEQ
    if (pImageMemoryBarriers.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pImageMemoryBarriers.GetAddress()); // WVS
        if (pImageMemoryBarriers.HasData() && pImageMemoryBarriers.HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkImageMemoryBarrier", pImageMemoryBarriers.GetMetaStructPointer(), "pImageMemoryBarriers", imageMemoryBarrierCount, false, pImageMemoryBarriers.GetAddress(), sizeof(VkImageMemoryBarrier));  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdPipelineBarrier(
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
    const StructPointerDecoder<Decoded_VkImageMemoryBarrier>& pImageMemoryBarriers)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdPipelineBarrier(commandBuffer, srcStageMask, dstStageMask, dependencyFlags, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineStageFlags srcStageMask
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "srcStageMask:                   "); // HRW
    OutputString(outputFile, "VkPipelineStageFlags = "); // TEQ
    OutputFlagsAscii(outputFile, srcStageMask, OutputEnumVkPipelineStageFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineStageFlags dstStageMask
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "dstStageMask:                   "); // HRW
    OutputString(outputFile, "VkPipelineStageFlags = "); // TEQ
    OutputFlagsAscii(outputFile, dstStageMask, OutputEnumVkPipelineStageFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDependencyFlags dependencyFlags
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "dependencyFlags:                "); // HRW
    OutputString(outputFile, "VkDependencyFlags = "); // TEQ
    OutputFlagsAscii(outputFile, dependencyFlags, OutputEnumVkDependencyFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t memoryBarrierCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "memoryBarrierCount:             "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, memoryBarrierCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkMemoryBarrier* pMemoryBarriers
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pMemoryBarriers:                "); // HRW
    OutputString(outputFile, "const VkMemoryBarrier* = "); // TEQ
    if (pMemoryBarriers.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pMemoryBarriers.GetAddress()); // WVS
        if (pMemoryBarriers.HasData() && pMemoryBarriers.HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkMemoryBarrier", pMemoryBarriers.GetMetaStructPointer(), "pMemoryBarriers", memoryBarrierCount, false, pMemoryBarriers.GetAddress(), sizeof(VkMemoryBarrier));  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t bufferMemoryBarrierCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "bufferMemoryBarrierCount:       "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, bufferMemoryBarrierCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBufferMemoryBarrier* pBufferMemoryBarriers
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pBufferMemoryBarriers:          "); // HRW
    OutputString(outputFile, "const VkBufferMemoryBarrier* = "); // TEQ
    if (pBufferMemoryBarriers.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pBufferMemoryBarriers.GetAddress()); // WVS
        if (pBufferMemoryBarriers.HasData() && pBufferMemoryBarriers.HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkBufferMemoryBarrier", pBufferMemoryBarriers.GetMetaStructPointer(), "pBufferMemoryBarriers", bufferMemoryBarrierCount, false, pBufferMemoryBarriers.GetAddress(), sizeof(VkBufferMemoryBarrier));  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t imageMemoryBarrierCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "imageMemoryBarrierCount:        "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, imageMemoryBarrierCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImageMemoryBarrier* pImageMemoryBarriers
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pImageMemoryBarriers:           "); // HRW
    OutputString(outputFile, "const VkImageMemoryBarrier* = "); // TEQ
    if (pImageMemoryBarriers.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pImageMemoryBarriers.GetAddress()); // WVS
        if (pImageMemoryBarriers.HasData() && pImageMemoryBarriers.HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkImageMemoryBarrier", pImageMemoryBarriers.GetMetaStructPointer(), "pImageMemoryBarriers", imageMemoryBarrierCount, false, pImageMemoryBarriers.GetAddress(), sizeof(VkImageMemoryBarrier));  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdBeginQuery(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            queryPool,
    uint32_t                                    query,
    VkQueryControlFlags                         flags)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdBeginQuery(commandBuffer, queryPool, query, flags)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryPool queryPool
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "queryPool:                      "); // HRW
    OutputString(outputFile, "VkQueryPool = "); // TEQ
    OutputAddrAscii(outputFile, queryPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t query
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "query:                          "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, query); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryControlFlags flags
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "flags:                          "); // HRW
    OutputString(outputFile, "VkQueryControlFlags = "); // TEQ
    OutputFlagsAscii(outputFile, flags, OutputEnumVkQueryControlFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdEndQuery(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            queryPool,
    uint32_t                                    query)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdEndQuery(commandBuffer, queryPool, query)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryPool queryPool
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "queryPool:                      "); // HRW
    OutputString(outputFile, "VkQueryPool = "); // TEQ
    OutputAddrAscii(outputFile, queryPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t query
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "query:                          "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, query); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdResetQueryPool(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            queryPool,
    uint32_t                                    firstQuery,
    uint32_t                                    queryCount)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdResetQueryPool(commandBuffer, queryPool, firstQuery, queryCount)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryPool queryPool
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "queryPool:                      "); // HRW
    OutputString(outputFile, "VkQueryPool = "); // TEQ
    OutputAddrAscii(outputFile, queryPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstQuery
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "firstQuery:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, firstQuery); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t queryCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "queryCount:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, queryCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdWriteTimestamp(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkPipelineStageFlagBits                     pipelineStage,
    format::HandleId                            queryPool,
    uint32_t                                    query)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdWriteTimestamp(commandBuffer, pipelineStage, queryPool, query)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineStageFlagBits pipelineStage
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pipelineStage:                  "); // HRW
    OutputString(outputFile, "VkPipelineStageFlagBits = "); // TEQ
    OutputEnumVkPipelineStageFlagBits(outputFile, pipelineStage); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimalAscii(outputFile, pipelineStage);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryPool queryPool
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "queryPool:                      "); // HRW
    OutputString(outputFile, "VkQueryPool = "); // TEQ
    OutputAddrAscii(outputFile, queryPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t query
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "query:                          "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, query); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdCopyQueryPoolResults(
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
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdCopyQueryPoolResults(commandBuffer, queryPool, firstQuery, queryCount, dstBuffer, dstOffset, stride, flags)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryPool queryPool
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "queryPool:                      "); // HRW
    OutputString(outputFile, "VkQueryPool = "); // TEQ
    OutputAddrAscii(outputFile, queryPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstQuery
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "firstQuery:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, firstQuery); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t queryCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "queryCount:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, queryCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer dstBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "dstBuffer:                      "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    OutputAddrAscii(outputFile, dstBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize dstOffset
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "dstOffset:                      "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    OutputSignedDecimalAscii(outputFile, dstOffset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize stride
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "stride:                         "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    OutputSignedDecimalAscii(outputFile, stride); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryResultFlags flags
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "flags:                          "); // HRW
    OutputString(outputFile, "VkQueryResultFlags = "); // TEQ
    OutputFlagsAscii(outputFile, flags, OutputEnumVkQueryResultFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdPushConstants(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            layout,
    VkShaderStageFlags                          stageFlags,
    uint32_t                                    offset,
    uint32_t                                    size,
    const PointerDecoder<uint8_t>&              pValues)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdPushConstants(commandBuffer, layout, stageFlags, offset, size, pValues)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineLayout layout
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "layout:                         "); // HRW
    OutputString(outputFile, "VkPipelineLayout = "); // TEQ
    OutputAddrAscii(outputFile, layout); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkShaderStageFlags stageFlags
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "stageFlags:                     "); // HRW
    OutputString(outputFile, "VkShaderStageFlags = "); // TEQ
    OutputFlagsAscii(outputFile, stageFlags, OutputEnumVkShaderStageFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t offset
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "offset:                         "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, offset); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t size
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "size:                           "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, size); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const void* pValues
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pValues:                        "); // HRW
    OutputString(outputFile, "const void* = "); // TEQ
    if (pValues.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pValues.GetAddress()); // AHW
        OutputScalarValueStructInfo vinfo_pValues = {false, false, false, nullptr};
        OutputArrayAscii(outputFile, indent, "const void*", &pValues, "pValues", size, vinfo_pValues); // PRC
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdBeginRenderPass(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkRenderPassBeginInfo>& pRenderPassBegin,
    VkSubpassContents                           contents)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdBeginRenderPass(commandBuffer, pRenderPassBegin, contents)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkRenderPassBeginInfo* pRenderPassBegin
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pRenderPassBegin:               "); // HRW
    OutputString(outputFile, "const VkRenderPassBeginInfo* = "); // TEQ
    if (pRenderPassBegin.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pRenderPassBegin.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pRenderPassBegin.HasData() && pRenderPassBegin.HasAddress())
            OutputStructureAscii(outputFile, *pRenderPassBegin.GetMetaStructPointer(), indent+1, pRenderPassBegin.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSubpassContents contents
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "contents:                       "); // HRW
    OutputString(outputFile, "VkSubpassContents = "); // TEQ
    OutputEnumVkSubpassContents(outputFile, contents); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimalAscii(outputFile, contents);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdNextSubpass(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkSubpassContents                           contents)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdNextSubpass(commandBuffer, contents)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSubpassContents contents
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "contents:                       "); // HRW
    OutputString(outputFile, "VkSubpassContents = "); // TEQ
    OutputEnumVkSubpassContents(outputFile, contents); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimalAscii(outputFile, contents);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdEndRenderPass(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdEndRenderPass(commandBuffer)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdExecuteCommands(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    commandBufferCount,
    const HandlePointerDecoder<VkCommandBuffer>& pCommandBuffers)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdExecuteCommands(commandBuffer, commandBufferCount, pCommandBuffers)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t commandBufferCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBufferCount:             "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, commandBufferCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkCommandBuffer* pCommandBuffers
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCommandBuffers:                "); // HRW
    OutputString(outputFile, "const VkCommandBuffer* = "); // TEQ
    if (pCommandBuffers.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCommandBuffers.GetAddress()); // PBZ
        OutputScalarValueStructInfo vinfo_pCommandBuffers = {true, false, false, nullptr};
        OutputArrayAscii(outputFile, indent, "const VkCommandBuffer*", &pCommandBuffers, "pCommandBuffers", commandBufferCount, vinfo_pCommandBuffers); // AUB
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkBindBufferMemory2(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    uint32_t                                    bindInfoCount,
    const StructPointerDecoder<Decoded_VkBindBufferMemoryInfo>& pBindInfos)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkBindBufferMemory2(device, bindInfoCount, pBindInfos)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t bindInfoCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "bindInfoCount:                  "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, bindInfoCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBindBufferMemoryInfo* pBindInfos
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pBindInfos:                     "); // HRW
    OutputString(outputFile, "const VkBindBufferMemoryInfo* = "); // TEQ
    if (pBindInfos.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pBindInfos.GetAddress()); // WVS
        if (pBindInfos.HasData() && pBindInfos.HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkBindBufferMemoryInfo", pBindInfos.GetMetaStructPointer(), "pBindInfos", bindInfoCount, false, pBindInfos.GetAddress(), sizeof(VkBindBufferMemoryInfo));  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkBindImageMemory2(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    uint32_t                                    bindInfoCount,
    const StructPointerDecoder<Decoded_VkBindImageMemoryInfo>& pBindInfos)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkBindImageMemory2(device, bindInfoCount, pBindInfos)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t bindInfoCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "bindInfoCount:                  "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, bindInfoCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBindImageMemoryInfo* pBindInfos
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pBindInfos:                     "); // HRW
    OutputString(outputFile, "const VkBindImageMemoryInfo* = "); // TEQ
    if (pBindInfos.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pBindInfos.GetAddress()); // WVS
        if (pBindInfos.HasData() && pBindInfos.HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkBindImageMemoryInfo", pBindInfos.GetMetaStructPointer(), "pBindInfos", bindInfoCount, false, pBindInfos.GetAddress(), sizeof(VkBindImageMemoryInfo));  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetDeviceGroupPeerMemoryFeatures(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    uint32_t                                    heapIndex,
    uint32_t                                    localDeviceIndex,
    uint32_t                                    remoteDeviceIndex,
    PointerDecoder<VkPeerMemoryFeatureFlags>*   pPeerMemoryFeatures)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetDeviceGroupPeerMemoryFeatures(device, heapIndex, localDeviceIndex, remoteDeviceIndex, pPeerMemoryFeatures)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t heapIndex
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "heapIndex:                      "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, heapIndex); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t localDeviceIndex
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "localDeviceIndex:               "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, localDeviceIndex); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t remoteDeviceIndex
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "remoteDeviceIndex:              "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, remoteDeviceIndex); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPeerMemoryFeatureFlags* pPeerMemoryFeatures
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pPeerMemoryFeatures:            "); // HRW
    OutputString(outputFile, "VkPeerMemoryFeatureFlags* = "); // TEQ
    if (pPeerMemoryFeatures->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pPeerMemoryFeatures = {false, false, true, OutputEnumVkPeerMemoryFeatureFlagBits};
        if (pPeerMemoryFeatures->HasData() && pPeerMemoryFeatures->HasAddress())
            OutputScalarValueAscii(outputFile, pPeerMemoryFeatures->GetPointer(), vinfo_pPeerMemoryFeatures); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdSetDeviceMask(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    deviceMask)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdSetDeviceMask(commandBuffer, deviceMask)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t deviceMask
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "deviceMask:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, deviceMask); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdDispatchBase(
    const ApiCallInfo&                          call_info,
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
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdDispatchBase(commandBuffer, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t baseGroupX
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "baseGroupX:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, baseGroupX); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t baseGroupY
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "baseGroupY:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, baseGroupY); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t baseGroupZ
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "baseGroupZ:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, baseGroupZ); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t groupCountX
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "groupCountX:                    "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, groupCountX); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t groupCountY
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "groupCountY:                    "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, groupCountY); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t groupCountZ
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "groupCountZ:                    "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, groupCountZ); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkEnumeratePhysicalDeviceGroups(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            instance,
    PointerDecoder<uint32_t>*                   pPhysicalDeviceGroupCount,
    StructPointerDecoder<Decoded_VkPhysicalDeviceGroupProperties>* pPhysicalDeviceGroupProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkEnumeratePhysicalDeviceGroups(instance, pPhysicalDeviceGroupCount, pPhysicalDeviceGroupProperties)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "instance:                       "); // HRW
    OutputString(outputFile, "VkInstance = "); // TEQ
    OutputAddrAscii(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pPhysicalDeviceGroupCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pPhysicalDeviceGroupCount:      "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pPhysicalDeviceGroupCount->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pPhysicalDeviceGroupCount = {false, false, false, nullptr};
        if (pPhysicalDeviceGroupCount->HasData() && pPhysicalDeviceGroupCount->HasAddress())
            OutputScalarValueAscii(outputFile, pPhysicalDeviceGroupCount->GetPointer(), vinfo_pPhysicalDeviceGroupCount); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pPhysicalDeviceGroupProperties: "); // HRW
    OutputString(outputFile, "VkPhysicalDeviceGroupProperties* = "); // TEQ
    if (pPhysicalDeviceGroupProperties->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pPhysicalDeviceGroupProperties->GetAddress()); // WUS
        if (pPhysicalDeviceGroupProperties->HasData() && pPhysicalDeviceGroupProperties->HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkPhysicalDeviceGroupProperties", pPhysicalDeviceGroupProperties->GetMetaStructPointer(), "pPhysicalDeviceGroupProperties", *pPhysicalDeviceGroupCount->GetPointer(), false, pPhysicalDeviceGroupProperties->GetAddress(), sizeof(VkPhysicalDeviceGroupProperties));  // CCN
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetImageMemoryRequirements2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImageMemoryRequirementsInfo2>& pInfo,
    StructPointerDecoder<Decoded_VkMemoryRequirements2>* pMemoryRequirements)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetImageMemoryRequirements2(device, pInfo, pMemoryRequirements)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImageMemoryRequirementsInfo2* pInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pInfo:                          "); // HRW
    OutputString(outputFile, "const VkImageMemoryRequirementsInfo2* = "); // TEQ
    if (pInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pInfo.HasData() && pInfo.HasAddress())
            OutputStructureAscii(outputFile, *pInfo.GetMetaStructPointer(), indent+1, pInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkMemoryRequirements2* pMemoryRequirements
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pMemoryRequirements:            "); // HRW
    OutputString(outputFile, "VkMemoryRequirements2* = "); // TEQ
    if (pMemoryRequirements->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pMemoryRequirements->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pMemoryRequirements->HasData() && pMemoryRequirements->HasAddress())
            OutputStructureAscii(outputFile, *pMemoryRequirements->GetMetaStructPointer(), indent+1, pMemoryRequirements->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetBufferMemoryRequirements2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkBufferMemoryRequirementsInfo2>& pInfo,
    StructPointerDecoder<Decoded_VkMemoryRequirements2>* pMemoryRequirements)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetBufferMemoryRequirements2(device, pInfo, pMemoryRequirements)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBufferMemoryRequirementsInfo2* pInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pInfo:                          "); // HRW
    OutputString(outputFile, "const VkBufferMemoryRequirementsInfo2* = "); // TEQ
    if (pInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pInfo.HasData() && pInfo.HasAddress())
            OutputStructureAscii(outputFile, *pInfo.GetMetaStructPointer(), indent+1, pInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkMemoryRequirements2* pMemoryRequirements
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pMemoryRequirements:            "); // HRW
    OutputString(outputFile, "VkMemoryRequirements2* = "); // TEQ
    if (pMemoryRequirements->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pMemoryRequirements->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pMemoryRequirements->HasData() && pMemoryRequirements->HasAddress())
            OutputStructureAscii(outputFile, *pMemoryRequirements->GetMetaStructPointer(), indent+1, pMemoryRequirements->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetImageSparseMemoryRequirements2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImageSparseMemoryRequirementsInfo2>& pInfo,
    PointerDecoder<uint32_t>*                   pSparseMemoryRequirementCount,
    StructPointerDecoder<Decoded_VkSparseImageMemoryRequirements2>* pSparseMemoryRequirements)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetImageSparseMemoryRequirements2(device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImageSparseMemoryRequirementsInfo2* pInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pInfo:                          "); // HRW
    OutputString(outputFile, "const VkImageSparseMemoryRequirementsInfo2* = "); // TEQ
    if (pInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pInfo.HasData() && pInfo.HasAddress())
            OutputStructureAscii(outputFile, *pInfo.GetMetaStructPointer(), indent+1, pInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pSparseMemoryRequirementCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSparseMemoryRequirementCount:  "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pSparseMemoryRequirementCount->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pSparseMemoryRequirementCount = {false, false, false, nullptr};
        if (pSparseMemoryRequirementCount->HasData() && pSparseMemoryRequirementCount->HasAddress())
            OutputScalarValueAscii(outputFile, pSparseMemoryRequirementCount->GetPointer(), vinfo_pSparseMemoryRequirementCount); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSparseImageMemoryRequirements2* pSparseMemoryRequirements
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSparseMemoryRequirements:      "); // HRW
    OutputString(outputFile, "VkSparseImageMemoryRequirements2* = "); // TEQ
    if (pSparseMemoryRequirements->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pSparseMemoryRequirements->GetAddress()); // WUS
        if (pSparseMemoryRequirements->HasData() && pSparseMemoryRequirements->HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkSparseImageMemoryRequirements2", pSparseMemoryRequirements->GetMetaStructPointer(), "pSparseMemoryRequirements", *pSparseMemoryRequirementCount->GetPointer(), false, pSparseMemoryRequirements->GetAddress(), sizeof(VkSparseImageMemoryRequirements2));  // CCN
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceFeatures2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceFeatures2>* pFeatures)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceFeatures2(physicalDevice, pFeatures)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPhysicalDeviceFeatures2* pFeatures
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pFeatures:                      "); // HRW
    OutputString(outputFile, "VkPhysicalDeviceFeatures2* = "); // TEQ
    if (pFeatures->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pFeatures->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pFeatures->HasData() && pFeatures->HasAddress())
            OutputStructureAscii(outputFile, *pFeatures->GetMetaStructPointer(), indent+1, pFeatures->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceProperties2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceProperties2>* pProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceProperties2(physicalDevice, pProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPhysicalDeviceProperties2* pProperties
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pProperties:                    "); // HRW
    OutputString(outputFile, "VkPhysicalDeviceProperties2* = "); // TEQ
    if (pProperties->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pProperties->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pProperties->HasData() && pProperties->HasAddress())
            OutputStructureAscii(outputFile, *pProperties->GetMetaStructPointer(), indent+1, pProperties->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceFormatProperties2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    VkFormat                                    format,
    StructPointerDecoder<Decoded_VkFormatProperties2>* pFormatProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceFormatProperties2(physicalDevice, format, pFormatProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFormat format
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "format:                         "); // HRW
    OutputString(outputFile, "VkFormat = "); // TEQ
    OutputEnumVkFormat(outputFile, format); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimalAscii(outputFile, format);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFormatProperties2* pFormatProperties
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pFormatProperties:              "); // HRW
    OutputString(outputFile, "VkFormatProperties2* = "); // TEQ
    if (pFormatProperties->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pFormatProperties->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pFormatProperties->HasData() && pFormatProperties->HasAddress())
            OutputStructureAscii(outputFile, *pFormatProperties->GetMetaStructPointer(), indent+1, pFormatProperties->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceImageFormatProperties2(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceImageFormatInfo2>& pImageFormatInfo,
    StructPointerDecoder<Decoded_VkImageFormatProperties2>* pImageFormatProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceImageFormatProperties2(physicalDevice, pImageFormatInfo, pImageFormatProperties)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPhysicalDeviceImageFormatInfo2* pImageFormatInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pImageFormatInfo:               "); // HRW
    OutputString(outputFile, "const VkPhysicalDeviceImageFormatInfo2* = "); // TEQ
    if (pImageFormatInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pImageFormatInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pImageFormatInfo.HasData() && pImageFormatInfo.HasAddress())
            OutputStructureAscii(outputFile, *pImageFormatInfo.GetMetaStructPointer(), indent+1, pImageFormatInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageFormatProperties2* pImageFormatProperties
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pImageFormatProperties:         "); // HRW
    OutputString(outputFile, "VkImageFormatProperties2* = "); // TEQ
    if (pImageFormatProperties->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pImageFormatProperties->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pImageFormatProperties->HasData() && pImageFormatProperties->HasAddress())
            OutputStructureAscii(outputFile, *pImageFormatProperties->GetMetaStructPointer(), indent+1, pImageFormatProperties->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceQueueFamilyProperties2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    PointerDecoder<uint32_t>*                   pQueueFamilyPropertyCount,
    StructPointerDecoder<Decoded_VkQueueFamilyProperties2>* pQueueFamilyProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceQueueFamilyProperties2(physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pQueueFamilyPropertyCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pQueueFamilyPropertyCount:      "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pQueueFamilyPropertyCount->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pQueueFamilyPropertyCount = {false, false, false, nullptr};
        if (pQueueFamilyPropertyCount->HasData() && pQueueFamilyPropertyCount->HasAddress())
            OutputScalarValueAscii(outputFile, pQueueFamilyPropertyCount->GetPointer(), vinfo_pQueueFamilyPropertyCount); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueueFamilyProperties2* pQueueFamilyProperties
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pQueueFamilyProperties:         "); // HRW
    OutputString(outputFile, "VkQueueFamilyProperties2* = "); // TEQ
    if (pQueueFamilyProperties->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pQueueFamilyProperties->GetAddress()); // WUS
        if (pQueueFamilyProperties->HasData() && pQueueFamilyProperties->HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkQueueFamilyProperties2", pQueueFamilyProperties->GetMetaStructPointer(), "pQueueFamilyProperties", *pQueueFamilyPropertyCount->GetPointer(), false, pQueueFamilyProperties->GetAddress(), sizeof(VkQueueFamilyProperties2));  // CCN
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceMemoryProperties2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceMemoryProperties2>* pMemoryProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceMemoryProperties2(physicalDevice, pMemoryProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPhysicalDeviceMemoryProperties2* pMemoryProperties
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pMemoryProperties:              "); // HRW
    OutputString(outputFile, "VkPhysicalDeviceMemoryProperties2* = "); // TEQ
    if (pMemoryProperties->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pMemoryProperties->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pMemoryProperties->HasData() && pMemoryProperties->HasAddress())
            OutputStructureAscii(outputFile, *pMemoryProperties->GetMetaStructPointer(), indent+1, pMemoryProperties->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSparseImageFormatProperties2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceSparseImageFormatInfo2>& pFormatInfo,
    PointerDecoder<uint32_t>*                   pPropertyCount,
    StructPointerDecoder<Decoded_VkSparseImageFormatProperties2>* pProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceSparseImageFormatProperties2(physicalDevice, pFormatInfo, pPropertyCount, pProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pFormatInfo:                    "); // HRW
    OutputString(outputFile, "const VkPhysicalDeviceSparseImageFormatInfo2* = "); // TEQ
    if (pFormatInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pFormatInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pFormatInfo.HasData() && pFormatInfo.HasAddress())
            OutputStructureAscii(outputFile, *pFormatInfo.GetMetaStructPointer(), indent+1, pFormatInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pPropertyCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pPropertyCount:                 "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pPropertyCount->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pPropertyCount = {false, false, false, nullptr};
        if (pPropertyCount->HasData() && pPropertyCount->HasAddress())
            OutputScalarValueAscii(outputFile, pPropertyCount->GetPointer(), vinfo_pPropertyCount); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSparseImageFormatProperties2* pProperties
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pProperties:                    "); // HRW
    OutputString(outputFile, "VkSparseImageFormatProperties2* = "); // TEQ
    if (pProperties->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pProperties->GetAddress()); // WUS
        if (pProperties->HasData() && pProperties->HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkSparseImageFormatProperties2", pProperties->GetMetaStructPointer(), "pProperties", *pPropertyCount->GetPointer(), false, pProperties->GetAddress(), sizeof(VkSparseImageFormatProperties2));  // CCN
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkTrimCommandPool(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            commandPool,
    VkCommandPoolTrimFlags                      flags)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkTrimCommandPool(device, commandPool, flags)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkCommandPool commandPool
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandPool:                    "); // HRW
    OutputString(outputFile, "VkCommandPool = "); // TEQ
    OutputAddrAscii(outputFile, commandPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkCommandPoolTrimFlags flags
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "flags:                          "); // HRW
    OutputString(outputFile, "VkCommandPoolTrimFlags = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, flags); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetDeviceQueue2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDeviceQueueInfo2>& pQueueInfo,
    HandlePointerDecoder<VkQueue>*              pQueue)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetDeviceQueue2(device, pQueueInfo, pQueue)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDeviceQueueInfo2* pQueueInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pQueueInfo:                     "); // HRW
    OutputString(outputFile, "const VkDeviceQueueInfo2* = "); // TEQ
    if (pQueueInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pQueueInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pQueueInfo.HasData() && pQueueInfo.HasAddress())
            OutputStructureAscii(outputFile, *pQueueInfo.GetMetaStructPointer(), indent+1, pQueueInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueue* pQueue
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pQueue:                         "); // HRW
    OutputString(outputFile, "VkQueue* = "); // TEQ
    if (pQueue->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pQueue = {true, false, false, nullptr};
        if (pQueue->HasData() && pQueue->HasAddress())
            OutputScalarValueAscii(outputFile, pQueue->GetPointer(), vinfo_pQueue); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateSamplerYcbcrConversion(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSamplerYcbcrConversionCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkSamplerYcbcrConversion>* pYcbcrConversion)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreateSamplerYcbcrConversion(device, pCreateInfo, pAllocator, pYcbcrConversion)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSamplerYcbcrConversionCreateInfo* pCreateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkSamplerYcbcrConversionCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pCreateInfo.HasData() && pCreateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSamplerYcbcrConversion* pYcbcrConversion
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pYcbcrConversion:               "); // HRW
    OutputString(outputFile, "VkSamplerYcbcrConversion* = "); // TEQ
    if (pYcbcrConversion->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pYcbcrConversion = {true, false, false, nullptr};
        if (pYcbcrConversion->HasData() && pYcbcrConversion->HasAddress())
            OutputScalarValueAscii(outputFile, pYcbcrConversion->GetPointer(), vinfo_pYcbcrConversion); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroySamplerYcbcrConversion(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            ycbcrConversion,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkDestroySamplerYcbcrConversion(device, ycbcrConversion, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSamplerYcbcrConversion ycbcrConversion
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "ycbcrConversion:                "); // HRW
    OutputString(outputFile, "VkSamplerYcbcrConversion = "); // TEQ
    OutputAddrAscii(outputFile, ycbcrConversion); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateDescriptorUpdateTemplate(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDescriptorUpdateTemplateCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkDescriptorUpdateTemplate>* pDescriptorUpdateTemplate)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreateDescriptorUpdateTemplate(device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkDescriptorUpdateTemplateCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pCreateInfo.HasData() && pCreateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDescriptorUpdateTemplate* pDescriptorUpdateTemplate
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pDescriptorUpdateTemplate:      "); // HRW
    OutputString(outputFile, "VkDescriptorUpdateTemplate* = "); // TEQ
    if (pDescriptorUpdateTemplate->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pDescriptorUpdateTemplate = {true, false, false, nullptr};
        if (pDescriptorUpdateTemplate->HasData() && pDescriptorUpdateTemplate->HasAddress())
            OutputScalarValueAscii(outputFile, pDescriptorUpdateTemplate->GetPointer(), vinfo_pDescriptorUpdateTemplate); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyDescriptorUpdateTemplate(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            descriptorUpdateTemplate,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkDestroyDescriptorUpdateTemplate(device, descriptorUpdateTemplate, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDescriptorUpdateTemplate descriptorUpdateTemplate
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "descriptorUpdateTemplate:       "); // HRW
    OutputString(outputFile, "VkDescriptorUpdateTemplate = "); // TEQ
    OutputAddrAscii(outputFile, descriptorUpdateTemplate); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceExternalBufferProperties(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceExternalBufferInfo>& pExternalBufferInfo,
    StructPointerDecoder<Decoded_VkExternalBufferProperties>* pExternalBufferProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceExternalBufferProperties(physicalDevice, pExternalBufferInfo, pExternalBufferProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPhysicalDeviceExternalBufferInfo* pExternalBufferInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pExternalBufferInfo:            "); // HRW
    OutputString(outputFile, "const VkPhysicalDeviceExternalBufferInfo* = "); // TEQ
    if (pExternalBufferInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pExternalBufferInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pExternalBufferInfo.HasData() && pExternalBufferInfo.HasAddress())
            OutputStructureAscii(outputFile, *pExternalBufferInfo.GetMetaStructPointer(), indent+1, pExternalBufferInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkExternalBufferProperties* pExternalBufferProperties
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pExternalBufferProperties:      "); // HRW
    OutputString(outputFile, "VkExternalBufferProperties* = "); // TEQ
    if (pExternalBufferProperties->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pExternalBufferProperties->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pExternalBufferProperties->HasData() && pExternalBufferProperties->HasAddress())
            OutputStructureAscii(outputFile, *pExternalBufferProperties->GetMetaStructPointer(), indent+1, pExternalBufferProperties->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceExternalFenceProperties(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceExternalFenceInfo>& pExternalFenceInfo,
    StructPointerDecoder<Decoded_VkExternalFenceProperties>* pExternalFenceProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceExternalFenceProperties(physicalDevice, pExternalFenceInfo, pExternalFenceProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPhysicalDeviceExternalFenceInfo* pExternalFenceInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pExternalFenceInfo:             "); // HRW
    OutputString(outputFile, "const VkPhysicalDeviceExternalFenceInfo* = "); // TEQ
    if (pExternalFenceInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pExternalFenceInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pExternalFenceInfo.HasData() && pExternalFenceInfo.HasAddress())
            OutputStructureAscii(outputFile, *pExternalFenceInfo.GetMetaStructPointer(), indent+1, pExternalFenceInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkExternalFenceProperties* pExternalFenceProperties
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pExternalFenceProperties:       "); // HRW
    OutputString(outputFile, "VkExternalFenceProperties* = "); // TEQ
    if (pExternalFenceProperties->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pExternalFenceProperties->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pExternalFenceProperties->HasData() && pExternalFenceProperties->HasAddress())
            OutputStructureAscii(outputFile, *pExternalFenceProperties->GetMetaStructPointer(), indent+1, pExternalFenceProperties->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceExternalSemaphoreProperties(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceExternalSemaphoreInfo>& pExternalSemaphoreInfo,
    StructPointerDecoder<Decoded_VkExternalSemaphoreProperties>* pExternalSemaphoreProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceExternalSemaphoreProperties(physicalDevice, pExternalSemaphoreInfo, pExternalSemaphoreProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pExternalSemaphoreInfo:         "); // HRW
    OutputString(outputFile, "const VkPhysicalDeviceExternalSemaphoreInfo* = "); // TEQ
    if (pExternalSemaphoreInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pExternalSemaphoreInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pExternalSemaphoreInfo.HasData() && pExternalSemaphoreInfo.HasAddress())
            OutputStructureAscii(outputFile, *pExternalSemaphoreInfo.GetMetaStructPointer(), indent+1, pExternalSemaphoreInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkExternalSemaphoreProperties* pExternalSemaphoreProperties
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pExternalSemaphoreProperties:   "); // HRW
    OutputString(outputFile, "VkExternalSemaphoreProperties* = "); // TEQ
    if (pExternalSemaphoreProperties->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pExternalSemaphoreProperties->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pExternalSemaphoreProperties->HasData() && pExternalSemaphoreProperties->HasAddress())
            OutputStructureAscii(outputFile, *pExternalSemaphoreProperties->GetMetaStructPointer(), indent+1, pExternalSemaphoreProperties->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetDescriptorSetLayoutSupport(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDescriptorSetLayoutCreateInfo>& pCreateInfo,
    StructPointerDecoder<Decoded_VkDescriptorSetLayoutSupport>* pSupport)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetDescriptorSetLayoutSupport(device, pCreateInfo, pSupport)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDescriptorSetLayoutCreateInfo* pCreateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkDescriptorSetLayoutCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pCreateInfo.HasData() && pCreateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDescriptorSetLayoutSupport* pSupport
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSupport:                       "); // HRW
    OutputString(outputFile, "VkDescriptorSetLayoutSupport* = "); // TEQ
    if (pSupport->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pSupport->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pSupport->HasData() && pSupport->HasAddress())
            OutputStructureAscii(outputFile, *pSupport->GetMetaStructPointer(), indent+1, pSupport->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkDestroySurfaceKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            instance,
    format::HandleId                            surface,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkDestroySurfaceKHR(instance, surface, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkInstance instance
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "instance:                       "); // HRW
    OutputString(outputFile, "VkInstance = "); // TEQ
    OutputAddrAscii(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR surface
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "surface:                        "); // HRW
    OutputString(outputFile, "VkSurfaceKHR = "); // TEQ
    OutputAddrAscii(outputFile, surface); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSurfaceSupportKHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    format::HandleId                            surface,
    PointerDecoder<VkBool32>*                   pSupported)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceSurfaceSupportKHR(physicalDevice, queueFamilyIndex, surface, pSupported)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t queueFamilyIndex
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "queueFamilyIndex:               "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, queueFamilyIndex); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR surface
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "surface:                        "); // HRW
    OutputString(outputFile, "VkSurfaceKHR = "); // TEQ
    OutputAddrAscii(outputFile, surface); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBool32* pSupported
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSupported:                     "); // HRW
    OutputString(outputFile, "VkBool32* = "); // TEQ
    if (pSupported->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pSupported = {false, false, false, nullptr};
        if (pSupported->HasData() && pSupported->HasAddress())
            OutputScalarValueAscii(outputFile, pSupported->GetPointer(), vinfo_pSupported); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSurfaceCapabilitiesKHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    format::HandleId                            surface,
    StructPointerDecoder<Decoded_VkSurfaceCapabilitiesKHR>* pSurfaceCapabilities)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceSurfaceCapabilitiesKHR(physicalDevice, surface, pSurfaceCapabilities)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR surface
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "surface:                        "); // HRW
    OutputString(outputFile, "VkSurfaceKHR = "); // TEQ
    OutputAddrAscii(outputFile, surface); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceCapabilitiesKHR* pSurfaceCapabilities
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSurfaceCapabilities:           "); // HRW
    OutputString(outputFile, "VkSurfaceCapabilitiesKHR* = "); // TEQ
    if (pSurfaceCapabilities->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pSurfaceCapabilities->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pSurfaceCapabilities->HasData() && pSurfaceCapabilities->HasAddress())
            OutputStructureAscii(outputFile, *pSurfaceCapabilities->GetMetaStructPointer(), indent+1, pSurfaceCapabilities->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSurfaceFormatsKHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    format::HandleId                            surface,
    PointerDecoder<uint32_t>*                   pSurfaceFormatCount,
    StructPointerDecoder<Decoded_VkSurfaceFormatKHR>* pSurfaceFormats)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceSurfaceFormatsKHR(physicalDevice, surface, pSurfaceFormatCount, pSurfaceFormats)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR surface
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "surface:                        "); // HRW
    OutputString(outputFile, "VkSurfaceKHR = "); // TEQ
    OutputAddrAscii(outputFile, surface); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pSurfaceFormatCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSurfaceFormatCount:            "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pSurfaceFormatCount->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pSurfaceFormatCount = {false, false, false, nullptr};
        if (pSurfaceFormatCount->HasData() && pSurfaceFormatCount->HasAddress())
            OutputScalarValueAscii(outputFile, pSurfaceFormatCount->GetPointer(), vinfo_pSurfaceFormatCount); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceFormatKHR* pSurfaceFormats
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSurfaceFormats:                "); // HRW
    OutputString(outputFile, "VkSurfaceFormatKHR* = "); // TEQ
    if (pSurfaceFormats->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pSurfaceFormats->GetAddress()); // WUS
        if (pSurfaceFormats->HasData() && pSurfaceFormats->HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkSurfaceFormatKHR", pSurfaceFormats->GetMetaStructPointer(), "pSurfaceFormats", *pSurfaceFormatCount->GetPointer(), false, pSurfaceFormats->GetAddress(), sizeof(VkSurfaceFormatKHR));  // CCN
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSurfacePresentModesKHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    format::HandleId                            surface,
    PointerDecoder<uint32_t>*                   pPresentModeCount,
    PointerDecoder<VkPresentModeKHR>*           pPresentModes)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceSurfacePresentModesKHR(physicalDevice, surface, pPresentModeCount, pPresentModes)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR surface
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "surface:                        "); // HRW
    OutputString(outputFile, "VkSurfaceKHR = "); // TEQ
    OutputAddrAscii(outputFile, surface); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pPresentModeCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pPresentModeCount:              "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pPresentModeCount->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pPresentModeCount = {false, false, false, nullptr};
        if (pPresentModeCount->HasData() && pPresentModeCount->HasAddress())
            OutputScalarValueAscii(outputFile, pPresentModeCount->GetPointer(), vinfo_pPresentModeCount); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPresentModeKHR* pPresentModes
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pPresentModes:                  "); // HRW
    OutputString(outputFile, "VkPresentModeKHR* = "); // TEQ
    if (pPresentModes->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pPresentModes->GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pPresentModes = {false, true, false, OutputEnumVkPresentModeKHR};
        OutputArrayAscii(outputFile, indent, "VkPresentModeKHR*", pPresentModes, "pPresentModes", *pPresentModeCount->GetPointer(), vinfo_pPresentModes); // AUB
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateSwapchainKHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSwapchainCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkSwapchainKHR>*       pSwapchain)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreateSwapchainKHR(device, pCreateInfo, pAllocator, pSwapchain)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSwapchainCreateInfoKHR* pCreateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkSwapchainCreateInfoKHR* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pCreateInfo.HasData() && pCreateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSwapchainKHR* pSwapchain
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSwapchain:                     "); // HRW
    OutputString(outputFile, "VkSwapchainKHR* = "); // TEQ
    if (pSwapchain->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pSwapchain = {true, false, false, nullptr};
        if (pSwapchain->HasData() && pSwapchain->HasAddress())
            OutputScalarValueAscii(outputFile, pSwapchain->GetPointer(), vinfo_pSwapchain); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroySwapchainKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            swapchain,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkDestroySwapchainKHR(device, swapchain, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSwapchainKHR swapchain
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "swapchain:                      "); // HRW
    OutputString(outputFile, "VkSwapchainKHR = "); // TEQ
    OutputAddrAscii(outputFile, swapchain); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetSwapchainImagesKHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            swapchain,
    PointerDecoder<uint32_t>*                   pSwapchainImageCount,
    HandlePointerDecoder<VkImage>*              pSwapchainImages)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetSwapchainImagesKHR(device, swapchain, pSwapchainImageCount, pSwapchainImages)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSwapchainKHR swapchain
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "swapchain:                      "); // HRW
    OutputString(outputFile, "VkSwapchainKHR = "); // TEQ
    OutputAddrAscii(outputFile, swapchain); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pSwapchainImageCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSwapchainImageCount:           "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pSwapchainImageCount->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pSwapchainImageCount = {false, false, false, nullptr};
        if (pSwapchainImageCount->HasData() && pSwapchainImageCount->HasAddress())
            OutputScalarValueAscii(outputFile, pSwapchainImageCount->GetPointer(), vinfo_pSwapchainImageCount); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage* pSwapchainImages
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSwapchainImages:               "); // HRW
    OutputString(outputFile, "VkImage* = "); // TEQ
    if (pSwapchainImages->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pSwapchainImages->GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pSwapchainImages = {true, false, false, nullptr};
        OutputArrayAscii(outputFile, indent, "VkImage*", pSwapchainImages, "pSwapchainImages", *pSwapchainImageCount->GetPointer(), vinfo_pSwapchainImages); // AUB
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkAcquireNextImageKHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            swapchain,
    uint64_t                                    timeout,
    format::HandleId                            semaphore,
    format::HandleId                            fence,
    PointerDecoder<uint32_t>*                   pImageIndex)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkAcquireNextImageKHR(device, swapchain, timeout, semaphore, fence, pImageIndex)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSwapchainKHR swapchain
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "swapchain:                      "); // HRW
    OutputString(outputFile, "VkSwapchainKHR = "); // TEQ
    OutputAddrAscii(outputFile, swapchain); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint64_t timeout
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "timeout:                        "); // HRW
    OutputString(outputFile, "uint64_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, timeout); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSemaphore semaphore
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "semaphore:                      "); // HRW
    OutputString(outputFile, "VkSemaphore = "); // TEQ
    OutputAddrAscii(outputFile, semaphore); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFence fence
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "fence:                          "); // HRW
    OutputString(outputFile, "VkFence = "); // TEQ
    OutputAddrAscii(outputFile, fence); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pImageIndex
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pImageIndex:                    "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pImageIndex->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pImageIndex = {false, false, false, nullptr};
        if (pImageIndex->HasData() && pImageIndex->HasAddress())
            OutputScalarValueAscii(outputFile, pImageIndex->GetPointer(), vinfo_pImageIndex); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkQueuePresentKHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            queue,
    const StructPointerDecoder<Decoded_VkPresentInfoKHR>& pPresentInfo)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkQueuePresentKHR(queue, pPresentInfo)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkQueue queue
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "queue:                          "); // HRW
    OutputString(outputFile, "VkQueue = "); // TEQ
    OutputAddrAscii(outputFile, queue); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPresentInfoKHR* pPresentInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pPresentInfo:                   "); // HRW
    OutputString(outputFile, "const VkPresentInfoKHR* = "); // TEQ
    if (pPresentInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pPresentInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pPresentInfo.HasData() && pPresentInfo.HasAddress())
            OutputStructureAscii(outputFile, *pPresentInfo.GetMetaStructPointer(), indent+1, pPresentInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS

    frameNumber++;
}

void VulkanAsciiConsumer::Process_vkGetDeviceGroupPresentCapabilitiesKHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDeviceGroupPresentCapabilitiesKHR>* pDeviceGroupPresentCapabilities)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetDeviceGroupPresentCapabilitiesKHR(device, pDeviceGroupPresentCapabilities)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceGroupPresentCapabilitiesKHR* pDeviceGroupPresentCapabilities
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pDeviceGroupPresentCapabilities: "); // HRW
    OutputString(outputFile, "VkDeviceGroupPresentCapabilitiesKHR* = "); // TEQ
    if (pDeviceGroupPresentCapabilities->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pDeviceGroupPresentCapabilities->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pDeviceGroupPresentCapabilities->HasData() && pDeviceGroupPresentCapabilities->HasAddress())
            OutputStructureAscii(outputFile, *pDeviceGroupPresentCapabilities->GetMetaStructPointer(), indent+1, pDeviceGroupPresentCapabilities->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetDeviceGroupSurfacePresentModesKHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            surface,
    PointerDecoder<VkDeviceGroupPresentModeFlagsKHR>* pModes)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetDeviceGroupSurfacePresentModesKHR(device, surface, pModes)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR surface
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "surface:                        "); // HRW
    OutputString(outputFile, "VkSurfaceKHR = "); // TEQ
    OutputAddrAscii(outputFile, surface); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceGroupPresentModeFlagsKHR* pModes
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pModes:                         "); // HRW
    OutputString(outputFile, "VkDeviceGroupPresentModeFlagsKHR* = "); // TEQ
    if (pModes->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pModes = {false, false, true, OutputEnumVkDeviceGroupPresentModeFlagBitsKHR};
        if (pModes->HasData() && pModes->HasAddress())
            OutputScalarValueAscii(outputFile, pModes->GetPointer(), vinfo_pModes); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDevicePresentRectanglesKHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    format::HandleId                            surface,
    PointerDecoder<uint32_t>*                   pRectCount,
    StructPointerDecoder<Decoded_VkRect2D>*     pRects)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDevicePresentRectanglesKHR(physicalDevice, surface, pRectCount, pRects)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR surface
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "surface:                        "); // HRW
    OutputString(outputFile, "VkSurfaceKHR = "); // TEQ
    OutputAddrAscii(outputFile, surface); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pRectCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pRectCount:                     "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pRectCount->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pRectCount = {false, false, false, nullptr};
        if (pRectCount->HasData() && pRectCount->HasAddress())
            OutputScalarValueAscii(outputFile, pRectCount->GetPointer(), vinfo_pRectCount); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkRect2D* pRects
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pRects:                         "); // HRW
    OutputString(outputFile, "VkRect2D* = "); // TEQ
    if (pRects->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pRects->GetAddress()); // WUS
        if (pRects->HasData() && pRects->HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkRect2D", pRects->GetMetaStructPointer(), "pRects", *pRectCount->GetPointer(), false, pRects->GetAddress(), sizeof(VkRect2D));  // CCN
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkAcquireNextImage2KHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkAcquireNextImageInfoKHR>& pAcquireInfo,
    PointerDecoder<uint32_t>*                   pImageIndex)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkAcquireNextImage2KHR(device, pAcquireInfo, pImageIndex)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAcquireNextImageInfoKHR* pAcquireInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAcquireInfo:                   "); // HRW
    OutputString(outputFile, "const VkAcquireNextImageInfoKHR* = "); // TEQ
    if (pAcquireInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAcquireInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAcquireInfo.HasData() && pAcquireInfo.HasAddress())
            OutputStructureAscii(outputFile, *pAcquireInfo.GetMetaStructPointer(), indent+1, pAcquireInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pImageIndex
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pImageIndex:                    "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pImageIndex->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pImageIndex = {false, false, false, nullptr};
        if (pImageIndex->HasData() && pImageIndex->HasAddress())
            OutputScalarValueAscii(outputFile, pImageIndex->GetPointer(), vinfo_pImageIndex); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceDisplayPropertiesKHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    PointerDecoder<uint32_t>*                   pPropertyCount,
    StructPointerDecoder<Decoded_VkDisplayPropertiesKHR>* pProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceDisplayPropertiesKHR(physicalDevice, pPropertyCount, pProperties)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pPropertyCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pPropertyCount:                 "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pPropertyCount->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pPropertyCount = {false, false, false, nullptr};
        if (pPropertyCount->HasData() && pPropertyCount->HasAddress())
            OutputScalarValueAscii(outputFile, pPropertyCount->GetPointer(), vinfo_pPropertyCount); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayPropertiesKHR* pProperties
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pProperties:                    "); // HRW
    OutputString(outputFile, "VkDisplayPropertiesKHR* = "); // TEQ
    if (pProperties->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pProperties->GetAddress()); // WUS
        if (pProperties->HasData() && pProperties->HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkDisplayPropertiesKHR", pProperties->GetMetaStructPointer(), "pProperties", *pPropertyCount->GetPointer(), false, pProperties->GetAddress(), sizeof(VkDisplayPropertiesKHR));  // CCN
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceDisplayPlanePropertiesKHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    PointerDecoder<uint32_t>*                   pPropertyCount,
    StructPointerDecoder<Decoded_VkDisplayPlanePropertiesKHR>* pProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceDisplayPlanePropertiesKHR(physicalDevice, pPropertyCount, pProperties)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pPropertyCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pPropertyCount:                 "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pPropertyCount->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pPropertyCount = {false, false, false, nullptr};
        if (pPropertyCount->HasData() && pPropertyCount->HasAddress())
            OutputScalarValueAscii(outputFile, pPropertyCount->GetPointer(), vinfo_pPropertyCount); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayPlanePropertiesKHR* pProperties
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pProperties:                    "); // HRW
    OutputString(outputFile, "VkDisplayPlanePropertiesKHR* = "); // TEQ
    if (pProperties->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pProperties->GetAddress()); // WUS
        if (pProperties->HasData() && pProperties->HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkDisplayPlanePropertiesKHR", pProperties->GetMetaStructPointer(), "pProperties", *pPropertyCount->GetPointer(), false, pProperties->GetAddress(), sizeof(VkDisplayPlanePropertiesKHR));  // CCN
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetDisplayPlaneSupportedDisplaysKHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    uint32_t                                    planeIndex,
    PointerDecoder<uint32_t>*                   pDisplayCount,
    HandlePointerDecoder<VkDisplayKHR>*         pDisplays)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetDisplayPlaneSupportedDisplaysKHR(physicalDevice, planeIndex, pDisplayCount, pDisplays)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t planeIndex
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "planeIndex:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, planeIndex); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pDisplayCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pDisplayCount:                  "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pDisplayCount->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pDisplayCount = {false, false, false, nullptr};
        if (pDisplayCount->HasData() && pDisplayCount->HasAddress())
            OutputScalarValueAscii(outputFile, pDisplayCount->GetPointer(), vinfo_pDisplayCount); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayKHR* pDisplays
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pDisplays:                      "); // HRW
    OutputString(outputFile, "VkDisplayKHR* = "); // TEQ
    if (pDisplays->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pDisplays->GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pDisplays = {true, false, false, nullptr};
        OutputArrayAscii(outputFile, indent, "VkDisplayKHR*", pDisplays, "pDisplays", *pDisplayCount->GetPointer(), vinfo_pDisplays); // AUB
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetDisplayModePropertiesKHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    format::HandleId                            display,
    PointerDecoder<uint32_t>*                   pPropertyCount,
    StructPointerDecoder<Decoded_VkDisplayModePropertiesKHR>* pProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetDisplayModePropertiesKHR(physicalDevice, display, pPropertyCount, pProperties)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayKHR display
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "display:                        "); // HRW
    OutputString(outputFile, "VkDisplayKHR = "); // TEQ
    OutputAddrAscii(outputFile, display); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pPropertyCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pPropertyCount:                 "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pPropertyCount->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pPropertyCount = {false, false, false, nullptr};
        if (pPropertyCount->HasData() && pPropertyCount->HasAddress())
            OutputScalarValueAscii(outputFile, pPropertyCount->GetPointer(), vinfo_pPropertyCount); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayModePropertiesKHR* pProperties
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pProperties:                    "); // HRW
    OutputString(outputFile, "VkDisplayModePropertiesKHR* = "); // TEQ
    if (pProperties->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pProperties->GetAddress()); // WUS
        if (pProperties->HasData() && pProperties->HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkDisplayModePropertiesKHR", pProperties->GetMetaStructPointer(), "pProperties", *pPropertyCount->GetPointer(), false, pProperties->GetAddress(), sizeof(VkDisplayModePropertiesKHR));  // CCN
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateDisplayModeKHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    format::HandleId                            display,
    const StructPointerDecoder<Decoded_VkDisplayModeCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkDisplayModeKHR>*     pMode)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreateDisplayModeKHR(physicalDevice, display, pCreateInfo, pAllocator, pMode)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayKHR display
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "display:                        "); // HRW
    OutputString(outputFile, "VkDisplayKHR = "); // TEQ
    OutputAddrAscii(outputFile, display); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDisplayModeCreateInfoKHR* pCreateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkDisplayModeCreateInfoKHR* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pCreateInfo.HasData() && pCreateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayModeKHR* pMode
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pMode:                          "); // HRW
    OutputString(outputFile, "VkDisplayModeKHR* = "); // TEQ
    if (pMode->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pMode = {true, false, false, nullptr};
        if (pMode->HasData() && pMode->HasAddress())
            OutputScalarValueAscii(outputFile, pMode->GetPointer(), vinfo_pMode); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetDisplayPlaneCapabilitiesKHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    format::HandleId                            mode,
    uint32_t                                    planeIndex,
    StructPointerDecoder<Decoded_VkDisplayPlaneCapabilitiesKHR>* pCapabilities)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetDisplayPlaneCapabilitiesKHR(physicalDevice, mode, planeIndex, pCapabilities)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayModeKHR mode
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "mode:                           "); // HRW
    OutputString(outputFile, "VkDisplayModeKHR = "); // TEQ
    OutputAddrAscii(outputFile, mode); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t planeIndex
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "planeIndex:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, planeIndex); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayPlaneCapabilitiesKHR* pCapabilities
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCapabilities:                  "); // HRW
    OutputString(outputFile, "VkDisplayPlaneCapabilitiesKHR* = "); // TEQ
    if (pCapabilities->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCapabilities->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pCapabilities->HasData() && pCapabilities->HasAddress())
            OutputStructureAscii(outputFile, *pCapabilities->GetMetaStructPointer(), indent+1, pCapabilities->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateDisplayPlaneSurfaceKHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkDisplaySurfaceCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreateDisplayPlaneSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "instance:                       "); // HRW
    OutputString(outputFile, "VkInstance = "); // TEQ
    OutputAddrAscii(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDisplaySurfaceCreateInfoKHR* pCreateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkDisplaySurfaceCreateInfoKHR* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pCreateInfo.HasData() && pCreateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR* pSurface
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSurface:                       "); // HRW
    OutputString(outputFile, "VkSurfaceKHR* = "); // TEQ
    if (pSurface->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pSurface = {true, false, false, nullptr};
        if (pSurface->HasData() && pSurface->HasAddress())
            OutputScalarValueAscii(outputFile, pSurface->GetPointer(), vinfo_pSurface); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateSharedSwapchainsKHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    uint32_t                                    swapchainCount,
    const StructPointerDecoder<Decoded_VkSwapchainCreateInfoKHR>& pCreateInfos,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkSwapchainKHR>*       pSwapchains)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreateSharedSwapchainsKHR(device, swapchainCount, pCreateInfos, pAllocator, pSwapchains)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t swapchainCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "swapchainCount:                 "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, swapchainCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSwapchainCreateInfoKHR* pCreateInfos
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfos:                   "); // HRW
    OutputString(outputFile, "const VkSwapchainCreateInfoKHR* = "); // TEQ
    if (pCreateInfos.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfos.GetAddress()); // WVS
        if (pCreateInfos.HasData() && pCreateInfos.HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkSwapchainCreateInfoKHR", pCreateInfos.GetMetaStructPointer(), "pCreateInfos", swapchainCount, false, pCreateInfos.GetAddress(), sizeof(VkSwapchainCreateInfoKHR));  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSwapchainKHR* pSwapchains
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSwapchains:                    "); // HRW
    OutputString(outputFile, "VkSwapchainKHR* = "); // TEQ
    if (pSwapchains->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pSwapchains->GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pSwapchains = {true, false, false, nullptr};
        OutputArrayAscii(outputFile, indent, "VkSwapchainKHR*", pSwapchains, "pSwapchains", swapchainCount, vinfo_pSwapchains); // AUB
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateXlibSurfaceKHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkXlibSurfaceCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreateXlibSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "instance:                       "); // HRW
    OutputString(outputFile, "VkInstance = "); // TEQ
    OutputAddrAscii(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkXlibSurfaceCreateInfoKHR* pCreateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkXlibSurfaceCreateInfoKHR* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pCreateInfo.HasData() && pCreateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR* pSurface
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSurface:                       "); // HRW
    OutputString(outputFile, "VkSurfaceKHR* = "); // TEQ
    if (pSurface->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pSurface = {true, false, false, nullptr};
        if (pSurface->HasData() && pSurface->HasAddress())
            OutputScalarValueAscii(outputFile, pSurface->GetPointer(), vinfo_pSurface); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceXlibPresentationSupportKHR(
    VkBool32                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    uint64_t                                    dpy,
    size_t                                      visualID)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceXlibPresentationSupportKHR(physicalDevice, queueFamilyIndex, dpy, visualID)");
    fprintf(outputFile, " returns %u:\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t queueFamilyIndex
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "queueFamilyIndex:               "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, queueFamilyIndex); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: void* dpy
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "dpy:                            "); // HRW
    OutputString(outputFile, "void* = "); // TEQ
    OutputAddrAscii(outputFile, dpy); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: size_t visualID
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "visualID:                       "); // HRW
    OutputString(outputFile, "size_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, visualID); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateXcbSurfaceKHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkXcbSurfaceCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreateXcbSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "instance:                       "); // HRW
    OutputString(outputFile, "VkInstance = "); // TEQ
    OutputAddrAscii(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkXcbSurfaceCreateInfoKHR* pCreateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkXcbSurfaceCreateInfoKHR* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pCreateInfo.HasData() && pCreateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR* pSurface
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSurface:                       "); // HRW
    OutputString(outputFile, "VkSurfaceKHR* = "); // TEQ
    if (pSurface->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pSurface = {true, false, false, nullptr};
        if (pSurface->HasData() && pSurface->HasAddress())
            OutputScalarValueAscii(outputFile, pSurface->GetPointer(), vinfo_pSurface); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceXcbPresentationSupportKHR(
    VkBool32                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    uint64_t                                    connection,
    uint32_t                                    visual_id)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceXcbPresentationSupportKHR(physicalDevice, queueFamilyIndex, connection, visual_id)");
    fprintf(outputFile, " returns %u:\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t queueFamilyIndex
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "queueFamilyIndex:               "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, queueFamilyIndex); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: void* connection
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "connection:                     "); // HRW
    OutputString(outputFile, "void* = "); // TEQ
    if ( !connection) // WWW
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, connection); // PWR
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t visual_id
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "visual_id:                      "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, visual_id); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateWaylandSurfaceKHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkWaylandSurfaceCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreateWaylandSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "instance:                       "); // HRW
    OutputString(outputFile, "VkInstance = "); // TEQ
    OutputAddrAscii(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkWaylandSurfaceCreateInfoKHR* pCreateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkWaylandSurfaceCreateInfoKHR* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pCreateInfo.HasData() && pCreateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR* pSurface
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSurface:                       "); // HRW
    OutputString(outputFile, "VkSurfaceKHR* = "); // TEQ
    if (pSurface->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pSurface = {true, false, false, nullptr};
        if (pSurface->HasData() && pSurface->HasAddress())
            OutputScalarValueAscii(outputFile, pSurface->GetPointer(), vinfo_pSurface); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceWaylandPresentationSupportKHR(
    VkBool32                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    uint64_t                                    display)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceWaylandPresentationSupportKHR(physicalDevice, queueFamilyIndex, display)");
    fprintf(outputFile, " returns %u:\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t queueFamilyIndex
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "queueFamilyIndex:               "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, queueFamilyIndex); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: struct void* display
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "display:                        "); // HRW
    OutputString(outputFile, "struct void* = "); // TEQ
    if ( !display) // WWW
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, display); // PWR
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateAndroidSurfaceKHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkAndroidSurfaceCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreateAndroidSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "instance:                       "); // HRW
    OutputString(outputFile, "VkInstance = "); // TEQ
    OutputAddrAscii(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAndroidSurfaceCreateInfoKHR* pCreateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkAndroidSurfaceCreateInfoKHR* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pCreateInfo.HasData() && pCreateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR* pSurface
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSurface:                       "); // HRW
    OutputString(outputFile, "VkSurfaceKHR* = "); // TEQ
    if (pSurface->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pSurface = {true, false, false, nullptr};
        if (pSurface->HasData() && pSurface->HasAddress())
            OutputScalarValueAscii(outputFile, pSurface->GetPointer(), vinfo_pSurface); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateWin32SurfaceKHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkWin32SurfaceCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreateWin32SurfaceKHR(instance, pCreateInfo, pAllocator, pSurface)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "instance:                       "); // HRW
    OutputString(outputFile, "VkInstance = "); // TEQ
    OutputAddrAscii(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkWin32SurfaceCreateInfoKHR* pCreateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkWin32SurfaceCreateInfoKHR* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pCreateInfo.HasData() && pCreateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR* pSurface
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSurface:                       "); // HRW
    OutputString(outputFile, "VkSurfaceKHR* = "); // TEQ
    if (pSurface->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pSurface = {true, false, false, nullptr};
        if (pSurface->HasData() && pSurface->HasAddress())
            OutputScalarValueAscii(outputFile, pSurface->GetPointer(), vinfo_pSurface); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceWin32PresentationSupportKHR(
    VkBool32                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    uint32_t                                    queueFamilyIndex)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceWin32PresentationSupportKHR(physicalDevice, queueFamilyIndex)");
    fprintf(outputFile, " returns %u:\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t queueFamilyIndex
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "queueFamilyIndex:               "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, queueFamilyIndex); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceFeatures2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceFeatures2>* pFeatures)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceFeatures2KHR(physicalDevice, pFeatures)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPhysicalDeviceFeatures2* pFeatures
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pFeatures:                      "); // HRW
    OutputString(outputFile, "VkPhysicalDeviceFeatures2* = "); // TEQ
    if (pFeatures->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pFeatures->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pFeatures->HasData() && pFeatures->HasAddress())
            OutputStructureAscii(outputFile, *pFeatures->GetMetaStructPointer(), indent+1, pFeatures->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceProperties2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceProperties2>* pProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceProperties2KHR(physicalDevice, pProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPhysicalDeviceProperties2* pProperties
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pProperties:                    "); // HRW
    OutputString(outputFile, "VkPhysicalDeviceProperties2* = "); // TEQ
    if (pProperties->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pProperties->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pProperties->HasData() && pProperties->HasAddress())
            OutputStructureAscii(outputFile, *pProperties->GetMetaStructPointer(), indent+1, pProperties->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceFormatProperties2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    VkFormat                                    format,
    StructPointerDecoder<Decoded_VkFormatProperties2>* pFormatProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceFormatProperties2KHR(physicalDevice, format, pFormatProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFormat format
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "format:                         "); // HRW
    OutputString(outputFile, "VkFormat = "); // TEQ
    OutputEnumVkFormat(outputFile, format); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimalAscii(outputFile, format);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFormatProperties2* pFormatProperties
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pFormatProperties:              "); // HRW
    OutputString(outputFile, "VkFormatProperties2* = "); // TEQ
    if (pFormatProperties->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pFormatProperties->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pFormatProperties->HasData() && pFormatProperties->HasAddress())
            OutputStructureAscii(outputFile, *pFormatProperties->GetMetaStructPointer(), indent+1, pFormatProperties->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceImageFormatProperties2KHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceImageFormatInfo2>& pImageFormatInfo,
    StructPointerDecoder<Decoded_VkImageFormatProperties2>* pImageFormatProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceImageFormatProperties2KHR(physicalDevice, pImageFormatInfo, pImageFormatProperties)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPhysicalDeviceImageFormatInfo2* pImageFormatInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pImageFormatInfo:               "); // HRW
    OutputString(outputFile, "const VkPhysicalDeviceImageFormatInfo2* = "); // TEQ
    if (pImageFormatInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pImageFormatInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pImageFormatInfo.HasData() && pImageFormatInfo.HasAddress())
            OutputStructureAscii(outputFile, *pImageFormatInfo.GetMetaStructPointer(), indent+1, pImageFormatInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageFormatProperties2* pImageFormatProperties
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pImageFormatProperties:         "); // HRW
    OutputString(outputFile, "VkImageFormatProperties2* = "); // TEQ
    if (pImageFormatProperties->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pImageFormatProperties->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pImageFormatProperties->HasData() && pImageFormatProperties->HasAddress())
            OutputStructureAscii(outputFile, *pImageFormatProperties->GetMetaStructPointer(), indent+1, pImageFormatProperties->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceQueueFamilyProperties2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    PointerDecoder<uint32_t>*                   pQueueFamilyPropertyCount,
    StructPointerDecoder<Decoded_VkQueueFamilyProperties2>* pQueueFamilyProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceQueueFamilyProperties2KHR(physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pQueueFamilyPropertyCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pQueueFamilyPropertyCount:      "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pQueueFamilyPropertyCount->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pQueueFamilyPropertyCount = {false, false, false, nullptr};
        if (pQueueFamilyPropertyCount->HasData() && pQueueFamilyPropertyCount->HasAddress())
            OutputScalarValueAscii(outputFile, pQueueFamilyPropertyCount->GetPointer(), vinfo_pQueueFamilyPropertyCount); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueueFamilyProperties2* pQueueFamilyProperties
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pQueueFamilyProperties:         "); // HRW
    OutputString(outputFile, "VkQueueFamilyProperties2* = "); // TEQ
    if (pQueueFamilyProperties->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pQueueFamilyProperties->GetAddress()); // WUS
        if (pQueueFamilyProperties->HasData() && pQueueFamilyProperties->HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkQueueFamilyProperties2", pQueueFamilyProperties->GetMetaStructPointer(), "pQueueFamilyProperties", *pQueueFamilyPropertyCount->GetPointer(), false, pQueueFamilyProperties->GetAddress(), sizeof(VkQueueFamilyProperties2));  // CCN
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceMemoryProperties2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceMemoryProperties2>* pMemoryProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceMemoryProperties2KHR(physicalDevice, pMemoryProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPhysicalDeviceMemoryProperties2* pMemoryProperties
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pMemoryProperties:              "); // HRW
    OutputString(outputFile, "VkPhysicalDeviceMemoryProperties2* = "); // TEQ
    if (pMemoryProperties->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pMemoryProperties->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pMemoryProperties->HasData() && pMemoryProperties->HasAddress())
            OutputStructureAscii(outputFile, *pMemoryProperties->GetMetaStructPointer(), indent+1, pMemoryProperties->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSparseImageFormatProperties2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceSparseImageFormatInfo2>& pFormatInfo,
    PointerDecoder<uint32_t>*                   pPropertyCount,
    StructPointerDecoder<Decoded_VkSparseImageFormatProperties2>* pProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceSparseImageFormatProperties2KHR(physicalDevice, pFormatInfo, pPropertyCount, pProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pFormatInfo:                    "); // HRW
    OutputString(outputFile, "const VkPhysicalDeviceSparseImageFormatInfo2* = "); // TEQ
    if (pFormatInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pFormatInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pFormatInfo.HasData() && pFormatInfo.HasAddress())
            OutputStructureAscii(outputFile, *pFormatInfo.GetMetaStructPointer(), indent+1, pFormatInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pPropertyCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pPropertyCount:                 "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pPropertyCount->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pPropertyCount = {false, false, false, nullptr};
        if (pPropertyCount->HasData() && pPropertyCount->HasAddress())
            OutputScalarValueAscii(outputFile, pPropertyCount->GetPointer(), vinfo_pPropertyCount); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSparseImageFormatProperties2* pProperties
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pProperties:                    "); // HRW
    OutputString(outputFile, "VkSparseImageFormatProperties2* = "); // TEQ
    if (pProperties->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pProperties->GetAddress()); // WUS
        if (pProperties->HasData() && pProperties->HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkSparseImageFormatProperties2", pProperties->GetMetaStructPointer(), "pProperties", *pPropertyCount->GetPointer(), false, pProperties->GetAddress(), sizeof(VkSparseImageFormatProperties2));  // CCN
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetDeviceGroupPeerMemoryFeaturesKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    uint32_t                                    heapIndex,
    uint32_t                                    localDeviceIndex,
    uint32_t                                    remoteDeviceIndex,
    PointerDecoder<VkPeerMemoryFeatureFlags>*   pPeerMemoryFeatures)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetDeviceGroupPeerMemoryFeaturesKHR(device, heapIndex, localDeviceIndex, remoteDeviceIndex, pPeerMemoryFeatures)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t heapIndex
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "heapIndex:                      "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, heapIndex); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t localDeviceIndex
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "localDeviceIndex:               "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, localDeviceIndex); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t remoteDeviceIndex
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "remoteDeviceIndex:              "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, remoteDeviceIndex); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPeerMemoryFeatureFlags* pPeerMemoryFeatures
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pPeerMemoryFeatures:            "); // HRW
    OutputString(outputFile, "VkPeerMemoryFeatureFlags* = "); // TEQ
    if (pPeerMemoryFeatures->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pPeerMemoryFeatures = {false, false, true, OutputEnumVkPeerMemoryFeatureFlagBits};
        if (pPeerMemoryFeatures->HasData() && pPeerMemoryFeatures->HasAddress())
            OutputScalarValueAscii(outputFile, pPeerMemoryFeatures->GetPointer(), vinfo_pPeerMemoryFeatures); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdSetDeviceMaskKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    deviceMask)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdSetDeviceMaskKHR(commandBuffer, deviceMask)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t deviceMask
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "deviceMask:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, deviceMask); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdDispatchBaseKHR(
    const ApiCallInfo&                          call_info,
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
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdDispatchBaseKHR(commandBuffer, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t baseGroupX
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "baseGroupX:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, baseGroupX); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t baseGroupY
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "baseGroupY:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, baseGroupY); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t baseGroupZ
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "baseGroupZ:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, baseGroupZ); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t groupCountX
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "groupCountX:                    "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, groupCountX); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t groupCountY
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "groupCountY:                    "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, groupCountY); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t groupCountZ
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "groupCountZ:                    "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, groupCountZ); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkTrimCommandPoolKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            commandPool,
    VkCommandPoolTrimFlags                      flags)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkTrimCommandPoolKHR(device, commandPool, flags)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkCommandPool commandPool
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandPool:                    "); // HRW
    OutputString(outputFile, "VkCommandPool = "); // TEQ
    OutputAddrAscii(outputFile, commandPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkCommandPoolTrimFlags flags
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "flags:                          "); // HRW
    OutputString(outputFile, "VkCommandPoolTrimFlags = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, flags); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkEnumeratePhysicalDeviceGroupsKHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            instance,
    PointerDecoder<uint32_t>*                   pPhysicalDeviceGroupCount,
    StructPointerDecoder<Decoded_VkPhysicalDeviceGroupProperties>* pPhysicalDeviceGroupProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkEnumeratePhysicalDeviceGroupsKHR(instance, pPhysicalDeviceGroupCount, pPhysicalDeviceGroupProperties)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "instance:                       "); // HRW
    OutputString(outputFile, "VkInstance = "); // TEQ
    OutputAddrAscii(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pPhysicalDeviceGroupCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pPhysicalDeviceGroupCount:      "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pPhysicalDeviceGroupCount->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pPhysicalDeviceGroupCount = {false, false, false, nullptr};
        if (pPhysicalDeviceGroupCount->HasData() && pPhysicalDeviceGroupCount->HasAddress())
            OutputScalarValueAscii(outputFile, pPhysicalDeviceGroupCount->GetPointer(), vinfo_pPhysicalDeviceGroupCount); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pPhysicalDeviceGroupProperties: "); // HRW
    OutputString(outputFile, "VkPhysicalDeviceGroupProperties* = "); // TEQ
    if (pPhysicalDeviceGroupProperties->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pPhysicalDeviceGroupProperties->GetAddress()); // WUS
        if (pPhysicalDeviceGroupProperties->HasData() && pPhysicalDeviceGroupProperties->HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkPhysicalDeviceGroupProperties", pPhysicalDeviceGroupProperties->GetMetaStructPointer(), "pPhysicalDeviceGroupProperties", *pPhysicalDeviceGroupCount->GetPointer(), false, pPhysicalDeviceGroupProperties->GetAddress(), sizeof(VkPhysicalDeviceGroupProperties));  // CCN
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceExternalBufferPropertiesKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceExternalBufferInfo>& pExternalBufferInfo,
    StructPointerDecoder<Decoded_VkExternalBufferProperties>* pExternalBufferProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceExternalBufferPropertiesKHR(physicalDevice, pExternalBufferInfo, pExternalBufferProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPhysicalDeviceExternalBufferInfo* pExternalBufferInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pExternalBufferInfo:            "); // HRW
    OutputString(outputFile, "const VkPhysicalDeviceExternalBufferInfo* = "); // TEQ
    if (pExternalBufferInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pExternalBufferInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pExternalBufferInfo.HasData() && pExternalBufferInfo.HasAddress())
            OutputStructureAscii(outputFile, *pExternalBufferInfo.GetMetaStructPointer(), indent+1, pExternalBufferInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkExternalBufferProperties* pExternalBufferProperties
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pExternalBufferProperties:      "); // HRW
    OutputString(outputFile, "VkExternalBufferProperties* = "); // TEQ
    if (pExternalBufferProperties->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pExternalBufferProperties->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pExternalBufferProperties->HasData() && pExternalBufferProperties->HasAddress())
            OutputStructureAscii(outputFile, *pExternalBufferProperties->GetMetaStructPointer(), indent+1, pExternalBufferProperties->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetMemoryWin32HandleKHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkMemoryGetWin32HandleInfoKHR>& pGetWin32HandleInfo,
    PointerDecoder<uint64_t, void*>*            pHandle)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetMemoryWin32HandleKHR(device, pGetWin32HandleInfo, pHandle)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkMemoryGetWin32HandleInfoKHR* pGetWin32HandleInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pGetWin32HandleInfo:            "); // HRW
    OutputString(outputFile, "const VkMemoryGetWin32HandleInfoKHR* = "); // TEQ
    if (pGetWin32HandleInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pGetWin32HandleInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pGetWin32HandleInfo.HasData() && pGetWin32HandleInfo.HasAddress())
            OutputStructureAscii(outputFile, *pGetWin32HandleInfo.GetMetaStructPointer(), indent+1, pGetWin32HandleInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: void** pHandle
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pHandle:                        "); // HRW
    OutputString(outputFile, "void** = "); // TEQ
    if (pHandle->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pHandle = {false, false, false, nullptr};
        if (pHandle->HasData() && pHandle->HasAddress())
            OutputScalarValueAscii(outputFile, pHandle->GetPointer(), vinfo_pHandle); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetMemoryWin32HandlePropertiesKHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    VkExternalMemoryHandleTypeFlagBits          handleType,
    uint64_t                                    handle,
    StructPointerDecoder<Decoded_VkMemoryWin32HandlePropertiesKHR>* pMemoryWin32HandleProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetMemoryWin32HandlePropertiesKHR(device, handleType, handle, pMemoryWin32HandleProperties)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkExternalMemoryHandleTypeFlagBits handleType
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "handleType:                     "); // HRW
    OutputString(outputFile, "VkExternalMemoryHandleTypeFlagBits = "); // TEQ
    OutputEnumVkExternalMemoryHandleTypeFlagBits(outputFile, handleType); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimalAscii(outputFile, handleType);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: void* handle
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "handle:                         "); // HRW
    OutputString(outputFile, "void* = "); // TEQ
    if ( !handle) // WWW
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, handle); // PWR
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkMemoryWin32HandlePropertiesKHR* pMemoryWin32HandleProperties
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pMemoryWin32HandleProperties:   "); // HRW
    OutputString(outputFile, "VkMemoryWin32HandlePropertiesKHR* = "); // TEQ
    if (pMemoryWin32HandleProperties->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pMemoryWin32HandleProperties->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pMemoryWin32HandleProperties->HasData() && pMemoryWin32HandleProperties->HasAddress())
            OutputStructureAscii(outputFile, *pMemoryWin32HandleProperties->GetMetaStructPointer(), indent+1, pMemoryWin32HandleProperties->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetMemoryFdKHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkMemoryGetFdInfoKHR>& pGetFdInfo,
    PointerDecoder<int>*                        pFd)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetMemoryFdKHR(device, pGetFdInfo, pFd)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkMemoryGetFdInfoKHR* pGetFdInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pGetFdInfo:                     "); // HRW
    OutputString(outputFile, "const VkMemoryGetFdInfoKHR* = "); // TEQ
    if (pGetFdInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pGetFdInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pGetFdInfo.HasData() && pGetFdInfo.HasAddress())
            OutputStructureAscii(outputFile, *pGetFdInfo.GetMetaStructPointer(), indent+1, pGetFdInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: int* pFd
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pFd:                            "); // HRW
    OutputString(outputFile, "int* = "); // TEQ
    if (pFd->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pFd = {false, false, false, nullptr};
        if (pFd->HasData() && pFd->HasAddress())
            OutputScalarValueAscii(outputFile, pFd->GetPointer(), vinfo_pFd); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetMemoryFdPropertiesKHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    VkExternalMemoryHandleTypeFlagBits          handleType,
    int                                         fd,
    StructPointerDecoder<Decoded_VkMemoryFdPropertiesKHR>* pMemoryFdProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetMemoryFdPropertiesKHR(device, handleType, fd, pMemoryFdProperties)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkExternalMemoryHandleTypeFlagBits handleType
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "handleType:                     "); // HRW
    OutputString(outputFile, "VkExternalMemoryHandleTypeFlagBits = "); // TEQ
    OutputEnumVkExternalMemoryHandleTypeFlagBits(outputFile, handleType); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimalAscii(outputFile, handleType);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: int fd
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "fd:                             "); // HRW
    OutputString(outputFile, "int = "); // TEQ
    OutputSignedDecimalAscii(outputFile, fd); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkMemoryFdPropertiesKHR* pMemoryFdProperties
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pMemoryFdProperties:            "); // HRW
    OutputString(outputFile, "VkMemoryFdPropertiesKHR* = "); // TEQ
    if (pMemoryFdProperties->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pMemoryFdProperties->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pMemoryFdProperties->HasData() && pMemoryFdProperties->HasAddress())
            OutputStructureAscii(outputFile, *pMemoryFdProperties->GetMetaStructPointer(), indent+1, pMemoryFdProperties->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceExternalSemaphoreInfo>& pExternalSemaphoreInfo,
    StructPointerDecoder<Decoded_VkExternalSemaphoreProperties>* pExternalSemaphoreProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceExternalSemaphorePropertiesKHR(physicalDevice, pExternalSemaphoreInfo, pExternalSemaphoreProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pExternalSemaphoreInfo:         "); // HRW
    OutputString(outputFile, "const VkPhysicalDeviceExternalSemaphoreInfo* = "); // TEQ
    if (pExternalSemaphoreInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pExternalSemaphoreInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pExternalSemaphoreInfo.HasData() && pExternalSemaphoreInfo.HasAddress())
            OutputStructureAscii(outputFile, *pExternalSemaphoreInfo.GetMetaStructPointer(), indent+1, pExternalSemaphoreInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkExternalSemaphoreProperties* pExternalSemaphoreProperties
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pExternalSemaphoreProperties:   "); // HRW
    OutputString(outputFile, "VkExternalSemaphoreProperties* = "); // TEQ
    if (pExternalSemaphoreProperties->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pExternalSemaphoreProperties->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pExternalSemaphoreProperties->HasData() && pExternalSemaphoreProperties->HasAddress())
            OutputStructureAscii(outputFile, *pExternalSemaphoreProperties->GetMetaStructPointer(), indent+1, pExternalSemaphoreProperties->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkImportSemaphoreWin32HandleKHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImportSemaphoreWin32HandleInfoKHR>& pImportSemaphoreWin32HandleInfo)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkImportSemaphoreWin32HandleKHR(device, pImportSemaphoreWin32HandleInfo)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImportSemaphoreWin32HandleInfoKHR* pImportSemaphoreWin32HandleInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pImportSemaphoreWin32HandleInfo: "); // HRW
    OutputString(outputFile, "const VkImportSemaphoreWin32HandleInfoKHR* = "); // TEQ
    if (pImportSemaphoreWin32HandleInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pImportSemaphoreWin32HandleInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pImportSemaphoreWin32HandleInfo.HasData() && pImportSemaphoreWin32HandleInfo.HasAddress())
            OutputStructureAscii(outputFile, *pImportSemaphoreWin32HandleInfo.GetMetaStructPointer(), indent+1, pImportSemaphoreWin32HandleInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetSemaphoreWin32HandleKHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSemaphoreGetWin32HandleInfoKHR>& pGetWin32HandleInfo,
    PointerDecoder<uint64_t, void*>*            pHandle)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetSemaphoreWin32HandleKHR(device, pGetWin32HandleInfo, pHandle)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSemaphoreGetWin32HandleInfoKHR* pGetWin32HandleInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pGetWin32HandleInfo:            "); // HRW
    OutputString(outputFile, "const VkSemaphoreGetWin32HandleInfoKHR* = "); // TEQ
    if (pGetWin32HandleInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pGetWin32HandleInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pGetWin32HandleInfo.HasData() && pGetWin32HandleInfo.HasAddress())
            OutputStructureAscii(outputFile, *pGetWin32HandleInfo.GetMetaStructPointer(), indent+1, pGetWin32HandleInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: void** pHandle
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pHandle:                        "); // HRW
    OutputString(outputFile, "void** = "); // TEQ
    if (pHandle->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pHandle = {false, false, false, nullptr};
        if (pHandle->HasData() && pHandle->HasAddress())
            OutputScalarValueAscii(outputFile, pHandle->GetPointer(), vinfo_pHandle); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkImportSemaphoreFdKHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImportSemaphoreFdInfoKHR>& pImportSemaphoreFdInfo)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkImportSemaphoreFdKHR(device, pImportSemaphoreFdInfo)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImportSemaphoreFdInfoKHR* pImportSemaphoreFdInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pImportSemaphoreFdInfo:         "); // HRW
    OutputString(outputFile, "const VkImportSemaphoreFdInfoKHR* = "); // TEQ
    if (pImportSemaphoreFdInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pImportSemaphoreFdInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pImportSemaphoreFdInfo.HasData() && pImportSemaphoreFdInfo.HasAddress())
            OutputStructureAscii(outputFile, *pImportSemaphoreFdInfo.GetMetaStructPointer(), indent+1, pImportSemaphoreFdInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetSemaphoreFdKHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSemaphoreGetFdInfoKHR>& pGetFdInfo,
    PointerDecoder<int>*                        pFd)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetSemaphoreFdKHR(device, pGetFdInfo, pFd)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSemaphoreGetFdInfoKHR* pGetFdInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pGetFdInfo:                     "); // HRW
    OutputString(outputFile, "const VkSemaphoreGetFdInfoKHR* = "); // TEQ
    if (pGetFdInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pGetFdInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pGetFdInfo.HasData() && pGetFdInfo.HasAddress())
            OutputStructureAscii(outputFile, *pGetFdInfo.GetMetaStructPointer(), indent+1, pGetFdInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: int* pFd
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pFd:                            "); // HRW
    OutputString(outputFile, "int* = "); // TEQ
    if (pFd->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pFd = {false, false, false, nullptr};
        if (pFd->HasData() && pFd->HasAddress())
            OutputScalarValueAscii(outputFile, pFd->GetPointer(), vinfo_pFd); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCmdPushDescriptorSetKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkPipelineBindPoint                         pipelineBindPoint,
    format::HandleId                            layout,
    uint32_t                                    set,
    uint32_t                                    descriptorWriteCount,
    const StructPointerDecoder<Decoded_VkWriteDescriptorSet>& pDescriptorWrites)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdPushDescriptorSetKHR(commandBuffer, pipelineBindPoint, layout, set, descriptorWriteCount, pDescriptorWrites)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineBindPoint pipelineBindPoint
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pipelineBindPoint:              "); // HRW
    OutputString(outputFile, "VkPipelineBindPoint = "); // TEQ
    OutputEnumVkPipelineBindPoint(outputFile, pipelineBindPoint); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimalAscii(outputFile, pipelineBindPoint);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineLayout layout
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "layout:                         "); // HRW
    OutputString(outputFile, "VkPipelineLayout = "); // TEQ
    OutputAddrAscii(outputFile, layout); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t set
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "set:                            "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, set); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t descriptorWriteCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "descriptorWriteCount:           "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, descriptorWriteCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkWriteDescriptorSet* pDescriptorWrites
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pDescriptorWrites:              "); // HRW
    OutputString(outputFile, "const VkWriteDescriptorSet* = "); // TEQ
    if (pDescriptorWrites.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pDescriptorWrites.GetAddress()); // WVS
        if (pDescriptorWrites.HasData() && pDescriptorWrites.HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkWriteDescriptorSet", pDescriptorWrites.GetMetaStructPointer(), "pDescriptorWrites", descriptorWriteCount, false, pDescriptorWrites.GetAddress(), sizeof(VkWriteDescriptorSet));  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateDescriptorUpdateTemplateKHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDescriptorUpdateTemplateCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkDescriptorUpdateTemplate>* pDescriptorUpdateTemplate)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreateDescriptorUpdateTemplateKHR(device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkDescriptorUpdateTemplateCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pCreateInfo.HasData() && pCreateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDescriptorUpdateTemplate* pDescriptorUpdateTemplate
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pDescriptorUpdateTemplate:      "); // HRW
    OutputString(outputFile, "VkDescriptorUpdateTemplate* = "); // TEQ
    if (pDescriptorUpdateTemplate->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pDescriptorUpdateTemplate = {true, false, false, nullptr};
        if (pDescriptorUpdateTemplate->HasData() && pDescriptorUpdateTemplate->HasAddress())
            OutputScalarValueAscii(outputFile, pDescriptorUpdateTemplate->GetPointer(), vinfo_pDescriptorUpdateTemplate); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyDescriptorUpdateTemplateKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            descriptorUpdateTemplate,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkDestroyDescriptorUpdateTemplateKHR(device, descriptorUpdateTemplate, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDescriptorUpdateTemplate descriptorUpdateTemplate
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "descriptorUpdateTemplate:       "); // HRW
    OutputString(outputFile, "VkDescriptorUpdateTemplate = "); // TEQ
    OutputAddrAscii(outputFile, descriptorUpdateTemplate); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateRenderPass2KHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkRenderPassCreateInfo2KHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkRenderPass>*         pRenderPass)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreateRenderPass2KHR(device, pCreateInfo, pAllocator, pRenderPass)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkRenderPassCreateInfo2KHR* pCreateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkRenderPassCreateInfo2KHR* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pCreateInfo.HasData() && pCreateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkRenderPass* pRenderPass
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pRenderPass:                    "); // HRW
    OutputString(outputFile, "VkRenderPass* = "); // TEQ
    if (pRenderPass->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pRenderPass = {true, false, false, nullptr};
        if (pRenderPass->HasData() && pRenderPass->HasAddress())
            OutputScalarValueAscii(outputFile, pRenderPass->GetPointer(), vinfo_pRenderPass); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdBeginRenderPass2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkRenderPassBeginInfo>& pRenderPassBegin,
    const StructPointerDecoder<Decoded_VkSubpassBeginInfoKHR>& pSubpassBeginInfo)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdBeginRenderPass2KHR(commandBuffer, pRenderPassBegin, pSubpassBeginInfo)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkRenderPassBeginInfo* pRenderPassBegin
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pRenderPassBegin:               "); // HRW
    OutputString(outputFile, "const VkRenderPassBeginInfo* = "); // TEQ
    if (pRenderPassBegin.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pRenderPassBegin.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pRenderPassBegin.HasData() && pRenderPassBegin.HasAddress())
            OutputStructureAscii(outputFile, *pRenderPassBegin.GetMetaStructPointer(), indent+1, pRenderPassBegin.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSubpassBeginInfoKHR* pSubpassBeginInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSubpassBeginInfo:              "); // HRW
    OutputString(outputFile, "const VkSubpassBeginInfoKHR* = "); // TEQ
    if (pSubpassBeginInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pSubpassBeginInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pSubpassBeginInfo.HasData() && pSubpassBeginInfo.HasAddress())
            OutputStructureAscii(outputFile, *pSubpassBeginInfo.GetMetaStructPointer(), indent+1, pSubpassBeginInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdNextSubpass2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkSubpassBeginInfoKHR>& pSubpassBeginInfo,
    const StructPointerDecoder<Decoded_VkSubpassEndInfoKHR>& pSubpassEndInfo)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdNextSubpass2KHR(commandBuffer, pSubpassBeginInfo, pSubpassEndInfo)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSubpassBeginInfoKHR* pSubpassBeginInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSubpassBeginInfo:              "); // HRW
    OutputString(outputFile, "const VkSubpassBeginInfoKHR* = "); // TEQ
    if (pSubpassBeginInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pSubpassBeginInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pSubpassBeginInfo.HasData() && pSubpassBeginInfo.HasAddress())
            OutputStructureAscii(outputFile, *pSubpassBeginInfo.GetMetaStructPointer(), indent+1, pSubpassBeginInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSubpassEndInfoKHR* pSubpassEndInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSubpassEndInfo:                "); // HRW
    OutputString(outputFile, "const VkSubpassEndInfoKHR* = "); // TEQ
    if (pSubpassEndInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pSubpassEndInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pSubpassEndInfo.HasData() && pSubpassEndInfo.HasAddress())
            OutputStructureAscii(outputFile, *pSubpassEndInfo.GetMetaStructPointer(), indent+1, pSubpassEndInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdEndRenderPass2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkSubpassEndInfoKHR>& pSubpassEndInfo)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdEndRenderPass2KHR(commandBuffer, pSubpassEndInfo)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSubpassEndInfoKHR* pSubpassEndInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSubpassEndInfo:                "); // HRW
    OutputString(outputFile, "const VkSubpassEndInfoKHR* = "); // TEQ
    if (pSubpassEndInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pSubpassEndInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pSubpassEndInfo.HasData() && pSubpassEndInfo.HasAddress())
            OutputStructureAscii(outputFile, *pSubpassEndInfo.GetMetaStructPointer(), indent+1, pSubpassEndInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetSwapchainStatusKHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            swapchain)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetSwapchainStatusKHR(device, swapchain)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSwapchainKHR swapchain
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "swapchain:                      "); // HRW
    OutputString(outputFile, "VkSwapchainKHR = "); // TEQ
    OutputAddrAscii(outputFile, swapchain); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceExternalFencePropertiesKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceExternalFenceInfo>& pExternalFenceInfo,
    StructPointerDecoder<Decoded_VkExternalFenceProperties>* pExternalFenceProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceExternalFencePropertiesKHR(physicalDevice, pExternalFenceInfo, pExternalFenceProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPhysicalDeviceExternalFenceInfo* pExternalFenceInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pExternalFenceInfo:             "); // HRW
    OutputString(outputFile, "const VkPhysicalDeviceExternalFenceInfo* = "); // TEQ
    if (pExternalFenceInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pExternalFenceInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pExternalFenceInfo.HasData() && pExternalFenceInfo.HasAddress())
            OutputStructureAscii(outputFile, *pExternalFenceInfo.GetMetaStructPointer(), indent+1, pExternalFenceInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkExternalFenceProperties* pExternalFenceProperties
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pExternalFenceProperties:       "); // HRW
    OutputString(outputFile, "VkExternalFenceProperties* = "); // TEQ
    if (pExternalFenceProperties->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pExternalFenceProperties->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pExternalFenceProperties->HasData() && pExternalFenceProperties->HasAddress())
            OutputStructureAscii(outputFile, *pExternalFenceProperties->GetMetaStructPointer(), indent+1, pExternalFenceProperties->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkImportFenceWin32HandleKHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImportFenceWin32HandleInfoKHR>& pImportFenceWin32HandleInfo)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkImportFenceWin32HandleKHR(device, pImportFenceWin32HandleInfo)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImportFenceWin32HandleInfoKHR* pImportFenceWin32HandleInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pImportFenceWin32HandleInfo:    "); // HRW
    OutputString(outputFile, "const VkImportFenceWin32HandleInfoKHR* = "); // TEQ
    if (pImportFenceWin32HandleInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pImportFenceWin32HandleInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pImportFenceWin32HandleInfo.HasData() && pImportFenceWin32HandleInfo.HasAddress())
            OutputStructureAscii(outputFile, *pImportFenceWin32HandleInfo.GetMetaStructPointer(), indent+1, pImportFenceWin32HandleInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetFenceWin32HandleKHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkFenceGetWin32HandleInfoKHR>& pGetWin32HandleInfo,
    PointerDecoder<uint64_t, void*>*            pHandle)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetFenceWin32HandleKHR(device, pGetWin32HandleInfo, pHandle)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkFenceGetWin32HandleInfoKHR* pGetWin32HandleInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pGetWin32HandleInfo:            "); // HRW
    OutputString(outputFile, "const VkFenceGetWin32HandleInfoKHR* = "); // TEQ
    if (pGetWin32HandleInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pGetWin32HandleInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pGetWin32HandleInfo.HasData() && pGetWin32HandleInfo.HasAddress())
            OutputStructureAscii(outputFile, *pGetWin32HandleInfo.GetMetaStructPointer(), indent+1, pGetWin32HandleInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: void** pHandle
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pHandle:                        "); // HRW
    OutputString(outputFile, "void** = "); // TEQ
    if (pHandle->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pHandle = {false, false, false, nullptr};
        if (pHandle->HasData() && pHandle->HasAddress())
            OutputScalarValueAscii(outputFile, pHandle->GetPointer(), vinfo_pHandle); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkImportFenceFdKHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImportFenceFdInfoKHR>& pImportFenceFdInfo)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkImportFenceFdKHR(device, pImportFenceFdInfo)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImportFenceFdInfoKHR* pImportFenceFdInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pImportFenceFdInfo:             "); // HRW
    OutputString(outputFile, "const VkImportFenceFdInfoKHR* = "); // TEQ
    if (pImportFenceFdInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pImportFenceFdInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pImportFenceFdInfo.HasData() && pImportFenceFdInfo.HasAddress())
            OutputStructureAscii(outputFile, *pImportFenceFdInfo.GetMetaStructPointer(), indent+1, pImportFenceFdInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetFenceFdKHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkFenceGetFdInfoKHR>& pGetFdInfo,
    PointerDecoder<int>*                        pFd)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetFenceFdKHR(device, pGetFdInfo, pFd)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkFenceGetFdInfoKHR* pGetFdInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pGetFdInfo:                     "); // HRW
    OutputString(outputFile, "const VkFenceGetFdInfoKHR* = "); // TEQ
    if (pGetFdInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pGetFdInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pGetFdInfo.HasData() && pGetFdInfo.HasAddress())
            OutputStructureAscii(outputFile, *pGetFdInfo.GetMetaStructPointer(), indent+1, pGetFdInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: int* pFd
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pFd:                            "); // HRW
    OutputString(outputFile, "int* = "); // TEQ
    if (pFd->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pFd = {false, false, false, nullptr};
        if (pFd->HasData() && pFd->HasAddress())
            OutputScalarValueAscii(outputFile, pFd->GetPointer(), vinfo_pFd); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSurfaceCapabilities2KHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceSurfaceInfo2KHR>& pSurfaceInfo,
    StructPointerDecoder<Decoded_VkSurfaceCapabilities2KHR>* pSurfaceCapabilities)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceSurfaceCapabilities2KHR(physicalDevice, pSurfaceInfo, pSurfaceCapabilities)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSurfaceInfo:                   "); // HRW
    OutputString(outputFile, "const VkPhysicalDeviceSurfaceInfo2KHR* = "); // TEQ
    if (pSurfaceInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pSurfaceInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pSurfaceInfo.HasData() && pSurfaceInfo.HasAddress())
            OutputStructureAscii(outputFile, *pSurfaceInfo.GetMetaStructPointer(), indent+1, pSurfaceInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceCapabilities2KHR* pSurfaceCapabilities
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSurfaceCapabilities:           "); // HRW
    OutputString(outputFile, "VkSurfaceCapabilities2KHR* = "); // TEQ
    if (pSurfaceCapabilities->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pSurfaceCapabilities->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pSurfaceCapabilities->HasData() && pSurfaceCapabilities->HasAddress())
            OutputStructureAscii(outputFile, *pSurfaceCapabilities->GetMetaStructPointer(), indent+1, pSurfaceCapabilities->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSurfaceFormats2KHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceSurfaceInfo2KHR>& pSurfaceInfo,
    PointerDecoder<uint32_t>*                   pSurfaceFormatCount,
    StructPointerDecoder<Decoded_VkSurfaceFormat2KHR>* pSurfaceFormats)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceSurfaceFormats2KHR(physicalDevice, pSurfaceInfo, pSurfaceFormatCount, pSurfaceFormats)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSurfaceInfo:                   "); // HRW
    OutputString(outputFile, "const VkPhysicalDeviceSurfaceInfo2KHR* = "); // TEQ
    if (pSurfaceInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pSurfaceInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pSurfaceInfo.HasData() && pSurfaceInfo.HasAddress())
            OutputStructureAscii(outputFile, *pSurfaceInfo.GetMetaStructPointer(), indent+1, pSurfaceInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pSurfaceFormatCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSurfaceFormatCount:            "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pSurfaceFormatCount->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pSurfaceFormatCount = {false, false, false, nullptr};
        if (pSurfaceFormatCount->HasData() && pSurfaceFormatCount->HasAddress())
            OutputScalarValueAscii(outputFile, pSurfaceFormatCount->GetPointer(), vinfo_pSurfaceFormatCount); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceFormat2KHR* pSurfaceFormats
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSurfaceFormats:                "); // HRW
    OutputString(outputFile, "VkSurfaceFormat2KHR* = "); // TEQ
    if (pSurfaceFormats->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pSurfaceFormats->GetAddress()); // WUS
        if (pSurfaceFormats->HasData() && pSurfaceFormats->HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkSurfaceFormat2KHR", pSurfaceFormats->GetMetaStructPointer(), "pSurfaceFormats", *pSurfaceFormatCount->GetPointer(), false, pSurfaceFormats->GetAddress(), sizeof(VkSurfaceFormat2KHR));  // CCN
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceDisplayProperties2KHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    PointerDecoder<uint32_t>*                   pPropertyCount,
    StructPointerDecoder<Decoded_VkDisplayProperties2KHR>* pProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceDisplayProperties2KHR(physicalDevice, pPropertyCount, pProperties)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pPropertyCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pPropertyCount:                 "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pPropertyCount->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pPropertyCount = {false, false, false, nullptr};
        if (pPropertyCount->HasData() && pPropertyCount->HasAddress())
            OutputScalarValueAscii(outputFile, pPropertyCount->GetPointer(), vinfo_pPropertyCount); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayProperties2KHR* pProperties
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pProperties:                    "); // HRW
    OutputString(outputFile, "VkDisplayProperties2KHR* = "); // TEQ
    if (pProperties->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pProperties->GetAddress()); // WUS
        if (pProperties->HasData() && pProperties->HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkDisplayProperties2KHR", pProperties->GetMetaStructPointer(), "pProperties", *pPropertyCount->GetPointer(), false, pProperties->GetAddress(), sizeof(VkDisplayProperties2KHR));  // CCN
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceDisplayPlaneProperties2KHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    PointerDecoder<uint32_t>*                   pPropertyCount,
    StructPointerDecoder<Decoded_VkDisplayPlaneProperties2KHR>* pProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceDisplayPlaneProperties2KHR(physicalDevice, pPropertyCount, pProperties)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pPropertyCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pPropertyCount:                 "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pPropertyCount->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pPropertyCount = {false, false, false, nullptr};
        if (pPropertyCount->HasData() && pPropertyCount->HasAddress())
            OutputScalarValueAscii(outputFile, pPropertyCount->GetPointer(), vinfo_pPropertyCount); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayPlaneProperties2KHR* pProperties
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pProperties:                    "); // HRW
    OutputString(outputFile, "VkDisplayPlaneProperties2KHR* = "); // TEQ
    if (pProperties->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pProperties->GetAddress()); // WUS
        if (pProperties->HasData() && pProperties->HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkDisplayPlaneProperties2KHR", pProperties->GetMetaStructPointer(), "pProperties", *pPropertyCount->GetPointer(), false, pProperties->GetAddress(), sizeof(VkDisplayPlaneProperties2KHR));  // CCN
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetDisplayModeProperties2KHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    format::HandleId                            display,
    PointerDecoder<uint32_t>*                   pPropertyCount,
    StructPointerDecoder<Decoded_VkDisplayModeProperties2KHR>* pProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetDisplayModeProperties2KHR(physicalDevice, display, pPropertyCount, pProperties)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayKHR display
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "display:                        "); // HRW
    OutputString(outputFile, "VkDisplayKHR = "); // TEQ
    OutputAddrAscii(outputFile, display); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pPropertyCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pPropertyCount:                 "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pPropertyCount->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pPropertyCount = {false, false, false, nullptr};
        if (pPropertyCount->HasData() && pPropertyCount->HasAddress())
            OutputScalarValueAscii(outputFile, pPropertyCount->GetPointer(), vinfo_pPropertyCount); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayModeProperties2KHR* pProperties
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pProperties:                    "); // HRW
    OutputString(outputFile, "VkDisplayModeProperties2KHR* = "); // TEQ
    if (pProperties->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pProperties->GetAddress()); // WUS
        if (pProperties->HasData() && pProperties->HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkDisplayModeProperties2KHR", pProperties->GetMetaStructPointer(), "pProperties", *pPropertyCount->GetPointer(), false, pProperties->GetAddress(), sizeof(VkDisplayModeProperties2KHR));  // CCN
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetDisplayPlaneCapabilities2KHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkDisplayPlaneInfo2KHR>& pDisplayPlaneInfo,
    StructPointerDecoder<Decoded_VkDisplayPlaneCapabilities2KHR>* pCapabilities)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetDisplayPlaneCapabilities2KHR(physicalDevice, pDisplayPlaneInfo, pCapabilities)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDisplayPlaneInfo2KHR* pDisplayPlaneInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pDisplayPlaneInfo:              "); // HRW
    OutputString(outputFile, "const VkDisplayPlaneInfo2KHR* = "); // TEQ
    if (pDisplayPlaneInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pDisplayPlaneInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pDisplayPlaneInfo.HasData() && pDisplayPlaneInfo.HasAddress())
            OutputStructureAscii(outputFile, *pDisplayPlaneInfo.GetMetaStructPointer(), indent+1, pDisplayPlaneInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayPlaneCapabilities2KHR* pCapabilities
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCapabilities:                  "); // HRW
    OutputString(outputFile, "VkDisplayPlaneCapabilities2KHR* = "); // TEQ
    if (pCapabilities->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCapabilities->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pCapabilities->HasData() && pCapabilities->HasAddress())
            OutputStructureAscii(outputFile, *pCapabilities->GetMetaStructPointer(), indent+1, pCapabilities->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetImageMemoryRequirements2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImageMemoryRequirementsInfo2>& pInfo,
    StructPointerDecoder<Decoded_VkMemoryRequirements2>* pMemoryRequirements)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetImageMemoryRequirements2KHR(device, pInfo, pMemoryRequirements)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImageMemoryRequirementsInfo2* pInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pInfo:                          "); // HRW
    OutputString(outputFile, "const VkImageMemoryRequirementsInfo2* = "); // TEQ
    if (pInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pInfo.HasData() && pInfo.HasAddress())
            OutputStructureAscii(outputFile, *pInfo.GetMetaStructPointer(), indent+1, pInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkMemoryRequirements2* pMemoryRequirements
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pMemoryRequirements:            "); // HRW
    OutputString(outputFile, "VkMemoryRequirements2* = "); // TEQ
    if (pMemoryRequirements->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pMemoryRequirements->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pMemoryRequirements->HasData() && pMemoryRequirements->HasAddress())
            OutputStructureAscii(outputFile, *pMemoryRequirements->GetMetaStructPointer(), indent+1, pMemoryRequirements->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetBufferMemoryRequirements2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkBufferMemoryRequirementsInfo2>& pInfo,
    StructPointerDecoder<Decoded_VkMemoryRequirements2>* pMemoryRequirements)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetBufferMemoryRequirements2KHR(device, pInfo, pMemoryRequirements)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBufferMemoryRequirementsInfo2* pInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pInfo:                          "); // HRW
    OutputString(outputFile, "const VkBufferMemoryRequirementsInfo2* = "); // TEQ
    if (pInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pInfo.HasData() && pInfo.HasAddress())
            OutputStructureAscii(outputFile, *pInfo.GetMetaStructPointer(), indent+1, pInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkMemoryRequirements2* pMemoryRequirements
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pMemoryRequirements:            "); // HRW
    OutputString(outputFile, "VkMemoryRequirements2* = "); // TEQ
    if (pMemoryRequirements->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pMemoryRequirements->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pMemoryRequirements->HasData() && pMemoryRequirements->HasAddress())
            OutputStructureAscii(outputFile, *pMemoryRequirements->GetMetaStructPointer(), indent+1, pMemoryRequirements->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetImageSparseMemoryRequirements2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImageSparseMemoryRequirementsInfo2>& pInfo,
    PointerDecoder<uint32_t>*                   pSparseMemoryRequirementCount,
    StructPointerDecoder<Decoded_VkSparseImageMemoryRequirements2>* pSparseMemoryRequirements)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetImageSparseMemoryRequirements2KHR(device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImageSparseMemoryRequirementsInfo2* pInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pInfo:                          "); // HRW
    OutputString(outputFile, "const VkImageSparseMemoryRequirementsInfo2* = "); // TEQ
    if (pInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pInfo.HasData() && pInfo.HasAddress())
            OutputStructureAscii(outputFile, *pInfo.GetMetaStructPointer(), indent+1, pInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pSparseMemoryRequirementCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSparseMemoryRequirementCount:  "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pSparseMemoryRequirementCount->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pSparseMemoryRequirementCount = {false, false, false, nullptr};
        if (pSparseMemoryRequirementCount->HasData() && pSparseMemoryRequirementCount->HasAddress())
            OutputScalarValueAscii(outputFile, pSparseMemoryRequirementCount->GetPointer(), vinfo_pSparseMemoryRequirementCount); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSparseImageMemoryRequirements2* pSparseMemoryRequirements
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSparseMemoryRequirements:      "); // HRW
    OutputString(outputFile, "VkSparseImageMemoryRequirements2* = "); // TEQ
    if (pSparseMemoryRequirements->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pSparseMemoryRequirements->GetAddress()); // WUS
        if (pSparseMemoryRequirements->HasData() && pSparseMemoryRequirements->HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkSparseImageMemoryRequirements2", pSparseMemoryRequirements->GetMetaStructPointer(), "pSparseMemoryRequirements", *pSparseMemoryRequirementCount->GetPointer(), false, pSparseMemoryRequirements->GetAddress(), sizeof(VkSparseImageMemoryRequirements2));  // CCN
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateSamplerYcbcrConversionKHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSamplerYcbcrConversionCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkSamplerYcbcrConversion>* pYcbcrConversion)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreateSamplerYcbcrConversionKHR(device, pCreateInfo, pAllocator, pYcbcrConversion)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSamplerYcbcrConversionCreateInfo* pCreateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkSamplerYcbcrConversionCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pCreateInfo.HasData() && pCreateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSamplerYcbcrConversion* pYcbcrConversion
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pYcbcrConversion:               "); // HRW
    OutputString(outputFile, "VkSamplerYcbcrConversion* = "); // TEQ
    if (pYcbcrConversion->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pYcbcrConversion = {true, false, false, nullptr};
        if (pYcbcrConversion->HasData() && pYcbcrConversion->HasAddress())
            OutputScalarValueAscii(outputFile, pYcbcrConversion->GetPointer(), vinfo_pYcbcrConversion); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroySamplerYcbcrConversionKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            ycbcrConversion,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkDestroySamplerYcbcrConversionKHR(device, ycbcrConversion, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSamplerYcbcrConversion ycbcrConversion
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "ycbcrConversion:                "); // HRW
    OutputString(outputFile, "VkSamplerYcbcrConversion = "); // TEQ
    OutputAddrAscii(outputFile, ycbcrConversion); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkBindBufferMemory2KHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    uint32_t                                    bindInfoCount,
    const StructPointerDecoder<Decoded_VkBindBufferMemoryInfo>& pBindInfos)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkBindBufferMemory2KHR(device, bindInfoCount, pBindInfos)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t bindInfoCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "bindInfoCount:                  "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, bindInfoCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBindBufferMemoryInfo* pBindInfos
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pBindInfos:                     "); // HRW
    OutputString(outputFile, "const VkBindBufferMemoryInfo* = "); // TEQ
    if (pBindInfos.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pBindInfos.GetAddress()); // WVS
        if (pBindInfos.HasData() && pBindInfos.HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkBindBufferMemoryInfo", pBindInfos.GetMetaStructPointer(), "pBindInfos", bindInfoCount, false, pBindInfos.GetAddress(), sizeof(VkBindBufferMemoryInfo));  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkBindImageMemory2KHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    uint32_t                                    bindInfoCount,
    const StructPointerDecoder<Decoded_VkBindImageMemoryInfo>& pBindInfos)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkBindImageMemory2KHR(device, bindInfoCount, pBindInfos)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t bindInfoCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "bindInfoCount:                  "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, bindInfoCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBindImageMemoryInfo* pBindInfos
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pBindInfos:                     "); // HRW
    OutputString(outputFile, "const VkBindImageMemoryInfo* = "); // TEQ
    if (pBindInfos.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pBindInfos.GetAddress()); // WVS
        if (pBindInfos.HasData() && pBindInfos.HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkBindImageMemoryInfo", pBindInfos.GetMetaStructPointer(), "pBindInfos", bindInfoCount, false, pBindInfos.GetAddress(), sizeof(VkBindImageMemoryInfo));  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetDescriptorSetLayoutSupportKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDescriptorSetLayoutCreateInfo>& pCreateInfo,
    StructPointerDecoder<Decoded_VkDescriptorSetLayoutSupport>* pSupport)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetDescriptorSetLayoutSupportKHR(device, pCreateInfo, pSupport)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDescriptorSetLayoutCreateInfo* pCreateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkDescriptorSetLayoutCreateInfo* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pCreateInfo.HasData() && pCreateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDescriptorSetLayoutSupport* pSupport
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSupport:                       "); // HRW
    OutputString(outputFile, "VkDescriptorSetLayoutSupport* = "); // TEQ
    if (pSupport->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pSupport->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pSupport->HasData() && pSupport->HasAddress())
            OutputStructureAscii(outputFile, *pSupport->GetMetaStructPointer(), indent+1, pSupport->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCmdDrawIndirectCountKHR(
    const ApiCallInfo&                          call_info,
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
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdDrawIndirectCountKHR(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer buffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "buffer:                         "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    OutputAddrAscii(outputFile, buffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize offset
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "offset:                         "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    OutputSignedDecimalAscii(outputFile, offset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer countBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "countBuffer:                    "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    OutputAddrAscii(outputFile, countBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize countBufferOffset
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "countBufferOffset:              "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    OutputSignedDecimalAscii(outputFile, countBufferOffset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t maxDrawCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "maxDrawCount:                   "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, maxDrawCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t stride
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "stride:                         "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, stride); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdDrawIndexedIndirectCountKHR(
    const ApiCallInfo&                          call_info,
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
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdDrawIndexedIndirectCountKHR(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer buffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "buffer:                         "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    OutputAddrAscii(outputFile, buffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize offset
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "offset:                         "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    OutputSignedDecimalAscii(outputFile, offset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer countBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "countBuffer:                    "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    OutputAddrAscii(outputFile, countBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize countBufferOffset
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "countBufferOffset:              "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    OutputSignedDecimalAscii(outputFile, countBufferOffset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t maxDrawCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "maxDrawCount:                   "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, maxDrawCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t stride
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "stride:                         "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, stride); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetSemaphoreCounterValueKHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            semaphore,
    PointerDecoder<uint64_t>*                   pValue)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetSemaphoreCounterValueKHR(device, semaphore, pValue)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSemaphore semaphore
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "semaphore:                      "); // HRW
    OutputString(outputFile, "VkSemaphore = "); // TEQ
    OutputAddrAscii(outputFile, semaphore); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint64_t* pValue
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pValue:                         "); // HRW
    OutputString(outputFile, "uint64_t* = "); // TEQ
    if (pValue->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pValue = {false, false, false, nullptr};
        if (pValue->HasData() && pValue->HasAddress())
            OutputScalarValueAscii(outputFile, pValue->GetPointer(), vinfo_pValue); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkWaitSemaphoresKHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSemaphoreWaitInfoKHR>& pWaitInfo,
    uint64_t                                    timeout)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkWaitSemaphoresKHR(device, pWaitInfo, timeout)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSemaphoreWaitInfoKHR* pWaitInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pWaitInfo:                      "); // HRW
    OutputString(outputFile, "const VkSemaphoreWaitInfoKHR* = "); // TEQ
    if (pWaitInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pWaitInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pWaitInfo.HasData() && pWaitInfo.HasAddress())
            OutputStructureAscii(outputFile, *pWaitInfo.GetMetaStructPointer(), indent+1, pWaitInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint64_t timeout
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "timeout:                        "); // HRW
    OutputString(outputFile, "uint64_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, timeout); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkSignalSemaphoreKHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSemaphoreSignalInfoKHR>& pSignalInfo)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkSignalSemaphoreKHR(device, pSignalInfo)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSemaphoreSignalInfoKHR* pSignalInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSignalInfo:                    "); // HRW
    OutputString(outputFile, "const VkSemaphoreSignalInfoKHR* = "); // TEQ
    if (pSignalInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pSignalInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pSignalInfo.HasData() && pSignalInfo.HasAddress())
            OutputStructureAscii(outputFile, *pSignalInfo.GetMetaStructPointer(), indent+1, pSignalInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetPipelineExecutablePropertiesKHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkPipelineInfoKHR>& pPipelineInfo,
    PointerDecoder<uint32_t>*                   pExecutableCount,
    StructPointerDecoder<Decoded_VkPipelineExecutablePropertiesKHR>* pProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPipelineExecutablePropertiesKHR(device, pPipelineInfo, pExecutableCount, pProperties)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPipelineInfoKHR* pPipelineInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pPipelineInfo:                  "); // HRW
    OutputString(outputFile, "const VkPipelineInfoKHR* = "); // TEQ
    if (pPipelineInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pPipelineInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pPipelineInfo.HasData() && pPipelineInfo.HasAddress())
            OutputStructureAscii(outputFile, *pPipelineInfo.GetMetaStructPointer(), indent+1, pPipelineInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pExecutableCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pExecutableCount:               "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pExecutableCount->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pExecutableCount = {false, false, false, nullptr};
        if (pExecutableCount->HasData() && pExecutableCount->HasAddress())
            OutputScalarValueAscii(outputFile, pExecutableCount->GetPointer(), vinfo_pExecutableCount); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineExecutablePropertiesKHR* pProperties
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pProperties:                    "); // HRW
    OutputString(outputFile, "VkPipelineExecutablePropertiesKHR* = "); // TEQ
    if (pProperties->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pProperties->GetAddress()); // WUS
        if (pProperties->HasData() && pProperties->HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkPipelineExecutablePropertiesKHR", pProperties->GetMetaStructPointer(), "pProperties", *pExecutableCount->GetPointer(), false, pProperties->GetAddress(), sizeof(VkPipelineExecutablePropertiesKHR));  // CCN
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPipelineExecutableStatisticsKHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkPipelineExecutableInfoKHR>& pExecutableInfo,
    PointerDecoder<uint32_t>*                   pStatisticCount,
    StructPointerDecoder<Decoded_VkPipelineExecutableStatisticKHR>* pStatistics)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPipelineExecutableStatisticsKHR(device, pExecutableInfo, pStatisticCount, pStatistics)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPipelineExecutableInfoKHR* pExecutableInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pExecutableInfo:                "); // HRW
    OutputString(outputFile, "const VkPipelineExecutableInfoKHR* = "); // TEQ
    if (pExecutableInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pExecutableInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pExecutableInfo.HasData() && pExecutableInfo.HasAddress())
            OutputStructureAscii(outputFile, *pExecutableInfo.GetMetaStructPointer(), indent+1, pExecutableInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pStatisticCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pStatisticCount:                "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pStatisticCount->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pStatisticCount = {false, false, false, nullptr};
        if (pStatisticCount->HasData() && pStatisticCount->HasAddress())
            OutputScalarValueAscii(outputFile, pStatisticCount->GetPointer(), vinfo_pStatisticCount); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineExecutableStatisticKHR* pStatistics
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pStatistics:                    "); // HRW
    OutputString(outputFile, "VkPipelineExecutableStatisticKHR* = "); // TEQ
    if (pStatistics->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pStatistics->GetAddress()); // WUS
        if (pStatistics->HasData() && pStatistics->HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkPipelineExecutableStatisticKHR", pStatistics->GetMetaStructPointer(), "pStatistics", *pStatisticCount->GetPointer(), false, pStatistics->GetAddress(), sizeof(VkPipelineExecutableStatisticKHR));  // CCN
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPipelineExecutableInternalRepresentationsKHR(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkPipelineExecutableInfoKHR>& pExecutableInfo,
    PointerDecoder<uint32_t>*                   pInternalRepresentationCount,
    StructPointerDecoder<Decoded_VkPipelineExecutableInternalRepresentationKHR>* pInternalRepresentations)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPipelineExecutableInternalRepresentationsKHR(device, pExecutableInfo, pInternalRepresentationCount, pInternalRepresentations)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPipelineExecutableInfoKHR* pExecutableInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pExecutableInfo:                "); // HRW
    OutputString(outputFile, "const VkPipelineExecutableInfoKHR* = "); // TEQ
    if (pExecutableInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pExecutableInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pExecutableInfo.HasData() && pExecutableInfo.HasAddress())
            OutputStructureAscii(outputFile, *pExecutableInfo.GetMetaStructPointer(), indent+1, pExecutableInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pInternalRepresentationCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pInternalRepresentationCount:   "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pInternalRepresentationCount->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pInternalRepresentationCount = {false, false, false, nullptr};
        if (pInternalRepresentationCount->HasData() && pInternalRepresentationCount->HasAddress())
            OutputScalarValueAscii(outputFile, pInternalRepresentationCount->GetPointer(), vinfo_pInternalRepresentationCount); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineExecutableInternalRepresentationKHR* pInternalRepresentations
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pInternalRepresentations:       "); // HRW
    OutputString(outputFile, "VkPipelineExecutableInternalRepresentationKHR* = "); // TEQ
    if (pInternalRepresentations->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pInternalRepresentations->GetAddress()); // WUS
        if (pInternalRepresentations->HasData() && pInternalRepresentations->HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkPipelineExecutableInternalRepresentationKHR", pInternalRepresentations->GetMetaStructPointer(), "pInternalRepresentations", *pInternalRepresentationCount->GetPointer(), false, pInternalRepresentations->GetAddress(), sizeof(VkPipelineExecutableInternalRepresentationKHR));  // CCN
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateDebugReportCallbackEXT(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkDebugReportCallbackCreateInfoEXT>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkDebugReportCallbackEXT>* pCallback)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreateDebugReportCallbackEXT(instance, pCreateInfo, pAllocator, pCallback)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "instance:                       "); // HRW
    OutputString(outputFile, "VkInstance = "); // TEQ
    OutputAddrAscii(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDebugReportCallbackCreateInfoEXT* pCreateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkDebugReportCallbackCreateInfoEXT* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pCreateInfo.HasData() && pCreateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDebugReportCallbackEXT* pCallback
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCallback:                      "); // HRW
    OutputString(outputFile, "VkDebugReportCallbackEXT* = "); // TEQ
    if (pCallback->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pCallback = {true, false, false, nullptr};
        if (pCallback->HasData() && pCallback->HasAddress())
            OutputScalarValueAscii(outputFile, pCallback->GetPointer(), vinfo_pCallback); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyDebugReportCallbackEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            instance,
    format::HandleId                            callback,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkDestroyDebugReportCallbackEXT(instance, callback, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkInstance instance
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "instance:                       "); // HRW
    OutputString(outputFile, "VkInstance = "); // TEQ
    OutputAddrAscii(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDebugReportCallbackEXT callback
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "callback:                       "); // HRW
    OutputString(outputFile, "VkDebugReportCallbackEXT = "); // TEQ
    OutputAddrAscii(outputFile, callback); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDebugReportMessageEXT(
    const ApiCallInfo&                          call_info,
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
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkDebugReportMessageEXT(instance, flags, objectType, object, location, messageCode, pLayerPrefix, pMessage)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkInstance instance
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "instance:                       "); // HRW
    OutputString(outputFile, "VkInstance = "); // TEQ
    OutputAddrAscii(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDebugReportFlagsEXT flags
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "flags:                          "); // HRW
    OutputString(outputFile, "VkDebugReportFlagsEXT = "); // TEQ
    OutputFlagsAscii(outputFile, flags, OutputEnumVkDebugReportFlagBitsEXT); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDebugReportObjectTypeEXT objectType
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "objectType:                     "); // HRW
    OutputString(outputFile, "VkDebugReportObjectTypeEXT = "); // TEQ
    OutputEnumVkDebugReportObjectTypeEXT(outputFile, objectType); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimalAscii(outputFile, objectType);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint64_t object
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "object:                         "); // HRW
    OutputString(outputFile, "uint64_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, object); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: size_t location
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "location:                       "); // HRW
    OutputString(outputFile, "size_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, location); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: int32_t messageCode
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "messageCode:                    "); // HRW
    OutputString(outputFile, "int32_t = "); // TEQ
    OutputSignedDecimalAscii(outputFile, messageCode); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: const char* pLayerPrefix
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pLayerPrefix:                   "); // HRW
    OutputString(outputFile, "const char* = "); // TEQ
    StringToQuotedString(outputFile, pLayerPrefix.GetPointer()); // TGH
    OutputString(outputFile, "\n"); // HHS

    // func arg: const char* pMessage
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pMessage:                       "); // HRW
    OutputString(outputFile, "const char* = "); // TEQ
    StringToQuotedString(outputFile, pMessage.GetPointer()); // TGH
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkDebugMarkerSetObjectTagEXT(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDebugMarkerObjectTagInfoEXT>& pTagInfo)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkDebugMarkerSetObjectTagEXT(device, pTagInfo)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDebugMarkerObjectTagInfoEXT* pTagInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pTagInfo:                       "); // HRW
    OutputString(outputFile, "const VkDebugMarkerObjectTagInfoEXT* = "); // TEQ
    if (pTagInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pTagInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pTagInfo.HasData() && pTagInfo.HasAddress())
            OutputStructureAscii(outputFile, *pTagInfo.GetMetaStructPointer(), indent+1, pTagInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDebugMarkerSetObjectNameEXT(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDebugMarkerObjectNameInfoEXT>& pNameInfo)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkDebugMarkerSetObjectNameEXT(device, pNameInfo)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDebugMarkerObjectNameInfoEXT* pNameInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pNameInfo:                      "); // HRW
    OutputString(outputFile, "const VkDebugMarkerObjectNameInfoEXT* = "); // TEQ
    if (pNameInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pNameInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pNameInfo.HasData() && pNameInfo.HasAddress())
            OutputStructureAscii(outputFile, *pNameInfo.GetMetaStructPointer(), indent+1, pNameInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdDebugMarkerBeginEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkDebugMarkerMarkerInfoEXT>& pMarkerInfo)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdDebugMarkerBeginEXT(commandBuffer, pMarkerInfo)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDebugMarkerMarkerInfoEXT* pMarkerInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pMarkerInfo:                    "); // HRW
    OutputString(outputFile, "const VkDebugMarkerMarkerInfoEXT* = "); // TEQ
    if (pMarkerInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pMarkerInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pMarkerInfo.HasData() && pMarkerInfo.HasAddress())
            OutputStructureAscii(outputFile, *pMarkerInfo.GetMetaStructPointer(), indent+1, pMarkerInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdDebugMarkerEndEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdDebugMarkerEndEXT(commandBuffer)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdDebugMarkerInsertEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkDebugMarkerMarkerInfoEXT>& pMarkerInfo)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdDebugMarkerInsertEXT(commandBuffer, pMarkerInfo)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDebugMarkerMarkerInfoEXT* pMarkerInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pMarkerInfo:                    "); // HRW
    OutputString(outputFile, "const VkDebugMarkerMarkerInfoEXT* = "); // TEQ
    if (pMarkerInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pMarkerInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pMarkerInfo.HasData() && pMarkerInfo.HasAddress())
            OutputStructureAscii(outputFile, *pMarkerInfo.GetMetaStructPointer(), indent+1, pMarkerInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCmdBindTransformFeedbackBuffersEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    firstBinding,
    uint32_t                                    bindingCount,
    const HandlePointerDecoder<VkBuffer>&       pBuffers,
    const PointerDecoder<VkDeviceSize>&         pOffsets,
    const PointerDecoder<VkDeviceSize>&         pSizes)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdBindTransformFeedbackBuffersEXT(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets, pSizes)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstBinding
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "firstBinding:                   "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, firstBinding); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t bindingCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "bindingCount:                   "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, bindingCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBuffer* pBuffers
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pBuffers:                       "); // HRW
    OutputString(outputFile, "const VkBuffer* = "); // TEQ
    if (pBuffers.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pBuffers.GetAddress()); // PBZ
        OutputScalarValueStructInfo vinfo_pBuffers = {true, false, false, nullptr};
        OutputArrayAscii(outputFile, indent, "const VkBuffer*", &pBuffers, "pBuffers", bindingCount, vinfo_pBuffers); // AUB
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDeviceSize* pOffsets
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pOffsets:                       "); // HRW
    OutputString(outputFile, "const VkDeviceSize* = "); // TEQ
    if (pOffsets.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pOffsets.GetAddress()); // PBZ
        OutputScalarValueStructInfo vinfo_pOffsets = {false, false, false, nullptr};
        OutputArrayAscii(outputFile, indent, "const VkDeviceSize*", &pOffsets, "pOffsets", bindingCount, vinfo_pOffsets); // AUB
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDeviceSize* pSizes
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSizes:                         "); // HRW
    OutputString(outputFile, "const VkDeviceSize* = "); // TEQ
    if (pSizes.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pSizes.GetAddress()); // PBZ
        OutputScalarValueStructInfo vinfo_pSizes = {false, false, false, nullptr};
        OutputArrayAscii(outputFile, indent, "const VkDeviceSize*", &pSizes, "pSizes", bindingCount, vinfo_pSizes); // AUB
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdBeginTransformFeedbackEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    firstCounterBuffer,
    uint32_t                                    counterBufferCount,
    const HandlePointerDecoder<VkBuffer>&       pCounterBuffers,
    const PointerDecoder<VkDeviceSize>&         pCounterBufferOffsets)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdBeginTransformFeedbackEXT(commandBuffer, firstCounterBuffer, counterBufferCount, pCounterBuffers, pCounterBufferOffsets)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstCounterBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "firstCounterBuffer:             "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, firstCounterBuffer); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t counterBufferCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "counterBufferCount:             "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, counterBufferCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBuffer* pCounterBuffers
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCounterBuffers:                "); // HRW
    OutputString(outputFile, "const VkBuffer* = "); // TEQ
    if (pCounterBuffers.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCounterBuffers.GetAddress()); // PBZ
        OutputScalarValueStructInfo vinfo_pCounterBuffers = {true, false, false, nullptr};
        OutputArrayAscii(outputFile, indent, "const VkBuffer*", &pCounterBuffers, "pCounterBuffers", counterBufferCount, vinfo_pCounterBuffers); // AUB
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDeviceSize* pCounterBufferOffsets
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCounterBufferOffsets:          "); // HRW
    OutputString(outputFile, "const VkDeviceSize* = "); // TEQ
    if (pCounterBufferOffsets.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCounterBufferOffsets.GetAddress()); // PBZ
        OutputScalarValueStructInfo vinfo_pCounterBufferOffsets = {false, false, false, nullptr};
        OutputArrayAscii(outputFile, indent, "const VkDeviceSize*", &pCounterBufferOffsets, "pCounterBufferOffsets", counterBufferCount, vinfo_pCounterBufferOffsets); // AUB
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdEndTransformFeedbackEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    firstCounterBuffer,
    uint32_t                                    counterBufferCount,
    const HandlePointerDecoder<VkBuffer>&       pCounterBuffers,
    const PointerDecoder<VkDeviceSize>&         pCounterBufferOffsets)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdEndTransformFeedbackEXT(commandBuffer, firstCounterBuffer, counterBufferCount, pCounterBuffers, pCounterBufferOffsets)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstCounterBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "firstCounterBuffer:             "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, firstCounterBuffer); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t counterBufferCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "counterBufferCount:             "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, counterBufferCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBuffer* pCounterBuffers
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCounterBuffers:                "); // HRW
    OutputString(outputFile, "const VkBuffer* = "); // TEQ
    if (pCounterBuffers.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCounterBuffers.GetAddress()); // PBZ
        OutputScalarValueStructInfo vinfo_pCounterBuffers = {true, false, false, nullptr};
        OutputArrayAscii(outputFile, indent, "const VkBuffer*", &pCounterBuffers, "pCounterBuffers", counterBufferCount, vinfo_pCounterBuffers); // AUB
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDeviceSize* pCounterBufferOffsets
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCounterBufferOffsets:          "); // HRW
    OutputString(outputFile, "const VkDeviceSize* = "); // TEQ
    if (pCounterBufferOffsets.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCounterBufferOffsets.GetAddress()); // PBZ
        OutputScalarValueStructInfo vinfo_pCounterBufferOffsets = {false, false, false, nullptr};
        OutputArrayAscii(outputFile, indent, "const VkDeviceSize*", &pCounterBufferOffsets, "pCounterBufferOffsets", counterBufferCount, vinfo_pCounterBufferOffsets); // AUB
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdBeginQueryIndexedEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            queryPool,
    uint32_t                                    query,
    VkQueryControlFlags                         flags,
    uint32_t                                    index)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdBeginQueryIndexedEXT(commandBuffer, queryPool, query, flags, index)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryPool queryPool
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "queryPool:                      "); // HRW
    OutputString(outputFile, "VkQueryPool = "); // TEQ
    OutputAddrAscii(outputFile, queryPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t query
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "query:                          "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, query); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryControlFlags flags
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "flags:                          "); // HRW
    OutputString(outputFile, "VkQueryControlFlags = "); // TEQ
    OutputFlagsAscii(outputFile, flags, OutputEnumVkQueryControlFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t index
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "index:                          "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, index); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdEndQueryIndexedEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            queryPool,
    uint32_t                                    query,
    uint32_t                                    index)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdEndQueryIndexedEXT(commandBuffer, queryPool, query, index)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryPool queryPool
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "queryPool:                      "); // HRW
    OutputString(outputFile, "VkQueryPool = "); // TEQ
    OutputAddrAscii(outputFile, queryPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t query
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "query:                          "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, query); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t index
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "index:                          "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, index); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdDrawIndirectByteCountEXT(
    const ApiCallInfo&                          call_info,
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
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdDrawIndirectByteCountEXT(commandBuffer, instanceCount, firstInstance, counterBuffer, counterBufferOffset, counterOffset, vertexStride)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t instanceCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "instanceCount:                  "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, instanceCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstInstance
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "firstInstance:                  "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, firstInstance); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer counterBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "counterBuffer:                  "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    OutputAddrAscii(outputFile, counterBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize counterBufferOffset
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "counterBufferOffset:            "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    OutputSignedDecimalAscii(outputFile, counterBufferOffset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t counterOffset
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "counterOffset:                  "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, counterOffset); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t vertexStride
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "vertexStride:                   "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, vertexStride); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetImageViewHandleNVX(
    uint32_t                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImageViewHandleInfoNVX>& pInfo)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetImageViewHandleNVX(device, pInfo)");
    fprintf(outputFile, " returns %u:\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImageViewHandleInfoNVX* pInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pInfo:                          "); // HRW
    OutputString(outputFile, "const VkImageViewHandleInfoNVX* = "); // TEQ
    if (pInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pInfo.HasData() && pInfo.HasAddress())
            OutputStructureAscii(outputFile, *pInfo.GetMetaStructPointer(), indent+1, pInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCmdDrawIndirectCountAMD(
    const ApiCallInfo&                          call_info,
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
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdDrawIndirectCountAMD(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer buffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "buffer:                         "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    OutputAddrAscii(outputFile, buffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize offset
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "offset:                         "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    OutputSignedDecimalAscii(outputFile, offset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer countBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "countBuffer:                    "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    OutputAddrAscii(outputFile, countBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize countBufferOffset
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "countBufferOffset:              "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    OutputSignedDecimalAscii(outputFile, countBufferOffset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t maxDrawCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "maxDrawCount:                   "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, maxDrawCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t stride
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "stride:                         "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, stride); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdDrawIndexedIndirectCountAMD(
    const ApiCallInfo&                          call_info,
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
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdDrawIndexedIndirectCountAMD(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer buffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "buffer:                         "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    OutputAddrAscii(outputFile, buffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize offset
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "offset:                         "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    OutputSignedDecimalAscii(outputFile, offset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer countBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "countBuffer:                    "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    OutputAddrAscii(outputFile, countBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize countBufferOffset
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "countBufferOffset:              "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    OutputSignedDecimalAscii(outputFile, countBufferOffset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t maxDrawCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "maxDrawCount:                   "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, maxDrawCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t stride
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "stride:                         "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, stride); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetShaderInfoAMD(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            pipeline,
    VkShaderStageFlagBits                       shaderStage,
    VkShaderInfoTypeAMD                         infoType,
    PointerDecoder<size_t>*                     pInfoSize,
    PointerDecoder<uint8_t>*                    pInfo)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetShaderInfoAMD(device, pipeline, shaderStage, infoType, pInfoSize, pInfo)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipeline pipeline
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pipeline:                       "); // HRW
    OutputString(outputFile, "VkPipeline = "); // TEQ
    OutputAddrAscii(outputFile, pipeline); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkShaderStageFlagBits shaderStage
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "shaderStage:                    "); // HRW
    OutputString(outputFile, "VkShaderStageFlagBits = "); // TEQ
    OutputEnumVkShaderStageFlagBits(outputFile, shaderStage); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimalAscii(outputFile, shaderStage);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkShaderInfoTypeAMD infoType
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "infoType:                       "); // HRW
    OutputString(outputFile, "VkShaderInfoTypeAMD = "); // TEQ
    OutputEnumVkShaderInfoTypeAMD(outputFile, infoType); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimalAscii(outputFile, infoType);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: size_t* pInfoSize
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pInfoSize:                      "); // HRW
    OutputString(outputFile, "size_t* = "); // TEQ
    if (pInfoSize->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pInfoSize = {false, false, false, nullptr};
        if (pInfoSize->HasData() && pInfoSize->HasAddress())
            OutputScalarValueAscii(outputFile, pInfoSize->GetPointer(), vinfo_pInfoSize); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: void* pInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pInfo:                          "); // HRW
    OutputString(outputFile, "void* = "); // TEQ
    if (pInfo->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pInfo->GetAddress()); // AHW
        OutputScalarValueStructInfo vinfo_pInfo = {false, false, false, nullptr};
        OutputArrayAscii(outputFile, indent, "void*", pInfo, "pInfo", *pInfoSize->GetPointer(), vinfo_pInfo); // PRC
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateStreamDescriptorSurfaceGGP(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkStreamDescriptorSurfaceCreateInfoGGP>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreateStreamDescriptorSurfaceGGP(instance, pCreateInfo, pAllocator, pSurface)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "instance:                       "); // HRW
    OutputString(outputFile, "VkInstance = "); // TEQ
    OutputAddrAscii(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkStreamDescriptorSurfaceCreateInfoGGP* pCreateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkStreamDescriptorSurfaceCreateInfoGGP* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pCreateInfo.HasData() && pCreateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR* pSurface
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSurface:                       "); // HRW
    OutputString(outputFile, "VkSurfaceKHR* = "); // TEQ
    if (pSurface->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pSurface = {true, false, false, nullptr};
        if (pSurface->HasData() && pSurface->HasAddress())
            OutputScalarValueAscii(outputFile, pSurface->GetPointer(), vinfo_pSurface); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceExternalImageFormatPropertiesNV(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
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
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceExternalImageFormatPropertiesNV(physicalDevice, format, type, tiling, usage, flags, externalHandleType, pExternalImageFormatProperties)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFormat format
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "format:                         "); // HRW
    OutputString(outputFile, "VkFormat = "); // TEQ
    OutputEnumVkFormat(outputFile, format); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimalAscii(outputFile, format);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageType type
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "type:                           "); // HRW
    OutputString(outputFile, "VkImageType = "); // TEQ
    OutputEnumVkImageType(outputFile, type); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimalAscii(outputFile, type);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageTiling tiling
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "tiling:                         "); // HRW
    OutputString(outputFile, "VkImageTiling = "); // TEQ
    OutputEnumVkImageTiling(outputFile, tiling); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimalAscii(outputFile, tiling);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageUsageFlags usage
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "usage:                          "); // HRW
    OutputString(outputFile, "VkImageUsageFlags = "); // TEQ
    OutputFlagsAscii(outputFile, usage, OutputEnumVkImageUsageFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageCreateFlags flags
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "flags:                          "); // HRW
    OutputString(outputFile, "VkImageCreateFlags = "); // TEQ
    OutputFlagsAscii(outputFile, flags, OutputEnumVkImageCreateFlagBits); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkExternalMemoryHandleTypeFlagsNV externalHandleType
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "externalHandleType:             "); // HRW
    OutputString(outputFile, "VkExternalMemoryHandleTypeFlagsNV = "); // TEQ
    OutputFlagsAscii(outputFile, externalHandleType, OutputEnumVkExternalMemoryHandleTypeFlagBitsNV); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkExternalImageFormatPropertiesNV* pExternalImageFormatProperties
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pExternalImageFormatProperties: "); // HRW
    OutputString(outputFile, "VkExternalImageFormatPropertiesNV* = "); // TEQ
    if (pExternalImageFormatProperties->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pExternalImageFormatProperties->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pExternalImageFormatProperties->HasData() && pExternalImageFormatProperties->HasAddress())
            OutputStructureAscii(outputFile, *pExternalImageFormatProperties->GetMetaStructPointer(), indent+1, pExternalImageFormatProperties->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetMemoryWin32HandleNV(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            memory,
    VkExternalMemoryHandleTypeFlagsNV           handleType,
    PointerDecoder<uint64_t, void*>*            pHandle)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetMemoryWin32HandleNV(device, memory, handleType, pHandle)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceMemory memory
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "memory:                         "); // HRW
    OutputString(outputFile, "VkDeviceMemory = "); // TEQ
    OutputAddrAscii(outputFile, memory); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkExternalMemoryHandleTypeFlagsNV handleType
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "handleType:                     "); // HRW
    OutputString(outputFile, "VkExternalMemoryHandleTypeFlagsNV = "); // TEQ
    OutputFlagsAscii(outputFile, handleType, OutputEnumVkExternalMemoryHandleTypeFlagBitsNV); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: void** pHandle
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pHandle:                        "); // HRW
    OutputString(outputFile, "void** = "); // TEQ
    if (pHandle->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pHandle = {false, false, false, nullptr};
        if (pHandle->HasData() && pHandle->HasAddress())
            OutputScalarValueAscii(outputFile, pHandle->GetPointer(), vinfo_pHandle); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateViSurfaceNN(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkViSurfaceCreateInfoNN>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreateViSurfaceNN(instance, pCreateInfo, pAllocator, pSurface)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "instance:                       "); // HRW
    OutputString(outputFile, "VkInstance = "); // TEQ
    OutputAddrAscii(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkViSurfaceCreateInfoNN* pCreateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkViSurfaceCreateInfoNN* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pCreateInfo.HasData() && pCreateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR* pSurface
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSurface:                       "); // HRW
    OutputString(outputFile, "VkSurfaceKHR* = "); // TEQ
    if (pSurface->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pSurface = {true, false, false, nullptr};
        if (pSurface->HasData() && pSurface->HasAddress())
            OutputScalarValueAscii(outputFile, pSurface->GetPointer(), vinfo_pSurface); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCmdBeginConditionalRenderingEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkConditionalRenderingBeginInfoEXT>& pConditionalRenderingBegin)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdBeginConditionalRenderingEXT(commandBuffer, pConditionalRenderingBegin)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkConditionalRenderingBeginInfoEXT* pConditionalRenderingBegin
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pConditionalRenderingBegin:     "); // HRW
    OutputString(outputFile, "const VkConditionalRenderingBeginInfoEXT* = "); // TEQ
    if (pConditionalRenderingBegin.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pConditionalRenderingBegin.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pConditionalRenderingBegin.HasData() && pConditionalRenderingBegin.HasAddress())
            OutputStructureAscii(outputFile, *pConditionalRenderingBegin.GetMetaStructPointer(), indent+1, pConditionalRenderingBegin.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdEndConditionalRenderingEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdEndConditionalRenderingEXT(commandBuffer)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCmdProcessCommandsNVX(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkCmdProcessCommandsInfoNVX>& pProcessCommandsInfo)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdProcessCommandsNVX(commandBuffer, pProcessCommandsInfo)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkCmdProcessCommandsInfoNVX* pProcessCommandsInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pProcessCommandsInfo:           "); // HRW
    OutputString(outputFile, "const VkCmdProcessCommandsInfoNVX* = "); // TEQ
    if (pProcessCommandsInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pProcessCommandsInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pProcessCommandsInfo.HasData() && pProcessCommandsInfo.HasAddress())
            OutputStructureAscii(outputFile, *pProcessCommandsInfo.GetMetaStructPointer(), indent+1, pProcessCommandsInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdReserveSpaceForCommandsNVX(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkCmdReserveSpaceForCommandsInfoNVX>& pReserveSpaceInfo)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdReserveSpaceForCommandsNVX(commandBuffer, pReserveSpaceInfo)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkCmdReserveSpaceForCommandsInfoNVX* pReserveSpaceInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pReserveSpaceInfo:              "); // HRW
    OutputString(outputFile, "const VkCmdReserveSpaceForCommandsInfoNVX* = "); // TEQ
    if (pReserveSpaceInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pReserveSpaceInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pReserveSpaceInfo.HasData() && pReserveSpaceInfo.HasAddress())
            OutputStructureAscii(outputFile, *pReserveSpaceInfo.GetMetaStructPointer(), indent+1, pReserveSpaceInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateIndirectCommandsLayoutNVX(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkIndirectCommandsLayoutCreateInfoNVX>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkIndirectCommandsLayoutNVX>* pIndirectCommandsLayout)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreateIndirectCommandsLayoutNVX(device, pCreateInfo, pAllocator, pIndirectCommandsLayout)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkIndirectCommandsLayoutCreateInfoNVX* pCreateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkIndirectCommandsLayoutCreateInfoNVX* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pCreateInfo.HasData() && pCreateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkIndirectCommandsLayoutNVX* pIndirectCommandsLayout
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pIndirectCommandsLayout:        "); // HRW
    OutputString(outputFile, "VkIndirectCommandsLayoutNVX* = "); // TEQ
    if (pIndirectCommandsLayout->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pIndirectCommandsLayout = {true, false, false, nullptr};
        if (pIndirectCommandsLayout->HasData() && pIndirectCommandsLayout->HasAddress())
            OutputScalarValueAscii(outputFile, pIndirectCommandsLayout->GetPointer(), vinfo_pIndirectCommandsLayout); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyIndirectCommandsLayoutNVX(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            indirectCommandsLayout,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkDestroyIndirectCommandsLayoutNVX(device, indirectCommandsLayout, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkIndirectCommandsLayoutNVX indirectCommandsLayout
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "indirectCommandsLayout:         "); // HRW
    OutputString(outputFile, "VkIndirectCommandsLayoutNVX = "); // TEQ
    OutputAddrAscii(outputFile, indirectCommandsLayout); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateObjectTableNVX(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkObjectTableCreateInfoNVX>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkObjectTableNVX>*     pObjectTable)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreateObjectTableNVX(device, pCreateInfo, pAllocator, pObjectTable)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkObjectTableCreateInfoNVX* pCreateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkObjectTableCreateInfoNVX* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pCreateInfo.HasData() && pCreateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkObjectTableNVX* pObjectTable
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pObjectTable:                   "); // HRW
    OutputString(outputFile, "VkObjectTableNVX* = "); // TEQ
    if (pObjectTable->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pObjectTable = {true, false, false, nullptr};
        if (pObjectTable->HasData() && pObjectTable->HasAddress())
            OutputScalarValueAscii(outputFile, pObjectTable->GetPointer(), vinfo_pObjectTable); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyObjectTableNVX(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            objectTable,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkDestroyObjectTableNVX(device, objectTable, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkObjectTableNVX objectTable
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "objectTable:                    "); // HRW
    OutputString(outputFile, "VkObjectTableNVX = "); // TEQ
    OutputAddrAscii(outputFile, objectTable); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkUnregisterObjectsNVX(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            objectTable,
    uint32_t                                    objectCount,
    const PointerDecoder<VkObjectEntryTypeNVX>& pObjectEntryTypes,
    const PointerDecoder<uint32_t>&             pObjectIndices)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkUnregisterObjectsNVX(device, objectTable, objectCount, pObjectEntryTypes, pObjectIndices)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkObjectTableNVX objectTable
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "objectTable:                    "); // HRW
    OutputString(outputFile, "VkObjectTableNVX = "); // TEQ
    OutputAddrAscii(outputFile, objectTable); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t objectCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "objectCount:                    "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, objectCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkObjectEntryTypeNVX* pObjectEntryTypes
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pObjectEntryTypes:              "); // HRW
    OutputString(outputFile, "const VkObjectEntryTypeNVX* = "); // TEQ
    if (pObjectEntryTypes.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pObjectEntryTypes.GetAddress()); // PBZ
        OutputScalarValueStructInfo vinfo_pObjectEntryTypes = {false, true, false, OutputEnumVkObjectEntryTypeNVX};
        OutputArrayAscii(outputFile, indent, "const VkObjectEntryTypeNVX*", &pObjectEntryTypes, "pObjectEntryTypes", objectCount, vinfo_pObjectEntryTypes); // AUB
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const uint32_t* pObjectIndices
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pObjectIndices:                 "); // HRW
    OutputString(outputFile, "const uint32_t* = "); // TEQ
    if (pObjectIndices.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pObjectIndices.GetAddress()); // PBZ
        OutputScalarValueStructInfo vinfo_pObjectIndices = {false, false, false, nullptr};
        OutputArrayAscii(outputFile, indent, "const uint32_t*", &pObjectIndices, "pObjectIndices", objectCount, vinfo_pObjectIndices); // AUB
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkDeviceGeneratedCommandsFeaturesNVX>* pFeatures,
    StructPointerDecoder<Decoded_VkDeviceGeneratedCommandsLimitsNVX>* pLimits)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX(physicalDevice, pFeatures, pLimits)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceGeneratedCommandsFeaturesNVX* pFeatures
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pFeatures:                      "); // HRW
    OutputString(outputFile, "VkDeviceGeneratedCommandsFeaturesNVX* = "); // TEQ
    if (pFeatures->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pFeatures->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pFeatures->HasData() && pFeatures->HasAddress())
            OutputStructureAscii(outputFile, *pFeatures->GetMetaStructPointer(), indent+1, pFeatures->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceGeneratedCommandsLimitsNVX* pLimits
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pLimits:                        "); // HRW
    OutputString(outputFile, "VkDeviceGeneratedCommandsLimitsNVX* = "); // TEQ
    if (pLimits->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pLimits->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pLimits->HasData() && pLimits->HasAddress())
            OutputStructureAscii(outputFile, *pLimits->GetMetaStructPointer(), indent+1, pLimits->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCmdSetViewportWScalingNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    firstViewport,
    uint32_t                                    viewportCount,
    const StructPointerDecoder<Decoded_VkViewportWScalingNV>& pViewportWScalings)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdSetViewportWScalingNV(commandBuffer, firstViewport, viewportCount, pViewportWScalings)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstViewport
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "firstViewport:                  "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, firstViewport); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t viewportCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "viewportCount:                  "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, viewportCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkViewportWScalingNV* pViewportWScalings
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pViewportWScalings:             "); // HRW
    OutputString(outputFile, "const VkViewportWScalingNV* = "); // TEQ
    if (pViewportWScalings.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pViewportWScalings.GetAddress()); // WVS
        if (pViewportWScalings.HasData() && pViewportWScalings.HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkViewportWScalingNV", pViewportWScalings.GetMetaStructPointer(), "pViewportWScalings", viewportCount, false, pViewportWScalings.GetAddress(), sizeof(VkViewportWScalingNV));  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkReleaseDisplayEXT(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    format::HandleId                            display)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkReleaseDisplayEXT(physicalDevice, display)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayKHR display
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "display:                        "); // HRW
    OutputString(outputFile, "VkDisplayKHR = "); // TEQ
    OutputAddrAscii(outputFile, display); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkAcquireXlibDisplayEXT(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    uint64_t                                    dpy,
    format::HandleId                            display)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkAcquireXlibDisplayEXT(physicalDevice, dpy, display)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: void* dpy
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "dpy:                            "); // HRW
    OutputString(outputFile, "void* = "); // TEQ
    OutputAddrAscii(outputFile, dpy); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayKHR display
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "display:                        "); // HRW
    OutputString(outputFile, "VkDisplayKHR = "); // TEQ
    OutputAddrAscii(outputFile, display); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetRandROutputDisplayEXT(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    uint64_t                                    dpy,
    size_t                                      rrOutput,
    HandlePointerDecoder<VkDisplayKHR>*         pDisplay)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetRandROutputDisplayEXT(physicalDevice, dpy, rrOutput, pDisplay)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: void* dpy
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "dpy:                            "); // HRW
    OutputString(outputFile, "void* = "); // TEQ
    OutputAddrAscii(outputFile, dpy); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: size_t rrOutput
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "rrOutput:                       "); // HRW
    OutputString(outputFile, "size_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, rrOutput); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayKHR* pDisplay
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pDisplay:                       "); // HRW
    OutputString(outputFile, "VkDisplayKHR* = "); // TEQ
    if (pDisplay->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pDisplay = {true, false, false, nullptr};
        if (pDisplay->HasData() && pDisplay->HasAddress())
            OutputScalarValueAscii(outputFile, pDisplay->GetPointer(), vinfo_pDisplay); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSurfaceCapabilities2EXT(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    format::HandleId                            surface,
    StructPointerDecoder<Decoded_VkSurfaceCapabilities2EXT>* pSurfaceCapabilities)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceSurfaceCapabilities2EXT(physicalDevice, surface, pSurfaceCapabilities)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR surface
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "surface:                        "); // HRW
    OutputString(outputFile, "VkSurfaceKHR = "); // TEQ
    OutputAddrAscii(outputFile, surface); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceCapabilities2EXT* pSurfaceCapabilities
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSurfaceCapabilities:           "); // HRW
    OutputString(outputFile, "VkSurfaceCapabilities2EXT* = "); // TEQ
    if (pSurfaceCapabilities->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pSurfaceCapabilities->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pSurfaceCapabilities->HasData() && pSurfaceCapabilities->HasAddress())
            OutputStructureAscii(outputFile, *pSurfaceCapabilities->GetMetaStructPointer(), indent+1, pSurfaceCapabilities->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkDisplayPowerControlEXT(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            display,
    const StructPointerDecoder<Decoded_VkDisplayPowerInfoEXT>& pDisplayPowerInfo)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkDisplayPowerControlEXT(device, display, pDisplayPowerInfo)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayKHR display
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "display:                        "); // HRW
    OutputString(outputFile, "VkDisplayKHR = "); // TEQ
    OutputAddrAscii(outputFile, display); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDisplayPowerInfoEXT* pDisplayPowerInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pDisplayPowerInfo:              "); // HRW
    OutputString(outputFile, "const VkDisplayPowerInfoEXT* = "); // TEQ
    if (pDisplayPowerInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pDisplayPowerInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pDisplayPowerInfo.HasData() && pDisplayPowerInfo.HasAddress())
            OutputStructureAscii(outputFile, *pDisplayPowerInfo.GetMetaStructPointer(), indent+1, pDisplayPowerInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkRegisterDeviceEventEXT(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDeviceEventInfoEXT>& pDeviceEventInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkFence>*              pFence)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkRegisterDeviceEventEXT(device, pDeviceEventInfo, pAllocator, pFence)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDeviceEventInfoEXT* pDeviceEventInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pDeviceEventInfo:               "); // HRW
    OutputString(outputFile, "const VkDeviceEventInfoEXT* = "); // TEQ
    if (pDeviceEventInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pDeviceEventInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pDeviceEventInfo.HasData() && pDeviceEventInfo.HasAddress())
            OutputStructureAscii(outputFile, *pDeviceEventInfo.GetMetaStructPointer(), indent+1, pDeviceEventInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFence* pFence
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pFence:                         "); // HRW
    OutputString(outputFile, "VkFence* = "); // TEQ
    if (pFence->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pFence = {true, false, false, nullptr};
        if (pFence->HasData() && pFence->HasAddress())
            OutputScalarValueAscii(outputFile, pFence->GetPointer(), vinfo_pFence); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkRegisterDisplayEventEXT(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            display,
    const StructPointerDecoder<Decoded_VkDisplayEventInfoEXT>& pDisplayEventInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkFence>*              pFence)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkRegisterDisplayEventEXT(device, display, pDisplayEventInfo, pAllocator, pFence)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDisplayKHR display
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "display:                        "); // HRW
    OutputString(outputFile, "VkDisplayKHR = "); // TEQ
    OutputAddrAscii(outputFile, display); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDisplayEventInfoEXT* pDisplayEventInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pDisplayEventInfo:              "); // HRW
    OutputString(outputFile, "const VkDisplayEventInfoEXT* = "); // TEQ
    if (pDisplayEventInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pDisplayEventInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pDisplayEventInfo.HasData() && pDisplayEventInfo.HasAddress())
            OutputStructureAscii(outputFile, *pDisplayEventInfo.GetMetaStructPointer(), indent+1, pDisplayEventInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFence* pFence
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pFence:                         "); // HRW
    OutputString(outputFile, "VkFence* = "); // TEQ
    if (pFence->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pFence = {true, false, false, nullptr};
        if (pFence->HasData() && pFence->HasAddress())
            OutputScalarValueAscii(outputFile, pFence->GetPointer(), vinfo_pFence); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetSwapchainCounterEXT(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            swapchain,
    VkSurfaceCounterFlagBitsEXT                 counter,
    PointerDecoder<uint64_t>*                   pCounterValue)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetSwapchainCounterEXT(device, swapchain, counter, pCounterValue)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSwapchainKHR swapchain
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "swapchain:                      "); // HRW
    OutputString(outputFile, "VkSwapchainKHR = "); // TEQ
    OutputAddrAscii(outputFile, swapchain); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceCounterFlagBitsEXT counter
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "counter:                        "); // HRW
    OutputString(outputFile, "VkSurfaceCounterFlagBitsEXT = "); // TEQ
    OutputEnumVkSurfaceCounterFlagBitsEXT(outputFile, counter); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimalAscii(outputFile, counter);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint64_t* pCounterValue
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCounterValue:                  "); // HRW
    OutputString(outputFile, "uint64_t* = "); // TEQ
    if (pCounterValue->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pCounterValue = {false, false, false, nullptr};
        if (pCounterValue->HasData() && pCounterValue->HasAddress())
            OutputScalarValueAscii(outputFile, pCounterValue->GetPointer(), vinfo_pCounterValue); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetRefreshCycleDurationGOOGLE(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            swapchain,
    StructPointerDecoder<Decoded_VkRefreshCycleDurationGOOGLE>* pDisplayTimingProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetRefreshCycleDurationGOOGLE(device, swapchain, pDisplayTimingProperties)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSwapchainKHR swapchain
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "swapchain:                      "); // HRW
    OutputString(outputFile, "VkSwapchainKHR = "); // TEQ
    OutputAddrAscii(outputFile, swapchain); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkRefreshCycleDurationGOOGLE* pDisplayTimingProperties
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pDisplayTimingProperties:       "); // HRW
    OutputString(outputFile, "VkRefreshCycleDurationGOOGLE* = "); // TEQ
    if (pDisplayTimingProperties->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pDisplayTimingProperties->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pDisplayTimingProperties->HasData() && pDisplayTimingProperties->HasAddress())
            OutputStructureAscii(outputFile, *pDisplayTimingProperties->GetMetaStructPointer(), indent+1, pDisplayTimingProperties->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPastPresentationTimingGOOGLE(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            swapchain,
    PointerDecoder<uint32_t>*                   pPresentationTimingCount,
    StructPointerDecoder<Decoded_VkPastPresentationTimingGOOGLE>* pPresentationTimings)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPastPresentationTimingGOOGLE(device, swapchain, pPresentationTimingCount, pPresentationTimings)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSwapchainKHR swapchain
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "swapchain:                      "); // HRW
    OutputString(outputFile, "VkSwapchainKHR = "); // TEQ
    OutputAddrAscii(outputFile, swapchain); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pPresentationTimingCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pPresentationTimingCount:       "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pPresentationTimingCount->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pPresentationTimingCount = {false, false, false, nullptr};
        if (pPresentationTimingCount->HasData() && pPresentationTimingCount->HasAddress())
            OutputScalarValueAscii(outputFile, pPresentationTimingCount->GetPointer(), vinfo_pPresentationTimingCount); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPastPresentationTimingGOOGLE* pPresentationTimings
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pPresentationTimings:           "); // HRW
    OutputString(outputFile, "VkPastPresentationTimingGOOGLE* = "); // TEQ
    if (pPresentationTimings->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pPresentationTimings->GetAddress()); // WUS
        if (pPresentationTimings->HasData() && pPresentationTimings->HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkPastPresentationTimingGOOGLE", pPresentationTimings->GetMetaStructPointer(), "pPresentationTimings", *pPresentationTimingCount->GetPointer(), false, pPresentationTimings->GetAddress(), sizeof(VkPastPresentationTimingGOOGLE));  // CCN
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCmdSetDiscardRectangleEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    firstDiscardRectangle,
    uint32_t                                    discardRectangleCount,
    const StructPointerDecoder<Decoded_VkRect2D>& pDiscardRectangles)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdSetDiscardRectangleEXT(commandBuffer, firstDiscardRectangle, discardRectangleCount, pDiscardRectangles)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstDiscardRectangle
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "firstDiscardRectangle:          "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, firstDiscardRectangle); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t discardRectangleCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "discardRectangleCount:          "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, discardRectangleCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkRect2D* pDiscardRectangles
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pDiscardRectangles:             "); // HRW
    OutputString(outputFile, "const VkRect2D* = "); // TEQ
    if (pDiscardRectangles.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pDiscardRectangles.GetAddress()); // WVS
        if (pDiscardRectangles.HasData() && pDiscardRectangles.HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkRect2D", pDiscardRectangles.GetMetaStructPointer(), "pDiscardRectangles", discardRectangleCount, false, pDiscardRectangles.GetAddress(), sizeof(VkRect2D));  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkSetHdrMetadataEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    uint32_t                                    swapchainCount,
    const HandlePointerDecoder<VkSwapchainKHR>& pSwapchains,
    const StructPointerDecoder<Decoded_VkHdrMetadataEXT>& pMetadata)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkSetHdrMetadataEXT(device, swapchainCount, pSwapchains, pMetadata)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t swapchainCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "swapchainCount:                 "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, swapchainCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSwapchainKHR* pSwapchains
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSwapchains:                    "); // HRW
    OutputString(outputFile, "const VkSwapchainKHR* = "); // TEQ
    if (pSwapchains.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pSwapchains.GetAddress()); // PBZ
        OutputScalarValueStructInfo vinfo_pSwapchains = {true, false, false, nullptr};
        OutputArrayAscii(outputFile, indent, "const VkSwapchainKHR*", &pSwapchains, "pSwapchains", swapchainCount, vinfo_pSwapchains); // AUB
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkHdrMetadataEXT* pMetadata
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pMetadata:                      "); // HRW
    OutputString(outputFile, "const VkHdrMetadataEXT* = "); // TEQ
    if (pMetadata.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pMetadata.GetAddress()); // WVS
        if (pMetadata.HasData() && pMetadata.HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkHdrMetadataEXT", pMetadata.GetMetaStructPointer(), "pMetadata", swapchainCount, false, pMetadata.GetAddress(), sizeof(VkHdrMetadataEXT));  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateIOSSurfaceMVK(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkIOSSurfaceCreateInfoMVK>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreateIOSSurfaceMVK(instance, pCreateInfo, pAllocator, pSurface)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "instance:                       "); // HRW
    OutputString(outputFile, "VkInstance = "); // TEQ
    OutputAddrAscii(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkIOSSurfaceCreateInfoMVK* pCreateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkIOSSurfaceCreateInfoMVK* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pCreateInfo.HasData() && pCreateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR* pSurface
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSurface:                       "); // HRW
    OutputString(outputFile, "VkSurfaceKHR* = "); // TEQ
    if (pSurface->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pSurface = {true, false, false, nullptr};
        if (pSurface->HasData() && pSurface->HasAddress())
            OutputScalarValueAscii(outputFile, pSurface->GetPointer(), vinfo_pSurface); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateMacOSSurfaceMVK(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkMacOSSurfaceCreateInfoMVK>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreateMacOSSurfaceMVK(instance, pCreateInfo, pAllocator, pSurface)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "instance:                       "); // HRW
    OutputString(outputFile, "VkInstance = "); // TEQ
    OutputAddrAscii(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkMacOSSurfaceCreateInfoMVK* pCreateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkMacOSSurfaceCreateInfoMVK* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pCreateInfo.HasData() && pCreateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR* pSurface
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSurface:                       "); // HRW
    OutputString(outputFile, "VkSurfaceKHR* = "); // TEQ
    if (pSurface->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pSurface = {true, false, false, nullptr};
        if (pSurface->HasData() && pSurface->HasAddress())
            OutputScalarValueAscii(outputFile, pSurface->GetPointer(), vinfo_pSurface); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkSetDebugUtilsObjectNameEXT(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDebugUtilsObjectNameInfoEXT>& pNameInfo)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkSetDebugUtilsObjectNameEXT(device, pNameInfo)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDebugUtilsObjectNameInfoEXT* pNameInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pNameInfo:                      "); // HRW
    OutputString(outputFile, "const VkDebugUtilsObjectNameInfoEXT* = "); // TEQ
    if (pNameInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pNameInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pNameInfo.HasData() && pNameInfo.HasAddress())
            OutputStructureAscii(outputFile, *pNameInfo.GetMetaStructPointer(), indent+1, pNameInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkSetDebugUtilsObjectTagEXT(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDebugUtilsObjectTagInfoEXT>& pTagInfo)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkSetDebugUtilsObjectTagEXT(device, pTagInfo)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDebugUtilsObjectTagInfoEXT* pTagInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pTagInfo:                       "); // HRW
    OutputString(outputFile, "const VkDebugUtilsObjectTagInfoEXT* = "); // TEQ
    if (pTagInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pTagInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pTagInfo.HasData() && pTagInfo.HasAddress())
            OutputStructureAscii(outputFile, *pTagInfo.GetMetaStructPointer(), indent+1, pTagInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkQueueBeginDebugUtilsLabelEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            queue,
    const StructPointerDecoder<Decoded_VkDebugUtilsLabelEXT>& pLabelInfo)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkQueueBeginDebugUtilsLabelEXT(queue, pLabelInfo)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkQueue queue
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "queue:                          "); // HRW
    OutputString(outputFile, "VkQueue = "); // TEQ
    OutputAddrAscii(outputFile, queue); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDebugUtilsLabelEXT* pLabelInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pLabelInfo:                     "); // HRW
    OutputString(outputFile, "const VkDebugUtilsLabelEXT* = "); // TEQ
    if (pLabelInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pLabelInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pLabelInfo.HasData() && pLabelInfo.HasAddress())
            OutputStructureAscii(outputFile, *pLabelInfo.GetMetaStructPointer(), indent+1, pLabelInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkQueueEndDebugUtilsLabelEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            queue)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkQueueEndDebugUtilsLabelEXT(queue)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkQueue queue
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "queue:                          "); // HRW
    OutputString(outputFile, "VkQueue = "); // TEQ
    OutputAddrAscii(outputFile, queue); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkQueueInsertDebugUtilsLabelEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            queue,
    const StructPointerDecoder<Decoded_VkDebugUtilsLabelEXT>& pLabelInfo)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkQueueInsertDebugUtilsLabelEXT(queue, pLabelInfo)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkQueue queue
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "queue:                          "); // HRW
    OutputString(outputFile, "VkQueue = "); // TEQ
    OutputAddrAscii(outputFile, queue); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDebugUtilsLabelEXT* pLabelInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pLabelInfo:                     "); // HRW
    OutputString(outputFile, "const VkDebugUtilsLabelEXT* = "); // TEQ
    if (pLabelInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pLabelInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pLabelInfo.HasData() && pLabelInfo.HasAddress())
            OutputStructureAscii(outputFile, *pLabelInfo.GetMetaStructPointer(), indent+1, pLabelInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdBeginDebugUtilsLabelEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkDebugUtilsLabelEXT>& pLabelInfo)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdBeginDebugUtilsLabelEXT(commandBuffer, pLabelInfo)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDebugUtilsLabelEXT* pLabelInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pLabelInfo:                     "); // HRW
    OutputString(outputFile, "const VkDebugUtilsLabelEXT* = "); // TEQ
    if (pLabelInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pLabelInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pLabelInfo.HasData() && pLabelInfo.HasAddress())
            OutputStructureAscii(outputFile, *pLabelInfo.GetMetaStructPointer(), indent+1, pLabelInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdEndDebugUtilsLabelEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdEndDebugUtilsLabelEXT(commandBuffer)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdInsertDebugUtilsLabelEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkDebugUtilsLabelEXT>& pLabelInfo)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdInsertDebugUtilsLabelEXT(commandBuffer, pLabelInfo)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDebugUtilsLabelEXT* pLabelInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pLabelInfo:                     "); // HRW
    OutputString(outputFile, "const VkDebugUtilsLabelEXT* = "); // TEQ
    if (pLabelInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pLabelInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pLabelInfo.HasData() && pLabelInfo.HasAddress())
            OutputStructureAscii(outputFile, *pLabelInfo.GetMetaStructPointer(), indent+1, pLabelInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateDebugUtilsMessengerEXT(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkDebugUtilsMessengerCreateInfoEXT>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkDebugUtilsMessengerEXT>* pMessenger)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreateDebugUtilsMessengerEXT(instance, pCreateInfo, pAllocator, pMessenger)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "instance:                       "); // HRW
    OutputString(outputFile, "VkInstance = "); // TEQ
    OutputAddrAscii(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDebugUtilsMessengerCreateInfoEXT* pCreateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkDebugUtilsMessengerCreateInfoEXT* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pCreateInfo.HasData() && pCreateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDebugUtilsMessengerEXT* pMessenger
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pMessenger:                     "); // HRW
    OutputString(outputFile, "VkDebugUtilsMessengerEXT* = "); // TEQ
    if (pMessenger->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pMessenger = {true, false, false, nullptr};
        if (pMessenger->HasData() && pMessenger->HasAddress())
            OutputScalarValueAscii(outputFile, pMessenger->GetPointer(), vinfo_pMessenger); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyDebugUtilsMessengerEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            instance,
    format::HandleId                            messenger,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkDestroyDebugUtilsMessengerEXT(instance, messenger, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkInstance instance
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "instance:                       "); // HRW
    OutputString(outputFile, "VkInstance = "); // TEQ
    OutputAddrAscii(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDebugUtilsMessengerEXT messenger
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "messenger:                      "); // HRW
    OutputString(outputFile, "VkDebugUtilsMessengerEXT = "); // TEQ
    OutputAddrAscii(outputFile, messenger); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkSubmitDebugUtilsMessageEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            instance,
    VkDebugUtilsMessageSeverityFlagBitsEXT      messageSeverity,
    VkDebugUtilsMessageTypeFlagsEXT             messageTypes,
    const StructPointerDecoder<Decoded_VkDebugUtilsMessengerCallbackDataEXT>& pCallbackData)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkSubmitDebugUtilsMessageEXT(instance, messageSeverity, messageTypes, pCallbackData)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkInstance instance
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "instance:                       "); // HRW
    OutputString(outputFile, "VkInstance = "); // TEQ
    OutputAddrAscii(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "messageSeverity:                "); // HRW
    OutputString(outputFile, "VkDebugUtilsMessageSeverityFlagBitsEXT = "); // TEQ
    OutputEnumVkDebugUtilsMessageSeverityFlagBitsEXT(outputFile, messageSeverity); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimalAscii(outputFile, messageSeverity);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDebugUtilsMessageTypeFlagsEXT messageTypes
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "messageTypes:                   "); // HRW
    OutputString(outputFile, "VkDebugUtilsMessageTypeFlagsEXT = "); // TEQ
    OutputFlagsAscii(outputFile, messageTypes, OutputEnumVkDebugUtilsMessageTypeFlagBitsEXT); // URW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkDebugUtilsMessengerCallbackDataEXT* pCallbackData
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCallbackData:                  "); // HRW
    OutputString(outputFile, "const VkDebugUtilsMessengerCallbackDataEXT* = "); // TEQ
    if (pCallbackData.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCallbackData.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pCallbackData.HasData() && pCallbackData.HasAddress())
            OutputStructureAscii(outputFile, *pCallbackData.GetMetaStructPointer(), indent+1, pCallbackData.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetAndroidHardwareBufferPropertiesANDROID(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    uint64_t                                    buffer,
    StructPointerDecoder<Decoded_VkAndroidHardwareBufferPropertiesANDROID>* pProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetAndroidHardwareBufferPropertiesANDROID(device, buffer, pProperties)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const struct void* buffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "buffer:                         "); // HRW
    OutputString(outputFile, "const struct void* = "); // TEQ
    if ( !buffer) // WWW
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, buffer); // PWR
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkAndroidHardwareBufferPropertiesANDROID* pProperties
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pProperties:                    "); // HRW
    OutputString(outputFile, "VkAndroidHardwareBufferPropertiesANDROID* = "); // TEQ
    if (pProperties->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pProperties->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pProperties->HasData() && pProperties->HasAddress())
            OutputStructureAscii(outputFile, *pProperties->GetMetaStructPointer(), indent+1, pProperties->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetMemoryAndroidHardwareBufferANDROID(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkMemoryGetAndroidHardwareBufferInfoANDROID>& pInfo,
    PointerDecoder<uint64_t, void*>*            pBuffer)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetMemoryAndroidHardwareBufferANDROID(device, pInfo, pBuffer)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkMemoryGetAndroidHardwareBufferInfoANDROID* pInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pInfo:                          "); // HRW
    OutputString(outputFile, "const VkMemoryGetAndroidHardwareBufferInfoANDROID* = "); // TEQ
    if (pInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pInfo.HasData() && pInfo.HasAddress())
            OutputStructureAscii(outputFile, *pInfo.GetMetaStructPointer(), indent+1, pInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: struct void** pBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pBuffer:                        "); // HRW
    OutputString(outputFile, "struct void** = "); // TEQ
    if (pBuffer->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pBuffer = {false, false, false, nullptr};
        if (pBuffer->HasData() && pBuffer->HasAddress())
            OutputScalarValueAscii(outputFile, pBuffer->GetPointer(), vinfo_pBuffer); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCmdSetSampleLocationsEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkSampleLocationsInfoEXT>& pSampleLocationsInfo)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdSetSampleLocationsEXT(commandBuffer, pSampleLocationsInfo)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkSampleLocationsInfoEXT* pSampleLocationsInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSampleLocationsInfo:           "); // HRW
    OutputString(outputFile, "const VkSampleLocationsInfoEXT* = "); // TEQ
    if (pSampleLocationsInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pSampleLocationsInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pSampleLocationsInfo.HasData() && pSampleLocationsInfo.HasAddress())
            OutputStructureAscii(outputFile, *pSampleLocationsInfo.GetMetaStructPointer(), indent+1, pSampleLocationsInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceMultisamplePropertiesEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    VkSampleCountFlagBits                       samples,
    StructPointerDecoder<Decoded_VkMultisamplePropertiesEXT>* pMultisampleProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceMultisamplePropertiesEXT(physicalDevice, samples, pMultisampleProperties)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSampleCountFlagBits samples
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "samples:                        "); // HRW
    OutputString(outputFile, "VkSampleCountFlagBits = "); // TEQ
    OutputEnumVkSampleCountFlagBits(outputFile, samples); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimalAscii(outputFile, samples);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkMultisamplePropertiesEXT* pMultisampleProperties
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pMultisampleProperties:         "); // HRW
    OutputString(outputFile, "VkMultisamplePropertiesEXT* = "); // TEQ
    if (pMultisampleProperties->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pMultisampleProperties->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pMultisampleProperties->HasData() && pMultisampleProperties->HasAddress())
            OutputStructureAscii(outputFile, *pMultisampleProperties->GetMetaStructPointer(), indent+1, pMultisampleProperties->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetImageDrmFormatModifierPropertiesEXT(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            image,
    StructPointerDecoder<Decoded_VkImageDrmFormatModifierPropertiesEXT>* pProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetImageDrmFormatModifierPropertiesEXT(device, image, pProperties)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImage image
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "image:                          "); // HRW
    OutputString(outputFile, "VkImage = "); // TEQ
    OutputAddrAscii(outputFile, image); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageDrmFormatModifierPropertiesEXT* pProperties
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pProperties:                    "); // HRW
    OutputString(outputFile, "VkImageDrmFormatModifierPropertiesEXT* = "); // TEQ
    if (pProperties->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pProperties->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pProperties->HasData() && pProperties->HasAddress())
            OutputStructureAscii(outputFile, *pProperties->GetMetaStructPointer(), indent+1, pProperties->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateValidationCacheEXT(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkValidationCacheCreateInfoEXT>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkValidationCacheEXT>* pValidationCache)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreateValidationCacheEXT(device, pCreateInfo, pAllocator, pValidationCache)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkValidationCacheCreateInfoEXT* pCreateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkValidationCacheCreateInfoEXT* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pCreateInfo.HasData() && pCreateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkValidationCacheEXT* pValidationCache
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pValidationCache:               "); // HRW
    OutputString(outputFile, "VkValidationCacheEXT* = "); // TEQ
    if (pValidationCache->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pValidationCache = {true, false, false, nullptr};
        if (pValidationCache->HasData() && pValidationCache->HasAddress())
            OutputScalarValueAscii(outputFile, pValidationCache->GetPointer(), vinfo_pValidationCache); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyValidationCacheEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            validationCache,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkDestroyValidationCacheEXT(device, validationCache, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkValidationCacheEXT validationCache
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "validationCache:                "); // HRW
    OutputString(outputFile, "VkValidationCacheEXT = "); // TEQ
    OutputAddrAscii(outputFile, validationCache); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkMergeValidationCachesEXT(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            dstCache,
    uint32_t                                    srcCacheCount,
    const HandlePointerDecoder<VkValidationCacheEXT>& pSrcCaches)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkMergeValidationCachesEXT(device, dstCache, srcCacheCount, pSrcCaches)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkValidationCacheEXT dstCache
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "dstCache:                       "); // HRW
    OutputString(outputFile, "VkValidationCacheEXT = "); // TEQ
    OutputAddrAscii(outputFile, dstCache); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t srcCacheCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "srcCacheCount:                  "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, srcCacheCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkValidationCacheEXT* pSrcCaches
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSrcCaches:                     "); // HRW
    OutputString(outputFile, "const VkValidationCacheEXT* = "); // TEQ
    if (pSrcCaches.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pSrcCaches.GetAddress()); // PBZ
        OutputScalarValueStructInfo vinfo_pSrcCaches = {true, false, false, nullptr};
        OutputArrayAscii(outputFile, indent, "const VkValidationCacheEXT*", &pSrcCaches, "pSrcCaches", srcCacheCount, vinfo_pSrcCaches); // AUB
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetValidationCacheDataEXT(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            validationCache,
    PointerDecoder<size_t>*                     pDataSize,
    PointerDecoder<uint8_t>*                    pData)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetValidationCacheDataEXT(device, validationCache, pDataSize, pData)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkValidationCacheEXT validationCache
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "validationCache:                "); // HRW
    OutputString(outputFile, "VkValidationCacheEXT = "); // TEQ
    OutputAddrAscii(outputFile, validationCache); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: size_t* pDataSize
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pDataSize:                      "); // HRW
    OutputString(outputFile, "size_t* = "); // TEQ
    if (pDataSize->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pDataSize = {false, false, false, nullptr};
        if (pDataSize->HasData() && pDataSize->HasAddress())
            OutputScalarValueAscii(outputFile, pDataSize->GetPointer(), vinfo_pDataSize); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: void* pData
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pData:                          "); // HRW
    OutputString(outputFile, "void* = "); // TEQ
    if (pData->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pData->GetAddress()); // AHW
        OutputScalarValueStructInfo vinfo_pData = {false, false, false, nullptr};
        OutputArrayAscii(outputFile, indent, "void*", pData, "pData", *pDataSize->GetPointer(), vinfo_pData); // PRC
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCmdBindShadingRateImageNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            imageView,
    VkImageLayout                               imageLayout)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdBindShadingRateImageNV(commandBuffer, imageView, imageLayout)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageView imageView
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "imageView:                      "); // HRW
    OutputString(outputFile, "VkImageView = "); // TEQ
    OutputAddrAscii(outputFile, imageView); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkImageLayout imageLayout
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "imageLayout:                    "); // HRW
    OutputString(outputFile, "VkImageLayout = "); // TEQ
    OutputEnumVkImageLayout(outputFile, imageLayout); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimalAscii(outputFile, imageLayout);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdSetViewportShadingRatePaletteNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    firstViewport,
    uint32_t                                    viewportCount,
    const StructPointerDecoder<Decoded_VkShadingRatePaletteNV>& pShadingRatePalettes)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdSetViewportShadingRatePaletteNV(commandBuffer, firstViewport, viewportCount, pShadingRatePalettes)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstViewport
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "firstViewport:                  "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, firstViewport); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t viewportCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "viewportCount:                  "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, viewportCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkShadingRatePaletteNV* pShadingRatePalettes
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pShadingRatePalettes:           "); // HRW
    OutputString(outputFile, "const VkShadingRatePaletteNV* = "); // TEQ
    if (pShadingRatePalettes.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pShadingRatePalettes.GetAddress()); // WVS
        if (pShadingRatePalettes.HasData() && pShadingRatePalettes.HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkShadingRatePaletteNV", pShadingRatePalettes.GetMetaStructPointer(), "pShadingRatePalettes", viewportCount, false, pShadingRatePalettes.GetAddress(), sizeof(VkShadingRatePaletteNV));  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdSetCoarseSampleOrderNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkCoarseSampleOrderTypeNV                   sampleOrderType,
    uint32_t                                    customSampleOrderCount,
    const StructPointerDecoder<Decoded_VkCoarseSampleOrderCustomNV>& pCustomSampleOrders)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdSetCoarseSampleOrderNV(commandBuffer, sampleOrderType, customSampleOrderCount, pCustomSampleOrders)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkCoarseSampleOrderTypeNV sampleOrderType
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "sampleOrderType:                "); // HRW
    OutputString(outputFile, "VkCoarseSampleOrderTypeNV = "); // TEQ
    OutputEnumVkCoarseSampleOrderTypeNV(outputFile, sampleOrderType); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimalAscii(outputFile, sampleOrderType);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t customSampleOrderCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "customSampleOrderCount:         "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, customSampleOrderCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkCoarseSampleOrderCustomNV* pCustomSampleOrders
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCustomSampleOrders:            "); // HRW
    OutputString(outputFile, "const VkCoarseSampleOrderCustomNV* = "); // TEQ
    if (pCustomSampleOrders.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCustomSampleOrders.GetAddress()); // WVS
        if (pCustomSampleOrders.HasData() && pCustomSampleOrders.HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkCoarseSampleOrderCustomNV", pCustomSampleOrders.GetMetaStructPointer(), "pCustomSampleOrders", customSampleOrderCount, false, pCustomSampleOrders.GetAddress(), sizeof(VkCoarseSampleOrderCustomNV));  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateAccelerationStructureNV(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkAccelerationStructureCreateInfoNV>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkAccelerationStructureNV>* pAccelerationStructure)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreateAccelerationStructureNV(device, pCreateInfo, pAllocator, pAccelerationStructure)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAccelerationStructureCreateInfoNV* pCreateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkAccelerationStructureCreateInfoNV* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pCreateInfo.HasData() && pCreateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkAccelerationStructureNV* pAccelerationStructure
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAccelerationStructure:         "); // HRW
    OutputString(outputFile, "VkAccelerationStructureNV* = "); // TEQ
    if (pAccelerationStructure->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pAccelerationStructure = {true, false, false, nullptr};
        if (pAccelerationStructure->HasData() && pAccelerationStructure->HasAddress())
            OutputScalarValueAscii(outputFile, pAccelerationStructure->GetPointer(), vinfo_pAccelerationStructure); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkDestroyAccelerationStructureNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            accelerationStructure,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkDestroyAccelerationStructureNV(device, accelerationStructure, pAllocator)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkAccelerationStructureNV accelerationStructure
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "accelerationStructure:          "); // HRW
    OutputString(outputFile, "VkAccelerationStructureNV = "); // TEQ
    OutputAddrAscii(outputFile, accelerationStructure); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetAccelerationStructureMemoryRequirementsNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkAccelerationStructureMemoryRequirementsInfoNV>& pInfo,
    StructPointerDecoder<Decoded_VkMemoryRequirements2KHR>* pMemoryRequirements)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetAccelerationStructureMemoryRequirementsNV(device, pInfo, pMemoryRequirements)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAccelerationStructureMemoryRequirementsInfoNV* pInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pInfo:                          "); // HRW
    OutputString(outputFile, "const VkAccelerationStructureMemoryRequirementsInfoNV* = "); // TEQ
    if (pInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pInfo.HasData() && pInfo.HasAddress())
            OutputStructureAscii(outputFile, *pInfo.GetMetaStructPointer(), indent+1, pInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkMemoryRequirements2KHR* pMemoryRequirements
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pMemoryRequirements:            "); // HRW
    OutputString(outputFile, "VkMemoryRequirements2KHR* = "); // TEQ
    if (pMemoryRequirements->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pMemoryRequirements->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pMemoryRequirements->HasData() && pMemoryRequirements->HasAddress())
            OutputStructureAscii(outputFile, *pMemoryRequirements->GetMetaStructPointer(), indent+1, pMemoryRequirements->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkBindAccelerationStructureMemoryNV(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    uint32_t                                    bindInfoCount,
    const StructPointerDecoder<Decoded_VkBindAccelerationStructureMemoryInfoNV>& pBindInfos)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkBindAccelerationStructureMemoryNV(device, bindInfoCount, pBindInfos)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t bindInfoCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "bindInfoCount:                  "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, bindInfoCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBindAccelerationStructureMemoryInfoNV* pBindInfos
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pBindInfos:                     "); // HRW
    OutputString(outputFile, "const VkBindAccelerationStructureMemoryInfoNV* = "); // TEQ
    if (pBindInfos.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pBindInfos.GetAddress()); // WVS
        if (pBindInfos.HasData() && pBindInfos.HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkBindAccelerationStructureMemoryInfoNV", pBindInfos.GetMetaStructPointer(), "pBindInfos", bindInfoCount, false, pBindInfos.GetAddress(), sizeof(VkBindAccelerationStructureMemoryInfoNV));  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdBuildAccelerationStructureNV(
    const ApiCallInfo&                          call_info,
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
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdBuildAccelerationStructureNV(commandBuffer, pInfo, instanceData, instanceOffset, update, dst, src, scratch, scratchOffset)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAccelerationStructureInfoNV* pInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pInfo:                          "); // HRW
    OutputString(outputFile, "const VkAccelerationStructureInfoNV* = "); // TEQ
    if (pInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pInfo.HasData() && pInfo.HasAddress())
            OutputStructureAscii(outputFile, *pInfo.GetMetaStructPointer(), indent+1, pInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer instanceData
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "instanceData:                   "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    OutputAddrAscii(outputFile, instanceData); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize instanceOffset
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "instanceOffset:                 "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    OutputSignedDecimalAscii(outputFile, instanceOffset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBool32 update
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "update:                         "); // HRW
    OutputString(outputFile, "VkBool32 = "); // TEQ
    OutputSignedDecimalAscii(outputFile, update); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkAccelerationStructureNV dst
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "dst:                            "); // HRW
    OutputString(outputFile, "VkAccelerationStructureNV = "); // TEQ
    OutputAddrAscii(outputFile, dst); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkAccelerationStructureNV src
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "src:                            "); // HRW
    OutputString(outputFile, "VkAccelerationStructureNV = "); // TEQ
    OutputAddrAscii(outputFile, src); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer scratch
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "scratch:                        "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    OutputAddrAscii(outputFile, scratch); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize scratchOffset
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "scratchOffset:                  "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    OutputSignedDecimalAscii(outputFile, scratchOffset); // EQA
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdCopyAccelerationStructureNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            dst,
    format::HandleId                            src,
    VkCopyAccelerationStructureModeNV           mode)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdCopyAccelerationStructureNV(commandBuffer, dst, src, mode)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkAccelerationStructureNV dst
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "dst:                            "); // HRW
    OutputString(outputFile, "VkAccelerationStructureNV = "); // TEQ
    OutputAddrAscii(outputFile, dst); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkAccelerationStructureNV src
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "src:                            "); // HRW
    OutputString(outputFile, "VkAccelerationStructureNV = "); // TEQ
    OutputAddrAscii(outputFile, src); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkCopyAccelerationStructureModeNV mode
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "mode:                           "); // HRW
    OutputString(outputFile, "VkCopyAccelerationStructureModeNV = "); // TEQ
    OutputEnumVkCopyAccelerationStructureModeNV(outputFile, mode); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimalAscii(outputFile, mode);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdTraceRaysNV(
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
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdTraceRaysNV(commandBuffer, raygenShaderBindingTableBuffer, raygenShaderBindingOffset, missShaderBindingTableBuffer, missShaderBindingOffset, missShaderBindingStride, hitShaderBindingTableBuffer, hitShaderBindingOffset, hitShaderBindingStride, callableShaderBindingTableBuffer, callableShaderBindingOffset, callableShaderBindingStride, width, height, depth)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer raygenShaderBindingTableBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "raygenShaderBindingTableBuffer: "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    OutputAddrAscii(outputFile, raygenShaderBindingTableBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize raygenShaderBindingOffset
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "raygenShaderBindingOffset:      "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    OutputSignedDecimalAscii(outputFile, raygenShaderBindingOffset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer missShaderBindingTableBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "missShaderBindingTableBuffer:   "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    OutputAddrAscii(outputFile, missShaderBindingTableBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize missShaderBindingOffset
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "missShaderBindingOffset:        "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    OutputSignedDecimalAscii(outputFile, missShaderBindingOffset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize missShaderBindingStride
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "missShaderBindingStride:        "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    OutputSignedDecimalAscii(outputFile, missShaderBindingStride); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer hitShaderBindingTableBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "hitShaderBindingTableBuffer:    "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    OutputAddrAscii(outputFile, hitShaderBindingTableBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize hitShaderBindingOffset
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "hitShaderBindingOffset:         "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    OutputSignedDecimalAscii(outputFile, hitShaderBindingOffset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize hitShaderBindingStride
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "hitShaderBindingStride:         "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    OutputSignedDecimalAscii(outputFile, hitShaderBindingStride); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer callableShaderBindingTableBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "callableShaderBindingTableBuffer: "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    OutputAddrAscii(outputFile, callableShaderBindingTableBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize callableShaderBindingOffset
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "callableShaderBindingOffset:    "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    OutputSignedDecimalAscii(outputFile, callableShaderBindingOffset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize callableShaderBindingStride
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "callableShaderBindingStride:    "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    OutputSignedDecimalAscii(outputFile, callableShaderBindingStride); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t width
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "width:                          "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, width); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t height
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "height:                         "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, height); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t depth
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "depth:                          "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, depth); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCreateRayTracingPipelinesNV(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            pipelineCache,
    uint32_t                                    createInfoCount,
    const StructPointerDecoder<Decoded_VkRayTracingPipelineCreateInfoNV>& pCreateInfos,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkPipeline>*           pPipelines)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreateRayTracingPipelinesNV(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineCache pipelineCache
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pipelineCache:                  "); // HRW
    OutputString(outputFile, "VkPipelineCache = "); // TEQ
    OutputAddrAscii(outputFile, pipelineCache); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t createInfoCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "createInfoCount:                "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, createInfoCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkRayTracingPipelineCreateInfoNV* pCreateInfos
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfos:                   "); // HRW
    OutputString(outputFile, "const VkRayTracingPipelineCreateInfoNV* = "); // TEQ
    if (pCreateInfos.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfos.GetAddress()); // WVS
        if (pCreateInfos.HasData() && pCreateInfos.HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkRayTracingPipelineCreateInfoNV", pCreateInfos.GetMetaStructPointer(), "pCreateInfos", createInfoCount, false, pCreateInfos.GetAddress(), sizeof(VkRayTracingPipelineCreateInfoNV));  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipeline* pPipelines
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pPipelines:                     "); // HRW
    OutputString(outputFile, "VkPipeline* = "); // TEQ
    if (pPipelines->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pPipelines->GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pPipelines = {true, false, false, nullptr};
        OutputArrayAscii(outputFile, indent, "VkPipeline*", pPipelines, "pPipelines", createInfoCount, vinfo_pPipelines); // AUB
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetRayTracingShaderGroupHandlesNV(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            pipeline,
    uint32_t                                    firstGroup,
    uint32_t                                    groupCount,
    size_t                                      dataSize,
    PointerDecoder<uint8_t>*                    pData)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetRayTracingShaderGroupHandlesNV(device, pipeline, firstGroup, groupCount, dataSize, pData)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipeline pipeline
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pipeline:                       "); // HRW
    OutputString(outputFile, "VkPipeline = "); // TEQ
    OutputAddrAscii(outputFile, pipeline); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstGroup
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "firstGroup:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, firstGroup); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t groupCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "groupCount:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, groupCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: size_t dataSize
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "dataSize:                       "); // HRW
    OutputString(outputFile, "size_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, dataSize); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: void* pData
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pData:                          "); // HRW
    OutputString(outputFile, "void* = "); // TEQ
    if (pData->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pData->GetAddress()); // AHW
        OutputScalarValueStructInfo vinfo_pData = {false, false, false, nullptr};
        OutputArrayAscii(outputFile, indent, "void*", pData, "pData", dataSize, vinfo_pData); // PRC
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetAccelerationStructureHandleNV(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            accelerationStructure,
    size_t                                      dataSize,
    PointerDecoder<uint8_t>*                    pData)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetAccelerationStructureHandleNV(device, accelerationStructure, dataSize, pData)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkAccelerationStructureNV accelerationStructure
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "accelerationStructure:          "); // HRW
    OutputString(outputFile, "VkAccelerationStructureNV = "); // TEQ
    OutputAddrAscii(outputFile, accelerationStructure); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: size_t dataSize
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "dataSize:                       "); // HRW
    OutputString(outputFile, "size_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, dataSize); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: void* pData
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pData:                          "); // HRW
    OutputString(outputFile, "void* = "); // TEQ
    if (pData->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pData->GetAddress()); // AHW
        OutputScalarValueStructInfo vinfo_pData = {false, false, false, nullptr};
        OutputArrayAscii(outputFile, indent, "void*", pData, "pData", dataSize, vinfo_pData); // PRC
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdWriteAccelerationStructuresPropertiesNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    accelerationStructureCount,
    const HandlePointerDecoder<VkAccelerationStructureNV>& pAccelerationStructures,
    VkQueryType                                 queryType,
    format::HandleId                            queryPool,
    uint32_t                                    firstQuery)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdWriteAccelerationStructuresPropertiesNV(commandBuffer, accelerationStructureCount, pAccelerationStructures, queryType, queryPool, firstQuery)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t accelerationStructureCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "accelerationStructureCount:     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, accelerationStructureCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAccelerationStructureNV* pAccelerationStructures
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAccelerationStructures:        "); // HRW
    OutputString(outputFile, "const VkAccelerationStructureNV* = "); // TEQ
    if (pAccelerationStructures.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAccelerationStructures.GetAddress()); // PBZ
        OutputScalarValueStructInfo vinfo_pAccelerationStructures = {true, false, false, nullptr};
        OutputArrayAscii(outputFile, indent, "const VkAccelerationStructureNV*", &pAccelerationStructures, "pAccelerationStructures", accelerationStructureCount, vinfo_pAccelerationStructures); // AUB
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryType queryType
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "queryType:                      "); // HRW
    OutputString(outputFile, "VkQueryType = "); // TEQ
    OutputEnumVkQueryType(outputFile, queryType); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimalAscii(outputFile, queryType);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryPool queryPool
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "queryPool:                      "); // HRW
    OutputString(outputFile, "VkQueryPool = "); // TEQ
    OutputAddrAscii(outputFile, queryPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstQuery
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "firstQuery:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, firstQuery); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCompileDeferredNV(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            pipeline,
    uint32_t                                    shader)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCompileDeferredNV(device, pipeline, shader)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipeline pipeline
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pipeline:                       "); // HRW
    OutputString(outputFile, "VkPipeline = "); // TEQ
    OutputAddrAscii(outputFile, pipeline); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t shader
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "shader:                         "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, shader); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetMemoryHostPointerPropertiesEXT(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    VkExternalMemoryHandleTypeFlagBits          handleType,
    uint64_t                                    pHostPointer,
    StructPointerDecoder<Decoded_VkMemoryHostPointerPropertiesEXT>* pMemoryHostPointerProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetMemoryHostPointerPropertiesEXT(device, handleType, pHostPointer, pMemoryHostPointerProperties)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkExternalMemoryHandleTypeFlagBits handleType
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "handleType:                     "); // HRW
    OutputString(outputFile, "VkExternalMemoryHandleTypeFlagBits = "); // TEQ
    OutputEnumVkExternalMemoryHandleTypeFlagBits(outputFile, handleType); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimalAscii(outputFile, handleType);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: const void* pHostPointer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pHostPointer:                   "); // HRW
    OutputString(outputFile, "const void* = "); // TEQ
    if ( !pHostPointer) // WWW
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pHostPointer); // PWR
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkMemoryHostPointerPropertiesEXT* pMemoryHostPointerProperties
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pMemoryHostPointerProperties:   "); // HRW
    OutputString(outputFile, "VkMemoryHostPointerPropertiesEXT* = "); // TEQ
    if (pMemoryHostPointerProperties->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pMemoryHostPointerProperties->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pMemoryHostPointerProperties->HasData() && pMemoryHostPointerProperties->HasAddress())
            OutputStructureAscii(outputFile, *pMemoryHostPointerProperties->GetMetaStructPointer(), indent+1, pMemoryHostPointerProperties->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCmdWriteBufferMarkerAMD(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkPipelineStageFlagBits                     pipelineStage,
    format::HandleId                            dstBuffer,
    VkDeviceSize                                dstOffset,
    uint32_t                                    marker)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdWriteBufferMarkerAMD(commandBuffer, pipelineStage, dstBuffer, dstOffset, marker)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPipelineStageFlagBits pipelineStage
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pipelineStage:                  "); // HRW
    OutputString(outputFile, "VkPipelineStageFlagBits = "); // TEQ
    OutputEnumVkPipelineStageFlagBits(outputFile, pipelineStage); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimalAscii(outputFile, pipelineStage);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer dstBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "dstBuffer:                      "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    OutputAddrAscii(outputFile, dstBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize dstOffset
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "dstOffset:                      "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    OutputSignedDecimalAscii(outputFile, dstOffset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t marker
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "marker:                         "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, marker); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    PointerDecoder<uint32_t>*                   pTimeDomainCount,
    PointerDecoder<VkTimeDomainEXT>*            pTimeDomains)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceCalibrateableTimeDomainsEXT(physicalDevice, pTimeDomainCount, pTimeDomains)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pTimeDomainCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pTimeDomainCount:               "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pTimeDomainCount->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pTimeDomainCount = {false, false, false, nullptr};
        if (pTimeDomainCount->HasData() && pTimeDomainCount->HasAddress())
            OutputScalarValueAscii(outputFile, pTimeDomainCount->GetPointer(), vinfo_pTimeDomainCount); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkTimeDomainEXT* pTimeDomains
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pTimeDomains:                   "); // HRW
    OutputString(outputFile, "VkTimeDomainEXT* = "); // TEQ
    if (pTimeDomains->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pTimeDomains->GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pTimeDomains = {false, true, false, OutputEnumVkTimeDomainEXT};
        OutputArrayAscii(outputFile, indent, "VkTimeDomainEXT*", pTimeDomains, "pTimeDomains", *pTimeDomainCount->GetPointer(), vinfo_pTimeDomains); // AUB
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetCalibratedTimestampsEXT(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    uint32_t                                    timestampCount,
    const StructPointerDecoder<Decoded_VkCalibratedTimestampInfoEXT>& pTimestampInfos,
    PointerDecoder<uint64_t>*                   pTimestamps,
    PointerDecoder<uint64_t>*                   pMaxDeviation)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetCalibratedTimestampsEXT(device, timestampCount, pTimestampInfos, pTimestamps, pMaxDeviation)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t timestampCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "timestampCount:                 "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, timestampCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkCalibratedTimestampInfoEXT* pTimestampInfos
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pTimestampInfos:                "); // HRW
    OutputString(outputFile, "const VkCalibratedTimestampInfoEXT* = "); // TEQ
    if (pTimestampInfos.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pTimestampInfos.GetAddress()); // WVS
        if (pTimestampInfos.HasData() && pTimestampInfos.HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkCalibratedTimestampInfoEXT", pTimestampInfos.GetMetaStructPointer(), "pTimestampInfos", timestampCount, false, pTimestampInfos.GetAddress(), sizeof(VkCalibratedTimestampInfoEXT));  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint64_t* pTimestamps
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pTimestamps:                    "); // HRW
    OutputString(outputFile, "uint64_t* = "); // TEQ
    if (pTimestamps->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pTimestamps->GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pTimestamps = {false, false, false, nullptr};
        OutputArrayAscii(outputFile, indent, "uint64_t*", pTimestamps, "pTimestamps", timestampCount, vinfo_pTimestamps); // AUB
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint64_t* pMaxDeviation
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pMaxDeviation:                  "); // HRW
    OutputString(outputFile, "uint64_t* = "); // TEQ
    if (pMaxDeviation->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pMaxDeviation = {false, false, false, nullptr};
        if (pMaxDeviation->HasData() && pMaxDeviation->HasAddress())
            OutputScalarValueAscii(outputFile, pMaxDeviation->GetPointer(), vinfo_pMaxDeviation); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCmdDrawMeshTasksNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    taskCount,
    uint32_t                                    firstTask)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdDrawMeshTasksNV(commandBuffer, taskCount, firstTask)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t taskCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "taskCount:                      "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, taskCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstTask
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "firstTask:                      "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, firstTask); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdDrawMeshTasksIndirectNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    uint32_t                                    drawCount,
    uint32_t                                    stride)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdDrawMeshTasksIndirectNV(commandBuffer, buffer, offset, drawCount, stride)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer buffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "buffer:                         "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    OutputAddrAscii(outputFile, buffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize offset
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "offset:                         "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    OutputSignedDecimalAscii(outputFile, offset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t drawCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "drawCount:                      "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, drawCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t stride
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "stride:                         "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, stride); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdDrawMeshTasksIndirectCountNV(
    const ApiCallInfo&                          call_info,
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
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdDrawMeshTasksIndirectCountNV(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer buffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "buffer:                         "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    OutputAddrAscii(outputFile, buffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize offset
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "offset:                         "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    OutputSignedDecimalAscii(outputFile, offset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBuffer countBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "countBuffer:                    "); // HRW
    OutputString(outputFile, "VkBuffer = "); // TEQ
    OutputAddrAscii(outputFile, countBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceSize countBufferOffset
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "countBufferOffset:              "); // HRW
    OutputString(outputFile, "VkDeviceSize = "); // TEQ
    OutputSignedDecimalAscii(outputFile, countBufferOffset); // EQA
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t maxDrawCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "maxDrawCount:                   "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, maxDrawCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t stride
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "stride:                         "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, stride); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCmdSetExclusiveScissorNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    firstExclusiveScissor,
    uint32_t                                    exclusiveScissorCount,
    const StructPointerDecoder<Decoded_VkRect2D>& pExclusiveScissors)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdSetExclusiveScissorNV(commandBuffer, firstExclusiveScissor, exclusiveScissorCount, pExclusiveScissors)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstExclusiveScissor
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "firstExclusiveScissor:          "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, firstExclusiveScissor); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t exclusiveScissorCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "exclusiveScissorCount:          "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, exclusiveScissorCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkRect2D* pExclusiveScissors
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pExclusiveScissors:             "); // HRW
    OutputString(outputFile, "const VkRect2D* = "); // TEQ
    if (pExclusiveScissors.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pExclusiveScissors.GetAddress()); // WVS
        if (pExclusiveScissors.HasData() && pExclusiveScissors.HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkRect2D", pExclusiveScissors.GetMetaStructPointer(), "pExclusiveScissors", exclusiveScissorCount, false, pExclusiveScissors.GetAddress(), sizeof(VkRect2D));  // CCO
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCmdSetCheckpointNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint64_t                                    pCheckpointMarker)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdSetCheckpointNV(commandBuffer, pCheckpointMarker)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const void* pCheckpointMarker
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCheckpointMarker:              "); // HRW
    OutputString(outputFile, "const void* = "); // TEQ
    if ( !pCheckpointMarker) // WWW
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCheckpointMarker); // PWR
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetQueueCheckpointDataNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            queue,
    PointerDecoder<uint32_t>*                   pCheckpointDataCount,
    StructPointerDecoder<Decoded_VkCheckpointDataNV>* pCheckpointData)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetQueueCheckpointDataNV(queue, pCheckpointDataCount, pCheckpointData)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkQueue queue
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "queue:                          "); // HRW
    OutputString(outputFile, "VkQueue = "); // TEQ
    OutputAddrAscii(outputFile, queue); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pCheckpointDataCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCheckpointDataCount:           "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pCheckpointDataCount->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pCheckpointDataCount = {false, false, false, nullptr};
        if (pCheckpointDataCount->HasData() && pCheckpointDataCount->HasAddress())
            OutputScalarValueAscii(outputFile, pCheckpointDataCount->GetPointer(), vinfo_pCheckpointDataCount); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkCheckpointDataNV* pCheckpointData
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCheckpointData:                "); // HRW
    OutputString(outputFile, "VkCheckpointDataNV* = "); // TEQ
    if (pCheckpointData->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCheckpointData->GetAddress()); // WUS
        if (pCheckpointData->HasData() && pCheckpointData->HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkCheckpointDataNV", pCheckpointData->GetMetaStructPointer(), "pCheckpointData", *pCheckpointDataCount->GetPointer(), false, pCheckpointData->GetAddress(), sizeof(VkCheckpointDataNV));  // CCN
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkInitializePerformanceApiINTEL(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkInitializePerformanceApiInfoINTEL>& pInitializeInfo)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkInitializePerformanceApiINTEL(device, pInitializeInfo)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkInitializePerformanceApiInfoINTEL* pInitializeInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pInitializeInfo:                "); // HRW
    OutputString(outputFile, "const VkInitializePerformanceApiInfoINTEL* = "); // TEQ
    if (pInitializeInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pInitializeInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pInitializeInfo.HasData() && pInitializeInfo.HasAddress())
            OutputStructureAscii(outputFile, *pInitializeInfo.GetMetaStructPointer(), indent+1, pInitializeInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkUninitializePerformanceApiINTEL(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkUninitializePerformanceApiINTEL(device)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdSetPerformanceMarkerINTEL(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkPerformanceMarkerInfoINTEL>& pMarkerInfo)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdSetPerformanceMarkerINTEL(commandBuffer, pMarkerInfo)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPerformanceMarkerInfoINTEL* pMarkerInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pMarkerInfo:                    "); // HRW
    OutputString(outputFile, "const VkPerformanceMarkerInfoINTEL* = "); // TEQ
    if (pMarkerInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pMarkerInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pMarkerInfo.HasData() && pMarkerInfo.HasAddress())
            OutputStructureAscii(outputFile, *pMarkerInfo.GetMetaStructPointer(), indent+1, pMarkerInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdSetPerformanceStreamMarkerINTEL(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkPerformanceStreamMarkerInfoINTEL>& pMarkerInfo)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdSetPerformanceStreamMarkerINTEL(commandBuffer, pMarkerInfo)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPerformanceStreamMarkerInfoINTEL* pMarkerInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pMarkerInfo:                    "); // HRW
    OutputString(outputFile, "const VkPerformanceStreamMarkerInfoINTEL* = "); // TEQ
    if (pMarkerInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pMarkerInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pMarkerInfo.HasData() && pMarkerInfo.HasAddress())
            OutputStructureAscii(outputFile, *pMarkerInfo.GetMetaStructPointer(), indent+1, pMarkerInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkCmdSetPerformanceOverrideINTEL(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkPerformanceOverrideInfoINTEL>& pOverrideInfo)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdSetPerformanceOverrideINTEL(commandBuffer, pOverrideInfo)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPerformanceOverrideInfoINTEL* pOverrideInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pOverrideInfo:                  "); // HRW
    OutputString(outputFile, "const VkPerformanceOverrideInfoINTEL* = "); // TEQ
    if (pOverrideInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pOverrideInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pOverrideInfo.HasData() && pOverrideInfo.HasAddress())
            OutputStructureAscii(outputFile, *pOverrideInfo.GetMetaStructPointer(), indent+1, pOverrideInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkAcquirePerformanceConfigurationINTEL(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkPerformanceConfigurationAcquireInfoINTEL>& pAcquireInfo,
    HandlePointerDecoder<VkPerformanceConfigurationINTEL>* pConfiguration)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkAcquirePerformanceConfigurationINTEL(device, pAcquireInfo, pConfiguration)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPerformanceConfigurationAcquireInfoINTEL* pAcquireInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAcquireInfo:                   "); // HRW
    OutputString(outputFile, "const VkPerformanceConfigurationAcquireInfoINTEL* = "); // TEQ
    if (pAcquireInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAcquireInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAcquireInfo.HasData() && pAcquireInfo.HasAddress())
            OutputStructureAscii(outputFile, *pAcquireInfo.GetMetaStructPointer(), indent+1, pAcquireInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPerformanceConfigurationINTEL* pConfiguration
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pConfiguration:                 "); // HRW
    OutputString(outputFile, "VkPerformanceConfigurationINTEL* = "); // TEQ
    if (pConfiguration->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pConfiguration = {true, false, false, nullptr};
        if (pConfiguration->HasData() && pConfiguration->HasAddress())
            OutputScalarValueAscii(outputFile, pConfiguration->GetPointer(), vinfo_pConfiguration); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkReleasePerformanceConfigurationINTEL(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            configuration)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkReleasePerformanceConfigurationINTEL(device, configuration)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPerformanceConfigurationINTEL configuration
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "configuration:                  "); // HRW
    OutputString(outputFile, "VkPerformanceConfigurationINTEL = "); // TEQ
    OutputAddrAscii(outputFile, configuration); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkQueueSetPerformanceConfigurationINTEL(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            queue,
    format::HandleId                            configuration)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkQueueSetPerformanceConfigurationINTEL(queue, configuration)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkQueue queue
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "queue:                          "); // HRW
    OutputString(outputFile, "VkQueue = "); // TEQ
    OutputAddrAscii(outputFile, queue); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPerformanceConfigurationINTEL configuration
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "configuration:                  "); // HRW
    OutputString(outputFile, "VkPerformanceConfigurationINTEL = "); // TEQ
    OutputAddrAscii(outputFile, configuration); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetPerformanceParameterINTEL(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    VkPerformanceParameterTypeINTEL             parameter,
    StructPointerDecoder<Decoded_VkPerformanceValueINTEL>* pValue)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPerformanceParameterINTEL(device, parameter, pValue)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPerformanceParameterTypeINTEL parameter
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "parameter:                      "); // HRW
    OutputString(outputFile, "VkPerformanceParameterTypeINTEL = "); // TEQ
    OutputEnumVkPerformanceParameterTypeINTEL(outputFile, parameter); // VSA
    OutputString(outputFile, " (");
    OutputUnsignedDecimalAscii(outputFile, parameter);
    OutputString(outputFile, ")");
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPerformanceValueINTEL* pValue
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pValue:                         "); // HRW
    OutputString(outputFile, "VkPerformanceValueINTEL* = "); // TEQ
    if (pValue->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pValue->GetAddress()); // JHH
        OutputString(outputFile, ":");
        if (pValue->HasData() && pValue->HasAddress())
            OutputStructureAscii(outputFile, *pValue->GetMetaStructPointer(), indent+1, pValue->GetAddress()); // GLK
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkSetLocalDimmingAMD(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            swapChain,
    VkBool32                                    localDimmingEnable)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkSetLocalDimmingAMD(device, swapChain, localDimmingEnable)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSwapchainKHR swapChain
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "swapChain:                      "); // HRW
    OutputString(outputFile, "VkSwapchainKHR = "); // TEQ
    OutputAddrAscii(outputFile, swapChain); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkBool32 localDimmingEnable
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "localDimmingEnable:             "); // HRW
    OutputString(outputFile, "VkBool32 = "); // TEQ
    OutputSignedDecimalAscii(outputFile, localDimmingEnable); // EQA
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateImagePipeSurfaceFUCHSIA(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkImagePipeSurfaceCreateInfoFUCHSIA>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreateImagePipeSurfaceFUCHSIA(instance, pCreateInfo, pAllocator, pSurface)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "instance:                       "); // HRW
    OutputString(outputFile, "VkInstance = "); // TEQ
    OutputAddrAscii(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkImagePipeSurfaceCreateInfoFUCHSIA* pCreateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkImagePipeSurfaceCreateInfoFUCHSIA* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pCreateInfo.HasData() && pCreateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR* pSurface
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSurface:                       "); // HRW
    OutputString(outputFile, "VkSurfaceKHR* = "); // TEQ
    if (pSurface->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pSurface = {true, false, false, nullptr};
        if (pSurface->HasData() && pSurface->HasAddress())
            OutputScalarValueAscii(outputFile, pSurface->GetPointer(), vinfo_pSurface); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateMetalSurfaceEXT(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkMetalSurfaceCreateInfoEXT>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreateMetalSurfaceEXT(instance, pCreateInfo, pAllocator, pSurface)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "instance:                       "); // HRW
    OutputString(outputFile, "VkInstance = "); // TEQ
    OutputAddrAscii(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkMetalSurfaceCreateInfoEXT* pCreateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkMetalSurfaceCreateInfoEXT* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pCreateInfo.HasData() && pCreateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR* pSurface
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSurface:                       "); // HRW
    OutputString(outputFile, "VkSurfaceKHR* = "); // TEQ
    if (pSurface->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pSurface = {true, false, false, nullptr};
        if (pSurface->HasData() && pSurface->HasAddress())
            OutputScalarValueAscii(outputFile, pSurface->GetPointer(), vinfo_pSurface); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetBufferDeviceAddressEXT(
    VkDeviceAddress                             returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkBufferDeviceAddressInfoEXT>& pInfo)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetBufferDeviceAddressEXT(device, pInfo)");
    fprintf(outputFile, " returns 0x%" PRIx64 ":\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkBufferDeviceAddressInfoEXT* pInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pInfo:                          "); // HRW
    OutputString(outputFile, "const VkBufferDeviceAddressInfoEXT* = "); // TEQ
    if (pInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pInfo.HasData() && pInfo.HasAddress())
            OutputStructureAscii(outputFile, *pInfo.GetMetaStructPointer(), indent+1, pInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    PointerDecoder<uint32_t>*                   pPropertyCount,
    StructPointerDecoder<Decoded_VkCooperativeMatrixPropertiesNV>* pProperties)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceCooperativeMatrixPropertiesNV(physicalDevice, pPropertyCount, pProperties)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pPropertyCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pPropertyCount:                 "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pPropertyCount->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pPropertyCount = {false, false, false, nullptr};
        if (pPropertyCount->HasData() && pPropertyCount->HasAddress())
            OutputScalarValueAscii(outputFile, pPropertyCount->GetPointer(), vinfo_pPropertyCount); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkCooperativeMatrixPropertiesNV* pProperties
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pProperties:                    "); // HRW
    OutputString(outputFile, "VkCooperativeMatrixPropertiesNV* = "); // TEQ
    if (pProperties->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pProperties->GetAddress()); // WUS
        if (pProperties->HasData() && pProperties->HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkCooperativeMatrixPropertiesNV", pProperties->GetMetaStructPointer(), "pProperties", *pPropertyCount->GetPointer(), false, pProperties->GetAddress(), sizeof(VkCooperativeMatrixPropertiesNV));  // CCN
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    PointerDecoder<uint32_t>*                   pCombinationCount,
    StructPointerDecoder<Decoded_VkFramebufferMixedSamplesCombinationNV>* pCombinations)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(physicalDevice, pCombinationCount, pCombinations)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pCombinationCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCombinationCount:              "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pCombinationCount->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pCombinationCount = {false, false, false, nullptr};
        if (pCombinationCount->HasData() && pCombinationCount->HasAddress())
            OutputScalarValueAscii(outputFile, pCombinationCount->GetPointer(), vinfo_pCombinationCount); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkFramebufferMixedSamplesCombinationNV* pCombinations
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCombinations:                  "); // HRW
    OutputString(outputFile, "VkFramebufferMixedSamplesCombinationNV* = "); // TEQ
    if (pCombinations->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCombinations->GetAddress()); // WUS
        if (pCombinations->HasData() && pCombinations->HasAddress())
            OutputArrayOfStructsAscii(outputFile, indent+1, "VkFramebufferMixedSamplesCombinationNV", pCombinations->GetMetaStructPointer(), "pCombinations", *pCombinationCount->GetPointer(), false, pCombinations->GetAddress(), sizeof(VkFramebufferMixedSamplesCombinationNV));  // CCN
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSurfacePresentModes2EXT(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceSurfaceInfo2KHR>& pSurfaceInfo,
    PointerDecoder<uint32_t>*                   pPresentModeCount,
    PointerDecoder<VkPresentModeKHR>*           pPresentModes)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetPhysicalDeviceSurfacePresentModes2EXT(physicalDevice, pSurfaceInfo, pPresentModeCount, pPresentModes)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkPhysicalDevice physicalDevice
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "physicalDevice:                 "); // HRW
    OutputString(outputFile, "VkPhysicalDevice = "); // TEQ
    OutputAddrAscii(outputFile, physicalDevice); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSurfaceInfo:                   "); // HRW
    OutputString(outputFile, "const VkPhysicalDeviceSurfaceInfo2KHR* = "); // TEQ
    if (pSurfaceInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pSurfaceInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pSurfaceInfo.HasData() && pSurfaceInfo.HasAddress())
            OutputStructureAscii(outputFile, *pSurfaceInfo.GetMetaStructPointer(), indent+1, pSurfaceInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t* pPresentModeCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pPresentModeCount:              "); // HRW
    OutputString(outputFile, "uint32_t* = "); // TEQ
    if (pPresentModeCount->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pPresentModeCount = {false, false, false, nullptr};
        if (pPresentModeCount->HasData() && pPresentModeCount->HasAddress())
            OutputScalarValueAscii(outputFile, pPresentModeCount->GetPointer(), vinfo_pPresentModeCount); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkPresentModeKHR* pPresentModes
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pPresentModes:                  "); // HRW
    OutputString(outputFile, "VkPresentModeKHR* = "); // TEQ
    if (pPresentModes->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pPresentModes->GetAddress()); // PAZ
        OutputScalarValueStructInfo vinfo_pPresentModes = {false, true, false, OutputEnumVkPresentModeKHR};
        OutputArrayAscii(outputFile, indent, "VkPresentModeKHR*", pPresentModes, "pPresentModes", *pPresentModeCount->GetPointer(), vinfo_pPresentModes); // AUB
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkAcquireFullScreenExclusiveModeEXT(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            swapchain)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkAcquireFullScreenExclusiveModeEXT(device, swapchain)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSwapchainKHR swapchain
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "swapchain:                      "); // HRW
    OutputString(outputFile, "VkSwapchainKHR = "); // TEQ
    OutputAddrAscii(outputFile, swapchain); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkReleaseFullScreenExclusiveModeEXT(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            swapchain)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkReleaseFullScreenExclusiveModeEXT(device, swapchain)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSwapchainKHR swapchain
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "swapchain:                      "); // HRW
    OutputString(outputFile, "VkSwapchainKHR = "); // TEQ
    OutputAddrAscii(outputFile, swapchain); // PAQ
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

void VulkanAsciiConsumer::Process_vkGetDeviceGroupSurfacePresentModes2EXT(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceSurfaceInfo2KHR>& pSurfaceInfo,
    PointerDecoder<VkDeviceGroupPresentModeFlagsKHR>* pModes)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkGetDeviceGroupSurfacePresentModes2EXT(device, pSurfaceInfo, pModes)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSurfaceInfo:                   "); // HRW
    OutputString(outputFile, "const VkPhysicalDeviceSurfaceInfo2KHR* = "); // TEQ
    if (pSurfaceInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pSurfaceInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pSurfaceInfo.HasData() && pSurfaceInfo.HasAddress())
            OutputStructureAscii(outputFile, *pSurfaceInfo.GetMetaStructPointer(), indent+1, pSurfaceInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkDeviceGroupPresentModeFlagsKHR* pModes
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pModes:                         "); // HRW
    OutputString(outputFile, "VkDeviceGroupPresentModeFlagsKHR* = "); // TEQ
    if (pModes->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pModes = {false, false, true, OutputEnumVkDeviceGroupPresentModeFlagBitsKHR};
        if (pModes->HasData() && pModes->HasAddress())
            OutputScalarValueAscii(outputFile, pModes->GetPointer(), vinfo_pModes); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCreateHeadlessSurfaceEXT(
    VkResult                                    returnValue,
    const ApiCallInfo&                          call_info,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkHeadlessSurfaceCreateInfoEXT>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCreateHeadlessSurfaceEXT(instance, pCreateInfo, pAllocator, pSurface)");
    fprintf(outputFile, " returns VkResult ");
    OutputEnumVkResult(outputFile, returnValue);
    fprintf(outputFile, " (%" PRId32 "):\n", returnValue);

    // func arg: VkInstance instance
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "instance:                       "); // HRW
    OutputString(outputFile, "VkInstance = "); // TEQ
    OutputAddrAscii(outputFile, instance); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkHeadlessSurfaceCreateInfoEXT* pCreateInfo
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pCreateInfo:                    "); // HRW
    OutputString(outputFile, "const VkHeadlessSurfaceCreateInfoEXT* = "); // TEQ
    if (pCreateInfo.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pCreateInfo.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pCreateInfo.HasData() && pCreateInfo.HasAddress())
            OutputStructureAscii(outputFile, *pCreateInfo.GetMetaStructPointer(), indent+1, pCreateInfo.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: const VkAllocationCallbacks* pAllocator
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pAllocator:                     "); // HRW
    OutputString(outputFile, "const VkAllocationCallbacks* = "); // TEQ
    if (pAllocator.GetPointer() == nullptr) // WUY
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputAddrAscii(outputFile, pAllocator.GetAddress()); // JHI
        OutputString(outputFile, ":");
        if (pAllocator.HasData() && pAllocator.HasAddress())
            OutputStructureAscii(outputFile, *pAllocator.GetMetaStructPointer(), indent+1, pAllocator.GetAddress()); // GLM
    }
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkSurfaceKHR* pSurface
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "pSurface:                       "); // HRW
    OutputString(outputFile, "VkSurfaceKHR* = "); // TEQ
    if (pSurface->GetPointer() == nullptr) // WUR
    {
        OutputString(outputFile, "NULL");
    }
    else
    {
        OutputScalarValueStructInfo vinfo_pSurface = {true, false, false, nullptr};
        if (pSurface->HasData() && pSurface->HasAddress())
            OutputScalarValueAscii(outputFile, pSurface->GetPointer(), vinfo_pSurface); // PNS
    }
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkCmdSetLineStippleEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    lineStippleFactor,
    uint16_t                                    lineStipplePattern)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkCmdSetLineStippleEXT(commandBuffer, lineStippleFactor, lineStipplePattern)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkCommandBuffer commandBuffer
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "commandBuffer:                  "); // HRW
    OutputString(outputFile, "VkCommandBuffer = "); // TEQ
    OutputAddrAscii(outputFile, commandBuffer); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t lineStippleFactor
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "lineStippleFactor:              "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, lineStippleFactor); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint16_t lineStipplePattern
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "lineStipplePattern:             "); // HRW
    OutputString(outputFile, "uint16_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, lineStipplePattern); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}


void VulkanAsciiConsumer::Process_vkResetQueryPoolEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            queryPool,
    uint32_t                                    firstQuery,
    uint32_t                                    queryCount)
{
    uint32_t indent = 1;
    FILE* outputFile = GetFile();
    fprintf(outputFile, "Thread %" PRIu64 ", Frame %" PRIu32 ":\n", call_info.thread_id, frameNumber); // FNB
    fprintf(outputFile, "vkResetQueryPoolEXT(device, queryPool, firstQuery, queryCount)");
    fprintf(outputFile, " returns void:\n");

    // func arg: VkDevice device
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "device:                         "); // HRW
    OutputString(outputFile, "VkDevice = "); // TEQ
    OutputAddrAscii(outputFile, device); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: VkQueryPool queryPool
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "queryPool:                      "); // HRW
    OutputString(outputFile, "VkQueryPool = "); // TEQ
    OutputAddrAscii(outputFile, queryPool); // PAQ
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t firstQuery
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "firstQuery:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, firstQuery); // UYW
    OutputString(outputFile, "\n"); // HHS

    // func arg: uint32_t queryCount
    OutputIndentAscii(outputFile, indent);
    OutputString(outputFile, "queryCount:                     "); // HRW
    OutputString(outputFile, "uint32_t = "); // TEQ
    OutputUnsignedDecimalAscii(outputFile, queryCount); // UYW
    OutputString(outputFile, "\n"); // HHS

    OutputString(outputFile, "\n"); // HDS
}

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)
