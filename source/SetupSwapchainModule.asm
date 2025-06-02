;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
; SetupSwapchainModule
;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
ifndef SetupSwapchainModuleHeaderGuard
SetupSwapchainModuleHeaderGuard = 0

;---------------------------------------------------------------------------------------------------
.data
;---------------------------------------------------------------------------------------------------
setupSwapchain_surface_format VkSurfaceFormatKHR <>
setupSwapchain_present_mode VkPresentModeKHR ?
setupSwapchain_extent VkExtent2D <>
setupSwapchain_create_info VkSwapchainCreateInfoKHR <>
setupSwapchain_indices QueueFamilyIndices <>
setupSwapchain_queue_family_indices dword 2 dup(?)
; pos qword ?

;---------------------------------------------------------------------------------------------------
.code
;---------------------------------------------------------------------------------------------------
align 16
setupSwapchain_chooseSwapSurfaceFormat proc
    procPrologue
    ;---

    procEpilogue
    ret
setupSwapchain_chooseSwapSurfaceFormat endp

align 16
setupSwapchain_chooseSwapPresentMode proc
    procPrologue
    ;---
    procEpilogue
    ret
setupSwapchain_chooseSwapPresentMode endp

align 16
setupSwapchain_chooseSwapExtent proc
    procPrologue
    ;---
    procEpilogue
    ret
setupSwapchain_chooseSwapExtent endp

align 16
setupSwapchain proc
    procPrologue
    ;---
    mov rcx, g_physical_device
    ; calling querySwapchainSupport over and over again seems wasteful
    ; idk why they do that in the Vulkan Tutorial.
    ; this will write to `device_swapchain_support:SwapchainSupportDetails` again!
    ; `swapchain_format_count:qword`
    ; `swapchain_present_mode_count:qword`
    ; could make sense to keep track of Array{ptr:qword,len:qword}
    call querySwapchainSupport

    mov rcx, device_swapchain_support.SwapchainSupportDetails.formats
    call setupSwapchain_chooseSwapSurfaceFormat

    mov rcx, device_swapchain_support.SwapchainSupportDetails.present_modes
    call setupSwapchain_chooseSwapPresentMode

    ; mov ecx, device_swapchain_support.SwapchainSupportDetails.capabilities
    ; call setupSwapchain_chooseSwapExtent

    invoke arenaSetPos, ADDR arena, qword ptr pos

    ; call findQueueFamilies
    ;---
    procEpilogue
    ret
setupSwapchain endp
endif
