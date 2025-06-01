; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

NOSTACKFRAME

 szLeft$ proc
  ; ---------------------
  ; rcx = string address
  ; rdx = character count
  ; ---------------------
    mov rax, rcx
    sub rax, 1
  @@:
  REPEAT 3                      ; unroll by 4
    add rax, 1
    cmp BYTE PTR [rax], 0
    je @F
  ENDM
    add rax, 1
    cmp BYTE PTR [rax], 0
    jne @B

  @@:
    sub rax, rcx                ; length in rax
    cmp rax, rdx
    ja @F
    mov rax, rcx                ; if greater return original length
    ret
  @@:
    mov BYTE PTR [rcx+rdx], 0   ; else set new length with terminator
    mov rax, rcx
    ret

 szLeft$ endp

STACKFRAME

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
