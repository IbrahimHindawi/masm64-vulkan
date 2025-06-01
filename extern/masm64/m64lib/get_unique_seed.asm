; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 get_unique_seed proc
  ; ------------------------------------
  ; create a seed for a random algo that
  ; is extremely difficult to re-produce
  ; ------------------------------------
    LOCAL var1  :QWORD
    LOCAL var2  :QWORD
    LOCAL var3  :QWORD
    LOCAL var4  :QWORD
    LOCAL var5  :QWORD

    invoke QueryPerformanceCounter,ADDR var1
    invoke QueryPerformanceCounter,ADDR var2
    invoke QueryPerformanceCounter,ADDR var3
    invoke QueryPerformanceCounter,ADDR var4
    invoke QueryPerformanceCounter,ADDR var5

    mov rax, var1
    mov rcx, var2
    rol rcx, 13
    mov rdx, var3
    rol rdx, 26
    mov r10, var4
    rol r10, 39
    mov r11, var5
    rol r11, 52
    xor rax, rcx
    xor rax, rdx
    xor rax, r10
    xor rax, r11
    bswap rax

    ret

 get_unique_seed endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
