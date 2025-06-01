; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

comment *

    |||||||||||||||||||||||||||||||||||||||||

    rcall lntok,pMem                        ; pointer to source text
    mov pArr, rax                           ; pointer array returned in rax
    mov lcnt, rcx                           ; line count returned in rcx

    When no longer required, use GlobalFree
    or the macro "mfree" to release the two
    allocated memory addresses,

    invoke GlobalFree,pMem
    invoke GlobalFree,pArr

    |||||||||||||||||||||||||||||||||||||||||

    ------------------------------------------------------------------------
    NOTE : Both macros "rcall" and "rvcall" are used to reduce call overhead
    ------------------------------------------------------------------------

        *

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 lntok proc pMem:QWORD
  ; ----------------------------------------
  ; input 
  ; address of text to tokenise
  ; output
  ; rax = array of pointers to lines of text
  ; rcx = the number of lines tokenised
  ; ----------------------------------------
    LOCAL lcnt  :QWORD

    mov lcnt, rvcall(lfstrip@@@@,pMem)
    rcall tokenise_text_to_array@@@@,pMem,lcnt  ; tokenise text from file
    mov rcx, lcnt                               ; line count returned in rcx

    ret

 lntok endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 tokenise_text_to_array@@@@ proc src:QWORD,lcnt:QWORD

  ; -----------------------------------------------------------------------
  ; input : src  = text to tokenise into an array with an array of pointers
  ;         lcnt = the number of lines in the source file
  ;
  ; return value = the address of the pointer array in rax
  ;
  ; when no longer required free the returned memory with GlobalFree() or
  ; the macro "mfree"
  ; -----------------------------------------------------------------------

    LOCAL pMem  :QWORD                  ; memory pointer
    LOCAL alen  :QWORD                  ; allocation length
    LOCAL .r14  :QWORD
    LOCAL .r15  :QWORD

    mov .r14, r14                       ; preserve registers
    mov .r15, r15

    mov rax, lcnt
    lea rax, [rax*8]                    ; multiply lcnt * 8 to create pointer array
    mov alen, rax
    add alen, 4096                      ; add some extra padding

    mov pMem, rvcall(GlobalAlloc,GMEM_FIXED or GMEM_ZEROINIT,alen)

    mov r15, src                        ; source array to be tokenised
    mov r14, pMem                       ; allocated pointer array

    mov [r14], r15                      ; write the first array entry
    add r14, 8

    sub r15, 1
  lpst:
    add r15, 1
  backin:
    movzx rax, BYTE PTR [r15]           ; zero extend byte
    test rax, rax                       ; test if its a zero terminator
    jz bye                              ; exit loop on zero
    cmp rax, 13                         ; is byte an ascii 13 ?
    je writeit

  REPEAT 2
    add r15, 1
    movzx rax, BYTE PTR [r15]           ; zero extend byte
    test rax, rax                       ; test if its a zero terminator
    jz bye                              ; exit loop on zero
    cmp rax, 13                         ; is byte an ascii 13 ?
    je writeit
  ENDM

    add r15, 1
    movzx rax, BYTE PTR [r15]           ; zero extend byte
    test rax, rax                       ; test if its a zero terminator
    jz bye                              ; exit loop on zero
    cmp rax, 13                         ; is byte an ascii 13 ?
    jne lpst

  writeit:
    mov BYTE PTR [r15], 0               ; change ascii 13 to line terminator
    add r15, 1                          ; add 1 for next pointer location
    mov [r14], r15                      ; write next location to pointer array
    add r14, 8                          ; increment to next array member
    jmp backin

  bye:
    mov r14, .r14                       ; restore registers
    mov r15, .r15
    mov rax, pMem                       ; return pointer array address

    ret

 tokenise_text_to_array@@@@ endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

NOSTACKFRAME                            ; stackframe not needed for pure mnemonic algorithm

 lfstrip@@@@ proc ptxt:QWORD
  ; -----------------------------------------
  ; strip ascii 10s and return the line count
  ; -----------------------------------------
    mov r11, ptxt                       ; src
    mov r10, ptxt                       ; dst
    xor r9, r9                          ; counter
    sub r11, 1
    jmp lbst

  pre:
    add r9, 1                           ; increment the ascii 10 counter
  lbst:
    add r11, 1
    movzx rax, BYTE PTR [r11]           ; zero extend byte
    cmp rax, 10                         ; test for ASCII 10
    je pre

    mov BYTE PTR [r10], al              ; write everything except ascii 10s
    add r10, 1
    test rax, rax                       ; test for 0 AFTER its written
    jnz lbst

    mov rax, r9                         ; return the ascii 10 count (line feed count)

    ret

 lfstrip@@@@ endp

STACKFRAME                              ; restore auto stack frame

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
