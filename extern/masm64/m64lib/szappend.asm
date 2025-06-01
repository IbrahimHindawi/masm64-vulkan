; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    include binpath.inc

    .code

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

NOSTACKFRAME

szappend proc buffer:QWORD,addstr:QWORD,location:QWORD

  ; ----------------------------------------------------------
  ; rcx = buffer    the main buffer to append extra data to.
  ; rdx = addstr    the byte data to append to the main buffer
  ; r8  = location  current location pointer
  ; ----------------------------------------------------------
    mov r9, rcx             ; buffer
    mov rcx, rdx            ; addstr
    add r9, r8              ; add offset pointer to source address

    mov rax, -1
  @@:
    add rax, 1
    movzx rdx, BYTE PTR [rcx+rax]
    mov [r9+rax], dl
    test rdx, rdx
    jnz @B                  ; exit on written terminator

    add rax, r8             ; return updated pointer offset

    ret

szappend endp

STACKFRAME

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    end
