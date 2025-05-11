externdef __imp_CPAcquireContext:PPROC
CPAcquireContext equ <__imp_CPAcquireContext>

externdef __imp_CPAcquireContextW:PPROC
CPAcquireContextW equ <__imp_CPAcquireContextW>
  IFDEF __UNICODE__
    CPAcquireContext equ <__imp_CPAcquireContextW>
  ENDIF

externdef __imp_CPCreateHash:PPROC
CPCreateHash equ <__imp_CPCreateHash>

externdef __imp_CPDecrypt:PPROC
CPDecrypt equ <__imp_CPDecrypt>

externdef __imp_CPDeriveKey:PPROC
CPDeriveKey equ <__imp_CPDeriveKey>

externdef __imp_CPDestroyHash:PPROC
CPDestroyHash equ <__imp_CPDestroyHash>

externdef __imp_CPDestroyKey:PPROC
CPDestroyKey equ <__imp_CPDestroyKey>

externdef __imp_CPEncrypt:PPROC
CPEncrypt equ <__imp_CPEncrypt>

externdef __imp_CPExportKey:PPROC
CPExportKey equ <__imp_CPExportKey>

externdef __imp_CPGenKey:PPROC
CPGenKey equ <__imp_CPGenKey>

externdef __imp_CPGenRandom:PPROC
CPGenRandom equ <__imp_CPGenRandom>

externdef __imp_CPGetHashParam:PPROC
CPGetHashParam equ <__imp_CPGetHashParam>

externdef __imp_CPGetKeyParam:PPROC
CPGetKeyParam equ <__imp_CPGetKeyParam>

externdef __imp_CPGetProvParam:PPROC
CPGetProvParam equ <__imp_CPGetProvParam>

externdef __imp_CPGetUserKey:PPROC
CPGetUserKey equ <__imp_CPGetUserKey>

externdef __imp_CPHashData:PPROC
CPHashData equ <__imp_CPHashData>

externdef __imp_CPHashSessionKey:PPROC
CPHashSessionKey equ <__imp_CPHashSessionKey>

externdef __imp_CPImportKey:PPROC
CPImportKey equ <__imp_CPImportKey>

externdef __imp_CPReleaseContext:PPROC
CPReleaseContext equ <__imp_CPReleaseContext>

externdef __imp_CPSetHashParam:PPROC
CPSetHashParam equ <__imp_CPSetHashParam>

externdef __imp_CPSetKeyParam:PPROC
CPSetKeyParam equ <__imp_CPSetKeyParam>

externdef __imp_CPSetProvParam:PPROC
CPSetProvParam equ <__imp_CPSetProvParam>

externdef __imp_CPSignHash:PPROC
CPSignHash equ <__imp_CPSignHash>

externdef __imp_CPVerifySignature:PPROC
CPVerifySignature equ <__imp_CPVerifySignature>

externdef __imp_DllRegisterServer:PPROC
DllRegisterServer equ <__imp_DllRegisterServer>

externdef __imp_DllUnregisterServer:PPROC
DllUnregisterServer equ <__imp_DllUnregisterServer>
