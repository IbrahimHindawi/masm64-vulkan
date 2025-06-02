;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
; SetupLogicalDeviceModule
;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
ifndef SetupLogicalDeviceModuleHeaderGuard
SetupLogicalDeviceModuleHeaderGuard = 0

;---------------------------------------------------------------------------------------------------
.data
;---------------------------------------------------------------------------------------------------
setupLogicalDevice_has_value byte ?
align 4
setupLogicalDevice_indices QueueFamilyIndices <>
align 4
setupLogicalDevice_queue_priority dword 3f800000h; real4 1.0
align 4
setupLogicalDevice_device_features VkPhysicalDeviceFeatures <>
align 8
; setupLogicalDevice_queue_create_infos qword ?
setupLogicalDevice_queue_create_info VkDeviceQueueCreateInfo <>
align 8
setupLogicalDevice_create_info VkDeviceCreateInfo <>

;---------------------------------------------------------------------------------------------------
.code
;---------------------------------------------------------------------------------------------------
align 16
setupLogicalDevice proc
    procPrologue
    ;---
    mov rcx, g_physical_device
    invoke findQueueFamilies, rcx, ADDR setupLogicalDevice_indices
    mov setupLogicalDevice_has_value, al

    mov setupLogicalDevice_queue_create_info.VkDeviceQueueCreateInfo._sType, VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO

    mov esi, setupLogicalDevice_indices.QueueFamilyIndices.graphicsFamily 
    mov setupLogicalDevice_queue_create_info.VkDeviceQueueCreateInfo.queueFamilyIndex, esi

    mov setupLogicalDevice_queue_create_info.VkDeviceQueueCreateInfo.queueCount, 1

    lea rsi, setupLogicalDevice_queue_priority
    mov setupLogicalDevice_queue_create_info.VkDeviceQueueCreateInfo.pQueuePriorities, rsi

    ; ---
    mov setupLogicalDevice_create_info.VkDeviceCreateInfo._sType, VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO

    lea rdi, setupLogicalDevice_queue_create_info
    mov setupLogicalDevice_create_info.VkDeviceCreateInfo.pQueueCreateInfos, rdi

    mov setupLogicalDevice_create_info.VkDeviceCreateInfo.queueCreateInfoCount, 1

    lea rsi, setupLogicalDevice_device_features
    mov setupLogicalDevice_create_info.VkDeviceCreateInfo.pEnabledFeatures, rsi

    mov setupLogicalDevice_create_info.VkDeviceCreateInfo.enabledExtensionCount, 1

    lea rsi, device_extensions
    mov setupLogicalDevice_create_info.VkDeviceCreateInfo.ppEnabledExtensionNames, rsi

    ; ---
    mov rax, g_physical_device
    invoke vkCreateDevice, rax, ADDR setupLogicalDevice_create_info, 0, ADDR g_logical_device

    ;---
    procEpilogue
    ret
setupLogicalDevice endp
endif
