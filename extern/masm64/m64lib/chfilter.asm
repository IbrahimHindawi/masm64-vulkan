; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 NOSTACKFRAME

 chfilter proc
  ; --------------------------------------
  ; rcx = string address
  ; rdx = 0 to use default table OR the
  ;       ADDRESS of a 256 character table
  ; --------------------------------------
    lea r11, chtable                            ; default load r11 with table below
    test rdx, rdx                               ; test if rdx = 0
    cmovnz r11, rdx                             ; overwrite r11 if not 0
    mov rdx, rcx
    sub rcx, 1
    mov r9, 32

  lbl0:
    add rcx, 1
    movzx rax, BYTE PTR [rcx]
    test rax, rax                               ; test for zero byte
    jz done                                     ; exit loop on terminator
    movzx r10, BYTE PTR [r11+rax]               ; get char type from table, 0 or 1
    test r10, r10                               ; test for unacceptable character
    cmovz rax, r9                               ; replace it with space if 0
    mov BYTE PTR [rdx], al                      ; write character
    add rdx, 1                                  ; increment output pointer
    jmp lbl0

  done:
    mov BYTE PTR [rdx], 0                       ; write terminator
    ret

  align 16
  ; ---------------------------------
  ; numbers, upper & lower case (.,_)
  ; ---------------------------------
  chtable:
    db 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
    db 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
    db 1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0
    db 1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0
    db 0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
    db 1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1
    db 0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
    db 1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0
    db 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
    db 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
    db 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
    db 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
    db 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
    db 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
    db 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
    db 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0

 chfilter endp

 STACKFRAME

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
