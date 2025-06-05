;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
; SetupFramebuffersModule
;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
ifndef SetupFramebuffersModuleHeaderGuard
SetupFramebuffersModuleHeaderGuard = 0

;---------------------------------------------------------------------------------------------------
.data
;---------------------------------------------------------------------------------------------------
SetupFramebuffers_framebuffer_info VkFramebufferCreateInfo <>

;---------------------------------------------------------------------------------------------------
.code
;---------------------------------------------------------------------------------------------------
align 16
SetupFramebuffers_Execute proc
    procPrologue
    ;---

    ; arenaPushArrayZero ADDR arena, qword, g_swapchain_image_views_count, 8
    xor rax, rax
    mov rdx, sizeof VkFramebuffer
    mov eax, g_swapchain_image_views_count
    mul rdx
    invoke arenaPushZero, ADDR arena, rax, 8
    AssertNotEq rax, 0
    mov g_swapchain_framebuffers, rax

    xor rbx, rbx
    mov ebx, g_swapchain_image_views_count
    mov g_swapchain_framebuffers_count, ebx

    mov rsi, g_swapchain_framebuffers
    mov r12, g_swapchain_image_views
    xor rdi, rdi
    SetupFramebuffers_Execute_loop:
        mov SetupFramebuffers_framebuffer_info._sType, VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO

        mov rax, g_render_pass
        mov SetupFramebuffers_framebuffer_info.renderPass, rax

        mov SetupFramebuffers_framebuffer_info.attachmentCount, 1

        mov SetupFramebuffers_framebuffer_info.pAttachments, r12

        mov eax, g_swapchain_extent.VkExtent2D._width
        mov SetupFramebuffers_framebuffer_info._width, eax

        mov eax, g_swapchain_extent.VkExtent2D.height
        mov SetupFramebuffers_framebuffer_info.height, eax

        mov SetupFramebuffers_framebuffer_info.layers, 1

        invoke vkCreateFramebuffer, qword ptr g_logical_device, ADDR SetupFramebuffers_framebuffer_info, 0, rsi

        inc rdi
        add rsi, sizeof VkFramebuffer
        add r12, sizeof qword
        cmp edi, g_swapchain_image_views_count
        jl SetupFramebuffers_Execute_loop

    ;---
    procEpilogue
    ret
SetupFramebuffers_Execute endp
endif
