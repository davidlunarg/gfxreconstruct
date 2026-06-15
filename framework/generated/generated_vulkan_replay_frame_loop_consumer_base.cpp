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
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateInstance\n");
        VulkanReplayConsumer::Process_vkCreateInstance(call_info, returnValue, pCreateInfo, pAllocator, pInstance);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
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
    // Execute if instance is in allocatedLoopResources

    // Call Process_vkDestroyInstance if:
    //    We are not looping
    //    We are looping and instance is in allocatedLoopResources
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        inAllocatedLoopResources(instance) ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyInstance\n");
        VulkanReplayConsumer::Process_vkDestroyInstance(call_info, instance, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyInstance\n");
    }
    // Remove instance from allocatedLoopResources
    if (inAllocatedLoopResources(instance))
    {
        allocatedLoopResources.erase(instance);
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
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateDevice\n");
        VulkanReplayConsumer::Process_vkCreateDevice(call_info, returnValue, physicalDevice, pCreateInfo, pAllocator, pDevice);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
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
    // Execute if device is in allocatedLoopResources

    // Call Process_vkDestroyDevice if:
    //    We are not looping
    //    We are looping and device is in allocatedLoopResources
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        inAllocatedLoopResources(device) ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyDevice\n");
        VulkanReplayConsumer::Process_vkDestroyDevice(call_info, device, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyDevice\n");
    }
    // Remove device from allocatedLoopResources
    if (inAllocatedLoopResources(device))
    {
        allocatedLoopResources.erase(device);
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
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkAllocateMemory\n");
        VulkanReplayConsumer::Process_vkAllocateMemory(call_info, returnValue, device, pAllocateInfo, pAllocator, pMemory);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
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
    // Execute if memory is in allocatedLoopResources

    // Call Process_vkFreeMemory if:
    //    We are not looping
    //    We are looping and memory is in allocatedLoopResources
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        inAllocatedLoopResources(memory) ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkFreeMemory\n");
        VulkanReplayConsumer::Process_vkFreeMemory(call_info, device, memory, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkFreeMemory\n");
    }
    // Remove memory from allocatedLoopResources
    if (inAllocatedLoopResources(memory))
    {
        allocatedLoopResources.erase(memory);
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
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateFence\n");
        VulkanReplayConsumer::Process_vkCreateFence(call_info, returnValue, device, pCreateInfo, pAllocator, pFence);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
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
    // Execute if fence is in allocatedLoopResources

    // Call Process_vkDestroyFence if:
    //    We are not looping
    //    We are looping and fence is in allocatedLoopResources
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        inAllocatedLoopResources(fence) ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyFence\n");
        VulkanReplayConsumer::Process_vkDestroyFence(call_info, device, fence, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyFence\n");
    }
    // Remove fence from allocatedLoopResources
    if (inAllocatedLoopResources(fence))
    {
        allocatedLoopResources.erase(fence);
    }
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateSemaphore(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkSemaphoreCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSemaphore>*          pSemaphore)
{
    format::HandleId handle = *pSemaphore->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateSemaphore\n");
        VulkanReplayConsumer::Process_vkCreateSemaphore(call_info, returnValue, device, pCreateInfo, pAllocator, pSemaphore);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateSemaphore\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroySemaphore(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            semaphore,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    // Skip for loop iterations 1-(n-1).
    // Skip if looping and if not final iteration
    // Execute if semaphore is in allocatedLoopResources

    // Call Process_vkDestroySemaphore if:
    //    We are not looping
    //    We are looping and semaphore is in allocatedLoopResources
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        inAllocatedLoopResources(semaphore) ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroySemaphore\n");
        VulkanReplayConsumer::Process_vkDestroySemaphore(call_info, device, semaphore, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroySemaphore\n");
    }
    // Remove semaphore from allocatedLoopResources
    if (inAllocatedLoopResources(semaphore))
    {
        allocatedLoopResources.erase(semaphore);
    }
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateQueryPool(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkQueryPoolCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkQueryPool>*          pQueryPool)
{
    format::HandleId handle = *pQueryPool->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateQueryPool\n");
        VulkanReplayConsumer::Process_vkCreateQueryPool(call_info, returnValue, device, pCreateInfo, pAllocator, pQueryPool);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateQueryPool\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyQueryPool(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            queryPool,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    // Skip for loop iterations 1-(n-1).
    // Skip if looping and if not final iteration
    // Execute if queryPool is in allocatedLoopResources

    // Call Process_vkDestroyQueryPool if:
    //    We are not looping
    //    We are looping and queryPool is in allocatedLoopResources
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        inAllocatedLoopResources(queryPool) ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyQueryPool\n");
        VulkanReplayConsumer::Process_vkDestroyQueryPool(call_info, device, queryPool, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyQueryPool\n");
    }
    // Remove queryPool from allocatedLoopResources
    if (inAllocatedLoopResources(queryPool))
    {
        allocatedLoopResources.erase(queryPool);
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
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateBuffer\n");
        VulkanReplayConsumer::Process_vkCreateBuffer(call_info, returnValue, device, pCreateInfo, pAllocator, pBuffer);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
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
    // Execute if buffer is in allocatedLoopResources

    // Call Process_vkDestroyBuffer if:
    //    We are not looping
    //    We are looping and buffer is in allocatedLoopResources
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        inAllocatedLoopResources(buffer) ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyBuffer\n");
        VulkanReplayConsumer::Process_vkDestroyBuffer(call_info, device, buffer, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyBuffer\n");
    }
    // Remove buffer from allocatedLoopResources
    if (inAllocatedLoopResources(buffer))
    {
        allocatedLoopResources.erase(buffer);
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
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateImage\n");
        VulkanReplayConsumer::Process_vkCreateImage(call_info, returnValue, device, pCreateInfo, pAllocator, pImage);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
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
    // Execute if image is in allocatedLoopResources

    // Call Process_vkDestroyImage if:
    //    We are not looping
    //    We are looping and image is in allocatedLoopResources
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        inAllocatedLoopResources(image) ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyImage\n");
        VulkanReplayConsumer::Process_vkDestroyImage(call_info, device, image, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyImage\n");
    }
    // Remove image from allocatedLoopResources
    if (inAllocatedLoopResources(image))
    {
        allocatedLoopResources.erase(image);
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
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateImageView\n");
        VulkanReplayConsumer::Process_vkCreateImageView(call_info, returnValue, device, pCreateInfo, pAllocator, pView);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
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
    // Execute if imageView is in allocatedLoopResources

    // Call Process_vkDestroyImageView if:
    //    We are not looping
    //    We are looping and imageView is in allocatedLoopResources
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        inAllocatedLoopResources(imageView) ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyImageView\n");
        VulkanReplayConsumer::Process_vkDestroyImageView(call_info, device, imageView, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyImageView\n");
    }
    // Remove imageView from allocatedLoopResources
    if (inAllocatedLoopResources(imageView))
    {
        allocatedLoopResources.erase(imageView);
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
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateCommandPool\n");
        VulkanReplayConsumer::Process_vkCreateCommandPool(call_info, returnValue, device, pCreateInfo, pAllocator, pCommandPool);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
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
    // Execute if commandPool is in allocatedLoopResources

    // Call Process_vkDestroyCommandPool if:
    //    We are not looping
    //    We are looping and commandPool is in allocatedLoopResources
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        inAllocatedLoopResources(commandPool) ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyCommandPool\n");
        VulkanReplayConsumer::Process_vkDestroyCommandPool(call_info, device, commandPool, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyCommandPool\n");
    }
    // Remove commandPool from allocatedLoopResources
    if (inAllocatedLoopResources(commandPool))
    {
        allocatedLoopResources.erase(commandPool);
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
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateEvent\n");
        VulkanReplayConsumer::Process_vkCreateEvent(call_info, returnValue, device, pCreateInfo, pAllocator, pEvent);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
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
    // Execute if event is in allocatedLoopResources

    // Call Process_vkDestroyEvent if:
    //    We are not looping
    //    We are looping and event is in allocatedLoopResources
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        inAllocatedLoopResources(event) ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyEvent\n");
        VulkanReplayConsumer::Process_vkDestroyEvent(call_info, device, event, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyEvent\n");
    }
    // Remove event from allocatedLoopResources
    if (inAllocatedLoopResources(event))
    {
        allocatedLoopResources.erase(event);
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
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateBufferView\n");
        VulkanReplayConsumer::Process_vkCreateBufferView(call_info, returnValue, device, pCreateInfo, pAllocator, pView);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
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
    // Execute if bufferView is in allocatedLoopResources

    // Call Process_vkDestroyBufferView if:
    //    We are not looping
    //    We are looping and bufferView is in allocatedLoopResources
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        inAllocatedLoopResources(bufferView) ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyBufferView\n");
        VulkanReplayConsumer::Process_vkDestroyBufferView(call_info, device, bufferView, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyBufferView\n");
    }
    // Remove bufferView from allocatedLoopResources
    if (inAllocatedLoopResources(bufferView))
    {
        allocatedLoopResources.erase(bufferView);
    }
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateShaderModule(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkShaderModuleCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkShaderModule>*       pShaderModule)
{
    format::HandleId handle = *pShaderModule->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateShaderModule\n");
        VulkanReplayConsumer::Process_vkCreateShaderModule(call_info, returnValue, device, pCreateInfo, pAllocator, pShaderModule);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateShaderModule\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyShaderModule(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            shaderModule,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    // Skip for loop iterations 1-(n-1).
    // Skip if looping and if not final iteration
    // Execute if shaderModule is in allocatedLoopResources

    // Call Process_vkDestroyShaderModule if:
    //    We are not looping
    //    We are looping and shaderModule is in allocatedLoopResources
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        inAllocatedLoopResources(shaderModule) ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyShaderModule\n");
        VulkanReplayConsumer::Process_vkDestroyShaderModule(call_info, device, shaderModule, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyShaderModule\n");
    }
    // Remove shaderModule from allocatedLoopResources
    if (inAllocatedLoopResources(shaderModule))
    {
        allocatedLoopResources.erase(shaderModule);
    }
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreatePipelineCache(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkPipelineCacheCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkPipelineCache>*      pPipelineCache)
{
    format::HandleId handle = *pPipelineCache->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreatePipelineCache\n");
        VulkanReplayConsumer::Process_vkCreatePipelineCache(call_info, returnValue, device, pCreateInfo, pAllocator, pPipelineCache);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreatePipelineCache\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyPipelineCache(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            pipelineCache,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    // Skip for loop iterations 1-(n-1).
    // Skip if looping and if not final iteration
    // Execute if pipelineCache is in allocatedLoopResources

    // Call Process_vkDestroyPipelineCache if:
    //    We are not looping
    //    We are looping and pipelineCache is in allocatedLoopResources
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        inAllocatedLoopResources(pipelineCache) ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyPipelineCache\n");
        VulkanReplayConsumer::Process_vkDestroyPipelineCache(call_info, device, pipelineCache, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyPipelineCache\n");
    }
    // Remove pipelineCache from allocatedLoopResources
    if (inAllocatedLoopResources(pipelineCache))
    {
        allocatedLoopResources.erase(pipelineCache);
    }
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreatePipelineLayout(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkPipelineLayoutCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkPipelineLayout>*     pPipelineLayout)
{
    format::HandleId handle = *pPipelineLayout->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreatePipelineLayout\n");
        VulkanReplayConsumer::Process_vkCreatePipelineLayout(call_info, returnValue, device, pCreateInfo, pAllocator, pPipelineLayout);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreatePipelineLayout\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyPipelineLayout(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            pipelineLayout,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    // Skip for loop iterations 1-(n-1).
    // Skip if looping and if not final iteration
    // Execute if pipelineLayout is in allocatedLoopResources

    // Call Process_vkDestroyPipelineLayout if:
    //    We are not looping
    //    We are looping and pipelineLayout is in allocatedLoopResources
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        inAllocatedLoopResources(pipelineLayout) ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyPipelineLayout\n");
        VulkanReplayConsumer::Process_vkDestroyPipelineLayout(call_info, device, pipelineLayout, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyPipelineLayout\n");
    }
    // Remove pipelineLayout from allocatedLoopResources
    if (inAllocatedLoopResources(pipelineLayout))
    {
        allocatedLoopResources.erase(pipelineLayout);
    }
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateSampler(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkSamplerCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSampler>*            pSampler)
{
    format::HandleId handle = *pSampler->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateSampler\n");
        VulkanReplayConsumer::Process_vkCreateSampler(call_info, returnValue, device, pCreateInfo, pAllocator, pSampler);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateSampler\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroySampler(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            sampler,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    // Skip for loop iterations 1-(n-1).
    // Skip if looping and if not final iteration
    // Execute if sampler is in allocatedLoopResources

    // Call Process_vkDestroySampler if:
    //    We are not looping
    //    We are looping and sampler is in allocatedLoopResources
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        inAllocatedLoopResources(sampler) ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroySampler\n");
        VulkanReplayConsumer::Process_vkDestroySampler(call_info, device, sampler, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroySampler\n");
    }
    // Remove sampler from allocatedLoopResources
    if (inAllocatedLoopResources(sampler))
    {
        allocatedLoopResources.erase(sampler);
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
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateDescriptorSetLayout\n");
        VulkanReplayConsumer::Process_vkCreateDescriptorSetLayout(call_info, returnValue, device, pCreateInfo, pAllocator, pSetLayout);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
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
    // Execute if descriptorSetLayout is in allocatedLoopResources

    // Call Process_vkDestroyDescriptorSetLayout if:
    //    We are not looping
    //    We are looping and descriptorSetLayout is in allocatedLoopResources
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        inAllocatedLoopResources(descriptorSetLayout) ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyDescriptorSetLayout\n");
        VulkanReplayConsumer::Process_vkDestroyDescriptorSetLayout(call_info, device, descriptorSetLayout, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyDescriptorSetLayout\n");
    }
    // Remove descriptorSetLayout from allocatedLoopResources
    if (inAllocatedLoopResources(descriptorSetLayout))
    {
        allocatedLoopResources.erase(descriptorSetLayout);
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
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateDescriptorPool\n");
        VulkanReplayConsumer::Process_vkCreateDescriptorPool(call_info, returnValue, device, pCreateInfo, pAllocator, pDescriptorPool);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
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
    // Execute if descriptorPool is in allocatedLoopResources

    // Call Process_vkDestroyDescriptorPool if:
    //    We are not looping
    //    We are looping and descriptorPool is in allocatedLoopResources
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        inAllocatedLoopResources(descriptorPool) ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyDescriptorPool\n");
        VulkanReplayConsumer::Process_vkDestroyDescriptorPool(call_info, device, descriptorPool, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyDescriptorPool\n");
    }
    // Remove descriptorPool from allocatedLoopResources
    if (inAllocatedLoopResources(descriptorPool))
    {
        allocatedLoopResources.erase(descriptorPool);
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
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateFramebuffer\n");
        VulkanReplayConsumer::Process_vkCreateFramebuffer(call_info, returnValue, device, pCreateInfo, pAllocator, pFramebuffer);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
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
    // Execute if framebuffer is in allocatedLoopResources

    // Call Process_vkDestroyFramebuffer if:
    //    We are not looping
    //    We are looping and framebuffer is in allocatedLoopResources
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        inAllocatedLoopResources(framebuffer) ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyFramebuffer\n");
        VulkanReplayConsumer::Process_vkDestroyFramebuffer(call_info, device, framebuffer, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyFramebuffer\n");
    }
    // Remove framebuffer from allocatedLoopResources
    if (inAllocatedLoopResources(framebuffer))
    {
        allocatedLoopResources.erase(framebuffer);
    }
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateRenderPass(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkRenderPassCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkRenderPass>*         pRenderPass)
{
    format::HandleId handle = *pRenderPass->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateRenderPass\n");
        VulkanReplayConsumer::Process_vkCreateRenderPass(call_info, returnValue, device, pCreateInfo, pAllocator, pRenderPass);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateRenderPass\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyRenderPass(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            renderPass,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    // Skip for loop iterations 1-(n-1).
    // Skip if looping and if not final iteration
    // Execute if renderPass is in allocatedLoopResources

    // Call Process_vkDestroyRenderPass if:
    //    We are not looping
    //    We are looping and renderPass is in allocatedLoopResources
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        inAllocatedLoopResources(renderPass) ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyRenderPass\n");
        VulkanReplayConsumer::Process_vkDestroyRenderPass(call_info, device, renderPass, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyRenderPass\n");
    }
    // Remove renderPass from allocatedLoopResources
    if (inAllocatedLoopResources(renderPass))
    {
        allocatedLoopResources.erase(renderPass);
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
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateDescriptorUpdateTemplate\n");
        VulkanReplayConsumer::Process_vkCreateDescriptorUpdateTemplate(call_info, returnValue, device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
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
    // Execute if descriptorUpdateTemplate is in allocatedLoopResources

    // Call Process_vkDestroyDescriptorUpdateTemplate if:
    //    We are not looping
    //    We are looping and descriptorUpdateTemplate is in allocatedLoopResources
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        inAllocatedLoopResources(descriptorUpdateTemplate) ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyDescriptorUpdateTemplate\n");
        VulkanReplayConsumer::Process_vkDestroyDescriptorUpdateTemplate(call_info, device, descriptorUpdateTemplate, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyDescriptorUpdateTemplate\n");
    }
    // Remove descriptorUpdateTemplate from allocatedLoopResources
    if (inAllocatedLoopResources(descriptorUpdateTemplate))
    {
        allocatedLoopResources.erase(descriptorUpdateTemplate);
    }
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateSamplerYcbcrConversion(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkSamplerYcbcrConversionCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSamplerYcbcrConversion>* pYcbcrConversion)
{
    format::HandleId handle = *pYcbcrConversion->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateSamplerYcbcrConversion\n");
        VulkanReplayConsumer::Process_vkCreateSamplerYcbcrConversion(call_info, returnValue, device, pCreateInfo, pAllocator, pYcbcrConversion);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateSamplerYcbcrConversion\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroySamplerYcbcrConversion(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            ycbcrConversion,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    // Skip for loop iterations 1-(n-1).
    // Skip if looping and if not final iteration
    // Execute if ycbcrConversion is in allocatedLoopResources

    // Call Process_vkDestroySamplerYcbcrConversion if:
    //    We are not looping
    //    We are looping and ycbcrConversion is in allocatedLoopResources
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        inAllocatedLoopResources(ycbcrConversion) ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroySamplerYcbcrConversion\n");
        VulkanReplayConsumer::Process_vkDestroySamplerYcbcrConversion(call_info, device, ycbcrConversion, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroySamplerYcbcrConversion\n");
    }
    // Remove ycbcrConversion from allocatedLoopResources
    if (inAllocatedLoopResources(ycbcrConversion))
    {
        allocatedLoopResources.erase(ycbcrConversion);
    }
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateRenderPass2(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkRenderPassCreateInfo2>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkRenderPass>*         pRenderPass)
{
    format::HandleId handle = *pRenderPass->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateRenderPass2\n");
        VulkanReplayConsumer::Process_vkCreateRenderPass2(call_info, returnValue, device, pCreateInfo, pAllocator, pRenderPass);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateRenderPass2\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreatePrivateDataSlot(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkPrivateDataSlotCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkPrivateDataSlot>*    pPrivateDataSlot)
{
    format::HandleId handle = *pPrivateDataSlot->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreatePrivateDataSlot\n");
        VulkanReplayConsumer::Process_vkCreatePrivateDataSlot(call_info, returnValue, device, pCreateInfo, pAllocator, pPrivateDataSlot);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreatePrivateDataSlot\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyPrivateDataSlot(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            privateDataSlot,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    // Skip for loop iterations 1-(n-1).
    // Skip if looping and if not final iteration
    // Execute if privateDataSlot is in allocatedLoopResources

    // Call Process_vkDestroyPrivateDataSlot if:
    //    We are not looping
    //    We are looping and privateDataSlot is in allocatedLoopResources
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        inAllocatedLoopResources(privateDataSlot) ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyPrivateDataSlot\n");
        VulkanReplayConsumer::Process_vkDestroyPrivateDataSlot(call_info, device, privateDataSlot, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyPrivateDataSlot\n");
    }
    // Remove privateDataSlot from allocatedLoopResources
    if (inAllocatedLoopResources(privateDataSlot))
    {
        allocatedLoopResources.erase(privateDataSlot);
    }
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroySurfaceKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            instance,
    format::HandleId                            surface,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    // Skip for loop iterations 1-(n-1).
    // Skip if looping and if not final iteration
    // Execute if surface is in allocatedLoopResources

    // Call Process_vkDestroySurfaceKHR if:
    //    We are not looping
    //    We are looping and surface is in allocatedLoopResources
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        inAllocatedLoopResources(surface) ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroySurfaceKHR\n");
        VulkanReplayConsumer::Process_vkDestroySurfaceKHR(call_info, instance, surface, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroySurfaceKHR\n");
    }
    // Remove surface from allocatedLoopResources
    if (inAllocatedLoopResources(surface))
    {
        allocatedLoopResources.erase(surface);
    }
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateSwapchainKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkSwapchainCreateInfoKHR>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSwapchainKHR>*       pSwapchain)
{
    format::HandleId handle = *pSwapchain->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateSwapchainKHR\n");
        VulkanReplayConsumer::Process_vkCreateSwapchainKHR(call_info, returnValue, device, pCreateInfo, pAllocator, pSwapchain);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateSwapchainKHR\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroySwapchainKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            swapchain,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    // Skip for loop iterations 1-(n-1).
    // Skip if looping and if not final iteration
    // Execute if swapchain is in allocatedLoopResources

    // Call Process_vkDestroySwapchainKHR if:
    //    We are not looping
    //    We are looping and swapchain is in allocatedLoopResources
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        inAllocatedLoopResources(swapchain) ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroySwapchainKHR\n");
        VulkanReplayConsumer::Process_vkDestroySwapchainKHR(call_info, device, swapchain, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroySwapchainKHR\n");
    }
    // Remove swapchain from allocatedLoopResources
    if (inAllocatedLoopResources(swapchain))
    {
        allocatedLoopResources.erase(swapchain);
    }
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateDisplayModeKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            display,
    StructPointerDecoder<Decoded_VkDisplayModeCreateInfoKHR>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkDisplayModeKHR>*     pMode)
{
    format::HandleId handle = *pMode->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateDisplayModeKHR\n");
        VulkanReplayConsumer::Process_vkCreateDisplayModeKHR(call_info, returnValue, physicalDevice, display, pCreateInfo, pAllocator, pMode);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateDisplayModeKHR\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateDisplayPlaneSurfaceKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkDisplaySurfaceCreateInfoKHR>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    format::HandleId handle = *pSurface->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateDisplayPlaneSurfaceKHR\n");
        VulkanReplayConsumer::Process_vkCreateDisplayPlaneSurfaceKHR(call_info, returnValue, instance, pCreateInfo, pAllocator, pSurface);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateDisplayPlaneSurfaceKHR\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateXlibSurfaceKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkXlibSurfaceCreateInfoKHR>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    format::HandleId handle = *pSurface->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateXlibSurfaceKHR\n");
        VulkanReplayConsumer::Process_vkCreateXlibSurfaceKHR(call_info, returnValue, instance, pCreateInfo, pAllocator, pSurface);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateXlibSurfaceKHR\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateXcbSurfaceKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkXcbSurfaceCreateInfoKHR>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    format::HandleId handle = *pSurface->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateXcbSurfaceKHR\n");
        VulkanReplayConsumer::Process_vkCreateXcbSurfaceKHR(call_info, returnValue, instance, pCreateInfo, pAllocator, pSurface);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateXcbSurfaceKHR\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateWaylandSurfaceKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkWaylandSurfaceCreateInfoKHR>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    format::HandleId handle = *pSurface->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateWaylandSurfaceKHR\n");
        VulkanReplayConsumer::Process_vkCreateWaylandSurfaceKHR(call_info, returnValue, instance, pCreateInfo, pAllocator, pSurface);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateWaylandSurfaceKHR\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateAndroidSurfaceKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkAndroidSurfaceCreateInfoKHR>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    format::HandleId handle = *pSurface->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateAndroidSurfaceKHR\n");
        VulkanReplayConsumer::Process_vkCreateAndroidSurfaceKHR(call_info, returnValue, instance, pCreateInfo, pAllocator, pSurface);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateAndroidSurfaceKHR\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateWin32SurfaceKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkWin32SurfaceCreateInfoKHR>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    format::HandleId handle = *pSurface->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateWin32SurfaceKHR\n");
        VulkanReplayConsumer::Process_vkCreateWin32SurfaceKHR(call_info, returnValue, instance, pCreateInfo, pAllocator, pSurface);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateWin32SurfaceKHR\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateVideoSessionKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkVideoSessionCreateInfoKHR>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkVideoSessionKHR>*    pVideoSession)
{
    format::HandleId handle = *pVideoSession->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateVideoSessionKHR\n");
        VulkanReplayConsumer::Process_vkCreateVideoSessionKHR(call_info, returnValue, device, pCreateInfo, pAllocator, pVideoSession);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateVideoSessionKHR\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyVideoSessionKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            videoSession,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    // Skip for loop iterations 1-(n-1).
    // Skip if looping and if not final iteration
    // Execute if videoSession is in allocatedLoopResources

    // Call Process_vkDestroyVideoSessionKHR if:
    //    We are not looping
    //    We are looping and videoSession is in allocatedLoopResources
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        inAllocatedLoopResources(videoSession) ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyVideoSessionKHR\n");
        VulkanReplayConsumer::Process_vkDestroyVideoSessionKHR(call_info, device, videoSession, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyVideoSessionKHR\n");
    }
    // Remove videoSession from allocatedLoopResources
    if (inAllocatedLoopResources(videoSession))
    {
        allocatedLoopResources.erase(videoSession);
    }
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateVideoSessionParametersKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkVideoSessionParametersCreateInfoKHR>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkVideoSessionParametersKHR>* pVideoSessionParameters)
{
    format::HandleId handle = *pVideoSessionParameters->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateVideoSessionParametersKHR\n");
        VulkanReplayConsumer::Process_vkCreateVideoSessionParametersKHR(call_info, returnValue, device, pCreateInfo, pAllocator, pVideoSessionParameters);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateVideoSessionParametersKHR\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyVideoSessionParametersKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            videoSessionParameters,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    // Skip for loop iterations 1-(n-1).
    // Skip if looping and if not final iteration
    // Execute if videoSessionParameters is in allocatedLoopResources

    // Call Process_vkDestroyVideoSessionParametersKHR if:
    //    We are not looping
    //    We are looping and videoSessionParameters is in allocatedLoopResources
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        inAllocatedLoopResources(videoSessionParameters) ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyVideoSessionParametersKHR\n");
        VulkanReplayConsumer::Process_vkDestroyVideoSessionParametersKHR(call_info, device, videoSessionParameters, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyVideoSessionParametersKHR\n");
    }
    // Remove videoSessionParameters from allocatedLoopResources
    if (inAllocatedLoopResources(videoSessionParameters))
    {
        allocatedLoopResources.erase(videoSessionParameters);
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
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateDescriptorUpdateTemplateKHR\n");
        VulkanReplayConsumer::Process_vkCreateDescriptorUpdateTemplateKHR(call_info, returnValue, device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
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
    // Execute if descriptorUpdateTemplate is in allocatedLoopResources

    // Call Process_vkDestroyDescriptorUpdateTemplateKHR if:
    //    We are not looping
    //    We are looping and descriptorUpdateTemplate is in allocatedLoopResources
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        inAllocatedLoopResources(descriptorUpdateTemplate) ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyDescriptorUpdateTemplateKHR\n");
        VulkanReplayConsumer::Process_vkDestroyDescriptorUpdateTemplateKHR(call_info, device, descriptorUpdateTemplate, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyDescriptorUpdateTemplateKHR\n");
    }
    // Remove descriptorUpdateTemplate from allocatedLoopResources
    if (inAllocatedLoopResources(descriptorUpdateTemplate))
    {
        allocatedLoopResources.erase(descriptorUpdateTemplate);
    }
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateRenderPass2KHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkRenderPassCreateInfo2>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkRenderPass>*         pRenderPass)
{
    format::HandleId handle = *pRenderPass->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateRenderPass2KHR\n");
        VulkanReplayConsumer::Process_vkCreateRenderPass2KHR(call_info, returnValue, device, pCreateInfo, pAllocator, pRenderPass);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateRenderPass2KHR\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateSamplerYcbcrConversionKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkSamplerYcbcrConversionCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSamplerYcbcrConversion>* pYcbcrConversion)
{
    format::HandleId handle = *pYcbcrConversion->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateSamplerYcbcrConversionKHR\n");
        VulkanReplayConsumer::Process_vkCreateSamplerYcbcrConversionKHR(call_info, returnValue, device, pCreateInfo, pAllocator, pYcbcrConversion);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateSamplerYcbcrConversionKHR\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroySamplerYcbcrConversionKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            ycbcrConversion,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    // Skip for loop iterations 1-(n-1).
    // Skip if looping and if not final iteration
    // Execute if ycbcrConversion is in allocatedLoopResources

    // Call Process_vkDestroySamplerYcbcrConversionKHR if:
    //    We are not looping
    //    We are looping and ycbcrConversion is in allocatedLoopResources
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        inAllocatedLoopResources(ycbcrConversion) ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroySamplerYcbcrConversionKHR\n");
        VulkanReplayConsumer::Process_vkDestroySamplerYcbcrConversionKHR(call_info, device, ycbcrConversion, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroySamplerYcbcrConversionKHR\n");
    }
    // Remove ycbcrConversion from allocatedLoopResources
    if (inAllocatedLoopResources(ycbcrConversion))
    {
        allocatedLoopResources.erase(ycbcrConversion);
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
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateDeferredOperationKHR\n");
        VulkanReplayConsumer::Process_vkCreateDeferredOperationKHR(call_info, returnValue, device, pAllocator, pDeferredOperation);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
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
    // Execute if operation is in allocatedLoopResources

    // Call Process_vkDestroyDeferredOperationKHR if:
    //    We are not looping
    //    We are looping and operation is in allocatedLoopResources
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        inAllocatedLoopResources(operation) ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyDeferredOperationKHR\n");
        VulkanReplayConsumer::Process_vkDestroyDeferredOperationKHR(call_info, device, operation, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyDeferredOperationKHR\n");
    }
    // Remove operation from allocatedLoopResources
    if (inAllocatedLoopResources(operation))
    {
        allocatedLoopResources.erase(operation);
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
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateDebugReportCallbackEXT\n");
        VulkanReplayConsumer::Process_vkCreateDebugReportCallbackEXT(call_info, returnValue, instance, pCreateInfo, pAllocator, pCallback);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
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
    // Execute if callback is in allocatedLoopResources

    // Call Process_vkDestroyDebugReportCallbackEXT if:
    //    We are not looping
    //    We are looping and callback is in allocatedLoopResources
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        inAllocatedLoopResources(callback) ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyDebugReportCallbackEXT\n");
        VulkanReplayConsumer::Process_vkDestroyDebugReportCallbackEXT(call_info, instance, callback, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyDebugReportCallbackEXT\n");
    }
    // Remove callback from allocatedLoopResources
    if (inAllocatedLoopResources(callback))
    {
        allocatedLoopResources.erase(callback);
    }
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateStreamDescriptorSurfaceGGP(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkStreamDescriptorSurfaceCreateInfoGGP>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    format::HandleId handle = *pSurface->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateStreamDescriptorSurfaceGGP\n");
        VulkanReplayConsumer::Process_vkCreateStreamDescriptorSurfaceGGP(call_info, returnValue, instance, pCreateInfo, pAllocator, pSurface);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateStreamDescriptorSurfaceGGP\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateViSurfaceNN(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkViSurfaceCreateInfoNN>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    format::HandleId handle = *pSurface->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateViSurfaceNN\n");
        VulkanReplayConsumer::Process_vkCreateViSurfaceNN(call_info, returnValue, instance, pCreateInfo, pAllocator, pSurface);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateViSurfaceNN\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateIOSSurfaceMVK(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkIOSSurfaceCreateInfoMVK>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    format::HandleId handle = *pSurface->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateIOSSurfaceMVK\n");
        VulkanReplayConsumer::Process_vkCreateIOSSurfaceMVK(call_info, returnValue, instance, pCreateInfo, pAllocator, pSurface);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateIOSSurfaceMVK\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateMacOSSurfaceMVK(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkMacOSSurfaceCreateInfoMVK>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    format::HandleId handle = *pSurface->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateMacOSSurfaceMVK\n");
        VulkanReplayConsumer::Process_vkCreateMacOSSurfaceMVK(call_info, returnValue, instance, pCreateInfo, pAllocator, pSurface);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateMacOSSurfaceMVK\n");
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
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateDebugUtilsMessengerEXT\n");
        VulkanReplayConsumer::Process_vkCreateDebugUtilsMessengerEXT(call_info, returnValue, instance, pCreateInfo, pAllocator, pMessenger);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
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
    // Execute if messenger is in allocatedLoopResources

    // Call Process_vkDestroyDebugUtilsMessengerEXT if:
    //    We are not looping
    //    We are looping and messenger is in allocatedLoopResources
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        inAllocatedLoopResources(messenger) ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyDebugUtilsMessengerEXT\n");
        VulkanReplayConsumer::Process_vkDestroyDebugUtilsMessengerEXT(call_info, instance, messenger, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyDebugUtilsMessengerEXT\n");
    }
    // Remove messenger from allocatedLoopResources
    if (inAllocatedLoopResources(messenger))
    {
        allocatedLoopResources.erase(messenger);
    }
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateValidationCacheEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkValidationCacheCreateInfoEXT>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkValidationCacheEXT>* pValidationCache)
{
    format::HandleId handle = *pValidationCache->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateValidationCacheEXT\n");
        VulkanReplayConsumer::Process_vkCreateValidationCacheEXT(call_info, returnValue, device, pCreateInfo, pAllocator, pValidationCache);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateValidationCacheEXT\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyValidationCacheEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            validationCache,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    // Skip for loop iterations 1-(n-1).
    // Skip if looping and if not final iteration
    // Execute if validationCache is in allocatedLoopResources

    // Call Process_vkDestroyValidationCacheEXT if:
    //    We are not looping
    //    We are looping and validationCache is in allocatedLoopResources
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        inAllocatedLoopResources(validationCache) ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyValidationCacheEXT\n");
        VulkanReplayConsumer::Process_vkDestroyValidationCacheEXT(call_info, device, validationCache, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyValidationCacheEXT\n");
    }
    // Remove validationCache from allocatedLoopResources
    if (inAllocatedLoopResources(validationCache))
    {
        allocatedLoopResources.erase(validationCache);
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
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateAccelerationStructureNV\n");
        VulkanReplayConsumer::Process_vkCreateAccelerationStructureNV(call_info, returnValue, device, pCreateInfo, pAllocator, pAccelerationStructure);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
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
    // Execute if accelerationStructure is in allocatedLoopResources

    // Call Process_vkDestroyAccelerationStructureNV if:
    //    We are not looping
    //    We are looping and accelerationStructure is in allocatedLoopResources
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        inAllocatedLoopResources(accelerationStructure) ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyAccelerationStructureNV\n");
        VulkanReplayConsumer::Process_vkDestroyAccelerationStructureNV(call_info, device, accelerationStructure, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyAccelerationStructureNV\n");
    }
    // Remove accelerationStructure from allocatedLoopResources
    if (inAllocatedLoopResources(accelerationStructure))
    {
        allocatedLoopResources.erase(accelerationStructure);
    }
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateImagePipeSurfaceFUCHSIA(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkImagePipeSurfaceCreateInfoFUCHSIA>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    format::HandleId handle = *pSurface->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateImagePipeSurfaceFUCHSIA\n");
        VulkanReplayConsumer::Process_vkCreateImagePipeSurfaceFUCHSIA(call_info, returnValue, instance, pCreateInfo, pAllocator, pSurface);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateImagePipeSurfaceFUCHSIA\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateMetalSurfaceEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkMetalSurfaceCreateInfoEXT>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    format::HandleId handle = *pSurface->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateMetalSurfaceEXT\n");
        VulkanReplayConsumer::Process_vkCreateMetalSurfaceEXT(call_info, returnValue, instance, pCreateInfo, pAllocator, pSurface);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateMetalSurfaceEXT\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateHeadlessSurfaceEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkHeadlessSurfaceCreateInfoEXT>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    format::HandleId handle = *pSurface->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateHeadlessSurfaceEXT\n");
        VulkanReplayConsumer::Process_vkCreateHeadlessSurfaceEXT(call_info, returnValue, instance, pCreateInfo, pAllocator, pSurface);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateHeadlessSurfaceEXT\n");
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
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateIndirectCommandsLayoutNV\n");
        VulkanReplayConsumer::Process_vkCreateIndirectCommandsLayoutNV(call_info, returnValue, device, pCreateInfo, pAllocator, pIndirectCommandsLayout);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
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
    // Execute if indirectCommandsLayout is in allocatedLoopResources

    // Call Process_vkDestroyIndirectCommandsLayoutNV if:
    //    We are not looping
    //    We are looping and indirectCommandsLayout is in allocatedLoopResources
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        inAllocatedLoopResources(indirectCommandsLayout) ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyIndirectCommandsLayoutNV\n");
        VulkanReplayConsumer::Process_vkDestroyIndirectCommandsLayoutNV(call_info, device, indirectCommandsLayout, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyIndirectCommandsLayoutNV\n");
    }
    // Remove indirectCommandsLayout from allocatedLoopResources
    if (inAllocatedLoopResources(indirectCommandsLayout))
    {
        allocatedLoopResources.erase(indirectCommandsLayout);
    }
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreatePrivateDataSlotEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkPrivateDataSlotCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkPrivateDataSlot>*    pPrivateDataSlot)
{
    format::HandleId handle = *pPrivateDataSlot->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreatePrivateDataSlotEXT\n");
        VulkanReplayConsumer::Process_vkCreatePrivateDataSlotEXT(call_info, returnValue, device, pCreateInfo, pAllocator, pPrivateDataSlot);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreatePrivateDataSlotEXT\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyPrivateDataSlotEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            privateDataSlot,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    // Skip for loop iterations 1-(n-1).
    // Skip if looping and if not final iteration
    // Execute if privateDataSlot is in allocatedLoopResources

    // Call Process_vkDestroyPrivateDataSlotEXT if:
    //    We are not looping
    //    We are looping and privateDataSlot is in allocatedLoopResources
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        inAllocatedLoopResources(privateDataSlot) ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyPrivateDataSlotEXT\n");
        VulkanReplayConsumer::Process_vkDestroyPrivateDataSlotEXT(call_info, device, privateDataSlot, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyPrivateDataSlotEXT\n");
    }
    // Remove privateDataSlot from allocatedLoopResources
    if (inAllocatedLoopResources(privateDataSlot))
    {
        allocatedLoopResources.erase(privateDataSlot);
    }
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateDirectFBSurfaceEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkDirectFBSurfaceCreateInfoEXT>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    format::HandleId handle = *pSurface->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateDirectFBSurfaceEXT\n");
        VulkanReplayConsumer::Process_vkCreateDirectFBSurfaceEXT(call_info, returnValue, instance, pCreateInfo, pAllocator, pSurface);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateDirectFBSurfaceEXT\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateScreenSurfaceQNX(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkScreenSurfaceCreateInfoQNX>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    format::HandleId handle = *pSurface->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateScreenSurfaceQNX\n");
        VulkanReplayConsumer::Process_vkCreateScreenSurfaceQNX(call_info, returnValue, instance, pCreateInfo, pAllocator, pSurface);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateScreenSurfaceQNX\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateMicromapEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkMicromapCreateInfoEXT>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkMicromapEXT>*        pMicromap)
{
    format::HandleId handle = *pMicromap->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateMicromapEXT\n");
        VulkanReplayConsumer::Process_vkCreateMicromapEXT(call_info, returnValue, device, pCreateInfo, pAllocator, pMicromap);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateMicromapEXT\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyMicromapEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            micromap,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    // Skip for loop iterations 1-(n-1).
    // Skip if looping and if not final iteration
    // Execute if micromap is in allocatedLoopResources

    // Call Process_vkDestroyMicromapEXT if:
    //    We are not looping
    //    We are looping and micromap is in allocatedLoopResources
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        inAllocatedLoopResources(micromap) ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyMicromapEXT\n");
        VulkanReplayConsumer::Process_vkDestroyMicromapEXT(call_info, device, micromap, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyMicromapEXT\n");
    }
    // Remove micromap from allocatedLoopResources
    if (inAllocatedLoopResources(micromap))
    {
        allocatedLoopResources.erase(micromap);
    }
}

void VulkanReplayFrameLoopConsumerBase::Process_vkCreateOpticalFlowSessionNV(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkOpticalFlowSessionCreateInfoNV>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkOpticalFlowSessionNV>* pSession)
{
    format::HandleId handle = *pSession->GetPointer();

    // Pass the call along if we are not looping or
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateOpticalFlowSessionNV\n");
        VulkanReplayConsumer::Process_vkCreateOpticalFlowSessionNV(call_info, returnValue, device, pCreateInfo, pAllocator, pSession);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
        }
    } else
        printf("@@Skipping Process_vkCreateOpticalFlowSessionNV\n");
}

void VulkanReplayFrameLoopConsumerBase::Process_vkDestroyOpticalFlowSessionNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            session,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    // Skip for loop iterations 1-(n-1).
    // Skip if looping and if not final iteration
    // Execute if session is in allocatedLoopResources

    // Call Process_vkDestroyOpticalFlowSessionNV if:
    //    We are not looping
    //    We are looping and session is in allocatedLoopResources
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        inAllocatedLoopResources(session) ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyOpticalFlowSessionNV\n");
        VulkanReplayConsumer::Process_vkDestroyOpticalFlowSessionNV(call_info, device, session, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyOpticalFlowSessionNV\n");
    }
    // Remove session from allocatedLoopResources
    if (inAllocatedLoopResources(session))
    {
        allocatedLoopResources.erase(session);
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
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateDataGraphPipelineSessionARM\n");
        VulkanReplayConsumer::Process_vkCreateDataGraphPipelineSessionARM(call_info, returnValue, device, pCreateInfo, pAllocator, pSession);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
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
    // Execute if session is in allocatedLoopResources

    // Call Process_vkDestroyDataGraphPipelineSessionARM if:
    //    We are not looping
    //    We are looping and session is in allocatedLoopResources
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        inAllocatedLoopResources(session) ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyDataGraphPipelineSessionARM\n");
        VulkanReplayConsumer::Process_vkDestroyDataGraphPipelineSessionARM(call_info, device, session, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyDataGraphPipelineSessionARM\n");
    }
    // Remove session from allocatedLoopResources
    if (inAllocatedLoopResources(session))
    {
        allocatedLoopResources.erase(session);
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
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateIndirectCommandsLayoutEXT\n");
        VulkanReplayConsumer::Process_vkCreateIndirectCommandsLayoutEXT(call_info, returnValue, device, pCreateInfo, pAllocator, pIndirectCommandsLayout);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
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
    // Execute if indirectCommandsLayout is in allocatedLoopResources

    // Call Process_vkDestroyIndirectCommandsLayoutEXT if:
    //    We are not looping
    //    We are looping and indirectCommandsLayout is in allocatedLoopResources
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        inAllocatedLoopResources(indirectCommandsLayout) ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyIndirectCommandsLayoutEXT\n");
        VulkanReplayConsumer::Process_vkDestroyIndirectCommandsLayoutEXT(call_info, device, indirectCommandsLayout, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyIndirectCommandsLayoutEXT\n");
    }
    // Remove indirectCommandsLayout from allocatedLoopResources
    if (inAllocatedLoopResources(indirectCommandsLayout))
    {
        allocatedLoopResources.erase(indirectCommandsLayout);
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
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateIndirectExecutionSetEXT\n");
        VulkanReplayConsumer::Process_vkCreateIndirectExecutionSetEXT(call_info, returnValue, device, pCreateInfo, pAllocator, pIndirectExecutionSet);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
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
    // Execute if indirectExecutionSet is in allocatedLoopResources

    // Call Process_vkDestroyIndirectExecutionSetEXT if:
    //    We are not looping
    //    We are looping and indirectExecutionSet is in allocatedLoopResources
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        inAllocatedLoopResources(indirectExecutionSet) ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyIndirectExecutionSetEXT\n");
        VulkanReplayConsumer::Process_vkDestroyIndirectExecutionSetEXT(call_info, device, indirectExecutionSet, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyIndirectExecutionSetEXT\n");
    }
    // Remove indirectExecutionSet from allocatedLoopResources
    if (inAllocatedLoopResources(indirectExecutionSet))
    {
        allocatedLoopResources.erase(indirectExecutionSet);
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
    // if we are looping and the handle is not in allocatedLoopResources
    if (!getFrameLoopInfo().IsLooping() || !inAllocatedLoopResources(handle))
    {
        printf("@@Executing Process_vkCreateAccelerationStructureKHR\n");
        VulkanReplayConsumer::Process_vkCreateAccelerationStructureKHR(call_info, returnValue, device, pCreateInfo, pAllocator, pAccelerationStructure);
        // If we are looping, save the handle in allocatedLoopResources
        if (getFrameLoopInfo().IsLooping())
        {
            allocatedLoopResources.insert(handle);
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
    // Execute if accelerationStructure is in allocatedLoopResources

    // Call Process_vkDestroyAccelerationStructureKHR if:
    //    We are not looping
    //    We are looping and accelerationStructure is in allocatedLoopResources
    //    We are looping and this is the last iteration
    if (!getFrameLoopInfo().IsLooping() ||
        inAllocatedLoopResources(accelerationStructure) ||
        getFrameLoopInfo().IsFinalIteration())
    {
        printf("@@Executing Process_vkDestroyAccelerationStructureKHR\n");
        VulkanReplayConsumer::Process_vkDestroyAccelerationStructureKHR(call_info, device, accelerationStructure, pAllocator);
    }
    else
    {
        printf("@@Skipping Process_vkDestroyAccelerationStructureKHR\n");
    }
    // Remove accelerationStructure from allocatedLoopResources
    if (inAllocatedLoopResources(accelerationStructure))
    {
        allocatedLoopResources.erase(accelerationStructure);
    }
}

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)
