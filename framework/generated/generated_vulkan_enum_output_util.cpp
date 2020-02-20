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

#include "format/platform_types.h"
#include "generated/generated_vulkan_enum_output_util.h"
#include "util/defines.h"
#include "vulkan/vulkan.h"
#include <cassert>
#include <string>

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)

void OutputEnumVkPipelineCacheHeaderVersion(FILE* outputFile, uint32_t enum_uint32)
{
    VkPipelineCacheHeaderVersion e = static_cast<VkPipelineCacheHeaderVersion>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_PIPELINE_CACHE_HEADER_VERSION_ONE:
            fprintf(outputFile, "VK_PIPELINE_CACHE_HEADER_VERSION_ONE");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkResult(FILE* outputFile, uint32_t enum_uint32)
{
    VkResult e = static_cast<VkResult>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SUCCESS:
            fprintf(outputFile, "VK_SUCCESS");
            return;
        case VK_NOT_READY:
            fprintf(outputFile, "VK_NOT_READY");
            return;
        case VK_TIMEOUT:
            fprintf(outputFile, "VK_TIMEOUT");
            return;
        case VK_EVENT_SET:
            fprintf(outputFile, "VK_EVENT_SET");
            return;
        case VK_EVENT_RESET:
            fprintf(outputFile, "VK_EVENT_RESET");
            return;
        case VK_INCOMPLETE:
            fprintf(outputFile, "VK_INCOMPLETE");
            return;
        case VK_ERROR_OUT_OF_HOST_MEMORY:
            fprintf(outputFile, "VK_ERROR_OUT_OF_HOST_MEMORY");
            return;
        case VK_ERROR_OUT_OF_DEVICE_MEMORY:
            fprintf(outputFile, "VK_ERROR_OUT_OF_DEVICE_MEMORY");
            return;
        case VK_ERROR_INITIALIZATION_FAILED:
            fprintf(outputFile, "VK_ERROR_INITIALIZATION_FAILED");
            return;
        case VK_ERROR_DEVICE_LOST:
            fprintf(outputFile, "VK_ERROR_DEVICE_LOST");
            return;
        case VK_ERROR_MEMORY_MAP_FAILED:
            fprintf(outputFile, "VK_ERROR_MEMORY_MAP_FAILED");
            return;
        case VK_ERROR_LAYER_NOT_PRESENT:
            fprintf(outputFile, "VK_ERROR_LAYER_NOT_PRESENT");
            return;
        case VK_ERROR_EXTENSION_NOT_PRESENT:
            fprintf(outputFile, "VK_ERROR_EXTENSION_NOT_PRESENT");
            return;
        case VK_ERROR_FEATURE_NOT_PRESENT:
            fprintf(outputFile, "VK_ERROR_FEATURE_NOT_PRESENT");
            return;
        case VK_ERROR_INCOMPATIBLE_DRIVER:
            fprintf(outputFile, "VK_ERROR_INCOMPATIBLE_DRIVER");
            return;
        case VK_ERROR_TOO_MANY_OBJECTS:
            fprintf(outputFile, "VK_ERROR_TOO_MANY_OBJECTS");
            return;
        case VK_ERROR_FORMAT_NOT_SUPPORTED:
            fprintf(outputFile, "VK_ERROR_FORMAT_NOT_SUPPORTED");
            return;
        case VK_ERROR_FRAGMENTED_POOL:
            fprintf(outputFile, "VK_ERROR_FRAGMENTED_POOL");
            return;
        case VK_ERROR_OUT_OF_POOL_MEMORY:
            fprintf(outputFile, "VK_ERROR_OUT_OF_POOL_MEMORY");
            return;
        case VK_ERROR_INVALID_EXTERNAL_HANDLE:
            fprintf(outputFile, "VK_ERROR_INVALID_EXTERNAL_HANDLE");
            return;
        case VK_ERROR_SURFACE_LOST_KHR:
            fprintf(outputFile, "VK_ERROR_SURFACE_LOST_KHR");
            return;
        case VK_ERROR_NATIVE_WINDOW_IN_USE_KHR:
            fprintf(outputFile, "VK_ERROR_NATIVE_WINDOW_IN_USE_KHR");
            return;
        case VK_SUBOPTIMAL_KHR:
            fprintf(outputFile, "VK_SUBOPTIMAL_KHR");
            return;
        case VK_ERROR_OUT_OF_DATE_KHR:
            fprintf(outputFile, "VK_ERROR_OUT_OF_DATE_KHR");
            return;
        case VK_ERROR_INCOMPATIBLE_DISPLAY_KHR:
            fprintf(outputFile, "VK_ERROR_INCOMPATIBLE_DISPLAY_KHR");
            return;
        case VK_ERROR_VALIDATION_FAILED_EXT:
            fprintf(outputFile, "VK_ERROR_VALIDATION_FAILED_EXT");
            return;
        case VK_ERROR_INVALID_SHADER_NV:
            fprintf(outputFile, "VK_ERROR_INVALID_SHADER_NV");
            return;
        case VK_ERROR_INVALID_DRM_FORMAT_MODIFIER_PLANE_LAYOUT_EXT:
            fprintf(outputFile, "VK_ERROR_INVALID_DRM_FORMAT_MODIFIER_PLANE_LAYOUT_EXT");
            return;
        case VK_ERROR_FRAGMENTATION_EXT:
            fprintf(outputFile, "VK_ERROR_FRAGMENTATION_EXT");
            return;
        case VK_ERROR_NOT_PERMITTED_EXT:
            fprintf(outputFile, "VK_ERROR_NOT_PERMITTED_EXT");
            return;
        case VK_ERROR_INVALID_DEVICE_ADDRESS_EXT:
            fprintf(outputFile, "VK_ERROR_INVALID_DEVICE_ADDRESS_EXT");
            return;
        case VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT:
            fprintf(outputFile, "VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkStructureType(FILE* outputFile, uint32_t enum_uint32)
{
    VkStructureType e = static_cast<VkStructureType>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_STRUCTURE_TYPE_APPLICATION_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_APPLICATION_INFO");
            return;
        case VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_SUBMIT_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_SUBMIT_INFO");
            return;
        case VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE");
            return;
        case VK_STRUCTURE_TYPE_BIND_SPARSE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_BIND_SPARSE_INFO");
            return;
        case VK_STRUCTURE_TYPE_FENCE_CREATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_FENCE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_EVENT_CREATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_EVENT_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET");
            return;
        case VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET");
            return;
        case VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO");
            return;
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO");
            return;
        case VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO");
            return;
        case VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER");
            return;
        case VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER");
            return;
        case VK_STRUCTURE_TYPE_MEMORY_BARRIER:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_MEMORY_BARRIER");
            return;
        case VK_STRUCTURE_TYPE_LOADER_INSTANCE_CREATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_LOADER_INSTANCE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_LOADER_DEVICE_CREATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_LOADER_DEVICE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES");
            return;
        case VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO");
            return;
        case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES");
            return;
        case VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS");
            return;
        case VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO");
            return;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO");
            return;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO");
            return;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO");
            return;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO");
            return;
        case VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO");
            return;
        case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES");
            return;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2");
            return;
        case VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2");
            return;
        case VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2");
            return;
        case VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2");
            return;
        case VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2");
            return;
        case VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2");
            return;
        case VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2");
            return;
        case VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2");
            return;
        case VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES");
            return;
        case VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES");
            return;
        case VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES");
            return;
        case VK_STRUCTURE_TYPE_DEVICE_QUEUE_INFO_2:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DEVICE_QUEUE_INFO_2");
            return;
        case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO");
            return;
        case VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO");
            return;
        case VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES");
            return;
        case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES");
            return;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO");
            return;
        case VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO");
            return;
        case VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES");
            return;
        case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO");
            return;
        case VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES");
            return;
        case VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO");
            return;
        case VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES");
            return;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES");
            return;
        case VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_PRESENT_INFO_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PRESENT_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR");
            return;
        case VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_DISPLAY_MODE_CREATE_INFO_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DISPLAY_MODE_CREATE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_XLIB_SURFACE_CREATE_INFO_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_XLIB_SURFACE_CREATE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_XCB_SURFACE_CREATE_INFO_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_XCB_SURFACE_CREATE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_WAYLAND_SURFACE_CREATE_INFO_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_WAYLAND_SURFACE_CREATE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_ANDROID_SURFACE_CREATE_INFO_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_ANDROID_SURFACE_CREATE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD");
            return;
        case VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV");
            return;
        case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV");
            return;
        case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_HANDLE_INFO_NVX:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_IMAGE_VIEW_HANDLE_INFO_NVX");
            return;
        case VK_STRUCTURE_TYPE_TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD");
            return;
        case VK_STRUCTURE_TYPE_STREAM_DESCRIPTOR_SURFACE_CREATE_INFO_GGP:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_STREAM_DESCRIPTOR_SURFACE_CREATE_INFO_GGP");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV");
            return;
        case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV");
            return;
        case VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV");
            return;
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_NV:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_NV");
            return;
        case VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_NV:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_NV");
            return;
        case VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV");
            return;
        case VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT");
            return;
        case VK_STRUCTURE_TYPE_VI_SURFACE_CREATE_INFO_NN:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_VI_SURFACE_CREATE_INFO_NN");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES_EXT");
            return;
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_ASTC_DECODE_MODE_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_IMAGE_VIEW_ASTC_DECODE_MODE_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT");
            return;
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_MEMORY_WIN32_HANDLE_PROPERTIES_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_MEMORY_WIN32_HANDLE_PROPERTIES_KHR");
            return;
        case VK_STRUCTURE_TYPE_MEMORY_GET_WIN32_HANDLE_INFO_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_MEMORY_GET_WIN32_HANDLE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR");
            return;
        case VK_STRUCTURE_TYPE_MEMORY_GET_FD_INFO_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_MEMORY_GET_FD_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_D3D12_FENCE_SUBMIT_INFO_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_D3D12_FENCE_SUBMIT_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_SEMAPHORE_GET_WIN32_HANDLE_INFO_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_SEMAPHORE_GET_WIN32_HANDLE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_SEMAPHORE_GET_FD_INFO_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_SEMAPHORE_GET_FD_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR");
            return;
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT");
            return;
        case VK_STRUCTURE_TYPE_CONDITIONAL_RENDERING_BEGIN_INFO_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_CONDITIONAL_RENDERING_BEGIN_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES_KHR");
            return;
        case VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR");
            return;
        case VK_STRUCTURE_TYPE_OBJECT_TABLE_CREATE_INFO_NVX:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_OBJECT_TABLE_CREATE_INFO_NVX");
            return;
        case VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NVX:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NVX");
            return;
        case VK_STRUCTURE_TYPE_CMD_PROCESS_COMMANDS_INFO_NVX:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_CMD_PROCESS_COMMANDS_INFO_NVX");
            return;
        case VK_STRUCTURE_TYPE_CMD_RESERVE_SPACE_FOR_COMMANDS_INFO_NVX:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_CMD_RESERVE_SPACE_FOR_COMMANDS_INFO_NVX");
            return;
        case VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_LIMITS_NVX:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_LIMITS_NVX");
            return;
        case VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_FEATURES_NVX:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_FEATURES_NVX");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV");
            return;
        case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_EXT");
            return;
        case VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_HDR_METADATA_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_HDR_METADATA_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES_KHR");
            return;
        case VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENTS_CREATE_INFO_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENTS_CREATE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENT_IMAGE_INFO_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENT_IMAGE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_RENDER_PASS_ATTACHMENT_BEGIN_INFO_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_RENDER_PASS_ATTACHMENT_BEGIN_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_2_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_2_KHR");
            return;
        case VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_2_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_2_KHR");
            return;
        case VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_2_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_2_KHR");
            return;
        case VK_STRUCTURE_TYPE_SUBPASS_DEPENDENCY_2_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_SUBPASS_DEPENDENCY_2_KHR");
            return;
        case VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO_2_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO_2_KHR");
            return;
        case VK_STRUCTURE_TYPE_SUBPASS_BEGIN_INFO_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_SUBPASS_BEGIN_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_SUBPASS_END_INFO_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_SUBPASS_END_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR");
            return;
        case VK_STRUCTURE_TYPE_IMPORT_FENCE_WIN32_HANDLE_INFO_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_IMPORT_FENCE_WIN32_HANDLE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_EXPORT_FENCE_WIN32_HANDLE_INFO_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_EXPORT_FENCE_WIN32_HANDLE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_FENCE_GET_WIN32_HANDLE_INFO_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_FENCE_GET_WIN32_HANDLE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_IMPORT_FENCE_FD_INFO_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_IMPORT_FENCE_FD_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_FENCE_GET_FD_INFO_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_FENCE_GET_FD_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR");
            return;
        case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_KHR");
            return;
        case VK_STRUCTURE_TYPE_SURFACE_FORMAT_2_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_SURFACE_FORMAT_2_KHR");
            return;
        case VK_STRUCTURE_TYPE_DISPLAY_PROPERTIES_2_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DISPLAY_PROPERTIES_2_KHR");
            return;
        case VK_STRUCTURE_TYPE_DISPLAY_PLANE_PROPERTIES_2_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DISPLAY_PLANE_PROPERTIES_2_KHR");
            return;
        case VK_STRUCTURE_TYPE_DISPLAY_MODE_PROPERTIES_2_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DISPLAY_MODE_PROPERTIES_2_KHR");
            return;
        case VK_STRUCTURE_TYPE_DISPLAY_PLANE_INFO_2_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DISPLAY_PLANE_INFO_2_KHR");
            return;
        case VK_STRUCTURE_TYPE_DISPLAY_PLANE_CAPABILITIES_2_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DISPLAY_PLANE_CAPABILITIES_2_KHR");
            return;
        case VK_STRUCTURE_TYPE_IOS_SURFACE_CREATE_INFO_MVK:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_IOS_SURFACE_CREATE_INFO_MVK");
            return;
        case VK_STRUCTURE_TYPE_MACOS_SURFACE_CREATE_INFO_MVK:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_MACOS_SURFACE_CREATE_INFO_MVK");
            return;
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_TAG_INFO_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_TAG_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_LABEL_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DEBUG_UTILS_LABEL_EXT");
            return;
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT");
            return;
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_USAGE_ANDROID:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_USAGE_ANDROID");
            return;
        case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_PROPERTIES_ANDROID:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_PROPERTIES_ANDROID");
            return;
        case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_ANDROID:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_ANDROID");
            return;
        case VK_STRUCTURE_TYPE_IMPORT_ANDROID_HARDWARE_BUFFER_INFO_ANDROID:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_IMPORT_ANDROID_HARDWARE_BUFFER_INFO_ANDROID");
            return;
        case VK_STRUCTURE_TYPE_MEMORY_GET_ANDROID_HARDWARE_BUFFER_INFO_ANDROID:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_MEMORY_GET_ANDROID_HARDWARE_BUFFER_INFO_ANDROID");
            return;
        case VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES_EXT");
            return;
        case VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES_EXT");
            return;
        case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK_EXT");
            return;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT");
            return;
        case VK_STRUCTURE_TYPE_MULTISAMPLE_PROPERTIES_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_MULTISAMPLE_PROPERTIES_EXT");
            return;
        case VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_PROPERTIES_NV:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_PROPERTIES_NV");
            return;
        case VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT");
            return;
        case VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_EXPLICIT_CREATE_INFO_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_EXPLICIT_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT");
            return;
        case VK_STRUCTURE_TYPE_VALIDATION_CACHE_CREATE_INFO_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_VALIDATION_CACHE_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES_EXT");
            return;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT_EXT");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV");
            return;
        case VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_NV:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_NV");
            return;
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_NV:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_NV");
            return;
        case VK_STRUCTURE_TYPE_GEOMETRY_NV:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_GEOMETRY_NV");
            return;
        case VK_STRUCTURE_TYPE_GEOMETRY_TRIANGLES_NV:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_GEOMETRY_TRIANGLES_NV");
            return;
        case VK_STRUCTURE_TYPE_GEOMETRY_AABB_NV:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_GEOMETRY_AABB_NV");
            return;
        case VK_STRUCTURE_TYPE_BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_NV:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_NV");
            return;
        case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_NV:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_NV");
            return;
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_NV:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_NV");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV");
            return;
        case VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_NV:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_NV");
            return;
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_INFO_NV:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_INFO_NV");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT");
            return;
        case VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES_KHR");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES_KHR");
            return;
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_MEMORY_HOST_POINTER_PROPERTIES_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_MEMORY_HOST_POINTER_PROPERTIES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES_KHR");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD");
            return;
        case VK_STRUCTURE_TYPE_CALIBRATED_TIMESTAMP_INFO_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_CALIBRATED_TIMESTAMP_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD");
            return;
        case VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PRESENT_FRAME_TOKEN_GGP:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PRESENT_FRAME_TOKEN_GGP");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES_KHR");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES_KHR");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES_KHR");
            return;
        case VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE_KHR");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_NV:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_NV");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV");
            return;
        case VK_STRUCTURE_TYPE_CHECKPOINT_DATA_NV:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_CHECKPOINT_DATA_NV");
            return;
        case VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES_KHR");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES_KHR");
            return;
        case VK_STRUCTURE_TYPE_SEMAPHORE_TYPE_CREATE_INFO_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_SEMAPHORE_TYPE_CREATE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_TIMELINE_SEMAPHORE_SUBMIT_INFO_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_TIMELINE_SEMAPHORE_SUBMIT_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_SEMAPHORE_WAIT_INFO_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_SEMAPHORE_WAIT_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_SEMAPHORE_SIGNAL_INFO_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_SEMAPHORE_SIGNAL_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL");
            return;
        case VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO_INTEL:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO_INTEL");
            return;
        case VK_STRUCTURE_TYPE_INITIALIZE_PERFORMANCE_API_INFO_INTEL:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_INITIALIZE_PERFORMANCE_API_INFO_INTEL");
            return;
        case VK_STRUCTURE_TYPE_PERFORMANCE_MARKER_INFO_INTEL:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PERFORMANCE_MARKER_INFO_INTEL");
            return;
        case VK_STRUCTURE_TYPE_PERFORMANCE_STREAM_MARKER_INFO_INTEL:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PERFORMANCE_STREAM_MARKER_INFO_INTEL");
            return;
        case VK_STRUCTURE_TYPE_PERFORMANCE_OVERRIDE_INFO_INTEL:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PERFORMANCE_OVERRIDE_INFO_INTEL");
            return;
        case VK_STRUCTURE_TYPE_PERFORMANCE_CONFIGURATION_ACQUIRE_INFO_INTEL:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PERFORMANCE_CONFIGURATION_ACQUIRE_INFO_INTEL");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES_KHR");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT");
            return;
        case VK_STRUCTURE_TYPE_DISPLAY_NATIVE_HDR_SURFACE_CAPABILITIES_AMD:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_DISPLAY_NATIVE_HDR_SURFACE_CAPABILITIES_AMD");
            return;
        case VK_STRUCTURE_TYPE_SWAPCHAIN_DISPLAY_NATIVE_HDR_CREATE_INFO_AMD:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_SWAPCHAIN_DISPLAY_NATIVE_HDR_CREATE_INFO_AMD");
            return;
        case VK_STRUCTURE_TYPE_IMAGEPIPE_SURFACE_CREATE_INFO_FUCHSIA:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_IMAGEPIPE_SURFACE_CREATE_INFO_FUCHSIA");
            return;
        case VK_STRUCTURE_TYPE_METAL_SURFACE_CREATE_INFO_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_METAL_SURFACE_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT");
            return;
        case VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_2_AMD:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_2_AMD");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT");
            return;
        case VK_STRUCTURE_TYPE_MEMORY_PRIORITY_ALLOCATE_INFO_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_MEMORY_PRIORITY_ALLOCATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_SURFACE_PROTECTED_CAPABILITIES_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_SURFACE_PROTECTED_CAPABILITIES_KHR");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT");
            return;
        case VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV");
            return;
        case VK_STRUCTURE_TYPE_COOPERATIVE_MATRIX_PROPERTIES_NV:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_COOPERATIVE_MATRIX_PROPERTIES_NV");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_REDUCTION_STATE_CREATE_INFO_NV:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_REDUCTION_STATE_CREATE_INFO_NV");
            return;
        case VK_STRUCTURE_TYPE_FRAMEBUFFER_MIXED_SAMPLES_COMBINATION_NV:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_FRAMEBUFFER_MIXED_SAMPLES_COMBINATION_NV");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES_KHR");
            return;
        case VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_INFO_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_FULL_SCREEN_EXCLUSIVE_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_FULL_SCREEN_EXCLUSIVE_EXT");
            return;
        case VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_WIN32_INFO_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_WIN32_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_HEADLESS_SURFACE_CREATE_INFO_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_HEADLESS_SURFACE_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_INFO_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_PROPERTIES_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_PROPERTIES_KHR");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INFO_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INFO_KHR");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_STATISTIC_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_STATISTIC_KHR");
            return;
        case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INTERNAL_REPRESENTATION_KHR:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INTERNAL_REPRESENTATION_KHR");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT");
            return;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES_EXT:
            fprintf(outputFile, "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES_EXT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkSystemAllocationScope(FILE* outputFile, uint32_t enum_uint32)
{
    VkSystemAllocationScope e = static_cast<VkSystemAllocationScope>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SYSTEM_ALLOCATION_SCOPE_COMMAND:
            fprintf(outputFile, "VK_SYSTEM_ALLOCATION_SCOPE_COMMAND");
            return;
        case VK_SYSTEM_ALLOCATION_SCOPE_OBJECT:
            fprintf(outputFile, "VK_SYSTEM_ALLOCATION_SCOPE_OBJECT");
            return;
        case VK_SYSTEM_ALLOCATION_SCOPE_CACHE:
            fprintf(outputFile, "VK_SYSTEM_ALLOCATION_SCOPE_CACHE");
            return;
        case VK_SYSTEM_ALLOCATION_SCOPE_DEVICE:
            fprintf(outputFile, "VK_SYSTEM_ALLOCATION_SCOPE_DEVICE");
            return;
        case VK_SYSTEM_ALLOCATION_SCOPE_INSTANCE:
            fprintf(outputFile, "VK_SYSTEM_ALLOCATION_SCOPE_INSTANCE");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkInternalAllocationType(FILE* outputFile, uint32_t enum_uint32)
{
    VkInternalAllocationType e = static_cast<VkInternalAllocationType>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_INTERNAL_ALLOCATION_TYPE_EXECUTABLE:
            fprintf(outputFile, "VK_INTERNAL_ALLOCATION_TYPE_EXECUTABLE");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkFormat(FILE* outputFile, uint32_t enum_uint32)
{
    VkFormat e = static_cast<VkFormat>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_FORMAT_UNDEFINED:
            fprintf(outputFile, "VK_FORMAT_UNDEFINED");
            return;
        case VK_FORMAT_R4G4_UNORM_PACK8:
            fprintf(outputFile, "VK_FORMAT_R4G4_UNORM_PACK8");
            return;
        case VK_FORMAT_R4G4B4A4_UNORM_PACK16:
            fprintf(outputFile, "VK_FORMAT_R4G4B4A4_UNORM_PACK16");
            return;
        case VK_FORMAT_B4G4R4A4_UNORM_PACK16:
            fprintf(outputFile, "VK_FORMAT_B4G4R4A4_UNORM_PACK16");
            return;
        case VK_FORMAT_R5G6B5_UNORM_PACK16:
            fprintf(outputFile, "VK_FORMAT_R5G6B5_UNORM_PACK16");
            return;
        case VK_FORMAT_B5G6R5_UNORM_PACK16:
            fprintf(outputFile, "VK_FORMAT_B5G6R5_UNORM_PACK16");
            return;
        case VK_FORMAT_R5G5B5A1_UNORM_PACK16:
            fprintf(outputFile, "VK_FORMAT_R5G5B5A1_UNORM_PACK16");
            return;
        case VK_FORMAT_B5G5R5A1_UNORM_PACK16:
            fprintf(outputFile, "VK_FORMAT_B5G5R5A1_UNORM_PACK16");
            return;
        case VK_FORMAT_A1R5G5B5_UNORM_PACK16:
            fprintf(outputFile, "VK_FORMAT_A1R5G5B5_UNORM_PACK16");
            return;
        case VK_FORMAT_R8_UNORM:
            fprintf(outputFile, "VK_FORMAT_R8_UNORM");
            return;
        case VK_FORMAT_R8_SNORM:
            fprintf(outputFile, "VK_FORMAT_R8_SNORM");
            return;
        case VK_FORMAT_R8_USCALED:
            fprintf(outputFile, "VK_FORMAT_R8_USCALED");
            return;
        case VK_FORMAT_R8_SSCALED:
            fprintf(outputFile, "VK_FORMAT_R8_SSCALED");
            return;
        case VK_FORMAT_R8_UINT:
            fprintf(outputFile, "VK_FORMAT_R8_UINT");
            return;
        case VK_FORMAT_R8_SINT:
            fprintf(outputFile, "VK_FORMAT_R8_SINT");
            return;
        case VK_FORMAT_R8_SRGB:
            fprintf(outputFile, "VK_FORMAT_R8_SRGB");
            return;
        case VK_FORMAT_R8G8_UNORM:
            fprintf(outputFile, "VK_FORMAT_R8G8_UNORM");
            return;
        case VK_FORMAT_R8G8_SNORM:
            fprintf(outputFile, "VK_FORMAT_R8G8_SNORM");
            return;
        case VK_FORMAT_R8G8_USCALED:
            fprintf(outputFile, "VK_FORMAT_R8G8_USCALED");
            return;
        case VK_FORMAT_R8G8_SSCALED:
            fprintf(outputFile, "VK_FORMAT_R8G8_SSCALED");
            return;
        case VK_FORMAT_R8G8_UINT:
            fprintf(outputFile, "VK_FORMAT_R8G8_UINT");
            return;
        case VK_FORMAT_R8G8_SINT:
            fprintf(outputFile, "VK_FORMAT_R8G8_SINT");
            return;
        case VK_FORMAT_R8G8_SRGB:
            fprintf(outputFile, "VK_FORMAT_R8G8_SRGB");
            return;
        case VK_FORMAT_R8G8B8_UNORM:
            fprintf(outputFile, "VK_FORMAT_R8G8B8_UNORM");
            return;
        case VK_FORMAT_R8G8B8_SNORM:
            fprintf(outputFile, "VK_FORMAT_R8G8B8_SNORM");
            return;
        case VK_FORMAT_R8G8B8_USCALED:
            fprintf(outputFile, "VK_FORMAT_R8G8B8_USCALED");
            return;
        case VK_FORMAT_R8G8B8_SSCALED:
            fprintf(outputFile, "VK_FORMAT_R8G8B8_SSCALED");
            return;
        case VK_FORMAT_R8G8B8_UINT:
            fprintf(outputFile, "VK_FORMAT_R8G8B8_UINT");
            return;
        case VK_FORMAT_R8G8B8_SINT:
            fprintf(outputFile, "VK_FORMAT_R8G8B8_SINT");
            return;
        case VK_FORMAT_R8G8B8_SRGB:
            fprintf(outputFile, "VK_FORMAT_R8G8B8_SRGB");
            return;
        case VK_FORMAT_B8G8R8_UNORM:
            fprintf(outputFile, "VK_FORMAT_B8G8R8_UNORM");
            return;
        case VK_FORMAT_B8G8R8_SNORM:
            fprintf(outputFile, "VK_FORMAT_B8G8R8_SNORM");
            return;
        case VK_FORMAT_B8G8R8_USCALED:
            fprintf(outputFile, "VK_FORMAT_B8G8R8_USCALED");
            return;
        case VK_FORMAT_B8G8R8_SSCALED:
            fprintf(outputFile, "VK_FORMAT_B8G8R8_SSCALED");
            return;
        case VK_FORMAT_B8G8R8_UINT:
            fprintf(outputFile, "VK_FORMAT_B8G8R8_UINT");
            return;
        case VK_FORMAT_B8G8R8_SINT:
            fprintf(outputFile, "VK_FORMAT_B8G8R8_SINT");
            return;
        case VK_FORMAT_B8G8R8_SRGB:
            fprintf(outputFile, "VK_FORMAT_B8G8R8_SRGB");
            return;
        case VK_FORMAT_R8G8B8A8_UNORM:
            fprintf(outputFile, "VK_FORMAT_R8G8B8A8_UNORM");
            return;
        case VK_FORMAT_R8G8B8A8_SNORM:
            fprintf(outputFile, "VK_FORMAT_R8G8B8A8_SNORM");
            return;
        case VK_FORMAT_R8G8B8A8_USCALED:
            fprintf(outputFile, "VK_FORMAT_R8G8B8A8_USCALED");
            return;
        case VK_FORMAT_R8G8B8A8_SSCALED:
            fprintf(outputFile, "VK_FORMAT_R8G8B8A8_SSCALED");
            return;
        case VK_FORMAT_R8G8B8A8_UINT:
            fprintf(outputFile, "VK_FORMAT_R8G8B8A8_UINT");
            return;
        case VK_FORMAT_R8G8B8A8_SINT:
            fprintf(outputFile, "VK_FORMAT_R8G8B8A8_SINT");
            return;
        case VK_FORMAT_R8G8B8A8_SRGB:
            fprintf(outputFile, "VK_FORMAT_R8G8B8A8_SRGB");
            return;
        case VK_FORMAT_B8G8R8A8_UNORM:
            fprintf(outputFile, "VK_FORMAT_B8G8R8A8_UNORM");
            return;
        case VK_FORMAT_B8G8R8A8_SNORM:
            fprintf(outputFile, "VK_FORMAT_B8G8R8A8_SNORM");
            return;
        case VK_FORMAT_B8G8R8A8_USCALED:
            fprintf(outputFile, "VK_FORMAT_B8G8R8A8_USCALED");
            return;
        case VK_FORMAT_B8G8R8A8_SSCALED:
            fprintf(outputFile, "VK_FORMAT_B8G8R8A8_SSCALED");
            return;
        case VK_FORMAT_B8G8R8A8_UINT:
            fprintf(outputFile, "VK_FORMAT_B8G8R8A8_UINT");
            return;
        case VK_FORMAT_B8G8R8A8_SINT:
            fprintf(outputFile, "VK_FORMAT_B8G8R8A8_SINT");
            return;
        case VK_FORMAT_B8G8R8A8_SRGB:
            fprintf(outputFile, "VK_FORMAT_B8G8R8A8_SRGB");
            return;
        case VK_FORMAT_A8B8G8R8_UNORM_PACK32:
            fprintf(outputFile, "VK_FORMAT_A8B8G8R8_UNORM_PACK32");
            return;
        case VK_FORMAT_A8B8G8R8_SNORM_PACK32:
            fprintf(outputFile, "VK_FORMAT_A8B8G8R8_SNORM_PACK32");
            return;
        case VK_FORMAT_A8B8G8R8_USCALED_PACK32:
            fprintf(outputFile, "VK_FORMAT_A8B8G8R8_USCALED_PACK32");
            return;
        case VK_FORMAT_A8B8G8R8_SSCALED_PACK32:
            fprintf(outputFile, "VK_FORMAT_A8B8G8R8_SSCALED_PACK32");
            return;
        case VK_FORMAT_A8B8G8R8_UINT_PACK32:
            fprintf(outputFile, "VK_FORMAT_A8B8G8R8_UINT_PACK32");
            return;
        case VK_FORMAT_A8B8G8R8_SINT_PACK32:
            fprintf(outputFile, "VK_FORMAT_A8B8G8R8_SINT_PACK32");
            return;
        case VK_FORMAT_A8B8G8R8_SRGB_PACK32:
            fprintf(outputFile, "VK_FORMAT_A8B8G8R8_SRGB_PACK32");
            return;
        case VK_FORMAT_A2R10G10B10_UNORM_PACK32:
            fprintf(outputFile, "VK_FORMAT_A2R10G10B10_UNORM_PACK32");
            return;
        case VK_FORMAT_A2R10G10B10_SNORM_PACK32:
            fprintf(outputFile, "VK_FORMAT_A2R10G10B10_SNORM_PACK32");
            return;
        case VK_FORMAT_A2R10G10B10_USCALED_PACK32:
            fprintf(outputFile, "VK_FORMAT_A2R10G10B10_USCALED_PACK32");
            return;
        case VK_FORMAT_A2R10G10B10_SSCALED_PACK32:
            fprintf(outputFile, "VK_FORMAT_A2R10G10B10_SSCALED_PACK32");
            return;
        case VK_FORMAT_A2R10G10B10_UINT_PACK32:
            fprintf(outputFile, "VK_FORMAT_A2R10G10B10_UINT_PACK32");
            return;
        case VK_FORMAT_A2R10G10B10_SINT_PACK32:
            fprintf(outputFile, "VK_FORMAT_A2R10G10B10_SINT_PACK32");
            return;
        case VK_FORMAT_A2B10G10R10_UNORM_PACK32:
            fprintf(outputFile, "VK_FORMAT_A2B10G10R10_UNORM_PACK32");
            return;
        case VK_FORMAT_A2B10G10R10_SNORM_PACK32:
            fprintf(outputFile, "VK_FORMAT_A2B10G10R10_SNORM_PACK32");
            return;
        case VK_FORMAT_A2B10G10R10_USCALED_PACK32:
            fprintf(outputFile, "VK_FORMAT_A2B10G10R10_USCALED_PACK32");
            return;
        case VK_FORMAT_A2B10G10R10_SSCALED_PACK32:
            fprintf(outputFile, "VK_FORMAT_A2B10G10R10_SSCALED_PACK32");
            return;
        case VK_FORMAT_A2B10G10R10_UINT_PACK32:
            fprintf(outputFile, "VK_FORMAT_A2B10G10R10_UINT_PACK32");
            return;
        case VK_FORMAT_A2B10G10R10_SINT_PACK32:
            fprintf(outputFile, "VK_FORMAT_A2B10G10R10_SINT_PACK32");
            return;
        case VK_FORMAT_R16_UNORM:
            fprintf(outputFile, "VK_FORMAT_R16_UNORM");
            return;
        case VK_FORMAT_R16_SNORM:
            fprintf(outputFile, "VK_FORMAT_R16_SNORM");
            return;
        case VK_FORMAT_R16_USCALED:
            fprintf(outputFile, "VK_FORMAT_R16_USCALED");
            return;
        case VK_FORMAT_R16_SSCALED:
            fprintf(outputFile, "VK_FORMAT_R16_SSCALED");
            return;
        case VK_FORMAT_R16_UINT:
            fprintf(outputFile, "VK_FORMAT_R16_UINT");
            return;
        case VK_FORMAT_R16_SINT:
            fprintf(outputFile, "VK_FORMAT_R16_SINT");
            return;
        case VK_FORMAT_R16_SFLOAT:
            fprintf(outputFile, "VK_FORMAT_R16_SFLOAT");
            return;
        case VK_FORMAT_R16G16_UNORM:
            fprintf(outputFile, "VK_FORMAT_R16G16_UNORM");
            return;
        case VK_FORMAT_R16G16_SNORM:
            fprintf(outputFile, "VK_FORMAT_R16G16_SNORM");
            return;
        case VK_FORMAT_R16G16_USCALED:
            fprintf(outputFile, "VK_FORMAT_R16G16_USCALED");
            return;
        case VK_FORMAT_R16G16_SSCALED:
            fprintf(outputFile, "VK_FORMAT_R16G16_SSCALED");
            return;
        case VK_FORMAT_R16G16_UINT:
            fprintf(outputFile, "VK_FORMAT_R16G16_UINT");
            return;
        case VK_FORMAT_R16G16_SINT:
            fprintf(outputFile, "VK_FORMAT_R16G16_SINT");
            return;
        case VK_FORMAT_R16G16_SFLOAT:
            fprintf(outputFile, "VK_FORMAT_R16G16_SFLOAT");
            return;
        case VK_FORMAT_R16G16B16_UNORM:
            fprintf(outputFile, "VK_FORMAT_R16G16B16_UNORM");
            return;
        case VK_FORMAT_R16G16B16_SNORM:
            fprintf(outputFile, "VK_FORMAT_R16G16B16_SNORM");
            return;
        case VK_FORMAT_R16G16B16_USCALED:
            fprintf(outputFile, "VK_FORMAT_R16G16B16_USCALED");
            return;
        case VK_FORMAT_R16G16B16_SSCALED:
            fprintf(outputFile, "VK_FORMAT_R16G16B16_SSCALED");
            return;
        case VK_FORMAT_R16G16B16_UINT:
            fprintf(outputFile, "VK_FORMAT_R16G16B16_UINT");
            return;
        case VK_FORMAT_R16G16B16_SINT:
            fprintf(outputFile, "VK_FORMAT_R16G16B16_SINT");
            return;
        case VK_FORMAT_R16G16B16_SFLOAT:
            fprintf(outputFile, "VK_FORMAT_R16G16B16_SFLOAT");
            return;
        case VK_FORMAT_R16G16B16A16_UNORM:
            fprintf(outputFile, "VK_FORMAT_R16G16B16A16_UNORM");
            return;
        case VK_FORMAT_R16G16B16A16_SNORM:
            fprintf(outputFile, "VK_FORMAT_R16G16B16A16_SNORM");
            return;
        case VK_FORMAT_R16G16B16A16_USCALED:
            fprintf(outputFile, "VK_FORMAT_R16G16B16A16_USCALED");
            return;
        case VK_FORMAT_R16G16B16A16_SSCALED:
            fprintf(outputFile, "VK_FORMAT_R16G16B16A16_SSCALED");
            return;
        case VK_FORMAT_R16G16B16A16_UINT:
            fprintf(outputFile, "VK_FORMAT_R16G16B16A16_UINT");
            return;
        case VK_FORMAT_R16G16B16A16_SINT:
            fprintf(outputFile, "VK_FORMAT_R16G16B16A16_SINT");
            return;
        case VK_FORMAT_R16G16B16A16_SFLOAT:
            fprintf(outputFile, "VK_FORMAT_R16G16B16A16_SFLOAT");
            return;
        case VK_FORMAT_R32_UINT:
            fprintf(outputFile, "VK_FORMAT_R32_UINT");
            return;
        case VK_FORMAT_R32_SINT:
            fprintf(outputFile, "VK_FORMAT_R32_SINT");
            return;
        case VK_FORMAT_R32_SFLOAT:
            fprintf(outputFile, "VK_FORMAT_R32_SFLOAT");
            return;
        case VK_FORMAT_R32G32_UINT:
            fprintf(outputFile, "VK_FORMAT_R32G32_UINT");
            return;
        case VK_FORMAT_R32G32_SINT:
            fprintf(outputFile, "VK_FORMAT_R32G32_SINT");
            return;
        case VK_FORMAT_R32G32_SFLOAT:
            fprintf(outputFile, "VK_FORMAT_R32G32_SFLOAT");
            return;
        case VK_FORMAT_R32G32B32_UINT:
            fprintf(outputFile, "VK_FORMAT_R32G32B32_UINT");
            return;
        case VK_FORMAT_R32G32B32_SINT:
            fprintf(outputFile, "VK_FORMAT_R32G32B32_SINT");
            return;
        case VK_FORMAT_R32G32B32_SFLOAT:
            fprintf(outputFile, "VK_FORMAT_R32G32B32_SFLOAT");
            return;
        case VK_FORMAT_R32G32B32A32_UINT:
            fprintf(outputFile, "VK_FORMAT_R32G32B32A32_UINT");
            return;
        case VK_FORMAT_R32G32B32A32_SINT:
            fprintf(outputFile, "VK_FORMAT_R32G32B32A32_SINT");
            return;
        case VK_FORMAT_R32G32B32A32_SFLOAT:
            fprintf(outputFile, "VK_FORMAT_R32G32B32A32_SFLOAT");
            return;
        case VK_FORMAT_R64_UINT:
            fprintf(outputFile, "VK_FORMAT_R64_UINT");
            return;
        case VK_FORMAT_R64_SINT:
            fprintf(outputFile, "VK_FORMAT_R64_SINT");
            return;
        case VK_FORMAT_R64_SFLOAT:
            fprintf(outputFile, "VK_FORMAT_R64_SFLOAT");
            return;
        case VK_FORMAT_R64G64_UINT:
            fprintf(outputFile, "VK_FORMAT_R64G64_UINT");
            return;
        case VK_FORMAT_R64G64_SINT:
            fprintf(outputFile, "VK_FORMAT_R64G64_SINT");
            return;
        case VK_FORMAT_R64G64_SFLOAT:
            fprintf(outputFile, "VK_FORMAT_R64G64_SFLOAT");
            return;
        case VK_FORMAT_R64G64B64_UINT:
            fprintf(outputFile, "VK_FORMAT_R64G64B64_UINT");
            return;
        case VK_FORMAT_R64G64B64_SINT:
            fprintf(outputFile, "VK_FORMAT_R64G64B64_SINT");
            return;
        case VK_FORMAT_R64G64B64_SFLOAT:
            fprintf(outputFile, "VK_FORMAT_R64G64B64_SFLOAT");
            return;
        case VK_FORMAT_R64G64B64A64_UINT:
            fprintf(outputFile, "VK_FORMAT_R64G64B64A64_UINT");
            return;
        case VK_FORMAT_R64G64B64A64_SINT:
            fprintf(outputFile, "VK_FORMAT_R64G64B64A64_SINT");
            return;
        case VK_FORMAT_R64G64B64A64_SFLOAT:
            fprintf(outputFile, "VK_FORMAT_R64G64B64A64_SFLOAT");
            return;
        case VK_FORMAT_B10G11R11_UFLOAT_PACK32:
            fprintf(outputFile, "VK_FORMAT_B10G11R11_UFLOAT_PACK32");
            return;
        case VK_FORMAT_E5B9G9R9_UFLOAT_PACK32:
            fprintf(outputFile, "VK_FORMAT_E5B9G9R9_UFLOAT_PACK32");
            return;
        case VK_FORMAT_D16_UNORM:
            fprintf(outputFile, "VK_FORMAT_D16_UNORM");
            return;
        case VK_FORMAT_X8_D24_UNORM_PACK32:
            fprintf(outputFile, "VK_FORMAT_X8_D24_UNORM_PACK32");
            return;
        case VK_FORMAT_D32_SFLOAT:
            fprintf(outputFile, "VK_FORMAT_D32_SFLOAT");
            return;
        case VK_FORMAT_S8_UINT:
            fprintf(outputFile, "VK_FORMAT_S8_UINT");
            return;
        case VK_FORMAT_D16_UNORM_S8_UINT:
            fprintf(outputFile, "VK_FORMAT_D16_UNORM_S8_UINT");
            return;
        case VK_FORMAT_D24_UNORM_S8_UINT:
            fprintf(outputFile, "VK_FORMAT_D24_UNORM_S8_UINT");
            return;
        case VK_FORMAT_D32_SFLOAT_S8_UINT:
            fprintf(outputFile, "VK_FORMAT_D32_SFLOAT_S8_UINT");
            return;
        case VK_FORMAT_BC1_RGB_UNORM_BLOCK:
            fprintf(outputFile, "VK_FORMAT_BC1_RGB_UNORM_BLOCK");
            return;
        case VK_FORMAT_BC1_RGB_SRGB_BLOCK:
            fprintf(outputFile, "VK_FORMAT_BC1_RGB_SRGB_BLOCK");
            return;
        case VK_FORMAT_BC1_RGBA_UNORM_BLOCK:
            fprintf(outputFile, "VK_FORMAT_BC1_RGBA_UNORM_BLOCK");
            return;
        case VK_FORMAT_BC1_RGBA_SRGB_BLOCK:
            fprintf(outputFile, "VK_FORMAT_BC1_RGBA_SRGB_BLOCK");
            return;
        case VK_FORMAT_BC2_UNORM_BLOCK:
            fprintf(outputFile, "VK_FORMAT_BC2_UNORM_BLOCK");
            return;
        case VK_FORMAT_BC2_SRGB_BLOCK:
            fprintf(outputFile, "VK_FORMAT_BC2_SRGB_BLOCK");
            return;
        case VK_FORMAT_BC3_UNORM_BLOCK:
            fprintf(outputFile, "VK_FORMAT_BC3_UNORM_BLOCK");
            return;
        case VK_FORMAT_BC3_SRGB_BLOCK:
            fprintf(outputFile, "VK_FORMAT_BC3_SRGB_BLOCK");
            return;
        case VK_FORMAT_BC4_UNORM_BLOCK:
            fprintf(outputFile, "VK_FORMAT_BC4_UNORM_BLOCK");
            return;
        case VK_FORMAT_BC4_SNORM_BLOCK:
            fprintf(outputFile, "VK_FORMAT_BC4_SNORM_BLOCK");
            return;
        case VK_FORMAT_BC5_UNORM_BLOCK:
            fprintf(outputFile, "VK_FORMAT_BC5_UNORM_BLOCK");
            return;
        case VK_FORMAT_BC5_SNORM_BLOCK:
            fprintf(outputFile, "VK_FORMAT_BC5_SNORM_BLOCK");
            return;
        case VK_FORMAT_BC6H_UFLOAT_BLOCK:
            fprintf(outputFile, "VK_FORMAT_BC6H_UFLOAT_BLOCK");
            return;
        case VK_FORMAT_BC6H_SFLOAT_BLOCK:
            fprintf(outputFile, "VK_FORMAT_BC6H_SFLOAT_BLOCK");
            return;
        case VK_FORMAT_BC7_UNORM_BLOCK:
            fprintf(outputFile, "VK_FORMAT_BC7_UNORM_BLOCK");
            return;
        case VK_FORMAT_BC7_SRGB_BLOCK:
            fprintf(outputFile, "VK_FORMAT_BC7_SRGB_BLOCK");
            return;
        case VK_FORMAT_ETC2_R8G8B8_UNORM_BLOCK:
            fprintf(outputFile, "VK_FORMAT_ETC2_R8G8B8_UNORM_BLOCK");
            return;
        case VK_FORMAT_ETC2_R8G8B8_SRGB_BLOCK:
            fprintf(outputFile, "VK_FORMAT_ETC2_R8G8B8_SRGB_BLOCK");
            return;
        case VK_FORMAT_ETC2_R8G8B8A1_UNORM_BLOCK:
            fprintf(outputFile, "VK_FORMAT_ETC2_R8G8B8A1_UNORM_BLOCK");
            return;
        case VK_FORMAT_ETC2_R8G8B8A1_SRGB_BLOCK:
            fprintf(outputFile, "VK_FORMAT_ETC2_R8G8B8A1_SRGB_BLOCK");
            return;
        case VK_FORMAT_ETC2_R8G8B8A8_UNORM_BLOCK:
            fprintf(outputFile, "VK_FORMAT_ETC2_R8G8B8A8_UNORM_BLOCK");
            return;
        case VK_FORMAT_ETC2_R8G8B8A8_SRGB_BLOCK:
            fprintf(outputFile, "VK_FORMAT_ETC2_R8G8B8A8_SRGB_BLOCK");
            return;
        case VK_FORMAT_EAC_R11_UNORM_BLOCK:
            fprintf(outputFile, "VK_FORMAT_EAC_R11_UNORM_BLOCK");
            return;
        case VK_FORMAT_EAC_R11_SNORM_BLOCK:
            fprintf(outputFile, "VK_FORMAT_EAC_R11_SNORM_BLOCK");
            return;
        case VK_FORMAT_EAC_R11G11_UNORM_BLOCK:
            fprintf(outputFile, "VK_FORMAT_EAC_R11G11_UNORM_BLOCK");
            return;
        case VK_FORMAT_EAC_R11G11_SNORM_BLOCK:
            fprintf(outputFile, "VK_FORMAT_EAC_R11G11_SNORM_BLOCK");
            return;
        case VK_FORMAT_ASTC_4x4_UNORM_BLOCK:
            fprintf(outputFile, "VK_FORMAT_ASTC_4x4_UNORM_BLOCK");
            return;
        case VK_FORMAT_ASTC_4x4_SRGB_BLOCK:
            fprintf(outputFile, "VK_FORMAT_ASTC_4x4_SRGB_BLOCK");
            return;
        case VK_FORMAT_ASTC_5x4_UNORM_BLOCK:
            fprintf(outputFile, "VK_FORMAT_ASTC_5x4_UNORM_BLOCK");
            return;
        case VK_FORMAT_ASTC_5x4_SRGB_BLOCK:
            fprintf(outputFile, "VK_FORMAT_ASTC_5x4_SRGB_BLOCK");
            return;
        case VK_FORMAT_ASTC_5x5_UNORM_BLOCK:
            fprintf(outputFile, "VK_FORMAT_ASTC_5x5_UNORM_BLOCK");
            return;
        case VK_FORMAT_ASTC_5x5_SRGB_BLOCK:
            fprintf(outputFile, "VK_FORMAT_ASTC_5x5_SRGB_BLOCK");
            return;
        case VK_FORMAT_ASTC_6x5_UNORM_BLOCK:
            fprintf(outputFile, "VK_FORMAT_ASTC_6x5_UNORM_BLOCK");
            return;
        case VK_FORMAT_ASTC_6x5_SRGB_BLOCK:
            fprintf(outputFile, "VK_FORMAT_ASTC_6x5_SRGB_BLOCK");
            return;
        case VK_FORMAT_ASTC_6x6_UNORM_BLOCK:
            fprintf(outputFile, "VK_FORMAT_ASTC_6x6_UNORM_BLOCK");
            return;
        case VK_FORMAT_ASTC_6x6_SRGB_BLOCK:
            fprintf(outputFile, "VK_FORMAT_ASTC_6x6_SRGB_BLOCK");
            return;
        case VK_FORMAT_ASTC_8x5_UNORM_BLOCK:
            fprintf(outputFile, "VK_FORMAT_ASTC_8x5_UNORM_BLOCK");
            return;
        case VK_FORMAT_ASTC_8x5_SRGB_BLOCK:
            fprintf(outputFile, "VK_FORMAT_ASTC_8x5_SRGB_BLOCK");
            return;
        case VK_FORMAT_ASTC_8x6_UNORM_BLOCK:
            fprintf(outputFile, "VK_FORMAT_ASTC_8x6_UNORM_BLOCK");
            return;
        case VK_FORMAT_ASTC_8x6_SRGB_BLOCK:
            fprintf(outputFile, "VK_FORMAT_ASTC_8x6_SRGB_BLOCK");
            return;
        case VK_FORMAT_ASTC_8x8_UNORM_BLOCK:
            fprintf(outputFile, "VK_FORMAT_ASTC_8x8_UNORM_BLOCK");
            return;
        case VK_FORMAT_ASTC_8x8_SRGB_BLOCK:
            fprintf(outputFile, "VK_FORMAT_ASTC_8x8_SRGB_BLOCK");
            return;
        case VK_FORMAT_ASTC_10x5_UNORM_BLOCK:
            fprintf(outputFile, "VK_FORMAT_ASTC_10x5_UNORM_BLOCK");
            return;
        case VK_FORMAT_ASTC_10x5_SRGB_BLOCK:
            fprintf(outputFile, "VK_FORMAT_ASTC_10x5_SRGB_BLOCK");
            return;
        case VK_FORMAT_ASTC_10x6_UNORM_BLOCK:
            fprintf(outputFile, "VK_FORMAT_ASTC_10x6_UNORM_BLOCK");
            return;
        case VK_FORMAT_ASTC_10x6_SRGB_BLOCK:
            fprintf(outputFile, "VK_FORMAT_ASTC_10x6_SRGB_BLOCK");
            return;
        case VK_FORMAT_ASTC_10x8_UNORM_BLOCK:
            fprintf(outputFile, "VK_FORMAT_ASTC_10x8_UNORM_BLOCK");
            return;
        case VK_FORMAT_ASTC_10x8_SRGB_BLOCK:
            fprintf(outputFile, "VK_FORMAT_ASTC_10x8_SRGB_BLOCK");
            return;
        case VK_FORMAT_ASTC_10x10_UNORM_BLOCK:
            fprintf(outputFile, "VK_FORMAT_ASTC_10x10_UNORM_BLOCK");
            return;
        case VK_FORMAT_ASTC_10x10_SRGB_BLOCK:
            fprintf(outputFile, "VK_FORMAT_ASTC_10x10_SRGB_BLOCK");
            return;
        case VK_FORMAT_ASTC_12x10_UNORM_BLOCK:
            fprintf(outputFile, "VK_FORMAT_ASTC_12x10_UNORM_BLOCK");
            return;
        case VK_FORMAT_ASTC_12x10_SRGB_BLOCK:
            fprintf(outputFile, "VK_FORMAT_ASTC_12x10_SRGB_BLOCK");
            return;
        case VK_FORMAT_ASTC_12x12_UNORM_BLOCK:
            fprintf(outputFile, "VK_FORMAT_ASTC_12x12_UNORM_BLOCK");
            return;
        case VK_FORMAT_ASTC_12x12_SRGB_BLOCK:
            fprintf(outputFile, "VK_FORMAT_ASTC_12x12_SRGB_BLOCK");
            return;
        case VK_FORMAT_G8B8G8R8_422_UNORM:
            fprintf(outputFile, "VK_FORMAT_G8B8G8R8_422_UNORM");
            return;
        case VK_FORMAT_B8G8R8G8_422_UNORM:
            fprintf(outputFile, "VK_FORMAT_B8G8R8G8_422_UNORM");
            return;
        case VK_FORMAT_G8_B8_R8_3PLANE_420_UNORM:
            fprintf(outputFile, "VK_FORMAT_G8_B8_R8_3PLANE_420_UNORM");
            return;
        case VK_FORMAT_G8_B8R8_2PLANE_420_UNORM:
            fprintf(outputFile, "VK_FORMAT_G8_B8R8_2PLANE_420_UNORM");
            return;
        case VK_FORMAT_G8_B8_R8_3PLANE_422_UNORM:
            fprintf(outputFile, "VK_FORMAT_G8_B8_R8_3PLANE_422_UNORM");
            return;
        case VK_FORMAT_G8_B8R8_2PLANE_422_UNORM:
            fprintf(outputFile, "VK_FORMAT_G8_B8R8_2PLANE_422_UNORM");
            return;
        case VK_FORMAT_G8_B8_R8_3PLANE_444_UNORM:
            fprintf(outputFile, "VK_FORMAT_G8_B8_R8_3PLANE_444_UNORM");
            return;
        case VK_FORMAT_R10X6_UNORM_PACK16:
            fprintf(outputFile, "VK_FORMAT_R10X6_UNORM_PACK16");
            return;
        case VK_FORMAT_R10X6G10X6_UNORM_2PACK16:
            fprintf(outputFile, "VK_FORMAT_R10X6G10X6_UNORM_2PACK16");
            return;
        case VK_FORMAT_R10X6G10X6B10X6A10X6_UNORM_4PACK16:
            fprintf(outputFile, "VK_FORMAT_R10X6G10X6B10X6A10X6_UNORM_4PACK16");
            return;
        case VK_FORMAT_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16:
            fprintf(outputFile, "VK_FORMAT_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16");
            return;
        case VK_FORMAT_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16:
            fprintf(outputFile, "VK_FORMAT_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16");
            return;
        case VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16:
            fprintf(outputFile, "VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16");
            return;
        case VK_FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16:
            fprintf(outputFile, "VK_FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16");
            return;
        case VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16:
            fprintf(outputFile, "VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16");
            return;
        case VK_FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16:
            fprintf(outputFile, "VK_FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16");
            return;
        case VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16:
            fprintf(outputFile, "VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16");
            return;
        case VK_FORMAT_R12X4_UNORM_PACK16:
            fprintf(outputFile, "VK_FORMAT_R12X4_UNORM_PACK16");
            return;
        case VK_FORMAT_R12X4G12X4_UNORM_2PACK16:
            fprintf(outputFile, "VK_FORMAT_R12X4G12X4_UNORM_2PACK16");
            return;
        case VK_FORMAT_R12X4G12X4B12X4A12X4_UNORM_4PACK16:
            fprintf(outputFile, "VK_FORMAT_R12X4G12X4B12X4A12X4_UNORM_4PACK16");
            return;
        case VK_FORMAT_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16:
            fprintf(outputFile, "VK_FORMAT_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16");
            return;
        case VK_FORMAT_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16:
            fprintf(outputFile, "VK_FORMAT_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16");
            return;
        case VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16:
            fprintf(outputFile, "VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16");
            return;
        case VK_FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16:
            fprintf(outputFile, "VK_FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16");
            return;
        case VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16:
            fprintf(outputFile, "VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16");
            return;
        case VK_FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16:
            fprintf(outputFile, "VK_FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16");
            return;
        case VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16:
            fprintf(outputFile, "VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16");
            return;
        case VK_FORMAT_G16B16G16R16_422_UNORM:
            fprintf(outputFile, "VK_FORMAT_G16B16G16R16_422_UNORM");
            return;
        case VK_FORMAT_B16G16R16G16_422_UNORM:
            fprintf(outputFile, "VK_FORMAT_B16G16R16G16_422_UNORM");
            return;
        case VK_FORMAT_G16_B16_R16_3PLANE_420_UNORM:
            fprintf(outputFile, "VK_FORMAT_G16_B16_R16_3PLANE_420_UNORM");
            return;
        case VK_FORMAT_G16_B16R16_2PLANE_420_UNORM:
            fprintf(outputFile, "VK_FORMAT_G16_B16R16_2PLANE_420_UNORM");
            return;
        case VK_FORMAT_G16_B16_R16_3PLANE_422_UNORM:
            fprintf(outputFile, "VK_FORMAT_G16_B16_R16_3PLANE_422_UNORM");
            return;
        case VK_FORMAT_G16_B16R16_2PLANE_422_UNORM:
            fprintf(outputFile, "VK_FORMAT_G16_B16R16_2PLANE_422_UNORM");
            return;
        case VK_FORMAT_G16_B16_R16_3PLANE_444_UNORM:
            fprintf(outputFile, "VK_FORMAT_G16_B16_R16_3PLANE_444_UNORM");
            return;
        case VK_FORMAT_PVRTC1_2BPP_UNORM_BLOCK_IMG:
            fprintf(outputFile, "VK_FORMAT_PVRTC1_2BPP_UNORM_BLOCK_IMG");
            return;
        case VK_FORMAT_PVRTC1_4BPP_UNORM_BLOCK_IMG:
            fprintf(outputFile, "VK_FORMAT_PVRTC1_4BPP_UNORM_BLOCK_IMG");
            return;
        case VK_FORMAT_PVRTC2_2BPP_UNORM_BLOCK_IMG:
            fprintf(outputFile, "VK_FORMAT_PVRTC2_2BPP_UNORM_BLOCK_IMG");
            return;
        case VK_FORMAT_PVRTC2_4BPP_UNORM_BLOCK_IMG:
            fprintf(outputFile, "VK_FORMAT_PVRTC2_4BPP_UNORM_BLOCK_IMG");
            return;
        case VK_FORMAT_PVRTC1_2BPP_SRGB_BLOCK_IMG:
            fprintf(outputFile, "VK_FORMAT_PVRTC1_2BPP_SRGB_BLOCK_IMG");
            return;
        case VK_FORMAT_PVRTC1_4BPP_SRGB_BLOCK_IMG:
            fprintf(outputFile, "VK_FORMAT_PVRTC1_4BPP_SRGB_BLOCK_IMG");
            return;
        case VK_FORMAT_PVRTC2_2BPP_SRGB_BLOCK_IMG:
            fprintf(outputFile, "VK_FORMAT_PVRTC2_2BPP_SRGB_BLOCK_IMG");
            return;
        case VK_FORMAT_PVRTC2_4BPP_SRGB_BLOCK_IMG:
            fprintf(outputFile, "VK_FORMAT_PVRTC2_4BPP_SRGB_BLOCK_IMG");
            return;
        case VK_FORMAT_ASTC_4x4_SFLOAT_BLOCK_EXT:
            fprintf(outputFile, "VK_FORMAT_ASTC_4x4_SFLOAT_BLOCK_EXT");
            return;
        case VK_FORMAT_ASTC_5x4_SFLOAT_BLOCK_EXT:
            fprintf(outputFile, "VK_FORMAT_ASTC_5x4_SFLOAT_BLOCK_EXT");
            return;
        case VK_FORMAT_ASTC_5x5_SFLOAT_BLOCK_EXT:
            fprintf(outputFile, "VK_FORMAT_ASTC_5x5_SFLOAT_BLOCK_EXT");
            return;
        case VK_FORMAT_ASTC_6x5_SFLOAT_BLOCK_EXT:
            fprintf(outputFile, "VK_FORMAT_ASTC_6x5_SFLOAT_BLOCK_EXT");
            return;
        case VK_FORMAT_ASTC_6x6_SFLOAT_BLOCK_EXT:
            fprintf(outputFile, "VK_FORMAT_ASTC_6x6_SFLOAT_BLOCK_EXT");
            return;
        case VK_FORMAT_ASTC_8x5_SFLOAT_BLOCK_EXT:
            fprintf(outputFile, "VK_FORMAT_ASTC_8x5_SFLOAT_BLOCK_EXT");
            return;
        case VK_FORMAT_ASTC_8x6_SFLOAT_BLOCK_EXT:
            fprintf(outputFile, "VK_FORMAT_ASTC_8x6_SFLOAT_BLOCK_EXT");
            return;
        case VK_FORMAT_ASTC_8x8_SFLOAT_BLOCK_EXT:
            fprintf(outputFile, "VK_FORMAT_ASTC_8x8_SFLOAT_BLOCK_EXT");
            return;
        case VK_FORMAT_ASTC_10x5_SFLOAT_BLOCK_EXT:
            fprintf(outputFile, "VK_FORMAT_ASTC_10x5_SFLOAT_BLOCK_EXT");
            return;
        case VK_FORMAT_ASTC_10x6_SFLOAT_BLOCK_EXT:
            fprintf(outputFile, "VK_FORMAT_ASTC_10x6_SFLOAT_BLOCK_EXT");
            return;
        case VK_FORMAT_ASTC_10x8_SFLOAT_BLOCK_EXT:
            fprintf(outputFile, "VK_FORMAT_ASTC_10x8_SFLOAT_BLOCK_EXT");
            return;
        case VK_FORMAT_ASTC_10x10_SFLOAT_BLOCK_EXT:
            fprintf(outputFile, "VK_FORMAT_ASTC_10x10_SFLOAT_BLOCK_EXT");
            return;
        case VK_FORMAT_ASTC_12x10_SFLOAT_BLOCK_EXT:
            fprintf(outputFile, "VK_FORMAT_ASTC_12x10_SFLOAT_BLOCK_EXT");
            return;
        case VK_FORMAT_ASTC_12x12_SFLOAT_BLOCK_EXT:
            fprintf(outputFile, "VK_FORMAT_ASTC_12x12_SFLOAT_BLOCK_EXT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkFormatFeatureFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkFormatFeatureFlagBits e = static_cast<VkFormatFeatureFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT:
            fprintf(outputFile, "VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT");
            return;
        case VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT:
            fprintf(outputFile, "VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT");
            return;
        case VK_FORMAT_FEATURE_STORAGE_IMAGE_ATOMIC_BIT:
            fprintf(outputFile, "VK_FORMAT_FEATURE_STORAGE_IMAGE_ATOMIC_BIT");
            return;
        case VK_FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT:
            fprintf(outputFile, "VK_FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT");
            return;
        case VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_BIT:
            fprintf(outputFile, "VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_BIT");
            return;
        case VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_ATOMIC_BIT:
            fprintf(outputFile, "VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_ATOMIC_BIT");
            return;
        case VK_FORMAT_FEATURE_VERTEX_BUFFER_BIT:
            fprintf(outputFile, "VK_FORMAT_FEATURE_VERTEX_BUFFER_BIT");
            return;
        case VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT:
            fprintf(outputFile, "VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT");
            return;
        case VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BLEND_BIT:
            fprintf(outputFile, "VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BLEND_BIT");
            return;
        case VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT:
            fprintf(outputFile, "VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT");
            return;
        case VK_FORMAT_FEATURE_BLIT_SRC_BIT:
            fprintf(outputFile, "VK_FORMAT_FEATURE_BLIT_SRC_BIT");
            return;
        case VK_FORMAT_FEATURE_BLIT_DST_BIT:
            fprintf(outputFile, "VK_FORMAT_FEATURE_BLIT_DST_BIT");
            return;
        case VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT:
            fprintf(outputFile, "VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT");
            return;
        case VK_FORMAT_FEATURE_TRANSFER_SRC_BIT:
            fprintf(outputFile, "VK_FORMAT_FEATURE_TRANSFER_SRC_BIT");
            return;
        case VK_FORMAT_FEATURE_TRANSFER_DST_BIT:
            fprintf(outputFile, "VK_FORMAT_FEATURE_TRANSFER_DST_BIT");
            return;
        case VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT:
            fprintf(outputFile, "VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT");
            return;
        case VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT:
            fprintf(outputFile, "VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT");
            return;
        case VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT:
            fprintf(outputFile, "VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT");
            return;
        case VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT:
            fprintf(outputFile, "VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT");
            return;
        case VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT:
            fprintf(outputFile, "VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT");
            return;
        case VK_FORMAT_FEATURE_DISJOINT_BIT:
            fprintf(outputFile, "VK_FORMAT_FEATURE_DISJOINT_BIT");
            return;
        case VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT:
            fprintf(outputFile, "VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT");
            return;
        case VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_IMG:
            fprintf(outputFile, "VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_IMG");
            return;
        case VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_MINMAX_BIT_EXT:
            fprintf(outputFile, "VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_MINMAX_BIT_EXT");
            return;
        case VK_FORMAT_FEATURE_FRAGMENT_DENSITY_MAP_BIT_EXT:
            fprintf(outputFile, "VK_FORMAT_FEATURE_FRAGMENT_DENSITY_MAP_BIT_EXT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkImageType(FILE* outputFile, uint32_t enum_uint32)
{
    VkImageType e = static_cast<VkImageType>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_IMAGE_TYPE_1D:
            fprintf(outputFile, "VK_IMAGE_TYPE_1D");
            return;
        case VK_IMAGE_TYPE_2D:
            fprintf(outputFile, "VK_IMAGE_TYPE_2D");
            return;
        case VK_IMAGE_TYPE_3D:
            fprintf(outputFile, "VK_IMAGE_TYPE_3D");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkImageTiling(FILE* outputFile, uint32_t enum_uint32)
{
    VkImageTiling e = static_cast<VkImageTiling>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_IMAGE_TILING_OPTIMAL:
            fprintf(outputFile, "VK_IMAGE_TILING_OPTIMAL");
            return;
        case VK_IMAGE_TILING_LINEAR:
            fprintf(outputFile, "VK_IMAGE_TILING_LINEAR");
            return;
        case VK_IMAGE_TILING_DRM_FORMAT_MODIFIER_EXT:
            fprintf(outputFile, "VK_IMAGE_TILING_DRM_FORMAT_MODIFIER_EXT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkImageUsageFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkImageUsageFlagBits e = static_cast<VkImageUsageFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_IMAGE_USAGE_TRANSFER_SRC_BIT:
            fprintf(outputFile, "VK_IMAGE_USAGE_TRANSFER_SRC_BIT");
            return;
        case VK_IMAGE_USAGE_TRANSFER_DST_BIT:
            fprintf(outputFile, "VK_IMAGE_USAGE_TRANSFER_DST_BIT");
            return;
        case VK_IMAGE_USAGE_SAMPLED_BIT:
            fprintf(outputFile, "VK_IMAGE_USAGE_SAMPLED_BIT");
            return;
        case VK_IMAGE_USAGE_STORAGE_BIT:
            fprintf(outputFile, "VK_IMAGE_USAGE_STORAGE_BIT");
            return;
        case VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT:
            fprintf(outputFile, "VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT");
            return;
        case VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT:
            fprintf(outputFile, "VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT");
            return;
        case VK_IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT:
            fprintf(outputFile, "VK_IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT");
            return;
        case VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT:
            fprintf(outputFile, "VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT");
            return;
        case VK_IMAGE_USAGE_SHADING_RATE_IMAGE_BIT_NV:
            fprintf(outputFile, "VK_IMAGE_USAGE_SHADING_RATE_IMAGE_BIT_NV");
            return;
        case VK_IMAGE_USAGE_FRAGMENT_DENSITY_MAP_BIT_EXT:
            fprintf(outputFile, "VK_IMAGE_USAGE_FRAGMENT_DENSITY_MAP_BIT_EXT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkImageCreateFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkImageCreateFlagBits e = static_cast<VkImageCreateFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_IMAGE_CREATE_SPARSE_BINDING_BIT:
            fprintf(outputFile, "VK_IMAGE_CREATE_SPARSE_BINDING_BIT");
            return;
        case VK_IMAGE_CREATE_SPARSE_RESIDENCY_BIT:
            fprintf(outputFile, "VK_IMAGE_CREATE_SPARSE_RESIDENCY_BIT");
            return;
        case VK_IMAGE_CREATE_SPARSE_ALIASED_BIT:
            fprintf(outputFile, "VK_IMAGE_CREATE_SPARSE_ALIASED_BIT");
            return;
        case VK_IMAGE_CREATE_MUTABLE_FORMAT_BIT:
            fprintf(outputFile, "VK_IMAGE_CREATE_MUTABLE_FORMAT_BIT");
            return;
        case VK_IMAGE_CREATE_CUBE_COMPATIBLE_BIT:
            fprintf(outputFile, "VK_IMAGE_CREATE_CUBE_COMPATIBLE_BIT");
            return;
        case VK_IMAGE_CREATE_ALIAS_BIT:
            fprintf(outputFile, "VK_IMAGE_CREATE_ALIAS_BIT");
            return;
        case VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT:
            fprintf(outputFile, "VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT");
            return;
        case VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT:
            fprintf(outputFile, "VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT");
            return;
        case VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT:
            fprintf(outputFile, "VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT");
            return;
        case VK_IMAGE_CREATE_EXTENDED_USAGE_BIT:
            fprintf(outputFile, "VK_IMAGE_CREATE_EXTENDED_USAGE_BIT");
            return;
        case VK_IMAGE_CREATE_PROTECTED_BIT:
            fprintf(outputFile, "VK_IMAGE_CREATE_PROTECTED_BIT");
            return;
        case VK_IMAGE_CREATE_DISJOINT_BIT:
            fprintf(outputFile, "VK_IMAGE_CREATE_DISJOINT_BIT");
            return;
        case VK_IMAGE_CREATE_CORNER_SAMPLED_BIT_NV:
            fprintf(outputFile, "VK_IMAGE_CREATE_CORNER_SAMPLED_BIT_NV");
            return;
        case VK_IMAGE_CREATE_SAMPLE_LOCATIONS_COMPATIBLE_DEPTH_BIT_EXT:
            fprintf(outputFile, "VK_IMAGE_CREATE_SAMPLE_LOCATIONS_COMPATIBLE_DEPTH_BIT_EXT");
            return;
        case VK_IMAGE_CREATE_SUBSAMPLED_BIT_EXT:
            fprintf(outputFile, "VK_IMAGE_CREATE_SUBSAMPLED_BIT_EXT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkSampleCountFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkSampleCountFlagBits e = static_cast<VkSampleCountFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SAMPLE_COUNT_1_BIT:
            fprintf(outputFile, "VK_SAMPLE_COUNT_1_BIT");
            return;
        case VK_SAMPLE_COUNT_2_BIT:
            fprintf(outputFile, "VK_SAMPLE_COUNT_2_BIT");
            return;
        case VK_SAMPLE_COUNT_4_BIT:
            fprintf(outputFile, "VK_SAMPLE_COUNT_4_BIT");
            return;
        case VK_SAMPLE_COUNT_8_BIT:
            fprintf(outputFile, "VK_SAMPLE_COUNT_8_BIT");
            return;
        case VK_SAMPLE_COUNT_16_BIT:
            fprintf(outputFile, "VK_SAMPLE_COUNT_16_BIT");
            return;
        case VK_SAMPLE_COUNT_32_BIT:
            fprintf(outputFile, "VK_SAMPLE_COUNT_32_BIT");
            return;
        case VK_SAMPLE_COUNT_64_BIT:
            fprintf(outputFile, "VK_SAMPLE_COUNT_64_BIT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkPhysicalDeviceType(FILE* outputFile, uint32_t enum_uint32)
{
    VkPhysicalDeviceType e = static_cast<VkPhysicalDeviceType>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_PHYSICAL_DEVICE_TYPE_OTHER:
            fprintf(outputFile, "VK_PHYSICAL_DEVICE_TYPE_OTHER");
            return;
        case VK_PHYSICAL_DEVICE_TYPE_INTEGRATED_GPU:
            fprintf(outputFile, "VK_PHYSICAL_DEVICE_TYPE_INTEGRATED_GPU");
            return;
        case VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU:
            fprintf(outputFile, "VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU");
            return;
        case VK_PHYSICAL_DEVICE_TYPE_VIRTUAL_GPU:
            fprintf(outputFile, "VK_PHYSICAL_DEVICE_TYPE_VIRTUAL_GPU");
            return;
        case VK_PHYSICAL_DEVICE_TYPE_CPU:
            fprintf(outputFile, "VK_PHYSICAL_DEVICE_TYPE_CPU");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkQueueFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkQueueFlagBits e = static_cast<VkQueueFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_QUEUE_GRAPHICS_BIT:
            fprintf(outputFile, "VK_QUEUE_GRAPHICS_BIT");
            return;
        case VK_QUEUE_COMPUTE_BIT:
            fprintf(outputFile, "VK_QUEUE_COMPUTE_BIT");
            return;
        case VK_QUEUE_TRANSFER_BIT:
            fprintf(outputFile, "VK_QUEUE_TRANSFER_BIT");
            return;
        case VK_QUEUE_SPARSE_BINDING_BIT:
            fprintf(outputFile, "VK_QUEUE_SPARSE_BINDING_BIT");
            return;
        case VK_QUEUE_PROTECTED_BIT:
            fprintf(outputFile, "VK_QUEUE_PROTECTED_BIT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkMemoryPropertyFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkMemoryPropertyFlagBits e = static_cast<VkMemoryPropertyFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT:
            fprintf(outputFile, "VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT");
            return;
        case VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT:
            fprintf(outputFile, "VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT");
            return;
        case VK_MEMORY_PROPERTY_HOST_COHERENT_BIT:
            fprintf(outputFile, "VK_MEMORY_PROPERTY_HOST_COHERENT_BIT");
            return;
        case VK_MEMORY_PROPERTY_HOST_CACHED_BIT:
            fprintf(outputFile, "VK_MEMORY_PROPERTY_HOST_CACHED_BIT");
            return;
        case VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT:
            fprintf(outputFile, "VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT");
            return;
        case VK_MEMORY_PROPERTY_PROTECTED_BIT:
            fprintf(outputFile, "VK_MEMORY_PROPERTY_PROTECTED_BIT");
            return;
        case VK_MEMORY_PROPERTY_DEVICE_COHERENT_BIT_AMD:
            fprintf(outputFile, "VK_MEMORY_PROPERTY_DEVICE_COHERENT_BIT_AMD");
            return;
        case VK_MEMORY_PROPERTY_DEVICE_UNCACHED_BIT_AMD:
            fprintf(outputFile, "VK_MEMORY_PROPERTY_DEVICE_UNCACHED_BIT_AMD");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkMemoryHeapFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkMemoryHeapFlagBits e = static_cast<VkMemoryHeapFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_MEMORY_HEAP_DEVICE_LOCAL_BIT:
            fprintf(outputFile, "VK_MEMORY_HEAP_DEVICE_LOCAL_BIT");
            return;
        case VK_MEMORY_HEAP_MULTI_INSTANCE_BIT:
            fprintf(outputFile, "VK_MEMORY_HEAP_MULTI_INSTANCE_BIT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkDeviceQueueCreateFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkDeviceQueueCreateFlagBits e = static_cast<VkDeviceQueueCreateFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_DEVICE_QUEUE_CREATE_PROTECTED_BIT:
            fprintf(outputFile, "VK_DEVICE_QUEUE_CREATE_PROTECTED_BIT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkPipelineStageFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkPipelineStageFlagBits e = static_cast<VkPipelineStageFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT:
            fprintf(outputFile, "VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT");
            return;
        case VK_PIPELINE_STAGE_DRAW_INDIRECT_BIT:
            fprintf(outputFile, "VK_PIPELINE_STAGE_DRAW_INDIRECT_BIT");
            return;
        case VK_PIPELINE_STAGE_VERTEX_INPUT_BIT:
            fprintf(outputFile, "VK_PIPELINE_STAGE_VERTEX_INPUT_BIT");
            return;
        case VK_PIPELINE_STAGE_VERTEX_SHADER_BIT:
            fprintf(outputFile, "VK_PIPELINE_STAGE_VERTEX_SHADER_BIT");
            return;
        case VK_PIPELINE_STAGE_TESSELLATION_CONTROL_SHADER_BIT:
            fprintf(outputFile, "VK_PIPELINE_STAGE_TESSELLATION_CONTROL_SHADER_BIT");
            return;
        case VK_PIPELINE_STAGE_TESSELLATION_EVALUATION_SHADER_BIT:
            fprintf(outputFile, "VK_PIPELINE_STAGE_TESSELLATION_EVALUATION_SHADER_BIT");
            return;
        case VK_PIPELINE_STAGE_GEOMETRY_SHADER_BIT:
            fprintf(outputFile, "VK_PIPELINE_STAGE_GEOMETRY_SHADER_BIT");
            return;
        case VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT:
            fprintf(outputFile, "VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT");
            return;
        case VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT:
            fprintf(outputFile, "VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT");
            return;
        case VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT:
            fprintf(outputFile, "VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT");
            return;
        case VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT:
            fprintf(outputFile, "VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT");
            return;
        case VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT:
            fprintf(outputFile, "VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT");
            return;
        case VK_PIPELINE_STAGE_TRANSFER_BIT:
            fprintf(outputFile, "VK_PIPELINE_STAGE_TRANSFER_BIT");
            return;
        case VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT:
            fprintf(outputFile, "VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT");
            return;
        case VK_PIPELINE_STAGE_HOST_BIT:
            fprintf(outputFile, "VK_PIPELINE_STAGE_HOST_BIT");
            return;
        case VK_PIPELINE_STAGE_ALL_GRAPHICS_BIT:
            fprintf(outputFile, "VK_PIPELINE_STAGE_ALL_GRAPHICS_BIT");
            return;
        case VK_PIPELINE_STAGE_ALL_COMMANDS_BIT:
            fprintf(outputFile, "VK_PIPELINE_STAGE_ALL_COMMANDS_BIT");
            return;
        case VK_PIPELINE_STAGE_TRANSFORM_FEEDBACK_BIT_EXT:
            fprintf(outputFile, "VK_PIPELINE_STAGE_TRANSFORM_FEEDBACK_BIT_EXT");
            return;
        case VK_PIPELINE_STAGE_CONDITIONAL_RENDERING_BIT_EXT:
            fprintf(outputFile, "VK_PIPELINE_STAGE_CONDITIONAL_RENDERING_BIT_EXT");
            return;
        case VK_PIPELINE_STAGE_COMMAND_PROCESS_BIT_NVX:
            fprintf(outputFile, "VK_PIPELINE_STAGE_COMMAND_PROCESS_BIT_NVX");
            return;
        case VK_PIPELINE_STAGE_SHADING_RATE_IMAGE_BIT_NV:
            fprintf(outputFile, "VK_PIPELINE_STAGE_SHADING_RATE_IMAGE_BIT_NV");
            return;
        case VK_PIPELINE_STAGE_RAY_TRACING_SHADER_BIT_NV:
            fprintf(outputFile, "VK_PIPELINE_STAGE_RAY_TRACING_SHADER_BIT_NV");
            return;
        case VK_PIPELINE_STAGE_ACCELERATION_STRUCTURE_BUILD_BIT_NV:
            fprintf(outputFile, "VK_PIPELINE_STAGE_ACCELERATION_STRUCTURE_BUILD_BIT_NV");
            return;
        case VK_PIPELINE_STAGE_TASK_SHADER_BIT_NV:
            fprintf(outputFile, "VK_PIPELINE_STAGE_TASK_SHADER_BIT_NV");
            return;
        case VK_PIPELINE_STAGE_MESH_SHADER_BIT_NV:
            fprintf(outputFile, "VK_PIPELINE_STAGE_MESH_SHADER_BIT_NV");
            return;
        case VK_PIPELINE_STAGE_FRAGMENT_DENSITY_PROCESS_BIT_EXT:
            fprintf(outputFile, "VK_PIPELINE_STAGE_FRAGMENT_DENSITY_PROCESS_BIT_EXT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkImageAspectFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkImageAspectFlagBits e = static_cast<VkImageAspectFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_IMAGE_ASPECT_COLOR_BIT:
            fprintf(outputFile, "VK_IMAGE_ASPECT_COLOR_BIT");
            return;
        case VK_IMAGE_ASPECT_DEPTH_BIT:
            fprintf(outputFile, "VK_IMAGE_ASPECT_DEPTH_BIT");
            return;
        case VK_IMAGE_ASPECT_STENCIL_BIT:
            fprintf(outputFile, "VK_IMAGE_ASPECT_STENCIL_BIT");
            return;
        case VK_IMAGE_ASPECT_METADATA_BIT:
            fprintf(outputFile, "VK_IMAGE_ASPECT_METADATA_BIT");
            return;
        case VK_IMAGE_ASPECT_PLANE_0_BIT:
            fprintf(outputFile, "VK_IMAGE_ASPECT_PLANE_0_BIT");
            return;
        case VK_IMAGE_ASPECT_PLANE_1_BIT:
            fprintf(outputFile, "VK_IMAGE_ASPECT_PLANE_1_BIT");
            return;
        case VK_IMAGE_ASPECT_PLANE_2_BIT:
            fprintf(outputFile, "VK_IMAGE_ASPECT_PLANE_2_BIT");
            return;
        case VK_IMAGE_ASPECT_MEMORY_PLANE_0_BIT_EXT:
            fprintf(outputFile, "VK_IMAGE_ASPECT_MEMORY_PLANE_0_BIT_EXT");
            return;
        case VK_IMAGE_ASPECT_MEMORY_PLANE_1_BIT_EXT:
            fprintf(outputFile, "VK_IMAGE_ASPECT_MEMORY_PLANE_1_BIT_EXT");
            return;
        case VK_IMAGE_ASPECT_MEMORY_PLANE_2_BIT_EXT:
            fprintf(outputFile, "VK_IMAGE_ASPECT_MEMORY_PLANE_2_BIT_EXT");
            return;
        case VK_IMAGE_ASPECT_MEMORY_PLANE_3_BIT_EXT:
            fprintf(outputFile, "VK_IMAGE_ASPECT_MEMORY_PLANE_3_BIT_EXT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkSparseImageFormatFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkSparseImageFormatFlagBits e = static_cast<VkSparseImageFormatFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SPARSE_IMAGE_FORMAT_SINGLE_MIPTAIL_BIT:
            fprintf(outputFile, "VK_SPARSE_IMAGE_FORMAT_SINGLE_MIPTAIL_BIT");
            return;
        case VK_SPARSE_IMAGE_FORMAT_ALIGNED_MIP_SIZE_BIT:
            fprintf(outputFile, "VK_SPARSE_IMAGE_FORMAT_ALIGNED_MIP_SIZE_BIT");
            return;
        case VK_SPARSE_IMAGE_FORMAT_NONSTANDARD_BLOCK_SIZE_BIT:
            fprintf(outputFile, "VK_SPARSE_IMAGE_FORMAT_NONSTANDARD_BLOCK_SIZE_BIT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkSparseMemoryBindFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkSparseMemoryBindFlagBits e = static_cast<VkSparseMemoryBindFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SPARSE_MEMORY_BIND_METADATA_BIT:
            fprintf(outputFile, "VK_SPARSE_MEMORY_BIND_METADATA_BIT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkFenceCreateFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkFenceCreateFlagBits e = static_cast<VkFenceCreateFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_FENCE_CREATE_SIGNALED_BIT:
            fprintf(outputFile, "VK_FENCE_CREATE_SIGNALED_BIT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkQueryType(FILE* outputFile, uint32_t enum_uint32)
{
    VkQueryType e = static_cast<VkQueryType>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_QUERY_TYPE_OCCLUSION:
            fprintf(outputFile, "VK_QUERY_TYPE_OCCLUSION");
            return;
        case VK_QUERY_TYPE_PIPELINE_STATISTICS:
            fprintf(outputFile, "VK_QUERY_TYPE_PIPELINE_STATISTICS");
            return;
        case VK_QUERY_TYPE_TIMESTAMP:
            fprintf(outputFile, "VK_QUERY_TYPE_TIMESTAMP");
            return;
        case VK_QUERY_TYPE_TRANSFORM_FEEDBACK_STREAM_EXT:
            fprintf(outputFile, "VK_QUERY_TYPE_TRANSFORM_FEEDBACK_STREAM_EXT");
            return;
        case VK_QUERY_TYPE_ACCELERATION_STRUCTURE_COMPACTED_SIZE_NV:
            fprintf(outputFile, "VK_QUERY_TYPE_ACCELERATION_STRUCTURE_COMPACTED_SIZE_NV");
            return;
        case VK_QUERY_TYPE_PERFORMANCE_QUERY_INTEL:
            fprintf(outputFile, "VK_QUERY_TYPE_PERFORMANCE_QUERY_INTEL");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkQueryPipelineStatisticFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkQueryPipelineStatisticFlagBits e = static_cast<VkQueryPipelineStatisticFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_VERTICES_BIT:
            fprintf(outputFile, "VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_VERTICES_BIT");
            return;
        case VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_PRIMITIVES_BIT:
            fprintf(outputFile, "VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_PRIMITIVES_BIT");
            return;
        case VK_QUERY_PIPELINE_STATISTIC_VERTEX_SHADER_INVOCATIONS_BIT:
            fprintf(outputFile, "VK_QUERY_PIPELINE_STATISTIC_VERTEX_SHADER_INVOCATIONS_BIT");
            return;
        case VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_INVOCATIONS_BIT:
            fprintf(outputFile, "VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_INVOCATIONS_BIT");
            return;
        case VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_PRIMITIVES_BIT:
            fprintf(outputFile, "VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_PRIMITIVES_BIT");
            return;
        case VK_QUERY_PIPELINE_STATISTIC_CLIPPING_INVOCATIONS_BIT:
            fprintf(outputFile, "VK_QUERY_PIPELINE_STATISTIC_CLIPPING_INVOCATIONS_BIT");
            return;
        case VK_QUERY_PIPELINE_STATISTIC_CLIPPING_PRIMITIVES_BIT:
            fprintf(outputFile, "VK_QUERY_PIPELINE_STATISTIC_CLIPPING_PRIMITIVES_BIT");
            return;
        case VK_QUERY_PIPELINE_STATISTIC_FRAGMENT_SHADER_INVOCATIONS_BIT:
            fprintf(outputFile, "VK_QUERY_PIPELINE_STATISTIC_FRAGMENT_SHADER_INVOCATIONS_BIT");
            return;
        case VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_CONTROL_SHADER_PATCHES_BIT:
            fprintf(outputFile, "VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_CONTROL_SHADER_PATCHES_BIT");
            return;
        case VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_EVALUATION_SHADER_INVOCATIONS_BIT:
            fprintf(outputFile, "VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_EVALUATION_SHADER_INVOCATIONS_BIT");
            return;
        case VK_QUERY_PIPELINE_STATISTIC_COMPUTE_SHADER_INVOCATIONS_BIT:
            fprintf(outputFile, "VK_QUERY_PIPELINE_STATISTIC_COMPUTE_SHADER_INVOCATIONS_BIT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkQueryResultFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkQueryResultFlagBits e = static_cast<VkQueryResultFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_QUERY_RESULT_64_BIT:
            fprintf(outputFile, "VK_QUERY_RESULT_64_BIT");
            return;
        case VK_QUERY_RESULT_WAIT_BIT:
            fprintf(outputFile, "VK_QUERY_RESULT_WAIT_BIT");
            return;
        case VK_QUERY_RESULT_WITH_AVAILABILITY_BIT:
            fprintf(outputFile, "VK_QUERY_RESULT_WITH_AVAILABILITY_BIT");
            return;
        case VK_QUERY_RESULT_PARTIAL_BIT:
            fprintf(outputFile, "VK_QUERY_RESULT_PARTIAL_BIT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkBufferCreateFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkBufferCreateFlagBits e = static_cast<VkBufferCreateFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_BUFFER_CREATE_SPARSE_BINDING_BIT:
            fprintf(outputFile, "VK_BUFFER_CREATE_SPARSE_BINDING_BIT");
            return;
        case VK_BUFFER_CREATE_SPARSE_RESIDENCY_BIT:
            fprintf(outputFile, "VK_BUFFER_CREATE_SPARSE_RESIDENCY_BIT");
            return;
        case VK_BUFFER_CREATE_SPARSE_ALIASED_BIT:
            fprintf(outputFile, "VK_BUFFER_CREATE_SPARSE_ALIASED_BIT");
            return;
        case VK_BUFFER_CREATE_PROTECTED_BIT:
            fprintf(outputFile, "VK_BUFFER_CREATE_PROTECTED_BIT");
            return;
        case VK_BUFFER_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_EXT:
            fprintf(outputFile, "VK_BUFFER_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_EXT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkBufferUsageFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkBufferUsageFlagBits e = static_cast<VkBufferUsageFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_BUFFER_USAGE_TRANSFER_SRC_BIT:
            fprintf(outputFile, "VK_BUFFER_USAGE_TRANSFER_SRC_BIT");
            return;
        case VK_BUFFER_USAGE_TRANSFER_DST_BIT:
            fprintf(outputFile, "VK_BUFFER_USAGE_TRANSFER_DST_BIT");
            return;
        case VK_BUFFER_USAGE_UNIFORM_TEXEL_BUFFER_BIT:
            fprintf(outputFile, "VK_BUFFER_USAGE_UNIFORM_TEXEL_BUFFER_BIT");
            return;
        case VK_BUFFER_USAGE_STORAGE_TEXEL_BUFFER_BIT:
            fprintf(outputFile, "VK_BUFFER_USAGE_STORAGE_TEXEL_BUFFER_BIT");
            return;
        case VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT:
            fprintf(outputFile, "VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT");
            return;
        case VK_BUFFER_USAGE_STORAGE_BUFFER_BIT:
            fprintf(outputFile, "VK_BUFFER_USAGE_STORAGE_BUFFER_BIT");
            return;
        case VK_BUFFER_USAGE_INDEX_BUFFER_BIT:
            fprintf(outputFile, "VK_BUFFER_USAGE_INDEX_BUFFER_BIT");
            return;
        case VK_BUFFER_USAGE_VERTEX_BUFFER_BIT:
            fprintf(outputFile, "VK_BUFFER_USAGE_VERTEX_BUFFER_BIT");
            return;
        case VK_BUFFER_USAGE_INDIRECT_BUFFER_BIT:
            fprintf(outputFile, "VK_BUFFER_USAGE_INDIRECT_BUFFER_BIT");
            return;
        case VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_BUFFER_BIT_EXT:
            fprintf(outputFile, "VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_BUFFER_BIT_EXT");
            return;
        case VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_COUNTER_BUFFER_BIT_EXT:
            fprintf(outputFile, "VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_COUNTER_BUFFER_BIT_EXT");
            return;
        case VK_BUFFER_USAGE_CONDITIONAL_RENDERING_BIT_EXT:
            fprintf(outputFile, "VK_BUFFER_USAGE_CONDITIONAL_RENDERING_BIT_EXT");
            return;
        case VK_BUFFER_USAGE_RAY_TRACING_BIT_NV:
            fprintf(outputFile, "VK_BUFFER_USAGE_RAY_TRACING_BIT_NV");
            return;
        case VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT_EXT:
            fprintf(outputFile, "VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT_EXT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkSharingMode(FILE* outputFile, uint32_t enum_uint32)
{
    VkSharingMode e = static_cast<VkSharingMode>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SHARING_MODE_EXCLUSIVE:
            fprintf(outputFile, "VK_SHARING_MODE_EXCLUSIVE");
            return;
        case VK_SHARING_MODE_CONCURRENT:
            fprintf(outputFile, "VK_SHARING_MODE_CONCURRENT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkImageLayout(FILE* outputFile, uint32_t enum_uint32)
{
    VkImageLayout e = static_cast<VkImageLayout>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_IMAGE_LAYOUT_UNDEFINED:
            fprintf(outputFile, "VK_IMAGE_LAYOUT_UNDEFINED");
            return;
        case VK_IMAGE_LAYOUT_GENERAL:
            fprintf(outputFile, "VK_IMAGE_LAYOUT_GENERAL");
            return;
        case VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL:
            fprintf(outputFile, "VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL");
            return;
        case VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL:
            fprintf(outputFile, "VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL");
            return;
        case VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL:
            fprintf(outputFile, "VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL");
            return;
        case VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL:
            fprintf(outputFile, "VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL");
            return;
        case VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL:
            fprintf(outputFile, "VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL");
            return;
        case VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL:
            fprintf(outputFile, "VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL");
            return;
        case VK_IMAGE_LAYOUT_PREINITIALIZED:
            fprintf(outputFile, "VK_IMAGE_LAYOUT_PREINITIALIZED");
            return;
        case VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL:
            fprintf(outputFile, "VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL");
            return;
        case VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL:
            fprintf(outputFile, "VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL");
            return;
        case VK_IMAGE_LAYOUT_PRESENT_SRC_KHR:
            fprintf(outputFile, "VK_IMAGE_LAYOUT_PRESENT_SRC_KHR");
            return;
        case VK_IMAGE_LAYOUT_SHARED_PRESENT_KHR:
            fprintf(outputFile, "VK_IMAGE_LAYOUT_SHARED_PRESENT_KHR");
            return;
        case VK_IMAGE_LAYOUT_SHADING_RATE_OPTIMAL_NV:
            fprintf(outputFile, "VK_IMAGE_LAYOUT_SHADING_RATE_OPTIMAL_NV");
            return;
        case VK_IMAGE_LAYOUT_FRAGMENT_DENSITY_MAP_OPTIMAL_EXT:
            fprintf(outputFile, "VK_IMAGE_LAYOUT_FRAGMENT_DENSITY_MAP_OPTIMAL_EXT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkImageViewCreateFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkImageViewCreateFlagBits e = static_cast<VkImageViewCreateFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_IMAGE_VIEW_CREATE_FRAGMENT_DENSITY_MAP_DYNAMIC_BIT_EXT:
            fprintf(outputFile, "VK_IMAGE_VIEW_CREATE_FRAGMENT_DENSITY_MAP_DYNAMIC_BIT_EXT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkImageViewType(FILE* outputFile, uint32_t enum_uint32)
{
    VkImageViewType e = static_cast<VkImageViewType>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_IMAGE_VIEW_TYPE_1D:
            fprintf(outputFile, "VK_IMAGE_VIEW_TYPE_1D");
            return;
        case VK_IMAGE_VIEW_TYPE_2D:
            fprintf(outputFile, "VK_IMAGE_VIEW_TYPE_2D");
            return;
        case VK_IMAGE_VIEW_TYPE_3D:
            fprintf(outputFile, "VK_IMAGE_VIEW_TYPE_3D");
            return;
        case VK_IMAGE_VIEW_TYPE_CUBE:
            fprintf(outputFile, "VK_IMAGE_VIEW_TYPE_CUBE");
            return;
        case VK_IMAGE_VIEW_TYPE_1D_ARRAY:
            fprintf(outputFile, "VK_IMAGE_VIEW_TYPE_1D_ARRAY");
            return;
        case VK_IMAGE_VIEW_TYPE_2D_ARRAY:
            fprintf(outputFile, "VK_IMAGE_VIEW_TYPE_2D_ARRAY");
            return;
        case VK_IMAGE_VIEW_TYPE_CUBE_ARRAY:
            fprintf(outputFile, "VK_IMAGE_VIEW_TYPE_CUBE_ARRAY");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkComponentSwizzle(FILE* outputFile, uint32_t enum_uint32)
{
    VkComponentSwizzle e = static_cast<VkComponentSwizzle>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_COMPONENT_SWIZZLE_IDENTITY:
            fprintf(outputFile, "VK_COMPONENT_SWIZZLE_IDENTITY");
            return;
        case VK_COMPONENT_SWIZZLE_ZERO:
            fprintf(outputFile, "VK_COMPONENT_SWIZZLE_ZERO");
            return;
        case VK_COMPONENT_SWIZZLE_ONE:
            fprintf(outputFile, "VK_COMPONENT_SWIZZLE_ONE");
            return;
        case VK_COMPONENT_SWIZZLE_R:
            fprintf(outputFile, "VK_COMPONENT_SWIZZLE_R");
            return;
        case VK_COMPONENT_SWIZZLE_G:
            fprintf(outputFile, "VK_COMPONENT_SWIZZLE_G");
            return;
        case VK_COMPONENT_SWIZZLE_B:
            fprintf(outputFile, "VK_COMPONENT_SWIZZLE_B");
            return;
        case VK_COMPONENT_SWIZZLE_A:
            fprintf(outputFile, "VK_COMPONENT_SWIZZLE_A");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkShaderModuleCreateFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkShaderModuleCreateFlagBits e = static_cast<VkShaderModuleCreateFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    fprintf(outputFile, "UNKNOWN");
}

void OutputEnumVkPipelineCreateFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkPipelineCreateFlagBits e = static_cast<VkPipelineCreateFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_PIPELINE_CREATE_DISABLE_OPTIMIZATION_BIT:
            fprintf(outputFile, "VK_PIPELINE_CREATE_DISABLE_OPTIMIZATION_BIT");
            return;
        case VK_PIPELINE_CREATE_ALLOW_DERIVATIVES_BIT:
            fprintf(outputFile, "VK_PIPELINE_CREATE_ALLOW_DERIVATIVES_BIT");
            return;
        case VK_PIPELINE_CREATE_DERIVATIVE_BIT:
            fprintf(outputFile, "VK_PIPELINE_CREATE_DERIVATIVE_BIT");
            return;
        case VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT:
            fprintf(outputFile, "VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT");
            return;
        case VK_PIPELINE_CREATE_DISPATCH_BASE:
            fprintf(outputFile, "VK_PIPELINE_CREATE_DISPATCH_BASE");
            return;
        case VK_PIPELINE_CREATE_DEFER_COMPILE_BIT_NV:
            fprintf(outputFile, "VK_PIPELINE_CREATE_DEFER_COMPILE_BIT_NV");
            return;
        case VK_PIPELINE_CREATE_CAPTURE_STATISTICS_BIT_KHR:
            fprintf(outputFile, "VK_PIPELINE_CREATE_CAPTURE_STATISTICS_BIT_KHR");
            return;
        case VK_PIPELINE_CREATE_CAPTURE_INTERNAL_REPRESENTATIONS_BIT_KHR:
            fprintf(outputFile, "VK_PIPELINE_CREATE_CAPTURE_INTERNAL_REPRESENTATIONS_BIT_KHR");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkPipelineShaderStageCreateFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkPipelineShaderStageCreateFlagBits e = static_cast<VkPipelineShaderStageCreateFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_PIPELINE_SHADER_STAGE_CREATE_ALLOW_VARYING_SUBGROUP_SIZE_BIT_EXT:
            fprintf(outputFile, "VK_PIPELINE_SHADER_STAGE_CREATE_ALLOW_VARYING_SUBGROUP_SIZE_BIT_EXT");
            return;
        case VK_PIPELINE_SHADER_STAGE_CREATE_REQUIRE_FULL_SUBGROUPS_BIT_EXT:
            fprintf(outputFile, "VK_PIPELINE_SHADER_STAGE_CREATE_REQUIRE_FULL_SUBGROUPS_BIT_EXT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkShaderStageFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkShaderStageFlagBits e = static_cast<VkShaderStageFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SHADER_STAGE_VERTEX_BIT:
            fprintf(outputFile, "VK_SHADER_STAGE_VERTEX_BIT");
            return;
        case VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT:
            fprintf(outputFile, "VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT");
            return;
        case VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT:
            fprintf(outputFile, "VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT");
            return;
        case VK_SHADER_STAGE_GEOMETRY_BIT:
            fprintf(outputFile, "VK_SHADER_STAGE_GEOMETRY_BIT");
            return;
        case VK_SHADER_STAGE_FRAGMENT_BIT:
            fprintf(outputFile, "VK_SHADER_STAGE_FRAGMENT_BIT");
            return;
        case VK_SHADER_STAGE_COMPUTE_BIT:
            fprintf(outputFile, "VK_SHADER_STAGE_COMPUTE_BIT");
            return;
        case VK_SHADER_STAGE_ALL_GRAPHICS:
            fprintf(outputFile, "VK_SHADER_STAGE_ALL_GRAPHICS");
            return;
        case VK_SHADER_STAGE_ALL:
            fprintf(outputFile, "VK_SHADER_STAGE_ALL");
            return;
        case VK_SHADER_STAGE_RAYGEN_BIT_NV:
            fprintf(outputFile, "VK_SHADER_STAGE_RAYGEN_BIT_NV");
            return;
        case VK_SHADER_STAGE_ANY_HIT_BIT_NV:
            fprintf(outputFile, "VK_SHADER_STAGE_ANY_HIT_BIT_NV");
            return;
        case VK_SHADER_STAGE_CLOSEST_HIT_BIT_NV:
            fprintf(outputFile, "VK_SHADER_STAGE_CLOSEST_HIT_BIT_NV");
            return;
        case VK_SHADER_STAGE_MISS_BIT_NV:
            fprintf(outputFile, "VK_SHADER_STAGE_MISS_BIT_NV");
            return;
        case VK_SHADER_STAGE_INTERSECTION_BIT_NV:
            fprintf(outputFile, "VK_SHADER_STAGE_INTERSECTION_BIT_NV");
            return;
        case VK_SHADER_STAGE_CALLABLE_BIT_NV:
            fprintf(outputFile, "VK_SHADER_STAGE_CALLABLE_BIT_NV");
            return;
        case VK_SHADER_STAGE_TASK_BIT_NV:
            fprintf(outputFile, "VK_SHADER_STAGE_TASK_BIT_NV");
            return;
        case VK_SHADER_STAGE_MESH_BIT_NV:
            fprintf(outputFile, "VK_SHADER_STAGE_MESH_BIT_NV");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkVertexInputRate(FILE* outputFile, uint32_t enum_uint32)
{
    VkVertexInputRate e = static_cast<VkVertexInputRate>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_VERTEX_INPUT_RATE_VERTEX:
            fprintf(outputFile, "VK_VERTEX_INPUT_RATE_VERTEX");
            return;
        case VK_VERTEX_INPUT_RATE_INSTANCE:
            fprintf(outputFile, "VK_VERTEX_INPUT_RATE_INSTANCE");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkPrimitiveTopology(FILE* outputFile, uint32_t enum_uint32)
{
    VkPrimitiveTopology e = static_cast<VkPrimitiveTopology>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_PRIMITIVE_TOPOLOGY_POINT_LIST:
            fprintf(outputFile, "VK_PRIMITIVE_TOPOLOGY_POINT_LIST");
            return;
        case VK_PRIMITIVE_TOPOLOGY_LINE_LIST:
            fprintf(outputFile, "VK_PRIMITIVE_TOPOLOGY_LINE_LIST");
            return;
        case VK_PRIMITIVE_TOPOLOGY_LINE_STRIP:
            fprintf(outputFile, "VK_PRIMITIVE_TOPOLOGY_LINE_STRIP");
            return;
        case VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST:
            fprintf(outputFile, "VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST");
            return;
        case VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP:
            fprintf(outputFile, "VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP");
            return;
        case VK_PRIMITIVE_TOPOLOGY_TRIANGLE_FAN:
            fprintf(outputFile, "VK_PRIMITIVE_TOPOLOGY_TRIANGLE_FAN");
            return;
        case VK_PRIMITIVE_TOPOLOGY_LINE_LIST_WITH_ADJACENCY:
            fprintf(outputFile, "VK_PRIMITIVE_TOPOLOGY_LINE_LIST_WITH_ADJACENCY");
            return;
        case VK_PRIMITIVE_TOPOLOGY_LINE_STRIP_WITH_ADJACENCY:
            fprintf(outputFile, "VK_PRIMITIVE_TOPOLOGY_LINE_STRIP_WITH_ADJACENCY");
            return;
        case VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST_WITH_ADJACENCY:
            fprintf(outputFile, "VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST_WITH_ADJACENCY");
            return;
        case VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP_WITH_ADJACENCY:
            fprintf(outputFile, "VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP_WITH_ADJACENCY");
            return;
        case VK_PRIMITIVE_TOPOLOGY_PATCH_LIST:
            fprintf(outputFile, "VK_PRIMITIVE_TOPOLOGY_PATCH_LIST");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkPolygonMode(FILE* outputFile, uint32_t enum_uint32)
{
    VkPolygonMode e = static_cast<VkPolygonMode>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_POLYGON_MODE_FILL:
            fprintf(outputFile, "VK_POLYGON_MODE_FILL");
            return;
        case VK_POLYGON_MODE_LINE:
            fprintf(outputFile, "VK_POLYGON_MODE_LINE");
            return;
        case VK_POLYGON_MODE_POINT:
            fprintf(outputFile, "VK_POLYGON_MODE_POINT");
            return;
        case VK_POLYGON_MODE_FILL_RECTANGLE_NV:
            fprintf(outputFile, "VK_POLYGON_MODE_FILL_RECTANGLE_NV");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkCullModeFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkCullModeFlagBits e = static_cast<VkCullModeFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_CULL_MODE_NONE:
            fprintf(outputFile, "VK_CULL_MODE_NONE");
            return;
        case VK_CULL_MODE_FRONT_BIT:
            fprintf(outputFile, "VK_CULL_MODE_FRONT_BIT");
            return;
        case VK_CULL_MODE_BACK_BIT:
            fprintf(outputFile, "VK_CULL_MODE_BACK_BIT");
            return;
        case VK_CULL_MODE_FRONT_AND_BACK:
            fprintf(outputFile, "VK_CULL_MODE_FRONT_AND_BACK");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkFrontFace(FILE* outputFile, uint32_t enum_uint32)
{
    VkFrontFace e = static_cast<VkFrontFace>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_FRONT_FACE_COUNTER_CLOCKWISE:
            fprintf(outputFile, "VK_FRONT_FACE_COUNTER_CLOCKWISE");
            return;
        case VK_FRONT_FACE_CLOCKWISE:
            fprintf(outputFile, "VK_FRONT_FACE_CLOCKWISE");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkCompareOp(FILE* outputFile, uint32_t enum_uint32)
{
    VkCompareOp e = static_cast<VkCompareOp>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_COMPARE_OP_NEVER:
            fprintf(outputFile, "VK_COMPARE_OP_NEVER");
            return;
        case VK_COMPARE_OP_LESS:
            fprintf(outputFile, "VK_COMPARE_OP_LESS");
            return;
        case VK_COMPARE_OP_EQUAL:
            fprintf(outputFile, "VK_COMPARE_OP_EQUAL");
            return;
        case VK_COMPARE_OP_LESS_OR_EQUAL:
            fprintf(outputFile, "VK_COMPARE_OP_LESS_OR_EQUAL");
            return;
        case VK_COMPARE_OP_GREATER:
            fprintf(outputFile, "VK_COMPARE_OP_GREATER");
            return;
        case VK_COMPARE_OP_NOT_EQUAL:
            fprintf(outputFile, "VK_COMPARE_OP_NOT_EQUAL");
            return;
        case VK_COMPARE_OP_GREATER_OR_EQUAL:
            fprintf(outputFile, "VK_COMPARE_OP_GREATER_OR_EQUAL");
            return;
        case VK_COMPARE_OP_ALWAYS:
            fprintf(outputFile, "VK_COMPARE_OP_ALWAYS");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkStencilOp(FILE* outputFile, uint32_t enum_uint32)
{
    VkStencilOp e = static_cast<VkStencilOp>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_STENCIL_OP_KEEP:
            fprintf(outputFile, "VK_STENCIL_OP_KEEP");
            return;
        case VK_STENCIL_OP_ZERO:
            fprintf(outputFile, "VK_STENCIL_OP_ZERO");
            return;
        case VK_STENCIL_OP_REPLACE:
            fprintf(outputFile, "VK_STENCIL_OP_REPLACE");
            return;
        case VK_STENCIL_OP_INCREMENT_AND_CLAMP:
            fprintf(outputFile, "VK_STENCIL_OP_INCREMENT_AND_CLAMP");
            return;
        case VK_STENCIL_OP_DECREMENT_AND_CLAMP:
            fprintf(outputFile, "VK_STENCIL_OP_DECREMENT_AND_CLAMP");
            return;
        case VK_STENCIL_OP_INVERT:
            fprintf(outputFile, "VK_STENCIL_OP_INVERT");
            return;
        case VK_STENCIL_OP_INCREMENT_AND_WRAP:
            fprintf(outputFile, "VK_STENCIL_OP_INCREMENT_AND_WRAP");
            return;
        case VK_STENCIL_OP_DECREMENT_AND_WRAP:
            fprintf(outputFile, "VK_STENCIL_OP_DECREMENT_AND_WRAP");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkLogicOp(FILE* outputFile, uint32_t enum_uint32)
{
    VkLogicOp e = static_cast<VkLogicOp>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_LOGIC_OP_CLEAR:
            fprintf(outputFile, "VK_LOGIC_OP_CLEAR");
            return;
        case VK_LOGIC_OP_AND:
            fprintf(outputFile, "VK_LOGIC_OP_AND");
            return;
        case VK_LOGIC_OP_AND_REVERSE:
            fprintf(outputFile, "VK_LOGIC_OP_AND_REVERSE");
            return;
        case VK_LOGIC_OP_COPY:
            fprintf(outputFile, "VK_LOGIC_OP_COPY");
            return;
        case VK_LOGIC_OP_AND_INVERTED:
            fprintf(outputFile, "VK_LOGIC_OP_AND_INVERTED");
            return;
        case VK_LOGIC_OP_NO_OP:
            fprintf(outputFile, "VK_LOGIC_OP_NO_OP");
            return;
        case VK_LOGIC_OP_XOR:
            fprintf(outputFile, "VK_LOGIC_OP_XOR");
            return;
        case VK_LOGIC_OP_OR:
            fprintf(outputFile, "VK_LOGIC_OP_OR");
            return;
        case VK_LOGIC_OP_NOR:
            fprintf(outputFile, "VK_LOGIC_OP_NOR");
            return;
        case VK_LOGIC_OP_EQUIVALENT:
            fprintf(outputFile, "VK_LOGIC_OP_EQUIVALENT");
            return;
        case VK_LOGIC_OP_INVERT:
            fprintf(outputFile, "VK_LOGIC_OP_INVERT");
            return;
        case VK_LOGIC_OP_OR_REVERSE:
            fprintf(outputFile, "VK_LOGIC_OP_OR_REVERSE");
            return;
        case VK_LOGIC_OP_COPY_INVERTED:
            fprintf(outputFile, "VK_LOGIC_OP_COPY_INVERTED");
            return;
        case VK_LOGIC_OP_OR_INVERTED:
            fprintf(outputFile, "VK_LOGIC_OP_OR_INVERTED");
            return;
        case VK_LOGIC_OP_NAND:
            fprintf(outputFile, "VK_LOGIC_OP_NAND");
            return;
        case VK_LOGIC_OP_SET:
            fprintf(outputFile, "VK_LOGIC_OP_SET");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkBlendFactor(FILE* outputFile, uint32_t enum_uint32)
{
    VkBlendFactor e = static_cast<VkBlendFactor>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_BLEND_FACTOR_ZERO:
            fprintf(outputFile, "VK_BLEND_FACTOR_ZERO");
            return;
        case VK_BLEND_FACTOR_ONE:
            fprintf(outputFile, "VK_BLEND_FACTOR_ONE");
            return;
        case VK_BLEND_FACTOR_SRC_COLOR:
            fprintf(outputFile, "VK_BLEND_FACTOR_SRC_COLOR");
            return;
        case VK_BLEND_FACTOR_ONE_MINUS_SRC_COLOR:
            fprintf(outputFile, "VK_BLEND_FACTOR_ONE_MINUS_SRC_COLOR");
            return;
        case VK_BLEND_FACTOR_DST_COLOR:
            fprintf(outputFile, "VK_BLEND_FACTOR_DST_COLOR");
            return;
        case VK_BLEND_FACTOR_ONE_MINUS_DST_COLOR:
            fprintf(outputFile, "VK_BLEND_FACTOR_ONE_MINUS_DST_COLOR");
            return;
        case VK_BLEND_FACTOR_SRC_ALPHA:
            fprintf(outputFile, "VK_BLEND_FACTOR_SRC_ALPHA");
            return;
        case VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA:
            fprintf(outputFile, "VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA");
            return;
        case VK_BLEND_FACTOR_DST_ALPHA:
            fprintf(outputFile, "VK_BLEND_FACTOR_DST_ALPHA");
            return;
        case VK_BLEND_FACTOR_ONE_MINUS_DST_ALPHA:
            fprintf(outputFile, "VK_BLEND_FACTOR_ONE_MINUS_DST_ALPHA");
            return;
        case VK_BLEND_FACTOR_CONSTANT_COLOR:
            fprintf(outputFile, "VK_BLEND_FACTOR_CONSTANT_COLOR");
            return;
        case VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR:
            fprintf(outputFile, "VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR");
            return;
        case VK_BLEND_FACTOR_CONSTANT_ALPHA:
            fprintf(outputFile, "VK_BLEND_FACTOR_CONSTANT_ALPHA");
            return;
        case VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_ALPHA:
            fprintf(outputFile, "VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_ALPHA");
            return;
        case VK_BLEND_FACTOR_SRC_ALPHA_SATURATE:
            fprintf(outputFile, "VK_BLEND_FACTOR_SRC_ALPHA_SATURATE");
            return;
        case VK_BLEND_FACTOR_SRC1_COLOR:
            fprintf(outputFile, "VK_BLEND_FACTOR_SRC1_COLOR");
            return;
        case VK_BLEND_FACTOR_ONE_MINUS_SRC1_COLOR:
            fprintf(outputFile, "VK_BLEND_FACTOR_ONE_MINUS_SRC1_COLOR");
            return;
        case VK_BLEND_FACTOR_SRC1_ALPHA:
            fprintf(outputFile, "VK_BLEND_FACTOR_SRC1_ALPHA");
            return;
        case VK_BLEND_FACTOR_ONE_MINUS_SRC1_ALPHA:
            fprintf(outputFile, "VK_BLEND_FACTOR_ONE_MINUS_SRC1_ALPHA");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkBlendOp(FILE* outputFile, uint32_t enum_uint32)
{
    VkBlendOp e = static_cast<VkBlendOp>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_BLEND_OP_ADD:
            fprintf(outputFile, "VK_BLEND_OP_ADD");
            return;
        case VK_BLEND_OP_SUBTRACT:
            fprintf(outputFile, "VK_BLEND_OP_SUBTRACT");
            return;
        case VK_BLEND_OP_REVERSE_SUBTRACT:
            fprintf(outputFile, "VK_BLEND_OP_REVERSE_SUBTRACT");
            return;
        case VK_BLEND_OP_MIN:
            fprintf(outputFile, "VK_BLEND_OP_MIN");
            return;
        case VK_BLEND_OP_MAX:
            fprintf(outputFile, "VK_BLEND_OP_MAX");
            return;
        case VK_BLEND_OP_ZERO_EXT:
            fprintf(outputFile, "VK_BLEND_OP_ZERO_EXT");
            return;
        case VK_BLEND_OP_SRC_EXT:
            fprintf(outputFile, "VK_BLEND_OP_SRC_EXT");
            return;
        case VK_BLEND_OP_DST_EXT:
            fprintf(outputFile, "VK_BLEND_OP_DST_EXT");
            return;
        case VK_BLEND_OP_SRC_OVER_EXT:
            fprintf(outputFile, "VK_BLEND_OP_SRC_OVER_EXT");
            return;
        case VK_BLEND_OP_DST_OVER_EXT:
            fprintf(outputFile, "VK_BLEND_OP_DST_OVER_EXT");
            return;
        case VK_BLEND_OP_SRC_IN_EXT:
            fprintf(outputFile, "VK_BLEND_OP_SRC_IN_EXT");
            return;
        case VK_BLEND_OP_DST_IN_EXT:
            fprintf(outputFile, "VK_BLEND_OP_DST_IN_EXT");
            return;
        case VK_BLEND_OP_SRC_OUT_EXT:
            fprintf(outputFile, "VK_BLEND_OP_SRC_OUT_EXT");
            return;
        case VK_BLEND_OP_DST_OUT_EXT:
            fprintf(outputFile, "VK_BLEND_OP_DST_OUT_EXT");
            return;
        case VK_BLEND_OP_SRC_ATOP_EXT:
            fprintf(outputFile, "VK_BLEND_OP_SRC_ATOP_EXT");
            return;
        case VK_BLEND_OP_DST_ATOP_EXT:
            fprintf(outputFile, "VK_BLEND_OP_DST_ATOP_EXT");
            return;
        case VK_BLEND_OP_XOR_EXT:
            fprintf(outputFile, "VK_BLEND_OP_XOR_EXT");
            return;
        case VK_BLEND_OP_MULTIPLY_EXT:
            fprintf(outputFile, "VK_BLEND_OP_MULTIPLY_EXT");
            return;
        case VK_BLEND_OP_SCREEN_EXT:
            fprintf(outputFile, "VK_BLEND_OP_SCREEN_EXT");
            return;
        case VK_BLEND_OP_OVERLAY_EXT:
            fprintf(outputFile, "VK_BLEND_OP_OVERLAY_EXT");
            return;
        case VK_BLEND_OP_DARKEN_EXT:
            fprintf(outputFile, "VK_BLEND_OP_DARKEN_EXT");
            return;
        case VK_BLEND_OP_LIGHTEN_EXT:
            fprintf(outputFile, "VK_BLEND_OP_LIGHTEN_EXT");
            return;
        case VK_BLEND_OP_COLORDODGE_EXT:
            fprintf(outputFile, "VK_BLEND_OP_COLORDODGE_EXT");
            return;
        case VK_BLEND_OP_COLORBURN_EXT:
            fprintf(outputFile, "VK_BLEND_OP_COLORBURN_EXT");
            return;
        case VK_BLEND_OP_HARDLIGHT_EXT:
            fprintf(outputFile, "VK_BLEND_OP_HARDLIGHT_EXT");
            return;
        case VK_BLEND_OP_SOFTLIGHT_EXT:
            fprintf(outputFile, "VK_BLEND_OP_SOFTLIGHT_EXT");
            return;
        case VK_BLEND_OP_DIFFERENCE_EXT:
            fprintf(outputFile, "VK_BLEND_OP_DIFFERENCE_EXT");
            return;
        case VK_BLEND_OP_EXCLUSION_EXT:
            fprintf(outputFile, "VK_BLEND_OP_EXCLUSION_EXT");
            return;
        case VK_BLEND_OP_INVERT_EXT:
            fprintf(outputFile, "VK_BLEND_OP_INVERT_EXT");
            return;
        case VK_BLEND_OP_INVERT_RGB_EXT:
            fprintf(outputFile, "VK_BLEND_OP_INVERT_RGB_EXT");
            return;
        case VK_BLEND_OP_LINEARDODGE_EXT:
            fprintf(outputFile, "VK_BLEND_OP_LINEARDODGE_EXT");
            return;
        case VK_BLEND_OP_LINEARBURN_EXT:
            fprintf(outputFile, "VK_BLEND_OP_LINEARBURN_EXT");
            return;
        case VK_BLEND_OP_VIVIDLIGHT_EXT:
            fprintf(outputFile, "VK_BLEND_OP_VIVIDLIGHT_EXT");
            return;
        case VK_BLEND_OP_LINEARLIGHT_EXT:
            fprintf(outputFile, "VK_BLEND_OP_LINEARLIGHT_EXT");
            return;
        case VK_BLEND_OP_PINLIGHT_EXT:
            fprintf(outputFile, "VK_BLEND_OP_PINLIGHT_EXT");
            return;
        case VK_BLEND_OP_HARDMIX_EXT:
            fprintf(outputFile, "VK_BLEND_OP_HARDMIX_EXT");
            return;
        case VK_BLEND_OP_HSL_HUE_EXT:
            fprintf(outputFile, "VK_BLEND_OP_HSL_HUE_EXT");
            return;
        case VK_BLEND_OP_HSL_SATURATION_EXT:
            fprintf(outputFile, "VK_BLEND_OP_HSL_SATURATION_EXT");
            return;
        case VK_BLEND_OP_HSL_COLOR_EXT:
            fprintf(outputFile, "VK_BLEND_OP_HSL_COLOR_EXT");
            return;
        case VK_BLEND_OP_HSL_LUMINOSITY_EXT:
            fprintf(outputFile, "VK_BLEND_OP_HSL_LUMINOSITY_EXT");
            return;
        case VK_BLEND_OP_PLUS_EXT:
            fprintf(outputFile, "VK_BLEND_OP_PLUS_EXT");
            return;
        case VK_BLEND_OP_PLUS_CLAMPED_EXT:
            fprintf(outputFile, "VK_BLEND_OP_PLUS_CLAMPED_EXT");
            return;
        case VK_BLEND_OP_PLUS_CLAMPED_ALPHA_EXT:
            fprintf(outputFile, "VK_BLEND_OP_PLUS_CLAMPED_ALPHA_EXT");
            return;
        case VK_BLEND_OP_PLUS_DARKER_EXT:
            fprintf(outputFile, "VK_BLEND_OP_PLUS_DARKER_EXT");
            return;
        case VK_BLEND_OP_MINUS_EXT:
            fprintf(outputFile, "VK_BLEND_OP_MINUS_EXT");
            return;
        case VK_BLEND_OP_MINUS_CLAMPED_EXT:
            fprintf(outputFile, "VK_BLEND_OP_MINUS_CLAMPED_EXT");
            return;
        case VK_BLEND_OP_CONTRAST_EXT:
            fprintf(outputFile, "VK_BLEND_OP_CONTRAST_EXT");
            return;
        case VK_BLEND_OP_INVERT_OVG_EXT:
            fprintf(outputFile, "VK_BLEND_OP_INVERT_OVG_EXT");
            return;
        case VK_BLEND_OP_RED_EXT:
            fprintf(outputFile, "VK_BLEND_OP_RED_EXT");
            return;
        case VK_BLEND_OP_GREEN_EXT:
            fprintf(outputFile, "VK_BLEND_OP_GREEN_EXT");
            return;
        case VK_BLEND_OP_BLUE_EXT:
            fprintf(outputFile, "VK_BLEND_OP_BLUE_EXT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkColorComponentFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkColorComponentFlagBits e = static_cast<VkColorComponentFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_COLOR_COMPONENT_R_BIT:
            fprintf(outputFile, "VK_COLOR_COMPONENT_R_BIT");
            return;
        case VK_COLOR_COMPONENT_G_BIT:
            fprintf(outputFile, "VK_COLOR_COMPONENT_G_BIT");
            return;
        case VK_COLOR_COMPONENT_B_BIT:
            fprintf(outputFile, "VK_COLOR_COMPONENT_B_BIT");
            return;
        case VK_COLOR_COMPONENT_A_BIT:
            fprintf(outputFile, "VK_COLOR_COMPONENT_A_BIT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkDynamicState(FILE* outputFile, uint32_t enum_uint32)
{
    VkDynamicState e = static_cast<VkDynamicState>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_DYNAMIC_STATE_VIEWPORT:
            fprintf(outputFile, "VK_DYNAMIC_STATE_VIEWPORT");
            return;
        case VK_DYNAMIC_STATE_SCISSOR:
            fprintf(outputFile, "VK_DYNAMIC_STATE_SCISSOR");
            return;
        case VK_DYNAMIC_STATE_LINE_WIDTH:
            fprintf(outputFile, "VK_DYNAMIC_STATE_LINE_WIDTH");
            return;
        case VK_DYNAMIC_STATE_DEPTH_BIAS:
            fprintf(outputFile, "VK_DYNAMIC_STATE_DEPTH_BIAS");
            return;
        case VK_DYNAMIC_STATE_BLEND_CONSTANTS:
            fprintf(outputFile, "VK_DYNAMIC_STATE_BLEND_CONSTANTS");
            return;
        case VK_DYNAMIC_STATE_DEPTH_BOUNDS:
            fprintf(outputFile, "VK_DYNAMIC_STATE_DEPTH_BOUNDS");
            return;
        case VK_DYNAMIC_STATE_STENCIL_COMPARE_MASK:
            fprintf(outputFile, "VK_DYNAMIC_STATE_STENCIL_COMPARE_MASK");
            return;
        case VK_DYNAMIC_STATE_STENCIL_WRITE_MASK:
            fprintf(outputFile, "VK_DYNAMIC_STATE_STENCIL_WRITE_MASK");
            return;
        case VK_DYNAMIC_STATE_STENCIL_REFERENCE:
            fprintf(outputFile, "VK_DYNAMIC_STATE_STENCIL_REFERENCE");
            return;
        case VK_DYNAMIC_STATE_VIEWPORT_W_SCALING_NV:
            fprintf(outputFile, "VK_DYNAMIC_STATE_VIEWPORT_W_SCALING_NV");
            return;
        case VK_DYNAMIC_STATE_DISCARD_RECTANGLE_EXT:
            fprintf(outputFile, "VK_DYNAMIC_STATE_DISCARD_RECTANGLE_EXT");
            return;
        case VK_DYNAMIC_STATE_SAMPLE_LOCATIONS_EXT:
            fprintf(outputFile, "VK_DYNAMIC_STATE_SAMPLE_LOCATIONS_EXT");
            return;
        case VK_DYNAMIC_STATE_VIEWPORT_SHADING_RATE_PALETTE_NV:
            fprintf(outputFile, "VK_DYNAMIC_STATE_VIEWPORT_SHADING_RATE_PALETTE_NV");
            return;
        case VK_DYNAMIC_STATE_VIEWPORT_COARSE_SAMPLE_ORDER_NV:
            fprintf(outputFile, "VK_DYNAMIC_STATE_VIEWPORT_COARSE_SAMPLE_ORDER_NV");
            return;
        case VK_DYNAMIC_STATE_EXCLUSIVE_SCISSOR_NV:
            fprintf(outputFile, "VK_DYNAMIC_STATE_EXCLUSIVE_SCISSOR_NV");
            return;
        case VK_DYNAMIC_STATE_LINE_STIPPLE_EXT:
            fprintf(outputFile, "VK_DYNAMIC_STATE_LINE_STIPPLE_EXT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkSamplerCreateFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkSamplerCreateFlagBits e = static_cast<VkSamplerCreateFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SAMPLER_CREATE_SUBSAMPLED_BIT_EXT:
            fprintf(outputFile, "VK_SAMPLER_CREATE_SUBSAMPLED_BIT_EXT");
            return;
        case VK_SAMPLER_CREATE_SUBSAMPLED_COARSE_RECONSTRUCTION_BIT_EXT:
            fprintf(outputFile, "VK_SAMPLER_CREATE_SUBSAMPLED_COARSE_RECONSTRUCTION_BIT_EXT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkFilter(FILE* outputFile, uint32_t enum_uint32)
{
    VkFilter e = static_cast<VkFilter>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_FILTER_NEAREST:
            fprintf(outputFile, "VK_FILTER_NEAREST");
            return;
        case VK_FILTER_LINEAR:
            fprintf(outputFile, "VK_FILTER_LINEAR");
            return;
        case VK_FILTER_CUBIC_IMG:
            fprintf(outputFile, "VK_FILTER_CUBIC_IMG");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkSamplerMipmapMode(FILE* outputFile, uint32_t enum_uint32)
{
    VkSamplerMipmapMode e = static_cast<VkSamplerMipmapMode>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SAMPLER_MIPMAP_MODE_NEAREST:
            fprintf(outputFile, "VK_SAMPLER_MIPMAP_MODE_NEAREST");
            return;
        case VK_SAMPLER_MIPMAP_MODE_LINEAR:
            fprintf(outputFile, "VK_SAMPLER_MIPMAP_MODE_LINEAR");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkSamplerAddressMode(FILE* outputFile, uint32_t enum_uint32)
{
    VkSamplerAddressMode e = static_cast<VkSamplerAddressMode>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SAMPLER_ADDRESS_MODE_REPEAT:
            fprintf(outputFile, "VK_SAMPLER_ADDRESS_MODE_REPEAT");
            return;
        case VK_SAMPLER_ADDRESS_MODE_MIRRORED_REPEAT:
            fprintf(outputFile, "VK_SAMPLER_ADDRESS_MODE_MIRRORED_REPEAT");
            return;
        case VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE:
            fprintf(outputFile, "VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE");
            return;
        case VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_BORDER:
            fprintf(outputFile, "VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_BORDER");
            return;
        case VK_SAMPLER_ADDRESS_MODE_MIRROR_CLAMP_TO_EDGE:
            fprintf(outputFile, "VK_SAMPLER_ADDRESS_MODE_MIRROR_CLAMP_TO_EDGE");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkBorderColor(FILE* outputFile, uint32_t enum_uint32)
{
    VkBorderColor e = static_cast<VkBorderColor>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_BORDER_COLOR_FLOAT_TRANSPARENT_BLACK:
            fprintf(outputFile, "VK_BORDER_COLOR_FLOAT_TRANSPARENT_BLACK");
            return;
        case VK_BORDER_COLOR_INT_TRANSPARENT_BLACK:
            fprintf(outputFile, "VK_BORDER_COLOR_INT_TRANSPARENT_BLACK");
            return;
        case VK_BORDER_COLOR_FLOAT_OPAQUE_BLACK:
            fprintf(outputFile, "VK_BORDER_COLOR_FLOAT_OPAQUE_BLACK");
            return;
        case VK_BORDER_COLOR_INT_OPAQUE_BLACK:
            fprintf(outputFile, "VK_BORDER_COLOR_INT_OPAQUE_BLACK");
            return;
        case VK_BORDER_COLOR_FLOAT_OPAQUE_WHITE:
            fprintf(outputFile, "VK_BORDER_COLOR_FLOAT_OPAQUE_WHITE");
            return;
        case VK_BORDER_COLOR_INT_OPAQUE_WHITE:
            fprintf(outputFile, "VK_BORDER_COLOR_INT_OPAQUE_WHITE");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkDescriptorSetLayoutCreateFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkDescriptorSetLayoutCreateFlagBits e = static_cast<VkDescriptorSetLayoutCreateFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR:
            fprintf(outputFile, "VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR");
            return;
        case VK_DESCRIPTOR_SET_LAYOUT_CREATE_UPDATE_AFTER_BIND_POOL_BIT_EXT:
            fprintf(outputFile, "VK_DESCRIPTOR_SET_LAYOUT_CREATE_UPDATE_AFTER_BIND_POOL_BIT_EXT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkDescriptorType(FILE* outputFile, uint32_t enum_uint32)
{
    VkDescriptorType e = static_cast<VkDescriptorType>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_DESCRIPTOR_TYPE_SAMPLER:
            fprintf(outputFile, "VK_DESCRIPTOR_TYPE_SAMPLER");
            return;
        case VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER:
            fprintf(outputFile, "VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER");
            return;
        case VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE:
            fprintf(outputFile, "VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE");
            return;
        case VK_DESCRIPTOR_TYPE_STORAGE_IMAGE:
            fprintf(outputFile, "VK_DESCRIPTOR_TYPE_STORAGE_IMAGE");
            return;
        case VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER:
            fprintf(outputFile, "VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER");
            return;
        case VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER:
            fprintf(outputFile, "VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER");
            return;
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER:
            fprintf(outputFile, "VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER");
            return;
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER:
            fprintf(outputFile, "VK_DESCRIPTOR_TYPE_STORAGE_BUFFER");
            return;
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC:
            fprintf(outputFile, "VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC");
            return;
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC:
            fprintf(outputFile, "VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC");
            return;
        case VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT:
            fprintf(outputFile, "VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT");
            return;
        case VK_DESCRIPTOR_TYPE_INLINE_UNIFORM_BLOCK_EXT:
            fprintf(outputFile, "VK_DESCRIPTOR_TYPE_INLINE_UNIFORM_BLOCK_EXT");
            return;
        case VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_NV:
            fprintf(outputFile, "VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_NV");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkDescriptorPoolCreateFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkDescriptorPoolCreateFlagBits e = static_cast<VkDescriptorPoolCreateFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT:
            fprintf(outputFile, "VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT");
            return;
        case VK_DESCRIPTOR_POOL_CREATE_UPDATE_AFTER_BIND_BIT_EXT:
            fprintf(outputFile, "VK_DESCRIPTOR_POOL_CREATE_UPDATE_AFTER_BIND_BIT_EXT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkFramebufferCreateFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkFramebufferCreateFlagBits e = static_cast<VkFramebufferCreateFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_FRAMEBUFFER_CREATE_IMAGELESS_BIT_KHR:
            fprintf(outputFile, "VK_FRAMEBUFFER_CREATE_IMAGELESS_BIT_KHR");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkRenderPassCreateFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkRenderPassCreateFlagBits e = static_cast<VkRenderPassCreateFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    fprintf(outputFile, "UNKNOWN");
}

void OutputEnumVkAttachmentDescriptionFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkAttachmentDescriptionFlagBits e = static_cast<VkAttachmentDescriptionFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_ATTACHMENT_DESCRIPTION_MAY_ALIAS_BIT:
            fprintf(outputFile, "VK_ATTACHMENT_DESCRIPTION_MAY_ALIAS_BIT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkAttachmentLoadOp(FILE* outputFile, uint32_t enum_uint32)
{
    VkAttachmentLoadOp e = static_cast<VkAttachmentLoadOp>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_ATTACHMENT_LOAD_OP_LOAD:
            fprintf(outputFile, "VK_ATTACHMENT_LOAD_OP_LOAD");
            return;
        case VK_ATTACHMENT_LOAD_OP_CLEAR:
            fprintf(outputFile, "VK_ATTACHMENT_LOAD_OP_CLEAR");
            return;
        case VK_ATTACHMENT_LOAD_OP_DONT_CARE:
            fprintf(outputFile, "VK_ATTACHMENT_LOAD_OP_DONT_CARE");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkAttachmentStoreOp(FILE* outputFile, uint32_t enum_uint32)
{
    VkAttachmentStoreOp e = static_cast<VkAttachmentStoreOp>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_ATTACHMENT_STORE_OP_STORE:
            fprintf(outputFile, "VK_ATTACHMENT_STORE_OP_STORE");
            return;
        case VK_ATTACHMENT_STORE_OP_DONT_CARE:
            fprintf(outputFile, "VK_ATTACHMENT_STORE_OP_DONT_CARE");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkSubpassDescriptionFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkSubpassDescriptionFlagBits e = static_cast<VkSubpassDescriptionFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SUBPASS_DESCRIPTION_PER_VIEW_ATTRIBUTES_BIT_NVX:
            fprintf(outputFile, "VK_SUBPASS_DESCRIPTION_PER_VIEW_ATTRIBUTES_BIT_NVX");
            return;
        case VK_SUBPASS_DESCRIPTION_PER_VIEW_POSITION_X_ONLY_BIT_NVX:
            fprintf(outputFile, "VK_SUBPASS_DESCRIPTION_PER_VIEW_POSITION_X_ONLY_BIT_NVX");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkPipelineBindPoint(FILE* outputFile, uint32_t enum_uint32)
{
    VkPipelineBindPoint e = static_cast<VkPipelineBindPoint>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_PIPELINE_BIND_POINT_GRAPHICS:
            fprintf(outputFile, "VK_PIPELINE_BIND_POINT_GRAPHICS");
            return;
        case VK_PIPELINE_BIND_POINT_COMPUTE:
            fprintf(outputFile, "VK_PIPELINE_BIND_POINT_COMPUTE");
            return;
        case VK_PIPELINE_BIND_POINT_RAY_TRACING_NV:
            fprintf(outputFile, "VK_PIPELINE_BIND_POINT_RAY_TRACING_NV");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkAccessFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkAccessFlagBits e = static_cast<VkAccessFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_ACCESS_INDIRECT_COMMAND_READ_BIT:
            fprintf(outputFile, "VK_ACCESS_INDIRECT_COMMAND_READ_BIT");
            return;
        case VK_ACCESS_INDEX_READ_BIT:
            fprintf(outputFile, "VK_ACCESS_INDEX_READ_BIT");
            return;
        case VK_ACCESS_VERTEX_ATTRIBUTE_READ_BIT:
            fprintf(outputFile, "VK_ACCESS_VERTEX_ATTRIBUTE_READ_BIT");
            return;
        case VK_ACCESS_UNIFORM_READ_BIT:
            fprintf(outputFile, "VK_ACCESS_UNIFORM_READ_BIT");
            return;
        case VK_ACCESS_INPUT_ATTACHMENT_READ_BIT:
            fprintf(outputFile, "VK_ACCESS_INPUT_ATTACHMENT_READ_BIT");
            return;
        case VK_ACCESS_SHADER_READ_BIT:
            fprintf(outputFile, "VK_ACCESS_SHADER_READ_BIT");
            return;
        case VK_ACCESS_SHADER_WRITE_BIT:
            fprintf(outputFile, "VK_ACCESS_SHADER_WRITE_BIT");
            return;
        case VK_ACCESS_COLOR_ATTACHMENT_READ_BIT:
            fprintf(outputFile, "VK_ACCESS_COLOR_ATTACHMENT_READ_BIT");
            return;
        case VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT:
            fprintf(outputFile, "VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT");
            return;
        case VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT:
            fprintf(outputFile, "VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT");
            return;
        case VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT:
            fprintf(outputFile, "VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT");
            return;
        case VK_ACCESS_TRANSFER_READ_BIT:
            fprintf(outputFile, "VK_ACCESS_TRANSFER_READ_BIT");
            return;
        case VK_ACCESS_TRANSFER_WRITE_BIT:
            fprintf(outputFile, "VK_ACCESS_TRANSFER_WRITE_BIT");
            return;
        case VK_ACCESS_HOST_READ_BIT:
            fprintf(outputFile, "VK_ACCESS_HOST_READ_BIT");
            return;
        case VK_ACCESS_HOST_WRITE_BIT:
            fprintf(outputFile, "VK_ACCESS_HOST_WRITE_BIT");
            return;
        case VK_ACCESS_MEMORY_READ_BIT:
            fprintf(outputFile, "VK_ACCESS_MEMORY_READ_BIT");
            return;
        case VK_ACCESS_MEMORY_WRITE_BIT:
            fprintf(outputFile, "VK_ACCESS_MEMORY_WRITE_BIT");
            return;
        case VK_ACCESS_TRANSFORM_FEEDBACK_WRITE_BIT_EXT:
            fprintf(outputFile, "VK_ACCESS_TRANSFORM_FEEDBACK_WRITE_BIT_EXT");
            return;
        case VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_READ_BIT_EXT:
            fprintf(outputFile, "VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_READ_BIT_EXT");
            return;
        case VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_WRITE_BIT_EXT:
            fprintf(outputFile, "VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_WRITE_BIT_EXT");
            return;
        case VK_ACCESS_CONDITIONAL_RENDERING_READ_BIT_EXT:
            fprintf(outputFile, "VK_ACCESS_CONDITIONAL_RENDERING_READ_BIT_EXT");
            return;
        case VK_ACCESS_COMMAND_PROCESS_READ_BIT_NVX:
            fprintf(outputFile, "VK_ACCESS_COMMAND_PROCESS_READ_BIT_NVX");
            return;
        case VK_ACCESS_COMMAND_PROCESS_WRITE_BIT_NVX:
            fprintf(outputFile, "VK_ACCESS_COMMAND_PROCESS_WRITE_BIT_NVX");
            return;
        case VK_ACCESS_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT:
            fprintf(outputFile, "VK_ACCESS_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT");
            return;
        case VK_ACCESS_SHADING_RATE_IMAGE_READ_BIT_NV:
            fprintf(outputFile, "VK_ACCESS_SHADING_RATE_IMAGE_READ_BIT_NV");
            return;
        case VK_ACCESS_ACCELERATION_STRUCTURE_READ_BIT_NV:
            fprintf(outputFile, "VK_ACCESS_ACCELERATION_STRUCTURE_READ_BIT_NV");
            return;
        case VK_ACCESS_ACCELERATION_STRUCTURE_WRITE_BIT_NV:
            fprintf(outputFile, "VK_ACCESS_ACCELERATION_STRUCTURE_WRITE_BIT_NV");
            return;
        case VK_ACCESS_FRAGMENT_DENSITY_MAP_READ_BIT_EXT:
            fprintf(outputFile, "VK_ACCESS_FRAGMENT_DENSITY_MAP_READ_BIT_EXT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkDependencyFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkDependencyFlagBits e = static_cast<VkDependencyFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_DEPENDENCY_BY_REGION_BIT:
            fprintf(outputFile, "VK_DEPENDENCY_BY_REGION_BIT");
            return;
        case VK_DEPENDENCY_DEVICE_GROUP_BIT:
            fprintf(outputFile, "VK_DEPENDENCY_DEVICE_GROUP_BIT");
            return;
        case VK_DEPENDENCY_VIEW_LOCAL_BIT:
            fprintf(outputFile, "VK_DEPENDENCY_VIEW_LOCAL_BIT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkCommandPoolCreateFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkCommandPoolCreateFlagBits e = static_cast<VkCommandPoolCreateFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_COMMAND_POOL_CREATE_TRANSIENT_BIT:
            fprintf(outputFile, "VK_COMMAND_POOL_CREATE_TRANSIENT_BIT");
            return;
        case VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT:
            fprintf(outputFile, "VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT");
            return;
        case VK_COMMAND_POOL_CREATE_PROTECTED_BIT:
            fprintf(outputFile, "VK_COMMAND_POOL_CREATE_PROTECTED_BIT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkCommandPoolResetFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkCommandPoolResetFlagBits e = static_cast<VkCommandPoolResetFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_COMMAND_POOL_RESET_RELEASE_RESOURCES_BIT:
            fprintf(outputFile, "VK_COMMAND_POOL_RESET_RELEASE_RESOURCES_BIT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkCommandBufferLevel(FILE* outputFile, uint32_t enum_uint32)
{
    VkCommandBufferLevel e = static_cast<VkCommandBufferLevel>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_COMMAND_BUFFER_LEVEL_PRIMARY:
            fprintf(outputFile, "VK_COMMAND_BUFFER_LEVEL_PRIMARY");
            return;
        case VK_COMMAND_BUFFER_LEVEL_SECONDARY:
            fprintf(outputFile, "VK_COMMAND_BUFFER_LEVEL_SECONDARY");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkCommandBufferUsageFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkCommandBufferUsageFlagBits e = static_cast<VkCommandBufferUsageFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT:
            fprintf(outputFile, "VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT");
            return;
        case VK_COMMAND_BUFFER_USAGE_RENDER_PASS_CONTINUE_BIT:
            fprintf(outputFile, "VK_COMMAND_BUFFER_USAGE_RENDER_PASS_CONTINUE_BIT");
            return;
        case VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT:
            fprintf(outputFile, "VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkQueryControlFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkQueryControlFlagBits e = static_cast<VkQueryControlFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_QUERY_CONTROL_PRECISE_BIT:
            fprintf(outputFile, "VK_QUERY_CONTROL_PRECISE_BIT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkCommandBufferResetFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkCommandBufferResetFlagBits e = static_cast<VkCommandBufferResetFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_COMMAND_BUFFER_RESET_RELEASE_RESOURCES_BIT:
            fprintf(outputFile, "VK_COMMAND_BUFFER_RESET_RELEASE_RESOURCES_BIT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkStencilFaceFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkStencilFaceFlagBits e = static_cast<VkStencilFaceFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_STENCIL_FACE_FRONT_BIT:
            fprintf(outputFile, "VK_STENCIL_FACE_FRONT_BIT");
            return;
        case VK_STENCIL_FACE_BACK_BIT:
            fprintf(outputFile, "VK_STENCIL_FACE_BACK_BIT");
            return;
        case VK_STENCIL_FACE_FRONT_AND_BACK:
            fprintf(outputFile, "VK_STENCIL_FACE_FRONT_AND_BACK");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkIndexType(FILE* outputFile, uint32_t enum_uint32)
{
    VkIndexType e = static_cast<VkIndexType>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_INDEX_TYPE_UINT16:
            fprintf(outputFile, "VK_INDEX_TYPE_UINT16");
            return;
        case VK_INDEX_TYPE_UINT32:
            fprintf(outputFile, "VK_INDEX_TYPE_UINT32");
            return;
        case VK_INDEX_TYPE_NONE_NV:
            fprintf(outputFile, "VK_INDEX_TYPE_NONE_NV");
            return;
        case VK_INDEX_TYPE_UINT8_EXT:
            fprintf(outputFile, "VK_INDEX_TYPE_UINT8_EXT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkSubpassContents(FILE* outputFile, uint32_t enum_uint32)
{
    VkSubpassContents e = static_cast<VkSubpassContents>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SUBPASS_CONTENTS_INLINE:
            fprintf(outputFile, "VK_SUBPASS_CONTENTS_INLINE");
            return;
        case VK_SUBPASS_CONTENTS_SECONDARY_COMMAND_BUFFERS:
            fprintf(outputFile, "VK_SUBPASS_CONTENTS_SECONDARY_COMMAND_BUFFERS");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkObjectType(FILE* outputFile, uint32_t enum_uint32)
{
    VkObjectType e = static_cast<VkObjectType>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_OBJECT_TYPE_UNKNOWN:
            fprintf(outputFile, "VK_OBJECT_TYPE_UNKNOWN");
            return;
        case VK_OBJECT_TYPE_INSTANCE:
            fprintf(outputFile, "VK_OBJECT_TYPE_INSTANCE");
            return;
        case VK_OBJECT_TYPE_PHYSICAL_DEVICE:
            fprintf(outputFile, "VK_OBJECT_TYPE_PHYSICAL_DEVICE");
            return;
        case VK_OBJECT_TYPE_DEVICE:
            fprintf(outputFile, "VK_OBJECT_TYPE_DEVICE");
            return;
        case VK_OBJECT_TYPE_QUEUE:
            fprintf(outputFile, "VK_OBJECT_TYPE_QUEUE");
            return;
        case VK_OBJECT_TYPE_SEMAPHORE:
            fprintf(outputFile, "VK_OBJECT_TYPE_SEMAPHORE");
            return;
        case VK_OBJECT_TYPE_COMMAND_BUFFER:
            fprintf(outputFile, "VK_OBJECT_TYPE_COMMAND_BUFFER");
            return;
        case VK_OBJECT_TYPE_FENCE:
            fprintf(outputFile, "VK_OBJECT_TYPE_FENCE");
            return;
        case VK_OBJECT_TYPE_DEVICE_MEMORY:
            fprintf(outputFile, "VK_OBJECT_TYPE_DEVICE_MEMORY");
            return;
        case VK_OBJECT_TYPE_BUFFER:
            fprintf(outputFile, "VK_OBJECT_TYPE_BUFFER");
            return;
        case VK_OBJECT_TYPE_IMAGE:
            fprintf(outputFile, "VK_OBJECT_TYPE_IMAGE");
            return;
        case VK_OBJECT_TYPE_EVENT:
            fprintf(outputFile, "VK_OBJECT_TYPE_EVENT");
            return;
        case VK_OBJECT_TYPE_QUERY_POOL:
            fprintf(outputFile, "VK_OBJECT_TYPE_QUERY_POOL");
            return;
        case VK_OBJECT_TYPE_BUFFER_VIEW:
            fprintf(outputFile, "VK_OBJECT_TYPE_BUFFER_VIEW");
            return;
        case VK_OBJECT_TYPE_IMAGE_VIEW:
            fprintf(outputFile, "VK_OBJECT_TYPE_IMAGE_VIEW");
            return;
        case VK_OBJECT_TYPE_SHADER_MODULE:
            fprintf(outputFile, "VK_OBJECT_TYPE_SHADER_MODULE");
            return;
        case VK_OBJECT_TYPE_PIPELINE_CACHE:
            fprintf(outputFile, "VK_OBJECT_TYPE_PIPELINE_CACHE");
            return;
        case VK_OBJECT_TYPE_PIPELINE_LAYOUT:
            fprintf(outputFile, "VK_OBJECT_TYPE_PIPELINE_LAYOUT");
            return;
        case VK_OBJECT_TYPE_RENDER_PASS:
            fprintf(outputFile, "VK_OBJECT_TYPE_RENDER_PASS");
            return;
        case VK_OBJECT_TYPE_PIPELINE:
            fprintf(outputFile, "VK_OBJECT_TYPE_PIPELINE");
            return;
        case VK_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT:
            fprintf(outputFile, "VK_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT");
            return;
        case VK_OBJECT_TYPE_SAMPLER:
            fprintf(outputFile, "VK_OBJECT_TYPE_SAMPLER");
            return;
        case VK_OBJECT_TYPE_DESCRIPTOR_POOL:
            fprintf(outputFile, "VK_OBJECT_TYPE_DESCRIPTOR_POOL");
            return;
        case VK_OBJECT_TYPE_DESCRIPTOR_SET:
            fprintf(outputFile, "VK_OBJECT_TYPE_DESCRIPTOR_SET");
            return;
        case VK_OBJECT_TYPE_FRAMEBUFFER:
            fprintf(outputFile, "VK_OBJECT_TYPE_FRAMEBUFFER");
            return;
        case VK_OBJECT_TYPE_COMMAND_POOL:
            fprintf(outputFile, "VK_OBJECT_TYPE_COMMAND_POOL");
            return;
        case VK_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION:
            fprintf(outputFile, "VK_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION");
            return;
        case VK_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE:
            fprintf(outputFile, "VK_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE");
            return;
        case VK_OBJECT_TYPE_SURFACE_KHR:
            fprintf(outputFile, "VK_OBJECT_TYPE_SURFACE_KHR");
            return;
        case VK_OBJECT_TYPE_SWAPCHAIN_KHR:
            fprintf(outputFile, "VK_OBJECT_TYPE_SWAPCHAIN_KHR");
            return;
        case VK_OBJECT_TYPE_DISPLAY_KHR:
            fprintf(outputFile, "VK_OBJECT_TYPE_DISPLAY_KHR");
            return;
        case VK_OBJECT_TYPE_DISPLAY_MODE_KHR:
            fprintf(outputFile, "VK_OBJECT_TYPE_DISPLAY_MODE_KHR");
            return;
        case VK_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT:
            fprintf(outputFile, "VK_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT");
            return;
        case VK_OBJECT_TYPE_OBJECT_TABLE_NVX:
            fprintf(outputFile, "VK_OBJECT_TYPE_OBJECT_TABLE_NVX");
            return;
        case VK_OBJECT_TYPE_INDIRECT_COMMANDS_LAYOUT_NVX:
            fprintf(outputFile, "VK_OBJECT_TYPE_INDIRECT_COMMANDS_LAYOUT_NVX");
            return;
        case VK_OBJECT_TYPE_DEBUG_UTILS_MESSENGER_EXT:
            fprintf(outputFile, "VK_OBJECT_TYPE_DEBUG_UTILS_MESSENGER_EXT");
            return;
        case VK_OBJECT_TYPE_VALIDATION_CACHE_EXT:
            fprintf(outputFile, "VK_OBJECT_TYPE_VALIDATION_CACHE_EXT");
            return;
        case VK_OBJECT_TYPE_ACCELERATION_STRUCTURE_NV:
            fprintf(outputFile, "VK_OBJECT_TYPE_ACCELERATION_STRUCTURE_NV");
            return;
        case VK_OBJECT_TYPE_PERFORMANCE_CONFIGURATION_INTEL:
            fprintf(outputFile, "VK_OBJECT_TYPE_PERFORMANCE_CONFIGURATION_INTEL");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkVendorId(FILE* outputFile, uint32_t enum_uint32)
{
    VkVendorId e = static_cast<VkVendorId>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_VENDOR_ID_VIV:
            fprintf(outputFile, "VK_VENDOR_ID_VIV");
            return;
        case VK_VENDOR_ID_VSI:
            fprintf(outputFile, "VK_VENDOR_ID_VSI");
            return;
        case VK_VENDOR_ID_KAZAN:
            fprintf(outputFile, "VK_VENDOR_ID_KAZAN");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkSubgroupFeatureFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkSubgroupFeatureFlagBits e = static_cast<VkSubgroupFeatureFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SUBGROUP_FEATURE_BASIC_BIT:
            fprintf(outputFile, "VK_SUBGROUP_FEATURE_BASIC_BIT");
            return;
        case VK_SUBGROUP_FEATURE_VOTE_BIT:
            fprintf(outputFile, "VK_SUBGROUP_FEATURE_VOTE_BIT");
            return;
        case VK_SUBGROUP_FEATURE_ARITHMETIC_BIT:
            fprintf(outputFile, "VK_SUBGROUP_FEATURE_ARITHMETIC_BIT");
            return;
        case VK_SUBGROUP_FEATURE_BALLOT_BIT:
            fprintf(outputFile, "VK_SUBGROUP_FEATURE_BALLOT_BIT");
            return;
        case VK_SUBGROUP_FEATURE_SHUFFLE_BIT:
            fprintf(outputFile, "VK_SUBGROUP_FEATURE_SHUFFLE_BIT");
            return;
        case VK_SUBGROUP_FEATURE_SHUFFLE_RELATIVE_BIT:
            fprintf(outputFile, "VK_SUBGROUP_FEATURE_SHUFFLE_RELATIVE_BIT");
            return;
        case VK_SUBGROUP_FEATURE_CLUSTERED_BIT:
            fprintf(outputFile, "VK_SUBGROUP_FEATURE_CLUSTERED_BIT");
            return;
        case VK_SUBGROUP_FEATURE_QUAD_BIT:
            fprintf(outputFile, "VK_SUBGROUP_FEATURE_QUAD_BIT");
            return;
        case VK_SUBGROUP_FEATURE_PARTITIONED_BIT_NV:
            fprintf(outputFile, "VK_SUBGROUP_FEATURE_PARTITIONED_BIT_NV");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkPeerMemoryFeatureFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkPeerMemoryFeatureFlagBits e = static_cast<VkPeerMemoryFeatureFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT:
            fprintf(outputFile, "VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT");
            return;
        case VK_PEER_MEMORY_FEATURE_COPY_DST_BIT:
            fprintf(outputFile, "VK_PEER_MEMORY_FEATURE_COPY_DST_BIT");
            return;
        case VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT:
            fprintf(outputFile, "VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT");
            return;
        case VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT:
            fprintf(outputFile, "VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkMemoryAllocateFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkMemoryAllocateFlagBits e = static_cast<VkMemoryAllocateFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT:
            fprintf(outputFile, "VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkPointClippingBehavior(FILE* outputFile, uint32_t enum_uint32)
{
    VkPointClippingBehavior e = static_cast<VkPointClippingBehavior>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_POINT_CLIPPING_BEHAVIOR_ALL_CLIP_PLANES:
            fprintf(outputFile, "VK_POINT_CLIPPING_BEHAVIOR_ALL_CLIP_PLANES");
            return;
        case VK_POINT_CLIPPING_BEHAVIOR_USER_CLIP_PLANES_ONLY:
            fprintf(outputFile, "VK_POINT_CLIPPING_BEHAVIOR_USER_CLIP_PLANES_ONLY");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkTessellationDomainOrigin(FILE* outputFile, uint32_t enum_uint32)
{
    VkTessellationDomainOrigin e = static_cast<VkTessellationDomainOrigin>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_TESSELLATION_DOMAIN_ORIGIN_UPPER_LEFT:
            fprintf(outputFile, "VK_TESSELLATION_DOMAIN_ORIGIN_UPPER_LEFT");
            return;
        case VK_TESSELLATION_DOMAIN_ORIGIN_LOWER_LEFT:
            fprintf(outputFile, "VK_TESSELLATION_DOMAIN_ORIGIN_LOWER_LEFT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkSamplerYcbcrModelConversion(FILE* outputFile, uint32_t enum_uint32)
{
    VkSamplerYcbcrModelConversion e = static_cast<VkSamplerYcbcrModelConversion>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SAMPLER_YCBCR_MODEL_CONVERSION_RGB_IDENTITY:
            fprintf(outputFile, "VK_SAMPLER_YCBCR_MODEL_CONVERSION_RGB_IDENTITY");
            return;
        case VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_IDENTITY:
            fprintf(outputFile, "VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_IDENTITY");
            return;
        case VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_709:
            fprintf(outputFile, "VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_709");
            return;
        case VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_601:
            fprintf(outputFile, "VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_601");
            return;
        case VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_2020:
            fprintf(outputFile, "VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_2020");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkSamplerYcbcrRange(FILE* outputFile, uint32_t enum_uint32)
{
    VkSamplerYcbcrRange e = static_cast<VkSamplerYcbcrRange>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SAMPLER_YCBCR_RANGE_ITU_FULL:
            fprintf(outputFile, "VK_SAMPLER_YCBCR_RANGE_ITU_FULL");
            return;
        case VK_SAMPLER_YCBCR_RANGE_ITU_NARROW:
            fprintf(outputFile, "VK_SAMPLER_YCBCR_RANGE_ITU_NARROW");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkChromaLocation(FILE* outputFile, uint32_t enum_uint32)
{
    VkChromaLocation e = static_cast<VkChromaLocation>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_CHROMA_LOCATION_COSITED_EVEN:
            fprintf(outputFile, "VK_CHROMA_LOCATION_COSITED_EVEN");
            return;
        case VK_CHROMA_LOCATION_MIDPOINT:
            fprintf(outputFile, "VK_CHROMA_LOCATION_MIDPOINT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkDescriptorUpdateTemplateType(FILE* outputFile, uint32_t enum_uint32)
{
    VkDescriptorUpdateTemplateType e = static_cast<VkDescriptorUpdateTemplateType>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_DESCRIPTOR_SET:
            fprintf(outputFile, "VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_DESCRIPTOR_SET");
            return;
        case VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_PUSH_DESCRIPTORS_KHR:
            fprintf(outputFile, "VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_PUSH_DESCRIPTORS_KHR");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkExternalMemoryHandleTypeFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkExternalMemoryHandleTypeFlagBits e = static_cast<VkExternalMemoryHandleTypeFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT:
            fprintf(outputFile, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT");
            return;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT:
            fprintf(outputFile, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT");
            return;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT:
            fprintf(outputFile, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT");
            return;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT:
            fprintf(outputFile, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT");
            return;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT:
            fprintf(outputFile, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT");
            return;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT:
            fprintf(outputFile, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT");
            return;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT:
            fprintf(outputFile, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT");
            return;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_DMA_BUF_BIT_EXT:
            fprintf(outputFile, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_DMA_BUF_BIT_EXT");
            return;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_ANDROID_HARDWARE_BUFFER_BIT_ANDROID:
            fprintf(outputFile, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_ANDROID_HARDWARE_BUFFER_BIT_ANDROID");
            return;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_ALLOCATION_BIT_EXT:
            fprintf(outputFile, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_ALLOCATION_BIT_EXT");
            return;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_MAPPED_FOREIGN_MEMORY_BIT_EXT:
            fprintf(outputFile, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_MAPPED_FOREIGN_MEMORY_BIT_EXT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkExternalMemoryFeatureFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkExternalMemoryFeatureFlagBits e = static_cast<VkExternalMemoryFeatureFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT:
            fprintf(outputFile, "VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT");
            return;
        case VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT:
            fprintf(outputFile, "VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT");
            return;
        case VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT:
            fprintf(outputFile, "VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkExternalFenceHandleTypeFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkExternalFenceHandleTypeFlagBits e = static_cast<VkExternalFenceHandleTypeFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT:
            fprintf(outputFile, "VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT");
            return;
        case VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT:
            fprintf(outputFile, "VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT");
            return;
        case VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT:
            fprintf(outputFile, "VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT");
            return;
        case VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT:
            fprintf(outputFile, "VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkExternalFenceFeatureFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkExternalFenceFeatureFlagBits e = static_cast<VkExternalFenceFeatureFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT:
            fprintf(outputFile, "VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT");
            return;
        case VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT:
            fprintf(outputFile, "VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkFenceImportFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkFenceImportFlagBits e = static_cast<VkFenceImportFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_FENCE_IMPORT_TEMPORARY_BIT:
            fprintf(outputFile, "VK_FENCE_IMPORT_TEMPORARY_BIT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkSemaphoreImportFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkSemaphoreImportFlagBits e = static_cast<VkSemaphoreImportFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SEMAPHORE_IMPORT_TEMPORARY_BIT:
            fprintf(outputFile, "VK_SEMAPHORE_IMPORT_TEMPORARY_BIT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkExternalSemaphoreHandleTypeFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkExternalSemaphoreHandleTypeFlagBits e = static_cast<VkExternalSemaphoreHandleTypeFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT:
            fprintf(outputFile, "VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT");
            return;
        case VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT:
            fprintf(outputFile, "VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT");
            return;
        case VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT:
            fprintf(outputFile, "VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT");
            return;
        case VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT:
            fprintf(outputFile, "VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT");
            return;
        case VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT:
            fprintf(outputFile, "VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkExternalSemaphoreFeatureFlagBits(FILE* outputFile, uint32_t enum_uint32)
{
    VkExternalSemaphoreFeatureFlagBits e = static_cast<VkExternalSemaphoreFeatureFlagBits>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT:
            fprintf(outputFile, "VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT");
            return;
        case VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT:
            fprintf(outputFile, "VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkSurfaceTransformFlagBitsKHR(FILE* outputFile, uint32_t enum_uint32)
{
    VkSurfaceTransformFlagBitsKHR e = static_cast<VkSurfaceTransformFlagBitsKHR>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR:
            fprintf(outputFile, "VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR");
            return;
        case VK_SURFACE_TRANSFORM_ROTATE_90_BIT_KHR:
            fprintf(outputFile, "VK_SURFACE_TRANSFORM_ROTATE_90_BIT_KHR");
            return;
        case VK_SURFACE_TRANSFORM_ROTATE_180_BIT_KHR:
            fprintf(outputFile, "VK_SURFACE_TRANSFORM_ROTATE_180_BIT_KHR");
            return;
        case VK_SURFACE_TRANSFORM_ROTATE_270_BIT_KHR:
            fprintf(outputFile, "VK_SURFACE_TRANSFORM_ROTATE_270_BIT_KHR");
            return;
        case VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_BIT_KHR:
            fprintf(outputFile, "VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_BIT_KHR");
            return;
        case VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_90_BIT_KHR:
            fprintf(outputFile, "VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_90_BIT_KHR");
            return;
        case VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_180_BIT_KHR:
            fprintf(outputFile, "VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_180_BIT_KHR");
            return;
        case VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_270_BIT_KHR:
            fprintf(outputFile, "VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_270_BIT_KHR");
            return;
        case VK_SURFACE_TRANSFORM_INHERIT_BIT_KHR:
            fprintf(outputFile, "VK_SURFACE_TRANSFORM_INHERIT_BIT_KHR");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkCompositeAlphaFlagBitsKHR(FILE* outputFile, uint32_t enum_uint32)
{
    VkCompositeAlphaFlagBitsKHR e = static_cast<VkCompositeAlphaFlagBitsKHR>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR:
            fprintf(outputFile, "VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR");
            return;
        case VK_COMPOSITE_ALPHA_PRE_MULTIPLIED_BIT_KHR:
            fprintf(outputFile, "VK_COMPOSITE_ALPHA_PRE_MULTIPLIED_BIT_KHR");
            return;
        case VK_COMPOSITE_ALPHA_POST_MULTIPLIED_BIT_KHR:
            fprintf(outputFile, "VK_COMPOSITE_ALPHA_POST_MULTIPLIED_BIT_KHR");
            return;
        case VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR:
            fprintf(outputFile, "VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkColorSpaceKHR(FILE* outputFile, uint32_t enum_uint32)
{
    VkColorSpaceKHR e = static_cast<VkColorSpaceKHR>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_COLOR_SPACE_SRGB_NONLINEAR_KHR:
            fprintf(outputFile, "VK_COLOR_SPACE_SRGB_NONLINEAR_KHR");
            return;
        case VK_COLOR_SPACE_DISPLAY_P3_NONLINEAR_EXT:
            fprintf(outputFile, "VK_COLOR_SPACE_DISPLAY_P3_NONLINEAR_EXT");
            return;
        case VK_COLOR_SPACE_EXTENDED_SRGB_LINEAR_EXT:
            fprintf(outputFile, "VK_COLOR_SPACE_EXTENDED_SRGB_LINEAR_EXT");
            return;
        case VK_COLOR_SPACE_DISPLAY_P3_LINEAR_EXT:
            fprintf(outputFile, "VK_COLOR_SPACE_DISPLAY_P3_LINEAR_EXT");
            return;
        case VK_COLOR_SPACE_DCI_P3_NONLINEAR_EXT:
            fprintf(outputFile, "VK_COLOR_SPACE_DCI_P3_NONLINEAR_EXT");
            return;
        case VK_COLOR_SPACE_BT709_LINEAR_EXT:
            fprintf(outputFile, "VK_COLOR_SPACE_BT709_LINEAR_EXT");
            return;
        case VK_COLOR_SPACE_BT709_NONLINEAR_EXT:
            fprintf(outputFile, "VK_COLOR_SPACE_BT709_NONLINEAR_EXT");
            return;
        case VK_COLOR_SPACE_BT2020_LINEAR_EXT:
            fprintf(outputFile, "VK_COLOR_SPACE_BT2020_LINEAR_EXT");
            return;
        case VK_COLOR_SPACE_HDR10_ST2084_EXT:
            fprintf(outputFile, "VK_COLOR_SPACE_HDR10_ST2084_EXT");
            return;
        case VK_COLOR_SPACE_DOLBYVISION_EXT:
            fprintf(outputFile, "VK_COLOR_SPACE_DOLBYVISION_EXT");
            return;
        case VK_COLOR_SPACE_HDR10_HLG_EXT:
            fprintf(outputFile, "VK_COLOR_SPACE_HDR10_HLG_EXT");
            return;
        case VK_COLOR_SPACE_ADOBERGB_LINEAR_EXT:
            fprintf(outputFile, "VK_COLOR_SPACE_ADOBERGB_LINEAR_EXT");
            return;
        case VK_COLOR_SPACE_ADOBERGB_NONLINEAR_EXT:
            fprintf(outputFile, "VK_COLOR_SPACE_ADOBERGB_NONLINEAR_EXT");
            return;
        case VK_COLOR_SPACE_PASS_THROUGH_EXT:
            fprintf(outputFile, "VK_COLOR_SPACE_PASS_THROUGH_EXT");
            return;
        case VK_COLOR_SPACE_EXTENDED_SRGB_NONLINEAR_EXT:
            fprintf(outputFile, "VK_COLOR_SPACE_EXTENDED_SRGB_NONLINEAR_EXT");
            return;
        case VK_COLOR_SPACE_DISPLAY_NATIVE_AMD:
            fprintf(outputFile, "VK_COLOR_SPACE_DISPLAY_NATIVE_AMD");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkPresentModeKHR(FILE* outputFile, uint32_t enum_uint32)
{
    VkPresentModeKHR e = static_cast<VkPresentModeKHR>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_PRESENT_MODE_IMMEDIATE_KHR:
            fprintf(outputFile, "VK_PRESENT_MODE_IMMEDIATE_KHR");
            return;
        case VK_PRESENT_MODE_MAILBOX_KHR:
            fprintf(outputFile, "VK_PRESENT_MODE_MAILBOX_KHR");
            return;
        case VK_PRESENT_MODE_FIFO_KHR:
            fprintf(outputFile, "VK_PRESENT_MODE_FIFO_KHR");
            return;
        case VK_PRESENT_MODE_FIFO_RELAXED_KHR:
            fprintf(outputFile, "VK_PRESENT_MODE_FIFO_RELAXED_KHR");
            return;
        case VK_PRESENT_MODE_SHARED_DEMAND_REFRESH_KHR:
            fprintf(outputFile, "VK_PRESENT_MODE_SHARED_DEMAND_REFRESH_KHR");
            return;
        case VK_PRESENT_MODE_SHARED_CONTINUOUS_REFRESH_KHR:
            fprintf(outputFile, "VK_PRESENT_MODE_SHARED_CONTINUOUS_REFRESH_KHR");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkSwapchainCreateFlagBitsKHR(FILE* outputFile, uint32_t enum_uint32)
{
    VkSwapchainCreateFlagBitsKHR e = static_cast<VkSwapchainCreateFlagBitsKHR>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SWAPCHAIN_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR:
            fprintf(outputFile, "VK_SWAPCHAIN_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR");
            return;
        case VK_SWAPCHAIN_CREATE_PROTECTED_BIT_KHR:
            fprintf(outputFile, "VK_SWAPCHAIN_CREATE_PROTECTED_BIT_KHR");
            return;
        case VK_SWAPCHAIN_CREATE_MUTABLE_FORMAT_BIT_KHR:
            fprintf(outputFile, "VK_SWAPCHAIN_CREATE_MUTABLE_FORMAT_BIT_KHR");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkDeviceGroupPresentModeFlagBitsKHR(FILE* outputFile, uint32_t enum_uint32)
{
    VkDeviceGroupPresentModeFlagBitsKHR e = static_cast<VkDeviceGroupPresentModeFlagBitsKHR>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_BIT_KHR:
            fprintf(outputFile, "VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_BIT_KHR");
            return;
        case VK_DEVICE_GROUP_PRESENT_MODE_REMOTE_BIT_KHR:
            fprintf(outputFile, "VK_DEVICE_GROUP_PRESENT_MODE_REMOTE_BIT_KHR");
            return;
        case VK_DEVICE_GROUP_PRESENT_MODE_SUM_BIT_KHR:
            fprintf(outputFile, "VK_DEVICE_GROUP_PRESENT_MODE_SUM_BIT_KHR");
            return;
        case VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_MULTI_DEVICE_BIT_KHR:
            fprintf(outputFile, "VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_MULTI_DEVICE_BIT_KHR");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkDisplayPlaneAlphaFlagBitsKHR(FILE* outputFile, uint32_t enum_uint32)
{
    VkDisplayPlaneAlphaFlagBitsKHR e = static_cast<VkDisplayPlaneAlphaFlagBitsKHR>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_DISPLAY_PLANE_ALPHA_OPAQUE_BIT_KHR:
            fprintf(outputFile, "VK_DISPLAY_PLANE_ALPHA_OPAQUE_BIT_KHR");
            return;
        case VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR:
            fprintf(outputFile, "VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR");
            return;
        case VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_BIT_KHR:
            fprintf(outputFile, "VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_BIT_KHR");
            return;
        case VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_PREMULTIPLIED_BIT_KHR:
            fprintf(outputFile, "VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_PREMULTIPLIED_BIT_KHR");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkDriverIdKHR(FILE* outputFile, uint32_t enum_uint32)
{
    VkDriverIdKHR e = static_cast<VkDriverIdKHR>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_DRIVER_ID_AMD_PROPRIETARY_KHR:
            fprintf(outputFile, "VK_DRIVER_ID_AMD_PROPRIETARY_KHR");
            return;
        case VK_DRIVER_ID_AMD_OPEN_SOURCE_KHR:
            fprintf(outputFile, "VK_DRIVER_ID_AMD_OPEN_SOURCE_KHR");
            return;
        case VK_DRIVER_ID_MESA_RADV_KHR:
            fprintf(outputFile, "VK_DRIVER_ID_MESA_RADV_KHR");
            return;
        case VK_DRIVER_ID_NVIDIA_PROPRIETARY_KHR:
            fprintf(outputFile, "VK_DRIVER_ID_NVIDIA_PROPRIETARY_KHR");
            return;
        case VK_DRIVER_ID_INTEL_PROPRIETARY_WINDOWS_KHR:
            fprintf(outputFile, "VK_DRIVER_ID_INTEL_PROPRIETARY_WINDOWS_KHR");
            return;
        case VK_DRIVER_ID_INTEL_OPEN_SOURCE_MESA_KHR:
            fprintf(outputFile, "VK_DRIVER_ID_INTEL_OPEN_SOURCE_MESA_KHR");
            return;
        case VK_DRIVER_ID_IMAGINATION_PROPRIETARY_KHR:
            fprintf(outputFile, "VK_DRIVER_ID_IMAGINATION_PROPRIETARY_KHR");
            return;
        case VK_DRIVER_ID_QUALCOMM_PROPRIETARY_KHR:
            fprintf(outputFile, "VK_DRIVER_ID_QUALCOMM_PROPRIETARY_KHR");
            return;
        case VK_DRIVER_ID_ARM_PROPRIETARY_KHR:
            fprintf(outputFile, "VK_DRIVER_ID_ARM_PROPRIETARY_KHR");
            return;
        case VK_DRIVER_ID_GOOGLE_SWIFTSHADER_KHR:
            fprintf(outputFile, "VK_DRIVER_ID_GOOGLE_SWIFTSHADER_KHR");
            return;
        case VK_DRIVER_ID_GGP_PROPRIETARY_KHR:
            fprintf(outputFile, "VK_DRIVER_ID_GGP_PROPRIETARY_KHR");
            return;
        case VK_DRIVER_ID_BROADCOM_PROPRIETARY_KHR:
            fprintf(outputFile, "VK_DRIVER_ID_BROADCOM_PROPRIETARY_KHR");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkShaderFloatControlsIndependenceKHR(FILE* outputFile, uint32_t enum_uint32)
{
    VkShaderFloatControlsIndependenceKHR e = static_cast<VkShaderFloatControlsIndependenceKHR>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_32_BIT_ONLY_KHR:
            fprintf(outputFile, "VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_32_BIT_ONLY_KHR");
            return;
        case VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_ALL_KHR:
            fprintf(outputFile, "VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_ALL_KHR");
            return;
        case VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_NONE_KHR:
            fprintf(outputFile, "VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_NONE_KHR");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkResolveModeFlagBitsKHR(FILE* outputFile, uint32_t enum_uint32)
{
    VkResolveModeFlagBitsKHR e = static_cast<VkResolveModeFlagBitsKHR>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_RESOLVE_MODE_NONE_KHR:
            fprintf(outputFile, "VK_RESOLVE_MODE_NONE_KHR");
            return;
        case VK_RESOLVE_MODE_SAMPLE_ZERO_BIT_KHR:
            fprintf(outputFile, "VK_RESOLVE_MODE_SAMPLE_ZERO_BIT_KHR");
            return;
        case VK_RESOLVE_MODE_AVERAGE_BIT_KHR:
            fprintf(outputFile, "VK_RESOLVE_MODE_AVERAGE_BIT_KHR");
            return;
        case VK_RESOLVE_MODE_MIN_BIT_KHR:
            fprintf(outputFile, "VK_RESOLVE_MODE_MIN_BIT_KHR");
            return;
        case VK_RESOLVE_MODE_MAX_BIT_KHR:
            fprintf(outputFile, "VK_RESOLVE_MODE_MAX_BIT_KHR");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkSemaphoreTypeKHR(FILE* outputFile, uint32_t enum_uint32)
{
    VkSemaphoreTypeKHR e = static_cast<VkSemaphoreTypeKHR>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SEMAPHORE_TYPE_BINARY_KHR:
            fprintf(outputFile, "VK_SEMAPHORE_TYPE_BINARY_KHR");
            return;
        case VK_SEMAPHORE_TYPE_TIMELINE_KHR:
            fprintf(outputFile, "VK_SEMAPHORE_TYPE_TIMELINE_KHR");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkSemaphoreWaitFlagBitsKHR(FILE* outputFile, uint32_t enum_uint32)
{
    VkSemaphoreWaitFlagBitsKHR e = static_cast<VkSemaphoreWaitFlagBitsKHR>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SEMAPHORE_WAIT_ANY_BIT_KHR:
            fprintf(outputFile, "VK_SEMAPHORE_WAIT_ANY_BIT_KHR");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkPipelineExecutableStatisticFormatKHR(FILE* outputFile, uint32_t enum_uint32)
{
    VkPipelineExecutableStatisticFormatKHR e = static_cast<VkPipelineExecutableStatisticFormatKHR>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_BOOL32_KHR:
            fprintf(outputFile, "VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_BOOL32_KHR");
            return;
        case VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_INT64_KHR:
            fprintf(outputFile, "VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_INT64_KHR");
            return;
        case VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_UINT64_KHR:
            fprintf(outputFile, "VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_UINT64_KHR");
            return;
        case VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_FLOAT64_KHR:
            fprintf(outputFile, "VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_FLOAT64_KHR");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkDebugReportObjectTypeEXT(FILE* outputFile, uint32_t enum_uint32)
{
    VkDebugReportObjectTypeEXT e = static_cast<VkDebugReportObjectTypeEXT>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT:
            fprintf(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_INSTANCE_EXT:
            fprintf(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_INSTANCE_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_PHYSICAL_DEVICE_EXT:
            fprintf(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_PHYSICAL_DEVICE_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_EXT:
            fprintf(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_QUEUE_EXT:
            fprintf(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_QUEUE_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_SEMAPHORE_EXT:
            fprintf(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_SEMAPHORE_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_BUFFER_EXT:
            fprintf(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_BUFFER_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_FENCE_EXT:
            fprintf(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_FENCE_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_MEMORY_EXT:
            fprintf(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_MEMORY_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_EXT:
            fprintf(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_EXT:
            fprintf(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_EVENT_EXT:
            fprintf(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_EVENT_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_QUERY_POOL_EXT:
            fprintf(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_QUERY_POOL_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_VIEW_EXT:
            fprintf(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_VIEW_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_VIEW_EXT:
            fprintf(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_VIEW_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_SHADER_MODULE_EXT:
            fprintf(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_SHADER_MODULE_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_CACHE_EXT:
            fprintf(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_CACHE_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_LAYOUT_EXT:
            fprintf(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_LAYOUT_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_RENDER_PASS_EXT:
            fprintf(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_RENDER_PASS_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_EXT:
            fprintf(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT_EXT:
            fprintf(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_EXT:
            fprintf(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_POOL_EXT:
            fprintf(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_POOL_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_EXT:
            fprintf(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_FRAMEBUFFER_EXT:
            fprintf(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_FRAMEBUFFER_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_POOL_EXT:
            fprintf(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_POOL_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_SURFACE_KHR_EXT:
            fprintf(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_SURFACE_KHR_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_SWAPCHAIN_KHR_EXT:
            fprintf(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_SWAPCHAIN_KHR_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT_EXT:
            fprintf(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_DISPLAY_KHR_EXT:
            fprintf(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_DISPLAY_KHR_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_DISPLAY_MODE_KHR_EXT:
            fprintf(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_DISPLAY_MODE_KHR_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_OBJECT_TABLE_NVX_EXT:
            fprintf(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_OBJECT_TABLE_NVX_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_INDIRECT_COMMANDS_LAYOUT_NVX_EXT:
            fprintf(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_INDIRECT_COMMANDS_LAYOUT_NVX_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_VALIDATION_CACHE_EXT_EXT:
            fprintf(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_VALIDATION_CACHE_EXT_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION_EXT:
            fprintf(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_EXT:
            fprintf(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_EXT");
            return;
        case VK_DEBUG_REPORT_OBJECT_TYPE_ACCELERATION_STRUCTURE_NV_EXT:
            fprintf(outputFile, "VK_DEBUG_REPORT_OBJECT_TYPE_ACCELERATION_STRUCTURE_NV_EXT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkDebugReportFlagBitsEXT(FILE* outputFile, uint32_t enum_uint32)
{
    VkDebugReportFlagBitsEXT e = static_cast<VkDebugReportFlagBitsEXT>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_DEBUG_REPORT_INFORMATION_BIT_EXT:
            fprintf(outputFile, "VK_DEBUG_REPORT_INFORMATION_BIT_EXT");
            return;
        case VK_DEBUG_REPORT_WARNING_BIT_EXT:
            fprintf(outputFile, "VK_DEBUG_REPORT_WARNING_BIT_EXT");
            return;
        case VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT:
            fprintf(outputFile, "VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT");
            return;
        case VK_DEBUG_REPORT_ERROR_BIT_EXT:
            fprintf(outputFile, "VK_DEBUG_REPORT_ERROR_BIT_EXT");
            return;
        case VK_DEBUG_REPORT_DEBUG_BIT_EXT:
            fprintf(outputFile, "VK_DEBUG_REPORT_DEBUG_BIT_EXT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkRasterizationOrderAMD(FILE* outputFile, uint32_t enum_uint32)
{
    VkRasterizationOrderAMD e = static_cast<VkRasterizationOrderAMD>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_RASTERIZATION_ORDER_STRICT_AMD:
            fprintf(outputFile, "VK_RASTERIZATION_ORDER_STRICT_AMD");
            return;
        case VK_RASTERIZATION_ORDER_RELAXED_AMD:
            fprintf(outputFile, "VK_RASTERIZATION_ORDER_RELAXED_AMD");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkShaderInfoTypeAMD(FILE* outputFile, uint32_t enum_uint32)
{
    VkShaderInfoTypeAMD e = static_cast<VkShaderInfoTypeAMD>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SHADER_INFO_TYPE_STATISTICS_AMD:
            fprintf(outputFile, "VK_SHADER_INFO_TYPE_STATISTICS_AMD");
            return;
        case VK_SHADER_INFO_TYPE_BINARY_AMD:
            fprintf(outputFile, "VK_SHADER_INFO_TYPE_BINARY_AMD");
            return;
        case VK_SHADER_INFO_TYPE_DISASSEMBLY_AMD:
            fprintf(outputFile, "VK_SHADER_INFO_TYPE_DISASSEMBLY_AMD");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkExternalMemoryHandleTypeFlagBitsNV(FILE* outputFile, uint32_t enum_uint32)
{
    VkExternalMemoryHandleTypeFlagBitsNV e = static_cast<VkExternalMemoryHandleTypeFlagBitsNV>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_NV:
            fprintf(outputFile, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_NV");
            return;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_NV:
            fprintf(outputFile, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_NV");
            return;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_BIT_NV:
            fprintf(outputFile, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_BIT_NV");
            return;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_KMT_BIT_NV:
            fprintf(outputFile, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_KMT_BIT_NV");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkExternalMemoryFeatureFlagBitsNV(FILE* outputFile, uint32_t enum_uint32)
{
    VkExternalMemoryFeatureFlagBitsNV e = static_cast<VkExternalMemoryFeatureFlagBitsNV>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_NV:
            fprintf(outputFile, "VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_NV");
            return;
        case VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_NV:
            fprintf(outputFile, "VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_NV");
            return;
        case VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_NV:
            fprintf(outputFile, "VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_NV");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkValidationCheckEXT(FILE* outputFile, uint32_t enum_uint32)
{
    VkValidationCheckEXT e = static_cast<VkValidationCheckEXT>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_VALIDATION_CHECK_ALL_EXT:
            fprintf(outputFile, "VK_VALIDATION_CHECK_ALL_EXT");
            return;
        case VK_VALIDATION_CHECK_SHADERS_EXT:
            fprintf(outputFile, "VK_VALIDATION_CHECK_SHADERS_EXT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkConditionalRenderingFlagBitsEXT(FILE* outputFile, uint32_t enum_uint32)
{
    VkConditionalRenderingFlagBitsEXT e = static_cast<VkConditionalRenderingFlagBitsEXT>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_CONDITIONAL_RENDERING_INVERTED_BIT_EXT:
            fprintf(outputFile, "VK_CONDITIONAL_RENDERING_INVERTED_BIT_EXT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkIndirectCommandsLayoutUsageFlagBitsNVX(FILE* outputFile, uint32_t enum_uint32)
{
    VkIndirectCommandsLayoutUsageFlagBitsNVX e = static_cast<VkIndirectCommandsLayoutUsageFlagBitsNVX>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_INDIRECT_COMMANDS_LAYOUT_USAGE_UNORDERED_SEQUENCES_BIT_NVX:
            fprintf(outputFile, "VK_INDIRECT_COMMANDS_LAYOUT_USAGE_UNORDERED_SEQUENCES_BIT_NVX");
            return;
        case VK_INDIRECT_COMMANDS_LAYOUT_USAGE_SPARSE_SEQUENCES_BIT_NVX:
            fprintf(outputFile, "VK_INDIRECT_COMMANDS_LAYOUT_USAGE_SPARSE_SEQUENCES_BIT_NVX");
            return;
        case VK_INDIRECT_COMMANDS_LAYOUT_USAGE_EMPTY_EXECUTIONS_BIT_NVX:
            fprintf(outputFile, "VK_INDIRECT_COMMANDS_LAYOUT_USAGE_EMPTY_EXECUTIONS_BIT_NVX");
            return;
        case VK_INDIRECT_COMMANDS_LAYOUT_USAGE_INDEXED_SEQUENCES_BIT_NVX:
            fprintf(outputFile, "VK_INDIRECT_COMMANDS_LAYOUT_USAGE_INDEXED_SEQUENCES_BIT_NVX");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkObjectEntryUsageFlagBitsNVX(FILE* outputFile, uint32_t enum_uint32)
{
    VkObjectEntryUsageFlagBitsNVX e = static_cast<VkObjectEntryUsageFlagBitsNVX>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_OBJECT_ENTRY_USAGE_GRAPHICS_BIT_NVX:
            fprintf(outputFile, "VK_OBJECT_ENTRY_USAGE_GRAPHICS_BIT_NVX");
            return;
        case VK_OBJECT_ENTRY_USAGE_COMPUTE_BIT_NVX:
            fprintf(outputFile, "VK_OBJECT_ENTRY_USAGE_COMPUTE_BIT_NVX");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkIndirectCommandsTokenTypeNVX(FILE* outputFile, uint32_t enum_uint32)
{
    VkIndirectCommandsTokenTypeNVX e = static_cast<VkIndirectCommandsTokenTypeNVX>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_INDIRECT_COMMANDS_TOKEN_TYPE_PIPELINE_NVX:
            fprintf(outputFile, "VK_INDIRECT_COMMANDS_TOKEN_TYPE_PIPELINE_NVX");
            return;
        case VK_INDIRECT_COMMANDS_TOKEN_TYPE_DESCRIPTOR_SET_NVX:
            fprintf(outputFile, "VK_INDIRECT_COMMANDS_TOKEN_TYPE_DESCRIPTOR_SET_NVX");
            return;
        case VK_INDIRECT_COMMANDS_TOKEN_TYPE_INDEX_BUFFER_NVX:
            fprintf(outputFile, "VK_INDIRECT_COMMANDS_TOKEN_TYPE_INDEX_BUFFER_NVX");
            return;
        case VK_INDIRECT_COMMANDS_TOKEN_TYPE_VERTEX_BUFFER_NVX:
            fprintf(outputFile, "VK_INDIRECT_COMMANDS_TOKEN_TYPE_VERTEX_BUFFER_NVX");
            return;
        case VK_INDIRECT_COMMANDS_TOKEN_TYPE_PUSH_CONSTANT_NVX:
            fprintf(outputFile, "VK_INDIRECT_COMMANDS_TOKEN_TYPE_PUSH_CONSTANT_NVX");
            return;
        case VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_INDEXED_NVX:
            fprintf(outputFile, "VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_INDEXED_NVX");
            return;
        case VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_NVX:
            fprintf(outputFile, "VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_NVX");
            return;
        case VK_INDIRECT_COMMANDS_TOKEN_TYPE_DISPATCH_NVX:
            fprintf(outputFile, "VK_INDIRECT_COMMANDS_TOKEN_TYPE_DISPATCH_NVX");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkObjectEntryTypeNVX(FILE* outputFile, uint32_t enum_uint32)
{
    VkObjectEntryTypeNVX e = static_cast<VkObjectEntryTypeNVX>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_OBJECT_ENTRY_TYPE_DESCRIPTOR_SET_NVX:
            fprintf(outputFile, "VK_OBJECT_ENTRY_TYPE_DESCRIPTOR_SET_NVX");
            return;
        case VK_OBJECT_ENTRY_TYPE_PIPELINE_NVX:
            fprintf(outputFile, "VK_OBJECT_ENTRY_TYPE_PIPELINE_NVX");
            return;
        case VK_OBJECT_ENTRY_TYPE_INDEX_BUFFER_NVX:
            fprintf(outputFile, "VK_OBJECT_ENTRY_TYPE_INDEX_BUFFER_NVX");
            return;
        case VK_OBJECT_ENTRY_TYPE_VERTEX_BUFFER_NVX:
            fprintf(outputFile, "VK_OBJECT_ENTRY_TYPE_VERTEX_BUFFER_NVX");
            return;
        case VK_OBJECT_ENTRY_TYPE_PUSH_CONSTANT_NVX:
            fprintf(outputFile, "VK_OBJECT_ENTRY_TYPE_PUSH_CONSTANT_NVX");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkSurfaceCounterFlagBitsEXT(FILE* outputFile, uint32_t enum_uint32)
{
    VkSurfaceCounterFlagBitsEXT e = static_cast<VkSurfaceCounterFlagBitsEXT>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SURFACE_COUNTER_VBLANK_EXT:
            fprintf(outputFile, "VK_SURFACE_COUNTER_VBLANK_EXT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkDisplayPowerStateEXT(FILE* outputFile, uint32_t enum_uint32)
{
    VkDisplayPowerStateEXT e = static_cast<VkDisplayPowerStateEXT>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_DISPLAY_POWER_STATE_OFF_EXT:
            fprintf(outputFile, "VK_DISPLAY_POWER_STATE_OFF_EXT");
            return;
        case VK_DISPLAY_POWER_STATE_SUSPEND_EXT:
            fprintf(outputFile, "VK_DISPLAY_POWER_STATE_SUSPEND_EXT");
            return;
        case VK_DISPLAY_POWER_STATE_ON_EXT:
            fprintf(outputFile, "VK_DISPLAY_POWER_STATE_ON_EXT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkDeviceEventTypeEXT(FILE* outputFile, uint32_t enum_uint32)
{
    VkDeviceEventTypeEXT e = static_cast<VkDeviceEventTypeEXT>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_DEVICE_EVENT_TYPE_DISPLAY_HOTPLUG_EXT:
            fprintf(outputFile, "VK_DEVICE_EVENT_TYPE_DISPLAY_HOTPLUG_EXT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkDisplayEventTypeEXT(FILE* outputFile, uint32_t enum_uint32)
{
    VkDisplayEventTypeEXT e = static_cast<VkDisplayEventTypeEXT>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_DISPLAY_EVENT_TYPE_FIRST_PIXEL_OUT_EXT:
            fprintf(outputFile, "VK_DISPLAY_EVENT_TYPE_FIRST_PIXEL_OUT_EXT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkViewportCoordinateSwizzleNV(FILE* outputFile, uint32_t enum_uint32)
{
    VkViewportCoordinateSwizzleNV e = static_cast<VkViewportCoordinateSwizzleNV>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_X_NV:
            fprintf(outputFile, "VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_X_NV");
            return;
        case VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_X_NV:
            fprintf(outputFile, "VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_X_NV");
            return;
        case VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_Y_NV:
            fprintf(outputFile, "VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_Y_NV");
            return;
        case VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_Y_NV:
            fprintf(outputFile, "VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_Y_NV");
            return;
        case VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_Z_NV:
            fprintf(outputFile, "VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_Z_NV");
            return;
        case VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_Z_NV:
            fprintf(outputFile, "VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_Z_NV");
            return;
        case VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_W_NV:
            fprintf(outputFile, "VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_W_NV");
            return;
        case VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_W_NV:
            fprintf(outputFile, "VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_W_NV");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkDiscardRectangleModeEXT(FILE* outputFile, uint32_t enum_uint32)
{
    VkDiscardRectangleModeEXT e = static_cast<VkDiscardRectangleModeEXT>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_DISCARD_RECTANGLE_MODE_INCLUSIVE_EXT:
            fprintf(outputFile, "VK_DISCARD_RECTANGLE_MODE_INCLUSIVE_EXT");
            return;
        case VK_DISCARD_RECTANGLE_MODE_EXCLUSIVE_EXT:
            fprintf(outputFile, "VK_DISCARD_RECTANGLE_MODE_EXCLUSIVE_EXT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkConservativeRasterizationModeEXT(FILE* outputFile, uint32_t enum_uint32)
{
    VkConservativeRasterizationModeEXT e = static_cast<VkConservativeRasterizationModeEXT>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_CONSERVATIVE_RASTERIZATION_MODE_DISABLED_EXT:
            fprintf(outputFile, "VK_CONSERVATIVE_RASTERIZATION_MODE_DISABLED_EXT");
            return;
        case VK_CONSERVATIVE_RASTERIZATION_MODE_OVERESTIMATE_EXT:
            fprintf(outputFile, "VK_CONSERVATIVE_RASTERIZATION_MODE_OVERESTIMATE_EXT");
            return;
        case VK_CONSERVATIVE_RASTERIZATION_MODE_UNDERESTIMATE_EXT:
            fprintf(outputFile, "VK_CONSERVATIVE_RASTERIZATION_MODE_UNDERESTIMATE_EXT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkDebugUtilsMessageSeverityFlagBitsEXT(FILE* outputFile, uint32_t enum_uint32)
{
    VkDebugUtilsMessageSeverityFlagBitsEXT e = static_cast<VkDebugUtilsMessageSeverityFlagBitsEXT>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT:
            fprintf(outputFile, "VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT");
            return;
        case VK_DEBUG_UTILS_MESSAGE_SEVERITY_INFO_BIT_EXT:
            fprintf(outputFile, "VK_DEBUG_UTILS_MESSAGE_SEVERITY_INFO_BIT_EXT");
            return;
        case VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT:
            fprintf(outputFile, "VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT");
            return;
        case VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT:
            fprintf(outputFile, "VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkDebugUtilsMessageTypeFlagBitsEXT(FILE* outputFile, uint32_t enum_uint32)
{
    VkDebugUtilsMessageTypeFlagBitsEXT e = static_cast<VkDebugUtilsMessageTypeFlagBitsEXT>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT:
            fprintf(outputFile, "VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT");
            return;
        case VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT:
            fprintf(outputFile, "VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT");
            return;
        case VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT:
            fprintf(outputFile, "VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkSamplerReductionModeEXT(FILE* outputFile, uint32_t enum_uint32)
{
    VkSamplerReductionModeEXT e = static_cast<VkSamplerReductionModeEXT>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SAMPLER_REDUCTION_MODE_WEIGHTED_AVERAGE_EXT:
            fprintf(outputFile, "VK_SAMPLER_REDUCTION_MODE_WEIGHTED_AVERAGE_EXT");
            return;
        case VK_SAMPLER_REDUCTION_MODE_MIN_EXT:
            fprintf(outputFile, "VK_SAMPLER_REDUCTION_MODE_MIN_EXT");
            return;
        case VK_SAMPLER_REDUCTION_MODE_MAX_EXT:
            fprintf(outputFile, "VK_SAMPLER_REDUCTION_MODE_MAX_EXT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkBlendOverlapEXT(FILE* outputFile, uint32_t enum_uint32)
{
    VkBlendOverlapEXT e = static_cast<VkBlendOverlapEXT>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_BLEND_OVERLAP_UNCORRELATED_EXT:
            fprintf(outputFile, "VK_BLEND_OVERLAP_UNCORRELATED_EXT");
            return;
        case VK_BLEND_OVERLAP_DISJOINT_EXT:
            fprintf(outputFile, "VK_BLEND_OVERLAP_DISJOINT_EXT");
            return;
        case VK_BLEND_OVERLAP_CONJOINT_EXT:
            fprintf(outputFile, "VK_BLEND_OVERLAP_CONJOINT_EXT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkCoverageModulationModeNV(FILE* outputFile, uint32_t enum_uint32)
{
    VkCoverageModulationModeNV e = static_cast<VkCoverageModulationModeNV>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_COVERAGE_MODULATION_MODE_NONE_NV:
            fprintf(outputFile, "VK_COVERAGE_MODULATION_MODE_NONE_NV");
            return;
        case VK_COVERAGE_MODULATION_MODE_RGB_NV:
            fprintf(outputFile, "VK_COVERAGE_MODULATION_MODE_RGB_NV");
            return;
        case VK_COVERAGE_MODULATION_MODE_ALPHA_NV:
            fprintf(outputFile, "VK_COVERAGE_MODULATION_MODE_ALPHA_NV");
            return;
        case VK_COVERAGE_MODULATION_MODE_RGBA_NV:
            fprintf(outputFile, "VK_COVERAGE_MODULATION_MODE_RGBA_NV");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkValidationCacheHeaderVersionEXT(FILE* outputFile, uint32_t enum_uint32)
{
    VkValidationCacheHeaderVersionEXT e = static_cast<VkValidationCacheHeaderVersionEXT>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_VALIDATION_CACHE_HEADER_VERSION_ONE_EXT:
            fprintf(outputFile, "VK_VALIDATION_CACHE_HEADER_VERSION_ONE_EXT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkDescriptorBindingFlagBitsEXT(FILE* outputFile, uint32_t enum_uint32)
{
    VkDescriptorBindingFlagBitsEXT e = static_cast<VkDescriptorBindingFlagBitsEXT>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_DESCRIPTOR_BINDING_UPDATE_AFTER_BIND_BIT_EXT:
            fprintf(outputFile, "VK_DESCRIPTOR_BINDING_UPDATE_AFTER_BIND_BIT_EXT");
            return;
        case VK_DESCRIPTOR_BINDING_UPDATE_UNUSED_WHILE_PENDING_BIT_EXT:
            fprintf(outputFile, "VK_DESCRIPTOR_BINDING_UPDATE_UNUSED_WHILE_PENDING_BIT_EXT");
            return;
        case VK_DESCRIPTOR_BINDING_PARTIALLY_BOUND_BIT_EXT:
            fprintf(outputFile, "VK_DESCRIPTOR_BINDING_PARTIALLY_BOUND_BIT_EXT");
            return;
        case VK_DESCRIPTOR_BINDING_VARIABLE_DESCRIPTOR_COUNT_BIT_EXT:
            fprintf(outputFile, "VK_DESCRIPTOR_BINDING_VARIABLE_DESCRIPTOR_COUNT_BIT_EXT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkShadingRatePaletteEntryNV(FILE* outputFile, uint32_t enum_uint32)
{
    VkShadingRatePaletteEntryNV e = static_cast<VkShadingRatePaletteEntryNV>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SHADING_RATE_PALETTE_ENTRY_NO_INVOCATIONS_NV:
            fprintf(outputFile, "VK_SHADING_RATE_PALETTE_ENTRY_NO_INVOCATIONS_NV");
            return;
        case VK_SHADING_RATE_PALETTE_ENTRY_16_INVOCATIONS_PER_PIXEL_NV:
            fprintf(outputFile, "VK_SHADING_RATE_PALETTE_ENTRY_16_INVOCATIONS_PER_PIXEL_NV");
            return;
        case VK_SHADING_RATE_PALETTE_ENTRY_8_INVOCATIONS_PER_PIXEL_NV:
            fprintf(outputFile, "VK_SHADING_RATE_PALETTE_ENTRY_8_INVOCATIONS_PER_PIXEL_NV");
            return;
        case VK_SHADING_RATE_PALETTE_ENTRY_4_INVOCATIONS_PER_PIXEL_NV:
            fprintf(outputFile, "VK_SHADING_RATE_PALETTE_ENTRY_4_INVOCATIONS_PER_PIXEL_NV");
            return;
        case VK_SHADING_RATE_PALETTE_ENTRY_2_INVOCATIONS_PER_PIXEL_NV:
            fprintf(outputFile, "VK_SHADING_RATE_PALETTE_ENTRY_2_INVOCATIONS_PER_PIXEL_NV");
            return;
        case VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_PIXEL_NV:
            fprintf(outputFile, "VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_PIXEL_NV");
            return;
        case VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X1_PIXELS_NV:
            fprintf(outputFile, "VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X1_PIXELS_NV");
            return;
        case VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_1X2_PIXELS_NV:
            fprintf(outputFile, "VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_1X2_PIXELS_NV");
            return;
        case VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X2_PIXELS_NV:
            fprintf(outputFile, "VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X2_PIXELS_NV");
            return;
        case VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_4X2_PIXELS_NV:
            fprintf(outputFile, "VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_4X2_PIXELS_NV");
            return;
        case VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X4_PIXELS_NV:
            fprintf(outputFile, "VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X4_PIXELS_NV");
            return;
        case VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_4X4_PIXELS_NV:
            fprintf(outputFile, "VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_4X4_PIXELS_NV");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkCoarseSampleOrderTypeNV(FILE* outputFile, uint32_t enum_uint32)
{
    VkCoarseSampleOrderTypeNV e = static_cast<VkCoarseSampleOrderTypeNV>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_COARSE_SAMPLE_ORDER_TYPE_DEFAULT_NV:
            fprintf(outputFile, "VK_COARSE_SAMPLE_ORDER_TYPE_DEFAULT_NV");
            return;
        case VK_COARSE_SAMPLE_ORDER_TYPE_CUSTOM_NV:
            fprintf(outputFile, "VK_COARSE_SAMPLE_ORDER_TYPE_CUSTOM_NV");
            return;
        case VK_COARSE_SAMPLE_ORDER_TYPE_PIXEL_MAJOR_NV:
            fprintf(outputFile, "VK_COARSE_SAMPLE_ORDER_TYPE_PIXEL_MAJOR_NV");
            return;
        case VK_COARSE_SAMPLE_ORDER_TYPE_SAMPLE_MAJOR_NV:
            fprintf(outputFile, "VK_COARSE_SAMPLE_ORDER_TYPE_SAMPLE_MAJOR_NV");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkAccelerationStructureTypeNV(FILE* outputFile, uint32_t enum_uint32)
{
    VkAccelerationStructureTypeNV e = static_cast<VkAccelerationStructureTypeNV>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_ACCELERATION_STRUCTURE_TYPE_TOP_LEVEL_NV:
            fprintf(outputFile, "VK_ACCELERATION_STRUCTURE_TYPE_TOP_LEVEL_NV");
            return;
        case VK_ACCELERATION_STRUCTURE_TYPE_BOTTOM_LEVEL_NV:
            fprintf(outputFile, "VK_ACCELERATION_STRUCTURE_TYPE_BOTTOM_LEVEL_NV");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkRayTracingShaderGroupTypeNV(FILE* outputFile, uint32_t enum_uint32)
{
    VkRayTracingShaderGroupTypeNV e = static_cast<VkRayTracingShaderGroupTypeNV>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_RAY_TRACING_SHADER_GROUP_TYPE_GENERAL_NV:
            fprintf(outputFile, "VK_RAY_TRACING_SHADER_GROUP_TYPE_GENERAL_NV");
            return;
        case VK_RAY_TRACING_SHADER_GROUP_TYPE_TRIANGLES_HIT_GROUP_NV:
            fprintf(outputFile, "VK_RAY_TRACING_SHADER_GROUP_TYPE_TRIANGLES_HIT_GROUP_NV");
            return;
        case VK_RAY_TRACING_SHADER_GROUP_TYPE_PROCEDURAL_HIT_GROUP_NV:
            fprintf(outputFile, "VK_RAY_TRACING_SHADER_GROUP_TYPE_PROCEDURAL_HIT_GROUP_NV");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkGeometryTypeNV(FILE* outputFile, uint32_t enum_uint32)
{
    VkGeometryTypeNV e = static_cast<VkGeometryTypeNV>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_GEOMETRY_TYPE_TRIANGLES_NV:
            fprintf(outputFile, "VK_GEOMETRY_TYPE_TRIANGLES_NV");
            return;
        case VK_GEOMETRY_TYPE_AABBS_NV:
            fprintf(outputFile, "VK_GEOMETRY_TYPE_AABBS_NV");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkGeometryFlagBitsNV(FILE* outputFile, uint32_t enum_uint32)
{
    VkGeometryFlagBitsNV e = static_cast<VkGeometryFlagBitsNV>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_GEOMETRY_OPAQUE_BIT_NV:
            fprintf(outputFile, "VK_GEOMETRY_OPAQUE_BIT_NV");
            return;
        case VK_GEOMETRY_NO_DUPLICATE_ANY_HIT_INVOCATION_BIT_NV:
            fprintf(outputFile, "VK_GEOMETRY_NO_DUPLICATE_ANY_HIT_INVOCATION_BIT_NV");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkGeometryInstanceFlagBitsNV(FILE* outputFile, uint32_t enum_uint32)
{
    VkGeometryInstanceFlagBitsNV e = static_cast<VkGeometryInstanceFlagBitsNV>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_GEOMETRY_INSTANCE_TRIANGLE_CULL_DISABLE_BIT_NV:
            fprintf(outputFile, "VK_GEOMETRY_INSTANCE_TRIANGLE_CULL_DISABLE_BIT_NV");
            return;
        case VK_GEOMETRY_INSTANCE_TRIANGLE_FRONT_COUNTERCLOCKWISE_BIT_NV:
            fprintf(outputFile, "VK_GEOMETRY_INSTANCE_TRIANGLE_FRONT_COUNTERCLOCKWISE_BIT_NV");
            return;
        case VK_GEOMETRY_INSTANCE_FORCE_OPAQUE_BIT_NV:
            fprintf(outputFile, "VK_GEOMETRY_INSTANCE_FORCE_OPAQUE_BIT_NV");
            return;
        case VK_GEOMETRY_INSTANCE_FORCE_NO_OPAQUE_BIT_NV:
            fprintf(outputFile, "VK_GEOMETRY_INSTANCE_FORCE_NO_OPAQUE_BIT_NV");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkBuildAccelerationStructureFlagBitsNV(FILE* outputFile, uint32_t enum_uint32)
{
    VkBuildAccelerationStructureFlagBitsNV e = static_cast<VkBuildAccelerationStructureFlagBitsNV>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_UPDATE_BIT_NV:
            fprintf(outputFile, "VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_UPDATE_BIT_NV");
            return;
        case VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_COMPACTION_BIT_NV:
            fprintf(outputFile, "VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_COMPACTION_BIT_NV");
            return;
        case VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_TRACE_BIT_NV:
            fprintf(outputFile, "VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_TRACE_BIT_NV");
            return;
        case VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_BUILD_BIT_NV:
            fprintf(outputFile, "VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_BUILD_BIT_NV");
            return;
        case VK_BUILD_ACCELERATION_STRUCTURE_LOW_MEMORY_BIT_NV:
            fprintf(outputFile, "VK_BUILD_ACCELERATION_STRUCTURE_LOW_MEMORY_BIT_NV");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkCopyAccelerationStructureModeNV(FILE* outputFile, uint32_t enum_uint32)
{
    VkCopyAccelerationStructureModeNV e = static_cast<VkCopyAccelerationStructureModeNV>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_COPY_ACCELERATION_STRUCTURE_MODE_CLONE_NV:
            fprintf(outputFile, "VK_COPY_ACCELERATION_STRUCTURE_MODE_CLONE_NV");
            return;
        case VK_COPY_ACCELERATION_STRUCTURE_MODE_COMPACT_NV:
            fprintf(outputFile, "VK_COPY_ACCELERATION_STRUCTURE_MODE_COMPACT_NV");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkAccelerationStructureMemoryRequirementsTypeNV(FILE* outputFile, uint32_t enum_uint32)
{
    VkAccelerationStructureMemoryRequirementsTypeNV e = static_cast<VkAccelerationStructureMemoryRequirementsTypeNV>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_OBJECT_NV:
            fprintf(outputFile, "VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_OBJECT_NV");
            return;
        case VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_BUILD_SCRATCH_NV:
            fprintf(outputFile, "VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_BUILD_SCRATCH_NV");
            return;
        case VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_UPDATE_SCRATCH_NV:
            fprintf(outputFile, "VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_UPDATE_SCRATCH_NV");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkQueueGlobalPriorityEXT(FILE* outputFile, uint32_t enum_uint32)
{
    VkQueueGlobalPriorityEXT e = static_cast<VkQueueGlobalPriorityEXT>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_QUEUE_GLOBAL_PRIORITY_LOW_EXT:
            fprintf(outputFile, "VK_QUEUE_GLOBAL_PRIORITY_LOW_EXT");
            return;
        case VK_QUEUE_GLOBAL_PRIORITY_MEDIUM_EXT:
            fprintf(outputFile, "VK_QUEUE_GLOBAL_PRIORITY_MEDIUM_EXT");
            return;
        case VK_QUEUE_GLOBAL_PRIORITY_HIGH_EXT:
            fprintf(outputFile, "VK_QUEUE_GLOBAL_PRIORITY_HIGH_EXT");
            return;
        case VK_QUEUE_GLOBAL_PRIORITY_REALTIME_EXT:
            fprintf(outputFile, "VK_QUEUE_GLOBAL_PRIORITY_REALTIME_EXT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkPipelineCompilerControlFlagBitsAMD(FILE* outputFile, uint32_t enum_uint32)
{
    VkPipelineCompilerControlFlagBitsAMD e = static_cast<VkPipelineCompilerControlFlagBitsAMD>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    fprintf(outputFile, "UNKNOWN");
}

void OutputEnumVkTimeDomainEXT(FILE* outputFile, uint32_t enum_uint32)
{
    VkTimeDomainEXT e = static_cast<VkTimeDomainEXT>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_TIME_DOMAIN_DEVICE_EXT:
            fprintf(outputFile, "VK_TIME_DOMAIN_DEVICE_EXT");
            return;
        case VK_TIME_DOMAIN_CLOCK_MONOTONIC_EXT:
            fprintf(outputFile, "VK_TIME_DOMAIN_CLOCK_MONOTONIC_EXT");
            return;
        case VK_TIME_DOMAIN_CLOCK_MONOTONIC_RAW_EXT:
            fprintf(outputFile, "VK_TIME_DOMAIN_CLOCK_MONOTONIC_RAW_EXT");
            return;
        case VK_TIME_DOMAIN_QUERY_PERFORMANCE_COUNTER_EXT:
            fprintf(outputFile, "VK_TIME_DOMAIN_QUERY_PERFORMANCE_COUNTER_EXT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkMemoryOverallocationBehaviorAMD(FILE* outputFile, uint32_t enum_uint32)
{
    VkMemoryOverallocationBehaviorAMD e = static_cast<VkMemoryOverallocationBehaviorAMD>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_MEMORY_OVERALLOCATION_BEHAVIOR_DEFAULT_AMD:
            fprintf(outputFile, "VK_MEMORY_OVERALLOCATION_BEHAVIOR_DEFAULT_AMD");
            return;
        case VK_MEMORY_OVERALLOCATION_BEHAVIOR_ALLOWED_AMD:
            fprintf(outputFile, "VK_MEMORY_OVERALLOCATION_BEHAVIOR_ALLOWED_AMD");
            return;
        case VK_MEMORY_OVERALLOCATION_BEHAVIOR_DISALLOWED_AMD:
            fprintf(outputFile, "VK_MEMORY_OVERALLOCATION_BEHAVIOR_DISALLOWED_AMD");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkPipelineCreationFeedbackFlagBitsEXT(FILE* outputFile, uint32_t enum_uint32)
{
    VkPipelineCreationFeedbackFlagBitsEXT e = static_cast<VkPipelineCreationFeedbackFlagBitsEXT>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_PIPELINE_CREATION_FEEDBACK_VALID_BIT_EXT:
            fprintf(outputFile, "VK_PIPELINE_CREATION_FEEDBACK_VALID_BIT_EXT");
            return;
        case VK_PIPELINE_CREATION_FEEDBACK_APPLICATION_PIPELINE_CACHE_HIT_BIT_EXT:
            fprintf(outputFile, "VK_PIPELINE_CREATION_FEEDBACK_APPLICATION_PIPELINE_CACHE_HIT_BIT_EXT");
            return;
        case VK_PIPELINE_CREATION_FEEDBACK_BASE_PIPELINE_ACCELERATION_BIT_EXT:
            fprintf(outputFile, "VK_PIPELINE_CREATION_FEEDBACK_BASE_PIPELINE_ACCELERATION_BIT_EXT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkPerformanceConfigurationTypeINTEL(FILE* outputFile, uint32_t enum_uint32)
{
    VkPerformanceConfigurationTypeINTEL e = static_cast<VkPerformanceConfigurationTypeINTEL>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_PERFORMANCE_CONFIGURATION_TYPE_COMMAND_QUEUE_METRICS_DISCOVERY_ACTIVATED_INTEL:
            fprintf(outputFile, "VK_PERFORMANCE_CONFIGURATION_TYPE_COMMAND_QUEUE_METRICS_DISCOVERY_ACTIVATED_INTEL");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkQueryPoolSamplingModeINTEL(FILE* outputFile, uint32_t enum_uint32)
{
    VkQueryPoolSamplingModeINTEL e = static_cast<VkQueryPoolSamplingModeINTEL>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_QUERY_POOL_SAMPLING_MODE_MANUAL_INTEL:
            fprintf(outputFile, "VK_QUERY_POOL_SAMPLING_MODE_MANUAL_INTEL");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkPerformanceOverrideTypeINTEL(FILE* outputFile, uint32_t enum_uint32)
{
    VkPerformanceOverrideTypeINTEL e = static_cast<VkPerformanceOverrideTypeINTEL>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_PERFORMANCE_OVERRIDE_TYPE_NULL_HARDWARE_INTEL:
            fprintf(outputFile, "VK_PERFORMANCE_OVERRIDE_TYPE_NULL_HARDWARE_INTEL");
            return;
        case VK_PERFORMANCE_OVERRIDE_TYPE_FLUSH_GPU_CACHES_INTEL:
            fprintf(outputFile, "VK_PERFORMANCE_OVERRIDE_TYPE_FLUSH_GPU_CACHES_INTEL");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkPerformanceParameterTypeINTEL(FILE* outputFile, uint32_t enum_uint32)
{
    VkPerformanceParameterTypeINTEL e = static_cast<VkPerformanceParameterTypeINTEL>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_PERFORMANCE_PARAMETER_TYPE_HW_COUNTERS_SUPPORTED_INTEL:
            fprintf(outputFile, "VK_PERFORMANCE_PARAMETER_TYPE_HW_COUNTERS_SUPPORTED_INTEL");
            return;
        case VK_PERFORMANCE_PARAMETER_TYPE_STREAM_MARKER_VALID_BITS_INTEL:
            fprintf(outputFile, "VK_PERFORMANCE_PARAMETER_TYPE_STREAM_MARKER_VALID_BITS_INTEL");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkPerformanceValueTypeINTEL(FILE* outputFile, uint32_t enum_uint32)
{
    VkPerformanceValueTypeINTEL e = static_cast<VkPerformanceValueTypeINTEL>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_PERFORMANCE_VALUE_TYPE_UINT32_INTEL:
            fprintf(outputFile, "VK_PERFORMANCE_VALUE_TYPE_UINT32_INTEL");
            return;
        case VK_PERFORMANCE_VALUE_TYPE_UINT64_INTEL:
            fprintf(outputFile, "VK_PERFORMANCE_VALUE_TYPE_UINT64_INTEL");
            return;
        case VK_PERFORMANCE_VALUE_TYPE_FLOAT_INTEL:
            fprintf(outputFile, "VK_PERFORMANCE_VALUE_TYPE_FLOAT_INTEL");
            return;
        case VK_PERFORMANCE_VALUE_TYPE_BOOL_INTEL:
            fprintf(outputFile, "VK_PERFORMANCE_VALUE_TYPE_BOOL_INTEL");
            return;
        case VK_PERFORMANCE_VALUE_TYPE_STRING_INTEL:
            fprintf(outputFile, "VK_PERFORMANCE_VALUE_TYPE_STRING_INTEL");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkShaderCorePropertiesFlagBitsAMD(FILE* outputFile, uint32_t enum_uint32)
{
    VkShaderCorePropertiesFlagBitsAMD e = static_cast<VkShaderCorePropertiesFlagBitsAMD>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    fprintf(outputFile, "UNKNOWN");
}

void OutputEnumVkValidationFeatureEnableEXT(FILE* outputFile, uint32_t enum_uint32)
{
    VkValidationFeatureEnableEXT e = static_cast<VkValidationFeatureEnableEXT>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_VALIDATION_FEATURE_ENABLE_GPU_ASSISTED_EXT:
            fprintf(outputFile, "VK_VALIDATION_FEATURE_ENABLE_GPU_ASSISTED_EXT");
            return;
        case VK_VALIDATION_FEATURE_ENABLE_GPU_ASSISTED_RESERVE_BINDING_SLOT_EXT:
            fprintf(outputFile, "VK_VALIDATION_FEATURE_ENABLE_GPU_ASSISTED_RESERVE_BINDING_SLOT_EXT");
            return;
        case VK_VALIDATION_FEATURE_ENABLE_BEST_PRACTICES_EXT:
            fprintf(outputFile, "VK_VALIDATION_FEATURE_ENABLE_BEST_PRACTICES_EXT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkValidationFeatureDisableEXT(FILE* outputFile, uint32_t enum_uint32)
{
    VkValidationFeatureDisableEXT e = static_cast<VkValidationFeatureDisableEXT>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_VALIDATION_FEATURE_DISABLE_ALL_EXT:
            fprintf(outputFile, "VK_VALIDATION_FEATURE_DISABLE_ALL_EXT");
            return;
        case VK_VALIDATION_FEATURE_DISABLE_SHADERS_EXT:
            fprintf(outputFile, "VK_VALIDATION_FEATURE_DISABLE_SHADERS_EXT");
            return;
        case VK_VALIDATION_FEATURE_DISABLE_THREAD_SAFETY_EXT:
            fprintf(outputFile, "VK_VALIDATION_FEATURE_DISABLE_THREAD_SAFETY_EXT");
            return;
        case VK_VALIDATION_FEATURE_DISABLE_API_PARAMETERS_EXT:
            fprintf(outputFile, "VK_VALIDATION_FEATURE_DISABLE_API_PARAMETERS_EXT");
            return;
        case VK_VALIDATION_FEATURE_DISABLE_OBJECT_LIFETIMES_EXT:
            fprintf(outputFile, "VK_VALIDATION_FEATURE_DISABLE_OBJECT_LIFETIMES_EXT");
            return;
        case VK_VALIDATION_FEATURE_DISABLE_CORE_CHECKS_EXT:
            fprintf(outputFile, "VK_VALIDATION_FEATURE_DISABLE_CORE_CHECKS_EXT");
            return;
        case VK_VALIDATION_FEATURE_DISABLE_UNIQUE_HANDLES_EXT:
            fprintf(outputFile, "VK_VALIDATION_FEATURE_DISABLE_UNIQUE_HANDLES_EXT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkComponentTypeNV(FILE* outputFile, uint32_t enum_uint32)
{
    VkComponentTypeNV e = static_cast<VkComponentTypeNV>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_COMPONENT_TYPE_FLOAT16_NV:
            fprintf(outputFile, "VK_COMPONENT_TYPE_FLOAT16_NV");
            return;
        case VK_COMPONENT_TYPE_FLOAT32_NV:
            fprintf(outputFile, "VK_COMPONENT_TYPE_FLOAT32_NV");
            return;
        case VK_COMPONENT_TYPE_FLOAT64_NV:
            fprintf(outputFile, "VK_COMPONENT_TYPE_FLOAT64_NV");
            return;
        case VK_COMPONENT_TYPE_SINT8_NV:
            fprintf(outputFile, "VK_COMPONENT_TYPE_SINT8_NV");
            return;
        case VK_COMPONENT_TYPE_SINT16_NV:
            fprintf(outputFile, "VK_COMPONENT_TYPE_SINT16_NV");
            return;
        case VK_COMPONENT_TYPE_SINT32_NV:
            fprintf(outputFile, "VK_COMPONENT_TYPE_SINT32_NV");
            return;
        case VK_COMPONENT_TYPE_SINT64_NV:
            fprintf(outputFile, "VK_COMPONENT_TYPE_SINT64_NV");
            return;
        case VK_COMPONENT_TYPE_UINT8_NV:
            fprintf(outputFile, "VK_COMPONENT_TYPE_UINT8_NV");
            return;
        case VK_COMPONENT_TYPE_UINT16_NV:
            fprintf(outputFile, "VK_COMPONENT_TYPE_UINT16_NV");
            return;
        case VK_COMPONENT_TYPE_UINT32_NV:
            fprintf(outputFile, "VK_COMPONENT_TYPE_UINT32_NV");
            return;
        case VK_COMPONENT_TYPE_UINT64_NV:
            fprintf(outputFile, "VK_COMPONENT_TYPE_UINT64_NV");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkScopeNV(FILE* outputFile, uint32_t enum_uint32)
{
    VkScopeNV e = static_cast<VkScopeNV>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_SCOPE_DEVICE_NV:
            fprintf(outputFile, "VK_SCOPE_DEVICE_NV");
            return;
        case VK_SCOPE_WORKGROUP_NV:
            fprintf(outputFile, "VK_SCOPE_WORKGROUP_NV");
            return;
        case VK_SCOPE_SUBGROUP_NV:
            fprintf(outputFile, "VK_SCOPE_SUBGROUP_NV");
            return;
        case VK_SCOPE_QUEUE_FAMILY_NV:
            fprintf(outputFile, "VK_SCOPE_QUEUE_FAMILY_NV");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkCoverageReductionModeNV(FILE* outputFile, uint32_t enum_uint32)
{
    VkCoverageReductionModeNV e = static_cast<VkCoverageReductionModeNV>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_COVERAGE_REDUCTION_MODE_MERGE_NV:
            fprintf(outputFile, "VK_COVERAGE_REDUCTION_MODE_MERGE_NV");
            return;
        case VK_COVERAGE_REDUCTION_MODE_TRUNCATE_NV:
            fprintf(outputFile, "VK_COVERAGE_REDUCTION_MODE_TRUNCATE_NV");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkFullScreenExclusiveEXT(FILE* outputFile, uint32_t enum_uint32)
{
    VkFullScreenExclusiveEXT e = static_cast<VkFullScreenExclusiveEXT>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_FULL_SCREEN_EXCLUSIVE_DEFAULT_EXT:
            fprintf(outputFile, "VK_FULL_SCREEN_EXCLUSIVE_DEFAULT_EXT");
            return;
        case VK_FULL_SCREEN_EXCLUSIVE_ALLOWED_EXT:
            fprintf(outputFile, "VK_FULL_SCREEN_EXCLUSIVE_ALLOWED_EXT");
            return;
        case VK_FULL_SCREEN_EXCLUSIVE_DISALLOWED_EXT:
            fprintf(outputFile, "VK_FULL_SCREEN_EXCLUSIVE_DISALLOWED_EXT");
            return;
        case VK_FULL_SCREEN_EXCLUSIVE_APPLICATION_CONTROLLED_EXT:
            fprintf(outputFile, "VK_FULL_SCREEN_EXCLUSIVE_APPLICATION_CONTROLLED_EXT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkLineRasterizationModeEXT(FILE* outputFile, uint32_t enum_uint32)
{
    VkLineRasterizationModeEXT e = static_cast<VkLineRasterizationModeEXT>(enum_uint32);
    assert(outputFile != nullptr); // RYZ
    switch (e)
    {
        case VK_LINE_RASTERIZATION_MODE_DEFAULT_EXT:
            fprintf(outputFile, "VK_LINE_RASTERIZATION_MODE_DEFAULT_EXT");
            return;
        case VK_LINE_RASTERIZATION_MODE_RECTANGULAR_EXT:
            fprintf(outputFile, "VK_LINE_RASTERIZATION_MODE_RECTANGULAR_EXT");
            return;
        case VK_LINE_RASTERIZATION_MODE_BRESENHAM_EXT:
            fprintf(outputFile, "VK_LINE_RASTERIZATION_MODE_BRESENHAM_EXT");
            return;
        case VK_LINE_RASTERIZATION_MODE_RECTANGULAR_SMOOTH_EXT:
            fprintf(outputFile, "VK_LINE_RASTERIZATION_MODE_RECTANGULAR_SMOOTH_EXT");
            return;
        default:
            fprintf(outputFile, "UNKNOWN");
            return;
    }
}

void OutputEnumVkPeerMemoryFeatureFlagBitsKHR(FILE* outputFile, VkPeerMemoryFeatureFlagBitsKHR e)
{
    assert(outputFile != nullptr);
    OutputEnumVkPeerMemoryFeatureFlagBits(outputFile, e);
}

void OutputEnumVkMemoryAllocateFlagBitsKHR(FILE* outputFile, VkMemoryAllocateFlagBitsKHR e)
{
    assert(outputFile != nullptr);
    OutputEnumVkMemoryAllocateFlagBits(outputFile, e);
}

void OutputEnumVkExternalMemoryHandleTypeFlagBitsKHR(FILE* outputFile, VkExternalMemoryHandleTypeFlagBitsKHR e)
{
    assert(outputFile != nullptr);
    OutputEnumVkExternalMemoryHandleTypeFlagBits(outputFile, e);
}

void OutputEnumVkExternalMemoryFeatureFlagBitsKHR(FILE* outputFile, VkExternalMemoryFeatureFlagBitsKHR e)
{
    assert(outputFile != nullptr);
    OutputEnumVkExternalMemoryFeatureFlagBits(outputFile, e);
}

void OutputEnumVkExternalSemaphoreHandleTypeFlagBitsKHR(FILE* outputFile, VkExternalSemaphoreHandleTypeFlagBitsKHR e)
{
    assert(outputFile != nullptr);
    OutputEnumVkExternalSemaphoreHandleTypeFlagBits(outputFile, e);
}

void OutputEnumVkExternalSemaphoreFeatureFlagBitsKHR(FILE* outputFile, VkExternalSemaphoreFeatureFlagBitsKHR e)
{
    assert(outputFile != nullptr);
    OutputEnumVkExternalSemaphoreFeatureFlagBits(outputFile, e);
}

void OutputEnumVkSemaphoreImportFlagBitsKHR(FILE* outputFile, VkSemaphoreImportFlagBitsKHR e)
{
    assert(outputFile != nullptr);
    OutputEnumVkSemaphoreImportFlagBits(outputFile, e);
}

void OutputEnumVkDescriptorUpdateTemplateTypeKHR(FILE* outputFile, VkDescriptorUpdateTemplateTypeKHR e)
{
    assert(outputFile != nullptr);
    OutputEnumVkDescriptorUpdateTemplateType(outputFile, e);
}

void OutputEnumVkExternalFenceHandleTypeFlagBitsKHR(FILE* outputFile, VkExternalFenceHandleTypeFlagBitsKHR e)
{
    assert(outputFile != nullptr);
    OutputEnumVkExternalFenceHandleTypeFlagBits(outputFile, e);
}

void OutputEnumVkExternalFenceFeatureFlagBitsKHR(FILE* outputFile, VkExternalFenceFeatureFlagBitsKHR e)
{
    assert(outputFile != nullptr);
    OutputEnumVkExternalFenceFeatureFlagBits(outputFile, e);
}

void OutputEnumVkFenceImportFlagBitsKHR(FILE* outputFile, VkFenceImportFlagBitsKHR e)
{
    assert(outputFile != nullptr);
    OutputEnumVkFenceImportFlagBits(outputFile, e);
}

void OutputEnumVkPointClippingBehaviorKHR(FILE* outputFile, VkPointClippingBehaviorKHR e)
{
    assert(outputFile != nullptr);
    OutputEnumVkPointClippingBehavior(outputFile, e);
}

void OutputEnumVkTessellationDomainOriginKHR(FILE* outputFile, VkTessellationDomainOriginKHR e)
{
    assert(outputFile != nullptr);
    OutputEnumVkTessellationDomainOrigin(outputFile, e);
}

void OutputEnumVkSamplerYcbcrModelConversionKHR(FILE* outputFile, VkSamplerYcbcrModelConversionKHR e)
{
    assert(outputFile != nullptr);
    OutputEnumVkSamplerYcbcrModelConversion(outputFile, e);
}

void OutputEnumVkSamplerYcbcrRangeKHR(FILE* outputFile, VkSamplerYcbcrRangeKHR e)
{
    assert(outputFile != nullptr);
    OutputEnumVkSamplerYcbcrRange(outputFile, e);
}

void OutputEnumVkChromaLocationKHR(FILE* outputFile, VkChromaLocationKHR e)
{
    assert(outputFile != nullptr);
    OutputEnumVkChromaLocation(outputFile, e);
}

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)
