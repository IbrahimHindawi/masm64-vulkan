; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 NOSTACKFRAME

 Get_Vendor proc
  ; -----------------------------------------------
  ; pBuffer needs to be at least 16 bytes in length
  ; -----------------------------------------------
    mov r11, rbx
    mov r10, rcx
   
    xor rax, rax                        ; set ID string for Intel
    cpuid

    mov [r10],    ebx                   ; write results to buffer
    mov [r10+4],  edx
    mov [r10+8],  ecx
    mov BYTE PTR [r10+12], 0

    mov rbx, r11
   
    ret

 Get_Vendor endp

 STACKFRAME

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
