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

#ifndef GFXRECON_DECODE_VULKAN_REPLAY_RESOURCE_DUMPING_H
#define GFXRECON_DECODE_VULKAN_REPLAY_RESOURCE_DUMPING_H

#include "decode/api_decoder.h"
#include "decode/vulkan_object_info_table.h"
#include "generated/generated_vulkan_dispatch_table.h"
#include "format/format.h"
#include "util/defines.h"
#include "vulkan/vulkan.h"

#include <string>
#include <vector>
#include <unordered_map>
#include <utility> // std::pair

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)

class VulkanReplayResourceDump
{
  public:
    VulkanReplayResourceDump() = delete;

    VulkanReplayResourceDump(const std::vector<uint64_t>&                           begin_command_buffer_index,
                             const std::vector<std::vector<uint64_t>>&              draw_indices,
                             const std::vector<std::vector<std::vector<uint64_t>>>& rp_indices,
                             const std::vector<std::vector<uint64_t>>&              dispatch_indices,
                             const std::vector<std::vector<uint64_t>>&              traceRays_indices,
                             const std::vector<uint64_t>&                           queueSubmit_indices,
                             bool                                                   dump_rts_before_dc,
                             bool                                                   isolate_draw,
                             const VulkanObjectInfoTable&                           object_info_table);

    VkResult CloneCommandBuffer(uint64_t                   bcb_index,
                                format::HandleId           original_command_buffer_id,
                                const encode::DeviceTable* device_table);

    void FinalizeCommandBuffer(VkCommandBuffer original_command_buffer);

    void Process_vkCmdDraw(const ApiCallInfo& call_info,
                           PFN_vkCmdDraw      func,
                           VkCommandBuffer    commandBuffer,
                           uint32_t           vertexCount,
                           uint32_t           instanceCount,
                           uint32_t           firstVertex,
                           uint32_t           firstInstance);

    void Process_vkCmdDrawIndexed(const ApiCallInfo&   call_info,
                                  PFN_vkCmdDrawIndexed func,
                                  VkCommandBuffer      commandBuffer,
                                  uint32_t             indexCount,
                                  uint32_t             instanceCount,
                                  uint32_t             firstIndex,
                                  int32_t              vertexOffset,
                                  uint32_t             firstInstance);

    void Process_vkCmdDrawIndirect(const ApiCallInfo&    call_info,
                                   PFN_vkCmdDrawIndirect func,
                                   VkCommandBuffer       commandBuffer,
                                   VkBuffer              buffer,
                                   VkDeviceSize          offset,
                                   uint32_t              drawCount,
                                   uint32_t              stride);

    void Process_vkCmdDrawIndexedIndirect(const ApiCallInfo&           call_info,
                                          PFN_vkCmdDrawIndexedIndirect func,
                                          VkCommandBuffer              commandBuffer,
                                          VkBuffer                     buffer,
                                          VkDeviceSize                 offset,
                                          uint32_t                     drawCount,
                                          uint32_t                     stride);

    void Process_vkCmdDrawIndirectCount(const ApiCallInfo&         call_info,
                                        PFN_vkCmdDrawIndirectCount func,
                                        VkCommandBuffer            commandBuffer,
                                        VkBuffer                   buffer,
                                        VkDeviceSize               offset,
                                        VkBuffer                   countBuffer,
                                        VkDeviceSize               countBufferOffset,
                                        uint32_t                   maxDrawCount,
                                        uint32_t                   stride);

    void Process_vkCmdDrawIndexedIndirectCount(const ApiCallInfo&                call_info,
                                               PFN_vkCmdDrawIndexedIndirectCount func,
                                               VkCommandBuffer                   commandBuffer,
                                               VkBuffer                          buffer,
                                               VkDeviceSize                      offset,
                                               VkBuffer                          countBuffer,
                                               VkDeviceSize                      countBufferOffset,
                                               uint32_t                          maxDrawCount,
                                               uint32_t                          stride);

    void Process_vkCmdDrawIndirectCountKHR(const ApiCallInfo& call_info,
                                           VkCommandBuffer    commandBuffer,
                                           VkBuffer           buffer,
                                           VkDeviceSize       offset,
                                           VkBuffer           countBuffer,
                                           VkDeviceSize       countBufferOffset,
                                           uint32_t           maxDrawCount,
                                           uint32_t           stride);

    void Process_vkCmdDrawIndexedIndirectCountKHR(const ApiCallInfo& call_info,
                                                  VkCommandBuffer    commandBuffer,
                                                  VkBuffer           buffer,
                                                  VkDeviceSize       offset,
                                                  VkBuffer           countBuffer,
                                                  VkDeviceSize       countBufferOffset,
                                                  uint32_t           maxDrawCount,
                                                  uint32_t           stride);

    VkResult ModifyAndSubmit(std::vector<VkSubmitInfo>  modified_submit_infos,
                             const encode::DeviceTable& device_table,
                             VkQueue                    queue,
                             VkFence                    fence,
                             uint64_t                   index);

    VkCommandBuffer GetCurrentCommandBuffer(VkCommandBuffer original_command_buffer) const;

    VkResult BeginRenderPass(VkCommandBuffer        original_command_buffer,
                             const RenderPassInfo*  render_pass_info,
                             uint32_t               clear_value_count,
                             const VkClearValue*    p_clear_values,
                             const FramebufferInfo* framebuffer_info,
                             const VkRect2D&        render_area,
                             VkSubpassContents      contents);

    void EndRenderPass(VkCommandBuffer original_command_buffer);

    void NextSubpass(VkCommandBuffer original_command_buffer, VkSubpassContents contents);

    // Call with vkCmdBindDescriptorSets to scan for dumpable resources
    void UpdateDescriptors(VkCommandBuffer         original_command_buffer,
                           VkPipelineBindPoint     pipeline_bind_point,
                           uint32_t                first_set,
                           const format::HandleId* descriptor_sets_ids,
                           uint32_t                descriptor_sets_count);

    void ResetDescriptors(VkCommandBuffer original_command_buffer);

    bool DumpingSubmissionIndex(uint64_t index) const;

    bool DumpingDrawCallIndex(VkCommandBuffer original_command_buffer, uint64_t dc_index) const;

    bool DumpingDispatchIndex(VkCommandBuffer original_command_buffer, uint64_t index) const;

    bool DumpingTraceRaysIndex(VkCommandBuffer original_command_buffer, uint64_t index) const;

    bool DumpingBeginCommandBufferIndex(uint64_t index) const;

    bool IsRecording(VkCommandBuffer original_command_buffer) const;

    bool IsolateDrawCall() const { return isolate_draw_call_; }

    using cmd_buf_it = std::vector<VkCommandBuffer>::const_iterator;
    void GetActiveCommandBuffers(VkCommandBuffer user_cmd_buffer, cmd_buf_it& first, cmd_buf_it& last) const;

  private:
    struct descriptor_set_bindings
    {
        // storage images
        std::unordered_map<uint32_t, const ImageInfo*> image_infos;

        // storage and texel buffers
        std::unordered_map<uint32_t, const BufferInfo*> buffer_infos;
    };

    using descriptor_set_t = std::unordered_map<uint32_t, descriptor_set_bindings>;

    enum DescriptorSetBindPoints
    {
        kBindPoint_graphics = 0,
        kBindPoint_compute,
        kBindPoint_ray_tracing,

        kBindPoint_count
    };

    struct CommandBufferStack
    {
        CommandBufferStack(const std::vector<uint64_t>&              dc_indices,
                           const std::vector<std::vector<uint64_t>>& rp_indices,
                           const std::vector<uint64_t>&              dispatch_indices,
                           const std::vector<uint64_t>&              traceRays_indices,
                           const VulkanObjectInfoTable&              object_info_table,
                           bool                                      dump_rts_before_dc);

        ~CommandBufferStack();

        VkCommandBuffer                    original_command_buffer_handle;
        const CommandBufferInfo*           original_command_buffer_info;
        std::vector<VkCommandBuffer>       command_buffers;
        uint32_t                           current_index;
        std::vector<uint64_t>              dc_indices;
        std::vector<uint64_t>              dispatch_indices;
        std::vector<uint64_t>              traceRays_indices;
        std::vector<std::vector<uint64_t>> RP_indices;
        const RenderPassInfo*              active_renderpass;
        const FramebufferInfo*             active_framebuffer;
        uint32_t                           current_renderpass;
        uint32_t                           current_subpass;
        uint32_t                           n_subpasses;
        VkSubpassContents                  subpass_contents;
        bool                               dump_rts_before_dc;

        std::vector<std::vector<VkRenderPass>> render_pass_clones;
        bool                                   inside_renderpass;

        struct RenderTargets
        {
            RenderTargets() :
                depth_att_img(nullptr), depth_att_storeOp(VK_ATTACHMENT_STORE_OP_DONT_CARE),
                depth_att_final_layout(VK_IMAGE_LAYOUT_UNDEFINED)
            {}

            std::vector<const ImageInfo*>    color_att_imgs;
            std::vector<VkAttachmentStoreOp> color_att_storeOps;
            std::vector<VkImageLayout>       color_att_final_layouts;

            const ImageInfo*    depth_att_img;
            VkAttachmentStoreOp depth_att_storeOp;
            VkImageLayout       depth_att_final_layout;
        };

        std::vector<std::vector<RenderTargets>> render_targets_;
        std::vector<VkRect2D>                   render_area_;

        using RenderPassSubpassPair = std::pair<uint64_t, uint64_t>;
        RenderPassSubpassPair GetRenderPassIndex(uint64_t dc_index) const;
        size_t                CmdBufToDCVectorIndex(size_t cmd_buf_index) const;

        VkResult CloneRenderPass(const RenderPassInfo* original_render_pass);

        VkResult BeginRenderPass(const RenderPassInfo*  render_pass_info,
                                 uint32_t               clear_value_count,
                                 const VkClearValue*    p_clear_values,
                                 const FramebufferInfo* framebuffer_info,
                                 const VkRect2D&        render_area,
                                 VkSubpassContents      contents);

        void NextSubpass(VkSubpassContents contents);

        void EndRenderPass();

        void FinalizeCommandBuffer();

        void SetRenderTargets(const std::vector<const ImageInfo*>&    color_att_imgs,
                              const std::vector<VkAttachmentStoreOp>& color_att_storeOps,
                              const std::vector<VkImageLayout>&       color_att_final_layouts,
                              const ImageInfo*                        depth_att_img,
                              VkAttachmentStoreOp                     depth_att_storeOp,
                              VkImageLayout                           depth_att_final_layout);

        void SetRenderArea(const VkRect2D& render_area);

        uint32_t GetActiveCommandBuffers(cmd_buf_it& first, cmd_buf_it& last) const;

        std::list<std::string> DumpAttachments(uint64_t dc_index) const;

        descriptor_set_t bound_descriptor_sets[kBindPoint_count];

        struct
        {
            std::vector<const ImageInfo*> original_images;
            std::vector<VkImage>          images;
            std::vector<VkDeviceMemory>   image_memories;

            std::vector<const BufferInfo*> original_buffers;
            std::vector<VkBuffer>          buffers;
            std::vector<VkDeviceMemory>    buffer_memories;
        } mutable_resource_backups;

        VkResult CloneImage(const ImageInfo* image_info);

        VkResult CloneBuffer(const BufferInfo* buffer_info);

        void DestroyMutableResourceBackups();

        VkResult BackUpMutableResources(VkQueue queue);

        VkResult RevertMutableResources(VkQueue queue);

        VkCommandBuffer aux_command_buffer;
        VkFence         aux_fence;
        bool            must_backup_resources;

        const encode::DeviceTable*              device_table;
        const VulkanObjectInfoTable&            object_info_table;
        const VkPhysicalDeviceMemoryProperties* replay_device_phys_mem_props;
    };

    std::vector<uint64_t> QueueSubmit_indices_;

    // One per BeginCommandBuffer index
    std::unordered_map<uint64_t, CommandBufferStack> cmd_buf_stacks_;

    // Mapping between the original VkCommandBuffer handle and BeginCommandBuffer index
    std::unordered_map<VkCommandBuffer, uint64_t> cmd_buf_begin_map_;

  private:
    bool UpdateRecordingStatus();

    void DumpResources(const CommandBufferStack& stack, uint64_t dc_index);

    VulkanReplayResourceDump::CommandBufferStack* FindCommandBufferStack(VkCommandBuffer original_command_buffer);

    const VulkanReplayResourceDump::CommandBufferStack* FindCommandBufferStack(uint64_t bcb_id) const;

    VulkanReplayResourceDump::CommandBufferStack* FindCommandBufferStack(uint64_t bcb_id);

    const VulkanReplayResourceDump::CommandBufferStack*
    FindCommandBufferStack(VkCommandBuffer original_command_buffer) const;

    bool recording_;
    bool dump_rts_before_dc_;
    bool isolate_draw_call_;
    bool ignore_storeOps_;

    const VulkanObjectInfoTable& object_info_table_;
};

GFXRECON_END_NAMESPACE(gfxrecon)
GFXRECON_END_NAMESPACE(decode)

#endif /* GFXRECON_DECODE_VULKAN_REPLAY_RESOURCE_DUMPING_H */
