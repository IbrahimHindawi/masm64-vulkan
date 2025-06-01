; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    include binpath.inc

    .code

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

fixed_array proc cnt:QWORD,blen:QWORD

  ; allocate a zero filled array with pointers to members
  ; at the front and member storage after the pointers
  ; array member storage aligned to a minimum of 8 bytes

  ; when the array is no longer required the memory should be
  ; de-allocated using the GlobalFree() API function call

  ; virtues (1) fast allocation of zero filled fixed array with aligned members
  ;         (2) single memory allocation for both pointers and data storage
  ; vices   (1) no bounds check to member length
  ;         (2) array count is not stored in the array

  ; the pointer array and the data storage is layed out with this logic

  ;  _________________________________________________________________
  ;  | ptr1 | ptr2 | ptr3 |    data1    |    data2    |    data3    |  etc ....
  ;  ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯

  ; each pointer occupies 8 bytes, each data storage is
  ; the nominated size rounded up to a 8 byte boundary.

    LOCAL .rsi :QWORD
    LOCAL .rdi :QWORD

    mov .rsi, rsi
    mov .rdi, rdi

    mov rdi, blen

    add rdi, 7                      ; align blen up to next 8 byte boundary
    and rdi, -8

    mov rsi, cnt
    add rsi, rsi
    add rsi, rsi                    ; mul cnt by 8
    add rsi, rsi                    ; store pointer array length in RSI
    
    mov rcx, cnt                    ; calculate length required
    mov rax, rdi
    imul rcx                        ; multiply cnt by blen to get data storage size
    add rax, rsi                    ; add pointer array length

    mov rcx, GMEM_FIXED or GMEM_ZEROINIT    ; allocate fixed memory
    mov rdx, rax
    call GlobalAlloc

    mov rdx, rax                    ; store memory address in RDX
    mov rcx, rax
    add rcx, rsi                    ; add the length of the pointer array to RCX

    mov rsi, cnt

  @@:
  REPEAT 3
    mov [rax], rcx                  ; write each data storage member to pointer array
    add rax, 8                      ; next pointer
    add rcx, rdi                    ; add blen for next data storage
    sub rsi, 1
    jz @F
  ENDM

    mov [rax], rcx                  ; write each data storage member to pointer array
    add rax, 8                      ; next pointer
    add rcx, rdi                    ; add blen for next data storage
    sub rsi, 1
    jnz @B

  @@:

    mov rax, rdx                    ; return the memory start address

    mov rsi, .rsi
    mov rdi, .rdi

    ret

fixed_array endp

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    end
