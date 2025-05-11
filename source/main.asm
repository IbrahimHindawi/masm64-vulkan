;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
;                                                                                                                                   
;           MASM64 OpenGL Project.                                                                                                 
;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
;----------[types modules constants procedure prototypes]------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
option casemap:none
; external equ extern
StdOutHandle equ -11
include masm64rt.inc
; include win64.inc
; include kernel32.inc
; include user32.inc
; include macros64.inc

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

window_class_title byte "MASM64HandmadeWindowClass", 0Ah, 0dh
window_title byte "MASM64Handmade", 0Ah, 0dh
window_class_title_length equ $ - window_class_title 
style equ CS_OWNDC or CS_HREDRAW or CS_VREDRAW
style_window equ WS_OVERLAPPEDWINDOW or WS_VISIBLE

;----------[data section]--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
.data
backing byte 1024 dup(?)
arr dword 1024 dup(?)

phrase byte "This is a phrase", 0Ah, 0dh
phraselength equ $ - phrase 
paint_phrase byte "I must Paint now!", 0Ah, 0dh
hInstance qword ?
nShowCmd sdword 10
window_class WNDCLASSEX <>
window_handle HWND ?
message MSG <>
;----------[code section]--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
.code
WindowProc proc; rcx: hwnd, rdx: uMsg, r8: wParam, r9: lParam
    cmp rdx, WM_PAINT
    je OnPaint
    cmp rdx, WM_CLOSE
    je OnClose
    ; call DefWindowProc
    ret; default
    OnPaint:
        lea rcx, paint_phrase
        call OutputDebugString
        ret
    OnClose:
        ret
    ret
WindowProc endp

main proc
    ;-----[print hello]-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    ; print something to the console using writefile then write to std out.             
    ; this procedure also shows the win64 calling convention.                           
    ;-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    mov rcx, StdOutHandle              ; output handle arg
    call GetStdHandle                        ; get handle from os

    ;-----[print hello]-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    ; note: how to calculate param stack location:
    ; nth parm - 1 = (5 - 1) * 8 = 32 bytes
    ;-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    sub rsp, 40                             ; WriteFile(5 parms) * 8 = 40 bytes
    mov rcx, rax                            ; [0] hFile
    lea rdx, outputmessage                  ; [1] lpBuffer
    mov r8, outputmessagelength             ; [2] nNumberOfBytesToWrite
    xor r9, r9                              ; [3] lpNumberOfBytesWritten
    mov [rsp + 32], r9                      ; [4] lpOverlapped
    call WriteFile                           ; print
    add rsp, 40                             ; balance the stack

    xor rcx, rcx
    call GetModuleHandle
    mov hInstance, rax

    mov rcx, style
    mov window_class.WNDCLASSEX.style, ecx
    lea rcx, WindowProc
    mov window_class.WNDCLASSEX.lpfnWndProc, rcx
    lea rcx, hInstance
    mov window_class.WNDCLASSEX.hInstance, rcx
    lea rcx, window_class_title
    mov window_class.WNDCLASSEX.lpszClassName, rcx

    lea rcx, window_class
    call RegisterClassEx

    invoke CreateWindowEx, 0, ADDR window_class_title, ADDR window_title, style_window, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, 0, 0, hInstance, 0
    mov window_handle, rax

    gameloop:
        xor r9, r9
        xor r8, r8
        xor rdx, rdx
        lea rcx, message
        call GetMessage
        cmp rax, 0
        je gameloop
        lea rcx, message
        call TranslateMessage
        lea rcx, message
        call DispatchMessage

    ;-----[terminate program]-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    ; these instructions show how to cleanly exit the program.                          
    ;-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    xor rcx, rcx                            ; set termination code 0 for clean exit
    call ExitProcess                         ; terminate process
    ret 0                                   ; return code
main endp                                                                                ; end proc
end                                                                                 ; end module
