externdef __imp_ApplyPatchToFileA:PPROC
ApplyPatchToFileA equ <__imp_ApplyPatchToFileA>
  IFNDEF __UNICODE__
    ApplyPatchToFile equ <__imp_ApplyPatchToFileA>
  ENDIF

externdef __imp_ApplyPatchToFileByHandles:PPROC
ApplyPatchToFileByHandles equ <__imp_ApplyPatchToFileByHandles>

externdef __imp_ApplyPatchToFileByHandlesEx:PPROC
ApplyPatchToFileByHandlesEx equ <__imp_ApplyPatchToFileByHandlesEx>

externdef __imp_ApplyPatchToFileExA:PPROC
ApplyPatchToFileExA equ <__imp_ApplyPatchToFileExA>
  IFNDEF __UNICODE__
    ApplyPatchToFileEx equ <__imp_ApplyPatchToFileExA>
  ENDIF

externdef __imp_ApplyPatchToFileExW:PPROC
ApplyPatchToFileExW equ <__imp_ApplyPatchToFileExW>
  IFDEF __UNICODE__
    ApplyPatchToFileEx equ <__imp_ApplyPatchToFileExW>
  ENDIF

externdef __imp_ApplyPatchToFileW:PPROC
ApplyPatchToFileW equ <__imp_ApplyPatchToFileW>
  IFDEF __UNICODE__
    ApplyPatchToFile equ <__imp_ApplyPatchToFileW>
  ENDIF

externdef __imp_GetFilePatchSignatureA:PPROC
GetFilePatchSignatureA equ <__imp_GetFilePatchSignatureA>
  IFNDEF __UNICODE__
    GetFilePatchSignature equ <__imp_GetFilePatchSignatureA>
  ENDIF

externdef __imp_GetFilePatchSignatureByHandle:PPROC
GetFilePatchSignatureByHandle equ <__imp_GetFilePatchSignatureByHandle>

externdef __imp_GetFilePatchSignatureW:PPROC
GetFilePatchSignatureW equ <__imp_GetFilePatchSignatureW>
  IFDEF __UNICODE__
    GetFilePatchSignature equ <__imp_GetFilePatchSignatureW>
  ENDIF

externdef __imp_TestApplyPatchToFileA:PPROC
TestApplyPatchToFileA equ <__imp_TestApplyPatchToFileA>
  IFNDEF __UNICODE__
    TestApplyPatchToFile equ <__imp_TestApplyPatchToFileA>
  ENDIF

externdef __imp_TestApplyPatchToFileByHandles:PPROC
TestApplyPatchToFileByHandles equ <__imp_TestApplyPatchToFileByHandles>

externdef __imp_TestApplyPatchToFileW:PPROC
TestApplyPatchToFileW equ <__imp_TestApplyPatchToFileW>
  IFDEF __UNICODE__
    TestApplyPatchToFile equ <__imp_TestApplyPatchToFileW>
  ENDIF
