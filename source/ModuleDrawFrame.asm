;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
; DrawFrameModule
;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
ifndef DrawFrameModuleHeaderGuard
DrawFrameModuleHeaderGuard = 0

;---------------------------------------------------------------------------------------------------
.data
;---------------------------------------------------------------------------------------------------
; might need to zero out this modules variables every frame:
; - global allocations + zero out
; - stack allocations + zero out
; byte by byte but that will be slow
align 4
DrawFrame_image_index dword ?
align 8
DrawFrame_submit_info VkSubmitInfo <>
align 8
DrawFrame_present_info VkPresentInfoKHR <>

; could these guys be just pointers?
; DrawFrame_wait_semaphores qword ?
; DrawFrame_wait_stages qword ?

align 8
DrawFrame_wait_semaphore VkSemaphore ?
DrawFrame_wait_semaphores qword offset DrawFrame_wait_semaphore

align 8
DrawFrame_wait_stage VkPipelineStageFlags ?
DrawFrame_wait_stages qword offset DrawFrame_wait_stage

align 8
DrawFrame_signal_semaphore VkSemaphore ?
DrawFrame_signal_semaphores qword offset DrawFrame_signal_semaphore

align 8
DrawFrame_swapchain VkSwapchainKHR ?
DrawFrame_swapchains qword offset DrawFrame_swapchain

; recordCommandBuffer
DrawFrame_begin_info VkCommandBufferBeginInfo <>
DrawFrame_render_pass_info VkRenderPassBeginInfo <>
DrawFrame_offset VkOffset2D <>
DrawFrame_clear_color VkClearValue <>
DrawFrame_viewport VkViewport <>
DrawFrame_scissor VkRect2D <>

;---------------------------------------------------------------------------------------------------
.code
;---------------------------------------------------------------------------------------------------
align 16
recordCommandBuffer proc
    procPrologue
    mov DrawFrame_begin_info._sType, VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO
    mov DrawFrame_begin_info.flags, 0
    mov DrawFrame_begin_info.pInheritanceInfo, 0

    invoke vkBeginCommandBuffer, rcx, ADDR DrawFrame_begin_info
    AssertEq rax, VK_SUCCESS

    mov DrawFrame_render_pass_info._sType, VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO
    mov rax, qword ptr g_render_pass
    mov DrawFrame_render_pass_info.renderPass, rax

    ; g_swapchain_framebuffers[image_index]
    xor rax, rax
    mov rsi, qword ptr g_swapchain_framebuffers
    mov rdx, sizeof VkFramebuffer
    mov eax, DrawFrame_image_index
    mul rdx
    add rsi, rax
    mov rax, [rsi]
    mov DrawFrame_render_pass_info.framebuffer, rax

    ; mov rax, 0
    ; mov DrawFrame_offset, rax

    ; mov rax, DrawFrame_offset
    xor rax, rax
    mov DrawFrame_render_pass_info.renderArea._offset, rax
    mov rax, qword ptr g_swapchain_extent
    mov DrawFrame_render_pass_info.renderArea.extent, rax
    mov DrawFrame_clear_color.color.float32 + sizeof dword * 0, 0
    mov DrawFrame_clear_color.color.float32 + sizeof dword * 1, 0
    mov DrawFrame_clear_color.color.float32 + sizeof dword * 2, 0
    mov DrawFrame_clear_color.color.float32 + sizeof dword * 3, 03f800000h
    mov DrawFrame_render_pass_info.clearValueCount, 1

    lea rax, DrawFrame_clear_color
    mov DrawFrame_render_pass_info.pClearValues, rax
    invoke vkCmdBeginRenderPass, qword ptr g_command_buffer, ADDR DrawFrame_render_pass_info, VK_SUBPASS_CONTENTS_INLINE
    invoke vkCmdBindPipeline, qword ptr g_command_buffer, VK_PIPELINE_BIND_POINT_GRAPHICS, qword ptr g_graphics_pipeline

    xor rax, rax
    mov DrawFrame_viewport.x, eax
    mov DrawFrame_viewport.y, eax
    mov DrawFrame_viewport.minDepth, eax
    mov DrawFrame_viewport.maxDepth, eax

    mov eax, g_swapchain_extent._width
    cvtsi2ss xmm0, eax
    movss DrawFrame_viewport._width, xmm0

    mov eax, g_swapchain_extent.height
    cvtsi2ss xmm0, eax
    movss DrawFrame_viewport.height, xmm0
    invoke vkCmdSetViewport, qword ptr g_command_buffer, 0, 1, ADDR DrawFrame_viewport

    xor rax, rax
    mov DrawFrame_scissor._offset, rax
    mov rax, g_swapchain_extent
    mov  DrawFrame_scissor.extent, rax
    invoke vkCmdSetScissor, qword ptr g_command_buffer, 0, 1, ADDR DrawFrame_scissor
    invoke vkCmdDraw, qword ptr g_command_buffer, 3, 1, 0, 0
    invoke vkCmdEndRenderPass, qword ptr g_command_buffer
    invoke vkEndCommandBuffer, qword ptr g_command_buffer
    AssertEq rax, VK_SUCCESS
    procEpilogue
    ret
recordCommandBuffer endp

intmax equ 0ffffffffffffffffh

align 16
DrawFrame_Execute proc
    procPrologue
    invoke vkWaitForFences, qword ptr g_logical_device, 1, ADDR g_in_flight_fence, true, intmax
    invoke vkResetFences, qword ptr g_logical_device, 1, ADDR qword ptr g_in_flight_fence
    invoke vkAcquireNextImageKHR, qword ptr g_logical_device, qword ptr g_swapchain, intmax, qword ptr g_image_available_semaphore, 0, ADDR DrawFrame_image_index
    invoke vkResetCommandBuffer, qword ptr g_command_buffer, 0
    invoke recordCommandBuffer, qword ptr g_command_buffer, DrawFrame_image_index

    invoke recordCommandBuffer, qword ptr g_command_buffer, DrawFrame_image_index

    mov DrawFrame_submit_info._sType, VK_STRUCTURE_TYPE_SUBMIT_INFO

    mov DrawFrame_submit_info.waitSemaphoreCount, 1

    mov rax, qword ptr g_image_available_semaphore
    mov DrawFrame_wait_semaphore, rax
    mov rax, DrawFrame_wait_semaphores
    mov DrawFrame_submit_info.pWaitSemaphores, rax

    mov eax, VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT
    mov DrawFrame_wait_stage, eax
    mov rax, DrawFrame_wait_stages
    mov DrawFrame_submit_info.pWaitDstStageMask, rax

    mov DrawFrame_submit_info.commandBufferCount, 1

    lea rax, qword ptr g_command_buffer
    mov DrawFrame_submit_info.pCommandBuffers, rax

    mov DrawFrame_submit_info.signalSemaphoreCount, 1

    mov rax, DrawFrame_signal_semaphores
    mov DrawFrame_submit_info.pSignalSemaphores, rax

    mov rax, qword ptr g_render_finished_semaphore
    mov DrawFrame_signal_semaphore, rax
    mov rax, DrawFrame_signal_semaphores
    mov DrawFrame_submit_info.pSignalSemaphores, rax
    
    invoke vkQueueSubmit, qword ptr g_graphics_queue, 1, ADDR DrawFrame_submit_info, qword ptr g_in_flight_fence
    AssertEq rax, VK_SUCCESS

    mov DrawFrame_present_info._sType, VK_STRUCTURE_TYPE_PRESENT_INFO_KHR
    mov DrawFrame_present_info.waitSemaphoreCount, 1
    mov rax, DrawFrame_signal_semaphores
    mov DrawFrame_present_info.pWaitSemaphores, rax

    mov rax, qword ptr g_swapchain
    mov DrawFrame_present_info.swapchainCount, 1

    mov rax, DrawFrame_swapchains
    mov DrawFrame_present_info.pSwapchains, rax

    lea rax, DrawFrame_image_index
    mov DrawFrame_present_info.pImageIndices, rax

    mov DrawFrame_present_info.pResults, 0
    invoke vkQueuePresentKHR, qword ptr g_present_queue, ADDR DrawFrame_present_info
    procEpilogue
    ret
DrawFrame_Execute endp
endif
