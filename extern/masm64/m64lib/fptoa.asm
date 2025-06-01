; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    include binpath.inc

    .code

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

 fptoa proc fpnum:REAL8,pbuf:QWORD
  ; -------------------------------------------------------
  ; fpnum   A REAL8 (64 bit) value to convert to ascii.
  ; pbuf    A buffer large enough to hold the ascii result.
  ; -------------------------------------------------------
    LOCAL blen  :QWORD

    invoke vc_sprintf,pbuf,"%.12f",fpnum
    mov blen, len(pbuf)

  ; ---------------------
  ; trim any trailing "0"
  ; ---------------------
    mov r10, pbuf
    add r10, blen
  @@:
    sub r10, 1
    cmp BYTE PTR [r10], "0"
    je @B
    cmp BYTE PTR [r10], "."
    jne normal
    add r10, 1
    mov BYTE PTR [r10], "0" ; if last char = "." append a "0"
  normal:
    add r10, 1
    mov BYTE PTR [r10], 0
  ; ---------------------
    ret

 fptoa endp

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    end
