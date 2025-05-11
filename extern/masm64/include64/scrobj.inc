externdef __imp_DllCanUnloadNow:PPROC
DllCanUnloadNow equ <__imp_DllCanUnloadNow>

externdef __imp_DllGetClassObject:PPROC
DllGetClassObject equ <__imp_DllGetClassObject>

externdef __imp_DllInstall:PPROC
DllInstall equ <__imp_DllInstall>

externdef __imp_DllRegisterServer:PPROC
DllRegisterServer equ <__imp_DllRegisterServer>

externdef __imp_DllRegisterServerEx:PPROC
DllRegisterServerEx equ <__imp_DllRegisterServerEx>

externdef __imp_DllRegisterServerExA:PPROC
DllRegisterServerExA equ <__imp_DllRegisterServerExA>
  IFNDEF __UNICODE__
    DllRegisterServerEx equ <__imp_DllRegisterServerExA>
  ENDIF

externdef __imp_DllRegisterServerExW:PPROC
DllRegisterServerExW equ <__imp_DllRegisterServerExW>
  IFDEF __UNICODE__
    DllRegisterServerEx equ <__imp_DllRegisterServerExW>
  ENDIF

externdef __imp_DllUnregisterServer:PPROC
DllUnregisterServer equ <__imp_DllUnregisterServer>

externdef __imp_DllUnregisterServerEx:PPROC
DllUnregisterServerEx equ <__imp_DllUnregisterServerEx>

externdef __imp_GenerateTypeLib:PPROC
GenerateTypeLib equ <__imp_GenerateTypeLib>

externdef __imp_GenerateTypeLibW:PPROC
GenerateTypeLibW equ <__imp_GenerateTypeLibW>
  IFDEF __UNICODE__
    GenerateTypeLib equ <__imp_GenerateTypeLibW>
  ENDIF
