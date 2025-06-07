;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
; ModuleFileOps
;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
ifndef ModuleFileOpsHeaderGuard
ModuleFileOpsHeaderGuard = 0

;---------------------------------------------------------------------------------------------------
.data
;---------------------------------------------------------------------------------------------------
align 8
FileOps_file_handle qword ?
FileOps_file_size LARGE_INTEGER <>
FileOps_bytes_read dword ?

;---------------------------------------------------------------------------------------------------
.code
;---------------------------------------------------------------------------------------------------
align 16
FileOps_ReadBinary proc; rcx:file_path:qword
    procPrologue
    ;---
    invoke CreateFile, rcx, GENERIC_READ, FILE_SHARE_READ, 0, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, 0
    AssertNotEq rax, INVALID_HANDLE_VALUE
    mov FileOps_file_handle, rax

    invoke GetFileSizeEx, FileOps_file_handle, ADDR FileOps_file_size
    AssertNotEq rax, 0

    ; allocs memory for binary data on arena
    ; should be destroyed after Vulkan shader upload to GPU
    ; so damn trivial
    arenaPushArrayZero ADDR arena, byte, FileOps_file_size.LARGE_INTEGER.QuadPart, 1
    AssertNotEq rax, 0
    mov rsi, rax

    invoke ReadFile, FileOps_file_handle, rax, FileOps_file_size.LARGE_INTEGER.QuadPart, ADDR FileOps_bytes_read, 0
    AssertNotEq rax, 0

    invoke CloseHandle, FileOps_file_handle

    xchg rax, rsi
    ;---
    procEpilogue
    ret
FileOps_ReadBinary endp
endif
