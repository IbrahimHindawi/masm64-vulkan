; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    .code

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

atou_ex proc

  ; ------------------------------------------------
  ; Convert decimal string into UNSIGNED QWORD value
  ; ------------------------------------------------
  ; argument in RCX

    xor r11, r11
    movzx rax, BYTE PTR [rcx]
    test rax, rax
    jz quit

    lea r11, [r11+r11*4]
    lea r11, [rax+r11*2-48]
    movzx rax, BYTE PTR [rcx+1]
    test rax, rax
    jz quit

    lea r11, [r11+r11*4]
    lea r11, [rax+r11*2-48]
    movzx rax, BYTE PTR [rcx+2]
    test rax, rax
    jz quit

    lea r11, [r11+r11*4]
    lea r11, [rax+r11*2-48]
    movzx rax, BYTE PTR [rcx+3]
    test rax, rax
    jz quit

    lea r11, [r11+r11*4]
    lea r11, [rax+r11*2-48]
    movzx rax, BYTE PTR [rcx+4]
    test rax, rax
    jz quit

    lea r11, [r11+r11*4]
    lea r11, [rax+r11*2-48]
    movzx rax, BYTE PTR [rcx+5]
    test rax, rax
    jz quit

    lea r11, [r11+r11*4]
    lea r11, [rax+r11*2-48]
    movzx rax, BYTE PTR [rcx+6]
    test rax, rax
    jz quit

    lea r11, [r11+r11*4]
    lea r11, [rax+r11*2-48]
    movzx rax, BYTE PTR [rcx+7]
    test rax, rax
    jz quit

    lea r11, [r11+r11*4]
    lea r11, [rax+r11*2-48]
    movzx rax, BYTE PTR [rcx+8]
    test rax, rax
    jz quit

    lea r11, [r11+r11*4]
    lea r11, [rax+r11*2-48]
    movzx rax, BYTE PTR [rcx+9]
    test rax, rax
    jz quit

    lea r11, [r11+r11*4]
    lea r11, [rax+r11*2-48]
    movzx rax, BYTE PTR [rcx+10]
    test rax, rax
    jz quit

    lea r11, [r11+r11*4]
    lea r11, [rax+r11*2-48]
    movzx rax, BYTE PTR [rcx+11]
    test rax, rax
    jz quit

    lea r11, [r11+r11*4]
    lea r11, [rax+r11*2-48]
    movzx rax, BYTE PTR [rcx+12]
    test rax, rax
    jz quit

    lea r11, [r11+r11*4]
    lea r11, [rax+r11*2-48]
    movzx rax, BYTE PTR [rcx+13]
    test rax, rax
    jz quit

    lea r11, [r11+r11*4]
    lea r11, [rax+r11*2-48]
    movzx rax, BYTE PTR [rcx+14]
    test rax, rax
    jz quit

    lea r11, [r11+r11*4]
    lea r11, [rax+r11*2-48]
    movzx rax, BYTE PTR [rcx+15]
    test rax, rax
    jz quit

    lea r11, [r11+r11*4]
    lea r11, [rax+r11*2-48]
    movzx rax, BYTE PTR [rcx+16]
    test rax, rax
    jz quit

    lea r11, [r11+r11*4]
    lea r11, [rax+r11*2-48]
    movzx rax, BYTE PTR [rcx+17]
    test rax, rax
    jz quit

    lea r11, [r11+r11*4]
    lea r11, [rax+r11*2-48]
    movzx rax, BYTE PTR [rcx+18]
    test rax, rax
    jz quit

    lea r11, [r11+r11*4]
    lea r11, [rax+r11*2-48]
    movzx rax, BYTE PTR [rcx+19]
    test rax, rax
    jz quit

    lea r11, [r11+r11*4]
    lea r11, [rax+r11*2-48]
    movzx rax, BYTE PTR [rcx+20]
    test rax, rax
    jnz out_of_range

  quit:
    lea rax, [r11]      ; return value in EAX
    or rcx, -1          ; non zero in RCX for success
    ret

  out_of_range:
    xor rax, rax        ; zero return value on error
    xor rcx, rcx        ; zero in ECX is out of range error
    ret

atou_ex endp

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    end
