;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
; ModuleSetupImageViews
;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
ifndef ModuleSetupImageViewsHeaderGuard
ModuleSetupImageViewsHeaderGuard = 0

;---------------------------------------------------------------------------------------------------
.data
;---------------------------------------------------------------------------------------------------
SetupImageViews_create_info VkImageViewCreateInfo <>

;---------------------------------------------------------------------------------------------------
.code
;---------------------------------------------------------------------------------------------------
align 16
SetupImageViews_Execute proc
    procPrologue
    ;---
    arenaGetPos arena, pos

    ; you need to make a macro for this already dude =}
    xor rax, rax
    xor rdx, rdx
    mov edx, sizeof VkImageView
    mov eax, g_swapchain_images_count
    mul edx
    invoke arenaPushZero, ADDR arena, rax, 8
    AssertNotEq rax, 0
    mov g_swapchain_image_views, rax

    xor rbx, rbx
    mov rsi, g_swapchain_image_views
    mov rdi, g_swapchain_images
    mov r12d, g_swapchain_image_format
    loop_create_image_views:
        mov SetupImageViews_create_info.VkImageViewCreateInfo._sType, VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO
        ; apparently you cannot dereference a pointer into a struct field directly
        ; so i deref into `rax` and then stick it inside the field
        mov rax, [rdi]
        mov SetupImageViews_create_info.VkImageViewCreateInfo.image, rax
        mov SetupImageViews_create_info.VkImageViewCreateInfo.viewType, VK_IMAGE_VIEW_TYPE_2D
        mov SetupImageViews_create_info.VkImageViewCreateInfo.format, r12d
        mov SetupImageViews_create_info.VkImageViewCreateInfo.components.VkComponentMapping.r, VK_COMPONENT_SWIZZLE_IDENTITY
        mov SetupImageViews_create_info.VkImageViewCreateInfo.components.VkComponentMapping.g, VK_COMPONENT_SWIZZLE_IDENTITY
        mov SetupImageViews_create_info.VkImageViewCreateInfo.components.VkComponentMapping.b, VK_COMPONENT_SWIZZLE_IDENTITY
        mov SetupImageViews_create_info.VkImageViewCreateInfo.components.VkComponentMapping.a, VK_COMPONENT_SWIZZLE_IDENTITY
        mov SetupImageViews_create_info.VkImageViewCreateInfo.subresourceRange.VkImageSubresourceRange.aspectMask, VK_IMAGE_ASPECT_COLOR_BIT
        mov SetupImageViews_create_info.VkImageViewCreateInfo.subresourceRange.VkImageSubresourceRange.baseMipLevel, 0
        mov SetupImageViews_create_info.VkImageViewCreateInfo.subresourceRange.VkImageSubresourceRange.levelCount, 1
        mov SetupImageViews_create_info.VkImageViewCreateInfo.subresourceRange.VkImageSubresourceRange.baseArrayLayer, 0
        mov SetupImageViews_create_info.VkImageViewCreateInfo.subresourceRange.VkImageSubresourceRange.layerCount, 1
        invoke vkCreateImageView, qword ptr g_logical_device, ADDR SetupImageViews_create_info, 0, rsi
        ; ---
        add rsi, sizeof VkImageView
        add rdi, sizeof VkImage
        inc rbx
        cmp ebx, g_swapchain_images_count
        jl loop_create_image_views

    ; g_swapchain_image_views memory should not be freed!
    ; invoke arenaSetPos, ADDR arena, qword ptr pos 

    ;---
    procEpilogue
    ret
SetupImageViews_Execute endp
endif
