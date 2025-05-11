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

externdef __imp_AddSecurityPackageA:PPROC
AddSecurityPackageA equ <__imp_AddSecurityPackageA>
  IFNDEF __UNICODE__
    AddSecurityPackage equ <__imp_AddSecurityPackageA>
  ENDIF

externdef __imp_AddSecurityPackageW:PPROC
AddSecurityPackageW equ <__imp_AddSecurityPackageW>
  IFDEF __UNICODE__
    AddSecurityPackage equ <__imp_AddSecurityPackageW>
  ENDIF

externdef __imp_ApplyControlToken:PPROC
ApplyControlToken equ <__imp_ApplyControlToken>

externdef __imp_CompleteAuthToken:PPROC
CompleteAuthToken equ <__imp_CompleteAuthToken>

externdef __imp_DecryptMessage:PPROC
DecryptMessage equ <__imp_DecryptMessage>

externdef __imp_DeleteSecurityContext:PPROC
DeleteSecurityContext equ <__imp_DeleteSecurityContext>

externdef __imp_DeleteSecurityPackageA:PPROC
DeleteSecurityPackageA equ <__imp_DeleteSecurityPackageA>
  IFNDEF __UNICODE__
    DeleteSecurityPackage equ <__imp_DeleteSecurityPackageA>
  ENDIF

externdef __imp_DeleteSecurityPackageW:PPROC
DeleteSecurityPackageW equ <__imp_DeleteSecurityPackageW>
  IFDEF __UNICODE__
    DeleteSecurityPackage equ <__imp_DeleteSecurityPackageW>
  ENDIF

externdef __imp_EncryptMessage:PPROC
EncryptMessage equ <__imp_EncryptMessage>

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

externdef __imp_ExportSecurityContext:PPROC
ExportSecurityContext equ <__imp_ExportSecurityContext>

externdef __imp_FreeContextBuffer:PPROC
FreeContextBuffer equ <__imp_FreeContextBuffer>

externdef __imp_FreeCredentialsHandle:PPROC
FreeCredentialsHandle equ <__imp_FreeCredentialsHandle>

externdef __imp_ImpersonateSecurityContext:PPROC
ImpersonateSecurityContext equ <__imp_ImpersonateSecurityContext>

externdef __imp_ImportSecurityContextA:PPROC
ImportSecurityContextA equ <__imp_ImportSecurityContextA>
  IFNDEF __UNICODE__
    ImportSecurityContext equ <__imp_ImportSecurityContextA>
  ENDIF

externdef __imp_ImportSecurityContextW:PPROC
ImportSecurityContextW equ <__imp_ImportSecurityContextW>
  IFDEF __UNICODE__
    ImportSecurityContext equ <__imp_ImportSecurityContextW>
  ENDIF

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

externdef __imp_QueryCredentialsAttributesA:PPROC
QueryCredentialsAttributesA equ <__imp_QueryCredentialsAttributesA>
  IFNDEF __UNICODE__
    QueryCredentialsAttributes equ <__imp_QueryCredentialsAttributesA>
  ENDIF

externdef __imp_QueryCredentialsAttributesW:PPROC
QueryCredentialsAttributesW equ <__imp_QueryCredentialsAttributesW>
  IFDEF __UNICODE__
    QueryCredentialsAttributes equ <__imp_QueryCredentialsAttributesW>
  ENDIF

externdef __imp_QuerySecurityContextToken:PPROC
QuerySecurityContextToken equ <__imp_QuerySecurityContextToken>

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

externdef __imp_UnsealMessage:PPROC
UnsealMessage equ <__imp_UnsealMessage>

externdef __imp_VerifySignature:PPROC
VerifySignature equ <__imp_VerifySignature>
