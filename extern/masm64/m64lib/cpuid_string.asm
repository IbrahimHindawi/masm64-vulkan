; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 NOSTACKFRAME

 cpuid_string proc
  ; --------------------------------------
  ; output buffer address is passed in rcx
  ; --------------------------------------
    mov r11, rcx                        ; load buffer address into r11
    mov r10, rbx                        ; preserve rbx

    mov rax, 80000002h                  ; extended function 2
    cpuid

    mov [r11],    eax                   ; write results to buffer
    mov [r11+4],  ebx
    mov [r11+8],  ecx
    mov [r11+12], edx

    mov rax, 80000003h                  ; extended function 3
    cpuid

    mov [r11+16], eax                   ; write results to buffer
    mov [r11+20], ebx
    mov [r11+24], ecx
    mov [r11+28], edx

    mov rax, 80000004h                  ; extended function 4
    cpuid

    mov [r11+32], eax                   ; write results to buffer
    mov [r11+36], ebx
    mov [r11+40], ecx
    mov [r11+44], edx

    mov DWORD PTR [r11+48], 0           ; terminate result

    mov rbx, r10                        ; restore rbx
    ret

 cpuid_string endp

 STACKFRAME

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
