;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
;           MASM64 Handmade
;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
option casemap:none
StdOutHandle equ -11
include masm64rt.inc
include vulkan.asm

extrn vkEnumerateInstanceExtensionProperties:PROC
; extrn vkCreateInstance:PROC
; extrn vkEnumerateInstanceLayerProperties:PROC

; typedef struct VkApplicationInfo {
;     VkStructureType    sType;
;     const void*        pNext;
;     const char*        pApplicationName;
;     uint32_t           applicationVersion;
;     const char*        pEngineName;
;     uint32_t           engineVersion;
;     uint32_t           apiVersion;
; } VkApplicationInfo;

VkApplicationInfo STRUCT
    sType               dd ?        ; +0  (uint32_t)
    _pad0               dd ?        ; +4  (padding for alignment)
    pNext               dq ?        ; +8  (pointer)
    pApplicationName    dq ?        ; +16 (pointer)
    applicationVersion  dd ?        ; +24 (uint32_t)
    _pad1               dd ?        ; +28 (padding)
    pEngineName         dq ?        ; +32 (pointer)
    engineVersion       dd ?        ; +40 (uint32_t)
    apiVersion          dd ?        ; +44 (uint32_t)
VkApplicationInfo ENDS

; typedef struct VkInstanceCreateInfo {
;     VkStructureType             sType;
;     const void*                 pNext;
;     VkInstanceCreateFlags       flags;
;     const VkApplicationInfo*    pApplicationInfo;
;     uint32_t                    enabledLayerCount;
;     const char* const*          ppEnabledLayerNames;
;     uint32_t                    enabledExtensionCount;
;     const char* const*          ppEnabledExtensionNames;
; } VkInstanceCreateInfo;


VkInstanceCreateInfo STRUCT
    sType                   dd ?            ; +0  (4 bytes)
    _pad0                   dd ?            ; +4  (padding)
    pNext                   dq ?            ; +8  (8-byte aligned)
    flags                   dd ?            ; +16
    _pad1                   dd ?            ; +20 (padding)
    pApplicationInfo        dq ?            ; +24
    enabledLayerCount       dd ?            ; +32
    _pad2                   dd ?            ; +36 (padding)
    ppEnabledLayerNames     dq ?            ; +40
    enabledExtensionCount   dd ?            ; +48
    _pad3                   dd ?            ; +52 (padding)
    ppEnabledExtensionNames dq ?            ; +56
VkInstanceCreateInfo ENDS

; typedef struct VkLayerProperties {
;     char        layerName[VK_MAX_EXTENSION_NAME_SIZE];
;     uint32_t    specVersion;
;     uint32_t    implementationVersion;
;     char        description[VK_MAX_DESCRIPTION_SIZE];
; } VkLayerProperties;

MAX equ 256
VkLayerProperties struct
    layerName byte MAX dup(?)
    specVersion dword ?
    implementationVersion dword ?
    description byte MAX dup(?)
VkLayerProperties ends

;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
; types
;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
pointer typedef qword
VkInstance typedef qword
PFN_vkCreateInstance typedef qword

vec3 struct
    x real4 ?
    y real4 ?
    z real4 ?
vec3 ends

;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
; macros
;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
AssertNotZero macro reg:req
    LOCAL .ok
    cmp reg, 0
    jne .ok
    int 3
    .ok:
endm

VkAssert macro reg:req, flag:req
    LOCAL .ok
    cmp reg, flag
    je .ok
    int 3
    .ok:
endm

DebugPrint macro Message:req
    lea rcx, Message
    call OutputDebugString
endm

VK_MAKE_API_VERSION macro name:req, variant:req, major:req, minor:req, patch:req
    name equ (((variant shl 29) or (major shl 22) or (minor shl 12) or patch))
endm

;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
; const
;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
.const
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
; data
;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
.data
paint_phrase byte "I must Paint now!", 0ah, 0dh, 0
close_phrase byte "I must Close now!", 0ah, 0dh, 0
instance qword ?
nShowCmd sdword 10
window_class WNDCLASSEX <>
window_handle HWND ?
message MSG <>
message_result byte ?
extension_count dword ?
layer_count dword ?

vulkan_module HMODULE ?
context_instance VkInstance ?
application_info VkApplicationInfo <>
instance_info VkInstanceCreateInfo <>

vkEnumerateInstanceLayerProperties qword ?
vkCreateInstance PFN_vkCreateInstance ?

;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
; code
;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
__crash:
    int 3

.code
VulkanLoad proc
    invoke LoadLibrary, "vulkan-1.dll"
    AssertNotZero rax
    mov vulkan_module, rax

    invoke GetProcAddress, vulkan_module, "vkCreateInstance"
    AssertNotZero rax
    mov vkCreateInstance, rax

    invoke GetProcAddress, vulkan_module, "vkEnumerateInstanceLayerProperties"
    AssertNotZero rax
    mov vkEnumerateInstanceLayerProperties, rax

    ret
VulkanLoad endp

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
        DebugPrint paint_phrase
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
        DebugPrint close_phrase
        invoke PostQuitMessage, 0
        ret
    ret
WindowProc endp

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

main proc
    mov instance, rv(GetModuleHandle, 0)

    mov rcx, StdOutHandle
    call GetStdHandle
    invoke WriteFile, rax, ADDR outputmessage, outputmessagelength, 0

    mov window_class.cbSize, sizeof WNDCLASSEX
    xor rcx, rcx
    mov rcx, CS_HREDRAW or CS_VREDRAW
    mov window_class.style, ecx
    lea rcx, WindowProc
    mov window_class.lpfnWndProc, rcx
    mov rcx, instance
    mov window_class.hInstance, rcx
    lea rcx, window_class_name
    mov window_class.lpszClassName, rcx

    invoke RegisterClassEx, ADDR window_class
    AssertNotZero rax

    invoke CreateWindowEx, 0, ADDR window_class_name, ADDR window_title, WS_OVERLAPPEDWINDOW or WS_VISIBLE, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, 0, 0, instance, 0
    AssertNotZero rax
    mov window_handle, rax

    call VulkanLoad

    invoke vkEnumerateInstanceLayerProperties, ADDR layer_count, 0
    VkAssert rax, VK_SUCCESS
    ; invoke vkEnumerateInstanceExtensionProperties, 0, ADDR extension_count, 0

    mov application_info.sType, 0
    lea rcx, application_name
    mov application_info.pApplicationName, rcx
    mov application_info.engineVersion, 1
    mov application_info.apiVersion, application_api_version

    mov instance_info.sType, 1
    lea rcx, application_info
    mov instance_info.pApplicationInfo, rcx

    invoke vkCreateInstance, ADDR instance_info, 0, ADDR context_instance
    VkAssert rax, VK_SUCCESS

    call MessageLoopProcess

    invoke ExitProcess, 0
    ret
main endp
end
