;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
;           MASM64 Vulkan
;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
option casemap:none
StdOutHandle equ -11
include masm64rt.inc
include saha.asm
include macros.asm
include vulkan_core.asm
include vulkan_win32.asm
include vkenums.asm

;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
; types
;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
pointer typedef qword
VkInstance typedef qword
VkSurfaceKHR typedef qword

Payload struct
    tag qword ?
    id byte ?
Payload ends

vec3 struct
    x real4 ?
    y real4 ?
    z real4 ?
vec3 ends

;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
; macros
;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
DebugPrint macro Message:req
    lea rcx, Message
    call OutputDebugString
endm

VK_MAKE_API_VERSION macro name:req, variant:req, major:req, minor:req, patch:req
    name equ (((variant shl 29) or (major shl 22) or (minor shl 12) or patch))
endm

;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
.const
;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
outputmessage byte 'hello, world!'
              byte 0ah, 0dh
              byte 'from masm64!'
              byte 0ah, 0dh
outputmessagelength equ $ - outputmessage

window_class_name byte "MASM64HandmadeWindowClass", 0
window_title byte "MASM64Handmade", 0
application_name byte "MASM64Vulkan", 0

VK_MAKE_API_VERSION application_api_version, 0, 1, 1, 0

;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
.data
;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
pos qword ?
paint_phrase byte "I must Paint now!", 0ah, 0dh, 0
close_phrase byte "I must Close now!", 0ah, 0dh, 0
vulkan_phrase byte "Vulkan Validation Layer: ", 0
new_line byte ".", 0ah, 0
align 16
window_instance qword ?
nShowCmd sdword 10
align 16
window_class WNDCLASSEX <>
align 16
window_handle HWND ?
align 16
message MSG <>
message_result byte ?
found_validation byte ?

align 16
vulkan_module HMODULE ?
align 16
context_instance VkInstance ?
align 16
application_info VkApplicationInfo <>
align 16
instance_info VkInstanceCreateInfo <>

layer_string_0 byte "VK_LAYER_KHRONOS_validation", 0
layers qword offset layer_string_0
layers_available qword ?
layers_count qword ?

extension_string_0 byte "VK_KHR_surface", 0
extension_string_1 byte "VK_KHR_win32_surface", 0
extension_string_2 byte "VK_EXT_debug_utils", 0
extension_string_array qword offset extension_string_0
                       qword offset extension_string_1
                       qword offset extension_string_2
extension_string_array_end:
extension_string_array_count = (extension_string_array_end - extension_string_array) / sizeof qword
; sizeofarray extension_string_array_count, extension_string_array_end, extension_string_array
extensions_available qword ?
extension_count dword ?
found_extensions byte ?

align 16
debug_callback_create_info VkDebugUtilsMessengerCreateInfoEXT <>
align 16
debug_callback_create_info_2 VkDebugUtilsMessengerCreateInfoEXT <>
debug_messenger qword ?

align 16
surface_create_info VkWin32SurfaceCreateInfoKHR <>
context_surface VkSurfaceKHR ?

; procs to load
vkEnumerateInstanceLayerProperties qword ?
vkEnumerateInstanceExtensionProperties qword ?
vkCreateInstance qword ?

vkGetInstanceProcAddr qword ?
vkCreateDebugReportCallbackEXT qword ?
vkDestroyDebugReportCallbackEXT qword ?
vkDebugReportMessageEXT qword ?
vkCreateDebugUtilsMessengerEXT qword ?
vkCreateWin32SurfaceKHR qword ?

;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
.code
;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
align 16
VulkanLoad proc
    invoke LoadLibrary, "vulkan-1.dll"
    AssertNotEq rax, 0
    mov vulkan_module, rax

    invoke GetProcAddress, vulkan_module, "vkCreateInstance"
    AssertNotEq rax, 0
    mov vkCreateInstance, rax

    invoke GetProcAddress, vulkan_module, "vkEnumerateInstanceLayerProperties"
    AssertNotEq rax, 0
    mov vkEnumerateInstanceLayerProperties, rax

    invoke GetProcAddress, vulkan_module, "vkEnumerateInstanceExtensionProperties"
    AssertNotEq rax, 0
    mov vkEnumerateInstanceExtensionProperties, rax

    invoke GetProcAddress, vulkan_module, "vkGetInstanceProcAddr"
    AssertNotEq rax, 0
    mov vkGetInstanceProcAddr, rax

    invoke GetProcAddress, vulkan_module, "vkCreateWin32SurfaceKHR"
    AssertNotEq rax, 0
    mov vkCreateWin32SurfaceKHR, rax
    ret
VulkanLoad endp

align 16
VulkanLoadExt proc
    invoke vkGetInstanceProcAddr, context_instance, "vkCreateDebugReportCallbackEXT"
    ; AssertNotEq rax, 0
    mov vkCreateDebugReportCallbackEXT, rax

    invoke vkGetInstanceProcAddr, context_instance, "vkDestroyDebugReportCallbackEXT"
    ; AssertNotEq rax, 0
    mov vkDestroyDebugReportCallbackEXT, rax

    invoke vkGetInstanceProcAddr, context_instance, "vkDebugReportMessageEXT"
    ; AssertNotEq rax, 0
    mov vkDebugReportMessageEXT, rax

    invoke vkGetInstanceProcAddr, context_instance, "vkCreateDebugUtilsMessengerEXT"
    ; AssertEq rax, VK_SUCCESS
    AssertNotEq rax, 0
    mov vkCreateDebugUtilsMessengerEXT, rax

    ret
VulkanLoadExt endp

align 16
WindowProc proc hWin:QWORD,uMsg:QWORD,wParam:QWORD,lParam:QWORD
    cmp uMsg, WM_PAINT
    je OnPaint

    cmp uMsg, WM_CLOSE
    je OnClose

    cmp uMsg, WM_CREATE
    je OnCreate

    cmp uMsg, WM_SIZE
    je OnSize

    cmp uMsg, WM_DESTROY
    je OnDestroy

    invoke DefWindowProc, hWin, uMsg, wParam, lParam
    ret

    OnPaint:
        ; DebugPrint paint_phrase
        ret
    OnClose:
        invoke SendMessage, hWin, WM_DESTROY, 0, 0
        invoke PostQuitMessage, 0
        ret
    OnCreate:
        xor rax, rax
        ret
    OnSize:
        ret
    OnDestroy:
        ; DebugPrint close_phrase
        invoke PostQuitMessage, 0
        ret
    ret
WindowProc endp

align 16
MessageLoopProcess proc
    LOCAL msg    :MSG
    LOCAL pmsg   :QWORD

    mov pmsg, ptr$(msg)
    jmp gmsg

  mloop:
    invoke TranslateMessage,pmsg
    invoke DispatchMessage,pmsg
  gmsg:
    test rax, rv(GetMessage,pmsg,0,0,0)     ; loop until GetMessage returns zero
    jnz mloop
    ret
MessageLoopProcess endp

align 16
arenaTest proc
    mov rcx, 32
    call memoryIsPowerOfTwo
    AssertEq rax, 1
    mov rcx, 33
    call memoryIsPowerOfTwo
    AssertEq rax, 0

    invoke arenaPush, ADDR arena, sizeof qword * 24, 8
    xor rcx, rcx
    loop_arr_00000:
        mov rdx, 0DEADBEEFCAFEBABEh
        mov [rax + rcx * 8], rdx
        inc rcx
        cmp rcx, 24
        jl loop_arr_00000
    invoke arenaSetPos, ADDR arena, pos

    invoke arenaPush, ADDR arena, 12, 8
    xor rcx, rcx
    loop_arr_00001:
        mov rdx, 0CAFEBABEF00DB105h
        mov [rax + rcx * 8], rdx
        inc rcx
        cmp rcx, 12
        jl loop_arr_00001
    invoke arenaSetPos, ADDR arena, pos

    arenaPushArray ADDR arena, Payload, 16, 8
    mov rsi, rax
    xor rcx, rcx
    mov r8, sizeof Payload
    mov r9, 0DEADFEEDBABE5EEDh
    loop_arr_00002:
        mov rax, rcx
        mul r8
        mov [rsi.Payload.tag + rax], r9
        mov [rsi.Payload.id + rax], r9b
        inc rcx
        cmp rcx, 16
        jl loop_arr_00002
    invoke arenaSetPos, ADDR arena, pos

    arenaPushArray ADDR arena, Payload, 16, 8
    mov rsi, rax
    xor rcx, rcx
    mov r8, sizeof Payload
    mov r9, 0DEFE0000BAAD0000h
    loop_arr_00003:
        mov [rsi.Payload.tag], r9
        mov [rsi.Payload.id], cl
        add rsi, r8
        inc rcx
        cmp rcx, 16
        jl loop_arr_00003
    invoke arenaSetPos, ADDR arena, pos

    ;;;; ; arenaPushArray ADDR arena, qword, 1000h, 8
    ;;;; invoke arenaPush, ADDR arena, sizeof qword * 1000h, 8
    ;;;; mov rsi, rax
    ;;;; xor rcx, rcx
    ;;;; mov r8, sizeof qword
    ;;;; mov r9, 0DEFEDEFEDEFEDEFEh
    ;;;; loop_arr_00004:
    ;;;;     mov [rsi], r9
    ;;;;     add rsi, r8
    ;;;;     inc rcx
    ;;;;     cmp rcx, 1000h
    ;;;;     jl loop_arr_00004
    ;;;; ; invoke arenaSetPos, ADDR arena, pos
    ;;;; invoke arenaPush, ADDR arena, sizeof qword * 1000h, 8
    ;;;; ; arenaPushArray ADDR arena, qword, 1000h, 8
    ;;;; mov rsi, rax
    ;;;; xor rcx, rcx
    ;;;; mov r8, sizeof qword
    ;;;; mov r9, 0DEFEDEFEDEFEDEFEh
    ;;;; loop_arr_00005:
    ;;;;     mov [rsi], r9
    ;;;;     add rsi, r8
    ;;;;     inc rcx
    ;;;;     cmp rcx, 1000h
    ;;;;     jl loop_arr_00005

    xor rax, rax
    ret
arenaTest endp

; rcx = pointer to string1 (const char*)
; rdx = pointer to string2 (const char*)
; returns:
;   rax = 0 if equal
;   rax < 0 if string1 < string2
;   rax > 0 if string1 > string2
strcmp64 PROC
        SaveRegisters
        movzx   r8d, BYTE PTR [rcx]
        xor     r9d, r9d
        cmp     r8b, BYTE PTR [rdx]
        jne     SHORT $LN10@my_strcmp
        mov     r10, rcx
        mov     rax, rdx
        sub     r10, rdx
$LL2@my_strcmp:
        test    r8b, r8b
        je      SHORT $LN10@my_strcmp
        cmp     BYTE PTR [rax], 0
        je      SHORT $LN10@my_strcmp
        movzx   r8d, BYTE PTR [r10+rax+1]
        inc     rax
        inc     r9d
        cmp     r8b, BYTE PTR [rax]
        je      SHORT $LL2@my_strcmp
$LN10@my_strcmp:
        movsxd  rax, r9d
        movsx   r8d, BYTE PTR [rax+rcx]
        add     rax, rdx
        test    r8b, r8b
        jne     SHORT $LN13@my_strcmp
        cmp     BYTE PTR [rax], r8b
        jne     SHORT $LN13@my_strcmp
        xor     eax, eax
        ret     0
$LN13@my_strcmp:
        movsx   ecx, BYTE PTR [rax]
        mov     eax, r8d
        sub     eax, ecx
        RestoreRegisters
        ret     0
strcmp64 ENDP

; VKAPI_ATTR 
; VkBool32 
; VKAPI_CALL 
; debugCallback(
; VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity, rcx
; VkDebugUtilsMessageTypeFlagsEXT messageType, rdx
; const VkDebugUtilsMessengerCallbackDataEXT* pCallbackData, r8
; void* pUserData), r9
align 16
VulkanDebugReportCallback proc
    push rbx
    sub rsp, 28h
    lea rbx, [r8 + 0D0h] ; hack!
    lea rcx, vulkan_phrase
    invoke OutputDebugString
    mov rcx, rbx
    invoke OutputDebugString
    lea rcx, new_line
    invoke OutputDebugString
    add rsp, 28h
    pop rbx
    xor rax, rax
    ret
VulkanDebugReportCallback endp

align 16
main proc
    lea rcx, arena
    call arenaInit
    mov pos, rax
    call arenaTest

    mov window_instance, rv(GetModuleHandle, 0)

    mov rcx, StdOutHandle
    call GetStdHandle
    invoke WriteFile, rax, ADDR outputmessage, outputmessagelength, 0

    mov window_class.cbSize, sizeof WNDCLASSEX
    xor rcx, rcx
    mov rcx, CS_HREDRAW or CS_VREDRAW
    mov window_class.style, ecx
    lea rcx, WindowProc
    mov window_class.lpfnWndProc, rcx
    mov rcx, window_instance
    mov window_class.hInstance, rcx
    lea rcx, window_class_name
    mov window_class.lpszClassName, rcx

    invoke RegisterClassEx, ADDR window_class
    AssertNotEq rax, 0

    invoke CreateWindowEx, 0, ADDR window_class_name, ADDR window_title, WS_OVERLAPPEDWINDOW or WS_VISIBLE, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, 0, 0, window_instance, 0
    AssertNotEq rax, 0
    mov window_handle, rax

    call VulkanLoad

    ; instance layers
    invoke vkEnumerateInstanceLayerProperties, ADDR layers_count, 0
    AssertEq rax, VK_SUCCESS
    arenaPushArrayZero ADDR arena, VkLayerProperties, layers_count, 4
    ; invoke arenaPushZero, ADDR arena, rax, 4
    AssertNotEq rax, 0
    mov layers_available, rax
    invoke vkEnumerateInstanceLayerProperties, ADDR layers_count, rax

    mov rsi, layers_available
    xor rcx, rcx
    mov r8, sizeof VkLayerProperties
    lea r9, layer_string_0
    loop_validation_layer_find_00000000:
        push rcx
        push rdx
        lea rcx, [rsi.VkLayerProperties.layerName]
        mov rdx, r9
        call strcmp64
        cmp rax, 0
        jne validation_label_not_found 
        mov found_validation, 1
        lea r9, layer_string_0
        validation_label_not_found:
        pop rdx
        pop rcx

        add rsi, r8
        inc rcx
        cmp rcx, layers_available
        jl loop_validation_layer_find_00000000
    ; invoke arenaSetPos, ADDR arena, pos

    ; instance extension_string_array
    invoke vkEnumerateInstanceExtensionProperties, 0, ADDR extension_count, 0
    AssertEq rax, VK_SUCCESS
    mov edx, sizeof VkExtensionProperties 
    xor rax, rax
    mov eax, extension_count
    mul edx
    invoke arenaPushZero, ADDR arena, rax, 4
    AssertNotEq rax, 0
    ; invoke arenaPush, ADDR arena, rax, 4
    mov extensions_available, rax
    invoke vkEnumerateInstanceExtensionProperties, 0, ADDR extension_count, extensions_available
    AssertEq rax, VK_SUCCESS

    ; mov r9, extension_string_array + sizeof qword * 0
    ; mov r9, extension_string_array + sizeof qword * 1
    ; mov r9, extension_string_array + sizeof qword * 2

    mov rsi, extensions_available
    xor rcx, rcx
    mov r8, sizeof VkExtensionProperties
    mov r9, extension_string_array + 8 * 0
    loop_extension_validation_layer_find_00000000:
        push rcx
        push rdx
        lea rcx, [rsi.VkExtensionProperties.extensionName]
        mov rdx, r9
        call strcmp64
        cmp rax, 0
        jne extension_validation_label_not_found_00000000 
        add found_extensions, 1
        lea r9, layer_string_0
        extension_validation_label_not_found_00000000:
        pop rdx
        pop rcx
        add rsi, r8
        inc rcx
        cmp rcx, extensions_available
        jl loop_extension_validation_layer_find_00000000

    mov rsi, extensions_available
    xor rcx, rcx
    mov r8, sizeof VkExtensionProperties
    mov r9, extension_string_array + 8 * 1
    loop_extension_validation_layer_find_00000001:
        push rcx
        push rdx
        lea rcx, [rsi.VkExtensionProperties.extensionName]
        mov rdx, r9
        call strcmp64
        cmp rax, 0
        jne extension_validation_label_not_found_00000001
        add found_extensions, 1
        lea r9, layer_string_0
        extension_validation_label_not_found_00000001:
        pop rdx
        pop rcx
        add rsi, r8
        inc rcx
        cmp rcx, extensions_available
        jl loop_extension_validation_layer_find_00000001

    mov rsi, extensions_available
    xor rcx, rcx
    mov r8, sizeof VkExtensionProperties
    mov r9, extension_string_array + 8 * 2
    loop_extension_validation_layer_find_00000002:
        push rcx
        push rdx
        lea rcx, [rsi.VkExtensionProperties.extensionName]
        mov rdx, r9
        call strcmp64
        cmp rax, 0
        jne extension_validation_label_not_found_00000002 
        add found_extensions, 1
        lea r9, layer_string_0
        extension_validation_label_not_found_00000002:
        pop rdx
        pop rcx
        add rsi, r8
        inc rcx
        cmp rcx, extensions_available
        jl loop_extension_validation_layer_find_00000002
    invoke arenaSetPos, ADDR arena, pos

    mov al, extension_string_array_count
    AssertEq al, found_extensions

    ; create instance
    mov application_info.sType, VK_STRUCTURE_TYPE_APPLICATION_INFO
    lea rcx, application_name
        mov application_info.pApplicationName, rcx
    mov application_info.applicationVersion, application_api_version
    mov application_info.apiVersion, application_api_version
    mov application_info.engineVersion, 1

    mov instance_info.sType, VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO
    lea rcx, application_info
        mov instance_info.pApplicationInfo, rcx
    mov instance_info.enabledLayerCount, 1
    lea rcx, layers
        mov instance_info.ppEnabledLayerNames, rcx
    ; debuginfo
    mov debug_callback_create_info.sType, VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT
    mov debug_callback_create_info.messageSeverity, VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT or VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT or VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT
    mov debug_callback_create_info.messageType, VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT or VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT or VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT
    lea rcx, VulkanDebugReportCallback
        mov debug_callback_create_info.pfnUserCallback, rcx
    ; debuginfo
    mov instance_info.enabledExtensionCount, 3
    lea rcx, extension_string_array
        mov instance_info.ppEnabledExtensionNames, rcx
    lea rcx, debug_callback_create_info
        mov instance_info.pNext, rcx

    invoke vkCreateInstance, ADDR instance_info, 0, ADDR context_instance
    AssertEq rax, VK_SUCCESS

    call VulkanLoadExt

    ; debuginfo
    ; mov debug_callback_create_info_2.sType, VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT
    ; mov debug_callback_create_info_2.messageSeverity, VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT or VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT or VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT
    ; mov debug_callback_create_info_2.messageType, VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT or VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT or VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT
    ; lea rcx, VulkanDebugReportCallback
    ;     mov debug_callback_create_info_2.pfnUserCallback, rcx
    ; debuginfo
    invoke vkCreateDebugUtilsMessengerEXT, context_instance, ADDR debug_callback_create_info, 0, ADDR debug_messenger
    AssertEq rax, VK_SUCCESS

    mov surface_create_info.sType, VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR
    mov rcx, window_instance
    mov surface_create_info.hinstance, rcx
    mov rcx,  window_handle
    mov surface_create_info.hwnd, rcx

    invoke vkCreateWin32SurfaceKHR, context_instance, ADDR surface_create_info, 0, ADDR context_surface
    AssertEq rax, VK_SUCCESS

    call MessageLoopProcess

    invoke ExitProcess, 0
    ret
main endp
end
