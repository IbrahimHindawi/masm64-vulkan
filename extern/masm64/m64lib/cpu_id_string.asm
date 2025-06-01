; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

get_cpu_id_string proc pBuffer:QWORD

    LOCAL basicinf  :DWORD
    LOCAL extended  :DWORD

    LOCAL .ebx :DWORD
    LOCAL .rsi :QWORD

    mov eax, 0                          ; call basic info function
    cpuid
    mov basicinf, eax

    mov eax, 80000000h                  ; call extended info function
    cpuid
    mov extended, eax

  getID:

    mov .ebx, ebx
    mov .rsi, rsi

    mov rsi, pBuffer                    ; load buffer address into rsi
   
    mov eax, 80000002h                  ; extended function 2
    cpuid

    mov [rsi],    eax                   ; write results to buffer
    mov [rsi+4],  ebx
    mov [rsi+8],  ecx
    mov [rsi+12], edx

    mov eax, 80000003h                  ; extended function 3
    cpuid

    mov [rsi+16], eax                   ; write results to buffer
    mov [rsi+20], ebx
    mov [rsi+24], ecx
    mov [rsi+28], edx

    mov eax, 80000004h                  ; extended function 4
    cpuid

    mov [rsi+32], eax                   ; write results to buffer
    mov [rsi+36], ebx
    mov [rsi+40], ecx
    mov [rsi+44], edx

    mov [rsi+48], DWORD PTR 0           ; terminate result

    mov ebx, .ebx
    mov rsi, .rsi

    ret

get_cpu_id_string endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
