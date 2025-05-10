;-----------------------------------------------------------------------------------------------------------------------------------;
;                                                                                                                                   ;
;           Move                                                                                                                    ;
;-----------------------------------------------------------------------------------------------------------------------------------;
;                                                                                                                                   ;
;           Module that contains movement chapter                                                                                   ;
;-----------------------------------------------------------------------------------------------------------------------------------;
                                                ifndef move_asm                                                                     ; header guard
                                                move_asm = 0                                                                        ; header guard variable

;----------[const section]----------------------------------------------------------------------------------------------------------;
.const
constval                                        equ                                             12
;----------[data section]-----------------------------------------------------------------------------------------------------------;
.data
var                                             qword                                           0ffffh
;----------[code section]-----------------------------------------------------------------------------------------------------------;
.code

move                                            proc
                                                ;----[chapter 01]-------------------------------------------------------------------;
                                                ; moving variables around                                                           ;
                                                ;-----------------------------------------------------------------------------------;
                                                ; 64  | 32   | 16    | 8      |                 |                                   ;
                                                ; rax | eax  | ax    | ah/al  | accumulator     |                                   ;
                                                ; rbx | ebx  | bx    | bh/bl  | base            |                                   ;
                                                ; rcx | ecx  | cx    | ch/cl  | counter         |                                   ;
                                                ; rdx | edx  | dx    | dh/dl  | data            |                                   ;
                                                ; rsi | esi  | si    | sil    | source_idx      |                                   ;
                                                ; rdi | edi  | di    | dil    | destination_idx |                                   ;
                                                ; rbp | ebp  | bp    | bpl    | base_pointer    |                                   ;
                                                ; rsp | esp  | sp    | spl    | stack_pointer   |                                   ;
                                                ; r8  | r8d  | r8w   | r8b    | general_purpose |                                   ;
                                                ; r9  | r9d  | r9w   | r9b    | general_purpose |                                   ;
                                                ; r10 | r10d | r10w  | r10b   | general_purpose |                                   ;
                                                ; r11 | r11d | r11w  | r11b   | general_purpose |                                   ;
                                                ; r12 | r12d | r12w  | r12b   | general_purpose |                                   ;
                                                ; r13 | r13d | r13w  | r13b   | general_purpose |                                   ;
                                                ; r14 | r14d | r14w  | r14b   | general_purpose |                                   ;
                                                ; r15 | r15d | r15w  | r15b   | general_purpose |                                   ;
                                                ;-----------------------------------------------------------------------------------;
                                                ; move
                                                ;-----------------------------------------------------------------------------------;
                                                xor                                             rcx, rcx
                                                xor                                             rdx, rdx
                                                mov                                             rcx, 33
                                                mov                                             rdx, rcx
                                                mov                                             rcx, var
                                                mov                                             var, rdx
                                                ; constants
                                                ;-----------------------------------------------------------------------------------;
                                                mov                                             rcx, constval
                                                mov                                             rdx, constval + 8
                                                ; exchange data
                                                ;-----------------------------------------------------------------------------------;
                                                xchg                                            rcx, rdx
                                                xchg                                            rcx, var

                                                ;----[chapter 02]-------------------------------------------------------------------;
                                                ; arithmetic
                                                ;-----------------------------------------------------------------------------------;
                                                add                                             rcx, rdx
                                                sub                                             rdx, rcx
                                                ; inc dec neg
                                                ;-----------------------------------------------------------------------------------;
                                                inc                                             rcx
                                                dec                                             rdx
                                                neg                                             rcx
                                                ; unsigned mul div
                                                ;-----------------------------------------------------------------------------------;
                                                mov                                             rax, 8                              ; multiplicand is rax
                                                mul                                             rcx                                 ; multiplier can be any reg, result [rdx, rax] [upper, lower]
                                                mov                                             rax, 8                              ; dividend is rax
                                                div                                             rcx                                 ; divisor can be any reg, result [rdx, rax] [remainder, quotient]
                                                ; signed mul
                                                ;-----------------------------------------------------------------------------------;
                                                xor                                             rax, rax
                                                xor                                             rcx, rcx
                                                xor                                             rdx, rdx
                                                xor                                             r8, r8
                                                xor                                             r9, r9
                                                mov                                             rax, 100
                                                mov                                             rcx, 200
                                                mov                                             rdx, 4
                                                mov                                             r8, 8
                                                imul                                            rcx                                 ; multiplicand is rax
                                                mov                                             rdx, 8
                                                imul                                            rcx, rdx                            ; multiplicand, multiplier
                                                imul                                            r8, rcx, 16                         ; destination, multiplicand, multiplier
                                                ; signed div
                                                ;-----------------------------------------------------------------------------------;
                                                xor                                             rax, rax
                                                xor                                             rbx, rbx
                                                xor                                             rdx, rdx
                                                mov                                             rax, 100                            ; dividend is rax
                                                mov                                             rbx, 3
                                                idiv                                            rbx                                 ; divisor can be any reg, result [rdx, rax] [remainder, quotient], -100
                                                mov                                             rax, -100
                                                cqo                                                                                 ; sign extension must be used with negative numbers
                                                idiv                                            rbx
                                                ; bit manipulati                                on
                                                ;-----------------------------------------------------------------------------------;
                                                xor                                             rcx, rcx
                                                xor                                             rdx, rdx
                                                mov                                             rcx, 00F0Fh
                                                mov                                             rdx, 0F0F0h
                                                and                                             rcx, rdx
                                                xor                                             rcx, rcx
                                                xor                                             rdx, rdx
                                                mov                                             rcx, 00F0Fh
                                                mov                                             rdx, 0F0F0h
                                                or                                              rcx, rdx
                                                xor                                             rcx, rcx
                                                xor                                             rdx, rdx
                                                mov                                             rcx, 00F0Fh
                                                mov                                             rdx, 0F0F0h
                                                xor                                             rcx, rdx
                                                xor                                             rcx, rcx
                                                xor                                             rdx, rdx
                                                mov                                             rcx, 00F0Fh
                                                mov                                             rdx, 0F0F0h
                                                not                                             rcx
                                                ; shifting bits
                                                ;-------------------------------------------------------------------------------;
                                                xor                                             rcx, rcx
                                                mov                                             rcx, 00F0Fh
                                                shl                                             rcx, 2                          ; shift n bits to the left
                                                shr                                             rcx, 2                          ; shift n bits to the right
                                                sal                                             rcx, 2                          ; shift n bits to the left while adding 1s to the right
                                                sar                                             rcx, 2                          ; shift n bits to the right while adding 1s to the left
                                                ; rotating bits
                                                ;-------------------------------------------------------------------------------;
                                                xor                                             rcx, rcx
                                                mov                                             rcx, 00F0Fh
                                                rol                                             rcx, 2                          ; rotate n bits to the left
                                                ror                                             rcx, 2                          ; rotate n bits to the right
                                                rcl                                             rcx, 2                          ; rotate n bits to the left while adding 1s to the left
                                                rcr                                             rcx, 2                          ; rotate n bits to the right while adding 1s to the right
                                                xor                                             rax, rax                        ; return zero
                                                ret                                                                             ; return
move                                            endp                                                                            ; end proc

                                                endif                                                                           ; header guard end


