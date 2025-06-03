;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
; SetupSwapchainModule
;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
ifndef SetupSwapchainModuleHeaderGuard
SetupSwapchainModuleHeaderGuard = 0

;---------------------------------------------------------------------------------------------------
.data
;---------------------------------------------------------------------------------------------------
SetupSwapchain_surface_format VkSurfaceFormatKHR <>
SetupSwapchain_present_mode VkPresentModeKHR ?
SetupSwapchain_extent VkExtent2D <>
SetupSwapchain_create_info VkSwapchainCreateInfoKHR <>
SetupSwapchain_indices QueueFamilyIndices <>
SetupSwapchain_queue_family_indices dword 2 dup(?)
SetupSwapchain_image_count dword ?
; pos qword ?

;---------------------------------------------------------------------------------------------------
.code
;---------------------------------------------------------------------------------------------------
align 16
SetupSwapchain_chooseSwapSurfaceFormat proc
    procPrologue
    ;---

    procEpilogue
    ret
SetupSwapchain_chooseSwapSurfaceFormat endp

align 16
SetupSwapchain_chooseSwapPresentMode proc
    procPrologue
    ;---
    procEpilogue
    ret
SetupSwapchain_chooseSwapPresentMode endp

align 16
SetupSwapchain_chooseSwapExtent proc
    procPrologue
    ;---
    procEpilogue
    ret
SetupSwapchain_chooseSwapExtent endp

align 16
SetupSwapchain_Execute proc
    procPrologue
    ;---
    mov rcx, g_physical_device
    ; calling querySwapchainSupport over and over again seems wasteful
    ; idk why they do that in the Vulkan Tutorial.
    ; this will write to `device_swapchain_support:SwapchainSupportDetails` again!
    ; `swapchain_format_count:qword`
    ; `swapchain_present_mode_count:qword`
    ; could make sense to keep track of Array{ptr:qword,len:qword}
    arenaGetPos arena, pos
    call querySwapchainSupport ; allocs memory to arena

    ; mov rcx, device_swapchain_support.SwapchainSupportDetails.formats
    ; call SetupSwapchain_chooseSwapSurfaceFormat
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
    mov SetupSwapchain_surface_format, rax

    ; mov rcx, device_swapchain_support.SwapchainSupportDetails.present_modes
    ; call SetupSwapchain_chooseSwapPresentMode
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
    mov SetupSwapchain_present_mode, eax

    ; mov ecx, device_swapchain_support.SwapchainSupportDetails.capabilities
    ; call SetupSwapchain_chooseSwapExtent
    ; ideally should handle uninitialized extents by testing
    ; if extent != UINT32_MAX -> currentExtent else get framebuffer size from win32
    mov rax, device_swapchain_support.SwapchainSupportDetails.capabilities.VkSurfaceCapabilitiesKHR.currentExtent
    mov SetupSwapchain_extent, rax

    xor rax, rax
    mov eax, device_swapchain_support.SwapchainSupportDetails.capabilities.minImageCount
    inc eax
    mov SetupSwapchain_image_count, eax

    ; branch
    mov ebx, device_swapchain_support.SwapchainSupportDetails.capabilities.VkSurfaceCapabilitiesKHR.maxImageCount
    cmp ebx, 0
    je update_image_count_skip

    cmp SetupSwapchain_image_count, ebx
    jle update_image_count_skip

    mov SetupSwapchain_image_count, eax

    update_image_count_skip:

    mov SetupSwapchain_create_info.VkSwapchainCreateInfoKHR._sType, VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR

    mov rax, g_surface
    mov SetupSwapchain_create_info.VkSwapchainCreateInfoKHR.surface, rax

    mov eax, SetupSwapchain_image_count
    mov SetupSwapchain_create_info.VkSwapchainCreateInfoKHR.minImageCount, eax

    mov eax, SetupSwapchain_surface_format.VkSurfaceFormatKHR.format
    mov SetupSwapchain_create_info.VkSwapchainCreateInfoKHR.imageFormat, eax

    mov eax, SetupSwapchain_surface_format.VkSurfaceFormatKHR.colorSpace
    mov SetupSwapchain_create_info.VkSwapchainCreateInfoKHR.imageColorSpace, eax

    mov eax, SetupSwapchain_surface_format.VkSurfaceFormatKHR.colorSpace
    mov SetupSwapchain_create_info.VkSwapchainCreateInfoKHR.imageColorSpace, eax

    mov rax, SetupSwapchain_extent
    mov SetupSwapchain_create_info.VkSwapchainCreateInfoKHR.imageExtent, rax

    mov SetupSwapchain_create_info.VkSwapchainCreateInfoKHR.imageArrayLayers, 1
    mov SetupSwapchain_create_info.VkSwapchainCreateInfoKHR.imageUsage, VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT

    mov rax, g_physical_device
    invoke findQueueFamilies, rax, ADDR SetupSwapchain_indices
    ; mov SetupSwapchain_has_value, al

    lea rax, SetupSwapchain_queue_family_indices
    mov rbx, SetupSwapchain_indices
    mov [rax], rbx

    mov eax, SetupSwapchain_indices.QueueFamilyIndices.graphicsFamily
    mov ebx, SetupSwapchain_indices.QueueFamilyIndices.presentFamily
    and eax, ebx
    cmp eax, true
    jmp graphics_and_present_eq
        mov SetupSwapchain_create_info.VkSwapchainCreateInfoKHR.imageSharingMode, VK_SHARING_MODE_CONCURRENT
        mov SetupSwapchain_create_info.VkSwapchainCreateInfoKHR.queueFamilyIndexCount, 2
        lea rcx, SetupSwapchain_queue_family_indices
        mov SetupSwapchain_create_info.VkSwapchainCreateInfoKHR.pQueueFamilyIndices, rcx
        jmp graphics_and_present_noteq
    graphics_and_present_eq:
        mov SetupSwapchain_create_info.VkSwapchainCreateInfoKHR.imageSharingMode, VK_SHARING_MODE_EXCLUSIVE
        mov SetupSwapchain_create_info.VkSwapchainCreateInfoKHR.queueFamilyIndexCount, 0
        mov SetupSwapchain_create_info.VkSwapchainCreateInfoKHR.pQueueFamilyIndices, 0
    graphics_and_present_noteq:

    mov eax, device_swapchain_support.SwapchainSupportDetails.capabilities.VkSurfaceCapabilitiesKHR.currentTransform
    mov SetupSwapchain_create_info.VkSwapchainCreateInfoKHR.preTransform, eax

    mov SetupSwapchain_create_info.VkSwapchainCreateInfoKHR.compositeAlpha, VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR

    mov eax, SetupSwapchain_present_mode
    mov SetupSwapchain_create_info.VkSwapchainCreateInfoKHR.presentMode, eax

    mov SetupSwapchain_create_info.VkSwapchainCreateInfoKHR.clipped, true
    mov SetupSwapchain_create_info.VkSwapchainCreateInfoKHR.oldSwapchain, 0

    invoke vkCreateSwapchainKHR, qword ptr g_logical_device, ADDR SetupSwapchain_create_info, 0, ADDR g_swapchain
    AssertEq rax, VK_SUCCESS

    invoke vkGetSwapchainImagesKHR, qword ptr g_logical_device, qword ptr g_swapchain, ADDR SetupSwapchain_image_count, 0
    AssertEq rax, VK_SUCCESS

    ; free querySwapchainSupport memory
    invoke arenaSetPos, ADDR arena, qword ptr pos
    arenaGetPos arena, pos

    xor rax, rax
    xor rdx, rdx
    mov edx, sizeof VkImage
    mov eax, SetupSwapchain_image_count
    mul edx
    invoke arenaPushZero, ADDR arena, rax, 4
    AssertNotEq rax, 0
    mov g_swapchain_images, rax

    invoke vkGetSwapchainImagesKHR, qword ptr g_logical_device, qword ptr g_swapchain, ADDR SetupSwapchain_image_count, qword ptr g_swapchain_images
    AssertEq rax, VK_SUCCESS

    mov ecx, SetupSwapchain_surface_format.VkSurfaceFormatKHR.format
    mov g_swapchain_image_format, ecx

    mov rcx, SetupSwapchain_extent
    mov g_swapchain_extent, rcx

    ; g_swapchain_images memory should not be freed!
    ; invoke arenaSetPos, ADDR arena, qword ptr pos 

    ;---
    procEpilogue
    ret
SetupSwapchain_Execute endp
endif
