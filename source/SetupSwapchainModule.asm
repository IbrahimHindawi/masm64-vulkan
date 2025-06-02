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

    ; mov rcx, device_swapchain_support.SwapchainSupportDetails.formats
    ; call setupSwapchain_chooseSwapSurfaceFormat
    mov rbx, device_swapchain_support.SwapchainSupportDetails.formats
    xor rcx, rcx
    xor rax, rax
    loop_choose_swapchain_surface_format:
        mov esi, [rbx.VkSurfaceFormatKHR.format]
        cmp esi, VK_FORMAT_B8G8R8A8_SRGB
        jne format_failed

        mov edi, [rbx.VkSurfaceFormatKHR.colorSpace]
        cmp edi, VK_COLOR_SPACE_SRGB_NONLINEAR_KHR
        jne format_failed

        mov rax, [rbx]
        jmp format_succeeded

        format_failed:
        add rbx, sizeof VkSurfaceFormatKHR
        inc rcx
        cmp ecx, device_swapchain_support.SwapchainSupportDetails.formats_count
        jl loop_choose_swapchain_surface_format
    format_succeeded:
    cmp rax, 0
    jne format_already_found
        mov rax, device_swapchain_support.SwapchainSupportDetails.formats
    format_already_found:
    mov setupSwapchain_surface_format, rax

    ; mov rcx, device_swapchain_support.SwapchainSupportDetails.present_modes
    ; call setupSwapchain_chooseSwapPresentMode
    mov rbx, device_swapchain_support.SwapchainSupportDetails.present_modes
    xor rcx, rcx
    xor rax, rax
    loop_choose_swapchain_present_mode:
        mov esi, [rbx]
        cmp esi, VK_PRESENT_MODE_MAILBOX_KHR 
        je present_mode_succeeded

        add rbx, sizeof VkPresentModeKHR
        inc rcx
        cmp ecx, device_swapchain_support.SwapchainSupportDetails.present_modes_count
        jl loop_choose_swapchain_present_mode

    cmp eax, 0
    jne present_mode_already_found
        mov eax, VK_PRESENT_MODE_FIFO_KHR
    present_mode_already_found:

    present_mode_succeeded:
    mov eax, [rbx]
    mov setupSwapchain_present_mode, eax

    ; mov ecx, device_swapchain_support.SwapchainSupportDetails.capabilities
    ; call setupSwapchain_chooseSwapExtent

    invoke arenaSetPos, ADDR arena, qword ptr pos

    ; call findQueueFamilies
    ;---
    procEpilogue
    ret
setupSwapchain endp
endif
