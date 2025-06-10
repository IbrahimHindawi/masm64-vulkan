;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
; macros
;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

ifndef macros_asm
macros_asm = 0; header guard variable

sizeofarray macro name:req, array_label_start:req, array_label_end:req
    name equ (array_label_end - array_label_start) / sizeof qword
endm

AssertNotEq macro reg:req, flag:req
    LOCAL .ok
    cmp reg, flag
    jne .ok
    int 3
    .ok:
endm

AssertEq macro reg:req, flag:req
    LOCAL .ok
    cmp reg, flag
    je .ok
    int 3
    .ok:
endm

SaveRegisters macro
    ; made macro respect Win64 stdcall while skipping rbp coz stack
    push rbx
    push rsi
    push rdi
    push r12
    push r13
    push r14
    push r15
endm   

RestoreRegisters macro                                                                 ; Declare macro
    pop  r15
    pop  r14
    pop  r13
    pop  r12
    pop  rdi
    pop  rsi
    pop  rbx
endm                       

procPrologue macro
    push rbp
    ; .pushreg rbp
    mov rbp, rsp
    ; .setframe rbp, 0
    sub rsp, 32
    ; .allocstack 20h
    ; .endprolog
    SaveRegisters
endm

procPrologueEnd macro
    ; .endprolog
endm

procEpilogue macro
    RestoreRegisters
    add rsp, 32
    pop rbp
endm

procf macro
    proc frame
endm

endif; header guard end
