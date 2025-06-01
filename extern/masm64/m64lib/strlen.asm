; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 NOSTACKFRAME

 StrLen proc

    mov rax, rcx
    lea rdx, [rax+3]                ; pointer+3 used in the end
    mov r11, 80808080h

  @@:     
  REPEAT 3
    mov r10, [rax]                  ; read first 4 bytes
    add rax, 4                      ; increment pointer
    lea rcx, [r10-01010101h]        ; subtract 1 from each byte
    not r10                         ; invert all bytes
    and rcx, r10                    ; and these two
    and rcx, r11
    jnz nxt
  ENDM

    mov r10, [rax]                  ; read first 4 bytes
    add rax, 4                      ; 4 increment DWORD pointer
    lea rcx, [r10-01010101h]        ; subtract 1 from each byte
    not r10                         ; invert all bytes
    and rcx, r10                    ; and these two
    and rcx, r11
    jz @B                           ; no zero bytes, continue loop

  nxt:
    test rcx, 00008080h             ; test first two bytes
    jnz @F
    shr rcx, 16                     ; not in the first 2 bytes
    add rax, 2
  @@:
    shl cl, 1                       ; use carry flag to avoid branch
    sbb rax, rdx                    ; compute length

    ret

 StrLen endp

 STACKFRAME

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
