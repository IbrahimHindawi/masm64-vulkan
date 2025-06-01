; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    include binpath.inc

    .code

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

NOSTACKFRAME

szRight proc

  ; rcx = src
  ; rdx = dst
  ; r8  = len

    mov r10, rcx

    sub r10, 1
  lbl0:
    add r10, 1
    cmp BYTE PTR [r10], 0           ; get src string length
    jne lbl0

  ; --------------------------------------
  ; don't try to read from below src start
  ; --------------------------------------
    sub r10, rcx                    ; length in r10
    cmp r8, r10
    jb @F
    mov rax, rcx                    ; exit if len > string length
    ret

  @@:
    mov r11, rcx
    add r11, r10                    ; go to end of string
    sub r11, r8                     ; find start of required section of string

  ; ---------------------------------------
  ; unroll by 4, copy required bytes to dst
  ; ---------------------------------------
    mov r9, -1
  lbl1:
  REPEAT 3
    add r9, 1
    movzx rax, BYTE PTR [r11+r9]    ; copy required text to destination buffer
    mov BYTE PTR [rdx+r9], al
    test rax, rax
    jz lbl2
  ENDM

    add r9, 1
    movzx rax, BYTE PTR [r11+r9]    ; copy required text to destination buffer
    mov BYTE PTR [rdx+r9], al
    test rax, rax
    jnz lbl1

  lbl2:

    mov rax, rdx

    ret

szRight endp

STACKFRAME

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    end
