Overall design

During replay, each time a timeline semaphore is signaled, keep track of the maximum signal value for that semaphore. The next time there is a call to wait on that semaphore that should return VK_SUCCESS, modify the wait value to be equal to the maximum signal value so far for that semaphore.

Doing this means that a wait on a semaphore won't be relying on the semaphore being signaled by some other library, it will only wait for signals from Vulkan API calls that are part of the replay.

Pretty simple idea, but it affects lots of replay code. I've been looking at the Vulkan api entry points to determine which ones need to change.  I have a list, I'm not sure if it is complete/correct. Also, timeline semaphores can be modifed from pNext structures associated with semaphore api calls. I have been identifying those structures.

This proposal would work with old captures since all changes are in replay. A metadata command with semaphore values would not need to be added to the capture file. The replay/capture semaphore code doesn't have to do anything special for calls that import or export semaphores. The only downside is that semaphores that are never exported will be processed in replay just like exported semaphores, so a few extra instructions will be executed in processing them, which I think would be noise in the noise and completedly undetectable in performance measurements.  Treating unexported semaphores the same as exported semaphores makes the code simpler.

I think the above can be modified/adapted for boolean semaphores.

====================================================
During replay:

Monitor these vulkan api calls that pass a semaphore in or out:

    vkCreateSemaphore
    vkDestroySemaphore
    vkWaitSemaphoresKHR
    vkSignalSemaphoresKHR
    vkSignalSemaphore

Monitor occurences of these api call that have struct args containing semaphores:

    vkQueueSubmit          struct VkSubmitInfo
    vkQueueSubmit2         struct VkSubmitInfo2
    vkQueueBindSparse      struct VkBindSparseInfo
    vkAcquireNextImageKHR  struct VkAcquireNextImageInfoKHR
    vkAcquireNextImage2KHR struct VkAcquireNextImage2KHR

Monitor occurences of these structs, either as an arg to above or as a pNext struct:
    
    struct VkD3D12FenceSubmitInfoKHR via pnext chain of vksumbitinfo
    struct VkDeviceGroupSubmitInfo via pnext chain of vksubmitinfo
    struct VkTimelineSemaphoreSubmitInfo via pnext chain of struct VkSubmitInfo in vkQueueSubmit
                                         via pnext chain of struct VkBindSparseInfo in vkQueueBindSparse
    struct VkSemaphoreWaitInfo/VkSemaphoreWaitInfoKHR     (sem must be timeline)
    struct VkSemaphoreSignalInfo
    struct VkSemaphoreSubmitInfo/VkSemaphoreSubmitInfoKHR
    struct VkPresentInfoKHR
    struct VkSemaphoreTypeCreateInfo



For timeline semaphores:
   if an opertion is done that will end with settting a sem to a value, we save that value
   When a wait on that semaphore occurs, we wait for the value to be the max value saved for that semaphore. If the
   max value is 0, we skip the wait.

For boolean semaphores:
   if an opertion is done that signals a sem, we save the fact that a sem signal has been queued
   When a wait on that semaphore occurs, if the sem signal has been queued, we wait for the semaphore, otherwise we skip the wait.


Data structures:
    std::map<VkSemaphore, uint32_t> semTrackTimelineValues;
    std::map<VkSemaphore, bool> semTrackBooleanValues;

Add to vkCreateSemaphore:
    Timeline:
        semTrackTimelineValues[sem] = 0;
    Boolean:
        semTrackBooleanValues[sem] = false;

Add to vkQueueSubmit (and other funcs that signal/set semaphores):
     Timeline
          if (semTrackTimelineValues[sem] < signalValue)
              semTrackTimelineValues[sem] = signalValue;
     Timeline
          semTrackBooleanValues[sem] = true;
===========================================================================================================================

Vulkan_core structs with VkSemaphore
    struct VkSubmitInfo (wait/signal)                     (sem must boolean)
    struct VkBindSparseInfo (wait/signal)
    struct VkSemaphoreWaitInfo/VkSemaphoreWaitInfoKHR     (sem must be timeline)
    struct VkSemaphoreSignalInfo
    struct VkSemaphoreSubmitInfo/VkSemaphoreSubmitInfoKHR
    struct VkPresentInfoKHR
    struct VkImportSemaphoreFdInfoKHR
    struct VkSemaphoreGetFdInfoKHR
    struct VkSemaphoreTypeCreateInfo
    struct VkTimelineSemaphoreSubmitInfo   - sets value for timeline sem. Can alse set boolean sems?? (pnext only)

API calls with VkSemaphore* as arg:
    vkCreateSemaphore
    vkDestroySemaphore
    vkGetSemaphoreCounterValue    (sem must be timeline sem)
    vkWaitSemaphoresKHR           (sem must be timeline sem)  Uses VkSemaphoreWaitFlagBits, which affecs when wait returns!!
    vkGetSemaphoreGetFdInfoKHR
    vkSignalSemaphoresKHR
    VkAcquireNextImageKHR/VkAcquireNextImage2KHR     (type for sem  not specified. Maybe it just needs to be in signaled state??)


Better understand these so as to be able to figure out what sem value to wait for:
   enum VkSemaphoreWaitFlagBits

Calls that signal semaphores:

    vkSignalSemaphore
    vkQueueSubmit      struct VkSubmitInfo
    vkQueueSubmit2      struct VkSubmitInfo2 in vkQueueSubmit2
    vkQueueBindSparse      struct VkBindSparseInfo in vkQueueBindSparse

Pnext structs that signal semaphores
    struct VkDeviceGroupSubmitInfo via pnext chain of vksubmitinfo

    struct VkTimelineSemaphoreSubmitInfo via pnext chain of struct VkSubmitInfo in vkQueueSubmit
                                         via pnext chain of struct VkBindSparseInfo in vkQueueBindSparse
    struct VkD3D12FenceSubmitInfoKHR via pnext chain of vksumbitinfo
