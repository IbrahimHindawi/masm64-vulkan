externdef __imp_AcquireDDThreadLock:PPROC
AcquireDDThreadLock equ <__imp_AcquireDDThreadLock>

externdef __imp_CheckFullscreen:PPROC
CheckFullscreen equ <__imp_CheckFullscreen>

externdef __imp_CompleteCreateSysmemSurface:PPROC
CompleteCreateSysmemSurface equ <__imp_CompleteCreateSysmemSurface>

externdef __imp_D3DParseUnknownCommand:PPROC
D3DParseUnknownCommand equ <__imp_D3DParseUnknownCommand>

externdef __imp_DDGetAttachedSurfaceLcl:PPROC
DDGetAttachedSurfaceLcl equ <__imp_DDGetAttachedSurfaceLcl>

externdef __imp_DDInternalLock:PPROC
DDInternalLock equ <__imp_DDInternalLock>

externdef __imp_DDInternalUnlock:PPROC
DDInternalUnlock equ <__imp_DDInternalUnlock>

externdef __imp_DSoundHelp:PPROC
DSoundHelp equ <__imp_DSoundHelp>

externdef __imp_DirectDrawCreate:PPROC
DirectDrawCreate equ <__imp_DirectDrawCreate>

externdef __imp_DirectDrawCreateClipper:PPROC
DirectDrawCreateClipper equ <__imp_DirectDrawCreateClipper>

externdef __imp_DirectDrawCreateEx:PPROC
DirectDrawCreateEx equ <__imp_DirectDrawCreateEx>

externdef __imp_DirectDrawEnumerateA:PPROC
DirectDrawEnumerateA equ <__imp_DirectDrawEnumerateA>
  IFNDEF __UNICODE__
    DirectDrawEnumerate equ <__imp_DirectDrawEnumerateA>
  ENDIF

externdef __imp_DirectDrawEnumerateExA:PPROC
DirectDrawEnumerateExA equ <__imp_DirectDrawEnumerateExA>
  IFNDEF __UNICODE__
    DirectDrawEnumerateEx equ <__imp_DirectDrawEnumerateExA>
  ENDIF

externdef __imp_DirectDrawEnumerateExW:PPROC
DirectDrawEnumerateExW equ <__imp_DirectDrawEnumerateExW>
  IFDEF __UNICODE__
    DirectDrawEnumerateEx equ <__imp_DirectDrawEnumerateExW>
  ENDIF

externdef __imp_DirectDrawEnumerateW:PPROC
DirectDrawEnumerateW equ <__imp_DirectDrawEnumerateW>
  IFDEF __UNICODE__
    DirectDrawEnumerate equ <__imp_DirectDrawEnumerateW>
  ENDIF

externdef __imp_DllCanUnloadNow:PPROC
DllCanUnloadNow equ <__imp_DllCanUnloadNow>

externdef __imp_DllGetClassObject:PPROC
DllGetClassObject equ <__imp_DllGetClassObject>

externdef __imp_GetDDSurfaceLocal:PPROC
GetDDSurfaceLocal equ <__imp_GetDDSurfaceLocal>

externdef __imp_GetOLEThunkData:PPROC
GetOLEThunkData equ <__imp_GetOLEThunkData>

externdef __imp_GetSurfaceFromDC:PPROC
GetSurfaceFromDC equ <__imp_GetSurfaceFromDC>

externdef __imp_RegisterSpecialCase:PPROC
RegisterSpecialCase equ <__imp_RegisterSpecialCase>

externdef __imp_ReleaseDDThreadLock:PPROC
ReleaseDDThreadLock equ <__imp_ReleaseDDThreadLock>
