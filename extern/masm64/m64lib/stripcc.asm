; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    include binpath.inc

    .code

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

stripcc proc lpsource:QWORD,lnsource:QWORD

    mov r11, lpsource
    mov rdx, lpsource
    mov r10, rdx
    mov rcx, lnsource
    add rcx, r11                ; exit condition in RCX

  lbl1:
    mov al, [r11]
    add r11, 1
    cmp al, "/"
    je comment1
  rtn:
    cmp al, 13                  ; branch to trim trailing spaces
    je trimr
  nxt1:
    mov [rdx], al
    add rdx, 1
    cmp r11, rcx
    je outa_here                ; exit on source length
    jmp lbl1

  trimr:                        ; trim trailing spaces
    cmp BYTE PTR [rdx-1], 32
    jne nxt1
    sub rdx, 1
    jmp trimr

  comment1:
    cmp BYTE PTR [r11], "/"     ; read next character in r11
    je cpp
    cmp BYTE PTR [r11], "*"
    je oldc
    jmp rtn

  cpp:
    mov al, [r11]
    inc r11
    cmp r11, rcx
    je outa_here                ; exit on source length
    cmp al, 13
    je rtn
    jmp cpp

  oldc:
    mov al, [r11]
    add r11, 1
    cmp r11, rcx
    je outa_here                ; exit on source length
    cmp al, "*"
    je last
    jmp oldc

  last:
    cmp BYTE PTR [r11], "/"
    jne oldc
    inc r11
    jmp lbl1

  outa_here:
    sub rdx, r10                ; get the byte count written to [rdx]
    mov rax, rdx

    ret

stripcc endp

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    end
