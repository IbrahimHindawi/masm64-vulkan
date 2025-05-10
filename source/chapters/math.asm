;-----------------------------------------------------------------------------------------------------------------------------------;
;                                                                                                                                   ;
;           Maths                                                                                                                   ;
;-----------------------------------------------------------------------------------------------------------------------------------;
;                                                                                                                                   ;
;           Module that contains Math chapter                                                                                       ;
;-----------------------------------------------------------------------------------------------------------------------------------;
                                                ifndef math_asm                                                                     ; header guard
                                                math_asm = 0                                                                        ; header guard variable

;----------[const section]----------------------------------------------------------------------------------------------------------;
.const
;----------[data section]-----------------------------------------------------------------------------------------------------------;
.data
align                                           16                                                                                  ; misalignment will cause access violation
nums0                                           dword                                           1, 2, 3, 4                          ; 128 bit aligned 4 x i32 vector
nums1                                           dword                                           1, 3, 5, 7                          ; 128 bit aligned 4 x i32 vector
fnum0                                           real4                                           1.5, 2.4, 3.8, 3.141592             ; 128 bit aligned 4 x f32 vector
fnum1                                           real4                                           3.9, 1.6, 2.5, 8.23                 ; 128 bit aligned 4 x f32 vector
dnum0                                           real8                                           1.5, 3.1415926535897932             ; 128 bit aligned 2 x f64 vector
dnum1                                           real8                                           1.5, 3.1415926535897932             ; 128 bit aligned 2 x f64 vector
;----------[code section]-----------------------------------------------------------------------------------------------------------;
.code
math                                            proc
                                                ;-----------------------------------------------------------------------------------;
                                                ;   Streaming Extensions: SSE AVX AVX-512                                           ;
                                                ;-----------------------------------------------------------------------------------;
                                                ;                                                                                   ;
                                                ;   XMM    8/16/32     128-bit   XMM0-XMM15                                         ;
                                                ;   YMM      16/32     256-bit   YMM0-YMM15                                         ;
                                                ;   ZMM         32     512-bit   ZMM0-ZMM31                                         ;
                                                ;                                                                                   ;
                                                ;-----------------------------------------------------------------------------------;
                                                ;---[packing lanes]-----------------------------------------------------------------;
                                                ;   packing data into fixed size lanes widths depends on the data type              ;
                                                ;                                                                                   ;
                                                ;   XMM    16 byte - 8  word - 4  dword - 2 qword                                   ;
                                                ;   YMM    32 byte - 16 word - 8  dword - 4 qword                                   ;
                                                ;   ZMM    64 byte - 32 word - 16 dword - 8 qword                                   ;
                                                ;                                                                                   ;
                                                ;---[vector mov]--------------------------------------------------------------------;
                                                movdqa                                          xmm0, xmmword ptr [nums0]           ; type coalescing data into xmm reg
                                                paddd                                           xmm0, xmmword ptr [nums1]           ; packed integer add dword
                                                movdqa                                          xmm1, xmmword ptr [nums1]           ; move double quadword aligned
                                                psubd                                           xmm0, xmm1                          ; packed integer subtract dword

                                                movaps                                          xmm0, xmmword ptr [fnum0]           ; move, aligned, packed, single
                                                movapd                                          xmm1, xmmword ptr [dnum0]           ; move, aligned, packed, double
                                                ;---[scalar ops]--------------------------------------------------------------------;
                                                ;   addss addpd                                                                     ;
                                                ;   subss subpd                                                                     ;
                                                ;   mulss mulpd                                                                     ;
                                                ;   divss divpd                                                                     ;
                                                ;-----------------------------------------------------------------------------------;
                                                movss                                           xmm0, fnum0
                                                movss                                           xmm1, fnum1

                                                addss                                           xmm0, xmm1
                                                mulss                                           xmm0, xmm1
                                                subss                                           xmm0, xmm1
                                                divss                                           xmm0, xmm1
                                                ;---[vector ops]--------------------------------------------------------------------;
                                                ;   addps addpd                                                                     ;
                                                ;   subps subpd                                                                     ;
                                                ;   mulps mulpd                                                                     ;
                                                ;   divps divpd                                                                     ;
                                                ;-----------------------------------------------------------------------------------;
                                                movaps                                          xmm0, xmmword ptr [fnum0]
                                                movaps                                          xmm1, xmmword ptr [fnum1]
                                                divps                                           xmm0, xmm1

                                                movapd                                          xmm2, xmmword ptr [dnum0]
                                                movapd                                          xmm3, xmmword ptr [dnum1]
                                                divpd                                           xmm2, xmm3

                                                xor                                             rax, rax                            ; return zero
                                                ret                                                                                 ; return
math                                            endp                                                                                ; end proc

                                                endif                                                                               ; header guard end


