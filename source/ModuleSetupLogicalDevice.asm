;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
; SetupLogicalDeviceModule
;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
ifndef SetupLogicalDeviceModuleHeaderGuard
SetupLogicalDeviceModuleHeaderGuard = 0

;---------------------------------------------------------------------------------------------------
.data
;---------------------------------------------------------------------------------------------------
SetupLogicalDevice_has_value byte ?
align 4
SetupLogicalDevice_indices QueueFamilyIndices <>
align 4
SetupLogicalDevice_queue_priority dword 3f800000h; real4 1.0
align 4
SetupLogicalDevice_device_features VkPhysicalDeviceFeatures <>
align 8
; SetupLogicalDevice_queue_create_infos qword ?
SetupLogicalDevice_queue_create_info VkDeviceQueueCreateInfo <>
align 8
SetupLogicalDevice_create_info VkDeviceCreateInfo <>

;---------------------------------------------------------------------------------------------------
.code
;---------------------------------------------------------------------------------------------------
align 16
SetupLogicalDevice_Execute proc
    procPrologue
    ;---
    mov rcx, g_physical_device
    invoke findQueueFamilies, rcx, ADDR SetupLogicalDevice_indices
    mov SetupLogicalDevice_has_value, al

    mov SetupLogicalDevice_queue_create_info.VkDeviceQueueCreateInfo._sType, VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO

    mov esi, SetupLogicalDevice_indices.QueueFamilyIndices.graphicsFamily 
    mov SetupLogicalDevice_queue_create_info.VkDeviceQueueCreateInfo.queueFamilyIndex, esi

    mov SetupLogicalDevice_queue_create_info.VkDeviceQueueCreateInfo.queueCount, 1

    lea rsi, SetupLogicalDevice_queue_priority
    mov SetupLogicalDevice_queue_create_info.VkDeviceQueueCreateInfo.pQueuePriorities, rsi

    ; ---
    mov SetupLogicalDevice_create_info.VkDeviceCreateInfo._sType, VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO

    lea rdi, SetupLogicalDevice_queue_create_info
    mov SetupLogicalDevice_create_info.VkDeviceCreateInfo.pQueueCreateInfos, rdi

    mov SetupLogicalDevice_create_info.VkDeviceCreateInfo.queueCreateInfoCount, 1

    lea rsi, SetupLogicalDevice_device_features
    mov SetupLogicalDevice_create_info.VkDeviceCreateInfo.pEnabledFeatures, rsi

    mov SetupLogicalDevice_create_info.VkDeviceCreateInfo.enabledExtensionCount, 1

    lea rsi, device_extensions
    mov SetupLogicalDevice_create_info.VkDeviceCreateInfo.ppEnabledExtensionNames, rsi

    ; ---
    mov rax, g_physical_device
    invoke vkCreateDevice, rax, ADDR SetupLogicalDevice_create_info, 0, ADDR g_logical_device

    invoke vkGetDeviceQueue, qword ptr g_logical_device, SetupLogicalDevice_indices.graphicsFamily, 0, ADDR qword ptr g_graphics_queue
    invoke vkGetDeviceQueue, qword ptr g_logical_device, SetupLogicalDevice_indices.presentFamily, 0, ADDR qword ptr g_present_queue

    ;---
    procEpilogue
    ret
SetupLogicalDevice_Execute endp
endif
