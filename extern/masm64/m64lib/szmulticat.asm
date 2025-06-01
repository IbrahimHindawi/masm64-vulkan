; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

szmulticat proc

  ; rcx = buffer address
  ; rdx = arg count
  ; QWORD PTR [rbp+32] upwards are the arguments

    LOCAL cloc :QWORD
    LOCAL pbuf :QWORD
    LOCAL .r12 :QWORD
    LOCAL cnt  :QWORD

    mov .r12, r12

    mov [rbp+16], rcx
    mov [rbp+24], rdx
    mov [rbp+32], r8
    mov [rbp+40], r9

    mov pbuf, rcx
    mov cnt,  rdx

    mov cloc, 0
    mov r12, 32

  lbl:
    mov rcx, pbuf
    mov rdx, QWORD PTR [rbp+r12]
    mov r8,  cloc
    call szappend
    mov cloc, rax
    add r12, 8
    sub cnt, 1
    jnz lbl

  nxt:
    mov rax, cloc
    mov r12, .r12
    ret

szmulticat endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end

 ;     mov [rbp+16], rcx
 ;     mov [rbp+24], rdx
 ;     mov [rbp+32], r8
 ;     mov [rbp+40], r9
