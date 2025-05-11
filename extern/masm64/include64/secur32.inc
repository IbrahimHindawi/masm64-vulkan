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

externdef __imp_AddCredentialsA:PPROC
AddCredentialsA equ <__imp_AddCredentialsA>
  IFNDEF __UNICODE__
    AddCredentials equ <__imp_AddCredentialsA>
  ENDIF

externdef __imp_AddCredentialsW:PPROC
AddCredentialsW equ <__imp_AddCredentialsW>
  IFDEF __UNICODE__
    AddCredentials equ <__imp_AddCredentialsW>
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

externdef __imp_CredMarshalTargetInfo:PPROC
CredMarshalTargetInfo equ <__imp_CredMarshalTargetInfo>

externdef __imp_CredUnmarshalTargetInfo:PPROC
CredUnmarshalTargetInfo equ <__imp_CredUnmarshalTargetInfo>

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

externdef __imp_GetComputerObjectNameA:PPROC
GetComputerObjectNameA equ <__imp_GetComputerObjectNameA>
  IFNDEF __UNICODE__
    GetComputerObjectName equ <__imp_GetComputerObjectNameA>
  ENDIF

externdef __imp_GetComputerObjectNameW:PPROC
GetComputerObjectNameW equ <__imp_GetComputerObjectNameW>
  IFDEF __UNICODE__
    GetComputerObjectName equ <__imp_GetComputerObjectNameW>
  ENDIF

externdef __imp_GetSecurityUserInfo:PPROC
GetSecurityUserInfo equ <__imp_GetSecurityUserInfo>

externdef __imp_GetUserNameExA:PPROC
GetUserNameExA equ <__imp_GetUserNameExA>
  IFNDEF __UNICODE__
    GetUserNameEx equ <__imp_GetUserNameExA>
  ENDIF

externdef __imp_GetUserNameExW:PPROC
GetUserNameExW equ <__imp_GetUserNameExW>
  IFDEF __UNICODE__
    GetUserNameEx equ <__imp_GetUserNameExW>
  ENDIF

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

externdef __imp_LsaCallAuthenticationPackage:PPROC
LsaCallAuthenticationPackage equ <__imp_LsaCallAuthenticationPackage>

externdef __imp_LsaConnectUntrusted:PPROC
LsaConnectUntrusted equ <__imp_LsaConnectUntrusted>

externdef __imp_LsaDeregisterLogonProcess:PPROC
LsaDeregisterLogonProcess equ <__imp_LsaDeregisterLogonProcess>

externdef __imp_LsaEnumerateLogonSessions:PPROC
LsaEnumerateLogonSessions equ <__imp_LsaEnumerateLogonSessions>

externdef __imp_LsaFreeReturnBuffer:PPROC
LsaFreeReturnBuffer equ <__imp_LsaFreeReturnBuffer>

externdef __imp_LsaGetLogonSessionData:PPROC
LsaGetLogonSessionData equ <__imp_LsaGetLogonSessionData>

externdef __imp_LsaLogonUser:PPROC
LsaLogonUser equ <__imp_LsaLogonUser>

externdef __imp_LsaLookupAuthenticationPackage:PPROC
LsaLookupAuthenticationPackage equ <__imp_LsaLookupAuthenticationPackage>

externdef __imp_LsaRegisterLogonProcess:PPROC
LsaRegisterLogonProcess equ <__imp_LsaRegisterLogonProcess>

externdef __imp_LsaRegisterPolicyChangeNotification:PPROC
LsaRegisterPolicyChangeNotification equ <__imp_LsaRegisterPolicyChangeNotification>

externdef __imp_LsaUnregisterPolicyChangeNotification:PPROC
LsaUnregisterPolicyChangeNotification equ <__imp_LsaUnregisterPolicyChangeNotification>

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

externdef __imp_SaslAcceptSecurityContext:PPROC
SaslAcceptSecurityContext equ <__imp_SaslAcceptSecurityContext>

externdef __imp_SaslEnumerateProfilesA:PPROC
SaslEnumerateProfilesA equ <__imp_SaslEnumerateProfilesA>
  IFNDEF __UNICODE__
    SaslEnumerateProfiles equ <__imp_SaslEnumerateProfilesA>
  ENDIF

externdef __imp_SaslEnumerateProfilesW:PPROC
SaslEnumerateProfilesW equ <__imp_SaslEnumerateProfilesW>
  IFDEF __UNICODE__
    SaslEnumerateProfiles equ <__imp_SaslEnumerateProfilesW>
  ENDIF

externdef __imp_SaslGetContextOption:PPROC
SaslGetContextOption equ <__imp_SaslGetContextOption>

externdef __imp_SaslGetProfilePackageA:PPROC
SaslGetProfilePackageA equ <__imp_SaslGetProfilePackageA>
  IFNDEF __UNICODE__
    SaslGetProfilePackage equ <__imp_SaslGetProfilePackageA>
  ENDIF

externdef __imp_SaslGetProfilePackageW:PPROC
SaslGetProfilePackageW equ <__imp_SaslGetProfilePackageW>
  IFDEF __UNICODE__
    SaslGetProfilePackage equ <__imp_SaslGetProfilePackageW>
  ENDIF

externdef __imp_SaslIdentifyPackageA:PPROC
SaslIdentifyPackageA equ <__imp_SaslIdentifyPackageA>
  IFNDEF __UNICODE__
    SaslIdentifyPackage equ <__imp_SaslIdentifyPackageA>
  ENDIF

externdef __imp_SaslIdentifyPackageW:PPROC
SaslIdentifyPackageW equ <__imp_SaslIdentifyPackageW>
  IFDEF __UNICODE__
    SaslIdentifyPackage equ <__imp_SaslIdentifyPackageW>
  ENDIF

externdef __imp_SaslInitializeSecurityContextA:PPROC
SaslInitializeSecurityContextA equ <__imp_SaslInitializeSecurityContextA>
  IFNDEF __UNICODE__
    SaslInitializeSecurityContext equ <__imp_SaslInitializeSecurityContextA>
  ENDIF

externdef __imp_SaslInitializeSecurityContextW:PPROC
SaslInitializeSecurityContextW equ <__imp_SaslInitializeSecurityContextW>
  IFDEF __UNICODE__
    SaslInitializeSecurityContext equ <__imp_SaslInitializeSecurityContextW>
  ENDIF

externdef __imp_SaslSetContextOption:PPROC
SaslSetContextOption equ <__imp_SaslSetContextOption>

externdef __imp_SealMessage:PPROC
SealMessage equ <__imp_SealMessage>

externdef __imp_SecCacheSspiPackages:PPROC
SecCacheSspiPackages equ <__imp_SecCacheSspiPackages>

externdef __imp_SecDeleteUserModeContext:PPROC
SecDeleteUserModeContext equ <__imp_SecDeleteUserModeContext>

externdef __imp_SecInitUserModeContext:PPROC
SecInitUserModeContext equ <__imp_SecInitUserModeContext>

externdef __imp_SecpFreeMemory:PPROC
SecpFreeMemory equ <__imp_SecpFreeMemory>

externdef __imp_SecpSetIPAddress:PPROC
SecpSetIPAddress equ <__imp_SecpSetIPAddress>

externdef __imp_SecpTranslateName:PPROC
SecpTranslateName equ <__imp_SecpTranslateName>

externdef __imp_SecpTranslateNameEx:PPROC
SecpTranslateNameEx equ <__imp_SecpTranslateNameEx>

externdef __imp_SetContextAttributesA:PPROC
SetContextAttributesA equ <__imp_SetContextAttributesA>
  IFNDEF __UNICODE__
    SetContextAttributes equ <__imp_SetContextAttributesA>
  ENDIF

externdef __imp_SetContextAttributesW:PPROC
SetContextAttributesW equ <__imp_SetContextAttributesW>
  IFDEF __UNICODE__
    SetContextAttributes equ <__imp_SetContextAttributesW>
  ENDIF

externdef __imp_SetCredentialsAttributesA:PPROC
SetCredentialsAttributesA equ <__imp_SetCredentialsAttributesA>
  IFNDEF __UNICODE__
    SetCredentialsAttributes equ <__imp_SetCredentialsAttributesA>
  ENDIF

externdef __imp_SetCredentialsAttributesW:PPROC
SetCredentialsAttributesW equ <__imp_SetCredentialsAttributesW>
  IFDEF __UNICODE__
    SetCredentialsAttributes equ <__imp_SetCredentialsAttributesW>
  ENDIF

externdef __imp_TranslateNameA:PPROC
TranslateNameA equ <__imp_TranslateNameA>
  IFNDEF __UNICODE__
    TranslateName equ <__imp_TranslateNameA>
  ENDIF

externdef __imp_TranslateNameW:PPROC
TranslateNameW equ <__imp_TranslateNameW>
  IFDEF __UNICODE__
    TranslateName equ <__imp_TranslateNameW>
  ENDIF

externdef __imp_UnsealMessage:PPROC
UnsealMessage equ <__imp_UnsealMessage>

externdef __imp_VerifySignature:PPROC
VerifySignature equ <__imp_VerifySignature>
