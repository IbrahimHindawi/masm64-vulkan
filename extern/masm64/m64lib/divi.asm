; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

NOSTACKFRAME

divi proc
  ; -------------------
  ; rcall divi,100,10
  ; -------------------
    cvtsi2sd xmm0, rcx
    cvtsi2sd xmm1, rdx
    divsd xmm0, xmm1
    cvtsd2si rax, xmm0

    ret

divi endp

STACKFRAME

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
