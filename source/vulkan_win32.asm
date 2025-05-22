; // VK_KHR_win32_surface is a preprocessor guard. Do not pass it to API calls.
; #define VK_KHR_win32_surface 1
; #define VK_KHR_WIN32_SURFACE_SPEC_VERSION 6
; #define VK_KHR_WIN32_SURFACE_EXTENSION_NAME "VK_KHR_win32_surface"
; typedef VkFlags VkWin32SurfaceCreateFlagsKHR;
; typedef struct VkWin32SurfaceCreateInfoKHR {
;     VkStructureType                 sType;
;     const void*                     pNext;
;     VkWin32SurfaceCreateFlagsKHR    flags;
;     HINSTANCE                       hinstance;
;     HWND                            hwnd;
; } VkWin32SurfaceCreateInfoKHR;

VK_KHR_win32_surface equ 1
VK_KHR_WIN32_SURFACE_SPEC_VERSION equ 6
VK_KHR_WIN32_SURFACE_EXTENSION_NAME byte "VK_KHR_win32_surface", 0
VkWin32SurfaceCreateInfoKHR struct
    sType dword ?
    byte 4 dup(?)
    pNext qword ?
    flags dword ?
    byte 4 dup(?)
    hinstance qword ?
    hwnd qword ?
VkWin32SurfaceCreateInfoKHR ends
