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

#include "generated/generated_vulkan_json_consumer.h"
#include "generated/generated_vulkan_json_enum_util.h"
#include "generated/generated_vulkan_json_struct_util.h"
#include "format/platform_types.h"
#include "util/defines.h"
#include "util/json_utils.h"
#include "vulkan/vulkan.h"
#include <functional>
#include <inttypes.h>
#include <string>

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)

void VulkanJsonConsumer::Process_vkCreateInstance(
    VkResult                                    returnValue,
    const StructPointerDecoder<Decoded_VkInstanceCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkInstance>&     pInstance)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreateInstance\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: const VkInstanceCreateInfo* pCreateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkInstanceCreateInfo*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkInstance* pInstance
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkInstance*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pInstance\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pInstance.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkDestroyInstance(
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkDestroyInstance\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkInstance instance
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkInstance\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"instance\",\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkEnumeratePhysicalDevices(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const PointerDecoder<uint32_t>&             pPhysicalDeviceCount,
    const HandlePointerDecoder<VkPhysicalDevice>& pPhysicalDevices)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkEnumeratePhysicalDevices\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkInstance instance
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkInstance\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"instance\",\n";
    outString += "                },\n";

    // func arg: uint32_t* pPhysicalDeviceCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pPhysicalDeviceCount\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pPhysicalDeviceCount.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkPhysicalDevice* pPhysicalDevices
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pPhysicalDevices\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pPhysicalDevices.GetAddress() /* TWO */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetPhysicalDeviceFeatures(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceFeatures>& pFeatures)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceFeatures\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: VkPhysicalDeviceFeatures* pFeatures
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDeviceFeatures*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pFeatures\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pFeatures.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetPhysicalDeviceFormatProperties(
    format::HandleId                            physicalDevice,
    VkFormat                                    format,
    const StructPointerDecoder<Decoded_VkFormatProperties>& pFormatProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceFormatProperties\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: VkFormat format
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFormat\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"format\",\n";
    outString += "                },\n";

    // func arg: VkFormatProperties* pFormatProperties
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFormatProperties*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pFormatProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pFormatProperties.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetPhysicalDeviceImageFormatProperties(
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
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceImageFormatProperties\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: VkFormat format
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFormat\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"format\",\n";
    outString += "                },\n";

    // func arg: VkImageType type
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"type\",\n";
    outString += "                },\n";

    // func arg: VkImageTiling tiling
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageTiling\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"tiling\",\n";
    outString += "                },\n";

    // func arg: VkImageUsageFlags usage
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageUsageFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"usage\",\n";
    outString += "                },\n";

    // func arg: VkImageCreateFlags flags
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageCreateFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    outString += "                },\n";

    // func arg: VkImageFormatProperties* pImageFormatProperties
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageFormatProperties*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pImageFormatProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pImageFormatProperties.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetPhysicalDeviceProperties(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceProperties>& pProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceProperties\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: VkPhysicalDeviceProperties* pProperties
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDeviceProperties*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pProperties.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetPhysicalDeviceQueueFamilyProperties(
    format::HandleId                            physicalDevice,
    const PointerDecoder<uint32_t>&             pQueueFamilyPropertyCount,
    const StructPointerDecoder<Decoded_VkQueueFamilyProperties>& pQueueFamilyProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceQueueFamilyProperties\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: uint32_t* pQueueFamilyPropertyCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pQueueFamilyPropertyCount\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pQueueFamilyPropertyCount.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkQueueFamilyProperties* pQueueFamilyProperties
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkQueueFamilyProperties*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pQueueFamilyProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pQueueFamilyProperties.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetPhysicalDeviceMemoryProperties(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceMemoryProperties>& pMemoryProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceMemoryProperties\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: VkPhysicalDeviceMemoryProperties* pMemoryProperties
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDeviceMemoryProperties*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pMemoryProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pMemoryProperties.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCreateDevice(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkDeviceCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkDevice>&       pDevice)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreateDevice\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: const VkDeviceCreateInfo* pCreateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkDeviceCreateInfo*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkDevice* pDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pDevice.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkDestroyDevice(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkDestroyDevice\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetDeviceQueue(
    format::HandleId                            device,
    uint32_t                                    queueFamilyIndex,
    uint32_t                                    queueIndex,
    const HandlePointerDecoder<VkQueue>&        pQueue)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetDeviceQueue\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: uint32_t queueFamilyIndex
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queueFamilyIndex\",\n";
    outString += "                },\n";

    // func arg: uint32_t queueIndex
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queueIndex\",\n";
    outString += "                },\n";

    // func arg: VkQueue* pQueue
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkQueue*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pQueue\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pQueue.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkQueueSubmit(
    VkResult                                    returnValue,
    format::HandleId                            queue,
    uint32_t                                    submitCount,
    const StructPointerDecoder<Decoded_VkSubmitInfo>& pSubmits,
    format::HandleId                            fence)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkQueueSubmit\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkQueue queue
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkQueue\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queue\",\n";
    outString += "                },\n";

    // func arg: uint32_t submitCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"submitCount\",\n";
    outString += "                },\n";

    // func arg: const VkSubmitInfo* pSubmits
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkSubmitInfo*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSubmits\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSubmits.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkFence fence
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFence\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"fence\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkQueueWaitIdle(
    VkResult                                    returnValue,
    format::HandleId                            queue)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkQueueWaitIdle\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkQueue queue
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkQueue\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queue\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkDeviceWaitIdle(
    VkResult                                    returnValue,
    format::HandleId                            device)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkDeviceWaitIdle\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkAllocateMemory(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkMemoryAllocateInfo>& pAllocateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkDeviceMemory>& pMemory)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkAllocateMemory\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkMemoryAllocateInfo* pAllocateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkMemoryAllocateInfo*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkDeviceMemory* pMemory
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceMemory*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pMemory\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pMemory.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkFreeMemory(
    format::HandleId                            device,
    format::HandleId                            memory,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkFreeMemory\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkDeviceMemory memory
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceMemory\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"memory\",\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkMapMemory(
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
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkMapMemory\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkDeviceMemory memory
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceMemory\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"memory\",\n";
    outString += "                },\n";

    // func arg: VkDeviceSize offset
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"offset\",\n";
    outString += "                },\n";

    // func arg: VkDeviceSize size
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"size\",\n";
    outString += "                },\n";

    // func arg: VkMemoryMapFlags flags
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkMemoryMapFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    outString += "                },\n";

    // func arg: void** ppData
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void**\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"ppData\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, ppData.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkUnmapMemory(
    format::HandleId                            device,
    format::HandleId                            memory)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkUnmapMemory\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkDeviceMemory memory
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceMemory\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"memory\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkFlushMappedMemoryRanges(
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    memoryRangeCount,
    const StructPointerDecoder<Decoded_VkMappedMemoryRange>& pMemoryRanges)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkFlushMappedMemoryRanges\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: uint32_t memoryRangeCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"memoryRangeCount\",\n";
    outString += "                },\n";

    // func arg: const VkMappedMemoryRange* pMemoryRanges
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkMappedMemoryRange*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pMemoryRanges\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pMemoryRanges.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkInvalidateMappedMemoryRanges(
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    memoryRangeCount,
    const StructPointerDecoder<Decoded_VkMappedMemoryRange>& pMemoryRanges)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkInvalidateMappedMemoryRanges\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: uint32_t memoryRangeCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"memoryRangeCount\",\n";
    outString += "                },\n";

    // func arg: const VkMappedMemoryRange* pMemoryRanges
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkMappedMemoryRange*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pMemoryRanges\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pMemoryRanges.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetDeviceMemoryCommitment(
    format::HandleId                            device,
    format::HandleId                            memory,
    const PointerDecoder<VkDeviceSize>&         pCommittedMemoryInBytes)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetDeviceMemoryCommitment\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkDeviceMemory memory
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceMemory\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"memory\",\n";
    outString += "                },\n";

    // func arg: VkDeviceSize* pCommittedMemoryInBytes
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCommittedMemoryInBytes\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCommittedMemoryInBytes.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkBindBufferMemory(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            buffer,
    format::HandleId                            memory,
    VkDeviceSize                                memoryOffset)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkBindBufferMemory\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkBuffer buffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"buffer\",\n";
    outString += "                },\n";

    // func arg: VkDeviceMemory memory
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceMemory\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"memory\",\n";
    outString += "                },\n";

    // func arg: VkDeviceSize memoryOffset
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"memoryOffset\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkBindImageMemory(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            image,
    format::HandleId                            memory,
    VkDeviceSize                                memoryOffset)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkBindImageMemory\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkImage image
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImage\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"image\",\n";
    outString += "                },\n";

    // func arg: VkDeviceMemory memory
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceMemory\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"memory\",\n";
    outString += "                },\n";

    // func arg: VkDeviceSize memoryOffset
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"memoryOffset\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetBufferMemoryRequirements(
    format::HandleId                            device,
    format::HandleId                            buffer,
    const StructPointerDecoder<Decoded_VkMemoryRequirements>& pMemoryRequirements)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetBufferMemoryRequirements\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkBuffer buffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"buffer\",\n";
    outString += "                },\n";

    // func arg: VkMemoryRequirements* pMemoryRequirements
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkMemoryRequirements*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pMemoryRequirements\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pMemoryRequirements.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetImageMemoryRequirements(
    format::HandleId                            device,
    format::HandleId                            image,
    const StructPointerDecoder<Decoded_VkMemoryRequirements>& pMemoryRequirements)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetImageMemoryRequirements\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkImage image
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImage\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"image\",\n";
    outString += "                },\n";

    // func arg: VkMemoryRequirements* pMemoryRequirements
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkMemoryRequirements*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pMemoryRequirements\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pMemoryRequirements.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetImageSparseMemoryRequirements(
    format::HandleId                            device,
    format::HandleId                            image,
    const PointerDecoder<uint32_t>&             pSparseMemoryRequirementCount,
    const StructPointerDecoder<Decoded_VkSparseImageMemoryRequirements>& pSparseMemoryRequirements)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetImageSparseMemoryRequirements\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkImage image
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImage\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"image\",\n";
    outString += "                },\n";

    // func arg: uint32_t* pSparseMemoryRequirementCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSparseMemoryRequirementCount\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSparseMemoryRequirementCount.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkSparseImageMemoryRequirements* pSparseMemoryRequirements
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSparseImageMemoryRequirements*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSparseMemoryRequirements\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSparseMemoryRequirements.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetPhysicalDeviceSparseImageFormatProperties(
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
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceSparseImageFormatProperties\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: VkFormat format
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFormat\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"format\",\n";
    outString += "                },\n";

    // func arg: VkImageType type
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"type\",\n";
    outString += "                },\n";

    // func arg: VkSampleCountFlagBits samples
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSampleCountFlagBits\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"samples\",\n";
    outString += "                },\n";

    // func arg: VkImageUsageFlags usage
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageUsageFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"usage\",\n";
    outString += "                },\n";

    // func arg: VkImageTiling tiling
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageTiling\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"tiling\",\n";
    outString += "                },\n";

    // func arg: uint32_t* pPropertyCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pPropertyCount\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pPropertyCount.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkSparseImageFormatProperties* pProperties
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSparseImageFormatProperties*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pProperties.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkQueueBindSparse(
    VkResult                                    returnValue,
    format::HandleId                            queue,
    uint32_t                                    bindInfoCount,
    const StructPointerDecoder<Decoded_VkBindSparseInfo>& pBindInfo,
    format::HandleId                            fence)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkQueueBindSparse\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkQueue queue
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkQueue\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queue\",\n";
    outString += "                },\n";

    // func arg: uint32_t bindInfoCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"bindInfoCount\",\n";
    outString += "                },\n";

    // func arg: const VkBindSparseInfo* pBindInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkBindSparseInfo*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pBindInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pBindInfo.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkFence fence
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFence\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"fence\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCreateFence(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkFenceCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkFence>&        pFence)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreateFence\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkFenceCreateInfo* pCreateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkFenceCreateInfo*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkFence* pFence
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFence*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pFence\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pFence.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkDestroyFence(
    format::HandleId                            device,
    format::HandleId                            fence,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkDestroyFence\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkFence fence
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFence\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"fence\",\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkResetFences(
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    fenceCount,
    const HandlePointerDecoder<VkFence>&        pFences)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkResetFences\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: uint32_t fenceCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"fenceCount\",\n";
    outString += "                },\n";

    // func arg: const VkFence* pFences
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkFence*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pFences\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pFences.GetAddress() /* TWO */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetFenceStatus(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            fence)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetFenceStatus\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkFence fence
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFence\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"fence\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkWaitForFences(
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
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkWaitForFences\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: uint32_t fenceCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"fenceCount\",\n";
    outString += "                },\n";

    // func arg: const VkFence* pFences
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkFence*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pFences\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pFences.GetAddress() /* TWO */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkBool32 waitAll
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"waitAll\",\n";
    outString += "                },\n";

    // func arg: uint64_t timeout
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"timeout\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCreateSemaphore(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSemaphoreCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSemaphore>&    pSemaphore)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreateSemaphore\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkSemaphoreCreateInfo* pCreateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkSemaphoreCreateInfo*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkSemaphore* pSemaphore
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSemaphore*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSemaphore\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSemaphore.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkDestroySemaphore(
    format::HandleId                            device,
    format::HandleId                            semaphore,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkDestroySemaphore\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkSemaphore semaphore
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSemaphore\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"semaphore\",\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCreateEvent(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkEventCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkEvent>&        pEvent)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreateEvent\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkEventCreateInfo* pCreateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkEventCreateInfo*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkEvent* pEvent
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkEvent*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pEvent\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pEvent.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkDestroyEvent(
    format::HandleId                            device,
    format::HandleId                            event,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkDestroyEvent\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkEvent event
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkEvent\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"event\",\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetEventStatus(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            event)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetEventStatus\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkEvent event
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkEvent\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"event\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkSetEvent(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            event)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkSetEvent\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkEvent event
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkEvent\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"event\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkResetEvent(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            event)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkResetEvent\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkEvent event
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkEvent\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"event\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCreateQueryPool(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkQueryPoolCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkQueryPool>&    pQueryPool)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreateQueryPool\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkQueryPoolCreateInfo* pCreateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkQueryPoolCreateInfo*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkQueryPool* pQueryPool
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkQueryPool*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pQueryPool\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pQueryPool.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkDestroyQueryPool(
    format::HandleId                            device,
    format::HandleId                            queryPool,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkDestroyQueryPool\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkQueryPool queryPool
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkQueryPool\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queryPool\",\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetQueryPoolResults(
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
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetQueryPoolResults\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkQueryPool queryPool
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkQueryPool\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queryPool\",\n";
    outString += "                },\n";

    // func arg: uint32_t firstQuery
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"firstQuery\",\n";
    outString += "                },\n";

    // func arg: uint32_t queryCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queryCount\",\n";
    outString += "                },\n";

    // func arg: size_t dataSize
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"size_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dataSize\",\n";
    outString += "                },\n";

    // func arg: void* pData
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pData\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pData.GetAddress() /* TWO */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkDeviceSize stride
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"stride\",\n";
    outString += "                },\n";

    // func arg: VkQueryResultFlags flags
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkQueryResultFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCreateBuffer(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkBufferCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkBuffer>&       pBuffer)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreateBuffer\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkBufferCreateInfo* pCreateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkBufferCreateInfo*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkBuffer* pBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pBuffer.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkDestroyBuffer(
    format::HandleId                            device,
    format::HandleId                            buffer,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkDestroyBuffer\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkBuffer buffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"buffer\",\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCreateBufferView(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkBufferViewCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkBufferView>&   pView)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreateBufferView\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkBufferViewCreateInfo* pCreateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkBufferViewCreateInfo*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkBufferView* pView
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBufferView*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pView\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pView.GetAddress() /* PIO */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkDestroyBufferView(
    format::HandleId                            device,
    format::HandleId                            bufferView,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkDestroyBufferView\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkBufferView bufferView
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBufferView\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"bufferView\",\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCreateImage(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImageCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkImage>&        pImage)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreateImage\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkImageCreateInfo* pCreateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkImageCreateInfo*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkImage* pImage
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImage*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pImage\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pImage.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkDestroyImage(
    format::HandleId                            device,
    format::HandleId                            image,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkDestroyImage\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkImage image
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImage\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"image\",\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetImageSubresourceLayout(
    format::HandleId                            device,
    format::HandleId                            image,
    const StructPointerDecoder<Decoded_VkImageSubresource>& pSubresource,
    const StructPointerDecoder<Decoded_VkSubresourceLayout>& pLayout)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetImageSubresourceLayout\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkImage image
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImage\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"image\",\n";
    outString += "                },\n";

    // func arg: const VkImageSubresource* pSubresource
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkImageSubresource*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSubresource\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSubresource.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkSubresourceLayout* pLayout
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSubresourceLayout*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pLayout\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pLayout.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCreateImageView(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImageViewCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkImageView>&    pView)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreateImageView\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkImageViewCreateInfo* pCreateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkImageViewCreateInfo*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkImageView* pView
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageView*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pView\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pView.GetAddress() /* PIO */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkDestroyImageView(
    format::HandleId                            device,
    format::HandleId                            imageView,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkDestroyImageView\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkImageView imageView
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageView\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"imageView\",\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCreateShaderModule(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkShaderModuleCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkShaderModule>& pShaderModule)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreateShaderModule\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkShaderModuleCreateInfo* pCreateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkShaderModuleCreateInfo*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkShaderModule* pShaderModule
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkShaderModule*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pShaderModule\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pShaderModule.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkDestroyShaderModule(
    format::HandleId                            device,
    format::HandleId                            shaderModule,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkDestroyShaderModule\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkShaderModule shaderModule
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkShaderModule\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderModule\",\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCreatePipelineCache(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkPipelineCacheCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkPipelineCache>& pPipelineCache)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreatePipelineCache\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkPipelineCacheCreateInfo* pCreateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkPipelineCacheCreateInfo*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkPipelineCache* pPipelineCache
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineCache*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pPipelineCache\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pPipelineCache.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkDestroyPipelineCache(
    format::HandleId                            device,
    format::HandleId                            pipelineCache,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkDestroyPipelineCache\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkPipelineCache pipelineCache
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineCache\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pipelineCache\",\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetPipelineCacheData(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            pipelineCache,
    const PointerDecoder<size_t>&               pDataSize,
    const PointerDecoder<uint8_t>&              pData)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPipelineCacheData\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkPipelineCache pipelineCache
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineCache\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pipelineCache\",\n";
    outString += "                },\n";

    // func arg: size_t* pDataSize
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"size_t*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pDataSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pDataSize.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: void* pData
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pData\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pData.GetAddress() /* TWO */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkMergePipelineCaches(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            dstCache,
    uint32_t                                    srcCacheCount,
    const HandlePointerDecoder<VkPipelineCache>& pSrcCaches)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkMergePipelineCaches\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkPipelineCache dstCache
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineCache\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstCache\",\n";
    outString += "                },\n";

    // func arg: uint32_t srcCacheCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"srcCacheCount\",\n";
    outString += "                },\n";

    // func arg: const VkPipelineCache* pSrcCaches
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkPipelineCache*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSrcCaches\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSrcCaches.GetAddress() /* TWO */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCreateGraphicsPipelines(
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
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreateGraphicsPipelines\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkPipelineCache pipelineCache
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineCache\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pipelineCache\",\n";
    outString += "                },\n";

    // func arg: uint32_t createInfoCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"createInfoCount\",\n";
    outString += "                },\n";

    // func arg: const VkGraphicsPipelineCreateInfo* pCreateInfos
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkGraphicsPipelineCreateInfo*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfos\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfos.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkPipeline* pPipelines
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipeline*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pPipelines\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pPipelines.GetAddress() /* TWO */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCreateComputePipelines(
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
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreateComputePipelines\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkPipelineCache pipelineCache
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineCache\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pipelineCache\",\n";
    outString += "                },\n";

    // func arg: uint32_t createInfoCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"createInfoCount\",\n";
    outString += "                },\n";

    // func arg: const VkComputePipelineCreateInfo* pCreateInfos
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkComputePipelineCreateInfo*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfos\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfos.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkPipeline* pPipelines
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipeline*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pPipelines\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pPipelines.GetAddress() /* TWO */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkDestroyPipeline(
    format::HandleId                            device,
    format::HandleId                            pipeline,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkDestroyPipeline\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkPipeline pipeline
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipeline\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pipeline\",\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCreatePipelineLayout(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkPipelineLayoutCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkPipelineLayout>& pPipelineLayout)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreatePipelineLayout\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkPipelineLayoutCreateInfo* pCreateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkPipelineLayoutCreateInfo*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkPipelineLayout* pPipelineLayout
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineLayout*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pPipelineLayout\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pPipelineLayout.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkDestroyPipelineLayout(
    format::HandleId                            device,
    format::HandleId                            pipelineLayout,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkDestroyPipelineLayout\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkPipelineLayout pipelineLayout
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineLayout\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pipelineLayout\",\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCreateSampler(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSamplerCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSampler>&      pSampler)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreateSampler\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkSamplerCreateInfo* pCreateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkSamplerCreateInfo*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkSampler* pSampler
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSampler*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSampler\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSampler.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkDestroySampler(
    format::HandleId                            device,
    format::HandleId                            sampler,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkDestroySampler\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkSampler sampler
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSampler\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sampler\",\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCreateDescriptorSetLayout(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDescriptorSetLayoutCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkDescriptorSetLayout>& pSetLayout)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreateDescriptorSetLayout\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkDescriptorSetLayoutCreateInfo* pCreateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkDescriptorSetLayoutCreateInfo*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkDescriptorSetLayout* pSetLayout
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDescriptorSetLayout*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSetLayout\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSetLayout.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkDestroyDescriptorSetLayout(
    format::HandleId                            device,
    format::HandleId                            descriptorSetLayout,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkDestroyDescriptorSetLayout\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkDescriptorSetLayout descriptorSetLayout
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDescriptorSetLayout\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"descriptorSetLayout\",\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCreateDescriptorPool(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDescriptorPoolCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkDescriptorPool>& pDescriptorPool)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreateDescriptorPool\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkDescriptorPoolCreateInfo* pCreateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkDescriptorPoolCreateInfo*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkDescriptorPool* pDescriptorPool
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDescriptorPool*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pDescriptorPool\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pDescriptorPool.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkDestroyDescriptorPool(
    format::HandleId                            device,
    format::HandleId                            descriptorPool,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkDestroyDescriptorPool\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkDescriptorPool descriptorPool
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDescriptorPool\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"descriptorPool\",\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkResetDescriptorPool(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            descriptorPool,
    VkDescriptorPoolResetFlags                  flags)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkResetDescriptorPool\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkDescriptorPool descriptorPool
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDescriptorPool\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"descriptorPool\",\n";
    outString += "                },\n";

    // func arg: VkDescriptorPoolResetFlags flags
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDescriptorPoolResetFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkAllocateDescriptorSets(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDescriptorSetAllocateInfo>& pAllocateInfo,
    const HandlePointerDecoder<VkDescriptorSet>& pDescriptorSets)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkAllocateDescriptorSets\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkDescriptorSetAllocateInfo* pAllocateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkDescriptorSetAllocateInfo*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkDescriptorSet* pDescriptorSets
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDescriptorSet*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pDescriptorSets\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pDescriptorSets.GetAddress() /* TWO */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkFreeDescriptorSets(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            descriptorPool,
    uint32_t                                    descriptorSetCount,
    const HandlePointerDecoder<VkDescriptorSet>& pDescriptorSets)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkFreeDescriptorSets\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkDescriptorPool descriptorPool
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDescriptorPool\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"descriptorPool\",\n";
    outString += "                },\n";

    // func arg: uint32_t descriptorSetCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"descriptorSetCount\",\n";
    outString += "                },\n";

    // func arg: const VkDescriptorSet* pDescriptorSets
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkDescriptorSet*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pDescriptorSets\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pDescriptorSets.GetAddress() /* TWO */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkUpdateDescriptorSets(
    format::HandleId                            device,
    uint32_t                                    descriptorWriteCount,
    const StructPointerDecoder<Decoded_VkWriteDescriptorSet>& pDescriptorWrites,
    uint32_t                                    descriptorCopyCount,
    const StructPointerDecoder<Decoded_VkCopyDescriptorSet>& pDescriptorCopies)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkUpdateDescriptorSets\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: uint32_t descriptorWriteCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"descriptorWriteCount\",\n";
    outString += "                },\n";

    // func arg: const VkWriteDescriptorSet* pDescriptorWrites
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkWriteDescriptorSet*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pDescriptorWrites\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pDescriptorWrites.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: uint32_t descriptorCopyCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"descriptorCopyCount\",\n";
    outString += "                },\n";

    // func arg: const VkCopyDescriptorSet* pDescriptorCopies
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkCopyDescriptorSet*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pDescriptorCopies\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pDescriptorCopies.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCreateFramebuffer(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkFramebufferCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkFramebuffer>&  pFramebuffer)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreateFramebuffer\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkFramebufferCreateInfo* pCreateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkFramebufferCreateInfo*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkFramebuffer* pFramebuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFramebuffer*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pFramebuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pFramebuffer.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkDestroyFramebuffer(
    format::HandleId                            device,
    format::HandleId                            framebuffer,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkDestroyFramebuffer\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkFramebuffer framebuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFramebuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"framebuffer\",\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCreateRenderPass(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkRenderPassCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkRenderPass>&   pRenderPass)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreateRenderPass\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkRenderPassCreateInfo* pCreateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkRenderPassCreateInfo*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkRenderPass* pRenderPass
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkRenderPass*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pRenderPass\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pRenderPass.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkDestroyRenderPass(
    format::HandleId                            device,
    format::HandleId                            renderPass,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkDestroyRenderPass\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkRenderPass renderPass
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkRenderPass\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"renderPass\",\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetRenderAreaGranularity(
    format::HandleId                            device,
    format::HandleId                            renderPass,
    const StructPointerDecoder<Decoded_VkExtent2D>& pGranularity)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetRenderAreaGranularity\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkRenderPass renderPass
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkRenderPass\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"renderPass\",\n";
    outString += "                },\n";

    // func arg: VkExtent2D* pGranularity
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExtent2D*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pGranularity\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pGranularity.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCreateCommandPool(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkCommandPoolCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkCommandPool>&  pCommandPool)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreateCommandPool\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkCommandPoolCreateInfo* pCreateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkCommandPoolCreateInfo*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkCommandPool* pCommandPool
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandPool*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCommandPool\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCommandPool.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkDestroyCommandPool(
    format::HandleId                            device,
    format::HandleId                            commandPool,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkDestroyCommandPool\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkCommandPool commandPool
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandPool\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandPool\",\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkResetCommandPool(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            commandPool,
    VkCommandPoolResetFlags                     flags)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkResetCommandPool\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkCommandPool commandPool
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandPool\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandPool\",\n";
    outString += "                },\n";

    // func arg: VkCommandPoolResetFlags flags
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandPoolResetFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkAllocateCommandBuffers(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkCommandBufferAllocateInfo>& pAllocateInfo,
    const HandlePointerDecoder<VkCommandBuffer>& pCommandBuffers)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkAllocateCommandBuffers\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkCommandBufferAllocateInfo* pAllocateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkCommandBufferAllocateInfo*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkCommandBuffer* pCommandBuffers
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCommandBuffers\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCommandBuffers.GetAddress() /* TWO */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkFreeCommandBuffers(
    format::HandleId                            device,
    format::HandleId                            commandPool,
    uint32_t                                    commandBufferCount,
    const HandlePointerDecoder<VkCommandBuffer>& pCommandBuffers)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkFreeCommandBuffers\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkCommandPool commandPool
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandPool\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandPool\",\n";
    outString += "                },\n";

    // func arg: uint32_t commandBufferCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBufferCount\",\n";
    outString += "                },\n";

    // func arg: const VkCommandBuffer* pCommandBuffers
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkCommandBuffer*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCommandBuffers\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCommandBuffers.GetAddress() /* TWO */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkBeginCommandBuffer(
    VkResult                                    returnValue,
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkCommandBufferBeginInfo>& pBeginInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkBeginCommandBuffer\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: const VkCommandBufferBeginInfo* pBeginInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkCommandBufferBeginInfo*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pBeginInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pBeginInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkEndCommandBuffer(
    VkResult                                    returnValue,
    format::HandleId                            commandBuffer)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkEndCommandBuffer\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkResetCommandBuffer(
    VkResult                                    returnValue,
    format::HandleId                            commandBuffer,
    VkCommandBufferResetFlags                   flags)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkResetCommandBuffer\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: VkCommandBufferResetFlags flags
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBufferResetFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdBindPipeline(
    format::HandleId                            commandBuffer,
    VkPipelineBindPoint                         pipelineBindPoint,
    format::HandleId                            pipeline)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdBindPipeline\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: VkPipelineBindPoint pipelineBindPoint
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineBindPoint\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pipelineBindPoint\",\n";
    outString += "                },\n";

    // func arg: VkPipeline pipeline
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipeline\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pipeline\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdSetViewport(
    format::HandleId                            commandBuffer,
    uint32_t                                    firstViewport,
    uint32_t                                    viewportCount,
    const StructPointerDecoder<Decoded_VkViewport>& pViewports)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdSetViewport\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: uint32_t firstViewport
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"firstViewport\",\n";
    outString += "                },\n";

    // func arg: uint32_t viewportCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"viewportCount\",\n";
    outString += "                },\n";

    // func arg: const VkViewport* pViewports
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkViewport*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pViewports\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pViewports.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdSetScissor(
    format::HandleId                            commandBuffer,
    uint32_t                                    firstScissor,
    uint32_t                                    scissorCount,
    const StructPointerDecoder<Decoded_VkRect2D>& pScissors)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdSetScissor\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: uint32_t firstScissor
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"firstScissor\",\n";
    outString += "                },\n";

    // func arg: uint32_t scissorCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"scissorCount\",\n";
    outString += "                },\n";

    // func arg: const VkRect2D* pScissors
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkRect2D*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pScissors\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pScissors.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdSetLineWidth(
    format::HandleId                            commandBuffer,
    float                                       lineWidth)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdSetLineWidth\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: float lineWidth
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"lineWidth\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdSetDepthBias(
    format::HandleId                            commandBuffer,
    float                                       depthBiasConstantFactor,
    float                                       depthBiasClamp,
    float                                       depthBiasSlopeFactor)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdSetDepthBias\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: float depthBiasConstantFactor
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"depthBiasConstantFactor\",\n";
    outString += "                },\n";

    // func arg: float depthBiasClamp
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"depthBiasClamp\",\n";
    outString += "                },\n";

    // func arg: float depthBiasSlopeFactor
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"depthBiasSlopeFactor\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdSetBlendConstants(
    format::HandleId                            commandBuffer,
    const PointerDecoder<float>&                blendConstants)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdSetBlendConstants\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: const float blendConstants
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"blendConstants\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, blendConstants.GetAddress() /* UYA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdSetDepthBounds(
    format::HandleId                            commandBuffer,
    float                                       minDepthBounds,
    float                                       maxDepthBounds)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdSetDepthBounds\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: float minDepthBounds
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"minDepthBounds\",\n";
    outString += "                },\n";

    // func arg: float maxDepthBounds
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxDepthBounds\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdSetStencilCompareMask(
    format::HandleId                            commandBuffer,
    VkStencilFaceFlags                          faceMask,
    uint32_t                                    compareMask)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdSetStencilCompareMask\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: VkStencilFaceFlags faceMask
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStencilFaceFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"faceMask\",\n";
    outString += "                },\n";

    // func arg: uint32_t compareMask
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"compareMask\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdSetStencilWriteMask(
    format::HandleId                            commandBuffer,
    VkStencilFaceFlags                          faceMask,
    uint32_t                                    writeMask)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdSetStencilWriteMask\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: VkStencilFaceFlags faceMask
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStencilFaceFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"faceMask\",\n";
    outString += "                },\n";

    // func arg: uint32_t writeMask
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"writeMask\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdSetStencilReference(
    format::HandleId                            commandBuffer,
    VkStencilFaceFlags                          faceMask,
    uint32_t                                    reference)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdSetStencilReference\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: VkStencilFaceFlags faceMask
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStencilFaceFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"faceMask\",\n";
    outString += "                },\n";

    // func arg: uint32_t reference
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"reference\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdBindDescriptorSets(
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
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdBindDescriptorSets\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: VkPipelineBindPoint pipelineBindPoint
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineBindPoint\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pipelineBindPoint\",\n";
    outString += "                },\n";

    // func arg: VkPipelineLayout layout
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineLayout\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"layout\",\n";
    outString += "                },\n";

    // func arg: uint32_t firstSet
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"firstSet\",\n";
    outString += "                },\n";

    // func arg: uint32_t descriptorSetCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"descriptorSetCount\",\n";
    outString += "                },\n";

    // func arg: const VkDescriptorSet* pDescriptorSets
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkDescriptorSet*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pDescriptorSets\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pDescriptorSets.GetAddress() /* TWO */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: uint32_t dynamicOffsetCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dynamicOffsetCount\",\n";
    outString += "                },\n";

    // func arg: const uint32_t* pDynamicOffsets
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const uint32_t*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pDynamicOffsets\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pDynamicOffsets.GetAddress() /* TWO */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdBindIndexBuffer(
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    VkIndexType                                 indexType)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdBindIndexBuffer\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: VkBuffer buffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"buffer\",\n";
    outString += "                },\n";

    // func arg: VkDeviceSize offset
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"offset\",\n";
    outString += "                },\n";

    // func arg: VkIndexType indexType
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkIndexType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"indexType\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdBindVertexBuffers(
    format::HandleId                            commandBuffer,
    uint32_t                                    firstBinding,
    uint32_t                                    bindingCount,
    const HandlePointerDecoder<VkBuffer>&       pBuffers,
    const PointerDecoder<VkDeviceSize>&         pOffsets)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdBindVertexBuffers\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: uint32_t firstBinding
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"firstBinding\",\n";
    outString += "                },\n";

    // func arg: uint32_t bindingCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"bindingCount\",\n";
    outString += "                },\n";

    // func arg: const VkBuffer* pBuffers
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkBuffer*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pBuffers\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pBuffers.GetAddress() /* TWO */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkDeviceSize* pOffsets
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkDeviceSize*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pOffsets\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pOffsets.GetAddress() /* TWO */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdDraw(
    format::HandleId                            commandBuffer,
    uint32_t                                    vertexCount,
    uint32_t                                    instanceCount,
    uint32_t                                    firstVertex,
    uint32_t                                    firstInstance)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdDraw\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: uint32_t vertexCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"vertexCount\",\n";
    outString += "                },\n";

    // func arg: uint32_t instanceCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"instanceCount\",\n";
    outString += "                },\n";

    // func arg: uint32_t firstVertex
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"firstVertex\",\n";
    outString += "                },\n";

    // func arg: uint32_t firstInstance
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"firstInstance\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdDrawIndexed(
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
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdDrawIndexed\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: uint32_t indexCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"indexCount\",\n";
    outString += "                },\n";

    // func arg: uint32_t instanceCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"instanceCount\",\n";
    outString += "                },\n";

    // func arg: uint32_t firstIndex
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"firstIndex\",\n";
    outString += "                },\n";

    // func arg: int32_t vertexOffset
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"int32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"vertexOffset\",\n";
    outString += "                },\n";

    // func arg: uint32_t firstInstance
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"firstInstance\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdDrawIndirect(
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    uint32_t                                    drawCount,
    uint32_t                                    stride)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdDrawIndirect\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: VkBuffer buffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"buffer\",\n";
    outString += "                },\n";

    // func arg: VkDeviceSize offset
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"offset\",\n";
    outString += "                },\n";

    // func arg: uint32_t drawCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"drawCount\",\n";
    outString += "                },\n";

    // func arg: uint32_t stride
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"stride\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdDrawIndexedIndirect(
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    uint32_t                                    drawCount,
    uint32_t                                    stride)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdDrawIndexedIndirect\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: VkBuffer buffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"buffer\",\n";
    outString += "                },\n";

    // func arg: VkDeviceSize offset
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"offset\",\n";
    outString += "                },\n";

    // func arg: uint32_t drawCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"drawCount\",\n";
    outString += "                },\n";

    // func arg: uint32_t stride
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"stride\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdDispatch(
    format::HandleId                            commandBuffer,
    uint32_t                                    groupCountX,
    uint32_t                                    groupCountY,
    uint32_t                                    groupCountZ)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdDispatch\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: uint32_t groupCountX
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"groupCountX\",\n";
    outString += "                },\n";

    // func arg: uint32_t groupCountY
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"groupCountY\",\n";
    outString += "                },\n";

    // func arg: uint32_t groupCountZ
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"groupCountZ\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdDispatchIndirect(
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdDispatchIndirect\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: VkBuffer buffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"buffer\",\n";
    outString += "                },\n";

    // func arg: VkDeviceSize offset
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"offset\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdCopyBuffer(
    format::HandleId                            commandBuffer,
    format::HandleId                            srcBuffer,
    format::HandleId                            dstBuffer,
    uint32_t                                    regionCount,
    const StructPointerDecoder<Decoded_VkBufferCopy>& pRegions)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdCopyBuffer\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: VkBuffer srcBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"srcBuffer\",\n";
    outString += "                },\n";

    // func arg: VkBuffer dstBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstBuffer\",\n";
    outString += "                },\n";

    // func arg: uint32_t regionCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"regionCount\",\n";
    outString += "                },\n";

    // func arg: const VkBufferCopy* pRegions
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkBufferCopy*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pRegions\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pRegions.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdCopyImage(
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
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdCopyImage\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: VkImage srcImage
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImage\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"srcImage\",\n";
    outString += "                },\n";

    // func arg: VkImageLayout srcImageLayout
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageLayout\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"srcImageLayout\",\n";
    outString += "                },\n";

    // func arg: VkImage dstImage
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImage\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstImage\",\n";
    outString += "                },\n";

    // func arg: VkImageLayout dstImageLayout
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageLayout\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstImageLayout\",\n";
    outString += "                },\n";

    // func arg: uint32_t regionCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"regionCount\",\n";
    outString += "                },\n";

    // func arg: const VkImageCopy* pRegions
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkImageCopy*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pRegions\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pRegions.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdBlitImage(
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
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdBlitImage\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: VkImage srcImage
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImage\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"srcImage\",\n";
    outString += "                },\n";

    // func arg: VkImageLayout srcImageLayout
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageLayout\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"srcImageLayout\",\n";
    outString += "                },\n";

    // func arg: VkImage dstImage
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImage\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstImage\",\n";
    outString += "                },\n";

    // func arg: VkImageLayout dstImageLayout
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageLayout\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstImageLayout\",\n";
    outString += "                },\n";

    // func arg: uint32_t regionCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"regionCount\",\n";
    outString += "                },\n";

    // func arg: const VkImageBlit* pRegions
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkImageBlit*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pRegions\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pRegions.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkFilter filter
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFilter\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"filter\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdCopyBufferToImage(
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
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdCopyBufferToImage\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: VkBuffer srcBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"srcBuffer\",\n";
    outString += "                },\n";

    // func arg: VkImage dstImage
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImage\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstImage\",\n";
    outString += "                },\n";

    // func arg: VkImageLayout dstImageLayout
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageLayout\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstImageLayout\",\n";
    outString += "                },\n";

    // func arg: uint32_t regionCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"regionCount\",\n";
    outString += "                },\n";

    // func arg: const VkBufferImageCopy* pRegions
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkBufferImageCopy*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pRegions\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pRegions.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdCopyImageToBuffer(
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
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdCopyImageToBuffer\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: VkImage srcImage
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImage\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"srcImage\",\n";
    outString += "                },\n";

    // func arg: VkImageLayout srcImageLayout
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageLayout\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"srcImageLayout\",\n";
    outString += "                },\n";

    // func arg: VkBuffer dstBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstBuffer\",\n";
    outString += "                },\n";

    // func arg: uint32_t regionCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"regionCount\",\n";
    outString += "                },\n";

    // func arg: const VkBufferImageCopy* pRegions
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkBufferImageCopy*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pRegions\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pRegions.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdUpdateBuffer(
    format::HandleId                            commandBuffer,
    format::HandleId                            dstBuffer,
    VkDeviceSize                                dstOffset,
    VkDeviceSize                                dataSize,
    const PointerDecoder<uint8_t>&              pData)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdUpdateBuffer\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: VkBuffer dstBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstBuffer\",\n";
    outString += "                },\n";

    // func arg: VkDeviceSize dstOffset
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstOffset\",\n";
    outString += "                },\n";

    // func arg: VkDeviceSize dataSize
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dataSize\",\n";
    outString += "                },\n";

    // func arg: const void* pData
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const void*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pData\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pData.GetAddress() /* TWO */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdFillBuffer(
    format::HandleId                            commandBuffer,
    format::HandleId                            dstBuffer,
    VkDeviceSize                                dstOffset,
    VkDeviceSize                                size,
    uint32_t                                    data)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdFillBuffer\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: VkBuffer dstBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstBuffer\",\n";
    outString += "                },\n";

    // func arg: VkDeviceSize dstOffset
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstOffset\",\n";
    outString += "                },\n";

    // func arg: VkDeviceSize size
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"size\",\n";
    outString += "                },\n";

    // func arg: uint32_t data
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"data\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdClearColorImage(
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
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdClearColorImage\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: VkImage image
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImage\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"image\",\n";
    outString += "                },\n";

    // func arg: VkImageLayout imageLayout
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageLayout\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"imageLayout\",\n";
    outString += "                },\n";

    // func arg: const VkClearColorValue* pColor
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkClearColorValue*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pColor\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pColor.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: uint32_t rangeCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"rangeCount\",\n";
    outString += "                },\n";

    // func arg: const VkImageSubresourceRange* pRanges
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkImageSubresourceRange*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pRanges\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pRanges.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdClearDepthStencilImage(
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
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdClearDepthStencilImage\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: VkImage image
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImage\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"image\",\n";
    outString += "                },\n";

    // func arg: VkImageLayout imageLayout
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageLayout\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"imageLayout\",\n";
    outString += "                },\n";

    // func arg: const VkClearDepthStencilValue* pDepthStencil
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkClearDepthStencilValue*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pDepthStencil\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pDepthStencil.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: uint32_t rangeCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"rangeCount\",\n";
    outString += "                },\n";

    // func arg: const VkImageSubresourceRange* pRanges
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkImageSubresourceRange*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pRanges\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pRanges.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdClearAttachments(
    format::HandleId                            commandBuffer,
    uint32_t                                    attachmentCount,
    const StructPointerDecoder<Decoded_VkClearAttachment>& pAttachments,
    uint32_t                                    rectCount,
    const StructPointerDecoder<Decoded_VkClearRect>& pRects)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdClearAttachments\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: uint32_t attachmentCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"attachmentCount\",\n";
    outString += "                },\n";

    // func arg: const VkClearAttachment* pAttachments
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkClearAttachment*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAttachments\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAttachments.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: uint32_t rectCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"rectCount\",\n";
    outString += "                },\n";

    // func arg: const VkClearRect* pRects
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkClearRect*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pRects\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pRects.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdResolveImage(
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
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdResolveImage\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: VkImage srcImage
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImage\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"srcImage\",\n";
    outString += "                },\n";

    // func arg: VkImageLayout srcImageLayout
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageLayout\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"srcImageLayout\",\n";
    outString += "                },\n";

    // func arg: VkImage dstImage
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImage\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstImage\",\n";
    outString += "                },\n";

    // func arg: VkImageLayout dstImageLayout
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageLayout\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstImageLayout\",\n";
    outString += "                },\n";

    // func arg: uint32_t regionCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"regionCount\",\n";
    outString += "                },\n";

    // func arg: const VkImageResolve* pRegions
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkImageResolve*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pRegions\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pRegions.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdSetEvent(
    format::HandleId                            commandBuffer,
    format::HandleId                            event,
    VkPipelineStageFlags                        stageMask)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdSetEvent\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: VkEvent event
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkEvent\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"event\",\n";
    outString += "                },\n";

    // func arg: VkPipelineStageFlags stageMask
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineStageFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"stageMask\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdResetEvent(
    format::HandleId                            commandBuffer,
    format::HandleId                            event,
    VkPipelineStageFlags                        stageMask)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdResetEvent\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: VkEvent event
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkEvent\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"event\",\n";
    outString += "                },\n";

    // func arg: VkPipelineStageFlags stageMask
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineStageFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"stageMask\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdWaitEvents(
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
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdWaitEvents\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: uint32_t eventCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"eventCount\",\n";
    outString += "                },\n";

    // func arg: const VkEvent* pEvents
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkEvent*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pEvents\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pEvents.GetAddress() /* TWO */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkPipelineStageFlags srcStageMask
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineStageFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"srcStageMask\",\n";
    outString += "                },\n";

    // func arg: VkPipelineStageFlags dstStageMask
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineStageFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstStageMask\",\n";
    outString += "                },\n";

    // func arg: uint32_t memoryBarrierCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"memoryBarrierCount\",\n";
    outString += "                },\n";

    // func arg: const VkMemoryBarrier* pMemoryBarriers
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkMemoryBarrier*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pMemoryBarriers\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pMemoryBarriers.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: uint32_t bufferMemoryBarrierCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"bufferMemoryBarrierCount\",\n";
    outString += "                },\n";

    // func arg: const VkBufferMemoryBarrier* pBufferMemoryBarriers
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkBufferMemoryBarrier*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pBufferMemoryBarriers\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pBufferMemoryBarriers.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: uint32_t imageMemoryBarrierCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"imageMemoryBarrierCount\",\n";
    outString += "                },\n";

    // func arg: const VkImageMemoryBarrier* pImageMemoryBarriers
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkImageMemoryBarrier*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pImageMemoryBarriers\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pImageMemoryBarriers.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdPipelineBarrier(
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
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdPipelineBarrier\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: VkPipelineStageFlags srcStageMask
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineStageFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"srcStageMask\",\n";
    outString += "                },\n";

    // func arg: VkPipelineStageFlags dstStageMask
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineStageFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstStageMask\",\n";
    outString += "                },\n";

    // func arg: VkDependencyFlags dependencyFlags
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDependencyFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dependencyFlags\",\n";
    outString += "                },\n";

    // func arg: uint32_t memoryBarrierCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"memoryBarrierCount\",\n";
    outString += "                },\n";

    // func arg: const VkMemoryBarrier* pMemoryBarriers
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkMemoryBarrier*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pMemoryBarriers\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pMemoryBarriers.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: uint32_t bufferMemoryBarrierCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"bufferMemoryBarrierCount\",\n";
    outString += "                },\n";

    // func arg: const VkBufferMemoryBarrier* pBufferMemoryBarriers
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkBufferMemoryBarrier*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pBufferMemoryBarriers\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pBufferMemoryBarriers.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: uint32_t imageMemoryBarrierCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"imageMemoryBarrierCount\",\n";
    outString += "                },\n";

    // func arg: const VkImageMemoryBarrier* pImageMemoryBarriers
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkImageMemoryBarrier*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pImageMemoryBarriers\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pImageMemoryBarriers.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdBeginQuery(
    format::HandleId                            commandBuffer,
    format::HandleId                            queryPool,
    uint32_t                                    query,
    VkQueryControlFlags                         flags)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdBeginQuery\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: VkQueryPool queryPool
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkQueryPool\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queryPool\",\n";
    outString += "                },\n";

    // func arg: uint32_t query
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"query\",\n";
    outString += "                },\n";

    // func arg: VkQueryControlFlags flags
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkQueryControlFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdEndQuery(
    format::HandleId                            commandBuffer,
    format::HandleId                            queryPool,
    uint32_t                                    query)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdEndQuery\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: VkQueryPool queryPool
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkQueryPool\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queryPool\",\n";
    outString += "                },\n";

    // func arg: uint32_t query
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"query\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdResetQueryPool(
    format::HandleId                            commandBuffer,
    format::HandleId                            queryPool,
    uint32_t                                    firstQuery,
    uint32_t                                    queryCount)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdResetQueryPool\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: VkQueryPool queryPool
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkQueryPool\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queryPool\",\n";
    outString += "                },\n";

    // func arg: uint32_t firstQuery
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"firstQuery\",\n";
    outString += "                },\n";

    // func arg: uint32_t queryCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queryCount\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdWriteTimestamp(
    format::HandleId                            commandBuffer,
    VkPipelineStageFlagBits                     pipelineStage,
    format::HandleId                            queryPool,
    uint32_t                                    query)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdWriteTimestamp\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: VkPipelineStageFlagBits pipelineStage
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineStageFlagBits\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pipelineStage\",\n";
    outString += "                },\n";

    // func arg: VkQueryPool queryPool
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkQueryPool\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queryPool\",\n";
    outString += "                },\n";

    // func arg: uint32_t query
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"query\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdCopyQueryPoolResults(
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
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdCopyQueryPoolResults\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: VkQueryPool queryPool
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkQueryPool\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queryPool\",\n";
    outString += "                },\n";

    // func arg: uint32_t firstQuery
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"firstQuery\",\n";
    outString += "                },\n";

    // func arg: uint32_t queryCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queryCount\",\n";
    outString += "                },\n";

    // func arg: VkBuffer dstBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstBuffer\",\n";
    outString += "                },\n";

    // func arg: VkDeviceSize dstOffset
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstOffset\",\n";
    outString += "                },\n";

    // func arg: VkDeviceSize stride
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"stride\",\n";
    outString += "                },\n";

    // func arg: VkQueryResultFlags flags
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkQueryResultFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdPushConstants(
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
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdPushConstants\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: VkPipelineLayout layout
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineLayout\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"layout\",\n";
    outString += "                },\n";

    // func arg: VkShaderStageFlags stageFlags
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkShaderStageFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"stageFlags\",\n";
    outString += "                },\n";

    // func arg: uint32_t offset
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"offset\",\n";
    outString += "                },\n";

    // func arg: uint32_t size
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"size\",\n";
    outString += "                },\n";

    // func arg: const void* pValues
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const void*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pValues\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pValues.GetAddress() /* TWO */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdBeginRenderPass(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkRenderPassBeginInfo>& pRenderPassBegin,
    VkSubpassContents                           contents)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdBeginRenderPass\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: const VkRenderPassBeginInfo* pRenderPassBegin
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkRenderPassBeginInfo*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pRenderPassBegin\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pRenderPassBegin.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkSubpassContents contents
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSubpassContents\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"contents\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdNextSubpass(
    format::HandleId                            commandBuffer,
    VkSubpassContents                           contents)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdNextSubpass\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: VkSubpassContents contents
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSubpassContents\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"contents\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdEndRenderPass(
    format::HandleId                            commandBuffer)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdEndRenderPass\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdExecuteCommands(
    format::HandleId                            commandBuffer,
    uint32_t                                    commandBufferCount,
    const HandlePointerDecoder<VkCommandBuffer>& pCommandBuffers)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdExecuteCommands\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: uint32_t commandBufferCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBufferCount\",\n";
    outString += "                },\n";

    // func arg: const VkCommandBuffer* pCommandBuffers
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkCommandBuffer*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCommandBuffers\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCommandBuffers.GetAddress() /* TWO */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkBindBufferMemory2(
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    bindInfoCount,
    const StructPointerDecoder<Decoded_VkBindBufferMemoryInfo>& pBindInfos)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkBindBufferMemory2\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: uint32_t bindInfoCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"bindInfoCount\",\n";
    outString += "                },\n";

    // func arg: const VkBindBufferMemoryInfo* pBindInfos
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkBindBufferMemoryInfo*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pBindInfos\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pBindInfos.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkBindImageMemory2(
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    bindInfoCount,
    const StructPointerDecoder<Decoded_VkBindImageMemoryInfo>& pBindInfos)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkBindImageMemory2\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: uint32_t bindInfoCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"bindInfoCount\",\n";
    outString += "                },\n";

    // func arg: const VkBindImageMemoryInfo* pBindInfos
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkBindImageMemoryInfo*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pBindInfos\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pBindInfos.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetDeviceGroupPeerMemoryFeatures(
    format::HandleId                            device,
    uint32_t                                    heapIndex,
    uint32_t                                    localDeviceIndex,
    uint32_t                                    remoteDeviceIndex,
    const PointerDecoder<VkPeerMemoryFeatureFlags>& pPeerMemoryFeatures)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetDeviceGroupPeerMemoryFeatures\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: uint32_t heapIndex
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"heapIndex\",\n";
    outString += "                },\n";

    // func arg: uint32_t localDeviceIndex
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"localDeviceIndex\",\n";
    outString += "                },\n";

    // func arg: uint32_t remoteDeviceIndex
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"remoteDeviceIndex\",\n";
    outString += "                },\n";

    // func arg: VkPeerMemoryFeatureFlags* pPeerMemoryFeatures
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPeerMemoryFeatureFlags*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pPeerMemoryFeatures\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pPeerMemoryFeatures.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdSetDeviceMask(
    format::HandleId                            commandBuffer,
    uint32_t                                    deviceMask)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdSetDeviceMask\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: uint32_t deviceMask
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"deviceMask\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdDispatchBase(
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
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdDispatchBase\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: uint32_t baseGroupX
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"baseGroupX\",\n";
    outString += "                },\n";

    // func arg: uint32_t baseGroupY
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"baseGroupY\",\n";
    outString += "                },\n";

    // func arg: uint32_t baseGroupZ
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"baseGroupZ\",\n";
    outString += "                },\n";

    // func arg: uint32_t groupCountX
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"groupCountX\",\n";
    outString += "                },\n";

    // func arg: uint32_t groupCountY
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"groupCountY\",\n";
    outString += "                },\n";

    // func arg: uint32_t groupCountZ
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"groupCountZ\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkEnumeratePhysicalDeviceGroups(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const PointerDecoder<uint32_t>&             pPhysicalDeviceGroupCount,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceGroupProperties>& pPhysicalDeviceGroupProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkEnumeratePhysicalDeviceGroups\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkInstance instance
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkInstance\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"instance\",\n";
    outString += "                },\n";

    // func arg: uint32_t* pPhysicalDeviceGroupCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pPhysicalDeviceGroupCount\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pPhysicalDeviceGroupCount.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDeviceGroupProperties*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pPhysicalDeviceGroupProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pPhysicalDeviceGroupProperties.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetImageMemoryRequirements2(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImageMemoryRequirementsInfo2>& pInfo,
    const StructPointerDecoder<Decoded_VkMemoryRequirements2>& pMemoryRequirements)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetImageMemoryRequirements2\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkImageMemoryRequirementsInfo2* pInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkImageMemoryRequirementsInfo2*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkMemoryRequirements2* pMemoryRequirements
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkMemoryRequirements2*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pMemoryRequirements\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pMemoryRequirements.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetBufferMemoryRequirements2(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkBufferMemoryRequirementsInfo2>& pInfo,
    const StructPointerDecoder<Decoded_VkMemoryRequirements2>& pMemoryRequirements)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetBufferMemoryRequirements2\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkBufferMemoryRequirementsInfo2* pInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkBufferMemoryRequirementsInfo2*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkMemoryRequirements2* pMemoryRequirements
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkMemoryRequirements2*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pMemoryRequirements\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pMemoryRequirements.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetImageSparseMemoryRequirements2(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImageSparseMemoryRequirementsInfo2>& pInfo,
    const PointerDecoder<uint32_t>&             pSparseMemoryRequirementCount,
    const StructPointerDecoder<Decoded_VkSparseImageMemoryRequirements2>& pSparseMemoryRequirements)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetImageSparseMemoryRequirements2\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkImageSparseMemoryRequirementsInfo2* pInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkImageSparseMemoryRequirementsInfo2*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: uint32_t* pSparseMemoryRequirementCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSparseMemoryRequirementCount\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSparseMemoryRequirementCount.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkSparseImageMemoryRequirements2* pSparseMemoryRequirements
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSparseImageMemoryRequirements2*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSparseMemoryRequirements\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSparseMemoryRequirements.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetPhysicalDeviceFeatures2(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceFeatures2>& pFeatures)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceFeatures2\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: VkPhysicalDeviceFeatures2* pFeatures
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDeviceFeatures2*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pFeatures\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pFeatures.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetPhysicalDeviceProperties2(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceProperties2>& pProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceProperties2\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: VkPhysicalDeviceProperties2* pProperties
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDeviceProperties2*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pProperties.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetPhysicalDeviceFormatProperties2(
    format::HandleId                            physicalDevice,
    VkFormat                                    format,
    const StructPointerDecoder<Decoded_VkFormatProperties2>& pFormatProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceFormatProperties2\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: VkFormat format
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFormat\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"format\",\n";
    outString += "                },\n";

    // func arg: VkFormatProperties2* pFormatProperties
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFormatProperties2*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pFormatProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pFormatProperties.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetPhysicalDeviceImageFormatProperties2(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceImageFormatInfo2>& pImageFormatInfo,
    const StructPointerDecoder<Decoded_VkImageFormatProperties2>& pImageFormatProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceImageFormatProperties2\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: const VkPhysicalDeviceImageFormatInfo2* pImageFormatInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkPhysicalDeviceImageFormatInfo2*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pImageFormatInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pImageFormatInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkImageFormatProperties2* pImageFormatProperties
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageFormatProperties2*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pImageFormatProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pImageFormatProperties.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetPhysicalDeviceQueueFamilyProperties2(
    format::HandleId                            physicalDevice,
    const PointerDecoder<uint32_t>&             pQueueFamilyPropertyCount,
    const StructPointerDecoder<Decoded_VkQueueFamilyProperties2>& pQueueFamilyProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceQueueFamilyProperties2\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: uint32_t* pQueueFamilyPropertyCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pQueueFamilyPropertyCount\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pQueueFamilyPropertyCount.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkQueueFamilyProperties2* pQueueFamilyProperties
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkQueueFamilyProperties2*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pQueueFamilyProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pQueueFamilyProperties.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetPhysicalDeviceMemoryProperties2(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceMemoryProperties2>& pMemoryProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceMemoryProperties2\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: VkPhysicalDeviceMemoryProperties2* pMemoryProperties
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDeviceMemoryProperties2*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pMemoryProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pMemoryProperties.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetPhysicalDeviceSparseImageFormatProperties2(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceSparseImageFormatInfo2>& pFormatInfo,
    const PointerDecoder<uint32_t>&             pPropertyCount,
    const StructPointerDecoder<Decoded_VkSparseImageFormatProperties2>& pProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceSparseImageFormatProperties2\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkPhysicalDeviceSparseImageFormatInfo2*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pFormatInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pFormatInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: uint32_t* pPropertyCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pPropertyCount\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pPropertyCount.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkSparseImageFormatProperties2* pProperties
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSparseImageFormatProperties2*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pProperties.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkTrimCommandPool(
    format::HandleId                            device,
    format::HandleId                            commandPool,
    VkCommandPoolTrimFlags                      flags)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkTrimCommandPool\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkCommandPool commandPool
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandPool\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandPool\",\n";
    outString += "                },\n";

    // func arg: VkCommandPoolTrimFlags flags
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandPoolTrimFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetDeviceQueue2(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDeviceQueueInfo2>& pQueueInfo,
    const HandlePointerDecoder<VkQueue>&        pQueue)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetDeviceQueue2\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkDeviceQueueInfo2* pQueueInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkDeviceQueueInfo2*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pQueueInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pQueueInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkQueue* pQueue
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkQueue*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pQueue\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pQueue.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCreateSamplerYcbcrConversion(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSamplerYcbcrConversionCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSamplerYcbcrConversion>& pYcbcrConversion)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreateSamplerYcbcrConversion\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkSamplerYcbcrConversionCreateInfo* pCreateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkSamplerYcbcrConversionCreateInfo*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkSamplerYcbcrConversion* pYcbcrConversion
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSamplerYcbcrConversion*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pYcbcrConversion\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pYcbcrConversion.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkDestroySamplerYcbcrConversion(
    format::HandleId                            device,
    format::HandleId                            ycbcrConversion,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkDestroySamplerYcbcrConversion\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkSamplerYcbcrConversion ycbcrConversion
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSamplerYcbcrConversion\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"ycbcrConversion\",\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCreateDescriptorUpdateTemplate(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDescriptorUpdateTemplateCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkDescriptorUpdateTemplate>& pDescriptorUpdateTemplate)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreateDescriptorUpdateTemplate\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkDescriptorUpdateTemplateCreateInfo*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkDescriptorUpdateTemplate* pDescriptorUpdateTemplate
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDescriptorUpdateTemplate*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pDescriptorUpdateTemplate\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pDescriptorUpdateTemplate.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkDestroyDescriptorUpdateTemplate(
    format::HandleId                            device,
    format::HandleId                            descriptorUpdateTemplate,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkDestroyDescriptorUpdateTemplate\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkDescriptorUpdateTemplate descriptorUpdateTemplate
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDescriptorUpdateTemplate\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"descriptorUpdateTemplate\",\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetPhysicalDeviceExternalBufferProperties(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceExternalBufferInfo>& pExternalBufferInfo,
    const StructPointerDecoder<Decoded_VkExternalBufferProperties>& pExternalBufferProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceExternalBufferProperties\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: const VkPhysicalDeviceExternalBufferInfo* pExternalBufferInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkPhysicalDeviceExternalBufferInfo*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pExternalBufferInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pExternalBufferInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkExternalBufferProperties* pExternalBufferProperties
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalBufferProperties*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pExternalBufferProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pExternalBufferProperties.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetPhysicalDeviceExternalFenceProperties(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceExternalFenceInfo>& pExternalFenceInfo,
    const StructPointerDecoder<Decoded_VkExternalFenceProperties>& pExternalFenceProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceExternalFenceProperties\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: const VkPhysicalDeviceExternalFenceInfo* pExternalFenceInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkPhysicalDeviceExternalFenceInfo*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pExternalFenceInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pExternalFenceInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkExternalFenceProperties* pExternalFenceProperties
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalFenceProperties*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pExternalFenceProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pExternalFenceProperties.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetPhysicalDeviceExternalSemaphoreProperties(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceExternalSemaphoreInfo>& pExternalSemaphoreInfo,
    const StructPointerDecoder<Decoded_VkExternalSemaphoreProperties>& pExternalSemaphoreProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceExternalSemaphoreProperties\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkPhysicalDeviceExternalSemaphoreInfo*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pExternalSemaphoreInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pExternalSemaphoreInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkExternalSemaphoreProperties* pExternalSemaphoreProperties
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalSemaphoreProperties*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pExternalSemaphoreProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pExternalSemaphoreProperties.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetDescriptorSetLayoutSupport(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDescriptorSetLayoutCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkDescriptorSetLayoutSupport>& pSupport)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetDescriptorSetLayoutSupport\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkDescriptorSetLayoutCreateInfo* pCreateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkDescriptorSetLayoutCreateInfo*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkDescriptorSetLayoutSupport* pSupport
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDescriptorSetLayoutSupport*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSupport\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSupport.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkDestroySurfaceKHR(
    format::HandleId                            instance,
    format::HandleId                            surface,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkDestroySurfaceKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkInstance instance
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkInstance\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"instance\",\n";
    outString += "                },\n";

    // func arg: VkSurfaceKHR surface
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSurfaceKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"surface\",\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetPhysicalDeviceSurfaceSupportKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    format::HandleId                            surface,
    const PointerDecoder<VkBool32>&             pSupported)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceSurfaceSupportKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: uint32_t queueFamilyIndex
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queueFamilyIndex\",\n";
    outString += "                },\n";

    // func arg: VkSurfaceKHR surface
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSurfaceKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"surface\",\n";
    outString += "                },\n";

    // func arg: VkBool32* pSupported
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSupported\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSupported.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetPhysicalDeviceSurfaceCapabilitiesKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            surface,
    const StructPointerDecoder<Decoded_VkSurfaceCapabilitiesKHR>& pSurfaceCapabilities)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceSurfaceCapabilitiesKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: VkSurfaceKHR surface
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSurfaceKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"surface\",\n";
    outString += "                },\n";

    // func arg: VkSurfaceCapabilitiesKHR* pSurfaceCapabilities
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSurfaceCapabilitiesKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSurfaceCapabilities\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSurfaceCapabilities.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetPhysicalDeviceSurfaceFormatsKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            surface,
    const PointerDecoder<uint32_t>&             pSurfaceFormatCount,
    const StructPointerDecoder<Decoded_VkSurfaceFormatKHR>& pSurfaceFormats)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceSurfaceFormatsKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: VkSurfaceKHR surface
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSurfaceKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"surface\",\n";
    outString += "                },\n";

    // func arg: uint32_t* pSurfaceFormatCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSurfaceFormatCount\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSurfaceFormatCount.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkSurfaceFormatKHR* pSurfaceFormats
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSurfaceFormatKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSurfaceFormats\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSurfaceFormats.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetPhysicalDeviceSurfacePresentModesKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            surface,
    const PointerDecoder<uint32_t>&             pPresentModeCount,
    const PointerDecoder<VkPresentModeKHR>&     pPresentModes)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceSurfacePresentModesKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: VkSurfaceKHR surface
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSurfaceKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"surface\",\n";
    outString += "                },\n";

    // func arg: uint32_t* pPresentModeCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pPresentModeCount\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pPresentModeCount.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkPresentModeKHR* pPresentModes
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPresentModeKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pPresentModes\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pPresentModes.GetAddress() /* TWO */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkCreateSwapchainKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSwapchainCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSwapchainKHR>& pSwapchain)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreateSwapchainKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkSwapchainCreateInfoKHR* pCreateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkSwapchainCreateInfoKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkSwapchainKHR* pSwapchain
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSwapchainKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSwapchain\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSwapchain.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkDestroySwapchainKHR(
    format::HandleId                            device,
    format::HandleId                            swapchain,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkDestroySwapchainKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkSwapchainKHR swapchain
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSwapchainKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"swapchain\",\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetSwapchainImagesKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain,
    const PointerDecoder<uint32_t>&             pSwapchainImageCount,
    const HandlePointerDecoder<VkImage>&        pSwapchainImages)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetSwapchainImagesKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkSwapchainKHR swapchain
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSwapchainKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"swapchain\",\n";
    outString += "                },\n";

    // func arg: uint32_t* pSwapchainImageCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSwapchainImageCount\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSwapchainImageCount.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkImage* pSwapchainImages
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImage*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSwapchainImages\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSwapchainImages.GetAddress() /* TWO */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkAcquireNextImageKHR(
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
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkAcquireNextImageKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkSwapchainKHR swapchain
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSwapchainKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"swapchain\",\n";
    outString += "                },\n";

    // func arg: uint64_t timeout
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"timeout\",\n";
    outString += "                },\n";

    // func arg: VkSemaphore semaphore
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSemaphore\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"semaphore\",\n";
    outString += "                },\n";

    // func arg: VkFence fence
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFence\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"fence\",\n";
    outString += "                },\n";

    // func arg: uint32_t* pImageIndex
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pImageIndex\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pImageIndex.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkQueuePresentKHR(
    VkResult                                    returnValue,
    format::HandleId                            queue,
    const StructPointerDecoder<Decoded_VkPresentInfoKHR>& pPresentInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkQueuePresentKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkQueue queue
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkQueue\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queue\",\n";
    outString += "                },\n";

    // func arg: const VkPresentInfoKHR* pPresentInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkPresentInfoKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pPresentInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pPresentInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetDeviceGroupPresentCapabilitiesKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDeviceGroupPresentCapabilitiesKHR>& pDeviceGroupPresentCapabilities)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetDeviceGroupPresentCapabilitiesKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkDeviceGroupPresentCapabilitiesKHR* pDeviceGroupPresentCapabilities
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceGroupPresentCapabilitiesKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pDeviceGroupPresentCapabilities\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pDeviceGroupPresentCapabilities.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetDeviceGroupSurfacePresentModesKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            surface,
    const PointerDecoder<VkDeviceGroupPresentModeFlagsKHR>& pModes)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetDeviceGroupSurfacePresentModesKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkSurfaceKHR surface
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSurfaceKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"surface\",\n";
    outString += "                },\n";

    // func arg: VkDeviceGroupPresentModeFlagsKHR* pModes
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceGroupPresentModeFlagsKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pModes\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pModes.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetPhysicalDevicePresentRectanglesKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            surface,
    const PointerDecoder<uint32_t>&             pRectCount,
    const StructPointerDecoder<Decoded_VkRect2D>& pRects)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDevicePresentRectanglesKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: VkSurfaceKHR surface
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSurfaceKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"surface\",\n";
    outString += "                },\n";

    // func arg: uint32_t* pRectCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pRectCount\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pRectCount.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkRect2D* pRects
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkRect2D*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pRects\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pRects.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkAcquireNextImage2KHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkAcquireNextImageInfoKHR>& pAcquireInfo,
    const PointerDecoder<uint32_t>&             pImageIndex)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkAcquireNextImage2KHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkAcquireNextImageInfoKHR* pAcquireInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAcquireNextImageInfoKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAcquireInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAcquireInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: uint32_t* pImageIndex
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pImageIndex\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pImageIndex.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkGetPhysicalDeviceDisplayPropertiesKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const PointerDecoder<uint32_t>&             pPropertyCount,
    const StructPointerDecoder<Decoded_VkDisplayPropertiesKHR>& pProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceDisplayPropertiesKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: uint32_t* pPropertyCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pPropertyCount\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pPropertyCount.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkDisplayPropertiesKHR* pProperties
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDisplayPropertiesKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pProperties.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetPhysicalDeviceDisplayPlanePropertiesKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const PointerDecoder<uint32_t>&             pPropertyCount,
    const StructPointerDecoder<Decoded_VkDisplayPlanePropertiesKHR>& pProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceDisplayPlanePropertiesKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: uint32_t* pPropertyCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pPropertyCount\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pPropertyCount.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkDisplayPlanePropertiesKHR* pProperties
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDisplayPlanePropertiesKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pProperties.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetDisplayPlaneSupportedDisplaysKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    uint32_t                                    planeIndex,
    const PointerDecoder<uint32_t>&             pDisplayCount,
    const HandlePointerDecoder<VkDisplayKHR>&   pDisplays)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetDisplayPlaneSupportedDisplaysKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: uint32_t planeIndex
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"planeIndex\",\n";
    outString += "                },\n";

    // func arg: uint32_t* pDisplayCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pDisplayCount\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pDisplayCount.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkDisplayKHR* pDisplays
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDisplayKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pDisplays\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pDisplays.GetAddress() /* TWO */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetDisplayModePropertiesKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            display,
    const PointerDecoder<uint32_t>&             pPropertyCount,
    const StructPointerDecoder<Decoded_VkDisplayModePropertiesKHR>& pProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetDisplayModePropertiesKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: VkDisplayKHR display
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDisplayKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"display\",\n";
    outString += "                },\n";

    // func arg: uint32_t* pPropertyCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pPropertyCount\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pPropertyCount.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkDisplayModePropertiesKHR* pProperties
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDisplayModePropertiesKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pProperties.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCreateDisplayModeKHR(
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
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreateDisplayModeKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: VkDisplayKHR display
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDisplayKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"display\",\n";
    outString += "                },\n";

    // func arg: const VkDisplayModeCreateInfoKHR* pCreateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkDisplayModeCreateInfoKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkDisplayModeKHR* pMode
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDisplayModeKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pMode\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pMode.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetDisplayPlaneCapabilitiesKHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            mode,
    uint32_t                                    planeIndex,
    const StructPointerDecoder<Decoded_VkDisplayPlaneCapabilitiesKHR>& pCapabilities)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetDisplayPlaneCapabilitiesKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: VkDisplayModeKHR mode
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDisplayModeKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"mode\",\n";
    outString += "                },\n";

    // func arg: uint32_t planeIndex
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"planeIndex\",\n";
    outString += "                },\n";

    // func arg: VkDisplayPlaneCapabilitiesKHR* pCapabilities
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDisplayPlaneCapabilitiesKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCapabilities\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCapabilities.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCreateDisplayPlaneSurfaceKHR(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkDisplaySurfaceCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreateDisplayPlaneSurfaceKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkInstance instance
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkInstance\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"instance\",\n";
    outString += "                },\n";

    // func arg: const VkDisplaySurfaceCreateInfoKHR* pCreateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkDisplaySurfaceCreateInfoKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkSurfaceKHR* pSurface
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSurfaceKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSurface\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSurface.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkCreateSharedSwapchainsKHR(
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
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreateSharedSwapchainsKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: uint32_t swapchainCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"swapchainCount\",\n";
    outString += "                },\n";

    // func arg: const VkSwapchainCreateInfoKHR* pCreateInfos
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkSwapchainCreateInfoKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfos\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfos.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkSwapchainKHR* pSwapchains
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSwapchainKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSwapchains\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSwapchains.GetAddress() /* TWO */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkCreateXlibSurfaceKHR(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkXlibSurfaceCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreateXlibSurfaceKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkInstance instance
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkInstance\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"instance\",\n";
    outString += "                },\n";

    // func arg: const VkXlibSurfaceCreateInfoKHR* pCreateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkXlibSurfaceCreateInfoKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkSurfaceKHR* pSurface
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSurfaceKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSurface\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSurface.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetPhysicalDeviceXlibPresentationSupportKHR(
    VkBool32                                    returnValue,
    format::HandleId                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    uint64_t                                    dpy,
    size_t                                      visualID)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceXlibPresentationSupportKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkBool32\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "%u\"\n", returnValue);
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: uint32_t queueFamilyIndex
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queueFamilyIndex\",\n";
    outString += "                },\n";

    // func arg: void* dpy
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dpy\",\n";
    outString += "                },\n";

    // func arg: size_t visualID
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"size_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"visualID\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkCreateXcbSurfaceKHR(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkXcbSurfaceCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreateXcbSurfaceKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkInstance instance
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkInstance\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"instance\",\n";
    outString += "                },\n";

    // func arg: const VkXcbSurfaceCreateInfoKHR* pCreateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkXcbSurfaceCreateInfoKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkSurfaceKHR* pSurface
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSurfaceKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSurface\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSurface.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetPhysicalDeviceXcbPresentationSupportKHR(
    VkBool32                                    returnValue,
    format::HandleId                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    uint64_t                                    connection,
    uint32_t                                    visual_id)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceXcbPresentationSupportKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkBool32\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "%u\"\n", returnValue);
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: uint32_t queueFamilyIndex
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queueFamilyIndex\",\n";
    outString += "                },\n";

    // func arg: void* connection
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"connection\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, connection /* ACF */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: uint32_t visual_id
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"visual_id\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkCreateWaylandSurfaceKHR(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkWaylandSurfaceCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreateWaylandSurfaceKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkInstance instance
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkInstance\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"instance\",\n";
    outString += "                },\n";

    // func arg: const VkWaylandSurfaceCreateInfoKHR* pCreateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkWaylandSurfaceCreateInfoKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkSurfaceKHR* pSurface
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSurfaceKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSurface\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSurface.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetPhysicalDeviceWaylandPresentationSupportKHR(
    VkBool32                                    returnValue,
    format::HandleId                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    uint64_t                                    display)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceWaylandPresentationSupportKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkBool32\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "%u\"\n", returnValue);
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: uint32_t queueFamilyIndex
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queueFamilyIndex\",\n";
    outString += "                },\n";

    // func arg: struct void* display
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"struct void*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"display\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, display /* ACF */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkCreateAndroidSurfaceKHR(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkAndroidSurfaceCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreateAndroidSurfaceKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkInstance instance
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkInstance\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"instance\",\n";
    outString += "                },\n";

    // func arg: const VkAndroidSurfaceCreateInfoKHR* pCreateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAndroidSurfaceCreateInfoKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkSurfaceKHR* pSurface
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSurfaceKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSurface\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSurface.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkCreateWin32SurfaceKHR(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkWin32SurfaceCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreateWin32SurfaceKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkInstance instance
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkInstance\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"instance\",\n";
    outString += "                },\n";

    // func arg: const VkWin32SurfaceCreateInfoKHR* pCreateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkWin32SurfaceCreateInfoKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkSurfaceKHR* pSurface
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSurfaceKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSurface\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSurface.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetPhysicalDeviceWin32PresentationSupportKHR(
    VkBool32                                    returnValue,
    format::HandleId                            physicalDevice,
    uint32_t                                    queueFamilyIndex)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceWin32PresentationSupportKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkBool32\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "%u\"\n", returnValue);
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: uint32_t queueFamilyIndex
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queueFamilyIndex\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkGetPhysicalDeviceFeatures2KHR(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceFeatures2>& pFeatures)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceFeatures2KHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: VkPhysicalDeviceFeatures2* pFeatures
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDeviceFeatures2*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pFeatures\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pFeatures.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetPhysicalDeviceProperties2KHR(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceProperties2>& pProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceProperties2KHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: VkPhysicalDeviceProperties2* pProperties
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDeviceProperties2*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pProperties.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetPhysicalDeviceFormatProperties2KHR(
    format::HandleId                            physicalDevice,
    VkFormat                                    format,
    const StructPointerDecoder<Decoded_VkFormatProperties2>& pFormatProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceFormatProperties2KHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: VkFormat format
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFormat\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"format\",\n";
    outString += "                },\n";

    // func arg: VkFormatProperties2* pFormatProperties
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFormatProperties2*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pFormatProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pFormatProperties.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetPhysicalDeviceImageFormatProperties2KHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceImageFormatInfo2>& pImageFormatInfo,
    const StructPointerDecoder<Decoded_VkImageFormatProperties2>& pImageFormatProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceImageFormatProperties2KHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: const VkPhysicalDeviceImageFormatInfo2* pImageFormatInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkPhysicalDeviceImageFormatInfo2*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pImageFormatInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pImageFormatInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkImageFormatProperties2* pImageFormatProperties
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageFormatProperties2*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pImageFormatProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pImageFormatProperties.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetPhysicalDeviceQueueFamilyProperties2KHR(
    format::HandleId                            physicalDevice,
    const PointerDecoder<uint32_t>&             pQueueFamilyPropertyCount,
    const StructPointerDecoder<Decoded_VkQueueFamilyProperties2>& pQueueFamilyProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceQueueFamilyProperties2KHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: uint32_t* pQueueFamilyPropertyCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pQueueFamilyPropertyCount\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pQueueFamilyPropertyCount.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkQueueFamilyProperties2* pQueueFamilyProperties
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkQueueFamilyProperties2*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pQueueFamilyProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pQueueFamilyProperties.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetPhysicalDeviceMemoryProperties2KHR(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceMemoryProperties2>& pMemoryProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceMemoryProperties2KHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: VkPhysicalDeviceMemoryProperties2* pMemoryProperties
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDeviceMemoryProperties2*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pMemoryProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pMemoryProperties.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetPhysicalDeviceSparseImageFormatProperties2KHR(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceSparseImageFormatInfo2>& pFormatInfo,
    const PointerDecoder<uint32_t>&             pPropertyCount,
    const StructPointerDecoder<Decoded_VkSparseImageFormatProperties2>& pProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceSparseImageFormatProperties2KHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkPhysicalDeviceSparseImageFormatInfo2*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pFormatInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pFormatInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: uint32_t* pPropertyCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pPropertyCount\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pPropertyCount.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkSparseImageFormatProperties2* pProperties
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSparseImageFormatProperties2*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pProperties.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkGetDeviceGroupPeerMemoryFeaturesKHR(
    format::HandleId                            device,
    uint32_t                                    heapIndex,
    uint32_t                                    localDeviceIndex,
    uint32_t                                    remoteDeviceIndex,
    const PointerDecoder<VkPeerMemoryFeatureFlags>& pPeerMemoryFeatures)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetDeviceGroupPeerMemoryFeaturesKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: uint32_t heapIndex
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"heapIndex\",\n";
    outString += "                },\n";

    // func arg: uint32_t localDeviceIndex
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"localDeviceIndex\",\n";
    outString += "                },\n";

    // func arg: uint32_t remoteDeviceIndex
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"remoteDeviceIndex\",\n";
    outString += "                },\n";

    // func arg: VkPeerMemoryFeatureFlags* pPeerMemoryFeatures
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPeerMemoryFeatureFlags*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pPeerMemoryFeatures\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pPeerMemoryFeatures.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdSetDeviceMaskKHR(
    format::HandleId                            commandBuffer,
    uint32_t                                    deviceMask)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdSetDeviceMaskKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: uint32_t deviceMask
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"deviceMask\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdDispatchBaseKHR(
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
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdDispatchBaseKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: uint32_t baseGroupX
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"baseGroupX\",\n";
    outString += "                },\n";

    // func arg: uint32_t baseGroupY
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"baseGroupY\",\n";
    outString += "                },\n";

    // func arg: uint32_t baseGroupZ
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"baseGroupZ\",\n";
    outString += "                },\n";

    // func arg: uint32_t groupCountX
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"groupCountX\",\n";
    outString += "                },\n";

    // func arg: uint32_t groupCountY
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"groupCountY\",\n";
    outString += "                },\n";

    // func arg: uint32_t groupCountZ
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"groupCountZ\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkTrimCommandPoolKHR(
    format::HandleId                            device,
    format::HandleId                            commandPool,
    VkCommandPoolTrimFlags                      flags)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkTrimCommandPoolKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkCommandPool commandPool
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandPool\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandPool\",\n";
    outString += "                },\n";

    // func arg: VkCommandPoolTrimFlags flags
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandPoolTrimFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkEnumeratePhysicalDeviceGroupsKHR(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const PointerDecoder<uint32_t>&             pPhysicalDeviceGroupCount,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceGroupProperties>& pPhysicalDeviceGroupProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkEnumeratePhysicalDeviceGroupsKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkInstance instance
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkInstance\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"instance\",\n";
    outString += "                },\n";

    // func arg: uint32_t* pPhysicalDeviceGroupCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pPhysicalDeviceGroupCount\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pPhysicalDeviceGroupCount.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDeviceGroupProperties*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pPhysicalDeviceGroupProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pPhysicalDeviceGroupProperties.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkGetPhysicalDeviceExternalBufferPropertiesKHR(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceExternalBufferInfo>& pExternalBufferInfo,
    const StructPointerDecoder<Decoded_VkExternalBufferProperties>& pExternalBufferProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceExternalBufferPropertiesKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: const VkPhysicalDeviceExternalBufferInfo* pExternalBufferInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkPhysicalDeviceExternalBufferInfo*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pExternalBufferInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pExternalBufferInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkExternalBufferProperties* pExternalBufferProperties
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalBufferProperties*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pExternalBufferProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pExternalBufferProperties.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkGetMemoryWin32HandleKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkMemoryGetWin32HandleInfoKHR>& pGetWin32HandleInfo,
    const PointerDecoder<uint64_t>&             pHandle)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetMemoryWin32HandleKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkMemoryGetWin32HandleInfoKHR* pGetWin32HandleInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkMemoryGetWin32HandleInfoKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pGetWin32HandleInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pGetWin32HandleInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: void** pHandle
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void**\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pHandle\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pHandle.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetMemoryWin32HandlePropertiesKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    VkExternalMemoryHandleTypeFlagBits          handleType,
    uint64_t                                    handle,
    const StructPointerDecoder<Decoded_VkMemoryWin32HandlePropertiesKHR>& pMemoryWin32HandleProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetMemoryWin32HandlePropertiesKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkExternalMemoryHandleTypeFlagBits handleType
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalMemoryHandleTypeFlagBits\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"handleType\",\n";
    outString += "                },\n";

    // func arg: void* handle
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"handle\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, handle /* ACF */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkMemoryWin32HandlePropertiesKHR* pMemoryWin32HandleProperties
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkMemoryWin32HandlePropertiesKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pMemoryWin32HandleProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pMemoryWin32HandleProperties.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkGetMemoryFdKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkMemoryGetFdInfoKHR>& pGetFdInfo,
    const PointerDecoder<int>&                  pFd)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetMemoryFdKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkMemoryGetFdInfoKHR* pGetFdInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkMemoryGetFdInfoKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pGetFdInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pGetFdInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: int* pFd
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"int*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pFd\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pFd.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetMemoryFdPropertiesKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    VkExternalMemoryHandleTypeFlagBits          handleType,
    int                                         fd,
    const StructPointerDecoder<Decoded_VkMemoryFdPropertiesKHR>& pMemoryFdProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetMemoryFdPropertiesKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkExternalMemoryHandleTypeFlagBits handleType
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalMemoryHandleTypeFlagBits\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"handleType\",\n";
    outString += "                },\n";

    // func arg: int fd
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"int\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"fd\",\n";
    outString += "                },\n";

    // func arg: VkMemoryFdPropertiesKHR* pMemoryFdProperties
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkMemoryFdPropertiesKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pMemoryFdProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pMemoryFdProperties.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceExternalSemaphoreInfo>& pExternalSemaphoreInfo,
    const StructPointerDecoder<Decoded_VkExternalSemaphoreProperties>& pExternalSemaphoreProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceExternalSemaphorePropertiesKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkPhysicalDeviceExternalSemaphoreInfo*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pExternalSemaphoreInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pExternalSemaphoreInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkExternalSemaphoreProperties* pExternalSemaphoreProperties
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalSemaphoreProperties*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pExternalSemaphoreProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pExternalSemaphoreProperties.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkImportSemaphoreWin32HandleKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImportSemaphoreWin32HandleInfoKHR>& pImportSemaphoreWin32HandleInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkImportSemaphoreWin32HandleKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkImportSemaphoreWin32HandleInfoKHR* pImportSemaphoreWin32HandleInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkImportSemaphoreWin32HandleInfoKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pImportSemaphoreWin32HandleInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pImportSemaphoreWin32HandleInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetSemaphoreWin32HandleKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSemaphoreGetWin32HandleInfoKHR>& pGetWin32HandleInfo,
    const PointerDecoder<uint64_t>&             pHandle)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetSemaphoreWin32HandleKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkSemaphoreGetWin32HandleInfoKHR* pGetWin32HandleInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkSemaphoreGetWin32HandleInfoKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pGetWin32HandleInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pGetWin32HandleInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: void** pHandle
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void**\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pHandle\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pHandle.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkImportSemaphoreFdKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImportSemaphoreFdInfoKHR>& pImportSemaphoreFdInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkImportSemaphoreFdKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkImportSemaphoreFdInfoKHR* pImportSemaphoreFdInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkImportSemaphoreFdInfoKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pImportSemaphoreFdInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pImportSemaphoreFdInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetSemaphoreFdKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSemaphoreGetFdInfoKHR>& pGetFdInfo,
    const PointerDecoder<int>&                  pFd)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetSemaphoreFdKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkSemaphoreGetFdInfoKHR* pGetFdInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkSemaphoreGetFdInfoKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pGetFdInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pGetFdInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: int* pFd
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"int*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pFd\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pFd.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkCmdPushDescriptorSetKHR(
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
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdPushDescriptorSetKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: VkPipelineBindPoint pipelineBindPoint
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineBindPoint\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pipelineBindPoint\",\n";
    outString += "                },\n";

    // func arg: VkPipelineLayout layout
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineLayout\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"layout\",\n";
    outString += "                },\n";

    // func arg: uint32_t set
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"set\",\n";
    outString += "                },\n";

    // func arg: uint32_t descriptorWriteCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"descriptorWriteCount\",\n";
    outString += "                },\n";

    // func arg: const VkWriteDescriptorSet* pDescriptorWrites
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkWriteDescriptorSet*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pDescriptorWrites\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pDescriptorWrites.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkCreateDescriptorUpdateTemplateKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDescriptorUpdateTemplateCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkDescriptorUpdateTemplate>& pDescriptorUpdateTemplate)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreateDescriptorUpdateTemplateKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkDescriptorUpdateTemplateCreateInfo*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkDescriptorUpdateTemplate* pDescriptorUpdateTemplate
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDescriptorUpdateTemplate*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pDescriptorUpdateTemplate\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pDescriptorUpdateTemplate.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkDestroyDescriptorUpdateTemplateKHR(
    format::HandleId                            device,
    format::HandleId                            descriptorUpdateTemplate,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkDestroyDescriptorUpdateTemplateKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkDescriptorUpdateTemplate descriptorUpdateTemplate
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDescriptorUpdateTemplate\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"descriptorUpdateTemplate\",\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkCreateRenderPass2KHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkRenderPassCreateInfo2KHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkRenderPass>&   pRenderPass)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreateRenderPass2KHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkRenderPassCreateInfo2KHR* pCreateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkRenderPassCreateInfo2KHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkRenderPass* pRenderPass
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkRenderPass*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pRenderPass\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pRenderPass.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdBeginRenderPass2KHR(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkRenderPassBeginInfo>& pRenderPassBegin,
    const StructPointerDecoder<Decoded_VkSubpassBeginInfoKHR>& pSubpassBeginInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdBeginRenderPass2KHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: const VkRenderPassBeginInfo* pRenderPassBegin
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkRenderPassBeginInfo*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pRenderPassBegin\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pRenderPassBegin.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkSubpassBeginInfoKHR* pSubpassBeginInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkSubpassBeginInfoKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSubpassBeginInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSubpassBeginInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdNextSubpass2KHR(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkSubpassBeginInfoKHR>& pSubpassBeginInfo,
    const StructPointerDecoder<Decoded_VkSubpassEndInfoKHR>& pSubpassEndInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdNextSubpass2KHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: const VkSubpassBeginInfoKHR* pSubpassBeginInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkSubpassBeginInfoKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSubpassBeginInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSubpassBeginInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkSubpassEndInfoKHR* pSubpassEndInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkSubpassEndInfoKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSubpassEndInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSubpassEndInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdEndRenderPass2KHR(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkSubpassEndInfoKHR>& pSubpassEndInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdEndRenderPass2KHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: const VkSubpassEndInfoKHR* pSubpassEndInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkSubpassEndInfoKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSubpassEndInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSubpassEndInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkGetSwapchainStatusKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetSwapchainStatusKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkSwapchainKHR swapchain
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSwapchainKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"swapchain\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkGetPhysicalDeviceExternalFencePropertiesKHR(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceExternalFenceInfo>& pExternalFenceInfo,
    const StructPointerDecoder<Decoded_VkExternalFenceProperties>& pExternalFenceProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceExternalFencePropertiesKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: const VkPhysicalDeviceExternalFenceInfo* pExternalFenceInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkPhysicalDeviceExternalFenceInfo*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pExternalFenceInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pExternalFenceInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkExternalFenceProperties* pExternalFenceProperties
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalFenceProperties*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pExternalFenceProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pExternalFenceProperties.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkImportFenceWin32HandleKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImportFenceWin32HandleInfoKHR>& pImportFenceWin32HandleInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkImportFenceWin32HandleKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkImportFenceWin32HandleInfoKHR* pImportFenceWin32HandleInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkImportFenceWin32HandleInfoKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pImportFenceWin32HandleInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pImportFenceWin32HandleInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetFenceWin32HandleKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkFenceGetWin32HandleInfoKHR>& pGetWin32HandleInfo,
    const PointerDecoder<uint64_t>&             pHandle)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetFenceWin32HandleKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkFenceGetWin32HandleInfoKHR* pGetWin32HandleInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkFenceGetWin32HandleInfoKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pGetWin32HandleInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pGetWin32HandleInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: void** pHandle
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void**\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pHandle\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pHandle.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkImportFenceFdKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImportFenceFdInfoKHR>& pImportFenceFdInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkImportFenceFdKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkImportFenceFdInfoKHR* pImportFenceFdInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkImportFenceFdInfoKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pImportFenceFdInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pImportFenceFdInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetFenceFdKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkFenceGetFdInfoKHR>& pGetFdInfo,
    const PointerDecoder<int>&                  pFd)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetFenceFdKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkFenceGetFdInfoKHR* pGetFdInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkFenceGetFdInfoKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pGetFdInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pGetFdInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: int* pFd
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"int*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pFd\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pFd.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkGetPhysicalDeviceSurfaceCapabilities2KHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceSurfaceInfo2KHR>& pSurfaceInfo,
    const StructPointerDecoder<Decoded_VkSurfaceCapabilities2KHR>& pSurfaceCapabilities)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceSurfaceCapabilities2KHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkPhysicalDeviceSurfaceInfo2KHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSurfaceInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSurfaceInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkSurfaceCapabilities2KHR* pSurfaceCapabilities
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSurfaceCapabilities2KHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSurfaceCapabilities\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSurfaceCapabilities.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetPhysicalDeviceSurfaceFormats2KHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceSurfaceInfo2KHR>& pSurfaceInfo,
    const PointerDecoder<uint32_t>&             pSurfaceFormatCount,
    const StructPointerDecoder<Decoded_VkSurfaceFormat2KHR>& pSurfaceFormats)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceSurfaceFormats2KHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkPhysicalDeviceSurfaceInfo2KHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSurfaceInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSurfaceInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: uint32_t* pSurfaceFormatCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSurfaceFormatCount\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSurfaceFormatCount.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkSurfaceFormat2KHR* pSurfaceFormats
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSurfaceFormat2KHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSurfaceFormats\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSurfaceFormats.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkGetPhysicalDeviceDisplayProperties2KHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const PointerDecoder<uint32_t>&             pPropertyCount,
    const StructPointerDecoder<Decoded_VkDisplayProperties2KHR>& pProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceDisplayProperties2KHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: uint32_t* pPropertyCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pPropertyCount\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pPropertyCount.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkDisplayProperties2KHR* pProperties
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDisplayProperties2KHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pProperties.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetPhysicalDeviceDisplayPlaneProperties2KHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const PointerDecoder<uint32_t>&             pPropertyCount,
    const StructPointerDecoder<Decoded_VkDisplayPlaneProperties2KHR>& pProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceDisplayPlaneProperties2KHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: uint32_t* pPropertyCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pPropertyCount\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pPropertyCount.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkDisplayPlaneProperties2KHR* pProperties
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDisplayPlaneProperties2KHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pProperties.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetDisplayModeProperties2KHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            display,
    const PointerDecoder<uint32_t>&             pPropertyCount,
    const StructPointerDecoder<Decoded_VkDisplayModeProperties2KHR>& pProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetDisplayModeProperties2KHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: VkDisplayKHR display
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDisplayKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"display\",\n";
    outString += "                },\n";

    // func arg: uint32_t* pPropertyCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pPropertyCount\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pPropertyCount.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkDisplayModeProperties2KHR* pProperties
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDisplayModeProperties2KHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pProperties.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetDisplayPlaneCapabilities2KHR(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkDisplayPlaneInfo2KHR>& pDisplayPlaneInfo,
    const StructPointerDecoder<Decoded_VkDisplayPlaneCapabilities2KHR>& pCapabilities)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetDisplayPlaneCapabilities2KHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: const VkDisplayPlaneInfo2KHR* pDisplayPlaneInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkDisplayPlaneInfo2KHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pDisplayPlaneInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pDisplayPlaneInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkDisplayPlaneCapabilities2KHR* pCapabilities
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDisplayPlaneCapabilities2KHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCapabilities\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCapabilities.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkGetImageMemoryRequirements2KHR(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImageMemoryRequirementsInfo2>& pInfo,
    const StructPointerDecoder<Decoded_VkMemoryRequirements2>& pMemoryRequirements)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetImageMemoryRequirements2KHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkImageMemoryRequirementsInfo2* pInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkImageMemoryRequirementsInfo2*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkMemoryRequirements2* pMemoryRequirements
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkMemoryRequirements2*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pMemoryRequirements\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pMemoryRequirements.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetBufferMemoryRequirements2KHR(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkBufferMemoryRequirementsInfo2>& pInfo,
    const StructPointerDecoder<Decoded_VkMemoryRequirements2>& pMemoryRequirements)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetBufferMemoryRequirements2KHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkBufferMemoryRequirementsInfo2* pInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkBufferMemoryRequirementsInfo2*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkMemoryRequirements2* pMemoryRequirements
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkMemoryRequirements2*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pMemoryRequirements\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pMemoryRequirements.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetImageSparseMemoryRequirements2KHR(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImageSparseMemoryRequirementsInfo2>& pInfo,
    const PointerDecoder<uint32_t>&             pSparseMemoryRequirementCount,
    const StructPointerDecoder<Decoded_VkSparseImageMemoryRequirements2>& pSparseMemoryRequirements)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetImageSparseMemoryRequirements2KHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkImageSparseMemoryRequirementsInfo2* pInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkImageSparseMemoryRequirementsInfo2*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: uint32_t* pSparseMemoryRequirementCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSparseMemoryRequirementCount\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSparseMemoryRequirementCount.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkSparseImageMemoryRequirements2* pSparseMemoryRequirements
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSparseImageMemoryRequirements2*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSparseMemoryRequirements\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSparseMemoryRequirements.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkCreateSamplerYcbcrConversionKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSamplerYcbcrConversionCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSamplerYcbcrConversion>& pYcbcrConversion)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreateSamplerYcbcrConversionKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkSamplerYcbcrConversionCreateInfo* pCreateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkSamplerYcbcrConversionCreateInfo*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkSamplerYcbcrConversion* pYcbcrConversion
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSamplerYcbcrConversion*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pYcbcrConversion\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pYcbcrConversion.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkDestroySamplerYcbcrConversionKHR(
    format::HandleId                            device,
    format::HandleId                            ycbcrConversion,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkDestroySamplerYcbcrConversionKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkSamplerYcbcrConversion ycbcrConversion
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSamplerYcbcrConversion\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"ycbcrConversion\",\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkBindBufferMemory2KHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    bindInfoCount,
    const StructPointerDecoder<Decoded_VkBindBufferMemoryInfo>& pBindInfos)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkBindBufferMemory2KHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: uint32_t bindInfoCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"bindInfoCount\",\n";
    outString += "                },\n";

    // func arg: const VkBindBufferMemoryInfo* pBindInfos
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkBindBufferMemoryInfo*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pBindInfos\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pBindInfos.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkBindImageMemory2KHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    bindInfoCount,
    const StructPointerDecoder<Decoded_VkBindImageMemoryInfo>& pBindInfos)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkBindImageMemory2KHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: uint32_t bindInfoCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"bindInfoCount\",\n";
    outString += "                },\n";

    // func arg: const VkBindImageMemoryInfo* pBindInfos
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkBindImageMemoryInfo*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pBindInfos\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pBindInfos.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkGetDescriptorSetLayoutSupportKHR(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDescriptorSetLayoutCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkDescriptorSetLayoutSupport>& pSupport)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetDescriptorSetLayoutSupportKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkDescriptorSetLayoutCreateInfo* pCreateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkDescriptorSetLayoutCreateInfo*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkDescriptorSetLayoutSupport* pSupport
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDescriptorSetLayoutSupport*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSupport\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSupport.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkCmdDrawIndirectCountKHR(
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
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdDrawIndirectCountKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: VkBuffer buffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"buffer\",\n";
    outString += "                },\n";

    // func arg: VkDeviceSize offset
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"offset\",\n";
    outString += "                },\n";

    // func arg: VkBuffer countBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"countBuffer\",\n";
    outString += "                },\n";

    // func arg: VkDeviceSize countBufferOffset
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"countBufferOffset\",\n";
    outString += "                },\n";

    // func arg: uint32_t maxDrawCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxDrawCount\",\n";
    outString += "                },\n";

    // func arg: uint32_t stride
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"stride\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdDrawIndexedIndirectCountKHR(
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
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdDrawIndexedIndirectCountKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: VkBuffer buffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"buffer\",\n";
    outString += "                },\n";

    // func arg: VkDeviceSize offset
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"offset\",\n";
    outString += "                },\n";

    // func arg: VkBuffer countBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"countBuffer\",\n";
    outString += "                },\n";

    // func arg: VkDeviceSize countBufferOffset
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"countBufferOffset\",\n";
    outString += "                },\n";

    // func arg: uint32_t maxDrawCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxDrawCount\",\n";
    outString += "                },\n";

    // func arg: uint32_t stride
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"stride\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkGetSemaphoreCounterValueKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            semaphore,
    const PointerDecoder<uint64_t>&             pValue)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetSemaphoreCounterValueKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkSemaphore semaphore
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSemaphore\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"semaphore\",\n";
    outString += "                },\n";

    // func arg: uint64_t* pValue
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pValue\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pValue.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkWaitSemaphoresKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSemaphoreWaitInfoKHR>& pWaitInfo,
    uint64_t                                    timeout)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkWaitSemaphoresKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkSemaphoreWaitInfoKHR* pWaitInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkSemaphoreWaitInfoKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pWaitInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pWaitInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: uint64_t timeout
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"timeout\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkSignalSemaphoreKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkSemaphoreSignalInfoKHR>& pSignalInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkSignalSemaphoreKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkSemaphoreSignalInfoKHR* pSignalInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkSemaphoreSignalInfoKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSignalInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSignalInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkGetPipelineExecutablePropertiesKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkPipelineInfoKHR>& pPipelineInfo,
    const PointerDecoder<uint32_t>&             pExecutableCount,
    const StructPointerDecoder<Decoded_VkPipelineExecutablePropertiesKHR>& pProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPipelineExecutablePropertiesKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkPipelineInfoKHR* pPipelineInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkPipelineInfoKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pPipelineInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pPipelineInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: uint32_t* pExecutableCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pExecutableCount\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pExecutableCount.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkPipelineExecutablePropertiesKHR* pProperties
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineExecutablePropertiesKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pProperties.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetPipelineExecutableStatisticsKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkPipelineExecutableInfoKHR>& pExecutableInfo,
    const PointerDecoder<uint32_t>&             pStatisticCount,
    const StructPointerDecoder<Decoded_VkPipelineExecutableStatisticKHR>& pStatistics)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPipelineExecutableStatisticsKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkPipelineExecutableInfoKHR* pExecutableInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkPipelineExecutableInfoKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pExecutableInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pExecutableInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: uint32_t* pStatisticCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pStatisticCount\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pStatisticCount.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkPipelineExecutableStatisticKHR* pStatistics
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineExecutableStatisticKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pStatistics\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pStatistics.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetPipelineExecutableInternalRepresentationsKHR(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkPipelineExecutableInfoKHR>& pExecutableInfo,
    const PointerDecoder<uint32_t>&             pInternalRepresentationCount,
    const StructPointerDecoder<Decoded_VkPipelineExecutableInternalRepresentationKHR>& pInternalRepresentations)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPipelineExecutableInternalRepresentationsKHR\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkPipelineExecutableInfoKHR* pExecutableInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkPipelineExecutableInfoKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pExecutableInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pExecutableInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: uint32_t* pInternalRepresentationCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pInternalRepresentationCount\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pInternalRepresentationCount.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkPipelineExecutableInternalRepresentationKHR* pInternalRepresentations
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineExecutableInternalRepresentationKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pInternalRepresentations\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pInternalRepresentations.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkCreateDebugReportCallbackEXT(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkDebugReportCallbackCreateInfoEXT>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkDebugReportCallbackEXT>& pCallback)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreateDebugReportCallbackEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkInstance instance
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkInstance\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"instance\",\n";
    outString += "                },\n";

    // func arg: const VkDebugReportCallbackCreateInfoEXT* pCreateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkDebugReportCallbackCreateInfoEXT*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkDebugReportCallbackEXT* pCallback
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDebugReportCallbackEXT*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCallback\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCallback.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkDestroyDebugReportCallbackEXT(
    format::HandleId                            instance,
    format::HandleId                            callback,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkDestroyDebugReportCallbackEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkInstance instance
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkInstance\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"instance\",\n";
    outString += "                },\n";

    // func arg: VkDebugReportCallbackEXT callback
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDebugReportCallbackEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"callback\",\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkDebugReportMessageEXT(
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
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkDebugReportMessageEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkInstance instance
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkInstance\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"instance\",\n";
    outString += "                },\n";

    // func arg: VkDebugReportFlagsEXT flags
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDebugReportFlagsEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    outString += "                },\n";

    // func arg: VkDebugReportObjectTypeEXT objectType
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDebugReportObjectTypeEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"objectType\",\n";
    outString += "                },\n";

    // func arg: uint64_t object
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"object\",\n";
    outString += "                },\n";

    // func arg: size_t location
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"size_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"location\",\n";
    outString += "                },\n";

    // func arg: int32_t messageCode
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"int32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"messageCode\",\n";
    outString += "                },\n";

    // func arg: const char* pLayerPrefix
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const char*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pLayerPrefix\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pLayerPrefix.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const char* pMessage
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const char*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pMessage\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pMessage.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkDebugMarkerSetObjectTagEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDebugMarkerObjectTagInfoEXT>& pTagInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkDebugMarkerSetObjectTagEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkDebugMarkerObjectTagInfoEXT* pTagInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkDebugMarkerObjectTagInfoEXT*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pTagInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pTagInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkDebugMarkerSetObjectNameEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDebugMarkerObjectNameInfoEXT>& pNameInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkDebugMarkerSetObjectNameEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkDebugMarkerObjectNameInfoEXT* pNameInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkDebugMarkerObjectNameInfoEXT*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNameInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pNameInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdDebugMarkerBeginEXT(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkDebugMarkerMarkerInfoEXT>& pMarkerInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdDebugMarkerBeginEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: const VkDebugMarkerMarkerInfoEXT* pMarkerInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkDebugMarkerMarkerInfoEXT*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pMarkerInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pMarkerInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdDebugMarkerEndEXT(
    format::HandleId                            commandBuffer)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdDebugMarkerEndEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdDebugMarkerInsertEXT(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkDebugMarkerMarkerInfoEXT>& pMarkerInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdDebugMarkerInsertEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: const VkDebugMarkerMarkerInfoEXT* pMarkerInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkDebugMarkerMarkerInfoEXT*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pMarkerInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pMarkerInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkCmdBindTransformFeedbackBuffersEXT(
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
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdBindTransformFeedbackBuffersEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: uint32_t firstBinding
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"firstBinding\",\n";
    outString += "                },\n";

    // func arg: uint32_t bindingCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"bindingCount\",\n";
    outString += "                },\n";

    // func arg: const VkBuffer* pBuffers
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkBuffer*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pBuffers\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pBuffers.GetAddress() /* TWO */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkDeviceSize* pOffsets
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkDeviceSize*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pOffsets\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pOffsets.GetAddress() /* TWO */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkDeviceSize* pSizes
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkDeviceSize*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSizes\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSizes.GetAddress() /* TWO */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdBeginTransformFeedbackEXT(
    format::HandleId                            commandBuffer,
    uint32_t                                    firstCounterBuffer,
    uint32_t                                    counterBufferCount,
    const HandlePointerDecoder<VkBuffer>&       pCounterBuffers,
    const PointerDecoder<VkDeviceSize>&         pCounterBufferOffsets)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdBeginTransformFeedbackEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: uint32_t firstCounterBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"firstCounterBuffer\",\n";
    outString += "                },\n";

    // func arg: uint32_t counterBufferCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"counterBufferCount\",\n";
    outString += "                },\n";

    // func arg: const VkBuffer* pCounterBuffers
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkBuffer*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCounterBuffers\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCounterBuffers.GetAddress() /* TWO */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkDeviceSize* pCounterBufferOffsets
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkDeviceSize*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCounterBufferOffsets\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCounterBufferOffsets.GetAddress() /* TWO */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdEndTransformFeedbackEXT(
    format::HandleId                            commandBuffer,
    uint32_t                                    firstCounterBuffer,
    uint32_t                                    counterBufferCount,
    const HandlePointerDecoder<VkBuffer>&       pCounterBuffers,
    const PointerDecoder<VkDeviceSize>&         pCounterBufferOffsets)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdEndTransformFeedbackEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: uint32_t firstCounterBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"firstCounterBuffer\",\n";
    outString += "                },\n";

    // func arg: uint32_t counterBufferCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"counterBufferCount\",\n";
    outString += "                },\n";

    // func arg: const VkBuffer* pCounterBuffers
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkBuffer*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCounterBuffers\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCounterBuffers.GetAddress() /* TWO */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkDeviceSize* pCounterBufferOffsets
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkDeviceSize*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCounterBufferOffsets\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCounterBufferOffsets.GetAddress() /* TWO */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdBeginQueryIndexedEXT(
    format::HandleId                            commandBuffer,
    format::HandleId                            queryPool,
    uint32_t                                    query,
    VkQueryControlFlags                         flags,
    uint32_t                                    index)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdBeginQueryIndexedEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: VkQueryPool queryPool
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkQueryPool\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queryPool\",\n";
    outString += "                },\n";

    // func arg: uint32_t query
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"query\",\n";
    outString += "                },\n";

    // func arg: VkQueryControlFlags flags
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkQueryControlFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    outString += "                },\n";

    // func arg: uint32_t index
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"index\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdEndQueryIndexedEXT(
    format::HandleId                            commandBuffer,
    format::HandleId                            queryPool,
    uint32_t                                    query,
    uint32_t                                    index)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdEndQueryIndexedEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: VkQueryPool queryPool
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkQueryPool\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queryPool\",\n";
    outString += "                },\n";

    // func arg: uint32_t query
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"query\",\n";
    outString += "                },\n";

    // func arg: uint32_t index
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"index\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdDrawIndirectByteCountEXT(
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
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdDrawIndirectByteCountEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: uint32_t instanceCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"instanceCount\",\n";
    outString += "                },\n";

    // func arg: uint32_t firstInstance
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"firstInstance\",\n";
    outString += "                },\n";

    // func arg: VkBuffer counterBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"counterBuffer\",\n";
    outString += "                },\n";

    // func arg: VkDeviceSize counterBufferOffset
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"counterBufferOffset\",\n";
    outString += "                },\n";

    // func arg: uint32_t counterOffset
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"counterOffset\",\n";
    outString += "                },\n";

    // func arg: uint32_t vertexStride
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"vertexStride\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkGetImageViewHandleNVX(
    uint32_t                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkImageViewHandleInfoNVX>& pInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetImageViewHandleNVX\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"uint32_t\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "%u\"\n", returnValue);
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkImageViewHandleInfoNVX* pInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkImageViewHandleInfoNVX*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkCmdDrawIndirectCountAMD(
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
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdDrawIndirectCountAMD\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: VkBuffer buffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"buffer\",\n";
    outString += "                },\n";

    // func arg: VkDeviceSize offset
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"offset\",\n";
    outString += "                },\n";

    // func arg: VkBuffer countBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"countBuffer\",\n";
    outString += "                },\n";

    // func arg: VkDeviceSize countBufferOffset
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"countBufferOffset\",\n";
    outString += "                },\n";

    // func arg: uint32_t maxDrawCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxDrawCount\",\n";
    outString += "                },\n";

    // func arg: uint32_t stride
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"stride\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdDrawIndexedIndirectCountAMD(
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
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdDrawIndexedIndirectCountAMD\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: VkBuffer buffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"buffer\",\n";
    outString += "                },\n";

    // func arg: VkDeviceSize offset
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"offset\",\n";
    outString += "                },\n";

    // func arg: VkBuffer countBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"countBuffer\",\n";
    outString += "                },\n";

    // func arg: VkDeviceSize countBufferOffset
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"countBufferOffset\",\n";
    outString += "                },\n";

    // func arg: uint32_t maxDrawCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxDrawCount\",\n";
    outString += "                },\n";

    // func arg: uint32_t stride
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"stride\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkGetShaderInfoAMD(
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
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetShaderInfoAMD\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkPipeline pipeline
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipeline\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pipeline\",\n";
    outString += "                },\n";

    // func arg: VkShaderStageFlagBits shaderStage
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkShaderStageFlagBits\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderStage\",\n";
    outString += "                },\n";

    // func arg: VkShaderInfoTypeAMD infoType
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkShaderInfoTypeAMD\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"infoType\",\n";
    outString += "                },\n";

    // func arg: size_t* pInfoSize
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"size_t*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pInfoSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pInfoSize.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: void* pInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pInfo.GetAddress() /* TWO */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkCreateStreamDescriptorSurfaceGGP(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkStreamDescriptorSurfaceCreateInfoGGP>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreateStreamDescriptorSurfaceGGP\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkInstance instance
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkInstance\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"instance\",\n";
    outString += "                },\n";

    // func arg: const VkStreamDescriptorSurfaceCreateInfoGGP* pCreateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkStreamDescriptorSurfaceCreateInfoGGP*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkSurfaceKHR* pSurface
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSurfaceKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSurface\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSurface.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkGetPhysicalDeviceExternalImageFormatPropertiesNV(
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
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceExternalImageFormatPropertiesNV\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: VkFormat format
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFormat\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"format\",\n";
    outString += "                },\n";

    // func arg: VkImageType type
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"type\",\n";
    outString += "                },\n";

    // func arg: VkImageTiling tiling
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageTiling\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"tiling\",\n";
    outString += "                },\n";

    // func arg: VkImageUsageFlags usage
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageUsageFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"usage\",\n";
    outString += "                },\n";

    // func arg: VkImageCreateFlags flags
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageCreateFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    outString += "                },\n";

    // func arg: VkExternalMemoryHandleTypeFlagsNV externalHandleType
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalMemoryHandleTypeFlagsNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"externalHandleType\",\n";
    outString += "                },\n";

    // func arg: VkExternalImageFormatPropertiesNV* pExternalImageFormatProperties
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalImageFormatPropertiesNV*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pExternalImageFormatProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pExternalImageFormatProperties.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkGetMemoryWin32HandleNV(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            memory,
    VkExternalMemoryHandleTypeFlagsNV           handleType,
    const PointerDecoder<uint64_t>&             pHandle)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetMemoryWin32HandleNV\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkDeviceMemory memory
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceMemory\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"memory\",\n";
    outString += "                },\n";

    // func arg: VkExternalMemoryHandleTypeFlagsNV handleType
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalMemoryHandleTypeFlagsNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"handleType\",\n";
    outString += "                },\n";

    // func arg: void** pHandle
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void**\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pHandle\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pHandle.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkCreateViSurfaceNN(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkViSurfaceCreateInfoNN>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreateViSurfaceNN\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkInstance instance
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkInstance\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"instance\",\n";
    outString += "                },\n";

    // func arg: const VkViSurfaceCreateInfoNN* pCreateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkViSurfaceCreateInfoNN*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkSurfaceKHR* pSurface
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSurfaceKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSurface\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSurface.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkCmdBeginConditionalRenderingEXT(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkConditionalRenderingBeginInfoEXT>& pConditionalRenderingBegin)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdBeginConditionalRenderingEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: const VkConditionalRenderingBeginInfoEXT* pConditionalRenderingBegin
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkConditionalRenderingBeginInfoEXT*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pConditionalRenderingBegin\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pConditionalRenderingBegin.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdEndConditionalRenderingEXT(
    format::HandleId                            commandBuffer)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdEndConditionalRenderingEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkCmdProcessCommandsNVX(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkCmdProcessCommandsInfoNVX>& pProcessCommandsInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdProcessCommandsNVX\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: const VkCmdProcessCommandsInfoNVX* pProcessCommandsInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkCmdProcessCommandsInfoNVX*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pProcessCommandsInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pProcessCommandsInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdReserveSpaceForCommandsNVX(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkCmdReserveSpaceForCommandsInfoNVX>& pReserveSpaceInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdReserveSpaceForCommandsNVX\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: const VkCmdReserveSpaceForCommandsInfoNVX* pReserveSpaceInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkCmdReserveSpaceForCommandsInfoNVX*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pReserveSpaceInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pReserveSpaceInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCreateIndirectCommandsLayoutNVX(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkIndirectCommandsLayoutCreateInfoNVX>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkIndirectCommandsLayoutNVX>& pIndirectCommandsLayout)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreateIndirectCommandsLayoutNVX\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkIndirectCommandsLayoutCreateInfoNVX* pCreateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkIndirectCommandsLayoutCreateInfoNVX*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkIndirectCommandsLayoutNVX* pIndirectCommandsLayout
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkIndirectCommandsLayoutNVX*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pIndirectCommandsLayout\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pIndirectCommandsLayout.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkDestroyIndirectCommandsLayoutNVX(
    format::HandleId                            device,
    format::HandleId                            indirectCommandsLayout,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkDestroyIndirectCommandsLayoutNVX\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkIndirectCommandsLayoutNVX indirectCommandsLayout
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkIndirectCommandsLayoutNVX\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"indirectCommandsLayout\",\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCreateObjectTableNVX(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkObjectTableCreateInfoNVX>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkObjectTableNVX>& pObjectTable)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreateObjectTableNVX\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkObjectTableCreateInfoNVX* pCreateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkObjectTableCreateInfoNVX*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkObjectTableNVX* pObjectTable
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkObjectTableNVX*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pObjectTable\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pObjectTable.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkDestroyObjectTableNVX(
    format::HandleId                            device,
    format::HandleId                            objectTable,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkDestroyObjectTableNVX\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkObjectTableNVX objectTable
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkObjectTableNVX\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"objectTable\",\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkUnregisterObjectsNVX(
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
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkUnregisterObjectsNVX\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkObjectTableNVX objectTable
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkObjectTableNVX\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"objectTable\",\n";
    outString += "                },\n";

    // func arg: uint32_t objectCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"objectCount\",\n";
    outString += "                },\n";

    // func arg: const VkObjectEntryTypeNVX* pObjectEntryTypes
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkObjectEntryTypeNVX*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pObjectEntryTypes\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pObjectEntryTypes.GetAddress() /* TWO */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const uint32_t* pObjectIndices
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const uint32_t*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pObjectIndices\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pObjectIndices.GetAddress() /* TWO */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX(
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkDeviceGeneratedCommandsFeaturesNVX>& pFeatures,
    const StructPointerDecoder<Decoded_VkDeviceGeneratedCommandsLimitsNVX>& pLimits)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: VkDeviceGeneratedCommandsFeaturesNVX* pFeatures
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceGeneratedCommandsFeaturesNVX*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pFeatures\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pFeatures.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkDeviceGeneratedCommandsLimitsNVX* pLimits
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceGeneratedCommandsLimitsNVX*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pLimits\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pLimits.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkCmdSetViewportWScalingNV(
    format::HandleId                            commandBuffer,
    uint32_t                                    firstViewport,
    uint32_t                                    viewportCount,
    const StructPointerDecoder<Decoded_VkViewportWScalingNV>& pViewportWScalings)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdSetViewportWScalingNV\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: uint32_t firstViewport
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"firstViewport\",\n";
    outString += "                },\n";

    // func arg: uint32_t viewportCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"viewportCount\",\n";
    outString += "                },\n";

    // func arg: const VkViewportWScalingNV* pViewportWScalings
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkViewportWScalingNV*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pViewportWScalings\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pViewportWScalings.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkReleaseDisplayEXT(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            display)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkReleaseDisplayEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: VkDisplayKHR display
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDisplayKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"display\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkAcquireXlibDisplayEXT(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    uint64_t                                    dpy,
    format::HandleId                            display)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkAcquireXlibDisplayEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: void* dpy
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dpy\",\n";
    outString += "                },\n";

    // func arg: VkDisplayKHR display
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDisplayKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"display\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetRandROutputDisplayEXT(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    uint64_t                                    dpy,
    size_t                                      rrOutput,
    const HandlePointerDecoder<VkDisplayKHR>&   pDisplay)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetRandROutputDisplayEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: void* dpy
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dpy\",\n";
    outString += "                },\n";

    // func arg: size_t rrOutput
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"size_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"rrOutput\",\n";
    outString += "                },\n";

    // func arg: VkDisplayKHR* pDisplay
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDisplayKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pDisplay\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pDisplay.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkGetPhysicalDeviceSurfaceCapabilities2EXT(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            surface,
    const StructPointerDecoder<Decoded_VkSurfaceCapabilities2EXT>& pSurfaceCapabilities)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceSurfaceCapabilities2EXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: VkSurfaceKHR surface
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSurfaceKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"surface\",\n";
    outString += "                },\n";

    // func arg: VkSurfaceCapabilities2EXT* pSurfaceCapabilities
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSurfaceCapabilities2EXT*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSurfaceCapabilities\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSurfaceCapabilities.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkDisplayPowerControlEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            display,
    const StructPointerDecoder<Decoded_VkDisplayPowerInfoEXT>& pDisplayPowerInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkDisplayPowerControlEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkDisplayKHR display
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDisplayKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"display\",\n";
    outString += "                },\n";

    // func arg: const VkDisplayPowerInfoEXT* pDisplayPowerInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkDisplayPowerInfoEXT*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pDisplayPowerInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pDisplayPowerInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkRegisterDeviceEventEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDeviceEventInfoEXT>& pDeviceEventInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkFence>&        pFence)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkRegisterDeviceEventEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkDeviceEventInfoEXT* pDeviceEventInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkDeviceEventInfoEXT*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pDeviceEventInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pDeviceEventInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkFence* pFence
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFence*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pFence\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pFence.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkRegisterDisplayEventEXT(
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
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkRegisterDisplayEventEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkDisplayKHR display
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDisplayKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"display\",\n";
    outString += "                },\n";

    // func arg: const VkDisplayEventInfoEXT* pDisplayEventInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkDisplayEventInfoEXT*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pDisplayEventInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pDisplayEventInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkFence* pFence
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFence*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pFence\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pFence.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetSwapchainCounterEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain,
    VkSurfaceCounterFlagBitsEXT                 counter,
    const PointerDecoder<uint64_t>&             pCounterValue)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetSwapchainCounterEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkSwapchainKHR swapchain
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSwapchainKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"swapchain\",\n";
    outString += "                },\n";

    // func arg: VkSurfaceCounterFlagBitsEXT counter
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSurfaceCounterFlagBitsEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"counter\",\n";
    outString += "                },\n";

    // func arg: uint64_t* pCounterValue
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCounterValue\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCounterValue.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkGetRefreshCycleDurationGOOGLE(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain,
    const StructPointerDecoder<Decoded_VkRefreshCycleDurationGOOGLE>& pDisplayTimingProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetRefreshCycleDurationGOOGLE\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkSwapchainKHR swapchain
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSwapchainKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"swapchain\",\n";
    outString += "                },\n";

    // func arg: VkRefreshCycleDurationGOOGLE* pDisplayTimingProperties
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkRefreshCycleDurationGOOGLE*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pDisplayTimingProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pDisplayTimingProperties.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetPastPresentationTimingGOOGLE(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain,
    const PointerDecoder<uint32_t>&             pPresentationTimingCount,
    const StructPointerDecoder<Decoded_VkPastPresentationTimingGOOGLE>& pPresentationTimings)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPastPresentationTimingGOOGLE\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkSwapchainKHR swapchain
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSwapchainKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"swapchain\",\n";
    outString += "                },\n";

    // func arg: uint32_t* pPresentationTimingCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pPresentationTimingCount\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pPresentationTimingCount.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkPastPresentationTimingGOOGLE* pPresentationTimings
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPastPresentationTimingGOOGLE*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pPresentationTimings\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pPresentationTimings.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkCmdSetDiscardRectangleEXT(
    format::HandleId                            commandBuffer,
    uint32_t                                    firstDiscardRectangle,
    uint32_t                                    discardRectangleCount,
    const StructPointerDecoder<Decoded_VkRect2D>& pDiscardRectangles)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdSetDiscardRectangleEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: uint32_t firstDiscardRectangle
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"firstDiscardRectangle\",\n";
    outString += "                },\n";

    // func arg: uint32_t discardRectangleCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"discardRectangleCount\",\n";
    outString += "                },\n";

    // func arg: const VkRect2D* pDiscardRectangles
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkRect2D*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pDiscardRectangles\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pDiscardRectangles.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkSetHdrMetadataEXT(
    format::HandleId                            device,
    uint32_t                                    swapchainCount,
    const HandlePointerDecoder<VkSwapchainKHR>& pSwapchains,
    const StructPointerDecoder<Decoded_VkHdrMetadataEXT>& pMetadata)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkSetHdrMetadataEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: uint32_t swapchainCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"swapchainCount\",\n";
    outString += "                },\n";

    // func arg: const VkSwapchainKHR* pSwapchains
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkSwapchainKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSwapchains\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSwapchains.GetAddress() /* TWO */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkHdrMetadataEXT* pMetadata
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkHdrMetadataEXT*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pMetadata\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pMetadata.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkCreateIOSSurfaceMVK(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkIOSSurfaceCreateInfoMVK>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreateIOSSurfaceMVK\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkInstance instance
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkInstance\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"instance\",\n";
    outString += "                },\n";

    // func arg: const VkIOSSurfaceCreateInfoMVK* pCreateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkIOSSurfaceCreateInfoMVK*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkSurfaceKHR* pSurface
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSurfaceKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSurface\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSurface.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkCreateMacOSSurfaceMVK(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkMacOSSurfaceCreateInfoMVK>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreateMacOSSurfaceMVK\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkInstance instance
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkInstance\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"instance\",\n";
    outString += "                },\n";

    // func arg: const VkMacOSSurfaceCreateInfoMVK* pCreateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkMacOSSurfaceCreateInfoMVK*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkSurfaceKHR* pSurface
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSurfaceKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSurface\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSurface.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkSetDebugUtilsObjectNameEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDebugUtilsObjectNameInfoEXT>& pNameInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkSetDebugUtilsObjectNameEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkDebugUtilsObjectNameInfoEXT* pNameInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkDebugUtilsObjectNameInfoEXT*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNameInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pNameInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkSetDebugUtilsObjectTagEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkDebugUtilsObjectTagInfoEXT>& pTagInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkSetDebugUtilsObjectTagEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkDebugUtilsObjectTagInfoEXT* pTagInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkDebugUtilsObjectTagInfoEXT*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pTagInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pTagInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkQueueBeginDebugUtilsLabelEXT(
    format::HandleId                            queue,
    const StructPointerDecoder<Decoded_VkDebugUtilsLabelEXT>& pLabelInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkQueueBeginDebugUtilsLabelEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkQueue queue
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkQueue\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queue\",\n";
    outString += "                },\n";

    // func arg: const VkDebugUtilsLabelEXT* pLabelInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkDebugUtilsLabelEXT*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pLabelInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pLabelInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkQueueEndDebugUtilsLabelEXT(
    format::HandleId                            queue)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkQueueEndDebugUtilsLabelEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkQueue queue
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkQueue\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queue\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkQueueInsertDebugUtilsLabelEXT(
    format::HandleId                            queue,
    const StructPointerDecoder<Decoded_VkDebugUtilsLabelEXT>& pLabelInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkQueueInsertDebugUtilsLabelEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkQueue queue
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkQueue\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queue\",\n";
    outString += "                },\n";

    // func arg: const VkDebugUtilsLabelEXT* pLabelInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkDebugUtilsLabelEXT*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pLabelInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pLabelInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdBeginDebugUtilsLabelEXT(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkDebugUtilsLabelEXT>& pLabelInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdBeginDebugUtilsLabelEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: const VkDebugUtilsLabelEXT* pLabelInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkDebugUtilsLabelEXT*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pLabelInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pLabelInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdEndDebugUtilsLabelEXT(
    format::HandleId                            commandBuffer)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdEndDebugUtilsLabelEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdInsertDebugUtilsLabelEXT(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkDebugUtilsLabelEXT>& pLabelInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdInsertDebugUtilsLabelEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: const VkDebugUtilsLabelEXT* pLabelInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkDebugUtilsLabelEXT*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pLabelInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pLabelInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCreateDebugUtilsMessengerEXT(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkDebugUtilsMessengerCreateInfoEXT>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkDebugUtilsMessengerEXT>& pMessenger)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreateDebugUtilsMessengerEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkInstance instance
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkInstance\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"instance\",\n";
    outString += "                },\n";

    // func arg: const VkDebugUtilsMessengerCreateInfoEXT* pCreateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkDebugUtilsMessengerCreateInfoEXT*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkDebugUtilsMessengerEXT* pMessenger
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDebugUtilsMessengerEXT*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pMessenger\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pMessenger.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkDestroyDebugUtilsMessengerEXT(
    format::HandleId                            instance,
    format::HandleId                            messenger,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkDestroyDebugUtilsMessengerEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkInstance instance
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkInstance\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"instance\",\n";
    outString += "                },\n";

    // func arg: VkDebugUtilsMessengerEXT messenger
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDebugUtilsMessengerEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"messenger\",\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkSubmitDebugUtilsMessageEXT(
    format::HandleId                            instance,
    VkDebugUtilsMessageSeverityFlagBitsEXT      messageSeverity,
    VkDebugUtilsMessageTypeFlagsEXT             messageTypes,
    const StructPointerDecoder<Decoded_VkDebugUtilsMessengerCallbackDataEXT>& pCallbackData)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkSubmitDebugUtilsMessageEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkInstance instance
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkInstance\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"instance\",\n";
    outString += "                },\n";

    // func arg: VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDebugUtilsMessageSeverityFlagBitsEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"messageSeverity\",\n";
    outString += "                },\n";

    // func arg: VkDebugUtilsMessageTypeFlagsEXT messageTypes
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDebugUtilsMessageTypeFlagsEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"messageTypes\",\n";
    outString += "                },\n";

    // func arg: const VkDebugUtilsMessengerCallbackDataEXT* pCallbackData
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkDebugUtilsMessengerCallbackDataEXT*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCallbackData\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCallbackData.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkGetAndroidHardwareBufferPropertiesANDROID(
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint64_t                                    buffer,
    const StructPointerDecoder<Decoded_VkAndroidHardwareBufferPropertiesANDROID>& pProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetAndroidHardwareBufferPropertiesANDROID\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const struct void* buffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const struct void*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"buffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, buffer /* ACF */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkAndroidHardwareBufferPropertiesANDROID* pProperties
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkAndroidHardwareBufferPropertiesANDROID*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pProperties.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetMemoryAndroidHardwareBufferANDROID(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkMemoryGetAndroidHardwareBufferInfoANDROID>& pInfo,
    const PointerDecoder<uint64_t>&             pBuffer)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetMemoryAndroidHardwareBufferANDROID\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkMemoryGetAndroidHardwareBufferInfoANDROID* pInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkMemoryGetAndroidHardwareBufferInfoANDROID*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: struct void** pBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"struct void**\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pBuffer.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkCmdSetSampleLocationsEXT(
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkSampleLocationsInfoEXT>& pSampleLocationsInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdSetSampleLocationsEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: const VkSampleLocationsInfoEXT* pSampleLocationsInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkSampleLocationsInfoEXT*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSampleLocationsInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSampleLocationsInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetPhysicalDeviceMultisamplePropertiesEXT(
    format::HandleId                            physicalDevice,
    VkSampleCountFlagBits                       samples,
    const StructPointerDecoder<Decoded_VkMultisamplePropertiesEXT>& pMultisampleProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceMultisamplePropertiesEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: VkSampleCountFlagBits samples
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSampleCountFlagBits\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"samples\",\n";
    outString += "                },\n";

    // func arg: VkMultisamplePropertiesEXT* pMultisampleProperties
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkMultisamplePropertiesEXT*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pMultisampleProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pMultisampleProperties.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkGetImageDrmFormatModifierPropertiesEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            image,
    const StructPointerDecoder<Decoded_VkImageDrmFormatModifierPropertiesEXT>& pProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetImageDrmFormatModifierPropertiesEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkImage image
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImage\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"image\",\n";
    outString += "                },\n";

    // func arg: VkImageDrmFormatModifierPropertiesEXT* pProperties
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageDrmFormatModifierPropertiesEXT*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pProperties.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkCreateValidationCacheEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkValidationCacheCreateInfoEXT>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkValidationCacheEXT>& pValidationCache)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreateValidationCacheEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkValidationCacheCreateInfoEXT* pCreateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkValidationCacheCreateInfoEXT*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkValidationCacheEXT* pValidationCache
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkValidationCacheEXT*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pValidationCache\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pValidationCache.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkDestroyValidationCacheEXT(
    format::HandleId                            device,
    format::HandleId                            validationCache,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkDestroyValidationCacheEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkValidationCacheEXT validationCache
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkValidationCacheEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"validationCache\",\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkMergeValidationCachesEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            dstCache,
    uint32_t                                    srcCacheCount,
    const HandlePointerDecoder<VkValidationCacheEXT>& pSrcCaches)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkMergeValidationCachesEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkValidationCacheEXT dstCache
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkValidationCacheEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstCache\",\n";
    outString += "                },\n";

    // func arg: uint32_t srcCacheCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"srcCacheCount\",\n";
    outString += "                },\n";

    // func arg: const VkValidationCacheEXT* pSrcCaches
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkValidationCacheEXT*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSrcCaches\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSrcCaches.GetAddress() /* TWO */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetValidationCacheDataEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            validationCache,
    const PointerDecoder<size_t>&               pDataSize,
    const PointerDecoder<uint8_t>&              pData)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetValidationCacheDataEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkValidationCacheEXT validationCache
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkValidationCacheEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"validationCache\",\n";
    outString += "                },\n";

    // func arg: size_t* pDataSize
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"size_t*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pDataSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pDataSize.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: void* pData
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pData\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pData.GetAddress() /* TWO */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkCmdBindShadingRateImageNV(
    format::HandleId                            commandBuffer,
    format::HandleId                            imageView,
    VkImageLayout                               imageLayout)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdBindShadingRateImageNV\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: VkImageView imageView
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageView\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"imageView\",\n";
    outString += "                },\n";

    // func arg: VkImageLayout imageLayout
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageLayout\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"imageLayout\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdSetViewportShadingRatePaletteNV(
    format::HandleId                            commandBuffer,
    uint32_t                                    firstViewport,
    uint32_t                                    viewportCount,
    const StructPointerDecoder<Decoded_VkShadingRatePaletteNV>& pShadingRatePalettes)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdSetViewportShadingRatePaletteNV\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: uint32_t firstViewport
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"firstViewport\",\n";
    outString += "                },\n";

    // func arg: uint32_t viewportCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"viewportCount\",\n";
    outString += "                },\n";

    // func arg: const VkShadingRatePaletteNV* pShadingRatePalettes
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkShadingRatePaletteNV*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pShadingRatePalettes\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pShadingRatePalettes.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdSetCoarseSampleOrderNV(
    format::HandleId                            commandBuffer,
    VkCoarseSampleOrderTypeNV                   sampleOrderType,
    uint32_t                                    customSampleOrderCount,
    const StructPointerDecoder<Decoded_VkCoarseSampleOrderCustomNV>& pCustomSampleOrders)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdSetCoarseSampleOrderNV\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: VkCoarseSampleOrderTypeNV sampleOrderType
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCoarseSampleOrderTypeNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sampleOrderType\",\n";
    outString += "                },\n";

    // func arg: uint32_t customSampleOrderCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"customSampleOrderCount\",\n";
    outString += "                },\n";

    // func arg: const VkCoarseSampleOrderCustomNV* pCustomSampleOrders
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkCoarseSampleOrderCustomNV*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCustomSampleOrders\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCustomSampleOrders.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkCreateAccelerationStructureNV(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkAccelerationStructureCreateInfoNV>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkAccelerationStructureNV>& pAccelerationStructure)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreateAccelerationStructureNV\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkAccelerationStructureCreateInfoNV* pCreateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAccelerationStructureCreateInfoNV*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkAccelerationStructureNV* pAccelerationStructure
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkAccelerationStructureNV*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAccelerationStructure\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAccelerationStructure.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkDestroyAccelerationStructureNV(
    format::HandleId                            device,
    format::HandleId                            accelerationStructure,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkDestroyAccelerationStructureNV\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkAccelerationStructureNV accelerationStructure
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkAccelerationStructureNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"accelerationStructure\",\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetAccelerationStructureMemoryRequirementsNV(
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkAccelerationStructureMemoryRequirementsInfoNV>& pInfo,
    const StructPointerDecoder<Decoded_VkMemoryRequirements2KHR>& pMemoryRequirements)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetAccelerationStructureMemoryRequirementsNV\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkAccelerationStructureMemoryRequirementsInfoNV* pInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAccelerationStructureMemoryRequirementsInfoNV*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkMemoryRequirements2KHR* pMemoryRequirements
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkMemoryRequirements2KHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pMemoryRequirements\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pMemoryRequirements.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkBindAccelerationStructureMemoryNV(
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    bindInfoCount,
    const StructPointerDecoder<Decoded_VkBindAccelerationStructureMemoryInfoNV>& pBindInfos)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkBindAccelerationStructureMemoryNV\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: uint32_t bindInfoCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"bindInfoCount\",\n";
    outString += "                },\n";

    // func arg: const VkBindAccelerationStructureMemoryInfoNV* pBindInfos
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkBindAccelerationStructureMemoryInfoNV*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pBindInfos\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pBindInfos.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdBuildAccelerationStructureNV(
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
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdBuildAccelerationStructureNV\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: const VkAccelerationStructureInfoNV* pInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAccelerationStructureInfoNV*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkBuffer instanceData
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"instanceData\",\n";
    outString += "                },\n";

    // func arg: VkDeviceSize instanceOffset
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"instanceOffset\",\n";
    outString += "                },\n";

    // func arg: VkBool32 update
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"update\",\n";
    outString += "                },\n";

    // func arg: VkAccelerationStructureNV dst
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkAccelerationStructureNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dst\",\n";
    outString += "                },\n";

    // func arg: VkAccelerationStructureNV src
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkAccelerationStructureNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"src\",\n";
    outString += "                },\n";

    // func arg: VkBuffer scratch
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"scratch\",\n";
    outString += "                },\n";

    // func arg: VkDeviceSize scratchOffset
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"scratchOffset\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdCopyAccelerationStructureNV(
    format::HandleId                            commandBuffer,
    format::HandleId                            dst,
    format::HandleId                            src,
    VkCopyAccelerationStructureModeNV           mode)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdCopyAccelerationStructureNV\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: VkAccelerationStructureNV dst
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkAccelerationStructureNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dst\",\n";
    outString += "                },\n";

    // func arg: VkAccelerationStructureNV src
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkAccelerationStructureNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"src\",\n";
    outString += "                },\n";

    // func arg: VkCopyAccelerationStructureModeNV mode
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCopyAccelerationStructureModeNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"mode\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdTraceRaysNV(
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
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdTraceRaysNV\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: VkBuffer raygenShaderBindingTableBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"raygenShaderBindingTableBuffer\",\n";
    outString += "                },\n";

    // func arg: VkDeviceSize raygenShaderBindingOffset
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"raygenShaderBindingOffset\",\n";
    outString += "                },\n";

    // func arg: VkBuffer missShaderBindingTableBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"missShaderBindingTableBuffer\",\n";
    outString += "                },\n";

    // func arg: VkDeviceSize missShaderBindingOffset
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"missShaderBindingOffset\",\n";
    outString += "                },\n";

    // func arg: VkDeviceSize missShaderBindingStride
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"missShaderBindingStride\",\n";
    outString += "                },\n";

    // func arg: VkBuffer hitShaderBindingTableBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"hitShaderBindingTableBuffer\",\n";
    outString += "                },\n";

    // func arg: VkDeviceSize hitShaderBindingOffset
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"hitShaderBindingOffset\",\n";
    outString += "                },\n";

    // func arg: VkDeviceSize hitShaderBindingStride
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"hitShaderBindingStride\",\n";
    outString += "                },\n";

    // func arg: VkBuffer callableShaderBindingTableBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"callableShaderBindingTableBuffer\",\n";
    outString += "                },\n";

    // func arg: VkDeviceSize callableShaderBindingOffset
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"callableShaderBindingOffset\",\n";
    outString += "                },\n";

    // func arg: VkDeviceSize callableShaderBindingStride
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"callableShaderBindingStride\",\n";
    outString += "                },\n";

    // func arg: uint32_t width
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"width\",\n";
    outString += "                },\n";

    // func arg: uint32_t height
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"height\",\n";
    outString += "                },\n";

    // func arg: uint32_t depth
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"depth\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCreateRayTracingPipelinesNV(
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
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreateRayTracingPipelinesNV\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkPipelineCache pipelineCache
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineCache\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pipelineCache\",\n";
    outString += "                },\n";

    // func arg: uint32_t createInfoCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"createInfoCount\",\n";
    outString += "                },\n";

    // func arg: const VkRayTracingPipelineCreateInfoNV* pCreateInfos
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkRayTracingPipelineCreateInfoNV*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfos\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfos.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkPipeline* pPipelines
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipeline*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pPipelines\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pPipelines.GetAddress() /* TWO */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetRayTracingShaderGroupHandlesNV(
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
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetRayTracingShaderGroupHandlesNV\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkPipeline pipeline
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipeline\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pipeline\",\n";
    outString += "                },\n";

    // func arg: uint32_t firstGroup
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"firstGroup\",\n";
    outString += "                },\n";

    // func arg: uint32_t groupCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"groupCount\",\n";
    outString += "                },\n";

    // func arg: size_t dataSize
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"size_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dataSize\",\n";
    outString += "                },\n";

    // func arg: void* pData
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pData\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pData.GetAddress() /* TWO */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetAccelerationStructureHandleNV(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            accelerationStructure,
    size_t                                      dataSize,
    const PointerDecoder<uint8_t>&              pData)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetAccelerationStructureHandleNV\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkAccelerationStructureNV accelerationStructure
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkAccelerationStructureNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"accelerationStructure\",\n";
    outString += "                },\n";

    // func arg: size_t dataSize
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"size_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dataSize\",\n";
    outString += "                },\n";

    // func arg: void* pData
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pData\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pData.GetAddress() /* TWO */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdWriteAccelerationStructuresPropertiesNV(
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
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdWriteAccelerationStructuresPropertiesNV\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: uint32_t accelerationStructureCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"accelerationStructureCount\",\n";
    outString += "                },\n";

    // func arg: const VkAccelerationStructureNV* pAccelerationStructures
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAccelerationStructureNV*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAccelerationStructures\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAccelerationStructures.GetAddress() /* TWO */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkQueryType queryType
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkQueryType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queryType\",\n";
    outString += "                },\n";

    // func arg: VkQueryPool queryPool
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkQueryPool\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queryPool\",\n";
    outString += "                },\n";

    // func arg: uint32_t firstQuery
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"firstQuery\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCompileDeferredNV(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            pipeline,
    uint32_t                                    shader)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCompileDeferredNV\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkPipeline pipeline
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipeline\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pipeline\",\n";
    outString += "                },\n";

    // func arg: uint32_t shader
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shader\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkGetMemoryHostPointerPropertiesEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    VkExternalMemoryHandleTypeFlagBits          handleType,
    uint64_t                                    pHostPointer,
    const StructPointerDecoder<Decoded_VkMemoryHostPointerPropertiesEXT>& pMemoryHostPointerProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetMemoryHostPointerPropertiesEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkExternalMemoryHandleTypeFlagBits handleType
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalMemoryHandleTypeFlagBits\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"handleType\",\n";
    outString += "                },\n";

    // func arg: const void* pHostPointer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const void*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pHostPointer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pHostPointer /* ACF */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkMemoryHostPointerPropertiesEXT* pMemoryHostPointerProperties
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkMemoryHostPointerPropertiesEXT*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pMemoryHostPointerProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pMemoryHostPointerProperties.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkCmdWriteBufferMarkerAMD(
    format::HandleId                            commandBuffer,
    VkPipelineStageFlagBits                     pipelineStage,
    format::HandleId                            dstBuffer,
    VkDeviceSize                                dstOffset,
    uint32_t                                    marker)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdWriteBufferMarkerAMD\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: VkPipelineStageFlagBits pipelineStage
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineStageFlagBits\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pipelineStage\",\n";
    outString += "                },\n";

    // func arg: VkBuffer dstBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstBuffer\",\n";
    outString += "                },\n";

    // func arg: VkDeviceSize dstOffset
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstOffset\",\n";
    outString += "                },\n";

    // func arg: uint32_t marker
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"marker\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const PointerDecoder<uint32_t>&             pTimeDomainCount,
    const PointerDecoder<VkTimeDomainEXT>&      pTimeDomains)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceCalibrateableTimeDomainsEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: uint32_t* pTimeDomainCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pTimeDomainCount\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pTimeDomainCount.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkTimeDomainEXT* pTimeDomains
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkTimeDomainEXT*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pTimeDomains\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pTimeDomains.GetAddress() /* TWO */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetCalibratedTimestampsEXT(
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
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetCalibratedTimestampsEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: uint32_t timestampCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"timestampCount\",\n";
    outString += "                },\n";

    // func arg: const VkCalibratedTimestampInfoEXT* pTimestampInfos
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkCalibratedTimestampInfoEXT*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pTimestampInfos\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pTimestampInfos.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: uint64_t* pTimestamps
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pTimestamps\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pTimestamps.GetAddress() /* TWO */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: uint64_t* pMaxDeviation
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pMaxDeviation\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pMaxDeviation.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkCmdDrawMeshTasksNV(
    format::HandleId                            commandBuffer,
    uint32_t                                    taskCount,
    uint32_t                                    firstTask)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdDrawMeshTasksNV\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: uint32_t taskCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"taskCount\",\n";
    outString += "                },\n";

    // func arg: uint32_t firstTask
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"firstTask\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdDrawMeshTasksIndirectNV(
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    uint32_t                                    drawCount,
    uint32_t                                    stride)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdDrawMeshTasksIndirectNV\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: VkBuffer buffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"buffer\",\n";
    outString += "                },\n";

    // func arg: VkDeviceSize offset
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"offset\",\n";
    outString += "                },\n";

    // func arg: uint32_t drawCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"drawCount\",\n";
    outString += "                },\n";

    // func arg: uint32_t stride
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"stride\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdDrawMeshTasksIndirectCountNV(
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
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdDrawMeshTasksIndirectCountNV\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: VkBuffer buffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"buffer\",\n";
    outString += "                },\n";

    // func arg: VkDeviceSize offset
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"offset\",\n";
    outString += "                },\n";

    // func arg: VkBuffer countBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"countBuffer\",\n";
    outString += "                },\n";

    // func arg: VkDeviceSize countBufferOffset
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"countBufferOffset\",\n";
    outString += "                },\n";

    // func arg: uint32_t maxDrawCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxDrawCount\",\n";
    outString += "                },\n";

    // func arg: uint32_t stride
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"stride\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkCmdSetExclusiveScissorNV(
    format::HandleId                            commandBuffer,
    uint32_t                                    firstExclusiveScissor,
    uint32_t                                    exclusiveScissorCount,
    const StructPointerDecoder<Decoded_VkRect2D>& pExclusiveScissors)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdSetExclusiveScissorNV\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: uint32_t firstExclusiveScissor
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"firstExclusiveScissor\",\n";
    outString += "                },\n";

    // func arg: uint32_t exclusiveScissorCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"exclusiveScissorCount\",\n";
    outString += "                },\n";

    // func arg: const VkRect2D* pExclusiveScissors
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkRect2D*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pExclusiveScissors\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pExclusiveScissors.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkCmdSetCheckpointNV(
    format::HandleId                            commandBuffer,
    uint64_t                                    pCheckpointMarker)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdSetCheckpointNV\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: const void* pCheckpointMarker
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const void*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCheckpointMarker\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCheckpointMarker /* ACF */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetQueueCheckpointDataNV(
    format::HandleId                            queue,
    const PointerDecoder<uint32_t>&             pCheckpointDataCount,
    const StructPointerDecoder<Decoded_VkCheckpointDataNV>& pCheckpointData)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetQueueCheckpointDataNV\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkQueue queue
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkQueue\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queue\",\n";
    outString += "                },\n";

    // func arg: uint32_t* pCheckpointDataCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCheckpointDataCount\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCheckpointDataCount.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkCheckpointDataNV* pCheckpointData
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCheckpointDataNV*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCheckpointData\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCheckpointData.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkInitializePerformanceApiINTEL(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkInitializePerformanceApiInfoINTEL>& pInitializeInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkInitializePerformanceApiINTEL\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkInitializePerformanceApiInfoINTEL* pInitializeInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkInitializePerformanceApiInfoINTEL*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pInitializeInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pInitializeInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkUninitializePerformanceApiINTEL(
    format::HandleId                            device)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkUninitializePerformanceApiINTEL\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdSetPerformanceMarkerINTEL(
    VkResult                                    returnValue,
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkPerformanceMarkerInfoINTEL>& pMarkerInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdSetPerformanceMarkerINTEL\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: const VkPerformanceMarkerInfoINTEL* pMarkerInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkPerformanceMarkerInfoINTEL*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pMarkerInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pMarkerInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdSetPerformanceStreamMarkerINTEL(
    VkResult                                    returnValue,
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkPerformanceStreamMarkerInfoINTEL>& pMarkerInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdSetPerformanceStreamMarkerINTEL\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: const VkPerformanceStreamMarkerInfoINTEL* pMarkerInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkPerformanceStreamMarkerInfoINTEL*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pMarkerInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pMarkerInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkCmdSetPerformanceOverrideINTEL(
    VkResult                                    returnValue,
    format::HandleId                            commandBuffer,
    const StructPointerDecoder<Decoded_VkPerformanceOverrideInfoINTEL>& pOverrideInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdSetPerformanceOverrideINTEL\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: const VkPerformanceOverrideInfoINTEL* pOverrideInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkPerformanceOverrideInfoINTEL*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pOverrideInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pOverrideInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkAcquirePerformanceConfigurationINTEL(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkPerformanceConfigurationAcquireInfoINTEL>& pAcquireInfo,
    const HandlePointerDecoder<VkPerformanceConfigurationINTEL>& pConfiguration)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkAcquirePerformanceConfigurationINTEL\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkPerformanceConfigurationAcquireInfoINTEL* pAcquireInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkPerformanceConfigurationAcquireInfoINTEL*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAcquireInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAcquireInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkPerformanceConfigurationINTEL* pConfiguration
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPerformanceConfigurationINTEL*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pConfiguration\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pConfiguration.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkReleasePerformanceConfigurationINTEL(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            configuration)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkReleasePerformanceConfigurationINTEL\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkPerformanceConfigurationINTEL configuration
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPerformanceConfigurationINTEL\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"configuration\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkQueueSetPerformanceConfigurationINTEL(
    VkResult                                    returnValue,
    format::HandleId                            queue,
    format::HandleId                            configuration)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkQueueSetPerformanceConfigurationINTEL\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkQueue queue
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkQueue\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queue\",\n";
    outString += "                },\n";

    // func arg: VkPerformanceConfigurationINTEL configuration
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPerformanceConfigurationINTEL\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"configuration\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetPerformanceParameterINTEL(
    VkResult                                    returnValue,
    format::HandleId                            device,
    VkPerformanceParameterTypeINTEL             parameter,
    const StructPointerDecoder<Decoded_VkPerformanceValueINTEL>& pValue)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPerformanceParameterINTEL\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkPerformanceParameterTypeINTEL parameter
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPerformanceParameterTypeINTEL\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"parameter\",\n";
    outString += "                },\n";

    // func arg: VkPerformanceValueINTEL* pValue
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPerformanceValueINTEL*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pValue\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pValue.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkSetLocalDimmingAMD(
    format::HandleId                            device,
    format::HandleId                            swapChain,
    VkBool32                                    localDimmingEnable)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkSetLocalDimmingAMD\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkSwapchainKHR swapChain
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSwapchainKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"swapChain\",\n";
    outString += "                },\n";

    // func arg: VkBool32 localDimmingEnable
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"localDimmingEnable\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkCreateImagePipeSurfaceFUCHSIA(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkImagePipeSurfaceCreateInfoFUCHSIA>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreateImagePipeSurfaceFUCHSIA\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkInstance instance
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkInstance\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"instance\",\n";
    outString += "                },\n";

    // func arg: const VkImagePipeSurfaceCreateInfoFUCHSIA* pCreateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkImagePipeSurfaceCreateInfoFUCHSIA*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkSurfaceKHR* pSurface
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSurfaceKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSurface\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSurface.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkCreateMetalSurfaceEXT(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkMetalSurfaceCreateInfoEXT>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreateMetalSurfaceEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkInstance instance
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkInstance\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"instance\",\n";
    outString += "                },\n";

    // func arg: const VkMetalSurfaceCreateInfoEXT* pCreateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkMetalSurfaceCreateInfoEXT*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkSurfaceKHR* pSurface
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSurfaceKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSurface\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSurface.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkGetBufferDeviceAddressEXT(
    VkDeviceAddress                             returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkBufferDeviceAddressInfoEXT>& pInfo)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetBufferDeviceAddressEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkDeviceAddress\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "0x%" PRIx64 "\"\n", returnValue);
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkBufferDeviceAddressInfoEXT* pInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkBufferDeviceAddressInfoEXT*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const PointerDecoder<uint32_t>&             pPropertyCount,
    const StructPointerDecoder<Decoded_VkCooperativeMatrixPropertiesNV>& pProperties)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceCooperativeMatrixPropertiesNV\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: uint32_t* pPropertyCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pPropertyCount\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pPropertyCount.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkCooperativeMatrixPropertiesNV* pProperties
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCooperativeMatrixPropertiesNV*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pProperties.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const PointerDecoder<uint32_t>&             pCombinationCount,
    const StructPointerDecoder<Decoded_VkFramebufferMixedSamplesCombinationNV>& pCombinations)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: uint32_t* pCombinationCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCombinationCount\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCombinationCount.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkFramebufferMixedSamplesCombinationNV* pCombinations
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFramebufferMixedSamplesCombinationNV*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCombinations\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCombinations.GetAddress() /* RQA */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkGetPhysicalDeviceSurfacePresentModes2EXT(
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceSurfaceInfo2KHR>& pSurfaceInfo,
    const PointerDecoder<uint32_t>&             pPresentModeCount,
    const PointerDecoder<VkPresentModeKHR>&     pPresentModes)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetPhysicalDeviceSurfacePresentModes2EXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkPhysicalDevice physicalDevice
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevice\",\n";
    outString += "                },\n";

    // func arg: const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkPhysicalDeviceSurfaceInfo2KHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSurfaceInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSurfaceInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: uint32_t* pPresentModeCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pPresentModeCount\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pPresentModeCount.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkPresentModeKHR* pPresentModes
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPresentModeKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pPresentModes\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pPresentModes.GetAddress() /* TWO */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkAcquireFullScreenExclusiveModeEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkAcquireFullScreenExclusiveModeEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkSwapchainKHR swapchain
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSwapchainKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"swapchain\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkReleaseFullScreenExclusiveModeEXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkReleaseFullScreenExclusiveModeEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkSwapchainKHR swapchain
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSwapchainKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"swapchain\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

void VulkanJsonConsumer::Process_vkGetDeviceGroupSurfacePresentModes2EXT(
    VkResult                                    returnValue,
    format::HandleId                            device,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceSurfaceInfo2KHR>& pSurfaceInfo,
    const PointerDecoder<VkDeviceGroupPresentModeFlagsKHR>& pModes)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkGetDeviceGroupSurfacePresentModes2EXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkPhysicalDeviceSurfaceInfo2KHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSurfaceInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSurfaceInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkDeviceGroupPresentModeFlagsKHR* pModes
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceGroupPresentModeFlagsKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pModes\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pModes.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkCreateHeadlessSurfaceEXT(
    VkResult                                    returnValue,
    format::HandleId                            instance,
    const StructPointerDecoder<Decoded_VkHeadlessSurfaceCreateInfoEXT>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const HandlePointerDecoder<VkSurfaceKHR>&   pSurface)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCreateHeadlessSurfaceEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"VkResult\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    EnumToStringVkResultJson(&outString, returnValue);
    fprintf(GetFile(), "%s\"", outString.c_str());
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkInstance instance
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkInstance\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"instance\",\n";
    outString += "                },\n";

    // func arg: const VkHeadlessSurfaceCreateInfoEXT* pCreateInfo
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkHeadlessSurfaceCreateInfoEXT*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pCreateInfo.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: const VkAllocationCallbacks* pAllocator
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"const VkAllocationCallbacks*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAllocator\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pAllocator.GetAddress() /* UYR */ );
    *out += "\n";
    outString += "                },\n";

    // func arg: VkSurfaceKHR* pSurface
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSurfaceKHR*\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSurface\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pSurface.GetAddress() /* QZX */ );
    *out += "\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkCmdSetLineStippleEXT(
    format::HandleId                            commandBuffer,
    uint32_t                                    lineStippleFactor,
    uint16_t                                    lineStipplePattern)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkCmdSetLineStippleEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkCommandBuffer commandBuffer
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBuffer\",\n";
    outString += "                },\n";

    // func arg: uint32_t lineStippleFactor
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"lineStippleFactor\",\n";
    outString += "                },\n";

    // func arg: uint16_t lineStipplePattern
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint16_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"lineStipplePattern\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}


void VulkanJsonConsumer::Process_vkResetQueryPoolEXT(
    format::HandleId                            device,
    format::HandleId                            queryPool,
    uint32_t                                    firstQuery,
    uint32_t                                    queryCount)
{
    std::string outString = "";
    std::string *out = &outString;
    uint32_t indent = 1;
    fprintf(GetFile(), "        {\n");
    fprintf(GetFile(), "            \"name\" : \"vkResetQueryPoolEXT\",\n");   // FCN
    fprintf(GetFile(), "            \"thread\" : \"Thread %ld\",\n", 0);
    fprintf(GetFile(), "            \"returnType\" : \"void\",\n");
    fprintf(GetFile(), "            \"returnValue\" : \"");
    fprintf(GetFile(), "\"void\"");
    fprintf(GetFile(), ",\n");
    fprintf(GetFile(), "            \"args\" :\n");
    fprintf(GetFile(), "            [\n");
    outString = ""; //URT
    indent = 5;

    // func arg: VkDevice device
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"device\",\n";
    outString += "                },\n";

    // func arg: VkQueryPool queryPool
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkQueryPool\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queryPool\",\n";
    outString += "                },\n";

    // func arg: uint32_t firstQuery
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"firstQuery\",\n";
    outString += "                },\n";

    // func arg: uint32_t queryCount
    outString += "                {\n";
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queryCount\",\n";
    outString += "                }\n";
    fprintf(GetFile(), "%s", outString.c_str());

    fprintf(GetFile(), "            ]\n");
    fprintf(GetFile(), "        },\n");
}

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)
