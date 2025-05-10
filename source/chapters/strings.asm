;-----------------------------------------------------------------------------------------------------------------------------------;
;                                                                                                                                   ;
;           Strings                                                                                                                 ;
;-----------------------------------------------------------------------------------------------------------------------------------;
;                                                                                                                                   ;
;           Module that contains strings chapter                                                                                    ;
;-----------------------------------------------------------------------------------------------------------------------------------;
                                                ifndef strings_asm                                                                  ; header guard
                                                strings_asm = 0                                                                     ; header guard variable
;----------[const section]----------------------------------------------------------------------------------------------------------;
.const
;----------[data section]-----------------------------------------------------------------------------------------------------------;
.data
strsrc_00                                       byte                                            'abc'
strdst_00                                       byte                                            3 dup(?)
strdst_01                                       byte                                            3 dup(?)
strsrc_02                                       byte                                            'low'
strsrc_03                                       byte                                            'abc'
found                                           byte                                            ?
strsrc_04                                       byte                                            'abc'
strdst_04                                       byte                                            'abc'
match                                           byte                                            ?
;----------[code section]-----------------------------------------------------------------------------------------------------------;
.code

strings                                         proc
                                                ;----[chapter 06]-------------------------------------------------------------------;
                                                ; strings                                                                           ;
                                                ;-----------------------------------------------------------------------------------;
                                                ; moving characters from location to location                                       ;
                                                ; rep                                                                               ;
                                                ; movsb                                                                             ;
                                                ; movsw                                                                             ;
                                                ; movsd                                                                             ;
                                                ; movsq                                                                             ;
                                                ;-----------------------------------------------------------------------------------;
                                                xor                                             rdx, rdx
                                                xor                                             r8, r8
                                                xor                                             r9, r9
                                                lea                                             rsi, strsrc_00
                                                lea                                             rdi, strdst_00
                                                mov                                             rcx, sizeof strsrc_00

                                                cld
                                                rep                                             movsb
                                                mov                                             dl, strdst_00[0]
                                                mov                                             r8b, strdst_00[1]
                                                mov                                             r9b, strdst_00[0]

                                                ;-----------------------------------------------------------------------------------;
                                                ; storing characters to location (from reg)                                         ;
                                                ; rep                                                                               ;
                                                ; stosb                                                                             ;
                                                ; stosw                                                                             ;
                                                ; stosd                                                                             ;
                                                ; stosq                                                                             ;
                                                ;-----------------------------------------------------------------------------------;
                                                xor                                             rdx, rdx
                                                xor                                             r8, r8
                                                xor                                             r9, r9
                                                mov                                             al, 'A'
                                                lea                                             rdi, strdst_01
                                                mov                                             rcx, lengthof strdst_01

                                                cld 
                                                rep                                             stosb

                                                mov                                             dl, strdst_01[0]
                                                mov                                             r8b, strdst_01[1]
                                                mov                                             r9b, strdst_01[2]

                                                ;-----------------------------------------------------------------------------------;
                                                ; loading characters to reg                                                         ;
                                                ; lodsb                                                                             ;
                                                ; lodsw                                                                             ;
                                                ; lodsd                                                                             ;
                                                ; lodsq                                                                             ;
                                                ;-----------------------------------------------------------------------------------;
                                                xor                                             rdx, rdx
                                                xor                                             r8, r8
                                                xor                                             r9, r9
                                                lea                                             rsi, strsrc_02
                                                mov                                             rdi, rsi
                                                mov                                             rcx, lengthof strsrc_02

                                                cld 
                                                start3:
                                                lodsb
                                                sub                                             al, 32
                                                stosb
                                                dec                                             rcx
                                                jnz                                             start3

                                                mov                                             dl, strsrc_02[0]
                                                mov                                             r8b, strsrc_02[1]
                                                mov                                             r9b, strsrc_02[2]

                                                ;-----------------------------------------------------------------------------------;
                                                ; scanning strings                                                                  ;
                                                ; scasb                                                                             ;
                                                ; scasw                                                                             ;
                                                ; scasd                                                                             ;
                                                ; scasq                                                                             ;
                                                ;-----------------------------------------------------------------------------------;
                                                xor                                             rax, rax
                                                mov                                             al, 'b'
                                                lea                                             rdi, strsrc_03
                                                mov                                             rcx, lengthof strsrc_03

                                                cld 
                                                repne                                           scasb

                                                jnz                                             absent
                                                mov                                             found, 1
                                                jmp                                             finish

                                                absent:
                                                mov                                             found, 0
                                                finish:

                                                ;-----------------------------------------------------------------------------------;
                                                ; comparing strings                                                                 ;
                                                ; cmpsb                                                                             ;
                                                ; cmpsw                                                                             ;
                                                ; cmpsd                                                                             ;
                                                ; cmpsq                                                                             ;
                                                ;-----------------------------------------------------------------------------------;
                                                lea                                             rsi, strsrc_04
                                                lea                                             rdi, strdst_04
                                                mov                                             rcx, sizeof strsrc_04

                                                cld
                                                repe                                            cmpsb

                                                jnz                                             differ
                                                mov                                             match, 1
                                                jmp                                             finish_01

                                                differ:
                                                mov                                             match, 0
                                                finish_01:

                                                xor                                             rax, rax                            ; return zero
                                                ret                                                                                 ; return
strings                                         endp                                                                                ; end proc

                                                endif                                                                               ; header guard end


