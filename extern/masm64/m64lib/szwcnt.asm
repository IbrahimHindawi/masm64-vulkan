; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    include binpath.inc

    .code

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

szWcnt proc src:QWORD,txt:QWORD

    mov r11, len(src)           ; procedure call for src length
    sub r11, len(txt)           ; procedure call for 1st text length

    mov rax, -1
    mov r10, src                ; source in r10
    add r11, r10                ; add src to exit position
    add r11, 1                  ; correct to get last word
    mov r9, txt                 ; text to count in r9
    sub r10, 1

  pre:
    add rax, 1                  ; increment word count return value

  wcst:
    add r10, 1
    cmp r11, r10                ; test for exit condition
    jle wcout
    mov dl, [r10]               ; load byte at r10
    cmp dl, [r9]                ; test against 1st character in r9
    jne wcst
    xor rcx, rcx

  test_word:
    add rcx, 1
    cmp BYTE PTR [r9+rcx], 0    ; if terminator is reached
    je pre                      ; jump back and increment counter
    mov dl, [r10+rcx]           ; load byte at r10
    cmp dl, [r9+rcx]            ; test against 1st character in r9
    jne wcst                    ; exit if mismatch
    jmp test_word               ; else loop back
  wcout:

    ret

szWcnt endp

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    end
