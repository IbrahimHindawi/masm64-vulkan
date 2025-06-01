; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    include binpath.inc

    .code

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

NOSTACKFRAME

 szMono proc

  ; -----------------------------------
  ; strip extra spaces allowing only 1.
  ; trim left and right string ends.
  ; replace tabs with spaces.
  ; overwrites original string.
  ; -----------------------------------

  ; rcx = src

    mov rdx, rcx                    ; copy to RDX for write back location
    mov r11, rcx                    ; save original address

    sub rcx, 1
  ftrim:
    add rcx, 1
    movzx rax, BYTE PTR [rcx]
    cmp rax, 32
    je ftrim
    cmp rax, 9
    je ftrim

    sub rcx, 1
  lbl0:
    add rcx, 1
    movzx rax, BYTE PTR [rcx]
    cmp rax, 9
    jne notab
    mov rax, 32                     ; replace tab with space
    jmp tail
  notab:
    cmp rax, 32                     ; branch on space
    je tail
    mov [rdx], al                   ; write non space character
    add rdx, 1
    test rax, rax                   ; test after write
    jz outl                         ; exit on zero
    jmp lbl0

  tail:
    mov [rdx], al                   ; write the 1st space
    add rdx, 1
  @@:
    add rcx, 1
    movzx rax, BYTE PTR [rcx]
    test rax, rax
    jz outl                         ; exit on zero
    cmp rax, 32
    je @B
    cmp rax, 9
    je @B
    sub rcx, 1
    jmp lbl0

  outl:
    mov BYTE PTR [rdx-1], 0
    mov rax, r11                    ; copy original address into RAX

    ret

szMono endp

STACKFRAME

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    end
