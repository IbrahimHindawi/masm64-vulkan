
; TYPEDEF VkWin32SurfaceCreateFlagsKHR = VkFlags, TypeKind.ELABORATED
VkWin32SurfaceCreateFlagsKHR typedef dword

VkWin32SurfaceCreateInfoKHR struct
;   TypeKind.ELABORATED
;   name = sType, type = VkStructureType, offset = 0, size = 4
    _sType dword ?
    byte 4 dup(?)
;   TypeKind.POINTER
;   name = pNext, type = const void *, offset = 8, size = 8
    pNext qword ?
;   TypeKind.ELABORATED
;   name = flags, type = VkWin32SurfaceCreateFlagsKHR, offset = 16, size = 4
    flags VkWin32SurfaceCreateFlagsKHR ?
    byte 4 dup(?)
;   TypeKind.ELABORATED
;   name = hinstance, type = HINSTANCE, offset = 24, size = 8
    hinstance HINSTANCE ?
;   TypeKind.ELABORATED
;   name = hwnd, type = HWND, offset = 32, size = 8
    hwnd HWND ?
VkWin32SurfaceCreateInfoKHR ends

; TYPEDEF VkWin32SurfaceCreateInfoKHR = struct VkWin32SurfaceCreateInfoKHR, TypeKind.ELABORATED
; remove struct typedef

; TYPEDEF PFN_vkCreateWin32SurfaceKHR = VkResult (*)(VkInstance, const VkWin32SurfaceCreateInfoKHR *, const VkAllocationCallbacks *, VkSurfaceKHR *) __attribute__((stdcall)), TypeKind.POINTER
PFN_vkCreateWin32SurfaceKHR typedef qword

; TYPEDEF PFN_vkGetPhysicalDeviceWin32PresentationSupportKHR = VkBool32 (*)(VkPhysicalDevice, uint32_t) __attribute__((stdcall)), TypeKind.POINTER
PFN_vkGetPhysicalDeviceWin32PresentationSupportKHR typedef qword

; FUNCTION VkResult vkCreateWin32SurfaceKHR(VkInstance instance, const VkWin32SurfaceCreateInfoKHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface)
;vkCreateWin32SurfaceKHR qword ?

; FUNCTION VkBool32 vkGetPhysicalDeviceWin32PresentationSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex)
;vkGetPhysicalDeviceWin32PresentationSupportKHR qword ?

VkImportMemoryWin32HandleInfoKHR struct
;   TypeKind.ELABORATED
;   name = sType, type = VkStructureType, offset = 0, size = 4
    _sType dword ?
    byte 4 dup(?)
;   TypeKind.POINTER
;   name = pNext, type = const void *, offset = 8, size = 8
    pNext qword ?
;   TypeKind.ELABORATED
;   name = handleType, type = VkExternalMemoryHandleTypeFlagBits, offset = 16, size = 4
    handleType VkExternalMemoryHandleTypeFlagBits <>
    byte 4 dup(?)
;   TypeKind.ELABORATED
;   name = handle, type = HANDLE, offset = 24, size = 8
    handle HANDLE <>
;   TypeKind.ELABORATED
;   name = name, type = LPCWSTR, offset = 32, size = 8
    name LPCWSTR <>
VkImportMemoryWin32HandleInfoKHR ends

; TYPEDEF VkImportMemoryWin32HandleInfoKHR = struct VkImportMemoryWin32HandleInfoKHR, TypeKind.ELABORATED
; remove struct typedef

VkExportMemoryWin32HandleInfoKHR struct
;   TypeKind.ELABORATED
;   name = sType, type = VkStructureType, offset = 0, size = 4
    _sType dword ?
    byte 4 dup(?)
;   TypeKind.POINTER
;   name = pNext, type = const void *, offset = 8, size = 8
    pNext qword ?
;   TypeKind.POINTER
;   name = pAttributes, type = const SECURITY_ATTRIBUTES *, offset = 16, size = 8
    pAttributes qword ?
;   TypeKind.ELABORATED
;   name = dwAccess, type = DWORD, offset = 24, size = 4
    dwAccess DWORD <>
    byte 4 dup(?)
;   TypeKind.ELABORATED
;   name = name, type = LPCWSTR, offset = 32, size = 8
    name LPCWSTR <>
VkExportMemoryWin32HandleInfoKHR ends

; TYPEDEF VkExportMemoryWin32HandleInfoKHR = struct VkExportMemoryWin32HandleInfoKHR, TypeKind.ELABORATED
; remove struct typedef

VkMemoryWin32HandlePropertiesKHR struct
;   TypeKind.ELABORATED
;   name = sType, type = VkStructureType, offset = 0, size = 4
    _sType dword ?
    byte 4 dup(?)
;   TypeKind.POINTER
;   name = pNext, type = void *, offset = 8, size = 8
    pNext qword ?
;   TypeKind.ELABORATED
;   name = memoryTypeBits, type = uint32_t, offset = 16, size = 4
    memoryTypeBits dword ?
VkMemoryWin32HandlePropertiesKHR ends

; TYPEDEF VkMemoryWin32HandlePropertiesKHR = struct VkMemoryWin32HandlePropertiesKHR, TypeKind.ELABORATED
; remove struct typedef

VkMemoryGetWin32HandleInfoKHR struct
;   TypeKind.ELABORATED
;   name = sType, type = VkStructureType, offset = 0, size = 4
    _sType dword ?
    byte 4 dup(?)
;   TypeKind.POINTER
;   name = pNext, type = const void *, offset = 8, size = 8
    pNext qword ?
;   TypeKind.ELABORATED
;   name = memory, type = VkDeviceMemory, offset = 16, size = 8
    memory VkDeviceMemory <>
;   TypeKind.ELABORATED
;   name = handleType, type = VkExternalMemoryHandleTypeFlagBits, offset = 24, size = 4
    handleType VkExternalMemoryHandleTypeFlagBits <>
VkMemoryGetWin32HandleInfoKHR ends

; TYPEDEF VkMemoryGetWin32HandleInfoKHR = struct VkMemoryGetWin32HandleInfoKHR, TypeKind.ELABORATED
; remove struct typedef

; TYPEDEF PFN_vkGetMemoryWin32HandleKHR = VkResult (*)(VkDevice, const VkMemoryGetWin32HandleInfoKHR *, HANDLE *) __attribute__((stdcall)), TypeKind.POINTER
PFN_vkGetMemoryWin32HandleKHR typedef qword

; TYPEDEF PFN_vkGetMemoryWin32HandlePropertiesKHR = VkResult (*)(VkDevice, VkExternalMemoryHandleTypeFlagBits, HANDLE, VkMemoryWin32HandlePropertiesKHR *) __attribute__((stdcall)), TypeKind.POINTER
PFN_vkGetMemoryWin32HandlePropertiesKHR typedef qword

; FUNCTION VkResult vkGetMemoryWin32HandleKHR(VkDevice device, const VkMemoryGetWin32HandleInfoKHR * pGetWin32HandleInfo, HANDLE * pHandle)
;vkGetMemoryWin32HandleKHR qword ?

; FUNCTION VkResult vkGetMemoryWin32HandlePropertiesKHR(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, HANDLE handle, VkMemoryWin32HandlePropertiesKHR * pMemoryWin32HandleProperties)
;vkGetMemoryWin32HandlePropertiesKHR qword ?

VkWin32KeyedMutexAcquireReleaseInfoKHR struct
;   TypeKind.ELABORATED
;   name = sType, type = VkStructureType, offset = 0, size = 4
    _sType dword ?
    byte 4 dup(?)
;   TypeKind.POINTER
;   name = pNext, type = const void *, offset = 8, size = 8
    pNext qword ?
;   TypeKind.ELABORATED
;   name = acquireCount, type = uint32_t, offset = 16, size = 4
    acquireCount dword ?
    byte 4 dup(?)
;   TypeKind.POINTER
;   name = pAcquireSyncs, type = const VkDeviceMemory *, offset = 24, size = 8
    pAcquireSyncs qword ?
;   TypeKind.POINTER
;   name = pAcquireKeys, type = const uint64_t *, offset = 32, size = 8
    pAcquireKeys qword ?
;   TypeKind.POINTER
;   name = pAcquireTimeouts, type = const uint32_t *, offset = 40, size = 8
    pAcquireTimeouts qword ?
;   TypeKind.ELABORATED
;   name = releaseCount, type = uint32_t, offset = 48, size = 4
    releaseCount dword ?
    byte 4 dup(?)
;   TypeKind.POINTER
;   name = pReleaseSyncs, type = const VkDeviceMemory *, offset = 56, size = 8
    pReleaseSyncs qword ?
;   TypeKind.POINTER
;   name = pReleaseKeys, type = const uint64_t *, offset = 64, size = 8
    pReleaseKeys qword ?
VkWin32KeyedMutexAcquireReleaseInfoKHR ends

; TYPEDEF VkWin32KeyedMutexAcquireReleaseInfoKHR = struct VkWin32KeyedMutexAcquireReleaseInfoKHR, TypeKind.ELABORATED
; remove struct typedef

VkImportSemaphoreWin32HandleInfoKHR struct
;   TypeKind.ELABORATED
;   name = sType, type = VkStructureType, offset = 0, size = 4
    _sType dword ?
    byte 4 dup(?)
;   TypeKind.POINTER
;   name = pNext, type = const void *, offset = 8, size = 8
    pNext qword ?
;   TypeKind.ELABORATED
;   name = semaphore, type = VkSemaphore, offset = 16, size = 8
    semaphore VkSemaphore <>
;   TypeKind.ELABORATED
;   name = flags, type = VkSemaphoreImportFlags, offset = 24, size = 4
    flags VkSemaphoreImportFlags <>
;   TypeKind.ELABORATED
;   name = handleType, type = VkExternalSemaphoreHandleTypeFlagBits, offset = 28, size = 4
    handleType VkExternalSemaphoreHandleTypeFlagBits <>
;   TypeKind.ELABORATED
;   name = handle, type = HANDLE, offset = 32, size = 8
    handle HANDLE <>
;   TypeKind.ELABORATED
;   name = name, type = LPCWSTR, offset = 40, size = 8
    name LPCWSTR <>
VkImportSemaphoreWin32HandleInfoKHR ends

; TYPEDEF VkImportSemaphoreWin32HandleInfoKHR = struct VkImportSemaphoreWin32HandleInfoKHR, TypeKind.ELABORATED
; remove struct typedef

VkExportSemaphoreWin32HandleInfoKHR struct
;   TypeKind.ELABORATED
;   name = sType, type = VkStructureType, offset = 0, size = 4
    _sType dword ?
    byte 4 dup(?)
;   TypeKind.POINTER
;   name = pNext, type = const void *, offset = 8, size = 8
    pNext qword ?
;   TypeKind.POINTER
;   name = pAttributes, type = const SECURITY_ATTRIBUTES *, offset = 16, size = 8
    pAttributes qword ?
;   TypeKind.ELABORATED
;   name = dwAccess, type = DWORD, offset = 24, size = 4
    dwAccess DWORD <>
    byte 4 dup(?)
;   TypeKind.ELABORATED
;   name = name, type = LPCWSTR, offset = 32, size = 8
    name LPCWSTR <>
VkExportSemaphoreWin32HandleInfoKHR ends

; TYPEDEF VkExportSemaphoreWin32HandleInfoKHR = struct VkExportSemaphoreWin32HandleInfoKHR, TypeKind.ELABORATED
; remove struct typedef

VkD3D12FenceSubmitInfoKHR struct
;   TypeKind.ELABORATED
;   name = sType, type = VkStructureType, offset = 0, size = 4
    _sType dword ?
    byte 4 dup(?)
;   TypeKind.POINTER
;   name = pNext, type = const void *, offset = 8, size = 8
    pNext qword ?
;   TypeKind.ELABORATED
;   name = waitSemaphoreValuesCount, type = uint32_t, offset = 16, size = 4
    waitSemaphoreValuesCount dword ?
    byte 4 dup(?)
;   TypeKind.POINTER
;   name = pWaitSemaphoreValues, type = const uint64_t *, offset = 24, size = 8
    pWaitSemaphoreValues qword ?
;   TypeKind.ELABORATED
;   name = signalSemaphoreValuesCount, type = uint32_t, offset = 32, size = 4
    signalSemaphoreValuesCount dword ?
    byte 4 dup(?)
;   TypeKind.POINTER
;   name = pSignalSemaphoreValues, type = const uint64_t *, offset = 40, size = 8
    pSignalSemaphoreValues qword ?
VkD3D12FenceSubmitInfoKHR ends

; TYPEDEF VkD3D12FenceSubmitInfoKHR = struct VkD3D12FenceSubmitInfoKHR, TypeKind.ELABORATED
; remove struct typedef

VkSemaphoreGetWin32HandleInfoKHR struct
;   TypeKind.ELABORATED
;   name = sType, type = VkStructureType, offset = 0, size = 4
    _sType dword ?
    byte 4 dup(?)
;   TypeKind.POINTER
;   name = pNext, type = const void *, offset = 8, size = 8
    pNext qword ?
;   TypeKind.ELABORATED
;   name = semaphore, type = VkSemaphore, offset = 16, size = 8
    semaphore VkSemaphore <>
;   TypeKind.ELABORATED
;   name = handleType, type = VkExternalSemaphoreHandleTypeFlagBits, offset = 24, size = 4
    handleType VkExternalSemaphoreHandleTypeFlagBits <>
VkSemaphoreGetWin32HandleInfoKHR ends

; TYPEDEF VkSemaphoreGetWin32HandleInfoKHR = struct VkSemaphoreGetWin32HandleInfoKHR, TypeKind.ELABORATED
; remove struct typedef

; TYPEDEF PFN_vkImportSemaphoreWin32HandleKHR = VkResult (*)(VkDevice, const VkImportSemaphoreWin32HandleInfoKHR *) __attribute__((stdcall)), TypeKind.POINTER
PFN_vkImportSemaphoreWin32HandleKHR typedef qword

; TYPEDEF PFN_vkGetSemaphoreWin32HandleKHR = VkResult (*)(VkDevice, const VkSemaphoreGetWin32HandleInfoKHR *, HANDLE *) __attribute__((stdcall)), TypeKind.POINTER
PFN_vkGetSemaphoreWin32HandleKHR typedef qword

; FUNCTION VkResult vkImportSemaphoreWin32HandleKHR(VkDevice device, const VkImportSemaphoreWin32HandleInfoKHR * pImportSemaphoreWin32HandleInfo)
;vkImportSemaphoreWin32HandleKHR qword ?

; FUNCTION VkResult vkGetSemaphoreWin32HandleKHR(VkDevice device, const VkSemaphoreGetWin32HandleInfoKHR * pGetWin32HandleInfo, HANDLE * pHandle)
;vkGetSemaphoreWin32HandleKHR qword ?

VkImportFenceWin32HandleInfoKHR struct
;   TypeKind.ELABORATED
;   name = sType, type = VkStructureType, offset = 0, size = 4
    _sType dword ?
    byte 4 dup(?)
;   TypeKind.POINTER
;   name = pNext, type = const void *, offset = 8, size = 8
    pNext qword ?
;   TypeKind.ELABORATED
;   name = fence, type = VkFence, offset = 16, size = 8
    fence VkFence <>
;   TypeKind.ELABORATED
;   name = flags, type = VkFenceImportFlags, offset = 24, size = 4
    flags VkFenceImportFlags <>
;   TypeKind.ELABORATED
;   name = handleType, type = VkExternalFenceHandleTypeFlagBits, offset = 28, size = 4
    handleType VkExternalFenceHandleTypeFlagBits <>
;   TypeKind.ELABORATED
;   name = handle, type = HANDLE, offset = 32, size = 8
    handle HANDLE <>
;   TypeKind.ELABORATED
;   name = name, type = LPCWSTR, offset = 40, size = 8
    name LPCWSTR <>
VkImportFenceWin32HandleInfoKHR ends

; TYPEDEF VkImportFenceWin32HandleInfoKHR = struct VkImportFenceWin32HandleInfoKHR, TypeKind.ELABORATED
; remove struct typedef

VkExportFenceWin32HandleInfoKHR struct
;   TypeKind.ELABORATED
;   name = sType, type = VkStructureType, offset = 0, size = 4
    _sType dword ?
    byte 4 dup(?)
;   TypeKind.POINTER
;   name = pNext, type = const void *, offset = 8, size = 8
    pNext qword ?
;   TypeKind.POINTER
;   name = pAttributes, type = const SECURITY_ATTRIBUTES *, offset = 16, size = 8
    pAttributes qword ?
;   TypeKind.ELABORATED
;   name = dwAccess, type = DWORD, offset = 24, size = 4
    dwAccess DWORD <>
    byte 4 dup(?)
;   TypeKind.ELABORATED
;   name = name, type = LPCWSTR, offset = 32, size = 8
    name LPCWSTR <>
VkExportFenceWin32HandleInfoKHR ends

; TYPEDEF VkExportFenceWin32HandleInfoKHR = struct VkExportFenceWin32HandleInfoKHR, TypeKind.ELABORATED
; remove struct typedef

VkFenceGetWin32HandleInfoKHR struct
;   TypeKind.ELABORATED
;   name = sType, type = VkStructureType, offset = 0, size = 4
    _sType dword ?
    byte 4 dup(?)
;   TypeKind.POINTER
;   name = pNext, type = const void *, offset = 8, size = 8
    pNext qword ?
;   TypeKind.ELABORATED
;   name = fence, type = VkFence, offset = 16, size = 8
    fence VkFence <>
;   TypeKind.ELABORATED
;   name = handleType, type = VkExternalFenceHandleTypeFlagBits, offset = 24, size = 4
    handleType VkExternalFenceHandleTypeFlagBits <>
VkFenceGetWin32HandleInfoKHR ends

; TYPEDEF VkFenceGetWin32HandleInfoKHR = struct VkFenceGetWin32HandleInfoKHR, TypeKind.ELABORATED
; remove struct typedef

; TYPEDEF PFN_vkImportFenceWin32HandleKHR = VkResult (*)(VkDevice, const VkImportFenceWin32HandleInfoKHR *) __attribute__((stdcall)), TypeKind.POINTER
PFN_vkImportFenceWin32HandleKHR typedef qword

; TYPEDEF PFN_vkGetFenceWin32HandleKHR = VkResult (*)(VkDevice, const VkFenceGetWin32HandleInfoKHR *, HANDLE *) __attribute__((stdcall)), TypeKind.POINTER
PFN_vkGetFenceWin32HandleKHR typedef qword

; FUNCTION VkResult vkImportFenceWin32HandleKHR(VkDevice device, const VkImportFenceWin32HandleInfoKHR * pImportFenceWin32HandleInfo)
;vkImportFenceWin32HandleKHR qword ?

; FUNCTION VkResult vkGetFenceWin32HandleKHR(VkDevice device, const VkFenceGetWin32HandleInfoKHR * pGetWin32HandleInfo, HANDLE * pHandle)
;vkGetFenceWin32HandleKHR qword ?

VkImportMemoryWin32HandleInfoNV struct
;   TypeKind.ELABORATED
;   name = sType, type = VkStructureType, offset = 0, size = 4
    _sType dword ?
    byte 4 dup(?)
;   TypeKind.POINTER
;   name = pNext, type = const void *, offset = 8, size = 8
    pNext qword ?
;   TypeKind.ELABORATED
;   name = handleType, type = VkExternalMemoryHandleTypeFlagsNV, offset = 16, size = 4
    handleType VkExternalMemoryHandleTypeFlagsNV <>
    byte 4 dup(?)
;   TypeKind.ELABORATED
;   name = handle, type = HANDLE, offset = 24, size = 8
    handle HANDLE <>
VkImportMemoryWin32HandleInfoNV ends

; TYPEDEF VkImportMemoryWin32HandleInfoNV = struct VkImportMemoryWin32HandleInfoNV, TypeKind.ELABORATED
; remove struct typedef

VkExportMemoryWin32HandleInfoNV struct
;   TypeKind.ELABORATED
;   name = sType, type = VkStructureType, offset = 0, size = 4
    _sType dword ?
    byte 4 dup(?)
;   TypeKind.POINTER
;   name = pNext, type = const void *, offset = 8, size = 8
    pNext qword ?
;   TypeKind.POINTER
;   name = pAttributes, type = const SECURITY_ATTRIBUTES *, offset = 16, size = 8
    pAttributes qword ?
;   TypeKind.ELABORATED
;   name = dwAccess, type = DWORD, offset = 24, size = 4
    dwAccess DWORD <>
VkExportMemoryWin32HandleInfoNV ends

; TYPEDEF VkExportMemoryWin32HandleInfoNV = struct VkExportMemoryWin32HandleInfoNV, TypeKind.ELABORATED
; remove struct typedef

; TYPEDEF PFN_vkGetMemoryWin32HandleNV = VkResult (*)(VkDevice, VkDeviceMemory, VkExternalMemoryHandleTypeFlagsNV, HANDLE *) __attribute__((stdcall)), TypeKind.POINTER
PFN_vkGetMemoryWin32HandleNV typedef qword

; FUNCTION VkResult vkGetMemoryWin32HandleNV(VkDevice device, VkDeviceMemory memory, VkExternalMemoryHandleTypeFlagsNV handleType, HANDLE * pHandle)
;vkGetMemoryWin32HandleNV qword ?

VkWin32KeyedMutexAcquireReleaseInfoNV struct
;   TypeKind.ELABORATED
;   name = sType, type = VkStructureType, offset = 0, size = 4
    _sType dword ?
    byte 4 dup(?)
;   TypeKind.POINTER
;   name = pNext, type = const void *, offset = 8, size = 8
    pNext qword ?
;   TypeKind.ELABORATED
;   name = acquireCount, type = uint32_t, offset = 16, size = 4
    acquireCount dword ?
    byte 4 dup(?)
;   TypeKind.POINTER
;   name = pAcquireSyncs, type = const VkDeviceMemory *, offset = 24, size = 8
    pAcquireSyncs qword ?
;   TypeKind.POINTER
;   name = pAcquireKeys, type = const uint64_t *, offset = 32, size = 8
    pAcquireKeys qword ?
;   TypeKind.POINTER
;   name = pAcquireTimeoutMilliseconds, type = const uint32_t *, offset = 40, size = 8
    pAcquireTimeoutMilliseconds qword ?
;   TypeKind.ELABORATED
;   name = releaseCount, type = uint32_t, offset = 48, size = 4
    releaseCount dword ?
    byte 4 dup(?)
;   TypeKind.POINTER
;   name = pReleaseSyncs, type = const VkDeviceMemory *, offset = 56, size = 8
    pReleaseSyncs qword ?
;   TypeKind.POINTER
;   name = pReleaseKeys, type = const uint64_t *, offset = 64, size = 8
    pReleaseKeys qword ?
VkWin32KeyedMutexAcquireReleaseInfoNV ends

; TYPEDEF VkWin32KeyedMutexAcquireReleaseInfoNV = struct VkWin32KeyedMutexAcquireReleaseInfoNV, TypeKind.ELABORATED
; remove struct typedef

; enum VkFullScreenExclusiveEXT {
    VK_FULL_SCREEN_EXCLUSIVE_DEFAULT_EXT equ 0
    VK_FULL_SCREEN_EXCLUSIVE_ALLOWED_EXT equ 1
    VK_FULL_SCREEN_EXCLUSIVE_DISALLOWED_EXT equ 2
    VK_FULL_SCREEN_EXCLUSIVE_APPLICATION_CONTROLLED_EXT equ 3
    VK_FULL_SCREEN_EXCLUSIVE_MAX_ENUM_EXT equ 2147483647
; }

; TYPEDEF VkFullScreenExclusiveEXT = enum VkFullScreenExclusiveEXT, TypeKind.ELABORATED
VkFullScreenExclusiveEXT typedef dword

VkSurfaceFullScreenExclusiveInfoEXT struct
;   TypeKind.ELABORATED
;   name = sType, type = VkStructureType, offset = 0, size = 4
    _sType dword ?
    byte 4 dup(?)
;   TypeKind.POINTER
;   name = pNext, type = void *, offset = 8, size = 8
    pNext qword ?
;   TypeKind.ELABORATED
;   name = fullScreenExclusive, type = VkFullScreenExclusiveEXT, offset = 16, size = 4
    fullScreenExclusive VkFullScreenExclusiveEXT ?
VkSurfaceFullScreenExclusiveInfoEXT ends

; TYPEDEF VkSurfaceFullScreenExclusiveInfoEXT = struct VkSurfaceFullScreenExclusiveInfoEXT, TypeKind.ELABORATED
; remove struct typedef

VkSurfaceCapabilitiesFullScreenExclusiveEXT struct
;   TypeKind.ELABORATED
;   name = sType, type = VkStructureType, offset = 0, size = 4
    _sType dword ?
    byte 4 dup(?)
;   TypeKind.POINTER
;   name = pNext, type = void *, offset = 8, size = 8
    pNext qword ?
;   TypeKind.ELABORATED
;   name = fullScreenExclusiveSupported, type = VkBool32, offset = 16, size = 4
    fullScreenExclusiveSupported VkBool32 <>
VkSurfaceCapabilitiesFullScreenExclusiveEXT ends

; TYPEDEF VkSurfaceCapabilitiesFullScreenExclusiveEXT = struct VkSurfaceCapabilitiesFullScreenExclusiveEXT, TypeKind.ELABORATED
; remove struct typedef

VkSurfaceFullScreenExclusiveWin32InfoEXT struct
;   TypeKind.ELABORATED
;   name = sType, type = VkStructureType, offset = 0, size = 4
    _sType dword ?
    byte 4 dup(?)
;   TypeKind.POINTER
;   name = pNext, type = const void *, offset = 8, size = 8
    pNext qword ?
;   TypeKind.ELABORATED
;   name = hmonitor, type = HMONITOR, offset = 16, size = 8
    hmonitor qword ?
VkSurfaceFullScreenExclusiveWin32InfoEXT ends

; TYPEDEF VkSurfaceFullScreenExclusiveWin32InfoEXT = struct VkSurfaceFullScreenExclusiveWin32InfoEXT, TypeKind.ELABORATED
; remove struct typedef

; TYPEDEF PFN_vkGetPhysicalDeviceSurfacePresentModes2EXT = VkResult (*)(VkPhysicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR *, uint32_t *, VkPresentModeKHR *) __attribute__((stdcall)), TypeKind.POINTER
PFN_vkGetPhysicalDeviceSurfacePresentModes2EXT typedef qword

; TYPEDEF PFN_vkAcquireFullScreenExclusiveModeEXT = VkResult (*)(VkDevice, VkSwapchainKHR) __attribute__((stdcall)), TypeKind.POINTER
PFN_vkAcquireFullScreenExclusiveModeEXT typedef qword

; TYPEDEF PFN_vkReleaseFullScreenExclusiveModeEXT = VkResult (*)(VkDevice, VkSwapchainKHR) __attribute__((stdcall)), TypeKind.POINTER
PFN_vkReleaseFullScreenExclusiveModeEXT typedef qword

; TYPEDEF PFN_vkGetDeviceGroupSurfacePresentModes2EXT = VkResult (*)(VkDevice, const VkPhysicalDeviceSurfaceInfo2KHR *, VkDeviceGroupPresentModeFlagsKHR *) __attribute__((stdcall)), TypeKind.POINTER
PFN_vkGetDeviceGroupSurfacePresentModes2EXT typedef qword

; FUNCTION VkResult vkGetPhysicalDeviceSurfacePresentModes2EXT(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR * pSurfaceInfo, uint32_t * pPresentModeCount, VkPresentModeKHR * pPresentModes)
;vkGetPhysicalDeviceSurfacePresentModes2EXT qword ?

; FUNCTION VkResult vkAcquireFullScreenExclusiveModeEXT(VkDevice device, VkSwapchainKHR swapchain)
;vkAcquireFullScreenExclusiveModeEXT qword ?

; FUNCTION VkResult vkReleaseFullScreenExclusiveModeEXT(VkDevice device, VkSwapchainKHR swapchain)
;vkReleaseFullScreenExclusiveModeEXT qword ?

; FUNCTION VkResult vkGetDeviceGroupSurfacePresentModes2EXT(VkDevice device, const VkPhysicalDeviceSurfaceInfo2KHR * pSurfaceInfo, VkDeviceGroupPresentModeFlagsKHR * pModes)
;vkGetDeviceGroupSurfacePresentModes2EXT qword ?

; TYPEDEF PFN_vkAcquireWinrtDisplayNV = VkResult (*)(VkPhysicalDevice, VkDisplayKHR) __attribute__((stdcall)), TypeKind.POINTER
PFN_vkAcquireWinrtDisplayNV typedef qword

; TYPEDEF PFN_vkGetWinrtDisplayNV = VkResult (*)(VkPhysicalDevice, uint32_t, VkDisplayKHR *) __attribute__((stdcall)), TypeKind.POINTER
PFN_vkGetWinrtDisplayNV typedef qword

; FUNCTION VkResult vkAcquireWinrtDisplayNV(VkPhysicalDevice physicalDevice, VkDisplayKHR display)
;vkAcquireWinrtDisplayNV qword ?

; FUNCTION VkResult vkGetWinrtDisplayNV(VkPhysicalDevice physicalDevice, uint32_t deviceRelativeId, VkDisplayKHR * pDisplay)
;vkGetWinrtDisplayNV qword ?

