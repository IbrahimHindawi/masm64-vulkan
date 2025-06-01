; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    include binpath.inc

    .code

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

NOSTACKFRAME

szRemove proc src:QWORD,dst:QWORD,remv:QWORD

    mov [rbp+16], rcx
    mov [rbp+24], rdx
    mov [rbp+32], r8
    mov [rbp+40], r9

    mov rdx, remv
    mov r8b, [rdx]               ; 1st remv char in r8b

    mov r11, src
    mov r10, dst
    mov r9, dst
    sub r11, 1

  ; --------------------------------------------------------

  prescan:
    add r11, 1
  scanloop:
    cmp [r11], r8b              ; test for "remv" start char
    je presub
  backin:
    movzx rax, BYTE PTR [r11]
    mov [r10], al
    cmp BYTE PTR [r10], 0       ; exit when zero terminator
    je szrOut                   ; has been written
    add r10, 1
    jmp prescan

  align 4
  presub:
    xor rcx, rcx
  subloop:
  REPEAT 3
    movzx rax, BYTE PTR [r11+rcx]
    cmp al, [rdx+rcx]
    jne backin                  ; jump back on mismatch
    add rcx, 1
    cmp BYTE PTR [rdx+rcx], 0   ; test if next byte is zero
    je @F
  ENDM

    movzx rax, BYTE PTR [r11+rcx]
    cmp al, [rdx+rcx]
    jne backin                  ; jump back on mismatch
    add rcx, 1
    cmp BYTE PTR [rdx+rcx], 0   ; test if next byte is zero
    jne subloop

  @@:
    add r11, rcx
    jmp scanloop

  ; --------------------------------------------------------

  szrOut:

    mov rax, r9                 ; return the destination address

    ret

szRemove endp

STACKFRAME

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    end
