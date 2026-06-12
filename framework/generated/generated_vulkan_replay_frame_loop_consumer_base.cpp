/*
** Copyright (c) 2018-2023 Valve Corporation
** Copyright (c) 2018-2026 LunarG, Inc.
** Copyright (c) 2023 Advanced Micro Devices, Inc.
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

/*
** This file is generated from the Khronos Vulkan XML API Registry.
**
*/

#include "generated/generated_vulkan_replay_consumer.h"
#include "generated/generated_vulkan_replay_frame_loop_consumer_base.h"

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)


void VulkanReplayFrameLoopConsumerBase::Process_vkCreateInstance(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    StructPointerDecoder<Decoded_VkInstanceCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkInstance>*           pInstance)
{
    format::HandleId handle = *pInstance->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in loopSet
    if (!getFrameLoopInfo().IsLooping() ||
        find(loopSet.begin(), loopSet.end(), handle) == loopSet.end())
    {
        printf("@@Executing Process_vkCreateInstance\n");
        VulkanReplayConsumer::Process_vkCreateInstance(call_info, returnValue, pCreateInfo, pAllocator, pInstance);
        // If we are looping, save the handle in loopSet
        if (getFrameLoopInfo().IsLooping())
        {
            loopSet.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateInstance\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyInstance(
    const ApiCallInfo&                          call_info,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    // Skip for loop iterations 1-(n-1).
    // Skip if looping and if not final iteration
    // Execute if instance is in loopSet

    // Call Process_vkDestroyInstance if:
    //    We are not looping
    //    We are looping and instance is in loopSet
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        std::find(loopSet.begin(), loopSet.end(), instance) != loopSet.end() ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyInstance\n");
        VulkanReplayConsumer::Process_vkDestroyInstance(call_info, instance, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyInstance\n");
    }
    // Remove instance from loopSet
    if (std::find(loopSet.begin(), loopSet.end(), instance) != loopSet.end())
    {
        loopSet.erase(instance);
    }
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateDevice(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkDeviceCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkDevice>*             pDevice)
{
    format::HandleId handle = *pDevice->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in loopSet
    if (!getFrameLoopInfo().IsLooping() ||
        find(loopSet.begin(), loopSet.end(), handle) == loopSet.end())
    {
        printf("@@Executing Process_vkCreateDevice\n");
        VulkanReplayConsumer::Process_vkCreateDevice(call_info, returnValue, physicalDevice, pCreateInfo, pAllocator, pDevice);
        // If we are looping, save the handle in loopSet
        if (getFrameLoopInfo().IsLooping())
        {
            loopSet.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateDevice\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyDevice(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    // Skip for loop iterations 1-(n-1).
    // Skip if looping and if not final iteration
    // Execute if device is in loopSet

    // Call Process_vkDestroyDevice if:
    //    We are not looping
    //    We are looping and device is in loopSet
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        std::find(loopSet.begin(), loopSet.end(), device) != loopSet.end() ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyDevice\n");
        VulkanReplayConsumer::Process_vkDestroyDevice(call_info, device, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyDevice\n");
    }
    // Remove device from loopSet
    if (std::find(loopSet.begin(), loopSet.end(), device) != loopSet.end())
    {
        loopSet.erase(device);
    }
}

void VulkanReplayFrameLoopConsumerBase::Process_vkAllocateMemory(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkMemoryAllocateInfo>* pAllocateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkDeviceMemory>*       pMemory)
{
    format::HandleId handle = *pMemory->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in loopSet
    if (!getFrameLoopInfo().IsLooping() ||
        find(loopSet.begin(), loopSet.end(), handle) == loopSet.end())
    {
        printf("@@Executing Process_vkAllocateMemory\n");
        VulkanReplayConsumer::Process_vkAllocateMemory(call_info, returnValue, device, pAllocateInfo, pAllocator, pMemory);
        // If we are looping, save the handle in loopSet
        if (getFrameLoopInfo().IsLooping())
        {
            loopSet.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkAllocateMemory\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkFreeMemory(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            memory,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    // Skip for loop iterations 1-(n-1).
    // Skip if looping and if not final iteration
    // Execute if memory is in loopSet

    // Call Process_vkFreeMemory if:
    //    We are not looping
    //    We are looping and memory is in loopSet
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        std::find(loopSet.begin(), loopSet.end(), memory) != loopSet.end() ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkFreeMemory\n");
        VulkanReplayConsumer::Process_vkFreeMemory(call_info, device, memory, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkFreeMemory\n");
    }
    // Remove memory from loopSet
    if (std::find(loopSet.begin(), loopSet.end(), memory) != loopSet.end())
    {
        loopSet.erase(memory);
    }
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateFence(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkFenceCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkFence>*              pFence)
{
    format::HandleId handle = *pFence->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in loopSet
    if (!getFrameLoopInfo().IsLooping() ||
        find(loopSet.begin(), loopSet.end(), handle) == loopSet.end())
    {
        printf("@@Executing Process_vkCreateFence\n");
        VulkanReplayConsumer::Process_vkCreateFence(call_info, returnValue, device, pCreateInfo, pAllocator, pFence);
        // If we are looping, save the handle in loopSet
        if (getFrameLoopInfo().IsLooping())
        {
            loopSet.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateFence\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyFence(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            fence,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    // Skip for loop iterations 1-(n-1).
    // Skip if looping and if not final iteration
    // Execute if fence is in loopSet

    // Call Process_vkDestroyFence if:
    //    We are not looping
    //    We are looping and fence is in loopSet
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        std::find(loopSet.begin(), loopSet.end(), fence) != loopSet.end() ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyFence\n");
        VulkanReplayConsumer::Process_vkDestroyFence(call_info, device, fence, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyFence\n");
    }
    // Remove fence from loopSet
    if (std::find(loopSet.begin(), loopSet.end(), fence) != loopSet.end())
    {
        loopSet.erase(fence);
    }
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateBuffer(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkBufferCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkBuffer>*             pBuffer)
{
    format::HandleId handle = *pBuffer->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in loopSet
    if (!getFrameLoopInfo().IsLooping() ||
        find(loopSet.begin(), loopSet.end(), handle) == loopSet.end())
    {
        printf("@@Executing Process_vkCreateBuffer\n");
        VulkanReplayConsumer::Process_vkCreateBuffer(call_info, returnValue, device, pCreateInfo, pAllocator, pBuffer);
        // If we are looping, save the handle in loopSet
        if (getFrameLoopInfo().IsLooping())
        {
            loopSet.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateBuffer\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyBuffer(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            buffer,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    // Skip for loop iterations 1-(n-1).
    // Skip if looping and if not final iteration
    // Execute if buffer is in loopSet

    // Call Process_vkDestroyBuffer if:
    //    We are not looping
    //    We are looping and buffer is in loopSet
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        std::find(loopSet.begin(), loopSet.end(), buffer) != loopSet.end() ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyBuffer\n");
        VulkanReplayConsumer::Process_vkDestroyBuffer(call_info, device, buffer, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyBuffer\n");
    }
    // Remove buffer from loopSet
    if (std::find(loopSet.begin(), loopSet.end(), buffer) != loopSet.end())
    {
        loopSet.erase(buffer);
    }
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateImage(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkImageCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkImage>*              pImage)
{
    format::HandleId handle = *pImage->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in loopSet
    if (!getFrameLoopInfo().IsLooping() ||
        find(loopSet.begin(), loopSet.end(), handle) == loopSet.end())
    {
        printf("@@Executing Process_vkCreateImage\n");
        VulkanReplayConsumer::Process_vkCreateImage(call_info, returnValue, device, pCreateInfo, pAllocator, pImage);
        // If we are looping, save the handle in loopSet
        if (getFrameLoopInfo().IsLooping())
        {
            loopSet.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateImage\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyImage(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            image,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    // Skip for loop iterations 1-(n-1).
    // Skip if looping and if not final iteration
    // Execute if image is in loopSet

    // Call Process_vkDestroyImage if:
    //    We are not looping
    //    We are looping and image is in loopSet
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        std::find(loopSet.begin(), loopSet.end(), image) != loopSet.end() ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyImage\n");
        VulkanReplayConsumer::Process_vkDestroyImage(call_info, device, image, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyImage\n");
    }
    // Remove image from loopSet
    if (std::find(loopSet.begin(), loopSet.end(), image) != loopSet.end())
    {
        loopSet.erase(image);
    }
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateImageView(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkImageViewCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkImageView>*          pView)
{
    format::HandleId handle = *pView->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in loopSet
    if (!getFrameLoopInfo().IsLooping() ||
        find(loopSet.begin(), loopSet.end(), handle) == loopSet.end())
    {
        printf("@@Executing Process_vkCreateImageView\n");
        VulkanReplayConsumer::Process_vkCreateImageView(call_info, returnValue, device, pCreateInfo, pAllocator, pView);
        // If we are looping, save the handle in loopSet
        if (getFrameLoopInfo().IsLooping())
        {
            loopSet.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateImageView\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyImageView(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            imageView,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    // Skip for loop iterations 1-(n-1).
    // Skip if looping and if not final iteration
    // Execute if imageView is in loopSet

    // Call Process_vkDestroyImageView if:
    //    We are not looping
    //    We are looping and imageView is in loopSet
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        std::find(loopSet.begin(), loopSet.end(), imageView) != loopSet.end() ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyImageView\n");
        VulkanReplayConsumer::Process_vkDestroyImageView(call_info, device, imageView, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyImageView\n");
    }
    // Remove imageView from loopSet
    if (std::find(loopSet.begin(), loopSet.end(), imageView) != loopSet.end())
    {
        loopSet.erase(imageView);
    }
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateCommandPool(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkCommandPoolCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkCommandPool>*        pCommandPool)
{
    format::HandleId handle = *pCommandPool->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in loopSet
    if (!getFrameLoopInfo().IsLooping() ||
        find(loopSet.begin(), loopSet.end(), handle) == loopSet.end())
    {
        printf("@@Executing Process_vkCreateCommandPool\n");
        VulkanReplayConsumer::Process_vkCreateCommandPool(call_info, returnValue, device, pCreateInfo, pAllocator, pCommandPool);
        // If we are looping, save the handle in loopSet
        if (getFrameLoopInfo().IsLooping())
        {
            loopSet.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateCommandPool\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyCommandPool(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            commandPool,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    // Skip for loop iterations 1-(n-1).
    // Skip if looping and if not final iteration
    // Execute if commandPool is in loopSet

    // Call Process_vkDestroyCommandPool if:
    //    We are not looping
    //    We are looping and commandPool is in loopSet
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        std::find(loopSet.begin(), loopSet.end(), commandPool) != loopSet.end() ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyCommandPool\n");
        VulkanReplayConsumer::Process_vkDestroyCommandPool(call_info, device, commandPool, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyCommandPool\n");
    }
    // Remove commandPool from loopSet
    if (std::find(loopSet.begin(), loopSet.end(), commandPool) != loopSet.end())
    {
        loopSet.erase(commandPool);
    }
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateEvent(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkEventCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkEvent>*              pEvent)
{
    format::HandleId handle = *pEvent->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in loopSet
    if (!getFrameLoopInfo().IsLooping() ||
        find(loopSet.begin(), loopSet.end(), handle) == loopSet.end())
    {
        printf("@@Executing Process_vkCreateEvent\n");
        VulkanReplayConsumer::Process_vkCreateEvent(call_info, returnValue, device, pCreateInfo, pAllocator, pEvent);
        // If we are looping, save the handle in loopSet
        if (getFrameLoopInfo().IsLooping())
        {
            loopSet.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateEvent\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyEvent(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            event,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    // Skip for loop iterations 1-(n-1).
    // Skip if looping and if not final iteration
    // Execute if event is in loopSet

    // Call Process_vkDestroyEvent if:
    //    We are not looping
    //    We are looping and event is in loopSet
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        std::find(loopSet.begin(), loopSet.end(), event) != loopSet.end() ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyEvent\n");
        VulkanReplayConsumer::Process_vkDestroyEvent(call_info, device, event, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyEvent\n");
    }
    // Remove event from loopSet
    if (std::find(loopSet.begin(), loopSet.end(), event) != loopSet.end())
    {
        loopSet.erase(event);
    }
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateBufferView(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkBufferViewCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkBufferView>*         pView)
{
    format::HandleId handle = *pView->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in loopSet
    if (!getFrameLoopInfo().IsLooping() ||
        find(loopSet.begin(), loopSet.end(), handle) == loopSet.end())
    {
        printf("@@Executing Process_vkCreateBufferView\n");
        VulkanReplayConsumer::Process_vkCreateBufferView(call_info, returnValue, device, pCreateInfo, pAllocator, pView);
        // If we are looping, save the handle in loopSet
        if (getFrameLoopInfo().IsLooping())
        {
            loopSet.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateBufferView\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyBufferView(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            bufferView,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    // Skip for loop iterations 1-(n-1).
    // Skip if looping and if not final iteration
    // Execute if bufferView is in loopSet

    // Call Process_vkDestroyBufferView if:
    //    We are not looping
    //    We are looping and bufferView is in loopSet
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        std::find(loopSet.begin(), loopSet.end(), bufferView) != loopSet.end() ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyBufferView\n");
        VulkanReplayConsumer::Process_vkDestroyBufferView(call_info, device, bufferView, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyBufferView\n");
    }
    // Remove bufferView from loopSet
    if (std::find(loopSet.begin(), loopSet.end(), bufferView) != loopSet.end())
    {
        loopSet.erase(bufferView);
    }
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateDescriptorSetLayout(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDescriptorSetLayoutCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkDescriptorSetLayout>* pSetLayout)
{
    format::HandleId handle = *pSetLayout->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in loopSet
    if (!getFrameLoopInfo().IsLooping() ||
        find(loopSet.begin(), loopSet.end(), handle) == loopSet.end())
    {
        printf("@@Executing Process_vkCreateDescriptorSetLayout\n");
        VulkanReplayConsumer::Process_vkCreateDescriptorSetLayout(call_info, returnValue, device, pCreateInfo, pAllocator, pSetLayout);
        // If we are looping, save the handle in loopSet
        if (getFrameLoopInfo().IsLooping())
        {
            loopSet.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateDescriptorSetLayout\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyDescriptorSetLayout(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            descriptorSetLayout,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    // Skip for loop iterations 1-(n-1).
    // Skip if looping and if not final iteration
    // Execute if descriptorSetLayout is in loopSet

    // Call Process_vkDestroyDescriptorSetLayout if:
    //    We are not looping
    //    We are looping and descriptorSetLayout is in loopSet
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        std::find(loopSet.begin(), loopSet.end(), descriptorSetLayout) != loopSet.end() ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyDescriptorSetLayout\n");
        VulkanReplayConsumer::Process_vkDestroyDescriptorSetLayout(call_info, device, descriptorSetLayout, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyDescriptorSetLayout\n");
    }
    // Remove descriptorSetLayout from loopSet
    if (std::find(loopSet.begin(), loopSet.end(), descriptorSetLayout) != loopSet.end())
    {
        loopSet.erase(descriptorSetLayout);
    }
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateDescriptorPool(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDescriptorPoolCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkDescriptorPool>*     pDescriptorPool)
{
    format::HandleId handle = *pDescriptorPool->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in loopSet
    if (!getFrameLoopInfo().IsLooping() ||
        find(loopSet.begin(), loopSet.end(), handle) == loopSet.end())
    {
        printf("@@Executing Process_vkCreateDescriptorPool\n");
        VulkanReplayConsumer::Process_vkCreateDescriptorPool(call_info, returnValue, device, pCreateInfo, pAllocator, pDescriptorPool);
        // If we are looping, save the handle in loopSet
        if (getFrameLoopInfo().IsLooping())
        {
            loopSet.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateDescriptorPool\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyDescriptorPool(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            descriptorPool,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    // Skip for loop iterations 1-(n-1).
    // Skip if looping and if not final iteration
    // Execute if descriptorPool is in loopSet

    // Call Process_vkDestroyDescriptorPool if:
    //    We are not looping
    //    We are looping and descriptorPool is in loopSet
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        std::find(loopSet.begin(), loopSet.end(), descriptorPool) != loopSet.end() ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyDescriptorPool\n");
        VulkanReplayConsumer::Process_vkDestroyDescriptorPool(call_info, device, descriptorPool, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyDescriptorPool\n");
    }
    // Remove descriptorPool from loopSet
    if (std::find(loopSet.begin(), loopSet.end(), descriptorPool) != loopSet.end())
    {
        loopSet.erase(descriptorPool);
    }
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateFramebuffer(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkFramebufferCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkFramebuffer>*        pFramebuffer)
{
    format::HandleId handle = *pFramebuffer->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in loopSet
    if (!getFrameLoopInfo().IsLooping() ||
        find(loopSet.begin(), loopSet.end(), handle) == loopSet.end())
    {
        printf("@@Executing Process_vkCreateFramebuffer\n");
        VulkanReplayConsumer::Process_vkCreateFramebuffer(call_info, returnValue, device, pCreateInfo, pAllocator, pFramebuffer);
        // If we are looping, save the handle in loopSet
        if (getFrameLoopInfo().IsLooping())
        {
            loopSet.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateFramebuffer\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyFramebuffer(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            framebuffer,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    // Skip for loop iterations 1-(n-1).
    // Skip if looping and if not final iteration
    // Execute if framebuffer is in loopSet

    // Call Process_vkDestroyFramebuffer if:
    //    We are not looping
    //    We are looping and framebuffer is in loopSet
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        std::find(loopSet.begin(), loopSet.end(), framebuffer) != loopSet.end() ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyFramebuffer\n");
        VulkanReplayConsumer::Process_vkDestroyFramebuffer(call_info, device, framebuffer, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyFramebuffer\n");
    }
    // Remove framebuffer from loopSet
    if (std::find(loopSet.begin(), loopSet.end(), framebuffer) != loopSet.end())
    {
        loopSet.erase(framebuffer);
    }
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateDescriptorUpdateTemplate(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDescriptorUpdateTemplateCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkDescriptorUpdateTemplate>* pDescriptorUpdateTemplate)
{
    format::HandleId handle = *pDescriptorUpdateTemplate->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in loopSet
    if (!getFrameLoopInfo().IsLooping() ||
        find(loopSet.begin(), loopSet.end(), handle) == loopSet.end())
    {
        printf("@@Executing Process_vkCreateDescriptorUpdateTemplate\n");
        VulkanReplayConsumer::Process_vkCreateDescriptorUpdateTemplate(call_info, returnValue, device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate);
        // If we are looping, save the handle in loopSet
        if (getFrameLoopInfo().IsLooping())
        {
            loopSet.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateDescriptorUpdateTemplate\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyDescriptorUpdateTemplate(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            descriptorUpdateTemplate,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    // Skip for loop iterations 1-(n-1).
    // Skip if looping and if not final iteration
    // Execute if descriptorUpdateTemplate is in loopSet

    // Call Process_vkDestroyDescriptorUpdateTemplate if:
    //    We are not looping
    //    We are looping and descriptorUpdateTemplate is in loopSet
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        std::find(loopSet.begin(), loopSet.end(), descriptorUpdateTemplate) != loopSet.end() ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyDescriptorUpdateTemplate\n");
        VulkanReplayConsumer::Process_vkDestroyDescriptorUpdateTemplate(call_info, device, descriptorUpdateTemplate, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyDescriptorUpdateTemplate\n");
    }
    // Remove descriptorUpdateTemplate from loopSet
    if (std::find(loopSet.begin(), loopSet.end(), descriptorUpdateTemplate) != loopSet.end())
    {
        loopSet.erase(descriptorUpdateTemplate);
    }
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateDescriptorUpdateTemplateKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDescriptorUpdateTemplateCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkDescriptorUpdateTemplate>* pDescriptorUpdateTemplate)
{
    format::HandleId handle = *pDescriptorUpdateTemplate->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in loopSet
    if (!getFrameLoopInfo().IsLooping() ||
        find(loopSet.begin(), loopSet.end(), handle) == loopSet.end())
    {
        printf("@@Executing Process_vkCreateDescriptorUpdateTemplateKHR\n");
        VulkanReplayConsumer::Process_vkCreateDescriptorUpdateTemplateKHR(call_info, returnValue, device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate);
        // If we are looping, save the handle in loopSet
        if (getFrameLoopInfo().IsLooping())
        {
            loopSet.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateDescriptorUpdateTemplateKHR\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyDescriptorUpdateTemplateKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            descriptorUpdateTemplate,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    // Skip for loop iterations 1-(n-1).
    // Skip if looping and if not final iteration
    // Execute if descriptorUpdateTemplate is in loopSet

    // Call Process_vkDestroyDescriptorUpdateTemplateKHR if:
    //    We are not looping
    //    We are looping and descriptorUpdateTemplate is in loopSet
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        std::find(loopSet.begin(), loopSet.end(), descriptorUpdateTemplate) != loopSet.end() ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyDescriptorUpdateTemplateKHR\n");
        VulkanReplayConsumer::Process_vkDestroyDescriptorUpdateTemplateKHR(call_info, device, descriptorUpdateTemplate, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyDescriptorUpdateTemplateKHR\n");
    }
    // Remove descriptorUpdateTemplate from loopSet
    if (std::find(loopSet.begin(), loopSet.end(), descriptorUpdateTemplate) != loopSet.end())
    {
        loopSet.erase(descriptorUpdateTemplate);
    }
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateDeferredOperationKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkDeferredOperationKHR>* pDeferredOperation)
{
    format::HandleId handle = *pDeferredOperation->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in loopSet
    if (!getFrameLoopInfo().IsLooping() ||
        find(loopSet.begin(), loopSet.end(), handle) == loopSet.end())
    {
        printf("@@Executing Process_vkCreateDeferredOperationKHR\n");
        VulkanReplayConsumer::Process_vkCreateDeferredOperationKHR(call_info, returnValue, device, pAllocator, pDeferredOperation);
        // If we are looping, save the handle in loopSet
        if (getFrameLoopInfo().IsLooping())
        {
            loopSet.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateDeferredOperationKHR\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyDeferredOperationKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            operation,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    // Skip for loop iterations 1-(n-1).
    // Skip if looping and if not final iteration
    // Execute if operation is in loopSet

    // Call Process_vkDestroyDeferredOperationKHR if:
    //    We are not looping
    //    We are looping and operation is in loopSet
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        std::find(loopSet.begin(), loopSet.end(), operation) != loopSet.end() ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyDeferredOperationKHR\n");
        VulkanReplayConsumer::Process_vkDestroyDeferredOperationKHR(call_info, device, operation, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyDeferredOperationKHR\n");
    }
    // Remove operation from loopSet
    if (std::find(loopSet.begin(), loopSet.end(), operation) != loopSet.end())
    {
        loopSet.erase(operation);
    }
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateDebugReportCallbackEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkDebugReportCallbackCreateInfoEXT>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkDebugReportCallbackEXT>* pCallback)
{
    format::HandleId handle = *pCallback->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in loopSet
    if (!getFrameLoopInfo().IsLooping() ||
        find(loopSet.begin(), loopSet.end(), handle) == loopSet.end())
    {
        printf("@@Executing Process_vkCreateDebugReportCallbackEXT\n");
        VulkanReplayConsumer::Process_vkCreateDebugReportCallbackEXT(call_info, returnValue, instance, pCreateInfo, pAllocator, pCallback);
        // If we are looping, save the handle in loopSet
        if (getFrameLoopInfo().IsLooping())
        {
            loopSet.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateDebugReportCallbackEXT\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyDebugReportCallbackEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            instance,
    format::HandleId                            callback,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    // Skip for loop iterations 1-(n-1).
    // Skip if looping and if not final iteration
    // Execute if callback is in loopSet

    // Call Process_vkDestroyDebugReportCallbackEXT if:
    //    We are not looping
    //    We are looping and callback is in loopSet
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        std::find(loopSet.begin(), loopSet.end(), callback) != loopSet.end() ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyDebugReportCallbackEXT\n");
        VulkanReplayConsumer::Process_vkDestroyDebugReportCallbackEXT(call_info, instance, callback, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyDebugReportCallbackEXT\n");
    }
    // Remove callback from loopSet
    if (std::find(loopSet.begin(), loopSet.end(), callback) != loopSet.end())
    {
        loopSet.erase(callback);
    }
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateDebugUtilsMessengerEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkDebugUtilsMessengerCreateInfoEXT>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkDebugUtilsMessengerEXT>* pMessenger)
{
    format::HandleId handle = *pMessenger->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in loopSet
    if (!getFrameLoopInfo().IsLooping() ||
        find(loopSet.begin(), loopSet.end(), handle) == loopSet.end())
    {
        printf("@@Executing Process_vkCreateDebugUtilsMessengerEXT\n");
        VulkanReplayConsumer::Process_vkCreateDebugUtilsMessengerEXT(call_info, returnValue, instance, pCreateInfo, pAllocator, pMessenger);
        // If we are looping, save the handle in loopSet
        if (getFrameLoopInfo().IsLooping())
        {
            loopSet.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateDebugUtilsMessengerEXT\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyDebugUtilsMessengerEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            instance,
    format::HandleId                            messenger,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    // Skip for loop iterations 1-(n-1).
    // Skip if looping and if not final iteration
    // Execute if messenger is in loopSet

    // Call Process_vkDestroyDebugUtilsMessengerEXT if:
    //    We are not looping
    //    We are looping and messenger is in loopSet
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        std::find(loopSet.begin(), loopSet.end(), messenger) != loopSet.end() ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyDebugUtilsMessengerEXT\n");
        VulkanReplayConsumer::Process_vkDestroyDebugUtilsMessengerEXT(call_info, instance, messenger, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyDebugUtilsMessengerEXT\n");
    }
    // Remove messenger from loopSet
    if (std::find(loopSet.begin(), loopSet.end(), messenger) != loopSet.end())
    {
        loopSet.erase(messenger);
    }
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateAccelerationStructureNV(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkAccelerationStructureCreateInfoNV>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkAccelerationStructureNV>* pAccelerationStructure)
{
    format::HandleId handle = *pAccelerationStructure->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in loopSet
    if (!getFrameLoopInfo().IsLooping() ||
        find(loopSet.begin(), loopSet.end(), handle) == loopSet.end())
    {
        printf("@@Executing Process_vkCreateAccelerationStructureNV\n");
        VulkanReplayConsumer::Process_vkCreateAccelerationStructureNV(call_info, returnValue, device, pCreateInfo, pAllocator, pAccelerationStructure);
        // If we are looping, save the handle in loopSet
        if (getFrameLoopInfo().IsLooping())
        {
            loopSet.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateAccelerationStructureNV\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyAccelerationStructureNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            accelerationStructure,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    // Skip for loop iterations 1-(n-1).
    // Skip if looping and if not final iteration
    // Execute if accelerationStructure is in loopSet

    // Call Process_vkDestroyAccelerationStructureNV if:
    //    We are not looping
    //    We are looping and accelerationStructure is in loopSet
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        std::find(loopSet.begin(), loopSet.end(), accelerationStructure) != loopSet.end() ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyAccelerationStructureNV\n");
        VulkanReplayConsumer::Process_vkDestroyAccelerationStructureNV(call_info, device, accelerationStructure, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyAccelerationStructureNV\n");
    }
    // Remove accelerationStructure from loopSet
    if (std::find(loopSet.begin(), loopSet.end(), accelerationStructure) != loopSet.end())
    {
        loopSet.erase(accelerationStructure);
    }
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateIndirectCommandsLayoutNV(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkIndirectCommandsLayoutCreateInfoNV>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkIndirectCommandsLayoutNV>* pIndirectCommandsLayout)
{
    format::HandleId handle = *pIndirectCommandsLayout->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in loopSet
    if (!getFrameLoopInfo().IsLooping() ||
        find(loopSet.begin(), loopSet.end(), handle) == loopSet.end())
    {
        printf("@@Executing Process_vkCreateIndirectCommandsLayoutNV\n");
        VulkanReplayConsumer::Process_vkCreateIndirectCommandsLayoutNV(call_info, returnValue, device, pCreateInfo, pAllocator, pIndirectCommandsLayout);
        // If we are looping, save the handle in loopSet
        if (getFrameLoopInfo().IsLooping())
        {
            loopSet.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateIndirectCommandsLayoutNV\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyIndirectCommandsLayoutNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            indirectCommandsLayout,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    // Skip for loop iterations 1-(n-1).
    // Skip if looping and if not final iteration
    // Execute if indirectCommandsLayout is in loopSet

    // Call Process_vkDestroyIndirectCommandsLayoutNV if:
    //    We are not looping
    //    We are looping and indirectCommandsLayout is in loopSet
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        std::find(loopSet.begin(), loopSet.end(), indirectCommandsLayout) != loopSet.end() ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyIndirectCommandsLayoutNV\n");
        VulkanReplayConsumer::Process_vkDestroyIndirectCommandsLayoutNV(call_info, device, indirectCommandsLayout, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyIndirectCommandsLayoutNV\n");
    }
    // Remove indirectCommandsLayout from loopSet
    if (std::find(loopSet.begin(), loopSet.end(), indirectCommandsLayout) != loopSet.end())
    {
        loopSet.erase(indirectCommandsLayout);
    }
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateDataGraphPipelineSessionARM(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDataGraphPipelineSessionCreateInfoARM>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkDataGraphPipelineSessionARM>* pSession)
{
    format::HandleId handle = *pSession->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in loopSet
    if (!getFrameLoopInfo().IsLooping() ||
        find(loopSet.begin(), loopSet.end(), handle) == loopSet.end())
    {
        printf("@@Executing Process_vkCreateDataGraphPipelineSessionARM\n");
        VulkanReplayConsumer::Process_vkCreateDataGraphPipelineSessionARM(call_info, returnValue, device, pCreateInfo, pAllocator, pSession);
        // If we are looping, save the handle in loopSet
        if (getFrameLoopInfo().IsLooping())
        {
            loopSet.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateDataGraphPipelineSessionARM\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyDataGraphPipelineSessionARM(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            session,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    // Skip for loop iterations 1-(n-1).
    // Skip if looping and if not final iteration
    // Execute if session is in loopSet

    // Call Process_vkDestroyDataGraphPipelineSessionARM if:
    //    We are not looping
    //    We are looping and session is in loopSet
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        std::find(loopSet.begin(), loopSet.end(), session) != loopSet.end() ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyDataGraphPipelineSessionARM\n");
        VulkanReplayConsumer::Process_vkDestroyDataGraphPipelineSessionARM(call_info, device, session, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyDataGraphPipelineSessionARM\n");
    }
    // Remove session from loopSet
    if (std::find(loopSet.begin(), loopSet.end(), session) != loopSet.end())
    {
        loopSet.erase(session);
    }
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateIndirectCommandsLayoutEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkIndirectCommandsLayoutCreateInfoEXT>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkIndirectCommandsLayoutEXT>* pIndirectCommandsLayout)
{
    format::HandleId handle = *pIndirectCommandsLayout->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in loopSet
    if (!getFrameLoopInfo().IsLooping() ||
        find(loopSet.begin(), loopSet.end(), handle) == loopSet.end())
    {
        printf("@@Executing Process_vkCreateIndirectCommandsLayoutEXT\n");
        VulkanReplayConsumer::Process_vkCreateIndirectCommandsLayoutEXT(call_info, returnValue, device, pCreateInfo, pAllocator, pIndirectCommandsLayout);
        // If we are looping, save the handle in loopSet
        if (getFrameLoopInfo().IsLooping())
        {
            loopSet.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateIndirectCommandsLayoutEXT\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyIndirectCommandsLayoutEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            indirectCommandsLayout,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    // Skip for loop iterations 1-(n-1).
    // Skip if looping and if not final iteration
    // Execute if indirectCommandsLayout is in loopSet

    // Call Process_vkDestroyIndirectCommandsLayoutEXT if:
    //    We are not looping
    //    We are looping and indirectCommandsLayout is in loopSet
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        std::find(loopSet.begin(), loopSet.end(), indirectCommandsLayout) != loopSet.end() ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyIndirectCommandsLayoutEXT\n");
        VulkanReplayConsumer::Process_vkDestroyIndirectCommandsLayoutEXT(call_info, device, indirectCommandsLayout, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyIndirectCommandsLayoutEXT\n");
    }
    // Remove indirectCommandsLayout from loopSet
    if (std::find(loopSet.begin(), loopSet.end(), indirectCommandsLayout) != loopSet.end())
    {
        loopSet.erase(indirectCommandsLayout);
    }
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateIndirectExecutionSetEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkIndirectExecutionSetCreateInfoEXT>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkIndirectExecutionSetEXT>* pIndirectExecutionSet)
{
    format::HandleId handle = *pIndirectExecutionSet->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in loopSet
    if (!getFrameLoopInfo().IsLooping() ||
        find(loopSet.begin(), loopSet.end(), handle) == loopSet.end())
    {
        printf("@@Executing Process_vkCreateIndirectExecutionSetEXT\n");
        VulkanReplayConsumer::Process_vkCreateIndirectExecutionSetEXT(call_info, returnValue, device, pCreateInfo, pAllocator, pIndirectExecutionSet);
        // If we are looping, save the handle in loopSet
        if (getFrameLoopInfo().IsLooping())
        {
            loopSet.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateIndirectExecutionSetEXT\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyIndirectExecutionSetEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            indirectExecutionSet,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    // Skip for loop iterations 1-(n-1).
    // Skip if looping and if not final iteration
    // Execute if indirectExecutionSet is in loopSet

    // Call Process_vkDestroyIndirectExecutionSetEXT if:
    //    We are not looping
    //    We are looping and indirectExecutionSet is in loopSet
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        std::find(loopSet.begin(), loopSet.end(), indirectExecutionSet) != loopSet.end() ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyIndirectExecutionSetEXT\n");
        VulkanReplayConsumer::Process_vkDestroyIndirectExecutionSetEXT(call_info, device, indirectExecutionSet, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyIndirectExecutionSetEXT\n");
    }
    // Remove indirectExecutionSet from loopSet
    if (std::find(loopSet.begin(), loopSet.end(), indirectExecutionSet) != loopSet.end())
    {
        loopSet.erase(indirectExecutionSet);
    }
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateAccelerationStructureKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkAccelerationStructureCreateInfoKHR>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkAccelerationStructureKHR>* pAccelerationStructure)
{
    format::HandleId handle = *pAccelerationStructure->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in loopSet
    if (!getFrameLoopInfo().IsLooping() ||
        find(loopSet.begin(), loopSet.end(), handle) == loopSet.end())
    {
        printf("@@Executing Process_vkCreateAccelerationStructureKHR\n");
        VulkanReplayConsumer::Process_vkCreateAccelerationStructureKHR(call_info, returnValue, device, pCreateInfo, pAllocator, pAccelerationStructure);
        // If we are looping, save the handle in loopSet
        if (getFrameLoopInfo().IsLooping())
        {
            loopSet.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateAccelerationStructureKHR\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyAccelerationStructureKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            accelerationStructure,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    // Skip for loop iterations 1-(n-1).
    // Skip if looping and if not final iteration
    // Execute if accelerationStructure is in loopSet

    // Call Process_vkDestroyAccelerationStructureKHR if:
    //    We are not looping
    //    We are looping and accelerationStructure is in loopSet
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        std::find(loopSet.begin(), loopSet.end(), accelerationStructure) != loopSet.end() ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyAccelerationStructureKHR\n");
        VulkanReplayConsumer::Process_vkDestroyAccelerationStructureKHR(call_info, device, accelerationStructure, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyAccelerationStructureKHR\n");
    }
    // Remove accelerationStructure from loopSet
    if (std::find(loopSet.begin(), loopSet.end(), accelerationStructure) != loopSet.end())
    {
        loopSet.erase(accelerationStructure);
    }
}

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)
