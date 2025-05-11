externdef __imp_AcceptSecurityContext:PPROC
AcceptSecurityContext equ <__imp_AcceptSecurityContext>

externdef __imp_AcquireCredentialsHandleA:PPROC
AcquireCredentialsHandleA equ <__imp_AcquireCredentialsHandleA>
  IFNDEF __UNICODE__
    AcquireCredentialsHandle equ <__imp_AcquireCredentialsHandleA>
  ENDIF

externdef __imp_AcquireCredentialsHandleW:PPROC
AcquireCredentialsHandleW equ <__imp_AcquireCredentialsHandleW>
  IFDEF __UNICODE__
    AcquireCredentialsHandle equ <__imp_AcquireCredentialsHandleW>
  ENDIF

externdef __imp_ApplyControlToken:PPROC
ApplyControlToken equ <__imp_ApplyControlToken>

externdef __imp_CloseSslPerformanceData:PPROC
CloseSslPerformanceData equ <__imp_CloseSslPerformanceData>

externdef __imp_CollectSslPerformanceData:PPROC
CollectSslPerformanceData equ <__imp_CollectSslPerformanceData>

externdef __imp_CompleteAuthToken:PPROC
CompleteAuthToken equ <__imp_CompleteAuthToken>

externdef __imp_DeleteSecurityContext:PPROC
DeleteSecurityContext equ <__imp_DeleteSecurityContext>

externdef __imp_EnumerateSecurityPackagesA:PPROC
EnumerateSecurityPackagesA equ <__imp_EnumerateSecurityPackagesA>
  IFNDEF __UNICODE__
    EnumerateSecurityPackages equ <__imp_EnumerateSecurityPackagesA>
  ENDIF

externdef __imp_EnumerateSecurityPackagesW:PPROC
EnumerateSecurityPackagesW equ <__imp_EnumerateSecurityPackagesW>
  IFDEF __UNICODE__
    EnumerateSecurityPackages equ <__imp_EnumerateSecurityPackagesW>
  ENDIF

externdef __imp_FreeContextBuffer:PPROC
FreeContextBuffer equ <__imp_FreeContextBuffer>

externdef __imp_FreeCredentialsHandle:PPROC
FreeCredentialsHandle equ <__imp_FreeCredentialsHandle>

externdef __imp_ImpersonateSecurityContext:PPROC
ImpersonateSecurityContext equ <__imp_ImpersonateSecurityContext>

externdef __imp_InitSecurityInterfaceA:PPROC
InitSecurityInterfaceA equ <__imp_InitSecurityInterfaceA>
  IFNDEF __UNICODE__
    InitSecurityInterface equ <__imp_InitSecurityInterfaceA>
  ENDIF

externdef __imp_InitSecurityInterfaceW:PPROC
InitSecurityInterfaceW equ <__imp_InitSecurityInterfaceW>
  IFDEF __UNICODE__
    InitSecurityInterface equ <__imp_InitSecurityInterfaceW>
  ENDIF

externdef __imp_InitializeSecurityContextA:PPROC
InitializeSecurityContextA equ <__imp_InitializeSecurityContextA>
  IFNDEF __UNICODE__
    InitializeSecurityContext equ <__imp_InitializeSecurityContextA>
  ENDIF

externdef __imp_InitializeSecurityContextW:PPROC
InitializeSecurityContextW equ <__imp_InitializeSecurityContextW>
  IFDEF __UNICODE__
    InitializeSecurityContext equ <__imp_InitializeSecurityContextW>
  ENDIF

externdef __imp_MakeSignature:PPROC
MakeSignature equ <__imp_MakeSignature>

externdef __imp_OpenSslPerformanceData:PPROC
OpenSslPerformanceData equ <__imp_OpenSslPerformanceData>

externdef __imp_QueryContextAttributesA:PPROC
QueryContextAttributesA equ <__imp_QueryContextAttributesA>
  IFNDEF __UNICODE__
    QueryContextAttributes equ <__imp_QueryContextAttributesA>
  ENDIF

externdef __imp_QueryContextAttributesW:PPROC
QueryContextAttributesW equ <__imp_QueryContextAttributesW>
  IFDEF __UNICODE__
    QueryContextAttributes equ <__imp_QueryContextAttributesW>
  ENDIF

externdef __imp_QuerySecurityPackageInfoA:PPROC
QuerySecurityPackageInfoA equ <__imp_QuerySecurityPackageInfoA>
  IFNDEF __UNICODE__
    QuerySecurityPackageInfo equ <__imp_QuerySecurityPackageInfoA>
  ENDIF

externdef __imp_QuerySecurityPackageInfoW:PPROC
QuerySecurityPackageInfoW equ <__imp_QuerySecurityPackageInfoW>
  IFDEF __UNICODE__
    QuerySecurityPackageInfo equ <__imp_QuerySecurityPackageInfoW>
  ENDIF

externdef __imp_RevertSecurityContext:PPROC
RevertSecurityContext equ <__imp_RevertSecurityContext>

externdef __imp_SealMessage:PPROC
SealMessage equ <__imp_SealMessage>

externdef __imp_SpLsaModeInitialize:PPROC
SpLsaModeInitialize equ <__imp_SpLsaModeInitialize>

externdef __imp_SpUserModeInitialize:PPROC
SpUserModeInitialize equ <__imp_SpUserModeInitialize>

externdef __imp_SslCrackCertificate:PPROC
SslCrackCertificate equ <__imp_SslCrackCertificate>

externdef __imp_SslEmptyCacheA:PPROC
SslEmptyCacheA equ <__imp_SslEmptyCacheA>
  IFNDEF __UNICODE__
    SslEmptyCache equ <__imp_SslEmptyCacheA>
  ENDIF

externdef __imp_SslEmptyCacheW:PPROC
SslEmptyCacheW equ <__imp_SslEmptyCacheW>
  IFDEF __UNICODE__
    SslEmptyCache equ <__imp_SslEmptyCacheW>
  ENDIF

externdef __imp_SslFreeCertificate:PPROC
SslFreeCertificate equ <__imp_SslFreeCertificate>

externdef __imp_SslGenerateKeyPair:PPROC
SslGenerateKeyPair equ <__imp_SslGenerateKeyPair>

externdef __imp_SslGenerateRandomBits:PPROC
SslGenerateRandomBits equ <__imp_SslGenerateRandomBits>

externdef __imp_SslGetMaximumKeySize:PPROC
SslGetMaximumKeySize equ <__imp_SslGetMaximumKeySize>

externdef __imp_SslLoadCertificate:PPROC
SslLoadCertificate equ <__imp_SslLoadCertificate>

externdef __imp_UnsealMessage:PPROC
UnsealMessage equ <__imp_UnsealMessage>

externdef __imp_VerifySignature:PPROC
VerifySignature equ <__imp_VerifySignature>
