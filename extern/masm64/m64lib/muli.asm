; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

NOSTACKFRAME

muli proc
  ; ------------------
  ; rcall muli,10,10
  ; ------------------
    cvtsi2sd xmm0, rcx
    cvtsi2sd xmm1, rdx
    mulsd xmm0, xmm1
    cvtsd2si rax, xmm0

    ret

muli endp

STACKFRAME

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
