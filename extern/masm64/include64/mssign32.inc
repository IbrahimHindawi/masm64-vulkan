externdef __imp_DllRegisterServer:PPROC
DllRegisterServer equ <__imp_DllRegisterServer>

externdef __imp_DllUnregisterServer:PPROC
DllUnregisterServer equ <__imp_DllUnregisterServer>

externdef __imp_FreeCryptProvFromCert:PPROC
FreeCryptProvFromCert equ <__imp_FreeCryptProvFromCert>

externdef __imp_GetCryptProvFromCert:PPROC
GetCryptProvFromCert equ <__imp_GetCryptProvFromCert>

externdef __imp_PvkFreeCryptProv:PPROC
PvkFreeCryptProv equ <__imp_PvkFreeCryptProv>

externdef __imp_PvkGetCryptProv:PPROC
PvkGetCryptProv equ <__imp_PvkGetCryptProv>

externdef __imp_PvkPrivateKeyAcquireContext:PPROC
PvkPrivateKeyAcquireContext equ <__imp_PvkPrivateKeyAcquireContext>

externdef __imp_PvkPrivateKeyAcquireContextA:PPROC
PvkPrivateKeyAcquireContextA equ <__imp_PvkPrivateKeyAcquireContextA>
  IFNDEF __UNICODE__
    PvkPrivateKeyAcquireContext equ <__imp_PvkPrivateKeyAcquireContextA>
  ENDIF

externdef __imp_PvkPrivateKeyAcquireContextFromMemory:PPROC
PvkPrivateKeyAcquireContextFromMemory equ <__imp_PvkPrivateKeyAcquireContextFromMemory>

externdef __imp_PvkPrivateKeyAcquireContextFromMemoryA:PPROC
PvkPrivateKeyAcquireContextFromMemoryA equ <__imp_PvkPrivateKeyAcquireContextFromMemoryA>
  IFNDEF __UNICODE__
    PvkPrivateKeyAcquireContextFromMemory equ <__imp_PvkPrivateKeyAcquireContextFromMemoryA>
  ENDIF

externdef __imp_PvkPrivateKeyLoad:PPROC
PvkPrivateKeyLoad equ <__imp_PvkPrivateKeyLoad>

externdef __imp_PvkPrivateKeyLoadA:PPROC
PvkPrivateKeyLoadA equ <__imp_PvkPrivateKeyLoadA>
  IFNDEF __UNICODE__
    PvkPrivateKeyLoad equ <__imp_PvkPrivateKeyLoadA>
  ENDIF

externdef __imp_PvkPrivateKeyLoadFromMemory:PPROC
PvkPrivateKeyLoadFromMemory equ <__imp_PvkPrivateKeyLoadFromMemory>

externdef __imp_PvkPrivateKeyLoadFromMemoryA:PPROC
PvkPrivateKeyLoadFromMemoryA equ <__imp_PvkPrivateKeyLoadFromMemoryA>
  IFNDEF __UNICODE__
    PvkPrivateKeyLoadFromMemory equ <__imp_PvkPrivateKeyLoadFromMemoryA>
  ENDIF

externdef __imp_PvkPrivateKeyReleaseContext:PPROC
PvkPrivateKeyReleaseContext equ <__imp_PvkPrivateKeyReleaseContext>

externdef __imp_PvkPrivateKeyReleaseContextA:PPROC
PvkPrivateKeyReleaseContextA equ <__imp_PvkPrivateKeyReleaseContextA>
  IFNDEF __UNICODE__
    PvkPrivateKeyReleaseContext equ <__imp_PvkPrivateKeyReleaseContextA>
  ENDIF

externdef __imp_PvkPrivateKeySave:PPROC
PvkPrivateKeySave equ <__imp_PvkPrivateKeySave>

externdef __imp_PvkPrivateKeySaveA:PPROC
PvkPrivateKeySaveA equ <__imp_PvkPrivateKeySaveA>
  IFNDEF __UNICODE__
    PvkPrivateKeySave equ <__imp_PvkPrivateKeySaveA>
  ENDIF

externdef __imp_PvkPrivateKeySaveToMemory:PPROC
PvkPrivateKeySaveToMemory equ <__imp_PvkPrivateKeySaveToMemory>

externdef __imp_PvkPrivateKeySaveToMemoryA:PPROC
PvkPrivateKeySaveToMemoryA equ <__imp_PvkPrivateKeySaveToMemoryA>
  IFNDEF __UNICODE__
    PvkPrivateKeySaveToMemory equ <__imp_PvkPrivateKeySaveToMemoryA>
  ENDIF

externdef __imp_SignError:PPROC
SignError equ <__imp_SignError>

externdef __imp_SignerAddTimeStampResponse:PPROC
SignerAddTimeStampResponse equ <__imp_SignerAddTimeStampResponse>

externdef __imp_SignerAddTimeStampResponseEx:PPROC
SignerAddTimeStampResponseEx equ <__imp_SignerAddTimeStampResponseEx>

externdef __imp_SignerCreateTimeStampRequest:PPROC
SignerCreateTimeStampRequest equ <__imp_SignerCreateTimeStampRequest>

externdef __imp_SignerFreeSignerContext:PPROC
SignerFreeSignerContext equ <__imp_SignerFreeSignerContext>

externdef __imp_SignerSign:PPROC
SignerSign equ <__imp_SignerSign>

externdef __imp_SignerSignEx:PPROC
SignerSignEx equ <__imp_SignerSignEx>

externdef __imp_SignerTimeStamp:PPROC
SignerTimeStamp equ <__imp_SignerTimeStamp>

externdef __imp_SignerTimeStampEx:PPROC
SignerTimeStampEx equ <__imp_SignerTimeStampEx>

externdef __imp_SpcGetCertFromKey:PPROC
SpcGetCertFromKey equ <__imp_SpcGetCertFromKey>
