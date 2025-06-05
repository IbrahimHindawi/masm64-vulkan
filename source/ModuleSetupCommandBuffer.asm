;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
; SetupCommandBufferModule
;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
ifndef SetupCommandBufferModuleHeaderGuard
SetupCommandBufferModuleHeaderGuard = 0

;---------------------------------------------------------------------------------------------------
.data
;---------------------------------------------------------------------------------------------------
align 8
SetupCommandBuffer_alloc_info VkCommandBufferAllocateInfo <>

;---------------------------------------------------------------------------------------------------
.code
;---------------------------------------------------------------------------------------------------
align 16
SetupCommandBuffer_Execute proc
    procPrologue
    ;---

    mov SetupCommandBuffer_alloc_info._sType, VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO
    mov rax, qword ptr g_command_pool
    mov SetupCommandBuffer_alloc_info.commandPool, rax
    mov SetupCommandBuffer_alloc_info.level, VK_COMMAND_BUFFER_LEVEL_PRIMARY
    mov SetupCommandBuffer_alloc_info.commandBufferCount, 1

    invoke vkAllocateCommandBuffers, qword ptr g_logical_device, ADDR SetupCommandBuffer_alloc_info, ADDR qword ptr g_command_buffer

    ;---
    procEpilogue
    ret
SetupCommandBuffer_Execute endp
endif
