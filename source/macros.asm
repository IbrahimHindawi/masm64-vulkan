;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
; macros
;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

ifndef macros_asm
macros_asm = 0                                                                        ; header guard variable

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
    push rbx
    push rcx
    push rdx
    push rsi
    push rdi
    push r8 
    push r9 
    push r10
    push r11
    push r12
    push r13
    push r14
    push r15
endm   

RestoreRegisters macro                                                                 ; Declare macro
    pop r15
    pop r14
    pop r13
    pop r12
    pop r11
    pop r10
    pop r9
    pop r8
    pop rdi
    pop rsi
    pop rdx
    pop rcx
    pop rbx
endm                       

endif
