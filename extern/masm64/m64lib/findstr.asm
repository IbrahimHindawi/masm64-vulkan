; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 FindStr proc startpos:QWORD,lpSource:QWORD,lpPattern:QWORD

  ; ------------------------------------------------------------------
  ; FindString searches for a substring in a larger string and if it is
  ; found, it returns its position in rax. 
  ;
  ; It uses a one (1) based character index (1st character is 1,
  ; 2nd is 2 etc...) for both the "StartPos" parameter and the returned
  ; character position.
  ;
  ; Return Values.
  ; If the function succeeds, it returns the 1 based index of the start
  ; of the substring.
  ;  0 = no match found
  ; -1 = substring same length or longer than main string
  ; -2 = "StartPos" parameter out of range (less than 1 or longer than
  ; main string)
  ; ------------------------------------------------------------------

    LOCAL sLen :QWORD
    LOCAL pLen :QWORD

    mov sLen, rv(szLen,lpSource)
    mov pLen, rv(szLen,lpPattern)

    cmp startpos, 1
    jge @F
    mov rax, -2
    jmp isOut               ; exit if startpos not 1 or greater
  @@:

    sub startpos, 1         ; correct from 1 to 0 based index

    cmp rax, sLen
    jl @F
    mov rax, -1
    jmp isOut               ; exit if pattern longer than source
  @@:

    sub sLen, rax           ; don't read past string end
    add sLen, 1

    mov rcx, sLen
    cmp rcx, startpos
    jg @F
    mov rax, -2
    jmp isOut               ; exit if startpos is past end
  @@:

  ; ----------------
  ; setup loop code
  ; ----------------
    mov r10, lpSource
    mov r11, lpPattern
    mov al, [r11]           ; get 1st char in pattern

    add r10, rcx            ; add source length
    neg rcx                 ; invert sign
    add rcx, startpos       ; add starting offset

    jmp Scan_Loop

  ; ----------------------------------------------------------------------------------

  Pre_Scan:
    add rcx, 1              ; start on next byte

  Scan_Loop:
    cmp al, [r10+rcx]       ; scan for 1st byte of pattern
    je Pre_Match            ; test if it matches
    add rcx, 1
    js Scan_Loop            ; exit on sign inversion

    jmp No_Match

  Pre_Match:
    lea r9, [r10+rcx]       ; put current scan address in EBX
    mov rdx, pLen           ; put pattern length into EDX

  Test_Match:
    mov r8b, [r9+rdx-1]     ; load last byte of pattern length in main string
    cmp r8b, [r11+rdx-1]    ; compare it with last byte in pattern
    jne Pre_Scan            ; jump back on mismatch
    sub rdx, 1
    jnz Test_Match          ; 0 = match, fall through on match

  ; ----------------------------------------------------------------------------------

  Match:
    add rcx, sLen
    mov rax, rcx
    add rax, 1
    ret
    
  No_Match:
    xor rax, rax

  isOut:
    ret

 FindStr endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
