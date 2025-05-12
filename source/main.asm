;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
;                                                                                                                                   
;           MASM64 OpenGL Project.                                                                                                 
;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
;----------[types modules constants procedure prototypes]------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
option casemap:none
StdOutHandle equ -11
include masm64rt.inc

;----------[types]---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
pointer typedef qword

vec3 struct
    x real4 ?
    y real4 ?
    z real4 ?
vec3 ends

;----------[macros]--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

;----------[const section]-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
.const
outputmessage byte 'hello, world!'
              byte 0ah, 0dh
              byte 'from masm64!'
              byte 0ah, 0dh
outputmessagelength equ $ - outputmessage

window_class_name byte "MASM64HandmadeWindowClass", 0Ah, 0dh
window_title byte "MASM64Handmade", 0Ah, 0dh

;----------[data section]--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
.data
backing byte 1024 dup(?)
arr dword 1024 dup(?)

phrase byte "This is a phrase", 0Ah, 0dh
phraselength equ $ - phrase 
paint_phrase byte "I must Paint now!", 0Ah, 0dh
instance qword ?
nShowCmd sdword 10
window_class WNDCLASSEX <>
window_handle HWND ?
message MSG <>
message_result byte ?
;----------[code section]--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
assertNotZero macro reg
    cmp reg, 0
    je __crash
endm

__crash:
    int 3

.code
WindowProc proc hWin:QWORD,uMsg:QWORD,wParam:QWORD,lParam:QWORD
    cmp uMsg, WM_PAINT
    je OnPaint

    cmp uMsg, WM_CLOSE
    je OnClose

    cmp uMsg, WM_CREATE
    je OnCreate

    cmp uMsg, WM_DESTROY
    je OnDestroy

    ; default
    invoke DefWindowProc, hWin, uMsg, wParam, lParam
    ret
    OnPaint:
        lea rcx, paint_phrase
        call OutputDebugString
        ret
    OnClose:
        invoke SendMessage, hWin, WM_DESTROY, 0, 0
        ret
    OnCreate:
        xor rax, rax
        ret
    OnDestroy:
        invoke PostQuitMessage, 0
    ret
WindowProc endp

MessageLoopProcess proc
    LOCAL msg    :MSG
    LOCAL pmsg   :QWORD

    mov pmsg, ptr$(msg)                     ; get the msg structure address
    jmp gmsg                                ; jump directly to GetMessage()

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
    assertNotZero rax

    invoke CreateWindowEx, 0, ADDR window_class_name, ADDR window_title, WS_OVERLAPPEDWINDOW or WS_VISIBLE, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, 0, 0, instance, 0
    assertNotZero rax
    mov window_handle, rax
    call MessageLoopProcess

    invoke ExitProcess, 0
    ret
main endp                                                                                ; end proc
end
