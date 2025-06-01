; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

NOSTACKFRAME                                ; stack frame not required for pure mnemonic procedure

 str_strip proc
  ; -----------------------------------
  ; strip characters from source as
  ; determined by character table.
  ; ===========================
  ; procedure overwrites source
  ; ===========================
  ; source address = rcx
  ; option value   = rdx
  ;              0 = remove from string
  ;          other = replace with space
  ; -----------------------------------
    mov r11, rcx                            ; load source address into r11
    mov r9,  rcx                            ; same address as destination
    lea r10, chtbl                          ; load the character table address
    mov r8, rdx                             ; load option into r9
    sub r11, 1                              ; sub 1 to set up byte offset
    jmp lbl0                                ; jump directly into main loop

  pre:
    test r8, r8                             ; test if optn is 0
    jz lbl0                                 ; jump to main loop if it is
    mov BYTE PTR [r9], 32                   ; else write a space
    add r9, 1                               ; increment destination address

  lbl0:
    add r11, 1
    movzx rax, BYTE PTR [r11]               ; read byte from source
    movzx rdx, BYTE PTR [r10+rax]           ; get its value from table
    test rdx, rdx                           ; if 0 
    jz pre                                  ; branch back to label "pre"
    mov BYTE PTR [r9], al                   ; else write it to destination address
    add r9, 1                               ; increment destination address
    test rax, rax                           ; test if last byte written in 0
    jnz lbl0                                ; loop back if not

    mov rax, rcx                            ; return source address
    ret                                     ; bye

  align 16
  chtbl:
    db 1,0,0,0,0,0,0,0,0,1,1,0,0,1,0,0      ; 0, 9, 10, 13
    db 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
    db 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1      ; 32 to 126
    db 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
    db 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
    db 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
    db 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
    db 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
    db 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0      ; no high ascii
    db 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
    db 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
    db 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
    db 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
    db 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
    db 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
    db 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0

 str_strip endp

STACKFRAME                                  ; restore default stack frame

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
