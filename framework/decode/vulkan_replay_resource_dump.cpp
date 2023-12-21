/*
** Copyright (c) 2023 LunarG, Inc.
**
** Permission is hereby granted, free of charge, to any person obtaining a
** copy of this software and associated documentation files (the "Software"),
** to deal in the Software without restriction, including without limitation
** the rights to use, copy, modify, merge, publish, distribute, sublicense,
** and/or sell copies of the Software, and to permit persons to whom the
** Software is furnished to do so, subject to the following conditions:
**
** The above copyright notice and this permission notice shall be included in
** all copies or substantial portions of the Software.
**
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
** IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
** FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
** AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
** LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
** FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
** DEALINGS IN THE SOFTWARE.
*/

#include "generated/generated_vulkan_enum_to_string.h"
#include "graphics/vulkan_resources_util.h"
#include "util/image_writer.h"
#include "util/buffer_writer.h"
#include "vulkan_replay_resource_dump.h"

#include "Vulkan-Utility-Libraries/vk_format_utils.h"

#include <sstream>

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)

template <typename T>
static bool IsInsideRange(const std::vector<T>& vec, T value)
{
    assert(vec.size());

    return (value >= *(vec.begin()) && value <= *(vec.end() - 1));
}

static util::imagewriter::DataFormats VkFormatToImageWriterDataFormat(VkFormat format)
{
    switch (format)
    {
        case VK_FORMAT_R8G8B8_UNORM:
            return util::imagewriter::DataFormats::kFormat_RGB;

        case VK_FORMAT_R8G8B8A8_UNORM:
            return util::imagewriter::DataFormats::kFormat_RGBA;

        case VK_FORMAT_B8G8R8_UNORM:
            return util::imagewriter::DataFormats::kFormat_BGR;

        case VK_FORMAT_B8G8R8A8_UNORM:
            return util::imagewriter::DataFormats::kFormat_BGRA;

        case VK_FORMAT_D32_SFLOAT:
        case VK_FORMAT_D32_SFLOAT_S8_UINT:
            return util::imagewriter::DataFormats::kFormat_D32;

        case VK_FORMAT_D16_UNORM:
            return util::imagewriter::DataFormats::kFormat_D16;

        default:
            GFXRECON_LOG_ERROR("%s() failed to handle format: %s", __func__, util::ToString<VkFormat>(format).c_str());
            return util::imagewriter::DataFormats::kFormat_UNSPECIFIED;
    }
}

static uint32_t GetMemoryTypeIndex(const VkPhysicalDeviceMemoryProperties& memory_properties,
                                   uint32_t                                type_bits,
                                   VkMemoryPropertyFlags                   property_flags)
{
    uint32_t memory_type_index = std::numeric_limits<uint32_t>::max();

    for (uint32_t i = 0; i < memory_properties.memoryTypeCount; ++i)
    {
        if ((type_bits & (1 << i)) &&
            ((memory_properties.memoryTypes[i].propertyFlags & property_flags) == property_flags))
        {
            memory_type_index = i;
            break;
        }
    }

    return memory_type_index;
}

VulkanReplayResourceDump::VulkanReplayResourceDump(const std::vector<uint64_t>&              begin_command_buffer_index,
                                                   const std::vector<std::vector<uint64_t>>& draw_indices,
                                                   const std::vector<std::vector<uint64_t>>& dispatch_indices,
                                                   const std::vector<std::vector<uint64_t>>& traceRays_indices,
                                                   const std::vector<uint64_t>&              queueSubmit_indices,
                                                   bool                                      isolate_draw,
                                                   const VulkanObjectInfoTable&              object_info_table) :
    QueueSubmit_indices_(std::move(queueSubmit_indices)),
    recording_(false), inside_renderpass_(false), isolate_draw_call_(isolate_draw),
    object_info_table_(object_info_table)
{
#if 0
    // These should match
    assert(begin_command_buffer_index.size() == draw_indices.size());

    for (size_t i = 0; i < begin_command_buffer_index.size(); ++i)
    {
        const uint64_t bcb_index = begin_command_buffer_index[i];
        cmd_buf_stacks_.emplace(std::piecewise_construct,
                                std::forward_as_tuple(bcb_index),
                                std::forward_as_tuple(std::move(draw_indices[i]),
                                                      std::move(dispatch_indices[i]),
                                                      std::move(traceRays_indices[i]),
                                                      object_info_table));
    }
#endif
}

VkResult VulkanReplayResourceDump::CloneCommandBuffer(uint64_t                   bcb_index,
                                                      format::HandleId           commandBuffer,
                                                      const encode::DeviceTable* device_table)
{
    assert(device_table);

    auto entry = cmd_buf_stacks_.find(bcb_index);
    if (entry == cmd_buf_stacks_.end())
    {
        GFXRECON_LOG_ERROR("Couldn't find vkBeginCommandBuffer with index %" PRIx64, bcb_index);
        assert(0);
        return VK_ERROR_INITIALIZATION_FAILED;
    }

    const CommandBufferInfo* cb_info      = object_info_table_.GetCommandBufferInfo(commandBuffer);
    const CommandPoolInfo*   cb_pool_info = object_info_table_.GetCommandPoolInfo(cb_info->pool_id);

    const VkCommandBufferAllocateInfo ai{ VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO,
                                          nullptr,
                                          cb_pool_info->handle,
                                          VK_COMMAND_BUFFER_LEVEL_PRIMARY,
                                          1 };

    CommandBufferStack& stack    = entry->second;
    const DeviceInfo*   dev_info = object_info_table_.GetDeviceInfo(cb_info->parent_id);

    for (size_t i = 0; i < stack.command_buffers.size(); ++i)
    {
        assert(stack.command_buffers[i] == VK_NULL_HANDLE);
        VkResult res = device_table->AllocateCommandBuffers(dev_info->handle, &ai, &stack.command_buffers[i]);

        if (res == VK_SUCCESS)
        {
            recording_ = true;
        }
        else
        {
            GFXRECON_LOG_ERROR("AllocateCommandBuffers failed with %s", util::ToString<VkResult>(res));
            return res;
        }

        const VkCommandBufferBeginInfo bi{ VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO, nullptr, 0, nullptr };
        device_table->BeginCommandBuffer(stack.command_buffers[i], &bi);
    }

    assert(stack.original_command_buffer_info == nullptr);
    stack.original_command_buffer_info = cb_info;

    assert(stack.original_command_buffer_handle == VK_NULL_HANDLE);
    stack.original_command_buffer_handle = cb_info->handle;

    assert(stack.device_table == nullptr);
    stack.device_table = device_table;

    assert(cmd_buf_begin_map_.find(cb_info->handle) == cmd_buf_begin_map_.end());
    cmd_buf_begin_map_[cb_info->handle] = bcb_index;

    const DeviceInfo* device_info = object_info_table_.GetDeviceInfo(cb_info->parent_id);
    assert(device_info->parent_id != format::kNullHandleId);
    const PhysicalDeviceInfo* phys_dev_info = object_info_table_.GetPhysicalDeviceInfo(device_info->parent_id);
    assert(phys_dev_info);

    assert(phys_dev_info->replay_device_info);
    assert(phys_dev_info->replay_device_info->memory_properties.get());
    stack.replay_device_phys_mem_props = phys_dev_info->replay_device_info->memory_properties.get();

    // Allocate auxiliary command buffer
    VkResult res = device_table->AllocateCommandBuffers(dev_info->handle, &ai, &stack.aux_command_buffer);
    if (res != VK_SUCCESS)
    {
        GFXRECON_LOG_ERROR("AllocateCommandBuffers failed with %s", util::ToString<VkResult>(res));
        assert(0);
        return res;
    }

    const VkFenceCreateInfo ci = { VK_STRUCTURE_TYPE_FENCE_CREATE_INFO, nullptr, 0 };
    res                        = device_table->CreateFence(dev_info->handle, &ci, nullptr, &stack.aux_fence);
    if (res != VK_SUCCESS)
    {
        GFXRECON_LOG_ERROR("CreateFence failed with %s", util::ToString<VkResult>(res));
        assert(0);
        return res;
    }

    return VK_SUCCESS;
}

void VulkanReplayResourceDump::FinalizeCommandBuffer(VkCommandBuffer original_command_buffer)
{
    auto begin_entry = cmd_buf_begin_map_.find(original_command_buffer);
    assert(begin_entry != cmd_buf_begin_map_.end());

    auto stack_entry = cmd_buf_stacks_.find(begin_entry->second);
    assert(stack_entry != cmd_buf_stacks_.end());

    CommandBufferStack& stack = stack_entry->second;

    const uint64_t RT_index = stack.Get_RT_index(stack.dc_indices[stack.current_index]);

    std::vector<VkImageMemoryBarrier> img_barriers;

    for (size_t i = 0; i < render_targets_[RT_index].color_att_imgs.size(); ++i)
    {
        if (render_targets_[RT_index].color_att_storeOps[i] == VK_ATTACHMENT_STORE_OP_STORE)
        {
            const ImageInfo* image_info = render_targets_[RT_index].color_att_imgs[i];

            std::vector<VkImageAspectFlagBits> aspects;
            bool                               combined_depth_stencil;
            graphics::GetFormatAspects(image_info->format, &aspects, &combined_depth_stencil);

            VkImageMemoryBarrier img_barrier;
            img_barrier.sType                           = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
            img_barrier.pNext                           = nullptr;
            img_barrier.srcAccessMask                   = VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT;
            img_barrier.dstAccessMask                   = VK_ACCESS_TRANSFER_READ_BIT;
            img_barrier.oldLayout                       = render_targets_[RT_index].color_att_final_layouts[i];
            img_barrier.newLayout                       = VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
            img_barrier.srcQueueFamilyIndex             = 0;
            img_barrier.dstQueueFamilyIndex             = 0;
            img_barrier.image                           = image_info->handle;
            img_barrier.subresourceRange.aspectMask     = aspects[0];
            img_barrier.subresourceRange.baseArrayLayer = 0;
            img_barrier.subresourceRange.baseMipLevel   = 0;
            img_barrier.subresourceRange.layerCount     = VK_REMAINING_ARRAY_LAYERS;
            img_barrier.subresourceRange.levelCount     = VK_REMAINING_MIP_LEVELS;
            img_barriers.push_back(std::move(img_barrier));
        }
    }

    if (render_targets_[RT_index].depth_att_img)
    {
        const ImageInfo* image_info = render_targets_[RT_index].depth_att_img;

        std::vector<VkImageAspectFlagBits> aspects;
        bool                               combined_depth_stencil;
        graphics::GetFormatAspects(image_info->format, &aspects, &combined_depth_stencil);

        VkImageMemoryBarrier img_barrier;
        img_barrier.sType                           = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
        img_barrier.pNext                           = nullptr;
        img_barrier.srcAccessMask                   = VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT;
        img_barrier.dstAccessMask                   = VK_ACCESS_TRANSFER_READ_BIT;
        img_barrier.oldLayout                       = render_targets_[RT_index].depth_att_final_layout;
        img_barrier.newLayout                       = VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
        img_barrier.srcQueueFamilyIndex             = 0;
        img_barrier.dstQueueFamilyIndex             = 0;
        img_barrier.image                           = image_info->handle;
        img_barrier.subresourceRange.aspectMask     = aspects[0];
        img_barrier.subresourceRange.baseArrayLayer = 0;
        img_barrier.subresourceRange.baseMipLevel   = 0;
        img_barrier.subresourceRange.layerCount     = VK_REMAINING_ARRAY_LAYERS;
        img_barrier.subresourceRange.levelCount     = VK_REMAINING_MIP_LEVELS;
        img_barriers.push_back(std::move(img_barrier));
    }

    VkCommandBuffer current_clone = stack.command_buffers[stack.current_index];
    assert(stack.device_table != nullptr);

    if (inside_renderpass_)
    {
        // TODO: Handle multiple sub passes
        stack.device_table->CmdEndRenderPass(current_clone);
    }

    // Inset pipeline barrier after EndRenderPass
    if (img_barriers.size())
    {
        stack.device_table->CmdPipelineBarrier(current_clone,
                                               VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
                                               VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT,
                                               0,
                                               0,
                                               nullptr,
                                               0,
                                               nullptr,
                                               img_barriers.size(),
                                               img_barriers.data());
    }

    stack.device_table->EndCommandBuffer(current_clone);

    // Increment pointer to clone that is going to be finalized next
    ++stack.current_index;

    UpdateRecordingStatus();
}

VkResult VulkanReplayResourceDump::RevertRenderTargetImageLayouts(const CommandBufferStack& stack,
                                                                  VkQueue                   queue,
                                                                  uint64_t                  dc_index)
{
    const uint64_t RT_index = stack.Get_RT_index(dc_index);

    std::vector<VkImageMemoryBarrier> img_barriers;

    for (size_t i = 0; i < render_targets_[RT_index].color_att_imgs.size(); ++i)
    {
        if (render_targets_[RT_index].color_att_storeOps[i] == VK_ATTACHMENT_STORE_OP_STORE)
        {
            const ImageInfo* image_info = render_targets_[RT_index].color_att_imgs[i];

            std::vector<VkImageAspectFlagBits> aspects;
            bool                               combined_depth_stencil;
            graphics::GetFormatAspects(image_info->format, &aspects, &combined_depth_stencil);

            VkImageMemoryBarrier img_barrier;
            img_barrier.sType                           = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
            img_barrier.pNext                           = nullptr;
            img_barrier.srcAccessMask                   = VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT;
            img_barrier.dstAccessMask                   = VK_ACCESS_TRANSFER_READ_BIT;
            img_barrier.oldLayout                       = VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
            img_barrier.newLayout                       = render_targets_[RT_index].color_att_final_layouts[i];
            img_barrier.srcQueueFamilyIndex             = 0;
            img_barrier.dstQueueFamilyIndex             = 0;
            img_barrier.image                           = image_info->handle;
            img_barrier.subresourceRange.aspectMask     = aspects[0];
            img_barrier.subresourceRange.baseArrayLayer = 0;
            img_barrier.subresourceRange.baseMipLevel   = 0;
            img_barrier.subresourceRange.layerCount     = VK_REMAINING_ARRAY_LAYERS;
            img_barrier.subresourceRange.levelCount     = VK_REMAINING_MIP_LEVELS;
            img_barriers.push_back(std::move(img_barrier));
        }
    }

    if (render_targets_[RT_index].depth_att_img)
    {
        const ImageInfo* image_info = render_targets_[RT_index].depth_att_img;

        std::vector<VkImageAspectFlagBits> aspects;
        bool                               combined_depth_stencil;
        graphics::GetFormatAspects(image_info->format, &aspects, &combined_depth_stencil);

        VkImageMemoryBarrier img_barrier;
        img_barrier.sType                           = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
        img_barrier.pNext                           = nullptr;
        img_barrier.srcAccessMask                   = VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT;
        img_barrier.dstAccessMask                   = VK_ACCESS_TRANSFER_READ_BIT;
        img_barrier.oldLayout                       = VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
        img_barrier.newLayout                       = render_targets_[RT_index].depth_att_final_layout;
        img_barrier.srcQueueFamilyIndex             = 0;
        img_barrier.dstQueueFamilyIndex             = 0;
        img_barrier.image                           = image_info->handle;
        img_barrier.subresourceRange.aspectMask     = aspects[0];
        img_barrier.subresourceRange.baseArrayLayer = 0;
        img_barrier.subresourceRange.baseMipLevel   = 0;
        img_barrier.subresourceRange.layerCount     = VK_REMAINING_ARRAY_LAYERS;
        img_barrier.subresourceRange.levelCount     = VK_REMAINING_MIP_LEVELS;
        img_barriers.push_back(std::move(img_barrier));
    }

    assert(stack.device_table != nullptr);
    assert(stack.aux_command_buffer != VK_NULL_HANDLE);

    const VkCommandBufferBeginInfo bi{ VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO, nullptr, 0, nullptr };
    stack.device_table->BeginCommandBuffer(stack.aux_command_buffer, &bi);

    if (img_barriers.size())
    {
        stack.device_table->CmdPipelineBarrier(stack.aux_command_buffer,
                                               VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
                                               VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT,
                                               0,
                                               0,
                                               nullptr,
                                               0,
                                               nullptr,
                                               img_barriers.size(),
                                               img_barriers.data());
    }

    stack.device_table->EndCommandBuffer(stack.aux_command_buffer);

    VkSubmitInfo si;
    si.sType                = VK_STRUCTURE_TYPE_SUBMIT_INFO;
    si.pNext                = nullptr;
    si.waitSemaphoreCount   = 0;
    si.waitSemaphoreCount   = 0;
    si.pWaitSemaphores      = nullptr;
    si.pWaitDstStageMask    = nullptr;
    si.commandBufferCount   = 1;
    si.pCommandBuffers      = &stack.aux_command_buffer;
    si.signalSemaphoreCount = 0;
    si.pSignalSemaphores    = nullptr;

    VkResult res = stack.device_table->QueueSubmit(queue, 1, &si, VK_NULL_HANDLE);

    assert(res == VK_SUCCESS);
    if (res != VK_SUCCESS)
    {
        GFXRECON_LOG_ERROR("QueueSubmit failed with %s", util::ToString<VkResult>(res));
        return res;
    }

    res = stack.device_table->QueueWaitIdle(queue);
    assert(res == VK_SUCCESS);
    if (res != VK_SUCCESS)
    {
        GFXRECON_LOG_ERROR("QueueWaitIdle failed with %s", util::ToString<VkResult>(res));
    }

    return res;
}

void VulkanReplayResourceDump::DumpAttachments(const CommandBufferStack& stack, uint64_t dc_index)
{
    assert(stack.device_table != nullptr);

    const uint64_t RT_index = stack.Get_RT_index(dc_index);

    if (!render_targets_[RT_index].color_att_imgs.size() && render_targets_[RT_index].depth_att_img == nullptr)
    {
        assert(render_targets_[RT_index].color_att_storeOps.size() == 0);
        return;
    }

    assert(stack.original_command_buffer_info);
    assert(stack.original_command_buffer_info->parent_id != format::kNullHandleId);
    const DeviceInfo* device_info = object_info_table_.GetDeviceInfo(stack.original_command_buffer_info->parent_id);
    assert(device_info);

    const PhysicalDeviceInfo* phys_dev_info = object_info_table_.GetPhysicalDeviceInfo(device_info->parent_id);
    assert(phys_dev_info);

    graphics::VulkanResourcesUtil resource_util(
        device_info->handle, *stack.device_table, *phys_dev_info->replay_device_info->memory_properties);

    assert(render_targets_[RT_index].color_att_imgs.size() == render_targets_[RT_index].color_att_storeOps.size());
    for (size_t i = 0; i < render_targets_[RT_index].color_att_imgs.size(); ++i)
    {
        if (render_targets_[RT_index].color_att_storeOps[i] == VK_ATTACHMENT_STORE_OP_STORE)
        {
            const ImageInfo* image_info = render_targets_[RT_index].color_att_imgs[i];

            std::vector<uint8_t>  data;
            std::vector<uint64_t> subresource_offsets;
            std::vector<uint64_t> subresource_sizes;

            resource_util.ReadFromImageResourceStaging(image_info->handle,
                                                       image_info->format,
                                                       image_info->type,
                                                       VkExtent3D{ render_targets_[RT_index].render_area.extent.width,
                                                                   render_targets_[RT_index].render_area.extent.height,
                                                                   1 },
                                                       image_info->level_count,
                                                       image_info->layer_count,
                                                       image_info->tiling,
                                                       image_info->sample_count,
                                                       image_info->current_layout,
                                                       0,
                                                       VK_IMAGE_ASPECT_COLOR_BIT,
                                                       data,
                                                       subresource_offsets,
                                                       subresource_sizes);

            util::imagewriter::DataFormats output_image_format = VkFormatToImageWriterDataFormat(image_info->format);

            if (output_image_format != util::imagewriter::DataFormats::kFormat_UNSPECIFIED)
            {
                std::stringstream filename;
                filename << "vkCmdDraw_" << dc_index << "_att_" << i << "_aspect_"
                         << util::ToString<VkImageAspectFlagBits>(VK_IMAGE_ASPECT_COLOR_BIT) << "_ml_" << 0 << "_al_"
                         << 0 << ".bmp";

                const uint32_t texel_size =
                    vkuFormatElementSizeWithAspect(image_info->format, VK_IMAGE_ASPECT_COLOR_BIT);
                const uint32_t stride = texel_size * image_info->extent.width;

                util::imagewriter::WriteBmpImage(filename.str(),
                                                 image_info->extent.width,
                                                 image_info->extent.height,
                                                 subresource_sizes[0],
                                                 data.data(),
                                                 stride,
                                                 output_image_format);
            }
            else
            {
                std::stringstream filename;
                filename << "vkCmdDraw_" << dc_index << "_att_" << i << "_aspect_"
                         << util::ToString<VkImageAspectFlagBits>(VK_IMAGE_ASPECT_COLOR_BIT) << "_ml_" << 0 << "_al_"
                         << 0 << ".bin";

                util::bufferwriter::WriteBuffer(filename.str(), data.data(), data.size());
            }
        }
    }

    if (render_targets_[RT_index].depth_att_img != nullptr)
    {
        if (render_targets_[RT_index].depth_att_storeOp != VK_ATTACHMENT_STORE_OP_STORE)
        {
            GFXRECON_LOG_WARNING("Dumping depth attachment with a storeOp different than VK_ATTACHMENT_STORE_OP_STORE");
        }

        const ImageInfo* image_info = render_targets_[RT_index].depth_att_img;

        std::vector<uint8_t>  data;
        std::vector<uint64_t> subresource_offsets;
        std::vector<uint64_t> subresource_sizes;

        resource_util.ReadFromImageResourceStaging(image_info->handle,
                                                   image_info->format,
                                                   image_info->type,
                                                   VkExtent3D{ render_targets_[RT_index].render_area.extent.width,
                                                               render_targets_[RT_index].render_area.extent.height,
                                                               1 },
                                                   image_info->level_count,
                                                   image_info->layer_count,
                                                   image_info->tiling,
                                                   image_info->sample_count,
                                                   image_info->current_layout,
                                                   0,
                                                   VK_IMAGE_ASPECT_DEPTH_BIT,
                                                   data,
                                                   subresource_offsets,
                                                   subresource_sizes);

        std::stringstream filename;
        filename << "vkCmdDraw_" << dc_index << "_aspect_"
                 << util::ToString<VkImageAspectFlagBits>(VK_IMAGE_ASPECT_DEPTH_BIT) << "_ml_" << 0 << "_al_" << 0
                 << ".bmp";

        const uint32_t texel_size = vkuFormatElementSizeWithAspect(image_info->format, VK_IMAGE_ASPECT_DEPTH_BIT);
        const uint32_t stride     = texel_size * image_info->extent.width;

        util::imagewriter::WriteBmpImage(filename.str(),
                                         image_info->extent.width,
                                         image_info->extent.height,
                                         subresource_sizes[0],
                                         data.data(),
                                         stride,
                                         VkFormatToImageWriterDataFormat(image_info->format));
    }
}

VkResult VulkanReplayResourceDump::ModifyAndSubmit(std::vector<VkSubmitInfo>  modified_submit_infos,
                                                   const encode::DeviceTable& device_table,
                                                   VkQueue                    queue,
                                                   VkFence                    fence,
                                                   uint64_t                   index)
{
    bool pre_submit = false;

    // First do a submission with all command buffer except the ones we are interested in
    std::vector<VkSubmitInfo>                 submit_infos_copy = modified_submit_infos;
    std::vector<std::vector<VkCommandBuffer>> modified_command_buffer_handles(submit_infos_copy.size());
    for (size_t s = 0; s < submit_infos_copy.size(); s++)
    {
        size_t     command_buffer_count   = submit_infos_copy[s].commandBufferCount;
        const auto command_buffer_handles = submit_infos_copy[s].pCommandBuffers;

        for (uint32_t o = 0; o < command_buffer_count; ++o)
        {
            auto bcb_entry = cmd_buf_begin_map_.find(command_buffer_handles[o]);
            if (bcb_entry != cmd_buf_begin_map_.end())
            {
                continue;
            }
            else
            {
                pre_submit = true;
                modified_command_buffer_handles[s].push_back(command_buffer_handles[o]);
            }
        }

        if (modified_command_buffer_handles[s].size())
        {
            submit_infos_copy[s].commandBufferCount = modified_command_buffer_handles[s].size();
            submit_infos_copy[s].pCommandBuffers    = modified_command_buffer_handles[s].data();
        }
        else
        {
            submit_infos_copy.erase(submit_infos_copy.begin() + s);
        }
    }

    if (pre_submit)
    {
        assert(submit_infos_copy.size());

        VkResult res =
            device_table.QueueSubmit(queue, submit_infos_copy.size(), submit_infos_copy.data(), VK_NULL_HANDLE);

        assert(res == VK_SUCCESS);
        if (res != VK_SUCCESS)
        {
            GFXRECON_LOG_ERROR("QueueSubmit failed with %s", util::ToString<VkResult>(res));
            return res;
        }

        // Wait
        res = device_table.QueueWaitIdle(queue);
        assert(res == VK_SUCCESS);
        if (res != VK_SUCCESS)
        {
            GFXRECON_LOG_ERROR("QueueWaitIdle failed with %s", util::ToString<VkResult>(res));
            return res;
        }
    }

    bool submitted = false;
    for (size_t s = 0; s < modified_submit_infos.size(); s++)
    {
        size_t     command_buffer_count   = modified_submit_infos[s].commandBufferCount;
        const auto command_buffer_handles = modified_submit_infos[s].pCommandBuffers;

        // Don't wait and don't signal any semaphores
        if (command_buffer_count)
        {
            modified_submit_infos[s].waitSemaphoreCount   = 0;
            modified_submit_infos[s].pWaitSemaphores      = nullptr;
            modified_submit_infos[s].pWaitDstStageMask    = nullptr;
            modified_submit_infos[s].signalSemaphoreCount = 0;
            modified_submit_infos[s].pSignalSemaphores    = nullptr;
        }

        for (uint32_t o = 0; o < command_buffer_count; ++o)
        {
            auto bcb_entry = cmd_buf_begin_map_.find(command_buffer_handles[o]);
            if (bcb_entry != cmd_buf_begin_map_.end())
            {
                auto stack_entry = cmd_buf_stacks_.find(bcb_entry->second);
                assert(stack_entry != cmd_buf_stacks_.end());
                CommandBufferStack& stack = stack_entry->second;

                if (stack.must_backup_resources)
                {
                    stack.BackUpMutableResources(queue);
                }

                for (size_t cb = 0; cb < stack.command_buffers.size(); ++cb)
                {
                    // VkCommandBuffer* pCommandBuffers =
                    //     const_cast<VkCommandBuffer*>(modified_submit_infos[s].pCommandBuffers);
                    // pCommandBuffers[o] = clone_buffer;
                    VkSubmitInfo new_submit_info         = { VK_STRUCTURE_TYPE_SUBMIT_INFO, nullptr };
                    new_submit_info.waitSemaphoreCount   = 0;
                    new_submit_info.pWaitSemaphores      = nullptr;
                    new_submit_info.pWaitDstStageMask    = nullptr;
                    new_submit_info.commandBufferCount   = 1;
                    new_submit_info.pCommandBuffers      = &stack.command_buffers[cb];
                    new_submit_info.signalSemaphoreCount = 0;
                    new_submit_info.pSignalSemaphores    = nullptr;

                    if (stack.must_backup_resources)
                    {
                        stack.RevertMutableResources(queue);
                    }

                    VkResult res = stack.device_table->QueueSubmit(queue, 1, &new_submit_info, VK_NULL_HANDLE);
                    assert(res == VK_SUCCESS);
                    if (res != VK_SUCCESS)
                    {
                        GFXRECON_LOG_ERROR("QueueSubmit failed with %s", util::ToString<VkResult>(res));
                        return res;
                    }
                    submitted = true;

                    // Wait
                    res = stack.device_table->QueueWaitIdle(queue);
                    assert(res == VK_SUCCESS);
                    if (res != VK_SUCCESS)
                    {
                        GFXRECON_LOG_ERROR("QueueWaitIdle failed with %s", util::ToString<VkResult>(res));
                        return res;
                    }

                    // Dump resources
                    DumpAttachments(stack, stack.dc_indices[cb]);

                    // Revert render attachments layouts
                    res = RevertRenderTargetImageLayouts(stack, queue, stack.dc_indices[cb]);
                    assert(res == VK_SUCCESS);
                    if (res != VK_SUCCESS)
                    {
                        return res;
                    }
                }
            }
        }
    }

    VkResult res = VK_SUCCESS;

    // Looks like we didn't submit anything. Do the submission as it would have been done
    // without further modifications
    if (!submitted)
    {
        res = device_table.QueueSubmit(queue, modified_submit_infos.size(), modified_submit_infos.data(), fence);
        if (res != VK_SUCCESS)
        {
            GFXRECON_LOG_ERROR("QueueSubmit failed with %s", util::ToString<VkResult>(res));
        }
    }
    else
    {
        assert(index == QueueSubmit_indices_[0]);
        QueueSubmit_indices_.erase(QueueSubmit_indices_.begin());

        // Once all submissions are complete terminate process
        if (QueueSubmit_indices_.size() == 0)
        {
            exit(0);
        }
    }

    return res;
}

void VulkanReplayResourceDump::SetRenderTargets(VkCommandBuffer                         original_command_buffer,
                                                const std::vector<const ImageInfo*>&    color_att_imgs,
                                                const std::vector<VkAttachmentStoreOp>& color_att_storeOps,
                                                const std::vector<VkImageLayout>&       final_layouts,
                                                const ImageInfo*                        depth_att_img,
                                                VkAttachmentStoreOp                     depth_att_storeOp,
                                                VkImageLayout                           depth_att_final_layout)
{
    render_targets_.emplace_back(RenderTargets());

    auto new_rts = render_targets_.end() - 1;

    new_rts->color_att_imgs          = color_att_imgs;
    new_rts->color_att_storeOps      = color_att_storeOps;
    new_rts->color_att_final_layouts = final_layouts;
    new_rts->depth_att_img           = depth_att_img;
    new_rts->depth_att_storeOp       = depth_att_storeOp;
    new_rts->depth_att_final_layout  = depth_att_final_layout;

    auto begin_entry = cmd_buf_begin_map_.find(original_command_buffer);
    assert(begin_entry != cmd_buf_begin_map_.end());

    auto stack_entry = cmd_buf_stacks_.find(begin_entry->second);
    assert(stack_entry != cmd_buf_stacks_.end());

    CommandBufferStack& stack = stack_entry->second;
    stack.RT_indices.push_back(stack.dc_indices[stack.current_index]);
}

void VulkanReplayResourceDump::SetRenderArea(const VkRect2D& render_area)
{
    assert(render_targets_.size());
    auto last_rts         = render_targets_.end() - 1;
    last_rts->render_area = render_area;
}

void VulkanReplayResourceDump::UpdateDescriptors(VkCommandBuffer         original_command_buffer,
                                                 VkPipelineBindPoint     pipeline_bind_point,
                                                 uint32_t                first_set,
                                                 const format::HandleId* descriptor_sets_ids,
                                                 uint32_t                descriptor_sets_count)
{
    assert(descriptor_sets_ids);

    auto begin_entry = cmd_buf_begin_map_.find(original_command_buffer);
    assert(begin_entry != cmd_buf_begin_map_.end());

    auto stack_entry = cmd_buf_stacks_.find(begin_entry->second);
    assert(stack_entry != cmd_buf_stacks_.end());

    CommandBufferStack& stack = stack_entry->second;

    DescriptorSetBindPoints bind_point;
    switch (pipeline_bind_point)
    {
        case VK_PIPELINE_BIND_POINT_GRAPHICS:
            bind_point = kBindPoint_graphics;
            break;

        case VK_PIPELINE_BIND_POINT_COMPUTE:
            bind_point = kBindPoint_compute;
            break;

        case VK_PIPELINE_BIND_POINT_RAY_TRACING_KHR:
            bind_point = kBindPoint_ray_tracing;
            break;

        default:
            GFXRECON_LOG_ERROR("Unrecognized pipeline bind point (%d)", pipeline_bind_point);
            assert(0);
            return;
    }

    for (uint32_t i = 0; i < descriptor_sets_count; ++i)
    {
        const DescriptorSetInfo* desc_set_info = object_info_table_.GetDescriptorSetInfo(descriptor_sets_ids[i]);
        assert(desc_set_info);

        for (const auto& binding : desc_set_info->descriptors)
        {
            switch (binding.second.desc_type)
            {
                case VK_DESCRIPTOR_TYPE_STORAGE_IMAGE:
                {
                    const ImageViewInfo* img_view_info =
                        object_info_table_.GetImageViewInfo(binding.second.image_info.image_view_id);
                    assert(img_view_info);

                    const ImageInfo* img_info = object_info_table_.GetImageInfo(img_view_info->image_id);
                    assert(img_info);

                    stack.bound_descriptor_sets[bind_point][first_set + i].image_infos[binding.first] = img_info;
                    if (stack.must_backup_resources)
                    {
                        stack.CloneImage(img_info);
                    }
                }
                break;

                case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER:
                case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC:
                {
                    const BufferInfo* buffer_info =
                        object_info_table_.GetBufferInfo(binding.second.buffer_info.buffer_id);
                    assert(buffer_info);

                    stack.bound_descriptor_sets[bind_point][first_set + i].buffer_infos[binding.first] = buffer_info;
                    if (stack.must_backup_resources)
                    {
                        stack.CloneBuffer(buffer_info);
                    }
                }
                break;

                case VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER:
                {
                    const BufferViewInfo* buffer_view_info =
                        object_info_table_.GetBufferViewInfo(binding.second.texel_buffer_view);
                    assert(buffer_view_info);

                    const BufferInfo* buffer_info = object_info_table_.GetBufferInfo(buffer_view_info->buffer_id);
                    assert(buffer_info);

                    stack.bound_descriptor_sets[bind_point][first_set + i].buffer_infos[binding.first] = buffer_info;
                    if (stack.must_backup_resources)
                    {
                        stack.CloneBuffer(buffer_info);
                    }
                }
                break;

                case VK_DESCRIPTOR_TYPE_SAMPLER:
                case VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER:
                case VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE:
                case VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER:
                case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER:
                case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC:
                case VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT:
                case VK_DESCRIPTOR_TYPE_INLINE_UNIFORM_BLOCK:
                case VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR:
                    // These are read only resources
                    return;

                default:
                    GFXRECON_LOG_WARNING_ONCE("Descriptor type not handled")
            }
        }
    }
}

void VulkanReplayResourceDump::ResetDescriptors(VkCommandBuffer original_command_buffer)
{
    auto begin_entry = cmd_buf_begin_map_.find(original_command_buffer);
    assert(begin_entry != cmd_buf_begin_map_.end());

    auto stack_entry = cmd_buf_stacks_.find(begin_entry->second);
    assert(stack_entry != cmd_buf_stacks_.end());

    CommandBufferStack& stack = stack_entry->second;

    for (uint32_t i = 0; i < static_cast<uint32_t>(kBindPoint_count); ++i)
    {
        stack.bound_descriptor_sets[i].clear();
    }
}

void VulkanReplayResourceDump::DumpResources(const CommandBufferStack& stack, uint64_t dc_index)
{
    // const DeviceInfo* device_info = object_info_table_.GetDeviceInfo(stack.original_command_buffer_info->parent_id);
    // assert(device_info);

    // const PhysicalDeviceInfo* phys_dev_info = object_info_table_.GetPhysicalDeviceInfo(device_info->parent_id);
    // assert(phys_dev_info);

    // graphics::VulkanResourcesUtil resource_util(
    //     device_info->handle, *stack.device_table, *phys_dev_info->replay_device_info->memory_properties);

    // DescriptorSetBindPoints bind_point;
    // if (CmdDraw_Index[current_draw_call])
    // {
    //     bind_point = BIND_POINT_GRAPHICS;
    // }
    // else if (CmdDispatch_Index)
    // {
    //     bind_point = BIND_POINT_COMPUTE;
    // }
    // else
    // {
    //     assert(CmdTraceRaysKHR_Index);

    //     bind_point = BIND_POINT_RAY_TRACING;
    // }

    // for (auto desc_set : bound_descriptor_sets_[bind_point])
    // {
    //     for (const auto storage_image : desc_set.second.image_infos)
    //     {
    //         const ImageInfo* image_info = storage_image.second;

    //         std::vector<uint8_t>  data;
    //         std::vector<uint64_t> subresource_offsets;
    //         std::vector<uint64_t> subresource_sizes;

    //         resource_util.ReadFromImageResourceStaging(image_info->handle,
    //                                                    image_info->format,
    //                                                    image_info->type,
    //                                                    image_info->extent,
    //                                                    image_info->level_count,
    //                                                    image_info->layer_count,
    //                                                    image_info->tiling,
    //                                                    image_info->sample_count,
    //                                                    image_info->current_layout,
    //                                                    0,
    //                                                    VK_IMAGE_ASPECT_COLOR_BIT,
    //                                                    data,
    //                                                    subresource_offsets,
    //                                                    subresource_sizes);

    //         std::stringstream filename;
    //         filename << "storage_image_" << image_info->capture_id << "_index_" << index << ".bmp";

    //         const uint32_t texel_size = vkuFormatElementSize(image_info->format);
    //         const uint32_t stride     = texel_size * image_info->extent.width;

    //         util::imagewriter::WriteBmpImage(filename.str(),
    //                                          image_info->extent.width,
    //                                          image_info->extent.height,
    //                                          subresource_sizes[0],
    //                                          data.data(),
    //                                          stride,
    //                                          VkFormatToImageWriterDataFormat(image_info->format));
    //     }

    //     desc_set.second.image_infos.clear();

    //     for (const auto& storabe_buffer : desc_set.second.buffer_infos)
    //     {
    //         const BufferInfo*    buffer_info = storabe_buffer.second;
    //         std::vector<uint8_t> data;

    //         resource_util.ReadFromBufferResource(
    //             buffer_info->handle, buffer_info->size, buffer_info->queue_family_index, data);

    //         std::stringstream filename;
    //         filename << "storage_buffer_" << buffer_info->capture_id << "_index_" << index << ".bin";

    //         util::bufferwriter::WriteBuffer(filename.str(), data.data(), buffer_info->size);
    //     }

    //     desc_set.second.buffer_infos.clear();
    // }
}

bool VulkanReplayResourceDump::DumpingBeginCommandBufferIndex(uint64_t index) const
{
    const auto entry = cmd_buf_stacks_.find(index);

    return entry != cmd_buf_stacks_.end();
}

void VulkanReplayResourceDump::GetActiveCommandBuffers(VkCommandBuffer user_cmd_buffer,
                                                       cmd_buf_it&     first,
                                                       cmd_buf_it&     last) const
{
    auto begin_cmd_entry = cmd_buf_begin_map_.find(user_cmd_buffer);
    assert(begin_cmd_entry != cmd_buf_begin_map_.end());

    auto stack_entry = cmd_buf_stacks_.find(begin_cmd_entry->second);
    assert(stack_entry != cmd_buf_stacks_.end());

    const CommandBufferStack& stack = stack_entry->second;
    assert(stack_entry->second.original_command_buffer_handle == user_cmd_buffer);

    assert(stack.current_index <= stack.command_buffers.size());

    first = stack.command_buffers.begin() + stack.current_index;
    last  = stack.command_buffers.end();
}

bool VulkanReplayResourceDump::UpdateRecordingStatus()
{
    assert(recording_);

    for (const auto& entry : cmd_buf_stacks_)
    {
        const CommandBufferStack& stack = entry.second;
        if (stack.current_index < stack.command_buffers.size())
        {
            return true;
        }
    }

    return (recording_ = false);
}

bool VulkanReplayResourceDump::DumpingSubmissionIndex(uint64_t index) const
{
    for (size_t i = 0; i < QueueSubmit_indices_.size(); ++i)
    {
        // Indices should be sorted
        if (!IsInsideRange(QueueSubmit_indices_, index))
        {
            return false;
        }

        if (index == QueueSubmit_indices_[i])
        {
            return true;
        }
        else if (index > QueueSubmit_indices_[i])
        {
            return false;
        }
    }

    return false;
}

bool VulkanReplayResourceDump::DumpingDrawCallIndex(VkCommandBuffer original_command_buffer, uint64_t index) const
{
    assert(recording_);
    assert(original_command_buffer != VK_NULL_HANDLE);

    const auto bcb_entry = cmd_buf_begin_map_.find(original_command_buffer);
    if (bcb_entry == cmd_buf_begin_map_.end())
    {
        return false;
    }

    const auto stack_entry = cmd_buf_stacks_.find(bcb_entry->second);
    if (stack_entry == cmd_buf_stacks_.end())
    {
        return false;
    }

    const CommandBufferStack& stack = stack_entry->second;
    assert(stack.current_index < stack.dc_indices.size());

    // Indices should be sorted
    if (!IsInsideRange(stack.dc_indices, index))
    {
        return false;
    }

    for (size_t i = stack.current_index; i < stack.dc_indices.size(); ++i)
    {

        if (index == stack.dc_indices[i])
        {
            return true;
        }
        else if (index > stack.dc_indices[i])
        {
            // Indices should be sorted
            return false;
        }
    }

    return false;
}

bool VulkanReplayResourceDump::DumpingDispatchIndex(VkCommandBuffer original_command_buffer, uint64_t index) const
{
    assert(recording_);
    assert(original_command_buffer != VK_NULL_HANDLE);

    const auto bcb_entry = cmd_buf_begin_map_.find(original_command_buffer);
    if (bcb_entry == cmd_buf_begin_map_.end())
    {
        return false;
    }

    const auto stack_entry = cmd_buf_stacks_.find(bcb_entry->second);
    if (stack_entry == cmd_buf_stacks_.end())
    {
        return false;
    }

    const CommandBufferStack& stack = stack_entry->second;
    assert(stack.current_index < stack.dispatch_indices.size());

    // Indices should be sorted
    if (!IsInsideRange(stack.dispatch_indices, index))
    {
        return false;
    }

    for (size_t i = stack.current_index; i < stack.dispatch_indices.size(); ++i)
    {
        if (index == stack.dispatch_indices[i])
        {
            return true;
        }
        else if (index > stack.dispatch_indices[i])
        {
            // Indices should be sorted
            return false;
        }
    }

    return false;
}

bool VulkanReplayResourceDump::DumpingTraceRaysIndex(VkCommandBuffer original_command_buffer, uint64_t index) const
{
    assert(recording_);
    assert(original_command_buffer != VK_NULL_HANDLE);

    const auto bcb_entry = cmd_buf_begin_map_.find(original_command_buffer);
    if (bcb_entry == cmd_buf_begin_map_.end())
    {
        return false;
    }

    const auto stack_entry = cmd_buf_stacks_.find(bcb_entry->second);
    if (stack_entry == cmd_buf_stacks_.end())
    {
        return false;
    }

    const CommandBufferStack& stack = stack_entry->second;
    assert(stack.current_index < stack.traceRays_indices.size());

    // Indices should be sorted
    if (!IsInsideRange(stack.traceRays_indices, index))
    {
        return false;
    }

    for (size_t i = stack.current_index; i < stack.traceRays_indices.size(); ++i)
    {
        if (index == stack.traceRays_indices[i])
        {
            return true;
        }
        else if (index > stack.traceRays_indices[i])
        {
            // Indices should be sorted
            return false;
        }
    }

    return false;
}

VulkanReplayResourceDump::CommandBufferStack::CommandBufferStack(const std::vector<uint64_t>& dc_indices,
                                                                 const std::vector<uint64_t>& dispatch_indices,
                                                                 const std::vector<uint64_t>& traceRays_indices,
                                                                 const VulkanObjectInfoTable& object_info_table) :
    original_command_buffer_handle(VK_NULL_HANDLE),
    original_command_buffer_info(nullptr), command_buffers(dc_indices.size(), VK_NULL_HANDLE), current_index(0),
    dc_indices(std::move(dc_indices)), dispatch_indices(std::move(dispatch_indices)),
    traceRays_indices(std::move(traceRays_indices)), aux_command_buffer(VK_NULL_HANDLE), aux_fence(VK_NULL_HANDLE),
    device_table(nullptr), object_info_table(object_info_table), replay_device_phys_mem_props(nullptr)
{
    must_backup_resources = dc_indices.size() > 1;
}

VulkanReplayResourceDump::CommandBufferStack::~CommandBufferStack()
{
    assert(original_command_buffer_info);

    const DeviceInfo* device_info = object_info_table.GetDeviceInfo(original_command_buffer_info->parent_id);
    VkDevice          device      = device_info->handle;

    assert(device_table);

    if (aux_command_buffer != VK_NULL_HANDLE)
    {
        const CommandPoolInfo* pool_info = object_info_table.GetCommandPoolInfo(original_command_buffer_info->pool_id);
        assert(pool_info);

        device_table->FreeCommandBuffers(device, pool_info->handle, 1, &aux_command_buffer);
        aux_command_buffer = VK_NULL_HANDLE;
    }

    DestroyMutableResourceBackups();
}

VkResult VulkanReplayResourceDump::CommandBufferStack::CloneImage(const ImageInfo* image_info)
{
    assert(must_backup_resources);

    VkImageCreateInfo ci;
    ci.sType                 = VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO;
    ci.pNext                 = nullptr;
    ci.flags                 = VkImageCreateFlags(0);
    ci.imageType             = image_info->type;
    ci.format                = image_info->format;
    ci.extent                = image_info->extent;
    ci.mipLevels             = image_info->level_count;
    ci.arrayLayers           = image_info->layer_count;
    ci.samples               = image_info->sample_count;
    ci.tiling                = image_info->tiling;
    ci.usage                 = image_info->usage | VK_IMAGE_USAGE_TRANSFER_DST_BIT | VK_IMAGE_USAGE_TRANSFER_SRC_BIT;
    ci.sharingMode           = VK_SHARING_MODE_EXCLUSIVE;
    ci.queueFamilyIndexCount = 0;
    ci.pQueueFamilyIndices   = nullptr;
    ci.initialLayout         = VK_IMAGE_LAYOUT_UNDEFINED;

    const DeviceInfo* device_info = object_info_table.GetDeviceInfo(original_command_buffer_info->parent_id);
    VkDevice          device      = device_info->handle;

    assert(device_table);
    VkImage  new_image;
    VkResult res = device_table->CreateImage(device, &ci, nullptr, &new_image);
    if (res != VK_SUCCESS)
    {
        GFXRECON_LOG_ERROR("CreateImage failed with %s", util::ToString<VkResult>(res));
        return res;
    }

    mutable_resource_backups.images.push_back(new_image);

    VkMemoryRequirements mem_reqs       = {};
    VkMemoryAllocateInfo mem_alloc_info = { VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO, nullptr };

    device_table->GetImageMemoryRequirements(device, new_image, &mem_reqs);
    mem_alloc_info.allocationSize = mem_reqs.size;
    uint32_t index =
        GetMemoryTypeIndex(*replay_device_phys_mem_props, mem_reqs.memoryTypeBits, VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT);
    if (index == std::numeric_limits<uint32_t>::max())
    {
        GFXRECON_LOG_ERROR("%s failed to find an appropriate memory type", __func__)
        return VK_ERROR_INITIALIZATION_FAILED;
    }

    mem_alloc_info.memoryTypeIndex = index;
    VkDeviceMemory image_memory;
    res = device_table->AllocateMemory(device, &mem_alloc_info, nullptr, &image_memory);
    if (res != VK_SUCCESS)
    {
        GFXRECON_LOG_ERROR("AllocateMemory failed with %s", util::ToString<VkResult>(res));
        return res;
    }
    mutable_resource_backups.image_memories.push_back(image_memory);

    res = device_table->BindImageMemory(device, new_image, image_memory, 0);
    if (res != VK_SUCCESS)
    {
        GFXRECON_LOG_ERROR("BindImageMemory failed with %s", util::ToString<VkResult>(res));
        return res;
    }

    mutable_resource_backups.original_images.push_back(image_info);

    return VK_SUCCESS;
}

VkResult VulkanReplayResourceDump::CommandBufferStack::CloneBuffer(const BufferInfo* buffer_info)
{
    assert(must_backup_resources);

    VkBufferCreateInfo ci;
    ci.sType                 = VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO;
    ci.pNext                 = nullptr;
    ci.flags                 = VkBufferCreateFlags(0);
    ci.size                  = buffer_info->size;
    ci.usage                 = buffer_info->usage | VK_BUFFER_USAGE_TRANSFER_DST_BIT | VK_BUFFER_USAGE_TRANSFER_SRC_BIT;
    ci.sharingMode           = VK_SHARING_MODE_EXCLUSIVE;
    ci.queueFamilyIndexCount = 0;
    ci.pQueueFamilyIndices   = nullptr;

    const DeviceInfo* device_info = object_info_table.GetDeviceInfo(original_command_buffer_info->parent_id);
    VkDevice          device      = device_info->handle;

    assert(device_table);

    VkBuffer new_buffer;
    VkResult res = device_table->CreateBuffer(device, &ci, nullptr, &new_buffer);
    if (res != VK_SUCCESS)
    {
        GFXRECON_LOG_ERROR("CreateBuffer failed with %s", util::ToString<VkResult>(res));
        return res;
    }

    mutable_resource_backups.buffers.push_back(new_buffer);

    VkMemoryRequirements mem_reqs       = {};
    VkMemoryAllocateInfo mem_alloc_info = { VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO, nullptr };

    device_table->GetBufferMemoryRequirements(device, new_buffer, &mem_reqs);
    mem_alloc_info.allocationSize = mem_reqs.size;
    uint32_t index =
        GetMemoryTypeIndex(*replay_device_phys_mem_props, mem_reqs.memoryTypeBits, VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT);
    if (index == std::numeric_limits<uint32_t>::max())
    {
        GFXRECON_LOG_ERROR("%s failed to find an appropriate memory type", __func__)
        return VK_ERROR_INITIALIZATION_FAILED;
    }

    VkDeviceMemory buffer_memory;
    mem_alloc_info.memoryTypeIndex = index;
    res                            = device_table->AllocateMemory(device, &mem_alloc_info, nullptr, &buffer_memory);
    if (res != VK_SUCCESS)
    {
        GFXRECON_LOG_ERROR("AllocateMemory failed with %s", util::ToString<VkResult>(res));
        return res;
    }
    mutable_resource_backups.buffer_memories.push_back(buffer_memory);

    res = device_table->BindBufferMemory(device, new_buffer, buffer_memory, 0);
    if (res != VK_SUCCESS)
    {
        GFXRECON_LOG_ERROR("BindBufferMemory failed with %s", util::ToString<VkResult>(res));
        return res;
    }

    mutable_resource_backups.original_buffers.push_back(buffer_info);

    return VK_SUCCESS;
}

void VulkanReplayResourceDump::CommandBufferStack::DestroyMutableResourceBackups()
{
    const DeviceInfo* device_info = object_info_table.GetDeviceInfo(original_command_buffer_info->parent_id);
    VkDevice          device      = device_info->handle;

    for (size_t i = 0; i < mutable_resource_backups.images.size(); ++i)
    {
        device_table->DestroyImage(device, mutable_resource_backups.images[i], nullptr);
    }

    for (size_t i = 0; i < mutable_resource_backups.image_memories.size(); ++i)
    {
        device_table->FreeMemory(device, mutable_resource_backups.image_memories[i], nullptr);
    }

    mutable_resource_backups.images.clear();
    mutable_resource_backups.image_memories.clear();
    mutable_resource_backups.original_images.clear();

    for (size_t i = 0; i < mutable_resource_backups.buffers.size(); ++i)
    {
        device_table->DestroyBuffer(device, mutable_resource_backups.buffers[i], nullptr);
    }

    for (size_t i = 0; i < mutable_resource_backups.buffer_memories.size(); ++i)
    {
        device_table->FreeMemory(device, mutable_resource_backups.buffer_memories[i], nullptr);
    }

    mutable_resource_backups.buffers.clear();
    mutable_resource_backups.buffer_memories.clear();
    mutable_resource_backups.original_buffers.clear();
}

VkResult VulkanReplayResourceDump::CommandBufferStack::RevertMutableResources(VkQueue queue)
{
    if (!mutable_resource_backups.images.size() && !mutable_resource_backups.buffers.size())
    {
        return VK_SUCCESS;
    }

    assert(aux_command_buffer);

    const DeviceInfo* device_info = object_info_table.GetDeviceInfo(original_command_buffer_info->parent_id);
    VkDevice          device      = device_info->handle;

    device_table->ResetCommandBuffer(aux_command_buffer, 0);

    const VkCommandBufferBeginInfo bi = { VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO, nullptr, 0, nullptr };
    device_table->BeginCommandBuffer(aux_command_buffer, &bi);

    VkImageMemoryBarrier img_barrier            = { VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER, nullptr };
    img_barrier.subresourceRange.baseMipLevel   = 0;
    img_barrier.subresourceRange.levelCount     = VK_REMAINING_MIP_LEVELS;
    img_barrier.subresourceRange.baseArrayLayer = 0;
    img_barrier.subresourceRange.layerCount     = VK_REMAINING_ARRAY_LAYERS;

    assert(mutable_resource_backups.images.size() == mutable_resource_backups.original_images.size());
    for (size_t i = 0; i < mutable_resource_backups.images.size(); ++i)
    {
        const VkImageAspectFlags aspect_mask =
            graphics::GetFormatAspectMask(mutable_resource_backups.original_images[i]->format);
        img_barrier.subresourceRange.aspectMask = aspect_mask;

        // Flush gpu caches and transition original image to appropriate layout
        img_barrier.srcAccessMask       = VK_ACCESS_MEMORY_READ_BIT | VK_ACCESS_MEMORY_WRITE_BIT;
        img_barrier.dstAccessMask       = VK_ACCESS_TRANSFER_WRITE_BIT;
        img_barrier.oldLayout           = VK_IMAGE_LAYOUT_GENERAL;
        img_barrier.newLayout           = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
        img_barrier.srcQueueFamilyIndex = 0;
        img_barrier.dstQueueFamilyIndex = 0;
        img_barrier.image               = mutable_resource_backups.original_images[i]->handle;

        device_table->CmdPipelineBarrier(aux_command_buffer,
                                         VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
                                         VK_PIPELINE_STAGE_TRANSFER_BIT,
                                         0,
                                         0,
                                         nullptr,
                                         0,
                                         nullptr,
                                         1,
                                         &img_barrier);

        // Transition back up image to appropriate layout
        img_barrier.srcAccessMask = VK_ACCESS_TRANSFER_READ_BIT;
        img_barrier.dstAccessMask = VK_ACCESS_TRANSFER_READ_BIT;
        img_barrier.oldLayout     = VK_IMAGE_LAYOUT_UNDEFINED;
        img_barrier.newLayout     = VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
        img_barrier.image         = mutable_resource_backups.images[i];

        device_table->CmdPipelineBarrier(aux_command_buffer,
                                         VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
                                         VK_PIPELINE_STAGE_TRANSFER_BIT,
                                         0,
                                         0,
                                         nullptr,
                                         0,
                                         nullptr,
                                         1,
                                         &img_barrier);

        // Copy
        VkImageCopy copy_region                   = {};
        copy_region.srcSubresource.aspectMask     = aspect_mask;
        copy_region.srcSubresource.baseArrayLayer = 0;
        copy_region.srcSubresource.layerCount     = mutable_resource_backups.original_images[i]->layer_count;
        copy_region.srcSubresource.mipLevel       = 0;
        copy_region.dstSubresource                = copy_region.srcSubresource;

        std::vector<VkImageCopy> copy_regions(mutable_resource_backups.original_images[i]->level_count);

        for (uint32_t j = 0; j < mutable_resource_backups.original_images[i]->level_count; ++j)
        {
            copy_region.extent.width  = std::max(1u, (mutable_resource_backups.original_images[i]->extent.width >> j));
            copy_region.extent.height = std::max(1u, (mutable_resource_backups.original_images[i]->extent.height >> j));
            copy_region.extent.depth  = std::max(1u, (mutable_resource_backups.original_images[i]->extent.depth >> j));

            copy_regions[j] = copy_region;
        }

        device_table->CmdCopyImage(aux_command_buffer,
                                   mutable_resource_backups.images[i],
                                   VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
                                   mutable_resource_backups.original_images[i]->handle,
                                   VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                                   copy_regions.size(),
                                   copy_regions.data());
    }

    VkBufferMemoryBarrier buffer_barrier = { VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER, nullptr };
    VkBufferCopy          copy_region    = { 0, 0 };

    assert(mutable_resource_backups.buffers.size() == mutable_resource_backups.original_buffers.size());
    for (size_t i = 0; i < mutable_resource_backups.buffers.size(); ++i)
    {
        buffer_barrier.srcAccessMask = VK_ACCESS_MEMORY_READ_BIT | VK_ACCESS_MEMORY_WRITE_BIT;
        buffer_barrier.dstAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
        buffer_barrier.buffer        = mutable_resource_backups.original_buffers[i]->handle;

        device_table->CmdPipelineBarrier(aux_command_buffer,
                                         VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
                                         VK_PIPELINE_STAGE_TRANSFER_BIT,
                                         0,
                                         0,
                                         nullptr,
                                         1,
                                         &buffer_barrier,
                                         0,
                                         nullptr);

        copy_region.size = mutable_resource_backups.original_buffers[i]->size;
        device_table->CmdCopyBuffer(aux_command_buffer,
                                    mutable_resource_backups.buffers[i],
                                    mutable_resource_backups.original_buffers[i]->handle,
                                    1,
                                    &copy_region);
    }

    device_table->EndCommandBuffer(aux_command_buffer);

    VkSubmitInfo si         = { VK_STRUCTURE_TYPE_SUBMIT_INFO, nullptr };
    si.waitSemaphoreCount   = 0;
    si.pWaitSemaphores      = nullptr;
    si.pWaitDstStageMask    = nullptr;
    si.signalSemaphoreCount = 0;
    si.pSignalSemaphores    = nullptr;
    si.commandBufferCount   = 1;
    si.pCommandBuffers      = &aux_command_buffer;

    VkResult res = device_table->ResetFences(device, 1, &aux_fence);
    if (res != VK_SUCCESS)
    {
        GFXRECON_LOG_ERROR("ResetFences failed with %s", util::ToString<VkResult>(res));
        return res;
    }

    res = device_table->QueueSubmit(queue, 1, &si, aux_fence);
    if (res != VK_SUCCESS)
    {
        GFXRECON_LOG_ERROR("QueueSubmit failed with %s", util::ToString<VkResult>(res));
        return res;
    }

    res = device_table->WaitForFences(device, 1, &aux_fence, VK_TRUE, std::numeric_limits<uint64_t>::max());
    if (res != VK_SUCCESS)
    {
        GFXRECON_LOG_ERROR("WaitForFences failed with %s", util::ToString<VkResult>(res));
        return res;
    }

    return VK_SUCCESS;
}

VkResult VulkanReplayResourceDump::CommandBufferStack::BackUpMutableResources(VkQueue queue)
{
    if (!mutable_resource_backups.images.size() && !mutable_resource_backups.buffers.size())
    {
        return VK_SUCCESS;
    }

    assert(aux_command_buffer);

    const DeviceInfo* device_info = object_info_table.GetDeviceInfo(original_command_buffer_info->parent_id);
    VkDevice          device      = device_info->handle;

    device_table->ResetCommandBuffer(aux_command_buffer, 0);

    const VkCommandBufferBeginInfo bi = { VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO, nullptr, 0, nullptr };
    device_table->BeginCommandBuffer(aux_command_buffer, &bi);

    VkImageMemoryBarrier img_barrier            = { VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER, nullptr };
    img_barrier.subresourceRange.baseMipLevel   = 0;
    img_barrier.subresourceRange.levelCount     = VK_REMAINING_MIP_LEVELS;
    img_barrier.subresourceRange.baseArrayLayer = 0;
    img_barrier.subresourceRange.layerCount     = VK_REMAINING_ARRAY_LAYERS;

    assert(mutable_resource_backups.images.size() == mutable_resource_backups.original_images.size());
    for (size_t i = 0; i < mutable_resource_backups.images.size(); ++i)
    {
        const VkImageAspectFlags aspect_mask =
            graphics::GetFormatAspectMask(mutable_resource_backups.original_images[i]->format);
        img_barrier.subresourceRange.aspectMask = aspect_mask;

        // Flush gpu caches and transition original image to appropriate layout
        img_barrier.srcAccessMask       = VK_ACCESS_MEMORY_READ_BIT | VK_ACCESS_MEMORY_WRITE_BIT;
        img_barrier.dstAccessMask       = VK_ACCESS_TRANSFER_READ_BIT;
        img_barrier.oldLayout           = VK_IMAGE_LAYOUT_GENERAL;
        img_barrier.newLayout           = VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
        img_barrier.srcQueueFamilyIndex = 0;
        img_barrier.dstQueueFamilyIndex = 0;
        img_barrier.image               = mutable_resource_backups.original_images[i]->handle;

        device_table->CmdPipelineBarrier(aux_command_buffer,
                                         VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
                                         VK_PIPELINE_STAGE_TRANSFER_BIT,
                                         0,
                                         0,
                                         nullptr,
                                         0,
                                         nullptr,
                                         1,
                                         &img_barrier);

        // Transition back up image to appropriate layout
        img_barrier.srcAccessMask = VK_ACCESS_MEMORY_READ_BIT | VK_ACCESS_MEMORY_WRITE_BIT;
        img_barrier.dstAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
        img_barrier.oldLayout     = VK_IMAGE_LAYOUT_UNDEFINED;
        img_barrier.newLayout     = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
        img_barrier.image         = mutable_resource_backups.images[i];

        device_table->CmdPipelineBarrier(aux_command_buffer,
                                         VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
                                         VK_PIPELINE_STAGE_TRANSFER_BIT,
                                         0,
                                         0,
                                         nullptr,
                                         0,
                                         nullptr,
                                         1,
                                         &img_barrier);

        // Copy
        VkImageCopy copy_region                   = {};
        copy_region.srcSubresource.aspectMask     = aspect_mask;
        copy_region.srcSubresource.baseArrayLayer = 0;
        copy_region.srcSubresource.layerCount     = mutable_resource_backups.original_images[i]->layer_count;
        copy_region.srcSubresource.mipLevel       = 0;
        copy_region.dstSubresource                = copy_region.srcSubresource;

        std::vector<VkImageCopy> copy_regions(mutable_resource_backups.original_images[i]->level_count);

        for (uint32_t j = 0; j < mutable_resource_backups.original_images[i]->level_count; ++j)
        {
            copy_region.extent.width  = std::max(1u, (mutable_resource_backups.original_images[i]->extent.width >> j));
            copy_region.extent.height = std::max(1u, (mutable_resource_backups.original_images[i]->extent.height >> j));
            copy_region.extent.depth  = std::max(1u, (mutable_resource_backups.original_images[i]->extent.depth >> j));

            copy_regions[j] = copy_region;
        }

        device_table->CmdCopyImage(aux_command_buffer,
                                   mutable_resource_backups.original_images[i]->handle,
                                   VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
                                   mutable_resource_backups.images[i],
                                   VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                                   copy_regions.size(),
                                   copy_regions.data());
    }

    VkBufferMemoryBarrier buffer_barrier = { VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER, nullptr };
    VkBufferCopy          copy_region    = { 0, 0 };

    assert(mutable_resource_backups.buffers.size() == mutable_resource_backups.original_buffers.size());
    for (size_t i = 0; i < mutable_resource_backups.buffers.size(); ++i)
    {
        buffer_barrier.srcAccessMask = VK_ACCESS_MEMORY_READ_BIT | VK_ACCESS_MEMORY_WRITE_BIT;
        buffer_barrier.dstAccessMask = VK_ACCESS_TRANSFER_READ_BIT;
        buffer_barrier.buffer        = mutable_resource_backups.original_buffers[i]->handle;

        device_table->CmdPipelineBarrier(aux_command_buffer,
                                         VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
                                         VK_PIPELINE_STAGE_TRANSFER_BIT,
                                         0,
                                         0,
                                         nullptr,
                                         1,
                                         &buffer_barrier,
                                         0,
                                         nullptr);

        copy_region.size = mutable_resource_backups.original_buffers[i]->size;
        device_table->CmdCopyBuffer(aux_command_buffer,
                                    mutable_resource_backups.original_buffers[i]->handle,
                                    mutable_resource_backups.buffers[i],
                                    1,
                                    &copy_region);
    }

    device_table->EndCommandBuffer(aux_command_buffer);

    VkSubmitInfo si         = { VK_STRUCTURE_TYPE_SUBMIT_INFO, nullptr };
    si.waitSemaphoreCount   = 0;
    si.pWaitSemaphores      = nullptr;
    si.pWaitDstStageMask    = nullptr;
    si.signalSemaphoreCount = 0;
    si.pSignalSemaphores    = nullptr;
    si.commandBufferCount   = 1;
    si.pCommandBuffers      = &aux_command_buffer;

    VkResult res = device_table->ResetFences(device, 1, &aux_fence);
    if (res != VK_SUCCESS)
    {
        GFXRECON_LOG_ERROR("ResetFences failed with %s", util::ToString<VkResult>(res));
        return res;
    }

    res = device_table->QueueSubmit(queue, 1, &si, aux_fence);
    if (res != VK_SUCCESS)
    {
        GFXRECON_LOG_ERROR("QueueSubmit failed with %s", util::ToString<VkResult>(res));
        return res;
    }

    res = device_table->WaitForFences(device, 1, &aux_fence, VK_TRUE, std::numeric_limits<uint64_t>::max());
    if (res != VK_SUCCESS)
    {
        GFXRECON_LOG_ERROR("WaitForFences failed with %s", util::ToString<VkResult>(res));
        return res;
    }

    return VK_SUCCESS;
}

uint64_t VulkanReplayResourceDump::CommandBufferStack::Get_RT_index(uint64_t dc_index) const
{
    uint64_t rt_index = 0;

    size_t i;
    for (i = 0; i < RT_indices.size() - 1; ++i)
    {
        if (dc_index < RT_indices[i + 1])
        {
            rt_index = i;
            break;
        }
    }

    if (dc_index == RT_indices[i])
    {
        rt_index = i;
    }

    return rt_index;
}

GFXRECON_END_NAMESPACE(gfxrecon)
GFXRECON_END_NAMESPACE(decode)
