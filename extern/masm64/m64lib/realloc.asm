; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

re_alloc proc pmem:QWORD,nlen:QWORD

    LOCAL ream :QWORD       ; re allocated memory
    LOCAL olen :QWORD       ; original length
    LOCAL clen :QWORD       ; copy length

    mov olen, rv(GlobalSize,pmem)

    mov rax, nlen
    mov rcx, olen
    cmp rax, rcx
    jb lb1
    mov clen, rcx           ; use original length as copy length
    jmp nxt
  lb1:
    mov clen, rax           ; use new length as copy length
  nxt:
    mov ream, rv(GlobalAlloc,GMEM_FIXED or GMEM_ZEROINIT,nlen)
    invoke mcopy,pmem,ream,clen
    invoke GlobalFree,pmem

    mov rax, ream
    ret

re_alloc endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
