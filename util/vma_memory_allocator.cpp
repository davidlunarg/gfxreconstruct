/*
** Copyright (c) 2018 LunarG, Inc.
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

#include "util/vma_memory_allocator.h"
#include "util/defines.h"

BRIMSTONE_BEGIN_NAMESPACE(brimstone)
BRIMSTONE_BEGIN_NAMESPACE(util)

VmaMemoryAllocator::VmaMemoryAllocator(VkPhysicalDevice physical_device, VkDevice device)
{
    VmaAllocatorCreateInfo allocator_ci = {};
    allocator_ci.physicalDevice = physical_device;
    allocator_ci.device = device;

    vmaCreateAllocator(&allocator_ci, &allocator_);
}

VkResult VmaMemoryAllocator::AllocateMemory(
    VkDevice device, const VkMemoryAllocateInfo* pAllocateInfo, GraphicsMemory* pMemory, const VkPhysicalDeviceMemoryProperties* pMemoryProperties)
{
    VkMemoryType memory_type = pMemoryProperties->memoryTypes[pAllocateInfo->memoryTypeIndex];

    pMemory = new GraphicsMemory()
    {
        .allocationSize = pAllocateInfo->allocationSize,
        .memoryType = memory_type
    };
    
    // Do nothing, deferring memory allocation to bind time, or if no resource is bound map time
    return VK_SUCCESS;
}

VkResult VmaMemoryAllocator::FreeMemory(VkDevice device, GraphicsMemory* const pMemory)
{
    if (memory_allocation_map_.find(pMemory) == memory_allocation_map_.end())
    {
        throw std::runtime_error("Unable to free memory, allocation not found");
    }

    VmaAllocation allocation = memory_allocation_map_[pMemory];
    return vmaFreeMemory(allocator_, allocation);
}

VkResult VmaMemoryAllocator::BindBufferMemory(
    VkDevice device, VkBuffer buffer, GraphicsMemory* const pMemory, VkDeviceSize memoryOffset)
{
    VmaAllocationCreateInfo alloc_create_info = {};
    VmaAllocation allocation;
    VmaAllocationInfo allocation_info;

    auto result = vmaAllocateMemoryForBuffer(allocator_, buffer, &alloc_create_info, &allocation, &allocation_info);

    if (result == VK_SUCCESS)
    {
        memory_allocation_map_[pMemory] = allocation;
        
        pMemory->pDeviceMemory = new VkDeviceMemory(allocation_info.deviceMemory);
    }

    return result;
}

VkResult VmaMemoryAllocator::BindImageMemory(
    VkDevice device, VkImage image, GraphicsMemory* const pMemory, VkDeviceSize memoryOffset)
{
    VmaAllocationCreateInfo alloc_create_info = {};
    VmaAllocation allocation;
    VmaAllocationInfo allocation_info;

    auto result = vmaAllocateMemoryForImage(allocator_, image, &alloc_create_info, &allocation, &allocation_info);

    if (result == VK_SUCCESS)
    {
        memory_allocation_map_[pMemory] = allocation;

        pMemory->pDeviceMemory = new VkDeviceMemory(allocation_info.deviceMemory);
    }

    return result;
}

VkResult VmaMemoryAllocator::MapMemory(
    VkDevice device, GraphicsMemory* const pMemory, VkDeviceSize offset, VkDeviceSize size, VkMemoryMapFlags flags, void ** ppData)
{
    VmaAllocation allocation;
    if (memory_allocation_map_.find(pMemory) == memory_allocation_map_.end())
    {
        // Memory was not bound, therefore not allocated. We need to allocate it
        VmaAllocationCreateInfo alloc_create_info = {};
        VmaAllocation allocation;
        VmaAllocationInfo allocation_info;

        VkMemoryRequirements mem_reqs = {};
        mem_reqs.size = BRIMSTONE_ALIGN_VALUE(pMemory->allocation_size, 4096);
        mem_reqs.alignment = 4096; // Hopefully 4k is big enough
        mem_reqs.memoryTypeBits = pMemory->memory_type.propertyFlags;

        auto result = vmaAllocateMemory(allocator_, &mem_reqs, &alloc_create_info, &allocation, &allocation_info);

        if (result == VK_SUCCESS)
        {
            memory_allocation_map_[pMemory] = allocation;

            pMemory->pDeviceMemory = new VkDeviceMemory(allocation_info.deviceMemory);
        }
        else
        {
            throw std::runtime_error("vmaAllocateMemory failed");
        }
    }
    else
    {
        allocation = memory_allocation_map_[pMemory];
    }

    return vmaMapMemory(allocator_, allocation, ppData);
}

VkResult VmaMemoryAllocator::UnmapMemory(VkDevice device, GraphicsMemory* const pMemory)
{
    if (memory_allocation_map_.find(pMemory) == memory_allocation_map_.end())
    {
        throw std::runtime_error("Unable to unmap memory, allocation not found");
    }

    VmaAllocation allocation = memory_allocation_map_[pMemory];
    return vmaUnmapMemory(allocator_, allocation);
}

VkResult VmaMemoryAllocator::FlushMappedMemoryRange(
    VkDevice device, GraphicsMemory* const pMemory, VkDeviceSize offset, VkDeviceSize size)
{
    VkMappedMemoryRange range
    {
        .sType = VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE,
        .pNext = nullptr,
        .memory = *pMemory->pDeviceMemory,
        .offset = offset,
        .size = size
    };

    return vkFlushMappedMemoryRanges(device, 1, &range);
}

VkResult VmaMemoryAllocator::InvalidateMappedMemoryRange(
    VkDevice device, GraphicsMemory* const pMemory, VkDeviceSize offset, VkDeviceSize size)
{
    VkMappedMemoryRange range
    {
        .sType = VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE,
        .pNext = nullptr,
        .memory = *pMemory->pDeviceMemory,
        .offset = offset,
        .size = size
    };

    return vkInvalidateMappedMemoryRanges(device, 1, &range);
}

BRIMSTONE_END_NAMESPACE(util)
BRIMSTONE_END_NAMESPACE(brimstone)
