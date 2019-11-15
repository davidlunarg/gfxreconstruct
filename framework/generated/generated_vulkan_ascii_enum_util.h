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

#ifndef  GFXRECON_GENERATED_VULKAN_ASCII_ENUM_UTIL_H
#define  GFXRECON_GENERATED_VULKAN_ASCII_ENUM_UTIL_H

#include "vulkan/vulkan.h"
#include <string>

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)

void EnumToStringVkFrontFace(std::string* out, uint32_t enum_uint32)
{
    VkFrontFace e = static_cast<VkFrontFace>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_FRONT_FACE_CLOCKWISE:
            *out += "VK_FRONT_FACE_CLOCKWISE";
            return;
        case VK_FRONT_FACE_COUNTER_CLOCKWISE:
            *out += "VK_FRONT_FACE_COUNTER_CLOCKWISE";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkQueryControlFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkQueryControlFlagBits e = static_cast<VkQueryControlFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_QUERY_CONTROL_PRECISE_BIT:
            *out += "VK_QUERY_CONTROL_PRECISE_BIT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkSemaphoreWaitFlagBitsKHR(std::string* out, uint32_t enum_uint32)
{
    VkSemaphoreWaitFlagBitsKHR e = static_cast<VkSemaphoreWaitFlagBitsKHR>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_SEMAPHORE_WAIT_ANY_BIT_KHR:
            *out += "VK_SEMAPHORE_WAIT_ANY_BIT_KHR";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkVertexInputRate(std::string* out, uint32_t enum_uint32)
{
    VkVertexInputRate e = static_cast<VkVertexInputRate>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_VERTEX_INPUT_RATE_VERTEX:
            *out += "VK_VERTEX_INPUT_RATE_VERTEX";
            return;
        case VK_VERTEX_INPUT_RATE_INSTANCE:
            *out += "VK_VERTEX_INPUT_RATE_INSTANCE";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkDeviceEventTypeEXT(std::string* out, uint32_t enum_uint32)
{
    VkDeviceEventTypeEXT e = static_cast<VkDeviceEventTypeEXT>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_DEVICE_EVENT_TYPE_DISPLAY_HOTPLUG_EXT:
            *out += "VK_DEVICE_EVENT_TYPE_DISPLAY_HOTPLUG_EXT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkQueryPipelineStatisticFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkQueryPipelineStatisticFlagBits e = static_cast<VkQueryPipelineStatisticFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_EVALUATION_SHADER_INVOCATIONS_BIT:
            *out += "VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_EVALUATION_SHADER_INVOCATIONS_BIT";
            return;
        case VK_QUERY_PIPELINE_STATISTIC_CLIPPING_PRIMITIVES_BIT:
            *out += "VK_QUERY_PIPELINE_STATISTIC_CLIPPING_PRIMITIVES_BIT";
            return;
        case VK_QUERY_PIPELINE_STATISTIC_CLIPPING_INVOCATIONS_BIT:
            *out += "VK_QUERY_PIPELINE_STATISTIC_CLIPPING_INVOCATIONS_BIT";
            return;
        case VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_VERTICES_BIT:
            *out += "VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_VERTICES_BIT";
            return;
        case VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_INVOCATIONS_BIT:
            *out += "VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_INVOCATIONS_BIT";
            return;
        case VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_PRIMITIVES_BIT:
            *out += "VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_PRIMITIVES_BIT";
            return;
        case VK_QUERY_PIPELINE_STATISTIC_FRAGMENT_SHADER_INVOCATIONS_BIT:
            *out += "VK_QUERY_PIPELINE_STATISTIC_FRAGMENT_SHADER_INVOCATIONS_BIT";
            return;
        case VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_PRIMITIVES_BIT:
            *out += "VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_PRIMITIVES_BIT";
            return;
        case VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_CONTROL_SHADER_PATCHES_BIT:
            *out += "VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_CONTROL_SHADER_PATCHES_BIT";
            return;
        case VK_QUERY_PIPELINE_STATISTIC_COMPUTE_SHADER_INVOCATIONS_BIT:
            *out += "VK_QUERY_PIPELINE_STATISTIC_COMPUTE_SHADER_INVOCATIONS_BIT";
            return;
        case VK_QUERY_PIPELINE_STATISTIC_VERTEX_SHADER_INVOCATIONS_BIT:
            *out += "VK_QUERY_PIPELINE_STATISTIC_VERTEX_SHADER_INVOCATIONS_BIT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkResolveModeFlagBitsKHR(std::string* out, uint32_t enum_uint32)
{
    VkResolveModeFlagBitsKHR e = static_cast<VkResolveModeFlagBitsKHR>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_RESOLVE_MODE_AVERAGE_BIT_KHR:
            *out += "VK_RESOLVE_MODE_AVERAGE_BIT_KHR";
            return;
        case VK_RESOLVE_MODE_MAX_BIT_KHR:
            *out += "VK_RESOLVE_MODE_MAX_BIT_KHR";
            return;
        case VK_RESOLVE_MODE_MIN_BIT_KHR:
            *out += "VK_RESOLVE_MODE_MIN_BIT_KHR";
            return;
        case VK_RESOLVE_MODE_NONE_KHR:
            *out += "VK_RESOLVE_MODE_NONE_KHR";
            return;
        case VK_RESOLVE_MODE_SAMPLE_ZERO_BIT_KHR:
            *out += "VK_RESOLVE_MODE_SAMPLE_ZERO_BIT_KHR";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkCoverageReductionModeNV(std::string* out, uint32_t enum_uint32)
{
    VkCoverageReductionModeNV e = static_cast<VkCoverageReductionModeNV>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_COVERAGE_REDUCTION_MODE_MERGE_NV:
            *out += "VK_COVERAGE_REDUCTION_MODE_MERGE_NV";
            return;
        case VK_COVERAGE_REDUCTION_MODE_TRUNCATE_NV:
            *out += "VK_COVERAGE_REDUCTION_MODE_TRUNCATE_NV";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkAttachmentStoreOp(std::string* out, uint32_t enum_uint32)
{
    VkAttachmentStoreOp e = static_cast<VkAttachmentStoreOp>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_ATTACHMENT_STORE_OP_DONT_CARE:
            *out += "VK_ATTACHMENT_STORE_OP_DONT_CARE";
            return;
        case VK_ATTACHMENT_STORE_OP_STORE:
            *out += "VK_ATTACHMENT_STORE_OP_STORE";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkShadingRatePaletteEntryNV(std::string* out, uint32_t enum_uint32)
{
    VkShadingRatePaletteEntryNV e = static_cast<VkShadingRatePaletteEntryNV>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_1X2_PIXELS_NV:
            *out += "VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_1X2_PIXELS_NV";
            return;
        case VK_SHADING_RATE_PALETTE_ENTRY_2_INVOCATIONS_PER_PIXEL_NV:
            *out += "VK_SHADING_RATE_PALETTE_ENTRY_2_INVOCATIONS_PER_PIXEL_NV";
            return;
        case VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_PIXEL_NV:
            *out += "VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_PIXEL_NV";
            return;
        case VK_SHADING_RATE_PALETTE_ENTRY_NO_INVOCATIONS_NV:
            *out += "VK_SHADING_RATE_PALETTE_ENTRY_NO_INVOCATIONS_NV";
            return;
        case VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X1_PIXELS_NV:
            *out += "VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X1_PIXELS_NV";
            return;
        case VK_SHADING_RATE_PALETTE_ENTRY_8_INVOCATIONS_PER_PIXEL_NV:
            *out += "VK_SHADING_RATE_PALETTE_ENTRY_8_INVOCATIONS_PER_PIXEL_NV";
            return;
        case VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X4_PIXELS_NV:
            *out += "VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X4_PIXELS_NV";
            return;
        case VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X2_PIXELS_NV:
            *out += "VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X2_PIXELS_NV";
            return;
        case VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_4X4_PIXELS_NV:
            *out += "VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_4X4_PIXELS_NV";
            return;
        case VK_SHADING_RATE_PALETTE_ENTRY_16_INVOCATIONS_PER_PIXEL_NV:
            *out += "VK_SHADING_RATE_PALETTE_ENTRY_16_INVOCATIONS_PER_PIXEL_NV";
            return;
        case VK_SHADING_RATE_PALETTE_ENTRY_4_INVOCATIONS_PER_PIXEL_NV:
            *out += "VK_SHADING_RATE_PALETTE_ENTRY_4_INVOCATIONS_PER_PIXEL_NV";
            return;
        case VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_4X2_PIXELS_NV:
            *out += "VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_4X2_PIXELS_NV";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkPipelineCompilerControlFlagBitsAMD(std::string* out, uint32_t enum_uint32)
{
    VkPipelineCompilerControlFlagBitsAMD e = static_cast<VkPipelineCompilerControlFlagBitsAMD>(enum_uint32);
    assert(out != nullptr); // RYZ
    *out += "UNKNOWN";
}

void EnumToStringVkDiscardRectangleModeEXT(std::string* out, uint32_t enum_uint32)
{
    VkDiscardRectangleModeEXT e = static_cast<VkDiscardRectangleModeEXT>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_DISCARD_RECTANGLE_MODE_INCLUSIVE_EXT:
            *out += "VK_DISCARD_RECTANGLE_MODE_INCLUSIVE_EXT";
            return;
        case VK_DISCARD_RECTANGLE_MODE_EXCLUSIVE_EXT:
            *out += "VK_DISCARD_RECTANGLE_MODE_EXCLUSIVE_EXT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkImageUsageFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkImageUsageFlagBits e = static_cast<VkImageUsageFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT:
            *out += "VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT";
            return;
        case VK_IMAGE_USAGE_TRANSFER_DST_BIT:
            *out += "VK_IMAGE_USAGE_TRANSFER_DST_BIT";
            return;
        case VK_IMAGE_USAGE_STORAGE_BIT:
            *out += "VK_IMAGE_USAGE_STORAGE_BIT";
            return;
        case VK_IMAGE_USAGE_SAMPLED_BIT:
            *out += "VK_IMAGE_USAGE_SAMPLED_BIT";
            return;
        case VK_IMAGE_USAGE_SHADING_RATE_IMAGE_BIT_NV:
            *out += "VK_IMAGE_USAGE_SHADING_RATE_IMAGE_BIT_NV";
            return;
        case VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT:
            *out += "VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT";
            return;
        case VK_IMAGE_USAGE_TRANSFER_SRC_BIT:
            *out += "VK_IMAGE_USAGE_TRANSFER_SRC_BIT";
            return;
        case VK_IMAGE_USAGE_FRAGMENT_DENSITY_MAP_BIT_EXT:
            *out += "VK_IMAGE_USAGE_FRAGMENT_DENSITY_MAP_BIT_EXT";
            return;
        case VK_IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT:
            *out += "VK_IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT";
            return;
        case VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT:
            *out += "VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkAttachmentDescriptionFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkAttachmentDescriptionFlagBits e = static_cast<VkAttachmentDescriptionFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_ATTACHMENT_DESCRIPTION_MAY_ALIAS_BIT:
            *out += "VK_ATTACHMENT_DESCRIPTION_MAY_ALIAS_BIT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkChromaLocation(std::string* out, uint32_t enum_uint32)
{
    VkChromaLocation e = static_cast<VkChromaLocation>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_CHROMA_LOCATION_MIDPOINT:
            *out += "VK_CHROMA_LOCATION_MIDPOINT";
            return;
        case VK_CHROMA_LOCATION_COSITED_EVEN:
            *out += "VK_CHROMA_LOCATION_COSITED_EVEN";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkDebugReportFlagBitsEXT(std::string* out, uint32_t enum_uint32)
{
    VkDebugReportFlagBitsEXT e = static_cast<VkDebugReportFlagBitsEXT>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT:
            *out += "VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT";
            return;
        case VK_DEBUG_REPORT_ERROR_BIT_EXT:
            *out += "VK_DEBUG_REPORT_ERROR_BIT_EXT";
            return;
        case VK_DEBUG_REPORT_DEBUG_BIT_EXT:
            *out += "VK_DEBUG_REPORT_DEBUG_BIT_EXT";
            return;
        case VK_DEBUG_REPORT_INFORMATION_BIT_EXT:
            *out += "VK_DEBUG_REPORT_INFORMATION_BIT_EXT";
            return;
        case VK_DEBUG_REPORT_WARNING_BIT_EXT:
            *out += "VK_DEBUG_REPORT_WARNING_BIT_EXT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkCoarseSampleOrderTypeNV(std::string* out, uint32_t enum_uint32)
{
    VkCoarseSampleOrderTypeNV e = static_cast<VkCoarseSampleOrderTypeNV>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_COARSE_SAMPLE_ORDER_TYPE_SAMPLE_MAJOR_NV:
            *out += "VK_COARSE_SAMPLE_ORDER_TYPE_SAMPLE_MAJOR_NV";
            return;
        case VK_COARSE_SAMPLE_ORDER_TYPE_DEFAULT_NV:
            *out += "VK_COARSE_SAMPLE_ORDER_TYPE_DEFAULT_NV";
            return;
        case VK_COARSE_SAMPLE_ORDER_TYPE_CUSTOM_NV:
            *out += "VK_COARSE_SAMPLE_ORDER_TYPE_CUSTOM_NV";
            return;
        case VK_COARSE_SAMPLE_ORDER_TYPE_PIXEL_MAJOR_NV:
            *out += "VK_COARSE_SAMPLE_ORDER_TYPE_PIXEL_MAJOR_NV";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkSamplerReductionModeEXT(std::string* out, uint32_t enum_uint32)
{
    VkSamplerReductionModeEXT e = static_cast<VkSamplerReductionModeEXT>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_SAMPLER_REDUCTION_MODE_MIN_EXT:
            *out += "VK_SAMPLER_REDUCTION_MODE_MIN_EXT";
            return;
        case VK_SAMPLER_REDUCTION_MODE_MAX_EXT:
            *out += "VK_SAMPLER_REDUCTION_MODE_MAX_EXT";
            return;
        case VK_SAMPLER_REDUCTION_MODE_WEIGHTED_AVERAGE_EXT:
            *out += "VK_SAMPLER_REDUCTION_MODE_WEIGHTED_AVERAGE_EXT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkMemoryHeapFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkMemoryHeapFlagBits e = static_cast<VkMemoryHeapFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_MEMORY_HEAP_MULTI_INSTANCE_BIT:
            *out += "VK_MEMORY_HEAP_MULTI_INSTANCE_BIT";
            return;
        case VK_MEMORY_HEAP_DEVICE_LOCAL_BIT:
            *out += "VK_MEMORY_HEAP_DEVICE_LOCAL_BIT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkDescriptorPoolCreateFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkDescriptorPoolCreateFlagBits e = static_cast<VkDescriptorPoolCreateFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT:
            *out += "VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT";
            return;
        case VK_DESCRIPTOR_POOL_CREATE_UPDATE_AFTER_BIND_BIT_EXT:
            *out += "VK_DESCRIPTOR_POOL_CREATE_UPDATE_AFTER_BIND_BIT_EXT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkExternalFenceHandleTypeFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkExternalFenceHandleTypeFlagBits e = static_cast<VkExternalFenceHandleTypeFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT:
            *out += "VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT";
            return;
        case VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT:
            *out += "VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT";
            return;
        case VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT:
            *out += "VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT";
            return;
        case VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT:
            *out += "VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkCommandBufferLevel(std::string* out, uint32_t enum_uint32)
{
    VkCommandBufferLevel e = static_cast<VkCommandBufferLevel>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_COMMAND_BUFFER_LEVEL_PRIMARY:
            *out += "VK_COMMAND_BUFFER_LEVEL_PRIMARY";
            return;
        case VK_COMMAND_BUFFER_LEVEL_SECONDARY:
            *out += "VK_COMMAND_BUFFER_LEVEL_SECONDARY";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkDeviceGroupPresentModeFlagBitsKHR(std::string* out, uint32_t enum_uint32)
{
    VkDeviceGroupPresentModeFlagBitsKHR e = static_cast<VkDeviceGroupPresentModeFlagBitsKHR>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_BIT_KHR:
            *out += "VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_BIT_KHR";
            return;
        case VK_DEVICE_GROUP_PRESENT_MODE_REMOTE_BIT_KHR:
            *out += "VK_DEVICE_GROUP_PRESENT_MODE_REMOTE_BIT_KHR";
            return;
        case VK_DEVICE_GROUP_PRESENT_MODE_SUM_BIT_KHR:
            *out += "VK_DEVICE_GROUP_PRESENT_MODE_SUM_BIT_KHR";
            return;
        case VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_MULTI_DEVICE_BIT_KHR:
            *out += "VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_MULTI_DEVICE_BIT_KHR";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkPrimitiveTopology(std::string* out, uint32_t enum_uint32)
{
    VkPrimitiveTopology e = static_cast<VkPrimitiveTopology>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST_WITH_ADJACENCY:
            *out += "VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST_WITH_ADJACENCY";
            return;
        case VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP:
            *out += "VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP";
            return;
        case VK_PRIMITIVE_TOPOLOGY_LINE_LIST:
            *out += "VK_PRIMITIVE_TOPOLOGY_LINE_LIST";
            return;
        case VK_PRIMITIVE_TOPOLOGY_LINE_STRIP_WITH_ADJACENCY:
            *out += "VK_PRIMITIVE_TOPOLOGY_LINE_STRIP_WITH_ADJACENCY";
            return;
        case VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP_WITH_ADJACENCY:
            *out += "VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP_WITH_ADJACENCY";
            return;
        case VK_PRIMITIVE_TOPOLOGY_PATCH_LIST:
            *out += "VK_PRIMITIVE_TOPOLOGY_PATCH_LIST";
            return;
        case VK_PRIMITIVE_TOPOLOGY_TRIANGLE_FAN:
            *out += "VK_PRIMITIVE_TOPOLOGY_TRIANGLE_FAN";
            return;
        case VK_PRIMITIVE_TOPOLOGY_LINE_STRIP:
            *out += "VK_PRIMITIVE_TOPOLOGY_LINE_STRIP";
            return;
        case VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST:
            *out += "VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST";
            return;
        case VK_PRIMITIVE_TOPOLOGY_LINE_LIST_WITH_ADJACENCY:
            *out += "VK_PRIMITIVE_TOPOLOGY_LINE_LIST_WITH_ADJACENCY";
            return;
        case VK_PRIMITIVE_TOPOLOGY_POINT_LIST:
            *out += "VK_PRIMITIVE_TOPOLOGY_POINT_LIST";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkValidationCacheHeaderVersionEXT(std::string* out, uint32_t enum_uint32)
{
    VkValidationCacheHeaderVersionEXT e = static_cast<VkValidationCacheHeaderVersionEXT>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_VALIDATION_CACHE_HEADER_VERSION_ONE_EXT:
            *out += "VK_VALIDATION_CACHE_HEADER_VERSION_ONE_EXT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkBufferUsageFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkBufferUsageFlagBits e = static_cast<VkBufferUsageFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_BUFFER_USAGE_VERTEX_BUFFER_BIT:
            *out += "VK_BUFFER_USAGE_VERTEX_BUFFER_BIT";
            return;
        case VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_BUFFER_BIT_EXT:
            *out += "VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_BUFFER_BIT_EXT";
            return;
        case VK_BUFFER_USAGE_UNIFORM_TEXEL_BUFFER_BIT:
            *out += "VK_BUFFER_USAGE_UNIFORM_TEXEL_BUFFER_BIT";
            return;
        case VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_COUNTER_BUFFER_BIT_EXT:
            *out += "VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_COUNTER_BUFFER_BIT_EXT";
            return;
        case VK_BUFFER_USAGE_INDEX_BUFFER_BIT:
            *out += "VK_BUFFER_USAGE_INDEX_BUFFER_BIT";
            return;
        case VK_BUFFER_USAGE_STORAGE_BUFFER_BIT:
            *out += "VK_BUFFER_USAGE_STORAGE_BUFFER_BIT";
            return;
        case VK_BUFFER_USAGE_STORAGE_TEXEL_BUFFER_BIT:
            *out += "VK_BUFFER_USAGE_STORAGE_TEXEL_BUFFER_BIT";
            return;
        case VK_BUFFER_USAGE_TRANSFER_DST_BIT:
            *out += "VK_BUFFER_USAGE_TRANSFER_DST_BIT";
            return;
        case VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT_EXT:
            *out += "VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT_EXT";
            return;
        case VK_BUFFER_USAGE_TRANSFER_SRC_BIT:
            *out += "VK_BUFFER_USAGE_TRANSFER_SRC_BIT";
            return;
        case VK_BUFFER_USAGE_CONDITIONAL_RENDERING_BIT_EXT:
            *out += "VK_BUFFER_USAGE_CONDITIONAL_RENDERING_BIT_EXT";
            return;
        case VK_BUFFER_USAGE_INDIRECT_BUFFER_BIT:
            *out += "VK_BUFFER_USAGE_INDIRECT_BUFFER_BIT";
            return;
        case VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT:
            *out += "VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT";
            return;
        case VK_BUFFER_USAGE_RAY_TRACING_BIT_NV:
            *out += "VK_BUFFER_USAGE_RAY_TRACING_BIT_NV";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkStructureType(std::string* out, uint32_t enum_uint32)
{
    VkStructureType e = static_cast<VkStructureType>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES_KHR:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES_KHR";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT";
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV:
            *out += "VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV";
            return;
        case VK_STRUCTURE_TYPE_SEMAPHORE_WAIT_INFO_KHR:
            *out += "VK_STRUCTURE_TYPE_SEMAPHORE_WAIT_INFO_KHR";
            return;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR:
            *out += "VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES_EXT:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES_EXT";
            return;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO_EXT:
            *out += "VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO_EXT";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES";
            return;
        case VK_STRUCTURE_TYPE_WAYLAND_SURFACE_CREATE_INFO_KHR:
            *out += "VK_STRUCTURE_TYPE_WAYLAND_SURFACE_CREATE_INFO_KHR";
            return;
        case VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT:
            *out += "VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES";
            return;
        case VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT:
            *out += "VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT";
            return;
        case VK_STRUCTURE_TYPE_SEMAPHORE_SIGNAL_INFO_KHR:
            *out += "VK_STRUCTURE_TYPE_SEMAPHORE_SIGNAL_INFO_KHR";
            return;
        case VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_WIN32_INFO_EXT:
            *out += "VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_WIN32_INFO_EXT";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES_KHR:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES_KHR";
            return;
        case VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO_2_KHR:
            *out += "VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO_2_KHR";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES";
            return;
        case VK_STRUCTURE_TYPE_HEADLESS_SURFACE_CREATE_INFO_EXT:
            *out += "VK_STRUCTURE_TYPE_HEADLESS_SURFACE_CREATE_INFO_EXT";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES_KHR:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES_KHR";
            return;
        case VK_STRUCTURE_TYPE_IOS_SURFACE_CREATE_INFO_MVK:
            *out += "VK_STRUCTURE_TYPE_IOS_SURFACE_CREATE_INFO_MVK";
            return;
        case VK_STRUCTURE_TYPE_IMPORT_FENCE_WIN32_HANDLE_INFO_KHR:
            *out += "VK_STRUCTURE_TYPE_IMPORT_FENCE_WIN32_HANDLE_INFO_KHR";
            return;
        case VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER:
            *out += "VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER";
            return;
        case VK_STRUCTURE_TYPE_CMD_PROCESS_COMMANDS_INFO_NVX:
            *out += "VK_STRUCTURE_TYPE_CMD_PROCESS_COMMANDS_INFO_NVX";
            return;
        case VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_FEATURES_NVX:
            *out += "VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_FEATURES_NVX";
            return;
        case VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO:
            *out += "VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT:
            *out += "VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT";
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_REDUCTION_STATE_CREATE_INFO_NV:
            *out += "VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_REDUCTION_STATE_CREATE_INFO_NV";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT";
            return;
        case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO:
            *out += "VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV";
            return;
        case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO:
            *out += "VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2:
            *out += "VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2";
            return;
        case VK_STRUCTURE_TYPE_CHECKPOINT_DATA_NV:
            *out += "VK_STRUCTURE_TYPE_CHECKPOINT_DATA_NV";
            return;
        case VK_STRUCTURE_TYPE_LOADER_INSTANCE_CREATE_INFO:
            *out += "VK_STRUCTURE_TYPE_LOADER_INSTANCE_CREATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV";
            return;
        case VK_STRUCTURE_TYPE_PERFORMANCE_OVERRIDE_INFO_INTEL:
            *out += "VK_STRUCTURE_TYPE_PERFORMANCE_OVERRIDE_INFO_INTEL";
            return;
        case VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO:
            *out += "VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES";
            return;
        case VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT:
            *out += "VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT";
            return;
        case VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR:
            *out += "VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR";
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO:
            *out += "VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD:
            *out += "VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD";
            return;
        case VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT:
            *out += "VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT";
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO:
            *out += "VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_INITIALIZE_PERFORMANCE_API_INFO_INTEL:
            *out += "VK_STRUCTURE_TYPE_INITIALIZE_PERFORMANCE_API_INFO_INTEL";
            return;
        case VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT:
            *out += "VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT";
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD:
            *out += "VK_STRUCTURE_TYPE_PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD";
            return;
        case VK_STRUCTURE_TYPE_FENCE_CREATE_INFO:
            *out += "VK_STRUCTURE_TYPE_FENCE_CREATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_GEOMETRY_NV:
            *out += "VK_STRUCTURE_TYPE_GEOMETRY_NV";
            return;
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_NV:
            *out += "VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_NV";
            return;
        case VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO_KHR:
            *out += "VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO_KHR";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES_EXT:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES_EXT";
            return;
        case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO:
            *out += "VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV:
            *out += "VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV";
            return;
        case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV:
            *out += "VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV";
            return;
        case VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR:
            *out += "VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR";
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO:
            *out += "VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NVX:
            *out += "VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NVX";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_2_AMD:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_2_AMD";
            return;
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO:
            *out += "VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO:
            *out += "VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO";
            return;
        case VK_STRUCTURE_TYPE_IMPORT_FENCE_FD_INFO_KHR:
            *out += "VK_STRUCTURE_TYPE_IMPORT_FENCE_FD_INFO_KHR";
            return;
        case VK_STRUCTURE_TYPE_BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_NV:
            *out += "VK_STRUCTURE_TYPE_BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_NV";
            return;
        case VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_NV:
            *out += "VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_NV";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES_EXT:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES_EXT";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES_KHR:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES_KHR";
            return;
        case VK_STRUCTURE_TYPE_PRESENT_FRAME_TOKEN_GGP:
            *out += "VK_STRUCTURE_TYPE_PRESENT_FRAME_TOKEN_GGP";
            return;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO:
            *out += "VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO";
            return;
        case VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES:
            *out += "VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT";
            return;
        case VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES:
            *out += "VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT";
            return;
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT:
            *out += "VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT";
            return;
        case VK_STRUCTURE_TYPE_COOPERATIVE_MATRIX_PROPERTIES_NV:
            *out += "VK_STRUCTURE_TYPE_COOPERATIVE_MATRIX_PROPERTIES_NV";
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT:
            *out += "VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT";
            return;
        case VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2:
            *out += "VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2";
            return;
        case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_EXPLICIT_CREATE_INFO_EXT:
            *out += "VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_EXPLICIT_CREATE_INFO_EXT";
            return;
        case VK_STRUCTURE_TYPE_SWAPCHAIN_DISPLAY_NATIVE_HDR_CREATE_INFO_AMD:
            *out += "VK_STRUCTURE_TYPE_SWAPCHAIN_DISPLAY_NATIVE_HDR_CREATE_INFO_AMD";
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV:
            *out += "VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV";
            return;
        case VK_STRUCTURE_TYPE_EXPORT_FENCE_WIN32_HANDLE_INFO_KHR:
            *out += "VK_STRUCTURE_TYPE_EXPORT_FENCE_WIN32_HANDLE_INFO_KHR";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT";
            return;
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR:
            *out += "VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR";
            return;
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_HANDLE_INFO_NVX:
            *out += "VK_STRUCTURE_TYPE_IMAGE_VIEW_HANDLE_INFO_NVX";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES_EXT:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES_EXT";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES_KHR:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES_KHR";
            return;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO:
            *out += "VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES";
            return;
        case VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT:
            *out += "VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT";
            return;
        case VK_STRUCTURE_TYPE_CALIBRATED_TIMESTAMP_INFO_EXT:
            *out += "VK_STRUCTURE_TYPE_CALIBRATED_TIMESTAMP_INFO_EXT";
            return;
        case VK_STRUCTURE_TYPE_MEMORY_GET_FD_INFO_KHR:
            *out += "VK_STRUCTURE_TYPE_MEMORY_GET_FD_INFO_KHR";
            return;
        case VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR:
            *out += "VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR";
            return;
        case VK_STRUCTURE_TYPE_BIND_SPARSE_INFO:
            *out += "VK_STRUCTURE_TYPE_BIND_SPARSE_INFO";
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO:
            *out += "VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV";
            return;
        case VK_STRUCTURE_TYPE_PERFORMANCE_STREAM_MARKER_INFO_INTEL:
            *out += "VK_STRUCTURE_TYPE_PERFORMANCE_STREAM_MARKER_INFO_INTEL";
            return;
        case VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO:
            *out += "VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO";
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_INFO_KHR:
            *out += "VK_STRUCTURE_TYPE_PIPELINE_INFO_KHR";
            return;
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_INFO_NV:
            *out += "VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_INFO_NV";
            return;
        case VK_STRUCTURE_TYPE_D3D12_FENCE_SUBMIT_INFO_KHR:
            *out += "VK_STRUCTURE_TYPE_D3D12_FENCE_SUBMIT_INFO_KHR";
            return;
        case VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_LIMITS_NVX:
            *out += "VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_LIMITS_NVX";
            return;
        case VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO:
            *out += "VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO";
            return;
        case VK_STRUCTURE_TYPE_PERFORMANCE_CONFIGURATION_ACQUIRE_INFO_INTEL:
            *out += "VK_STRUCTURE_TYPE_PERFORMANCE_CONFIGURATION_ACQUIRE_INFO_INTEL";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX";
            return;
        case VK_STRUCTURE_TYPE_MACOS_SURFACE_CREATE_INFO_MVK:
            *out += "VK_STRUCTURE_TYPE_MACOS_SURFACE_CREATE_INFO_MVK";
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV:
            *out += "VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT";
            return;
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT:
            *out += "VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT";
            return;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO:
            *out += "VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO";
            return;
        case VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT:
            *out += "VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2";
            return;
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_NV:
            *out += "VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_NV";
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT:
            *out += "VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT";
            return;
        case VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO:
            *out += "VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES_KHR:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES_KHR";
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INFO_KHR:
            *out += "VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INFO_KHR";
            return;
        case VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO:
            *out += "VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_APPLICATION_INFO:
            *out += "VK_STRUCTURE_TYPE_APPLICATION_INFO";
            return;
        case VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE_KHR:
            *out += "VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE_KHR";
            return;
        case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES:
            *out += "VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES";
            return;
        case VK_STRUCTURE_TYPE_EVENT_CREATE_INFO:
            *out += "VK_STRUCTURE_TYPE_EVENT_CREATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_STENCIL_LAYOUT_KHR:
            *out += "VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_STENCIL_LAYOUT_KHR";
            return;
        case VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT:
            *out += "VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT";
            return;
        case VK_STRUCTURE_TYPE_FENCE_GET_FD_INFO_KHR:
            *out += "VK_STRUCTURE_TYPE_FENCE_GET_FD_INFO_KHR";
            return;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO:
            *out += "VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_EXT:
            *out += "VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_EXT";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT";
            return;
        case VK_STRUCTURE_TYPE_SUBPASS_END_INFO_KHR:
            *out += "VK_STRUCTURE_TYPE_SUBPASS_END_INFO_KHR";
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT:
            *out += "VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT";
            return;
        case VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_STENCIL_LAYOUT_KHR:
            *out += "VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_STENCIL_LAYOUT_KHR";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES_KHR:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES_KHR";
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO:
            *out += "VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV";
            return;
        case VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS:
            *out += "VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS";
            return;
        case VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO_INTEL:
            *out += "VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO_INTEL";
            return;
        case VK_STRUCTURE_TYPE_MEMORY_GET_WIN32_HANDLE_INFO_KHR:
            *out += "VK_STRUCTURE_TYPE_MEMORY_GET_WIN32_HANDLE_INFO_KHR";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO";
            return;
        case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_ANDROID:
            *out += "VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_ANDROID";
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV:
            *out += "VK_STRUCTURE_TYPE_PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES_KHR:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES_KHR";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2";
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV:
            *out += "VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV";
            return;
        case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT:
            *out += "VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT";
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO:
            *out += "VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO:
            *out += "VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET:
            *out += "VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET";
            return;
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT:
            *out += "VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT";
            return;
        case VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO:
            *out += "VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO:
            *out += "VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_NV:
            *out += "VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_NV";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO";
            return;
        case VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_2_KHR:
            *out += "VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_2_KHR";
            return;
        case VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2:
            *out += "VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2";
            return;
        case VK_STRUCTURE_TYPE_IMAGEPIPE_SURFACE_CREATE_INFO_FUCHSIA:
            *out += "VK_STRUCTURE_TYPE_IMAGEPIPE_SURFACE_CREATE_INFO_FUCHSIA";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES";
            return;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT_EXT:
            *out += "VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT_EXT";
            return;
        case VK_STRUCTURE_TYPE_PRESENT_INFO_KHR:
            *out += "VK_STRUCTURE_TYPE_PRESENT_INFO_KHR";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES_KHR:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES_KHR";
            return;
        case VK_STRUCTURE_TYPE_SEMAPHORE_TYPE_CREATE_INFO_KHR:
            *out += "VK_STRUCTURE_TYPE_SEMAPHORE_TYPE_CREATE_INFO_KHR";
            return;
        case VK_STRUCTURE_TYPE_FRAMEBUFFER_MIXED_SAMPLES_COMBINATION_NV:
            *out += "VK_STRUCTURE_TYPE_FRAMEBUFFER_MIXED_SAMPLES_COMBINATION_NV";
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO:
            *out += "VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV";
            return;
        case VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_INFO_EXT:
            *out += "VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_INFO_EXT";
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT:
            *out += "VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT";
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_STATISTIC_KHR:
            *out += "VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_STATISTIC_KHR";
            return;
        case VK_STRUCTURE_TYPE_GEOMETRY_TRIANGLES_NV:
            *out += "VK_STRUCTURE_TYPE_GEOMETRY_TRIANGLES_NV";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES_EXT:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES_EXT";
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV:
            *out += "VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV";
            return;
        case VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_NV:
            *out += "VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_NV";
            return;
        case VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR:
            *out += "VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR";
            return;
        case VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHR:
            *out += "VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHR";
            return;
        case VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO:
            *out += "VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV";
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO:
            *out += "VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO:
            *out += "VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV";
            return;
        case VK_STRUCTURE_TYPE_SUBPASS_BEGIN_INFO_KHR:
            *out += "VK_STRUCTURE_TYPE_SUBPASS_BEGIN_INFO_KHR";
            return;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO:
            *out += "VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_DISPLAY_PROPERTIES_2_KHR:
            *out += "VK_STRUCTURE_TYPE_DISPLAY_PROPERTIES_2_KHR";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV";
            return;
        case VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID:
            *out += "VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID";
            return;
        case VK_STRUCTURE_TYPE_SURFACE_FORMAT_2_KHR:
            *out += "VK_STRUCTURE_TYPE_SURFACE_FORMAT_2_KHR";
            return;
        case VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO:
            *out += "VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_EXT:
            *out += "VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_EXT";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES_EXT:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES_EXT";
            return;
        case VK_STRUCTURE_TYPE_DISPLAY_MODE_PROPERTIES_2_KHR:
            *out += "VK_STRUCTURE_TYPE_DISPLAY_MODE_PROPERTIES_2_KHR";
            return;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT:
            *out += "VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT";
            return;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO_EXT:
            *out += "VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO_EXT";
            return;
        case VK_STRUCTURE_TYPE_DISPLAY_PLANE_INFO_2_KHR:
            *out += "VK_STRUCTURE_TYPE_DISPLAY_PLANE_INFO_2_KHR";
            return;
        case VK_STRUCTURE_TYPE_MEMORY_PRIORITY_ALLOCATE_INFO_EXT:
            *out += "VK_STRUCTURE_TYPE_MEMORY_PRIORITY_ALLOCATE_INFO_EXT";
            return;
        case VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO:
            *out += "VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR:
            *out += "VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR";
            return;
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT:
            *out += "VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT";
            return;
        case VK_STRUCTURE_TYPE_SURFACE_PROTECTED_CAPABILITIES_KHR:
            *out += "VK_STRUCTURE_TYPE_SURFACE_PROTECTED_CAPABILITIES_KHR";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES";
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT:
            *out += "VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT";
            return;
        case VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR:
            *out += "VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR";
            return;
        case VK_STRUCTURE_TYPE_CONDITIONAL_RENDERING_BEGIN_INFO_EXT:
            *out += "VK_STRUCTURE_TYPE_CONDITIONAL_RENDERING_BEGIN_INFO_EXT";
            return;
        case VK_STRUCTURE_TYPE_SUBPASS_DEPENDENCY_2_KHR:
            *out += "VK_STRUCTURE_TYPE_SUBPASS_DEPENDENCY_2_KHR";
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO_EXT:
            *out += "VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO_EXT";
            return;
        case VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT:
            *out += "VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT";
            return;
        case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_EXT:
            *out += "VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_EXT";
            return;
        case VK_STRUCTURE_TYPE_MEMORY_GET_ANDROID_HARDWARE_BUFFER_INFO_ANDROID:
            *out += "VK_STRUCTURE_TYPE_MEMORY_GET_ANDROID_HARDWARE_BUFFER_INFO_ANDROID";
            return;
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT:
            *out += "VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT";
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO:
            *out += "VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES_EXT:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES_EXT";
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO:
            *out += "VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO:
            *out += "VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD:
            *out += "VK_STRUCTURE_TYPE_TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD";
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_PROPERTIES_KHR:
            *out += "VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_PROPERTIES_KHR";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES_KHR:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES_KHR";
            return;
        case VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT:
            *out += "VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT";
            return;
        case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO:
            *out += "VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR:
            *out += "VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR";
            return;
        case VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO:
            *out += "VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO";
            return;
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_TAG_INFO_EXT:
            *out += "VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_TAG_INFO_EXT";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES_EXT:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES_EXT";
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO:
            *out += "VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT";
            return;
        case VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2:
            *out += "VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2";
            return;
        case VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO:
            *out += "VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_ASTC_DECODE_MODE_EXT:
            *out += "VK_STRUCTURE_TYPE_IMAGE_VIEW_ASTC_DECODE_MODE_EXT";
            return;
        case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV:
            *out += "VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV";
            return;
        case VK_STRUCTURE_TYPE_FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT:
            *out += "VK_STRUCTURE_TYPE_FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT";
            return;
        case VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO_EXT:
            *out += "VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO_EXT";
            return;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO:
            *out += "VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO:
            *out += "VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES:
            *out += "VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES";
            return;
        case VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT:
            *out += "VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES";
            return;
        case VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD:
            *out += "VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD";
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO:
            *out += "VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV";
            return;
        case VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT:
            *out += "VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES_KHR:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES_KHR";
            return;
        case VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO:
            *out += "VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR:
            *out += "VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2";
            return;
        case VK_STRUCTURE_TYPE_CMD_RESERVE_SPACE_FOR_COMMANDS_INFO_NVX:
            *out += "VK_STRUCTURE_TYPE_CMD_RESERVE_SPACE_FOR_COMMANDS_INFO_NVX";
            return;
        case VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_2_KHR:
            *out += "VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_2_KHR";
            return;
        case VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR:
            *out += "VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR";
            return;
        case VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_NV:
            *out += "VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_NV";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT";
            return;
        case VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO:
            *out += "VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO";
            return;
        case VK_STRUCTURE_TYPE_STREAM_DESCRIPTOR_SURFACE_CREATE_INFO_GGP:
            *out += "VK_STRUCTURE_TYPE_STREAM_DESCRIPTOR_SURFACE_CREATE_INFO_GGP";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES_KHR:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES_KHR";
            return;
        case VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV:
            *out += "VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV";
            return;
        case VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO:
            *out += "VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR:
            *out += "VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_EXT:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_EXT";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES";
            return;
        case VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO:
            *out += "VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES_EXT:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES_EXT";
            return;
        case VK_STRUCTURE_TYPE_MULTISAMPLE_PROPERTIES_EXT:
            *out += "VK_STRUCTURE_TYPE_MULTISAMPLE_PROPERTIES_EXT";
            return;
        case VK_STRUCTURE_TYPE_DISPLAY_MODE_CREATE_INFO_KHR:
            *out += "VK_STRUCTURE_TYPE_DISPLAY_MODE_CREATE_INFO_KHR";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_EXT:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_EXT";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV";
            return;
        case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET:
            *out += "VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET";
            return;
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_KHR:
            *out += "VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_KHR";
            return;
        case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK_EXT:
            *out += "VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK_EXT";
            return;
        case VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO:
            *out += "VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV:
            *out += "VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV";
            return;
        case VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT:
            *out += "VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT";
            return;
        case VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE:
            *out += "VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE";
            return;
        case VK_STRUCTURE_TYPE_XCB_SURFACE_CREATE_INFO_KHR:
            *out += "VK_STRUCTURE_TYPE_XCB_SURFACE_CREATE_INFO_KHR";
            return;
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_NV:
            *out += "VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_NV";
            return;
        case VK_STRUCTURE_TYPE_PERFORMANCE_MARKER_INFO_INTEL:
            *out += "VK_STRUCTURE_TYPE_PERFORMANCE_MARKER_INFO_INTEL";
            return;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR:
            *out += "VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO";
            return;
        case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO:
            *out += "VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO";
            return;
        case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_USAGE_ANDROID:
            *out += "VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_USAGE_ANDROID";
            return;
        case VK_STRUCTURE_TYPE_TIMELINE_SEMAPHORE_SUBMIT_INFO_KHR:
            *out += "VK_STRUCTURE_TYPE_TIMELINE_SEMAPHORE_SUBMIT_INFO_KHR";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD";
            return;
        case VK_STRUCTURE_TYPE_SUBMIT_INFO:
            *out += "VK_STRUCTURE_TYPE_SUBMIT_INFO";
            return;
        case VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV:
            *out += "VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2";
            return;
        case VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2:
            *out += "VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES_EXT:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES_EXT";
            return;
        case VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2:
            *out += "VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES";
            return;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO:
            *out += "VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT";
            return;
        case VK_STRUCTURE_TYPE_HDR_METADATA_EXT:
            *out += "VK_STRUCTURE_TYPE_HDR_METADATA_EXT";
            return;
        case VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT:
            *out += "VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT";
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO_EXT:
            *out += "VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO_EXT";
            return;
        case VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO_EXT:
            *out += "VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO_EXT";
            return;
        case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV:
            *out += "VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV";
            return;
        case VK_STRUCTURE_TYPE_ANDROID_SURFACE_CREATE_INFO_KHR:
            *out += "VK_STRUCTURE_TYPE_ANDROID_SURFACE_CREATE_INFO_KHR";
            return;
        case VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT:
            *out += "VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES_EXT:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES_EXT";
            return;
        case VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2:
            *out += "VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2";
            return;
        case VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT:
            *out += "VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT";
            return;
        case VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHR:
            *out += "VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHR";
            return;
        case VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR:
            *out += "VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR";
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV:
            *out += "VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV";
            return;
        case VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO:
            *out += "VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENTS_CREATE_INFO_KHR:
            *out += "VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENTS_CREATE_INFO_KHR";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT";
            return;
        case VK_STRUCTURE_TYPE_DISPLAY_PLANE_PROPERTIES_2_KHR:
            *out += "VK_STRUCTURE_TYPE_DISPLAY_PLANE_PROPERTIES_2_KHR";
            return;
        case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_KHR:
            *out += "VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_KHR";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_NV:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_NV";
            return;
        case VK_STRUCTURE_TYPE_MEMORY_WIN32_HANDLE_PROPERTIES_KHR:
            *out += "VK_STRUCTURE_TYPE_MEMORY_WIN32_HANDLE_PROPERTIES_KHR";
            return;
        case VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHR:
            *out += "VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHR";
            return;
        case VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV:
            *out += "VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV";
            return;
        case VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER:
            *out += "VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES_KHR:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES_KHR";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT";
            return;
        case VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENT_IMAGE_INFO_KHR:
            *out += "VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENT_IMAGE_INFO_KHR";
            return;
        case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_FULL_SCREEN_EXCLUSIVE_EXT:
            *out += "VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_FULL_SCREEN_EXCLUSIVE_EXT";
            return;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO:
            *out += "VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO";
            return;
        case VK_STRUCTURE_TYPE_XLIB_SURFACE_CREATE_INFO_KHR:
            *out += "VK_STRUCTURE_TYPE_XLIB_SURFACE_CREATE_INFO_KHR";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT";
            return;
        case VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO:
            *out += "VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO:
            *out += "VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV";
            return;
        case VK_STRUCTURE_TYPE_SEMAPHORE_GET_FD_INFO_KHR:
            *out += "VK_STRUCTURE_TYPE_SEMAPHORE_GET_FD_INFO_KHR";
            return;
        case VK_STRUCTURE_TYPE_DISPLAY_PLANE_CAPABILITIES_2_KHR:
            *out += "VK_STRUCTURE_TYPE_DISPLAY_PLANE_CAPABILITIES_2_KHR";
            return;
        case VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO:
            *out += "VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHR:
            *out += "VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHR";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR";
            return;
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_LABEL_EXT:
            *out += "VK_STRUCTURE_TYPE_DEBUG_UTILS_LABEL_EXT";
            return;
        case VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2:
            *out += "VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2";
            return;
        case VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_KHR:
            *out += "VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_KHR";
            return;
        case VK_STRUCTURE_TYPE_LOADER_DEVICE_CREATE_INFO:
            *out += "VK_STRUCTURE_TYPE_LOADER_DEVICE_CREATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT:
            *out += "VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT";
            return;
        case VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE:
            *out += "VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE";
            return;
        case VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES:
            *out += "VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES";
            return;
        case VK_STRUCTURE_TYPE_METAL_SURFACE_CREATE_INFO_EXT:
            *out += "VK_STRUCTURE_TYPE_METAL_SURFACE_CREATE_INFO_EXT";
            return;
        case VK_STRUCTURE_TYPE_SEMAPHORE_GET_WIN32_HANDLE_INFO_KHR:
            *out += "VK_STRUCTURE_TYPE_SEMAPHORE_GET_WIN32_HANDLE_INFO_KHR";
            return;
        case VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO_EXT:
            *out += "VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO_EXT";
            return;
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO:
            *out += "VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_PROPERTIES_NV:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_PROPERTIES_NV";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES_EXT:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES_EXT";
            return;
        case VK_STRUCTURE_TYPE_MEMORY_HOST_POINTER_PROPERTIES_EXT:
            *out += "VK_STRUCTURE_TYPE_MEMORY_HOST_POINTER_PROPERTIES_EXT";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2";
            return;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO:
            *out += "VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT";
            return;
        case VK_STRUCTURE_TYPE_DEVICE_QUEUE_INFO_2:
            *out += "VK_STRUCTURE_TYPE_DEVICE_QUEUE_INFO_2";
            return;
        case VK_STRUCTURE_TYPE_MEMORY_BARRIER:
            *out += "VK_STRUCTURE_TYPE_MEMORY_BARRIER";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD";
            return;
        case VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2:
            *out += "VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2";
            return;
        case VK_STRUCTURE_TYPE_OBJECT_TABLE_CREATE_INFO_NVX:
            *out += "VK_STRUCTURE_TYPE_OBJECT_TABLE_CREATE_INFO_NVX";
            return;
        case VK_STRUCTURE_TYPE_RENDER_PASS_ATTACHMENT_BEGIN_INFO_KHR:
            *out += "VK_STRUCTURE_TYPE_RENDER_PASS_ATTACHMENT_BEGIN_INFO_KHR";
            return;
        case VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT:
            *out += "VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT";
            return;
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO:
            *out += "VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_GEOMETRY_AABB_NV:
            *out += "VK_STRUCTURE_TYPE_GEOMETRY_AABB_NV";
            return;
        case VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO:
            *out += "VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO:
            *out += "VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_EXT:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_EXT";
            return;
        case VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO:
            *out += "VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_IMPORT_ANDROID_HARDWARE_BUFFER_INFO_ANDROID:
            *out += "VK_STRUCTURE_TYPE_IMPORT_ANDROID_HARDWARE_BUFFER_INFO_ANDROID";
            return;
        case VK_STRUCTURE_TYPE_VI_SURFACE_CREATE_INFO_NN:
            *out += "VK_STRUCTURE_TYPE_VI_SURFACE_CREATE_INFO_NN";
            return;
        case VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_EXT:
            *out += "VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_EXT";
            return;
        case VK_STRUCTURE_TYPE_VALIDATION_CACHE_CREATE_INFO_EXT:
            *out += "VK_STRUCTURE_TYPE_VALIDATION_CACHE_CREATE_INFO_EXT";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR";
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INTERNAL_REPRESENTATION_KHR:
            *out += "VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INTERNAL_REPRESENTATION_KHR";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT";
            return;
        case VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_2_KHR:
            *out += "VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_2_KHR";
            return;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO_EXT:
            *out += "VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO_EXT";
            return;
        case VK_STRUCTURE_TYPE_FENCE_GET_WIN32_HANDLE_INFO_KHR:
            *out += "VK_STRUCTURE_TYPE_FENCE_GET_WIN32_HANDLE_INFO_KHR";
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT:
            *out += "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT";
            return;
        case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO:
            *out += "VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO";
            return;
        case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_PROPERTIES_ANDROID:
            *out += "VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_PROPERTIES_ANDROID";
            return;
        case VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO:
            *out += "VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO";
            return;
        case VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO:
            *out += "VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO";
            return;
        case VK_STRUCTURE_TYPE_DISPLAY_NATIVE_HDR_SURFACE_CAPABILITIES_AMD:
            *out += "VK_STRUCTURE_TYPE_DISPLAY_NATIVE_HDR_SURFACE_CAPABILITIES_AMD";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkDependencyFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkDependencyFlagBits e = static_cast<VkDependencyFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_DEPENDENCY_BY_REGION_BIT:
            *out += "VK_DEPENDENCY_BY_REGION_BIT";
            return;
        case VK_DEPENDENCY_VIEW_LOCAL_BIT:
            *out += "VK_DEPENDENCY_VIEW_LOCAL_BIT";
            return;
        case VK_DEPENDENCY_DEVICE_GROUP_BIT:
            *out += "VK_DEPENDENCY_DEVICE_GROUP_BIT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkCommandBufferResetFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkCommandBufferResetFlagBits e = static_cast<VkCommandBufferResetFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_COMMAND_BUFFER_RESET_RELEASE_RESOURCES_BIT:
            *out += "VK_COMMAND_BUFFER_RESET_RELEASE_RESOURCES_BIT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkAccelerationStructureMemoryRequirementsTypeNV(std::string* out, uint32_t enum_uint32)
{
    VkAccelerationStructureMemoryRequirementsTypeNV e = static_cast<VkAccelerationStructureMemoryRequirementsTypeNV>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_OBJECT_NV:
            *out += "VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_OBJECT_NV";
            return;
        case VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_BUILD_SCRATCH_NV:
            *out += "VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_BUILD_SCRATCH_NV";
            return;
        case VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_UPDATE_SCRATCH_NV:
            *out += "VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_UPDATE_SCRATCH_NV";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkImageTiling(std::string* out, uint32_t enum_uint32)
{
    VkImageTiling e = static_cast<VkImageTiling>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_IMAGE_TILING_LINEAR:
            *out += "VK_IMAGE_TILING_LINEAR";
            return;
        case VK_IMAGE_TILING_OPTIMAL:
            *out += "VK_IMAGE_TILING_OPTIMAL";
            return;
        case VK_IMAGE_TILING_DRM_FORMAT_MODIFIER_EXT:
            *out += "VK_IMAGE_TILING_DRM_FORMAT_MODIFIER_EXT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkSamplerAddressMode(std::string* out, uint32_t enum_uint32)
{
    VkSamplerAddressMode e = static_cast<VkSamplerAddressMode>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_SAMPLER_ADDRESS_MODE_MIRROR_CLAMP_TO_EDGE:
            *out += "VK_SAMPLER_ADDRESS_MODE_MIRROR_CLAMP_TO_EDGE";
            return;
        case VK_SAMPLER_ADDRESS_MODE_MIRRORED_REPEAT:
            *out += "VK_SAMPLER_ADDRESS_MODE_MIRRORED_REPEAT";
            return;
        case VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE:
            *out += "VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE";
            return;
        case VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_BORDER:
            *out += "VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_BORDER";
            return;
        case VK_SAMPLER_ADDRESS_MODE_REPEAT:
            *out += "VK_SAMPLER_ADDRESS_MODE_REPEAT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkValidationFeatureDisableEXT(std::string* out, uint32_t enum_uint32)
{
    VkValidationFeatureDisableEXT e = static_cast<VkValidationFeatureDisableEXT>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_VALIDATION_FEATURE_DISABLE_CORE_CHECKS_EXT:
            *out += "VK_VALIDATION_FEATURE_DISABLE_CORE_CHECKS_EXT";
            return;
        case VK_VALIDATION_FEATURE_DISABLE_ALL_EXT:
            *out += "VK_VALIDATION_FEATURE_DISABLE_ALL_EXT";
            return;
        case VK_VALIDATION_FEATURE_DISABLE_THREAD_SAFETY_EXT:
            *out += "VK_VALIDATION_FEATURE_DISABLE_THREAD_SAFETY_EXT";
            return;
        case VK_VALIDATION_FEATURE_DISABLE_UNIQUE_HANDLES_EXT:
            *out += "VK_VALIDATION_FEATURE_DISABLE_UNIQUE_HANDLES_EXT";
            return;
        case VK_VALIDATION_FEATURE_DISABLE_OBJECT_LIFETIMES_EXT:
            *out += "VK_VALIDATION_FEATURE_DISABLE_OBJECT_LIFETIMES_EXT";
            return;
        case VK_VALIDATION_FEATURE_DISABLE_SHADERS_EXT:
            *out += "VK_VALIDATION_FEATURE_DISABLE_SHADERS_EXT";
            return;
        case VK_VALIDATION_FEATURE_DISABLE_API_PARAMETERS_EXT:
            *out += "VK_VALIDATION_FEATURE_DISABLE_API_PARAMETERS_EXT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkDescriptorBindingFlagBitsEXT(std::string* out, uint32_t enum_uint32)
{
    VkDescriptorBindingFlagBitsEXT e = static_cast<VkDescriptorBindingFlagBitsEXT>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_DESCRIPTOR_BINDING_PARTIALLY_BOUND_BIT_EXT:
            *out += "VK_DESCRIPTOR_BINDING_PARTIALLY_BOUND_BIT_EXT";
            return;
        case VK_DESCRIPTOR_BINDING_VARIABLE_DESCRIPTOR_COUNT_BIT_EXT:
            *out += "VK_DESCRIPTOR_BINDING_VARIABLE_DESCRIPTOR_COUNT_BIT_EXT";
            return;
        case VK_DESCRIPTOR_BINDING_UPDATE_AFTER_BIND_BIT_EXT:
            *out += "VK_DESCRIPTOR_BINDING_UPDATE_AFTER_BIND_BIT_EXT";
            return;
        case VK_DESCRIPTOR_BINDING_UPDATE_UNUSED_WHILE_PENDING_BIT_EXT:
            *out += "VK_DESCRIPTOR_BINDING_UPDATE_UNUSED_WHILE_PENDING_BIT_EXT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkExternalMemoryFeatureFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkExternalMemoryFeatureFlagBits e = static_cast<VkExternalMemoryFeatureFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT:
            *out += "VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT";
            return;
        case VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT:
            *out += "VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT";
            return;
        case VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT:
            *out += "VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkFullScreenExclusiveEXT(std::string* out, uint32_t enum_uint32)
{
    VkFullScreenExclusiveEXT e = static_cast<VkFullScreenExclusiveEXT>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_FULL_SCREEN_EXCLUSIVE_DISALLOWED_EXT:
            *out += "VK_FULL_SCREEN_EXCLUSIVE_DISALLOWED_EXT";
            return;
        case VK_FULL_SCREEN_EXCLUSIVE_APPLICATION_CONTROLLED_EXT:
            *out += "VK_FULL_SCREEN_EXCLUSIVE_APPLICATION_CONTROLLED_EXT";
            return;
        case VK_FULL_SCREEN_EXCLUSIVE_DEFAULT_EXT:
            *out += "VK_FULL_SCREEN_EXCLUSIVE_DEFAULT_EXT";
            return;
        case VK_FULL_SCREEN_EXCLUSIVE_ALLOWED_EXT:
            *out += "VK_FULL_SCREEN_EXCLUSIVE_ALLOWED_EXT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkAccessFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkAccessFlagBits e = static_cast<VkAccessFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_ACCESS_INPUT_ATTACHMENT_READ_BIT:
            *out += "VK_ACCESS_INPUT_ATTACHMENT_READ_BIT";
            return;
        case VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT:
            *out += "VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT";
            return;
        case VK_ACCESS_TRANSFORM_FEEDBACK_WRITE_BIT_EXT:
            *out += "VK_ACCESS_TRANSFORM_FEEDBACK_WRITE_BIT_EXT";
            return;
        case VK_ACCESS_INDIRECT_COMMAND_READ_BIT:
            *out += "VK_ACCESS_INDIRECT_COMMAND_READ_BIT";
            return;
        case VK_ACCESS_ACCELERATION_STRUCTURE_WRITE_BIT_NV:
            *out += "VK_ACCESS_ACCELERATION_STRUCTURE_WRITE_BIT_NV";
            return;
        case VK_ACCESS_UNIFORM_READ_BIT:
            *out += "VK_ACCESS_UNIFORM_READ_BIT";
            return;
        case VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_WRITE_BIT_EXT:
            *out += "VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_WRITE_BIT_EXT";
            return;
        case VK_ACCESS_SHADER_READ_BIT:
            *out += "VK_ACCESS_SHADER_READ_BIT";
            return;
        case VK_ACCESS_MEMORY_WRITE_BIT:
            *out += "VK_ACCESS_MEMORY_WRITE_BIT";
            return;
        case VK_ACCESS_INDEX_READ_BIT:
            *out += "VK_ACCESS_INDEX_READ_BIT";
            return;
        case VK_ACCESS_CONDITIONAL_RENDERING_READ_BIT_EXT:
            *out += "VK_ACCESS_CONDITIONAL_RENDERING_READ_BIT_EXT";
            return;
        case VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_READ_BIT_EXT:
            *out += "VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_READ_BIT_EXT";
            return;
        case VK_ACCESS_SHADER_WRITE_BIT:
            *out += "VK_ACCESS_SHADER_WRITE_BIT";
            return;
        case VK_ACCESS_COMMAND_PROCESS_READ_BIT_NVX:
            *out += "VK_ACCESS_COMMAND_PROCESS_READ_BIT_NVX";
            return;
        case VK_ACCESS_FRAGMENT_DENSITY_MAP_READ_BIT_EXT:
            *out += "VK_ACCESS_FRAGMENT_DENSITY_MAP_READ_BIT_EXT";
            return;
        case VK_ACCESS_MEMORY_READ_BIT:
            *out += "VK_ACCESS_MEMORY_READ_BIT";
            return;
        case VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT:
            *out += "VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT";
            return;
        case VK_ACCESS_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT:
            *out += "VK_ACCESS_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT";
            return;
        case VK_ACCESS_ACCELERATION_STRUCTURE_READ_BIT_NV:
            *out += "VK_ACCESS_ACCELERATION_STRUCTURE_READ_BIT_NV";
            return;
        case VK_ACCESS_TRANSFER_WRITE_BIT:
            *out += "VK_ACCESS_TRANSFER_WRITE_BIT";
            return;
        case VK_ACCESS_COLOR_ATTACHMENT_READ_BIT:
            *out += "VK_ACCESS_COLOR_ATTACHMENT_READ_BIT";
            return;
        case VK_ACCESS_VERTEX_ATTRIBUTE_READ_BIT:
            *out += "VK_ACCESS_VERTEX_ATTRIBUTE_READ_BIT";
            return;
        case VK_ACCESS_TRANSFER_READ_BIT:
            *out += "VK_ACCESS_TRANSFER_READ_BIT";
            return;
        case VK_ACCESS_HOST_WRITE_BIT:
            *out += "VK_ACCESS_HOST_WRITE_BIT";
            return;
        case VK_ACCESS_COMMAND_PROCESS_WRITE_BIT_NVX:
            *out += "VK_ACCESS_COMMAND_PROCESS_WRITE_BIT_NVX";
            return;
        case VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT:
            *out += "VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT";
            return;
        case VK_ACCESS_HOST_READ_BIT:
            *out += "VK_ACCESS_HOST_READ_BIT";
            return;
        case VK_ACCESS_SHADING_RATE_IMAGE_READ_BIT_NV:
            *out += "VK_ACCESS_SHADING_RATE_IMAGE_READ_BIT_NV";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkPresentModeKHR(std::string* out, uint32_t enum_uint32)
{
    VkPresentModeKHR e = static_cast<VkPresentModeKHR>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_PRESENT_MODE_FIFO_RELAXED_KHR:
            *out += "VK_PRESENT_MODE_FIFO_RELAXED_KHR";
            return;
        case VK_PRESENT_MODE_IMMEDIATE_KHR:
            *out += "VK_PRESENT_MODE_IMMEDIATE_KHR";
            return;
        case VK_PRESENT_MODE_FIFO_KHR:
            *out += "VK_PRESENT_MODE_FIFO_KHR";
            return;
        case VK_PRESENT_MODE_SHARED_CONTINUOUS_REFRESH_KHR:
            *out += "VK_PRESENT_MODE_SHARED_CONTINUOUS_REFRESH_KHR";
            return;
        case VK_PRESENT_MODE_SHARED_DEMAND_REFRESH_KHR:
            *out += "VK_PRESENT_MODE_SHARED_DEMAND_REFRESH_KHR";
            return;
        case VK_PRESENT_MODE_MAILBOX_KHR:
            *out += "VK_PRESENT_MODE_MAILBOX_KHR";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkDescriptorSetLayoutCreateFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkDescriptorSetLayoutCreateFlagBits e = static_cast<VkDescriptorSetLayoutCreateFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR:
            *out += "VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR";
            return;
        case VK_DESCRIPTOR_SET_LAYOUT_CREATE_UPDATE_AFTER_BIND_POOL_BIT_EXT:
            *out += "VK_DESCRIPTOR_SET_LAYOUT_CREATE_UPDATE_AFTER_BIND_POOL_BIT_EXT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkImageType(std::string* out, uint32_t enum_uint32)
{
    VkImageType e = static_cast<VkImageType>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_IMAGE_TYPE_3D:
            *out += "VK_IMAGE_TYPE_3D";
            return;
        case VK_IMAGE_TYPE_1D:
            *out += "VK_IMAGE_TYPE_1D";
            return;
        case VK_IMAGE_TYPE_2D:
            *out += "VK_IMAGE_TYPE_2D";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkExternalMemoryHandleTypeFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkExternalMemoryHandleTypeFlagBits e = static_cast<VkExternalMemoryHandleTypeFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT:
            *out += "VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT";
            return;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT:
            *out += "VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT";
            return;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_ALLOCATION_BIT_EXT:
            *out += "VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_ALLOCATION_BIT_EXT";
            return;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_DMA_BUF_BIT_EXT:
            *out += "VK_EXTERNAL_MEMORY_HANDLE_TYPE_DMA_BUF_BIT_EXT";
            return;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT:
            *out += "VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT";
            return;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT:
            *out += "VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT";
            return;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT:
            *out += "VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT";
            return;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_MAPPED_FOREIGN_MEMORY_BIT_EXT:
            *out += "VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_MAPPED_FOREIGN_MEMORY_BIT_EXT";
            return;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT:
            *out += "VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT";
            return;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_ANDROID_HARDWARE_BUFFER_BIT_ANDROID:
            *out += "VK_EXTERNAL_MEMORY_HANDLE_TYPE_ANDROID_HARDWARE_BUFFER_BIT_ANDROID";
            return;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT:
            *out += "VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkComponentTypeNV(std::string* out, uint32_t enum_uint32)
{
    VkComponentTypeNV e = static_cast<VkComponentTypeNV>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_COMPONENT_TYPE_FLOAT16_NV:
            *out += "VK_COMPONENT_TYPE_FLOAT16_NV";
            return;
        case VK_COMPONENT_TYPE_SINT64_NV:
            *out += "VK_COMPONENT_TYPE_SINT64_NV";
            return;
        case VK_COMPONENT_TYPE_FLOAT32_NV:
            *out += "VK_COMPONENT_TYPE_FLOAT32_NV";
            return;
        case VK_COMPONENT_TYPE_SINT8_NV:
            *out += "VK_COMPONENT_TYPE_SINT8_NV";
            return;
        case VK_COMPONENT_TYPE_SINT32_NV:
            *out += "VK_COMPONENT_TYPE_SINT32_NV";
            return;
        case VK_COMPONENT_TYPE_UINT8_NV:
            *out += "VK_COMPONENT_TYPE_UINT8_NV";
            return;
        case VK_COMPONENT_TYPE_UINT16_NV:
            *out += "VK_COMPONENT_TYPE_UINT16_NV";
            return;
        case VK_COMPONENT_TYPE_FLOAT64_NV:
            *out += "VK_COMPONENT_TYPE_FLOAT64_NV";
            return;
        case VK_COMPONENT_TYPE_SINT16_NV:
            *out += "VK_COMPONENT_TYPE_SINT16_NV";
            return;
        case VK_COMPONENT_TYPE_UINT32_NV:
            *out += "VK_COMPONENT_TYPE_UINT32_NV";
            return;
        case VK_COMPONENT_TYPE_UINT64_NV:
            *out += "VK_COMPONENT_TYPE_UINT64_NV";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkBuildAccelerationStructureFlagBitsNV(std::string* out, uint32_t enum_uint32)
{
    VkBuildAccelerationStructureFlagBitsNV e = static_cast<VkBuildAccelerationStructureFlagBitsNV>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_BUILD_ACCELERATION_STRUCTURE_LOW_MEMORY_BIT_NV:
            *out += "VK_BUILD_ACCELERATION_STRUCTURE_LOW_MEMORY_BIT_NV";
            return;
        case VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_UPDATE_BIT_NV:
            *out += "VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_UPDATE_BIT_NV";
            return;
        case VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_COMPACTION_BIT_NV:
            *out += "VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_COMPACTION_BIT_NV";
            return;
        case VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_TRACE_BIT_NV:
            *out += "VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_TRACE_BIT_NV";
            return;
        case VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_BUILD_BIT_NV:
            *out += "VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_BUILD_BIT_NV";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkViewportCoordinateSwizzleNV(std::string* out, uint32_t enum_uint32)
{
    VkViewportCoordinateSwizzleNV e = static_cast<VkViewportCoordinateSwizzleNV>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_Y_NV:
            *out += "VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_Y_NV";
            return;
        case VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_W_NV:
            *out += "VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_W_NV";
            return;
        case VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_Z_NV:
            *out += "VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_Z_NV";
            return;
        case VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_Z_NV:
            *out += "VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_Z_NV";
            return;
        case VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_X_NV:
            *out += "VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_X_NV";
            return;
        case VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_X_NV:
            *out += "VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_X_NV";
            return;
        case VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_Y_NV:
            *out += "VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_Y_NV";
            return;
        case VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_W_NV:
            *out += "VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_W_NV";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkRayTracingShaderGroupTypeNV(std::string* out, uint32_t enum_uint32)
{
    VkRayTracingShaderGroupTypeNV e = static_cast<VkRayTracingShaderGroupTypeNV>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_RAY_TRACING_SHADER_GROUP_TYPE_TRIANGLES_HIT_GROUP_NV:
            *out += "VK_RAY_TRACING_SHADER_GROUP_TYPE_TRIANGLES_HIT_GROUP_NV";
            return;
        case VK_RAY_TRACING_SHADER_GROUP_TYPE_PROCEDURAL_HIT_GROUP_NV:
            *out += "VK_RAY_TRACING_SHADER_GROUP_TYPE_PROCEDURAL_HIT_GROUP_NV";
            return;
        case VK_RAY_TRACING_SHADER_GROUP_TYPE_GENERAL_NV:
            *out += "VK_RAY_TRACING_SHADER_GROUP_TYPE_GENERAL_NV";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkGeometryInstanceFlagBitsNV(std::string* out, uint32_t enum_uint32)
{
    VkGeometryInstanceFlagBitsNV e = static_cast<VkGeometryInstanceFlagBitsNV>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_GEOMETRY_INSTANCE_TRIANGLE_FRONT_COUNTERCLOCKWISE_BIT_NV:
            *out += "VK_GEOMETRY_INSTANCE_TRIANGLE_FRONT_COUNTERCLOCKWISE_BIT_NV";
            return;
        case VK_GEOMETRY_INSTANCE_FORCE_NO_OPAQUE_BIT_NV:
            *out += "VK_GEOMETRY_INSTANCE_FORCE_NO_OPAQUE_BIT_NV";
            return;
        case VK_GEOMETRY_INSTANCE_TRIANGLE_CULL_DISABLE_BIT_NV:
            *out += "VK_GEOMETRY_INSTANCE_TRIANGLE_CULL_DISABLE_BIT_NV";
            return;
        case VK_GEOMETRY_INSTANCE_FORCE_OPAQUE_BIT_NV:
            *out += "VK_GEOMETRY_INSTANCE_FORCE_OPAQUE_BIT_NV";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkMemoryAllocateFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkMemoryAllocateFlagBits e = static_cast<VkMemoryAllocateFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT:
            *out += "VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkSamplerYcbcrModelConversion(std::string* out, uint32_t enum_uint32)
{
    VkSamplerYcbcrModelConversion e = static_cast<VkSamplerYcbcrModelConversion>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_IDENTITY:
            *out += "VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_IDENTITY";
            return;
        case VK_SAMPLER_YCBCR_MODEL_CONVERSION_RGB_IDENTITY:
            *out += "VK_SAMPLER_YCBCR_MODEL_CONVERSION_RGB_IDENTITY";
            return;
        case VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_709:
            *out += "VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_709";
            return;
        case VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_2020:
            *out += "VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_2020";
            return;
        case VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_601:
            *out += "VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_601";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkFormatFeatureFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkFormatFeatureFlagBits e = static_cast<VkFormatFeatureFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_FORMAT_FEATURE_TRANSFER_DST_BIT:
            *out += "VK_FORMAT_FEATURE_TRANSFER_DST_BIT";
            return;
        case VK_FORMAT_FEATURE_VERTEX_BUFFER_BIT:
            *out += "VK_FORMAT_FEATURE_VERTEX_BUFFER_BIT";
            return;
        case VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT:
            *out += "VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT";
            return;
        case VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT:
            *out += "VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT";
            return;
        case VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT:
            *out += "VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT";
            return;
        case VK_FORMAT_FEATURE_BLIT_DST_BIT:
            *out += "VK_FORMAT_FEATURE_BLIT_DST_BIT";
            return;
        case VK_FORMAT_FEATURE_DISJOINT_BIT:
            *out += "VK_FORMAT_FEATURE_DISJOINT_BIT";
            return;
        case VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT:
            *out += "VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT";
            return;
        case VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT:
            *out += "VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT";
            return;
        case VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT:
            *out += "VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT";
            return;
        case VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_BIT:
            *out += "VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_BIT";
            return;
        case VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT:
            *out += "VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT";
            return;
        case VK_FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT:
            *out += "VK_FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT";
            return;
        case VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT:
            *out += "VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT";
            return;
        case VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_MINMAX_BIT_EXT:
            *out += "VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_MINMAX_BIT_EXT";
            return;
        case VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT:
            *out += "VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT";
            return;
        case VK_FORMAT_FEATURE_STORAGE_IMAGE_ATOMIC_BIT:
            *out += "VK_FORMAT_FEATURE_STORAGE_IMAGE_ATOMIC_BIT";
            return;
        case VK_FORMAT_FEATURE_FRAGMENT_DENSITY_MAP_BIT_EXT:
            *out += "VK_FORMAT_FEATURE_FRAGMENT_DENSITY_MAP_BIT_EXT";
            return;
        case VK_FORMAT_FEATURE_BLIT_SRC_BIT:
            *out += "VK_FORMAT_FEATURE_BLIT_SRC_BIT";
            return;
        case VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT:
            *out += "VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT";
            return;
        case VK_FORMAT_FEATURE_TRANSFER_SRC_BIT:
            *out += "VK_FORMAT_FEATURE_TRANSFER_SRC_BIT";
            return;
        case VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT:
            *out += "VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT";
            return;
        case VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BLEND_BIT:
            *out += "VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BLEND_BIT";
            return;
        case VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_IMG:
            *out += "VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_IMG";
            return;
        case VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_ATOMIC_BIT:
            *out += "VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_ATOMIC_BIT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkSamplerMipmapMode(std::string* out, uint32_t enum_uint32)
{
    VkSamplerMipmapMode e = static_cast<VkSamplerMipmapMode>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_SAMPLER_MIPMAP_MODE_NEAREST:
            *out += "VK_SAMPLER_MIPMAP_MODE_NEAREST";
            return;
        case VK_SAMPLER_MIPMAP_MODE_LINEAR:
            *out += "VK_SAMPLER_MIPMAP_MODE_LINEAR";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkQueryPoolSamplingModeINTEL(std::string* out, uint32_t enum_uint32)
{
    VkQueryPoolSamplingModeINTEL e = static_cast<VkQueryPoolSamplingModeINTEL>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_QUERY_POOL_SAMPLING_MODE_MANUAL_INTEL:
            *out += "VK_QUERY_POOL_SAMPLING_MODE_MANUAL_INTEL";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkValidationFeatureEnableEXT(std::string* out, uint32_t enum_uint32)
{
    VkValidationFeatureEnableEXT e = static_cast<VkValidationFeatureEnableEXT>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_VALIDATION_FEATURE_ENABLE_GPU_ASSISTED_RESERVE_BINDING_SLOT_EXT:
            *out += "VK_VALIDATION_FEATURE_ENABLE_GPU_ASSISTED_RESERVE_BINDING_SLOT_EXT";
            return;
        case VK_VALIDATION_FEATURE_ENABLE_BEST_PRACTICES_EXT:
            *out += "VK_VALIDATION_FEATURE_ENABLE_BEST_PRACTICES_EXT";
            return;
        case VK_VALIDATION_FEATURE_ENABLE_GPU_ASSISTED_EXT:
            *out += "VK_VALIDATION_FEATURE_ENABLE_GPU_ASSISTED_EXT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkDebugUtilsMessageTypeFlagBitsEXT(std::string* out, uint32_t enum_uint32)
{
    VkDebugUtilsMessageTypeFlagBitsEXT e = static_cast<VkDebugUtilsMessageTypeFlagBitsEXT>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT:
            *out += "VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT";
            return;
        case VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT:
            *out += "VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT";
            return;
        case VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT:
            *out += "VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkFilter(std::string* out, uint32_t enum_uint32)
{
    VkFilter e = static_cast<VkFilter>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_FILTER_LINEAR:
            *out += "VK_FILTER_LINEAR";
            return;
        case VK_FILTER_NEAREST:
            *out += "VK_FILTER_NEAREST";
            return;
        case VK_FILTER_CUBIC_IMG:
            *out += "VK_FILTER_CUBIC_IMG";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkFramebufferCreateFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkFramebufferCreateFlagBits e = static_cast<VkFramebufferCreateFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_FRAMEBUFFER_CREATE_IMAGELESS_BIT_KHR:
            *out += "VK_FRAMEBUFFER_CREATE_IMAGELESS_BIT_KHR";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkExternalSemaphoreHandleTypeFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkExternalSemaphoreHandleTypeFlagBits e = static_cast<VkExternalSemaphoreHandleTypeFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT:
            *out += "VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT";
            return;
        case VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT:
            *out += "VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT";
            return;
        case VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT:
            *out += "VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT";
            return;
        case VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT:
            *out += "VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT";
            return;
        case VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT:
            *out += "VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkDescriptorType(std::string* out, uint32_t enum_uint32)
{
    VkDescriptorType e = static_cast<VkDescriptorType>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_DESCRIPTOR_TYPE_SAMPLER:
            *out += "VK_DESCRIPTOR_TYPE_SAMPLER";
            return;
        case VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER:
            *out += "VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER";
            return;
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER:
            *out += "VK_DESCRIPTOR_TYPE_STORAGE_BUFFER";
            return;
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC:
            *out += "VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC";
            return;
        case VK_DESCRIPTOR_TYPE_STORAGE_IMAGE:
            *out += "VK_DESCRIPTOR_TYPE_STORAGE_IMAGE";
            return;
        case VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER:
            *out += "VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER";
            return;
        case VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE:
            *out += "VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE";
            return;
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC:
            *out += "VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC";
            return;
        case VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT:
            *out += "VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT";
            return;
        case VK_DESCRIPTOR_TYPE_INLINE_UNIFORM_BLOCK_EXT:
            *out += "VK_DESCRIPTOR_TYPE_INLINE_UNIFORM_BLOCK_EXT";
            return;
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER:
            *out += "VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER";
            return;
        case VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER:
            *out += "VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER";
            return;
        case VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_NV:
            *out += "VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_NV";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkSparseImageFormatFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkSparseImageFormatFlagBits e = static_cast<VkSparseImageFormatFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_SPARSE_IMAGE_FORMAT_ALIGNED_MIP_SIZE_BIT:
            *out += "VK_SPARSE_IMAGE_FORMAT_ALIGNED_MIP_SIZE_BIT";
            return;
        case VK_SPARSE_IMAGE_FORMAT_SINGLE_MIPTAIL_BIT:
            *out += "VK_SPARSE_IMAGE_FORMAT_SINGLE_MIPTAIL_BIT";
            return;
        case VK_SPARSE_IMAGE_FORMAT_NONSTANDARD_BLOCK_SIZE_BIT:
            *out += "VK_SPARSE_IMAGE_FORMAT_NONSTANDARD_BLOCK_SIZE_BIT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkPeerMemoryFeatureFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkPeerMemoryFeatureFlagBits e = static_cast<VkPeerMemoryFeatureFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_PEER_MEMORY_FEATURE_COPY_DST_BIT:
            *out += "VK_PEER_MEMORY_FEATURE_COPY_DST_BIT";
            return;
        case VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT:
            *out += "VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT";
            return;
        case VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT:
            *out += "VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT";
            return;
        case VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT:
            *out += "VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkImageLayout(std::string* out, uint32_t enum_uint32)
{
    VkImageLayout e = static_cast<VkImageLayout>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_OPTIMAL_KHR:
            *out += "VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_OPTIMAL_KHR";
            return;
        case VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_OPTIMAL_KHR:
            *out += "VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_OPTIMAL_KHR";
            return;
        case VK_IMAGE_LAYOUT_PRESENT_SRC_KHR:
            *out += "VK_IMAGE_LAYOUT_PRESENT_SRC_KHR";
            return;
        case VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL:
            *out += "VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL";
            return;
        case VK_IMAGE_LAYOUT_PREINITIALIZED:
            *out += "VK_IMAGE_LAYOUT_PREINITIALIZED";
            return;
        case VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL:
            *out += "VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL";
            return;
        case VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL:
            *out += "VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL";
            return;
        case VK_IMAGE_LAYOUT_SHADING_RATE_OPTIMAL_NV:
            *out += "VK_IMAGE_LAYOUT_SHADING_RATE_OPTIMAL_NV";
            return;
        case VK_IMAGE_LAYOUT_GENERAL:
            *out += "VK_IMAGE_LAYOUT_GENERAL";
            return;
        case VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL:
            *out += "VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL";
            return;
        case VK_IMAGE_LAYOUT_FRAGMENT_DENSITY_MAP_OPTIMAL_EXT:
            *out += "VK_IMAGE_LAYOUT_FRAGMENT_DENSITY_MAP_OPTIMAL_EXT";
            return;
        case VK_IMAGE_LAYOUT_STENCIL_READ_ONLY_OPTIMAL_KHR:
            *out += "VK_IMAGE_LAYOUT_STENCIL_READ_ONLY_OPTIMAL_KHR";
            return;
        case VK_IMAGE_LAYOUT_UNDEFINED:
            *out += "VK_IMAGE_LAYOUT_UNDEFINED";
            return;
        case VK_IMAGE_LAYOUT_STENCIL_ATTACHMENT_OPTIMAL_KHR:
            *out += "VK_IMAGE_LAYOUT_STENCIL_ATTACHMENT_OPTIMAL_KHR";
            return;
        case VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL:
            *out += "VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL";
            return;
        case VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL:
            *out += "VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL";
            return;
        case VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL:
            *out += "VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL";
            return;
        case VK_IMAGE_LAYOUT_SHARED_PRESENT_KHR:
            *out += "VK_IMAGE_LAYOUT_SHARED_PRESENT_KHR";
            return;
        case VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL:
            *out += "VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkDebugUtilsMessageSeverityFlagBitsEXT(std::string* out, uint32_t enum_uint32)
{
    VkDebugUtilsMessageSeverityFlagBitsEXT e = static_cast<VkDebugUtilsMessageSeverityFlagBitsEXT>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT:
            *out += "VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT";
            return;
        case VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT:
            *out += "VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT";
            return;
        case VK_DEBUG_UTILS_MESSAGE_SEVERITY_INFO_BIT_EXT:
            *out += "VK_DEBUG_UTILS_MESSAGE_SEVERITY_INFO_BIT_EXT";
            return;
        case VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT:
            *out += "VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkCompareOp(std::string* out, uint32_t enum_uint32)
{
    VkCompareOp e = static_cast<VkCompareOp>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_COMPARE_OP_NEVER:
            *out += "VK_COMPARE_OP_NEVER";
            return;
        case VK_COMPARE_OP_EQUAL:
            *out += "VK_COMPARE_OP_EQUAL";
            return;
        case VK_COMPARE_OP_GREATER_OR_EQUAL:
            *out += "VK_COMPARE_OP_GREATER_OR_EQUAL";
            return;
        case VK_COMPARE_OP_LESS:
            *out += "VK_COMPARE_OP_LESS";
            return;
        case VK_COMPARE_OP_LESS_OR_EQUAL:
            *out += "VK_COMPARE_OP_LESS_OR_EQUAL";
            return;
        case VK_COMPARE_OP_GREATER:
            *out += "VK_COMPARE_OP_GREATER";
            return;
        case VK_COMPARE_OP_ALWAYS:
            *out += "VK_COMPARE_OP_ALWAYS";
            return;
        case VK_COMPARE_OP_NOT_EQUAL:
            *out += "VK_COMPARE_OP_NOT_EQUAL";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkImageCreateFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkImageCreateFlagBits e = static_cast<VkImageCreateFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_IMAGE_CREATE_PROTECTED_BIT:
            *out += "VK_IMAGE_CREATE_PROTECTED_BIT";
            return;
        case VK_IMAGE_CREATE_SUBSAMPLED_BIT_EXT:
            *out += "VK_IMAGE_CREATE_SUBSAMPLED_BIT_EXT";
            return;
        case VK_IMAGE_CREATE_CORNER_SAMPLED_BIT_NV:
            *out += "VK_IMAGE_CREATE_CORNER_SAMPLED_BIT_NV";
            return;
        case VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT:
            *out += "VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT";
            return;
        case VK_IMAGE_CREATE_SPARSE_ALIASED_BIT:
            *out += "VK_IMAGE_CREATE_SPARSE_ALIASED_BIT";
            return;
        case VK_IMAGE_CREATE_SPARSE_BINDING_BIT:
            *out += "VK_IMAGE_CREATE_SPARSE_BINDING_BIT";
            return;
        case VK_IMAGE_CREATE_SPARSE_RESIDENCY_BIT:
            *out += "VK_IMAGE_CREATE_SPARSE_RESIDENCY_BIT";
            return;
        case VK_IMAGE_CREATE_SAMPLE_LOCATIONS_COMPATIBLE_DEPTH_BIT_EXT:
            *out += "VK_IMAGE_CREATE_SAMPLE_LOCATIONS_COMPATIBLE_DEPTH_BIT_EXT";
            return;
        case VK_IMAGE_CREATE_DISJOINT_BIT:
            *out += "VK_IMAGE_CREATE_DISJOINT_BIT";
            return;
        case VK_IMAGE_CREATE_EXTENDED_USAGE_BIT:
            *out += "VK_IMAGE_CREATE_EXTENDED_USAGE_BIT";
            return;
        case VK_IMAGE_CREATE_MUTABLE_FORMAT_BIT:
            *out += "VK_IMAGE_CREATE_MUTABLE_FORMAT_BIT";
            return;
        case VK_IMAGE_CREATE_ALIAS_BIT:
            *out += "VK_IMAGE_CREATE_ALIAS_BIT";
            return;
        case VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT:
            *out += "VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT";
            return;
        case VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT:
            *out += "VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT";
            return;
        case VK_IMAGE_CREATE_CUBE_COMPATIBLE_BIT:
            *out += "VK_IMAGE_CREATE_CUBE_COMPATIBLE_BIT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkCommandPoolResetFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkCommandPoolResetFlagBits e = static_cast<VkCommandPoolResetFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_COMMAND_POOL_RESET_RELEASE_RESOURCES_BIT:
            *out += "VK_COMMAND_POOL_RESET_RELEASE_RESOURCES_BIT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkBorderColor(std::string* out, uint32_t enum_uint32)
{
    VkBorderColor e = static_cast<VkBorderColor>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_BORDER_COLOR_INT_OPAQUE_BLACK:
            *out += "VK_BORDER_COLOR_INT_OPAQUE_BLACK";
            return;
        case VK_BORDER_COLOR_FLOAT_OPAQUE_BLACK:
            *out += "VK_BORDER_COLOR_FLOAT_OPAQUE_BLACK";
            return;
        case VK_BORDER_COLOR_INT_OPAQUE_WHITE:
            *out += "VK_BORDER_COLOR_INT_OPAQUE_WHITE";
            return;
        case VK_BORDER_COLOR_INT_TRANSPARENT_BLACK:
            *out += "VK_BORDER_COLOR_INT_TRANSPARENT_BLACK";
            return;
        case VK_BORDER_COLOR_FLOAT_TRANSPARENT_BLACK:
            *out += "VK_BORDER_COLOR_FLOAT_TRANSPARENT_BLACK";
            return;
        case VK_BORDER_COLOR_FLOAT_OPAQUE_WHITE:
            *out += "VK_BORDER_COLOR_FLOAT_OPAQUE_WHITE";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkCompositeAlphaFlagBitsKHR(std::string* out, uint32_t enum_uint32)
{
    VkCompositeAlphaFlagBitsKHR e = static_cast<VkCompositeAlphaFlagBitsKHR>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR:
            *out += "VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR";
            return;
        case VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR:
            *out += "VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR";
            return;
        case VK_COMPOSITE_ALPHA_PRE_MULTIPLIED_BIT_KHR:
            *out += "VK_COMPOSITE_ALPHA_PRE_MULTIPLIED_BIT_KHR";
            return;
        case VK_COMPOSITE_ALPHA_POST_MULTIPLIED_BIT_KHR:
            *out += "VK_COMPOSITE_ALPHA_POST_MULTIPLIED_BIT_KHR";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkQueueFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkQueueFlagBits e = static_cast<VkQueueFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_QUEUE_COMPUTE_BIT:
            *out += "VK_QUEUE_COMPUTE_BIT";
            return;
        case VK_QUEUE_SPARSE_BINDING_BIT:
            *out += "VK_QUEUE_SPARSE_BINDING_BIT";
            return;
        case VK_QUEUE_TRANSFER_BIT:
            *out += "VK_QUEUE_TRANSFER_BIT";
            return;
        case VK_QUEUE_GRAPHICS_BIT:
            *out += "VK_QUEUE_GRAPHICS_BIT";
            return;
        case VK_QUEUE_PROTECTED_BIT:
            *out += "VK_QUEUE_PROTECTED_BIT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkPerformanceOverrideTypeINTEL(std::string* out, uint32_t enum_uint32)
{
    VkPerformanceOverrideTypeINTEL e = static_cast<VkPerformanceOverrideTypeINTEL>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_PERFORMANCE_OVERRIDE_TYPE_NULL_HARDWARE_INTEL:
            *out += "VK_PERFORMANCE_OVERRIDE_TYPE_NULL_HARDWARE_INTEL";
            return;
        case VK_PERFORMANCE_OVERRIDE_TYPE_FLUSH_GPU_CACHES_INTEL:
            *out += "VK_PERFORMANCE_OVERRIDE_TYPE_FLUSH_GPU_CACHES_INTEL";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkPipelineCacheHeaderVersion(std::string* out, uint32_t enum_uint32)
{
    VkPipelineCacheHeaderVersion e = static_cast<VkPipelineCacheHeaderVersion>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_PIPELINE_CACHE_HEADER_VERSION_ONE:
            *out += "VK_PIPELINE_CACHE_HEADER_VERSION_ONE";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkLogicOp(std::string* out, uint32_t enum_uint32)
{
    VkLogicOp e = static_cast<VkLogicOp>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_LOGIC_OP_COPY_INVERTED:
            *out += "VK_LOGIC_OP_COPY_INVERTED";
            return;
        case VK_LOGIC_OP_XOR:
            *out += "VK_LOGIC_OP_XOR";
            return;
        case VK_LOGIC_OP_NOR:
            *out += "VK_LOGIC_OP_NOR";
            return;
        case VK_LOGIC_OP_NAND:
            *out += "VK_LOGIC_OP_NAND";
            return;
        case VK_LOGIC_OP_INVERT:
            *out += "VK_LOGIC_OP_INVERT";
            return;
        case VK_LOGIC_OP_COPY:
            *out += "VK_LOGIC_OP_COPY";
            return;
        case VK_LOGIC_OP_CLEAR:
            *out += "VK_LOGIC_OP_CLEAR";
            return;
        case VK_LOGIC_OP_OR_REVERSE:
            *out += "VK_LOGIC_OP_OR_REVERSE";
            return;
        case VK_LOGIC_OP_AND:
            *out += "VK_LOGIC_OP_AND";
            return;
        case VK_LOGIC_OP_NO_OP:
            *out += "VK_LOGIC_OP_NO_OP";
            return;
        case VK_LOGIC_OP_OR_INVERTED:
            *out += "VK_LOGIC_OP_OR_INVERTED";
            return;
        case VK_LOGIC_OP_AND_REVERSE:
            *out += "VK_LOGIC_OP_AND_REVERSE";
            return;
        case VK_LOGIC_OP_OR:
            *out += "VK_LOGIC_OP_OR";
            return;
        case VK_LOGIC_OP_AND_INVERTED:
            *out += "VK_LOGIC_OP_AND_INVERTED";
            return;
        case VK_LOGIC_OP_SET:
            *out += "VK_LOGIC_OP_SET";
            return;
        case VK_LOGIC_OP_EQUIVALENT:
            *out += "VK_LOGIC_OP_EQUIVALENT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkDriverIdKHR(std::string* out, uint32_t enum_uint32)
{
    VkDriverIdKHR e = static_cast<VkDriverIdKHR>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_DRIVER_ID_GGP_PROPRIETARY_KHR:
            *out += "VK_DRIVER_ID_GGP_PROPRIETARY_KHR";
            return;
        case VK_DRIVER_ID_BROADCOM_PROPRIETARY_KHR:
            *out += "VK_DRIVER_ID_BROADCOM_PROPRIETARY_KHR";
            return;
        case VK_DRIVER_ID_AMD_PROPRIETARY_KHR:
            *out += "VK_DRIVER_ID_AMD_PROPRIETARY_KHR";
            return;
        case VK_DRIVER_ID_GOOGLE_SWIFTSHADER_KHR:
            *out += "VK_DRIVER_ID_GOOGLE_SWIFTSHADER_KHR";
            return;
        case VK_DRIVER_ID_MESA_RADV_KHR:
            *out += "VK_DRIVER_ID_MESA_RADV_KHR";
            return;
        case VK_DRIVER_ID_ARM_PROPRIETARY_KHR:
            *out += "VK_DRIVER_ID_ARM_PROPRIETARY_KHR";
            return;
        case VK_DRIVER_ID_INTEL_PROPRIETARY_WINDOWS_KHR:
            *out += "VK_DRIVER_ID_INTEL_PROPRIETARY_WINDOWS_KHR";
            return;
        case VK_DRIVER_ID_NVIDIA_PROPRIETARY_KHR:
            *out += "VK_DRIVER_ID_NVIDIA_PROPRIETARY_KHR";
            return;
        case VK_DRIVER_ID_QUALCOMM_PROPRIETARY_KHR:
            *out += "VK_DRIVER_ID_QUALCOMM_PROPRIETARY_KHR";
            return;
        case VK_DRIVER_ID_INTEL_OPEN_SOURCE_MESA_KHR:
            *out += "VK_DRIVER_ID_INTEL_OPEN_SOURCE_MESA_KHR";
            return;
        case VK_DRIVER_ID_AMD_OPEN_SOURCE_KHR:
            *out += "VK_DRIVER_ID_AMD_OPEN_SOURCE_KHR";
            return;
        case VK_DRIVER_ID_IMAGINATION_PROPRIETARY_KHR:
            *out += "VK_DRIVER_ID_IMAGINATION_PROPRIETARY_KHR";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkIndirectCommandsLayoutUsageFlagBitsNVX(std::string* out, uint32_t enum_uint32)
{
    VkIndirectCommandsLayoutUsageFlagBitsNVX e = static_cast<VkIndirectCommandsLayoutUsageFlagBitsNVX>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_INDIRECT_COMMANDS_LAYOUT_USAGE_INDEXED_SEQUENCES_BIT_NVX:
            *out += "VK_INDIRECT_COMMANDS_LAYOUT_USAGE_INDEXED_SEQUENCES_BIT_NVX";
            return;
        case VK_INDIRECT_COMMANDS_LAYOUT_USAGE_SPARSE_SEQUENCES_BIT_NVX:
            *out += "VK_INDIRECT_COMMANDS_LAYOUT_USAGE_SPARSE_SEQUENCES_BIT_NVX";
            return;
        case VK_INDIRECT_COMMANDS_LAYOUT_USAGE_EMPTY_EXECUTIONS_BIT_NVX:
            *out += "VK_INDIRECT_COMMANDS_LAYOUT_USAGE_EMPTY_EXECUTIONS_BIT_NVX";
            return;
        case VK_INDIRECT_COMMANDS_LAYOUT_USAGE_UNORDERED_SEQUENCES_BIT_NVX:
            *out += "VK_INDIRECT_COMMANDS_LAYOUT_USAGE_UNORDERED_SEQUENCES_BIT_NVX";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkMemoryPropertyFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkMemoryPropertyFlagBits e = static_cast<VkMemoryPropertyFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT:
            *out += "VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT";
            return;
        case VK_MEMORY_PROPERTY_DEVICE_COHERENT_BIT_AMD:
            *out += "VK_MEMORY_PROPERTY_DEVICE_COHERENT_BIT_AMD";
            return;
        case VK_MEMORY_PROPERTY_HOST_COHERENT_BIT:
            *out += "VK_MEMORY_PROPERTY_HOST_COHERENT_BIT";
            return;
        case VK_MEMORY_PROPERTY_PROTECTED_BIT:
            *out += "VK_MEMORY_PROPERTY_PROTECTED_BIT";
            return;
        case VK_MEMORY_PROPERTY_HOST_CACHED_BIT:
            *out += "VK_MEMORY_PROPERTY_HOST_CACHED_BIT";
            return;
        case VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT:
            *out += "VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT";
            return;
        case VK_MEMORY_PROPERTY_DEVICE_UNCACHED_BIT_AMD:
            *out += "VK_MEMORY_PROPERTY_DEVICE_UNCACHED_BIT_AMD";
            return;
        case VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT:
            *out += "VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkSparseMemoryBindFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkSparseMemoryBindFlagBits e = static_cast<VkSparseMemoryBindFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_SPARSE_MEMORY_BIND_METADATA_BIT:
            *out += "VK_SPARSE_MEMORY_BIND_METADATA_BIT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkDynamicState(std::string* out, uint32_t enum_uint32)
{
    VkDynamicState e = static_cast<VkDynamicState>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_DYNAMIC_STATE_DEPTH_BOUNDS:
            *out += "VK_DYNAMIC_STATE_DEPTH_BOUNDS";
            return;
        case VK_DYNAMIC_STATE_VIEWPORT_COARSE_SAMPLE_ORDER_NV:
            *out += "VK_DYNAMIC_STATE_VIEWPORT_COARSE_SAMPLE_ORDER_NV";
            return;
        case VK_DYNAMIC_STATE_VIEWPORT:
            *out += "VK_DYNAMIC_STATE_VIEWPORT";
            return;
        case VK_DYNAMIC_STATE_LINE_WIDTH:
            *out += "VK_DYNAMIC_STATE_LINE_WIDTH";
            return;
        case VK_DYNAMIC_STATE_STENCIL_WRITE_MASK:
            *out += "VK_DYNAMIC_STATE_STENCIL_WRITE_MASK";
            return;
        case VK_DYNAMIC_STATE_DISCARD_RECTANGLE_EXT:
            *out += "VK_DYNAMIC_STATE_DISCARD_RECTANGLE_EXT";
            return;
        case VK_DYNAMIC_STATE_VIEWPORT_SHADING_RATE_PALETTE_NV:
            *out += "VK_DYNAMIC_STATE_VIEWPORT_SHADING_RATE_PALETTE_NV";
            return;
        case VK_DYNAMIC_STATE_SAMPLE_LOCATIONS_EXT:
            *out += "VK_DYNAMIC_STATE_SAMPLE_LOCATIONS_EXT";
            return;
        case VK_DYNAMIC_STATE_BLEND_CONSTANTS:
            *out += "VK_DYNAMIC_STATE_BLEND_CONSTANTS";
            return;
        case VK_DYNAMIC_STATE_DEPTH_BIAS:
            *out += "VK_DYNAMIC_STATE_DEPTH_BIAS";
            return;
        case VK_DYNAMIC_STATE_STENCIL_REFERENCE:
            *out += "VK_DYNAMIC_STATE_STENCIL_REFERENCE";
            return;
        case VK_DYNAMIC_STATE_EXCLUSIVE_SCISSOR_NV:
            *out += "VK_DYNAMIC_STATE_EXCLUSIVE_SCISSOR_NV";
            return;
        case VK_DYNAMIC_STATE_VIEWPORT_W_SCALING_NV:
            *out += "VK_DYNAMIC_STATE_VIEWPORT_W_SCALING_NV";
            return;
        case VK_DYNAMIC_STATE_STENCIL_COMPARE_MASK:
            *out += "VK_DYNAMIC_STATE_STENCIL_COMPARE_MASK";
            return;
        case VK_DYNAMIC_STATE_SCISSOR:
            *out += "VK_DYNAMIC_STATE_SCISSOR";
            return;
        case VK_DYNAMIC_STATE_LINE_STIPPLE_EXT:
            *out += "VK_DYNAMIC_STATE_LINE_STIPPLE_EXT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkIndexType(std::string* out, uint32_t enum_uint32)
{
    VkIndexType e = static_cast<VkIndexType>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_INDEX_TYPE_UINT32:
            *out += "VK_INDEX_TYPE_UINT32";
            return;
        case VK_INDEX_TYPE_UINT16:
            *out += "VK_INDEX_TYPE_UINT16";
            return;
        case VK_INDEX_TYPE_NONE_NV:
            *out += "VK_INDEX_TYPE_NONE_NV";
            return;
        case VK_INDEX_TYPE_UINT8_EXT:
            *out += "VK_INDEX_TYPE_UINT8_EXT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkImageViewType(std::string* out, uint32_t enum_uint32)
{
    VkImageViewType e = static_cast<VkImageViewType>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_IMAGE_VIEW_TYPE_2D:
            *out += "VK_IMAGE_VIEW_TYPE_2D";
            return;
        case VK_IMAGE_VIEW_TYPE_1D:
            *out += "VK_IMAGE_VIEW_TYPE_1D";
            return;
        case VK_IMAGE_VIEW_TYPE_CUBE_ARRAY:
            *out += "VK_IMAGE_VIEW_TYPE_CUBE_ARRAY";
            return;
        case VK_IMAGE_VIEW_TYPE_2D_ARRAY:
            *out += "VK_IMAGE_VIEW_TYPE_2D_ARRAY";
            return;
        case VK_IMAGE_VIEW_TYPE_1D_ARRAY:
            *out += "VK_IMAGE_VIEW_TYPE_1D_ARRAY";
            return;
        case VK_IMAGE_VIEW_TYPE_CUBE:
            *out += "VK_IMAGE_VIEW_TYPE_CUBE";
            return;
        case VK_IMAGE_VIEW_TYPE_3D:
            *out += "VK_IMAGE_VIEW_TYPE_3D";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkPipelineStageFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkPipelineStageFlagBits e = static_cast<VkPipelineStageFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_PIPELINE_STAGE_TRANSFER_BIT:
            *out += "VK_PIPELINE_STAGE_TRANSFER_BIT";
            return;
        case VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT:
            *out += "VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT";
            return;
        case VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT:
            *out += "VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT";
            return;
        case VK_PIPELINE_STAGE_ACCELERATION_STRUCTURE_BUILD_BIT_NV:
            *out += "VK_PIPELINE_STAGE_ACCELERATION_STRUCTURE_BUILD_BIT_NV";
            return;
        case VK_PIPELINE_STAGE_TESSELLATION_EVALUATION_SHADER_BIT:
            *out += "VK_PIPELINE_STAGE_TESSELLATION_EVALUATION_SHADER_BIT";
            return;
        case VK_PIPELINE_STAGE_TASK_SHADER_BIT_NV:
            *out += "VK_PIPELINE_STAGE_TASK_SHADER_BIT_NV";
            return;
        case VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT:
            *out += "VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT";
            return;
        case VK_PIPELINE_STAGE_CONDITIONAL_RENDERING_BIT_EXT:
            *out += "VK_PIPELINE_STAGE_CONDITIONAL_RENDERING_BIT_EXT";
            return;
        case VK_PIPELINE_STAGE_RAY_TRACING_SHADER_BIT_NV:
            *out += "VK_PIPELINE_STAGE_RAY_TRACING_SHADER_BIT_NV";
            return;
        case VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT:
            *out += "VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT";
            return;
        case VK_PIPELINE_STAGE_SHADING_RATE_IMAGE_BIT_NV:
            *out += "VK_PIPELINE_STAGE_SHADING_RATE_IMAGE_BIT_NV";
            return;
        case VK_PIPELINE_STAGE_VERTEX_INPUT_BIT:
            *out += "VK_PIPELINE_STAGE_VERTEX_INPUT_BIT";
            return;
        case VK_PIPELINE_STAGE_TESSELLATION_CONTROL_SHADER_BIT:
            *out += "VK_PIPELINE_STAGE_TESSELLATION_CONTROL_SHADER_BIT";
            return;
        case VK_PIPELINE_STAGE_ALL_COMMANDS_BIT:
            *out += "VK_PIPELINE_STAGE_ALL_COMMANDS_BIT";
            return;
        case VK_PIPELINE_STAGE_MESH_SHADER_BIT_NV:
            *out += "VK_PIPELINE_STAGE_MESH_SHADER_BIT_NV";
            return;
        case VK_PIPELINE_STAGE_ALL_GRAPHICS_BIT:
            *out += "VK_PIPELINE_STAGE_ALL_GRAPHICS_BIT";
            return;
        case VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT:
            *out += "VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT";
            return;
        case VK_PIPELINE_STAGE_VERTEX_SHADER_BIT:
            *out += "VK_PIPELINE_STAGE_VERTEX_SHADER_BIT";
            return;
        case VK_PIPELINE_STAGE_TRANSFORM_FEEDBACK_BIT_EXT:
            *out += "VK_PIPELINE_STAGE_TRANSFORM_FEEDBACK_BIT_EXT";
            return;
        case VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT:
            *out += "VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT";
            return;
        case VK_PIPELINE_STAGE_FRAGMENT_DENSITY_PROCESS_BIT_EXT:
            *out += "VK_PIPELINE_STAGE_FRAGMENT_DENSITY_PROCESS_BIT_EXT";
            return;
        case VK_PIPELINE_STAGE_COMMAND_PROCESS_BIT_NVX:
            *out += "VK_PIPELINE_STAGE_COMMAND_PROCESS_BIT_NVX";
            return;
        case VK_PIPELINE_STAGE_DRAW_INDIRECT_BIT:
            *out += "VK_PIPELINE_STAGE_DRAW_INDIRECT_BIT";
            return;
        case VK_PIPELINE_STAGE_GEOMETRY_SHADER_BIT:
            *out += "VK_PIPELINE_STAGE_GEOMETRY_SHADER_BIT";
            return;
        case VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT:
            *out += "VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT";
            return;
        case VK_PIPELINE_STAGE_HOST_BIT:
            *out += "VK_PIPELINE_STAGE_HOST_BIT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkDebugReportObjectTypeEXT(std::string* out, uint32_t enum_uint32)
{
    VkDebugReportObjectTypeEXT e = static_cast<VkDebugReportObjectTypeEXT>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_DEBUG_REPORT_OBJECT_TYPE_QUERY_POOL_EXT:
            *out += "VK_DEBUG_REPORT_OBJECT_TYPE_QUERY_POOL_EXT";
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_DISPLAY_KHR_EXT:
            *out += "VK_DEBUG_REPORT_OBJECT_TYPE_DISPLAY_KHR_EXT";
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_SHADER_MODULE_EXT:
            *out += "VK_DEBUG_REPORT_OBJECT_TYPE_SHADER_MODULE_EXT";
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT:
            *out += "VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT";
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_EXT:
            *out += "VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_EXT";
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_POOL_EXT:
            *out += "VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_POOL_EXT";
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_POOL_EXT:
            *out += "VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_POOL_EXT";
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_PHYSICAL_DEVICE_EXT:
            *out += "VK_DEBUG_REPORT_OBJECT_TYPE_PHYSICAL_DEVICE_EXT";
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_SWAPCHAIN_KHR_EXT:
            *out += "VK_DEBUG_REPORT_OBJECT_TYPE_SWAPCHAIN_KHR_EXT";
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_VIEW_EXT:
            *out += "VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_VIEW_EXT";
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_CACHE_EXT:
            *out += "VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_CACHE_EXT";
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_EXT:
            *out += "VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_EXT";
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_OBJECT_TABLE_NVX_EXT:
            *out += "VK_DEBUG_REPORT_OBJECT_TYPE_OBJECT_TABLE_NVX_EXT";
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_INDIRECT_COMMANDS_LAYOUT_NVX_EXT:
            *out += "VK_DEBUG_REPORT_OBJECT_TYPE_INDIRECT_COMMANDS_LAYOUT_NVX_EXT";
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_VALIDATION_CACHE_EXT_EXT:
            *out += "VK_DEBUG_REPORT_OBJECT_TYPE_VALIDATION_CACHE_EXT_EXT";
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_ACCELERATION_STRUCTURE_NV_EXT:
            *out += "VK_DEBUG_REPORT_OBJECT_TYPE_ACCELERATION_STRUCTURE_NV_EXT";
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_INSTANCE_EXT:
            *out += "VK_DEBUG_REPORT_OBJECT_TYPE_INSTANCE_EXT";
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_EXT:
            *out += "VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_EXT";
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_EXT:
            *out += "VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_EXT";
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_EXT:
            *out += "VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_EXT";
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_RENDER_PASS_EXT:
            *out += "VK_DEBUG_REPORT_OBJECT_TYPE_RENDER_PASS_EXT";
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_EVENT_EXT:
            *out += "VK_DEBUG_REPORT_OBJECT_TYPE_EVENT_EXT";
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_SURFACE_KHR_EXT:
            *out += "VK_DEBUG_REPORT_OBJECT_TYPE_SURFACE_KHR_EXT";
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_SEMAPHORE_EXT:
            *out += "VK_DEBUG_REPORT_OBJECT_TYPE_SEMAPHORE_EXT";
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT_EXT:
            *out += "VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT_EXT";
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_EXT:
            *out += "VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_EXT";
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT_EXT:
            *out += "VK_DEBUG_REPORT_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT_EXT";
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_FENCE_EXT:
            *out += "VK_DEBUG_REPORT_OBJECT_TYPE_FENCE_EXT";
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_MEMORY_EXT:
            *out += "VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_MEMORY_EXT";
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_BUFFER_EXT:
            *out += "VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_BUFFER_EXT";
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_DISPLAY_MODE_KHR_EXT:
            *out += "VK_DEBUG_REPORT_OBJECT_TYPE_DISPLAY_MODE_KHR_EXT";
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION_EXT:
            *out += "VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION_EXT";
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_LAYOUT_EXT:
            *out += "VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_LAYOUT_EXT";
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_FRAMEBUFFER_EXT:
            *out += "VK_DEBUG_REPORT_OBJECT_TYPE_FRAMEBUFFER_EXT";
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_QUEUE_EXT:
            *out += "VK_DEBUG_REPORT_OBJECT_TYPE_QUEUE_EXT";
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_EXT:
            *out += "VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_EXT";
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_VIEW_EXT:
            *out += "VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_VIEW_EXT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkPipelineBindPoint(std::string* out, uint32_t enum_uint32)
{
    VkPipelineBindPoint e = static_cast<VkPipelineBindPoint>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_PIPELINE_BIND_POINT_GRAPHICS:
            *out += "VK_PIPELINE_BIND_POINT_GRAPHICS";
            return;
        case VK_PIPELINE_BIND_POINT_COMPUTE:
            *out += "VK_PIPELINE_BIND_POINT_COMPUTE";
            return;
        case VK_PIPELINE_BIND_POINT_RAY_TRACING_NV:
            *out += "VK_PIPELINE_BIND_POINT_RAY_TRACING_NV";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkColorSpaceKHR(std::string* out, uint32_t enum_uint32)
{
    VkColorSpaceKHR e = static_cast<VkColorSpaceKHR>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_COLOR_SPACE_EXTENDED_SRGB_LINEAR_EXT:
            *out += "VK_COLOR_SPACE_EXTENDED_SRGB_LINEAR_EXT";
            return;
        case VK_COLOR_SPACE_DOLBYVISION_EXT:
            *out += "VK_COLOR_SPACE_DOLBYVISION_EXT";
            return;
        case VK_COLOR_SPACE_HDR10_HLG_EXT:
            *out += "VK_COLOR_SPACE_HDR10_HLG_EXT";
            return;
        case VK_COLOR_SPACE_BT709_LINEAR_EXT:
            *out += "VK_COLOR_SPACE_BT709_LINEAR_EXT";
            return;
        case VK_COLOR_SPACE_DISPLAY_NATIVE_AMD:
            *out += "VK_COLOR_SPACE_DISPLAY_NATIVE_AMD";
            return;
        case VK_COLOR_SPACE_HDR10_ST2084_EXT:
            *out += "VK_COLOR_SPACE_HDR10_ST2084_EXT";
            return;
        case VK_COLOR_SPACE_DISPLAY_P3_LINEAR_EXT:
            *out += "VK_COLOR_SPACE_DISPLAY_P3_LINEAR_EXT";
            return;
        case VK_COLOR_SPACE_BT709_NONLINEAR_EXT:
            *out += "VK_COLOR_SPACE_BT709_NONLINEAR_EXT";
            return;
        case VK_COLOR_SPACE_DCI_P3_NONLINEAR_EXT:
            *out += "VK_COLOR_SPACE_DCI_P3_NONLINEAR_EXT";
            return;
        case VK_COLOR_SPACE_DISPLAY_P3_NONLINEAR_EXT:
            *out += "VK_COLOR_SPACE_DISPLAY_P3_NONLINEAR_EXT";
            return;
        case VK_COLOR_SPACE_PASS_THROUGH_EXT:
            *out += "VK_COLOR_SPACE_PASS_THROUGH_EXT";
            return;
        case VK_COLOR_SPACE_EXTENDED_SRGB_NONLINEAR_EXT:
            *out += "VK_COLOR_SPACE_EXTENDED_SRGB_NONLINEAR_EXT";
            return;
        case VK_COLOR_SPACE_SRGB_NONLINEAR_KHR:
            *out += "VK_COLOR_SPACE_SRGB_NONLINEAR_KHR";
            return;
        case VK_COLOR_SPACE_BT2020_LINEAR_EXT:
            *out += "VK_COLOR_SPACE_BT2020_LINEAR_EXT";
            return;
        case VK_COLOR_SPACE_ADOBERGB_NONLINEAR_EXT:
            *out += "VK_COLOR_SPACE_ADOBERGB_NONLINEAR_EXT";
            return;
        case VK_COLOR_SPACE_ADOBERGB_LINEAR_EXT:
            *out += "VK_COLOR_SPACE_ADOBERGB_LINEAR_EXT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkPointClippingBehavior(std::string* out, uint32_t enum_uint32)
{
    VkPointClippingBehavior e = static_cast<VkPointClippingBehavior>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_POINT_CLIPPING_BEHAVIOR_ALL_CLIP_PLANES:
            *out += "VK_POINT_CLIPPING_BEHAVIOR_ALL_CLIP_PLANES";
            return;
        case VK_POINT_CLIPPING_BEHAVIOR_USER_CLIP_PLANES_ONLY:
            *out += "VK_POINT_CLIPPING_BEHAVIOR_USER_CLIP_PLANES_ONLY";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkDisplayPlaneAlphaFlagBitsKHR(std::string* out, uint32_t enum_uint32)
{
    VkDisplayPlaneAlphaFlagBitsKHR e = static_cast<VkDisplayPlaneAlphaFlagBitsKHR>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_DISPLAY_PLANE_ALPHA_OPAQUE_BIT_KHR:
            *out += "VK_DISPLAY_PLANE_ALPHA_OPAQUE_BIT_KHR";
            return;
        case VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR:
            *out += "VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR";
            return;
        case VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_BIT_KHR:
            *out += "VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_BIT_KHR";
            return;
        case VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_PREMULTIPLIED_BIT_KHR:
            *out += "VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_PREMULTIPLIED_BIT_KHR";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkLineRasterizationModeEXT(std::string* out, uint32_t enum_uint32)
{
    VkLineRasterizationModeEXT e = static_cast<VkLineRasterizationModeEXT>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_LINE_RASTERIZATION_MODE_BRESENHAM_EXT:
            *out += "VK_LINE_RASTERIZATION_MODE_BRESENHAM_EXT";
            return;
        case VK_LINE_RASTERIZATION_MODE_RECTANGULAR_SMOOTH_EXT:
            *out += "VK_LINE_RASTERIZATION_MODE_RECTANGULAR_SMOOTH_EXT";
            return;
        case VK_LINE_RASTERIZATION_MODE_DEFAULT_EXT:
            *out += "VK_LINE_RASTERIZATION_MODE_DEFAULT_EXT";
            return;
        case VK_LINE_RASTERIZATION_MODE_RECTANGULAR_EXT:
            *out += "VK_LINE_RASTERIZATION_MODE_RECTANGULAR_EXT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkPerformanceParameterTypeINTEL(std::string* out, uint32_t enum_uint32)
{
    VkPerformanceParameterTypeINTEL e = static_cast<VkPerformanceParameterTypeINTEL>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_PERFORMANCE_PARAMETER_TYPE_HW_COUNTERS_SUPPORTED_INTEL:
            *out += "VK_PERFORMANCE_PARAMETER_TYPE_HW_COUNTERS_SUPPORTED_INTEL";
            return;
        case VK_PERFORMANCE_PARAMETER_TYPE_STREAM_MARKER_VALID_BITS_INTEL:
            *out += "VK_PERFORMANCE_PARAMETER_TYPE_STREAM_MARKER_VALID_BITS_INTEL";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkStencilFaceFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkStencilFaceFlagBits e = static_cast<VkStencilFaceFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_STENCIL_FACE_FRONT_BIT:
            *out += "VK_STENCIL_FACE_FRONT_BIT";
            return;
        case VK_STENCIL_FACE_BACK_BIT:
            *out += "VK_STENCIL_FACE_BACK_BIT";
            return;
        case VK_STENCIL_FACE_FRONT_AND_BACK:
            *out += "VK_STENCIL_FACE_FRONT_AND_BACK";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkInternalAllocationType(std::string* out, uint32_t enum_uint32)
{
    VkInternalAllocationType e = static_cast<VkInternalAllocationType>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_INTERNAL_ALLOCATION_TYPE_EXECUTABLE:
            *out += "VK_INTERNAL_ALLOCATION_TYPE_EXECUTABLE";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkQueryResultFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkQueryResultFlagBits e = static_cast<VkQueryResultFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_QUERY_RESULT_WITH_AVAILABILITY_BIT:
            *out += "VK_QUERY_RESULT_WITH_AVAILABILITY_BIT";
            return;
        case VK_QUERY_RESULT_WAIT_BIT:
            *out += "VK_QUERY_RESULT_WAIT_BIT";
            return;
        case VK_QUERY_RESULT_64_BIT:
            *out += "VK_QUERY_RESULT_64_BIT";
            return;
        case VK_QUERY_RESULT_PARTIAL_BIT:
            *out += "VK_QUERY_RESULT_PARTIAL_BIT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkSamplerYcbcrRange(std::string* out, uint32_t enum_uint32)
{
    VkSamplerYcbcrRange e = static_cast<VkSamplerYcbcrRange>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_SAMPLER_YCBCR_RANGE_ITU_FULL:
            *out += "VK_SAMPLER_YCBCR_RANGE_ITU_FULL";
            return;
        case VK_SAMPLER_YCBCR_RANGE_ITU_NARROW:
            *out += "VK_SAMPLER_YCBCR_RANGE_ITU_NARROW";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkExternalFenceFeatureFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkExternalFenceFeatureFlagBits e = static_cast<VkExternalFenceFeatureFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT:
            *out += "VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT";
            return;
        case VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT:
            *out += "VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkConditionalRenderingFlagBitsEXT(std::string* out, uint32_t enum_uint32)
{
    VkConditionalRenderingFlagBitsEXT e = static_cast<VkConditionalRenderingFlagBitsEXT>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_CONDITIONAL_RENDERING_INVERTED_BIT_EXT:
            *out += "VK_CONDITIONAL_RENDERING_INVERTED_BIT_EXT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkSemaphoreTypeKHR(std::string* out, uint32_t enum_uint32)
{
    VkSemaphoreTypeKHR e = static_cast<VkSemaphoreTypeKHR>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_SEMAPHORE_TYPE_BINARY_KHR:
            *out += "VK_SEMAPHORE_TYPE_BINARY_KHR";
            return;
        case VK_SEMAPHORE_TYPE_TIMELINE_KHR:
            *out += "VK_SEMAPHORE_TYPE_TIMELINE_KHR";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkScopeNV(std::string* out, uint32_t enum_uint32)
{
    VkScopeNV e = static_cast<VkScopeNV>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_SCOPE_DEVICE_NV:
            *out += "VK_SCOPE_DEVICE_NV";
            return;
        case VK_SCOPE_SUBGROUP_NV:
            *out += "VK_SCOPE_SUBGROUP_NV";
            return;
        case VK_SCOPE_WORKGROUP_NV:
            *out += "VK_SCOPE_WORKGROUP_NV";
            return;
        case VK_SCOPE_QUEUE_FAMILY_NV:
            *out += "VK_SCOPE_QUEUE_FAMILY_NV";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkCoverageModulationModeNV(std::string* out, uint32_t enum_uint32)
{
    VkCoverageModulationModeNV e = static_cast<VkCoverageModulationModeNV>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_COVERAGE_MODULATION_MODE_ALPHA_NV:
            *out += "VK_COVERAGE_MODULATION_MODE_ALPHA_NV";
            return;
        case VK_COVERAGE_MODULATION_MODE_NONE_NV:
            *out += "VK_COVERAGE_MODULATION_MODE_NONE_NV";
            return;
        case VK_COVERAGE_MODULATION_MODE_RGB_NV:
            *out += "VK_COVERAGE_MODULATION_MODE_RGB_NV";
            return;
        case VK_COVERAGE_MODULATION_MODE_RGBA_NV:
            *out += "VK_COVERAGE_MODULATION_MODE_RGBA_NV";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkAttachmentLoadOp(std::string* out, uint32_t enum_uint32)
{
    VkAttachmentLoadOp e = static_cast<VkAttachmentLoadOp>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_ATTACHMENT_LOAD_OP_CLEAR:
            *out += "VK_ATTACHMENT_LOAD_OP_CLEAR";
            return;
        case VK_ATTACHMENT_LOAD_OP_DONT_CARE:
            *out += "VK_ATTACHMENT_LOAD_OP_DONT_CARE";
            return;
        case VK_ATTACHMENT_LOAD_OP_LOAD:
            *out += "VK_ATTACHMENT_LOAD_OP_LOAD";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkValidationCheckEXT(std::string* out, uint32_t enum_uint32)
{
    VkValidationCheckEXT e = static_cast<VkValidationCheckEXT>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_VALIDATION_CHECK_ALL_EXT:
            *out += "VK_VALIDATION_CHECK_ALL_EXT";
            return;
        case VK_VALIDATION_CHECK_SHADERS_EXT:
            *out += "VK_VALIDATION_CHECK_SHADERS_EXT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkBufferCreateFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkBufferCreateFlagBits e = static_cast<VkBufferCreateFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_BUFFER_CREATE_SPARSE_ALIASED_BIT:
            *out += "VK_BUFFER_CREATE_SPARSE_ALIASED_BIT";
            return;
        case VK_BUFFER_CREATE_PROTECTED_BIT:
            *out += "VK_BUFFER_CREATE_PROTECTED_BIT";
            return;
        case VK_BUFFER_CREATE_SPARSE_BINDING_BIT:
            *out += "VK_BUFFER_CREATE_SPARSE_BINDING_BIT";
            return;
        case VK_BUFFER_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_EXT:
            *out += "VK_BUFFER_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_EXT";
            return;
        case VK_BUFFER_CREATE_SPARSE_RESIDENCY_BIT:
            *out += "VK_BUFFER_CREATE_SPARSE_RESIDENCY_BIT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkObjectType(std::string* out, uint32_t enum_uint32)
{
    VkObjectType e = static_cast<VkObjectType>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_OBJECT_TYPE_IMAGE_VIEW:
            *out += "VK_OBJECT_TYPE_IMAGE_VIEW";
            return;
        case VK_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT:
            *out += "VK_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT";
            return;
        case VK_OBJECT_TYPE_DEBUG_UTILS_MESSENGER_EXT:
            *out += "VK_OBJECT_TYPE_DEBUG_UTILS_MESSENGER_EXT";
            return;
        case VK_OBJECT_TYPE_DEVICE_MEMORY:
            *out += "VK_OBJECT_TYPE_DEVICE_MEMORY";
            return;
        case VK_OBJECT_TYPE_ACCELERATION_STRUCTURE_NV:
            *out += "VK_OBJECT_TYPE_ACCELERATION_STRUCTURE_NV";
            return;
        case VK_OBJECT_TYPE_INSTANCE:
            *out += "VK_OBJECT_TYPE_INSTANCE";
            return;
        case VK_OBJECT_TYPE_FENCE:
            *out += "VK_OBJECT_TYPE_FENCE";
            return;
        case VK_OBJECT_TYPE_PIPELINE_LAYOUT:
            *out += "VK_OBJECT_TYPE_PIPELINE_LAYOUT";
            return;
        case VK_OBJECT_TYPE_PERFORMANCE_CONFIGURATION_INTEL:
            *out += "VK_OBJECT_TYPE_PERFORMANCE_CONFIGURATION_INTEL";
            return;
        case VK_OBJECT_TYPE_UNKNOWN:
            *out += "VK_OBJECT_TYPE_UNKNOWN";
            return;
        case VK_OBJECT_TYPE_EVENT:
            *out += "VK_OBJECT_TYPE_EVENT";
            return;
        case VK_OBJECT_TYPE_BUFFER:
            *out += "VK_OBJECT_TYPE_BUFFER";
            return;
        case VK_OBJECT_TYPE_QUEUE:
            *out += "VK_OBJECT_TYPE_QUEUE";
            return;
        case VK_OBJECT_TYPE_RENDER_PASS:
            *out += "VK_OBJECT_TYPE_RENDER_PASS";
            return;
        case VK_OBJECT_TYPE_DISPLAY_MODE_KHR:
            *out += "VK_OBJECT_TYPE_DISPLAY_MODE_KHR";
            return;
        case VK_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT:
            *out += "VK_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT";
            return;
        case VK_OBJECT_TYPE_COMMAND_POOL:
            *out += "VK_OBJECT_TYPE_COMMAND_POOL";
            return;
        case VK_OBJECT_TYPE_DEVICE:
            *out += "VK_OBJECT_TYPE_DEVICE";
            return;
        case VK_OBJECT_TYPE_DESCRIPTOR_SET:
            *out += "VK_OBJECT_TYPE_DESCRIPTOR_SET";
            return;
        case VK_OBJECT_TYPE_PIPELINE_CACHE:
            *out += "VK_OBJECT_TYPE_PIPELINE_CACHE";
            return;
        case VK_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION:
            *out += "VK_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION";
            return;
        case VK_OBJECT_TYPE_COMMAND_BUFFER:
            *out += "VK_OBJECT_TYPE_COMMAND_BUFFER";
            return;
        case VK_OBJECT_TYPE_BUFFER_VIEW:
            *out += "VK_OBJECT_TYPE_BUFFER_VIEW";
            return;
        case VK_OBJECT_TYPE_SWAPCHAIN_KHR:
            *out += "VK_OBJECT_TYPE_SWAPCHAIN_KHR";
            return;
        case VK_OBJECT_TYPE_PIPELINE:
            *out += "VK_OBJECT_TYPE_PIPELINE";
            return;
        case VK_OBJECT_TYPE_DESCRIPTOR_POOL:
            *out += "VK_OBJECT_TYPE_DESCRIPTOR_POOL";
            return;
        case VK_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE:
            *out += "VK_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE";
            return;
        case VK_OBJECT_TYPE_OBJECT_TABLE_NVX:
            *out += "VK_OBJECT_TYPE_OBJECT_TABLE_NVX";
            return;
        case VK_OBJECT_TYPE_DISPLAY_KHR:
            *out += "VK_OBJECT_TYPE_DISPLAY_KHR";
            return;
        case VK_OBJECT_TYPE_IMAGE:
            *out += "VK_OBJECT_TYPE_IMAGE";
            return;
        case VK_OBJECT_TYPE_PHYSICAL_DEVICE:
            *out += "VK_OBJECT_TYPE_PHYSICAL_DEVICE";
            return;
        case VK_OBJECT_TYPE_FRAMEBUFFER:
            *out += "VK_OBJECT_TYPE_FRAMEBUFFER";
            return;
        case VK_OBJECT_TYPE_SHADER_MODULE:
            *out += "VK_OBJECT_TYPE_SHADER_MODULE";
            return;
        case VK_OBJECT_TYPE_VALIDATION_CACHE_EXT:
            *out += "VK_OBJECT_TYPE_VALIDATION_CACHE_EXT";
            return;
        case VK_OBJECT_TYPE_QUERY_POOL:
            *out += "VK_OBJECT_TYPE_QUERY_POOL";
            return;
        case VK_OBJECT_TYPE_SEMAPHORE:
            *out += "VK_OBJECT_TYPE_SEMAPHORE";
            return;
        case VK_OBJECT_TYPE_SURFACE_KHR:
            *out += "VK_OBJECT_TYPE_SURFACE_KHR";
            return;
        case VK_OBJECT_TYPE_INDIRECT_COMMANDS_LAYOUT_NVX:
            *out += "VK_OBJECT_TYPE_INDIRECT_COMMANDS_LAYOUT_NVX";
            return;
        case VK_OBJECT_TYPE_SAMPLER:
            *out += "VK_OBJECT_TYPE_SAMPLER";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkShaderInfoTypeAMD(std::string* out, uint32_t enum_uint32)
{
    VkShaderInfoTypeAMD e = static_cast<VkShaderInfoTypeAMD>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_SHADER_INFO_TYPE_STATISTICS_AMD:
            *out += "VK_SHADER_INFO_TYPE_STATISTICS_AMD";
            return;
        case VK_SHADER_INFO_TYPE_BINARY_AMD:
            *out += "VK_SHADER_INFO_TYPE_BINARY_AMD";
            return;
        case VK_SHADER_INFO_TYPE_DISASSEMBLY_AMD:
            *out += "VK_SHADER_INFO_TYPE_DISASSEMBLY_AMD";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkShaderCorePropertiesFlagBitsAMD(std::string* out, uint32_t enum_uint32)
{
    VkShaderCorePropertiesFlagBitsAMD e = static_cast<VkShaderCorePropertiesFlagBitsAMD>(enum_uint32);
    assert(out != nullptr); // RYZ
    *out += "UNKNOWN";
}

void EnumToStringVkVendorId(std::string* out, uint32_t enum_uint32)
{
    VkVendorId e = static_cast<VkVendorId>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_VENDOR_ID_VIV:
            *out += "VK_VENDOR_ID_VIV";
            return;
        case VK_VENDOR_ID_KAZAN:
            *out += "VK_VENDOR_ID_KAZAN";
            return;
        case VK_VENDOR_ID_VSI:
            *out += "VK_VENDOR_ID_VSI";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkMemoryOverallocationBehaviorAMD(std::string* out, uint32_t enum_uint32)
{
    VkMemoryOverallocationBehaviorAMD e = static_cast<VkMemoryOverallocationBehaviorAMD>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_MEMORY_OVERALLOCATION_BEHAVIOR_DISALLOWED_AMD:
            *out += "VK_MEMORY_OVERALLOCATION_BEHAVIOR_DISALLOWED_AMD";
            return;
        case VK_MEMORY_OVERALLOCATION_BEHAVIOR_ALLOWED_AMD:
            *out += "VK_MEMORY_OVERALLOCATION_BEHAVIOR_ALLOWED_AMD";
            return;
        case VK_MEMORY_OVERALLOCATION_BEHAVIOR_DEFAULT_AMD:
            *out += "VK_MEMORY_OVERALLOCATION_BEHAVIOR_DEFAULT_AMD";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkPerformanceConfigurationTypeINTEL(std::string* out, uint32_t enum_uint32)
{
    VkPerformanceConfigurationTypeINTEL e = static_cast<VkPerformanceConfigurationTypeINTEL>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_PERFORMANCE_CONFIGURATION_TYPE_COMMAND_QUEUE_METRICS_DISCOVERY_ACTIVATED_INTEL:
            *out += "VK_PERFORMANCE_CONFIGURATION_TYPE_COMMAND_QUEUE_METRICS_DISCOVERY_ACTIVATED_INTEL";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkCommandBufferUsageFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkCommandBufferUsageFlagBits e = static_cast<VkCommandBufferUsageFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT:
            *out += "VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT";
            return;
        case VK_COMMAND_BUFFER_USAGE_RENDER_PASS_CONTINUE_BIT:
            *out += "VK_COMMAND_BUFFER_USAGE_RENDER_PASS_CONTINUE_BIT";
            return;
        case VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT:
            *out += "VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkSurfaceCounterFlagBitsEXT(std::string* out, uint32_t enum_uint32)
{
    VkSurfaceCounterFlagBitsEXT e = static_cast<VkSurfaceCounterFlagBitsEXT>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_SURFACE_COUNTER_VBLANK_EXT:
            *out += "VK_SURFACE_COUNTER_VBLANK_EXT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkBlendFactor(std::string* out, uint32_t enum_uint32)
{
    VkBlendFactor e = static_cast<VkBlendFactor>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_BLEND_FACTOR_SRC_ALPHA_SATURATE:
            *out += "VK_BLEND_FACTOR_SRC_ALPHA_SATURATE";
            return;
        case VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_ALPHA:
            *out += "VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_ALPHA";
            return;
        case VK_BLEND_FACTOR_SRC_ALPHA:
            *out += "VK_BLEND_FACTOR_SRC_ALPHA";
            return;
        case VK_BLEND_FACTOR_ONE_MINUS_SRC1_ALPHA:
            *out += "VK_BLEND_FACTOR_ONE_MINUS_SRC1_ALPHA";
            return;
        case VK_BLEND_FACTOR_DST_ALPHA:
            *out += "VK_BLEND_FACTOR_DST_ALPHA";
            return;
        case VK_BLEND_FACTOR_ONE:
            *out += "VK_BLEND_FACTOR_ONE";
            return;
        case VK_BLEND_FACTOR_SRC1_ALPHA:
            *out += "VK_BLEND_FACTOR_SRC1_ALPHA";
            return;
        case VK_BLEND_FACTOR_DST_COLOR:
            *out += "VK_BLEND_FACTOR_DST_COLOR";
            return;
        case VK_BLEND_FACTOR_CONSTANT_ALPHA:
            *out += "VK_BLEND_FACTOR_CONSTANT_ALPHA";
            return;
        case VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR:
            *out += "VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR";
            return;
        case VK_BLEND_FACTOR_ONE_MINUS_DST_ALPHA:
            *out += "VK_BLEND_FACTOR_ONE_MINUS_DST_ALPHA";
            return;
        case VK_BLEND_FACTOR_SRC_COLOR:
            *out += "VK_BLEND_FACTOR_SRC_COLOR";
            return;
        case VK_BLEND_FACTOR_ONE_MINUS_DST_COLOR:
            *out += "VK_BLEND_FACTOR_ONE_MINUS_DST_COLOR";
            return;
        case VK_BLEND_FACTOR_CONSTANT_COLOR:
            *out += "VK_BLEND_FACTOR_CONSTANT_COLOR";
            return;
        case VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA:
            *out += "VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA";
            return;
        case VK_BLEND_FACTOR_SRC1_COLOR:
            *out += "VK_BLEND_FACTOR_SRC1_COLOR";
            return;
        case VK_BLEND_FACTOR_ONE_MINUS_SRC1_COLOR:
            *out += "VK_BLEND_FACTOR_ONE_MINUS_SRC1_COLOR";
            return;
        case VK_BLEND_FACTOR_ZERO:
            *out += "VK_BLEND_FACTOR_ZERO";
            return;
        case VK_BLEND_FACTOR_ONE_MINUS_SRC_COLOR:
            *out += "VK_BLEND_FACTOR_ONE_MINUS_SRC_COLOR";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkStencilOp(std::string* out, uint32_t enum_uint32)
{
    VkStencilOp e = static_cast<VkStencilOp>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_STENCIL_OP_DECREMENT_AND_WRAP:
            *out += "VK_STENCIL_OP_DECREMENT_AND_WRAP";
            return;
        case VK_STENCIL_OP_DECREMENT_AND_CLAMP:
            *out += "VK_STENCIL_OP_DECREMENT_AND_CLAMP";
            return;
        case VK_STENCIL_OP_ZERO:
            *out += "VK_STENCIL_OP_ZERO";
            return;
        case VK_STENCIL_OP_REPLACE:
            *out += "VK_STENCIL_OP_REPLACE";
            return;
        case VK_STENCIL_OP_INCREMENT_AND_CLAMP:
            *out += "VK_STENCIL_OP_INCREMENT_AND_CLAMP";
            return;
        case VK_STENCIL_OP_INCREMENT_AND_WRAP:
            *out += "VK_STENCIL_OP_INCREMENT_AND_WRAP";
            return;
        case VK_STENCIL_OP_INVERT:
            *out += "VK_STENCIL_OP_INVERT";
            return;
        case VK_STENCIL_OP_KEEP:
            *out += "VK_STENCIL_OP_KEEP";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkAccelerationStructureTypeNV(std::string* out, uint32_t enum_uint32)
{
    VkAccelerationStructureTypeNV e = static_cast<VkAccelerationStructureTypeNV>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_ACCELERATION_STRUCTURE_TYPE_TOP_LEVEL_NV:
            *out += "VK_ACCELERATION_STRUCTURE_TYPE_TOP_LEVEL_NV";
            return;
        case VK_ACCELERATION_STRUCTURE_TYPE_BOTTOM_LEVEL_NV:
            *out += "VK_ACCELERATION_STRUCTURE_TYPE_BOTTOM_LEVEL_NV";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkGeometryTypeNV(std::string* out, uint32_t enum_uint32)
{
    VkGeometryTypeNV e = static_cast<VkGeometryTypeNV>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_GEOMETRY_TYPE_TRIANGLES_NV:
            *out += "VK_GEOMETRY_TYPE_TRIANGLES_NV";
            return;
        case VK_GEOMETRY_TYPE_AABBS_NV:
            *out += "VK_GEOMETRY_TYPE_AABBS_NV";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkTimeDomainEXT(std::string* out, uint32_t enum_uint32)
{
    VkTimeDomainEXT e = static_cast<VkTimeDomainEXT>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_TIME_DOMAIN_CLOCK_MONOTONIC_EXT:
            *out += "VK_TIME_DOMAIN_CLOCK_MONOTONIC_EXT";
            return;
        case VK_TIME_DOMAIN_QUERY_PERFORMANCE_COUNTER_EXT:
            *out += "VK_TIME_DOMAIN_QUERY_PERFORMANCE_COUNTER_EXT";
            return;
        case VK_TIME_DOMAIN_CLOCK_MONOTONIC_RAW_EXT:
            *out += "VK_TIME_DOMAIN_CLOCK_MONOTONIC_RAW_EXT";
            return;
        case VK_TIME_DOMAIN_DEVICE_EXT:
            *out += "VK_TIME_DOMAIN_DEVICE_EXT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkSubpassContents(std::string* out, uint32_t enum_uint32)
{
    VkSubpassContents e = static_cast<VkSubpassContents>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_SUBPASS_CONTENTS_INLINE:
            *out += "VK_SUBPASS_CONTENTS_INLINE";
            return;
        case VK_SUBPASS_CONTENTS_SECONDARY_COMMAND_BUFFERS:
            *out += "VK_SUBPASS_CONTENTS_SECONDARY_COMMAND_BUFFERS";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkExternalSemaphoreFeatureFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkExternalSemaphoreFeatureFlagBits e = static_cast<VkExternalSemaphoreFeatureFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT:
            *out += "VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT";
            return;
        case VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT:
            *out += "VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkPipelineExecutableStatisticFormatKHR(std::string* out, uint32_t enum_uint32)
{
    VkPipelineExecutableStatisticFormatKHR e = static_cast<VkPipelineExecutableStatisticFormatKHR>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_BOOL32_KHR:
            *out += "VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_BOOL32_KHR";
            return;
        case VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_INT64_KHR:
            *out += "VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_INT64_KHR";
            return;
        case VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_UINT64_KHR:
            *out += "VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_UINT64_KHR";
            return;
        case VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_FLOAT64_KHR:
            *out += "VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_FLOAT64_KHR";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkSubpassDescriptionFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkSubpassDescriptionFlagBits e = static_cast<VkSubpassDescriptionFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_SUBPASS_DESCRIPTION_PER_VIEW_ATTRIBUTES_BIT_NVX:
            *out += "VK_SUBPASS_DESCRIPTION_PER_VIEW_ATTRIBUTES_BIT_NVX";
            return;
        case VK_SUBPASS_DESCRIPTION_PER_VIEW_POSITION_X_ONLY_BIT_NVX:
            *out += "VK_SUBPASS_DESCRIPTION_PER_VIEW_POSITION_X_ONLY_BIT_NVX";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkCopyAccelerationStructureModeNV(std::string* out, uint32_t enum_uint32)
{
    VkCopyAccelerationStructureModeNV e = static_cast<VkCopyAccelerationStructureModeNV>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_COPY_ACCELERATION_STRUCTURE_MODE_CLONE_NV:
            *out += "VK_COPY_ACCELERATION_STRUCTURE_MODE_CLONE_NV";
            return;
        case VK_COPY_ACCELERATION_STRUCTURE_MODE_COMPACT_NV:
            *out += "VK_COPY_ACCELERATION_STRUCTURE_MODE_COMPACT_NV";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkQueryType(std::string* out, uint32_t enum_uint32)
{
    VkQueryType e = static_cast<VkQueryType>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_QUERY_TYPE_PERFORMANCE_QUERY_INTEL:
            *out += "VK_QUERY_TYPE_PERFORMANCE_QUERY_INTEL";
            return;
        case VK_QUERY_TYPE_TIMESTAMP:
            *out += "VK_QUERY_TYPE_TIMESTAMP";
            return;
        case VK_QUERY_TYPE_OCCLUSION:
            *out += "VK_QUERY_TYPE_OCCLUSION";
            return;
        case VK_QUERY_TYPE_ACCELERATION_STRUCTURE_COMPACTED_SIZE_NV:
            *out += "VK_QUERY_TYPE_ACCELERATION_STRUCTURE_COMPACTED_SIZE_NV";
            return;
        case VK_QUERY_TYPE_TRANSFORM_FEEDBACK_STREAM_EXT:
            *out += "VK_QUERY_TYPE_TRANSFORM_FEEDBACK_STREAM_EXT";
            return;
        case VK_QUERY_TYPE_PIPELINE_STATISTICS:
            *out += "VK_QUERY_TYPE_PIPELINE_STATISTICS";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkSwapchainCreateFlagBitsKHR(std::string* out, uint32_t enum_uint32)
{
    VkSwapchainCreateFlagBitsKHR e = static_cast<VkSwapchainCreateFlagBitsKHR>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_SWAPCHAIN_CREATE_MUTABLE_FORMAT_BIT_KHR:
            *out += "VK_SWAPCHAIN_CREATE_MUTABLE_FORMAT_BIT_KHR";
            return;
        case VK_SWAPCHAIN_CREATE_PROTECTED_BIT_KHR:
            *out += "VK_SWAPCHAIN_CREATE_PROTECTED_BIT_KHR";
            return;
        case VK_SWAPCHAIN_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR:
            *out += "VK_SWAPCHAIN_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkResult(std::string* out, uint32_t enum_uint32)
{
    VkResult e = static_cast<VkResult>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_SUCCESS:
            *out += "VK_SUCCESS";
            return;
        case VK_ERROR_SURFACE_LOST_KHR:
            *out += "VK_ERROR_SURFACE_LOST_KHR";
            return;
        case VK_ERROR_MEMORY_MAP_FAILED:
            *out += "VK_ERROR_MEMORY_MAP_FAILED";
            return;
        case VK_ERROR_EXTENSION_NOT_PRESENT:
            *out += "VK_ERROR_EXTENSION_NOT_PRESENT";
            return;
        case VK_INCOMPLETE:
            *out += "VK_INCOMPLETE";
            return;
        case VK_ERROR_INVALID_DRM_FORMAT_MODIFIER_PLANE_LAYOUT_EXT:
            *out += "VK_ERROR_INVALID_DRM_FORMAT_MODIFIER_PLANE_LAYOUT_EXT";
            return;
        case VK_ERROR_FRAGMENTED_POOL:
            *out += "VK_ERROR_FRAGMENTED_POOL";
            return;
        case VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT:
            *out += "VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT";
            return;
        case VK_ERROR_OUT_OF_POOL_MEMORY:
            *out += "VK_ERROR_OUT_OF_POOL_MEMORY";
            return;
        case VK_ERROR_LAYER_NOT_PRESENT:
            *out += "VK_ERROR_LAYER_NOT_PRESENT";
            return;
        case VK_ERROR_TOO_MANY_OBJECTS:
            *out += "VK_ERROR_TOO_MANY_OBJECTS";
            return;
        case VK_ERROR_INCOMPATIBLE_DRIVER:
            *out += "VK_ERROR_INCOMPATIBLE_DRIVER";
            return;
        case VK_ERROR_FRAGMENTATION_EXT:
            *out += "VK_ERROR_FRAGMENTATION_EXT";
            return;
        case VK_ERROR_NOT_PERMITTED_EXT:
            *out += "VK_ERROR_NOT_PERMITTED_EXT";
            return;
        case VK_ERROR_DEVICE_LOST:
            *out += "VK_ERROR_DEVICE_LOST";
            return;
        case VK_ERROR_INCOMPATIBLE_DISPLAY_KHR:
            *out += "VK_ERROR_INCOMPATIBLE_DISPLAY_KHR";
            return;
        case VK_ERROR_INVALID_SHADER_NV:
            *out += "VK_ERROR_INVALID_SHADER_NV";
            return;
        case VK_ERROR_INVALID_EXTERNAL_HANDLE:
            *out += "VK_ERROR_INVALID_EXTERNAL_HANDLE";
            return;
        case VK_ERROR_VALIDATION_FAILED_EXT:
            *out += "VK_ERROR_VALIDATION_FAILED_EXT";
            return;
        case VK_ERROR_OUT_OF_DEVICE_MEMORY:
            *out += "VK_ERROR_OUT_OF_DEVICE_MEMORY";
            return;
        case VK_TIMEOUT:
            *out += "VK_TIMEOUT";
            return;
        case VK_ERROR_INITIALIZATION_FAILED:
            *out += "VK_ERROR_INITIALIZATION_FAILED";
            return;
        case VK_NOT_READY:
            *out += "VK_NOT_READY";
            return;
        case VK_SUBOPTIMAL_KHR:
            *out += "VK_SUBOPTIMAL_KHR";
            return;
        case VK_ERROR_FEATURE_NOT_PRESENT:
            *out += "VK_ERROR_FEATURE_NOT_PRESENT";
            return;
        case VK_ERROR_INVALID_DEVICE_ADDRESS_EXT:
            *out += "VK_ERROR_INVALID_DEVICE_ADDRESS_EXT";
            return;
        case VK_EVENT_RESET:
            *out += "VK_EVENT_RESET";
            return;
        case VK_ERROR_OUT_OF_DATE_KHR:
            *out += "VK_ERROR_OUT_OF_DATE_KHR";
            return;
        case VK_ERROR_NATIVE_WINDOW_IN_USE_KHR:
            *out += "VK_ERROR_NATIVE_WINDOW_IN_USE_KHR";
            return;
        case VK_ERROR_OUT_OF_HOST_MEMORY:
            *out += "VK_ERROR_OUT_OF_HOST_MEMORY";
            return;
        case VK_ERROR_FORMAT_NOT_SUPPORTED:
            *out += "VK_ERROR_FORMAT_NOT_SUPPORTED";
            return;
        case VK_EVENT_SET:
            *out += "VK_EVENT_SET";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkSystemAllocationScope(std::string* out, uint32_t enum_uint32)
{
    VkSystemAllocationScope e = static_cast<VkSystemAllocationScope>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_SYSTEM_ALLOCATION_SCOPE_COMMAND:
            *out += "VK_SYSTEM_ALLOCATION_SCOPE_COMMAND";
            return;
        case VK_SYSTEM_ALLOCATION_SCOPE_OBJECT:
            *out += "VK_SYSTEM_ALLOCATION_SCOPE_OBJECT";
            return;
        case VK_SYSTEM_ALLOCATION_SCOPE_INSTANCE:
            *out += "VK_SYSTEM_ALLOCATION_SCOPE_INSTANCE";
            return;
        case VK_SYSTEM_ALLOCATION_SCOPE_CACHE:
            *out += "VK_SYSTEM_ALLOCATION_SCOPE_CACHE";
            return;
        case VK_SYSTEM_ALLOCATION_SCOPE_DEVICE:
            *out += "VK_SYSTEM_ALLOCATION_SCOPE_DEVICE";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkSurfaceTransformFlagBitsKHR(std::string* out, uint32_t enum_uint32)
{
    VkSurfaceTransformFlagBitsKHR e = static_cast<VkSurfaceTransformFlagBitsKHR>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_90_BIT_KHR:
            *out += "VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_90_BIT_KHR";
            return;
        case VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR:
            *out += "VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR";
            return;
        case VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_180_BIT_KHR:
            *out += "VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_180_BIT_KHR";
            return;
        case VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_270_BIT_KHR:
            *out += "VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_270_BIT_KHR";
            return;
        case VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_BIT_KHR:
            *out += "VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_BIT_KHR";
            return;
        case VK_SURFACE_TRANSFORM_ROTATE_90_BIT_KHR:
            *out += "VK_SURFACE_TRANSFORM_ROTATE_90_BIT_KHR";
            return;
        case VK_SURFACE_TRANSFORM_ROTATE_180_BIT_KHR:
            *out += "VK_SURFACE_TRANSFORM_ROTATE_180_BIT_KHR";
            return;
        case VK_SURFACE_TRANSFORM_INHERIT_BIT_KHR:
            *out += "VK_SURFACE_TRANSFORM_INHERIT_BIT_KHR";
            return;
        case VK_SURFACE_TRANSFORM_ROTATE_270_BIT_KHR:
            *out += "VK_SURFACE_TRANSFORM_ROTATE_270_BIT_KHR";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkComponentSwizzle(std::string* out, uint32_t enum_uint32)
{
    VkComponentSwizzle e = static_cast<VkComponentSwizzle>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_COMPONENT_SWIZZLE_G:
            *out += "VK_COMPONENT_SWIZZLE_G";
            return;
        case VK_COMPONENT_SWIZZLE_A:
            *out += "VK_COMPONENT_SWIZZLE_A";
            return;
        case VK_COMPONENT_SWIZZLE_B:
            *out += "VK_COMPONENT_SWIZZLE_B";
            return;
        case VK_COMPONENT_SWIZZLE_R:
            *out += "VK_COMPONENT_SWIZZLE_R";
            return;
        case VK_COMPONENT_SWIZZLE_ONE:
            *out += "VK_COMPONENT_SWIZZLE_ONE";
            return;
        case VK_COMPONENT_SWIZZLE_IDENTITY:
            *out += "VK_COMPONENT_SWIZZLE_IDENTITY";
            return;
        case VK_COMPONENT_SWIZZLE_ZERO:
            *out += "VK_COMPONENT_SWIZZLE_ZERO";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkExternalMemoryFeatureFlagBitsNV(std::string* out, uint32_t enum_uint32)
{
    VkExternalMemoryFeatureFlagBitsNV e = static_cast<VkExternalMemoryFeatureFlagBitsNV>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_NV:
            *out += "VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_NV";
            return;
        case VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_NV:
            *out += "VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_NV";
            return;
        case VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_NV:
            *out += "VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_NV";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkPhysicalDeviceType(std::string* out, uint32_t enum_uint32)
{
    VkPhysicalDeviceType e = static_cast<VkPhysicalDeviceType>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_PHYSICAL_DEVICE_TYPE_INTEGRATED_GPU:
            *out += "VK_PHYSICAL_DEVICE_TYPE_INTEGRATED_GPU";
            return;
        case VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU:
            *out += "VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU";
            return;
        case VK_PHYSICAL_DEVICE_TYPE_OTHER:
            *out += "VK_PHYSICAL_DEVICE_TYPE_OTHER";
            return;
        case VK_PHYSICAL_DEVICE_TYPE_CPU:
            *out += "VK_PHYSICAL_DEVICE_TYPE_CPU";
            return;
        case VK_PHYSICAL_DEVICE_TYPE_VIRTUAL_GPU:
            *out += "VK_PHYSICAL_DEVICE_TYPE_VIRTUAL_GPU";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkShaderModuleCreateFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkShaderModuleCreateFlagBits e = static_cast<VkShaderModuleCreateFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    *out += "UNKNOWN";
}

void EnumToStringVkShaderFloatControlsIndependenceKHR(std::string* out, uint32_t enum_uint32)
{
    VkShaderFloatControlsIndependenceKHR e = static_cast<VkShaderFloatControlsIndependenceKHR>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_NONE_KHR:
            *out += "VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_NONE_KHR";
            return;
        case VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_ALL_KHR:
            *out += "VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_ALL_KHR";
            return;
        case VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_32_BIT_ONLY_KHR:
            *out += "VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_32_BIT_ONLY_KHR";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkShaderStageFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkShaderStageFlagBits e = static_cast<VkShaderStageFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_SHADER_STAGE_MISS_BIT_NV:
            *out += "VK_SHADER_STAGE_MISS_BIT_NV";
            return;
        case VK_SHADER_STAGE_MESH_BIT_NV:
            *out += "VK_SHADER_STAGE_MESH_BIT_NV";
            return;
        case VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT:
            *out += "VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT";
            return;
        case VK_SHADER_STAGE_FRAGMENT_BIT:
            *out += "VK_SHADER_STAGE_FRAGMENT_BIT";
            return;
        case VK_SHADER_STAGE_RAYGEN_BIT_NV:
            *out += "VK_SHADER_STAGE_RAYGEN_BIT_NV";
            return;
        case VK_SHADER_STAGE_ALL_GRAPHICS:
            *out += "VK_SHADER_STAGE_ALL_GRAPHICS";
            return;
        case VK_SHADER_STAGE_INTERSECTION_BIT_NV:
            *out += "VK_SHADER_STAGE_INTERSECTION_BIT_NV";
            return;
        case VK_SHADER_STAGE_GEOMETRY_BIT:
            *out += "VK_SHADER_STAGE_GEOMETRY_BIT";
            return;
        case VK_SHADER_STAGE_ALL:
            *out += "VK_SHADER_STAGE_ALL";
            return;
        case VK_SHADER_STAGE_CLOSEST_HIT_BIT_NV:
            *out += "VK_SHADER_STAGE_CLOSEST_HIT_BIT_NV";
            return;
        case VK_SHADER_STAGE_COMPUTE_BIT:
            *out += "VK_SHADER_STAGE_COMPUTE_BIT";
            return;
        case VK_SHADER_STAGE_ANY_HIT_BIT_NV:
            *out += "VK_SHADER_STAGE_ANY_HIT_BIT_NV";
            return;
        case VK_SHADER_STAGE_CALLABLE_BIT_NV:
            *out += "VK_SHADER_STAGE_CALLABLE_BIT_NV";
            return;
        case VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT:
            *out += "VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT";
            return;
        case VK_SHADER_STAGE_TASK_BIT_NV:
            *out += "VK_SHADER_STAGE_TASK_BIT_NV";
            return;
        case VK_SHADER_STAGE_VERTEX_BIT:
            *out += "VK_SHADER_STAGE_VERTEX_BIT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkImageAspectFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkImageAspectFlagBits e = static_cast<VkImageAspectFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_IMAGE_ASPECT_COLOR_BIT:
            *out += "VK_IMAGE_ASPECT_COLOR_BIT";
            return;
        case VK_IMAGE_ASPECT_STENCIL_BIT:
            *out += "VK_IMAGE_ASPECT_STENCIL_BIT";
            return;
        case VK_IMAGE_ASPECT_MEMORY_PLANE_2_BIT_EXT:
            *out += "VK_IMAGE_ASPECT_MEMORY_PLANE_2_BIT_EXT";
            return;
        case VK_IMAGE_ASPECT_DEPTH_BIT:
            *out += "VK_IMAGE_ASPECT_DEPTH_BIT";
            return;
        case VK_IMAGE_ASPECT_METADATA_BIT:
            *out += "VK_IMAGE_ASPECT_METADATA_BIT";
            return;
        case VK_IMAGE_ASPECT_PLANE_2_BIT:
            *out += "VK_IMAGE_ASPECT_PLANE_2_BIT";
            return;
        case VK_IMAGE_ASPECT_MEMORY_PLANE_3_BIT_EXT:
            *out += "VK_IMAGE_ASPECT_MEMORY_PLANE_3_BIT_EXT";
            return;
        case VK_IMAGE_ASPECT_PLANE_1_BIT:
            *out += "VK_IMAGE_ASPECT_PLANE_1_BIT";
            return;
        case VK_IMAGE_ASPECT_PLANE_0_BIT:
            *out += "VK_IMAGE_ASPECT_PLANE_0_BIT";
            return;
        case VK_IMAGE_ASPECT_MEMORY_PLANE_0_BIT_EXT:
            *out += "VK_IMAGE_ASPECT_MEMORY_PLANE_0_BIT_EXT";
            return;
        case VK_IMAGE_ASPECT_MEMORY_PLANE_1_BIT_EXT:
            *out += "VK_IMAGE_ASPECT_MEMORY_PLANE_1_BIT_EXT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkIndirectCommandsTokenTypeNVX(std::string* out, uint32_t enum_uint32)
{
    VkIndirectCommandsTokenTypeNVX e = static_cast<VkIndirectCommandsTokenTypeNVX>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_INDIRECT_COMMANDS_TOKEN_TYPE_PUSH_CONSTANT_NVX:
            *out += "VK_INDIRECT_COMMANDS_TOKEN_TYPE_PUSH_CONSTANT_NVX";
            return;
        case VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_INDEXED_NVX:
            *out += "VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_INDEXED_NVX";
            return;
        case VK_INDIRECT_COMMANDS_TOKEN_TYPE_DESCRIPTOR_SET_NVX:
            *out += "VK_INDIRECT_COMMANDS_TOKEN_TYPE_DESCRIPTOR_SET_NVX";
            return;
        case VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_NVX:
            *out += "VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_NVX";
            return;
        case VK_INDIRECT_COMMANDS_TOKEN_TYPE_INDEX_BUFFER_NVX:
            *out += "VK_INDIRECT_COMMANDS_TOKEN_TYPE_INDEX_BUFFER_NVX";
            return;
        case VK_INDIRECT_COMMANDS_TOKEN_TYPE_PIPELINE_NVX:
            *out += "VK_INDIRECT_COMMANDS_TOKEN_TYPE_PIPELINE_NVX";
            return;
        case VK_INDIRECT_COMMANDS_TOKEN_TYPE_VERTEX_BUFFER_NVX:
            *out += "VK_INDIRECT_COMMANDS_TOKEN_TYPE_VERTEX_BUFFER_NVX";
            return;
        case VK_INDIRECT_COMMANDS_TOKEN_TYPE_DISPATCH_NVX:
            *out += "VK_INDIRECT_COMMANDS_TOKEN_TYPE_DISPATCH_NVX";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkCullModeFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkCullModeFlagBits e = static_cast<VkCullModeFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_CULL_MODE_FRONT_AND_BACK:
            *out += "VK_CULL_MODE_FRONT_AND_BACK";
            return;
        case VK_CULL_MODE_FRONT_BIT:
            *out += "VK_CULL_MODE_FRONT_BIT";
            return;
        case VK_CULL_MODE_BACK_BIT:
            *out += "VK_CULL_MODE_BACK_BIT";
            return;
        case VK_CULL_MODE_NONE:
            *out += "VK_CULL_MODE_NONE";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkFenceCreateFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkFenceCreateFlagBits e = static_cast<VkFenceCreateFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_FENCE_CREATE_SIGNALED_BIT:
            *out += "VK_FENCE_CREATE_SIGNALED_BIT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkRenderPassCreateFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkRenderPassCreateFlagBits e = static_cast<VkRenderPassCreateFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    *out += "UNKNOWN";
}

void EnumToStringVkPerformanceValueTypeINTEL(std::string* out, uint32_t enum_uint32)
{
    VkPerformanceValueTypeINTEL e = static_cast<VkPerformanceValueTypeINTEL>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_PERFORMANCE_VALUE_TYPE_UINT32_INTEL:
            *out += "VK_PERFORMANCE_VALUE_TYPE_UINT32_INTEL";
            return;
        case VK_PERFORMANCE_VALUE_TYPE_BOOL_INTEL:
            *out += "VK_PERFORMANCE_VALUE_TYPE_BOOL_INTEL";
            return;
        case VK_PERFORMANCE_VALUE_TYPE_FLOAT_INTEL:
            *out += "VK_PERFORMANCE_VALUE_TYPE_FLOAT_INTEL";
            return;
        case VK_PERFORMANCE_VALUE_TYPE_UINT64_INTEL:
            *out += "VK_PERFORMANCE_VALUE_TYPE_UINT64_INTEL";
            return;
        case VK_PERFORMANCE_VALUE_TYPE_STRING_INTEL:
            *out += "VK_PERFORMANCE_VALUE_TYPE_STRING_INTEL";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkDisplayPowerStateEXT(std::string* out, uint32_t enum_uint32)
{
    VkDisplayPowerStateEXT e = static_cast<VkDisplayPowerStateEXT>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_DISPLAY_POWER_STATE_OFF_EXT:
            *out += "VK_DISPLAY_POWER_STATE_OFF_EXT";
            return;
        case VK_DISPLAY_POWER_STATE_ON_EXT:
            *out += "VK_DISPLAY_POWER_STATE_ON_EXT";
            return;
        case VK_DISPLAY_POWER_STATE_SUSPEND_EXT:
            *out += "VK_DISPLAY_POWER_STATE_SUSPEND_EXT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkPipelineShaderStageCreateFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkPipelineShaderStageCreateFlagBits e = static_cast<VkPipelineShaderStageCreateFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_PIPELINE_SHADER_STAGE_CREATE_REQUIRE_FULL_SUBGROUPS_BIT_EXT:
            *out += "VK_PIPELINE_SHADER_STAGE_CREATE_REQUIRE_FULL_SUBGROUPS_BIT_EXT";
            return;
        case VK_PIPELINE_SHADER_STAGE_CREATE_ALLOW_VARYING_SUBGROUP_SIZE_BIT_EXT:
            *out += "VK_PIPELINE_SHADER_STAGE_CREATE_ALLOW_VARYING_SUBGROUP_SIZE_BIT_EXT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkConservativeRasterizationModeEXT(std::string* out, uint32_t enum_uint32)
{
    VkConservativeRasterizationModeEXT e = static_cast<VkConservativeRasterizationModeEXT>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_CONSERVATIVE_RASTERIZATION_MODE_OVERESTIMATE_EXT:
            *out += "VK_CONSERVATIVE_RASTERIZATION_MODE_OVERESTIMATE_EXT";
            return;
        case VK_CONSERVATIVE_RASTERIZATION_MODE_DISABLED_EXT:
            *out += "VK_CONSERVATIVE_RASTERIZATION_MODE_DISABLED_EXT";
            return;
        case VK_CONSERVATIVE_RASTERIZATION_MODE_UNDERESTIMATE_EXT:
            *out += "VK_CONSERVATIVE_RASTERIZATION_MODE_UNDERESTIMATE_EXT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkSubgroupFeatureFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkSubgroupFeatureFlagBits e = static_cast<VkSubgroupFeatureFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_SUBGROUP_FEATURE_CLUSTERED_BIT:
            *out += "VK_SUBGROUP_FEATURE_CLUSTERED_BIT";
            return;
        case VK_SUBGROUP_FEATURE_VOTE_BIT:
            *out += "VK_SUBGROUP_FEATURE_VOTE_BIT";
            return;
        case VK_SUBGROUP_FEATURE_ARITHMETIC_BIT:
            *out += "VK_SUBGROUP_FEATURE_ARITHMETIC_BIT";
            return;
        case VK_SUBGROUP_FEATURE_QUAD_BIT:
            *out += "VK_SUBGROUP_FEATURE_QUAD_BIT";
            return;
        case VK_SUBGROUP_FEATURE_PARTITIONED_BIT_NV:
            *out += "VK_SUBGROUP_FEATURE_PARTITIONED_BIT_NV";
            return;
        case VK_SUBGROUP_FEATURE_BALLOT_BIT:
            *out += "VK_SUBGROUP_FEATURE_BALLOT_BIT";
            return;
        case VK_SUBGROUP_FEATURE_BASIC_BIT:
            *out += "VK_SUBGROUP_FEATURE_BASIC_BIT";
            return;
        case VK_SUBGROUP_FEATURE_SHUFFLE_RELATIVE_BIT:
            *out += "VK_SUBGROUP_FEATURE_SHUFFLE_RELATIVE_BIT";
            return;
        case VK_SUBGROUP_FEATURE_SHUFFLE_BIT:
            *out += "VK_SUBGROUP_FEATURE_SHUFFLE_BIT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkDescriptorUpdateTemplateType(std::string* out, uint32_t enum_uint32)
{
    VkDescriptorUpdateTemplateType e = static_cast<VkDescriptorUpdateTemplateType>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_DESCRIPTOR_SET:
            *out += "VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_DESCRIPTOR_SET";
            return;
        case VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_PUSH_DESCRIPTORS_KHR:
            *out += "VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_PUSH_DESCRIPTORS_KHR";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkSharingMode(std::string* out, uint32_t enum_uint32)
{
    VkSharingMode e = static_cast<VkSharingMode>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_SHARING_MODE_EXCLUSIVE:
            *out += "VK_SHARING_MODE_EXCLUSIVE";
            return;
        case VK_SHARING_MODE_CONCURRENT:
            *out += "VK_SHARING_MODE_CONCURRENT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkColorComponentFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkColorComponentFlagBits e = static_cast<VkColorComponentFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_COLOR_COMPONENT_A_BIT:
            *out += "VK_COLOR_COMPONENT_A_BIT";
            return;
        case VK_COLOR_COMPONENT_B_BIT:
            *out += "VK_COLOR_COMPONENT_B_BIT";
            return;
        case VK_COLOR_COMPONENT_R_BIT:
            *out += "VK_COLOR_COMPONENT_R_BIT";
            return;
        case VK_COLOR_COMPONENT_G_BIT:
            *out += "VK_COLOR_COMPONENT_G_BIT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkSamplerCreateFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkSamplerCreateFlagBits e = static_cast<VkSamplerCreateFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_SAMPLER_CREATE_SUBSAMPLED_COARSE_RECONSTRUCTION_BIT_EXT:
            *out += "VK_SAMPLER_CREATE_SUBSAMPLED_COARSE_RECONSTRUCTION_BIT_EXT";
            return;
        case VK_SAMPLER_CREATE_SUBSAMPLED_BIT_EXT:
            *out += "VK_SAMPLER_CREATE_SUBSAMPLED_BIT_EXT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkBlendOp(std::string* out, uint32_t enum_uint32)
{
    VkBlendOp e = static_cast<VkBlendOp>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_BLEND_OP_PINLIGHT_EXT:
            *out += "VK_BLEND_OP_PINLIGHT_EXT";
            return;
        case VK_BLEND_OP_MAX:
            *out += "VK_BLEND_OP_MAX";
            return;
        case VK_BLEND_OP_SRC_OUT_EXT:
            *out += "VK_BLEND_OP_SRC_OUT_EXT";
            return;
        case VK_BLEND_OP_HARDMIX_EXT:
            *out += "VK_BLEND_OP_HARDMIX_EXT";
            return;
        case VK_BLEND_OP_BLUE_EXT:
            *out += "VK_BLEND_OP_BLUE_EXT";
            return;
        case VK_BLEND_OP_PLUS_CLAMPED_ALPHA_EXT:
            *out += "VK_BLEND_OP_PLUS_CLAMPED_ALPHA_EXT";
            return;
        case VK_BLEND_OP_SOFTLIGHT_EXT:
            *out += "VK_BLEND_OP_SOFTLIGHT_EXT";
            return;
        case VK_BLEND_OP_PLUS_EXT:
            *out += "VK_BLEND_OP_PLUS_EXT";
            return;
        case VK_BLEND_OP_XOR_EXT:
            *out += "VK_BLEND_OP_XOR_EXT";
            return;
        case VK_BLEND_OP_OVERLAY_EXT:
            *out += "VK_BLEND_OP_OVERLAY_EXT";
            return;
        case VK_BLEND_OP_PLUS_CLAMPED_EXT:
            *out += "VK_BLEND_OP_PLUS_CLAMPED_EXT";
            return;
        case VK_BLEND_OP_INVERT_OVG_EXT:
            *out += "VK_BLEND_OP_INVERT_OVG_EXT";
            return;
        case VK_BLEND_OP_SRC_OVER_EXT:
            *out += "VK_BLEND_OP_SRC_OVER_EXT";
            return;
        case VK_BLEND_OP_HSL_HUE_EXT:
            *out += "VK_BLEND_OP_HSL_HUE_EXT";
            return;
        case VK_BLEND_OP_DST_EXT:
            *out += "VK_BLEND_OP_DST_EXT";
            return;
        case VK_BLEND_OP_SRC_ATOP_EXT:
            *out += "VK_BLEND_OP_SRC_ATOP_EXT";
            return;
        case VK_BLEND_OP_EXCLUSION_EXT:
            *out += "VK_BLEND_OP_EXCLUSION_EXT";
            return;
        case VK_BLEND_OP_LINEARLIGHT_EXT:
            *out += "VK_BLEND_OP_LINEARLIGHT_EXT";
            return;
        case VK_BLEND_OP_ZERO_EXT:
            *out += "VK_BLEND_OP_ZERO_EXT";
            return;
        case VK_BLEND_OP_REVERSE_SUBTRACT:
            *out += "VK_BLEND_OP_REVERSE_SUBTRACT";
            return;
        case VK_BLEND_OP_PLUS_DARKER_EXT:
            *out += "VK_BLEND_OP_PLUS_DARKER_EXT";
            return;
        case VK_BLEND_OP_VIVIDLIGHT_EXT:
            *out += "VK_BLEND_OP_VIVIDLIGHT_EXT";
            return;
        case VK_BLEND_OP_SCREEN_EXT:
            *out += "VK_BLEND_OP_SCREEN_EXT";
            return;
        case VK_BLEND_OP_RED_EXT:
            *out += "VK_BLEND_OP_RED_EXT";
            return;
        case VK_BLEND_OP_DARKEN_EXT:
            *out += "VK_BLEND_OP_DARKEN_EXT";
            return;
        case VK_BLEND_OP_SRC_IN_EXT:
            *out += "VK_BLEND_OP_SRC_IN_EXT";
            return;
        case VK_BLEND_OP_LIGHTEN_EXT:
            *out += "VK_BLEND_OP_LIGHTEN_EXT";
            return;
        case VK_BLEND_OP_DST_OVER_EXT:
            *out += "VK_BLEND_OP_DST_OVER_EXT";
            return;
        case VK_BLEND_OP_DST_OUT_EXT:
            *out += "VK_BLEND_OP_DST_OUT_EXT";
            return;
        case VK_BLEND_OP_MINUS_EXT:
            *out += "VK_BLEND_OP_MINUS_EXT";
            return;
        case VK_BLEND_OP_MINUS_CLAMPED_EXT:
            *out += "VK_BLEND_OP_MINUS_CLAMPED_EXT";
            return;
        case VK_BLEND_OP_CONTRAST_EXT:
            *out += "VK_BLEND_OP_CONTRAST_EXT";
            return;
        case VK_BLEND_OP_SUBTRACT:
            *out += "VK_BLEND_OP_SUBTRACT";
            return;
        case VK_BLEND_OP_MULTIPLY_EXT:
            *out += "VK_BLEND_OP_MULTIPLY_EXT";
            return;
        case VK_BLEND_OP_COLORDODGE_EXT:
            *out += "VK_BLEND_OP_COLORDODGE_EXT";
            return;
        case VK_BLEND_OP_MIN:
            *out += "VK_BLEND_OP_MIN";
            return;
        case VK_BLEND_OP_HSL_COLOR_EXT:
            *out += "VK_BLEND_OP_HSL_COLOR_EXT";
            return;
        case VK_BLEND_OP_HSL_LUMINOSITY_EXT:
            *out += "VK_BLEND_OP_HSL_LUMINOSITY_EXT";
            return;
        case VK_BLEND_OP_LINEARDODGE_EXT:
            *out += "VK_BLEND_OP_LINEARDODGE_EXT";
            return;
        case VK_BLEND_OP_DIFFERENCE_EXT:
            *out += "VK_BLEND_OP_DIFFERENCE_EXT";
            return;
        case VK_BLEND_OP_HSL_SATURATION_EXT:
            *out += "VK_BLEND_OP_HSL_SATURATION_EXT";
            return;
        case VK_BLEND_OP_COLORBURN_EXT:
            *out += "VK_BLEND_OP_COLORBURN_EXT";
            return;
        case VK_BLEND_OP_SRC_EXT:
            *out += "VK_BLEND_OP_SRC_EXT";
            return;
        case VK_BLEND_OP_LINEARBURN_EXT:
            *out += "VK_BLEND_OP_LINEARBURN_EXT";
            return;
        case VK_BLEND_OP_DST_IN_EXT:
            *out += "VK_BLEND_OP_DST_IN_EXT";
            return;
        case VK_BLEND_OP_HARDLIGHT_EXT:
            *out += "VK_BLEND_OP_HARDLIGHT_EXT";
            return;
        case VK_BLEND_OP_GREEN_EXT:
            *out += "VK_BLEND_OP_GREEN_EXT";
            return;
        case VK_BLEND_OP_INVERT_RGB_EXT:
            *out += "VK_BLEND_OP_INVERT_RGB_EXT";
            return;
        case VK_BLEND_OP_ADD:
            *out += "VK_BLEND_OP_ADD";
            return;
        case VK_BLEND_OP_DST_ATOP_EXT:
            *out += "VK_BLEND_OP_DST_ATOP_EXT";
            return;
        case VK_BLEND_OP_INVERT_EXT:
            *out += "VK_BLEND_OP_INVERT_EXT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkCommandPoolCreateFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkCommandPoolCreateFlagBits e = static_cast<VkCommandPoolCreateFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_COMMAND_POOL_CREATE_TRANSIENT_BIT:
            *out += "VK_COMMAND_POOL_CREATE_TRANSIENT_BIT";
            return;
        case VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT:
            *out += "VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT";
            return;
        case VK_COMMAND_POOL_CREATE_PROTECTED_BIT:
            *out += "VK_COMMAND_POOL_CREATE_PROTECTED_BIT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkObjectEntryTypeNVX(std::string* out, uint32_t enum_uint32)
{
    VkObjectEntryTypeNVX e = static_cast<VkObjectEntryTypeNVX>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_OBJECT_ENTRY_TYPE_DESCRIPTOR_SET_NVX:
            *out += "VK_OBJECT_ENTRY_TYPE_DESCRIPTOR_SET_NVX";
            return;
        case VK_OBJECT_ENTRY_TYPE_PUSH_CONSTANT_NVX:
            *out += "VK_OBJECT_ENTRY_TYPE_PUSH_CONSTANT_NVX";
            return;
        case VK_OBJECT_ENTRY_TYPE_INDEX_BUFFER_NVX:
            *out += "VK_OBJECT_ENTRY_TYPE_INDEX_BUFFER_NVX";
            return;
        case VK_OBJECT_ENTRY_TYPE_VERTEX_BUFFER_NVX:
            *out += "VK_OBJECT_ENTRY_TYPE_VERTEX_BUFFER_NVX";
            return;
        case VK_OBJECT_ENTRY_TYPE_PIPELINE_NVX:
            *out += "VK_OBJECT_ENTRY_TYPE_PIPELINE_NVX";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkGeometryFlagBitsNV(std::string* out, uint32_t enum_uint32)
{
    VkGeometryFlagBitsNV e = static_cast<VkGeometryFlagBitsNV>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_GEOMETRY_NO_DUPLICATE_ANY_HIT_INVOCATION_BIT_NV:
            *out += "VK_GEOMETRY_NO_DUPLICATE_ANY_HIT_INVOCATION_BIT_NV";
            return;
        case VK_GEOMETRY_OPAQUE_BIT_NV:
            *out += "VK_GEOMETRY_OPAQUE_BIT_NV";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkRasterizationOrderAMD(std::string* out, uint32_t enum_uint32)
{
    VkRasterizationOrderAMD e = static_cast<VkRasterizationOrderAMD>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_RASTERIZATION_ORDER_STRICT_AMD:
            *out += "VK_RASTERIZATION_ORDER_STRICT_AMD";
            return;
        case VK_RASTERIZATION_ORDER_RELAXED_AMD:
            *out += "VK_RASTERIZATION_ORDER_RELAXED_AMD";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkImageViewCreateFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkImageViewCreateFlagBits e = static_cast<VkImageViewCreateFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_IMAGE_VIEW_CREATE_FRAGMENT_DENSITY_MAP_DYNAMIC_BIT_EXT:
            *out += "VK_IMAGE_VIEW_CREATE_FRAGMENT_DENSITY_MAP_DYNAMIC_BIT_EXT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkExternalMemoryHandleTypeFlagBitsNV(std::string* out, uint32_t enum_uint32)
{
    VkExternalMemoryHandleTypeFlagBitsNV e = static_cast<VkExternalMemoryHandleTypeFlagBitsNV>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_NV:
            *out += "VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_NV";
            return;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_BIT_NV:
            *out += "VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_BIT_NV";
            return;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_NV:
            *out += "VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_NV";
            return;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_KMT_BIT_NV:
            *out += "VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_KMT_BIT_NV";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkQueueGlobalPriorityEXT(std::string* out, uint32_t enum_uint32)
{
    VkQueueGlobalPriorityEXT e = static_cast<VkQueueGlobalPriorityEXT>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_QUEUE_GLOBAL_PRIORITY_LOW_EXT:
            *out += "VK_QUEUE_GLOBAL_PRIORITY_LOW_EXT";
            return;
        case VK_QUEUE_GLOBAL_PRIORITY_HIGH_EXT:
            *out += "VK_QUEUE_GLOBAL_PRIORITY_HIGH_EXT";
            return;
        case VK_QUEUE_GLOBAL_PRIORITY_REALTIME_EXT:
            *out += "VK_QUEUE_GLOBAL_PRIORITY_REALTIME_EXT";
            return;
        case VK_QUEUE_GLOBAL_PRIORITY_MEDIUM_EXT:
            *out += "VK_QUEUE_GLOBAL_PRIORITY_MEDIUM_EXT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkTessellationDomainOrigin(std::string* out, uint32_t enum_uint32)
{
    VkTessellationDomainOrigin e = static_cast<VkTessellationDomainOrigin>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_TESSELLATION_DOMAIN_ORIGIN_LOWER_LEFT:
            *out += "VK_TESSELLATION_DOMAIN_ORIGIN_LOWER_LEFT";
            return;
        case VK_TESSELLATION_DOMAIN_ORIGIN_UPPER_LEFT:
            *out += "VK_TESSELLATION_DOMAIN_ORIGIN_UPPER_LEFT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkSemaphoreImportFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkSemaphoreImportFlagBits e = static_cast<VkSemaphoreImportFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_SEMAPHORE_IMPORT_TEMPORARY_BIT:
            *out += "VK_SEMAPHORE_IMPORT_TEMPORARY_BIT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkPolygonMode(std::string* out, uint32_t enum_uint32)
{
    VkPolygonMode e = static_cast<VkPolygonMode>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_POLYGON_MODE_FILL_RECTANGLE_NV:
            *out += "VK_POLYGON_MODE_FILL_RECTANGLE_NV";
            return;
        case VK_POLYGON_MODE_LINE:
            *out += "VK_POLYGON_MODE_LINE";
            return;
        case VK_POLYGON_MODE_POINT:
            *out += "VK_POLYGON_MODE_POINT";
            return;
        case VK_POLYGON_MODE_FILL:
            *out += "VK_POLYGON_MODE_FILL";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkSampleCountFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkSampleCountFlagBits e = static_cast<VkSampleCountFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_SAMPLE_COUNT_1_BIT:
            *out += "VK_SAMPLE_COUNT_1_BIT";
            return;
        case VK_SAMPLE_COUNT_32_BIT:
            *out += "VK_SAMPLE_COUNT_32_BIT";
            return;
        case VK_SAMPLE_COUNT_2_BIT:
            *out += "VK_SAMPLE_COUNT_2_BIT";
            return;
        case VK_SAMPLE_COUNT_4_BIT:
            *out += "VK_SAMPLE_COUNT_4_BIT";
            return;
        case VK_SAMPLE_COUNT_16_BIT:
            *out += "VK_SAMPLE_COUNT_16_BIT";
            return;
        case VK_SAMPLE_COUNT_8_BIT:
            *out += "VK_SAMPLE_COUNT_8_BIT";
            return;
        case VK_SAMPLE_COUNT_64_BIT:
            *out += "VK_SAMPLE_COUNT_64_BIT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkFenceImportFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkFenceImportFlagBits e = static_cast<VkFenceImportFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_FENCE_IMPORT_TEMPORARY_BIT:
            *out += "VK_FENCE_IMPORT_TEMPORARY_BIT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkPipelineCreationFeedbackFlagBitsEXT(std::string* out, uint32_t enum_uint32)
{
    VkPipelineCreationFeedbackFlagBitsEXT e = static_cast<VkPipelineCreationFeedbackFlagBitsEXT>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_PIPELINE_CREATION_FEEDBACK_APPLICATION_PIPELINE_CACHE_HIT_BIT_EXT:
            *out += "VK_PIPELINE_CREATION_FEEDBACK_APPLICATION_PIPELINE_CACHE_HIT_BIT_EXT";
            return;
        case VK_PIPELINE_CREATION_FEEDBACK_BASE_PIPELINE_ACCELERATION_BIT_EXT:
            *out += "VK_PIPELINE_CREATION_FEEDBACK_BASE_PIPELINE_ACCELERATION_BIT_EXT";
            return;
        case VK_PIPELINE_CREATION_FEEDBACK_VALID_BIT_EXT:
            *out += "VK_PIPELINE_CREATION_FEEDBACK_VALID_BIT_EXT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkPipelineCreateFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkPipelineCreateFlagBits e = static_cast<VkPipelineCreateFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_PIPELINE_CREATE_CAPTURE_STATISTICS_BIT_KHR:
            *out += "VK_PIPELINE_CREATE_CAPTURE_STATISTICS_BIT_KHR";
            return;
        case VK_PIPELINE_CREATE_DISABLE_OPTIMIZATION_BIT:
            *out += "VK_PIPELINE_CREATE_DISABLE_OPTIMIZATION_BIT";
            return;
        case VK_PIPELINE_CREATE_DERIVATIVE_BIT:
            *out += "VK_PIPELINE_CREATE_DERIVATIVE_BIT";
            return;
        case VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT:
            *out += "VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT";
            return;
        case VK_PIPELINE_CREATE_CAPTURE_INTERNAL_REPRESENTATIONS_BIT_KHR:
            *out += "VK_PIPELINE_CREATE_CAPTURE_INTERNAL_REPRESENTATIONS_BIT_KHR";
            return;
        case VK_PIPELINE_CREATE_DISPATCH_BASE:
            *out += "VK_PIPELINE_CREATE_DISPATCH_BASE";
            return;
        case VK_PIPELINE_CREATE_ALLOW_DERIVATIVES_BIT:
            *out += "VK_PIPELINE_CREATE_ALLOW_DERIVATIVES_BIT";
            return;
        case VK_PIPELINE_CREATE_DEFER_COMPILE_BIT_NV:
            *out += "VK_PIPELINE_CREATE_DEFER_COMPILE_BIT_NV";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkDisplayEventTypeEXT(std::string* out, uint32_t enum_uint32)
{
    VkDisplayEventTypeEXT e = static_cast<VkDisplayEventTypeEXT>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_DISPLAY_EVENT_TYPE_FIRST_PIXEL_OUT_EXT:
            *out += "VK_DISPLAY_EVENT_TYPE_FIRST_PIXEL_OUT_EXT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkDeviceQueueCreateFlagBits(std::string* out, uint32_t enum_uint32)
{
    VkDeviceQueueCreateFlagBits e = static_cast<VkDeviceQueueCreateFlagBits>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_DEVICE_QUEUE_CREATE_PROTECTED_BIT:
            *out += "VK_DEVICE_QUEUE_CREATE_PROTECTED_BIT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkFormat(std::string* out, uint32_t enum_uint32)
{
    VkFormat e = static_cast<VkFormat>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_FORMAT_R16G16B16_UINT:
            *out += "VK_FORMAT_R16G16B16_UINT";
            return;
        case VK_FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16:
            *out += "VK_FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16";
            return;
        case VK_FORMAT_G16_B16R16_2PLANE_422_UNORM:
            *out += "VK_FORMAT_G16_B16R16_2PLANE_422_UNORM";
            return;
        case VK_FORMAT_A2R10G10B10_SINT_PACK32:
            *out += "VK_FORMAT_A2R10G10B10_SINT_PACK32";
            return;
        case VK_FORMAT_R32G32B32A32_SINT:
            *out += "VK_FORMAT_R32G32B32A32_SINT";
            return;
        case VK_FORMAT_R8G8_UNORM:
            *out += "VK_FORMAT_R8G8_UNORM";
            return;
        case VK_FORMAT_R8G8B8_UNORM:
            *out += "VK_FORMAT_R8G8B8_UNORM";
            return;
        case VK_FORMAT_BC1_RGBA_SRGB_BLOCK:
            *out += "VK_FORMAT_BC1_RGBA_SRGB_BLOCK";
            return;
        case VK_FORMAT_R5G6B5_UNORM_PACK16:
            *out += "VK_FORMAT_R5G6B5_UNORM_PACK16";
            return;
        case VK_FORMAT_R8G8B8A8_SRGB:
            *out += "VK_FORMAT_R8G8B8A8_SRGB";
            return;
        case VK_FORMAT_E5B9G9R9_UFLOAT_PACK32:
            *out += "VK_FORMAT_E5B9G9R9_UFLOAT_PACK32";
            return;
        case VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16:
            *out += "VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16";
            return;
        case VK_FORMAT_R12X4G12X4_UNORM_2PACK16:
            *out += "VK_FORMAT_R12X4G12X4_UNORM_2PACK16";
            return;
        case VK_FORMAT_R8_SINT:
            *out += "VK_FORMAT_R8_SINT";
            return;
        case VK_FORMAT_R64G64_SINT:
            *out += "VK_FORMAT_R64G64_SINT";
            return;
        case VK_FORMAT_EAC_R11G11_SNORM_BLOCK:
            *out += "VK_FORMAT_EAC_R11G11_SNORM_BLOCK";
            return;
        case VK_FORMAT_ASTC_4x4_UNORM_BLOCK:
            *out += "VK_FORMAT_ASTC_4x4_UNORM_BLOCK";
            return;
        case VK_FORMAT_B8G8R8A8_USCALED:
            *out += "VK_FORMAT_B8G8R8A8_USCALED";
            return;
        case VK_FORMAT_EAC_R11_UNORM_BLOCK:
            *out += "VK_FORMAT_EAC_R11_UNORM_BLOCK";
            return;
        case VK_FORMAT_B16G16R16G16_422_UNORM:
            *out += "VK_FORMAT_B16G16R16G16_422_UNORM";
            return;
        case VK_FORMAT_R64_SINT:
            *out += "VK_FORMAT_R64_SINT";
            return;
        case VK_FORMAT_A2R10G10B10_SNORM_PACK32:
            *out += "VK_FORMAT_A2R10G10B10_SNORM_PACK32";
            return;
        case VK_FORMAT_ASTC_10x5_UNORM_BLOCK:
            *out += "VK_FORMAT_ASTC_10x5_UNORM_BLOCK";
            return;
        case VK_FORMAT_R16G16B16_SINT:
            *out += "VK_FORMAT_R16G16B16_SINT";
            return;
        case VK_FORMAT_R64G64B64_UINT:
            *out += "VK_FORMAT_R64G64B64_UINT";
            return;
        case VK_FORMAT_R16G16B16A16_SSCALED:
            *out += "VK_FORMAT_R16G16B16A16_SSCALED";
            return;
        case VK_FORMAT_R8G8_SRGB:
            *out += "VK_FORMAT_R8G8_SRGB";
            return;
        case VK_FORMAT_PVRTC1_4BPP_UNORM_BLOCK_IMG:
            *out += "VK_FORMAT_PVRTC1_4BPP_UNORM_BLOCK_IMG";
            return;
        case VK_FORMAT_ASTC_8x6_SFLOAT_BLOCK_EXT:
            *out += "VK_FORMAT_ASTC_8x6_SFLOAT_BLOCK_EXT";
            return;
        case VK_FORMAT_R16G16B16A16_UNORM:
            *out += "VK_FORMAT_R16G16B16A16_UNORM";
            return;
        case VK_FORMAT_A8B8G8R8_SSCALED_PACK32:
            *out += "VK_FORMAT_A8B8G8R8_SSCALED_PACK32";
            return;
        case VK_FORMAT_ASTC_12x10_UNORM_BLOCK:
            *out += "VK_FORMAT_ASTC_12x10_UNORM_BLOCK";
            return;
        case VK_FORMAT_BC3_SRGB_BLOCK:
            *out += "VK_FORMAT_BC3_SRGB_BLOCK";
            return;
        case VK_FORMAT_B5G6R5_UNORM_PACK16:
            *out += "VK_FORMAT_B5G6R5_UNORM_PACK16";
            return;
        case VK_FORMAT_R32_UINT:
            *out += "VK_FORMAT_R32_UINT";
            return;
        case VK_FORMAT_ASTC_8x8_SRGB_BLOCK:
            *out += "VK_FORMAT_ASTC_8x8_SRGB_BLOCK";
            return;
        case VK_FORMAT_ASTC_12x12_SFLOAT_BLOCK_EXT:
            *out += "VK_FORMAT_ASTC_12x12_SFLOAT_BLOCK_EXT";
            return;
        case VK_FORMAT_G16_B16_R16_3PLANE_422_UNORM:
            *out += "VK_FORMAT_G16_B16_R16_3PLANE_422_UNORM";
            return;
        case VK_FORMAT_R16_SSCALED:
            *out += "VK_FORMAT_R16_SSCALED";
            return;
        case VK_FORMAT_R32G32B32A32_SFLOAT:
            *out += "VK_FORMAT_R32G32B32A32_SFLOAT";
            return;
        case VK_FORMAT_G16_B16R16_2PLANE_420_UNORM:
            *out += "VK_FORMAT_G16_B16R16_2PLANE_420_UNORM";
            return;
        case VK_FORMAT_ASTC_6x6_UNORM_BLOCK:
            *out += "VK_FORMAT_ASTC_6x6_UNORM_BLOCK";
            return;
        case VK_FORMAT_B10G11R11_UFLOAT_PACK32:
            *out += "VK_FORMAT_B10G11R11_UFLOAT_PACK32";
            return;
        case VK_FORMAT_ASTC_5x5_SFLOAT_BLOCK_EXT:
            *out += "VK_FORMAT_ASTC_5x5_SFLOAT_BLOCK_EXT";
            return;
        case VK_FORMAT_A2B10G10R10_SNORM_PACK32:
            *out += "VK_FORMAT_A2B10G10R10_SNORM_PACK32";
            return;
        case VK_FORMAT_R8G8B8A8_SSCALED:
            *out += "VK_FORMAT_R8G8B8A8_SSCALED";
            return;
        case VK_FORMAT_R5G5B5A1_UNORM_PACK16:
            *out += "VK_FORMAT_R5G5B5A1_UNORM_PACK16";
            return;
        case VK_FORMAT_R8G8B8_UINT:
            *out += "VK_FORMAT_R8G8B8_UINT";
            return;
        case VK_FORMAT_R16_SINT:
            *out += "VK_FORMAT_R16_SINT";
            return;
        case VK_FORMAT_A2R10G10B10_UINT_PACK32:
            *out += "VK_FORMAT_A2R10G10B10_UINT_PACK32";
            return;
        case VK_FORMAT_R64_UINT:
            *out += "VK_FORMAT_R64_UINT";
            return;
        case VK_FORMAT_ASTC_10x8_UNORM_BLOCK:
            *out += "VK_FORMAT_ASTC_10x8_UNORM_BLOCK";
            return;
        case VK_FORMAT_R8G8B8A8_SNORM:
            *out += "VK_FORMAT_R8G8B8A8_SNORM";
            return;
        case VK_FORMAT_BC4_UNORM_BLOCK:
            *out += "VK_FORMAT_BC4_UNORM_BLOCK";
            return;
        case VK_FORMAT_R8G8B8A8_USCALED:
            *out += "VK_FORMAT_R8G8B8A8_USCALED";
            return;
        case VK_FORMAT_A2B10G10R10_SINT_PACK32:
            *out += "VK_FORMAT_A2B10G10R10_SINT_PACK32";
            return;
        case VK_FORMAT_R16G16B16A16_SFLOAT:
            *out += "VK_FORMAT_R16G16B16A16_SFLOAT";
            return;
        case VK_FORMAT_B8G8R8_SRGB:
            *out += "VK_FORMAT_B8G8R8_SRGB";
            return;
        case VK_FORMAT_G8_B8_R8_3PLANE_422_UNORM:
            *out += "VK_FORMAT_G8_B8_R8_3PLANE_422_UNORM";
            return;
        case VK_FORMAT_B8G8R8A8_UNORM:
            *out += "VK_FORMAT_B8G8R8A8_UNORM";
            return;
        case VK_FORMAT_R8G8B8_SRGB:
            *out += "VK_FORMAT_R8G8B8_SRGB";
            return;
        case VK_FORMAT_B8G8R8_UNORM:
            *out += "VK_FORMAT_B8G8R8_UNORM";
            return;
        case VK_FORMAT_ETC2_R8G8B8_SRGB_BLOCK:
            *out += "VK_FORMAT_ETC2_R8G8B8_SRGB_BLOCK";
            return;
        case VK_FORMAT_ASTC_5x4_SFLOAT_BLOCK_EXT:
            *out += "VK_FORMAT_ASTC_5x4_SFLOAT_BLOCK_EXT";
            return;
        case VK_FORMAT_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16:
            *out += "VK_FORMAT_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16";
            return;
        case VK_FORMAT_PVRTC2_2BPP_UNORM_BLOCK_IMG:
            *out += "VK_FORMAT_PVRTC2_2BPP_UNORM_BLOCK_IMG";
            return;
        case VK_FORMAT_R16G16B16_USCALED:
            *out += "VK_FORMAT_R16G16B16_USCALED";
            return;
        case VK_FORMAT_D24_UNORM_S8_UINT:
            *out += "VK_FORMAT_D24_UNORM_S8_UINT";
            return;
        case VK_FORMAT_R16G16B16A16_SINT:
            *out += "VK_FORMAT_R16G16B16A16_SINT";
            return;
        case VK_FORMAT_A8B8G8R8_UNORM_PACK32:
            *out += "VK_FORMAT_A8B8G8R8_UNORM_PACK32";
            return;
        case VK_FORMAT_BC2_SRGB_BLOCK:
            *out += "VK_FORMAT_BC2_SRGB_BLOCK";
            return;
        case VK_FORMAT_R32G32B32_UINT:
            *out += "VK_FORMAT_R32G32B32_UINT";
            return;
        case VK_FORMAT_ASTC_10x10_UNORM_BLOCK:
            *out += "VK_FORMAT_ASTC_10x10_UNORM_BLOCK";
            return;
        case VK_FORMAT_B4G4R4A4_UNORM_PACK16:
            *out += "VK_FORMAT_B4G4R4A4_UNORM_PACK16";
            return;
        case VK_FORMAT_ASTC_10x8_SFLOAT_BLOCK_EXT:
            *out += "VK_FORMAT_ASTC_10x8_SFLOAT_BLOCK_EXT";
            return;
        case VK_FORMAT_R8G8B8A8_SINT:
            *out += "VK_FORMAT_R8G8B8A8_SINT";
            return;
        case VK_FORMAT_G16_B16_R16_3PLANE_420_UNORM:
            *out += "VK_FORMAT_G16_B16_R16_3PLANE_420_UNORM";
            return;
        case VK_FORMAT_R32G32B32_SINT:
            *out += "VK_FORMAT_R32G32B32_SINT";
            return;
        case VK_FORMAT_R4G4_UNORM_PACK8:
            *out += "VK_FORMAT_R4G4_UNORM_PACK8";
            return;
        case VK_FORMAT_R16G16_UNORM:
            *out += "VK_FORMAT_R16G16_UNORM";
            return;
        case VK_FORMAT_ETC2_R8G8B8A8_UNORM_BLOCK:
            *out += "VK_FORMAT_ETC2_R8G8B8A8_UNORM_BLOCK";
            return;
        case VK_FORMAT_ASTC_8x6_UNORM_BLOCK:
            *out += "VK_FORMAT_ASTC_8x6_UNORM_BLOCK";
            return;
        case VK_FORMAT_B8G8R8_SNORM:
            *out += "VK_FORMAT_B8G8R8_SNORM";
            return;
        case VK_FORMAT_R64G64B64_SINT:
            *out += "VK_FORMAT_R64G64B64_SINT";
            return;
        case VK_FORMAT_B8G8R8_USCALED:
            *out += "VK_FORMAT_B8G8R8_USCALED";
            return;
        case VK_FORMAT_ETC2_R8G8B8A1_UNORM_BLOCK:
            *out += "VK_FORMAT_ETC2_R8G8B8A1_UNORM_BLOCK";
            return;
        case VK_FORMAT_R64G64B64A64_SINT:
            *out += "VK_FORMAT_R64G64B64A64_SINT";
            return;
        case VK_FORMAT_R10X6_UNORM_PACK16:
            *out += "VK_FORMAT_R10X6_UNORM_PACK16";
            return;
        case VK_FORMAT_G8_B8_R8_3PLANE_420_UNORM:
            *out += "VK_FORMAT_G8_B8_R8_3PLANE_420_UNORM";
            return;
        case VK_FORMAT_ASTC_12x12_UNORM_BLOCK:
            *out += "VK_FORMAT_ASTC_12x12_UNORM_BLOCK";
            return;
        case VK_FORMAT_R64_SFLOAT:
            *out += "VK_FORMAT_R64_SFLOAT";
            return;
        case VK_FORMAT_R10X6G10X6B10X6A10X6_UNORM_4PACK16:
            *out += "VK_FORMAT_R10X6G10X6B10X6A10X6_UNORM_4PACK16";
            return;
        case VK_FORMAT_R64G64_UINT:
            *out += "VK_FORMAT_R64G64_UINT";
            return;
        case VK_FORMAT_G8_B8R8_2PLANE_420_UNORM:
            *out += "VK_FORMAT_G8_B8R8_2PLANE_420_UNORM";
            return;
        case VK_FORMAT_ASTC_4x4_SRGB_BLOCK:
            *out += "VK_FORMAT_ASTC_4x4_SRGB_BLOCK";
            return;
        case VK_FORMAT_R4G4B4A4_UNORM_PACK16:
            *out += "VK_FORMAT_R4G4B4A4_UNORM_PACK16";
            return;
        case VK_FORMAT_R8_SRGB:
            *out += "VK_FORMAT_R8_SRGB";
            return;
        case VK_FORMAT_R16G16_SFLOAT:
            *out += "VK_FORMAT_R16G16_SFLOAT";
            return;
        case VK_FORMAT_A2B10G10R10_UINT_PACK32:
            *out += "VK_FORMAT_A2B10G10R10_UINT_PACK32";
            return;
        case VK_FORMAT_B8G8R8A8_SRGB:
            *out += "VK_FORMAT_B8G8R8A8_SRGB";
            return;
        case VK_FORMAT_BC3_UNORM_BLOCK:
            *out += "VK_FORMAT_BC3_UNORM_BLOCK";
            return;
        case VK_FORMAT_BC6H_SFLOAT_BLOCK:
            *out += "VK_FORMAT_BC6H_SFLOAT_BLOCK";
            return;
        case VK_FORMAT_ASTC_10x10_SRGB_BLOCK:
            *out += "VK_FORMAT_ASTC_10x10_SRGB_BLOCK";
            return;
        case VK_FORMAT_R8G8B8_SINT:
            *out += "VK_FORMAT_R8G8B8_SINT";
            return;
        case VK_FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16:
            *out += "VK_FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16";
            return;
        case VK_FORMAT_R16_SNORM:
            *out += "VK_FORMAT_R16_SNORM";
            return;
        case VK_FORMAT_G8_B8R8_2PLANE_422_UNORM:
            *out += "VK_FORMAT_G8_B8R8_2PLANE_422_UNORM";
            return;
        case VK_FORMAT_R64G64B64A64_UINT:
            *out += "VK_FORMAT_R64G64B64A64_UINT";
            return;
        case VK_FORMAT_BC1_RGB_SRGB_BLOCK:
            *out += "VK_FORMAT_BC1_RGB_SRGB_BLOCK";
            return;
        case VK_FORMAT_ASTC_10x6_UNORM_BLOCK:
            *out += "VK_FORMAT_ASTC_10x6_UNORM_BLOCK";
            return;
        case VK_FORMAT_B8G8R8_UINT:
            *out += "VK_FORMAT_B8G8R8_UINT";
            return;
        case VK_FORMAT_R8G8B8_SNORM:
            *out += "VK_FORMAT_R8G8B8_SNORM";
            return;
        case VK_FORMAT_ASTC_5x4_SRGB_BLOCK:
            *out += "VK_FORMAT_ASTC_5x4_SRGB_BLOCK";
            return;
        case VK_FORMAT_R64G64B64A64_SFLOAT:
            *out += "VK_FORMAT_R64G64B64A64_SFLOAT";
            return;
        case VK_FORMAT_D32_SFLOAT_S8_UINT:
            *out += "VK_FORMAT_D32_SFLOAT_S8_UINT";
            return;
        case VK_FORMAT_ASTC_8x6_SRGB_BLOCK:
            *out += "VK_FORMAT_ASTC_8x6_SRGB_BLOCK";
            return;
        case VK_FORMAT_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16:
            *out += "VK_FORMAT_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16";
            return;
        case VK_FORMAT_R8G8_SSCALED:
            *out += "VK_FORMAT_R8G8_SSCALED";
            return;
        case VK_FORMAT_R16G16B16_SSCALED:
            *out += "VK_FORMAT_R16G16B16_SSCALED";
            return;
        case VK_FORMAT_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16:
            *out += "VK_FORMAT_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16";
            return;
        case VK_FORMAT_ETC2_R8G8B8A8_SRGB_BLOCK:
            *out += "VK_FORMAT_ETC2_R8G8B8A8_SRGB_BLOCK";
            return;
        case VK_FORMAT_ASTC_10x5_SFLOAT_BLOCK_EXT:
            *out += "VK_FORMAT_ASTC_10x5_SFLOAT_BLOCK_EXT";
            return;
        case VK_FORMAT_R8G8B8A8_UINT:
            *out += "VK_FORMAT_R8G8B8A8_UINT";
            return;
        case VK_FORMAT_BC5_SNORM_BLOCK:
            *out += "VK_FORMAT_BC5_SNORM_BLOCK";
            return;
        case VK_FORMAT_ASTC_6x6_SRGB_BLOCK:
            *out += "VK_FORMAT_ASTC_6x6_SRGB_BLOCK";
            return;
        case VK_FORMAT_B8G8R8A8_SNORM:
            *out += "VK_FORMAT_B8G8R8A8_SNORM";
            return;
        case VK_FORMAT_A8B8G8R8_USCALED_PACK32:
            *out += "VK_FORMAT_A8B8G8R8_USCALED_PACK32";
            return;
        case VK_FORMAT_A2B10G10R10_UNORM_PACK32:
            *out += "VK_FORMAT_A2B10G10R10_UNORM_PACK32";
            return;
        case VK_FORMAT_R16_UNORM:
            *out += "VK_FORMAT_R16_UNORM";
            return;
        case VK_FORMAT_R32G32_SINT:
            *out += "VK_FORMAT_R32G32_SINT";
            return;
        case VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16:
            *out += "VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16";
            return;
        case VK_FORMAT_R64G64_SFLOAT:
            *out += "VK_FORMAT_R64G64_SFLOAT";
            return;
        case VK_FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16:
            *out += "VK_FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16";
            return;
        case VK_FORMAT_PVRTC2_4BPP_UNORM_BLOCK_IMG:
            *out += "VK_FORMAT_PVRTC2_4BPP_UNORM_BLOCK_IMG";
            return;
        case VK_FORMAT_A1R5G5B5_UNORM_PACK16:
            *out += "VK_FORMAT_A1R5G5B5_UNORM_PACK16";
            return;
        case VK_FORMAT_R8G8B8_SSCALED:
            *out += "VK_FORMAT_R8G8B8_SSCALED";
            return;
        case VK_FORMAT_BC1_RGB_UNORM_BLOCK:
            *out += "VK_FORMAT_BC1_RGB_UNORM_BLOCK";
            return;
        case VK_FORMAT_D32_SFLOAT:
            *out += "VK_FORMAT_D32_SFLOAT";
            return;
        case VK_FORMAT_A8B8G8R8_UINT_PACK32:
            *out += "VK_FORMAT_A8B8G8R8_UINT_PACK32";
            return;
        case VK_FORMAT_ASTC_10x5_SRGB_BLOCK:
            *out += "VK_FORMAT_ASTC_10x5_SRGB_BLOCK";
            return;
        case VK_FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16:
            *out += "VK_FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16";
            return;
        case VK_FORMAT_A8B8G8R8_SRGB_PACK32:
            *out += "VK_FORMAT_A8B8G8R8_SRGB_PACK32";
            return;
        case VK_FORMAT_ASTC_12x10_SRGB_BLOCK:
            *out += "VK_FORMAT_ASTC_12x10_SRGB_BLOCK";
            return;
        case VK_FORMAT_BC4_SNORM_BLOCK:
            *out += "VK_FORMAT_BC4_SNORM_BLOCK";
            return;
        case VK_FORMAT_R32G32_SFLOAT:
            *out += "VK_FORMAT_R32G32_SFLOAT";
            return;
        case VK_FORMAT_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16:
            *out += "VK_FORMAT_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16";
            return;
        case VK_FORMAT_B8G8R8A8_SINT:
            *out += "VK_FORMAT_B8G8R8A8_SINT";
            return;
        case VK_FORMAT_R16G16_SINT:
            *out += "VK_FORMAT_R16G16_SINT";
            return;
        case VK_FORMAT_EAC_R11_SNORM_BLOCK:
            *out += "VK_FORMAT_EAC_R11_SNORM_BLOCK";
            return;
        case VK_FORMAT_ETC2_R8G8B8_UNORM_BLOCK:
            *out += "VK_FORMAT_ETC2_R8G8B8_UNORM_BLOCK";
            return;
        case VK_FORMAT_B8G8R8A8_SSCALED:
            *out += "VK_FORMAT_B8G8R8A8_SSCALED";
            return;
        case VK_FORMAT_ASTC_8x5_SFLOAT_BLOCK_EXT:
            *out += "VK_FORMAT_ASTC_8x5_SFLOAT_BLOCK_EXT";
            return;
        case VK_FORMAT_R16G16B16A16_SNORM:
            *out += "VK_FORMAT_R16G16B16A16_SNORM";
            return;
        case VK_FORMAT_ASTC_8x5_SRGB_BLOCK:
            *out += "VK_FORMAT_ASTC_8x5_SRGB_BLOCK";
            return;
        case VK_FORMAT_R8G8B8_USCALED:
            *out += "VK_FORMAT_R8G8B8_USCALED";
            return;
        case VK_FORMAT_R32_SFLOAT:
            *out += "VK_FORMAT_R32_SFLOAT";
            return;
        case VK_FORMAT_D16_UNORM_S8_UINT:
            *out += "VK_FORMAT_D16_UNORM_S8_UINT";
            return;
        case VK_FORMAT_ASTC_5x5_SRGB_BLOCK:
            *out += "VK_FORMAT_ASTC_5x5_SRGB_BLOCK";
            return;
        case VK_FORMAT_BC2_UNORM_BLOCK:
            *out += "VK_FORMAT_BC2_UNORM_BLOCK";
            return;
        case VK_FORMAT_R8G8_UINT:
            *out += "VK_FORMAT_R8G8_UINT";
            return;
        case VK_FORMAT_R8_UNORM:
            *out += "VK_FORMAT_R8_UNORM";
            return;
        case VK_FORMAT_R8G8_SINT:
            *out += "VK_FORMAT_R8G8_SINT";
            return;
        case VK_FORMAT_A8B8G8R8_SNORM_PACK32:
            *out += "VK_FORMAT_A8B8G8R8_SNORM_PACK32";
            return;
        case VK_FORMAT_R16_UINT:
            *out += "VK_FORMAT_R16_UINT";
            return;
        case VK_FORMAT_R32G32B32_SFLOAT:
            *out += "VK_FORMAT_R32G32B32_SFLOAT";
            return;
        case VK_FORMAT_R8G8_SNORM:
            *out += "VK_FORMAT_R8G8_SNORM";
            return;
        case VK_FORMAT_R32G32B32A32_UINT:
            *out += "VK_FORMAT_R32G32B32A32_UINT";
            return;
        case VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16:
            *out += "VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16";
            return;
        case VK_FORMAT_ASTC_6x5_SFLOAT_BLOCK_EXT:
            *out += "VK_FORMAT_ASTC_6x5_SFLOAT_BLOCK_EXT";
            return;
        case VK_FORMAT_R8_UINT:
            *out += "VK_FORMAT_R8_UINT";
            return;
        case VK_FORMAT_BC5_UNORM_BLOCK:
            *out += "VK_FORMAT_BC5_UNORM_BLOCK";
            return;
        case VK_FORMAT_ASTC_10x6_SRGB_BLOCK:
            *out += "VK_FORMAT_ASTC_10x6_SRGB_BLOCK";
            return;
        case VK_FORMAT_R32G32_UINT:
            *out += "VK_FORMAT_R32G32_UINT";
            return;
        case VK_FORMAT_R16G16_UINT:
            *out += "VK_FORMAT_R16G16_UINT";
            return;
        case VK_FORMAT_A2R10G10B10_UNORM_PACK32:
            *out += "VK_FORMAT_A2R10G10B10_UNORM_PACK32";
            return;
        case VK_FORMAT_ASTC_8x8_SFLOAT_BLOCK_EXT:
            *out += "VK_FORMAT_ASTC_8x8_SFLOAT_BLOCK_EXT";
            return;
        case VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16:
            *out += "VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16";
            return;
        case VK_FORMAT_BC6H_UFLOAT_BLOCK:
            *out += "VK_FORMAT_BC6H_UFLOAT_BLOCK";
            return;
        case VK_FORMAT_UNDEFINED:
            *out += "VK_FORMAT_UNDEFINED";
            return;
        case VK_FORMAT_ASTC_8x8_UNORM_BLOCK:
            *out += "VK_FORMAT_ASTC_8x8_UNORM_BLOCK";
            return;
        case VK_FORMAT_R16G16B16A16_UINT:
            *out += "VK_FORMAT_R16G16B16A16_UINT";
            return;
        case VK_FORMAT_R12X4_UNORM_PACK16:
            *out += "VK_FORMAT_R12X4_UNORM_PACK16";
            return;
        case VK_FORMAT_R8G8_USCALED:
            *out += "VK_FORMAT_R8G8_USCALED";
            return;
        case VK_FORMAT_X8_D24_UNORM_PACK32:
            *out += "VK_FORMAT_X8_D24_UNORM_PACK32";
            return;
        case VK_FORMAT_BC7_UNORM_BLOCK:
            *out += "VK_FORMAT_BC7_UNORM_BLOCK";
            return;
        case VK_FORMAT_R16G16B16_SFLOAT:
            *out += "VK_FORMAT_R16G16B16_SFLOAT";
            return;
        case VK_FORMAT_R8_USCALED:
            *out += "VK_FORMAT_R8_USCALED";
            return;
        case VK_FORMAT_ASTC_10x10_SFLOAT_BLOCK_EXT:
            *out += "VK_FORMAT_ASTC_10x10_SFLOAT_BLOCK_EXT";
            return;
        case VK_FORMAT_R8_SSCALED:
            *out += "VK_FORMAT_R8_SSCALED";
            return;
        case VK_FORMAT_R16G16B16_UNORM:
            *out += "VK_FORMAT_R16G16B16_UNORM";
            return;
        case VK_FORMAT_BC7_SRGB_BLOCK:
            *out += "VK_FORMAT_BC7_SRGB_BLOCK";
            return;
        case VK_FORMAT_BC1_RGBA_UNORM_BLOCK:
            *out += "VK_FORMAT_BC1_RGBA_UNORM_BLOCK";
            return;
        case VK_FORMAT_A2B10G10R10_SSCALED_PACK32:
            *out += "VK_FORMAT_A2B10G10R10_SSCALED_PACK32";
            return;
        case VK_FORMAT_B8G8R8_SINT:
            *out += "VK_FORMAT_B8G8R8_SINT";
            return;
        case VK_FORMAT_B8G8R8A8_UINT:
            *out += "VK_FORMAT_B8G8R8A8_UINT";
            return;
        case VK_FORMAT_R16_USCALED:
            *out += "VK_FORMAT_R16_USCALED";
            return;
        case VK_FORMAT_S8_UINT:
            *out += "VK_FORMAT_S8_UINT";
            return;
        case VK_FORMAT_PVRTC1_4BPP_SRGB_BLOCK_IMG:
            *out += "VK_FORMAT_PVRTC1_4BPP_SRGB_BLOCK_IMG";
            return;
        case VK_FORMAT_PVRTC2_2BPP_SRGB_BLOCK_IMG:
            *out += "VK_FORMAT_PVRTC2_2BPP_SRGB_BLOCK_IMG";
            return;
        case VK_FORMAT_B8G8R8_SSCALED:
            *out += "VK_FORMAT_B8G8R8_SSCALED";
            return;
        case VK_FORMAT_A2B10G10R10_USCALED_PACK32:
            *out += "VK_FORMAT_A2B10G10R10_USCALED_PACK32";
            return;
        case VK_FORMAT_PVRTC1_2BPP_UNORM_BLOCK_IMG:
            *out += "VK_FORMAT_PVRTC1_2BPP_UNORM_BLOCK_IMG";
            return;
        case VK_FORMAT_R8G8B8A8_UNORM:
            *out += "VK_FORMAT_R8G8B8A8_UNORM";
            return;
        case VK_FORMAT_ASTC_8x5_UNORM_BLOCK:
            *out += "VK_FORMAT_ASTC_8x5_UNORM_BLOCK";
            return;
        case VK_FORMAT_ASTC_4x4_SFLOAT_BLOCK_EXT:
            *out += "VK_FORMAT_ASTC_4x4_SFLOAT_BLOCK_EXT";
            return;
        case VK_FORMAT_ASTC_12x10_SFLOAT_BLOCK_EXT:
            *out += "VK_FORMAT_ASTC_12x10_SFLOAT_BLOCK_EXT";
            return;
        case VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16:
            *out += "VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16";
            return;
        case VK_FORMAT_R8_SNORM:
            *out += "VK_FORMAT_R8_SNORM";
            return;
        case VK_FORMAT_R64G64B64_SFLOAT:
            *out += "VK_FORMAT_R64G64B64_SFLOAT";
            return;
        case VK_FORMAT_G8B8G8R8_422_UNORM:
            *out += "VK_FORMAT_G8B8G8R8_422_UNORM";
            return;
        case VK_FORMAT_ASTC_6x5_SRGB_BLOCK:
            *out += "VK_FORMAT_ASTC_6x5_SRGB_BLOCK";
            return;
        case VK_FORMAT_G16B16G16R16_422_UNORM:
            *out += "VK_FORMAT_G16B16G16R16_422_UNORM";
            return;
        case VK_FORMAT_G8_B8_R8_3PLANE_444_UNORM:
            *out += "VK_FORMAT_G8_B8_R8_3PLANE_444_UNORM";
            return;
        case VK_FORMAT_R16G16_USCALED:
            *out += "VK_FORMAT_R16G16_USCALED";
            return;
        case VK_FORMAT_R16G16B16_SNORM:
            *out += "VK_FORMAT_R16G16B16_SNORM";
            return;
        case VK_FORMAT_PVRTC2_4BPP_SRGB_BLOCK_IMG:
            *out += "VK_FORMAT_PVRTC2_4BPP_SRGB_BLOCK_IMG";
            return;
        case VK_FORMAT_R10X6G10X6_UNORM_2PACK16:
            *out += "VK_FORMAT_R10X6G10X6_UNORM_2PACK16";
            return;
        case VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16:
            *out += "VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16";
            return;
        case VK_FORMAT_R16G16_SSCALED:
            *out += "VK_FORMAT_R16G16_SSCALED";
            return;
        case VK_FORMAT_PVRTC1_2BPP_SRGB_BLOCK_IMG:
            *out += "VK_FORMAT_PVRTC1_2BPP_SRGB_BLOCK_IMG";
            return;
        case VK_FORMAT_ETC2_R8G8B8A1_SRGB_BLOCK:
            *out += "VK_FORMAT_ETC2_R8G8B8A1_SRGB_BLOCK";
            return;
        case VK_FORMAT_B8G8R8G8_422_UNORM:
            *out += "VK_FORMAT_B8G8R8G8_422_UNORM";
            return;
        case VK_FORMAT_ASTC_10x6_SFLOAT_BLOCK_EXT:
            *out += "VK_FORMAT_ASTC_10x6_SFLOAT_BLOCK_EXT";
            return;
        case VK_FORMAT_ASTC_6x6_SFLOAT_BLOCK_EXT:
            *out += "VK_FORMAT_ASTC_6x6_SFLOAT_BLOCK_EXT";
            return;
        case VK_FORMAT_G16_B16_R16_3PLANE_444_UNORM:
            *out += "VK_FORMAT_G16_B16_R16_3PLANE_444_UNORM";
            return;
        case VK_FORMAT_ASTC_5x5_UNORM_BLOCK:
            *out += "VK_FORMAT_ASTC_5x5_UNORM_BLOCK";
            return;
        case VK_FORMAT_R12X4G12X4B12X4A12X4_UNORM_4PACK16:
            *out += "VK_FORMAT_R12X4G12X4B12X4A12X4_UNORM_4PACK16";
            return;
        case VK_FORMAT_B5G5R5A1_UNORM_PACK16:
            *out += "VK_FORMAT_B5G5R5A1_UNORM_PACK16";
            return;
        case VK_FORMAT_ASTC_5x4_UNORM_BLOCK:
            *out += "VK_FORMAT_ASTC_5x4_UNORM_BLOCK";
            return;
        case VK_FORMAT_A2R10G10B10_SSCALED_PACK32:
            *out += "VK_FORMAT_A2R10G10B10_SSCALED_PACK32";
            return;
        case VK_FORMAT_A2R10G10B10_USCALED_PACK32:
            *out += "VK_FORMAT_A2R10G10B10_USCALED_PACK32";
            return;
        case VK_FORMAT_R16_SFLOAT:
            *out += "VK_FORMAT_R16_SFLOAT";
            return;
        case VK_FORMAT_ASTC_6x5_UNORM_BLOCK:
            *out += "VK_FORMAT_ASTC_6x5_UNORM_BLOCK";
            return;
        case VK_FORMAT_R16G16_SNORM:
            *out += "VK_FORMAT_R16G16_SNORM";
            return;
        case VK_FORMAT_R32_SINT:
            *out += "VK_FORMAT_R32_SINT";
            return;
        case VK_FORMAT_R16G16B16A16_USCALED:
            *out += "VK_FORMAT_R16G16B16A16_USCALED";
            return;
        case VK_FORMAT_D16_UNORM:
            *out += "VK_FORMAT_D16_UNORM";
            return;
        case VK_FORMAT_ASTC_10x8_SRGB_BLOCK:
            *out += "VK_FORMAT_ASTC_10x8_SRGB_BLOCK";
            return;
        case VK_FORMAT_ASTC_12x12_SRGB_BLOCK:
            *out += "VK_FORMAT_ASTC_12x12_SRGB_BLOCK";
            return;
        case VK_FORMAT_EAC_R11G11_UNORM_BLOCK:
            *out += "VK_FORMAT_EAC_R11G11_UNORM_BLOCK";
            return;
        case VK_FORMAT_A8B8G8R8_SINT_PACK32:
            *out += "VK_FORMAT_A8B8G8R8_SINT_PACK32";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkBlendOverlapEXT(std::string* out, uint32_t enum_uint32)
{
    VkBlendOverlapEXT e = static_cast<VkBlendOverlapEXT>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_BLEND_OVERLAP_CONJOINT_EXT:
            *out += "VK_BLEND_OVERLAP_CONJOINT_EXT";
            return;
        case VK_BLEND_OVERLAP_DISJOINT_EXT:
            *out += "VK_BLEND_OVERLAP_DISJOINT_EXT";
            return;
        case VK_BLEND_OVERLAP_UNCORRELATED_EXT:
            *out += "VK_BLEND_OVERLAP_UNCORRELATED_EXT";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkObjectEntryUsageFlagBitsNVX(std::string* out, uint32_t enum_uint32)
{
    VkObjectEntryUsageFlagBitsNVX e = static_cast<VkObjectEntryUsageFlagBitsNVX>(enum_uint32);
    assert(out != nullptr); // RYZ
    switch (e)
    {
        case VK_OBJECT_ENTRY_USAGE_GRAPHICS_BIT_NVX:
            *out += "VK_OBJECT_ENTRY_USAGE_GRAPHICS_BIT_NVX";
            return;
        case VK_OBJECT_ENTRY_USAGE_COMPUTE_BIT_NVX:
            *out += "VK_OBJECT_ENTRY_USAGE_COMPUTE_BIT_NVX";
            return;
        default:
            *out += "UNKNOWN";
            return;
    }
}

void EnumToStringVkPointClippingBehaviorKHR(std::string* out, VkPointClippingBehaviorKHR e)
{
    assert(out != nullptr); // JJJ
    EnumToStringVkPointClippingBehavior(out, e);
}

void EnumToStringVkFenceImportFlagBitsKHR(std::string* out, VkFenceImportFlagBitsKHR e)
{
    assert(out != nullptr); // JJJ
    EnumToStringVkFenceImportFlagBits(out, e);
}

void EnumToStringVkExternalSemaphoreHandleTypeFlagBitsKHR(std::string* out, VkExternalSemaphoreHandleTypeFlagBitsKHR e)
{
    assert(out != nullptr); // JJJ
    EnumToStringVkExternalSemaphoreHandleTypeFlagBits(out, e);
}

void EnumToStringVkPeerMemoryFeatureFlagBitsKHR(std::string* out, VkPeerMemoryFeatureFlagBitsKHR e)
{
    assert(out != nullptr); // JJJ
    EnumToStringVkPeerMemoryFeatureFlagBits(out, e);
}

void EnumToStringVkDescriptorUpdateTemplateTypeKHR(std::string* out, VkDescriptorUpdateTemplateTypeKHR e)
{
    assert(out != nullptr); // JJJ
    EnumToStringVkDescriptorUpdateTemplateType(out, e);
}

void EnumToStringVkExternalMemoryHandleTypeFlagBitsKHR(std::string* out, VkExternalMemoryHandleTypeFlagBitsKHR e)
{
    assert(out != nullptr); // JJJ
    EnumToStringVkExternalMemoryHandleTypeFlagBits(out, e);
}

void EnumToStringVkExternalMemoryFeatureFlagBitsKHR(std::string* out, VkExternalMemoryFeatureFlagBitsKHR e)
{
    assert(out != nullptr); // JJJ
    EnumToStringVkExternalMemoryFeatureFlagBits(out, e);
}

void EnumToStringVkExternalSemaphoreFeatureFlagBitsKHR(std::string* out, VkExternalSemaphoreFeatureFlagBitsKHR e)
{
    assert(out != nullptr); // JJJ
    EnumToStringVkExternalSemaphoreFeatureFlagBits(out, e);
}

void EnumToStringVkSemaphoreImportFlagBitsKHR(std::string* out, VkSemaphoreImportFlagBitsKHR e)
{
    assert(out != nullptr); // JJJ
    EnumToStringVkSemaphoreImportFlagBits(out, e);
}

void EnumToStringVkChromaLocationKHR(std::string* out, VkChromaLocationKHR e)
{
    assert(out != nullptr); // JJJ
    EnumToStringVkChromaLocation(out, e);
}

void EnumToStringVkTessellationDomainOriginKHR(std::string* out, VkTessellationDomainOriginKHR e)
{
    assert(out != nullptr); // JJJ
    EnumToStringVkTessellationDomainOrigin(out, e);
}

void EnumToStringVkExternalFenceHandleTypeFlagBitsKHR(std::string* out, VkExternalFenceHandleTypeFlagBitsKHR e)
{
    assert(out != nullptr); // JJJ
    EnumToStringVkExternalFenceHandleTypeFlagBits(out, e);
}

void EnumToStringVkExternalFenceFeatureFlagBitsKHR(std::string* out, VkExternalFenceFeatureFlagBitsKHR e)
{
    assert(out != nullptr); // JJJ
    EnumToStringVkExternalFenceFeatureFlagBits(out, e);
}

void EnumToStringVkSamplerYcbcrModelConversionKHR(std::string* out, VkSamplerYcbcrModelConversionKHR e)
{
    assert(out != nullptr); // JJJ
    EnumToStringVkSamplerYcbcrModelConversion(out, e);
}

void EnumToStringVkSamplerYcbcrRangeKHR(std::string* out, VkSamplerYcbcrRangeKHR e)
{
    assert(out != nullptr); // JJJ
    EnumToStringVkSamplerYcbcrRange(out, e);
}

void EnumToStringVkMemoryAllocateFlagBitsKHR(std::string* out, VkMemoryAllocateFlagBitsKHR e)
{
    assert(out != nullptr); // JJJ
    EnumToStringVkMemoryAllocateFlagBits(out, e);
}

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif
