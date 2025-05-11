externdef __imp_AMGetErrorTextA:PPROC
AMGetErrorTextA equ <__imp_AMGetErrorTextA>
  IFNDEF __UNICODE__
    AMGetErrorText equ <__imp_AMGetErrorTextA>
  ENDIF

externdef __imp_AMGetErrorTextW:PPROC
AMGetErrorTextW equ <__imp_AMGetErrorTextW>
  IFDEF __UNICODE__
    AMGetErrorText equ <__imp_AMGetErrorTextW>
  ENDIF

externdef __imp_AmpFactorToDB:PPROC
AmpFactorToDB equ <__imp_AmpFactorToDB>

externdef __imp_DBToAmpFactor:PPROC
DBToAmpFactor equ <__imp_DBToAmpFactor>

externdef __imp_DllCanUnloadNow:PPROC
DllCanUnloadNow equ <__imp_DllCanUnloadNow>

externdef __imp_DllGetClassObject:PPROC
DllGetClassObject equ <__imp_DllGetClassObject>

externdef __imp_DllRegisterServer:PPROC
DllRegisterServer equ <__imp_DllRegisterServer>

externdef __imp_DllUnregisterServer:PPROC
DllUnregisterServer equ <__imp_DllUnregisterServer>

externdef __imp_GetProxyDllInfo:PPROC
GetProxyDllInfo equ <__imp_GetProxyDllInfo>
