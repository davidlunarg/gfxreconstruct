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

#include "util/ascii_utils.h"
#include "vulkan/vulkan.h"
#include <string>

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)

void EnumToStringVkPipelineCacheHeaderVersion(FILE* outputFile, uint32_t enum_uint32)
{
    VkPipelineCacheHeaderVersion e = static_cast<VkPipelineCacheHeaderVersion>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_PIPELINE_CACHE_HEADER_VERSION_ONE:
            OutputString(outputFile, "VK_PIPELINE_CACHE_HEADER_VERSION_ONE");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkResult(FILE* outputFile, uint32_t enum_uint32)
{
    VkResult e = static_cast<VkResult>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SUCCESS:
            OutputString(outputFile, "VK_SUCCESS");
            return;
        case VK_NOT_READY:
            OutputString(outputFile, "VK_NOT_READY");
            return;
        case VK_TIMEOUT:
            OutputString(outputFile, "VK_TIMEOUT");
            return;
        case VK_EVENT_SET:
            OutputString(outputFile, "VK_EVENT_SET");
            return;
        case VK_EVENT_RESET:
            OutputString(outputFile, "VK_EVENT_RESET");
            return;
        case VK_INCOMPLETE:
            OutputString(outputFile, "VK_INCOMPLETE");
            return;
        case VK_ERROR_OUT_OF_HOST_MEMORY:
            OutputString(outputFile, "VK_ERROR_OUT_OF_HOST_MEMORY");
            return;
        case VK_ERROR_OUT_OF_DEVICE_MEMORY:
            OutputString(outputFile, "VK_ERROR_OUT_OF_DEVICE_MEMORY");
            return;
        case VK_ERROR_INITIALIZATION_FAILED:
            OutputString(outputFile, "VK_ERROR_INITIALIZATION_FAILED");
            return;
        case VK_ERROR_DEVICE_LOST:
            OutputString(outputFile, "VK_ERROR_DEVICE_LOST");
            return;
        case VK_ERROR_MEMORY_MAP_FAILED:
            OutputString(outputFile, "VK_ERROR_MEMORY_MAP_FAILED");
            return;
        case VK_ERROR_LAYER_NOT_PRESENT:
            OutputString(outputFile, "VK_ERROR_LAYER_NOT_PRESENT");
            return;
        case VK_ERROR_EXTENSION_NOT_PRESENT:
            OutputString(outputFile, "VK_ERROR_EXTENSION_NOT_PRESENT");
            return;
        case VK_ERROR_FEATURE_NOT_PRESENT:
            OutputString(outputFile, "VK_ERROR_FEATURE_NOT_PRESENT");
            return;
        case VK_ERROR_INCOMPATIBLE_DRIVER:
            OutputString(outputFile, "VK_ERROR_INCOMPATIBLE_DRIVER");
            return;
        case VK_ERROR_TOO_MANY_OBJECTS:
            OutputString(outputFile, "VK_ERROR_TOO_MANY_OBJECTS");
            return;
        case VK_ERROR_FORMAT_NOT_SUPPORTED:
            OutputString(outputFile, "VK_ERROR_FORMAT_NOT_SUPPORTED");
            return;
        case VK_ERROR_FRAGMENTED_POOL:
            OutputString(outputFile, "VK_ERROR_FRAGMENTED_POOL");
            return;
        case VK_ERROR_OUT_OF_POOL_MEMORY:
            OutputString(outputFile, "VK_ERROR_OUT_OF_POOL_MEMORY");
            return;
        case VK_ERROR_INVALID_EXTERNAL_HANDLE:
            OutputString(outputFile, "VK_ERROR_INVALID_EXTERNAL_HANDLE");
            return;
        case VK_ERROR_SURFACE_LOST_KHR:
            OutputString(outputFile, "VK_ERROR_SURFACE_LOST_KHR");
            return;
        case VK_ERROR_NATIVE_WINDOW_IN_USE_KHR:
            OutputString(outputFile, "VK_ERROR_NATIVE_WINDOW_IN_USE_KHR");
            return;
        case VK_SUBOPTIMAL_KHR:
            OutputString(outputFile, "VK_SUBOPTIMAL_KHR");
            return;
        case VK_ERROR_OUT_OF_DATE_KHR:
            OutputString(outputFile, "VK_ERROR_OUT_OF_DATE_KHR");
            return;
        case VK_ERROR_INCOMPATIBLE_DISPLAY_KHR:
            OutputString(outputFile, "VK_ERROR_INCOMPATIBLE_DISPLAY_KHR");
            return;
        case VK_ERROR_VALIDATION_FAILED_EXT:
            OutputString(outputFile, "VK_ERROR_VALIDATION_FAILED_EXT");
            return;
        case VK_ERROR_INVALID_SHADER_NV:
            OutputString(outputFile, "VK_ERROR_INVALID_SHADER_NV");
            return;
        case VK_ERROR_INVALID_DRM_FORMAT_MODIFIER_PLANE_LAYOUT_EXT:
            OutputString(outputFile, "VK_ERROR_INVALID_DRM_FORMAT_MODIFIER_PLANE_LAYOUT_EXT");
            return;
        case VK_ERROR_FRAGMENTATION_EXT:
            OutputString(outputFile, "VK_ERROR_FRAGMENTATION_EXT");
            return;
        case VK_ERROR_NOT_PERMITTED_EXT:
            OutputString(outputFile, "VK_ERROR_NOT_PERMITTED_EXT");
            return;
        case VK_ERROR_INVALID_DEVICE_ADDRESS_EXT:
            OutputString(outputFile, "VK_ERROR_INVALID_DEVICE_ADDRESS_EXT");
            return;
        case VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT:
            OutputString(outputFile, "VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkStructureType(FILE* outputFile, uint32_t enum_uint32)
{
    VkStructureType e = static_cast<VkStructureType>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_STRUCTURE_TYPE_APPLICATION_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_APPLICATION_INFO");
            return;
        case VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_SUBMIT_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_SUBMIT_INFO");
            return;
        case VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE");
            return;
        case VK_STRUCTURE_TYPE_BIND_SPARSE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_BIND_SPARSE_INFO");
            return;
        case VK_STRUCTURE_TYPE_FENCE_CREATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_FENCE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_EVENT_CREATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_EVENT_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET");
            return;
        case VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET");
            return;
        case VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO");
            return;
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO");
            return;
        case VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO");
            return;
        case VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER");
            return;
        case VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER");
            return;
        case VK_STRUCTURE_TYPE_MEMORY_BARRIER:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_MEMORY_BARRIER");
            return;
        case VK_STRUCTURE_TYPE_LOADER_INSTANCE_CREATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_LOADER_INSTANCE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_LOADER_DEVICE_CREATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_LOADER_DEVICE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES");
            return;
        case VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO");
            return;
        case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES");
            return;
        case VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS");
            return;
        case VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO");
            return;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO");
            return;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO");
            return;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO");
            return;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO");
            return;
        case VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO");
            return;
        case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES");
            return;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2");
            return;
        case VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2");
            return;
        case VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2");
            return;
        case VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2");
            return;
        case VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2");
            return;
        case VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2");
            return;
        case VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2");
            return;
        case VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2");
            return;
        case VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES");
            return;
        case VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES");
            return;
        case VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES");
            return;
        case VK_STRUCTURE_TYPE_DEVICE_QUEUE_INFO_2:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DEVICE_QUEUE_INFO_2");
            return;
        case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO");
            return;
        case VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO");
            return;
        case VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES");
            return;
        case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES");
            return;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO");
            return;
        case VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO");
            return;
        case VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES");
            return;
        case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO");
            return;
        case VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES");
            return;
        case VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO");
            return;
        case VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES");
            return;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES");
            return;
        case VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_PRESENT_INFO_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PRESENT_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR");
            return;
        case VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_DISPLAY_MODE_CREATE_INFO_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DISPLAY_MODE_CREATE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_XLIB_SURFACE_CREATE_INFO_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_XLIB_SURFACE_CREATE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_XCB_SURFACE_CREATE_INFO_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_XCB_SURFACE_CREATE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_WAYLAND_SURFACE_CREATE_INFO_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_WAYLAND_SURFACE_CREATE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_ANDROID_SURFACE_CREATE_INFO_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_ANDROID_SURFACE_CREATE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD");
            return;
        case VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV");
            return;
        case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV");
            return;
        case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_HANDLE_INFO_NVX:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_IMAGE_VIEW_HANDLE_INFO_NVX");
            return;
        case VK_STRUCTURE_TYPE_TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD");
            return;
        case VK_STRUCTURE_TYPE_STREAM_DESCRIPTOR_SURFACE_CREATE_INFO_GGP:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_STREAM_DESCRIPTOR_SURFACE_CREATE_INFO_GGP");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV");
            return;
        case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV");
            return;
        case VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV");
            return;
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_NV:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_NV");
            return;
        case VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_NV:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_NV");
            return;
        case VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV");
            return;
        case VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT");
            return;
        case VK_STRUCTURE_TYPE_VI_SURFACE_CREATE_INFO_NN:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_VI_SURFACE_CREATE_INFO_NN");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES_EXT");
            return;
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_ASTC_DECODE_MODE_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_IMAGE_VIEW_ASTC_DECODE_MODE_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT");
            return;
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_MEMORY_WIN32_HANDLE_PROPERTIES_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_MEMORY_WIN32_HANDLE_PROPERTIES_KHR");
            return;
        case VK_STRUCTURE_TYPE_MEMORY_GET_WIN32_HANDLE_INFO_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_MEMORY_GET_WIN32_HANDLE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR");
            return;
        case VK_STRUCTURE_TYPE_MEMORY_GET_FD_INFO_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_MEMORY_GET_FD_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_D3D12_FENCE_SUBMIT_INFO_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_D3D12_FENCE_SUBMIT_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_SEMAPHORE_GET_WIN32_HANDLE_INFO_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_SEMAPHORE_GET_WIN32_HANDLE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_SEMAPHORE_GET_FD_INFO_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_SEMAPHORE_GET_FD_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR");
            return;
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT");
            return;
        case VK_STRUCTURE_TYPE_CONDITIONAL_RENDERING_BEGIN_INFO_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_CONDITIONAL_RENDERING_BEGIN_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES_KHR");
            return;
        case VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR");
            return;
        case VK_STRUCTURE_TYPE_OBJECT_TABLE_CREATE_INFO_NVX:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_OBJECT_TABLE_CREATE_INFO_NVX");
            return;
        case VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NVX:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NVX");
            return;
        case VK_STRUCTURE_TYPE_CMD_PROCESS_COMMANDS_INFO_NVX:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_CMD_PROCESS_COMMANDS_INFO_NVX");
            return;
        case VK_STRUCTURE_TYPE_CMD_RESERVE_SPACE_FOR_COMMANDS_INFO_NVX:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_CMD_RESERVE_SPACE_FOR_COMMANDS_INFO_NVX");
            return;
        case VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_LIMITS_NVX:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_LIMITS_NVX");
            return;
        case VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_FEATURES_NVX:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_FEATURES_NVX");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV");
            return;
        case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_EXT");
            return;
        case VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_HDR_METADATA_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_HDR_METADATA_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES_KHR");
            return;
        case VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENTS_CREATE_INFO_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENTS_CREATE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENT_IMAGE_INFO_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENT_IMAGE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_RENDER_PASS_ATTACHMENT_BEGIN_INFO_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_RENDER_PASS_ATTACHMENT_BEGIN_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_2_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_2_KHR");
            return;
        case VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_2_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_2_KHR");
            return;
        case VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_2_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_2_KHR");
            return;
        case VK_STRUCTURE_TYPE_SUBPASS_DEPENDENCY_2_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_SUBPASS_DEPENDENCY_2_KHR");
            return;
        case VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO_2_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO_2_KHR");
            return;
        case VK_STRUCTURE_TYPE_SUBPASS_BEGIN_INFO_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_SUBPASS_BEGIN_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_SUBPASS_END_INFO_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_SUBPASS_END_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR");
            return;
        case VK_STRUCTURE_TYPE_IMPORT_FENCE_WIN32_HANDLE_INFO_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_IMPORT_FENCE_WIN32_HANDLE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_EXPORT_FENCE_WIN32_HANDLE_INFO_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_EXPORT_FENCE_WIN32_HANDLE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_FENCE_GET_WIN32_HANDLE_INFO_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_FENCE_GET_WIN32_HANDLE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_IMPORT_FENCE_FD_INFO_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_IMPORT_FENCE_FD_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_FENCE_GET_FD_INFO_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_FENCE_GET_FD_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR");
            return;
        case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_KHR");
            return;
        case VK_STRUCTURE_TYPE_SURFACE_FORMAT_2_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_SURFACE_FORMAT_2_KHR");
            return;
        case VK_STRUCTURE_TYPE_DISPLAY_PROPERTIES_2_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DISPLAY_PROPERTIES_2_KHR");
            return;
        case VK_STRUCTURE_TYPE_DISPLAY_PLANE_PROPERTIES_2_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DISPLAY_PLANE_PROPERTIES_2_KHR");
            return;
        case VK_STRUCTURE_TYPE_DISPLAY_MODE_PROPERTIES_2_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DISPLAY_MODE_PROPERTIES_2_KHR");
            return;
        case VK_STRUCTURE_TYPE_DISPLAY_PLANE_INFO_2_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DISPLAY_PLANE_INFO_2_KHR");
            return;
        case VK_STRUCTURE_TYPE_DISPLAY_PLANE_CAPABILITIES_2_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DISPLAY_PLANE_CAPABILITIES_2_KHR");
            return;
        case VK_STRUCTURE_TYPE_IOS_SURFACE_CREATE_INFO_MVK:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_IOS_SURFACE_CREATE_INFO_MVK");
            return;
        case VK_STRUCTURE_TYPE_MACOS_SURFACE_CREATE_INFO_MVK:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_MACOS_SURFACE_CREATE_INFO_MVK");
            return;
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_TAG_INFO_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_TAG_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_LABEL_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DEBUG_UTILS_LABEL_EXT");
            return;
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT");
            return;
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_USAGE_ANDROID:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_USAGE_ANDROID");
            return;
        case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_PROPERTIES_ANDROID:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_PROPERTIES_ANDROID");
            return;
        case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_ANDROID:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_ANDROID");
            return;
        case VK_STRUCTURE_TYPE_IMPORT_ANDROID_HARDWARE_BUFFER_INFO_ANDROID:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_IMPORT_ANDROID_HARDWARE_BUFFER_INFO_ANDROID");
            return;
        case VK_STRUCTURE_TYPE_MEMORY_GET_ANDROID_HARDWARE_BUFFER_INFO_ANDROID:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_MEMORY_GET_ANDROID_HARDWARE_BUFFER_INFO_ANDROID");
            return;
        case VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES_EXT");
            return;
        case VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES_EXT");
            return;
        case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK_EXT");
            return;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT");
            return;
        case VK_STRUCTURE_TYPE_MULTISAMPLE_PROPERTIES_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_MULTISAMPLE_PROPERTIES_EXT");
            return;
        case VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_PROPERTIES_NV:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_PROPERTIES_NV");
            return;
        case VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT");
            return;
        case VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_EXPLICIT_CREATE_INFO_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_EXPLICIT_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT");
            return;
        case VK_STRUCTURE_TYPE_VALIDATION_CACHE_CREATE_INFO_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_VALIDATION_CACHE_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES_EXT");
            return;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT_EXT");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV");
            return;
        case VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_NV:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_NV");
            return;
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_NV:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_NV");
            return;
        case VK_STRUCTURE_TYPE_GEOMETRY_NV:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_GEOMETRY_NV");
            return;
        case VK_STRUCTURE_TYPE_GEOMETRY_TRIANGLES_NV:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_GEOMETRY_TRIANGLES_NV");
            return;
        case VK_STRUCTURE_TYPE_GEOMETRY_AABB_NV:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_GEOMETRY_AABB_NV");
            return;
        case VK_STRUCTURE_TYPE_BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_NV:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_NV");
            return;
        case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_NV:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_NV");
            return;
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_NV:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_NV");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV");
            return;
        case VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_NV:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_NV");
            return;
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_INFO_NV:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_INFO_NV");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT");
            return;
        case VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES_KHR");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES_KHR");
            return;
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_MEMORY_HOST_POINTER_PROPERTIES_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_MEMORY_HOST_POINTER_PROPERTIES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES_KHR");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD");
            return;
        case VK_STRUCTURE_TYPE_CALIBRATED_TIMESTAMP_INFO_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_CALIBRATED_TIMESTAMP_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD");
            return;
        case VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PRESENT_FRAME_TOKEN_GGP:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PRESENT_FRAME_TOKEN_GGP");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES_KHR");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES_KHR");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES_KHR");
            return;
        case VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE_KHR");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_NV:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_NV");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV");
            return;
        case VK_STRUCTURE_TYPE_CHECKPOINT_DATA_NV:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_CHECKPOINT_DATA_NV");
            return;
        case VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES_KHR");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES_KHR");
            return;
        case VK_STRUCTURE_TYPE_SEMAPHORE_TYPE_CREATE_INFO_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_SEMAPHORE_TYPE_CREATE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_TIMELINE_SEMAPHORE_SUBMIT_INFO_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_TIMELINE_SEMAPHORE_SUBMIT_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_SEMAPHORE_WAIT_INFO_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_SEMAPHORE_WAIT_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_SEMAPHORE_SIGNAL_INFO_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_SEMAPHORE_SIGNAL_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL");
            return;
        case VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO_INTEL:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO_INTEL");
            return;
        case VK_STRUCTURE_TYPE_INITIALIZE_PERFORMANCE_API_INFO_INTEL:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_INITIALIZE_PERFORMANCE_API_INFO_INTEL");
            return;
        case VK_STRUCTURE_TYPE_PERFORMANCE_MARKER_INFO_INTEL:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PERFORMANCE_MARKER_INFO_INTEL");
            return;
        case VK_STRUCTURE_TYPE_PERFORMANCE_STREAM_MARKER_INFO_INTEL:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PERFORMANCE_STREAM_MARKER_INFO_INTEL");
            return;
        case VK_STRUCTURE_TYPE_PERFORMANCE_OVERRIDE_INFO_INTEL:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PERFORMANCE_OVERRIDE_INFO_INTEL");
            return;
        case VK_STRUCTURE_TYPE_PERFORMANCE_CONFIGURATION_ACQUIRE_INFO_INTEL:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PERFORMANCE_CONFIGURATION_ACQUIRE_INFO_INTEL");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES_KHR");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT");
            return;
        case VK_STRUCTURE_TYPE_DISPLAY_NATIVE_HDR_SURFACE_CAPABILITIES_AMD:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_DISPLAY_NATIVE_HDR_SURFACE_CAPABILITIES_AMD");
            return;
        case VK_STRUCTURE_TYPE_SWAPCHAIN_DISPLAY_NATIVE_HDR_CREATE_INFO_AMD:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_SWAPCHAIN_DISPLAY_NATIVE_HDR_CREATE_INFO_AMD");
            return;
        case VK_STRUCTURE_TYPE_IMAGEPIPE_SURFACE_CREATE_INFO_FUCHSIA:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_IMAGEPIPE_SURFACE_CREATE_INFO_FUCHSIA");
            return;
        case VK_STRUCTURE_TYPE_METAL_SURFACE_CREATE_INFO_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_METAL_SURFACE_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT");
            return;
        case VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_2_AMD:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_2_AMD");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT");
            return;
        case VK_STRUCTURE_TYPE_MEMORY_PRIORITY_ALLOCATE_INFO_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_MEMORY_PRIORITY_ALLOCATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_SURFACE_PROTECTED_CAPABILITIES_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_SURFACE_PROTECTED_CAPABILITIES_KHR");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES_KHR");
            return;
        case VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_STENCIL_LAYOUT_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_STENCIL_LAYOUT_KHR");
            return;
        case VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_STENCIL_LAYOUT_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_STENCIL_LAYOUT_KHR");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT");
            return;
        case VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV");
            return;
        case VK_STRUCTURE_TYPE_COOPERATIVE_MATRIX_PROPERTIES_NV:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_COOPERATIVE_MATRIX_PROPERTIES_NV");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_REDUCTION_STATE_CREATE_INFO_NV:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_REDUCTION_STATE_CREATE_INFO_NV");
            return;
        case VK_STRUCTURE_TYPE_FRAMEBUFFER_MIXED_SAMPLES_COMBINATION_NV:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_FRAMEBUFFER_MIXED_SAMPLES_COMBINATION_NV");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES_KHR");
            return;
        case VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_INFO_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_FULL_SCREEN_EXCLUSIVE_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_FULL_SCREEN_EXCLUSIVE_EXT");
            return;
        case VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_WIN32_INFO_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_WIN32_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_HEADLESS_SURFACE_CREATE_INFO_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_HEADLESS_SURFACE_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_INFO_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_PROPERTIES_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_PROPERTIES_KHR");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INFO_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_STATISTIC_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_STATISTIC_KHR");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INTERNAL_REPRESENTATION_KHR:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INTERNAL_REPRESENTATION_KHR");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES_EXT:
            OutputString(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES_EXT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkSystemAllocationScope(FILE* outputFile, uint32_t enum_uint32)
{
    VkSystemAllocationScope e = static_cast<VkSystemAllocationScope>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SYSTEM_ALLOCATION_SCOPE_COMMAND:
            OutputString(outputFile, "VK_SYSTEM_ALLOCATION_SCOPE_COMMAND");
            return;
        case VK_SYSTEM_ALLOCATION_SCOPE_OBJECT:
            OutputString(outputFile, "VK_SYSTEM_ALLOCATION_SCOPE_OBJECT");
            return;
        case VK_SYSTEM_ALLOCATION_SCOPE_CACHE:
            OutputString(outputFile, "VK_SYSTEM_ALLOCATION_SCOPE_CACHE");
            return;
        case VK_SYSTEM_ALLOCATION_SCOPE_DEVICE:
            OutputString(outputFile, "VK_SYSTEM_ALLOCATION_SCOPE_DEVICE");
            return;
        case VK_SYSTEM_ALLOCATION_SCOPE_INSTANCE:
            OutputString(outputFile, "VK_SYSTEM_ALLOCATION_SCOPE_INSTANCE");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkInternalAllocationType(FILE* outputFile, uint32_t enum_uint32)
{
    VkInternalAllocationType e = static_cast<VkInternalAllocationType>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_INTERNAL_ALLOCATION_TYPE_EXECUTABLE:
            OutputString(outputFile, "VK_INTERNAL_ALLOCATION_TYPE_EXECUTABLE");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkFormat(FILE* outputFile, uint32_t enum_uint32)
{
    VkFormat e = static_cast<VkFormat>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_FORMAT_UNDEFINED:
            OutputString(outputFile, "VK_FORMAT_UNDEFINED");
            return;
        case VK_FORMAT_R4G4_UNORM_PACK8:
            OutputString(outputFile, "VK_FORMAT_R4G4_UNORM_PACK8");
            return;
        case VK_FORMAT_R4G4B4A4_UNORM_PACK16:
            OutputString(outputFile, "VK_FORMAT_R4G4B4A4_UNORM_PACK16");
            return;
        case VK_FORMAT_B4G4R4A4_UNORM_PACK16:
            OutputString(outputFile, "VK_FORMAT_B4G4R4A4_UNORM_PACK16");
            return;
        case VK_FORMAT_R5G6B5_UNORM_PACK16:
            OutputString(outputFile, "VK_FORMAT_R5G6B5_UNORM_PACK16");
            return;
        case VK_FORMAT_B5G6R5_UNORM_PACK16:
            OutputString(outputFile, "VK_FORMAT_B5G6R5_UNORM_PACK16");
            return;
        case VK_FORMAT_R5G5B5A1_UNORM_PACK16:
            OutputString(outputFile, "VK_FORMAT_R5G5B5A1_UNORM_PACK16");
            return;
        case VK_FORMAT_B5G5R5A1_UNORM_PACK16:
            OutputString(outputFile, "VK_FORMAT_B5G5R5A1_UNORM_PACK16");
            return;
        case VK_FORMAT_A1R5G5B5_UNORM_PACK16:
            OutputString(outputFile, "VK_FORMAT_A1R5G5B5_UNORM_PACK16");
            return;
        case VK_FORMAT_R8_UNORM:
            OutputString(outputFile, "VK_FORMAT_R8_UNORM");
            return;
        case VK_FORMAT_R8_SNORM:
            OutputString(outputFile, "VK_FORMAT_R8_SNORM");
            return;
        case VK_FORMAT_R8_USCALED:
            OutputString(outputFile, "VK_FORMAT_R8_USCALED");
            return;
        case VK_FORMAT_R8_SSCALED:
            OutputString(outputFile, "VK_FORMAT_R8_SSCALED");
            return;
        case VK_FORMAT_R8_UINT:
            OutputString(outputFile, "VK_FORMAT_R8_UINT");
            return;
        case VK_FORMAT_R8_SINT:
            OutputString(outputFile, "VK_FORMAT_R8_SINT");
            return;
        case VK_FORMAT_R8_SRGB:
            OutputString(outputFile, "VK_FORMAT_R8_SRGB");
            return;
        case VK_FORMAT_R8G8_UNORM:
            OutputString(outputFile, "VK_FORMAT_R8G8_UNORM");
            return;
        case VK_FORMAT_R8G8_SNORM:
            OutputString(outputFile, "VK_FORMAT_R8G8_SNORM");
            return;
        case VK_FORMAT_R8G8_USCALED:
            OutputString(outputFile, "VK_FORMAT_R8G8_USCALED");
            return;
        case VK_FORMAT_R8G8_SSCALED:
            OutputString(outputFile, "VK_FORMAT_R8G8_SSCALED");
            return;
        case VK_FORMAT_R8G8_UINT:
            OutputString(outputFile, "VK_FORMAT_R8G8_UINT");
            return;
        case VK_FORMAT_R8G8_SINT:
            OutputString(outputFile, "VK_FORMAT_R8G8_SINT");
            return;
        case VK_FORMAT_R8G8_SRGB:
            OutputString(outputFile, "VK_FORMAT_R8G8_SRGB");
            return;
        case VK_FORMAT_R8G8B8_UNORM:
            OutputString(outputFile, "VK_FORMAT_R8G8B8_UNORM");
            return;
        case VK_FORMAT_R8G8B8_SNORM:
            OutputString(outputFile, "VK_FORMAT_R8G8B8_SNORM");
            return;
        case VK_FORMAT_R8G8B8_USCALED:
            OutputString(outputFile, "VK_FORMAT_R8G8B8_USCALED");
            return;
        case VK_FORMAT_R8G8B8_SSCALED:
            OutputString(outputFile, "VK_FORMAT_R8G8B8_SSCALED");
            return;
        case VK_FORMAT_R8G8B8_UINT:
            OutputString(outputFile, "VK_FORMAT_R8G8B8_UINT");
            return;
        case VK_FORMAT_R8G8B8_SINT:
            OutputString(outputFile, "VK_FORMAT_R8G8B8_SINT");
            return;
        case VK_FORMAT_R8G8B8_SRGB:
            OutputString(outputFile, "VK_FORMAT_R8G8B8_SRGB");
            return;
        case VK_FORMAT_B8G8R8_UNORM:
            OutputString(outputFile, "VK_FORMAT_B8G8R8_UNORM");
            return;
        case VK_FORMAT_B8G8R8_SNORM:
            OutputString(outputFile, "VK_FORMAT_B8G8R8_SNORM");
            return;
        case VK_FORMAT_B8G8R8_USCALED:
            OutputString(outputFile, "VK_FORMAT_B8G8R8_USCALED");
            return;
        case VK_FORMAT_B8G8R8_SSCALED:
            OutputString(outputFile, "VK_FORMAT_B8G8R8_SSCALED");
            return;
        case VK_FORMAT_B8G8R8_UINT:
            OutputString(outputFile, "VK_FORMAT_B8G8R8_UINT");
            return;
        case VK_FORMAT_B8G8R8_SINT:
            OutputString(outputFile, "VK_FORMAT_B8G8R8_SINT");
            return;
        case VK_FORMAT_B8G8R8_SRGB:
            OutputString(outputFile, "VK_FORMAT_B8G8R8_SRGB");
            return;
        case VK_FORMAT_R8G8B8A8_UNORM:
            OutputString(outputFile, "VK_FORMAT_R8G8B8A8_UNORM");
            return;
        case VK_FORMAT_R8G8B8A8_SNORM:
            OutputString(outputFile, "VK_FORMAT_R8G8B8A8_SNORM");
            return;
        case VK_FORMAT_R8G8B8A8_USCALED:
            OutputString(outputFile, "VK_FORMAT_R8G8B8A8_USCALED");
            return;
        case VK_FORMAT_R8G8B8A8_SSCALED:
            OutputString(outputFile, "VK_FORMAT_R8G8B8A8_SSCALED");
            return;
        case VK_FORMAT_R8G8B8A8_UINT:
            OutputString(outputFile, "VK_FORMAT_R8G8B8A8_UINT");
            return;
        case VK_FORMAT_R8G8B8A8_SINT:
            OutputString(outputFile, "VK_FORMAT_R8G8B8A8_SINT");
            return;
        case VK_FORMAT_R8G8B8A8_SRGB:
            OutputString(outputFile, "VK_FORMAT_R8G8B8A8_SRGB");
            return;
        case VK_FORMAT_B8G8R8A8_UNORM:
            OutputString(outputFile, "VK_FORMAT_B8G8R8A8_UNORM");
            return;
        case VK_FORMAT_B8G8R8A8_SNORM:
            OutputString(outputFile, "VK_FORMAT_B8G8R8A8_SNORM");
            return;
        case VK_FORMAT_B8G8R8A8_USCALED:
            OutputString(outputFile, "VK_FORMAT_B8G8R8A8_USCALED");
            return;
        case VK_FORMAT_B8G8R8A8_SSCALED:
            OutputString(outputFile, "VK_FORMAT_B8G8R8A8_SSCALED");
            return;
        case VK_FORMAT_B8G8R8A8_UINT:
            OutputString(outputFile, "VK_FORMAT_B8G8R8A8_UINT");
            return;
        case VK_FORMAT_B8G8R8A8_SINT:
            OutputString(outputFile, "VK_FORMAT_B8G8R8A8_SINT");
            return;
        case VK_FORMAT_B8G8R8A8_SRGB:
            OutputString(outputFile, "VK_FORMAT_B8G8R8A8_SRGB");
            return;
        case VK_FORMAT_A8B8G8R8_UNORM_PACK32:
            OutputString(outputFile, "VK_FORMAT_A8B8G8R8_UNORM_PACK32");
            return;
        case VK_FORMAT_A8B8G8R8_SNORM_PACK32:
            OutputString(outputFile, "VK_FORMAT_A8B8G8R8_SNORM_PACK32");
            return;
        case VK_FORMAT_A8B8G8R8_USCALED_PACK32:
            OutputString(outputFile, "VK_FORMAT_A8B8G8R8_USCALED_PACK32");
            return;
        case VK_FORMAT_A8B8G8R8_SSCALED_PACK32:
            OutputString(outputFile, "VK_FORMAT_A8B8G8R8_SSCALED_PACK32");
            return;
        case VK_FORMAT_A8B8G8R8_UINT_PACK32:
            OutputString(outputFile, "VK_FORMAT_A8B8G8R8_UINT_PACK32");
            return;
        case VK_FORMAT_A8B8G8R8_SINT_PACK32:
            OutputString(outputFile, "VK_FORMAT_A8B8G8R8_SINT_PACK32");
            return;
        case VK_FORMAT_A8B8G8R8_SRGB_PACK32:
            OutputString(outputFile, "VK_FORMAT_A8B8G8R8_SRGB_PACK32");
            return;
        case VK_FORMAT_A2R10G10B10_UNORM_PACK32:
            OutputString(outputFile, "VK_FORMAT_A2R10G10B10_UNORM_PACK32");
            return;
        case VK_FORMAT_A2R10G10B10_SNORM_PACK32:
            OutputString(outputFile, "VK_FORMAT_A2R10G10B10_SNORM_PACK32");
            return;
        case VK_FORMAT_A2R10G10B10_USCALED_PACK32:
            OutputString(outputFile, "VK_FORMAT_A2R10G10B10_USCALED_PACK32");
            return;
        case VK_FORMAT_A2R10G10B10_SSCALED_PACK32:
            OutputString(outputFile, "VK_FORMAT_A2R10G10B10_SSCALED_PACK32");
            return;
        case VK_FORMAT_A2R10G10B10_UINT_PACK32:
            OutputString(outputFile, "VK_FORMAT_A2R10G10B10_UINT_PACK32");
            return;
        case VK_FORMAT_A2R10G10B10_SINT_PACK32:
            OutputString(outputFile, "VK_FORMAT_A2R10G10B10_SINT_PACK32");
            return;
        case VK_FORMAT_A2B10G10R10_UNORM_PACK32:
            OutputString(outputFile, "VK_FORMAT_A2B10G10R10_UNORM_PACK32");
            return;
        case VK_FORMAT_A2B10G10R10_SNORM_PACK32:
            OutputString(outputFile, "VK_FORMAT_A2B10G10R10_SNORM_PACK32");
            return;
        case VK_FORMAT_A2B10G10R10_USCALED_PACK32:
            OutputString(outputFile, "VK_FORMAT_A2B10G10R10_USCALED_PACK32");
            return;
        case VK_FORMAT_A2B10G10R10_SSCALED_PACK32:
            OutputString(outputFile, "VK_FORMAT_A2B10G10R10_SSCALED_PACK32");
            return;
        case VK_FORMAT_A2B10G10R10_UINT_PACK32:
            OutputString(outputFile, "VK_FORMAT_A2B10G10R10_UINT_PACK32");
            return;
        case VK_FORMAT_A2B10G10R10_SINT_PACK32:
            OutputString(outputFile, "VK_FORMAT_A2B10G10R10_SINT_PACK32");
            return;
        case VK_FORMAT_R16_UNORM:
            OutputString(outputFile, "VK_FORMAT_R16_UNORM");
            return;
        case VK_FORMAT_R16_SNORM:
            OutputString(outputFile, "VK_FORMAT_R16_SNORM");
            return;
        case VK_FORMAT_R16_USCALED:
            OutputString(outputFile, "VK_FORMAT_R16_USCALED");
            return;
        case VK_FORMAT_R16_SSCALED:
            OutputString(outputFile, "VK_FORMAT_R16_SSCALED");
            return;
        case VK_FORMAT_R16_UINT:
            OutputString(outputFile, "VK_FORMAT_R16_UINT");
            return;
        case VK_FORMAT_R16_SINT:
            OutputString(outputFile, "VK_FORMAT_R16_SINT");
            return;
        case VK_FORMAT_R16_SFLOAT:
            OutputString(outputFile, "VK_FORMAT_R16_SFLOAT");
            return;
        case VK_FORMAT_R16G16_UNORM:
            OutputString(outputFile, "VK_FORMAT_R16G16_UNORM");
            return;
        case VK_FORMAT_R16G16_SNORM:
            OutputString(outputFile, "VK_FORMAT_R16G16_SNORM");
            return;
        case VK_FORMAT_R16G16_USCALED:
            OutputString(outputFile, "VK_FORMAT_R16G16_USCALED");
            return;
        case VK_FORMAT_R16G16_SSCALED:
            OutputString(outputFile, "VK_FORMAT_R16G16_SSCALED");
            return;
        case VK_FORMAT_R16G16_UINT:
            OutputString(outputFile, "VK_FORMAT_R16G16_UINT");
            return;
        case VK_FORMAT_R16G16_SINT:
            OutputString(outputFile, "VK_FORMAT_R16G16_SINT");
            return;
        case VK_FORMAT_R16G16_SFLOAT:
            OutputString(outputFile, "VK_FORMAT_R16G16_SFLOAT");
            return;
        case VK_FORMAT_R16G16B16_UNORM:
            OutputString(outputFile, "VK_FORMAT_R16G16B16_UNORM");
            return;
        case VK_FORMAT_R16G16B16_SNORM:
            OutputString(outputFile, "VK_FORMAT_R16G16B16_SNORM");
            return;
        case VK_FORMAT_R16G16B16_USCALED:
            OutputString(outputFile, "VK_FORMAT_R16G16B16_USCALED");
            return;
        case VK_FORMAT_R16G16B16_SSCALED:
            OutputString(outputFile, "VK_FORMAT_R16G16B16_SSCALED");
            return;
        case VK_FORMAT_R16G16B16_UINT:
            OutputString(outputFile, "VK_FORMAT_R16G16B16_UINT");
            return;
        case VK_FORMAT_R16G16B16_SINT:
            OutputString(outputFile, "VK_FORMAT_R16G16B16_SINT");
            return;
        case VK_FORMAT_R16G16B16_SFLOAT:
            OutputString(outputFile, "VK_FORMAT_R16G16B16_SFLOAT");
            return;
        case VK_FORMAT_R16G16B16A16_UNORM:
            OutputString(outputFile, "VK_FORMAT_R16G16B16A16_UNORM");
            return;
        case VK_FORMAT_R16G16B16A16_SNORM:
            OutputString(outputFile, "VK_FORMAT_R16G16B16A16_SNORM");
            return;
        case VK_FORMAT_R16G16B16A16_USCALED:
            OutputString(outputFile, "VK_FORMAT_R16G16B16A16_USCALED");
            return;
        case VK_FORMAT_R16G16B16A16_SSCALED:
            OutputString(outputFile, "VK_FORMAT_R16G16B16A16_SSCALED");
            return;
        case VK_FORMAT_R16G16B16A16_UINT:
            OutputString(outputFile, "VK_FORMAT_R16G16B16A16_UINT");
            return;
        case VK_FORMAT_R16G16B16A16_SINT:
            OutputString(outputFile, "VK_FORMAT_R16G16B16A16_SINT");
            return;
        case VK_FORMAT_R16G16B16A16_SFLOAT:
            OutputString(outputFile, "VK_FORMAT_R16G16B16A16_SFLOAT");
            return;
        case VK_FORMAT_R32_UINT:
            OutputString(outputFile, "VK_FORMAT_R32_UINT");
            return;
        case VK_FORMAT_R32_SINT:
            OutputString(outputFile, "VK_FORMAT_R32_SINT");
            return;
        case VK_FORMAT_R32_SFLOAT:
            OutputString(outputFile, "VK_FORMAT_R32_SFLOAT");
            return;
        case VK_FORMAT_R32G32_UINT:
            OutputString(outputFile, "VK_FORMAT_R32G32_UINT");
            return;
        case VK_FORMAT_R32G32_SINT:
            OutputString(outputFile, "VK_FORMAT_R32G32_SINT");
            return;
        case VK_FORMAT_R32G32_SFLOAT:
            OutputString(outputFile, "VK_FORMAT_R32G32_SFLOAT");
            return;
        case VK_FORMAT_R32G32B32_UINT:
            OutputString(outputFile, "VK_FORMAT_R32G32B32_UINT");
            return;
        case VK_FORMAT_R32G32B32_SINT:
            OutputString(outputFile, "VK_FORMAT_R32G32B32_SINT");
            return;
        case VK_FORMAT_R32G32B32_SFLOAT:
            OutputString(outputFile, "VK_FORMAT_R32G32B32_SFLOAT");
            return;
        case VK_FORMAT_R32G32B32A32_UINT:
            OutputString(outputFile, "VK_FORMAT_R32G32B32A32_UINT");
            return;
        case VK_FORMAT_R32G32B32A32_SINT:
            OutputString(outputFile, "VK_FORMAT_R32G32B32A32_SINT");
            return;
        case VK_FORMAT_R32G32B32A32_SFLOAT:
            OutputString(outputFile, "VK_FORMAT_R32G32B32A32_SFLOAT");
            return;
        case VK_FORMAT_R64_UINT:
            OutputString(outputFile, "VK_FORMAT_R64_UINT");
            return;
        case VK_FORMAT_R64_SINT:
            OutputString(outputFile, "VK_FORMAT_R64_SINT");
            return;
        case VK_FORMAT_R64_SFLOAT:
            OutputString(outputFile, "VK_FORMAT_R64_SFLOAT");
            return;
        case VK_FORMAT_R64G64_UINT:
            OutputString(outputFile, "VK_FORMAT_R64G64_UINT");
            return;
        case VK_FORMAT_R64G64_SINT:
            OutputString(outputFile, "VK_FORMAT_R64G64_SINT");
            return;
        case VK_FORMAT_R64G64_SFLOAT:
            OutputString(outputFile, "VK_FORMAT_R64G64_SFLOAT");
            return;
        case VK_FORMAT_R64G64B64_UINT:
            OutputString(outputFile, "VK_FORMAT_R64G64B64_UINT");
            return;
        case VK_FORMAT_R64G64B64_SINT:
            OutputString(outputFile, "VK_FORMAT_R64G64B64_SINT");
            return;
        case VK_FORMAT_R64G64B64_SFLOAT:
            OutputString(outputFile, "VK_FORMAT_R64G64B64_SFLOAT");
            return;
        case VK_FORMAT_R64G64B64A64_UINT:
            OutputString(outputFile, "VK_FORMAT_R64G64B64A64_UINT");
            return;
        case VK_FORMAT_R64G64B64A64_SINT:
            OutputString(outputFile, "VK_FORMAT_R64G64B64A64_SINT");
            return;
        case VK_FORMAT_R64G64B64A64_SFLOAT:
            OutputString(outputFile, "VK_FORMAT_R64G64B64A64_SFLOAT");
            return;
        case VK_FORMAT_B10G11R11_UFLOAT_PACK32:
            OutputString(outputFile, "VK_FORMAT_B10G11R11_UFLOAT_PACK32");
            return;
        case VK_FORMAT_E5B9G9R9_UFLOAT_PACK32:
            OutputString(outputFile, "VK_FORMAT_E5B9G9R9_UFLOAT_PACK32");
            return;
        case VK_FORMAT_D16_UNORM:
            OutputString(outputFile, "VK_FORMAT_D16_UNORM");
            return;
        case VK_FORMAT_X8_D24_UNORM_PACK32:
            OutputString(outputFile, "VK_FORMAT_X8_D24_UNORM_PACK32");
            return;
        case VK_FORMAT_D32_SFLOAT:
            OutputString(outputFile, "VK_FORMAT_D32_SFLOAT");
            return;
        case VK_FORMAT_S8_UINT:
            OutputString(outputFile, "VK_FORMAT_S8_UINT");
            return;
        case VK_FORMAT_D16_UNORM_S8_UINT:
            OutputString(outputFile, "VK_FORMAT_D16_UNORM_S8_UINT");
            return;
        case VK_FORMAT_D24_UNORM_S8_UINT:
            OutputString(outputFile, "VK_FORMAT_D24_UNORM_S8_UINT");
            return;
        case VK_FORMAT_D32_SFLOAT_S8_UINT:
            OutputString(outputFile, "VK_FORMAT_D32_SFLOAT_S8_UINT");
            return;
        case VK_FORMAT_BC1_RGB_UNORM_BLOCK:
            OutputString(outputFile, "VK_FORMAT_BC1_RGB_UNORM_BLOCK");
            return;
        case VK_FORMAT_BC1_RGB_SRGB_BLOCK:
            OutputString(outputFile, "VK_FORMAT_BC1_RGB_SRGB_BLOCK");
            return;
        case VK_FORMAT_BC1_RGBA_UNORM_BLOCK:
            OutputString(outputFile, "VK_FORMAT_BC1_RGBA_UNORM_BLOCK");
            return;
        case VK_FORMAT_BC1_RGBA_SRGB_BLOCK:
            OutputString(outputFile, "VK_FORMAT_BC1_RGBA_SRGB_BLOCK");
            return;
        case VK_FORMAT_BC2_UNORM_BLOCK:
            OutputString(outputFile, "VK_FORMAT_BC2_UNORM_BLOCK");
            return;
        case VK_FORMAT_BC2_SRGB_BLOCK:
            OutputString(outputFile, "VK_FORMAT_BC2_SRGB_BLOCK");
            return;
        case VK_FORMAT_BC3_UNORM_BLOCK:
            OutputString(outputFile, "VK_FORMAT_BC3_UNORM_BLOCK");
            return;
        case VK_FORMAT_BC3_SRGB_BLOCK:
            OutputString(outputFile, "VK_FORMAT_BC3_SRGB_BLOCK");
            return;
        case VK_FORMAT_BC4_UNORM_BLOCK:
            OutputString(outputFile, "VK_FORMAT_BC4_UNORM_BLOCK");
            return;
        case VK_FORMAT_BC4_SNORM_BLOCK:
            OutputString(outputFile, "VK_FORMAT_BC4_SNORM_BLOCK");
            return;
        case VK_FORMAT_BC5_UNORM_BLOCK:
            OutputString(outputFile, "VK_FORMAT_BC5_UNORM_BLOCK");
            return;
        case VK_FORMAT_BC5_SNORM_BLOCK:
            OutputString(outputFile, "VK_FORMAT_BC5_SNORM_BLOCK");
            return;
        case VK_FORMAT_BC6H_UFLOAT_BLOCK:
            OutputString(outputFile, "VK_FORMAT_BC6H_UFLOAT_BLOCK");
            return;
        case VK_FORMAT_BC6H_SFLOAT_BLOCK:
            OutputString(outputFile, "VK_FORMAT_BC6H_SFLOAT_BLOCK");
            return;
        case VK_FORMAT_BC7_UNORM_BLOCK:
            OutputString(outputFile, "VK_FORMAT_BC7_UNORM_BLOCK");
            return;
        case VK_FORMAT_BC7_SRGB_BLOCK:
            OutputString(outputFile, "VK_FORMAT_BC7_SRGB_BLOCK");
            return;
        case VK_FORMAT_ETC2_R8G8B8_UNORM_BLOCK:
            OutputString(outputFile, "VK_FORMAT_ETC2_R8G8B8_UNORM_BLOCK");
            return;
        case VK_FORMAT_ETC2_R8G8B8_SRGB_BLOCK:
            OutputString(outputFile, "VK_FORMAT_ETC2_R8G8B8_SRGB_BLOCK");
            return;
        case VK_FORMAT_ETC2_R8G8B8A1_UNORM_BLOCK:
            OutputString(outputFile, "VK_FORMAT_ETC2_R8G8B8A1_UNORM_BLOCK");
            return;
        case VK_FORMAT_ETC2_R8G8B8A1_SRGB_BLOCK:
            OutputString(outputFile, "VK_FORMAT_ETC2_R8G8B8A1_SRGB_BLOCK");
            return;
        case VK_FORMAT_ETC2_R8G8B8A8_UNORM_BLOCK:
            OutputString(outputFile, "VK_FORMAT_ETC2_R8G8B8A8_UNORM_BLOCK");
            return;
        case VK_FORMAT_ETC2_R8G8B8A8_SRGB_BLOCK:
            OutputString(outputFile, "VK_FORMAT_ETC2_R8G8B8A8_SRGB_BLOCK");
            return;
        case VK_FORMAT_EAC_R11_UNORM_BLOCK:
            OutputString(outputFile, "VK_FORMAT_EAC_R11_UNORM_BLOCK");
            return;
        case VK_FORMAT_EAC_R11_SNORM_BLOCK:
            OutputString(outputFile, "VK_FORMAT_EAC_R11_SNORM_BLOCK");
            return;
        case VK_FORMAT_EAC_R11G11_UNORM_BLOCK:
            OutputString(outputFile, "VK_FORMAT_EAC_R11G11_UNORM_BLOCK");
            return;
        case VK_FORMAT_EAC_R11G11_SNORM_BLOCK:
            OutputString(outputFile, "VK_FORMAT_EAC_R11G11_SNORM_BLOCK");
            return;
        case VK_FORMAT_ASTC_4x4_UNORM_BLOCK:
            OutputString(outputFile, "VK_FORMAT_ASTC_4x4_UNORM_BLOCK");
            return;
        case VK_FORMAT_ASTC_4x4_SRGB_BLOCK:
            OutputString(outputFile, "VK_FORMAT_ASTC_4x4_SRGB_BLOCK");
            return;
        case VK_FORMAT_ASTC_5x4_UNORM_BLOCK:
            OutputString(outputFile, "VK_FORMAT_ASTC_5x4_UNORM_BLOCK");
            return;
        case VK_FORMAT_ASTC_5x4_SRGB_BLOCK:
            OutputString(outputFile, "VK_FORMAT_ASTC_5x4_SRGB_BLOCK");
            return;
        case VK_FORMAT_ASTC_5x5_UNORM_BLOCK:
            OutputString(outputFile, "VK_FORMAT_ASTC_5x5_UNORM_BLOCK");
            return;
        case VK_FORMAT_ASTC_5x5_SRGB_BLOCK:
            OutputString(outputFile, "VK_FORMAT_ASTC_5x5_SRGB_BLOCK");
            return;
        case VK_FORMAT_ASTC_6x5_UNORM_BLOCK:
            OutputString(outputFile, "VK_FORMAT_ASTC_6x5_UNORM_BLOCK");
            return;
        case VK_FORMAT_ASTC_6x5_SRGB_BLOCK:
            OutputString(outputFile, "VK_FORMAT_ASTC_6x5_SRGB_BLOCK");
            return;
        case VK_FORMAT_ASTC_6x6_UNORM_BLOCK:
            OutputString(outputFile, "VK_FORMAT_ASTC_6x6_UNORM_BLOCK");
            return;
        case VK_FORMAT_ASTC_6x6_SRGB_BLOCK:
            OutputString(outputFile, "VK_FORMAT_ASTC_6x6_SRGB_BLOCK");
            return;
        case VK_FORMAT_ASTC_8x5_UNORM_BLOCK:
            OutputString(outputFile, "VK_FORMAT_ASTC_8x5_UNORM_BLOCK");
            return;
        case VK_FORMAT_ASTC_8x5_SRGB_BLOCK:
            OutputString(outputFile, "VK_FORMAT_ASTC_8x5_SRGB_BLOCK");
            return;
        case VK_FORMAT_ASTC_8x6_UNORM_BLOCK:
            OutputString(outputFile, "VK_FORMAT_ASTC_8x6_UNORM_BLOCK");
            return;
        case VK_FORMAT_ASTC_8x6_SRGB_BLOCK:
            OutputString(outputFile, "VK_FORMAT_ASTC_8x6_SRGB_BLOCK");
            return;
        case VK_FORMAT_ASTC_8x8_UNORM_BLOCK:
            OutputString(outputFile, "VK_FORMAT_ASTC_8x8_UNORM_BLOCK");
            return;
        case VK_FORMAT_ASTC_8x8_SRGB_BLOCK:
            OutputString(outputFile, "VK_FORMAT_ASTC_8x8_SRGB_BLOCK");
            return;
        case VK_FORMAT_ASTC_10x5_UNORM_BLOCK:
            OutputString(outputFile, "VK_FORMAT_ASTC_10x5_UNORM_BLOCK");
            return;
        case VK_FORMAT_ASTC_10x5_SRGB_BLOCK:
            OutputString(outputFile, "VK_FORMAT_ASTC_10x5_SRGB_BLOCK");
            return;
        case VK_FORMAT_ASTC_10x6_UNORM_BLOCK:
            OutputString(outputFile, "VK_FORMAT_ASTC_10x6_UNORM_BLOCK");
            return;
        case VK_FORMAT_ASTC_10x6_SRGB_BLOCK:
            OutputString(outputFile, "VK_FORMAT_ASTC_10x6_SRGB_BLOCK");
            return;
        case VK_FORMAT_ASTC_10x8_UNORM_BLOCK:
            OutputString(outputFile, "VK_FORMAT_ASTC_10x8_UNORM_BLOCK");
            return;
        case VK_FORMAT_ASTC_10x8_SRGB_BLOCK:
            OutputString(outputFile, "VK_FORMAT_ASTC_10x8_SRGB_BLOCK");
            return;
        case VK_FORMAT_ASTC_10x10_UNORM_BLOCK:
            OutputString(outputFile, "VK_FORMAT_ASTC_10x10_UNORM_BLOCK");
            return;
        case VK_FORMAT_ASTC_10x10_SRGB_BLOCK:
            OutputString(outputFile, "VK_FORMAT_ASTC_10x10_SRGB_BLOCK");
            return;
        case VK_FORMAT_ASTC_12x10_UNORM_BLOCK:
            OutputString(outputFile, "VK_FORMAT_ASTC_12x10_UNORM_BLOCK");
            return;
        case VK_FORMAT_ASTC_12x10_SRGB_BLOCK:
            OutputString(outputFile, "VK_FORMAT_ASTC_12x10_SRGB_BLOCK");
            return;
        case VK_FORMAT_ASTC_12x12_UNORM_BLOCK:
            OutputString(outputFile, "VK_FORMAT_ASTC_12x12_UNORM_BLOCK");
            return;
        case VK_FORMAT_ASTC_12x12_SRGB_BLOCK:
            OutputString(outputFile, "VK_FORMAT_ASTC_12x12_SRGB_BLOCK");
            return;
        case VK_FORMAT_G8B8G8R8_422_UNORM:
            OutputString(outputFile, "VK_FORMAT_G8B8G8R8_422_UNORM");
            return;
        case VK_FORMAT_B8G8R8G8_422_UNORM:
            OutputString(outputFile, "VK_FORMAT_B8G8R8G8_422_UNORM");
            return;
        case VK_FORMAT_G8_B8_R8_3PLANE_420_UNORM:
            OutputString(outputFile, "VK_FORMAT_G8_B8_R8_3PLANE_420_UNORM");
            return;
        case VK_FORMAT_G8_B8R8_2PLANE_420_UNORM:
            OutputString(outputFile, "VK_FORMAT_G8_B8R8_2PLANE_420_UNORM");
            return;
        case VK_FORMAT_G8_B8_R8_3PLANE_422_UNORM:
            OutputString(outputFile, "VK_FORMAT_G8_B8_R8_3PLANE_422_UNORM");
            return;
        case VK_FORMAT_G8_B8R8_2PLANE_422_UNORM:
            OutputString(outputFile, "VK_FORMAT_G8_B8R8_2PLANE_422_UNORM");
            return;
        case VK_FORMAT_G8_B8_R8_3PLANE_444_UNORM:
            OutputString(outputFile, "VK_FORMAT_G8_B8_R8_3PLANE_444_UNORM");
            return;
        case VK_FORMAT_R10X6_UNORM_PACK16:
            OutputString(outputFile, "VK_FORMAT_R10X6_UNORM_PACK16");
            return;
        case VK_FORMAT_R10X6G10X6_UNORM_2PACK16:
            OutputString(outputFile, "VK_FORMAT_R10X6G10X6_UNORM_2PACK16");
            return;
        case VK_FORMAT_R10X6G10X6B10X6A10X6_UNORM_4PACK16:
            OutputString(outputFile, "VK_FORMAT_R10X6G10X6B10X6A10X6_UNORM_4PACK16");
            return;
        case VK_FORMAT_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16:
            OutputString(outputFile, "VK_FORMAT_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16");
            return;
        case VK_FORMAT_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16:
            OutputString(outputFile, "VK_FORMAT_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16");
            return;
        case VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16:
            OutputString(outputFile, "VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16");
            return;
        case VK_FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16:
            OutputString(outputFile, "VK_FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16");
            return;
        case VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16:
            OutputString(outputFile, "VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16");
            return;
        case VK_FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16:
            OutputString(outputFile, "VK_FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16");
            return;
        case VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16:
            OutputString(outputFile, "VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16");
            return;
        case VK_FORMAT_R12X4_UNORM_PACK16:
            OutputString(outputFile, "VK_FORMAT_R12X4_UNORM_PACK16");
            return;
        case VK_FORMAT_R12X4G12X4_UNORM_2PACK16:
            OutputString(outputFile, "VK_FORMAT_R12X4G12X4_UNORM_2PACK16");
            return;
        case VK_FORMAT_R12X4G12X4B12X4A12X4_UNORM_4PACK16:
            OutputString(outputFile, "VK_FORMAT_R12X4G12X4B12X4A12X4_UNORM_4PACK16");
            return;
        case VK_FORMAT_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16:
            OutputString(outputFile, "VK_FORMAT_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16");
            return;
        case VK_FORMAT_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16:
            OutputString(outputFile, "VK_FORMAT_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16");
            return;
        case VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16:
            OutputString(outputFile, "VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16");
            return;
        case VK_FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16:
            OutputString(outputFile, "VK_FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16");
            return;
        case VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16:
            OutputString(outputFile, "VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16");
            return;
        case VK_FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16:
            OutputString(outputFile, "VK_FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16");
            return;
        case VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16:
            OutputString(outputFile, "VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16");
            return;
        case VK_FORMAT_G16B16G16R16_422_UNORM:
            OutputString(outputFile, "VK_FORMAT_G16B16G16R16_422_UNORM");
            return;
        case VK_FORMAT_B16G16R16G16_422_UNORM:
            OutputString(outputFile, "VK_FORMAT_B16G16R16G16_422_UNORM");
            return;
        case VK_FORMAT_G16_B16_R16_3PLANE_420_UNORM:
            OutputString(outputFile, "VK_FORMAT_G16_B16_R16_3PLANE_420_UNORM");
            return;
        case VK_FORMAT_G16_B16R16_2PLANE_420_UNORM:
            OutputString(outputFile, "VK_FORMAT_G16_B16R16_2PLANE_420_UNORM");
            return;
        case VK_FORMAT_G16_B16_R16_3PLANE_422_UNORM:
            OutputString(outputFile, "VK_FORMAT_G16_B16_R16_3PLANE_422_UNORM");
            return;
        case VK_FORMAT_G16_B16R16_2PLANE_422_UNORM:
            OutputString(outputFile, "VK_FORMAT_G16_B16R16_2PLANE_422_UNORM");
            return;
        case VK_FORMAT_G16_B16_R16_3PLANE_444_UNORM:
            OutputString(outputFile, "VK_FORMAT_G16_B16_R16_3PLANE_444_UNORM");
            return;
        case VK_FORMAT_PVRTC1_2BPP_UNORM_BLOCK_IMG:
            OutputString(outputFile, "VK_FORMAT_PVRTC1_2BPP_UNORM_BLOCK_IMG");
            return;
        case VK_FORMAT_PVRTC1_4BPP_UNORM_BLOCK_IMG:
            OutputString(outputFile, "VK_FORMAT_PVRTC1_4BPP_UNORM_BLOCK_IMG");
            return;
        case VK_FORMAT_PVRTC2_2BPP_UNORM_BLOCK_IMG:
            OutputString(outputFile, "VK_FORMAT_PVRTC2_2BPP_UNORM_BLOCK_IMG");
            return;
        case VK_FORMAT_PVRTC2_4BPP_UNORM_BLOCK_IMG:
            OutputString(outputFile, "VK_FORMAT_PVRTC2_4BPP_UNORM_BLOCK_IMG");
            return;
        case VK_FORMAT_PVRTC1_2BPP_SRGB_BLOCK_IMG:
            OutputString(outputFile, "VK_FORMAT_PVRTC1_2BPP_SRGB_BLOCK_IMG");
            return;
        case VK_FORMAT_PVRTC1_4BPP_SRGB_BLOCK_IMG:
            OutputString(outputFile, "VK_FORMAT_PVRTC1_4BPP_SRGB_BLOCK_IMG");
            return;
        case VK_FORMAT_PVRTC2_2BPP_SRGB_BLOCK_IMG:
            OutputString(outputFile, "VK_FORMAT_PVRTC2_2BPP_SRGB_BLOCK_IMG");
            return;
        case VK_FORMAT_PVRTC2_4BPP_SRGB_BLOCK_IMG:
            OutputString(outputFile, "VK_FORMAT_PVRTC2_4BPP_SRGB_BLOCK_IMG");
            return;
        case VK_FORMAT_ASTC_4x4_SFLOAT_BLOCK_EXT:
            OutputString(outputFile, "VK_FORMAT_ASTC_4x4_SFLOAT_BLOCK_EXT");
            return;
        case VK_FORMAT_ASTC_5x4_SFLOAT_BLOCK_EXT:
            OutputString(outputFile, "VK_FORMAT_ASTC_5x4_SFLOAT_BLOCK_EXT");
            return;
        case VK_FORMAT_ASTC_5x5_SFLOAT_BLOCK_EXT:
            OutputString(outputFile, "VK_FORMAT_ASTC_5x5_SFLOAT_BLOCK_EXT");
            return;
        case VK_FORMAT_ASTC_6x5_SFLOAT_BLOCK_EXT:
            OutputString(outputFile, "VK_FORMAT_ASTC_6x5_SFLOAT_BLOCK_EXT");
            return;
        case VK_FORMAT_ASTC_6x6_SFLOAT_BLOCK_EXT:
            OutputString(outputFile, "VK_FORMAT_ASTC_6x6_SFLOAT_BLOCK_EXT");
            return;
        case VK_FORMAT_ASTC_8x5_SFLOAT_BLOCK_EXT:
            OutputString(outputFile, "VK_FORMAT_ASTC_8x5_SFLOAT_BLOCK_EXT");
            return;
        case VK_FORMAT_ASTC_8x6_SFLOAT_BLOCK_EXT:
            OutputString(outputFile, "VK_FORMAT_ASTC_8x6_SFLOAT_BLOCK_EXT");
            return;
        case VK_FORMAT_ASTC_8x8_SFLOAT_BLOCK_EXT:
            OutputString(outputFile, "VK_FORMAT_ASTC_8x8_SFLOAT_BLOCK_EXT");
            return;
        case VK_FORMAT_ASTC_10x5_SFLOAT_BLOCK_EXT:
            OutputString(outputFile, "VK_FORMAT_ASTC_10x5_SFLOAT_BLOCK_EXT");
            return;
        case VK_FORMAT_ASTC_10x6_SFLOAT_BLOCK_EXT:
            OutputString(outputFile, "VK_FORMAT_ASTC_10x6_SFLOAT_BLOCK_EXT");
            return;
        case VK_FORMAT_ASTC_10x8_SFLOAT_BLOCK_EXT:
            OutputString(outputFile, "VK_FORMAT_ASTC_10x8_SFLOAT_BLOCK_EXT");
            return;
        case VK_FORMAT_ASTC_10x10_SFLOAT_BLOCK_EXT:
            OutputString(outputFile, "VK_FORMAT_ASTC_10x10_SFLOAT_BLOCK_EXT");
            return;
        case VK_FORMAT_ASTC_12x10_SFLOAT_BLOCK_EXT:
            OutputString(outputFile, "VK_FORMAT_ASTC_12x10_SFLOAT_BLOCK_EXT");
            return;
        case VK_FORMAT_ASTC_12x12_SFLOAT_BLOCK_EXT:
            OutputString(outputFile, "VK_FORMAT_ASTC_12x12_SFLOAT_BLOCK_EXT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkFormatFeatureFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkFormatFeatureFlagBits e = static_cast<VkFormatFeatureFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT:
            OutputString(outputFile, "VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT");
            return;
        case VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT:
            OutputString(outputFile, "VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT");
            return;
        case VK_FORMAT_FEATURE_STORAGE_IMAGE_ATOMIC_BIT:
            OutputString(outputFile, "VK_FORMAT_FEATURE_STORAGE_IMAGE_ATOMIC_BIT");
            return;
        case VK_FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT:
            OutputString(outputFile, "VK_FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT");
            return;
        case VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_BIT:
            OutputString(outputFile, "VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_BIT");
            return;
        case VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_ATOMIC_BIT:
            OutputString(outputFile, "VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_ATOMIC_BIT");
            return;
        case VK_FORMAT_FEATURE_VERTEX_BUFFER_BIT:
            OutputString(outputFile, "VK_FORMAT_FEATURE_VERTEX_BUFFER_BIT");
            return;
        case VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT:
            OutputString(outputFile, "VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT");
            return;
        case VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BLEND_BIT:
            OutputString(outputFile, "VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BLEND_BIT");
            return;
        case VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT:
            OutputString(outputFile, "VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT");
            return;
        case VK_FORMAT_FEATURE_BLIT_SRC_BIT:
            OutputString(outputFile, "VK_FORMAT_FEATURE_BLIT_SRC_BIT");
            return;
        case VK_FORMAT_FEATURE_BLIT_DST_BIT:
            OutputString(outputFile, "VK_FORMAT_FEATURE_BLIT_DST_BIT");
            return;
        case VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT:
            OutputString(outputFile, "VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT");
            return;
        case VK_FORMAT_FEATURE_TRANSFER_SRC_BIT:
            OutputString(outputFile, "VK_FORMAT_FEATURE_TRANSFER_SRC_BIT");
            return;
        case VK_FORMAT_FEATURE_TRANSFER_DST_BIT:
            OutputString(outputFile, "VK_FORMAT_FEATURE_TRANSFER_DST_BIT");
            return;
        case VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT:
            OutputString(outputFile, "VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT");
            return;
        case VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT:
            OutputString(outputFile, "VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT");
            return;
        case VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT:
            OutputString(outputFile, "VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT");
            return;
        case VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT:
            OutputString(outputFile, "VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT");
            return;
        case VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT:
            OutputString(outputFile, "VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT");
            return;
        case VK_FORMAT_FEATURE_DISJOINT_BIT:
            OutputString(outputFile, "VK_FORMAT_FEATURE_DISJOINT_BIT");
            return;
        case VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT:
            OutputString(outputFile, "VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT");
            return;
        case VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_IMG:
            OutputString(outputFile, "VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_IMG");
            return;
        case VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_MINMAX_BIT_EXT:
            OutputString(outputFile, "VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_MINMAX_BIT_EXT");
            return;
        case VK_FORMAT_FEATURE_FRAGMENT_DENSITY_MAP_BIT_EXT:
            OutputString(outputFile, "VK_FORMAT_FEATURE_FRAGMENT_DENSITY_MAP_BIT_EXT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkImageType(FILE* outputFile, uint32_t enum_uint32)
{
    VkImageType e = static_cast<VkImageType>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_IMAGE_TYPE_1D:
            OutputString(outputFile, "VK_IMAGE_TYPE_1D");
            return;
        case VK_IMAGE_TYPE_2D:
            OutputString(outputFile, "VK_IMAGE_TYPE_2D");
            return;
        case VK_IMAGE_TYPE_3D:
            OutputString(outputFile, "VK_IMAGE_TYPE_3D");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkImageTiling(FILE* outputFile, uint32_t enum_uint32)
{
    VkImageTiling e = static_cast<VkImageTiling>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_IMAGE_TILING_OPTIMAL:
            OutputString(outputFile, "VK_IMAGE_TILING_OPTIMAL");
            return;
        case VK_IMAGE_TILING_LINEAR:
            OutputString(outputFile, "VK_IMAGE_TILING_LINEAR");
            return;
        case VK_IMAGE_TILING_DRM_FORMAT_MODIFIER_EXT:
            OutputString(outputFile, "VK_IMAGE_TILING_DRM_FORMAT_MODIFIER_EXT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkImageUsageFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkImageUsageFlagBits e = static_cast<VkImageUsageFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_IMAGE_USAGE_TRANSFER_SRC_BIT:
            OutputString(outputFile, "VK_IMAGE_USAGE_TRANSFER_SRC_BIT");
            return;
        case VK_IMAGE_USAGE_TRANSFER_DST_BIT:
            OutputString(outputFile, "VK_IMAGE_USAGE_TRANSFER_DST_BIT");
            return;
        case VK_IMAGE_USAGE_SAMPLED_BIT:
            OutputString(outputFile, "VK_IMAGE_USAGE_SAMPLED_BIT");
            return;
        case VK_IMAGE_USAGE_STORAGE_BIT:
            OutputString(outputFile, "VK_IMAGE_USAGE_STORAGE_BIT");
            return;
        case VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT:
            OutputString(outputFile, "VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT");
            return;
        case VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT:
            OutputString(outputFile, "VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT");
            return;
        case VK_IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT:
            OutputString(outputFile, "VK_IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT");
            return;
        case VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT:
            OutputString(outputFile, "VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT");
            return;
        case VK_IMAGE_USAGE_SHADING_RATE_IMAGE_BIT_NV:
            OutputString(outputFile, "VK_IMAGE_USAGE_SHADING_RATE_IMAGE_BIT_NV");
            return;
        case VK_IMAGE_USAGE_FRAGMENT_DENSITY_MAP_BIT_EXT:
            OutputString(outputFile, "VK_IMAGE_USAGE_FRAGMENT_DENSITY_MAP_BIT_EXT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkImageCreateFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkImageCreateFlagBits e = static_cast<VkImageCreateFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_IMAGE_CREATE_SPARSE_BINDING_BIT:
            OutputString(outputFile, "VK_IMAGE_CREATE_SPARSE_BINDING_BIT");
            return;
        case VK_IMAGE_CREATE_SPARSE_RESIDENCY_BIT:
            OutputString(outputFile, "VK_IMAGE_CREATE_SPARSE_RESIDENCY_BIT");
            return;
        case VK_IMAGE_CREATE_SPARSE_ALIASED_BIT:
            OutputString(outputFile, "VK_IMAGE_CREATE_SPARSE_ALIASED_BIT");
            return;
        case VK_IMAGE_CREATE_MUTABLE_FORMAT_BIT:
            OutputString(outputFile, "VK_IMAGE_CREATE_MUTABLE_FORMAT_BIT");
            return;
        case VK_IMAGE_CREATE_CUBE_COMPATIBLE_BIT:
            OutputString(outputFile, "VK_IMAGE_CREATE_CUBE_COMPATIBLE_BIT");
            return;
        case VK_IMAGE_CREATE_ALIAS_BIT:
            OutputString(outputFile, "VK_IMAGE_CREATE_ALIAS_BIT");
            return;
        case VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT:
            OutputString(outputFile, "VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT");
            return;
        case VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT:
            OutputString(outputFile, "VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT");
            return;
        case VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT:
            OutputString(outputFile, "VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT");
            return;
        case VK_IMAGE_CREATE_EXTENDED_USAGE_BIT:
            OutputString(outputFile, "VK_IMAGE_CREATE_EXTENDED_USAGE_BIT");
            return;
        case VK_IMAGE_CREATE_PROTECTED_BIT:
            OutputString(outputFile, "VK_IMAGE_CREATE_PROTECTED_BIT");
            return;
        case VK_IMAGE_CREATE_DISJOINT_BIT:
            OutputString(outputFile, "VK_IMAGE_CREATE_DISJOINT_BIT");
            return;
        case VK_IMAGE_CREATE_CORNER_SAMPLED_BIT_NV:
            OutputString(outputFile, "VK_IMAGE_CREATE_CORNER_SAMPLED_BIT_NV");
            return;
        case VK_IMAGE_CREATE_SAMPLE_LOCATIONS_COMPATIBLE_DEPTH_BIT_EXT:
            OutputString(outputFile, "VK_IMAGE_CREATE_SAMPLE_LOCATIONS_COMPATIBLE_DEPTH_BIT_EXT");
            return;
        case VK_IMAGE_CREATE_SUBSAMPLED_BIT_EXT:
            OutputString(outputFile, "VK_IMAGE_CREATE_SUBSAMPLED_BIT_EXT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkSampleCountFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkSampleCountFlagBits e = static_cast<VkSampleCountFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SAMPLE_COUNT_1_BIT:
            OutputString(outputFile, "VK_SAMPLE_COUNT_1_BIT");
            return;
        case VK_SAMPLE_COUNT_2_BIT:
            OutputString(outputFile, "VK_SAMPLE_COUNT_2_BIT");
            return;
        case VK_SAMPLE_COUNT_4_BIT:
            OutputString(outputFile, "VK_SAMPLE_COUNT_4_BIT");
            return;
        case VK_SAMPLE_COUNT_8_BIT:
            OutputString(outputFile, "VK_SAMPLE_COUNT_8_BIT");
            return;
        case VK_SAMPLE_COUNT_16_BIT:
            OutputString(outputFile, "VK_SAMPLE_COUNT_16_BIT");
            return;
        case VK_SAMPLE_COUNT_32_BIT:
            OutputString(outputFile, "VK_SAMPLE_COUNT_32_BIT");
            return;
        case VK_SAMPLE_COUNT_64_BIT:
            OutputString(outputFile, "VK_SAMPLE_COUNT_64_BIT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkPhysicalDeviceType(FILE* outputFile, uint32_t enum_uint32)
{
    VkPhysicalDeviceType e = static_cast<VkPhysicalDeviceType>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_PHYSICAL_DEVICE_TYPE_OTHER:
            OutputString(outputFile, "VK_PHYSICAL_DEVICE_TYPE_OTHER");
            return;
        case VK_PHYSICAL_DEVICE_TYPE_INTEGRATED_GPU:
            OutputString(outputFile, "VK_PHYSICAL_DEVICE_TYPE_INTEGRATED_GPU");
            return;
        case VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU:
            OutputString(outputFile, "VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU");
            return;
        case VK_PHYSICAL_DEVICE_TYPE_VIRTUAL_GPU:
            OutputString(outputFile, "VK_PHYSICAL_DEVICE_TYPE_VIRTUAL_GPU");
            return;
        case VK_PHYSICAL_DEVICE_TYPE_CPU:
            OutputString(outputFile, "VK_PHYSICAL_DEVICE_TYPE_CPU");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkQueueFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkQueueFlagBits e = static_cast<VkQueueFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_QUEUE_GRAPHICS_BIT:
            OutputString(outputFile, "VK_QUEUE_GRAPHICS_BIT");
            return;
        case VK_QUEUE_COMPUTE_BIT:
            OutputString(outputFile, "VK_QUEUE_COMPUTE_BIT");
            return;
        case VK_QUEUE_TRANSFER_BIT:
            OutputString(outputFile, "VK_QUEUE_TRANSFER_BIT");
            return;
        case VK_QUEUE_SPARSE_BINDING_BIT:
            OutputString(outputFile, "VK_QUEUE_SPARSE_BINDING_BIT");
            return;
        case VK_QUEUE_PROTECTED_BIT:
            OutputString(outputFile, "VK_QUEUE_PROTECTED_BIT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkMemoryPropertyFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkMemoryPropertyFlagBits e = static_cast<VkMemoryPropertyFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT:
            OutputString(outputFile, "VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT");
            return;
        case VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT:
            OutputString(outputFile, "VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT");
            return;
        case VK_MEMORY_PROPERTY_HOST_COHERENT_BIT:
            OutputString(outputFile, "VK_MEMORY_PROPERTY_HOST_COHERENT_BIT");
            return;
        case VK_MEMORY_PROPERTY_HOST_CACHED_BIT:
            OutputString(outputFile, "VK_MEMORY_PROPERTY_HOST_CACHED_BIT");
            return;
        case VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT:
            OutputString(outputFile, "VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT");
            return;
        case VK_MEMORY_PROPERTY_PROTECTED_BIT:
            OutputString(outputFile, "VK_MEMORY_PROPERTY_PROTECTED_BIT");
            return;
        case VK_MEMORY_PROPERTY_DEVICE_COHERENT_BIT_AMD:
            OutputString(outputFile, "VK_MEMORY_PROPERTY_DEVICE_COHERENT_BIT_AMD");
            return;
        case VK_MEMORY_PROPERTY_DEVICE_UNCACHED_BIT_AMD:
            OutputString(outputFile, "VK_MEMORY_PROPERTY_DEVICE_UNCACHED_BIT_AMD");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkMemoryHeapFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkMemoryHeapFlagBits e = static_cast<VkMemoryHeapFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_MEMORY_HEAP_DEVICE_LOCAL_BIT:
            OutputString(outputFile, "VK_MEMORY_HEAP_DEVICE_LOCAL_BIT");
            return;
        case VK_MEMORY_HEAP_MULTI_INSTANCE_BIT:
            OutputString(outputFile, "VK_MEMORY_HEAP_MULTI_INSTANCE_BIT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkDeviceQueueCreateFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkDeviceQueueCreateFlagBits e = static_cast<VkDeviceQueueCreateFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_DEVICE_QUEUE_CREATE_PROTECTED_BIT:
            OutputString(outputFile, "VK_DEVICE_QUEUE_CREATE_PROTECTED_BIT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkPipelineStageFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkPipelineStageFlagBits e = static_cast<VkPipelineStageFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT:
            OutputString(outputFile, "VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT");
            return;
        case VK_PIPELINE_STAGE_DRAW_INDIRECT_BIT:
            OutputString(outputFile, "VK_PIPELINE_STAGE_DRAW_INDIRECT_BIT");
            return;
        case VK_PIPELINE_STAGE_VERTEX_INPUT_BIT:
            OutputString(outputFile, "VK_PIPELINE_STAGE_VERTEX_INPUT_BIT");
            return;
        case VK_PIPELINE_STAGE_VERTEX_SHADER_BIT:
            OutputString(outputFile, "VK_PIPELINE_STAGE_VERTEX_SHADER_BIT");
            return;
        case VK_PIPELINE_STAGE_TESSELLATION_CONTROL_SHADER_BIT:
            OutputString(outputFile, "VK_PIPELINE_STAGE_TESSELLATION_CONTROL_SHADER_BIT");
            return;
        case VK_PIPELINE_STAGE_TESSELLATION_EVALUATION_SHADER_BIT:
            OutputString(outputFile, "VK_PIPELINE_STAGE_TESSELLATION_EVALUATION_SHADER_BIT");
            return;
        case VK_PIPELINE_STAGE_GEOMETRY_SHADER_BIT:
            OutputString(outputFile, "VK_PIPELINE_STAGE_GEOMETRY_SHADER_BIT");
            return;
        case VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT:
            OutputString(outputFile, "VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT");
            return;
        case VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT:
            OutputString(outputFile, "VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT");
            return;
        case VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT:
            OutputString(outputFile, "VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT");
            return;
        case VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT:
            OutputString(outputFile, "VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT");
            return;
        case VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT:
            OutputString(outputFile, "VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT");
            return;
        case VK_PIPELINE_STAGE_TRANSFER_BIT:
            OutputString(outputFile, "VK_PIPELINE_STAGE_TRANSFER_BIT");
            return;
        case VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT:
            OutputString(outputFile, "VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT");
            return;
        case VK_PIPELINE_STAGE_HOST_BIT:
            OutputString(outputFile, "VK_PIPELINE_STAGE_HOST_BIT");
            return;
        case VK_PIPELINE_STAGE_ALL_GRAPHICS_BIT:
            OutputString(outputFile, "VK_PIPELINE_STAGE_ALL_GRAPHICS_BIT");
            return;
        case VK_PIPELINE_STAGE_ALL_COMMANDS_BIT:
            OutputString(outputFile, "VK_PIPELINE_STAGE_ALL_COMMANDS_BIT");
            return;
        case VK_PIPELINE_STAGE_TRANSFORM_FEEDBACK_BIT_EXT:
            OutputString(outputFile, "VK_PIPELINE_STAGE_TRANSFORM_FEEDBACK_BIT_EXT");
            return;
        case VK_PIPELINE_STAGE_CONDITIONAL_RENDERING_BIT_EXT:
            OutputString(outputFile, "VK_PIPELINE_STAGE_CONDITIONAL_RENDERING_BIT_EXT");
            return;
        case VK_PIPELINE_STAGE_COMMAND_PROCESS_BIT_NVX:
            OutputString(outputFile, "VK_PIPELINE_STAGE_COMMAND_PROCESS_BIT_NVX");
            return;
        case VK_PIPELINE_STAGE_SHADING_RATE_IMAGE_BIT_NV:
            OutputString(outputFile, "VK_PIPELINE_STAGE_SHADING_RATE_IMAGE_BIT_NV");
            return;
        case VK_PIPELINE_STAGE_RAY_TRACING_SHADER_BIT_NV:
            OutputString(outputFile, "VK_PIPELINE_STAGE_RAY_TRACING_SHADER_BIT_NV");
            return;
        case VK_PIPELINE_STAGE_ACCELERATION_STRUCTURE_BUILD_BIT_NV:
            OutputString(outputFile, "VK_PIPELINE_STAGE_ACCELERATION_STRUCTURE_BUILD_BIT_NV");
            return;
        case VK_PIPELINE_STAGE_TASK_SHADER_BIT_NV:
            OutputString(outputFile, "VK_PIPELINE_STAGE_TASK_SHADER_BIT_NV");
            return;
        case VK_PIPELINE_STAGE_MESH_SHADER_BIT_NV:
            OutputString(outputFile, "VK_PIPELINE_STAGE_MESH_SHADER_BIT_NV");
            return;
        case VK_PIPELINE_STAGE_FRAGMENT_DENSITY_PROCESS_BIT_EXT:
            OutputString(outputFile, "VK_PIPELINE_STAGE_FRAGMENT_DENSITY_PROCESS_BIT_EXT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkImageAspectFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkImageAspectFlagBits e = static_cast<VkImageAspectFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_IMAGE_ASPECT_COLOR_BIT:
            OutputString(outputFile, "VK_IMAGE_ASPECT_COLOR_BIT");
            return;
        case VK_IMAGE_ASPECT_DEPTH_BIT:
            OutputString(outputFile, "VK_IMAGE_ASPECT_DEPTH_BIT");
            return;
        case VK_IMAGE_ASPECT_STENCIL_BIT:
            OutputString(outputFile, "VK_IMAGE_ASPECT_STENCIL_BIT");
            return;
        case VK_IMAGE_ASPECT_METADATA_BIT:
            OutputString(outputFile, "VK_IMAGE_ASPECT_METADATA_BIT");
            return;
        case VK_IMAGE_ASPECT_PLANE_0_BIT:
            OutputString(outputFile, "VK_IMAGE_ASPECT_PLANE_0_BIT");
            return;
        case VK_IMAGE_ASPECT_PLANE_1_BIT:
            OutputString(outputFile, "VK_IMAGE_ASPECT_PLANE_1_BIT");
            return;
        case VK_IMAGE_ASPECT_PLANE_2_BIT:
            OutputString(outputFile, "VK_IMAGE_ASPECT_PLANE_2_BIT");
            return;
        case VK_IMAGE_ASPECT_MEMORY_PLANE_0_BIT_EXT:
            OutputString(outputFile, "VK_IMAGE_ASPECT_MEMORY_PLANE_0_BIT_EXT");
            return;
        case VK_IMAGE_ASPECT_MEMORY_PLANE_1_BIT_EXT:
            OutputString(outputFile, "VK_IMAGE_ASPECT_MEMORY_PLANE_1_BIT_EXT");
            return;
        case VK_IMAGE_ASPECT_MEMORY_PLANE_2_BIT_EXT:
            OutputString(outputFile, "VK_IMAGE_ASPECT_MEMORY_PLANE_2_BIT_EXT");
            return;
        case VK_IMAGE_ASPECT_MEMORY_PLANE_3_BIT_EXT:
            OutputString(outputFile, "VK_IMAGE_ASPECT_MEMORY_PLANE_3_BIT_EXT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkSparseImageFormatFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkSparseImageFormatFlagBits e = static_cast<VkSparseImageFormatFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SPARSE_IMAGE_FORMAT_SINGLE_MIPTAIL_BIT:
            OutputString(outputFile, "VK_SPARSE_IMAGE_FORMAT_SINGLE_MIPTAIL_BIT");
            return;
        case VK_SPARSE_IMAGE_FORMAT_ALIGNED_MIP_SIZE_BIT:
            OutputString(outputFile, "VK_SPARSE_IMAGE_FORMAT_ALIGNED_MIP_SIZE_BIT");
            return;
        case VK_SPARSE_IMAGE_FORMAT_NONSTANDARD_BLOCK_SIZE_BIT:
            OutputString(outputFile, "VK_SPARSE_IMAGE_FORMAT_NONSTANDARD_BLOCK_SIZE_BIT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkSparseMemoryBindFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkSparseMemoryBindFlagBits e = static_cast<VkSparseMemoryBindFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SPARSE_MEMORY_BIND_METADATA_BIT:
            OutputString(outputFile, "VK_SPARSE_MEMORY_BIND_METADATA_BIT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkFenceCreateFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkFenceCreateFlagBits e = static_cast<VkFenceCreateFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_FENCE_CREATE_SIGNALED_BIT:
            OutputString(outputFile, "VK_FENCE_CREATE_SIGNALED_BIT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkQueryType(FILE* outputFile, uint32_t enum_uint32)
{
    VkQueryType e = static_cast<VkQueryType>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_QUERY_TYPE_OCCLUSION:
            OutputString(outputFile, "VK_QUERY_TYPE_OCCLUSION");
            return;
        case VK_QUERY_TYPE_PIPELINE_STATISTICS:
            OutputString(outputFile, "VK_QUERY_TYPE_PIPELINE_STATISTICS");
            return;
        case VK_QUERY_TYPE_TIMESTAMP:
            OutputString(outputFile, "VK_QUERY_TYPE_TIMESTAMP");
            return;
        case VK_QUERY_TYPE_TRANSFORM_FEEDBACK_STREAM_EXT:
            OutputString(outputFile, "VK_QUERY_TYPE_TRANSFORM_FEEDBACK_STREAM_EXT");
            return;
        case VK_QUERY_TYPE_ACCELERATION_STRUCTURE_COMPACTED_SIZE_NV:
            OutputString(outputFile, "VK_QUERY_TYPE_ACCELERATION_STRUCTURE_COMPACTED_SIZE_NV");
            return;
        case VK_QUERY_TYPE_PERFORMANCE_QUERY_INTEL:
            OutputString(outputFile, "VK_QUERY_TYPE_PERFORMANCE_QUERY_INTEL");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkQueryPipelineStatisticFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkQueryPipelineStatisticFlagBits e = static_cast<VkQueryPipelineStatisticFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_VERTICES_BIT:
            OutputString(outputFile, "VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_VERTICES_BIT");
            return;
        case VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_PRIMITIVES_BIT:
            OutputString(outputFile, "VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_PRIMITIVES_BIT");
            return;
        case VK_QUERY_PIPELINE_STATISTIC_VERTEX_SHADER_INVOCATIONS_BIT:
            OutputString(outputFile, "VK_QUERY_PIPELINE_STATISTIC_VERTEX_SHADER_INVOCATIONS_BIT");
            return;
        case VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_INVOCATIONS_BIT:
            OutputString(outputFile, "VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_INVOCATIONS_BIT");
            return;
        case VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_PRIMITIVES_BIT:
            OutputString(outputFile, "VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_PRIMITIVES_BIT");
            return;
        case VK_QUERY_PIPELINE_STATISTIC_CLIPPING_INVOCATIONS_BIT:
            OutputString(outputFile, "VK_QUERY_PIPELINE_STATISTIC_CLIPPING_INVOCATIONS_BIT");
            return;
        case VK_QUERY_PIPELINE_STATISTIC_CLIPPING_PRIMITIVES_BIT:
            OutputString(outputFile, "VK_QUERY_PIPELINE_STATISTIC_CLIPPING_PRIMITIVES_BIT");
            return;
        case VK_QUERY_PIPELINE_STATISTIC_FRAGMENT_SHADER_INVOCATIONS_BIT:
            OutputString(outputFile, "VK_QUERY_PIPELINE_STATISTIC_FRAGMENT_SHADER_INVOCATIONS_BIT");
            return;
        case VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_CONTROL_SHADER_PATCHES_BIT:
            OutputString(outputFile, "VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_CONTROL_SHADER_PATCHES_BIT");
            return;
        case VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_EVALUATION_SHADER_INVOCATIONS_BIT:
            OutputString(outputFile, "VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_EVALUATION_SHADER_INVOCATIONS_BIT");
            return;
        case VK_QUERY_PIPELINE_STATISTIC_COMPUTE_SHADER_INVOCATIONS_BIT:
            OutputString(outputFile, "VK_QUERY_PIPELINE_STATISTIC_COMPUTE_SHADER_INVOCATIONS_BIT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkQueryResultFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkQueryResultFlagBits e = static_cast<VkQueryResultFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_QUERY_RESULT_64_BIT:
            OutputString(outputFile, "VK_QUERY_RESULT_64_BIT");
            return;
        case VK_QUERY_RESULT_WAIT_BIT:
            OutputString(outputFile, "VK_QUERY_RESULT_WAIT_BIT");
            return;
        case VK_QUERY_RESULT_WITH_AVAILABILITY_BIT:
            OutputString(outputFile, "VK_QUERY_RESULT_WITH_AVAILABILITY_BIT");
            return;
        case VK_QUERY_RESULT_PARTIAL_BIT:
            OutputString(outputFile, "VK_QUERY_RESULT_PARTIAL_BIT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkBufferCreateFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkBufferCreateFlagBits e = static_cast<VkBufferCreateFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_BUFFER_CREATE_SPARSE_BINDING_BIT:
            OutputString(outputFile, "VK_BUFFER_CREATE_SPARSE_BINDING_BIT");
            return;
        case VK_BUFFER_CREATE_SPARSE_RESIDENCY_BIT:
            OutputString(outputFile, "VK_BUFFER_CREATE_SPARSE_RESIDENCY_BIT");
            return;
        case VK_BUFFER_CREATE_SPARSE_ALIASED_BIT:
            OutputString(outputFile, "VK_BUFFER_CREATE_SPARSE_ALIASED_BIT");
            return;
        case VK_BUFFER_CREATE_PROTECTED_BIT:
            OutputString(outputFile, "VK_BUFFER_CREATE_PROTECTED_BIT");
            return;
        case VK_BUFFER_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_EXT:
            OutputString(outputFile, "VK_BUFFER_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_EXT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkBufferUsageFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkBufferUsageFlagBits e = static_cast<VkBufferUsageFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_BUFFER_USAGE_TRANSFER_SRC_BIT:
            OutputString(outputFile, "VK_BUFFER_USAGE_TRANSFER_SRC_BIT");
            return;
        case VK_BUFFER_USAGE_TRANSFER_DST_BIT:
            OutputString(outputFile, "VK_BUFFER_USAGE_TRANSFER_DST_BIT");
            return;
        case VK_BUFFER_USAGE_UNIFORM_TEXEL_BUFFER_BIT:
            OutputString(outputFile, "VK_BUFFER_USAGE_UNIFORM_TEXEL_BUFFER_BIT");
            return;
        case VK_BUFFER_USAGE_STORAGE_TEXEL_BUFFER_BIT:
            OutputString(outputFile, "VK_BUFFER_USAGE_STORAGE_TEXEL_BUFFER_BIT");
            return;
        case VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT:
            OutputString(outputFile, "VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT");
            return;
        case VK_BUFFER_USAGE_STORAGE_BUFFER_BIT:
            OutputString(outputFile, "VK_BUFFER_USAGE_STORAGE_BUFFER_BIT");
            return;
        case VK_BUFFER_USAGE_INDEX_BUFFER_BIT:
            OutputString(outputFile, "VK_BUFFER_USAGE_INDEX_BUFFER_BIT");
            return;
        case VK_BUFFER_USAGE_VERTEX_BUFFER_BIT:
            OutputString(outputFile, "VK_BUFFER_USAGE_VERTEX_BUFFER_BIT");
            return;
        case VK_BUFFER_USAGE_INDIRECT_BUFFER_BIT:
            OutputString(outputFile, "VK_BUFFER_USAGE_INDIRECT_BUFFER_BIT");
            return;
        case VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_BUFFER_BIT_EXT:
            OutputString(outputFile, "VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_BUFFER_BIT_EXT");
            return;
        case VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_COUNTER_BUFFER_BIT_EXT:
            OutputString(outputFile, "VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_COUNTER_BUFFER_BIT_EXT");
            return;
        case VK_BUFFER_USAGE_CONDITIONAL_RENDERING_BIT_EXT:
            OutputString(outputFile, "VK_BUFFER_USAGE_CONDITIONAL_RENDERING_BIT_EXT");
            return;
        case VK_BUFFER_USAGE_RAY_TRACING_BIT_NV:
            OutputString(outputFile, "VK_BUFFER_USAGE_RAY_TRACING_BIT_NV");
            return;
        case VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT_EXT:
            OutputString(outputFile, "VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT_EXT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkSharingMode(FILE* outputFile, uint32_t enum_uint32)
{
    VkSharingMode e = static_cast<VkSharingMode>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SHARING_MODE_EXCLUSIVE:
            OutputString(outputFile, "VK_SHARING_MODE_EXCLUSIVE");
            return;
        case VK_SHARING_MODE_CONCURRENT:
            OutputString(outputFile, "VK_SHARING_MODE_CONCURRENT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkImageLayout(FILE* outputFile, uint32_t enum_uint32)
{
    VkImageLayout e = static_cast<VkImageLayout>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_IMAGE_LAYOUT_UNDEFINED:
            OutputString(outputFile, "VK_IMAGE_LAYOUT_UNDEFINED");
            return;
        case VK_IMAGE_LAYOUT_GENERAL:
            OutputString(outputFile, "VK_IMAGE_LAYOUT_GENERAL");
            return;
        case VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL:
            OutputString(outputFile, "VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL");
            return;
        case VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL:
            OutputString(outputFile, "VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL");
            return;
        case VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL:
            OutputString(outputFile, "VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL");
            return;
        case VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL:
            OutputString(outputFile, "VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL");
            return;
        case VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL:
            OutputString(outputFile, "VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL");
            return;
        case VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL:
            OutputString(outputFile, "VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL");
            return;
        case VK_IMAGE_LAYOUT_PREINITIALIZED:
            OutputString(outputFile, "VK_IMAGE_LAYOUT_PREINITIALIZED");
            return;
        case VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL:
            OutputString(outputFile, "VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL");
            return;
        case VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL:
            OutputString(outputFile, "VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL");
            return;
        case VK_IMAGE_LAYOUT_PRESENT_SRC_KHR:
            OutputString(outputFile, "VK_IMAGE_LAYOUT_PRESENT_SRC_KHR");
            return;
        case VK_IMAGE_LAYOUT_SHARED_PRESENT_KHR:
            OutputString(outputFile, "VK_IMAGE_LAYOUT_SHARED_PRESENT_KHR");
            return;
        case VK_IMAGE_LAYOUT_SHADING_RATE_OPTIMAL_NV:
            OutputString(outputFile, "VK_IMAGE_LAYOUT_SHADING_RATE_OPTIMAL_NV");
            return;
        case VK_IMAGE_LAYOUT_FRAGMENT_DENSITY_MAP_OPTIMAL_EXT:
            OutputString(outputFile, "VK_IMAGE_LAYOUT_FRAGMENT_DENSITY_MAP_OPTIMAL_EXT");
            return;
        case VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_OPTIMAL_KHR:
            OutputString(outputFile, "VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_OPTIMAL_KHR");
            return;
        case VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_OPTIMAL_KHR:
            OutputString(outputFile, "VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_OPTIMAL_KHR");
            return;
        case VK_IMAGE_LAYOUT_STENCIL_ATTACHMENT_OPTIMAL_KHR:
            OutputString(outputFile, "VK_IMAGE_LAYOUT_STENCIL_ATTACHMENT_OPTIMAL_KHR");
            return;
        case VK_IMAGE_LAYOUT_STENCIL_READ_ONLY_OPTIMAL_KHR:
            OutputString(outputFile, "VK_IMAGE_LAYOUT_STENCIL_READ_ONLY_OPTIMAL_KHR");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkImageViewCreateFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkImageViewCreateFlagBits e = static_cast<VkImageViewCreateFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_IMAGE_VIEW_CREATE_FRAGMENT_DENSITY_MAP_DYNAMIC_BIT_EXT:
            OutputString(outputFile, "VK_IMAGE_VIEW_CREATE_FRAGMENT_DENSITY_MAP_DYNAMIC_BIT_EXT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkImageViewType(FILE* outputFile, uint32_t enum_uint32)
{
    VkImageViewType e = static_cast<VkImageViewType>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_IMAGE_VIEW_TYPE_1D:
            OutputString(outputFile, "VK_IMAGE_VIEW_TYPE_1D");
            return;
        case VK_IMAGE_VIEW_TYPE_2D:
            OutputString(outputFile, "VK_IMAGE_VIEW_TYPE_2D");
            return;
        case VK_IMAGE_VIEW_TYPE_3D:
            OutputString(outputFile, "VK_IMAGE_VIEW_TYPE_3D");
            return;
        case VK_IMAGE_VIEW_TYPE_CUBE:
            OutputString(outputFile, "VK_IMAGE_VIEW_TYPE_CUBE");
            return;
        case VK_IMAGE_VIEW_TYPE_1D_ARRAY:
            OutputString(outputFile, "VK_IMAGE_VIEW_TYPE_1D_ARRAY");
            return;
        case VK_IMAGE_VIEW_TYPE_2D_ARRAY:
            OutputString(outputFile, "VK_IMAGE_VIEW_TYPE_2D_ARRAY");
            return;
        case VK_IMAGE_VIEW_TYPE_CUBE_ARRAY:
            OutputString(outputFile, "VK_IMAGE_VIEW_TYPE_CUBE_ARRAY");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkComponentSwizzle(FILE* outputFile, uint32_t enum_uint32)
{
    VkComponentSwizzle e = static_cast<VkComponentSwizzle>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_COMPONENT_SWIZZLE_IDENTITY:
            OutputString(outputFile, "VK_COMPONENT_SWIZZLE_IDENTITY");
            return;
        case VK_COMPONENT_SWIZZLE_ZERO:
            OutputString(outputFile, "VK_COMPONENT_SWIZZLE_ZERO");
            return;
        case VK_COMPONENT_SWIZZLE_ONE:
            OutputString(outputFile, "VK_COMPONENT_SWIZZLE_ONE");
            return;
        case VK_COMPONENT_SWIZZLE_R:
            OutputString(outputFile, "VK_COMPONENT_SWIZZLE_R");
            return;
        case VK_COMPONENT_SWIZZLE_G:
            OutputString(outputFile, "VK_COMPONENT_SWIZZLE_G");
            return;
        case VK_COMPONENT_SWIZZLE_B:
            OutputString(outputFile, "VK_COMPONENT_SWIZZLE_B");
            return;
        case VK_COMPONENT_SWIZZLE_A:
            OutputString(outputFile, "VK_COMPONENT_SWIZZLE_A");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkShaderModuleCreateFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkShaderModuleCreateFlagBits e = static_cast<VkShaderModuleCreateFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    OutputString(outputFile, "UNKNOWN");
}

void EnumToStringVkPipelineCreateFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkPipelineCreateFlagBits e = static_cast<VkPipelineCreateFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_PIPELINE_CREATE_DISABLE_OPTIMIZATION_BIT:
            OutputString(outputFile, "VK_PIPELINE_CREATE_DISABLE_OPTIMIZATION_BIT");
            return;
        case VK_PIPELINE_CREATE_ALLOW_DERIVATIVES_BIT:
            OutputString(outputFile, "VK_PIPELINE_CREATE_ALLOW_DERIVATIVES_BIT");
            return;
        case VK_PIPELINE_CREATE_DERIVATIVE_BIT:
            OutputString(outputFile, "VK_PIPELINE_CREATE_DERIVATIVE_BIT");
            return;
        case VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT:
            OutputString(outputFile, "VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT");
            return;
        case VK_PIPELINE_CREATE_DISPATCH_BASE:
            OutputString(outputFile, "VK_PIPELINE_CREATE_DISPATCH_BASE");
            return;
        case VK_PIPELINE_CREATE_DEFER_COMPILE_BIT_NV:
            OutputString(outputFile, "VK_PIPELINE_CREATE_DEFER_COMPILE_BIT_NV");
            return;
        case VK_PIPELINE_CREATE_CAPTURE_STATISTICS_BIT_KHR:
            OutputString(outputFile, "VK_PIPELINE_CREATE_CAPTURE_STATISTICS_BIT_KHR");
            return;
        case VK_PIPELINE_CREATE_CAPTURE_INTERNAL_REPRESENTATIONS_BIT_KHR:
            OutputString(outputFile, "VK_PIPELINE_CREATE_CAPTURE_INTERNAL_REPRESENTATIONS_BIT_KHR");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkPipelineShaderStageCreateFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkPipelineShaderStageCreateFlagBits e = static_cast<VkPipelineShaderStageCreateFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_PIPELINE_SHADER_STAGE_CREATE_ALLOW_VARYING_SUBGROUP_SIZE_BIT_EXT:
            OutputString(outputFile, "VK_PIPELINE_SHADER_STAGE_CREATE_ALLOW_VARYING_SUBGROUP_SIZE_BIT_EXT");
            return;
        case VK_PIPELINE_SHADER_STAGE_CREATE_REQUIRE_FULL_SUBGROUPS_BIT_EXT:
            OutputString(outputFile, "VK_PIPELINE_SHADER_STAGE_CREATE_REQUIRE_FULL_SUBGROUPS_BIT_EXT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkShaderStageFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkShaderStageFlagBits e = static_cast<VkShaderStageFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SHADER_STAGE_VERTEX_BIT:
            OutputString(outputFile, "VK_SHADER_STAGE_VERTEX_BIT");
            return;
        case VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT:
            OutputString(outputFile, "VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT");
            return;
        case VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT:
            OutputString(outputFile, "VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT");
            return;
        case VK_SHADER_STAGE_GEOMETRY_BIT:
            OutputString(outputFile, "VK_SHADER_STAGE_GEOMETRY_BIT");
            return;
        case VK_SHADER_STAGE_FRAGMENT_BIT:
            OutputString(outputFile, "VK_SHADER_STAGE_FRAGMENT_BIT");
            return;
        case VK_SHADER_STAGE_COMPUTE_BIT:
            OutputString(outputFile, "VK_SHADER_STAGE_COMPUTE_BIT");
            return;
        case VK_SHADER_STAGE_ALL_GRAPHICS:
            OutputString(outputFile, "VK_SHADER_STAGE_ALL_GRAPHICS");
            return;
        case VK_SHADER_STAGE_ALL:
            OutputString(outputFile, "VK_SHADER_STAGE_ALL");
            return;
        case VK_SHADER_STAGE_RAYGEN_BIT_NV:
            OutputString(outputFile, "VK_SHADER_STAGE_RAYGEN_BIT_NV");
            return;
        case VK_SHADER_STAGE_ANY_HIT_BIT_NV:
            OutputString(outputFile, "VK_SHADER_STAGE_ANY_HIT_BIT_NV");
            return;
        case VK_SHADER_STAGE_CLOSEST_HIT_BIT_NV:
            OutputString(outputFile, "VK_SHADER_STAGE_CLOSEST_HIT_BIT_NV");
            return;
        case VK_SHADER_STAGE_MISS_BIT_NV:
            OutputString(outputFile, "VK_SHADER_STAGE_MISS_BIT_NV");
            return;
        case VK_SHADER_STAGE_INTERSECTION_BIT_NV:
            OutputString(outputFile, "VK_SHADER_STAGE_INTERSECTION_BIT_NV");
            return;
        case VK_SHADER_STAGE_CALLABLE_BIT_NV:
            OutputString(outputFile, "VK_SHADER_STAGE_CALLABLE_BIT_NV");
            return;
        case VK_SHADER_STAGE_TASK_BIT_NV:
            OutputString(outputFile, "VK_SHADER_STAGE_TASK_BIT_NV");
            return;
        case VK_SHADER_STAGE_MESH_BIT_NV:
            OutputString(outputFile, "VK_SHADER_STAGE_MESH_BIT_NV");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkVertexInputRate(FILE* outputFile, uint32_t enum_uint32)
{
    VkVertexInputRate e = static_cast<VkVertexInputRate>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_VERTEX_INPUT_RATE_VERTEX:
            OutputString(outputFile, "VK_VERTEX_INPUT_RATE_VERTEX");
            return;
        case VK_VERTEX_INPUT_RATE_INSTANCE:
            OutputString(outputFile, "VK_VERTEX_INPUT_RATE_INSTANCE");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkPrimitiveTopology(FILE* outputFile, uint32_t enum_uint32)
{
    VkPrimitiveTopology e = static_cast<VkPrimitiveTopology>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_PRIMITIVE_TOPOLOGY_POINT_LIST:
            OutputString(outputFile, "VK_PRIMITIVE_TOPOLOGY_POINT_LIST");
            return;
        case VK_PRIMITIVE_TOPOLOGY_LINE_LIST:
            OutputString(outputFile, "VK_PRIMITIVE_TOPOLOGY_LINE_LIST");
            return;
        case VK_PRIMITIVE_TOPOLOGY_LINE_STRIP:
            OutputString(outputFile, "VK_PRIMITIVE_TOPOLOGY_LINE_STRIP");
            return;
        case VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST:
            OutputString(outputFile, "VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST");
            return;
        case VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP:
            OutputString(outputFile, "VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP");
            return;
        case VK_PRIMITIVE_TOPOLOGY_TRIANGLE_FAN:
            OutputString(outputFile, "VK_PRIMITIVE_TOPOLOGY_TRIANGLE_FAN");
            return;
        case VK_PRIMITIVE_TOPOLOGY_LINE_LIST_WITH_ADJACENCY:
            OutputString(outputFile, "VK_PRIMITIVE_TOPOLOGY_LINE_LIST_WITH_ADJACENCY");
            return;
        case VK_PRIMITIVE_TOPOLOGY_LINE_STRIP_WITH_ADJACENCY:
            OutputString(outputFile, "VK_PRIMITIVE_TOPOLOGY_LINE_STRIP_WITH_ADJACENCY");
            return;
        case VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST_WITH_ADJACENCY:
            OutputString(outputFile, "VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST_WITH_ADJACENCY");
            return;
        case VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP_WITH_ADJACENCY:
            OutputString(outputFile, "VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP_WITH_ADJACENCY");
            return;
        case VK_PRIMITIVE_TOPOLOGY_PATCH_LIST:
            OutputString(outputFile, "VK_PRIMITIVE_TOPOLOGY_PATCH_LIST");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkPolygonMode(FILE* outputFile, uint32_t enum_uint32)
{
    VkPolygonMode e = static_cast<VkPolygonMode>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_POLYGON_MODE_FILL:
            OutputString(outputFile, "VK_POLYGON_MODE_FILL");
            return;
        case VK_POLYGON_MODE_LINE:
            OutputString(outputFile, "VK_POLYGON_MODE_LINE");
            return;
        case VK_POLYGON_MODE_POINT:
            OutputString(outputFile, "VK_POLYGON_MODE_POINT");
            return;
        case VK_POLYGON_MODE_FILL_RECTANGLE_NV:
            OutputString(outputFile, "VK_POLYGON_MODE_FILL_RECTANGLE_NV");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkCullModeFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkCullModeFlagBits e = static_cast<VkCullModeFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_CULL_MODE_NONE:
            OutputString(outputFile, "VK_CULL_MODE_NONE");
            return;
        case VK_CULL_MODE_FRONT_BIT:
            OutputString(outputFile, "VK_CULL_MODE_FRONT_BIT");
            return;
        case VK_CULL_MODE_BACK_BIT:
            OutputString(outputFile, "VK_CULL_MODE_BACK_BIT");
            return;
        case VK_CULL_MODE_FRONT_AND_BACK:
            OutputString(outputFile, "VK_CULL_MODE_FRONT_AND_BACK");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkFrontFace(FILE* outputFile, uint32_t enum_uint32)
{
    VkFrontFace e = static_cast<VkFrontFace>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_FRONT_FACE_COUNTER_CLOCKWISE:
            OutputString(outputFile, "VK_FRONT_FACE_COUNTER_CLOCKWISE");
            return;
        case VK_FRONT_FACE_CLOCKWISE:
            OutputString(outputFile, "VK_FRONT_FACE_CLOCKWISE");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkCompareOp(FILE* outputFile, uint32_t enum_uint32)
{
    VkCompareOp e = static_cast<VkCompareOp>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_COMPARE_OP_NEVER:
            OutputString(outputFile, "VK_COMPARE_OP_NEVER");
            return;
        case VK_COMPARE_OP_LESS:
            OutputString(outputFile, "VK_COMPARE_OP_LESS");
            return;
        case VK_COMPARE_OP_EQUAL:
            OutputString(outputFile, "VK_COMPARE_OP_EQUAL");
            return;
        case VK_COMPARE_OP_LESS_OR_EQUAL:
            OutputString(outputFile, "VK_COMPARE_OP_LESS_OR_EQUAL");
            return;
        case VK_COMPARE_OP_GREATER:
            OutputString(outputFile, "VK_COMPARE_OP_GREATER");
            return;
        case VK_COMPARE_OP_NOT_EQUAL:
            OutputString(outputFile, "VK_COMPARE_OP_NOT_EQUAL");
            return;
        case VK_COMPARE_OP_GREATER_OR_EQUAL:
            OutputString(outputFile, "VK_COMPARE_OP_GREATER_OR_EQUAL");
            return;
        case VK_COMPARE_OP_ALWAYS:
            OutputString(outputFile, "VK_COMPARE_OP_ALWAYS");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkStencilOp(FILE* outputFile, uint32_t enum_uint32)
{
    VkStencilOp e = static_cast<VkStencilOp>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_STENCIL_OP_KEEP:
            OutputString(outputFile, "VK_STENCIL_OP_KEEP");
            return;
        case VK_STENCIL_OP_ZERO:
            OutputString(outputFile, "VK_STENCIL_OP_ZERO");
            return;
        case VK_STENCIL_OP_REPLACE:
            OutputString(outputFile, "VK_STENCIL_OP_REPLACE");
            return;
        case VK_STENCIL_OP_INCREMENT_AND_CLAMP:
            OutputString(outputFile, "VK_STENCIL_OP_INCREMENT_AND_CLAMP");
            return;
        case VK_STENCIL_OP_DECREMENT_AND_CLAMP:
            OutputString(outputFile, "VK_STENCIL_OP_DECREMENT_AND_CLAMP");
            return;
        case VK_STENCIL_OP_INVERT:
            OutputString(outputFile, "VK_STENCIL_OP_INVERT");
            return;
        case VK_STENCIL_OP_INCREMENT_AND_WRAP:
            OutputString(outputFile, "VK_STENCIL_OP_INCREMENT_AND_WRAP");
            return;
        case VK_STENCIL_OP_DECREMENT_AND_WRAP:
            OutputString(outputFile, "VK_STENCIL_OP_DECREMENT_AND_WRAP");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkLogicOp(FILE* outputFile, uint32_t enum_uint32)
{
    VkLogicOp e = static_cast<VkLogicOp>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_LOGIC_OP_CLEAR:
            OutputString(outputFile, "VK_LOGIC_OP_CLEAR");
            return;
        case VK_LOGIC_OP_AND:
            OutputString(outputFile, "VK_LOGIC_OP_AND");
            return;
        case VK_LOGIC_OP_AND_REVERSE:
            OutputString(outputFile, "VK_LOGIC_OP_AND_REVERSE");
            return;
        case VK_LOGIC_OP_COPY:
            OutputString(outputFile, "VK_LOGIC_OP_COPY");
            return;
        case VK_LOGIC_OP_AND_INVERTED:
            OutputString(outputFile, "VK_LOGIC_OP_AND_INVERTED");
            return;
        case VK_LOGIC_OP_NO_OP:
            OutputString(outputFile, "VK_LOGIC_OP_NO_OP");
            return;
        case VK_LOGIC_OP_XOR:
            OutputString(outputFile, "VK_LOGIC_OP_XOR");
            return;
        case VK_LOGIC_OP_OR:
            OutputString(outputFile, "VK_LOGIC_OP_OR");
            return;
        case VK_LOGIC_OP_NOR:
            OutputString(outputFile, "VK_LOGIC_OP_NOR");
            return;
        case VK_LOGIC_OP_EQUIVALENT:
            OutputString(outputFile, "VK_LOGIC_OP_EQUIVALENT");
            return;
        case VK_LOGIC_OP_INVERT:
            OutputString(outputFile, "VK_LOGIC_OP_INVERT");
            return;
        case VK_LOGIC_OP_OR_REVERSE:
            OutputString(outputFile, "VK_LOGIC_OP_OR_REVERSE");
            return;
        case VK_LOGIC_OP_COPY_INVERTED:
            OutputString(outputFile, "VK_LOGIC_OP_COPY_INVERTED");
            return;
        case VK_LOGIC_OP_OR_INVERTED:
            OutputString(outputFile, "VK_LOGIC_OP_OR_INVERTED");
            return;
        case VK_LOGIC_OP_NAND:
            OutputString(outputFile, "VK_LOGIC_OP_NAND");
            return;
        case VK_LOGIC_OP_SET:
            OutputString(outputFile, "VK_LOGIC_OP_SET");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkBlendFactor(FILE* outputFile, uint32_t enum_uint32)
{
    VkBlendFactor e = static_cast<VkBlendFactor>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_BLEND_FACTOR_ZERO:
            OutputString(outputFile, "VK_BLEND_FACTOR_ZERO");
            return;
        case VK_BLEND_FACTOR_ONE:
            OutputString(outputFile, "VK_BLEND_FACTOR_ONE");
            return;
        case VK_BLEND_FACTOR_SRC_COLOR:
            OutputString(outputFile, "VK_BLEND_FACTOR_SRC_COLOR");
            return;
        case VK_BLEND_FACTOR_ONE_MINUS_SRC_COLOR:
            OutputString(outputFile, "VK_BLEND_FACTOR_ONE_MINUS_SRC_COLOR");
            return;
        case VK_BLEND_FACTOR_DST_COLOR:
            OutputString(outputFile, "VK_BLEND_FACTOR_DST_COLOR");
            return;
        case VK_BLEND_FACTOR_ONE_MINUS_DST_COLOR:
            OutputString(outputFile, "VK_BLEND_FACTOR_ONE_MINUS_DST_COLOR");
            return;
        case VK_BLEND_FACTOR_SRC_ALPHA:
            OutputString(outputFile, "VK_BLEND_FACTOR_SRC_ALPHA");
            return;
        case VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA:
            OutputString(outputFile, "VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA");
            return;
        case VK_BLEND_FACTOR_DST_ALPHA:
            OutputString(outputFile, "VK_BLEND_FACTOR_DST_ALPHA");
            return;
        case VK_BLEND_FACTOR_ONE_MINUS_DST_ALPHA:
            OutputString(outputFile, "VK_BLEND_FACTOR_ONE_MINUS_DST_ALPHA");
            return;
        case VK_BLEND_FACTOR_CONSTANT_COLOR:
            OutputString(outputFile, "VK_BLEND_FACTOR_CONSTANT_COLOR");
            return;
        case VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR:
            OutputString(outputFile, "VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR");
            return;
        case VK_BLEND_FACTOR_CONSTANT_ALPHA:
            OutputString(outputFile, "VK_BLEND_FACTOR_CONSTANT_ALPHA");
            return;
        case VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_ALPHA:
            OutputString(outputFile, "VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_ALPHA");
            return;
        case VK_BLEND_FACTOR_SRC_ALPHA_SATURATE:
            OutputString(outputFile, "VK_BLEND_FACTOR_SRC_ALPHA_SATURATE");
            return;
        case VK_BLEND_FACTOR_SRC1_COLOR:
            OutputString(outputFile, "VK_BLEND_FACTOR_SRC1_COLOR");
            return;
        case VK_BLEND_FACTOR_ONE_MINUS_SRC1_COLOR:
            OutputString(outputFile, "VK_BLEND_FACTOR_ONE_MINUS_SRC1_COLOR");
            return;
        case VK_BLEND_FACTOR_SRC1_ALPHA:
            OutputString(outputFile, "VK_BLEND_FACTOR_SRC1_ALPHA");
            return;
        case VK_BLEND_FACTOR_ONE_MINUS_SRC1_ALPHA:
            OutputString(outputFile, "VK_BLEND_FACTOR_ONE_MINUS_SRC1_ALPHA");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkBlendOp(FILE* outputFile, uint32_t enum_uint32)
{
    VkBlendOp e = static_cast<VkBlendOp>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_BLEND_OP_ADD:
            OutputString(outputFile, "VK_BLEND_OP_ADD");
            return;
        case VK_BLEND_OP_SUBTRACT:
            OutputString(outputFile, "VK_BLEND_OP_SUBTRACT");
            return;
        case VK_BLEND_OP_REVERSE_SUBTRACT:
            OutputString(outputFile, "VK_BLEND_OP_REVERSE_SUBTRACT");
            return;
        case VK_BLEND_OP_MIN:
            OutputString(outputFile, "VK_BLEND_OP_MIN");
            return;
        case VK_BLEND_OP_MAX:
            OutputString(outputFile, "VK_BLEND_OP_MAX");
            return;
        case VK_BLEND_OP_ZERO_EXT:
            OutputString(outputFile, "VK_BLEND_OP_ZERO_EXT");
            return;
        case VK_BLEND_OP_SRC_EXT:
            OutputString(outputFile, "VK_BLEND_OP_SRC_EXT");
            return;
        case VK_BLEND_OP_DST_EXT:
            OutputString(outputFile, "VK_BLEND_OP_DST_EXT");
            return;
        case VK_BLEND_OP_SRC_OVER_EXT:
            OutputString(outputFile, "VK_BLEND_OP_SRC_OVER_EXT");
            return;
        case VK_BLEND_OP_DST_OVER_EXT:
            OutputString(outputFile, "VK_BLEND_OP_DST_OVER_EXT");
            return;
        case VK_BLEND_OP_SRC_IN_EXT:
            OutputString(outputFile, "VK_BLEND_OP_SRC_IN_EXT");
            return;
        case VK_BLEND_OP_DST_IN_EXT:
            OutputString(outputFile, "VK_BLEND_OP_DST_IN_EXT");
            return;
        case VK_BLEND_OP_SRC_OUT_EXT:
            OutputString(outputFile, "VK_BLEND_OP_SRC_OUT_EXT");
            return;
        case VK_BLEND_OP_DST_OUT_EXT:
            OutputString(outputFile, "VK_BLEND_OP_DST_OUT_EXT");
            return;
        case VK_BLEND_OP_SRC_ATOP_EXT:
            OutputString(outputFile, "VK_BLEND_OP_SRC_ATOP_EXT");
            return;
        case VK_BLEND_OP_DST_ATOP_EXT:
            OutputString(outputFile, "VK_BLEND_OP_DST_ATOP_EXT");
            return;
        case VK_BLEND_OP_XOR_EXT:
            OutputString(outputFile, "VK_BLEND_OP_XOR_EXT");
            return;
        case VK_BLEND_OP_MULTIPLY_EXT:
            OutputString(outputFile, "VK_BLEND_OP_MULTIPLY_EXT");
            return;
        case VK_BLEND_OP_SCREEN_EXT:
            OutputString(outputFile, "VK_BLEND_OP_SCREEN_EXT");
            return;
        case VK_BLEND_OP_OVERLAY_EXT:
            OutputString(outputFile, "VK_BLEND_OP_OVERLAY_EXT");
            return;
        case VK_BLEND_OP_DARKEN_EXT:
            OutputString(outputFile, "VK_BLEND_OP_DARKEN_EXT");
            return;
        case VK_BLEND_OP_LIGHTEN_EXT:
            OutputString(outputFile, "VK_BLEND_OP_LIGHTEN_EXT");
            return;
        case VK_BLEND_OP_COLORDODGE_EXT:
            OutputString(outputFile, "VK_BLEND_OP_COLORDODGE_EXT");
            return;
        case VK_BLEND_OP_COLORBURN_EXT:
            OutputString(outputFile, "VK_BLEND_OP_COLORBURN_EXT");
            return;
        case VK_BLEND_OP_HARDLIGHT_EXT:
            OutputString(outputFile, "VK_BLEND_OP_HARDLIGHT_EXT");
            return;
        case VK_BLEND_OP_SOFTLIGHT_EXT:
            OutputString(outputFile, "VK_BLEND_OP_SOFTLIGHT_EXT");
            return;
        case VK_BLEND_OP_DIFFERENCE_EXT:
            OutputString(outputFile, "VK_BLEND_OP_DIFFERENCE_EXT");
            return;
        case VK_BLEND_OP_EXCLUSION_EXT:
            OutputString(outputFile, "VK_BLEND_OP_EXCLUSION_EXT");
            return;
        case VK_BLEND_OP_INVERT_EXT:
            OutputString(outputFile, "VK_BLEND_OP_INVERT_EXT");
            return;
        case VK_BLEND_OP_INVERT_RGB_EXT:
            OutputString(outputFile, "VK_BLEND_OP_INVERT_RGB_EXT");
            return;
        case VK_BLEND_OP_LINEARDODGE_EXT:
            OutputString(outputFile, "VK_BLEND_OP_LINEARDODGE_EXT");
            return;
        case VK_BLEND_OP_LINEARBURN_EXT:
            OutputString(outputFile, "VK_BLEND_OP_LINEARBURN_EXT");
            return;
        case VK_BLEND_OP_VIVIDLIGHT_EXT:
            OutputString(outputFile, "VK_BLEND_OP_VIVIDLIGHT_EXT");
            return;
        case VK_BLEND_OP_LINEARLIGHT_EXT:
            OutputString(outputFile, "VK_BLEND_OP_LINEARLIGHT_EXT");
            return;
        case VK_BLEND_OP_PINLIGHT_EXT:
            OutputString(outputFile, "VK_BLEND_OP_PINLIGHT_EXT");
            return;
        case VK_BLEND_OP_HARDMIX_EXT:
            OutputString(outputFile, "VK_BLEND_OP_HARDMIX_EXT");
            return;
        case VK_BLEND_OP_HSL_HUE_EXT:
            OutputString(outputFile, "VK_BLEND_OP_HSL_HUE_EXT");
            return;
        case VK_BLEND_OP_HSL_SATURATION_EXT:
            OutputString(outputFile, "VK_BLEND_OP_HSL_SATURATION_EXT");
            return;
        case VK_BLEND_OP_HSL_COLOR_EXT:
            OutputString(outputFile, "VK_BLEND_OP_HSL_COLOR_EXT");
            return;
        case VK_BLEND_OP_HSL_LUMINOSITY_EXT:
            OutputString(outputFile, "VK_BLEND_OP_HSL_LUMINOSITY_EXT");
            return;
        case VK_BLEND_OP_PLUS_EXT:
            OutputString(outputFile, "VK_BLEND_OP_PLUS_EXT");
            return;
        case VK_BLEND_OP_PLUS_CLAMPED_EXT:
            OutputString(outputFile, "VK_BLEND_OP_PLUS_CLAMPED_EXT");
            return;
        case VK_BLEND_OP_PLUS_CLAMPED_ALPHA_EXT:
            OutputString(outputFile, "VK_BLEND_OP_PLUS_CLAMPED_ALPHA_EXT");
            return;
        case VK_BLEND_OP_PLUS_DARKER_EXT:
            OutputString(outputFile, "VK_BLEND_OP_PLUS_DARKER_EXT");
            return;
        case VK_BLEND_OP_MINUS_EXT:
            OutputString(outputFile, "VK_BLEND_OP_MINUS_EXT");
            return;
        case VK_BLEND_OP_MINUS_CLAMPED_EXT:
            OutputString(outputFile, "VK_BLEND_OP_MINUS_CLAMPED_EXT");
            return;
        case VK_BLEND_OP_CONTRAST_EXT:
            OutputString(outputFile, "VK_BLEND_OP_CONTRAST_EXT");
            return;
        case VK_BLEND_OP_INVERT_OVG_EXT:
            OutputString(outputFile, "VK_BLEND_OP_INVERT_OVG_EXT");
            return;
        case VK_BLEND_OP_RED_EXT:
            OutputString(outputFile, "VK_BLEND_OP_RED_EXT");
            return;
        case VK_BLEND_OP_GREEN_EXT:
            OutputString(outputFile, "VK_BLEND_OP_GREEN_EXT");
            return;
        case VK_BLEND_OP_BLUE_EXT:
            OutputString(outputFile, "VK_BLEND_OP_BLUE_EXT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkColorComponentFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkColorComponentFlagBits e = static_cast<VkColorComponentFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_COLOR_COMPONENT_R_BIT:
            OutputString(outputFile, "VK_COLOR_COMPONENT_R_BIT");
            return;
        case VK_COLOR_COMPONENT_G_BIT:
            OutputString(outputFile, "VK_COLOR_COMPONENT_G_BIT");
            return;
        case VK_COLOR_COMPONENT_B_BIT:
            OutputString(outputFile, "VK_COLOR_COMPONENT_B_BIT");
            return;
        case VK_COLOR_COMPONENT_A_BIT:
            OutputString(outputFile, "VK_COLOR_COMPONENT_A_BIT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkDynamicState(FILE* outputFile, uint32_t enum_uint32)
{
    VkDynamicState e = static_cast<VkDynamicState>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_DYNAMIC_STATE_VIEWPORT:
            OutputString(outputFile, "VK_DYNAMIC_STATE_VIEWPORT");
            return;
        case VK_DYNAMIC_STATE_SCISSOR:
            OutputString(outputFile, "VK_DYNAMIC_STATE_SCISSOR");
            return;
        case VK_DYNAMIC_STATE_LINE_WIDTH:
            OutputString(outputFile, "VK_DYNAMIC_STATE_LINE_WIDTH");
            return;
        case VK_DYNAMIC_STATE_DEPTH_BIAS:
            OutputString(outputFile, "VK_DYNAMIC_STATE_DEPTH_BIAS");
            return;
        case VK_DYNAMIC_STATE_BLEND_CONSTANTS:
            OutputString(outputFile, "VK_DYNAMIC_STATE_BLEND_CONSTANTS");
            return;
        case VK_DYNAMIC_STATE_DEPTH_BOUNDS:
            OutputString(outputFile, "VK_DYNAMIC_STATE_DEPTH_BOUNDS");
            return;
        case VK_DYNAMIC_STATE_STENCIL_COMPARE_MASK:
            OutputString(outputFile, "VK_DYNAMIC_STATE_STENCIL_COMPARE_MASK");
            return;
        case VK_DYNAMIC_STATE_STENCIL_WRITE_MASK:
            OutputString(outputFile, "VK_DYNAMIC_STATE_STENCIL_WRITE_MASK");
            return;
        case VK_DYNAMIC_STATE_STENCIL_REFERENCE:
            OutputString(outputFile, "VK_DYNAMIC_STATE_STENCIL_REFERENCE");
            return;
        case VK_DYNAMIC_STATE_VIEWPORT_W_SCALING_NV:
            OutputString(outputFile, "VK_DYNAMIC_STATE_VIEWPORT_W_SCALING_NV");
            return;
        case VK_DYNAMIC_STATE_DISCARD_RECTANGLE_EXT:
            OutputString(outputFile, "VK_DYNAMIC_STATE_DISCARD_RECTANGLE_EXT");
            return;
        case VK_DYNAMIC_STATE_SAMPLE_LOCATIONS_EXT:
            OutputString(outputFile, "VK_DYNAMIC_STATE_SAMPLE_LOCATIONS_EXT");
            return;
        case VK_DYNAMIC_STATE_VIEWPORT_SHADING_RATE_PALETTE_NV:
            OutputString(outputFile, "VK_DYNAMIC_STATE_VIEWPORT_SHADING_RATE_PALETTE_NV");
            return;
        case VK_DYNAMIC_STATE_VIEWPORT_COARSE_SAMPLE_ORDER_NV:
            OutputString(outputFile, "VK_DYNAMIC_STATE_VIEWPORT_COARSE_SAMPLE_ORDER_NV");
            return;
        case VK_DYNAMIC_STATE_EXCLUSIVE_SCISSOR_NV:
            OutputString(outputFile, "VK_DYNAMIC_STATE_EXCLUSIVE_SCISSOR_NV");
            return;
        case VK_DYNAMIC_STATE_LINE_STIPPLE_EXT:
            OutputString(outputFile, "VK_DYNAMIC_STATE_LINE_STIPPLE_EXT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkSamplerCreateFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkSamplerCreateFlagBits e = static_cast<VkSamplerCreateFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SAMPLER_CREATE_SUBSAMPLED_BIT_EXT:
            OutputString(outputFile, "VK_SAMPLER_CREATE_SUBSAMPLED_BIT_EXT");
            return;
        case VK_SAMPLER_CREATE_SUBSAMPLED_COARSE_RECONSTRUCTION_BIT_EXT:
            OutputString(outputFile, "VK_SAMPLER_CREATE_SUBSAMPLED_COARSE_RECONSTRUCTION_BIT_EXT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkFilter(FILE* outputFile, uint32_t enum_uint32)
{
    VkFilter e = static_cast<VkFilter>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_FILTER_NEAREST:
            OutputString(outputFile, "VK_FILTER_NEAREST");
            return;
        case VK_FILTER_LINEAR:
            OutputString(outputFile, "VK_FILTER_LINEAR");
            return;
        case VK_FILTER_CUBIC_IMG:
            OutputString(outputFile, "VK_FILTER_CUBIC_IMG");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkSamplerMipmapMode(FILE* outputFile, uint32_t enum_uint32)
{
    VkSamplerMipmapMode e = static_cast<VkSamplerMipmapMode>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SAMPLER_MIPMAP_MODE_NEAREST:
            OutputString(outputFile, "VK_SAMPLER_MIPMAP_MODE_NEAREST");
            return;
        case VK_SAMPLER_MIPMAP_MODE_LINEAR:
            OutputString(outputFile, "VK_SAMPLER_MIPMAP_MODE_LINEAR");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkSamplerAddressMode(FILE* outputFile, uint32_t enum_uint32)
{
    VkSamplerAddressMode e = static_cast<VkSamplerAddressMode>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SAMPLER_ADDRESS_MODE_REPEAT:
            OutputString(outputFile, "VK_SAMPLER_ADDRESS_MODE_REPEAT");
            return;
        case VK_SAMPLER_ADDRESS_MODE_MIRRORED_REPEAT:
            OutputString(outputFile, "VK_SAMPLER_ADDRESS_MODE_MIRRORED_REPEAT");
            return;
        case VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE:
            OutputString(outputFile, "VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE");
            return;
        case VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_BORDER:
            OutputString(outputFile, "VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_BORDER");
            return;
        case VK_SAMPLER_ADDRESS_MODE_MIRROR_CLAMP_TO_EDGE:
            OutputString(outputFile, "VK_SAMPLER_ADDRESS_MODE_MIRROR_CLAMP_TO_EDGE");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkBorderColor(FILE* outputFile, uint32_t enum_uint32)
{
    VkBorderColor e = static_cast<VkBorderColor>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_BORDER_COLOR_FLOAT_TRANSPARENT_BLACK:
            OutputString(outputFile, "VK_BORDER_COLOR_FLOAT_TRANSPARENT_BLACK");
            return;
        case VK_BORDER_COLOR_INT_TRANSPARENT_BLACK:
            OutputString(outputFile, "VK_BORDER_COLOR_INT_TRANSPARENT_BLACK");
            return;
        case VK_BORDER_COLOR_FLOAT_OPAQUE_BLACK:
            OutputString(outputFile, "VK_BORDER_COLOR_FLOAT_OPAQUE_BLACK");
            return;
        case VK_BORDER_COLOR_INT_OPAQUE_BLACK:
            OutputString(outputFile, "VK_BORDER_COLOR_INT_OPAQUE_BLACK");
            return;
        case VK_BORDER_COLOR_FLOAT_OPAQUE_WHITE:
            OutputString(outputFile, "VK_BORDER_COLOR_FLOAT_OPAQUE_WHITE");
            return;
        case VK_BORDER_COLOR_INT_OPAQUE_WHITE:
            OutputString(outputFile, "VK_BORDER_COLOR_INT_OPAQUE_WHITE");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkDescriptorSetLayoutCreateFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkDescriptorSetLayoutCreateFlagBits e = static_cast<VkDescriptorSetLayoutCreateFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR:
            OutputString(outputFile, "VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR");
            return;
        case VK_DESCRIPTOR_SET_LAYOUT_CREATE_UPDATE_AFTER_BIND_POOL_BIT_EXT:
            OutputString(outputFile, "VK_DESCRIPTOR_SET_LAYOUT_CREATE_UPDATE_AFTER_BIND_POOL_BIT_EXT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkDescriptorType(FILE* outputFile, uint32_t enum_uint32)
{
    VkDescriptorType e = static_cast<VkDescriptorType>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_DESCRIPTOR_TYPE_SAMPLER:
            OutputString(outputFile, "VK_DESCRIPTOR_TYPE_SAMPLER");
            return;
        case VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER:
            OutputString(outputFile, "VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER");
            return;
        case VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE:
            OutputString(outputFile, "VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE");
            return;
        case VK_DESCRIPTOR_TYPE_STORAGE_IMAGE:
            OutputString(outputFile, "VK_DESCRIPTOR_TYPE_STORAGE_IMAGE");
            return;
        case VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER:
            OutputString(outputFile, "VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER");
            return;
        case VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER:
            OutputString(outputFile, "VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER");
            return;
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER:
            OutputString(outputFile, "VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER");
            return;
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER:
            OutputString(outputFile, "VK_DESCRIPTOR_TYPE_STORAGE_BUFFER");
            return;
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC:
            OutputString(outputFile, "VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC");
            return;
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC:
            OutputString(outputFile, "VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC");
            return;
        case VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT:
            OutputString(outputFile, "VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT");
            return;
        case VK_DESCRIPTOR_TYPE_INLINE_UNIFORM_BLOCK_EXT:
            OutputString(outputFile, "VK_DESCRIPTOR_TYPE_INLINE_UNIFORM_BLOCK_EXT");
            return;
        case VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_NV:
            OutputString(outputFile, "VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_NV");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkDescriptorPoolCreateFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkDescriptorPoolCreateFlagBits e = static_cast<VkDescriptorPoolCreateFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT:
            OutputString(outputFile, "VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT");
            return;
        case VK_DESCRIPTOR_POOL_CREATE_UPDATE_AFTER_BIND_BIT_EXT:
            OutputString(outputFile, "VK_DESCRIPTOR_POOL_CREATE_UPDATE_AFTER_BIND_BIT_EXT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkFramebufferCreateFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkFramebufferCreateFlagBits e = static_cast<VkFramebufferCreateFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_FRAMEBUFFER_CREATE_IMAGELESS_BIT_KHR:
            OutputString(outputFile, "VK_FRAMEBUFFER_CREATE_IMAGELESS_BIT_KHR");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkRenderPassCreateFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkRenderPassCreateFlagBits e = static_cast<VkRenderPassCreateFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    OutputString(outputFile, "UNKNOWN");
}

void EnumToStringVkAttachmentDescriptionFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkAttachmentDescriptionFlagBits e = static_cast<VkAttachmentDescriptionFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_ATTACHMENT_DESCRIPTION_MAY_ALIAS_BIT:
            OutputString(outputFile, "VK_ATTACHMENT_DESCRIPTION_MAY_ALIAS_BIT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkAttachmentLoadOp(FILE* outputFile, uint32_t enum_uint32)
{
    VkAttachmentLoadOp e = static_cast<VkAttachmentLoadOp>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_ATTACHMENT_LOAD_OP_LOAD:
            OutputString(outputFile, "VK_ATTACHMENT_LOAD_OP_LOAD");
            return;
        case VK_ATTACHMENT_LOAD_OP_CLEAR:
            OutputString(outputFile, "VK_ATTACHMENT_LOAD_OP_CLEAR");
            return;
        case VK_ATTACHMENT_LOAD_OP_DONT_CARE:
            OutputString(outputFile, "VK_ATTACHMENT_LOAD_OP_DONT_CARE");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkAttachmentStoreOp(FILE* outputFile, uint32_t enum_uint32)
{
    VkAttachmentStoreOp e = static_cast<VkAttachmentStoreOp>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_ATTACHMENT_STORE_OP_STORE:
            OutputString(outputFile, "VK_ATTACHMENT_STORE_OP_STORE");
            return;
        case VK_ATTACHMENT_STORE_OP_DONT_CARE:
            OutputString(outputFile, "VK_ATTACHMENT_STORE_OP_DONT_CARE");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkSubpassDescriptionFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkSubpassDescriptionFlagBits e = static_cast<VkSubpassDescriptionFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SUBPASS_DESCRIPTION_PER_VIEW_ATTRIBUTES_BIT_NVX:
            OutputString(outputFile, "VK_SUBPASS_DESCRIPTION_PER_VIEW_ATTRIBUTES_BIT_NVX");
            return;
        case VK_SUBPASS_DESCRIPTION_PER_VIEW_POSITION_X_ONLY_BIT_NVX:
            OutputString(outputFile, "VK_SUBPASS_DESCRIPTION_PER_VIEW_POSITION_X_ONLY_BIT_NVX");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkPipelineBindPoint(FILE* outputFile, uint32_t enum_uint32)
{
    VkPipelineBindPoint e = static_cast<VkPipelineBindPoint>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_PIPELINE_BIND_POINT_GRAPHICS:
            OutputString(outputFile, "VK_PIPELINE_BIND_POINT_GRAPHICS");
            return;
        case VK_PIPELINE_BIND_POINT_COMPUTE:
            OutputString(outputFile, "VK_PIPELINE_BIND_POINT_COMPUTE");
            return;
        case VK_PIPELINE_BIND_POINT_RAY_TRACING_NV:
            OutputString(outputFile, "VK_PIPELINE_BIND_POINT_RAY_TRACING_NV");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkAccessFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkAccessFlagBits e = static_cast<VkAccessFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_ACCESS_INDIRECT_COMMAND_READ_BIT:
            OutputString(outputFile, "VK_ACCESS_INDIRECT_COMMAND_READ_BIT");
            return;
        case VK_ACCESS_INDEX_READ_BIT:
            OutputString(outputFile, "VK_ACCESS_INDEX_READ_BIT");
            return;
        case VK_ACCESS_VERTEX_ATTRIBUTE_READ_BIT:
            OutputString(outputFile, "VK_ACCESS_VERTEX_ATTRIBUTE_READ_BIT");
            return;
        case VK_ACCESS_UNIFORM_READ_BIT:
            OutputString(outputFile, "VK_ACCESS_UNIFORM_READ_BIT");
            return;
        case VK_ACCESS_INPUT_ATTACHMENT_READ_BIT:
            OutputString(outputFile, "VK_ACCESS_INPUT_ATTACHMENT_READ_BIT");
            return;
        case VK_ACCESS_SHADER_READ_BIT:
            OutputString(outputFile, "VK_ACCESS_SHADER_READ_BIT");
            return;
        case VK_ACCESS_SHADER_WRITE_BIT:
            OutputString(outputFile, "VK_ACCESS_SHADER_WRITE_BIT");
            return;
        case VK_ACCESS_COLOR_ATTACHMENT_READ_BIT:
            OutputString(outputFile, "VK_ACCESS_COLOR_ATTACHMENT_READ_BIT");
            return;
        case VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT:
            OutputString(outputFile, "VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT");
            return;
        case VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT:
            OutputString(outputFile, "VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT");
            return;
        case VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT:
            OutputString(outputFile, "VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT");
            return;
        case VK_ACCESS_TRANSFER_READ_BIT:
            OutputString(outputFile, "VK_ACCESS_TRANSFER_READ_BIT");
            return;
        case VK_ACCESS_TRANSFER_WRITE_BIT:
            OutputString(outputFile, "VK_ACCESS_TRANSFER_WRITE_BIT");
            return;
        case VK_ACCESS_HOST_READ_BIT:
            OutputString(outputFile, "VK_ACCESS_HOST_READ_BIT");
            return;
        case VK_ACCESS_HOST_WRITE_BIT:
            OutputString(outputFile, "VK_ACCESS_HOST_WRITE_BIT");
            return;
        case VK_ACCESS_MEMORY_READ_BIT:
            OutputString(outputFile, "VK_ACCESS_MEMORY_READ_BIT");
            return;
        case VK_ACCESS_MEMORY_WRITE_BIT:
            OutputString(outputFile, "VK_ACCESS_MEMORY_WRITE_BIT");
            return;
        case VK_ACCESS_TRANSFORM_FEEDBACK_WRITE_BIT_EXT:
            OutputString(outputFile, "VK_ACCESS_TRANSFORM_FEEDBACK_WRITE_BIT_EXT");
            return;
        case VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_READ_BIT_EXT:
            OutputString(outputFile, "VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_READ_BIT_EXT");
            return;
        case VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_WRITE_BIT_EXT:
            OutputString(outputFile, "VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_WRITE_BIT_EXT");
            return;
        case VK_ACCESS_CONDITIONAL_RENDERING_READ_BIT_EXT:
            OutputString(outputFile, "VK_ACCESS_CONDITIONAL_RENDERING_READ_BIT_EXT");
            return;
        case VK_ACCESS_COMMAND_PROCESS_READ_BIT_NVX:
            OutputString(outputFile, "VK_ACCESS_COMMAND_PROCESS_READ_BIT_NVX");
            return;
        case VK_ACCESS_COMMAND_PROCESS_WRITE_BIT_NVX:
            OutputString(outputFile, "VK_ACCESS_COMMAND_PROCESS_WRITE_BIT_NVX");
            return;
        case VK_ACCESS_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT:
            OutputString(outputFile, "VK_ACCESS_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT");
            return;
        case VK_ACCESS_SHADING_RATE_IMAGE_READ_BIT_NV:
            OutputString(outputFile, "VK_ACCESS_SHADING_RATE_IMAGE_READ_BIT_NV");
            return;
        case VK_ACCESS_ACCELERATION_STRUCTURE_READ_BIT_NV:
            OutputString(outputFile, "VK_ACCESS_ACCELERATION_STRUCTURE_READ_BIT_NV");
            return;
        case VK_ACCESS_ACCELERATION_STRUCTURE_WRITE_BIT_NV:
            OutputString(outputFile, "VK_ACCESS_ACCELERATION_STRUCTURE_WRITE_BIT_NV");
            return;
        case VK_ACCESS_FRAGMENT_DENSITY_MAP_READ_BIT_EXT:
            OutputString(outputFile, "VK_ACCESS_FRAGMENT_DENSITY_MAP_READ_BIT_EXT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkDependencyFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkDependencyFlagBits e = static_cast<VkDependencyFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_DEPENDENCY_BY_REGION_BIT:
            OutputString(outputFile, "VK_DEPENDENCY_BY_REGION_BIT");
            return;
        case VK_DEPENDENCY_DEVICE_GROUP_BIT:
            OutputString(outputFile, "VK_DEPENDENCY_DEVICE_GROUP_BIT");
            return;
        case VK_DEPENDENCY_VIEW_LOCAL_BIT:
            OutputString(outputFile, "VK_DEPENDENCY_VIEW_LOCAL_BIT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkCommandPoolCreateFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkCommandPoolCreateFlagBits e = static_cast<VkCommandPoolCreateFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_COMMAND_POOL_CREATE_TRANSIENT_BIT:
            OutputString(outputFile, "VK_COMMAND_POOL_CREATE_TRANSIENT_BIT");
            return;
        case VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT:
            OutputString(outputFile, "VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT");
            return;
        case VK_COMMAND_POOL_CREATE_PROTECTED_BIT:
            OutputString(outputFile, "VK_COMMAND_POOL_CREATE_PROTECTED_BIT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkCommandPoolResetFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkCommandPoolResetFlagBits e = static_cast<VkCommandPoolResetFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_COMMAND_POOL_RESET_RELEASE_RESOURCES_BIT:
            OutputString(outputFile, "VK_COMMAND_POOL_RESET_RELEASE_RESOURCES_BIT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkCommandBufferLevel(FILE* outputFile, uint32_t enum_uint32)
{
    VkCommandBufferLevel e = static_cast<VkCommandBufferLevel>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_COMMAND_BUFFER_LEVEL_PRIMARY:
            OutputString(outputFile, "VK_COMMAND_BUFFER_LEVEL_PRIMARY");
            return;
        case VK_COMMAND_BUFFER_LEVEL_SECONDARY:
            OutputString(outputFile, "VK_COMMAND_BUFFER_LEVEL_SECONDARY");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkCommandBufferUsageFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkCommandBufferUsageFlagBits e = static_cast<VkCommandBufferUsageFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT:
            OutputString(outputFile, "VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT");
            return;
        case VK_COMMAND_BUFFER_USAGE_RENDER_PASS_CONTINUE_BIT:
            OutputString(outputFile, "VK_COMMAND_BUFFER_USAGE_RENDER_PASS_CONTINUE_BIT");
            return;
        case VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT:
            OutputString(outputFile, "VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkQueryControlFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkQueryControlFlagBits e = static_cast<VkQueryControlFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_QUERY_CONTROL_PRECISE_BIT:
            OutputString(outputFile, "VK_QUERY_CONTROL_PRECISE_BIT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkCommandBufferResetFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkCommandBufferResetFlagBits e = static_cast<VkCommandBufferResetFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_COMMAND_BUFFER_RESET_RELEASE_RESOURCES_BIT:
            OutputString(outputFile, "VK_COMMAND_BUFFER_RESET_RELEASE_RESOURCES_BIT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkStencilFaceFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkStencilFaceFlagBits e = static_cast<VkStencilFaceFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_STENCIL_FACE_FRONT_BIT:
            OutputString(outputFile, "VK_STENCIL_FACE_FRONT_BIT");
            return;
        case VK_STENCIL_FACE_BACK_BIT:
            OutputString(outputFile, "VK_STENCIL_FACE_BACK_BIT");
            return;
        case VK_STENCIL_FACE_FRONT_AND_BACK:
            OutputString(outputFile, "VK_STENCIL_FACE_FRONT_AND_BACK");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkIndexType(FILE* outputFile, uint32_t enum_uint32)
{
    VkIndexType e = static_cast<VkIndexType>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_INDEX_TYPE_UINT16:
            OutputString(outputFile, "VK_INDEX_TYPE_UINT16");
            return;
        case VK_INDEX_TYPE_UINT32:
            OutputString(outputFile, "VK_INDEX_TYPE_UINT32");
            return;
        case VK_INDEX_TYPE_NONE_NV:
            OutputString(outputFile, "VK_INDEX_TYPE_NONE_NV");
            return;
        case VK_INDEX_TYPE_UINT8_EXT:
            OutputString(outputFile, "VK_INDEX_TYPE_UINT8_EXT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkSubpassContents(FILE* outputFile, uint32_t enum_uint32)
{
    VkSubpassContents e = static_cast<VkSubpassContents>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SUBPASS_CONTENTS_INLINE:
            OutputString(outputFile, "VK_SUBPASS_CONTENTS_INLINE");
            return;
        case VK_SUBPASS_CONTENTS_SECONDARY_COMMAND_BUFFERS:
            OutputString(outputFile, "VK_SUBPASS_CONTENTS_SECONDARY_COMMAND_BUFFERS");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkObjectType(FILE* outputFile, uint32_t enum_uint32)
{
    VkObjectType e = static_cast<VkObjectType>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_OBJECT_TYPE_UNKNOWN:
            OutputString(outputFile, "VK_OBJECT_TYPE_UNKNOWN");
            return;
        case VK_OBJECT_TYPE_INSTANCE:
            OutputString(outputFile, "VK_OBJECT_TYPE_INSTANCE");
            return;
        case VK_OBJECT_TYPE_PHYSICAL_DEVICE:
            OutputString(outputFile, "VK_OBJECT_TYPE_PHYSICAL_DEVICE");
            return;
        case VK_OBJECT_TYPE_DEVICE:
            OutputString(outputFile, "VK_OBJECT_TYPE_DEVICE");
            return;
        case VK_OBJECT_TYPE_QUEUE:
            OutputString(outputFile, "VK_OBJECT_TYPE_QUEUE");
            return;
        case VK_OBJECT_TYPE_SEMAPHORE:
            OutputString(outputFile, "VK_OBJECT_TYPE_SEMAPHORE");
            return;
        case VK_OBJECT_TYPE_COMMAND_BUFFER:
            OutputString(outputFile, "VK_OBJECT_TYPE_COMMAND_BUFFER");
            return;
        case VK_OBJECT_TYPE_FENCE:
            OutputString(outputFile, "VK_OBJECT_TYPE_FENCE");
            return;
        case VK_OBJECT_TYPE_DEVICE_MEMORY:
            OutputString(outputFile, "VK_OBJECT_TYPE_DEVICE_MEMORY");
            return;
        case VK_OBJECT_TYPE_BUFFER:
            OutputString(outputFile, "VK_OBJECT_TYPE_BUFFER");
            return;
        case VK_OBJECT_TYPE_IMAGE:
            OutputString(outputFile, "VK_OBJECT_TYPE_IMAGE");
            return;
        case VK_OBJECT_TYPE_EVENT:
            OutputString(outputFile, "VK_OBJECT_TYPE_EVENT");
            return;
        case VK_OBJECT_TYPE_QUERY_POOL:
            OutputString(outputFile, "VK_OBJECT_TYPE_QUERY_POOL");
            return;
        case VK_OBJECT_TYPE_BUFFER_VIEW:
            OutputString(outputFile, "VK_OBJECT_TYPE_BUFFER_VIEW");
            return;
        case VK_OBJECT_TYPE_IMAGE_VIEW:
            OutputString(outputFile, "VK_OBJECT_TYPE_IMAGE_VIEW");
            return;
        case VK_OBJECT_TYPE_SHADER_MODULE:
            OutputString(outputFile, "VK_OBJECT_TYPE_SHADER_MODULE");
            return;
        case VK_OBJECT_TYPE_PIPELINE_CACHE:
            OutputString(outputFile, "VK_OBJECT_TYPE_PIPELINE_CACHE");
            return;
        case VK_OBJECT_TYPE_PIPELINE_LAYOUT:
            OutputString(outputFile, "VK_OBJECT_TYPE_PIPELINE_LAYOUT");
            return;
        case VK_OBJECT_TYPE_RENDER_PASS:
            OutputString(outputFile, "VK_OBJECT_TYPE_RENDER_PASS");
            return;
        case VK_OBJECT_TYPE_PIPELINE:
            OutputString(outputFile, "VK_OBJECT_TYPE_PIPELINE");
            return;
        case VK_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT:
            OutputString(outputFile, "VK_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT");
            return;
        case VK_OBJECT_TYPE_SAMPLER:
            OutputString(outputFile, "VK_OBJECT_TYPE_SAMPLER");
            return;
        case VK_OBJECT_TYPE_DESCRIPTOR_POOL:
            OutputString(outputFile, "VK_OBJECT_TYPE_DESCRIPTOR_POOL");
            return;
        case VK_OBJECT_TYPE_DESCRIPTOR_SET:
            OutputString(outputFile, "VK_OBJECT_TYPE_DESCRIPTOR_SET");
            return;
        case VK_OBJECT_TYPE_FRAMEBUFFER:
            OutputString(outputFile, "VK_OBJECT_TYPE_FRAMEBUFFER");
            return;
        case VK_OBJECT_TYPE_COMMAND_POOL:
            OutputString(outputFile, "VK_OBJECT_TYPE_COMMAND_POOL");
            return;
        case VK_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION:
            OutputString(outputFile, "VK_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION");
            return;
        case VK_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE:
            OutputString(outputFile, "VK_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE");
            return;
        case VK_OBJECT_TYPE_SURFACE_KHR:
            OutputString(outputFile, "VK_OBJECT_TYPE_SURFACE_KHR");
            return;
        case VK_OBJECT_TYPE_SWAPCHAIN_KHR:
            OutputString(outputFile, "VK_OBJECT_TYPE_SWAPCHAIN_KHR");
            return;
        case VK_OBJECT_TYPE_DISPLAY_KHR:
            OutputString(outputFile, "VK_OBJECT_TYPE_DISPLAY_KHR");
            return;
        case VK_OBJECT_TYPE_DISPLAY_MODE_KHR:
            OutputString(outputFile, "VK_OBJECT_TYPE_DISPLAY_MODE_KHR");
            return;
        case VK_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT:
            OutputString(outputFile, "VK_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT");
            return;
        case VK_OBJECT_TYPE_OBJECT_TABLE_NVX:
            OutputString(outputFile, "VK_OBJECT_TYPE_OBJECT_TABLE_NVX");
            return;
        case VK_OBJECT_TYPE_INDIRECT_COMMANDS_LAYOUT_NVX:
            OutputString(outputFile, "VK_OBJECT_TYPE_INDIRECT_COMMANDS_LAYOUT_NVX");
            return;
        case VK_OBJECT_TYPE_DEBUG_UTILS_MESSENGER_EXT:
            OutputString(outputFile, "VK_OBJECT_TYPE_DEBUG_UTILS_MESSENGER_EXT");
            return;
        case VK_OBJECT_TYPE_VALIDATION_CACHE_EXT:
            OutputString(outputFile, "VK_OBJECT_TYPE_VALIDATION_CACHE_EXT");
            return;
        case VK_OBJECT_TYPE_ACCELERATION_STRUCTURE_NV:
            OutputString(outputFile, "VK_OBJECT_TYPE_ACCELERATION_STRUCTURE_NV");
            return;
        case VK_OBJECT_TYPE_PERFORMANCE_CONFIGURATION_INTEL:
            OutputString(outputFile, "VK_OBJECT_TYPE_PERFORMANCE_CONFIGURATION_INTEL");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkVendorId(FILE* outputFile, uint32_t enum_uint32)
{
    VkVendorId e = static_cast<VkVendorId>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_VENDOR_ID_VIV:
            OutputString(outputFile, "VK_VENDOR_ID_VIV");
            return;
        case VK_VENDOR_ID_VSI:
            OutputString(outputFile, "VK_VENDOR_ID_VSI");
            return;
        case VK_VENDOR_ID_KAZAN:
            OutputString(outputFile, "VK_VENDOR_ID_KAZAN");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkSubgroupFeatureFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkSubgroupFeatureFlagBits e = static_cast<VkSubgroupFeatureFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SUBGROUP_FEATURE_BASIC_BIT:
            OutputString(outputFile, "VK_SUBGROUP_FEATURE_BASIC_BIT");
            return;
        case VK_SUBGROUP_FEATURE_VOTE_BIT:
            OutputString(outputFile, "VK_SUBGROUP_FEATURE_VOTE_BIT");
            return;
        case VK_SUBGROUP_FEATURE_ARITHMETIC_BIT:
            OutputString(outputFile, "VK_SUBGROUP_FEATURE_ARITHMETIC_BIT");
            return;
        case VK_SUBGROUP_FEATURE_BALLOT_BIT:
            OutputString(outputFile, "VK_SUBGROUP_FEATURE_BALLOT_BIT");
            return;
        case VK_SUBGROUP_FEATURE_SHUFFLE_BIT:
            OutputString(outputFile, "VK_SUBGROUP_FEATURE_SHUFFLE_BIT");
            return;
        case VK_SUBGROUP_FEATURE_SHUFFLE_RELATIVE_BIT:
            OutputString(outputFile, "VK_SUBGROUP_FEATURE_SHUFFLE_RELATIVE_BIT");
            return;
        case VK_SUBGROUP_FEATURE_CLUSTERED_BIT:
            OutputString(outputFile, "VK_SUBGROUP_FEATURE_CLUSTERED_BIT");
            return;
        case VK_SUBGROUP_FEATURE_QUAD_BIT:
            OutputString(outputFile, "VK_SUBGROUP_FEATURE_QUAD_BIT");
            return;
        case VK_SUBGROUP_FEATURE_PARTITIONED_BIT_NV:
            OutputString(outputFile, "VK_SUBGROUP_FEATURE_PARTITIONED_BIT_NV");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkPeerMemoryFeatureFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkPeerMemoryFeatureFlagBits e = static_cast<VkPeerMemoryFeatureFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT:
            OutputString(outputFile, "VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT");
            return;
        case VK_PEER_MEMORY_FEATURE_COPY_DST_BIT:
            OutputString(outputFile, "VK_PEER_MEMORY_FEATURE_COPY_DST_BIT");
            return;
        case VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT:
            OutputString(outputFile, "VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT");
            return;
        case VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT:
            OutputString(outputFile, "VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkMemoryAllocateFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkMemoryAllocateFlagBits e = static_cast<VkMemoryAllocateFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT:
            OutputString(outputFile, "VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkPointClippingBehavior(FILE* outputFile, uint32_t enum_uint32)
{
    VkPointClippingBehavior e = static_cast<VkPointClippingBehavior>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_POINT_CLIPPING_BEHAVIOR_ALL_CLIP_PLANES:
            OutputString(outputFile, "VK_POINT_CLIPPING_BEHAVIOR_ALL_CLIP_PLANES");
            return;
        case VK_POINT_CLIPPING_BEHAVIOR_USER_CLIP_PLANES_ONLY:
            OutputString(outputFile, "VK_POINT_CLIPPING_BEHAVIOR_USER_CLIP_PLANES_ONLY");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkTessellationDomainOrigin(FILE* outputFile, uint32_t enum_uint32)
{
    VkTessellationDomainOrigin e = static_cast<VkTessellationDomainOrigin>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_TESSELLATION_DOMAIN_ORIGIN_UPPER_LEFT:
            OutputString(outputFile, "VK_TESSELLATION_DOMAIN_ORIGIN_UPPER_LEFT");
            return;
        case VK_TESSELLATION_DOMAIN_ORIGIN_LOWER_LEFT:
            OutputString(outputFile, "VK_TESSELLATION_DOMAIN_ORIGIN_LOWER_LEFT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkSamplerYcbcrModelConversion(FILE* outputFile, uint32_t enum_uint32)
{
    VkSamplerYcbcrModelConversion e = static_cast<VkSamplerYcbcrModelConversion>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SAMPLER_YCBCR_MODEL_CONVERSION_RGB_IDENTITY:
            OutputString(outputFile, "VK_SAMPLER_YCBCR_MODEL_CONVERSION_RGB_IDENTITY");
            return;
        case VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_IDENTITY:
            OutputString(outputFile, "VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_IDENTITY");
            return;
        case VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_709:
            OutputString(outputFile, "VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_709");
            return;
        case VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_601:
            OutputString(outputFile, "VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_601");
            return;
        case VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_2020:
            OutputString(outputFile, "VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_2020");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkSamplerYcbcrRange(FILE* outputFile, uint32_t enum_uint32)
{
    VkSamplerYcbcrRange e = static_cast<VkSamplerYcbcrRange>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SAMPLER_YCBCR_RANGE_ITU_FULL:
            OutputString(outputFile, "VK_SAMPLER_YCBCR_RANGE_ITU_FULL");
            return;
        case VK_SAMPLER_YCBCR_RANGE_ITU_NARROW:
            OutputString(outputFile, "VK_SAMPLER_YCBCR_RANGE_ITU_NARROW");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkChromaLocation(FILE* outputFile, uint32_t enum_uint32)
{
    VkChromaLocation e = static_cast<VkChromaLocation>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_CHROMA_LOCATION_COSITED_EVEN:
            OutputString(outputFile, "VK_CHROMA_LOCATION_COSITED_EVEN");
            return;
        case VK_CHROMA_LOCATION_MIDPOINT:
            OutputString(outputFile, "VK_CHROMA_LOCATION_MIDPOINT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkDescriptorUpdateTemplateType(FILE* outputFile, uint32_t enum_uint32)
{
    VkDescriptorUpdateTemplateType e = static_cast<VkDescriptorUpdateTemplateType>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_DESCRIPTOR_SET:
            OutputString(outputFile, "VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_DESCRIPTOR_SET");
            return;
        case VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_PUSH_DESCRIPTORS_KHR:
            OutputString(outputFile, "VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_PUSH_DESCRIPTORS_KHR");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkExternalMemoryHandleTypeFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkExternalMemoryHandleTypeFlagBits e = static_cast<VkExternalMemoryHandleTypeFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT:
            OutputString(outputFile, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT");
            return;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT:
            OutputString(outputFile, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT");
            return;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT:
            OutputString(outputFile, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT");
            return;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT:
            OutputString(outputFile, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT");
            return;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT:
            OutputString(outputFile, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT");
            return;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT:
            OutputString(outputFile, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT");
            return;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT:
            OutputString(outputFile, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT");
            return;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_DMA_BUF_BIT_EXT:
            OutputString(outputFile, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_DMA_BUF_BIT_EXT");
            return;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_ANDROID_HARDWARE_BUFFER_BIT_ANDROID:
            OutputString(outputFile, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_ANDROID_HARDWARE_BUFFER_BIT_ANDROID");
            return;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_ALLOCATION_BIT_EXT:
            OutputString(outputFile, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_ALLOCATION_BIT_EXT");
            return;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_MAPPED_FOREIGN_MEMORY_BIT_EXT:
            OutputString(outputFile, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_MAPPED_FOREIGN_MEMORY_BIT_EXT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkExternalMemoryFeatureFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkExternalMemoryFeatureFlagBits e = static_cast<VkExternalMemoryFeatureFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT:
            OutputString(outputFile, "VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT");
            return;
        case VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT:
            OutputString(outputFile, "VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT");
            return;
        case VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT:
            OutputString(outputFile, "VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkExternalFenceHandleTypeFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkExternalFenceHandleTypeFlagBits e = static_cast<VkExternalFenceHandleTypeFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT:
            OutputString(outputFile, "VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT");
            return;
        case VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT:
            OutputString(outputFile, "VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT");
            return;
        case VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT:
            OutputString(outputFile, "VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT");
            return;
        case VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT:
            OutputString(outputFile, "VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkExternalFenceFeatureFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkExternalFenceFeatureFlagBits e = static_cast<VkExternalFenceFeatureFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT:
            OutputString(outputFile, "VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT");
            return;
        case VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT:
            OutputString(outputFile, "VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkFenceImportFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkFenceImportFlagBits e = static_cast<VkFenceImportFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_FENCE_IMPORT_TEMPORARY_BIT:
            OutputString(outputFile, "VK_FENCE_IMPORT_TEMPORARY_BIT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkSemaphoreImportFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkSemaphoreImportFlagBits e = static_cast<VkSemaphoreImportFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SEMAPHORE_IMPORT_TEMPORARY_BIT:
            OutputString(outputFile, "VK_SEMAPHORE_IMPORT_TEMPORARY_BIT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkExternalSemaphoreHandleTypeFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkExternalSemaphoreHandleTypeFlagBits e = static_cast<VkExternalSemaphoreHandleTypeFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT:
            OutputString(outputFile, "VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT");
            return;
        case VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT:
            OutputString(outputFile, "VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT");
            return;
        case VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT:
            OutputString(outputFile, "VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT");
            return;
        case VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT:
            OutputString(outputFile, "VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT");
            return;
        case VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT:
            OutputString(outputFile, "VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkExternalSemaphoreFeatureFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkExternalSemaphoreFeatureFlagBits e = static_cast<VkExternalSemaphoreFeatureFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT:
            OutputString(outputFile, "VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT");
            return;
        case VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT:
            OutputString(outputFile, "VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkSurfaceTransformFlagBitsKHR(FILE* outputFile, uint32_t enum_uint32)
{
    VkSurfaceTransformFlagBitsKHR e = static_cast<VkSurfaceTransformFlagBitsKHR>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR:
            OutputString(outputFile, "VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR");
            return;
        case VK_SURFACE_TRANSFORM_ROTATE_90_BIT_KHR:
            OutputString(outputFile, "VK_SURFACE_TRANSFORM_ROTATE_90_BIT_KHR");
            return;
        case VK_SURFACE_TRANSFORM_ROTATE_180_BIT_KHR:
            OutputString(outputFile, "VK_SURFACE_TRANSFORM_ROTATE_180_BIT_KHR");
            return;
        case VK_SURFACE_TRANSFORM_ROTATE_270_BIT_KHR:
            OutputString(outputFile, "VK_SURFACE_TRANSFORM_ROTATE_270_BIT_KHR");
            return;
        case VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_BIT_KHR:
            OutputString(outputFile, "VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_BIT_KHR");
            return;
        case VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_90_BIT_KHR:
            OutputString(outputFile, "VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_90_BIT_KHR");
            return;
        case VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_180_BIT_KHR:
            OutputString(outputFile, "VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_180_BIT_KHR");
            return;
        case VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_270_BIT_KHR:
            OutputString(outputFile, "VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_270_BIT_KHR");
            return;
        case VK_SURFACE_TRANSFORM_INHERIT_BIT_KHR:
            OutputString(outputFile, "VK_SURFACE_TRANSFORM_INHERIT_BIT_KHR");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkCompositeAlphaFlagBitsKHR(FILE* outputFile, uint32_t enum_uint32)
{
    VkCompositeAlphaFlagBitsKHR e = static_cast<VkCompositeAlphaFlagBitsKHR>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR:
            OutputString(outputFile, "VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR");
            return;
        case VK_COMPOSITE_ALPHA_PRE_MULTIPLIED_BIT_KHR:
            OutputString(outputFile, "VK_COMPOSITE_ALPHA_PRE_MULTIPLIED_BIT_KHR");
            return;
        case VK_COMPOSITE_ALPHA_POST_MULTIPLIED_BIT_KHR:
            OutputString(outputFile, "VK_COMPOSITE_ALPHA_POST_MULTIPLIED_BIT_KHR");
            return;
        case VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR:
            OutputString(outputFile, "VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkColorSpaceKHR(FILE* outputFile, uint32_t enum_uint32)
{
    VkColorSpaceKHR e = static_cast<VkColorSpaceKHR>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_COLOR_SPACE_SRGB_NONLINEAR_KHR:
            OutputString(outputFile, "VK_COLOR_SPACE_SRGB_NONLINEAR_KHR");
            return;
        case VK_COLOR_SPACE_DISPLAY_P3_NONLINEAR_EXT:
            OutputString(outputFile, "VK_COLOR_SPACE_DISPLAY_P3_NONLINEAR_EXT");
            return;
        case VK_COLOR_SPACE_EXTENDED_SRGB_LINEAR_EXT:
            OutputString(outputFile, "VK_COLOR_SPACE_EXTENDED_SRGB_LINEAR_EXT");
            return;
        case VK_COLOR_SPACE_DISPLAY_P3_LINEAR_EXT:
            OutputString(outputFile, "VK_COLOR_SPACE_DISPLAY_P3_LINEAR_EXT");
            return;
        case VK_COLOR_SPACE_DCI_P3_NONLINEAR_EXT:
            OutputString(outputFile, "VK_COLOR_SPACE_DCI_P3_NONLINEAR_EXT");
            return;
        case VK_COLOR_SPACE_BT709_LINEAR_EXT:
            OutputString(outputFile, "VK_COLOR_SPACE_BT709_LINEAR_EXT");
            return;
        case VK_COLOR_SPACE_BT709_NONLINEAR_EXT:
            OutputString(outputFile, "VK_COLOR_SPACE_BT709_NONLINEAR_EXT");
            return;
        case VK_COLOR_SPACE_BT2020_LINEAR_EXT:
            OutputString(outputFile, "VK_COLOR_SPACE_BT2020_LINEAR_EXT");
            return;
        case VK_COLOR_SPACE_HDR10_ST2084_EXT:
            OutputString(outputFile, "VK_COLOR_SPACE_HDR10_ST2084_EXT");
            return;
        case VK_COLOR_SPACE_DOLBYVISION_EXT:
            OutputString(outputFile, "VK_COLOR_SPACE_DOLBYVISION_EXT");
            return;
        case VK_COLOR_SPACE_HDR10_HLG_EXT:
            OutputString(outputFile, "VK_COLOR_SPACE_HDR10_HLG_EXT");
            return;
        case VK_COLOR_SPACE_ADOBERGB_LINEAR_EXT:
            OutputString(outputFile, "VK_COLOR_SPACE_ADOBERGB_LINEAR_EXT");
            return;
        case VK_COLOR_SPACE_ADOBERGB_NONLINEAR_EXT:
            OutputString(outputFile, "VK_COLOR_SPACE_ADOBERGB_NONLINEAR_EXT");
            return;
        case VK_COLOR_SPACE_PASS_THROUGH_EXT:
            OutputString(outputFile, "VK_COLOR_SPACE_PASS_THROUGH_EXT");
            return;
        case VK_COLOR_SPACE_EXTENDED_SRGB_NONLINEAR_EXT:
            OutputString(outputFile, "VK_COLOR_SPACE_EXTENDED_SRGB_NONLINEAR_EXT");
            return;
        case VK_COLOR_SPACE_DISPLAY_NATIVE_AMD:
            OutputString(outputFile, "VK_COLOR_SPACE_DISPLAY_NATIVE_AMD");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkPresentModeKHR(FILE* outputFile, uint32_t enum_uint32)
{
    VkPresentModeKHR e = static_cast<VkPresentModeKHR>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_PRESENT_MODE_IMMEDIATE_KHR:
            OutputString(outputFile, "VK_PRESENT_MODE_IMMEDIATE_KHR");
            return;
        case VK_PRESENT_MODE_MAILBOX_KHR:
            OutputString(outputFile, "VK_PRESENT_MODE_MAILBOX_KHR");
            return;
        case VK_PRESENT_MODE_FIFO_KHR:
            OutputString(outputFile, "VK_PRESENT_MODE_FIFO_KHR");
            return;
        case VK_PRESENT_MODE_FIFO_RELAXED_KHR:
            OutputString(outputFile, "VK_PRESENT_MODE_FIFO_RELAXED_KHR");
            return;
        case VK_PRESENT_MODE_SHARED_DEMAND_REFRESH_KHR:
            OutputString(outputFile, "VK_PRESENT_MODE_SHARED_DEMAND_REFRESH_KHR");
            return;
        case VK_PRESENT_MODE_SHARED_CONTINUOUS_REFRESH_KHR:
            OutputString(outputFile, "VK_PRESENT_MODE_SHARED_CONTINUOUS_REFRESH_KHR");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkSwapchainCreateFlagBitsKHR(FILE* outputFile, uint32_t enum_uint32)
{
    VkSwapchainCreateFlagBitsKHR e = static_cast<VkSwapchainCreateFlagBitsKHR>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SWAPCHAIN_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR:
            OutputString(outputFile, "VK_SWAPCHAIN_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR");
            return;
        case VK_SWAPCHAIN_CREATE_PROTECTED_BIT_KHR:
            OutputString(outputFile, "VK_SWAPCHAIN_CREATE_PROTECTED_BIT_KHR");
            return;
        case VK_SWAPCHAIN_CREATE_MUTABLE_FORMAT_BIT_KHR:
            OutputString(outputFile, "VK_SWAPCHAIN_CREATE_MUTABLE_FORMAT_BIT_KHR");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkDeviceGroupPresentModeFlagBitsKHR(FILE* outputFile, uint32_t enum_uint32)
{
    VkDeviceGroupPresentModeFlagBitsKHR e = static_cast<VkDeviceGroupPresentModeFlagBitsKHR>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_BIT_KHR:
            OutputString(outputFile, "VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_BIT_KHR");
            return;
        case VK_DEVICE_GROUP_PRESENT_MODE_REMOTE_BIT_KHR:
            OutputString(outputFile, "VK_DEVICE_GROUP_PRESENT_MODE_REMOTE_BIT_KHR");
            return;
        case VK_DEVICE_GROUP_PRESENT_MODE_SUM_BIT_KHR:
            OutputString(outputFile, "VK_DEVICE_GROUP_PRESENT_MODE_SUM_BIT_KHR");
            return;
        case VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_MULTI_DEVICE_BIT_KHR:
            OutputString(outputFile, "VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_MULTI_DEVICE_BIT_KHR");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkDisplayPlaneAlphaFlagBitsKHR(FILE* outputFile, uint32_t enum_uint32)
{
    VkDisplayPlaneAlphaFlagBitsKHR e = static_cast<VkDisplayPlaneAlphaFlagBitsKHR>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_DISPLAY_PLANE_ALPHA_OPAQUE_BIT_KHR:
            OutputString(outputFile, "VK_DISPLAY_PLANE_ALPHA_OPAQUE_BIT_KHR");
            return;
        case VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR:
            OutputString(outputFile, "VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR");
            return;
        case VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_BIT_KHR:
            OutputString(outputFile, "VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_BIT_KHR");
            return;
        case VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_PREMULTIPLIED_BIT_KHR:
            OutputString(outputFile, "VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_PREMULTIPLIED_BIT_KHR");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkDriverIdKHR(FILE* outputFile, uint32_t enum_uint32)
{
    VkDriverIdKHR e = static_cast<VkDriverIdKHR>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_DRIVER_ID_AMD_PROPRIETARY_KHR:
            OutputString(outputFile, "VK_DRIVER_ID_AMD_PROPRIETARY_KHR");
            return;
        case VK_DRIVER_ID_AMD_OPEN_SOURCE_KHR:
            OutputString(outputFile, "VK_DRIVER_ID_AMD_OPEN_SOURCE_KHR");
            return;
        case VK_DRIVER_ID_MESA_RADV_KHR:
            OutputString(outputFile, "VK_DRIVER_ID_MESA_RADV_KHR");
            return;
        case VK_DRIVER_ID_NVIDIA_PROPRIETARY_KHR:
            OutputString(outputFile, "VK_DRIVER_ID_NVIDIA_PROPRIETARY_KHR");
            return;
        case VK_DRIVER_ID_INTEL_PROPRIETARY_WINDOWS_KHR:
            OutputString(outputFile, "VK_DRIVER_ID_INTEL_PROPRIETARY_WINDOWS_KHR");
            return;
        case VK_DRIVER_ID_INTEL_OPEN_SOURCE_MESA_KHR:
            OutputString(outputFile, "VK_DRIVER_ID_INTEL_OPEN_SOURCE_MESA_KHR");
            return;
        case VK_DRIVER_ID_IMAGINATION_PROPRIETARY_KHR:
            OutputString(outputFile, "VK_DRIVER_ID_IMAGINATION_PROPRIETARY_KHR");
            return;
        case VK_DRIVER_ID_QUALCOMM_PROPRIETARY_KHR:
            OutputString(outputFile, "VK_DRIVER_ID_QUALCOMM_PROPRIETARY_KHR");
            return;
        case VK_DRIVER_ID_ARM_PROPRIETARY_KHR:
            OutputString(outputFile, "VK_DRIVER_ID_ARM_PROPRIETARY_KHR");
            return;
        case VK_DRIVER_ID_GOOGLE_SWIFTSHADER_KHR:
            OutputString(outputFile, "VK_DRIVER_ID_GOOGLE_SWIFTSHADER_KHR");
            return;
        case VK_DRIVER_ID_GGP_PROPRIETARY_KHR:
            OutputString(outputFile, "VK_DRIVER_ID_GGP_PROPRIETARY_KHR");
            return;
        case VK_DRIVER_ID_BROADCOM_PROPRIETARY_KHR:
            OutputString(outputFile, "VK_DRIVER_ID_BROADCOM_PROPRIETARY_KHR");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkShaderFloatControlsIndependenceKHR(FILE* outputFile, uint32_t enum_uint32)
{
    VkShaderFloatControlsIndependenceKHR e = static_cast<VkShaderFloatControlsIndependenceKHR>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_32_BIT_ONLY_KHR:
            OutputString(outputFile, "VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_32_BIT_ONLY_KHR");
            return;
        case VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_ALL_KHR:
            OutputString(outputFile, "VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_ALL_KHR");
            return;
        case VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_NONE_KHR:
            OutputString(outputFile, "VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_NONE_KHR");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkResolveModeFlagBitsKHR(FILE* outputFile, uint32_t enum_uint32)
{
    VkResolveModeFlagBitsKHR e = static_cast<VkResolveModeFlagBitsKHR>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_RESOLVE_MODE_NONE_KHR:
            OutputString(outputFile, "VK_RESOLVE_MODE_NONE_KHR");
            return;
        case VK_RESOLVE_MODE_SAMPLE_ZERO_BIT_KHR:
            OutputString(outputFile, "VK_RESOLVE_MODE_SAMPLE_ZERO_BIT_KHR");
            return;
        case VK_RESOLVE_MODE_AVERAGE_BIT_KHR:
            OutputString(outputFile, "VK_RESOLVE_MODE_AVERAGE_BIT_KHR");
            return;
        case VK_RESOLVE_MODE_MIN_BIT_KHR:
            OutputString(outputFile, "VK_RESOLVE_MODE_MIN_BIT_KHR");
            return;
        case VK_RESOLVE_MODE_MAX_BIT_KHR:
            OutputString(outputFile, "VK_RESOLVE_MODE_MAX_BIT_KHR");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkSemaphoreTypeKHR(FILE* outputFile, uint32_t enum_uint32)
{
    VkSemaphoreTypeKHR e = static_cast<VkSemaphoreTypeKHR>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SEMAPHORE_TYPE_BINARY_KHR:
            OutputString(outputFile, "VK_SEMAPHORE_TYPE_BINARY_KHR");
            return;
        case VK_SEMAPHORE_TYPE_TIMELINE_KHR:
            OutputString(outputFile, "VK_SEMAPHORE_TYPE_TIMELINE_KHR");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkSemaphoreWaitFlagBitsKHR(FILE* outputFile, uint32_t enum_uint32)
{
    VkSemaphoreWaitFlagBitsKHR e = static_cast<VkSemaphoreWaitFlagBitsKHR>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SEMAPHORE_WAIT_ANY_BIT_KHR:
            OutputString(outputFile, "VK_SEMAPHORE_WAIT_ANY_BIT_KHR");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkPipelineExecutableStatisticFormatKHR(FILE* outputFile, uint32_t enum_uint32)
{
    VkPipelineExecutableStatisticFormatKHR e = static_cast<VkPipelineExecutableStatisticFormatKHR>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_BOOL32_KHR:
            OutputString(outputFile, "VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_BOOL32_KHR");
            return;
        case VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_INT64_KHR:
            OutputString(outputFile, "VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_INT64_KHR");
            return;
        case VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_UINT64_KHR:
            OutputString(outputFile, "VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_UINT64_KHR");
            return;
        case VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_FLOAT64_KHR:
            OutputString(outputFile, "VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_FLOAT64_KHR");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkDebugReportObjectTypeEXT(FILE* outputFile, uint32_t enum_uint32)
{
    VkDebugReportObjectTypeEXT e = static_cast<VkDebugReportObjectTypeEXT>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT:
            OutputString(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_INSTANCE_EXT:
            OutputString(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_INSTANCE_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_PHYSICAL_DEVICE_EXT:
            OutputString(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_PHYSICAL_DEVICE_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_EXT:
            OutputString(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_QUEUE_EXT:
            OutputString(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_QUEUE_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_SEMAPHORE_EXT:
            OutputString(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_SEMAPHORE_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_BUFFER_EXT:
            OutputString(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_BUFFER_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_FENCE_EXT:
            OutputString(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_FENCE_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_MEMORY_EXT:
            OutputString(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_MEMORY_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_EXT:
            OutputString(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_EXT:
            OutputString(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_EVENT_EXT:
            OutputString(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_EVENT_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_QUERY_POOL_EXT:
            OutputString(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_QUERY_POOL_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_VIEW_EXT:
            OutputString(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_VIEW_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_VIEW_EXT:
            OutputString(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_VIEW_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_SHADER_MODULE_EXT:
            OutputString(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_SHADER_MODULE_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_CACHE_EXT:
            OutputString(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_CACHE_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_LAYOUT_EXT:
            OutputString(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_LAYOUT_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_RENDER_PASS_EXT:
            OutputString(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_RENDER_PASS_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_EXT:
            OutputString(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT_EXT:
            OutputString(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_EXT:
            OutputString(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_POOL_EXT:
            OutputString(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_POOL_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_EXT:
            OutputString(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_FRAMEBUFFER_EXT:
            OutputString(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_FRAMEBUFFER_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_POOL_EXT:
            OutputString(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_POOL_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_SURFACE_KHR_EXT:
            OutputString(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_SURFACE_KHR_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_SWAPCHAIN_KHR_EXT:
            OutputString(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_SWAPCHAIN_KHR_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT_EXT:
            OutputString(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_DISPLAY_KHR_EXT:
            OutputString(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_DISPLAY_KHR_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_DISPLAY_MODE_KHR_EXT:
            OutputString(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_DISPLAY_MODE_KHR_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_OBJECT_TABLE_NVX_EXT:
            OutputString(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_OBJECT_TABLE_NVX_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_INDIRECT_COMMANDS_LAYOUT_NVX_EXT:
            OutputString(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_INDIRECT_COMMANDS_LAYOUT_NVX_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_VALIDATION_CACHE_EXT_EXT:
            OutputString(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_VALIDATION_CACHE_EXT_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION_EXT:
            OutputString(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_EXT:
            OutputString(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_ACCELERATION_STRUCTURE_NV_EXT:
            OutputString(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_ACCELERATION_STRUCTURE_NV_EXT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkDebugReportFlagBitsEXT(FILE* outputFile, uint32_t enum_uint32)
{
    VkDebugReportFlagBitsEXT e = static_cast<VkDebugReportFlagBitsEXT>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_DEBUG_REPORT_INFORMATION_BIT_EXT:
            OutputString(outputFile, "VK_DEBUG_REPORT_INFORMATION_BIT_EXT");
            return;
        case VK_DEBUG_REPORT_WARNING_BIT_EXT:
            OutputString(outputFile, "VK_DEBUG_REPORT_WARNING_BIT_EXT");
            return;
        case VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT:
            OutputString(outputFile, "VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT");
            return;
        case VK_DEBUG_REPORT_ERROR_BIT_EXT:
            OutputString(outputFile, "VK_DEBUG_REPORT_ERROR_BIT_EXT");
            return;
        case VK_DEBUG_REPORT_DEBUG_BIT_EXT:
            OutputString(outputFile, "VK_DEBUG_REPORT_DEBUG_BIT_EXT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkRasterizationOrderAMD(FILE* outputFile, uint32_t enum_uint32)
{
    VkRasterizationOrderAMD e = static_cast<VkRasterizationOrderAMD>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_RASTERIZATION_ORDER_STRICT_AMD:
            OutputString(outputFile, "VK_RASTERIZATION_ORDER_STRICT_AMD");
            return;
        case VK_RASTERIZATION_ORDER_RELAXED_AMD:
            OutputString(outputFile, "VK_RASTERIZATION_ORDER_RELAXED_AMD");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkShaderInfoTypeAMD(FILE* outputFile, uint32_t enum_uint32)
{
    VkShaderInfoTypeAMD e = static_cast<VkShaderInfoTypeAMD>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SHADER_INFO_TYPE_STATISTICS_AMD:
            OutputString(outputFile, "VK_SHADER_INFO_TYPE_STATISTICS_AMD");
            return;
        case VK_SHADER_INFO_TYPE_BINARY_AMD:
            OutputString(outputFile, "VK_SHADER_INFO_TYPE_BINARY_AMD");
            return;
        case VK_SHADER_INFO_TYPE_DISASSEMBLY_AMD:
            OutputString(outputFile, "VK_SHADER_INFO_TYPE_DISASSEMBLY_AMD");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkExternalMemoryHandleTypeFlagBitsNV(FILE* outputFile, uint32_t enum_uint32)
{
    VkExternalMemoryHandleTypeFlagBitsNV e = static_cast<VkExternalMemoryHandleTypeFlagBitsNV>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_NV:
            OutputString(outputFile, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_NV");
            return;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_NV:
            OutputString(outputFile, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_NV");
            return;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_BIT_NV:
            OutputString(outputFile, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_BIT_NV");
            return;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_KMT_BIT_NV:
            OutputString(outputFile, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_KMT_BIT_NV");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkExternalMemoryFeatureFlagBitsNV(FILE* outputFile, uint32_t enum_uint32)
{
    VkExternalMemoryFeatureFlagBitsNV e = static_cast<VkExternalMemoryFeatureFlagBitsNV>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_NV:
            OutputString(outputFile, "VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_NV");
            return;
        case VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_NV:
            OutputString(outputFile, "VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_NV");
            return;
        case VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_NV:
            OutputString(outputFile, "VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_NV");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkValidationCheckEXT(FILE* outputFile, uint32_t enum_uint32)
{
    VkValidationCheckEXT e = static_cast<VkValidationCheckEXT>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_VALIDATION_CHECK_ALL_EXT:
            OutputString(outputFile, "VK_VALIDATION_CHECK_ALL_EXT");
            return;
        case VK_VALIDATION_CHECK_SHADERS_EXT:
            OutputString(outputFile, "VK_VALIDATION_CHECK_SHADERS_EXT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkConditionalRenderingFlagBitsEXT(FILE* outputFile, uint32_t enum_uint32)
{
    VkConditionalRenderingFlagBitsEXT e = static_cast<VkConditionalRenderingFlagBitsEXT>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_CONDITIONAL_RENDERING_INVERTED_BIT_EXT:
            OutputString(outputFile, "VK_CONDITIONAL_RENDERING_INVERTED_BIT_EXT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkIndirectCommandsLayoutUsageFlagBitsNVX(FILE* outputFile, uint32_t enum_uint32)
{
    VkIndirectCommandsLayoutUsageFlagBitsNVX e = static_cast<VkIndirectCommandsLayoutUsageFlagBitsNVX>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_INDIRECT_COMMANDS_LAYOUT_USAGE_UNORDERED_SEQUENCES_BIT_NVX:
            OutputString(outputFile, "VK_INDIRECT_COMMANDS_LAYOUT_USAGE_UNORDERED_SEQUENCES_BIT_NVX");
            return;
        case VK_INDIRECT_COMMANDS_LAYOUT_USAGE_SPARSE_SEQUENCES_BIT_NVX:
            OutputString(outputFile, "VK_INDIRECT_COMMANDS_LAYOUT_USAGE_SPARSE_SEQUENCES_BIT_NVX");
            return;
        case VK_INDIRECT_COMMANDS_LAYOUT_USAGE_EMPTY_EXECUTIONS_BIT_NVX:
            OutputString(outputFile, "VK_INDIRECT_COMMANDS_LAYOUT_USAGE_EMPTY_EXECUTIONS_BIT_NVX");
            return;
        case VK_INDIRECT_COMMANDS_LAYOUT_USAGE_INDEXED_SEQUENCES_BIT_NVX:
            OutputString(outputFile, "VK_INDIRECT_COMMANDS_LAYOUT_USAGE_INDEXED_SEQUENCES_BIT_NVX");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkObjectEntryUsageFlagBitsNVX(FILE* outputFile, uint32_t enum_uint32)
{
    VkObjectEntryUsageFlagBitsNVX e = static_cast<VkObjectEntryUsageFlagBitsNVX>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_OBJECT_ENTRY_USAGE_GRAPHICS_BIT_NVX:
            OutputString(outputFile, "VK_OBJECT_ENTRY_USAGE_GRAPHICS_BIT_NVX");
            return;
        case VK_OBJECT_ENTRY_USAGE_COMPUTE_BIT_NVX:
            OutputString(outputFile, "VK_OBJECT_ENTRY_USAGE_COMPUTE_BIT_NVX");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkIndirectCommandsTokenTypeNVX(FILE* outputFile, uint32_t enum_uint32)
{
    VkIndirectCommandsTokenTypeNVX e = static_cast<VkIndirectCommandsTokenTypeNVX>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_INDIRECT_COMMANDS_TOKEN_TYPE_PIPELINE_NVX:
            OutputString(outputFile, "VK_INDIRECT_COMMANDS_TOKEN_TYPE_PIPELINE_NVX");
            return;
        case VK_INDIRECT_COMMANDS_TOKEN_TYPE_DESCRIPTOR_SET_NVX:
            OutputString(outputFile, "VK_INDIRECT_COMMANDS_TOKEN_TYPE_DESCRIPTOR_SET_NVX");
            return;
        case VK_INDIRECT_COMMANDS_TOKEN_TYPE_INDEX_BUFFER_NVX:
            OutputString(outputFile, "VK_INDIRECT_COMMANDS_TOKEN_TYPE_INDEX_BUFFER_NVX");
            return;
        case VK_INDIRECT_COMMANDS_TOKEN_TYPE_VERTEX_BUFFER_NVX:
            OutputString(outputFile, "VK_INDIRECT_COMMANDS_TOKEN_TYPE_VERTEX_BUFFER_NVX");
            return;
        case VK_INDIRECT_COMMANDS_TOKEN_TYPE_PUSH_CONSTANT_NVX:
            OutputString(outputFile, "VK_INDIRECT_COMMANDS_TOKEN_TYPE_PUSH_CONSTANT_NVX");
            return;
        case VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_INDEXED_NVX:
            OutputString(outputFile, "VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_INDEXED_NVX");
            return;
        case VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_NVX:
            OutputString(outputFile, "VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_NVX");
            return;
        case VK_INDIRECT_COMMANDS_TOKEN_TYPE_DISPATCH_NVX:
            OutputString(outputFile, "VK_INDIRECT_COMMANDS_TOKEN_TYPE_DISPATCH_NVX");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkObjectEntryTypeNVX(FILE* outputFile, uint32_t enum_uint32)
{
    VkObjectEntryTypeNVX e = static_cast<VkObjectEntryTypeNVX>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_OBJECT_ENTRY_TYPE_DESCRIPTOR_SET_NVX:
            OutputString(outputFile, "VK_OBJECT_ENTRY_TYPE_DESCRIPTOR_SET_NVX");
            return;
        case VK_OBJECT_ENTRY_TYPE_PIPELINE_NVX:
            OutputString(outputFile, "VK_OBJECT_ENTRY_TYPE_PIPELINE_NVX");
            return;
        case VK_OBJECT_ENTRY_TYPE_INDEX_BUFFER_NVX:
            OutputString(outputFile, "VK_OBJECT_ENTRY_TYPE_INDEX_BUFFER_NVX");
            return;
        case VK_OBJECT_ENTRY_TYPE_VERTEX_BUFFER_NVX:
            OutputString(outputFile, "VK_OBJECT_ENTRY_TYPE_VERTEX_BUFFER_NVX");
            return;
        case VK_OBJECT_ENTRY_TYPE_PUSH_CONSTANT_NVX:
            OutputString(outputFile, "VK_OBJECT_ENTRY_TYPE_PUSH_CONSTANT_NVX");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkSurfaceCounterFlagBitsEXT(FILE* outputFile, uint32_t enum_uint32)
{
    VkSurfaceCounterFlagBitsEXT e = static_cast<VkSurfaceCounterFlagBitsEXT>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SURFACE_COUNTER_VBLANK_EXT:
            OutputString(outputFile, "VK_SURFACE_COUNTER_VBLANK_EXT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkDisplayPowerStateEXT(FILE* outputFile, uint32_t enum_uint32)
{
    VkDisplayPowerStateEXT e = static_cast<VkDisplayPowerStateEXT>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_DISPLAY_POWER_STATE_OFF_EXT:
            OutputString(outputFile, "VK_DISPLAY_POWER_STATE_OFF_EXT");
            return;
        case VK_DISPLAY_POWER_STATE_SUSPEND_EXT:
            OutputString(outputFile, "VK_DISPLAY_POWER_STATE_SUSPEND_EXT");
            return;
        case VK_DISPLAY_POWER_STATE_ON_EXT:
            OutputString(outputFile, "VK_DISPLAY_POWER_STATE_ON_EXT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkDeviceEventTypeEXT(FILE* outputFile, uint32_t enum_uint32)
{
    VkDeviceEventTypeEXT e = static_cast<VkDeviceEventTypeEXT>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_DEVICE_EVENT_TYPE_DISPLAY_HOTPLUG_EXT:
            OutputString(outputFile, "VK_DEVICE_EVENT_TYPE_DISPLAY_HOTPLUG_EXT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkDisplayEventTypeEXT(FILE* outputFile, uint32_t enum_uint32)
{
    VkDisplayEventTypeEXT e = static_cast<VkDisplayEventTypeEXT>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_DISPLAY_EVENT_TYPE_FIRST_PIXEL_OUT_EXT:
            OutputString(outputFile, "VK_DISPLAY_EVENT_TYPE_FIRST_PIXEL_OUT_EXT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkViewportCoordinateSwizzleNV(FILE* outputFile, uint32_t enum_uint32)
{
    VkViewportCoordinateSwizzleNV e = static_cast<VkViewportCoordinateSwizzleNV>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_X_NV:
            OutputString(outputFile, "VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_X_NV");
            return;
        case VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_X_NV:
            OutputString(outputFile, "VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_X_NV");
            return;
        case VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_Y_NV:
            OutputString(outputFile, "VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_Y_NV");
            return;
        case VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_Y_NV:
            OutputString(outputFile, "VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_Y_NV");
            return;
        case VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_Z_NV:
            OutputString(outputFile, "VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_Z_NV");
            return;
        case VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_Z_NV:
            OutputString(outputFile, "VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_Z_NV");
            return;
        case VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_W_NV:
            OutputString(outputFile, "VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_W_NV");
            return;
        case VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_W_NV:
            OutputString(outputFile, "VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_W_NV");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkDiscardRectangleModeEXT(FILE* outputFile, uint32_t enum_uint32)
{
    VkDiscardRectangleModeEXT e = static_cast<VkDiscardRectangleModeEXT>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_DISCARD_RECTANGLE_MODE_INCLUSIVE_EXT:
            OutputString(outputFile, "VK_DISCARD_RECTANGLE_MODE_INCLUSIVE_EXT");
            return;
        case VK_DISCARD_RECTANGLE_MODE_EXCLUSIVE_EXT:
            OutputString(outputFile, "VK_DISCARD_RECTANGLE_MODE_EXCLUSIVE_EXT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkConservativeRasterizationModeEXT(FILE* outputFile, uint32_t enum_uint32)
{
    VkConservativeRasterizationModeEXT e = static_cast<VkConservativeRasterizationModeEXT>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_CONSERVATIVE_RASTERIZATION_MODE_DISABLED_EXT:
            OutputString(outputFile, "VK_CONSERVATIVE_RASTERIZATION_MODE_DISABLED_EXT");
            return;
        case VK_CONSERVATIVE_RASTERIZATION_MODE_OVERESTIMATE_EXT:
            OutputString(outputFile, "VK_CONSERVATIVE_RASTERIZATION_MODE_OVERESTIMATE_EXT");
            return;
        case VK_CONSERVATIVE_RASTERIZATION_MODE_UNDERESTIMATE_EXT:
            OutputString(outputFile, "VK_CONSERVATIVE_RASTERIZATION_MODE_UNDERESTIMATE_EXT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkDebugUtilsMessageSeverityFlagBitsEXT(FILE* outputFile, uint32_t enum_uint32)
{
    VkDebugUtilsMessageSeverityFlagBitsEXT e = static_cast<VkDebugUtilsMessageSeverityFlagBitsEXT>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT:
            OutputString(outputFile, "VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT");
            return;
        case VK_DEBUG_UTILS_MESSAGE_SEVERITY_INFO_BIT_EXT:
            OutputString(outputFile, "VK_DEBUG_UTILS_MESSAGE_SEVERITY_INFO_BIT_EXT");
            return;
        case VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT:
            OutputString(outputFile, "VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT");
            return;
        case VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT:
            OutputString(outputFile, "VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkDebugUtilsMessageTypeFlagBitsEXT(FILE* outputFile, uint32_t enum_uint32)
{
    VkDebugUtilsMessageTypeFlagBitsEXT e = static_cast<VkDebugUtilsMessageTypeFlagBitsEXT>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT:
            OutputString(outputFile, "VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT");
            return;
        case VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT:
            OutputString(outputFile, "VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT");
            return;
        case VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT:
            OutputString(outputFile, "VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkSamplerReductionModeEXT(FILE* outputFile, uint32_t enum_uint32)
{
    VkSamplerReductionModeEXT e = static_cast<VkSamplerReductionModeEXT>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SAMPLER_REDUCTION_MODE_WEIGHTED_AVERAGE_EXT:
            OutputString(outputFile, "VK_SAMPLER_REDUCTION_MODE_WEIGHTED_AVERAGE_EXT");
            return;
        case VK_SAMPLER_REDUCTION_MODE_MIN_EXT:
            OutputString(outputFile, "VK_SAMPLER_REDUCTION_MODE_MIN_EXT");
            return;
        case VK_SAMPLER_REDUCTION_MODE_MAX_EXT:
            OutputString(outputFile, "VK_SAMPLER_REDUCTION_MODE_MAX_EXT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkBlendOverlapEXT(FILE* outputFile, uint32_t enum_uint32)
{
    VkBlendOverlapEXT e = static_cast<VkBlendOverlapEXT>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_BLEND_OVERLAP_UNCORRELATED_EXT:
            OutputString(outputFile, "VK_BLEND_OVERLAP_UNCORRELATED_EXT");
            return;
        case VK_BLEND_OVERLAP_DISJOINT_EXT:
            OutputString(outputFile, "VK_BLEND_OVERLAP_DISJOINT_EXT");
            return;
        case VK_BLEND_OVERLAP_CONJOINT_EXT:
            OutputString(outputFile, "VK_BLEND_OVERLAP_CONJOINT_EXT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkCoverageModulationModeNV(FILE* outputFile, uint32_t enum_uint32)
{
    VkCoverageModulationModeNV e = static_cast<VkCoverageModulationModeNV>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_COVERAGE_MODULATION_MODE_NONE_NV:
            OutputString(outputFile, "VK_COVERAGE_MODULATION_MODE_NONE_NV");
            return;
        case VK_COVERAGE_MODULATION_MODE_RGB_NV:
            OutputString(outputFile, "VK_COVERAGE_MODULATION_MODE_RGB_NV");
            return;
        case VK_COVERAGE_MODULATION_MODE_ALPHA_NV:
            OutputString(outputFile, "VK_COVERAGE_MODULATION_MODE_ALPHA_NV");
            return;
        case VK_COVERAGE_MODULATION_MODE_RGBA_NV:
            OutputString(outputFile, "VK_COVERAGE_MODULATION_MODE_RGBA_NV");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkValidationCacheHeaderVersionEXT(FILE* outputFile, uint32_t enum_uint32)
{
    VkValidationCacheHeaderVersionEXT e = static_cast<VkValidationCacheHeaderVersionEXT>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_VALIDATION_CACHE_HEADER_VERSION_ONE_EXT:
            OutputString(outputFile, "VK_VALIDATION_CACHE_HEADER_VERSION_ONE_EXT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkDescriptorBindingFlagBitsEXT(FILE* outputFile, uint32_t enum_uint32)
{
    VkDescriptorBindingFlagBitsEXT e = static_cast<VkDescriptorBindingFlagBitsEXT>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_DESCRIPTOR_BINDING_UPDATE_AFTER_BIND_BIT_EXT:
            OutputString(outputFile, "VK_DESCRIPTOR_BINDING_UPDATE_AFTER_BIND_BIT_EXT");
            return;
        case VK_DESCRIPTOR_BINDING_UPDATE_UNUSED_WHILE_PENDING_BIT_EXT:
            OutputString(outputFile, "VK_DESCRIPTOR_BINDING_UPDATE_UNUSED_WHILE_PENDING_BIT_EXT");
            return;
        case VK_DESCRIPTOR_BINDING_PARTIALLY_BOUND_BIT_EXT:
            OutputString(outputFile, "VK_DESCRIPTOR_BINDING_PARTIALLY_BOUND_BIT_EXT");
            return;
        case VK_DESCRIPTOR_BINDING_VARIABLE_DESCRIPTOR_COUNT_BIT_EXT:
            OutputString(outputFile, "VK_DESCRIPTOR_BINDING_VARIABLE_DESCRIPTOR_COUNT_BIT_EXT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkShadingRatePaletteEntryNV(FILE* outputFile, uint32_t enum_uint32)
{
    VkShadingRatePaletteEntryNV e = static_cast<VkShadingRatePaletteEntryNV>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SHADING_RATE_PALETTE_ENTRY_NO_INVOCATIONS_NV:
            OutputString(outputFile, "VK_SHADING_RATE_PALETTE_ENTRY_NO_INVOCATIONS_NV");
            return;
        case VK_SHADING_RATE_PALETTE_ENTRY_16_INVOCATIONS_PER_PIXEL_NV:
            OutputString(outputFile, "VK_SHADING_RATE_PALETTE_ENTRY_16_INVOCATIONS_PER_PIXEL_NV");
            return;
        case VK_SHADING_RATE_PALETTE_ENTRY_8_INVOCATIONS_PER_PIXEL_NV:
            OutputString(outputFile, "VK_SHADING_RATE_PALETTE_ENTRY_8_INVOCATIONS_PER_PIXEL_NV");
            return;
        case VK_SHADING_RATE_PALETTE_ENTRY_4_INVOCATIONS_PER_PIXEL_NV:
            OutputString(outputFile, "VK_SHADING_RATE_PALETTE_ENTRY_4_INVOCATIONS_PER_PIXEL_NV");
            return;
        case VK_SHADING_RATE_PALETTE_ENTRY_2_INVOCATIONS_PER_PIXEL_NV:
            OutputString(outputFile, "VK_SHADING_RATE_PALETTE_ENTRY_2_INVOCATIONS_PER_PIXEL_NV");
            return;
        case VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_PIXEL_NV:
            OutputString(outputFile, "VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_PIXEL_NV");
            return;
        case VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X1_PIXELS_NV:
            OutputString(outputFile, "VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X1_PIXELS_NV");
            return;
        case VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_1X2_PIXELS_NV:
            OutputString(outputFile, "VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_1X2_PIXELS_NV");
            return;
        case VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X2_PIXELS_NV:
            OutputString(outputFile, "VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X2_PIXELS_NV");
            return;
        case VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_4X2_PIXELS_NV:
            OutputString(outputFile, "VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_4X2_PIXELS_NV");
            return;
        case VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X4_PIXELS_NV:
            OutputString(outputFile, "VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X4_PIXELS_NV");
            return;
        case VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_4X4_PIXELS_NV:
            OutputString(outputFile, "VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_4X4_PIXELS_NV");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkCoarseSampleOrderTypeNV(FILE* outputFile, uint32_t enum_uint32)
{
    VkCoarseSampleOrderTypeNV e = static_cast<VkCoarseSampleOrderTypeNV>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_COARSE_SAMPLE_ORDER_TYPE_DEFAULT_NV:
            OutputString(outputFile, "VK_COARSE_SAMPLE_ORDER_TYPE_DEFAULT_NV");
            return;
        case VK_COARSE_SAMPLE_ORDER_TYPE_CUSTOM_NV:
            OutputString(outputFile, "VK_COARSE_SAMPLE_ORDER_TYPE_CUSTOM_NV");
            return;
        case VK_COARSE_SAMPLE_ORDER_TYPE_PIXEL_MAJOR_NV:
            OutputString(outputFile, "VK_COARSE_SAMPLE_ORDER_TYPE_PIXEL_MAJOR_NV");
            return;
        case VK_COARSE_SAMPLE_ORDER_TYPE_SAMPLE_MAJOR_NV:
            OutputString(outputFile, "VK_COARSE_SAMPLE_ORDER_TYPE_SAMPLE_MAJOR_NV");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkAccelerationStructureTypeNV(FILE* outputFile, uint32_t enum_uint32)
{
    VkAccelerationStructureTypeNV e = static_cast<VkAccelerationStructureTypeNV>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_ACCELERATION_STRUCTURE_TYPE_TOP_LEVEL_NV:
            OutputString(outputFile, "VK_ACCELERATION_STRUCTURE_TYPE_TOP_LEVEL_NV");
            return;
        case VK_ACCELERATION_STRUCTURE_TYPE_BOTTOM_LEVEL_NV:
            OutputString(outputFile, "VK_ACCELERATION_STRUCTURE_TYPE_BOTTOM_LEVEL_NV");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkRayTracingShaderGroupTypeNV(FILE* outputFile, uint32_t enum_uint32)
{
    VkRayTracingShaderGroupTypeNV e = static_cast<VkRayTracingShaderGroupTypeNV>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_RAY_TRACING_SHADER_GROUP_TYPE_GENERAL_NV:
            OutputString(outputFile, "VK_RAY_TRACING_SHADER_GROUP_TYPE_GENERAL_NV");
            return;
        case VK_RAY_TRACING_SHADER_GROUP_TYPE_TRIANGLES_HIT_GROUP_NV:
            OutputString(outputFile, "VK_RAY_TRACING_SHADER_GROUP_TYPE_TRIANGLES_HIT_GROUP_NV");
            return;
        case VK_RAY_TRACING_SHADER_GROUP_TYPE_PROCEDURAL_HIT_GROUP_NV:
            OutputString(outputFile, "VK_RAY_TRACING_SHADER_GROUP_TYPE_PROCEDURAL_HIT_GROUP_NV");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkGeometryTypeNV(FILE* outputFile, uint32_t enum_uint32)
{
    VkGeometryTypeNV e = static_cast<VkGeometryTypeNV>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_GEOMETRY_TYPE_TRIANGLES_NV:
            OutputString(outputFile, "VK_GEOMETRY_TYPE_TRIANGLES_NV");
            return;
        case VK_GEOMETRY_TYPE_AABBS_NV:
            OutputString(outputFile, "VK_GEOMETRY_TYPE_AABBS_NV");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkGeometryFlagBitsNV(FILE* outputFile, uint32_t enum_uint32)
{
    VkGeometryFlagBitsNV e = static_cast<VkGeometryFlagBitsNV>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_GEOMETRY_OPAQUE_BIT_NV:
            OutputString(outputFile, "VK_GEOMETRY_OPAQUE_BIT_NV");
            return;
        case VK_GEOMETRY_NO_DUPLICATE_ANY_HIT_INVOCATION_BIT_NV:
            OutputString(outputFile, "VK_GEOMETRY_NO_DUPLICATE_ANY_HIT_INVOCATION_BIT_NV");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkGeometryInstanceFlagBitsNV(FILE* outputFile, uint32_t enum_uint32)
{
    VkGeometryInstanceFlagBitsNV e = static_cast<VkGeometryInstanceFlagBitsNV>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_GEOMETRY_INSTANCE_TRIANGLE_CULL_DISABLE_BIT_NV:
            OutputString(outputFile, "VK_GEOMETRY_INSTANCE_TRIANGLE_CULL_DISABLE_BIT_NV");
            return;
        case VK_GEOMETRY_INSTANCE_TRIANGLE_FRONT_COUNTERCLOCKWISE_BIT_NV:
            OutputString(outputFile, "VK_GEOMETRY_INSTANCE_TRIANGLE_FRONT_COUNTERCLOCKWISE_BIT_NV");
            return;
        case VK_GEOMETRY_INSTANCE_FORCE_OPAQUE_BIT_NV:
            OutputString(outputFile, "VK_GEOMETRY_INSTANCE_FORCE_OPAQUE_BIT_NV");
            return;
        case VK_GEOMETRY_INSTANCE_FORCE_NO_OPAQUE_BIT_NV:
            OutputString(outputFile, "VK_GEOMETRY_INSTANCE_FORCE_NO_OPAQUE_BIT_NV");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkBuildAccelerationStructureFlagBitsNV(FILE* outputFile, uint32_t enum_uint32)
{
    VkBuildAccelerationStructureFlagBitsNV e = static_cast<VkBuildAccelerationStructureFlagBitsNV>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_UPDATE_BIT_NV:
            OutputString(outputFile, "VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_UPDATE_BIT_NV");
            return;
        case VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_COMPACTION_BIT_NV:
            OutputString(outputFile, "VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_COMPACTION_BIT_NV");
            return;
        case VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_TRACE_BIT_NV:
            OutputString(outputFile, "VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_TRACE_BIT_NV");
            return;
        case VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_BUILD_BIT_NV:
            OutputString(outputFile, "VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_BUILD_BIT_NV");
            return;
        case VK_BUILD_ACCELERATION_STRUCTURE_LOW_MEMORY_BIT_NV:
            OutputString(outputFile, "VK_BUILD_ACCELERATION_STRUCTURE_LOW_MEMORY_BIT_NV");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkCopyAccelerationStructureModeNV(FILE* outputFile, uint32_t enum_uint32)
{
    VkCopyAccelerationStructureModeNV e = static_cast<VkCopyAccelerationStructureModeNV>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_COPY_ACCELERATION_STRUCTURE_MODE_CLONE_NV:
            OutputString(outputFile, "VK_COPY_ACCELERATION_STRUCTURE_MODE_CLONE_NV");
            return;
        case VK_COPY_ACCELERATION_STRUCTURE_MODE_COMPACT_NV:
            OutputString(outputFile, "VK_COPY_ACCELERATION_STRUCTURE_MODE_COMPACT_NV");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkAccelerationStructureMemoryRequirementsTypeNV(FILE* outputFile, uint32_t enum_uint32)
{
    VkAccelerationStructureMemoryRequirementsTypeNV e = static_cast<VkAccelerationStructureMemoryRequirementsTypeNV>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_OBJECT_NV:
            OutputString(outputFile, "VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_OBJECT_NV");
            return;
        case VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_BUILD_SCRATCH_NV:
            OutputString(outputFile, "VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_BUILD_SCRATCH_NV");
            return;
        case VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_UPDATE_SCRATCH_NV:
            OutputString(outputFile, "VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_UPDATE_SCRATCH_NV");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkQueueGlobalPriorityEXT(FILE* outputFile, uint32_t enum_uint32)
{
    VkQueueGlobalPriorityEXT e = static_cast<VkQueueGlobalPriorityEXT>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_QUEUE_GLOBAL_PRIORITY_LOW_EXT:
            OutputString(outputFile, "VK_QUEUE_GLOBAL_PRIORITY_LOW_EXT");
            return;
        case VK_QUEUE_GLOBAL_PRIORITY_MEDIUM_EXT:
            OutputString(outputFile, "VK_QUEUE_GLOBAL_PRIORITY_MEDIUM_EXT");
            return;
        case VK_QUEUE_GLOBAL_PRIORITY_HIGH_EXT:
            OutputString(outputFile, "VK_QUEUE_GLOBAL_PRIORITY_HIGH_EXT");
            return;
        case VK_QUEUE_GLOBAL_PRIORITY_REALTIME_EXT:
            OutputString(outputFile, "VK_QUEUE_GLOBAL_PRIORITY_REALTIME_EXT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkPipelineCompilerControlFlagBitsAMD(FILE* outputFile, uint32_t enum_uint32)
{
    VkPipelineCompilerControlFlagBitsAMD e = static_cast<VkPipelineCompilerControlFlagBitsAMD>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    OutputString(outputFile, "UNKNOWN");
}

void EnumToStringVkTimeDomainEXT(FILE* outputFile, uint32_t enum_uint32)
{
    VkTimeDomainEXT e = static_cast<VkTimeDomainEXT>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_TIME_DOMAIN_DEVICE_EXT:
            OutputString(outputFile, "VK_TIME_DOMAIN_DEVICE_EXT");
            return;
        case VK_TIME_DOMAIN_CLOCK_MONOTONIC_EXT:
            OutputString(outputFile, "VK_TIME_DOMAIN_CLOCK_MONOTONIC_EXT");
            return;
        case VK_TIME_DOMAIN_CLOCK_MONOTONIC_RAW_EXT:
            OutputString(outputFile, "VK_TIME_DOMAIN_CLOCK_MONOTONIC_RAW_EXT");
            return;
        case VK_TIME_DOMAIN_QUERY_PERFORMANCE_COUNTER_EXT:
            OutputString(outputFile, "VK_TIME_DOMAIN_QUERY_PERFORMANCE_COUNTER_EXT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkMemoryOverallocationBehaviorAMD(FILE* outputFile, uint32_t enum_uint32)
{
    VkMemoryOverallocationBehaviorAMD e = static_cast<VkMemoryOverallocationBehaviorAMD>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_MEMORY_OVERALLOCATION_BEHAVIOR_DEFAULT_AMD:
            OutputString(outputFile, "VK_MEMORY_OVERALLOCATION_BEHAVIOR_DEFAULT_AMD");
            return;
        case VK_MEMORY_OVERALLOCATION_BEHAVIOR_ALLOWED_AMD:
            OutputString(outputFile, "VK_MEMORY_OVERALLOCATION_BEHAVIOR_ALLOWED_AMD");
            return;
        case VK_MEMORY_OVERALLOCATION_BEHAVIOR_DISALLOWED_AMD:
            OutputString(outputFile, "VK_MEMORY_OVERALLOCATION_BEHAVIOR_DISALLOWED_AMD");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkPipelineCreationFeedbackFlagBitsEXT(FILE* outputFile, uint32_t enum_uint32)
{
    VkPipelineCreationFeedbackFlagBitsEXT e = static_cast<VkPipelineCreationFeedbackFlagBitsEXT>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_PIPELINE_CREATION_FEEDBACK_VALID_BIT_EXT:
            OutputString(outputFile, "VK_PIPELINE_CREATION_FEEDBACK_VALID_BIT_EXT");
            return;
        case VK_PIPELINE_CREATION_FEEDBACK_APPLICATION_PIPELINE_CACHE_HIT_BIT_EXT:
            OutputString(outputFile, "VK_PIPELINE_CREATION_FEEDBACK_APPLICATION_PIPELINE_CACHE_HIT_BIT_EXT");
            return;
        case VK_PIPELINE_CREATION_FEEDBACK_BASE_PIPELINE_ACCELERATION_BIT_EXT:
            OutputString(outputFile, "VK_PIPELINE_CREATION_FEEDBACK_BASE_PIPELINE_ACCELERATION_BIT_EXT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkPerformanceConfigurationTypeINTEL(FILE* outputFile, uint32_t enum_uint32)
{
    VkPerformanceConfigurationTypeINTEL e = static_cast<VkPerformanceConfigurationTypeINTEL>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_PERFORMANCE_CONFIGURATION_TYPE_COMMAND_QUEUE_METRICS_DISCOVERY_ACTIVATED_INTEL:
            OutputString(outputFile, "VK_PERFORMANCE_CONFIGURATION_TYPE_COMMAND_QUEUE_METRICS_DISCOVERY_ACTIVATED_INTEL");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkQueryPoolSamplingModeINTEL(FILE* outputFile, uint32_t enum_uint32)
{
    VkQueryPoolSamplingModeINTEL e = static_cast<VkQueryPoolSamplingModeINTEL>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_QUERY_POOL_SAMPLING_MODE_MANUAL_INTEL:
            OutputString(outputFile, "VK_QUERY_POOL_SAMPLING_MODE_MANUAL_INTEL");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkPerformanceOverrideTypeINTEL(FILE* outputFile, uint32_t enum_uint32)
{
    VkPerformanceOverrideTypeINTEL e = static_cast<VkPerformanceOverrideTypeINTEL>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_PERFORMANCE_OVERRIDE_TYPE_NULL_HARDWARE_INTEL:
            OutputString(outputFile, "VK_PERFORMANCE_OVERRIDE_TYPE_NULL_HARDWARE_INTEL");
            return;
        case VK_PERFORMANCE_OVERRIDE_TYPE_FLUSH_GPU_CACHES_INTEL:
            OutputString(outputFile, "VK_PERFORMANCE_OVERRIDE_TYPE_FLUSH_GPU_CACHES_INTEL");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkPerformanceParameterTypeINTEL(FILE* outputFile, uint32_t enum_uint32)
{
    VkPerformanceParameterTypeINTEL e = static_cast<VkPerformanceParameterTypeINTEL>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_PERFORMANCE_PARAMETER_TYPE_HW_COUNTERS_SUPPORTED_INTEL:
            OutputString(outputFile, "VK_PERFORMANCE_PARAMETER_TYPE_HW_COUNTERS_SUPPORTED_INTEL");
            return;
        case VK_PERFORMANCE_PARAMETER_TYPE_STREAM_MARKER_VALID_BITS_INTEL:
            OutputString(outputFile, "VK_PERFORMANCE_PARAMETER_TYPE_STREAM_MARKER_VALID_BITS_INTEL");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkPerformanceValueTypeINTEL(FILE* outputFile, uint32_t enum_uint32)
{
    VkPerformanceValueTypeINTEL e = static_cast<VkPerformanceValueTypeINTEL>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_PERFORMANCE_VALUE_TYPE_UINT32_INTEL:
            OutputString(outputFile, "VK_PERFORMANCE_VALUE_TYPE_UINT32_INTEL");
            return;
        case VK_PERFORMANCE_VALUE_TYPE_UINT64_INTEL:
            OutputString(outputFile, "VK_PERFORMANCE_VALUE_TYPE_UINT64_INTEL");
            return;
        case VK_PERFORMANCE_VALUE_TYPE_FLOAT_INTEL:
            OutputString(outputFile, "VK_PERFORMANCE_VALUE_TYPE_FLOAT_INTEL");
            return;
        case VK_PERFORMANCE_VALUE_TYPE_BOOL_INTEL:
            OutputString(outputFile, "VK_PERFORMANCE_VALUE_TYPE_BOOL_INTEL");
            return;
        case VK_PERFORMANCE_VALUE_TYPE_STRING_INTEL:
            OutputString(outputFile, "VK_PERFORMANCE_VALUE_TYPE_STRING_INTEL");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkShaderCorePropertiesFlagBitsAMD(FILE* outputFile, uint32_t enum_uint32)
{
    VkShaderCorePropertiesFlagBitsAMD e = static_cast<VkShaderCorePropertiesFlagBitsAMD>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    OutputString(outputFile, "UNKNOWN");
}

void EnumToStringVkValidationFeatureEnableEXT(FILE* outputFile, uint32_t enum_uint32)
{
    VkValidationFeatureEnableEXT e = static_cast<VkValidationFeatureEnableEXT>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_VALIDATION_FEATURE_ENABLE_GPU_ASSISTED_EXT:
            OutputString(outputFile, "VK_VALIDATION_FEATURE_ENABLE_GPU_ASSISTED_EXT");
            return;
        case VK_VALIDATION_FEATURE_ENABLE_GPU_ASSISTED_RESERVE_BINDING_SLOT_EXT:
            OutputString(outputFile, "VK_VALIDATION_FEATURE_ENABLE_GPU_ASSISTED_RESERVE_BINDING_SLOT_EXT");
            return;
        case VK_VALIDATION_FEATURE_ENABLE_BEST_PRACTICES_EXT:
            OutputString(outputFile, "VK_VALIDATION_FEATURE_ENABLE_BEST_PRACTICES_EXT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkValidationFeatureDisableEXT(FILE* outputFile, uint32_t enum_uint32)
{
    VkValidationFeatureDisableEXT e = static_cast<VkValidationFeatureDisableEXT>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_VALIDATION_FEATURE_DISABLE_ALL_EXT:
            OutputString(outputFile, "VK_VALIDATION_FEATURE_DISABLE_ALL_EXT");
            return;
        case VK_VALIDATION_FEATURE_DISABLE_SHADERS_EXT:
            OutputString(outputFile, "VK_VALIDATION_FEATURE_DISABLE_SHADERS_EXT");
            return;
        case VK_VALIDATION_FEATURE_DISABLE_THREAD_SAFETY_EXT:
            OutputString(outputFile, "VK_VALIDATION_FEATURE_DISABLE_THREAD_SAFETY_EXT");
            return;
        case VK_VALIDATION_FEATURE_DISABLE_API_PARAMETERS_EXT:
            OutputString(outputFile, "VK_VALIDATION_FEATURE_DISABLE_API_PARAMETERS_EXT");
            return;
        case VK_VALIDATION_FEATURE_DISABLE_OBJECT_LIFETIMES_EXT:
            OutputString(outputFile, "VK_VALIDATION_FEATURE_DISABLE_OBJECT_LIFETIMES_EXT");
            return;
        case VK_VALIDATION_FEATURE_DISABLE_CORE_CHECKS_EXT:
            OutputString(outputFile, "VK_VALIDATION_FEATURE_DISABLE_CORE_CHECKS_EXT");
            return;
        case VK_VALIDATION_FEATURE_DISABLE_UNIQUE_HANDLES_EXT:
            OutputString(outputFile, "VK_VALIDATION_FEATURE_DISABLE_UNIQUE_HANDLES_EXT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkComponentTypeNV(FILE* outputFile, uint32_t enum_uint32)
{
    VkComponentTypeNV e = static_cast<VkComponentTypeNV>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_COMPONENT_TYPE_FLOAT16_NV:
            OutputString(outputFile, "VK_COMPONENT_TYPE_FLOAT16_NV");
            return;
        case VK_COMPONENT_TYPE_FLOAT32_NV:
            OutputString(outputFile, "VK_COMPONENT_TYPE_FLOAT32_NV");
            return;
        case VK_COMPONENT_TYPE_FLOAT64_NV:
            OutputString(outputFile, "VK_COMPONENT_TYPE_FLOAT64_NV");
            return;
        case VK_COMPONENT_TYPE_SINT8_NV:
            OutputString(outputFile, "VK_COMPONENT_TYPE_SINT8_NV");
            return;
        case VK_COMPONENT_TYPE_SINT16_NV:
            OutputString(outputFile, "VK_COMPONENT_TYPE_SINT16_NV");
            return;
        case VK_COMPONENT_TYPE_SINT32_NV:
            OutputString(outputFile, "VK_COMPONENT_TYPE_SINT32_NV");
            return;
        case VK_COMPONENT_TYPE_SINT64_NV:
            OutputString(outputFile, "VK_COMPONENT_TYPE_SINT64_NV");
            return;
        case VK_COMPONENT_TYPE_UINT8_NV:
            OutputString(outputFile, "VK_COMPONENT_TYPE_UINT8_NV");
            return;
        case VK_COMPONENT_TYPE_UINT16_NV:
            OutputString(outputFile, "VK_COMPONENT_TYPE_UINT16_NV");
            return;
        case VK_COMPONENT_TYPE_UINT32_NV:
            OutputString(outputFile, "VK_COMPONENT_TYPE_UINT32_NV");
            return;
        case VK_COMPONENT_TYPE_UINT64_NV:
            OutputString(outputFile, "VK_COMPONENT_TYPE_UINT64_NV");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkScopeNV(FILE* outputFile, uint32_t enum_uint32)
{
    VkScopeNV e = static_cast<VkScopeNV>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SCOPE_DEVICE_NV:
            OutputString(outputFile, "VK_SCOPE_DEVICE_NV");
            return;
        case VK_SCOPE_WORKGROUP_NV:
            OutputString(outputFile, "VK_SCOPE_WORKGROUP_NV");
            return;
        case VK_SCOPE_SUBGROUP_NV:
            OutputString(outputFile, "VK_SCOPE_SUBGROUP_NV");
            return;
        case VK_SCOPE_QUEUE_FAMILY_NV:
            OutputString(outputFile, "VK_SCOPE_QUEUE_FAMILY_NV");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkCoverageReductionModeNV(FILE* outputFile, uint32_t enum_uint32)
{
    VkCoverageReductionModeNV e = static_cast<VkCoverageReductionModeNV>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_COVERAGE_REDUCTION_MODE_MERGE_NV:
            OutputString(outputFile, "VK_COVERAGE_REDUCTION_MODE_MERGE_NV");
            return;
        case VK_COVERAGE_REDUCTION_MODE_TRUNCATE_NV:
            OutputString(outputFile, "VK_COVERAGE_REDUCTION_MODE_TRUNCATE_NV");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkFullScreenExclusiveEXT(FILE* outputFile, uint32_t enum_uint32)
{
    VkFullScreenExclusiveEXT e = static_cast<VkFullScreenExclusiveEXT>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_FULL_SCREEN_EXCLUSIVE_DEFAULT_EXT:
            OutputString(outputFile, "VK_FULL_SCREEN_EXCLUSIVE_DEFAULT_EXT");
            return;
        case VK_FULL_SCREEN_EXCLUSIVE_ALLOWED_EXT:
            OutputString(outputFile, "VK_FULL_SCREEN_EXCLUSIVE_ALLOWED_EXT");
            return;
        case VK_FULL_SCREEN_EXCLUSIVE_DISALLOWED_EXT:
            OutputString(outputFile, "VK_FULL_SCREEN_EXCLUSIVE_DISALLOWED_EXT");
            return;
        case VK_FULL_SCREEN_EXCLUSIVE_APPLICATION_CONTROLLED_EXT:
            OutputString(outputFile, "VK_FULL_SCREEN_EXCLUSIVE_APPLICATION_CONTROLLED_EXT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkLineRasterizationModeEXT(FILE* outputFile, uint32_t enum_uint32)
{
    VkLineRasterizationModeEXT e = static_cast<VkLineRasterizationModeEXT>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_LINE_RASTERIZATION_MODE_DEFAULT_EXT:
            OutputString(outputFile, "VK_LINE_RASTERIZATION_MODE_DEFAULT_EXT");
            return;
        case VK_LINE_RASTERIZATION_MODE_RECTANGULAR_EXT:
            OutputString(outputFile, "VK_LINE_RASTERIZATION_MODE_RECTANGULAR_EXT");
            return;
        case VK_LINE_RASTERIZATION_MODE_BRESENHAM_EXT:
            OutputString(outputFile, "VK_LINE_RASTERIZATION_MODE_BRESENHAM_EXT");
            return;
        case VK_LINE_RASTERIZATION_MODE_RECTANGULAR_SMOOTH_EXT:
            OutputString(outputFile, "VK_LINE_RASTERIZATION_MODE_RECTANGULAR_SMOOTH_EXT");
            return;
        default:
            OutputString(outputFile, "UNKNOWN");
            return;
    }
}

void EnumToStringVkPeerMemoryFeatureFlagBitsKHR(FILE* outputFile, VkPeerMemoryFeatureFlagBitsKHR e)
{
    assert(outputFile != nullptr); // JJJ
    EnumToStringVkPeerMemoryFeatureFlagBits(outputFile, e);
}

void EnumToStringVkMemoryAllocateFlagBitsKHR(FILE* outputFile, VkMemoryAllocateFlagBitsKHR e)
{
    assert(outputFile != nullptr); // JJJ
    EnumToStringVkMemoryAllocateFlagBits(outputFile, e);
}

void EnumToStringVkExternalMemoryHandleTypeFlagBitsKHR(FILE* outputFile, VkExternalMemoryHandleTypeFlagBitsKHR e)
{
    assert(outputFile != nullptr); // JJJ
    EnumToStringVkExternalMemoryHandleTypeFlagBits(outputFile, e);
}

void EnumToStringVkExternalMemoryFeatureFlagBitsKHR(FILE* outputFile, VkExternalMemoryFeatureFlagBitsKHR e)
{
    assert(outputFile != nullptr); // JJJ
    EnumToStringVkExternalMemoryFeatureFlagBits(outputFile, e);
}

void EnumToStringVkExternalSemaphoreHandleTypeFlagBitsKHR(FILE* outputFile, VkExternalSemaphoreHandleTypeFlagBitsKHR e)
{
    assert(outputFile != nullptr); // JJJ
    EnumToStringVkExternalSemaphoreHandleTypeFlagBits(outputFile, e);
}

void EnumToStringVkExternalSemaphoreFeatureFlagBitsKHR(FILE* outputFile, VkExternalSemaphoreFeatureFlagBitsKHR e)
{
    assert(outputFile != nullptr); // JJJ
    EnumToStringVkExternalSemaphoreFeatureFlagBits(outputFile, e);
}

void EnumToStringVkSemaphoreImportFlagBitsKHR(FILE* outputFile, VkSemaphoreImportFlagBitsKHR e)
{
    assert(outputFile != nullptr); // JJJ
    EnumToStringVkSemaphoreImportFlagBits(outputFile, e);
}

void EnumToStringVkDescriptorUpdateTemplateTypeKHR(FILE* outputFile, VkDescriptorUpdateTemplateTypeKHR e)
{
    assert(outputFile != nullptr); // JJJ
    EnumToStringVkDescriptorUpdateTemplateType(outputFile, e);
}

void EnumToStringVkExternalFenceHandleTypeFlagBitsKHR(FILE* outputFile, VkExternalFenceHandleTypeFlagBitsKHR e)
{
    assert(outputFile != nullptr); // JJJ
    EnumToStringVkExternalFenceHandleTypeFlagBits(outputFile, e);
}

void EnumToStringVkExternalFenceFeatureFlagBitsKHR(FILE* outputFile, VkExternalFenceFeatureFlagBitsKHR e)
{
    assert(outputFile != nullptr); // JJJ
    EnumToStringVkExternalFenceFeatureFlagBits(outputFile, e);
}

void EnumToStringVkFenceImportFlagBitsKHR(FILE* outputFile, VkFenceImportFlagBitsKHR e)
{
    assert(outputFile != nullptr); // JJJ
    EnumToStringVkFenceImportFlagBits(outputFile, e);
}

void EnumToStringVkPointClippingBehaviorKHR(FILE* outputFile, VkPointClippingBehaviorKHR e)
{
    assert(outputFile != nullptr); // JJJ
    EnumToStringVkPointClippingBehavior(outputFile, e);
}

void EnumToStringVkTessellationDomainOriginKHR(FILE* outputFile, VkTessellationDomainOriginKHR e)
{
    assert(outputFile != nullptr); // JJJ
    EnumToStringVkTessellationDomainOrigin(outputFile, e);
}

void EnumToStringVkSamplerYcbcrModelConversionKHR(FILE* outputFile, VkSamplerYcbcrModelConversionKHR e)
{
    assert(outputFile != nullptr); // JJJ
    EnumToStringVkSamplerYcbcrModelConversion(outputFile, e);
}

void EnumToStringVkSamplerYcbcrRangeKHR(FILE* outputFile, VkSamplerYcbcrRangeKHR e)
{
    assert(outputFile != nullptr); // JJJ
    EnumToStringVkSamplerYcbcrRange(outputFile, e);
}

void EnumToStringVkChromaLocationKHR(FILE* outputFile, VkChromaLocationKHR e)
{
    assert(outputFile != nullptr); // JJJ
    EnumToStringVkChromaLocation(outputFile, e);
}

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif
