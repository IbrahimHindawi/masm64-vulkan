; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 wtok proc pText:QWORD,pArray:QWORD,flag:QWORD

  ; ********************************************************
  ; A space delimited tokeniser for words and quoted phrases
  ; ********************************************************
  ; ARGUMENTS
  ; 1 pText  = The address of the text to tokenise
  ; 2 pArray = An empty QWORD to recieve the output array
  ; 3 flag   = Turn on or off single quote support
  ;            0 = off, non zero = on
  ; RETURN VALUE
  ; the number of tokenised words or quoted phrases
  ; NOTES
  ; The characters for single quote, double quote and space
  ; should not be modified in the table as the algorithm
  ; uses these characters for parsing.
  ; When the memory is no longer required it should be
  ; released in the same scope as the caller.
  ; You can use either GlobalFree() or the macro "mfree"
  ; on the array variable passed to this algorithm.
  ; ********************************************************

    USING r12,r13,r14
    LOCAL stln  :QWORD

    SaveRegs
    .data
    align 8
    @_chtbl_@ \
      db 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
      db 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
      db 0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
      db 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
      db 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
      db 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
      db 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
      db 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
      db 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
      db 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
      db 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
      db 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
      db 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
      db 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
      db 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
      db 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
    .code

    xor r13, r13                            ; zero the array counter
    rcall StrLen,pText                      ; get the buffer length
    mov stln, rax
    lea rax, [rax*8]
    mov r14, alloc(rax)                     ; allocate pointer array

    mov rax, pText                          ; load address into rax
    add rax, stln                           ; add length to rax
    mov QWORD PTR [rax], 0                  ; terminate the buffer

    lea r12, @_chtbl_@                      ; load the table address
    mov r11, pText                          ; load text address in r11
    mov r10, r14                            ; load array address in r10
    sub r11, 1                              ; set r11 for following loop code

  badchar:
    add r11, 1
    movzx rax, BYTE PTR [r11]               ; zero extend byte
    test rax, rax                           ; test for zero terminator
    jz endsrc                               ; exit on terminator

    cmp BYTE PTR [r12+rax], 0               ; test if bad character in table
    je badchar                              ; loop back for next if it is

    mov [r10], r11                          ; write current location to pointer array
    add r10, 8                              ; set next array write location
    add r13, 1                              ; increment the array counter

    cmp flag, 0                             ; if flag is zero (0), don't allow single quotes
    je @F
    cmp rax, 39                             ; is character a single quote ?
    je squote
  @@:
    cmp rax, 34                             ; is character a double quote ?
    je dquote

  goodchar:
    add r11, 1
    movzx rax, BYTE PTR [r11]               ; zero extend byte
    test rax, rax                           ; test for zero terminator
    jz endsrc                               ; exit on terminator

    cmp BYTE PTR [r12+rax], 0               ; test if bad character in table
    jne goodchar                            ; loop back for next if its not

    mov BYTE PTR [r11], 0                   ; overwrite trailing bad char with zero
    jmp badchar

  squote:                                   ; single quote
    add r11, 1
    movzx rax, BYTE PTR [r11]
    test rax, rax
    jz qterror
    sub rax, 39
    jnz squote

    add r11, 1
    mov BYTE PTR [r11], 0
    jmp badchar

  dquote:                                   ; double quote
    add r11, 1
    movzx rax, BYTE PTR [r11]
    test rax, rax
    jz qterror
    sub rax, 34
    jnz dquote

    add r11, 1
    mov BYTE PTR [r11], 0
    jmp badchar

  qterror:
    mov rax, -1                             ; return -1 on quote error
    RestoreRegs
    ret

  endsrc:
    mov rax, r13                            ; r13 is the array count
    lea rax, [rax*8]                        ; multiply array count by 8
    invoke GlobalReAlloc,r14,rax,0          ; r14 is the allocate memory handle being reallocated
    mov r11, pArray                         ; load passed handle address into r11
    mov QWORD PTR [r11], rax                ; store local array handle at address of passed handle
    mov rax, r13                            ; return array count in rax
    RestoreRegs
    ret

 wtok endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
