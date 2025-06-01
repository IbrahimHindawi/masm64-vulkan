; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    include binpath.inc

    .code

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

ltok proc pTxt:QWORD,pArray:QWORD

  ; ---------------------------------------------------------------
  ; tokenise lines in a text source writing an array of pointers
  ; to the address of "pArray" and returning the line count in RAX.
  ;
  ; The address written to the variable "pArray" should be released
  ; within the same scope as the variable with a call to GlobalFree()
  ; when the pointer array is no longer required.
  ; ---------------------------------------------------------------

    mov r11, 1                      ; set counter to 1 in case of no trailing CRLF

    mov r10, pTxt
    sub r10, 1
  ; ----------------
  ; count line feeds
  ; ----------------
  @@:
    add r10, 1
    movzx rdx, BYTE PTR [r10]
    test rdx, rdx                   ; test for terminator
    jz @F
    cmp rdx, 10                     ; test for line feed
    jne @B
    add r11, 1                      ; lf count in r11
    jmp @B
  @@:
  ; --------------------
  ; multiply result by 8
  ; --------------------
    shl r11, 3
    mov rcx, alloc(r11)             ; allocate pointer array memory

    mov r11, rcx                    ; copy allocated memory address into r11
    mov r10, pTxt
    xor rax, rax                    ; zero arg counter
    sub r10, 1
    jmp ftrim

  ; ---------------------------------

  terminate:
    mov BYTE PTR [r10], 0           ; terminate end of current line

  ftrim:                            ; scan to find next acceptable character
    add r10, 1
    movzx rdx, BYTE PTR [r10]       ; zero extend byte
    test rdx, rdx                   ; test for zero terminator
    jz lout
    cmp rdx, 32
    jbe ftrim                       ; scan again for 32 or less

  ; ¤=÷=¤=÷=¤=÷=¤=÷=¤
    mov [r11], r10                  ; write current location to pointer
    add r11, 8                      ; set next pointer location
    add rax, 1                      ; increment arg count return value
  ; ¤=÷=¤=÷=¤=÷=¤=÷=¤

  ttrim:                            ; scan to find the next CR or LF
    add r10, 1
    movzx rdx, BYTE PTR [r10]       ; zero extend byte
    cmp rdx, 13
    jg ttrim                        ; short loop on normal case

    je terminate
    cmp rdx, 10                     ; extra test for ascii 10
    je terminate
    test rdx, rdx
    jnz ttrim                       ; loop back if not zero, IE TAB.

  ; ---------------------------------

  lout:
    mov r10, pArray                 ; load passed handle address into r10
    mov [r10], rcx                  ; store local array handle at address of passed handle

    ret

ltok endp

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    end
