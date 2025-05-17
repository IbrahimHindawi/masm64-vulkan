;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
;           MASM64 Handmade
;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
option casemap:none
StdOutHandle equ -11
include masm64rt.inc
; include vulkan.asm
include saha.asm
include macros.asm
include vkstructs.asm
include vkenums.asm

extrn vkEnumerateInstanceExtensionProperties:PROC
; extrn vkCreateInstance:PROC
; extrn vkEnumerateInstanceLayerProperties:PROC

Payload struct
    tag qword ?
    id byte ?
Payload ends

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
paint_phrase byte "I must Paint now!", 0ah, 0dh, 0
close_phrase byte "I must Close now!", 0ah, 0dh, 0
; validation_layer_string byte "VK_LAYER_LUNARG_standard_validation", 0
validation_layer_string byte "VK_LAYER_KHRONOS_validation", 0
instance qword ?
nShowCmd sdword 10
window_class WNDCLASSEX <>
window_handle HWND ?
message MSG <>
message_result byte ?
extension_count dword ?
layer_count qword ?
found_validation byte ?

vulkan_module HMODULE ?
context_instance VkInstance ?
application_info VkApplicationInfo <>
instance_info VkInstanceCreateInfo <>
layers_available qword ?

vkEnumerateInstanceLayerProperties qword ?
vkCreateInstance PFN_vkCreateInstance ?

;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
.code
;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
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

arenaTest proc
    local pos:qword
    mov pos, rax

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

main proc
    lea rcx, arena
    call arenaInit
    ; call arenaTest

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
    AssertNotEq rax, 0

    invoke CreateWindowEx, 0, ADDR window_class_name, ADDR window_title, WS_OVERLAPPEDWINDOW or WS_VISIBLE, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, 0, 0, instance, 0
    AssertNotEq rax, 0
    mov window_handle, rax

    call VulkanLoad

    invoke vkEnumerateInstanceLayerProperties, ADDR layer_count, 0
    AssertEq rax, VK_SUCCESS

    arenaPushArray ADDR arena, VkLayerProperties, layer_count, 4
    ; invoke arenaPush, ADDR arena, sizeof VkLayerProperties * 010h, 4
    AssertNotEq rax, 0
    mov layers_available, rax
    invoke vkEnumerateInstanceLayerProperties, ADDR layer_count, rax

    mov rsi, layers_available
    xor rcx, rcx
    mov r8, sizeof VkLayerProperties
    lea r9, validation_layer_string
    loop_validation_layer_find_00000000:
        push rcx
        push rdx
        lea rcx, [rsi.VkLayerProperties.layerName]
        mov rdx, r9
        call strcmp64
        cmp rax, 0
        jne validation_label_not_found 
        mov found_validation, 1
        lea r9, validation_layer_string
        validation_label_not_found:
        pop rdx
        pop rcx

        add rsi, r8
        inc rcx
        cmp rcx, 16
        jl loop_validation_layer_find_00000000


    mov application_info.sType, 0
    lea rcx, application_name
    mov application_info.pApplicationName, rcx
    mov application_info.engineVersion, 1
    mov application_info.apiVersion, application_api_version

    mov instance_info.sType, 1
    lea rcx, application_info
    mov instance_info.pApplicationInfo, rcx

    invoke vkCreateInstance, ADDR instance_info, 0, ADDR context_instance
    AssertEq rax, VK_SUCCESS

    call MessageLoopProcess

    invoke ExitProcess, 0
    ret
main endp
end
