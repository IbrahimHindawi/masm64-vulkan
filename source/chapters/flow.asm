;-----------------------------------------------------------------------------------------------------------------------------------;
;                                                                                                                                   ;
;           Flow                                                                                                                    ;
;-----------------------------------------------------------------------------------------------------------------------------------;
;                                                                                                                                   ;
;           Module that contains control flow chapter                                                                               ;
;-----------------------------------------------------------------------------------------------------------------------------------;
                                                ifndef flow_asm                                                                     ; header guard
                                                flow_asm = 0                                                                        ; header guard variable

;----------[const section]----------------------------------------------------------------------------------------------------------;
.const
;----------[data section]-----------------------------------------------------------------------------------------------------------;
.data
;----------[code section]-----------------------------------------------------------------------------------------------------------;
.code

flow                                            proc
                                                ;----[chapter 03]---------------------------------------------------------------;
                                                ; directing flow                                                                ;
                                                ;-------------------------------------------------------------------------------;
                                                ; AC auxiliary carry                                                            ;
                                                ; CY carry                                                                      ;
                                                ; EI enable interrupt                                                           ;
                                                ; OV overflow                                                                   ;
                                                ; PE parity even                                                                ;                           
                                                ; PL sign polarity                                                              ;
                                                ; UP direction                                                                  ;
                                                ; ZR Zero                                                                       ;
                                                ;-------------------------------------------------------------------------------;
                                                ; jump                                                                          ;
                                                ;-------------------------------------------------------------------------------;
                                                xor                                             rax, rax
                                                jmp                                             next
                                                mov                                             rax, 2
                                                next:
                                                mov                                             rax, 8
                                                ; test
                                                ;-------------------------------------------------------------------------------;
                                                mov                                             rcx, 0FFFFh                     ;
                                                test                                            rcx, 00001h                     ; jump if odd
                                                ; flag based jumps                                                              ;
                                                ;-------------------------------------------------------------------------------;
                                                xor                                             rdx, rdx
                                                mov                                             cl, 255
                                                add                                             cl, 1
                                                jc                                              carry                           ; jump if carry
                                                mov                                             rdx, 1
                                                carry:
                                                mov                                             cl, -128
                                                sub                                             cl, 1
                                                jo                                              overflow                        ; jump if overflow
                                                mov                                             rdx, 2
                                                overflow:
                                                mov                                             cl, 255
                                                and                                             cl, 10000000b
                                                js                                              sign                            ; jump if sign
                                                mov                                             rdx, 3
                                                sign:
                                                jnz                                             notZero                         ; jump if not zero
                                                mov                                             rdx, 4
                                                notZero:
                                                ; compare
                                                ;-------------------------------------------------------------------------------;
                                                ; comparing left op to right op
                                                ; je jne                                        
                                                ; ja jnbe                                       
                                                ; jae jnb
                                                ; jb jnae
                                                ; jbe jna
                                                ;
                                                ; jg jnle
                                                ; jge jnl
                                                ; jl jnge
                                                ; jle jng
                                                ;-------------------------------------------------------------------------------;
                                                xor                                             rdx, rdx
                                                mov                                             rbx, 100
                                                mov                                             rcx, 200
                                                cmp                                             rcx, rbx
                                                ja                                              above                           ; jump if lop above rop
                                                mov                                             rdx, 1
                                                above:
                                                mov                                             rcx, 50
                                                cmp                                             rcx, rbx
                                                jb                                              below                           ; jump if lop below rop
                                                mov                                             rdx, 2
                                                below:
                                                mov                                             rcx, 100
                                                cmp                                             rcx, rbx
                                                jbe                                             equal                           ; jump if lop below or equal rop
                                                mov                                             rdx, 3
                                                equal:
                                                ; loop
                                                ;-------------------------------------------------------------------------------;
                                                xor                                             rcx, rcx
                                                xor                                             rax, rax
                                                inc                                             rax
                                                acc_entry:
                                                add                                             rax, rax
                                                inc                                             rcx
                                                cmp                                             rcx, 10
                                                je                                              acc_end
                                                jmp                                             acc_entry
                                                acc_end:

                                                xor                                             rax, rax                        ; return zero
                                                ret                                                                             ; return
flow                                            endp                                                                            ; end proc

                                                endif                                                                           ; header guard end


