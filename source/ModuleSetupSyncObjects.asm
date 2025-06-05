;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
; SetupSyncObjectsModule
;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
ifndef SetupSyncObjectsModuleHeaderGuard
SetupSyncObjectsModuleHeaderGuard = 0

;---------------------------------------------------------------------------------------------------
.data
;---------------------------------------------------------------------------------------------------
align 8
SetupSyncObjects_semaphore_create_info VkSemaphoreCreateInfo <>
SetupSyncObjects_fence_create_info VkFenceCreateInfo <>

;---------------------------------------------------------------------------------------------------
.code
;---------------------------------------------------------------------------------------------------
align 16
SetupSyncObjects_Execute proc
    procPrologue
    ;---
    
    mov SetupSyncObjects_semaphore_create_info._sType, VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO

    mov SetupSyncObjects_fence_create_info._sType, VK_STRUCTURE_TYPE_FENCE_CREATE_INFO
    mov SetupSyncObjects_fence_create_info.flags, VK_FENCE_CREATE_SIGNALED_BIT

    invoke vkCreateSemaphore, qword ptr g_logical_device, ADDR SetupSyncObjects_semaphore_create_info, 0, ADDR qword ptr g_image_available_semaphore
    AssertEq rax, VK_SUCCESS

    invoke vkCreateSemaphore, qword ptr g_logical_device, ADDR SetupSyncObjects_semaphore_create_info, 0, ADDR qword ptr g_render_finished_semaphore
    AssertEq rax, VK_SUCCESS

    invoke vkCreateFence, qword ptr g_logical_device, ADDR SetupSyncObjects_fence_create_info, 0, ADDR qword ptr g_in_flight_fence
    AssertEq rax, VK_SUCCESS
    ;---
    procEpilogue
    ret
SetupSyncObjects_Execute endp
endif
