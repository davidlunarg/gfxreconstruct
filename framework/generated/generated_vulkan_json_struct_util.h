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

#ifndef  GFXRECON_GENERATED_VULKAN_JSON_STRUCT_UTIL_H
#define  GFXRECON_GENERATED_VULKAN_JSON_STRUCT_UTIL_H

#include "generated/generated_vulkan_json_enum_util.h"
#include "format/platform_types.h"
#include "util/defines.h"
#include "util/json_utils.h"
#include "vulkan/vulkan.h"
#include <inttypes.h>
#include <string>

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)

void StructureToStringJson(std::string* out, const Decoded_VkApplicationInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkInstanceCreateInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkAllocationCallbacks &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceFeatures &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkFormatProperties &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkExtent3D &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkImageFormatProperties &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceLimits &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceSparseProperties &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceProperties &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkQueueFamilyProperties &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkMemoryType &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkMemoryHeap &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceMemoryProperties &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDeviceQueueCreateInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDeviceCreateInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkExtensionProperties &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkLayerProperties &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkSubmitInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkMemoryAllocateInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkMappedMemoryRange &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkMemoryRequirements &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkSparseImageFormatProperties &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkSparseImageMemoryRequirements &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkSparseMemoryBind &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkSparseBufferMemoryBindInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkSparseImageOpaqueMemoryBindInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkImageSubresource &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkOffset3D &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkSparseImageMemoryBind &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkSparseImageMemoryBindInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkBindSparseInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkFenceCreateInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkSemaphoreCreateInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkEventCreateInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkQueryPoolCreateInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkBufferCreateInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkBufferViewCreateInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkImageCreateInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkSubresourceLayout &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkComponentMapping &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkImageSubresourceRange &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkImageViewCreateInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkShaderModuleCreateInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPipelineCacheCreateInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkSpecializationMapEntry &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkSpecializationInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPipelineShaderStageCreateInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkVertexInputBindingDescription &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkVertexInputAttributeDescription &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPipelineVertexInputStateCreateInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPipelineInputAssemblyStateCreateInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPipelineTessellationStateCreateInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkViewport &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkOffset2D &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkExtent2D &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkRect2D &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPipelineViewportStateCreateInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPipelineRasterizationStateCreateInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPipelineMultisampleStateCreateInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkStencilOpState &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPipelineDepthStencilStateCreateInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPipelineColorBlendAttachmentState &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPipelineColorBlendStateCreateInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPipelineDynamicStateCreateInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkGraphicsPipelineCreateInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkComputePipelineCreateInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPushConstantRange &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPipelineLayoutCreateInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkSamplerCreateInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDescriptorSetLayoutBinding &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDescriptorSetLayoutCreateInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDescriptorPoolSize &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDescriptorPoolCreateInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDescriptorSetAllocateInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDescriptorImageInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDescriptorBufferInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkWriteDescriptorSet &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkCopyDescriptorSet &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkFramebufferCreateInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkAttachmentDescription &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkAttachmentReference &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkSubpassDescription &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkSubpassDependency &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkRenderPassCreateInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkCommandPoolCreateInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkCommandBufferAllocateInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkCommandBufferInheritanceInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkCommandBufferBeginInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkBufferCopy &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkImageSubresourceLayers &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkImageCopy &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkImageBlit &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkBufferImageCopy &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkClearColorValue &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkClearDepthStencilValue &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkClearValue &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkClearAttachment &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkClearRect &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkImageResolve &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkMemoryBarrier &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkBufferMemoryBarrier &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkImageMemoryBarrier &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkRenderPassBeginInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDispatchIndirectCommand &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDrawIndexedIndirectCommand &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDrawIndirectCommand &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceSubgroupProperties &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkBindBufferMemoryInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkBindImageMemoryInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDevice16BitStorageFeatures &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkMemoryDedicatedRequirements &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkMemoryDedicatedAllocateInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkMemoryAllocateFlagsInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDeviceGroupRenderPassBeginInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDeviceGroupCommandBufferBeginInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDeviceGroupSubmitInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDeviceGroupBindSparseInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkBindBufferMemoryDeviceGroupInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkBindImageMemoryDeviceGroupInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceGroupProperties &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDeviceGroupDeviceCreateInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkBufferMemoryRequirementsInfo2 &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkImageMemoryRequirementsInfo2 &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkImageSparseMemoryRequirementsInfo2 &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkMemoryRequirements2 &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkSparseImageMemoryRequirements2 &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceFeatures2 &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceProperties2 &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkFormatProperties2 &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkImageFormatProperties2 &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceImageFormatInfo2 &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkQueueFamilyProperties2 &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceMemoryProperties2 &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkSparseImageFormatProperties2 &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceSparseImageFormatInfo2 &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDevicePointClippingProperties &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkInputAttachmentAspectReference &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkRenderPassInputAttachmentAspectCreateInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkImageViewUsageCreateInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPipelineTessellationDomainOriginStateCreateInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkRenderPassMultiviewCreateInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceMultiviewFeatures &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceMultiviewProperties &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceVariablePointersFeatures &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceProtectedMemoryFeatures &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceProtectedMemoryProperties &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDeviceQueueInfo2 &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkProtectedSubmitInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkSamplerYcbcrConversionCreateInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkSamplerYcbcrConversionInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkBindImagePlaneMemoryInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkImagePlaneMemoryRequirementsInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceSamplerYcbcrConversionFeatures &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkSamplerYcbcrConversionImageFormatProperties &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDescriptorUpdateTemplateEntry &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDescriptorUpdateTemplateCreateInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkExternalMemoryProperties &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceExternalImageFormatInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkExternalImageFormatProperties &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceExternalBufferInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkExternalBufferProperties &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceIDProperties &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkExternalMemoryImageCreateInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkExternalMemoryBufferCreateInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkExportMemoryAllocateInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceExternalFenceInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkExternalFenceProperties &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkExportFenceCreateInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkExportSemaphoreCreateInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceExternalSemaphoreInfo &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkExternalSemaphoreProperties &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceMaintenance3Properties &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDescriptorSetLayoutSupport &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceShaderDrawParametersFeatures &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkSurfaceCapabilitiesKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkSurfaceFormatKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkSwapchainCreateInfoKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPresentInfoKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkImageSwapchainCreateInfoKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkBindImageMemorySwapchainInfoKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkAcquireNextImageInfoKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDeviceGroupPresentCapabilitiesKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDeviceGroupPresentInfoKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDeviceGroupSwapchainCreateInfoKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDisplayPropertiesKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDisplayModeParametersKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDisplayModePropertiesKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDisplayModeCreateInfoKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDisplayPlaneCapabilitiesKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDisplayPlanePropertiesKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDisplaySurfaceCreateInfoKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDisplayPresentInfoKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkXlibSurfaceCreateInfoKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkXcbSurfaceCreateInfoKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkWaylandSurfaceCreateInfoKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkAndroidSurfaceCreateInfoKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkWin32SurfaceCreateInfoKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkImportMemoryWin32HandleInfoKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkExportMemoryWin32HandleInfoKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkMemoryWin32HandlePropertiesKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkMemoryGetWin32HandleInfoKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkImportMemoryFdInfoKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkMemoryFdPropertiesKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkMemoryGetFdInfoKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkWin32KeyedMutexAcquireReleaseInfoKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkImportSemaphoreWin32HandleInfoKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkExportSemaphoreWin32HandleInfoKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkD3D12FenceSubmitInfoKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkSemaphoreGetWin32HandleInfoKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkImportSemaphoreFdInfoKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkSemaphoreGetFdInfoKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDevicePushDescriptorPropertiesKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceShaderFloat16Int8FeaturesKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkRectLayerKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPresentRegionKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPresentRegionsKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceImagelessFramebufferFeaturesKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkFramebufferAttachmentImageInfoKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkFramebufferAttachmentsCreateInfoKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkRenderPassAttachmentBeginInfoKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkAttachmentDescription2KHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkAttachmentReference2KHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkSubpassDescription2KHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkSubpassDependency2KHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkRenderPassCreateInfo2KHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkSubpassBeginInfoKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkSubpassEndInfoKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkSharedPresentSurfaceCapabilitiesKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkImportFenceWin32HandleInfoKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkExportFenceWin32HandleInfoKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkFenceGetWin32HandleInfoKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkImportFenceFdInfoKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkFenceGetFdInfoKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceSurfaceInfo2KHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkSurfaceCapabilities2KHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkSurfaceFormat2KHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDisplayProperties2KHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDisplayPlaneProperties2KHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDisplayModeProperties2KHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDisplayPlaneInfo2KHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDisplayPlaneCapabilities2KHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkImageFormatListCreateInfoKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceShaderSubgroupExtendedTypesFeaturesKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDevice8BitStorageFeaturesKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceShaderAtomicInt64FeaturesKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceShaderClockFeaturesKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkConformanceVersionKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceDriverPropertiesKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceFloatControlsPropertiesKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkSubpassDescriptionDepthStencilResolveKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceDepthStencilResolvePropertiesKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceTimelineSemaphoreFeaturesKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceTimelineSemaphorePropertiesKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkSemaphoreTypeCreateInfoKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkTimelineSemaphoreSubmitInfoKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkSemaphoreWaitInfoKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkSemaphoreSignalInfoKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkSurfaceProtectedCapabilitiesKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPipelineInfoKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPipelineExecutablePropertiesKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPipelineExecutableInfoKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPipelineExecutableStatisticValueKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPipelineExecutableStatisticKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPipelineExecutableInternalRepresentationKHR &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDebugReportCallbackCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPipelineRasterizationStateRasterizationOrderAMD &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDebugMarkerObjectNameInfoEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDebugMarkerObjectTagInfoEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDebugMarkerMarkerInfoEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDedicatedAllocationImageCreateInfoNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDedicatedAllocationBufferCreateInfoNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDedicatedAllocationMemoryAllocateInfoNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceTransformFeedbackFeaturesEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceTransformFeedbackPropertiesEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPipelineRasterizationStateStreamCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkImageViewHandleInfoNVX &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkTextureLODGatherFormatPropertiesAMD &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkShaderResourceUsageAMD &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkShaderStatisticsInfoAMD &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkStreamDescriptorSurfaceCreateInfoGGP &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceCornerSampledImageFeaturesNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkExternalImageFormatPropertiesNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkExternalMemoryImageCreateInfoNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkExportMemoryAllocateInfoNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkImportMemoryWin32HandleInfoNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkExportMemoryWin32HandleInfoNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkWin32KeyedMutexAcquireReleaseInfoNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkValidationFlagsEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkViSurfaceCreateInfoNN &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkImageViewASTCDecodeModeEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceASTCDecodeFeaturesEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkConditionalRenderingBeginInfoEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceConditionalRenderingFeaturesEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkCommandBufferInheritanceConditionalRenderingInfoEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDeviceGeneratedCommandsFeaturesNVX &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDeviceGeneratedCommandsLimitsNVX &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkIndirectCommandsTokenNVX &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkIndirectCommandsLayoutTokenNVX &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkIndirectCommandsLayoutCreateInfoNVX &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkCmdProcessCommandsInfoNVX &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkCmdReserveSpaceForCommandsInfoNVX &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkObjectTableCreateInfoNVX &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkObjectTableEntryNVX &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkObjectTablePipelineEntryNVX &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkObjectTableDescriptorSetEntryNVX &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkObjectTableVertexBufferEntryNVX &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkObjectTableIndexBufferEntryNVX &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkObjectTablePushConstantEntryNVX &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkViewportWScalingNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPipelineViewportWScalingStateCreateInfoNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkSurfaceCapabilities2EXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDisplayPowerInfoEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDeviceEventInfoEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDisplayEventInfoEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkSwapchainCounterCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkRefreshCycleDurationGOOGLE &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPastPresentationTimingGOOGLE &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPresentTimeGOOGLE &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPresentTimesInfoGOOGLE &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkViewportSwizzleNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPipelineViewportSwizzleStateCreateInfoNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceDiscardRectanglePropertiesEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPipelineDiscardRectangleStateCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceConservativeRasterizationPropertiesEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPipelineRasterizationConservativeStateCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceDepthClipEnableFeaturesEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPipelineRasterizationDepthClipStateCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkXYColorEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkHdrMetadataEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkIOSSurfaceCreateInfoMVK &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkMacOSSurfaceCreateInfoMVK &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDebugUtilsObjectNameInfoEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDebugUtilsObjectTagInfoEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDebugUtilsLabelEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDebugUtilsMessengerCallbackDataEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDebugUtilsMessengerCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkAndroidHardwareBufferUsageANDROID &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkAndroidHardwareBufferPropertiesANDROID &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkAndroidHardwareBufferFormatPropertiesANDROID &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkImportAndroidHardwareBufferInfoANDROID &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkMemoryGetAndroidHardwareBufferInfoANDROID &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkExternalFormatANDROID &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkSamplerReductionModeCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceInlineUniformBlockFeaturesEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceInlineUniformBlockPropertiesEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkWriteDescriptorSetInlineUniformBlockEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDescriptorPoolInlineUniformBlockCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkSampleLocationEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkSampleLocationsInfoEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkAttachmentSampleLocationsEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkSubpassSampleLocationsEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkRenderPassSampleLocationsBeginInfoEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPipelineSampleLocationsStateCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceSampleLocationsPropertiesEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkMultisamplePropertiesEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPipelineColorBlendAdvancedStateCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPipelineCoverageToColorStateCreateInfoNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPipelineCoverageModulationStateCreateInfoNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceShaderSMBuiltinsPropertiesNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceShaderSMBuiltinsFeaturesNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDrmFormatModifierPropertiesEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDrmFormatModifierPropertiesListEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceImageDrmFormatModifierInfoEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkImageDrmFormatModifierListCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkImageDrmFormatModifierExplicitCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkImageDrmFormatModifierPropertiesEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkValidationCacheCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkShaderModuleValidationCacheCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDescriptorSetLayoutBindingFlagsCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceDescriptorIndexingFeaturesEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceDescriptorIndexingPropertiesEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDescriptorSetVariableDescriptorCountAllocateInfoEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDescriptorSetVariableDescriptorCountLayoutSupportEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkShadingRatePaletteNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPipelineViewportShadingRateImageStateCreateInfoNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceShadingRateImageFeaturesNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceShadingRateImagePropertiesNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkCoarseSampleLocationNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkCoarseSampleOrderCustomNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkRayTracingShaderGroupCreateInfoNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkRayTracingPipelineCreateInfoNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkGeometryTrianglesNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkGeometryAABBNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkGeometryDataNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkGeometryNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkAccelerationStructureInfoNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkAccelerationStructureCreateInfoNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkBindAccelerationStructureMemoryInfoNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkWriteDescriptorSetAccelerationStructureNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkAccelerationStructureMemoryRequirementsInfoNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceRayTracingPropertiesNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPipelineRepresentativeFragmentTestStateCreateInfoNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceImageViewImageFormatInfoEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkFilterCubicImageViewImageFormatPropertiesEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDeviceQueueGlobalPriorityCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkImportMemoryHostPointerInfoEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkMemoryHostPointerPropertiesEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceExternalMemoryHostPropertiesEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPipelineCompilerControlCreateInfoAMD &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkCalibratedTimestampInfoEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceShaderCorePropertiesAMD &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDeviceMemoryOverallocationCreateInfoAMD &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkVertexInputBindingDivisorDescriptionEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPipelineVertexInputDivisorStateCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPresentFrameTokenGGP &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPipelineCreationFeedbackEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPipelineCreationFeedbackCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceComputeShaderDerivativesFeaturesNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceMeshShaderFeaturesNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceMeshShaderPropertiesNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDrawMeshTasksIndirectCommandNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceShaderImageFootprintFeaturesNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPipelineViewportExclusiveScissorStateCreateInfoNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceExclusiveScissorFeaturesNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkQueueFamilyCheckpointPropertiesNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkCheckpointDataNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPerformanceValueDataINTEL &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPerformanceValueINTEL &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkInitializePerformanceApiInfoINTEL &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkQueryPoolCreateInfoINTEL &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPerformanceMarkerInfoINTEL &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPerformanceStreamMarkerInfoINTEL &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPerformanceOverrideInfoINTEL &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPerformanceConfigurationAcquireInfoINTEL &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDevicePCIBusInfoPropertiesEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkDisplayNativeHdrSurfaceCapabilitiesAMD &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkSwapchainDisplayNativeHdrCreateInfoAMD &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkImagePipeSurfaceCreateInfoFUCHSIA &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkMetalSurfaceCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceFragmentDensityMapFeaturesEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceFragmentDensityMapPropertiesEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkRenderPassFragmentDensityMapCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceScalarBlockLayoutFeaturesEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceSubgroupSizeControlFeaturesEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceSubgroupSizeControlPropertiesEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceShaderCoreProperties2AMD &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceCoherentMemoryFeaturesAMD &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceMemoryBudgetPropertiesEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceMemoryPriorityFeaturesEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkMemoryPriorityAllocateInfoEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceBufferDeviceAddressFeaturesEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkBufferDeviceAddressInfoEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkBufferDeviceAddressCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkImageStencilUsageCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkValidationFeaturesEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkCooperativeMatrixPropertiesNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceCooperativeMatrixFeaturesNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceCooperativeMatrixPropertiesNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceCoverageReductionModeFeaturesNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPipelineCoverageReductionStateCreateInfoNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkFramebufferMixedSamplesCombinationNV &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceYcbcrImageArraysFeaturesEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkSurfaceFullScreenExclusiveInfoEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkSurfaceCapabilitiesFullScreenExclusiveEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkSurfaceFullScreenExclusiveWin32InfoEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkHeadlessSurfaceCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceLineRasterizationFeaturesEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceLineRasterizationPropertiesEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPipelineRasterizationLineStateCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceHostQueryResetFeaturesEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceIndexTypeUint8FeaturesEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT &pstruct_in, int indent, uint64_t base_addr);
void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT &pstruct_in, int indent, uint64_t base_addr);

void StructureToStringJson(std::string* out, const Decoded_VkApplicationInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkApplicationInfo *pstruct = (const VkApplicationInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: const char* pApplicationName
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"char\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pApplicationName\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pApplicationName.GetAddress()); // KGJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t applicationVersion
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"applicationVersion\",\n";
    *out += "\n"; // GDS

    // struct member: const char* pEngineName
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"char\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pEngineName\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pEngineName.GetAddress()); // KGJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t engineVersion
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"engineVersion\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t apiVersion
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"apiVersion\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkInstanceCreateInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkInstanceCreateInfo *pstruct = (const VkInstanceCreateInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkInstanceCreateFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkInstanceCreateFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: const VkApplicationInfo* pApplicationInfo
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkApplicationInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pApplicationInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pApplicationInfo->GetAddress()); // JHJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t enabledLayerCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"enabledLayerCount\",\n";
    *out += "\n"; // GDS

    // struct member: const char* const* ppEnabledLayerNames
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"char\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"ppEnabledLayerNames\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.ppEnabledLayerNames.GetAddress()); // WPT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t enabledExtensionCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"enabledExtensionCount\",\n";
    *out += "\n"; // GDS

    // struct member: const char* const* ppEnabledExtensionNames
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"char\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"ppEnabledExtensionNames\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.ppEnabledExtensionNames.GetAddress()); // WPT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkAllocationCallbacks &pstruct_in, int indent, uint64_t base_addr)
{
    const VkAllocationCallbacks *pstruct = (const VkAllocationCallbacks *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: void* pUserData
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pUserData\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pUserData); // PWR
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: PFN_vkAllocationFunction pfnAllocation
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"PFN_vkAllocationFunction\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pfnAllocation\",\n";
    *out += "\n"; // GDS

    // struct member: PFN_vkReallocationFunction pfnReallocation
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"PFN_vkReallocationFunction\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pfnReallocation\",\n";
    *out += "\n"; // GDS

    // struct member: PFN_vkFreeFunction pfnFree
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"PFN_vkFreeFunction\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pfnFree\",\n";
    *out += "\n"; // GDS

    // struct member: PFN_vkInternalAllocationNotification pfnInternalAllocation
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"PFN_vkInternalAllocationNotification\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pfnInternalAllocation\",\n";
    *out += "\n"; // GDS

    // struct member: PFN_vkInternalFreeNotification pfnInternalFree
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"PFN_vkInternalFreeNotification\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pfnInternalFree\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceFeatures &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceFeatures *pstruct = (const VkPhysicalDeviceFeatures *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkBool32 robustBufferAccess
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"robustBufferAccess\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 fullDrawIndexUint32
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"fullDrawIndexUint32\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 imageCubeArray
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"imageCubeArray\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 independentBlend
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"independentBlend\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 geometryShader
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"geometryShader\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 tessellationShader
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"tessellationShader\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 sampleRateShading
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sampleRateShading\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 dualSrcBlend
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dualSrcBlend\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 logicOp
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"logicOp\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 multiDrawIndirect
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"multiDrawIndirect\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 drawIndirectFirstInstance
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"drawIndirectFirstInstance\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 depthClamp
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"depthClamp\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 depthBiasClamp
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"depthBiasClamp\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 fillModeNonSolid
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"fillModeNonSolid\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 depthBounds
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"depthBounds\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 wideLines
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"wideLines\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 largePoints
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"largePoints\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 alphaToOne
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"alphaToOne\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 multiViewport
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"multiViewport\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 samplerAnisotropy
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"samplerAnisotropy\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 textureCompressionETC2
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"textureCompressionETC2\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 textureCompressionASTC_LDR
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"textureCompressionASTC_LDR\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 textureCompressionBC
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"textureCompressionBC\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 occlusionQueryPrecise
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"occlusionQueryPrecise\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 pipelineStatisticsQuery
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pipelineStatisticsQuery\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 vertexPipelineStoresAndAtomics
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"vertexPipelineStoresAndAtomics\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 fragmentStoresAndAtomics
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"fragmentStoresAndAtomics\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderTessellationAndGeometryPointSize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderTessellationAndGeometryPointSize\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderImageGatherExtended
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderImageGatherExtended\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderStorageImageExtendedFormats
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderStorageImageExtendedFormats\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderStorageImageMultisample
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderStorageImageMultisample\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderStorageImageReadWithoutFormat
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderStorageImageReadWithoutFormat\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderStorageImageWriteWithoutFormat
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderStorageImageWriteWithoutFormat\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderUniformBufferArrayDynamicIndexing
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderUniformBufferArrayDynamicIndexing\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderSampledImageArrayDynamicIndexing
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderSampledImageArrayDynamicIndexing\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderStorageBufferArrayDynamicIndexing
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderStorageBufferArrayDynamicIndexing\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderStorageImageArrayDynamicIndexing
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderStorageImageArrayDynamicIndexing\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderClipDistance
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderClipDistance\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderCullDistance
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderCullDistance\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderFloat64
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderFloat64\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderInt64
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderInt64\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderInt16
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderInt16\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderResourceResidency
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderResourceResidency\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderResourceMinLod
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderResourceMinLod\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 sparseBinding
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sparseBinding\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 sparseResidencyBuffer
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sparseResidencyBuffer\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 sparseResidencyImage2D
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sparseResidencyImage2D\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 sparseResidencyImage3D
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sparseResidencyImage3D\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 sparseResidency2Samples
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sparseResidency2Samples\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 sparseResidency4Samples
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sparseResidency4Samples\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 sparseResidency8Samples
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sparseResidency8Samples\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 sparseResidency16Samples
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sparseResidency16Samples\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 sparseResidencyAliased
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sparseResidencyAliased\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 variableMultisampleRate
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"variableMultisampleRate\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 inheritedQueries
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"inheritedQueries\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkFormatProperties &pstruct_in, int indent, uint64_t base_addr)
{
    const VkFormatProperties *pstruct = (const VkFormatProperties *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkFormatFeatureFlags linearTilingFeatures
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFormatFeatureFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"linearTilingFeatures\",\n";
    *out += "\n"; // GDS

    // struct member: VkFormatFeatureFlags optimalTilingFeatures
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFormatFeatureFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"optimalTilingFeatures\",\n";
    *out += "\n"; // GDS

    // struct member: VkFormatFeatureFlags bufferFeatures
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFormatFeatureFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"bufferFeatures\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkExtent3D &pstruct_in, int indent, uint64_t base_addr)
{
    const VkExtent3D *pstruct = (const VkExtent3D *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: uint32_t width
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"width\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t height
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"height\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t depth
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"depth\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkImageFormatProperties &pstruct_in, int indent, uint64_t base_addr)
{
    const VkImageFormatProperties *pstruct = (const VkImageFormatProperties *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkExtent3D maxExtent
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExtent3D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxExtent\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxMipLevels
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxMipLevels\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxArrayLayers
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxArrayLayers\",\n";
    *out += "\n"; // GDS

    // struct member: VkSampleCountFlags sampleCounts
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSampleCountFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sampleCounts\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize maxResourceSize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxResourceSize\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceLimits &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceLimits *pstruct = (const VkPhysicalDeviceLimits *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: uint32_t maxImageDimension1D
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxImageDimension1D\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxImageDimension2D
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxImageDimension2D\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxImageDimension3D
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxImageDimension3D\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxImageDimensionCube
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxImageDimensionCube\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxImageArrayLayers
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxImageArrayLayers\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxTexelBufferElements
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxTexelBufferElements\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxUniformBufferRange
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxUniformBufferRange\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxStorageBufferRange
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxStorageBufferRange\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxPushConstantsSize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxPushConstantsSize\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxMemoryAllocationCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxMemoryAllocationCount\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxSamplerAllocationCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxSamplerAllocationCount\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize bufferImageGranularity
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"bufferImageGranularity\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize sparseAddressSpaceSize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sparseAddressSpaceSize\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxBoundDescriptorSets
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxBoundDescriptorSets\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxPerStageDescriptorSamplers
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxPerStageDescriptorSamplers\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxPerStageDescriptorUniformBuffers
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxPerStageDescriptorUniformBuffers\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxPerStageDescriptorStorageBuffers
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxPerStageDescriptorStorageBuffers\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxPerStageDescriptorSampledImages
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxPerStageDescriptorSampledImages\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxPerStageDescriptorStorageImages
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxPerStageDescriptorStorageImages\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxPerStageDescriptorInputAttachments
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxPerStageDescriptorInputAttachments\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxPerStageResources
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxPerStageResources\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxDescriptorSetSamplers
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxDescriptorSetSamplers\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxDescriptorSetUniformBuffers
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxDescriptorSetUniformBuffers\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxDescriptorSetUniformBuffersDynamic
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxDescriptorSetUniformBuffersDynamic\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxDescriptorSetStorageBuffers
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxDescriptorSetStorageBuffers\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxDescriptorSetStorageBuffersDynamic
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxDescriptorSetStorageBuffersDynamic\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxDescriptorSetSampledImages
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxDescriptorSetSampledImages\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxDescriptorSetStorageImages
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxDescriptorSetStorageImages\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxDescriptorSetInputAttachments
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxDescriptorSetInputAttachments\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxVertexInputAttributes
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxVertexInputAttributes\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxVertexInputBindings
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxVertexInputBindings\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxVertexInputAttributeOffset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxVertexInputAttributeOffset\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxVertexInputBindingStride
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxVertexInputBindingStride\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxVertexOutputComponents
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxVertexOutputComponents\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxTessellationGenerationLevel
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxTessellationGenerationLevel\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxTessellationPatchSize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxTessellationPatchSize\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxTessellationControlPerVertexInputComponents
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxTessellationControlPerVertexInputComponents\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxTessellationControlPerVertexOutputComponents
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxTessellationControlPerVertexOutputComponents\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxTessellationControlPerPatchOutputComponents
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxTessellationControlPerPatchOutputComponents\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxTessellationControlTotalOutputComponents
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxTessellationControlTotalOutputComponents\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxTessellationEvaluationInputComponents
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxTessellationEvaluationInputComponents\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxTessellationEvaluationOutputComponents
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxTessellationEvaluationOutputComponents\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxGeometryShaderInvocations
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxGeometryShaderInvocations\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxGeometryInputComponents
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxGeometryInputComponents\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxGeometryOutputComponents
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxGeometryOutputComponents\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxGeometryOutputVertices
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxGeometryOutputVertices\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxGeometryTotalOutputComponents
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxGeometryTotalOutputComponents\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxFragmentInputComponents
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxFragmentInputComponents\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxFragmentOutputAttachments
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxFragmentOutputAttachments\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxFragmentDualSrcAttachments
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxFragmentDualSrcAttachments\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxFragmentCombinedOutputResources
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxFragmentCombinedOutputResources\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxComputeSharedMemorySize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxComputeSharedMemorySize\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxComputeWorkGroupCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxComputeWorkGroupCount\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, base_addr + offsetof(VkPhysicalDeviceLimits, maxComputeWorkGroupCount)); // IYY
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxComputeWorkGroupInvocations
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxComputeWorkGroupInvocations\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxComputeWorkGroupSize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxComputeWorkGroupSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, base_addr + offsetof(VkPhysicalDeviceLimits, maxComputeWorkGroupSize)); // IYY
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t subPixelPrecisionBits
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"subPixelPrecisionBits\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t subTexelPrecisionBits
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"subTexelPrecisionBits\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t mipmapPrecisionBits
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"mipmapPrecisionBits\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxDrawIndexedIndexValue
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxDrawIndexedIndexValue\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxDrawIndirectCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxDrawIndirectCount\",\n";
    *out += "\n"; // GDS

    // struct member: float maxSamplerLodBias
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxSamplerLodBias\",\n";
    *out += "\n"; // GDS

    // struct member: float maxSamplerAnisotropy
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxSamplerAnisotropy\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxViewports
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxViewports\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxViewportDimensions
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxViewportDimensions\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, base_addr + offsetof(VkPhysicalDeviceLimits, maxViewportDimensions)); // IYY
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: float viewportBoundsRange
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"viewportBoundsRange\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, base_addr + offsetof(VkPhysicalDeviceLimits, viewportBoundsRange)); // IYY
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t viewportSubPixelBits
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"viewportSubPixelBits\",\n";
    *out += "\n"; // GDS

    // struct member: size_t minMemoryMapAlignment
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"size_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"minMemoryMapAlignment\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize minTexelBufferOffsetAlignment
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"minTexelBufferOffsetAlignment\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize minUniformBufferOffsetAlignment
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"minUniformBufferOffsetAlignment\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize minStorageBufferOffsetAlignment
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"minStorageBufferOffsetAlignment\",\n";
    *out += "\n"; // GDS

    // struct member: int32_t minTexelOffset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"int32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"minTexelOffset\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxTexelOffset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxTexelOffset\",\n";
    *out += "\n"; // GDS

    // struct member: int32_t minTexelGatherOffset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"int32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"minTexelGatherOffset\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxTexelGatherOffset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxTexelGatherOffset\",\n";
    *out += "\n"; // GDS

    // struct member: float minInterpolationOffset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"minInterpolationOffset\",\n";
    *out += "\n"; // GDS

    // struct member: float maxInterpolationOffset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxInterpolationOffset\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t subPixelInterpolationOffsetBits
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"subPixelInterpolationOffsetBits\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxFramebufferWidth
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxFramebufferWidth\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxFramebufferHeight
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxFramebufferHeight\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxFramebufferLayers
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxFramebufferLayers\",\n";
    *out += "\n"; // GDS

    // struct member: VkSampleCountFlags framebufferColorSampleCounts
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSampleCountFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"framebufferColorSampleCounts\",\n";
    *out += "\n"; // GDS

    // struct member: VkSampleCountFlags framebufferDepthSampleCounts
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSampleCountFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"framebufferDepthSampleCounts\",\n";
    *out += "\n"; // GDS

    // struct member: VkSampleCountFlags framebufferStencilSampleCounts
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSampleCountFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"framebufferStencilSampleCounts\",\n";
    *out += "\n"; // GDS

    // struct member: VkSampleCountFlags framebufferNoAttachmentsSampleCounts
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSampleCountFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"framebufferNoAttachmentsSampleCounts\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxColorAttachments
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxColorAttachments\",\n";
    *out += "\n"; // GDS

    // struct member: VkSampleCountFlags sampledImageColorSampleCounts
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSampleCountFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sampledImageColorSampleCounts\",\n";
    *out += "\n"; // GDS

    // struct member: VkSampleCountFlags sampledImageIntegerSampleCounts
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSampleCountFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sampledImageIntegerSampleCounts\",\n";
    *out += "\n"; // GDS

    // struct member: VkSampleCountFlags sampledImageDepthSampleCounts
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSampleCountFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sampledImageDepthSampleCounts\",\n";
    *out += "\n"; // GDS

    // struct member: VkSampleCountFlags sampledImageStencilSampleCounts
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSampleCountFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sampledImageStencilSampleCounts\",\n";
    *out += "\n"; // GDS

    // struct member: VkSampleCountFlags storageImageSampleCounts
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSampleCountFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"storageImageSampleCounts\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxSampleMaskWords
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxSampleMaskWords\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 timestampComputeAndGraphics
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"timestampComputeAndGraphics\",\n";
    *out += "\n"; // GDS

    // struct member: float timestampPeriod
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"timestampPeriod\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxClipDistances
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxClipDistances\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxCullDistances
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxCullDistances\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxCombinedClipAndCullDistances
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxCombinedClipAndCullDistances\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t discreteQueuePriorities
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"discreteQueuePriorities\",\n";
    *out += "\n"; // GDS

    // struct member: float pointSizeRange
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pointSizeRange\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, base_addr + offsetof(VkPhysicalDeviceLimits, pointSizeRange)); // IYY
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: float lineWidthRange
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"lineWidthRange\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, base_addr + offsetof(VkPhysicalDeviceLimits, lineWidthRange)); // IYY
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: float pointSizeGranularity
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pointSizeGranularity\",\n";
    *out += "\n"; // GDS

    // struct member: float lineWidthGranularity
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"lineWidthGranularity\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 strictLines
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"strictLines\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 standardSampleLocations
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"standardSampleLocations\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize optimalBufferCopyOffsetAlignment
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"optimalBufferCopyOffsetAlignment\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize optimalBufferCopyRowPitchAlignment
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"optimalBufferCopyRowPitchAlignment\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize nonCoherentAtomSize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"nonCoherentAtomSize\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceSparseProperties &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceSparseProperties *pstruct = (const VkPhysicalDeviceSparseProperties *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkBool32 residencyStandard2DBlockShape
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"residencyStandard2DBlockShape\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 residencyStandard2DMultisampleBlockShape
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"residencyStandard2DMultisampleBlockShape\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 residencyStandard3DBlockShape
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"residencyStandard3DBlockShape\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 residencyAlignedMipSize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"residencyAlignedMipSize\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 residencyNonResidentStrict
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"residencyNonResidentStrict\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceProperties &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceProperties *pstruct = (const VkPhysicalDeviceProperties *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: uint32_t apiVersion
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"apiVersion\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t driverVersion
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"driverVersion\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t vendorID
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"vendorID\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t deviceID
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"deviceID\",\n";
    *out += "\n"; // GDS

    // struct member: VkPhysicalDeviceType deviceType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDeviceType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"deviceType\",\n";
    *out += "\n"; // GDS

    // struct member: char deviceName
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"char\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"deviceName\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, base_addr + offsetof(VkPhysicalDeviceProperties, deviceName)); // IYY
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint8_t pipelineCacheUUID
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint8_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pipelineCacheUUID\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, base_addr + offsetof(VkPhysicalDeviceProperties, pipelineCacheUUID)); // IYY
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkPhysicalDeviceLimits limits
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDeviceLimits\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"limits\",\n";
    *out += "\n"; // GDS

    // struct member: VkPhysicalDeviceSparseProperties sparseProperties
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDeviceSparseProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sparseProperties\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkQueueFamilyProperties &pstruct_in, int indent, uint64_t base_addr)
{
    const VkQueueFamilyProperties *pstruct = (const VkQueueFamilyProperties *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkQueueFlags queueFlags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkQueueFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queueFlags\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t queueCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queueCount\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t timestampValidBits
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"timestampValidBits\",\n";
    *out += "\n"; // GDS

    // struct member: VkExtent3D minImageTransferGranularity
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExtent3D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"minImageTransferGranularity\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkMemoryType &pstruct_in, int indent, uint64_t base_addr)
{
    const VkMemoryType *pstruct = (const VkMemoryType *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkMemoryPropertyFlags propertyFlags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkMemoryPropertyFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"propertyFlags\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t heapIndex
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"heapIndex\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkMemoryHeap &pstruct_in, int indent, uint64_t base_addr)
{
    const VkMemoryHeap *pstruct = (const VkMemoryHeap *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkDeviceSize size
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"size\",\n";
    *out += "\n"; // GDS

    // struct member: VkMemoryHeapFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkMemoryHeapFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceMemoryProperties &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceMemoryProperties *pstruct = (const VkPhysicalDeviceMemoryProperties *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: uint32_t memoryTypeCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"memoryTypeCount\",\n";
    *out += "\n"; // GDS

    // struct member: VkMemoryType memoryTypes
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkMemoryType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"memoryTypes\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, base_addr + offsetof(VkPhysicalDeviceMemoryProperties, memoryTypes)); // IYY
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t memoryHeapCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"memoryHeapCount\",\n";
    *out += "\n"; // GDS

    // struct member: VkMemoryHeap memoryHeaps
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkMemoryHeap\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"memoryHeaps\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, base_addr + offsetof(VkPhysicalDeviceMemoryProperties, memoryHeaps)); // IYY
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDeviceQueueCreateInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDeviceQueueCreateInfo *pstruct = (const VkDeviceQueueCreateInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceQueueCreateFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceQueueCreateFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t queueFamilyIndex
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queueFamilyIndex\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t queueCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queueCount\",\n";
    *out += "\n"; // GDS

    // struct member: const float* pQueuePriorities
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pQueuePriorities\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pQueuePriorities.GetAddress()); // WPT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDeviceCreateInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDeviceCreateInfo *pstruct = (const VkDeviceCreateInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceCreateFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceCreateFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t queueCreateInfoCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queueCreateInfoCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkDeviceQueueCreateInfo* pQueueCreateInfos
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceQueueCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pQueueCreateInfos\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pQueueCreateInfos->GetAddress()); // WUT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t enabledLayerCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"enabledLayerCount\",\n";
    *out += "\n"; // GDS

    // struct member: const char* const* ppEnabledLayerNames
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"char\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"ppEnabledLayerNames\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.ppEnabledLayerNames.GetAddress()); // WPT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t enabledExtensionCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"enabledExtensionCount\",\n";
    *out += "\n"; // GDS

    // struct member: const char* const* ppEnabledExtensionNames
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"char\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"ppEnabledExtensionNames\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.ppEnabledExtensionNames.GetAddress()); // WPT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: const VkPhysicalDeviceFeatures* pEnabledFeatures
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDeviceFeatures\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pEnabledFeatures\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pEnabledFeatures->GetAddress()); // JHJ
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkExtensionProperties &pstruct_in, int indent, uint64_t base_addr)
{
    const VkExtensionProperties *pstruct = (const VkExtensionProperties *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: char extensionName
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"char\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"extensionName\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, base_addr + offsetof(VkExtensionProperties, extensionName)); // IYY
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t specVersion
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"specVersion\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkLayerProperties &pstruct_in, int indent, uint64_t base_addr)
{
    const VkLayerProperties *pstruct = (const VkLayerProperties *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: char layerName
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"char\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"layerName\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, base_addr + offsetof(VkLayerProperties, layerName)); // IYY
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t specVersion
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"specVersion\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t implementationVersion
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"implementationVersion\",\n";
    *out += "\n"; // GDS

    // struct member: char description
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"char\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"description\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, base_addr + offsetof(VkLayerProperties, description)); // IYY
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkSubmitInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkSubmitInfo *pstruct = (const VkSubmitInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t waitSemaphoreCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"waitSemaphoreCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkSemaphore* pWaitSemaphores
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSemaphore\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pWaitSemaphores\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pWaitSemaphores.GetAddress()); // WPT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: const VkPipelineStageFlags* pWaitDstStageMask
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineStageFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pWaitDstStageMask\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pWaitDstStageMask.GetAddress()); // WPT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t commandBufferCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBufferCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkCommandBuffer* pCommandBuffers
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCommandBuffers\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pCommandBuffers.GetAddress()); // WPT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t signalSemaphoreCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"signalSemaphoreCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkSemaphore* pSignalSemaphores
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSemaphore\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSignalSemaphores\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pSignalSemaphores.GetAddress()); // WPT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkMemoryAllocateInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkMemoryAllocateInfo *pstruct = (const VkMemoryAllocateInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize allocationSize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"allocationSize\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t memoryTypeIndex
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"memoryTypeIndex\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkMappedMemoryRange &pstruct_in, int indent, uint64_t base_addr)
{
    const VkMappedMemoryRange *pstruct = (const VkMappedMemoryRange *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceMemory memory
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceMemory\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"memory\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize offset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"offset\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize size
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"size\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkMemoryRequirements &pstruct_in, int indent, uint64_t base_addr)
{
    const VkMemoryRequirements *pstruct = (const VkMemoryRequirements *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkDeviceSize size
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"size\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize alignment
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"alignment\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t memoryTypeBits
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"memoryTypeBits\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkSparseImageFormatProperties &pstruct_in, int indent, uint64_t base_addr)
{
    const VkSparseImageFormatProperties *pstruct = (const VkSparseImageFormatProperties *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkImageAspectFlags aspectMask
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageAspectFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"aspectMask\",\n";
    *out += "\n"; // GDS

    // struct member: VkExtent3D imageGranularity
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExtent3D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"imageGranularity\",\n";
    *out += "\n"; // GDS

    // struct member: VkSparseImageFormatFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSparseImageFormatFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkSparseImageMemoryRequirements &pstruct_in, int indent, uint64_t base_addr)
{
    const VkSparseImageMemoryRequirements *pstruct = (const VkSparseImageMemoryRequirements *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkSparseImageFormatProperties formatProperties
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSparseImageFormatProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"formatProperties\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t imageMipTailFirstLod
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"imageMipTailFirstLod\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize imageMipTailSize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"imageMipTailSize\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize imageMipTailOffset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"imageMipTailOffset\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize imageMipTailStride
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"imageMipTailStride\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkSparseMemoryBind &pstruct_in, int indent, uint64_t base_addr)
{
    const VkSparseMemoryBind *pstruct = (const VkSparseMemoryBind *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkDeviceSize resourceOffset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"resourceOffset\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize size
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"size\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceMemory memory
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceMemory\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"memory\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize memoryOffset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"memoryOffset\",\n";
    *out += "\n"; // GDS

    // struct member: VkSparseMemoryBindFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSparseMemoryBindFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkSparseBufferMemoryBindInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkSparseBufferMemoryBindInfo *pstruct = (const VkSparseBufferMemoryBindInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkBuffer buffer
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"buffer\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t bindCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"bindCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkSparseMemoryBind* pBinds
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSparseMemoryBind\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pBinds\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pBinds->GetAddress()); // WUT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkSparseImageOpaqueMemoryBindInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkSparseImageOpaqueMemoryBindInfo *pstruct = (const VkSparseImageOpaqueMemoryBindInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkImage image
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImage\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"image\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t bindCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"bindCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkSparseMemoryBind* pBinds
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSparseMemoryBind\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pBinds\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pBinds->GetAddress()); // WUT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkImageSubresource &pstruct_in, int indent, uint64_t base_addr)
{
    const VkImageSubresource *pstruct = (const VkImageSubresource *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkImageAspectFlags aspectMask
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageAspectFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"aspectMask\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t mipLevel
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"mipLevel\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t arrayLayer
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"arrayLayer\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkOffset3D &pstruct_in, int indent, uint64_t base_addr)
{
    const VkOffset3D *pstruct = (const VkOffset3D *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: int32_t x
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"int32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"x\",\n";
    *out += "\n"; // GDS

    // struct member: int32_t y
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"int32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"y\",\n";
    *out += "\n"; // GDS

    // struct member: int32_t z
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"int32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"z\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkSparseImageMemoryBind &pstruct_in, int indent, uint64_t base_addr)
{
    const VkSparseImageMemoryBind *pstruct = (const VkSparseImageMemoryBind *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkImageSubresource subresource
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageSubresource\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"subresource\",\n";
    *out += "\n"; // GDS

    // struct member: VkOffset3D offset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkOffset3D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"offset\",\n";
    *out += "\n"; // GDS

    // struct member: VkExtent3D extent
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExtent3D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"extent\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceMemory memory
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceMemory\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"memory\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize memoryOffset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"memoryOffset\",\n";
    *out += "\n"; // GDS

    // struct member: VkSparseMemoryBindFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSparseMemoryBindFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkSparseImageMemoryBindInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkSparseImageMemoryBindInfo *pstruct = (const VkSparseImageMemoryBindInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkImage image
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImage\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"image\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t bindCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"bindCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkSparseImageMemoryBind* pBinds
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSparseImageMemoryBind\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pBinds\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pBinds->GetAddress()); // WUT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkBindSparseInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkBindSparseInfo *pstruct = (const VkBindSparseInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t waitSemaphoreCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"waitSemaphoreCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkSemaphore* pWaitSemaphores
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSemaphore\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pWaitSemaphores\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pWaitSemaphores.GetAddress()); // WPT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t bufferBindCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"bufferBindCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkSparseBufferMemoryBindInfo* pBufferBinds
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSparseBufferMemoryBindInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pBufferBinds\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pBufferBinds->GetAddress()); // WUT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t imageOpaqueBindCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"imageOpaqueBindCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkSparseImageOpaqueMemoryBindInfo* pImageOpaqueBinds
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSparseImageOpaqueMemoryBindInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pImageOpaqueBinds\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pImageOpaqueBinds->GetAddress()); // WUT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t imageBindCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"imageBindCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkSparseImageMemoryBindInfo* pImageBinds
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSparseImageMemoryBindInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pImageBinds\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pImageBinds->GetAddress()); // WUT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t signalSemaphoreCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"signalSemaphoreCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkSemaphore* pSignalSemaphores
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSemaphore\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSignalSemaphores\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pSignalSemaphores.GetAddress()); // WPT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkFenceCreateInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkFenceCreateInfo *pstruct = (const VkFenceCreateInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkFenceCreateFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFenceCreateFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkSemaphoreCreateInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkSemaphoreCreateInfo *pstruct = (const VkSemaphoreCreateInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkSemaphoreCreateFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSemaphoreCreateFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkEventCreateInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkEventCreateInfo *pstruct = (const VkEventCreateInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkEventCreateFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkEventCreateFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkQueryPoolCreateInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkQueryPoolCreateInfo *pstruct = (const VkQueryPoolCreateInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkQueryPoolCreateFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkQueryPoolCreateFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: VkQueryType queryType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkQueryType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queryType\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t queryCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queryCount\",\n";
    *out += "\n"; // GDS

    // struct member: VkQueryPipelineStatisticFlags pipelineStatistics
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkQueryPipelineStatisticFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pipelineStatistics\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkBufferCreateInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkBufferCreateInfo *pstruct = (const VkBufferCreateInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBufferCreateFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBufferCreateFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize size
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"size\",\n";
    *out += "\n"; // GDS

    // struct member: VkBufferUsageFlags usage
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBufferUsageFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"usage\",\n";
    *out += "\n"; // GDS

    // struct member: VkSharingMode sharingMode
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSharingMode\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sharingMode\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t queueFamilyIndexCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queueFamilyIndexCount\",\n";
    *out += "\n"; // GDS

    // struct member: const uint32_t* pQueueFamilyIndices
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pQueueFamilyIndices\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pQueueFamilyIndices.GetAddress()); // WPT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkBufferViewCreateInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkBufferViewCreateInfo *pstruct = (const VkBufferViewCreateInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBufferViewCreateFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBufferViewCreateFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: VkBuffer buffer
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"buffer\",\n";
    *out += "\n"; // GDS

    // struct member: VkFormat format
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFormat\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"format\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize offset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"offset\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize range
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"range\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkImageCreateInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkImageCreateInfo *pstruct = (const VkImageCreateInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkImageCreateFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageCreateFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: VkImageType imageType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"imageType\",\n";
    *out += "\n"; // GDS

    // struct member: VkFormat format
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFormat\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"format\",\n";
    *out += "\n"; // GDS

    // struct member: VkExtent3D extent
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExtent3D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"extent\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t mipLevels
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"mipLevels\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t arrayLayers
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"arrayLayers\",\n";
    *out += "\n"; // GDS

    // struct member: VkSampleCountFlagBits samples
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSampleCountFlagBits\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"samples\",\n";
    *out += "\n"; // GDS

    // struct member: VkImageTiling tiling
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageTiling\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"tiling\",\n";
    *out += "\n"; // GDS

    // struct member: VkImageUsageFlags usage
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageUsageFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"usage\",\n";
    *out += "\n"; // GDS

    // struct member: VkSharingMode sharingMode
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSharingMode\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sharingMode\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t queueFamilyIndexCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queueFamilyIndexCount\",\n";
    *out += "\n"; // GDS

    // struct member: const uint32_t* pQueueFamilyIndices
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pQueueFamilyIndices\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pQueueFamilyIndices.GetAddress()); // WPT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkImageLayout initialLayout
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageLayout\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"initialLayout\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkSubresourceLayout &pstruct_in, int indent, uint64_t base_addr)
{
    const VkSubresourceLayout *pstruct = (const VkSubresourceLayout *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkDeviceSize offset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"offset\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize size
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"size\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize rowPitch
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"rowPitch\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize arrayPitch
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"arrayPitch\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize depthPitch
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"depthPitch\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkComponentMapping &pstruct_in, int indent, uint64_t base_addr)
{
    const VkComponentMapping *pstruct = (const VkComponentMapping *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkComponentSwizzle r
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkComponentSwizzle\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"r\",\n";
    *out += "\n"; // GDS

    // struct member: VkComponentSwizzle g
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkComponentSwizzle\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"g\",\n";
    *out += "\n"; // GDS

    // struct member: VkComponentSwizzle b
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkComponentSwizzle\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"b\",\n";
    *out += "\n"; // GDS

    // struct member: VkComponentSwizzle a
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkComponentSwizzle\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"a\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkImageSubresourceRange &pstruct_in, int indent, uint64_t base_addr)
{
    const VkImageSubresourceRange *pstruct = (const VkImageSubresourceRange *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkImageAspectFlags aspectMask
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageAspectFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"aspectMask\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t baseMipLevel
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"baseMipLevel\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t levelCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"levelCount\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t baseArrayLayer
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"baseArrayLayer\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t layerCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"layerCount\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkImageViewCreateInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkImageViewCreateInfo *pstruct = (const VkImageViewCreateInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkImageViewCreateFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageViewCreateFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: VkImage image
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImage\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"image\",\n";
    *out += "\n"; // GDS

    // struct member: VkImageViewType viewType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageViewType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"viewType\",\n";
    *out += "\n"; // GDS

    // struct member: VkFormat format
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFormat\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"format\",\n";
    *out += "\n"; // GDS

    // struct member: VkComponentMapping components
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkComponentMapping\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"components\",\n";
    *out += "\n"; // GDS

    // struct member: VkImageSubresourceRange subresourceRange
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageSubresourceRange\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"subresourceRange\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkShaderModuleCreateInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkShaderModuleCreateInfo *pstruct = (const VkShaderModuleCreateInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkShaderModuleCreateFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkShaderModuleCreateFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: size_t codeSize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"size_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"codeSize\",\n";
    *out += "\n"; // GDS

    // struct member: const uint32_t* pCode
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCode\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pCode.GetAddress()); // WPT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPipelineCacheCreateInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPipelineCacheCreateInfo *pstruct = (const VkPipelineCacheCreateInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkPipelineCacheCreateFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineCacheCreateFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: size_t initialDataSize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"size_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"initialDataSize\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pInitialData
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pInitialData\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pInitialData.GetAddress()); // WPT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkSpecializationMapEntry &pstruct_in, int indent, uint64_t base_addr)
{
    const VkSpecializationMapEntry *pstruct = (const VkSpecializationMapEntry *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: uint32_t constantID
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"constantID\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t offset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"offset\",\n";
    *out += "\n"; // GDS

    // struct member: size_t size
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"size_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"size\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkSpecializationInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkSpecializationInfo *pstruct = (const VkSpecializationInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: uint32_t mapEntryCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"mapEntryCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkSpecializationMapEntry* pMapEntries
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSpecializationMapEntry\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pMapEntries\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pMapEntries->GetAddress()); // WUT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: size_t dataSize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"size_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dataSize\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pData
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pData\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pData.GetAddress()); // WPT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPipelineShaderStageCreateInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPipelineShaderStageCreateInfo *pstruct = (const VkPipelineShaderStageCreateInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkPipelineShaderStageCreateFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineShaderStageCreateFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: VkShaderStageFlagBits stage
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkShaderStageFlagBits\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"stage\",\n";
    *out += "\n"; // GDS

    // struct member: VkShaderModule module
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkShaderModule\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"module\",\n";
    *out += "\n"; // GDS

    // struct member: const char* pName
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"char\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pName\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pName.GetAddress()); // KGJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: const VkSpecializationInfo* pSpecializationInfo
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSpecializationInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSpecializationInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pSpecializationInfo->GetAddress()); // JHJ
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkVertexInputBindingDescription &pstruct_in, int indent, uint64_t base_addr)
{
    const VkVertexInputBindingDescription *pstruct = (const VkVertexInputBindingDescription *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: uint32_t binding
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"binding\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t stride
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"stride\",\n";
    *out += "\n"; // GDS

    // struct member: VkVertexInputRate inputRate
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkVertexInputRate\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"inputRate\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkVertexInputAttributeDescription &pstruct_in, int indent, uint64_t base_addr)
{
    const VkVertexInputAttributeDescription *pstruct = (const VkVertexInputAttributeDescription *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: uint32_t location
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"location\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t binding
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"binding\",\n";
    *out += "\n"; // GDS

    // struct member: VkFormat format
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFormat\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"format\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t offset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"offset\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPipelineVertexInputStateCreateInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPipelineVertexInputStateCreateInfo *pstruct = (const VkPipelineVertexInputStateCreateInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkPipelineVertexInputStateCreateFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineVertexInputStateCreateFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t vertexBindingDescriptionCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"vertexBindingDescriptionCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkVertexInputBindingDescription* pVertexBindingDescriptions
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkVertexInputBindingDescription\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pVertexBindingDescriptions\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pVertexBindingDescriptions->GetAddress()); // WUT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t vertexAttributeDescriptionCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"vertexAttributeDescriptionCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkVertexInputAttributeDescription* pVertexAttributeDescriptions
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkVertexInputAttributeDescription\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pVertexAttributeDescriptions\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pVertexAttributeDescriptions->GetAddress()); // WUT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPipelineInputAssemblyStateCreateInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPipelineInputAssemblyStateCreateInfo *pstruct = (const VkPipelineInputAssemblyStateCreateInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkPipelineInputAssemblyStateCreateFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineInputAssemblyStateCreateFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: VkPrimitiveTopology topology
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPrimitiveTopology\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"topology\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 primitiveRestartEnable
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"primitiveRestartEnable\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPipelineTessellationStateCreateInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPipelineTessellationStateCreateInfo *pstruct = (const VkPipelineTessellationStateCreateInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkPipelineTessellationStateCreateFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineTessellationStateCreateFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t patchControlPoints
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"patchControlPoints\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkViewport &pstruct_in, int indent, uint64_t base_addr)
{
    const VkViewport *pstruct = (const VkViewport *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: float x
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"x\",\n";
    *out += "\n"; // GDS

    // struct member: float y
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"y\",\n";
    *out += "\n"; // GDS

    // struct member: float width
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"width\",\n";
    *out += "\n"; // GDS

    // struct member: float height
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"height\",\n";
    *out += "\n"; // GDS

    // struct member: float minDepth
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"minDepth\",\n";
    *out += "\n"; // GDS

    // struct member: float maxDepth
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxDepth\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkOffset2D &pstruct_in, int indent, uint64_t base_addr)
{
    const VkOffset2D *pstruct = (const VkOffset2D *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: int32_t x
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"int32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"x\",\n";
    *out += "\n"; // GDS

    // struct member: int32_t y
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"int32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"y\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkExtent2D &pstruct_in, int indent, uint64_t base_addr)
{
    const VkExtent2D *pstruct = (const VkExtent2D *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: uint32_t width
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"width\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t height
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"height\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkRect2D &pstruct_in, int indent, uint64_t base_addr)
{
    const VkRect2D *pstruct = (const VkRect2D *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkOffset2D offset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkOffset2D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"offset\",\n";
    *out += "\n"; // GDS

    // struct member: VkExtent2D extent
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExtent2D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"extent\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPipelineViewportStateCreateInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPipelineViewportStateCreateInfo *pstruct = (const VkPipelineViewportStateCreateInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkPipelineViewportStateCreateFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineViewportStateCreateFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t viewportCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"viewportCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkViewport* pViewports
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkViewport\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pViewports\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pViewports->GetAddress()); // WUT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t scissorCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"scissorCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkRect2D* pScissors
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkRect2D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pScissors\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pScissors->GetAddress()); // WUT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPipelineRasterizationStateCreateInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPipelineRasterizationStateCreateInfo *pstruct = (const VkPipelineRasterizationStateCreateInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkPipelineRasterizationStateCreateFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineRasterizationStateCreateFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 depthClampEnable
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"depthClampEnable\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 rasterizerDiscardEnable
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"rasterizerDiscardEnable\",\n";
    *out += "\n"; // GDS

    // struct member: VkPolygonMode polygonMode
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPolygonMode\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"polygonMode\",\n";
    *out += "\n"; // GDS

    // struct member: VkCullModeFlags cullMode
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCullModeFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"cullMode\",\n";
    *out += "\n"; // GDS

    // struct member: VkFrontFace frontFace
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFrontFace\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"frontFace\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 depthBiasEnable
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"depthBiasEnable\",\n";
    *out += "\n"; // GDS

    // struct member: float depthBiasConstantFactor
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"depthBiasConstantFactor\",\n";
    *out += "\n"; // GDS

    // struct member: float depthBiasClamp
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"depthBiasClamp\",\n";
    *out += "\n"; // GDS

    // struct member: float depthBiasSlopeFactor
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"depthBiasSlopeFactor\",\n";
    *out += "\n"; // GDS

    // struct member: float lineWidth
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"lineWidth\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPipelineMultisampleStateCreateInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPipelineMultisampleStateCreateInfo *pstruct = (const VkPipelineMultisampleStateCreateInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkPipelineMultisampleStateCreateFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineMultisampleStateCreateFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: VkSampleCountFlagBits rasterizationSamples
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSampleCountFlagBits\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"rasterizationSamples\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 sampleShadingEnable
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sampleShadingEnable\",\n";
    *out += "\n"; // GDS

    // struct member: float minSampleShading
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"minSampleShading\",\n";
    *out += "\n"; // GDS

    // struct member: const VkSampleMask* pSampleMask
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSampleMask\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSampleMask\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pSampleMask.GetAddress()); // WPT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 alphaToCoverageEnable
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"alphaToCoverageEnable\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 alphaToOneEnable
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"alphaToOneEnable\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkStencilOpState &pstruct_in, int indent, uint64_t base_addr)
{
    const VkStencilOpState *pstruct = (const VkStencilOpState *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStencilOp failOp
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStencilOp\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"failOp\",\n";
    *out += "\n"; // GDS

    // struct member: VkStencilOp passOp
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStencilOp\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"passOp\",\n";
    *out += "\n"; // GDS

    // struct member: VkStencilOp depthFailOp
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStencilOp\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"depthFailOp\",\n";
    *out += "\n"; // GDS

    // struct member: VkCompareOp compareOp
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCompareOp\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"compareOp\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t compareMask
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"compareMask\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t writeMask
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"writeMask\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t reference
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"reference\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPipelineDepthStencilStateCreateInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPipelineDepthStencilStateCreateInfo *pstruct = (const VkPipelineDepthStencilStateCreateInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkPipelineDepthStencilStateCreateFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineDepthStencilStateCreateFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 depthTestEnable
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"depthTestEnable\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 depthWriteEnable
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"depthWriteEnable\",\n";
    *out += "\n"; // GDS

    // struct member: VkCompareOp depthCompareOp
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCompareOp\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"depthCompareOp\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 depthBoundsTestEnable
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"depthBoundsTestEnable\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 stencilTestEnable
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"stencilTestEnable\",\n";
    *out += "\n"; // GDS

    // struct member: VkStencilOpState front
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStencilOpState\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"front\",\n";
    *out += "\n"; // GDS

    // struct member: VkStencilOpState back
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStencilOpState\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"back\",\n";
    *out += "\n"; // GDS

    // struct member: float minDepthBounds
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"minDepthBounds\",\n";
    *out += "\n"; // GDS

    // struct member: float maxDepthBounds
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxDepthBounds\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPipelineColorBlendAttachmentState &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPipelineColorBlendAttachmentState *pstruct = (const VkPipelineColorBlendAttachmentState *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkBool32 blendEnable
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"blendEnable\",\n";
    *out += "\n"; // GDS

    // struct member: VkBlendFactor srcColorBlendFactor
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBlendFactor\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"srcColorBlendFactor\",\n";
    *out += "\n"; // GDS

    // struct member: VkBlendFactor dstColorBlendFactor
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBlendFactor\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstColorBlendFactor\",\n";
    *out += "\n"; // GDS

    // struct member: VkBlendOp colorBlendOp
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBlendOp\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"colorBlendOp\",\n";
    *out += "\n"; // GDS

    // struct member: VkBlendFactor srcAlphaBlendFactor
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBlendFactor\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"srcAlphaBlendFactor\",\n";
    *out += "\n"; // GDS

    // struct member: VkBlendFactor dstAlphaBlendFactor
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBlendFactor\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstAlphaBlendFactor\",\n";
    *out += "\n"; // GDS

    // struct member: VkBlendOp alphaBlendOp
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBlendOp\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"alphaBlendOp\",\n";
    *out += "\n"; // GDS

    // struct member: VkColorComponentFlags colorWriteMask
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkColorComponentFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"colorWriteMask\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPipelineColorBlendStateCreateInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPipelineColorBlendStateCreateInfo *pstruct = (const VkPipelineColorBlendStateCreateInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkPipelineColorBlendStateCreateFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineColorBlendStateCreateFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 logicOpEnable
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"logicOpEnable\",\n";
    *out += "\n"; // GDS

    // struct member: VkLogicOp logicOp
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkLogicOp\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"logicOp\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t attachmentCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"attachmentCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkPipelineColorBlendAttachmentState* pAttachments
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineColorBlendAttachmentState\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAttachments\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pAttachments->GetAddress()); // WUT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: float blendConstants
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"blendConstants\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, base_addr + offsetof(VkPipelineColorBlendStateCreateInfo, blendConstants)); // IYY
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPipelineDynamicStateCreateInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPipelineDynamicStateCreateInfo *pstruct = (const VkPipelineDynamicStateCreateInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkPipelineDynamicStateCreateFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineDynamicStateCreateFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t dynamicStateCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dynamicStateCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkDynamicState* pDynamicStates
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDynamicState\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pDynamicStates\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pDynamicStates.GetAddress()); // WPT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkGraphicsPipelineCreateInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkGraphicsPipelineCreateInfo *pstruct = (const VkGraphicsPipelineCreateInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkPipelineCreateFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineCreateFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t stageCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"stageCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkPipelineShaderStageCreateInfo* pStages
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineShaderStageCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pStages\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pStages->GetAddress()); // WUT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: const VkPipelineVertexInputStateCreateInfo* pVertexInputState
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineVertexInputStateCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pVertexInputState\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pVertexInputState->GetAddress()); // JHJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: const VkPipelineInputAssemblyStateCreateInfo* pInputAssemblyState
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineInputAssemblyStateCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pInputAssemblyState\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pInputAssemblyState->GetAddress()); // JHJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: const VkPipelineTessellationStateCreateInfo* pTessellationState
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineTessellationStateCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pTessellationState\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pTessellationState->GetAddress()); // JHJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: const VkPipelineViewportStateCreateInfo* pViewportState
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineViewportStateCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pViewportState\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pViewportState->GetAddress()); // JHJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: const VkPipelineRasterizationStateCreateInfo* pRasterizationState
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineRasterizationStateCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pRasterizationState\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pRasterizationState->GetAddress()); // JHJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: const VkPipelineMultisampleStateCreateInfo* pMultisampleState
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineMultisampleStateCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pMultisampleState\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pMultisampleState->GetAddress()); // JHJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: const VkPipelineDepthStencilStateCreateInfo* pDepthStencilState
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineDepthStencilStateCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pDepthStencilState\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pDepthStencilState->GetAddress()); // JHJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: const VkPipelineColorBlendStateCreateInfo* pColorBlendState
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineColorBlendStateCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pColorBlendState\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pColorBlendState->GetAddress()); // JHJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: const VkPipelineDynamicStateCreateInfo* pDynamicState
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineDynamicStateCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pDynamicState\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pDynamicState->GetAddress()); // JHJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkPipelineLayout layout
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineLayout\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"layout\",\n";
    *out += "\n"; // GDS

    // struct member: VkRenderPass renderPass
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkRenderPass\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"renderPass\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t subpass
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"subpass\",\n";
    *out += "\n"; // GDS

    // struct member: VkPipeline basePipelineHandle
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipeline\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"basePipelineHandle\",\n";
    *out += "\n"; // GDS

    // struct member: int32_t basePipelineIndex
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"int32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"basePipelineIndex\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkComputePipelineCreateInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkComputePipelineCreateInfo *pstruct = (const VkComputePipelineCreateInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkPipelineCreateFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineCreateFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: VkPipelineShaderStageCreateInfo stage
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineShaderStageCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"stage\",\n";
    *out += "\n"; // GDS

    // struct member: VkPipelineLayout layout
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineLayout\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"layout\",\n";
    *out += "\n"; // GDS

    // struct member: VkPipeline basePipelineHandle
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipeline\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"basePipelineHandle\",\n";
    *out += "\n"; // GDS

    // struct member: int32_t basePipelineIndex
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"int32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"basePipelineIndex\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPushConstantRange &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPushConstantRange *pstruct = (const VkPushConstantRange *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkShaderStageFlags stageFlags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkShaderStageFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"stageFlags\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t offset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"offset\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t size
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"size\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPipelineLayoutCreateInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPipelineLayoutCreateInfo *pstruct = (const VkPipelineLayoutCreateInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkPipelineLayoutCreateFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineLayoutCreateFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t setLayoutCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"setLayoutCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkDescriptorSetLayout* pSetLayouts
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDescriptorSetLayout\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSetLayouts\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pSetLayouts.GetAddress()); // WPT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t pushConstantRangeCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pushConstantRangeCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkPushConstantRange* pPushConstantRanges
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPushConstantRange\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pPushConstantRanges\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pPushConstantRanges->GetAddress()); // WUT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkSamplerCreateInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkSamplerCreateInfo *pstruct = (const VkSamplerCreateInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkSamplerCreateFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSamplerCreateFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: VkFilter magFilter
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFilter\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"magFilter\",\n";
    *out += "\n"; // GDS

    // struct member: VkFilter minFilter
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFilter\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"minFilter\",\n";
    *out += "\n"; // GDS

    // struct member: VkSamplerMipmapMode mipmapMode
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSamplerMipmapMode\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"mipmapMode\",\n";
    *out += "\n"; // GDS

    // struct member: VkSamplerAddressMode addressModeU
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSamplerAddressMode\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"addressModeU\",\n";
    *out += "\n"; // GDS

    // struct member: VkSamplerAddressMode addressModeV
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSamplerAddressMode\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"addressModeV\",\n";
    *out += "\n"; // GDS

    // struct member: VkSamplerAddressMode addressModeW
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSamplerAddressMode\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"addressModeW\",\n";
    *out += "\n"; // GDS

    // struct member: float mipLodBias
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"mipLodBias\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 anisotropyEnable
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"anisotropyEnable\",\n";
    *out += "\n"; // GDS

    // struct member: float maxAnisotropy
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxAnisotropy\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 compareEnable
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"compareEnable\",\n";
    *out += "\n"; // GDS

    // struct member: VkCompareOp compareOp
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCompareOp\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"compareOp\",\n";
    *out += "\n"; // GDS

    // struct member: float minLod
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"minLod\",\n";
    *out += "\n"; // GDS

    // struct member: float maxLod
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxLod\",\n";
    *out += "\n"; // GDS

    // struct member: VkBorderColor borderColor
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBorderColor\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"borderColor\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 unnormalizedCoordinates
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"unnormalizedCoordinates\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDescriptorSetLayoutBinding &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDescriptorSetLayoutBinding *pstruct = (const VkDescriptorSetLayoutBinding *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: uint32_t binding
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"binding\",\n";
    *out += "\n"; // GDS

    // struct member: VkDescriptorType descriptorType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDescriptorType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"descriptorType\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t descriptorCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"descriptorCount\",\n";
    *out += "\n"; // GDS

    // struct member: VkShaderStageFlags stageFlags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkShaderStageFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"stageFlags\",\n";
    *out += "\n"; // GDS

    // struct member: const VkSampler* pImmutableSamplers
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSampler\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pImmutableSamplers\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pImmutableSamplers.GetAddress()); // WPT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDescriptorSetLayoutCreateInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDescriptorSetLayoutCreateInfo *pstruct = (const VkDescriptorSetLayoutCreateInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkDescriptorSetLayoutCreateFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDescriptorSetLayoutCreateFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t bindingCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"bindingCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkDescriptorSetLayoutBinding* pBindings
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDescriptorSetLayoutBinding\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pBindings\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pBindings->GetAddress()); // WUT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDescriptorPoolSize &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDescriptorPoolSize *pstruct = (const VkDescriptorPoolSize *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkDescriptorType type
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDescriptorType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"type\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t descriptorCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"descriptorCount\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDescriptorPoolCreateInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDescriptorPoolCreateInfo *pstruct = (const VkDescriptorPoolCreateInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkDescriptorPoolCreateFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDescriptorPoolCreateFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxSets
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxSets\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t poolSizeCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"poolSizeCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkDescriptorPoolSize* pPoolSizes
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDescriptorPoolSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pPoolSizes\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pPoolSizes->GetAddress()); // WUT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDescriptorSetAllocateInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDescriptorSetAllocateInfo *pstruct = (const VkDescriptorSetAllocateInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkDescriptorPool descriptorPool
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDescriptorPool\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"descriptorPool\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t descriptorSetCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"descriptorSetCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkDescriptorSetLayout* pSetLayouts
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDescriptorSetLayout\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSetLayouts\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pSetLayouts.GetAddress()); // WPT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDescriptorImageInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDescriptorImageInfo *pstruct = (const VkDescriptorImageInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkSampler sampler
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSampler\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sampler\",\n";
    *out += "\n"; // GDS

    // struct member: VkImageView imageView
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageView\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"imageView\",\n";
    *out += "\n"; // GDS

    // struct member: VkImageLayout imageLayout
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageLayout\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"imageLayout\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDescriptorBufferInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDescriptorBufferInfo *pstruct = (const VkDescriptorBufferInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkBuffer buffer
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"buffer\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize offset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"offset\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize range
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"range\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkWriteDescriptorSet &pstruct_in, int indent, uint64_t base_addr)
{
    const VkWriteDescriptorSet *pstruct = (const VkWriteDescriptorSet *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkDescriptorSet dstSet
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDescriptorSet\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstSet\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t dstBinding
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstBinding\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t dstArrayElement
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstArrayElement\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t descriptorCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"descriptorCount\",\n";
    *out += "\n"; // GDS

    // struct member: VkDescriptorType descriptorType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDescriptorType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"descriptorType\",\n";
    *out += "\n"; // GDS

    // struct member: const VkDescriptorImageInfo* pImageInfo
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDescriptorImageInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pImageInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pImageInfo->GetAddress()); // WUT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: const VkDescriptorBufferInfo* pBufferInfo
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDescriptorBufferInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pBufferInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pBufferInfo->GetAddress()); // WUT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: const VkBufferView* pTexelBufferView
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBufferView\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pTexelBufferView\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pTexelBufferView.GetAddress()); // WPT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkCopyDescriptorSet &pstruct_in, int indent, uint64_t base_addr)
{
    const VkCopyDescriptorSet *pstruct = (const VkCopyDescriptorSet *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkDescriptorSet srcSet
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDescriptorSet\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"srcSet\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t srcBinding
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"srcBinding\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t srcArrayElement
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"srcArrayElement\",\n";
    *out += "\n"; // GDS

    // struct member: VkDescriptorSet dstSet
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDescriptorSet\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstSet\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t dstBinding
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstBinding\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t dstArrayElement
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstArrayElement\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t descriptorCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"descriptorCount\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkFramebufferCreateInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkFramebufferCreateInfo *pstruct = (const VkFramebufferCreateInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkFramebufferCreateFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFramebufferCreateFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: VkRenderPass renderPass
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkRenderPass\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"renderPass\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t attachmentCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"attachmentCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkImageView* pAttachments
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageView\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAttachments\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pAttachments.GetAddress()); // WPT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t width
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"width\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t height
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"height\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t layers
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"layers\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkAttachmentDescription &pstruct_in, int indent, uint64_t base_addr)
{
    const VkAttachmentDescription *pstruct = (const VkAttachmentDescription *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkAttachmentDescriptionFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkAttachmentDescriptionFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: VkFormat format
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFormat\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"format\",\n";
    *out += "\n"; // GDS

    // struct member: VkSampleCountFlagBits samples
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSampleCountFlagBits\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"samples\",\n";
    *out += "\n"; // GDS

    // struct member: VkAttachmentLoadOp loadOp
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkAttachmentLoadOp\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"loadOp\",\n";
    *out += "\n"; // GDS

    // struct member: VkAttachmentStoreOp storeOp
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkAttachmentStoreOp\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"storeOp\",\n";
    *out += "\n"; // GDS

    // struct member: VkAttachmentLoadOp stencilLoadOp
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkAttachmentLoadOp\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"stencilLoadOp\",\n";
    *out += "\n"; // GDS

    // struct member: VkAttachmentStoreOp stencilStoreOp
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkAttachmentStoreOp\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"stencilStoreOp\",\n";
    *out += "\n"; // GDS

    // struct member: VkImageLayout initialLayout
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageLayout\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"initialLayout\",\n";
    *out += "\n"; // GDS

    // struct member: VkImageLayout finalLayout
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageLayout\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"finalLayout\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkAttachmentReference &pstruct_in, int indent, uint64_t base_addr)
{
    const VkAttachmentReference *pstruct = (const VkAttachmentReference *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: uint32_t attachment
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"attachment\",\n";
    *out += "\n"; // GDS

    // struct member: VkImageLayout layout
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageLayout\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"layout\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkSubpassDescription &pstruct_in, int indent, uint64_t base_addr)
{
    const VkSubpassDescription *pstruct = (const VkSubpassDescription *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkSubpassDescriptionFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSubpassDescriptionFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: VkPipelineBindPoint pipelineBindPoint
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineBindPoint\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pipelineBindPoint\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t inputAttachmentCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"inputAttachmentCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkAttachmentReference* pInputAttachments
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkAttachmentReference\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pInputAttachments\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pInputAttachments->GetAddress()); // WUT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t colorAttachmentCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"colorAttachmentCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkAttachmentReference* pColorAttachments
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkAttachmentReference\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pColorAttachments\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pColorAttachments->GetAddress()); // WUT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: const VkAttachmentReference* pResolveAttachments
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkAttachmentReference\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pResolveAttachments\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pResolveAttachments->GetAddress()); // WUT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: const VkAttachmentReference* pDepthStencilAttachment
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkAttachmentReference\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pDepthStencilAttachment\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pDepthStencilAttachment->GetAddress()); // JHJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t preserveAttachmentCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"preserveAttachmentCount\",\n";
    *out += "\n"; // GDS

    // struct member: const uint32_t* pPreserveAttachments
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pPreserveAttachments\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pPreserveAttachments.GetAddress()); // WPT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkSubpassDependency &pstruct_in, int indent, uint64_t base_addr)
{
    const VkSubpassDependency *pstruct = (const VkSubpassDependency *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: uint32_t srcSubpass
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"srcSubpass\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t dstSubpass
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstSubpass\",\n";
    *out += "\n"; // GDS

    // struct member: VkPipelineStageFlags srcStageMask
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineStageFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"srcStageMask\",\n";
    *out += "\n"; // GDS

    // struct member: VkPipelineStageFlags dstStageMask
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineStageFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstStageMask\",\n";
    *out += "\n"; // GDS

    // struct member: VkAccessFlags srcAccessMask
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkAccessFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"srcAccessMask\",\n";
    *out += "\n"; // GDS

    // struct member: VkAccessFlags dstAccessMask
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkAccessFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstAccessMask\",\n";
    *out += "\n"; // GDS

    // struct member: VkDependencyFlags dependencyFlags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDependencyFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dependencyFlags\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkRenderPassCreateInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkRenderPassCreateInfo *pstruct = (const VkRenderPassCreateInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkRenderPassCreateFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkRenderPassCreateFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t attachmentCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"attachmentCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkAttachmentDescription* pAttachments
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkAttachmentDescription\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAttachments\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pAttachments->GetAddress()); // WUT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t subpassCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"subpassCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkSubpassDescription* pSubpasses
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSubpassDescription\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSubpasses\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pSubpasses->GetAddress()); // WUT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t dependencyCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dependencyCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkSubpassDependency* pDependencies
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSubpassDependency\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pDependencies\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pDependencies->GetAddress()); // WUT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkCommandPoolCreateInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkCommandPoolCreateInfo *pstruct = (const VkCommandPoolCreateInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkCommandPoolCreateFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandPoolCreateFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t queueFamilyIndex
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queueFamilyIndex\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkCommandBufferAllocateInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkCommandBufferAllocateInfo *pstruct = (const VkCommandBufferAllocateInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkCommandPool commandPool
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandPool\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandPool\",\n";
    *out += "\n"; // GDS

    // struct member: VkCommandBufferLevel level
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBufferLevel\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"level\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t commandBufferCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBufferCount\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkCommandBufferInheritanceInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkCommandBufferInheritanceInfo *pstruct = (const VkCommandBufferInheritanceInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkRenderPass renderPass
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkRenderPass\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"renderPass\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t subpass
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"subpass\",\n";
    *out += "\n"; // GDS

    // struct member: VkFramebuffer framebuffer
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFramebuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"framebuffer\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 occlusionQueryEnable
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"occlusionQueryEnable\",\n";
    *out += "\n"; // GDS

    // struct member: VkQueryControlFlags queryFlags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkQueryControlFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queryFlags\",\n";
    *out += "\n"; // GDS

    // struct member: VkQueryPipelineStatisticFlags pipelineStatistics
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkQueryPipelineStatisticFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pipelineStatistics\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkCommandBufferBeginInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkCommandBufferBeginInfo *pstruct = (const VkCommandBufferBeginInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkCommandBufferUsageFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBufferUsageFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: const VkCommandBufferInheritanceInfo* pInheritanceInfo
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBufferInheritanceInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pInheritanceInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pInheritanceInfo->GetAddress()); // JHJ
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkBufferCopy &pstruct_in, int indent, uint64_t base_addr)
{
    const VkBufferCopy *pstruct = (const VkBufferCopy *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkDeviceSize srcOffset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"srcOffset\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize dstOffset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstOffset\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize size
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"size\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkImageSubresourceLayers &pstruct_in, int indent, uint64_t base_addr)
{
    const VkImageSubresourceLayers *pstruct = (const VkImageSubresourceLayers *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkImageAspectFlags aspectMask
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageAspectFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"aspectMask\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t mipLevel
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"mipLevel\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t baseArrayLayer
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"baseArrayLayer\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t layerCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"layerCount\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkImageCopy &pstruct_in, int indent, uint64_t base_addr)
{
    const VkImageCopy *pstruct = (const VkImageCopy *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkImageSubresourceLayers srcSubresource
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageSubresourceLayers\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"srcSubresource\",\n";
    *out += "\n"; // GDS

    // struct member: VkOffset3D srcOffset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkOffset3D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"srcOffset\",\n";
    *out += "\n"; // GDS

    // struct member: VkImageSubresourceLayers dstSubresource
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageSubresourceLayers\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstSubresource\",\n";
    *out += "\n"; // GDS

    // struct member: VkOffset3D dstOffset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkOffset3D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstOffset\",\n";
    *out += "\n"; // GDS

    // struct member: VkExtent3D extent
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExtent3D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"extent\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkImageBlit &pstruct_in, int indent, uint64_t base_addr)
{
    const VkImageBlit *pstruct = (const VkImageBlit *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkImageSubresourceLayers srcSubresource
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageSubresourceLayers\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"srcSubresource\",\n";
    *out += "\n"; // GDS

    // struct member: VkOffset3D srcOffsets
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkOffset3D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"srcOffsets\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, base_addr + offsetof(VkImageBlit, srcOffsets)); // IYY
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkImageSubresourceLayers dstSubresource
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageSubresourceLayers\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstSubresource\",\n";
    *out += "\n"; // GDS

    // struct member: VkOffset3D dstOffsets
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkOffset3D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstOffsets\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, base_addr + offsetof(VkImageBlit, dstOffsets)); // IYY
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkBufferImageCopy &pstruct_in, int indent, uint64_t base_addr)
{
    const VkBufferImageCopy *pstruct = (const VkBufferImageCopy *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkDeviceSize bufferOffset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"bufferOffset\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t bufferRowLength
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"bufferRowLength\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t bufferImageHeight
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"bufferImageHeight\",\n";
    *out += "\n"; // GDS

    // struct member: VkImageSubresourceLayers imageSubresource
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageSubresourceLayers\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"imageSubresource\",\n";
    *out += "\n"; // GDS

    // struct member: VkOffset3D imageOffset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkOffset3D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"imageOffset\",\n";
    *out += "\n"; // GDS

    // struct member: VkExtent3D imageExtent
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExtent3D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"imageExtent\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkClearColorValue &pstruct_in, int indent, uint64_t base_addr)
{
    const VkClearColorValue *pstruct = (const VkClearColorValue *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: float float32
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"float32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, base_addr + offsetof(VkClearColorValue, float32)); // IYY
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: int32_t int32
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"int32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"int32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, base_addr + offsetof(VkClearColorValue, int32)); // IYY
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t uint32
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"uint32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, base_addr + offsetof(VkClearColorValue, uint32)); // IYY
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkClearDepthStencilValue &pstruct_in, int indent, uint64_t base_addr)
{
    const VkClearDepthStencilValue *pstruct = (const VkClearDepthStencilValue *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: float depth
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"depth\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t stencil
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"stencil\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkClearValue &pstruct_in, int indent, uint64_t base_addr)
{
    const VkClearValue *pstruct = (const VkClearValue *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkClearColorValue color
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkClearColorValue\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"color\",\n";
    *out += "\n"; // GDS

    // struct member: VkClearDepthStencilValue depthStencil
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkClearDepthStencilValue\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"depthStencil\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkClearAttachment &pstruct_in, int indent, uint64_t base_addr)
{
    const VkClearAttachment *pstruct = (const VkClearAttachment *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkImageAspectFlags aspectMask
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageAspectFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"aspectMask\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t colorAttachment
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"colorAttachment\",\n";
    *out += "\n"; // GDS

    // struct member: VkClearValue clearValue
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkClearValue\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"clearValue\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkClearRect &pstruct_in, int indent, uint64_t base_addr)
{
    const VkClearRect *pstruct = (const VkClearRect *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkRect2D rect
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkRect2D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"rect\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t baseArrayLayer
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"baseArrayLayer\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t layerCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"layerCount\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkImageResolve &pstruct_in, int indent, uint64_t base_addr)
{
    const VkImageResolve *pstruct = (const VkImageResolve *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkImageSubresourceLayers srcSubresource
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageSubresourceLayers\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"srcSubresource\",\n";
    *out += "\n"; // GDS

    // struct member: VkOffset3D srcOffset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkOffset3D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"srcOffset\",\n";
    *out += "\n"; // GDS

    // struct member: VkImageSubresourceLayers dstSubresource
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageSubresourceLayers\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstSubresource\",\n";
    *out += "\n"; // GDS

    // struct member: VkOffset3D dstOffset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkOffset3D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstOffset\",\n";
    *out += "\n"; // GDS

    // struct member: VkExtent3D extent
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExtent3D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"extent\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkMemoryBarrier &pstruct_in, int indent, uint64_t base_addr)
{
    const VkMemoryBarrier *pstruct = (const VkMemoryBarrier *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkAccessFlags srcAccessMask
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkAccessFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"srcAccessMask\",\n";
    *out += "\n"; // GDS

    // struct member: VkAccessFlags dstAccessMask
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkAccessFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstAccessMask\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkBufferMemoryBarrier &pstruct_in, int indent, uint64_t base_addr)
{
    const VkBufferMemoryBarrier *pstruct = (const VkBufferMemoryBarrier *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkAccessFlags srcAccessMask
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkAccessFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"srcAccessMask\",\n";
    *out += "\n"; // GDS

    // struct member: VkAccessFlags dstAccessMask
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkAccessFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstAccessMask\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t srcQueueFamilyIndex
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"srcQueueFamilyIndex\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t dstQueueFamilyIndex
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstQueueFamilyIndex\",\n";
    *out += "\n"; // GDS

    // struct member: VkBuffer buffer
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"buffer\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize offset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"offset\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize size
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"size\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkImageMemoryBarrier &pstruct_in, int indent, uint64_t base_addr)
{
    const VkImageMemoryBarrier *pstruct = (const VkImageMemoryBarrier *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkAccessFlags srcAccessMask
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkAccessFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"srcAccessMask\",\n";
    *out += "\n"; // GDS

    // struct member: VkAccessFlags dstAccessMask
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkAccessFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstAccessMask\",\n";
    *out += "\n"; // GDS

    // struct member: VkImageLayout oldLayout
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageLayout\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"oldLayout\",\n";
    *out += "\n"; // GDS

    // struct member: VkImageLayout newLayout
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageLayout\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"newLayout\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t srcQueueFamilyIndex
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"srcQueueFamilyIndex\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t dstQueueFamilyIndex
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstQueueFamilyIndex\",\n";
    *out += "\n"; // GDS

    // struct member: VkImage image
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImage\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"image\",\n";
    *out += "\n"; // GDS

    // struct member: VkImageSubresourceRange subresourceRange
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageSubresourceRange\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"subresourceRange\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkRenderPassBeginInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkRenderPassBeginInfo *pstruct = (const VkRenderPassBeginInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkRenderPass renderPass
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkRenderPass\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"renderPass\",\n";
    *out += "\n"; // GDS

    // struct member: VkFramebuffer framebuffer
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFramebuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"framebuffer\",\n";
    *out += "\n"; // GDS

    // struct member: VkRect2D renderArea
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkRect2D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"renderArea\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t clearValueCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"clearValueCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkClearValue* pClearValues
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkClearValue\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pClearValues\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pClearValues->GetAddress()); // WUT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDispatchIndirectCommand &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDispatchIndirectCommand *pstruct = (const VkDispatchIndirectCommand *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: uint32_t x
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"x\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t y
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"y\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t z
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"z\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDrawIndexedIndirectCommand &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDrawIndexedIndirectCommand *pstruct = (const VkDrawIndexedIndirectCommand *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: uint32_t indexCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"indexCount\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t instanceCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"instanceCount\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t firstIndex
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"firstIndex\",\n";
    *out += "\n"; // GDS

    // struct member: int32_t vertexOffset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"int32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"vertexOffset\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t firstInstance
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"firstInstance\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDrawIndirectCommand &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDrawIndirectCommand *pstruct = (const VkDrawIndirectCommand *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: uint32_t vertexCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"vertexCount\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t instanceCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"instanceCount\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t firstVertex
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"firstVertex\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t firstInstance
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"firstInstance\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceSubgroupProperties &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceSubgroupProperties *pstruct = (const VkPhysicalDeviceSubgroupProperties *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t subgroupSize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"subgroupSize\",\n";
    *out += "\n"; // GDS

    // struct member: VkShaderStageFlags supportedStages
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkShaderStageFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"supportedStages\",\n";
    *out += "\n"; // GDS

    // struct member: VkSubgroupFeatureFlags supportedOperations
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSubgroupFeatureFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"supportedOperations\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 quadOperationsInAllStages
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"quadOperationsInAllStages\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkBindBufferMemoryInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkBindBufferMemoryInfo *pstruct = (const VkBindBufferMemoryInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBuffer buffer
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"buffer\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceMemory memory
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceMemory\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"memory\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize memoryOffset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"memoryOffset\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkBindImageMemoryInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkBindImageMemoryInfo *pstruct = (const VkBindImageMemoryInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkImage image
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImage\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"image\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceMemory memory
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceMemory\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"memory\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize memoryOffset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"memoryOffset\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDevice16BitStorageFeatures &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDevice16BitStorageFeatures *pstruct = (const VkPhysicalDevice16BitStorageFeatures *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 storageBuffer16BitAccess
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"storageBuffer16BitAccess\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 uniformAndStorageBuffer16BitAccess
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"uniformAndStorageBuffer16BitAccess\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 storagePushConstant16
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"storagePushConstant16\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 storageInputOutput16
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"storageInputOutput16\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkMemoryDedicatedRequirements &pstruct_in, int indent, uint64_t base_addr)
{
    const VkMemoryDedicatedRequirements *pstruct = (const VkMemoryDedicatedRequirements *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 prefersDedicatedAllocation
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"prefersDedicatedAllocation\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 requiresDedicatedAllocation
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"requiresDedicatedAllocation\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkMemoryDedicatedAllocateInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkMemoryDedicatedAllocateInfo *pstruct = (const VkMemoryDedicatedAllocateInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkImage image
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImage\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"image\",\n";
    *out += "\n"; // GDS

    // struct member: VkBuffer buffer
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"buffer\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkMemoryAllocateFlagsInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkMemoryAllocateFlagsInfo *pstruct = (const VkMemoryAllocateFlagsInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkMemoryAllocateFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkMemoryAllocateFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t deviceMask
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"deviceMask\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDeviceGroupRenderPassBeginInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDeviceGroupRenderPassBeginInfo *pstruct = (const VkDeviceGroupRenderPassBeginInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t deviceMask
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"deviceMask\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t deviceRenderAreaCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"deviceRenderAreaCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkRect2D* pDeviceRenderAreas
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkRect2D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pDeviceRenderAreas\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pDeviceRenderAreas->GetAddress()); // WUT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDeviceGroupCommandBufferBeginInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDeviceGroupCommandBufferBeginInfo *pstruct = (const VkDeviceGroupCommandBufferBeginInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t deviceMask
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"deviceMask\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDeviceGroupSubmitInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDeviceGroupSubmitInfo *pstruct = (const VkDeviceGroupSubmitInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t waitSemaphoreCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"waitSemaphoreCount\",\n";
    *out += "\n"; // GDS

    // struct member: const uint32_t* pWaitSemaphoreDeviceIndices
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pWaitSemaphoreDeviceIndices\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pWaitSemaphoreDeviceIndices.GetAddress()); // WPT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t commandBufferCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"commandBufferCount\",\n";
    *out += "\n"; // GDS

    // struct member: const uint32_t* pCommandBufferDeviceMasks
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCommandBufferDeviceMasks\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pCommandBufferDeviceMasks.GetAddress()); // WPT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t signalSemaphoreCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"signalSemaphoreCount\",\n";
    *out += "\n"; // GDS

    // struct member: const uint32_t* pSignalSemaphoreDeviceIndices
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSignalSemaphoreDeviceIndices\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pSignalSemaphoreDeviceIndices.GetAddress()); // WPT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDeviceGroupBindSparseInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDeviceGroupBindSparseInfo *pstruct = (const VkDeviceGroupBindSparseInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t resourceDeviceIndex
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"resourceDeviceIndex\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t memoryDeviceIndex
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"memoryDeviceIndex\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkBindBufferMemoryDeviceGroupInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkBindBufferMemoryDeviceGroupInfo *pstruct = (const VkBindBufferMemoryDeviceGroupInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t deviceIndexCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"deviceIndexCount\",\n";
    *out += "\n"; // GDS

    // struct member: const uint32_t* pDeviceIndices
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pDeviceIndices\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pDeviceIndices.GetAddress()); // WPT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkBindImageMemoryDeviceGroupInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkBindImageMemoryDeviceGroupInfo *pstruct = (const VkBindImageMemoryDeviceGroupInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t deviceIndexCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"deviceIndexCount\",\n";
    *out += "\n"; // GDS

    // struct member: const uint32_t* pDeviceIndices
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pDeviceIndices\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pDeviceIndices.GetAddress()); // WPT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t splitInstanceBindRegionCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"splitInstanceBindRegionCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkRect2D* pSplitInstanceBindRegions
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkRect2D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSplitInstanceBindRegions\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pSplitInstanceBindRegions->GetAddress()); // WUT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceGroupProperties &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceGroupProperties *pstruct = (const VkPhysicalDeviceGroupProperties *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t physicalDeviceCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDeviceCount\",\n";
    *out += "\n"; // GDS

    // struct member: VkPhysicalDevice physicalDevices
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDevices\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, base_addr + offsetof(VkPhysicalDeviceGroupProperties, physicalDevices)); // IYY
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 subsetAllocation
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"subsetAllocation\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDeviceGroupDeviceCreateInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDeviceGroupDeviceCreateInfo *pstruct = (const VkDeviceGroupDeviceCreateInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t physicalDeviceCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDeviceCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkPhysicalDevice* pPhysicalDevices
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDevice\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pPhysicalDevices\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pPhysicalDevices.GetAddress()); // WPT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkBufferMemoryRequirementsInfo2 &pstruct_in, int indent, uint64_t base_addr)
{
    const VkBufferMemoryRequirementsInfo2 *pstruct = (const VkBufferMemoryRequirementsInfo2 *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBuffer buffer
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"buffer\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkImageMemoryRequirementsInfo2 &pstruct_in, int indent, uint64_t base_addr)
{
    const VkImageMemoryRequirementsInfo2 *pstruct = (const VkImageMemoryRequirementsInfo2 *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkImage image
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImage\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"image\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkImageSparseMemoryRequirementsInfo2 &pstruct_in, int indent, uint64_t base_addr)
{
    const VkImageSparseMemoryRequirementsInfo2 *pstruct = (const VkImageSparseMemoryRequirementsInfo2 *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkImage image
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImage\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"image\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkMemoryRequirements2 &pstruct_in, int indent, uint64_t base_addr)
{
    const VkMemoryRequirements2 *pstruct = (const VkMemoryRequirements2 *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkMemoryRequirements memoryRequirements
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkMemoryRequirements\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"memoryRequirements\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkSparseImageMemoryRequirements2 &pstruct_in, int indent, uint64_t base_addr)
{
    const VkSparseImageMemoryRequirements2 *pstruct = (const VkSparseImageMemoryRequirements2 *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkSparseImageMemoryRequirements memoryRequirements
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSparseImageMemoryRequirements\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"memoryRequirements\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceFeatures2 &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceFeatures2 *pstruct = (const VkPhysicalDeviceFeatures2 *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkPhysicalDeviceFeatures features
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDeviceFeatures\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"features\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceProperties2 &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceProperties2 *pstruct = (const VkPhysicalDeviceProperties2 *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkPhysicalDeviceProperties properties
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDeviceProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"properties\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkFormatProperties2 &pstruct_in, int indent, uint64_t base_addr)
{
    const VkFormatProperties2 *pstruct = (const VkFormatProperties2 *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkFormatProperties formatProperties
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFormatProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"formatProperties\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkImageFormatProperties2 &pstruct_in, int indent, uint64_t base_addr)
{
    const VkImageFormatProperties2 *pstruct = (const VkImageFormatProperties2 *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkImageFormatProperties imageFormatProperties
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageFormatProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"imageFormatProperties\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceImageFormatInfo2 &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceImageFormatInfo2 *pstruct = (const VkPhysicalDeviceImageFormatInfo2 *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkFormat format
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFormat\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"format\",\n";
    *out += "\n"; // GDS

    // struct member: VkImageType type
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"type\",\n";
    *out += "\n"; // GDS

    // struct member: VkImageTiling tiling
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageTiling\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"tiling\",\n";
    *out += "\n"; // GDS

    // struct member: VkImageUsageFlags usage
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageUsageFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"usage\",\n";
    *out += "\n"; // GDS

    // struct member: VkImageCreateFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageCreateFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkQueueFamilyProperties2 &pstruct_in, int indent, uint64_t base_addr)
{
    const VkQueueFamilyProperties2 *pstruct = (const VkQueueFamilyProperties2 *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkQueueFamilyProperties queueFamilyProperties
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkQueueFamilyProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queueFamilyProperties\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceMemoryProperties2 &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceMemoryProperties2 *pstruct = (const VkPhysicalDeviceMemoryProperties2 *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkPhysicalDeviceMemoryProperties memoryProperties
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPhysicalDeviceMemoryProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"memoryProperties\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkSparseImageFormatProperties2 &pstruct_in, int indent, uint64_t base_addr)
{
    const VkSparseImageFormatProperties2 *pstruct = (const VkSparseImageFormatProperties2 *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkSparseImageFormatProperties properties
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSparseImageFormatProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"properties\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceSparseImageFormatInfo2 &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceSparseImageFormatInfo2 *pstruct = (const VkPhysicalDeviceSparseImageFormatInfo2 *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkFormat format
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFormat\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"format\",\n";
    *out += "\n"; // GDS

    // struct member: VkImageType type
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"type\",\n";
    *out += "\n"; // GDS

    // struct member: VkSampleCountFlagBits samples
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSampleCountFlagBits\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"samples\",\n";
    *out += "\n"; // GDS

    // struct member: VkImageUsageFlags usage
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageUsageFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"usage\",\n";
    *out += "\n"; // GDS

    // struct member: VkImageTiling tiling
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageTiling\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"tiling\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDevicePointClippingProperties &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDevicePointClippingProperties *pstruct = (const VkPhysicalDevicePointClippingProperties *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkPointClippingBehavior pointClippingBehavior
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPointClippingBehavior\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pointClippingBehavior\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkInputAttachmentAspectReference &pstruct_in, int indent, uint64_t base_addr)
{
    const VkInputAttachmentAspectReference *pstruct = (const VkInputAttachmentAspectReference *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: uint32_t subpass
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"subpass\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t inputAttachmentIndex
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"inputAttachmentIndex\",\n";
    *out += "\n"; // GDS

    // struct member: VkImageAspectFlags aspectMask
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageAspectFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"aspectMask\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkRenderPassInputAttachmentAspectCreateInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkRenderPassInputAttachmentAspectCreateInfo *pstruct = (const VkRenderPassInputAttachmentAspectCreateInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t aspectReferenceCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"aspectReferenceCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkInputAttachmentAspectReference* pAspectReferences
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkInputAttachmentAspectReference\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAspectReferences\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pAspectReferences->GetAddress()); // WUT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkImageViewUsageCreateInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkImageViewUsageCreateInfo *pstruct = (const VkImageViewUsageCreateInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkImageUsageFlags usage
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageUsageFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"usage\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPipelineTessellationDomainOriginStateCreateInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPipelineTessellationDomainOriginStateCreateInfo *pstruct = (const VkPipelineTessellationDomainOriginStateCreateInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkTessellationDomainOrigin domainOrigin
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkTessellationDomainOrigin\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"domainOrigin\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkRenderPassMultiviewCreateInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkRenderPassMultiviewCreateInfo *pstruct = (const VkRenderPassMultiviewCreateInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t subpassCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"subpassCount\",\n";
    *out += "\n"; // GDS

    // struct member: const uint32_t* pViewMasks
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pViewMasks\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pViewMasks.GetAddress()); // WPT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t dependencyCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dependencyCount\",\n";
    *out += "\n"; // GDS

    // struct member: const int32_t* pViewOffsets
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"int32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pViewOffsets\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pViewOffsets.GetAddress()); // WPT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t correlationMaskCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"correlationMaskCount\",\n";
    *out += "\n"; // GDS

    // struct member: const uint32_t* pCorrelationMasks
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCorrelationMasks\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pCorrelationMasks.GetAddress()); // WPT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceMultiviewFeatures &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceMultiviewFeatures *pstruct = (const VkPhysicalDeviceMultiviewFeatures *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 multiview
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"multiview\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 multiviewGeometryShader
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"multiviewGeometryShader\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 multiviewTessellationShader
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"multiviewTessellationShader\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceMultiviewProperties &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceMultiviewProperties *pstruct = (const VkPhysicalDeviceMultiviewProperties *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxMultiviewViewCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxMultiviewViewCount\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxMultiviewInstanceIndex
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxMultiviewInstanceIndex\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceVariablePointersFeatures &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceVariablePointersFeatures *pstruct = (const VkPhysicalDeviceVariablePointersFeatures *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 variablePointersStorageBuffer
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"variablePointersStorageBuffer\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 variablePointers
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"variablePointers\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceProtectedMemoryFeatures &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceProtectedMemoryFeatures *pstruct = (const VkPhysicalDeviceProtectedMemoryFeatures *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 protectedMemory
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"protectedMemory\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceProtectedMemoryProperties &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceProtectedMemoryProperties *pstruct = (const VkPhysicalDeviceProtectedMemoryProperties *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 protectedNoFault
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"protectedNoFault\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDeviceQueueInfo2 &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDeviceQueueInfo2 *pstruct = (const VkDeviceQueueInfo2 *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceQueueCreateFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceQueueCreateFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t queueFamilyIndex
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queueFamilyIndex\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t queueIndex
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queueIndex\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkProtectedSubmitInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkProtectedSubmitInfo *pstruct = (const VkProtectedSubmitInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 protectedSubmit
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"protectedSubmit\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkSamplerYcbcrConversionCreateInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkSamplerYcbcrConversionCreateInfo *pstruct = (const VkSamplerYcbcrConversionCreateInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkFormat format
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFormat\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"format\",\n";
    *out += "\n"; // GDS

    // struct member: VkSamplerYcbcrModelConversion ycbcrModel
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSamplerYcbcrModelConversion\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"ycbcrModel\",\n";
    *out += "\n"; // GDS

    // struct member: VkSamplerYcbcrRange ycbcrRange
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSamplerYcbcrRange\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"ycbcrRange\",\n";
    *out += "\n"; // GDS

    // struct member: VkComponentMapping components
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkComponentMapping\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"components\",\n";
    *out += "\n"; // GDS

    // struct member: VkChromaLocation xChromaOffset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkChromaLocation\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"xChromaOffset\",\n";
    *out += "\n"; // GDS

    // struct member: VkChromaLocation yChromaOffset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkChromaLocation\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"yChromaOffset\",\n";
    *out += "\n"; // GDS

    // struct member: VkFilter chromaFilter
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFilter\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"chromaFilter\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 forceExplicitReconstruction
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"forceExplicitReconstruction\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkSamplerYcbcrConversionInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkSamplerYcbcrConversionInfo *pstruct = (const VkSamplerYcbcrConversionInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkSamplerYcbcrConversion conversion
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSamplerYcbcrConversion\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"conversion\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkBindImagePlaneMemoryInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkBindImagePlaneMemoryInfo *pstruct = (const VkBindImagePlaneMemoryInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkImageAspectFlagBits planeAspect
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageAspectFlagBits\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"planeAspect\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkImagePlaneMemoryRequirementsInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkImagePlaneMemoryRequirementsInfo *pstruct = (const VkImagePlaneMemoryRequirementsInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkImageAspectFlagBits planeAspect
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageAspectFlagBits\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"planeAspect\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceSamplerYcbcrConversionFeatures &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceSamplerYcbcrConversionFeatures *pstruct = (const VkPhysicalDeviceSamplerYcbcrConversionFeatures *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 samplerYcbcrConversion
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"samplerYcbcrConversion\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkSamplerYcbcrConversionImageFormatProperties &pstruct_in, int indent, uint64_t base_addr)
{
    const VkSamplerYcbcrConversionImageFormatProperties *pstruct = (const VkSamplerYcbcrConversionImageFormatProperties *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t combinedImageSamplerDescriptorCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"combinedImageSamplerDescriptorCount\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDescriptorUpdateTemplateEntry &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDescriptorUpdateTemplateEntry *pstruct = (const VkDescriptorUpdateTemplateEntry *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: uint32_t dstBinding
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstBinding\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t dstArrayElement
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstArrayElement\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t descriptorCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"descriptorCount\",\n";
    *out += "\n"; // GDS

    // struct member: VkDescriptorType descriptorType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDescriptorType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"descriptorType\",\n";
    *out += "\n"; // GDS

    // struct member: size_t offset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"size_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"offset\",\n";
    *out += "\n"; // GDS

    // struct member: size_t stride
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"size_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"stride\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDescriptorUpdateTemplateCreateInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDescriptorUpdateTemplateCreateInfo *pstruct = (const VkDescriptorUpdateTemplateCreateInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkDescriptorUpdateTemplateCreateFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDescriptorUpdateTemplateCreateFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t descriptorUpdateEntryCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"descriptorUpdateEntryCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkDescriptorUpdateTemplateEntry* pDescriptorUpdateEntries
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDescriptorUpdateTemplateEntry\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pDescriptorUpdateEntries\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pDescriptorUpdateEntries->GetAddress()); // WUT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkDescriptorUpdateTemplateType templateType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDescriptorUpdateTemplateType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"templateType\",\n";
    *out += "\n"; // GDS

    // struct member: VkDescriptorSetLayout descriptorSetLayout
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDescriptorSetLayout\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"descriptorSetLayout\",\n";
    *out += "\n"; // GDS

    // struct member: VkPipelineBindPoint pipelineBindPoint
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineBindPoint\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pipelineBindPoint\",\n";
    *out += "\n"; // GDS

    // struct member: VkPipelineLayout pipelineLayout
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineLayout\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pipelineLayout\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t set
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"set\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkExternalMemoryProperties &pstruct_in, int indent, uint64_t base_addr)
{
    const VkExternalMemoryProperties *pstruct = (const VkExternalMemoryProperties *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkExternalMemoryFeatureFlags externalMemoryFeatures
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalMemoryFeatureFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"externalMemoryFeatures\",\n";
    *out += "\n"; // GDS

    // struct member: VkExternalMemoryHandleTypeFlags exportFromImportedHandleTypes
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalMemoryHandleTypeFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"exportFromImportedHandleTypes\",\n";
    *out += "\n"; // GDS

    // struct member: VkExternalMemoryHandleTypeFlags compatibleHandleTypes
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalMemoryHandleTypeFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"compatibleHandleTypes\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceExternalImageFormatInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceExternalImageFormatInfo *pstruct = (const VkPhysicalDeviceExternalImageFormatInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkExternalMemoryHandleTypeFlagBits handleType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalMemoryHandleTypeFlagBits\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"handleType\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkExternalImageFormatProperties &pstruct_in, int indent, uint64_t base_addr)
{
    const VkExternalImageFormatProperties *pstruct = (const VkExternalImageFormatProperties *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkExternalMemoryProperties externalMemoryProperties
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalMemoryProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"externalMemoryProperties\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceExternalBufferInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceExternalBufferInfo *pstruct = (const VkPhysicalDeviceExternalBufferInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBufferCreateFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBufferCreateFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: VkBufferUsageFlags usage
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBufferUsageFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"usage\",\n";
    *out += "\n"; // GDS

    // struct member: VkExternalMemoryHandleTypeFlagBits handleType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalMemoryHandleTypeFlagBits\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"handleType\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkExternalBufferProperties &pstruct_in, int indent, uint64_t base_addr)
{
    const VkExternalBufferProperties *pstruct = (const VkExternalBufferProperties *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkExternalMemoryProperties externalMemoryProperties
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalMemoryProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"externalMemoryProperties\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceIDProperties &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceIDProperties *pstruct = (const VkPhysicalDeviceIDProperties *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint8_t deviceUUID
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint8_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"deviceUUID\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, base_addr + offsetof(VkPhysicalDeviceIDProperties, deviceUUID)); // IYY
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint8_t driverUUID
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint8_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"driverUUID\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, base_addr + offsetof(VkPhysicalDeviceIDProperties, driverUUID)); // IYY
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint8_t deviceLUID
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint8_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"deviceLUID\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, base_addr + offsetof(VkPhysicalDeviceIDProperties, deviceLUID)); // IYY
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t deviceNodeMask
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"deviceNodeMask\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 deviceLUIDValid
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"deviceLUIDValid\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkExternalMemoryImageCreateInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkExternalMemoryImageCreateInfo *pstruct = (const VkExternalMemoryImageCreateInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkExternalMemoryHandleTypeFlags handleTypes
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalMemoryHandleTypeFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"handleTypes\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkExternalMemoryBufferCreateInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkExternalMemoryBufferCreateInfo *pstruct = (const VkExternalMemoryBufferCreateInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkExternalMemoryHandleTypeFlags handleTypes
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalMemoryHandleTypeFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"handleTypes\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkExportMemoryAllocateInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkExportMemoryAllocateInfo *pstruct = (const VkExportMemoryAllocateInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkExternalMemoryHandleTypeFlags handleTypes
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalMemoryHandleTypeFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"handleTypes\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceExternalFenceInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceExternalFenceInfo *pstruct = (const VkPhysicalDeviceExternalFenceInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkExternalFenceHandleTypeFlagBits handleType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalFenceHandleTypeFlagBits\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"handleType\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkExternalFenceProperties &pstruct_in, int indent, uint64_t base_addr)
{
    const VkExternalFenceProperties *pstruct = (const VkExternalFenceProperties *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkExternalFenceHandleTypeFlags exportFromImportedHandleTypes
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalFenceHandleTypeFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"exportFromImportedHandleTypes\",\n";
    *out += "\n"; // GDS

    // struct member: VkExternalFenceHandleTypeFlags compatibleHandleTypes
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalFenceHandleTypeFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"compatibleHandleTypes\",\n";
    *out += "\n"; // GDS

    // struct member: VkExternalFenceFeatureFlags externalFenceFeatures
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalFenceFeatureFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"externalFenceFeatures\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkExportFenceCreateInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkExportFenceCreateInfo *pstruct = (const VkExportFenceCreateInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkExternalFenceHandleTypeFlags handleTypes
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalFenceHandleTypeFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"handleTypes\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkExportSemaphoreCreateInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkExportSemaphoreCreateInfo *pstruct = (const VkExportSemaphoreCreateInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkExternalSemaphoreHandleTypeFlags handleTypes
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalSemaphoreHandleTypeFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"handleTypes\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceExternalSemaphoreInfo &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceExternalSemaphoreInfo *pstruct = (const VkPhysicalDeviceExternalSemaphoreInfo *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkExternalSemaphoreHandleTypeFlagBits handleType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalSemaphoreHandleTypeFlagBits\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"handleType\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkExternalSemaphoreProperties &pstruct_in, int indent, uint64_t base_addr)
{
    const VkExternalSemaphoreProperties *pstruct = (const VkExternalSemaphoreProperties *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkExternalSemaphoreHandleTypeFlags exportFromImportedHandleTypes
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalSemaphoreHandleTypeFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"exportFromImportedHandleTypes\",\n";
    *out += "\n"; // GDS

    // struct member: VkExternalSemaphoreHandleTypeFlags compatibleHandleTypes
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalSemaphoreHandleTypeFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"compatibleHandleTypes\",\n";
    *out += "\n"; // GDS

    // struct member: VkExternalSemaphoreFeatureFlags externalSemaphoreFeatures
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalSemaphoreFeatureFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"externalSemaphoreFeatures\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceMaintenance3Properties &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceMaintenance3Properties *pstruct = (const VkPhysicalDeviceMaintenance3Properties *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxPerSetDescriptors
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxPerSetDescriptors\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize maxMemoryAllocationSize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxMemoryAllocationSize\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDescriptorSetLayoutSupport &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDescriptorSetLayoutSupport *pstruct = (const VkDescriptorSetLayoutSupport *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 supported
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"supported\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceShaderDrawParametersFeatures &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceShaderDrawParametersFeatures *pstruct = (const VkPhysicalDeviceShaderDrawParametersFeatures *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderDrawParameters
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderDrawParameters\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkSurfaceCapabilitiesKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkSurfaceCapabilitiesKHR *pstruct = (const VkSurfaceCapabilitiesKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: uint32_t minImageCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"minImageCount\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxImageCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxImageCount\",\n";
    *out += "\n"; // GDS

    // struct member: VkExtent2D currentExtent
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExtent2D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"currentExtent\",\n";
    *out += "\n"; // GDS

    // struct member: VkExtent2D minImageExtent
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExtent2D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"minImageExtent\",\n";
    *out += "\n"; // GDS

    // struct member: VkExtent2D maxImageExtent
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExtent2D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxImageExtent\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxImageArrayLayers
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxImageArrayLayers\",\n";
    *out += "\n"; // GDS

    // struct member: VkSurfaceTransformFlagsKHR supportedTransforms
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSurfaceTransformFlagsKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"supportedTransforms\",\n";
    *out += "\n"; // GDS

    // struct member: VkSurfaceTransformFlagBitsKHR currentTransform
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSurfaceTransformFlagBitsKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"currentTransform\",\n";
    *out += "\n"; // GDS

    // struct member: VkCompositeAlphaFlagsKHR supportedCompositeAlpha
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCompositeAlphaFlagsKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"supportedCompositeAlpha\",\n";
    *out += "\n"; // GDS

    // struct member: VkImageUsageFlags supportedUsageFlags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageUsageFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"supportedUsageFlags\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkSurfaceFormatKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkSurfaceFormatKHR *pstruct = (const VkSurfaceFormatKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkFormat format
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFormat\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"format\",\n";
    *out += "\n"; // GDS

    // struct member: VkColorSpaceKHR colorSpace
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkColorSpaceKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"colorSpace\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkSwapchainCreateInfoKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkSwapchainCreateInfoKHR *pstruct = (const VkSwapchainCreateInfoKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkSwapchainCreateFlagsKHR flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSwapchainCreateFlagsKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: VkSurfaceKHR surface
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSurfaceKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"surface\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t minImageCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"minImageCount\",\n";
    *out += "\n"; // GDS

    // struct member: VkFormat imageFormat
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFormat\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"imageFormat\",\n";
    *out += "\n"; // GDS

    // struct member: VkColorSpaceKHR imageColorSpace
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkColorSpaceKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"imageColorSpace\",\n";
    *out += "\n"; // GDS

    // struct member: VkExtent2D imageExtent
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExtent2D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"imageExtent\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t imageArrayLayers
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"imageArrayLayers\",\n";
    *out += "\n"; // GDS

    // struct member: VkImageUsageFlags imageUsage
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageUsageFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"imageUsage\",\n";
    *out += "\n"; // GDS

    // struct member: VkSharingMode imageSharingMode
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSharingMode\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"imageSharingMode\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t queueFamilyIndexCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queueFamilyIndexCount\",\n";
    *out += "\n"; // GDS

    // struct member: const uint32_t* pQueueFamilyIndices
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pQueueFamilyIndices\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pQueueFamilyIndices.GetAddress()); // WPT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkSurfaceTransformFlagBitsKHR preTransform
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSurfaceTransformFlagBitsKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"preTransform\",\n";
    *out += "\n"; // GDS

    // struct member: VkCompositeAlphaFlagBitsKHR compositeAlpha
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCompositeAlphaFlagBitsKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"compositeAlpha\",\n";
    *out += "\n"; // GDS

    // struct member: VkPresentModeKHR presentMode
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPresentModeKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"presentMode\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 clipped
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"clipped\",\n";
    *out += "\n"; // GDS

    // struct member: VkSwapchainKHR oldSwapchain
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSwapchainKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"oldSwapchain\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPresentInfoKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPresentInfoKHR *pstruct = (const VkPresentInfoKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t waitSemaphoreCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"waitSemaphoreCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkSemaphore* pWaitSemaphores
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSemaphore\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pWaitSemaphores\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pWaitSemaphores.GetAddress()); // WPT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t swapchainCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"swapchainCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkSwapchainKHR* pSwapchains
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSwapchainKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSwapchains\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pSwapchains.GetAddress()); // WPT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: const uint32_t* pImageIndices
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pImageIndices\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pImageIndices.GetAddress()); // WPT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkResult* pResults
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkResult\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pResults\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pResults.GetAddress()); // WPT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkImageSwapchainCreateInfoKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkImageSwapchainCreateInfoKHR *pstruct = (const VkImageSwapchainCreateInfoKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkSwapchainKHR swapchain
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSwapchainKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"swapchain\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkBindImageMemorySwapchainInfoKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkBindImageMemorySwapchainInfoKHR *pstruct = (const VkBindImageMemorySwapchainInfoKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkSwapchainKHR swapchain
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSwapchainKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"swapchain\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t imageIndex
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"imageIndex\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkAcquireNextImageInfoKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkAcquireNextImageInfoKHR *pstruct = (const VkAcquireNextImageInfoKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkSwapchainKHR swapchain
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSwapchainKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"swapchain\",\n";
    *out += "\n"; // GDS

    // struct member: uint64_t timeout
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"timeout\",\n";
    *out += "\n"; // GDS

    // struct member: VkSemaphore semaphore
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSemaphore\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"semaphore\",\n";
    *out += "\n"; // GDS

    // struct member: VkFence fence
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFence\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"fence\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t deviceMask
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"deviceMask\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDeviceGroupPresentCapabilitiesKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDeviceGroupPresentCapabilitiesKHR *pstruct = (const VkDeviceGroupPresentCapabilitiesKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t presentMask
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"presentMask\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, base_addr + offsetof(VkDeviceGroupPresentCapabilitiesKHR, presentMask)); // IYY
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceGroupPresentModeFlagsKHR modes
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceGroupPresentModeFlagsKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"modes\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDeviceGroupPresentInfoKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDeviceGroupPresentInfoKHR *pstruct = (const VkDeviceGroupPresentInfoKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t swapchainCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"swapchainCount\",\n";
    *out += "\n"; // GDS

    // struct member: const uint32_t* pDeviceMasks
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pDeviceMasks\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pDeviceMasks.GetAddress()); // WPT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceGroupPresentModeFlagBitsKHR mode
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceGroupPresentModeFlagBitsKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"mode\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDeviceGroupSwapchainCreateInfoKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDeviceGroupSwapchainCreateInfoKHR *pstruct = (const VkDeviceGroupSwapchainCreateInfoKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceGroupPresentModeFlagsKHR modes
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceGroupPresentModeFlagsKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"modes\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDisplayPropertiesKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDisplayPropertiesKHR *pstruct = (const VkDisplayPropertiesKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkDisplayKHR display
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDisplayKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"display\",\n";
    *out += "\n"; // GDS

    // struct member: const char* displayName
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"char\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"displayName\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.displayName.GetAddress()); // KGJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkExtent2D physicalDimensions
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExtent2D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalDimensions\",\n";
    *out += "\n"; // GDS

    // struct member: VkExtent2D physicalResolution
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExtent2D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"physicalResolution\",\n";
    *out += "\n"; // GDS

    // struct member: VkSurfaceTransformFlagsKHR supportedTransforms
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSurfaceTransformFlagsKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"supportedTransforms\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 planeReorderPossible
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"planeReorderPossible\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 persistentContent
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"persistentContent\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDisplayModeParametersKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDisplayModeParametersKHR *pstruct = (const VkDisplayModeParametersKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkExtent2D visibleRegion
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExtent2D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"visibleRegion\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t refreshRate
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"refreshRate\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDisplayModePropertiesKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDisplayModePropertiesKHR *pstruct = (const VkDisplayModePropertiesKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkDisplayModeKHR displayMode
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDisplayModeKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"displayMode\",\n";
    *out += "\n"; // GDS

    // struct member: VkDisplayModeParametersKHR parameters
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDisplayModeParametersKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"parameters\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDisplayModeCreateInfoKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDisplayModeCreateInfoKHR *pstruct = (const VkDisplayModeCreateInfoKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkDisplayModeCreateFlagsKHR flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDisplayModeCreateFlagsKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: VkDisplayModeParametersKHR parameters
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDisplayModeParametersKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"parameters\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDisplayPlaneCapabilitiesKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDisplayPlaneCapabilitiesKHR *pstruct = (const VkDisplayPlaneCapabilitiesKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkDisplayPlaneAlphaFlagsKHR supportedAlpha
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDisplayPlaneAlphaFlagsKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"supportedAlpha\",\n";
    *out += "\n"; // GDS

    // struct member: VkOffset2D minSrcPosition
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkOffset2D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"minSrcPosition\",\n";
    *out += "\n"; // GDS

    // struct member: VkOffset2D maxSrcPosition
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkOffset2D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxSrcPosition\",\n";
    *out += "\n"; // GDS

    // struct member: VkExtent2D minSrcExtent
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExtent2D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"minSrcExtent\",\n";
    *out += "\n"; // GDS

    // struct member: VkExtent2D maxSrcExtent
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExtent2D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxSrcExtent\",\n";
    *out += "\n"; // GDS

    // struct member: VkOffset2D minDstPosition
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkOffset2D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"minDstPosition\",\n";
    *out += "\n"; // GDS

    // struct member: VkOffset2D maxDstPosition
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkOffset2D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxDstPosition\",\n";
    *out += "\n"; // GDS

    // struct member: VkExtent2D minDstExtent
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExtent2D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"minDstExtent\",\n";
    *out += "\n"; // GDS

    // struct member: VkExtent2D maxDstExtent
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExtent2D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxDstExtent\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDisplayPlanePropertiesKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDisplayPlanePropertiesKHR *pstruct = (const VkDisplayPlanePropertiesKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkDisplayKHR currentDisplay
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDisplayKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"currentDisplay\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t currentStackIndex
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"currentStackIndex\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDisplaySurfaceCreateInfoKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDisplaySurfaceCreateInfoKHR *pstruct = (const VkDisplaySurfaceCreateInfoKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkDisplaySurfaceCreateFlagsKHR flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDisplaySurfaceCreateFlagsKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: VkDisplayModeKHR displayMode
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDisplayModeKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"displayMode\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t planeIndex
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"planeIndex\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t planeStackIndex
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"planeStackIndex\",\n";
    *out += "\n"; // GDS

    // struct member: VkSurfaceTransformFlagBitsKHR transform
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSurfaceTransformFlagBitsKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"transform\",\n";
    *out += "\n"; // GDS

    // struct member: float globalAlpha
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"globalAlpha\",\n";
    *out += "\n"; // GDS

    // struct member: VkDisplayPlaneAlphaFlagBitsKHR alphaMode
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDisplayPlaneAlphaFlagBitsKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"alphaMode\",\n";
    *out += "\n"; // GDS

    // struct member: VkExtent2D imageExtent
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExtent2D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"imageExtent\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDisplayPresentInfoKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDisplayPresentInfoKHR *pstruct = (const VkDisplayPresentInfoKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkRect2D srcRect
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkRect2D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"srcRect\",\n";
    *out += "\n"; // GDS

    // struct member: VkRect2D dstRect
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkRect2D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstRect\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 persistent
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"persistent\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkXlibSurfaceCreateInfoKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkXlibSurfaceCreateInfoKHR *pstruct = (const VkXlibSurfaceCreateInfoKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkXlibSurfaceCreateFlagsKHR flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkXlibSurfaceCreateFlagsKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: void* dpy
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dpy\",\n";
    *out += "\n"; // GDS

    // struct member: size_t window
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"size_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"window\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkXcbSurfaceCreateInfoKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkXcbSurfaceCreateInfoKHR *pstruct = (const VkXcbSurfaceCreateInfoKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkXcbSurfaceCreateFlagsKHR flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkXcbSurfaceCreateFlagsKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: void* connection
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"connection\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.connection); // PWR
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t window
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"window\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkWaylandSurfaceCreateInfoKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkWaylandSurfaceCreateInfoKHR *pstruct = (const VkWaylandSurfaceCreateInfoKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkWaylandSurfaceCreateFlagsKHR flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkWaylandSurfaceCreateFlagsKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: struct void* display
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"display\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.display); // PWR
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: struct void* surface
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"surface\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.surface); // PWR
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkAndroidSurfaceCreateInfoKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkAndroidSurfaceCreateInfoKHR *pstruct = (const VkAndroidSurfaceCreateInfoKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkAndroidSurfaceCreateFlagsKHR flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkAndroidSurfaceCreateFlagsKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: struct void* window
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"window\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.window); // PWR
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkWin32SurfaceCreateInfoKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkWin32SurfaceCreateInfoKHR *pstruct = (const VkWin32SurfaceCreateInfoKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkWin32SurfaceCreateFlagsKHR flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkWin32SurfaceCreateFlagsKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: void* hinstance
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"hinstance\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.hinstance); // PWR
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: void* hwnd
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"hwnd\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.hwnd); // PWR
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkImportMemoryWin32HandleInfoKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkImportMemoryWin32HandleInfoKHR *pstruct = (const VkImportMemoryWin32HandleInfoKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkExternalMemoryHandleTypeFlagBits handleType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalMemoryHandleTypeFlagBits\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"handleType\",\n";
    *out += "\n"; // GDS

    // struct member: void* handle
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"handle\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.handle); // PWR
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: const wchar_t* name
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"wchar_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"name\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.name.GetAddress()); // KGJ
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkExportMemoryWin32HandleInfoKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkExportMemoryWin32HandleInfoKHR *pstruct = (const VkExportMemoryWin32HandleInfoKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: const SECURITY_ATTRIBUTES* pAttributes
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"SECURITY_ATTRIBUTES\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAttributes\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pAttributes->GetAddress()); // JHJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t dwAccess
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dwAccess\",\n";
    *out += "\n"; // GDS

    // struct member: const wchar_t* name
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"wchar_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"name\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.name.GetAddress()); // KGJ
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkMemoryWin32HandlePropertiesKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkMemoryWin32HandlePropertiesKHR *pstruct = (const VkMemoryWin32HandlePropertiesKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t memoryTypeBits
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"memoryTypeBits\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkMemoryGetWin32HandleInfoKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkMemoryGetWin32HandleInfoKHR *pstruct = (const VkMemoryGetWin32HandleInfoKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceMemory memory
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceMemory\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"memory\",\n";
    *out += "\n"; // GDS

    // struct member: VkExternalMemoryHandleTypeFlagBits handleType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalMemoryHandleTypeFlagBits\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"handleType\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkImportMemoryFdInfoKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkImportMemoryFdInfoKHR *pstruct = (const VkImportMemoryFdInfoKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkExternalMemoryHandleTypeFlagBits handleType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalMemoryHandleTypeFlagBits\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"handleType\",\n";
    *out += "\n"; // GDS

    // struct member: int fd
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"int\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"fd\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkMemoryFdPropertiesKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkMemoryFdPropertiesKHR *pstruct = (const VkMemoryFdPropertiesKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t memoryTypeBits
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"memoryTypeBits\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkMemoryGetFdInfoKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkMemoryGetFdInfoKHR *pstruct = (const VkMemoryGetFdInfoKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceMemory memory
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceMemory\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"memory\",\n";
    *out += "\n"; // GDS

    // struct member: VkExternalMemoryHandleTypeFlagBits handleType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalMemoryHandleTypeFlagBits\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"handleType\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkWin32KeyedMutexAcquireReleaseInfoKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkWin32KeyedMutexAcquireReleaseInfoKHR *pstruct = (const VkWin32KeyedMutexAcquireReleaseInfoKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t acquireCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"acquireCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkDeviceMemory* pAcquireSyncs
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceMemory\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAcquireSyncs\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pAcquireSyncs.GetAddress()); // WPT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: const uint64_t* pAcquireKeys
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAcquireKeys\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pAcquireKeys.GetAddress()); // WPT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: const uint32_t* pAcquireTimeouts
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAcquireTimeouts\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pAcquireTimeouts.GetAddress()); // WPT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t releaseCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"releaseCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkDeviceMemory* pReleaseSyncs
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceMemory\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pReleaseSyncs\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pReleaseSyncs.GetAddress()); // WPT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: const uint64_t* pReleaseKeys
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pReleaseKeys\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pReleaseKeys.GetAddress()); // WPT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkImportSemaphoreWin32HandleInfoKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkImportSemaphoreWin32HandleInfoKHR *pstruct = (const VkImportSemaphoreWin32HandleInfoKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkSemaphore semaphore
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSemaphore\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"semaphore\",\n";
    *out += "\n"; // GDS

    // struct member: VkSemaphoreImportFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSemaphoreImportFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: VkExternalSemaphoreHandleTypeFlagBits handleType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalSemaphoreHandleTypeFlagBits\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"handleType\",\n";
    *out += "\n"; // GDS

    // struct member: void* handle
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"handle\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.handle); // PWR
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: const wchar_t* name
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"wchar_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"name\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.name.GetAddress()); // KGJ
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkExportSemaphoreWin32HandleInfoKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkExportSemaphoreWin32HandleInfoKHR *pstruct = (const VkExportSemaphoreWin32HandleInfoKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: const SECURITY_ATTRIBUTES* pAttributes
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"SECURITY_ATTRIBUTES\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAttributes\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pAttributes->GetAddress()); // JHJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t dwAccess
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dwAccess\",\n";
    *out += "\n"; // GDS

    // struct member: const wchar_t* name
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"wchar_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"name\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.name.GetAddress()); // KGJ
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkD3D12FenceSubmitInfoKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkD3D12FenceSubmitInfoKHR *pstruct = (const VkD3D12FenceSubmitInfoKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t waitSemaphoreValuesCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"waitSemaphoreValuesCount\",\n";
    *out += "\n"; // GDS

    // struct member: const uint64_t* pWaitSemaphoreValues
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pWaitSemaphoreValues\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pWaitSemaphoreValues.GetAddress()); // WPT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t signalSemaphoreValuesCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"signalSemaphoreValuesCount\",\n";
    *out += "\n"; // GDS

    // struct member: const uint64_t* pSignalSemaphoreValues
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSignalSemaphoreValues\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pSignalSemaphoreValues.GetAddress()); // WPT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkSemaphoreGetWin32HandleInfoKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkSemaphoreGetWin32HandleInfoKHR *pstruct = (const VkSemaphoreGetWin32HandleInfoKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkSemaphore semaphore
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSemaphore\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"semaphore\",\n";
    *out += "\n"; // GDS

    // struct member: VkExternalSemaphoreHandleTypeFlagBits handleType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalSemaphoreHandleTypeFlagBits\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"handleType\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkImportSemaphoreFdInfoKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkImportSemaphoreFdInfoKHR *pstruct = (const VkImportSemaphoreFdInfoKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkSemaphore semaphore
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSemaphore\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"semaphore\",\n";
    *out += "\n"; // GDS

    // struct member: VkSemaphoreImportFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSemaphoreImportFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: VkExternalSemaphoreHandleTypeFlagBits handleType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalSemaphoreHandleTypeFlagBits\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"handleType\",\n";
    *out += "\n"; // GDS

    // struct member: int fd
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"int\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"fd\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkSemaphoreGetFdInfoKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkSemaphoreGetFdInfoKHR *pstruct = (const VkSemaphoreGetFdInfoKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkSemaphore semaphore
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSemaphore\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"semaphore\",\n";
    *out += "\n"; // GDS

    // struct member: VkExternalSemaphoreHandleTypeFlagBits handleType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalSemaphoreHandleTypeFlagBits\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"handleType\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDevicePushDescriptorPropertiesKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDevicePushDescriptorPropertiesKHR *pstruct = (const VkPhysicalDevicePushDescriptorPropertiesKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxPushDescriptors
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxPushDescriptors\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceShaderFloat16Int8FeaturesKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceShaderFloat16Int8FeaturesKHR *pstruct = (const VkPhysicalDeviceShaderFloat16Int8FeaturesKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderFloat16
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderFloat16\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderInt8
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderInt8\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkRectLayerKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkRectLayerKHR *pstruct = (const VkRectLayerKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkOffset2D offset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkOffset2D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"offset\",\n";
    *out += "\n"; // GDS

    // struct member: VkExtent2D extent
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExtent2D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"extent\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t layer
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"layer\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPresentRegionKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPresentRegionKHR *pstruct = (const VkPresentRegionKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: uint32_t rectangleCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"rectangleCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkRectLayerKHR* pRectangles
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkRectLayerKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pRectangles\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pRectangles->GetAddress()); // WUT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPresentRegionsKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPresentRegionsKHR *pstruct = (const VkPresentRegionsKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t swapchainCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"swapchainCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkPresentRegionKHR* pRegions
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPresentRegionKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pRegions\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pRegions->GetAddress()); // WUT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceImagelessFramebufferFeaturesKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceImagelessFramebufferFeaturesKHR *pstruct = (const VkPhysicalDeviceImagelessFramebufferFeaturesKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 imagelessFramebuffer
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"imagelessFramebuffer\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkFramebufferAttachmentImageInfoKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkFramebufferAttachmentImageInfoKHR *pstruct = (const VkFramebufferAttachmentImageInfoKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkImageCreateFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageCreateFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: VkImageUsageFlags usage
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageUsageFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"usage\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t width
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"width\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t height
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"height\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t layerCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"layerCount\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t viewFormatCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"viewFormatCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkFormat* pViewFormats
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFormat\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pViewFormats\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pViewFormats.GetAddress()); // WPT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkFramebufferAttachmentsCreateInfoKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkFramebufferAttachmentsCreateInfoKHR *pstruct = (const VkFramebufferAttachmentsCreateInfoKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t attachmentImageInfoCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"attachmentImageInfoCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkFramebufferAttachmentImageInfoKHR* pAttachmentImageInfos
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFramebufferAttachmentImageInfoKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAttachmentImageInfos\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pAttachmentImageInfos->GetAddress()); // WUT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkRenderPassAttachmentBeginInfoKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkRenderPassAttachmentBeginInfoKHR *pstruct = (const VkRenderPassAttachmentBeginInfoKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t attachmentCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"attachmentCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkImageView* pAttachments
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageView\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAttachments\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pAttachments.GetAddress()); // WPT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkAttachmentDescription2KHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkAttachmentDescription2KHR *pstruct = (const VkAttachmentDescription2KHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkAttachmentDescriptionFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkAttachmentDescriptionFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: VkFormat format
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFormat\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"format\",\n";
    *out += "\n"; // GDS

    // struct member: VkSampleCountFlagBits samples
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSampleCountFlagBits\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"samples\",\n";
    *out += "\n"; // GDS

    // struct member: VkAttachmentLoadOp loadOp
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkAttachmentLoadOp\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"loadOp\",\n";
    *out += "\n"; // GDS

    // struct member: VkAttachmentStoreOp storeOp
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkAttachmentStoreOp\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"storeOp\",\n";
    *out += "\n"; // GDS

    // struct member: VkAttachmentLoadOp stencilLoadOp
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkAttachmentLoadOp\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"stencilLoadOp\",\n";
    *out += "\n"; // GDS

    // struct member: VkAttachmentStoreOp stencilStoreOp
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkAttachmentStoreOp\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"stencilStoreOp\",\n";
    *out += "\n"; // GDS

    // struct member: VkImageLayout initialLayout
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageLayout\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"initialLayout\",\n";
    *out += "\n"; // GDS

    // struct member: VkImageLayout finalLayout
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageLayout\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"finalLayout\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkAttachmentReference2KHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkAttachmentReference2KHR *pstruct = (const VkAttachmentReference2KHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t attachment
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"attachment\",\n";
    *out += "\n"; // GDS

    // struct member: VkImageLayout layout
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageLayout\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"layout\",\n";
    *out += "\n"; // GDS

    // struct member: VkImageAspectFlags aspectMask
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageAspectFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"aspectMask\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkSubpassDescription2KHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkSubpassDescription2KHR *pstruct = (const VkSubpassDescription2KHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkSubpassDescriptionFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSubpassDescriptionFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: VkPipelineBindPoint pipelineBindPoint
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineBindPoint\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pipelineBindPoint\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t viewMask
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"viewMask\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t inputAttachmentCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"inputAttachmentCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkAttachmentReference2KHR* pInputAttachments
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkAttachmentReference2KHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pInputAttachments\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pInputAttachments->GetAddress()); // WUT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t colorAttachmentCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"colorAttachmentCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkAttachmentReference2KHR* pColorAttachments
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkAttachmentReference2KHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pColorAttachments\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pColorAttachments->GetAddress()); // WUT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: const VkAttachmentReference2KHR* pResolveAttachments
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkAttachmentReference2KHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pResolveAttachments\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pResolveAttachments->GetAddress()); // WUT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: const VkAttachmentReference2KHR* pDepthStencilAttachment
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkAttachmentReference2KHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pDepthStencilAttachment\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pDepthStencilAttachment->GetAddress()); // JHJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t preserveAttachmentCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"preserveAttachmentCount\",\n";
    *out += "\n"; // GDS

    // struct member: const uint32_t* pPreserveAttachments
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pPreserveAttachments\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pPreserveAttachments.GetAddress()); // WPT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkSubpassDependency2KHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkSubpassDependency2KHR *pstruct = (const VkSubpassDependency2KHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t srcSubpass
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"srcSubpass\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t dstSubpass
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstSubpass\",\n";
    *out += "\n"; // GDS

    // struct member: VkPipelineStageFlags srcStageMask
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineStageFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"srcStageMask\",\n";
    *out += "\n"; // GDS

    // struct member: VkPipelineStageFlags dstStageMask
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineStageFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstStageMask\",\n";
    *out += "\n"; // GDS

    // struct member: VkAccessFlags srcAccessMask
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkAccessFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"srcAccessMask\",\n";
    *out += "\n"; // GDS

    // struct member: VkAccessFlags dstAccessMask
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkAccessFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstAccessMask\",\n";
    *out += "\n"; // GDS

    // struct member: VkDependencyFlags dependencyFlags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDependencyFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dependencyFlags\",\n";
    *out += "\n"; // GDS

    // struct member: int32_t viewOffset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"int32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"viewOffset\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkRenderPassCreateInfo2KHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkRenderPassCreateInfo2KHR *pstruct = (const VkRenderPassCreateInfo2KHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkRenderPassCreateFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkRenderPassCreateFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t attachmentCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"attachmentCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkAttachmentDescription2KHR* pAttachments
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkAttachmentDescription2KHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAttachments\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pAttachments->GetAddress()); // WUT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t subpassCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"subpassCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkSubpassDescription2KHR* pSubpasses
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSubpassDescription2KHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSubpasses\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pSubpasses->GetAddress()); // WUT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t dependencyCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dependencyCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkSubpassDependency2KHR* pDependencies
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSubpassDependency2KHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pDependencies\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pDependencies->GetAddress()); // WUT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t correlatedViewMaskCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"correlatedViewMaskCount\",\n";
    *out += "\n"; // GDS

    // struct member: const uint32_t* pCorrelatedViewMasks
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCorrelatedViewMasks\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pCorrelatedViewMasks.GetAddress()); // WPT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkSubpassBeginInfoKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkSubpassBeginInfoKHR *pstruct = (const VkSubpassBeginInfoKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkSubpassContents contents
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSubpassContents\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"contents\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkSubpassEndInfoKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkSubpassEndInfoKHR *pstruct = (const VkSubpassEndInfoKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkSharedPresentSurfaceCapabilitiesKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkSharedPresentSurfaceCapabilitiesKHR *pstruct = (const VkSharedPresentSurfaceCapabilitiesKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkImageUsageFlags sharedPresentSupportedUsageFlags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageUsageFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sharedPresentSupportedUsageFlags\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkImportFenceWin32HandleInfoKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkImportFenceWin32HandleInfoKHR *pstruct = (const VkImportFenceWin32HandleInfoKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkFence fence
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFence\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"fence\",\n";
    *out += "\n"; // GDS

    // struct member: VkFenceImportFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFenceImportFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: VkExternalFenceHandleTypeFlagBits handleType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalFenceHandleTypeFlagBits\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"handleType\",\n";
    *out += "\n"; // GDS

    // struct member: void* handle
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"handle\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.handle); // PWR
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: const wchar_t* name
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"wchar_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"name\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.name.GetAddress()); // KGJ
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkExportFenceWin32HandleInfoKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkExportFenceWin32HandleInfoKHR *pstruct = (const VkExportFenceWin32HandleInfoKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: const SECURITY_ATTRIBUTES* pAttributes
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"SECURITY_ATTRIBUTES\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAttributes\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pAttributes->GetAddress()); // JHJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t dwAccess
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dwAccess\",\n";
    *out += "\n"; // GDS

    // struct member: const wchar_t* name
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"wchar_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"name\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.name.GetAddress()); // KGJ
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkFenceGetWin32HandleInfoKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkFenceGetWin32HandleInfoKHR *pstruct = (const VkFenceGetWin32HandleInfoKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkFence fence
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFence\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"fence\",\n";
    *out += "\n"; // GDS

    // struct member: VkExternalFenceHandleTypeFlagBits handleType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalFenceHandleTypeFlagBits\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"handleType\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkImportFenceFdInfoKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkImportFenceFdInfoKHR *pstruct = (const VkImportFenceFdInfoKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkFence fence
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFence\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"fence\",\n";
    *out += "\n"; // GDS

    // struct member: VkFenceImportFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFenceImportFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: VkExternalFenceHandleTypeFlagBits handleType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalFenceHandleTypeFlagBits\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"handleType\",\n";
    *out += "\n"; // GDS

    // struct member: int fd
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"int\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"fd\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkFenceGetFdInfoKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkFenceGetFdInfoKHR *pstruct = (const VkFenceGetFdInfoKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkFence fence
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFence\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"fence\",\n";
    *out += "\n"; // GDS

    // struct member: VkExternalFenceHandleTypeFlagBits handleType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalFenceHandleTypeFlagBits\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"handleType\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceSurfaceInfo2KHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceSurfaceInfo2KHR *pstruct = (const VkPhysicalDeviceSurfaceInfo2KHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkSurfaceKHR surface
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSurfaceKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"surface\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkSurfaceCapabilities2KHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkSurfaceCapabilities2KHR *pstruct = (const VkSurfaceCapabilities2KHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkSurfaceCapabilitiesKHR surfaceCapabilities
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSurfaceCapabilitiesKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"surfaceCapabilities\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkSurfaceFormat2KHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkSurfaceFormat2KHR *pstruct = (const VkSurfaceFormat2KHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkSurfaceFormatKHR surfaceFormat
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSurfaceFormatKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"surfaceFormat\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDisplayProperties2KHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDisplayProperties2KHR *pstruct = (const VkDisplayProperties2KHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkDisplayPropertiesKHR displayProperties
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDisplayPropertiesKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"displayProperties\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDisplayPlaneProperties2KHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDisplayPlaneProperties2KHR *pstruct = (const VkDisplayPlaneProperties2KHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkDisplayPlanePropertiesKHR displayPlaneProperties
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDisplayPlanePropertiesKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"displayPlaneProperties\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDisplayModeProperties2KHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDisplayModeProperties2KHR *pstruct = (const VkDisplayModeProperties2KHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkDisplayModePropertiesKHR displayModeProperties
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDisplayModePropertiesKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"displayModeProperties\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDisplayPlaneInfo2KHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDisplayPlaneInfo2KHR *pstruct = (const VkDisplayPlaneInfo2KHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkDisplayModeKHR mode
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDisplayModeKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"mode\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t planeIndex
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"planeIndex\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDisplayPlaneCapabilities2KHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDisplayPlaneCapabilities2KHR *pstruct = (const VkDisplayPlaneCapabilities2KHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkDisplayPlaneCapabilitiesKHR capabilities
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDisplayPlaneCapabilitiesKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"capabilities\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkImageFormatListCreateInfoKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkImageFormatListCreateInfoKHR *pstruct = (const VkImageFormatListCreateInfoKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t viewFormatCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"viewFormatCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkFormat* pViewFormats
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFormat\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pViewFormats\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pViewFormats.GetAddress()); // WPT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceShaderSubgroupExtendedTypesFeaturesKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceShaderSubgroupExtendedTypesFeaturesKHR *pstruct = (const VkPhysicalDeviceShaderSubgroupExtendedTypesFeaturesKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderSubgroupExtendedTypes
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderSubgroupExtendedTypes\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDevice8BitStorageFeaturesKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDevice8BitStorageFeaturesKHR *pstruct = (const VkPhysicalDevice8BitStorageFeaturesKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 storageBuffer8BitAccess
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"storageBuffer8BitAccess\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 uniformAndStorageBuffer8BitAccess
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"uniformAndStorageBuffer8BitAccess\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 storagePushConstant8
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"storagePushConstant8\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceShaderAtomicInt64FeaturesKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceShaderAtomicInt64FeaturesKHR *pstruct = (const VkPhysicalDeviceShaderAtomicInt64FeaturesKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderBufferInt64Atomics
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderBufferInt64Atomics\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderSharedInt64Atomics
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderSharedInt64Atomics\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceShaderClockFeaturesKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceShaderClockFeaturesKHR *pstruct = (const VkPhysicalDeviceShaderClockFeaturesKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderSubgroupClock
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderSubgroupClock\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderDeviceClock
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderDeviceClock\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkConformanceVersionKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkConformanceVersionKHR *pstruct = (const VkConformanceVersionKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: uint8_t major
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint8_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"major\",\n";
    *out += "\n"; // GDS

    // struct member: uint8_t minor
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint8_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"minor\",\n";
    *out += "\n"; // GDS

    // struct member: uint8_t subminor
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint8_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"subminor\",\n";
    *out += "\n"; // GDS

    // struct member: uint8_t patch
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint8_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"patch\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceDriverPropertiesKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceDriverPropertiesKHR *pstruct = (const VkPhysicalDeviceDriverPropertiesKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkDriverIdKHR driverID
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDriverIdKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"driverID\",\n";
    *out += "\n"; // GDS

    // struct member: char driverName
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"char\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"driverName\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, base_addr + offsetof(VkPhysicalDeviceDriverPropertiesKHR, driverName)); // IYY
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: char driverInfo
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"char\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"driverInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, base_addr + offsetof(VkPhysicalDeviceDriverPropertiesKHR, driverInfo)); // IYY
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkConformanceVersionKHR conformanceVersion
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkConformanceVersionKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"conformanceVersion\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceFloatControlsPropertiesKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceFloatControlsPropertiesKHR *pstruct = (const VkPhysicalDeviceFloatControlsPropertiesKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkShaderFloatControlsIndependenceKHR denormBehaviorIndependence
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkShaderFloatControlsIndependenceKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"denormBehaviorIndependence\",\n";
    *out += "\n"; // GDS

    // struct member: VkShaderFloatControlsIndependenceKHR roundingModeIndependence
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkShaderFloatControlsIndependenceKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"roundingModeIndependence\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderSignedZeroInfNanPreserveFloat16
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderSignedZeroInfNanPreserveFloat16\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderSignedZeroInfNanPreserveFloat32
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderSignedZeroInfNanPreserveFloat32\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderSignedZeroInfNanPreserveFloat64
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderSignedZeroInfNanPreserveFloat64\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderDenormPreserveFloat16
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderDenormPreserveFloat16\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderDenormPreserveFloat32
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderDenormPreserveFloat32\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderDenormPreserveFloat64
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderDenormPreserveFloat64\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderDenormFlushToZeroFloat16
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderDenormFlushToZeroFloat16\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderDenormFlushToZeroFloat32
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderDenormFlushToZeroFloat32\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderDenormFlushToZeroFloat64
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderDenormFlushToZeroFloat64\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderRoundingModeRTEFloat16
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderRoundingModeRTEFloat16\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderRoundingModeRTEFloat32
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderRoundingModeRTEFloat32\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderRoundingModeRTEFloat64
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderRoundingModeRTEFloat64\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderRoundingModeRTZFloat16
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderRoundingModeRTZFloat16\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderRoundingModeRTZFloat32
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderRoundingModeRTZFloat32\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderRoundingModeRTZFloat64
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderRoundingModeRTZFloat64\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkSubpassDescriptionDepthStencilResolveKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkSubpassDescriptionDepthStencilResolveKHR *pstruct = (const VkSubpassDescriptionDepthStencilResolveKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkResolveModeFlagBitsKHR depthResolveMode
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkResolveModeFlagBitsKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"depthResolveMode\",\n";
    *out += "\n"; // GDS

    // struct member: VkResolveModeFlagBitsKHR stencilResolveMode
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkResolveModeFlagBitsKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"stencilResolveMode\",\n";
    *out += "\n"; // GDS

    // struct member: const VkAttachmentReference2KHR* pDepthStencilResolveAttachment
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkAttachmentReference2KHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pDepthStencilResolveAttachment\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pDepthStencilResolveAttachment->GetAddress()); // JHJ
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceDepthStencilResolvePropertiesKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceDepthStencilResolvePropertiesKHR *pstruct = (const VkPhysicalDeviceDepthStencilResolvePropertiesKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkResolveModeFlagsKHR supportedDepthResolveModes
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkResolveModeFlagsKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"supportedDepthResolveModes\",\n";
    *out += "\n"; // GDS

    // struct member: VkResolveModeFlagsKHR supportedStencilResolveModes
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkResolveModeFlagsKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"supportedStencilResolveModes\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 independentResolveNone
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"independentResolveNone\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 independentResolve
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"independentResolve\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceTimelineSemaphoreFeaturesKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceTimelineSemaphoreFeaturesKHR *pstruct = (const VkPhysicalDeviceTimelineSemaphoreFeaturesKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 timelineSemaphore
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"timelineSemaphore\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceTimelineSemaphorePropertiesKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceTimelineSemaphorePropertiesKHR *pstruct = (const VkPhysicalDeviceTimelineSemaphorePropertiesKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint64_t maxTimelineSemaphoreValueDifference
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxTimelineSemaphoreValueDifference\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkSemaphoreTypeCreateInfoKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkSemaphoreTypeCreateInfoKHR *pstruct = (const VkSemaphoreTypeCreateInfoKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkSemaphoreTypeKHR semaphoreType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSemaphoreTypeKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"semaphoreType\",\n";
    *out += "\n"; // GDS

    // struct member: uint64_t initialValue
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"initialValue\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkTimelineSemaphoreSubmitInfoKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkTimelineSemaphoreSubmitInfoKHR *pstruct = (const VkTimelineSemaphoreSubmitInfoKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t waitSemaphoreValueCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"waitSemaphoreValueCount\",\n";
    *out += "\n"; // GDS

    // struct member: const uint64_t* pWaitSemaphoreValues
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pWaitSemaphoreValues\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pWaitSemaphoreValues.GetAddress()); // WPT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t signalSemaphoreValueCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"signalSemaphoreValueCount\",\n";
    *out += "\n"; // GDS

    // struct member: const uint64_t* pSignalSemaphoreValues
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSignalSemaphoreValues\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pSignalSemaphoreValues.GetAddress()); // WPT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkSemaphoreWaitInfoKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkSemaphoreWaitInfoKHR *pstruct = (const VkSemaphoreWaitInfoKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkSemaphoreWaitFlagsKHR flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSemaphoreWaitFlagsKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t semaphoreCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"semaphoreCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkSemaphore* pSemaphores
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSemaphore\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSemaphores\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pSemaphores.GetAddress()); // WPT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: const uint64_t* pValues
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pValues\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pValues.GetAddress()); // WPT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkSemaphoreSignalInfoKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkSemaphoreSignalInfoKHR *pstruct = (const VkSemaphoreSignalInfoKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkSemaphore semaphore
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSemaphore\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"semaphore\",\n";
    *out += "\n"; // GDS

    // struct member: uint64_t value
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"value\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceVulkanMemoryModelFeaturesKHR *pstruct = (const VkPhysicalDeviceVulkanMemoryModelFeaturesKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 vulkanMemoryModel
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"vulkanMemoryModel\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 vulkanMemoryModelDeviceScope
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"vulkanMemoryModelDeviceScope\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 vulkanMemoryModelAvailabilityVisibilityChains
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"vulkanMemoryModelAvailabilityVisibilityChains\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkSurfaceProtectedCapabilitiesKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkSurfaceProtectedCapabilitiesKHR *pstruct = (const VkSurfaceProtectedCapabilitiesKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 supportsProtected
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"supportsProtected\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR *pstruct = (const VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 uniformBufferStandardLayout
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"uniformBufferStandardLayout\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR *pstruct = (const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 pipelineExecutableInfo
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pipelineExecutableInfo\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPipelineInfoKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPipelineInfoKHR *pstruct = (const VkPipelineInfoKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkPipeline pipeline
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipeline\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pipeline\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPipelineExecutablePropertiesKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPipelineExecutablePropertiesKHR *pstruct = (const VkPipelineExecutablePropertiesKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkShaderStageFlags stages
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkShaderStageFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"stages\",\n";
    *out += "\n"; // GDS

    // struct member: char name
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"char\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"name\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, base_addr + offsetof(VkPipelineExecutablePropertiesKHR, name)); // IYY
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: char description
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"char\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"description\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, base_addr + offsetof(VkPipelineExecutablePropertiesKHR, description)); // IYY
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t subgroupSize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"subgroupSize\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPipelineExecutableInfoKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPipelineExecutableInfoKHR *pstruct = (const VkPipelineExecutableInfoKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkPipeline pipeline
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipeline\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pipeline\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t executableIndex
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"executableIndex\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPipelineExecutableStatisticValueKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPipelineExecutableStatisticValueKHR *pstruct = (const VkPipelineExecutableStatisticValueKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkBool32 b32
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"b32\",\n";
    *out += "\n"; // GDS

    // struct member: int64_t i64
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"int64_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"i64\",\n";
    *out += "\n"; // GDS

    // struct member: uint64_t u64
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"u64\",\n";
    *out += "\n"; // GDS

    // struct member: double f64
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"double\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"f64\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPipelineExecutableStatisticKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPipelineExecutableStatisticKHR *pstruct = (const VkPipelineExecutableStatisticKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: char name
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"char\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"name\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, base_addr + offsetof(VkPipelineExecutableStatisticKHR, name)); // IYY
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: char description
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"char\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"description\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, base_addr + offsetof(VkPipelineExecutableStatisticKHR, description)); // IYY
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkPipelineExecutableStatisticFormatKHR format
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineExecutableStatisticFormatKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"format\",\n";
    *out += "\n"; // GDS

    // struct member: VkPipelineExecutableStatisticValueKHR value
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineExecutableStatisticValueKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"value\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPipelineExecutableInternalRepresentationKHR &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPipelineExecutableInternalRepresentationKHR *pstruct = (const VkPipelineExecutableInternalRepresentationKHR *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: char name
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"char\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"name\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, base_addr + offsetof(VkPipelineExecutableInternalRepresentationKHR, name)); // IYY
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: char description
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"char\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"description\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, base_addr + offsetof(VkPipelineExecutableInternalRepresentationKHR, description)); // IYY
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 isText
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"isText\",\n";
    *out += "\n"; // GDS

    // struct member: size_t dataSize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"size_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dataSize\",\n";
    *out += "\n"; // GDS

    // struct member: void* pData
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pData\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pData.GetAddress()); // WPT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDebugReportCallbackCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDebugReportCallbackCreateInfoEXT *pstruct = (const VkDebugReportCallbackCreateInfoEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkDebugReportFlagsEXT flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDebugReportFlagsEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: PFN_vkDebugReportCallbackEXT pfnCallback
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"PFN_vkDebugReportCallbackEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pfnCallback\",\n";
    *out += "\n"; // GDS

    // struct member: void* pUserData
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pUserData\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pUserData); // PWR
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPipelineRasterizationStateRasterizationOrderAMD &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPipelineRasterizationStateRasterizationOrderAMD *pstruct = (const VkPipelineRasterizationStateRasterizationOrderAMD *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkRasterizationOrderAMD rasterizationOrder
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkRasterizationOrderAMD\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"rasterizationOrder\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDebugMarkerObjectNameInfoEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDebugMarkerObjectNameInfoEXT *pstruct = (const VkDebugMarkerObjectNameInfoEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkDebugReportObjectTypeEXT objectType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDebugReportObjectTypeEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"objectType\",\n";
    *out += "\n"; // GDS

    // struct member: uint64_t object
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"object\",\n";
    *out += "\n"; // GDS

    // struct member: const char* pObjectName
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"char\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pObjectName\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pObjectName.GetAddress()); // KGJ
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDebugMarkerObjectTagInfoEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDebugMarkerObjectTagInfoEXT *pstruct = (const VkDebugMarkerObjectTagInfoEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkDebugReportObjectTypeEXT objectType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDebugReportObjectTypeEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"objectType\",\n";
    *out += "\n"; // GDS

    // struct member: uint64_t object
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"object\",\n";
    *out += "\n"; // GDS

    // struct member: uint64_t tagName
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"tagName\",\n";
    *out += "\n"; // GDS

    // struct member: size_t tagSize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"size_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"tagSize\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pTag
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pTag\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pTag.GetAddress()); // WPT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDebugMarkerMarkerInfoEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDebugMarkerMarkerInfoEXT *pstruct = (const VkDebugMarkerMarkerInfoEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: const char* pMarkerName
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"char\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pMarkerName\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pMarkerName.GetAddress()); // KGJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: float color
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"color\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, base_addr + offsetof(VkDebugMarkerMarkerInfoEXT, color)); // IYY
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDedicatedAllocationImageCreateInfoNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDedicatedAllocationImageCreateInfoNV *pstruct = (const VkDedicatedAllocationImageCreateInfoNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 dedicatedAllocation
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dedicatedAllocation\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDedicatedAllocationBufferCreateInfoNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDedicatedAllocationBufferCreateInfoNV *pstruct = (const VkDedicatedAllocationBufferCreateInfoNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 dedicatedAllocation
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dedicatedAllocation\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDedicatedAllocationMemoryAllocateInfoNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDedicatedAllocationMemoryAllocateInfoNV *pstruct = (const VkDedicatedAllocationMemoryAllocateInfoNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkImage image
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImage\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"image\",\n";
    *out += "\n"; // GDS

    // struct member: VkBuffer buffer
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"buffer\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceTransformFeedbackFeaturesEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceTransformFeedbackFeaturesEXT *pstruct = (const VkPhysicalDeviceTransformFeedbackFeaturesEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 transformFeedback
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"transformFeedback\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 geometryStreams
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"geometryStreams\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceTransformFeedbackPropertiesEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceTransformFeedbackPropertiesEXT *pstruct = (const VkPhysicalDeviceTransformFeedbackPropertiesEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxTransformFeedbackStreams
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxTransformFeedbackStreams\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxTransformFeedbackBuffers
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxTransformFeedbackBuffers\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize maxTransformFeedbackBufferSize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxTransformFeedbackBufferSize\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxTransformFeedbackStreamDataSize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxTransformFeedbackStreamDataSize\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxTransformFeedbackBufferDataSize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxTransformFeedbackBufferDataSize\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxTransformFeedbackBufferDataStride
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxTransformFeedbackBufferDataStride\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 transformFeedbackQueries
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"transformFeedbackQueries\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 transformFeedbackStreamsLinesTriangles
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"transformFeedbackStreamsLinesTriangles\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 transformFeedbackRasterizationStreamSelect
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"transformFeedbackRasterizationStreamSelect\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 transformFeedbackDraw
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"transformFeedbackDraw\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPipelineRasterizationStateStreamCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPipelineRasterizationStateStreamCreateInfoEXT *pstruct = (const VkPipelineRasterizationStateStreamCreateInfoEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkPipelineRasterizationStateStreamCreateFlagsEXT flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineRasterizationStateStreamCreateFlagsEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t rasterizationStream
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"rasterizationStream\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkImageViewHandleInfoNVX &pstruct_in, int indent, uint64_t base_addr)
{
    const VkImageViewHandleInfoNVX *pstruct = (const VkImageViewHandleInfoNVX *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkImageView imageView
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageView\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"imageView\",\n";
    *out += "\n"; // GDS

    // struct member: VkDescriptorType descriptorType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDescriptorType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"descriptorType\",\n";
    *out += "\n"; // GDS

    // struct member: VkSampler sampler
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSampler\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sampler\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkTextureLODGatherFormatPropertiesAMD &pstruct_in, int indent, uint64_t base_addr)
{
    const VkTextureLODGatherFormatPropertiesAMD *pstruct = (const VkTextureLODGatherFormatPropertiesAMD *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 supportsTextureGatherLODBiasAMD
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"supportsTextureGatherLODBiasAMD\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkShaderResourceUsageAMD &pstruct_in, int indent, uint64_t base_addr)
{
    const VkShaderResourceUsageAMD *pstruct = (const VkShaderResourceUsageAMD *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: uint32_t numUsedVgprs
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"numUsedVgprs\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t numUsedSgprs
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"numUsedSgprs\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t ldsSizePerLocalWorkGroup
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"ldsSizePerLocalWorkGroup\",\n";
    *out += "\n"; // GDS

    // struct member: size_t ldsUsageSizeInBytes
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"size_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"ldsUsageSizeInBytes\",\n";
    *out += "\n"; // GDS

    // struct member: size_t scratchMemUsageInBytes
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"size_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"scratchMemUsageInBytes\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkShaderStatisticsInfoAMD &pstruct_in, int indent, uint64_t base_addr)
{
    const VkShaderStatisticsInfoAMD *pstruct = (const VkShaderStatisticsInfoAMD *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkShaderStageFlags shaderStageMask
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkShaderStageFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderStageMask\",\n";
    *out += "\n"; // GDS

    // struct member: VkShaderResourceUsageAMD resourceUsage
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkShaderResourceUsageAMD\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"resourceUsage\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t numPhysicalVgprs
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"numPhysicalVgprs\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t numPhysicalSgprs
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"numPhysicalSgprs\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t numAvailableVgprs
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"numAvailableVgprs\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t numAvailableSgprs
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"numAvailableSgprs\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t computeWorkGroupSize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"computeWorkGroupSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, base_addr + offsetof(VkShaderStatisticsInfoAMD, computeWorkGroupSize)); // IYY
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkStreamDescriptorSurfaceCreateInfoGGP &pstruct_in, int indent, uint64_t base_addr)
{
    const VkStreamDescriptorSurfaceCreateInfoGGP *pstruct = (const VkStreamDescriptorSurfaceCreateInfoGGP *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkStreamDescriptorSurfaceCreateFlagsGGP flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStreamDescriptorSurfaceCreateFlagsGGP\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: uint64_t streamDescriptor
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"streamDescriptor\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceCornerSampledImageFeaturesNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceCornerSampledImageFeaturesNV *pstruct = (const VkPhysicalDeviceCornerSampledImageFeaturesNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 cornerSampledImage
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"cornerSampledImage\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkExternalImageFormatPropertiesNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkExternalImageFormatPropertiesNV *pstruct = (const VkExternalImageFormatPropertiesNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkImageFormatProperties imageFormatProperties
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageFormatProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"imageFormatProperties\",\n";
    *out += "\n"; // GDS

    // struct member: VkExternalMemoryFeatureFlagsNV externalMemoryFeatures
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalMemoryFeatureFlagsNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"externalMemoryFeatures\",\n";
    *out += "\n"; // GDS

    // struct member: VkExternalMemoryHandleTypeFlagsNV exportFromImportedHandleTypes
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalMemoryHandleTypeFlagsNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"exportFromImportedHandleTypes\",\n";
    *out += "\n"; // GDS

    // struct member: VkExternalMemoryHandleTypeFlagsNV compatibleHandleTypes
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalMemoryHandleTypeFlagsNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"compatibleHandleTypes\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkExternalMemoryImageCreateInfoNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkExternalMemoryImageCreateInfoNV *pstruct = (const VkExternalMemoryImageCreateInfoNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkExternalMemoryHandleTypeFlagsNV handleTypes
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalMemoryHandleTypeFlagsNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"handleTypes\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkExportMemoryAllocateInfoNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkExportMemoryAllocateInfoNV *pstruct = (const VkExportMemoryAllocateInfoNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkExternalMemoryHandleTypeFlagsNV handleTypes
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalMemoryHandleTypeFlagsNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"handleTypes\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkImportMemoryWin32HandleInfoNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkImportMemoryWin32HandleInfoNV *pstruct = (const VkImportMemoryWin32HandleInfoNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkExternalMemoryHandleTypeFlagsNV handleType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalMemoryHandleTypeFlagsNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"handleType\",\n";
    *out += "\n"; // GDS

    // struct member: void* handle
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"handle\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.handle); // PWR
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkExportMemoryWin32HandleInfoNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkExportMemoryWin32HandleInfoNV *pstruct = (const VkExportMemoryWin32HandleInfoNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: const SECURITY_ATTRIBUTES* pAttributes
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"SECURITY_ATTRIBUTES\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAttributes\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pAttributes->GetAddress()); // JHJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t dwAccess
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dwAccess\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkWin32KeyedMutexAcquireReleaseInfoNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkWin32KeyedMutexAcquireReleaseInfoNV *pstruct = (const VkWin32KeyedMutexAcquireReleaseInfoNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t acquireCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"acquireCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkDeviceMemory* pAcquireSyncs
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceMemory\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAcquireSyncs\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pAcquireSyncs.GetAddress()); // WPT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: const uint64_t* pAcquireKeys
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAcquireKeys\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pAcquireKeys.GetAddress()); // WPT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: const uint32_t* pAcquireTimeoutMilliseconds
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAcquireTimeoutMilliseconds\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pAcquireTimeoutMilliseconds.GetAddress()); // WPT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t releaseCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"releaseCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkDeviceMemory* pReleaseSyncs
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceMemory\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pReleaseSyncs\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pReleaseSyncs.GetAddress()); // WPT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: const uint64_t* pReleaseKeys
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pReleaseKeys\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pReleaseKeys.GetAddress()); // WPT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkValidationFlagsEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkValidationFlagsEXT *pstruct = (const VkValidationFlagsEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t disabledValidationCheckCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"disabledValidationCheckCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkValidationCheckEXT* pDisabledValidationChecks
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkValidationCheckEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pDisabledValidationChecks\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pDisabledValidationChecks.GetAddress()); // WPT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkViSurfaceCreateInfoNN &pstruct_in, int indent, uint64_t base_addr)
{
    const VkViSurfaceCreateInfoNN *pstruct = (const VkViSurfaceCreateInfoNN *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkViSurfaceCreateFlagsNN flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkViSurfaceCreateFlagsNN\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: void* window
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"window\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.window); // PWR
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT *pstruct = (const VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 textureCompressionASTC_HDR
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"textureCompressionASTC_HDR\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkImageViewASTCDecodeModeEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkImageViewASTCDecodeModeEXT *pstruct = (const VkImageViewASTCDecodeModeEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkFormat decodeMode
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFormat\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"decodeMode\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceASTCDecodeFeaturesEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceASTCDecodeFeaturesEXT *pstruct = (const VkPhysicalDeviceASTCDecodeFeaturesEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 decodeModeSharedExponent
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"decodeModeSharedExponent\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkConditionalRenderingBeginInfoEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkConditionalRenderingBeginInfoEXT *pstruct = (const VkConditionalRenderingBeginInfoEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBuffer buffer
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"buffer\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize offset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"offset\",\n";
    *out += "\n"; // GDS

    // struct member: VkConditionalRenderingFlagsEXT flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkConditionalRenderingFlagsEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceConditionalRenderingFeaturesEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceConditionalRenderingFeaturesEXT *pstruct = (const VkPhysicalDeviceConditionalRenderingFeaturesEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 conditionalRendering
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"conditionalRendering\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 inheritedConditionalRendering
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"inheritedConditionalRendering\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkCommandBufferInheritanceConditionalRenderingInfoEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkCommandBufferInheritanceConditionalRenderingInfoEXT *pstruct = (const VkCommandBufferInheritanceConditionalRenderingInfoEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 conditionalRenderingEnable
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"conditionalRenderingEnable\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDeviceGeneratedCommandsFeaturesNVX &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDeviceGeneratedCommandsFeaturesNVX *pstruct = (const VkDeviceGeneratedCommandsFeaturesNVX *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 computeBindingPointSupport
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"computeBindingPointSupport\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDeviceGeneratedCommandsLimitsNVX &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDeviceGeneratedCommandsLimitsNVX *pstruct = (const VkDeviceGeneratedCommandsLimitsNVX *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxIndirectCommandsLayoutTokenCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxIndirectCommandsLayoutTokenCount\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxObjectEntryCounts
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxObjectEntryCounts\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t minSequenceCountBufferOffsetAlignment
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"minSequenceCountBufferOffsetAlignment\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t minSequenceIndexBufferOffsetAlignment
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"minSequenceIndexBufferOffsetAlignment\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t minCommandsTokenBufferOffsetAlignment
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"minCommandsTokenBufferOffsetAlignment\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkIndirectCommandsTokenNVX &pstruct_in, int indent, uint64_t base_addr)
{
    const VkIndirectCommandsTokenNVX *pstruct = (const VkIndirectCommandsTokenNVX *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkIndirectCommandsTokenTypeNVX tokenType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkIndirectCommandsTokenTypeNVX\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"tokenType\",\n";
    *out += "\n"; // GDS

    // struct member: VkBuffer buffer
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"buffer\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize offset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"offset\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkIndirectCommandsLayoutTokenNVX &pstruct_in, int indent, uint64_t base_addr)
{
    const VkIndirectCommandsLayoutTokenNVX *pstruct = (const VkIndirectCommandsLayoutTokenNVX *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkIndirectCommandsTokenTypeNVX tokenType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkIndirectCommandsTokenTypeNVX\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"tokenType\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t bindingUnit
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"bindingUnit\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t dynamicCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dynamicCount\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t divisor
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"divisor\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkIndirectCommandsLayoutCreateInfoNVX &pstruct_in, int indent, uint64_t base_addr)
{
    const VkIndirectCommandsLayoutCreateInfoNVX *pstruct = (const VkIndirectCommandsLayoutCreateInfoNVX *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkPipelineBindPoint pipelineBindPoint
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineBindPoint\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pipelineBindPoint\",\n";
    *out += "\n"; // GDS

    // struct member: VkIndirectCommandsLayoutUsageFlagsNVX flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkIndirectCommandsLayoutUsageFlagsNVX\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t tokenCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"tokenCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkIndirectCommandsLayoutTokenNVX* pTokens
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkIndirectCommandsLayoutTokenNVX\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pTokens\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pTokens->GetAddress()); // WUT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkCmdProcessCommandsInfoNVX &pstruct_in, int indent, uint64_t base_addr)
{
    const VkCmdProcessCommandsInfoNVX *pstruct = (const VkCmdProcessCommandsInfoNVX *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkObjectTableNVX objectTable
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkObjectTableNVX\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"objectTable\",\n";
    *out += "\n"; // GDS

    // struct member: VkIndirectCommandsLayoutNVX indirectCommandsLayout
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkIndirectCommandsLayoutNVX\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"indirectCommandsLayout\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t indirectCommandsTokenCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"indirectCommandsTokenCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkIndirectCommandsTokenNVX* pIndirectCommandsTokens
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkIndirectCommandsTokenNVX\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pIndirectCommandsTokens\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pIndirectCommandsTokens->GetAddress()); // WUT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxSequencesCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxSequencesCount\",\n";
    *out += "\n"; // GDS

    // struct member: VkCommandBuffer targetCommandBuffer
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCommandBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"targetCommandBuffer\",\n";
    *out += "\n"; // GDS

    // struct member: VkBuffer sequencesCountBuffer
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sequencesCountBuffer\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize sequencesCountOffset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sequencesCountOffset\",\n";
    *out += "\n"; // GDS

    // struct member: VkBuffer sequencesIndexBuffer
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sequencesIndexBuffer\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize sequencesIndexOffset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sequencesIndexOffset\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkCmdReserveSpaceForCommandsInfoNVX &pstruct_in, int indent, uint64_t base_addr)
{
    const VkCmdReserveSpaceForCommandsInfoNVX *pstruct = (const VkCmdReserveSpaceForCommandsInfoNVX *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkObjectTableNVX objectTable
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkObjectTableNVX\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"objectTable\",\n";
    *out += "\n"; // GDS

    // struct member: VkIndirectCommandsLayoutNVX indirectCommandsLayout
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkIndirectCommandsLayoutNVX\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"indirectCommandsLayout\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxSequencesCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxSequencesCount\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkObjectTableCreateInfoNVX &pstruct_in, int indent, uint64_t base_addr)
{
    const VkObjectTableCreateInfoNVX *pstruct = (const VkObjectTableCreateInfoNVX *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t objectCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"objectCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkObjectEntryTypeNVX* pObjectEntryTypes
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkObjectEntryTypeNVX\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pObjectEntryTypes\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pObjectEntryTypes.GetAddress()); // WPT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: const uint32_t* pObjectEntryCounts
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pObjectEntryCounts\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pObjectEntryCounts.GetAddress()); // WPT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: const VkObjectEntryUsageFlagsNVX* pObjectEntryUsageFlags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkObjectEntryUsageFlagsNVX\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pObjectEntryUsageFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pObjectEntryUsageFlags.GetAddress()); // WPT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxUniformBuffersPerDescriptor
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxUniformBuffersPerDescriptor\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxStorageBuffersPerDescriptor
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxStorageBuffersPerDescriptor\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxStorageImagesPerDescriptor
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxStorageImagesPerDescriptor\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxSampledImagesPerDescriptor
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxSampledImagesPerDescriptor\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxPipelineLayouts
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxPipelineLayouts\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkObjectTableEntryNVX &pstruct_in, int indent, uint64_t base_addr)
{
    const VkObjectTableEntryNVX *pstruct = (const VkObjectTableEntryNVX *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkObjectEntryTypeNVX type
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkObjectEntryTypeNVX\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"type\",\n";
    *out += "\n"; // GDS

    // struct member: VkObjectEntryUsageFlagsNVX flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkObjectEntryUsageFlagsNVX\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkObjectTablePipelineEntryNVX &pstruct_in, int indent, uint64_t base_addr)
{
    const VkObjectTablePipelineEntryNVX *pstruct = (const VkObjectTablePipelineEntryNVX *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkObjectEntryTypeNVX type
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkObjectEntryTypeNVX\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"type\",\n";
    *out += "\n"; // GDS

    // struct member: VkObjectEntryUsageFlagsNVX flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkObjectEntryUsageFlagsNVX\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: VkPipeline pipeline
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipeline\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pipeline\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkObjectTableDescriptorSetEntryNVX &pstruct_in, int indent, uint64_t base_addr)
{
    const VkObjectTableDescriptorSetEntryNVX *pstruct = (const VkObjectTableDescriptorSetEntryNVX *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkObjectEntryTypeNVX type
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkObjectEntryTypeNVX\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"type\",\n";
    *out += "\n"; // GDS

    // struct member: VkObjectEntryUsageFlagsNVX flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkObjectEntryUsageFlagsNVX\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: VkPipelineLayout pipelineLayout
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineLayout\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pipelineLayout\",\n";
    *out += "\n"; // GDS

    // struct member: VkDescriptorSet descriptorSet
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDescriptorSet\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"descriptorSet\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkObjectTableVertexBufferEntryNVX &pstruct_in, int indent, uint64_t base_addr)
{
    const VkObjectTableVertexBufferEntryNVX *pstruct = (const VkObjectTableVertexBufferEntryNVX *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkObjectEntryTypeNVX type
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkObjectEntryTypeNVX\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"type\",\n";
    *out += "\n"; // GDS

    // struct member: VkObjectEntryUsageFlagsNVX flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkObjectEntryUsageFlagsNVX\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: VkBuffer buffer
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"buffer\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkObjectTableIndexBufferEntryNVX &pstruct_in, int indent, uint64_t base_addr)
{
    const VkObjectTableIndexBufferEntryNVX *pstruct = (const VkObjectTableIndexBufferEntryNVX *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkObjectEntryTypeNVX type
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkObjectEntryTypeNVX\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"type\",\n";
    *out += "\n"; // GDS

    // struct member: VkObjectEntryUsageFlagsNVX flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkObjectEntryUsageFlagsNVX\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: VkBuffer buffer
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"buffer\",\n";
    *out += "\n"; // GDS

    // struct member: VkIndexType indexType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkIndexType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"indexType\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkObjectTablePushConstantEntryNVX &pstruct_in, int indent, uint64_t base_addr)
{
    const VkObjectTablePushConstantEntryNVX *pstruct = (const VkObjectTablePushConstantEntryNVX *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkObjectEntryTypeNVX type
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkObjectEntryTypeNVX\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"type\",\n";
    *out += "\n"; // GDS

    // struct member: VkObjectEntryUsageFlagsNVX flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkObjectEntryUsageFlagsNVX\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: VkPipelineLayout pipelineLayout
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineLayout\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pipelineLayout\",\n";
    *out += "\n"; // GDS

    // struct member: VkShaderStageFlags stageFlags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkShaderStageFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"stageFlags\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkViewportWScalingNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkViewportWScalingNV *pstruct = (const VkViewportWScalingNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: float xcoeff
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"xcoeff\",\n";
    *out += "\n"; // GDS

    // struct member: float ycoeff
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"ycoeff\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPipelineViewportWScalingStateCreateInfoNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPipelineViewportWScalingStateCreateInfoNV *pstruct = (const VkPipelineViewportWScalingStateCreateInfoNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 viewportWScalingEnable
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"viewportWScalingEnable\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t viewportCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"viewportCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkViewportWScalingNV* pViewportWScalings
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkViewportWScalingNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pViewportWScalings\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pViewportWScalings->GetAddress()); // WUT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkSurfaceCapabilities2EXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkSurfaceCapabilities2EXT *pstruct = (const VkSurfaceCapabilities2EXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t minImageCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"minImageCount\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxImageCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxImageCount\",\n";
    *out += "\n"; // GDS

    // struct member: VkExtent2D currentExtent
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExtent2D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"currentExtent\",\n";
    *out += "\n"; // GDS

    // struct member: VkExtent2D minImageExtent
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExtent2D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"minImageExtent\",\n";
    *out += "\n"; // GDS

    // struct member: VkExtent2D maxImageExtent
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExtent2D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxImageExtent\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxImageArrayLayers
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxImageArrayLayers\",\n";
    *out += "\n"; // GDS

    // struct member: VkSurfaceTransformFlagsKHR supportedTransforms
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSurfaceTransformFlagsKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"supportedTransforms\",\n";
    *out += "\n"; // GDS

    // struct member: VkSurfaceTransformFlagBitsKHR currentTransform
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSurfaceTransformFlagBitsKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"currentTransform\",\n";
    *out += "\n"; // GDS

    // struct member: VkCompositeAlphaFlagsKHR supportedCompositeAlpha
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCompositeAlphaFlagsKHR\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"supportedCompositeAlpha\",\n";
    *out += "\n"; // GDS

    // struct member: VkImageUsageFlags supportedUsageFlags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageUsageFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"supportedUsageFlags\",\n";
    *out += "\n"; // GDS

    // struct member: VkSurfaceCounterFlagsEXT supportedSurfaceCounters
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSurfaceCounterFlagsEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"supportedSurfaceCounters\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDisplayPowerInfoEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDisplayPowerInfoEXT *pstruct = (const VkDisplayPowerInfoEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkDisplayPowerStateEXT powerState
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDisplayPowerStateEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"powerState\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDeviceEventInfoEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDeviceEventInfoEXT *pstruct = (const VkDeviceEventInfoEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceEventTypeEXT deviceEvent
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceEventTypeEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"deviceEvent\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDisplayEventInfoEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDisplayEventInfoEXT *pstruct = (const VkDisplayEventInfoEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkDisplayEventTypeEXT displayEvent
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDisplayEventTypeEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"displayEvent\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkSwapchainCounterCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkSwapchainCounterCreateInfoEXT *pstruct = (const VkSwapchainCounterCreateInfoEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkSurfaceCounterFlagsEXT surfaceCounters
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSurfaceCounterFlagsEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"surfaceCounters\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkRefreshCycleDurationGOOGLE &pstruct_in, int indent, uint64_t base_addr)
{
    const VkRefreshCycleDurationGOOGLE *pstruct = (const VkRefreshCycleDurationGOOGLE *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: uint64_t refreshDuration
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"refreshDuration\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPastPresentationTimingGOOGLE &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPastPresentationTimingGOOGLE *pstruct = (const VkPastPresentationTimingGOOGLE *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: uint32_t presentID
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"presentID\",\n";
    *out += "\n"; // GDS

    // struct member: uint64_t desiredPresentTime
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"desiredPresentTime\",\n";
    *out += "\n"; // GDS

    // struct member: uint64_t actualPresentTime
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"actualPresentTime\",\n";
    *out += "\n"; // GDS

    // struct member: uint64_t earliestPresentTime
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"earliestPresentTime\",\n";
    *out += "\n"; // GDS

    // struct member: uint64_t presentMargin
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"presentMargin\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPresentTimeGOOGLE &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPresentTimeGOOGLE *pstruct = (const VkPresentTimeGOOGLE *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: uint32_t presentID
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"presentID\",\n";
    *out += "\n"; // GDS

    // struct member: uint64_t desiredPresentTime
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"desiredPresentTime\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPresentTimesInfoGOOGLE &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPresentTimesInfoGOOGLE *pstruct = (const VkPresentTimesInfoGOOGLE *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t swapchainCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"swapchainCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkPresentTimeGOOGLE* pTimes
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPresentTimeGOOGLE\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pTimes\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pTimes->GetAddress()); // WUT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX *pstruct = (const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 perViewPositionAllComponents
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"perViewPositionAllComponents\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkViewportSwizzleNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkViewportSwizzleNV *pstruct = (const VkViewportSwizzleNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkViewportCoordinateSwizzleNV x
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkViewportCoordinateSwizzleNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"x\",\n";
    *out += "\n"; // GDS

    // struct member: VkViewportCoordinateSwizzleNV y
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkViewportCoordinateSwizzleNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"y\",\n";
    *out += "\n"; // GDS

    // struct member: VkViewportCoordinateSwizzleNV z
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkViewportCoordinateSwizzleNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"z\",\n";
    *out += "\n"; // GDS

    // struct member: VkViewportCoordinateSwizzleNV w
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkViewportCoordinateSwizzleNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"w\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPipelineViewportSwizzleStateCreateInfoNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPipelineViewportSwizzleStateCreateInfoNV *pstruct = (const VkPipelineViewportSwizzleStateCreateInfoNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkPipelineViewportSwizzleStateCreateFlagsNV flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineViewportSwizzleStateCreateFlagsNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t viewportCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"viewportCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkViewportSwizzleNV* pViewportSwizzles
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkViewportSwizzleNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pViewportSwizzles\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pViewportSwizzles->GetAddress()); // WUT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceDiscardRectanglePropertiesEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceDiscardRectanglePropertiesEXT *pstruct = (const VkPhysicalDeviceDiscardRectanglePropertiesEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxDiscardRectangles
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxDiscardRectangles\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPipelineDiscardRectangleStateCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPipelineDiscardRectangleStateCreateInfoEXT *pstruct = (const VkPipelineDiscardRectangleStateCreateInfoEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkPipelineDiscardRectangleStateCreateFlagsEXT flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineDiscardRectangleStateCreateFlagsEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: VkDiscardRectangleModeEXT discardRectangleMode
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDiscardRectangleModeEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"discardRectangleMode\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t discardRectangleCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"discardRectangleCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkRect2D* pDiscardRectangles
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkRect2D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pDiscardRectangles\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pDiscardRectangles->GetAddress()); // WUT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceConservativeRasterizationPropertiesEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceConservativeRasterizationPropertiesEXT *pstruct = (const VkPhysicalDeviceConservativeRasterizationPropertiesEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: float primitiveOverestimationSize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"primitiveOverestimationSize\",\n";
    *out += "\n"; // GDS

    // struct member: float maxExtraPrimitiveOverestimationSize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxExtraPrimitiveOverestimationSize\",\n";
    *out += "\n"; // GDS

    // struct member: float extraPrimitiveOverestimationSizeGranularity
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"extraPrimitiveOverestimationSizeGranularity\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 primitiveUnderestimation
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"primitiveUnderestimation\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 conservativePointAndLineRasterization
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"conservativePointAndLineRasterization\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 degenerateTrianglesRasterized
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"degenerateTrianglesRasterized\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 degenerateLinesRasterized
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"degenerateLinesRasterized\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 fullyCoveredFragmentShaderInputVariable
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"fullyCoveredFragmentShaderInputVariable\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 conservativeRasterizationPostDepthCoverage
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"conservativeRasterizationPostDepthCoverage\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPipelineRasterizationConservativeStateCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPipelineRasterizationConservativeStateCreateInfoEXT *pstruct = (const VkPipelineRasterizationConservativeStateCreateInfoEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkPipelineRasterizationConservativeStateCreateFlagsEXT flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineRasterizationConservativeStateCreateFlagsEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: VkConservativeRasterizationModeEXT conservativeRasterizationMode
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkConservativeRasterizationModeEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"conservativeRasterizationMode\",\n";
    *out += "\n"; // GDS

    // struct member: float extraPrimitiveOverestimationSize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"extraPrimitiveOverestimationSize\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceDepthClipEnableFeaturesEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceDepthClipEnableFeaturesEXT *pstruct = (const VkPhysicalDeviceDepthClipEnableFeaturesEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 depthClipEnable
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"depthClipEnable\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPipelineRasterizationDepthClipStateCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPipelineRasterizationDepthClipStateCreateInfoEXT *pstruct = (const VkPipelineRasterizationDepthClipStateCreateInfoEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkPipelineRasterizationDepthClipStateCreateFlagsEXT flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineRasterizationDepthClipStateCreateFlagsEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 depthClipEnable
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"depthClipEnable\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkXYColorEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkXYColorEXT *pstruct = (const VkXYColorEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: float x
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"x\",\n";
    *out += "\n"; // GDS

    // struct member: float y
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"y\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkHdrMetadataEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkHdrMetadataEXT *pstruct = (const VkHdrMetadataEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkXYColorEXT displayPrimaryRed
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkXYColorEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"displayPrimaryRed\",\n";
    *out += "\n"; // GDS

    // struct member: VkXYColorEXT displayPrimaryGreen
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkXYColorEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"displayPrimaryGreen\",\n";
    *out += "\n"; // GDS

    // struct member: VkXYColorEXT displayPrimaryBlue
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkXYColorEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"displayPrimaryBlue\",\n";
    *out += "\n"; // GDS

    // struct member: VkXYColorEXT whitePoint
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkXYColorEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"whitePoint\",\n";
    *out += "\n"; // GDS

    // struct member: float maxLuminance
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxLuminance\",\n";
    *out += "\n"; // GDS

    // struct member: float minLuminance
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"minLuminance\",\n";
    *out += "\n"; // GDS

    // struct member: float maxContentLightLevel
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxContentLightLevel\",\n";
    *out += "\n"; // GDS

    // struct member: float maxFrameAverageLightLevel
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxFrameAverageLightLevel\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkIOSSurfaceCreateInfoMVK &pstruct_in, int indent, uint64_t base_addr)
{
    const VkIOSSurfaceCreateInfoMVK *pstruct = (const VkIOSSurfaceCreateInfoMVK *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkIOSSurfaceCreateFlagsMVK flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkIOSSurfaceCreateFlagsMVK\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pView
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pView\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pView); // PWR
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkMacOSSurfaceCreateInfoMVK &pstruct_in, int indent, uint64_t base_addr)
{
    const VkMacOSSurfaceCreateInfoMVK *pstruct = (const VkMacOSSurfaceCreateInfoMVK *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkMacOSSurfaceCreateFlagsMVK flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkMacOSSurfaceCreateFlagsMVK\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pView
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pView\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pView); // PWR
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDebugUtilsObjectNameInfoEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDebugUtilsObjectNameInfoEXT *pstruct = (const VkDebugUtilsObjectNameInfoEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkObjectType objectType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkObjectType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"objectType\",\n";
    *out += "\n"; // GDS

    // struct member: uint64_t objectHandle
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"objectHandle\",\n";
    *out += "\n"; // GDS

    // struct member: const char* pObjectName
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"char\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pObjectName\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pObjectName.GetAddress()); // KGJ
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDebugUtilsObjectTagInfoEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDebugUtilsObjectTagInfoEXT *pstruct = (const VkDebugUtilsObjectTagInfoEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkObjectType objectType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkObjectType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"objectType\",\n";
    *out += "\n"; // GDS

    // struct member: uint64_t objectHandle
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"objectHandle\",\n";
    *out += "\n"; // GDS

    // struct member: uint64_t tagName
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"tagName\",\n";
    *out += "\n"; // GDS

    // struct member: size_t tagSize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"size_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"tagSize\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pTag
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pTag\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pTag.GetAddress()); // WPT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDebugUtilsLabelEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDebugUtilsLabelEXT *pstruct = (const VkDebugUtilsLabelEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: const char* pLabelName
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"char\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pLabelName\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pLabelName.GetAddress()); // KGJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: float color
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"color\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, base_addr + offsetof(VkDebugUtilsLabelEXT, color)); // IYY
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDebugUtilsMessengerCallbackDataEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDebugUtilsMessengerCallbackDataEXT *pstruct = (const VkDebugUtilsMessengerCallbackDataEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkDebugUtilsMessengerCallbackDataFlagsEXT flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDebugUtilsMessengerCallbackDataFlagsEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: const char* pMessageIdName
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"char\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pMessageIdName\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pMessageIdName.GetAddress()); // KGJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: int32_t messageIdNumber
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"int32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"messageIdNumber\",\n";
    *out += "\n"; // GDS

    // struct member: const char* pMessage
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"char\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pMessage\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pMessage.GetAddress()); // KGJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t queueLabelCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queueLabelCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkDebugUtilsLabelEXT* pQueueLabels
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDebugUtilsLabelEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pQueueLabels\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pQueueLabels->GetAddress()); // WUT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t cmdBufLabelCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"cmdBufLabelCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkDebugUtilsLabelEXT* pCmdBufLabels
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDebugUtilsLabelEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCmdBufLabels\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pCmdBufLabels->GetAddress()); // WUT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t objectCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"objectCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkDebugUtilsObjectNameInfoEXT* pObjects
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDebugUtilsObjectNameInfoEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pObjects\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pObjects->GetAddress()); // WUT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDebugUtilsMessengerCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDebugUtilsMessengerCreateInfoEXT *pstruct = (const VkDebugUtilsMessengerCreateInfoEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkDebugUtilsMessengerCreateFlagsEXT flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDebugUtilsMessengerCreateFlagsEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: VkDebugUtilsMessageSeverityFlagsEXT messageSeverity
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDebugUtilsMessageSeverityFlagsEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"messageSeverity\",\n";
    *out += "\n"; // GDS

    // struct member: VkDebugUtilsMessageTypeFlagsEXT messageType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDebugUtilsMessageTypeFlagsEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"messageType\",\n";
    *out += "\n"; // GDS

    // struct member: PFN_vkDebugUtilsMessengerCallbackEXT pfnUserCallback
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"PFN_vkDebugUtilsMessengerCallbackEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pfnUserCallback\",\n";
    *out += "\n"; // GDS

    // struct member: void* pUserData
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pUserData\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pUserData); // PWR
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkAndroidHardwareBufferUsageANDROID &pstruct_in, int indent, uint64_t base_addr)
{
    const VkAndroidHardwareBufferUsageANDROID *pstruct = (const VkAndroidHardwareBufferUsageANDROID *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint64_t androidHardwareBufferUsage
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"androidHardwareBufferUsage\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkAndroidHardwareBufferPropertiesANDROID &pstruct_in, int indent, uint64_t base_addr)
{
    const VkAndroidHardwareBufferPropertiesANDROID *pstruct = (const VkAndroidHardwareBufferPropertiesANDROID *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize allocationSize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"allocationSize\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t memoryTypeBits
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"memoryTypeBits\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkAndroidHardwareBufferFormatPropertiesANDROID &pstruct_in, int indent, uint64_t base_addr)
{
    const VkAndroidHardwareBufferFormatPropertiesANDROID *pstruct = (const VkAndroidHardwareBufferFormatPropertiesANDROID *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkFormat format
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFormat\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"format\",\n";
    *out += "\n"; // GDS

    // struct member: uint64_t externalFormat
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"externalFormat\",\n";
    *out += "\n"; // GDS

    // struct member: VkFormatFeatureFlags formatFeatures
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFormatFeatureFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"formatFeatures\",\n";
    *out += "\n"; // GDS

    // struct member: VkComponentMapping samplerYcbcrConversionComponents
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkComponentMapping\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"samplerYcbcrConversionComponents\",\n";
    *out += "\n"; // GDS

    // struct member: VkSamplerYcbcrModelConversion suggestedYcbcrModel
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSamplerYcbcrModelConversion\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"suggestedYcbcrModel\",\n";
    *out += "\n"; // GDS

    // struct member: VkSamplerYcbcrRange suggestedYcbcrRange
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSamplerYcbcrRange\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"suggestedYcbcrRange\",\n";
    *out += "\n"; // GDS

    // struct member: VkChromaLocation suggestedXChromaOffset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkChromaLocation\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"suggestedXChromaOffset\",\n";
    *out += "\n"; // GDS

    // struct member: VkChromaLocation suggestedYChromaOffset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkChromaLocation\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"suggestedYChromaOffset\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkImportAndroidHardwareBufferInfoANDROID &pstruct_in, int indent, uint64_t base_addr)
{
    const VkImportAndroidHardwareBufferInfoANDROID *pstruct = (const VkImportAndroidHardwareBufferInfoANDROID *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: struct void* buffer
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"buffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.buffer); // PWR
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkMemoryGetAndroidHardwareBufferInfoANDROID &pstruct_in, int indent, uint64_t base_addr)
{
    const VkMemoryGetAndroidHardwareBufferInfoANDROID *pstruct = (const VkMemoryGetAndroidHardwareBufferInfoANDROID *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceMemory memory
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceMemory\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"memory\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkExternalFormatANDROID &pstruct_in, int indent, uint64_t base_addr)
{
    const VkExternalFormatANDROID *pstruct = (const VkExternalFormatANDROID *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint64_t externalFormat
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"externalFormat\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkSamplerReductionModeCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkSamplerReductionModeCreateInfoEXT *pstruct = (const VkSamplerReductionModeCreateInfoEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkSamplerReductionModeEXT reductionMode
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSamplerReductionModeEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"reductionMode\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT *pstruct = (const VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 filterMinmaxSingleComponentFormats
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"filterMinmaxSingleComponentFormats\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 filterMinmaxImageComponentMapping
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"filterMinmaxImageComponentMapping\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceInlineUniformBlockFeaturesEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceInlineUniformBlockFeaturesEXT *pstruct = (const VkPhysicalDeviceInlineUniformBlockFeaturesEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 inlineUniformBlock
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"inlineUniformBlock\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 descriptorBindingInlineUniformBlockUpdateAfterBind
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"descriptorBindingInlineUniformBlockUpdateAfterBind\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceInlineUniformBlockPropertiesEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceInlineUniformBlockPropertiesEXT *pstruct = (const VkPhysicalDeviceInlineUniformBlockPropertiesEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxInlineUniformBlockSize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxInlineUniformBlockSize\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxPerStageDescriptorInlineUniformBlocks
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxPerStageDescriptorInlineUniformBlocks\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxDescriptorSetInlineUniformBlocks
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxDescriptorSetInlineUniformBlocks\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxDescriptorSetUpdateAfterBindInlineUniformBlocks
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxDescriptorSetUpdateAfterBindInlineUniformBlocks\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkWriteDescriptorSetInlineUniformBlockEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkWriteDescriptorSetInlineUniformBlockEXT *pstruct = (const VkWriteDescriptorSetInlineUniformBlockEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t dataSize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dataSize\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pData
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pData\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pData.GetAddress()); // WPT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDescriptorPoolInlineUniformBlockCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDescriptorPoolInlineUniformBlockCreateInfoEXT *pstruct = (const VkDescriptorPoolInlineUniformBlockCreateInfoEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxInlineUniformBlockBindings
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxInlineUniformBlockBindings\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkSampleLocationEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkSampleLocationEXT *pstruct = (const VkSampleLocationEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: float x
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"x\",\n";
    *out += "\n"; // GDS

    // struct member: float y
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"y\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkSampleLocationsInfoEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkSampleLocationsInfoEXT *pstruct = (const VkSampleLocationsInfoEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkSampleCountFlagBits sampleLocationsPerPixel
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSampleCountFlagBits\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sampleLocationsPerPixel\",\n";
    *out += "\n"; // GDS

    // struct member: VkExtent2D sampleLocationGridSize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExtent2D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sampleLocationGridSize\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t sampleLocationsCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sampleLocationsCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkSampleLocationEXT* pSampleLocations
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSampleLocationEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSampleLocations\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pSampleLocations->GetAddress()); // WUT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkAttachmentSampleLocationsEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkAttachmentSampleLocationsEXT *pstruct = (const VkAttachmentSampleLocationsEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: uint32_t attachmentIndex
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"attachmentIndex\",\n";
    *out += "\n"; // GDS

    // struct member: VkSampleLocationsInfoEXT sampleLocationsInfo
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSampleLocationsInfoEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sampleLocationsInfo\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkSubpassSampleLocationsEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkSubpassSampleLocationsEXT *pstruct = (const VkSubpassSampleLocationsEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: uint32_t subpassIndex
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"subpassIndex\",\n";
    *out += "\n"; // GDS

    // struct member: VkSampleLocationsInfoEXT sampleLocationsInfo
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSampleLocationsInfoEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sampleLocationsInfo\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkRenderPassSampleLocationsBeginInfoEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkRenderPassSampleLocationsBeginInfoEXT *pstruct = (const VkRenderPassSampleLocationsBeginInfoEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t attachmentInitialSampleLocationsCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"attachmentInitialSampleLocationsCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkAttachmentSampleLocationsEXT* pAttachmentInitialSampleLocations
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkAttachmentSampleLocationsEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAttachmentInitialSampleLocations\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pAttachmentInitialSampleLocations->GetAddress()); // WUT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t postSubpassSampleLocationsCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"postSubpassSampleLocationsCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkSubpassSampleLocationsEXT* pPostSubpassSampleLocations
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSubpassSampleLocationsEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pPostSubpassSampleLocations\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pPostSubpassSampleLocations->GetAddress()); // WUT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPipelineSampleLocationsStateCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPipelineSampleLocationsStateCreateInfoEXT *pstruct = (const VkPipelineSampleLocationsStateCreateInfoEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 sampleLocationsEnable
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sampleLocationsEnable\",\n";
    *out += "\n"; // GDS

    // struct member: VkSampleLocationsInfoEXT sampleLocationsInfo
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSampleLocationsInfoEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sampleLocationsInfo\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceSampleLocationsPropertiesEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceSampleLocationsPropertiesEXT *pstruct = (const VkPhysicalDeviceSampleLocationsPropertiesEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkSampleCountFlags sampleLocationSampleCounts
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSampleCountFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sampleLocationSampleCounts\",\n";
    *out += "\n"; // GDS

    // struct member: VkExtent2D maxSampleLocationGridSize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExtent2D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxSampleLocationGridSize\",\n";
    *out += "\n"; // GDS

    // struct member: float sampleLocationCoordinateRange
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sampleLocationCoordinateRange\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, base_addr + offsetof(VkPhysicalDeviceSampleLocationsPropertiesEXT, sampleLocationCoordinateRange)); // IYY
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t sampleLocationSubPixelBits
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sampleLocationSubPixelBits\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 variableSampleLocations
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"variableSampleLocations\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkMultisamplePropertiesEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkMultisamplePropertiesEXT *pstruct = (const VkMultisamplePropertiesEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkExtent2D maxSampleLocationGridSize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExtent2D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxSampleLocationGridSize\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT *pstruct = (const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 advancedBlendCoherentOperations
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"advancedBlendCoherentOperations\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT *pstruct = (const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t advancedBlendMaxColorAttachments
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"advancedBlendMaxColorAttachments\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 advancedBlendIndependentBlend
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"advancedBlendIndependentBlend\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 advancedBlendNonPremultipliedSrcColor
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"advancedBlendNonPremultipliedSrcColor\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 advancedBlendNonPremultipliedDstColor
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"advancedBlendNonPremultipliedDstColor\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 advancedBlendCorrelatedOverlap
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"advancedBlendCorrelatedOverlap\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 advancedBlendAllOperations
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"advancedBlendAllOperations\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPipelineColorBlendAdvancedStateCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPipelineColorBlendAdvancedStateCreateInfoEXT *pstruct = (const VkPipelineColorBlendAdvancedStateCreateInfoEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 srcPremultiplied
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"srcPremultiplied\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 dstPremultiplied
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dstPremultiplied\",\n";
    *out += "\n"; // GDS

    // struct member: VkBlendOverlapEXT blendOverlap
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBlendOverlapEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"blendOverlap\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPipelineCoverageToColorStateCreateInfoNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPipelineCoverageToColorStateCreateInfoNV *pstruct = (const VkPipelineCoverageToColorStateCreateInfoNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkPipelineCoverageToColorStateCreateFlagsNV flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineCoverageToColorStateCreateFlagsNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 coverageToColorEnable
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"coverageToColorEnable\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t coverageToColorLocation
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"coverageToColorLocation\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPipelineCoverageModulationStateCreateInfoNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPipelineCoverageModulationStateCreateInfoNV *pstruct = (const VkPipelineCoverageModulationStateCreateInfoNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkPipelineCoverageModulationStateCreateFlagsNV flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineCoverageModulationStateCreateFlagsNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: VkCoverageModulationModeNV coverageModulationMode
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCoverageModulationModeNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"coverageModulationMode\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 coverageModulationTableEnable
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"coverageModulationTableEnable\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t coverageModulationTableCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"coverageModulationTableCount\",\n";
    *out += "\n"; // GDS

    // struct member: const float* pCoverageModulationTable
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCoverageModulationTable\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pCoverageModulationTable.GetAddress()); // WPT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceShaderSMBuiltinsPropertiesNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV *pstruct = (const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t shaderSMCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderSMCount\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t shaderWarpsPerSM
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderWarpsPerSM\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceShaderSMBuiltinsFeaturesNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV *pstruct = (const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderSMBuiltins
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderSMBuiltins\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDrmFormatModifierPropertiesEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDrmFormatModifierPropertiesEXT *pstruct = (const VkDrmFormatModifierPropertiesEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: uint64_t drmFormatModifier
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"drmFormatModifier\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t drmFormatModifierPlaneCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"drmFormatModifierPlaneCount\",\n";
    *out += "\n"; // GDS

    // struct member: VkFormatFeatureFlags drmFormatModifierTilingFeatures
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFormatFeatureFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"drmFormatModifierTilingFeatures\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDrmFormatModifierPropertiesListEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDrmFormatModifierPropertiesListEXT *pstruct = (const VkDrmFormatModifierPropertiesListEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t drmFormatModifierCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"drmFormatModifierCount\",\n";
    *out += "\n"; // GDS

    // struct member: VkDrmFormatModifierPropertiesEXT* pDrmFormatModifierProperties
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDrmFormatModifierPropertiesEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pDrmFormatModifierProperties\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pDrmFormatModifierProperties->GetAddress()); // WUT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceImageDrmFormatModifierInfoEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceImageDrmFormatModifierInfoEXT *pstruct = (const VkPhysicalDeviceImageDrmFormatModifierInfoEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint64_t drmFormatModifier
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"drmFormatModifier\",\n";
    *out += "\n"; // GDS

    // struct member: VkSharingMode sharingMode
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSharingMode\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sharingMode\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t queueFamilyIndexCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"queueFamilyIndexCount\",\n";
    *out += "\n"; // GDS

    // struct member: const uint32_t* pQueueFamilyIndices
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pQueueFamilyIndices\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pQueueFamilyIndices.GetAddress()); // WPT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkImageDrmFormatModifierListCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkImageDrmFormatModifierListCreateInfoEXT *pstruct = (const VkImageDrmFormatModifierListCreateInfoEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t drmFormatModifierCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"drmFormatModifierCount\",\n";
    *out += "\n"; // GDS

    // struct member: const uint64_t* pDrmFormatModifiers
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pDrmFormatModifiers\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pDrmFormatModifiers.GetAddress()); // WPT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkImageDrmFormatModifierExplicitCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkImageDrmFormatModifierExplicitCreateInfoEXT *pstruct = (const VkImageDrmFormatModifierExplicitCreateInfoEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint64_t drmFormatModifier
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"drmFormatModifier\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t drmFormatModifierPlaneCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"drmFormatModifierPlaneCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkSubresourceLayout* pPlaneLayouts
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSubresourceLayout\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pPlaneLayouts\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pPlaneLayouts->GetAddress()); // WUT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkImageDrmFormatModifierPropertiesEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkImageDrmFormatModifierPropertiesEXT *pstruct = (const VkImageDrmFormatModifierPropertiesEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint64_t drmFormatModifier
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"drmFormatModifier\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkValidationCacheCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkValidationCacheCreateInfoEXT *pstruct = (const VkValidationCacheCreateInfoEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkValidationCacheCreateFlagsEXT flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkValidationCacheCreateFlagsEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: size_t initialDataSize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"size_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"initialDataSize\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pInitialData
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pInitialData\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pInitialData.GetAddress()); // WPT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkShaderModuleValidationCacheCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkShaderModuleValidationCacheCreateInfoEXT *pstruct = (const VkShaderModuleValidationCacheCreateInfoEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkValidationCacheEXT validationCache
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkValidationCacheEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"validationCache\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDescriptorSetLayoutBindingFlagsCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDescriptorSetLayoutBindingFlagsCreateInfoEXT *pstruct = (const VkDescriptorSetLayoutBindingFlagsCreateInfoEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t bindingCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"bindingCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkDescriptorBindingFlagsEXT* pBindingFlags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDescriptorBindingFlagsEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pBindingFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pBindingFlags.GetAddress()); // WPT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceDescriptorIndexingFeaturesEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceDescriptorIndexingFeaturesEXT *pstruct = (const VkPhysicalDeviceDescriptorIndexingFeaturesEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderInputAttachmentArrayDynamicIndexing
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderInputAttachmentArrayDynamicIndexing\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderUniformTexelBufferArrayDynamicIndexing
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderUniformTexelBufferArrayDynamicIndexing\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderStorageTexelBufferArrayDynamicIndexing
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderStorageTexelBufferArrayDynamicIndexing\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderUniformBufferArrayNonUniformIndexing
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderUniformBufferArrayNonUniformIndexing\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderSampledImageArrayNonUniformIndexing
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderSampledImageArrayNonUniformIndexing\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderStorageBufferArrayNonUniformIndexing
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderStorageBufferArrayNonUniformIndexing\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderStorageImageArrayNonUniformIndexing
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderStorageImageArrayNonUniformIndexing\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderInputAttachmentArrayNonUniformIndexing
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderInputAttachmentArrayNonUniformIndexing\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderUniformTexelBufferArrayNonUniformIndexing
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderUniformTexelBufferArrayNonUniformIndexing\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderStorageTexelBufferArrayNonUniformIndexing
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderStorageTexelBufferArrayNonUniformIndexing\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 descriptorBindingUniformBufferUpdateAfterBind
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"descriptorBindingUniformBufferUpdateAfterBind\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 descriptorBindingSampledImageUpdateAfterBind
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"descriptorBindingSampledImageUpdateAfterBind\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 descriptorBindingStorageImageUpdateAfterBind
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"descriptorBindingStorageImageUpdateAfterBind\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 descriptorBindingStorageBufferUpdateAfterBind
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"descriptorBindingStorageBufferUpdateAfterBind\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 descriptorBindingUniformTexelBufferUpdateAfterBind
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"descriptorBindingUniformTexelBufferUpdateAfterBind\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 descriptorBindingStorageTexelBufferUpdateAfterBind
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"descriptorBindingStorageTexelBufferUpdateAfterBind\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 descriptorBindingUpdateUnusedWhilePending
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"descriptorBindingUpdateUnusedWhilePending\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 descriptorBindingPartiallyBound
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"descriptorBindingPartiallyBound\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 descriptorBindingVariableDescriptorCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"descriptorBindingVariableDescriptorCount\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 runtimeDescriptorArray
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"runtimeDescriptorArray\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceDescriptorIndexingPropertiesEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceDescriptorIndexingPropertiesEXT *pstruct = (const VkPhysicalDeviceDescriptorIndexingPropertiesEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxUpdateAfterBindDescriptorsInAllPools
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxUpdateAfterBindDescriptorsInAllPools\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderUniformBufferArrayNonUniformIndexingNative
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderUniformBufferArrayNonUniformIndexingNative\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderSampledImageArrayNonUniformIndexingNative
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderSampledImageArrayNonUniformIndexingNative\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderStorageBufferArrayNonUniformIndexingNative
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderStorageBufferArrayNonUniformIndexingNative\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderStorageImageArrayNonUniformIndexingNative
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderStorageImageArrayNonUniformIndexingNative\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderInputAttachmentArrayNonUniformIndexingNative
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderInputAttachmentArrayNonUniformIndexingNative\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 robustBufferAccessUpdateAfterBind
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"robustBufferAccessUpdateAfterBind\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 quadDivergentImplicitLod
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"quadDivergentImplicitLod\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxPerStageDescriptorUpdateAfterBindSamplers
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxPerStageDescriptorUpdateAfterBindSamplers\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxPerStageDescriptorUpdateAfterBindUniformBuffers
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxPerStageDescriptorUpdateAfterBindUniformBuffers\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxPerStageDescriptorUpdateAfterBindStorageBuffers
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxPerStageDescriptorUpdateAfterBindStorageBuffers\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxPerStageDescriptorUpdateAfterBindSampledImages
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxPerStageDescriptorUpdateAfterBindSampledImages\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxPerStageDescriptorUpdateAfterBindStorageImages
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxPerStageDescriptorUpdateAfterBindStorageImages\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxPerStageDescriptorUpdateAfterBindInputAttachments
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxPerStageDescriptorUpdateAfterBindInputAttachments\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxPerStageUpdateAfterBindResources
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxPerStageUpdateAfterBindResources\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxDescriptorSetUpdateAfterBindSamplers
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxDescriptorSetUpdateAfterBindSamplers\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxDescriptorSetUpdateAfterBindUniformBuffers
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxDescriptorSetUpdateAfterBindUniformBuffers\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxDescriptorSetUpdateAfterBindUniformBuffersDynamic
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxDescriptorSetUpdateAfterBindUniformBuffersDynamic\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxDescriptorSetUpdateAfterBindStorageBuffers
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxDescriptorSetUpdateAfterBindStorageBuffers\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxDescriptorSetUpdateAfterBindStorageBuffersDynamic
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxDescriptorSetUpdateAfterBindStorageBuffersDynamic\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxDescriptorSetUpdateAfterBindSampledImages
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxDescriptorSetUpdateAfterBindSampledImages\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxDescriptorSetUpdateAfterBindStorageImages
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxDescriptorSetUpdateAfterBindStorageImages\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxDescriptorSetUpdateAfterBindInputAttachments
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxDescriptorSetUpdateAfterBindInputAttachments\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDescriptorSetVariableDescriptorCountAllocateInfoEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDescriptorSetVariableDescriptorCountAllocateInfoEXT *pstruct = (const VkDescriptorSetVariableDescriptorCountAllocateInfoEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t descriptorSetCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"descriptorSetCount\",\n";
    *out += "\n"; // GDS

    // struct member: const uint32_t* pDescriptorCounts
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pDescriptorCounts\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pDescriptorCounts.GetAddress()); // WPT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDescriptorSetVariableDescriptorCountLayoutSupportEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDescriptorSetVariableDescriptorCountLayoutSupportEXT *pstruct = (const VkDescriptorSetVariableDescriptorCountLayoutSupportEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxVariableDescriptorCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxVariableDescriptorCount\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkShadingRatePaletteNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkShadingRatePaletteNV *pstruct = (const VkShadingRatePaletteNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: uint32_t shadingRatePaletteEntryCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shadingRatePaletteEntryCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkShadingRatePaletteEntryNV* pShadingRatePaletteEntries
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkShadingRatePaletteEntryNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pShadingRatePaletteEntries\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pShadingRatePaletteEntries.GetAddress()); // WPT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPipelineViewportShadingRateImageStateCreateInfoNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPipelineViewportShadingRateImageStateCreateInfoNV *pstruct = (const VkPipelineViewportShadingRateImageStateCreateInfoNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shadingRateImageEnable
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shadingRateImageEnable\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t viewportCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"viewportCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkShadingRatePaletteNV* pShadingRatePalettes
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkShadingRatePaletteNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pShadingRatePalettes\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pShadingRatePalettes->GetAddress()); // WUT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceShadingRateImageFeaturesNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceShadingRateImageFeaturesNV *pstruct = (const VkPhysicalDeviceShadingRateImageFeaturesNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shadingRateImage
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shadingRateImage\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shadingRateCoarseSampleOrder
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shadingRateCoarseSampleOrder\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceShadingRateImagePropertiesNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceShadingRateImagePropertiesNV *pstruct = (const VkPhysicalDeviceShadingRateImagePropertiesNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkExtent2D shadingRateTexelSize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExtent2D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shadingRateTexelSize\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t shadingRatePaletteSize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shadingRatePaletteSize\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t shadingRateMaxCoarseSamples
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shadingRateMaxCoarseSamples\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkCoarseSampleLocationNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkCoarseSampleLocationNV *pstruct = (const VkCoarseSampleLocationNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: uint32_t pixelX
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pixelX\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t pixelY
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pixelY\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t sample
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sample\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkCoarseSampleOrderCustomNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkCoarseSampleOrderCustomNV *pstruct = (const VkCoarseSampleOrderCustomNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkShadingRatePaletteEntryNV shadingRate
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkShadingRatePaletteEntryNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shadingRate\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t sampleCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sampleCount\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t sampleLocationCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sampleLocationCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkCoarseSampleLocationNV* pSampleLocations
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCoarseSampleLocationNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pSampleLocations\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pSampleLocations->GetAddress()); // WUT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV *pstruct = (const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkCoarseSampleOrderTypeNV sampleOrderType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCoarseSampleOrderTypeNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sampleOrderType\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t customSampleOrderCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"customSampleOrderCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkCoarseSampleOrderCustomNV* pCustomSampleOrders
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCoarseSampleOrderCustomNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCustomSampleOrders\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pCustomSampleOrders->GetAddress()); // WUT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkRayTracingShaderGroupCreateInfoNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkRayTracingShaderGroupCreateInfoNV *pstruct = (const VkRayTracingShaderGroupCreateInfoNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkRayTracingShaderGroupTypeNV type
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkRayTracingShaderGroupTypeNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"type\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t generalShader
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"generalShader\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t closestHitShader
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"closestHitShader\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t anyHitShader
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"anyHitShader\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t intersectionShader
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"intersectionShader\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkRayTracingPipelineCreateInfoNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkRayTracingPipelineCreateInfoNV *pstruct = (const VkRayTracingPipelineCreateInfoNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkPipelineCreateFlags flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineCreateFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t stageCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"stageCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkPipelineShaderStageCreateInfo* pStages
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineShaderStageCreateInfo\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pStages\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pStages->GetAddress()); // WUT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t groupCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"groupCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkRayTracingShaderGroupCreateInfoNV* pGroups
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkRayTracingShaderGroupCreateInfoNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pGroups\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pGroups->GetAddress()); // WUT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxRecursionDepth
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxRecursionDepth\",\n";
    *out += "\n"; // GDS

    // struct member: VkPipelineLayout layout
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineLayout\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"layout\",\n";
    *out += "\n"; // GDS

    // struct member: VkPipeline basePipelineHandle
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipeline\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"basePipelineHandle\",\n";
    *out += "\n"; // GDS

    // struct member: int32_t basePipelineIndex
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"int32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"basePipelineIndex\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkGeometryTrianglesNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkGeometryTrianglesNV *pstruct = (const VkGeometryTrianglesNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBuffer vertexData
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"vertexData\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize vertexOffset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"vertexOffset\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t vertexCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"vertexCount\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize vertexStride
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"vertexStride\",\n";
    *out += "\n"; // GDS

    // struct member: VkFormat vertexFormat
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFormat\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"vertexFormat\",\n";
    *out += "\n"; // GDS

    // struct member: VkBuffer indexData
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"indexData\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize indexOffset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"indexOffset\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t indexCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"indexCount\",\n";
    *out += "\n"; // GDS

    // struct member: VkIndexType indexType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkIndexType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"indexType\",\n";
    *out += "\n"; // GDS

    // struct member: VkBuffer transformData
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"transformData\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize transformOffset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"transformOffset\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkGeometryAABBNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkGeometryAABBNV *pstruct = (const VkGeometryAABBNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBuffer aabbData
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"aabbData\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t numAABBs
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"numAABBs\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t stride
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"stride\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize offset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"offset\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkGeometryDataNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkGeometryDataNV *pstruct = (const VkGeometryDataNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkGeometryTrianglesNV triangles
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkGeometryTrianglesNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"triangles\",\n";
    *out += "\n"; // GDS

    // struct member: VkGeometryAABBNV aabbs
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkGeometryAABBNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"aabbs\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkGeometryNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkGeometryNV *pstruct = (const VkGeometryNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkGeometryTypeNV geometryType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkGeometryTypeNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"geometryType\",\n";
    *out += "\n"; // GDS

    // struct member: VkGeometryDataNV geometry
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkGeometryDataNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"geometry\",\n";
    *out += "\n"; // GDS

    // struct member: VkGeometryFlagsNV flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkGeometryFlagsNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkAccelerationStructureInfoNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkAccelerationStructureInfoNV *pstruct = (const VkAccelerationStructureInfoNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkAccelerationStructureTypeNV type
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkAccelerationStructureTypeNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"type\",\n";
    *out += "\n"; // GDS

    // struct member: VkBuildAccelerationStructureFlagsNV flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuildAccelerationStructureFlagsNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t instanceCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"instanceCount\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t geometryCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"geometryCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkGeometryNV* pGeometries
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkGeometryNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pGeometries\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pGeometries->GetAddress()); // WUT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkAccelerationStructureCreateInfoNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkAccelerationStructureCreateInfoNV *pstruct = (const VkAccelerationStructureCreateInfoNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize compactedSize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"compactedSize\",\n";
    *out += "\n"; // GDS

    // struct member: VkAccelerationStructureInfoNV info
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkAccelerationStructureInfoNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"info\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkBindAccelerationStructureMemoryInfoNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkBindAccelerationStructureMemoryInfoNV *pstruct = (const VkBindAccelerationStructureMemoryInfoNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkAccelerationStructureNV accelerationStructure
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkAccelerationStructureNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"accelerationStructure\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceMemory memory
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceMemory\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"memory\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize memoryOffset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"memoryOffset\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t deviceIndexCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"deviceIndexCount\",\n";
    *out += "\n"; // GDS

    // struct member: const uint32_t* pDeviceIndices
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pDeviceIndices\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pDeviceIndices.GetAddress()); // WPT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkWriteDescriptorSetAccelerationStructureNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkWriteDescriptorSetAccelerationStructureNV *pstruct = (const VkWriteDescriptorSetAccelerationStructureNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t accelerationStructureCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"accelerationStructureCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkAccelerationStructureNV* pAccelerationStructures
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkAccelerationStructureNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pAccelerationStructures\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pAccelerationStructures.GetAddress()); // WPT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkAccelerationStructureMemoryRequirementsInfoNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkAccelerationStructureMemoryRequirementsInfoNV *pstruct = (const VkAccelerationStructureMemoryRequirementsInfoNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkAccelerationStructureMemoryRequirementsTypeNV type
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkAccelerationStructureMemoryRequirementsTypeNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"type\",\n";
    *out += "\n"; // GDS

    // struct member: VkAccelerationStructureNV accelerationStructure
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkAccelerationStructureNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"accelerationStructure\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceRayTracingPropertiesNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceRayTracingPropertiesNV *pstruct = (const VkPhysicalDeviceRayTracingPropertiesNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t shaderGroupHandleSize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderGroupHandleSize\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxRecursionDepth
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxRecursionDepth\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxShaderGroupStride
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxShaderGroupStride\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t shaderGroupBaseAlignment
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderGroupBaseAlignment\",\n";
    *out += "\n"; // GDS

    // struct member: uint64_t maxGeometryCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxGeometryCount\",\n";
    *out += "\n"; // GDS

    // struct member: uint64_t maxInstanceCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxInstanceCount\",\n";
    *out += "\n"; // GDS

    // struct member: uint64_t maxTriangleCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxTriangleCount\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxDescriptorSetAccelerationStructures
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxDescriptorSetAccelerationStructures\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV *pstruct = (const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 representativeFragmentTest
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"representativeFragmentTest\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPipelineRepresentativeFragmentTestStateCreateInfoNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPipelineRepresentativeFragmentTestStateCreateInfoNV *pstruct = (const VkPipelineRepresentativeFragmentTestStateCreateInfoNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 representativeFragmentTestEnable
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"representativeFragmentTestEnable\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceImageViewImageFormatInfoEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceImageViewImageFormatInfoEXT *pstruct = (const VkPhysicalDeviceImageViewImageFormatInfoEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkImageViewType imageViewType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageViewType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"imageViewType\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkFilterCubicImageViewImageFormatPropertiesEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkFilterCubicImageViewImageFormatPropertiesEXT *pstruct = (const VkFilterCubicImageViewImageFormatPropertiesEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 filterCubic
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"filterCubic\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 filterCubicMinmax
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"filterCubicMinmax\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDeviceQueueGlobalPriorityCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDeviceQueueGlobalPriorityCreateInfoEXT *pstruct = (const VkDeviceQueueGlobalPriorityCreateInfoEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkQueueGlobalPriorityEXT globalPriority
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkQueueGlobalPriorityEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"globalPriority\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkImportMemoryHostPointerInfoEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkImportMemoryHostPointerInfoEXT *pstruct = (const VkImportMemoryHostPointerInfoEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkExternalMemoryHandleTypeFlagBits handleType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExternalMemoryHandleTypeFlagBits\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"handleType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pHostPointer
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pHostPointer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pHostPointer); // PWR
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkMemoryHostPointerPropertiesEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkMemoryHostPointerPropertiesEXT *pstruct = (const VkMemoryHostPointerPropertiesEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t memoryTypeBits
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"memoryTypeBits\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceExternalMemoryHostPropertiesEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceExternalMemoryHostPropertiesEXT *pstruct = (const VkPhysicalDeviceExternalMemoryHostPropertiesEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize minImportedHostPointerAlignment
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"minImportedHostPointerAlignment\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPipelineCompilerControlCreateInfoAMD &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPipelineCompilerControlCreateInfoAMD *pstruct = (const VkPipelineCompilerControlCreateInfoAMD *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkPipelineCompilerControlFlagsAMD compilerControlFlags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineCompilerControlFlagsAMD\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"compilerControlFlags\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkCalibratedTimestampInfoEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkCalibratedTimestampInfoEXT *pstruct = (const VkCalibratedTimestampInfoEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkTimeDomainEXT timeDomain
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkTimeDomainEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"timeDomain\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceShaderCorePropertiesAMD &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceShaderCorePropertiesAMD *pstruct = (const VkPhysicalDeviceShaderCorePropertiesAMD *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t shaderEngineCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderEngineCount\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t shaderArraysPerEngineCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderArraysPerEngineCount\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t computeUnitsPerShaderArray
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"computeUnitsPerShaderArray\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t simdPerComputeUnit
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"simdPerComputeUnit\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t wavefrontsPerSimd
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"wavefrontsPerSimd\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t wavefrontSize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"wavefrontSize\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t sgprsPerSimd
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sgprsPerSimd\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t minSgprAllocation
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"minSgprAllocation\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxSgprAllocation
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxSgprAllocation\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t sgprAllocationGranularity
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sgprAllocationGranularity\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t vgprsPerSimd
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"vgprsPerSimd\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t minVgprAllocation
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"minVgprAllocation\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxVgprAllocation
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxVgprAllocation\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t vgprAllocationGranularity
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"vgprAllocationGranularity\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDeviceMemoryOverallocationCreateInfoAMD &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDeviceMemoryOverallocationCreateInfoAMD *pstruct = (const VkDeviceMemoryOverallocationCreateInfoAMD *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkMemoryOverallocationBehaviorAMD overallocationBehavior
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkMemoryOverallocationBehaviorAMD\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"overallocationBehavior\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT *pstruct = (const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxVertexAttribDivisor
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxVertexAttribDivisor\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkVertexInputBindingDivisorDescriptionEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkVertexInputBindingDivisorDescriptionEXT *pstruct = (const VkVertexInputBindingDivisorDescriptionEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: uint32_t binding
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"binding\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t divisor
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"divisor\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPipelineVertexInputDivisorStateCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPipelineVertexInputDivisorStateCreateInfoEXT *pstruct = (const VkPipelineVertexInputDivisorStateCreateInfoEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t vertexBindingDivisorCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"vertexBindingDivisorCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkVertexInputBindingDivisorDescriptionEXT* pVertexBindingDivisors
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkVertexInputBindingDivisorDescriptionEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pVertexBindingDivisors\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pVertexBindingDivisors->GetAddress()); // WUT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT *pstruct = (const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 vertexAttributeInstanceRateDivisor
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"vertexAttributeInstanceRateDivisor\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 vertexAttributeInstanceRateZeroDivisor
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"vertexAttributeInstanceRateZeroDivisor\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPresentFrameTokenGGP &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPresentFrameTokenGGP *pstruct = (const VkPresentFrameTokenGGP *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint64_t frameToken
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"frameToken\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPipelineCreationFeedbackEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPipelineCreationFeedbackEXT *pstruct = (const VkPipelineCreationFeedbackEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkPipelineCreationFeedbackFlagsEXT flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineCreationFeedbackFlagsEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: uint64_t duration
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"duration\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPipelineCreationFeedbackCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPipelineCreationFeedbackCreateInfoEXT *pstruct = (const VkPipelineCreationFeedbackCreateInfoEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkPipelineCreationFeedbackEXT* pPipelineCreationFeedback
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineCreationFeedbackEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pPipelineCreationFeedback\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pPipelineCreationFeedback->GetAddress()); // JHJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t pipelineStageCreationFeedbackCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pipelineStageCreationFeedbackCount\",\n";
    *out += "\n"; // GDS

    // struct member: VkPipelineCreationFeedbackEXT* pPipelineStageCreationFeedbacks
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineCreationFeedbackEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pPipelineStageCreationFeedbacks\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pPipelineStageCreationFeedbacks->GetAddress()); // WUT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceComputeShaderDerivativesFeaturesNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV *pstruct = (const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 computeDerivativeGroupQuads
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"computeDerivativeGroupQuads\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 computeDerivativeGroupLinear
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"computeDerivativeGroupLinear\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceMeshShaderFeaturesNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceMeshShaderFeaturesNV *pstruct = (const VkPhysicalDeviceMeshShaderFeaturesNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 taskShader
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"taskShader\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 meshShader
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"meshShader\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceMeshShaderPropertiesNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceMeshShaderPropertiesNV *pstruct = (const VkPhysicalDeviceMeshShaderPropertiesNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxDrawMeshTasksCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxDrawMeshTasksCount\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxTaskWorkGroupInvocations
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxTaskWorkGroupInvocations\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxTaskWorkGroupSize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxTaskWorkGroupSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, base_addr + offsetof(VkPhysicalDeviceMeshShaderPropertiesNV, maxTaskWorkGroupSize)); // IYY
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxTaskTotalMemorySize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxTaskTotalMemorySize\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxTaskOutputCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxTaskOutputCount\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxMeshWorkGroupInvocations
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxMeshWorkGroupInvocations\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxMeshWorkGroupSize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxMeshWorkGroupSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, base_addr + offsetof(VkPhysicalDeviceMeshShaderPropertiesNV, maxMeshWorkGroupSize)); // IYY
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxMeshTotalMemorySize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxMeshTotalMemorySize\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxMeshOutputVertices
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxMeshOutputVertices\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxMeshOutputPrimitives
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxMeshOutputPrimitives\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxMeshMultiviewViewCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxMeshMultiviewViewCount\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t meshOutputPerVertexGranularity
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"meshOutputPerVertexGranularity\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t meshOutputPerPrimitiveGranularity
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"meshOutputPerPrimitiveGranularity\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDrawMeshTasksIndirectCommandNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDrawMeshTasksIndirectCommandNV *pstruct = (const VkDrawMeshTasksIndirectCommandNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: uint32_t taskCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"taskCount\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t firstTask
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"firstTask\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV *pstruct = (const VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 fragmentShaderBarycentric
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"fragmentShaderBarycentric\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceShaderImageFootprintFeaturesNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceShaderImageFootprintFeaturesNV *pstruct = (const VkPhysicalDeviceShaderImageFootprintFeaturesNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 imageFootprint
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"imageFootprint\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPipelineViewportExclusiveScissorStateCreateInfoNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPipelineViewportExclusiveScissorStateCreateInfoNV *pstruct = (const VkPipelineViewportExclusiveScissorStateCreateInfoNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t exclusiveScissorCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"exclusiveScissorCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkRect2D* pExclusiveScissors
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkRect2D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pExclusiveScissors\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pExclusiveScissors->GetAddress()); // WUT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceExclusiveScissorFeaturesNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceExclusiveScissorFeaturesNV *pstruct = (const VkPhysicalDeviceExclusiveScissorFeaturesNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 exclusiveScissor
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"exclusiveScissor\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkQueueFamilyCheckpointPropertiesNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkQueueFamilyCheckpointPropertiesNV *pstruct = (const VkQueueFamilyCheckpointPropertiesNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkPipelineStageFlags checkpointExecutionStageMask
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineStageFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"checkpointExecutionStageMask\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkCheckpointDataNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkCheckpointDataNV *pstruct = (const VkCheckpointDataNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkPipelineStageFlagBits stage
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineStageFlagBits\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"stage\",\n";
    *out += "\n"; // GDS

    // struct member: void* pCheckpointMarker
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pCheckpointMarker\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pCheckpointMarker); // PWR
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL *pstruct = (const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderIntegerFunctions2
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderIntegerFunctions2\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPerformanceValueDataINTEL &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPerformanceValueDataINTEL *pstruct = (const VkPerformanceValueDataINTEL *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: uint32_t value32
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"value32\",\n";
    *out += "\n"; // GDS

    // struct member: uint64_t value64
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"value64\",\n";
    *out += "\n"; // GDS

    // struct member: float valueFloat
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"valueFloat\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 valueBool
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"valueBool\",\n";
    *out += "\n"; // GDS

    // struct member: const char* valueString
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"char\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"valueString\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.valueString.GetAddress()); // KGJ
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPerformanceValueINTEL &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPerformanceValueINTEL *pstruct = (const VkPerformanceValueINTEL *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkPerformanceValueTypeINTEL type
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPerformanceValueTypeINTEL\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"type\",\n";
    *out += "\n"; // GDS

    // struct member: VkPerformanceValueDataINTEL data
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPerformanceValueDataINTEL\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"data\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkInitializePerformanceApiInfoINTEL &pstruct_in, int indent, uint64_t base_addr)
{
    const VkInitializePerformanceApiInfoINTEL *pstruct = (const VkInitializePerformanceApiInfoINTEL *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: void* pUserData
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pUserData\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pUserData); // PWR
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkQueryPoolCreateInfoINTEL &pstruct_in, int indent, uint64_t base_addr)
{
    const VkQueryPoolCreateInfoINTEL *pstruct = (const VkQueryPoolCreateInfoINTEL *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkQueryPoolSamplingModeINTEL performanceCountersSampling
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkQueryPoolSamplingModeINTEL\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"performanceCountersSampling\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPerformanceMarkerInfoINTEL &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPerformanceMarkerInfoINTEL *pstruct = (const VkPerformanceMarkerInfoINTEL *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint64_t marker
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"marker\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPerformanceStreamMarkerInfoINTEL &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPerformanceStreamMarkerInfoINTEL *pstruct = (const VkPerformanceStreamMarkerInfoINTEL *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t marker
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"marker\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPerformanceOverrideInfoINTEL &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPerformanceOverrideInfoINTEL *pstruct = (const VkPerformanceOverrideInfoINTEL *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkPerformanceOverrideTypeINTEL type
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPerformanceOverrideTypeINTEL\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"type\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 enable
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"enable\",\n";
    *out += "\n"; // GDS

    // struct member: uint64_t parameter
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint64_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"parameter\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPerformanceConfigurationAcquireInfoINTEL &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPerformanceConfigurationAcquireInfoINTEL *pstruct = (const VkPerformanceConfigurationAcquireInfoINTEL *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkPerformanceConfigurationTypeINTEL type
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPerformanceConfigurationTypeINTEL\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"type\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDevicePCIBusInfoPropertiesEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDevicePCIBusInfoPropertiesEXT *pstruct = (const VkPhysicalDevicePCIBusInfoPropertiesEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t pciDomain
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pciDomain\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t pciBus
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pciBus\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t pciDevice
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pciDevice\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t pciFunction
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pciFunction\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkDisplayNativeHdrSurfaceCapabilitiesAMD &pstruct_in, int indent, uint64_t base_addr)
{
    const VkDisplayNativeHdrSurfaceCapabilitiesAMD *pstruct = (const VkDisplayNativeHdrSurfaceCapabilitiesAMD *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 localDimmingSupport
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"localDimmingSupport\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkSwapchainDisplayNativeHdrCreateInfoAMD &pstruct_in, int indent, uint64_t base_addr)
{
    const VkSwapchainDisplayNativeHdrCreateInfoAMD *pstruct = (const VkSwapchainDisplayNativeHdrCreateInfoAMD *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 localDimmingEnable
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"localDimmingEnable\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkImagePipeSurfaceCreateInfoFUCHSIA &pstruct_in, int indent, uint64_t base_addr)
{
    const VkImagePipeSurfaceCreateInfoFUCHSIA *pstruct = (const VkImagePipeSurfaceCreateInfoFUCHSIA *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkImagePipeSurfaceCreateFlagsFUCHSIA flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImagePipeSurfaceCreateFlagsFUCHSIA\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t imagePipeHandle
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"imagePipeHandle\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkMetalSurfaceCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkMetalSurfaceCreateInfoEXT *pstruct = (const VkMetalSurfaceCreateInfoEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkMetalSurfaceCreateFlagsEXT flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkMetalSurfaceCreateFlagsEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pLayer
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pLayer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pLayer); // PWR
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceFragmentDensityMapFeaturesEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceFragmentDensityMapFeaturesEXT *pstruct = (const VkPhysicalDeviceFragmentDensityMapFeaturesEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 fragmentDensityMap
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"fragmentDensityMap\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 fragmentDensityMapDynamic
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"fragmentDensityMapDynamic\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 fragmentDensityMapNonSubsampledImages
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"fragmentDensityMapNonSubsampledImages\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceFragmentDensityMapPropertiesEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceFragmentDensityMapPropertiesEXT *pstruct = (const VkPhysicalDeviceFragmentDensityMapPropertiesEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkExtent2D minFragmentDensityTexelSize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExtent2D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"minFragmentDensityTexelSize\",\n";
    *out += "\n"; // GDS

    // struct member: VkExtent2D maxFragmentDensityTexelSize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkExtent2D\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxFragmentDensityTexelSize\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 fragmentDensityInvocations
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"fragmentDensityInvocations\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkRenderPassFragmentDensityMapCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkRenderPassFragmentDensityMapCreateInfoEXT *pstruct = (const VkRenderPassFragmentDensityMapCreateInfoEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkAttachmentReference fragmentDensityMapAttachment
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkAttachmentReference\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"fragmentDensityMapAttachment\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceScalarBlockLayoutFeaturesEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceScalarBlockLayoutFeaturesEXT *pstruct = (const VkPhysicalDeviceScalarBlockLayoutFeaturesEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 scalarBlockLayout
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"scalarBlockLayout\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceSubgroupSizeControlFeaturesEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceSubgroupSizeControlFeaturesEXT *pstruct = (const VkPhysicalDeviceSubgroupSizeControlFeaturesEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 subgroupSizeControl
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"subgroupSizeControl\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 computeFullSubgroups
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"computeFullSubgroups\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceSubgroupSizeControlPropertiesEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceSubgroupSizeControlPropertiesEXT *pstruct = (const VkPhysicalDeviceSubgroupSizeControlPropertiesEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t minSubgroupSize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"minSubgroupSize\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxSubgroupSize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxSubgroupSize\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t maxComputeWorkgroupSubgroups
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"maxComputeWorkgroupSubgroups\",\n";
    *out += "\n"; // GDS

    // struct member: VkShaderStageFlags requiredSubgroupSizeStages
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkShaderStageFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"requiredSubgroupSizeStages\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT *pstruct = (const VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t requiredSubgroupSize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"requiredSubgroupSize\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceShaderCoreProperties2AMD &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceShaderCoreProperties2AMD *pstruct = (const VkPhysicalDeviceShaderCoreProperties2AMD *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkShaderCorePropertiesFlagsAMD shaderCoreFeatures
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkShaderCorePropertiesFlagsAMD\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderCoreFeatures\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t activeComputeUnitCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"activeComputeUnitCount\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceCoherentMemoryFeaturesAMD &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceCoherentMemoryFeaturesAMD *pstruct = (const VkPhysicalDeviceCoherentMemoryFeaturesAMD *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 deviceCoherentMemory
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"deviceCoherentMemory\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceMemoryBudgetPropertiesEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceMemoryBudgetPropertiesEXT *pstruct = (const VkPhysicalDeviceMemoryBudgetPropertiesEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize heapBudget
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"heapBudget\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, base_addr + offsetof(VkPhysicalDeviceMemoryBudgetPropertiesEXT, heapBudget)); // IYY
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize heapUsage
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"heapUsage\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, base_addr + offsetof(VkPhysicalDeviceMemoryBudgetPropertiesEXT, heapUsage)); // IYY
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceMemoryPriorityFeaturesEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceMemoryPriorityFeaturesEXT *pstruct = (const VkPhysicalDeviceMemoryPriorityFeaturesEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 memoryPriority
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"memoryPriority\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkMemoryPriorityAllocateInfoEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkMemoryPriorityAllocateInfoEXT *pstruct = (const VkMemoryPriorityAllocateInfoEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: float priority
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"float\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"priority\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV *pstruct = (const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 dedicatedAllocationImageAliasing
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"dedicatedAllocationImageAliasing\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceBufferDeviceAddressFeaturesEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT *pstruct = (const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 bufferDeviceAddress
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"bufferDeviceAddress\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 bufferDeviceAddressCaptureReplay
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"bufferDeviceAddressCaptureReplay\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 bufferDeviceAddressMultiDevice
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"bufferDeviceAddressMultiDevice\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkBufferDeviceAddressInfoEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkBufferDeviceAddressInfoEXT *pstruct = (const VkBufferDeviceAddressInfoEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBuffer buffer
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBuffer\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"buffer\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkBufferDeviceAddressCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkBufferDeviceAddressCreateInfoEXT *pstruct = (const VkBufferDeviceAddressCreateInfoEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceAddress deviceAddress
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceAddress\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"deviceAddress\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkImageStencilUsageCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkImageStencilUsageCreateInfoEXT *pstruct = (const VkImageStencilUsageCreateInfoEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkImageUsageFlags stencilUsage
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkImageUsageFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"stencilUsage\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkValidationFeaturesEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkValidationFeaturesEXT *pstruct = (const VkValidationFeaturesEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t enabledValidationFeatureCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"enabledValidationFeatureCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkValidationFeatureEnableEXT* pEnabledValidationFeatures
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkValidationFeatureEnableEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pEnabledValidationFeatures\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pEnabledValidationFeatures.GetAddress()); // WPT
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t disabledValidationFeatureCount
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"disabledValidationFeatureCount\",\n";
    *out += "\n"; // GDS

    // struct member: const VkValidationFeatureDisableEXT* pDisabledValidationFeatures
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkValidationFeatureDisableEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pDisabledValidationFeatures\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pDisabledValidationFeatures.GetAddress()); // WPT
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkCooperativeMatrixPropertiesNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkCooperativeMatrixPropertiesNV *pstruct = (const VkCooperativeMatrixPropertiesNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t MSize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"MSize\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t NSize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"NSize\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t KSize
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"KSize\",\n";
    *out += "\n"; // GDS

    // struct member: VkComponentTypeNV AType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkComponentTypeNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"AType\",\n";
    *out += "\n"; // GDS

    // struct member: VkComponentTypeNV BType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkComponentTypeNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"BType\",\n";
    *out += "\n"; // GDS

    // struct member: VkComponentTypeNV CType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkComponentTypeNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"CType\",\n";
    *out += "\n"; // GDS

    // struct member: VkComponentTypeNV DType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkComponentTypeNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"DType\",\n";
    *out += "\n"; // GDS

    // struct member: VkScopeNV scope
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkScopeNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"scope\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceCooperativeMatrixFeaturesNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceCooperativeMatrixFeaturesNV *pstruct = (const VkPhysicalDeviceCooperativeMatrixFeaturesNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 cooperativeMatrix
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"cooperativeMatrix\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 cooperativeMatrixRobustBufferAccess
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"cooperativeMatrixRobustBufferAccess\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceCooperativeMatrixPropertiesNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceCooperativeMatrixPropertiesNV *pstruct = (const VkPhysicalDeviceCooperativeMatrixPropertiesNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkShaderStageFlags cooperativeMatrixSupportedStages
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkShaderStageFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"cooperativeMatrixSupportedStages\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceCoverageReductionModeFeaturesNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceCoverageReductionModeFeaturesNV *pstruct = (const VkPhysicalDeviceCoverageReductionModeFeaturesNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 coverageReductionMode
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"coverageReductionMode\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPipelineCoverageReductionStateCreateInfoNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPipelineCoverageReductionStateCreateInfoNV *pstruct = (const VkPipelineCoverageReductionStateCreateInfoNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkPipelineCoverageReductionStateCreateFlagsNV flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkPipelineCoverageReductionStateCreateFlagsNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
    *out += "\n"; // GDS

    // struct member: VkCoverageReductionModeNV coverageReductionMode
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCoverageReductionModeNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"coverageReductionMode\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkFramebufferMixedSamplesCombinationNV &pstruct_in, int indent, uint64_t base_addr)
{
    const VkFramebufferMixedSamplesCombinationNV *pstruct = (const VkFramebufferMixedSamplesCombinationNV *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkCoverageReductionModeNV coverageReductionMode
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkCoverageReductionModeNV\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"coverageReductionMode\",\n";
    *out += "\n"; // GDS

    // struct member: VkSampleCountFlagBits rasterizationSamples
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSampleCountFlagBits\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"rasterizationSamples\",\n";
    *out += "\n"; // GDS

    // struct member: VkSampleCountFlags depthStencilSamples
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSampleCountFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"depthStencilSamples\",\n";
    *out += "\n"; // GDS

    // struct member: VkSampleCountFlags colorSamples
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkSampleCountFlags\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"colorSamples\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT *pstruct = (const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 fragmentShaderSampleInterlock
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"fragmentShaderSampleInterlock\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 fragmentShaderPixelInterlock
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"fragmentShaderPixelInterlock\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 fragmentShaderShadingRateInterlock
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"fragmentShaderShadingRateInterlock\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceYcbcrImageArraysFeaturesEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT *pstruct = (const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 ycbcrImageArrays
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"ycbcrImageArrays\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkSurfaceFullScreenExclusiveInfoEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkSurfaceFullScreenExclusiveInfoEXT *pstruct = (const VkSurfaceFullScreenExclusiveInfoEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkFullScreenExclusiveEXT fullScreenExclusive
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkFullScreenExclusiveEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"fullScreenExclusive\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkSurfaceCapabilitiesFullScreenExclusiveEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkSurfaceCapabilitiesFullScreenExclusiveEXT *pstruct = (const VkSurfaceCapabilitiesFullScreenExclusiveEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 fullScreenExclusiveSupported
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"fullScreenExclusiveSupported\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkSurfaceFullScreenExclusiveWin32InfoEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkSurfaceFullScreenExclusiveWin32InfoEXT *pstruct = (const VkSurfaceFullScreenExclusiveWin32InfoEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: void* hmonitor
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"hmonitor\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.hmonitor); // PWR
    *out += "\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkHeadlessSurfaceCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkHeadlessSurfaceCreateInfoEXT *pstruct = (const VkHeadlessSurfaceCreateInfoEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkHeadlessSurfaceCreateFlagsEXT flags
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkHeadlessSurfaceCreateFlagsEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"flags\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceLineRasterizationFeaturesEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceLineRasterizationFeaturesEXT *pstruct = (const VkPhysicalDeviceLineRasterizationFeaturesEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 rectangularLines
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"rectangularLines\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 bresenhamLines
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"bresenhamLines\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 smoothLines
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"smoothLines\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 stippledRectangularLines
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"stippledRectangularLines\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 stippledBresenhamLines
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"stippledBresenhamLines\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 stippledSmoothLines
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"stippledSmoothLines\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceLineRasterizationPropertiesEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceLineRasterizationPropertiesEXT *pstruct = (const VkPhysicalDeviceLineRasterizationPropertiesEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: uint32_t lineSubPixelPrecisionBits
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"lineSubPixelPrecisionBits\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPipelineRasterizationLineStateCreateInfoEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPipelineRasterizationLineStateCreateInfoEXT *pstruct = (const VkPipelineRasterizationLineStateCreateInfoEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: const void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkLineRasterizationModeEXT lineRasterizationMode
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkLineRasterizationModeEXT\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"lineRasterizationMode\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 stippledLineEnable
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"stippledLineEnable\",\n";
    *out += "\n"; // GDS

    // struct member: uint32_t lineStippleFactor
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint32_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"lineStippleFactor\",\n";
    *out += "\n"; // GDS

    // struct member: uint16_t lineStipplePattern
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"uint16_t\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"lineStipplePattern\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceHostQueryResetFeaturesEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceHostQueryResetFeaturesEXT *pstruct = (const VkPhysicalDeviceHostQueryResetFeaturesEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 hostQueryReset
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"hostQueryReset\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceIndexTypeUint8FeaturesEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceIndexTypeUint8FeaturesEXT *pstruct = (const VkPhysicalDeviceIndexTypeUint8FeaturesEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 indexTypeUint8
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"indexTypeUint8\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT *pstruct = (const VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 shaderDemoteToHelperInvocation
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"shaderDemoteToHelperInvocation\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT *pstruct = (const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 texelBufferAlignment
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"texelBufferAlignment\",\n";
}

void StructureToStringJson(std::string* out, const Decoded_VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT &pstruct_in, int indent, uint64_t base_addr)
{
    const VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT *pstruct = (const VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT *)pstruct_in.decoded_value; // BTB
    assert(out != nullptr);
    if (pstruct == nullptr)
    {
        return;
    }
    *out += "\n"; // UUR

    // struct member: VkStructureType sType
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkStructureType\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"sType\",\n";
    *out += "\n"; // GDS

    // struct member: void* pNext
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"void\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"pNext\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"address\" : \"";
    AddrToStringJson(out, pstruct_in.pNext->GetAddress()); // KRJ
    *out += "\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize storageTexelBufferOffsetAlignmentBytes
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"storageTexelBufferOffsetAlignmentBytes\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 storageTexelBufferOffsetSingleTexelAlignment
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"storageTexelBufferOffsetSingleTexelAlignment\",\n";
    *out += "\n"; // GDS

    // struct member: VkDeviceSize uniformTexelBufferOffsetAlignmentBytes
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkDeviceSize\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"uniformTexelBufferOffsetAlignmentBytes\",\n";
    *out += "\n"; // GDS

    // struct member: VkBool32 uniformTexelBufferOffsetSingleTexelAlignment
    IndentSpacesJson(out, indent);
    *out += "\"type\" : \"VkBool32\",\n";
    IndentSpacesJson(out, indent);
    *out += "\"name\" : \"uniformTexelBufferOffsetSingleTexelAlignment\",\n";
}

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif
