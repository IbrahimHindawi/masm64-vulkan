; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

  .data
  align 16
  hex_tbl:
    dd "h000","h100","h200","h300","h400","h500","h600","h700","h800","h900","hA00","hB00","hC00","hD00","hE00","hF00"
    dd "h010","h110","h210","h310","h410","h510","h610","h710","h810","h910","hA10","hB10","hC10","hD10","hE10","hF10"
    dd "h020","h120","h220","h320","h420","h520","h620","h720","h820","h920","hA20","hB20","hC20","hD20","hE20","hF20"
    dd "h030","h130","h230","h330","h430","h530","h630","h730","h830","h930","hA30","hB30","hC30","hD30","hE30","hF30"
    dd "h040","h140","h240","h340","h440","h540","h640","h740","h840","h940","hA40","hB40","hC40","hD40","hE40","hF40"
    dd "h050","h150","h250","h350","h450","h550","h650","h750","h850","h950","hA50","hB50","hC50","hD50","hE50","hF50"
    dd "h060","h160","h260","h360","h460","h560","h660","h760","h860","h960","hA60","hB60","hC60","hD60","hE60","hF60"
    dd "h070","h170","h270","h370","h470","h570","h670","h770","h870","h970","hA70","hB70","hC70","hD70","hE70","hF70"
    dd "h080","h180","h280","h380","h480","h580","h680","h780","h880","h980","hA80","hB80","hC80","hD80","hE80","hF80"
    dd "h090","h190","h290","h390","h490","h590","h690","h790","h890","h990","hA90","hB90","hC90","hD90","hE90","hF90"
    dd "h0A0","h1A0","h2A0","h3A0","h4A0","h5A0","h6A0","h7A0","h8A0","h9A0","hAA0","hBA0","hCA0","hDA0","hEA0","hFA0"
    dd "h0B0","h1B0","h2B0","h3B0","h4B0","h5B0","h6B0","h7B0","h8B0","h9B0","hAB0","hBB0","hCB0","hDB0","hEB0","hFB0"
    dd "h0C0","h1C0","h2C0","h3C0","h4C0","h5C0","h6C0","h7C0","h8C0","h9C0","hAC0","hBC0","hCC0","hDC0","hEC0","hFC0"
    dd "h0D0","h1D0","h2D0","h3D0","h4D0","h5D0","h6D0","h7D0","h8D0","h9D0","hAD0","hBD0","hCD0","hDD0","hED0","hFD0"
    dd "h0E0","h1E0","h2E0","h3E0","h4E0","h5E0","h6E0","h7E0","h8E0","h9E0","hAE0","hBE0","hCE0","hDE0","hEE0","hFE0"
    dd "h0F0","h1F0","h2F0","h3F0","h4F0","h5F0","h6F0","h7F0","h8F0","h9F0","hAF0","hBF0","hCF0","hDF0","hEF0","hFF0"

  .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

hexstream proc psrc:QWORD,lsrc:QWORD

    LOCAL pdst :QWORD
    LOCAL lcnt :QWORD
    LOCAL cntr :QWORD

    mov cntr, 0

    mov rax, lsrc
    lea rax, [rax*4]                        ; *4
    lea rax, [rax+rax*2]                    ; *3
    add rax, lsrc
    mov pdst, alloc(rax)

    mov lcnt, 0
    mov r10, psrc
    mov rcx, pdst
    sub r10, 1
    add lsrc, r10
    add lsrc, 1
    lea r11, hex_tbl

    mov DWORD PTR [rcx], "    "             ; indent
    add rcx, 4
    mov WORD PTR [rcx], "bd"                ; db
    add rcx, 2
    mov BYTE PTR [rcx], 32                  ; 1 space
    add rcx, 1

  lbl0:
    add r10, 1
    add lcnt, 1
    cmp r10, lsrc
    jge quit                                ; exit loop at last byte
    movzx rax, BYTE PTR [r10]               ; get each byte
    mov rdx, [r11+rax*4]                    ; write its HEX notation to the dst$ buffer
    mov [rcx], rdx
    add rcx, 4

    cmp lcnt, 16
    je line_end                             ; branch to line end on correct count

    mov BYTE PTR [rcx], ","                 ; write the "," seperator
    add rcx, 1
    jmp lbl0

  line_end:
    mov rax, r10                            ; exit on last byte
    add rax, 2
    cmp rax, lsrc
    jg quit

  ; --------------------------------------------------
  ; format the end of the line, indent and DB notation
  ; --------------------------------------------------
    mov lcnt, 0
    mov WORD PTR [rcx], 0A0Dh               ; CRLF
    add rcx, 2
    mov DWORD PTR [rcx], "    "             ; indent
    add rcx, 4
    mov WORD PTR [rcx], "bd"                ; db
    add rcx, 2
    mov BYTE PTR [rcx], 32                  ; 1 space
    add rcx, 1

    jmp lbl0

  quit:
    cmp BYTE PTR [rcx-1], ","
    jne over
    sub rcx, 1                              ; truncate string by 1 if ","

  over:
    mov BYTE PTR [rcx], 0
    mov rax, pdst                           ; memory address returned in rax
    sub rcx, pdst                           ; output length returned in rcx

    ret

hexstream endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
