; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    include binpath.inc

    .code

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

NOSTACKFRAME

szLeft proc

  ; rcx = src address
  ; rdx = dst address
  ; r8  = count

    mov r11, rdx
    xor r9, r9                      ; counter

    sub r9, 1
  lbl0:
    add r9, 1
    movzx rax, BYTE PTR [rcx+r9]
    mov BYTE PTR [r11+r9], al
    test rax, rax                   ; exit on zero, even if r8 is larger
    jz lbl1
    cmp r9, r8                      
    jb lbl0                         ; jmp back if r9 < r8

    mov BYTE PTR [r11+r9], 0        ; write terminator

  lbl1:
    mov rax, rdx
    ret

szLeft endp

STACKFRAME

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    end
