;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
; SetupCommandPoolModule
;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
ifndef SetupCommandPoolModuleHeaderGuard
SetupCommandPoolModuleHeaderGuard = 0

;---------------------------------------------------------------------------------------------------
.data
;---------------------------------------------------------------------------------------------------
align 8
SetupCommandPool_queue_family_indices QueueFamilyIndices <>
SetupCommandPool_pool_info VkCommandPoolCreateInfo <>

;---------------------------------------------------------------------------------------------------
.code
;---------------------------------------------------------------------------------------------------
align 16
SetupCommandPool_Execute proc
    procPrologue
    ;---

    invoke findQueueFamilies, qword ptr g_physical_device, ADDR SetupCommandPool_queue_family_indices

    mov SetupCommandPool_pool_info._sType, VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO
    mov SetupCommandPool_pool_info.flags, VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT

    xor rax, rax
    mov eax, SetupCommandPool_queue_family_indices.graphicsFamily
    mov SetupCommandPool_pool_info.queueFamilyIndex, eax

    invoke vkCreateCommandPool, qword ptr g_logical_device, ADDR SetupCommandPool_pool_info, 0, ADDR qword ptr g_command_pool

    ; mov device_queue_families_has_value, al

    ;---
    procEpilogue
    ret
SetupCommandPool_Execute endp
endif
