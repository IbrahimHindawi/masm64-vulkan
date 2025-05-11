externdef __imp_DirectInputCreateA:PPROC
DirectInputCreateA equ <__imp_DirectInputCreateA>
  IFNDEF __UNICODE__
    DirectInputCreate equ <__imp_DirectInputCreateA>
  ENDIF

externdef __imp_DirectInputCreateEx:PPROC
DirectInputCreateEx equ <__imp_DirectInputCreateEx>

externdef __imp_DirectInputCreateW:PPROC
DirectInputCreateW equ <__imp_DirectInputCreateW>
  IFDEF __UNICODE__
    DirectInputCreate equ <__imp_DirectInputCreateW>
  ENDIF

externdef __imp_DllCanUnloadNow:PPROC
DllCanUnloadNow equ <__imp_DllCanUnloadNow>

externdef __imp_DllGetClassObject:PPROC
DllGetClassObject equ <__imp_DllGetClassObject>

externdef __imp_DllRegisterServer:PPROC
DllRegisterServer equ <__imp_DllRegisterServer>

externdef __imp_DllUnregisterServer:PPROC
DllUnregisterServer equ <__imp_DllUnregisterServer>
