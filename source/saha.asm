include macros.asm
;---------------------------------------------------------------------------------------------------
; structs
;---------------------------------------------------------------------------------------------------
Arena struct
    base qword ?
    cursor qword ?
    previous qword ?
    used qword ?
    pagesize qword ?
    npages qword ?
Arena ends
;---------------------------------------------------------------------------------------------------
; macros
;---------------------------------------------------------------------------------------------------
; max_alloc_size equ 010000000000h
max_alloc_size equ 0100000h
;---------------------------------------------------------------------------------------------------
.data
;---------------------------------------------------------------------------------------------------
systeminfo SYSTEM_INFO <>
arena_perm Arena <>


mem_p qword ?
mem_a qword ?
mem_m qword ?

;---------------------------------------------------------------------------------------------------
.code
;---------------------------------------------------------------------------------------------------
isPowerOfTwo proc
  lea eax, DWORD PTR [rcx-1]
  test eax, ecx
  sete al
  ret 0
isPowerOfTwo endp

memoryAlignForward proc pointer:qword, alignment:qword
    mov rsi, rcx
    mov rcx, rdx
    call isPowerOfTwo
    AssertNotEq rax, 0
    mov rcx, rsi
    mov mem_p, rcx
    mov mem_a, rdx
    dec rdx
    and rcx, rdx
    mov mem_m, rcx
    mov rax, rsi
    cmp mem_m, 0
    je  iszero
    mov rcx, mem_a
    mov rdx, mem_m
    sub rcx, rdx
    add rax, rcx
    iszero:
    ret
memoryAlignForward endp

arenaInit proc arena:qword
    mov rsi, arena
    lea rcx, systeminfo
    call GetSystemInfo
    mov rcx, rsi
    mov eax, systeminfo.dwPageSize
    mov [rcx].Arena.pagesize, rax
    mov rsi, rcx
    invoke VirtualAlloc, 0, max_alloc_size, MEM_RESERVE, PAGE_NOACCESS
    AssertNotEq rax, 0
    mov rcx, rsi
    mov [rcx].Arena.base, rax
    mov [rcx].Arena.cursor, rax
    mov [rcx].Arena.previous, rax
    ret
arenaInit endp

arenaPush proc arena:qword, alloc_size:qword, alignment:qword
    local arenaref:qword, alloc_sizevar:qword, diff:qword, curr_ptr:qword, m_offset:qword
    mov arenaref, rcx
    mov alloc_sizevar, rdx
    mov alignment, r8
    mov rsi, [rcx].Arena.base
    mov rdi, [rcx].Arena.used
    add rsi, rdi
    mov curr_ptr, rsi
    mov rcx, rsi
    xchg rdx, r8
    call memoryAlignForward
    mov m_offset, rax
    xchg rdx, r8
    mov rcx, curr_ptr
    sub rax, rcx
    mov diff, rax
    mov rsi, arenaref
    mov rcx, [rsi].Arena.used
    add rcx, alloc_sizevar
    add rcx, diff
    mov rax, [rsi].Arena.pagesize
    mov r8, [rsi].Arena.npages
    mul r8
    cmp rcx, rax
    jng noneedtoalloc
    mov rcx, [rsi].Arena.used
    add rcx, alloc_sizevar
    add rcx, diff
    cvtsi2ss xmm0, rcx
    mov rdx, [rsi].Arena.pagesize
    cvtsi2ss xmm1, rdx
    divss xmm0, xmm1
    roundss xmm0, xmm0, 2
    cvttss2si rcx, xmm0
    mov rdx, arenaref
    mov [rdx].Arena.npages, rcx
    mov rsi, arenaref
    mov rax, [rsi].Arena.pagesize
    mov r8, [rsi].Arena.npages
    mul r8
    mov rdx, arenaref
    mov rcx, [rdx].Arena.base
    mov rdx, 4096
    mov r8, MEM_COMMIT
    mov r9, PAGE_READWRITE
    call VirtualAlloc
    AssertNotEq rax, 0
    noneedtoalloc:
    mov rsi, arenaref
    mov rcx, diff
    add rcx, alloc_sizevar
    mov [rsi].Arena.used, rcx
    mov rcx, [rsi].Arena.cursor
    mov [rsi].Arena.previous, rcx
    mov rcx, diff
    add [rsi].Arena.cursor, rcx
    mov rax, [rsi].Arena.cursor
    mov rcx, alloc_sizevar
    add [rsi].Arena.cursor, rcx
    ret
arenaPush endp

arenaPushZero proc arenaref:qword, alloc_size:qword, alignment:qword
    call arenaPush
    mov rsi, rax
    mov rax, [rax].Arena.cursor
    xor rcx, rcx
    arenaPushZeroLoop:
    mov byte ptr [rax], 0
    inc rcx
    cmp rcx, rdx
    jl arenaPushZeroLoop
    ret
arenaPushZero endp
