option casemap:none
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
max_alloc_size equ 01000000h
;---------------------------------------------------------------------------------------------------
.data
;---------------------------------------------------------------------------------------------------
align 16
systeminfo SYSTEM_INFO <>
align 16
arena Arena <>


mem_p qword ?
mem_a qword ?
mem_m qword ?

;---------------------------------------------------------------------------------------------------
.code
;---------------------------------------------------------------------------------------------------
align 16
memoryIsPowerOfTwo proc
  lea eax, DWORD PTR [rcx-1]
  test eax, ecx
  sete al
  ret 0
memoryIsPowerOfTwo endp

align 16
memoryAlignForward proc pointer:qword, alignment:qword
    mov rsi, rcx
    mov rcx, rdx
    call memoryIsPowerOfTwo
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

align 16
arenaInit proc arena_ref:qword
    mov rsi, arena_ref
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

align 16
arenaPush proc arena_ref:qword, alloc_size:qword, alignment:qword
    local arenaref:qword, alloc_sizevar:qword, old_alloc_sizevar:qword, diff:qword, curr_ptr:qword, m_offset:qword
    mov arenaref, rcx
    mov old_alloc_sizevar, rdx
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
    mov alloc_sizevar, rax
    mov rdx, arenaref
    mov rcx, [rdx].Arena.base
    mov rdx, alloc_sizevar
    mov r8, MEM_COMMIT
    mov r9, PAGE_READWRITE
    call VirtualAlloc
    AssertNotEq rax, 0
    noneedtoalloc:
    mov rsi, arenaref
    mov rcx, diff
    add rcx, alloc_sizevar
    add [rsi].Arena.used, rcx
    mov rcx, [rsi].Arena.cursor ; save cursor
    mov [rsi].Arena.previous, rcx ; save cursor
    mov rcx, diff
    add [rsi].Arena.cursor, rcx ; cursor += diff
    mov rax, [rsi].Arena.cursor  ; save aligned cursor
    mov rcx, old_alloc_sizevar
    add [rsi].Arena.cursor, rcx
    ret
arenaPush endp

align 16
arenaPushZero proc arenaref:qword, alloc_size:qword, alignment:qword
    call arenaPush
    xchg rdx, rcx
    xor rcx, rcx
    arenaPushZeroLoop:
    mov byte ptr [rax + rcx], 0
    inc rcx
    cmp rcx, rdx
    jl arenaPushZeroLoop
    ret
arenaPushZero endp

align 16
arenaSetPos proc arenaref:qword, pos:qword
    mov rax, [rcx].Arena.cursor
    sub rax, rdx
    sub [rcx].Arena.used, rax
    mov [rcx].Arena.cursor, rdx
    mov rax, [rcx].Arena.cursor
    ret
arenaSetPos endp

arenaGetPos macro arenaref:req, posref:req
    mov rax, arenaref.Arena.cursor
    mov posref, rax
endm

arenaPushArray macro __arena:req, __type:req, __count:req, __align:req
    ; lea rcx, __arena
    ; rdx = __type * __count
    ; r8 = alignof __type
    mov rdx, sizeof __type
    mov rax, __count
    mul rdx
    ; automate alignof
    invoke arenaPush, __arena, rax, __align
endm

; TODO(ibrahim): automate alignof()?
; __arena is ADDR arena, reference to the arena
; __type is the type of data to allocate
; __count is always passed into rax, eax, ax, al
; __align is the data structure memory alignment
arenaPushArrayZero macro __arena:req, __type:req, __count:req, __align:req
    ; rcx = &__arena
    ; rdx = sizeof(__type)
    ; rax = __count
    ; r8 = __align
    mov rdx, sizeof __type
    ;---
    ; handle rax zero extension:
    ;---
    ; if type __count eq type qword; this is not needed since rax is ready
        ; mov rax, rax
    ; if type __count eq type dword; this is not needed since eax is already zero extended
        ; mov eax, eax
    if type __count eq type word
        movzx rax, ax
    elseif type __count eq type byte
        movzx rax, al
    endif
    ; rax = __type * __count
    mul rdx
    invoke arenaPushZero, __arena, rax, __align
endm
