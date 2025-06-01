; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 NOSTACKFRAME

 block_monospace proc
  ; -----------------------------------------------------------
  ; left and right trims each line in a block of CRLF delimited
  ; text replacing tabs with spaces and setting single spacing.
  ; DO NOT USE this function on text that does not use BOTH CR
  ; and LF pairs (ASCII 13,10) as results are undefined !
  ; -----------------------------------------------------------
    mov r11, rcx
    sub r11, 1
    mov r10, rcx

  trm:                                ; trim leading tabs and spaces
    add r11, 1
    cmp BYTE PTR [r11], 32
    je trm
    cmp BYTE PTR [r11], 9
    je trm
    sub r11, 1
    or r9, -1                         ; set r9 non zero so it falls through the 1st TEST

  ; =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-

  pre:
    test r9, r9                       ; test for zero AFTER its written.
    jz pastit
  stlp:
    add r11, 1
    movzx r9, BYTE PTR [r11]
    cmp r9, 9
    jne nxt1
    mov r9, 32                        ; replace tabs with spaces
  nxt1:
    cmp r9, 32
    jne nxt2
    cmp BYTE PTR [r11+1], 32          ; test for next space
    je pre
    cmp BYTE PTR [r11+1], 9           ; test for next tab
    je pre

  nxt2:
    cmp r9b, 13
    jne writeit
    cmp BYTE PTR [r11-1], 32          ; test for previous space
    jne writeit
    sub r10, 1                        ; RTRIM trailing space

  writeit:
    mov [r10], r9b                    ; write acceptable character
    add r10, 1

    cmp r9b, 10                       ; LTRIM following line
    je trm

  overit:
    test r9, r9                       ; test for zero AFTER its written.
    jnz stlp

  ; =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-

  pastit:

    sub r10, 1
    cmp BYTE PTR [r10-1], 32          ; if last character is a space
    jne nxt3
    sub r10, 1
  nxt3:

    sub r10, rcx                      ; length in r10
    mov rax, r10

    ret

 block_monospace endp

 STACKFRAME

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
