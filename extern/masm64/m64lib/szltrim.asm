; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    include binpath.inc

    .code

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

NOSTACKFRAME

 szLtrim proc

  ; rcx = src string
  ; rdx = dest buffer

    mov rax, rdx                    ; store buffer adress in RAX

    sub rcx, 1
  lbl0:                             ; trim the front chars off src
    add rcx, 1
    cmp BYTE PTR [rcx],0
    jne @F
    xor rax, rax
    ret
  @@:
    cmp BYTE PTR [rcx], 33          ; ditch anything below ASCII 33
    jb lbl0

    mov r9, -1
  lbl1:
  REPEAT 3                          ; unroll by 4
    add r9, 1
    movzx rdx, BYTE PTR [rcx+r9]
    mov BYTE PTR [rax+r9], dl
    test rdx, rdx
    jz lbl2
  ENDM

    add r9, 1
    movzx rdx, BYTE PTR [rcx+r9]
    mov BYTE PTR [rax+r9], dl
    test rdx, rdx
    jnz lbl1

  lbl2:                             ; return value is in RAX
    ret

szLtrim endp

STACKFRAME

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    end
