; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 NOSTACKFRAME

 block_ltrim proc

  ; ----------------------------------------------
  ; source address is in "rcx"
  ; trim leading tabs and spaces on multiple lines
  ; of source and overwrite it with the results.
  ; ----------------------------------------------

    mov rax, rcx                    ; source in rax
    mov r10, rcx                    ; same address as target
    sub r10, 1

  trimleft:
    add r10, 1
    cmp BYTE PTR [r10], 32          ; loop back on space
    je trimleft
    cmp BYTE PTR [r10], 9           ; loop back on tab
    je trimleft
    sub r10, 1

  store:
    add r10, 1
    movzx rdx, BYTE PTR [r10]       ; copy byte
    mov [rax], dl
    add rax, 1
    test dl, dl                     ; test for written terminator
    jz bl_out                       ; exit on terminator
    sub dl, 10                      ; test for ascii 10
    jnz store
    jmp trimleft

  bl_out:
    sub rax, rcx                    ; sub rcx from rax
    sub rax, 1                      ; exclude additional trailing zero

    ret

 block_ltrim endp

 STACKFRAME

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
