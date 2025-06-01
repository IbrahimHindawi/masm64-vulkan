; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 mmi proc
  ; -------------------------------------------------
  ; rcx = address of X64ST structure
  ; structure members set to 1 if supported, 0 if not
  ; -------------------------------------------------

    USING r15
    SaveRegs

    mov r15, rcx                                    ; store struct address in r15

  ; -------------------------------------------------

  ; INTEL
    mov rax, 1
    cpuid

    mov rax, r15                                    ; load struct address into rax

    bt ecx, 28                                      ; avx
    setc BYTE PTR (X64ST PTR [rax]).avx
    bt ecx, 20                                      ; sse4.2
    setc BYTE PTR (X64ST PTR [rax]).sse42
    bt ecx, 19                                      ; sse4.1
    setc BYTE PTR (X64ST PTR [rax]).sse41
    bt ecx, 9                                       ; ssse3
    setc BYTE PTR (X64ST PTR [rax]).ssse3
    bt ecx, 0                                       ; sse3
    setc BYTE PTR (X64ST PTR [rax]).sse3
    bt edx, 26                                      ; sse2
    setc BYTE PTR (X64ST PTR [rax]).sse2
    bt edx, 25                                      ; sse
    setc BYTE PTR (X64ST PTR [rax]).sse
    bt edx, 23                                      ; mmx
    setc BYTE PTR (X64ST PTR [rax]).mmx
    bt ecx, 25                                      ; aes
    setc BYTE PTR (X64ST PTR [rax]).aes
    bt edx, 28                                      ; htt
    setc BYTE PTR (X64ST PTR [rax]).htt

  ; -------------------------------------------------

    mov rax, 7
    mov rcx, 0
    cpuid

    mov rax, r15                                    ; load struct address into rax

    bt ebx, 5                                       ; avx2
    setc BYTE PTR (X64ST PTR [rax]).avx2

  ; -------------------------------------------------

  ; AMD
    mov rax, 80000001h
    cpuid

    mov rax, r15                                    ; load struct address into rax

    bt edx, 31
    setc BYTE PTR (X64ST PTR [rax]).amd3D           ; 3Dnow
    bt edx, 30
    setc BYTE PTR (X64ST PTR [rax]).amd3x           ; 3Dext
    bt edx, 22
    setc BYTE PTR (X64ST PTR [rax]).mmxx            ; mmxx

  ; -------------------------------------------------

    RestoreRegs

    ret

 mmi endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい


    end
