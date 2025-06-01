; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 NOSTACKFRAME

 monospace_args proc
  ; -------------------------------------------------------
  ; monospace arguments in string except in quoted text
  ; double quote pairs can contain single quotes and spaces
  ; single quote pairs can contain double quotes and spaces
  ; -------------------------------------------------------
  ; -----------------------------------
  ; arg1 = src (rcx) : arg2 = dst (rdx)
  ; -----------------------------------

    xor r11, r11                            ; zero the arg counter

    sub rcx, 1

  ftrim:
    add rcx, 1
    cmp BYTE PTR [rcx], 0
    je bye
    cmp BYTE PTR [rcx], 9
    je ftrim
    cmp BYTE PTR [rcx], 32
    je ftrim
    sub rcx, 1

    add r11, 1                              ; increment the arg counter

  lpst:
    add rcx, 1
    cmp BYTE PTR [rcx], 0                   ; exit on zero
    je bye
    cmp BYTE PTR [rcx], 32                  ; test for space
    je spc
    cmp BYTE PTR [rcx], 34                  ; test for double quote
    je dqot
    cmp BYTE PTR [rcx], 39                  ; test for single quote
    je sqot
    movzx rax, BYTE PTR [rcx]               ; copy byte and write to destination
    mov BYTE PTR [rdx], al
    add rdx, 1
    jmp lpst

  spc:
    mov BYTE PTR [rdx], 32                  ; write single space
    add rdx, 1                              ; increment rdx by 1
    jmp ftrim                               ; front trim any other white spaces

  ; -----------------------------------------

  dqot:
    mov BYTE PTR [rdx], 34
    mov BYTE PTR [rdx+1], 32
    add rdx, 1

  @@:
    add rcx, 1
    cmp BYTE PTR [rcx], 0
    je qterr
    cmp BYTE PTR [rcx], 34
    je wdq
    movzx rax, BYTE PTR [rcx]
    mov BYTE PTR [rdx], al
    add rdx, 1
    jmp @B

  wdq:                                      ; write trailing double quote
    mov BYTE PTR [rdx], 34
    mov BYTE PTR [rdx+1], 32
    add rdx, 2
    jmp ftrim

  ; -----------------------------------------

  sqot:
    mov BYTE PTR [rdx], 39
    mov BYTE PTR [rdx+1], 32
    add rdx, 1

  @@:
    add rcx, 1
    cmp BYTE PTR [rcx], 0
    je qterr
    cmp BYTE PTR [rcx], 39
    je wsq
    movzx rax, BYTE PTR [rcx]
    mov BYTE PTR [rdx], al
    add rdx, 1
    jmp @B

  wsq:                                      ; write trailing single quote
    mov BYTE PTR [rdx], 39
    mov BYTE PTR [rdx+1], 32
    add rdx, 2
    jmp ftrim

  ; -----------------------------------------

  qterr:
    xor rax, rax                            ; return zero on quote error (missing 2nd quote)
    ret

  bye:
    cmp BYTE PTR [rdx-1], 32                ; test for trailing space
    jne @F
    sub rdx, 1                              ; if trailing space, shift terminator back 1
  @@:
    mov BYTE PTR [rdx], 0                   ; terminate
    mov rax, 1                              ; return non zero on success
    mov rcx, r11                            ; return the arg count in rcx
    ret

 monospace_args endp

 STACKFRAME

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
