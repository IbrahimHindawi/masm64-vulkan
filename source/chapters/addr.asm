;-----------------------------------------------------------------------------------------------------------------------------------;
;                                                                                                                                   ;
;           Addressing                                                                                                              ;
;-----------------------------------------------------------------------------------------------------------------------------------;
;                                                                                                                                   ;
;           Module that contains adressing chapter                                                                                  ;
;-----------------------------------------------------------------------------------------------------------------------------------;
                                                ifndef addr_asm                                                                     ; header guard
                                                addr_asm = 0                                                                        ; header guard variable
;----------[const section]----------------------------------------------------------------------------------------------------------;
.const
;----------[data section]-----------------------------------------------------------------------------------------------------------;
.data
a                                               byte                                            10
b                                               byte                                            20
c                                               byte                                            30
d                                               byte                                            40

seqa                                            byte                                            1, 2, 3
seqb                                            word                                            10, 20, 30
seqc                                            dword                                           100, 200, 300
seqd                                            qword                                           1000, 2000, 3000

seqe                                            byte                                            1, 2, 3, 4
                                                byte                                            4, 5, 6, 7
                                                byte                                            3, 1, 8, 9

seqf                                            qword                                           176, 269, 368, 476
                                                qword                                           437, 593, 672, 722
                                                qword                                           334, 122, 387, 872

seqg                                            qword                                           0, 0, 0
seqh                                            qword                                           3 dup(0)
;----------[code section]-----------------------------------------------------------------------------------------------------------;
.code
addressing                                      proc
                                                ;----[chapter 04]---------------------------------------------------------------;
                                                ; addressing                                                                    ;
                                                ;-------------------------------------------------------------------------------;
                                                ; 1d array:                                     addr + ( index * sizeof( element ))
                                                xor                                             rdx, rdx
                                                mov                                             al, a
                                                mov                                             ah, a + 3

                                                lea                                             rcx, b
                                                mov                                             dl, [rcx]
                                                mov                                             dh, [rcx + 1]

                                                mov                                             cl, seqa
                                                mov                                             dx, seqb
                                                mov                                             r8d, seqc
                                                mov                                             r9, seqd

                                                mov                                             cl, seqa + 1
                                                mov                                             dx, seqb + 2
                                                mov                                             r8d, seqc + 4
                                                mov                                             r9, seqd + 8

                                                mov                                             cl, seqa + (2 * 1)
                                                mov                                             dx, seqb + (2 * 2)
                                                mov                                             r8d, seqc + (2 * 4)
                                                mov                                             r9, seqd + (2 * 8)

                                                ; 2d array:                                     addr + ( x + y * width ) * sizeof( element )
                                                xor                                             r9, r9
                                                mov                                             r9b, seqe + (1 + 2 * 4) * 1
                                                mov                                             r9, seqf + (1 + 2 * 4) * 8

                                                ; addressing source index (RSI):     
                                                ;-------------------------------------------------------------------------------;
                                                ; traversal:                                    base + index * scale + displacement
                                                ; base:                                         reg with memory addr of array
                                                ; index:                                        reg or immediate value
                                                ; scale:                                        size of element (byte word dword qword)
                                                ; displacement:                                 immediate value to denote row or col 
                                                ;                                               offsets in 2d arrays
                                                lea                                             rsi, seqd
                                                xor                                             rcx, rcx
                                                start:
                                                mov                                             rdx, [rsi + rcx * 8]
                                                inc                                             rcx
                                                cmp                                             rcx, lengthof seqd
                                                jne                                             start

                                                ; addressing destination index (RDI):     
                                                ;-------------------------------------------------------------------------------;
                                                lea                                             rdi, seqg
                                                mov                                             rcx, 0
                                                mov                                             rdx, 10

                                                start2:
                                                mov                                             [rdi + rcx * 8], rdx
                                                inc                                             rcx
                                                cmp                                             rcx, lengthof seqg
                                                jne                                             start2
                                                
                                                mov                                             r10, seqg[0 * 8]
                                                mov                                             r11, seqg[1 * 8]
                                                mov                                             r12, seqg[2 * 8]

                                                lea                                             rsi, seqg
                                                lea                                             rdi, seqh
                                                mov                                             rcx, lengthof seqg
                                                cld                                                                             ; clear diretion flag
                                                rep                                             movsq

                                                mov                                             r13, seqh[0 * 8]
                                                mov                                             r14, seqh[1 * 8]
                                                mov                                             r15, seqh[2 * 8]

                                                xor                                             rax, rax                            ; return zero
                                                ret                                                                                 ; return
addressing                                      endp                                                                                ; end proc

                                                endif                                                                               ; header guard end


