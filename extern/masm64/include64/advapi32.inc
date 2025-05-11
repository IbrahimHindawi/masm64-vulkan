externdef __imp_A_SHAFinal:PPROC
A_SHAFinal equ <__imp_A_SHAFinal>

externdef __imp_A_SHAInit:PPROC
A_SHAInit equ <__imp_A_SHAInit>

externdef __imp_A_SHAUpdate:PPROC
A_SHAUpdate equ <__imp_A_SHAUpdate>

externdef __imp_AbortSystemShutdownA:PPROC
AbortSystemShutdownA equ <__imp_AbortSystemShutdownA>
  IFNDEF __UNICODE__
    AbortSystemShutdown equ <__imp_AbortSystemShutdownA>
  ENDIF

externdef __imp_AbortSystemShutdownW:PPROC
AbortSystemShutdownW equ <__imp_AbortSystemShutdownW>
  IFDEF __UNICODE__
    AbortSystemShutdown equ <__imp_AbortSystemShutdownW>
  ENDIF

externdef __imp_AccessCheck:PPROC
AccessCheck equ <__imp_AccessCheck>

externdef __imp_AccessCheckAndAuditAlarmA:PPROC
AccessCheckAndAuditAlarmA equ <__imp_AccessCheckAndAuditAlarmA>
  IFNDEF __UNICODE__
    AccessCheckAndAuditAlarm equ <__imp_AccessCheckAndAuditAlarmA>
  ENDIF

externdef __imp_AccessCheckAndAuditAlarmW:PPROC
AccessCheckAndAuditAlarmW equ <__imp_AccessCheckAndAuditAlarmW>
  IFDEF __UNICODE__
    AccessCheckAndAuditAlarm equ <__imp_AccessCheckAndAuditAlarmW>
  ENDIF

externdef __imp_AccessCheckByType:PPROC
AccessCheckByType equ <__imp_AccessCheckByType>

externdef __imp_AccessCheckByTypeAndAuditAlarmA:PPROC
AccessCheckByTypeAndAuditAlarmA equ <__imp_AccessCheckByTypeAndAuditAlarmA>
  IFNDEF __UNICODE__
    AccessCheckByTypeAndAuditAlarm equ <__imp_AccessCheckByTypeAndAuditAlarmA>
  ENDIF

externdef __imp_AccessCheckByTypeAndAuditAlarmW:PPROC
AccessCheckByTypeAndAuditAlarmW equ <__imp_AccessCheckByTypeAndAuditAlarmW>
  IFDEF __UNICODE__
    AccessCheckByTypeAndAuditAlarm equ <__imp_AccessCheckByTypeAndAuditAlarmW>
  ENDIF

externdef __imp_AccessCheckByTypeResultList:PPROC
AccessCheckByTypeResultList equ <__imp_AccessCheckByTypeResultList>

externdef __imp_AccessCheckByTypeResultListAndAuditAlarmA:PPROC
AccessCheckByTypeResultListAndAuditAlarmA equ <__imp_AccessCheckByTypeResultListAndAuditAlarmA>
  IFNDEF __UNICODE__
    AccessCheckByTypeResultListAndAuditAlarm equ <__imp_AccessCheckByTypeResultListAndAuditAlarmA>
  ENDIF

externdef __imp_AccessCheckByTypeResultListAndAuditAlarmByHandleA:PPROC
AccessCheckByTypeResultListAndAuditAlarmByHandleA equ <__imp_AccessCheckByTypeResultListAndAuditAlarmByHandleA>
  IFNDEF __UNICODE__
    AccessCheckByTypeResultListAndAuditAlarmByHandle equ <__imp_AccessCheckByTypeResultListAndAuditAlarmByHandleA>
  ENDIF

externdef __imp_AccessCheckByTypeResultListAndAuditAlarmByHandleW:PPROC
AccessCheckByTypeResultListAndAuditAlarmByHandleW equ <__imp_AccessCheckByTypeResultListAndAuditAlarmByHandleW>
  IFDEF __UNICODE__
    AccessCheckByTypeResultListAndAuditAlarmByHandle equ <__imp_AccessCheckByTypeResultListAndAuditAlarmByHandleW>
  ENDIF

externdef __imp_AccessCheckByTypeResultListAndAuditAlarmW:PPROC
AccessCheckByTypeResultListAndAuditAlarmW equ <__imp_AccessCheckByTypeResultListAndAuditAlarmW>
  IFDEF __UNICODE__
    AccessCheckByTypeResultListAndAuditAlarm equ <__imp_AccessCheckByTypeResultListAndAuditAlarmW>
  ENDIF

externdef __imp_AddAccessAllowedAce:PPROC
AddAccessAllowedAce equ <__imp_AddAccessAllowedAce>

externdef __imp_AddAccessAllowedAceEx:PPROC
AddAccessAllowedAceEx equ <__imp_AddAccessAllowedAceEx>

externdef __imp_AddAccessAllowedObjectAce:PPROC
AddAccessAllowedObjectAce equ <__imp_AddAccessAllowedObjectAce>

externdef __imp_AddAccessDeniedAce:PPROC
AddAccessDeniedAce equ <__imp_AddAccessDeniedAce>

externdef __imp_AddAccessDeniedAceEx:PPROC
AddAccessDeniedAceEx equ <__imp_AddAccessDeniedAceEx>

externdef __imp_AddAccessDeniedObjectAce:PPROC
AddAccessDeniedObjectAce equ <__imp_AddAccessDeniedObjectAce>

externdef __imp_AddAce:PPROC
AddAce equ <__imp_AddAce>

externdef __imp_AddAuditAccessAce:PPROC
AddAuditAccessAce equ <__imp_AddAuditAccessAce>

externdef __imp_AddAuditAccessAceEx:PPROC
AddAuditAccessAceEx equ <__imp_AddAuditAccessAceEx>

externdef __imp_AddAuditAccessObjectAce:PPROC
AddAuditAccessObjectAce equ <__imp_AddAuditAccessObjectAce>

externdef __imp_AddUsersToEncryptedFile:PPROC
AddUsersToEncryptedFile equ <__imp_AddUsersToEncryptedFile>

externdef __imp_AdjustTokenGroups:PPROC
AdjustTokenGroups equ <__imp_AdjustTokenGroups>

externdef __imp_AdjustTokenPrivileges:PPROC
AdjustTokenPrivileges equ <__imp_AdjustTokenPrivileges>

externdef __imp_AllocateAndInitializeSid:PPROC
AllocateAndInitializeSid equ <__imp_AllocateAndInitializeSid>

externdef __imp_AllocateLocallyUniqueId:PPROC
AllocateLocallyUniqueId equ <__imp_AllocateLocallyUniqueId>

externdef __imp_AreAllAccessesGranted:PPROC
AreAllAccessesGranted equ <__imp_AreAllAccessesGranted>

externdef __imp_AreAnyAccessesGranted:PPROC
AreAnyAccessesGranted equ <__imp_AreAnyAccessesGranted>

externdef __imp_BackupEventLogA:PPROC
BackupEventLogA equ <__imp_BackupEventLogA>
  IFNDEF __UNICODE__
    BackupEventLog equ <__imp_BackupEventLogA>
  ENDIF

externdef __imp_BackupEventLogW:PPROC
BackupEventLogW equ <__imp_BackupEventLogW>
  IFDEF __UNICODE__
    BackupEventLog equ <__imp_BackupEventLogW>
  ENDIF

externdef __imp_BuildExplicitAccessWithNameA:PPROC
BuildExplicitAccessWithNameA equ <__imp_BuildExplicitAccessWithNameA>
  IFNDEF __UNICODE__
    BuildExplicitAccessWithName equ <__imp_BuildExplicitAccessWithNameA>
  ENDIF

externdef __imp_BuildExplicitAccessWithNameW:PPROC
BuildExplicitAccessWithNameW equ <__imp_BuildExplicitAccessWithNameW>
  IFDEF __UNICODE__
    BuildExplicitAccessWithName equ <__imp_BuildExplicitAccessWithNameW>
  ENDIF

externdef __imp_BuildImpersonateExplicitAccessWithNameA:PPROC
BuildImpersonateExplicitAccessWithNameA equ <__imp_BuildImpersonateExplicitAccessWithNameA>
  IFNDEF __UNICODE__
    BuildImpersonateExplicitAccessWithName equ <__imp_BuildImpersonateExplicitAccessWithNameA>
  ENDIF

externdef __imp_BuildImpersonateExplicitAccessWithNameW:PPROC
BuildImpersonateExplicitAccessWithNameW equ <__imp_BuildImpersonateExplicitAccessWithNameW>
  IFDEF __UNICODE__
    BuildImpersonateExplicitAccessWithName equ <__imp_BuildImpersonateExplicitAccessWithNameW>
  ENDIF

externdef __imp_BuildImpersonateTrusteeA:PPROC
BuildImpersonateTrusteeA equ <__imp_BuildImpersonateTrusteeA>
  IFNDEF __UNICODE__
    BuildImpersonateTrustee equ <__imp_BuildImpersonateTrusteeA>
  ENDIF

externdef __imp_BuildImpersonateTrusteeW:PPROC
BuildImpersonateTrusteeW equ <__imp_BuildImpersonateTrusteeW>
  IFDEF __UNICODE__
    BuildImpersonateTrustee equ <__imp_BuildImpersonateTrusteeW>
  ENDIF

externdef __imp_BuildSecurityDescriptorA:PPROC
BuildSecurityDescriptorA equ <__imp_BuildSecurityDescriptorA>
  IFNDEF __UNICODE__
    BuildSecurityDescriptor equ <__imp_BuildSecurityDescriptorA>
  ENDIF

externdef __imp_BuildSecurityDescriptorW:PPROC
BuildSecurityDescriptorW equ <__imp_BuildSecurityDescriptorW>
  IFDEF __UNICODE__
    BuildSecurityDescriptor equ <__imp_BuildSecurityDescriptorW>
  ENDIF

externdef __imp_BuildTrusteeWithNameA:PPROC
BuildTrusteeWithNameA equ <__imp_BuildTrusteeWithNameA>
  IFNDEF __UNICODE__
    BuildTrusteeWithName equ <__imp_BuildTrusteeWithNameA>
  ENDIF

externdef __imp_BuildTrusteeWithNameW:PPROC
BuildTrusteeWithNameW equ <__imp_BuildTrusteeWithNameW>
  IFDEF __UNICODE__
    BuildTrusteeWithName equ <__imp_BuildTrusteeWithNameW>
  ENDIF

externdef __imp_BuildTrusteeWithObjectsAndNameA:PPROC
BuildTrusteeWithObjectsAndNameA equ <__imp_BuildTrusteeWithObjectsAndNameA>
  IFNDEF __UNICODE__
    BuildTrusteeWithObjectsAndName equ <__imp_BuildTrusteeWithObjectsAndNameA>
  ENDIF

externdef __imp_BuildTrusteeWithObjectsAndNameW:PPROC
BuildTrusteeWithObjectsAndNameW equ <__imp_BuildTrusteeWithObjectsAndNameW>
  IFDEF __UNICODE__
    BuildTrusteeWithObjectsAndName equ <__imp_BuildTrusteeWithObjectsAndNameW>
  ENDIF

externdef __imp_BuildTrusteeWithObjectsAndSidA:PPROC
BuildTrusteeWithObjectsAndSidA equ <__imp_BuildTrusteeWithObjectsAndSidA>
  IFNDEF __UNICODE__
    BuildTrusteeWithObjectsAndSid equ <__imp_BuildTrusteeWithObjectsAndSidA>
  ENDIF

externdef __imp_BuildTrusteeWithObjectsAndSidW:PPROC
BuildTrusteeWithObjectsAndSidW equ <__imp_BuildTrusteeWithObjectsAndSidW>
  IFDEF __UNICODE__
    BuildTrusteeWithObjectsAndSid equ <__imp_BuildTrusteeWithObjectsAndSidW>
  ENDIF

externdef __imp_BuildTrusteeWithSidA:PPROC
BuildTrusteeWithSidA equ <__imp_BuildTrusteeWithSidA>
  IFNDEF __UNICODE__
    BuildTrusteeWithSid equ <__imp_BuildTrusteeWithSidA>
  ENDIF

externdef __imp_BuildTrusteeWithSidW:PPROC
BuildTrusteeWithSidW equ <__imp_BuildTrusteeWithSidW>
  IFDEF __UNICODE__
    BuildTrusteeWithSid equ <__imp_BuildTrusteeWithSidW>
  ENDIF

externdef __imp_CancelOverlappedAccess:PPROC
CancelOverlappedAccess equ <__imp_CancelOverlappedAccess>

externdef __imp_ChangeServiceConfig2A:PPROC
ChangeServiceConfig2A equ <__imp_ChangeServiceConfig2A>
  IFNDEF __UNICODE__
    ChangeServiceConfig2 equ <__imp_ChangeServiceConfig2A>
  ENDIF

externdef __imp_ChangeServiceConfig2W:PPROC
ChangeServiceConfig2W equ <__imp_ChangeServiceConfig2W>
  IFDEF __UNICODE__
    ChangeServiceConfig2 equ <__imp_ChangeServiceConfig2W>
  ENDIF

externdef __imp_ChangeServiceConfigA:PPROC
ChangeServiceConfigA equ <__imp_ChangeServiceConfigA>
  IFNDEF __UNICODE__
    ChangeServiceConfig equ <__imp_ChangeServiceConfigA>
  ENDIF

externdef __imp_ChangeServiceConfigW:PPROC
ChangeServiceConfigW equ <__imp_ChangeServiceConfigW>
  IFDEF __UNICODE__
    ChangeServiceConfig equ <__imp_ChangeServiceConfigW>
  ENDIF

externdef __imp_CheckTokenMembership:PPROC
CheckTokenMembership equ <__imp_CheckTokenMembership>

externdef __imp_ClearEventLogA:PPROC
ClearEventLogA equ <__imp_ClearEventLogA>
  IFNDEF __UNICODE__
    ClearEventLog equ <__imp_ClearEventLogA>
  ENDIF

externdef __imp_ClearEventLogW:PPROC
ClearEventLogW equ <__imp_ClearEventLogW>
  IFDEF __UNICODE__
    ClearEventLog equ <__imp_ClearEventLogW>
  ENDIF

externdef __imp_CloseCodeAuthzLevel:PPROC
CloseCodeAuthzLevel equ <__imp_CloseCodeAuthzLevel>

externdef __imp_CloseEncryptedFileRaw:PPROC
CloseEncryptedFileRaw equ <__imp_CloseEncryptedFileRaw>

externdef __imp_CloseEventLog:PPROC
CloseEventLog equ <__imp_CloseEventLog>

externdef __imp_CloseServiceHandle:PPROC
CloseServiceHandle equ <__imp_CloseServiceHandle>

externdef __imp_CloseTrace:PPROC
CloseTrace equ <__imp_CloseTrace>

externdef __imp_CommandLineFromMsiDescriptor:PPROC
CommandLineFromMsiDescriptor equ <__imp_CommandLineFromMsiDescriptor>

externdef __imp_ComputeAccessTokenFromCodeAuthzLevel:PPROC
ComputeAccessTokenFromCodeAuthzLevel equ <__imp_ComputeAccessTokenFromCodeAuthzLevel>

externdef __imp_ControlService:PPROC
ControlService equ <__imp_ControlService>

externdef __imp_ControlTraceA:PPROC
ControlTraceA equ <__imp_ControlTraceA>
  IFNDEF __UNICODE__
    ControlTrace equ <__imp_ControlTraceA>
  ENDIF

externdef __imp_ControlTraceW:PPROC
ControlTraceW equ <__imp_ControlTraceW>
  IFDEF __UNICODE__
    ControlTrace equ <__imp_ControlTraceW>
  ENDIF

externdef __imp_ConvertAccessToSecurityDescriptorA:PPROC
ConvertAccessToSecurityDescriptorA equ <__imp_ConvertAccessToSecurityDescriptorA>
  IFNDEF __UNICODE__
    ConvertAccessToSecurityDescriptor equ <__imp_ConvertAccessToSecurityDescriptorA>
  ENDIF

externdef __imp_ConvertAccessToSecurityDescriptorW:PPROC
ConvertAccessToSecurityDescriptorW equ <__imp_ConvertAccessToSecurityDescriptorW>
  IFDEF __UNICODE__
    ConvertAccessToSecurityDescriptor equ <__imp_ConvertAccessToSecurityDescriptorW>
  ENDIF

externdef __imp_ConvertSDToStringSDRootDomainA:PPROC
ConvertSDToStringSDRootDomainA equ <__imp_ConvertSDToStringSDRootDomainA>
  IFNDEF __UNICODE__
    ConvertSDToStringSDRootDomain equ <__imp_ConvertSDToStringSDRootDomainA>
  ENDIF

externdef __imp_ConvertSDToStringSDRootDomainW:PPROC
ConvertSDToStringSDRootDomainW equ <__imp_ConvertSDToStringSDRootDomainW>
  IFDEF __UNICODE__
    ConvertSDToStringSDRootDomain equ <__imp_ConvertSDToStringSDRootDomainW>
  ENDIF

externdef __imp_ConvertSecurityDescriptorToAccessA:PPROC
ConvertSecurityDescriptorToAccessA equ <__imp_ConvertSecurityDescriptorToAccessA>
  IFNDEF __UNICODE__
    ConvertSecurityDescriptorToAccess equ <__imp_ConvertSecurityDescriptorToAccessA>
  ENDIF

externdef __imp_ConvertSecurityDescriptorToAccessNamedA:PPROC
ConvertSecurityDescriptorToAccessNamedA equ <__imp_ConvertSecurityDescriptorToAccessNamedA>
  IFNDEF __UNICODE__
    ConvertSecurityDescriptorToAccessNamed equ <__imp_ConvertSecurityDescriptorToAccessNamedA>
  ENDIF

externdef __imp_ConvertSecurityDescriptorToAccessNamedW:PPROC
ConvertSecurityDescriptorToAccessNamedW equ <__imp_ConvertSecurityDescriptorToAccessNamedW>
  IFDEF __UNICODE__
    ConvertSecurityDescriptorToAccessNamed equ <__imp_ConvertSecurityDescriptorToAccessNamedW>
  ENDIF

externdef __imp_ConvertSecurityDescriptorToAccessW:PPROC
ConvertSecurityDescriptorToAccessW equ <__imp_ConvertSecurityDescriptorToAccessW>
  IFDEF __UNICODE__
    ConvertSecurityDescriptorToAccess equ <__imp_ConvertSecurityDescriptorToAccessW>
  ENDIF

externdef __imp_ConvertSecurityDescriptorToStringSecurityDescriptorA:PPROC
ConvertSecurityDescriptorToStringSecurityDescriptorA equ <__imp_ConvertSecurityDescriptorToStringSecurityDescriptorA>
  IFNDEF __UNICODE__
    ConvertSecurityDescriptorToStringSecurityDescriptor equ <__imp_ConvertSecurityDescriptorToStringSecurityDescriptorA>
  ENDIF

externdef __imp_ConvertSecurityDescriptorToStringSecurityDescriptorW:PPROC
ConvertSecurityDescriptorToStringSecurityDescriptorW equ <__imp_ConvertSecurityDescriptorToStringSecurityDescriptorW>
  IFDEF __UNICODE__
    ConvertSecurityDescriptorToStringSecurityDescriptor equ <__imp_ConvertSecurityDescriptorToStringSecurityDescriptorW>
  ENDIF

externdef __imp_ConvertSidToStringSidA:PPROC
ConvertSidToStringSidA equ <__imp_ConvertSidToStringSidA>
  IFNDEF __UNICODE__
    ConvertSidToStringSid equ <__imp_ConvertSidToStringSidA>
  ENDIF

externdef __imp_ConvertSidToStringSidW:PPROC
ConvertSidToStringSidW equ <__imp_ConvertSidToStringSidW>
  IFDEF __UNICODE__
    ConvertSidToStringSid equ <__imp_ConvertSidToStringSidW>
  ENDIF

externdef __imp_ConvertStringSDToSDDomainA:PPROC
ConvertStringSDToSDDomainA equ <__imp_ConvertStringSDToSDDomainA>
  IFNDEF __UNICODE__
    ConvertStringSDToSDDomain equ <__imp_ConvertStringSDToSDDomainA>
  ENDIF

externdef __imp_ConvertStringSDToSDDomainW:PPROC
ConvertStringSDToSDDomainW equ <__imp_ConvertStringSDToSDDomainW>
  IFDEF __UNICODE__
    ConvertStringSDToSDDomain equ <__imp_ConvertStringSDToSDDomainW>
  ENDIF

externdef __imp_ConvertStringSDToSDRootDomainA:PPROC
ConvertStringSDToSDRootDomainA equ <__imp_ConvertStringSDToSDRootDomainA>
  IFNDEF __UNICODE__
    ConvertStringSDToSDRootDomain equ <__imp_ConvertStringSDToSDRootDomainA>
  ENDIF

externdef __imp_ConvertStringSDToSDRootDomainW:PPROC
ConvertStringSDToSDRootDomainW equ <__imp_ConvertStringSDToSDRootDomainW>
  IFDEF __UNICODE__
    ConvertStringSDToSDRootDomain equ <__imp_ConvertStringSDToSDRootDomainW>
  ENDIF

externdef __imp_ConvertStringSecurityDescriptorToSecurityDescriptorA:PPROC
ConvertStringSecurityDescriptorToSecurityDescriptorA equ <__imp_ConvertStringSecurityDescriptorToSecurityDescriptorA>
  IFNDEF __UNICODE__
    ConvertStringSecurityDescriptorToSecurityDescriptor equ <__imp_ConvertStringSecurityDescriptorToSecurityDescriptorA>
  ENDIF

externdef __imp_ConvertStringSecurityDescriptorToSecurityDescriptorW:PPROC
ConvertStringSecurityDescriptorToSecurityDescriptorW equ <__imp_ConvertStringSecurityDescriptorToSecurityDescriptorW>
  IFDEF __UNICODE__
    ConvertStringSecurityDescriptorToSecurityDescriptor equ <__imp_ConvertStringSecurityDescriptorToSecurityDescriptorW>
  ENDIF

externdef __imp_ConvertStringSidToSidA:PPROC
ConvertStringSidToSidA equ <__imp_ConvertStringSidToSidA>
  IFNDEF __UNICODE__
    ConvertStringSidToSid equ <__imp_ConvertStringSidToSidA>
  ENDIF

externdef __imp_ConvertStringSidToSidW:PPROC
ConvertStringSidToSidW equ <__imp_ConvertStringSidToSidW>
  IFDEF __UNICODE__
    ConvertStringSidToSid equ <__imp_ConvertStringSidToSidW>
  ENDIF

externdef __imp_ConvertToAutoInheritPrivateObjectSecurity:PPROC
ConvertToAutoInheritPrivateObjectSecurity equ <__imp_ConvertToAutoInheritPrivateObjectSecurity>

externdef __imp_CopySid:PPROC
CopySid equ <__imp_CopySid>

externdef __imp_CreateCodeAuthzLevel:PPROC
CreateCodeAuthzLevel equ <__imp_CreateCodeAuthzLevel>

externdef __imp_CreatePrivateObjectSecurity:PPROC
CreatePrivateObjectSecurity equ <__imp_CreatePrivateObjectSecurity>

externdef __imp_CreatePrivateObjectSecurityEx:PPROC
CreatePrivateObjectSecurityEx equ <__imp_CreatePrivateObjectSecurityEx>

externdef __imp_CreatePrivateObjectSecurityWithMultipleInheritance:PPROC
CreatePrivateObjectSecurityWithMultipleInheritance equ <__imp_CreatePrivateObjectSecurityWithMultipleInheritance>

externdef __imp_CreateProcessAsUserA:PPROC
CreateProcessAsUserA equ <__imp_CreateProcessAsUserA>
  IFNDEF __UNICODE__
    CreateProcessAsUser equ <__imp_CreateProcessAsUserA>
  ENDIF

externdef __imp_CreateProcessAsUserW:PPROC
CreateProcessAsUserW equ <__imp_CreateProcessAsUserW>
  IFDEF __UNICODE__
    CreateProcessAsUser equ <__imp_CreateProcessAsUserW>
  ENDIF

externdef __imp_CreateProcessWithLogonW:PPROC
CreateProcessWithLogonW equ <__imp_CreateProcessWithLogonW>
  IFDEF __UNICODE__
    CreateProcessWithLogon equ <__imp_CreateProcessWithLogonW>
  ENDIF

externdef __imp_CreateProcessWithTokenW:PPROC
CreateProcessWithTokenW equ <__imp_CreateProcessWithTokenW>
  IFDEF __UNICODE__
    CreateProcessWithToken equ <__imp_CreateProcessWithTokenW>
  ENDIF

externdef __imp_CreateRestrictedToken:PPROC
CreateRestrictedToken equ <__imp_CreateRestrictedToken>

externdef __imp_CreateServiceA:PPROC
CreateServiceA equ <__imp_CreateServiceA>
  IFNDEF __UNICODE__
    CreateService equ <__imp_CreateServiceA>
  ENDIF

externdef __imp_CreateServiceW:PPROC
CreateServiceW equ <__imp_CreateServiceW>
  IFDEF __UNICODE__
    CreateService equ <__imp_CreateServiceW>
  ENDIF

externdef __imp_CreateTraceInstanceId:PPROC
CreateTraceInstanceId equ <__imp_CreateTraceInstanceId>

externdef __imp_CreateWellKnownSid:PPROC
CreateWellKnownSid equ <__imp_CreateWellKnownSid>

externdef __imp_CredDeleteA:PPROC
CredDeleteA equ <__imp_CredDeleteA>
  IFNDEF __UNICODE__
    CredDelete equ <__imp_CredDeleteA>
  ENDIF

externdef __imp_CredDeleteW:PPROC
CredDeleteW equ <__imp_CredDeleteW>
  IFDEF __UNICODE__
    CredDelete equ <__imp_CredDeleteW>
  ENDIF

externdef __imp_CredEnumerateA:PPROC
CredEnumerateA equ <__imp_CredEnumerateA>
  IFNDEF __UNICODE__
    CredEnumerate equ <__imp_CredEnumerateA>
  ENDIF

externdef __imp_CredEnumerateW:PPROC
CredEnumerateW equ <__imp_CredEnumerateW>
  IFDEF __UNICODE__
    CredEnumerate equ <__imp_CredEnumerateW>
  ENDIF

externdef __imp_CredFree:PPROC
CredFree equ <__imp_CredFree>

externdef __imp_CredGetSessionTypes:PPROC
CredGetSessionTypes equ <__imp_CredGetSessionTypes>

externdef __imp_CredGetTargetInfoA:PPROC
CredGetTargetInfoA equ <__imp_CredGetTargetInfoA>
  IFNDEF __UNICODE__
    CredGetTargetInfo equ <__imp_CredGetTargetInfoA>
  ENDIF

externdef __imp_CredGetTargetInfoW:PPROC
CredGetTargetInfoW equ <__imp_CredGetTargetInfoW>
  IFDEF __UNICODE__
    CredGetTargetInfo equ <__imp_CredGetTargetInfoW>
  ENDIF

externdef __imp_CredIsMarshaledCredentialA:PPROC
CredIsMarshaledCredentialA equ <__imp_CredIsMarshaledCredentialA>
  IFNDEF __UNICODE__
    CredIsMarshaledCredential equ <__imp_CredIsMarshaledCredentialA>
  ENDIF

externdef __imp_CredIsMarshaledCredentialW:PPROC
CredIsMarshaledCredentialW equ <__imp_CredIsMarshaledCredentialW>
  IFDEF __UNICODE__
    CredIsMarshaledCredential equ <__imp_CredIsMarshaledCredentialW>
  ENDIF

externdef __imp_CredMarshalCredentialA:PPROC
CredMarshalCredentialA equ <__imp_CredMarshalCredentialA>
  IFNDEF __UNICODE__
    CredMarshalCredential equ <__imp_CredMarshalCredentialA>
  ENDIF

externdef __imp_CredMarshalCredentialW:PPROC
CredMarshalCredentialW equ <__imp_CredMarshalCredentialW>
  IFDEF __UNICODE__
    CredMarshalCredential equ <__imp_CredMarshalCredentialW>
  ENDIF

externdef __imp_CredProfileLoaded:PPROC
CredProfileLoaded equ <__imp_CredProfileLoaded>

externdef __imp_CredReadA:PPROC
CredReadA equ <__imp_CredReadA>
  IFNDEF __UNICODE__
    CredRead equ <__imp_CredReadA>
  ENDIF

externdef __imp_CredReadDomainCredentialsA:PPROC
CredReadDomainCredentialsA equ <__imp_CredReadDomainCredentialsA>
  IFNDEF __UNICODE__
    CredReadDomainCredentials equ <__imp_CredReadDomainCredentialsA>
  ENDIF

externdef __imp_CredReadDomainCredentialsW:PPROC
CredReadDomainCredentialsW equ <__imp_CredReadDomainCredentialsW>
  IFDEF __UNICODE__
    CredReadDomainCredentials equ <__imp_CredReadDomainCredentialsW>
  ENDIF

externdef __imp_CredReadW:PPROC
CredReadW equ <__imp_CredReadW>
  IFDEF __UNICODE__
    CredRead equ <__imp_CredReadW>
  ENDIF

externdef __imp_CredRenameA:PPROC
CredRenameA equ <__imp_CredRenameA>
  IFNDEF __UNICODE__
    CredRename equ <__imp_CredRenameA>
  ENDIF

externdef __imp_CredRenameW:PPROC
CredRenameW equ <__imp_CredRenameW>
  IFDEF __UNICODE__
    CredRename equ <__imp_CredRenameW>
  ENDIF

externdef __imp_CredUnmarshalCredentialA:PPROC
CredUnmarshalCredentialA equ <__imp_CredUnmarshalCredentialA>
  IFNDEF __UNICODE__
    CredUnmarshalCredential equ <__imp_CredUnmarshalCredentialA>
  ENDIF

externdef __imp_CredUnmarshalCredentialW:PPROC
CredUnmarshalCredentialW equ <__imp_CredUnmarshalCredentialW>
  IFDEF __UNICODE__
    CredUnmarshalCredential equ <__imp_CredUnmarshalCredentialW>
  ENDIF

externdef __imp_CredWriteA:PPROC
CredWriteA equ <__imp_CredWriteA>
  IFNDEF __UNICODE__
    CredWrite equ <__imp_CredWriteA>
  ENDIF

externdef __imp_CredWriteDomainCredentialsA:PPROC
CredWriteDomainCredentialsA equ <__imp_CredWriteDomainCredentialsA>
  IFNDEF __UNICODE__
    CredWriteDomainCredentials equ <__imp_CredWriteDomainCredentialsA>
  ENDIF

externdef __imp_CredWriteDomainCredentialsW:PPROC
CredWriteDomainCredentialsW equ <__imp_CredWriteDomainCredentialsW>
  IFDEF __UNICODE__
    CredWriteDomainCredentials equ <__imp_CredWriteDomainCredentialsW>
  ENDIF

externdef __imp_CredWriteW:PPROC
CredWriteW equ <__imp_CredWriteW>
  IFDEF __UNICODE__
    CredWrite equ <__imp_CredWriteW>
  ENDIF

externdef __imp_CredpConvertCredential:PPROC
CredpConvertCredential equ <__imp_CredpConvertCredential>

externdef __imp_CredpConvertTargetInfo:PPROC
CredpConvertTargetInfo equ <__imp_CredpConvertTargetInfo>

externdef __imp_CredpDecodeCredential:PPROC
CredpDecodeCredential equ <__imp_CredpDecodeCredential>

externdef __imp_CredpEncodeCredential:PPROC
CredpEncodeCredential equ <__imp_CredpEncodeCredential>

externdef __imp_CryptAcquireContextA:PPROC
CryptAcquireContextA equ <__imp_CryptAcquireContextA>
  IFNDEF __UNICODE__
    CryptAcquireContext equ <__imp_CryptAcquireContextA>
  ENDIF

externdef __imp_CryptAcquireContextW:PPROC
CryptAcquireContextW equ <__imp_CryptAcquireContextW>
  IFDEF __UNICODE__
    CryptAcquireContext equ <__imp_CryptAcquireContextW>
  ENDIF

externdef __imp_CryptContextAddRef:PPROC
CryptContextAddRef equ <__imp_CryptContextAddRef>

externdef __imp_CryptCreateHash:PPROC
CryptCreateHash equ <__imp_CryptCreateHash>

externdef __imp_CryptDecrypt:PPROC
CryptDecrypt equ <__imp_CryptDecrypt>

externdef __imp_CryptDeriveKey:PPROC
CryptDeriveKey equ <__imp_CryptDeriveKey>

externdef __imp_CryptDestroyHash:PPROC
CryptDestroyHash equ <__imp_CryptDestroyHash>

externdef __imp_CryptDestroyKey:PPROC
CryptDestroyKey equ <__imp_CryptDestroyKey>

externdef __imp_CryptDuplicateHash:PPROC
CryptDuplicateHash equ <__imp_CryptDuplicateHash>

externdef __imp_CryptDuplicateKey:PPROC
CryptDuplicateKey equ <__imp_CryptDuplicateKey>

externdef __imp_CryptEncrypt:PPROC
CryptEncrypt equ <__imp_CryptEncrypt>

externdef __imp_CryptEnumProviderTypesA:PPROC
CryptEnumProviderTypesA equ <__imp_CryptEnumProviderTypesA>
  IFNDEF __UNICODE__
    CryptEnumProviderTypes equ <__imp_CryptEnumProviderTypesA>
  ENDIF

externdef __imp_CryptEnumProviderTypesW:PPROC
CryptEnumProviderTypesW equ <__imp_CryptEnumProviderTypesW>
  IFDEF __UNICODE__
    CryptEnumProviderTypes equ <__imp_CryptEnumProviderTypesW>
  ENDIF

externdef __imp_CryptEnumProvidersA:PPROC
CryptEnumProvidersA equ <__imp_CryptEnumProvidersA>
  IFNDEF __UNICODE__
    CryptEnumProviders equ <__imp_CryptEnumProvidersA>
  ENDIF

externdef __imp_CryptEnumProvidersW:PPROC
CryptEnumProvidersW equ <__imp_CryptEnumProvidersW>
  IFDEF __UNICODE__
    CryptEnumProviders equ <__imp_CryptEnumProvidersW>
  ENDIF

externdef __imp_CryptExportKey:PPROC
CryptExportKey equ <__imp_CryptExportKey>

externdef __imp_CryptGenKey:PPROC
CryptGenKey equ <__imp_CryptGenKey>

externdef __imp_CryptGenRandom:PPROC
CryptGenRandom equ <__imp_CryptGenRandom>

externdef __imp_CryptGetDefaultProviderA:PPROC
CryptGetDefaultProviderA equ <__imp_CryptGetDefaultProviderA>
  IFNDEF __UNICODE__
    CryptGetDefaultProvider equ <__imp_CryptGetDefaultProviderA>
  ENDIF

externdef __imp_CryptGetDefaultProviderW:PPROC
CryptGetDefaultProviderW equ <__imp_CryptGetDefaultProviderW>
  IFDEF __UNICODE__
    CryptGetDefaultProvider equ <__imp_CryptGetDefaultProviderW>
  ENDIF

externdef __imp_CryptGetHashParam:PPROC
CryptGetHashParam equ <__imp_CryptGetHashParam>

externdef __imp_CryptGetKeyParam:PPROC
CryptGetKeyParam equ <__imp_CryptGetKeyParam>

externdef __imp_CryptGetProvParam:PPROC
CryptGetProvParam equ <__imp_CryptGetProvParam>

externdef __imp_CryptGetUserKey:PPROC
CryptGetUserKey equ <__imp_CryptGetUserKey>

externdef __imp_CryptHashData:PPROC
CryptHashData equ <__imp_CryptHashData>

externdef __imp_CryptHashSessionKey:PPROC
CryptHashSessionKey equ <__imp_CryptHashSessionKey>

externdef __imp_CryptImportKey:PPROC
CryptImportKey equ <__imp_CryptImportKey>

externdef __imp_CryptReleaseContext:PPROC
CryptReleaseContext equ <__imp_CryptReleaseContext>

externdef __imp_CryptSetHashParam:PPROC
CryptSetHashParam equ <__imp_CryptSetHashParam>

externdef __imp_CryptSetKeyParam:PPROC
CryptSetKeyParam equ <__imp_CryptSetKeyParam>

externdef __imp_CryptSetProvParam:PPROC
CryptSetProvParam equ <__imp_CryptSetProvParam>

externdef __imp_CryptSetProviderA:PPROC
CryptSetProviderA equ <__imp_CryptSetProviderA>
  IFNDEF __UNICODE__
    CryptSetProvider equ <__imp_CryptSetProviderA>
  ENDIF

externdef __imp_CryptSetProviderExA:PPROC
CryptSetProviderExA equ <__imp_CryptSetProviderExA>
  IFNDEF __UNICODE__
    CryptSetProviderEx equ <__imp_CryptSetProviderExA>
  ENDIF

externdef __imp_CryptSetProviderExW:PPROC
CryptSetProviderExW equ <__imp_CryptSetProviderExW>
  IFDEF __UNICODE__
    CryptSetProviderEx equ <__imp_CryptSetProviderExW>
  ENDIF

externdef __imp_CryptSetProviderW:PPROC
CryptSetProviderW equ <__imp_CryptSetProviderW>
  IFDEF __UNICODE__
    CryptSetProvider equ <__imp_CryptSetProviderW>
  ENDIF

externdef __imp_CryptSignHashA:PPROC
CryptSignHashA equ <__imp_CryptSignHashA>
  IFNDEF __UNICODE__
    CryptSignHash equ <__imp_CryptSignHashA>
  ENDIF

externdef __imp_CryptSignHashW:PPROC
CryptSignHashW equ <__imp_CryptSignHashW>
  IFDEF __UNICODE__
    CryptSignHash equ <__imp_CryptSignHashW>
  ENDIF

externdef __imp_CryptVerifySignatureA:PPROC
CryptVerifySignatureA equ <__imp_CryptVerifySignatureA>
  IFNDEF __UNICODE__
    CryptVerifySignature equ <__imp_CryptVerifySignatureA>
  ENDIF

externdef __imp_CryptVerifySignatureW:PPROC
CryptVerifySignatureW equ <__imp_CryptVerifySignatureW>
  IFDEF __UNICODE__
    CryptVerifySignature equ <__imp_CryptVerifySignatureW>
  ENDIF

externdef __imp_DecryptFileA:PPROC
DecryptFileA equ <__imp_DecryptFileA>
  IFNDEF __UNICODE__
    DecryptFile equ <__imp_DecryptFileA>
  ENDIF

externdef __imp_DecryptFileW:PPROC
DecryptFileW equ <__imp_DecryptFileW>
  IFDEF __UNICODE__
    DecryptFile equ <__imp_DecryptFileW>
  ENDIF

externdef __imp_DeleteAce:PPROC
DeleteAce equ <__imp_DeleteAce>

externdef __imp_DeleteService:PPROC
DeleteService equ <__imp_DeleteService>

externdef __imp_DeregisterEventSource:PPROC
DeregisterEventSource equ <__imp_DeregisterEventSource>

externdef __imp_DestroyPrivateObjectSecurity:PPROC
DestroyPrivateObjectSecurity equ <__imp_DestroyPrivateObjectSecurity>

externdef __imp_DuplicateEncryptionInfoFile:PPROC
DuplicateEncryptionInfoFile equ <__imp_DuplicateEncryptionInfoFile>

externdef __imp_DuplicateToken:PPROC
DuplicateToken equ <__imp_DuplicateToken>

externdef __imp_DuplicateTokenEx:PPROC
DuplicateTokenEx equ <__imp_DuplicateTokenEx>

externdef __imp_ElfBackupEventLogFileA:PPROC
ElfBackupEventLogFileA equ <__imp_ElfBackupEventLogFileA>
  IFNDEF __UNICODE__
    ElfBackupEventLogFile equ <__imp_ElfBackupEventLogFileA>
  ENDIF

externdef __imp_ElfBackupEventLogFileW:PPROC
ElfBackupEventLogFileW equ <__imp_ElfBackupEventLogFileW>
  IFDEF __UNICODE__
    ElfBackupEventLogFile equ <__imp_ElfBackupEventLogFileW>
  ENDIF

externdef __imp_ElfChangeNotify:PPROC
ElfChangeNotify equ <__imp_ElfChangeNotify>

externdef __imp_ElfClearEventLogFileA:PPROC
ElfClearEventLogFileA equ <__imp_ElfClearEventLogFileA>
  IFNDEF __UNICODE__
    ElfClearEventLogFile equ <__imp_ElfClearEventLogFileA>
  ENDIF

externdef __imp_ElfClearEventLogFileW:PPROC
ElfClearEventLogFileW equ <__imp_ElfClearEventLogFileW>
  IFDEF __UNICODE__
    ElfClearEventLogFile equ <__imp_ElfClearEventLogFileW>
  ENDIF

externdef __imp_ElfCloseEventLog:PPROC
ElfCloseEventLog equ <__imp_ElfCloseEventLog>

externdef __imp_ElfDeregisterEventSource:PPROC
ElfDeregisterEventSource equ <__imp_ElfDeregisterEventSource>

externdef __imp_ElfFlushEventLog:PPROC
ElfFlushEventLog equ <__imp_ElfFlushEventLog>

externdef __imp_ElfNumberOfRecords:PPROC
ElfNumberOfRecords equ <__imp_ElfNumberOfRecords>

externdef __imp_ElfOldestRecord:PPROC
ElfOldestRecord equ <__imp_ElfOldestRecord>

externdef __imp_ElfOpenBackupEventLogA:PPROC
ElfOpenBackupEventLogA equ <__imp_ElfOpenBackupEventLogA>
  IFNDEF __UNICODE__
    ElfOpenBackupEventLog equ <__imp_ElfOpenBackupEventLogA>
  ENDIF

externdef __imp_ElfOpenBackupEventLogW:PPROC
ElfOpenBackupEventLogW equ <__imp_ElfOpenBackupEventLogW>
  IFDEF __UNICODE__
    ElfOpenBackupEventLog equ <__imp_ElfOpenBackupEventLogW>
  ENDIF

externdef __imp_ElfOpenEventLogA:PPROC
ElfOpenEventLogA equ <__imp_ElfOpenEventLogA>
  IFNDEF __UNICODE__
    ElfOpenEventLog equ <__imp_ElfOpenEventLogA>
  ENDIF

externdef __imp_ElfOpenEventLogW:PPROC
ElfOpenEventLogW equ <__imp_ElfOpenEventLogW>
  IFDEF __UNICODE__
    ElfOpenEventLog equ <__imp_ElfOpenEventLogW>
  ENDIF

externdef __imp_ElfReadEventLogA:PPROC
ElfReadEventLogA equ <__imp_ElfReadEventLogA>
  IFNDEF __UNICODE__
    ElfReadEventLog equ <__imp_ElfReadEventLogA>
  ENDIF

externdef __imp_ElfReadEventLogW:PPROC
ElfReadEventLogW equ <__imp_ElfReadEventLogW>
  IFDEF __UNICODE__
    ElfReadEventLog equ <__imp_ElfReadEventLogW>
  ENDIF

externdef __imp_ElfRegisterEventSourceA:PPROC
ElfRegisterEventSourceA equ <__imp_ElfRegisterEventSourceA>
  IFNDEF __UNICODE__
    ElfRegisterEventSource equ <__imp_ElfRegisterEventSourceA>
  ENDIF

externdef __imp_ElfRegisterEventSourceW:PPROC
ElfRegisterEventSourceW equ <__imp_ElfRegisterEventSourceW>
  IFDEF __UNICODE__
    ElfRegisterEventSource equ <__imp_ElfRegisterEventSourceW>
  ENDIF

externdef __imp_ElfReportEventA:PPROC
ElfReportEventA equ <__imp_ElfReportEventA>
  IFNDEF __UNICODE__
    ElfReportEvent equ <__imp_ElfReportEventA>
  ENDIF

externdef __imp_ElfReportEventAndSourceW:PPROC
ElfReportEventAndSourceW equ <__imp_ElfReportEventAndSourceW>
  IFDEF __UNICODE__
    ElfReportEventAndSource equ <__imp_ElfReportEventAndSourceW>
  ENDIF

externdef __imp_ElfReportEventW:PPROC
ElfReportEventW equ <__imp_ElfReportEventW>
  IFDEF __UNICODE__
    ElfReportEvent equ <__imp_ElfReportEventW>
  ENDIF

externdef __imp_EnableTrace:PPROC
EnableTrace equ <__imp_EnableTrace>

externdef __imp_EncryptFileA:PPROC
EncryptFileA equ <__imp_EncryptFileA>
  IFNDEF __UNICODE__
    EncryptFile equ <__imp_EncryptFileA>
  ENDIF

externdef __imp_EncryptFileW:PPROC
EncryptFileW equ <__imp_EncryptFileW>
  IFDEF __UNICODE__
    EncryptFile equ <__imp_EncryptFileW>
  ENDIF

externdef __imp_EncryptedFileKeyInfo:PPROC
EncryptedFileKeyInfo equ <__imp_EncryptedFileKeyInfo>

externdef __imp_EncryptionDisable:PPROC
EncryptionDisable equ <__imp_EncryptionDisable>

externdef __imp_EnumDependentServicesA:PPROC
EnumDependentServicesA equ <__imp_EnumDependentServicesA>
  IFNDEF __UNICODE__
    EnumDependentServices equ <__imp_EnumDependentServicesA>
  ENDIF

externdef __imp_EnumDependentServicesW:PPROC
EnumDependentServicesW equ <__imp_EnumDependentServicesW>
  IFDEF __UNICODE__
    EnumDependentServices equ <__imp_EnumDependentServicesW>
  ENDIF

externdef __imp_EnumServiceGroupW:PPROC
EnumServiceGroupW equ <__imp_EnumServiceGroupW>
  IFDEF __UNICODE__
    EnumServiceGroup equ <__imp_EnumServiceGroupW>
  ENDIF

externdef __imp_EnumServicesStatusA:PPROC
EnumServicesStatusA equ <__imp_EnumServicesStatusA>
  IFNDEF __UNICODE__
    EnumServicesStatus equ <__imp_EnumServicesStatusA>
  ENDIF

externdef __imp_EnumServicesStatusExA:PPROC
EnumServicesStatusExA equ <__imp_EnumServicesStatusExA>
  IFNDEF __UNICODE__
    EnumServicesStatusEx equ <__imp_EnumServicesStatusExA>
  ENDIF

externdef __imp_EnumServicesStatusExW:PPROC
EnumServicesStatusExW equ <__imp_EnumServicesStatusExW>
  IFDEF __UNICODE__
    EnumServicesStatusEx equ <__imp_EnumServicesStatusExW>
  ENDIF

externdef __imp_EnumServicesStatusW:PPROC
EnumServicesStatusW equ <__imp_EnumServicesStatusW>
  IFDEF __UNICODE__
    EnumServicesStatus equ <__imp_EnumServicesStatusW>
  ENDIF

externdef __imp_EnumerateTraceGuids:PPROC
EnumerateTraceGuids equ <__imp_EnumerateTraceGuids>

externdef __imp_EqualDomainSid:PPROC
EqualDomainSid equ <__imp_EqualDomainSid>

externdef __imp_EqualPrefixSid:PPROC
EqualPrefixSid equ <__imp_EqualPrefixSid>

externdef __imp_EqualSid:PPROC
EqualSid equ <__imp_EqualSid>

externdef __imp_FileEncryptionStatusA:PPROC
FileEncryptionStatusA equ <__imp_FileEncryptionStatusA>
  IFNDEF __UNICODE__
    FileEncryptionStatus equ <__imp_FileEncryptionStatusA>
  ENDIF

externdef __imp_FileEncryptionStatusW:PPROC
FileEncryptionStatusW equ <__imp_FileEncryptionStatusW>
  IFDEF __UNICODE__
    FileEncryptionStatus equ <__imp_FileEncryptionStatusW>
  ENDIF

externdef __imp_FindFirstFreeAce:PPROC
FindFirstFreeAce equ <__imp_FindFirstFreeAce>

externdef __imp_FlushTraceA:PPROC
FlushTraceA equ <__imp_FlushTraceA>
  IFNDEF __UNICODE__
    FlushTrace equ <__imp_FlushTraceA>
  ENDIF

externdef __imp_FlushTraceW:PPROC
FlushTraceW equ <__imp_FlushTraceW>
  IFDEF __UNICODE__
    FlushTrace equ <__imp_FlushTraceW>
  ENDIF

externdef __imp_FreeEncryptedFileKeyInfo:PPROC
FreeEncryptedFileKeyInfo equ <__imp_FreeEncryptedFileKeyInfo>

externdef __imp_FreeEncryptionCertificateHashList:PPROC
FreeEncryptionCertificateHashList equ <__imp_FreeEncryptionCertificateHashList>

externdef __imp_FreeInheritedFromArray:PPROC
FreeInheritedFromArray equ <__imp_FreeInheritedFromArray>

externdef __imp_FreeSid:PPROC
FreeSid equ <__imp_FreeSid>

externdef __imp_GetAccessPermissionsForObjectA:PPROC
GetAccessPermissionsForObjectA equ <__imp_GetAccessPermissionsForObjectA>
  IFNDEF __UNICODE__
    GetAccessPermissionsForObject equ <__imp_GetAccessPermissionsForObjectA>
  ENDIF

externdef __imp_GetAccessPermissionsForObjectW:PPROC
GetAccessPermissionsForObjectW equ <__imp_GetAccessPermissionsForObjectW>
  IFDEF __UNICODE__
    GetAccessPermissionsForObject equ <__imp_GetAccessPermissionsForObjectW>
  ENDIF

externdef __imp_GetAce:PPROC
GetAce equ <__imp_GetAce>

externdef __imp_GetAclInformation:PPROC
GetAclInformation equ <__imp_GetAclInformation>

externdef __imp_GetAuditedPermissionsFromAclA:PPROC
GetAuditedPermissionsFromAclA equ <__imp_GetAuditedPermissionsFromAclA>
  IFNDEF __UNICODE__
    GetAuditedPermissionsFromAcl equ <__imp_GetAuditedPermissionsFromAclA>
  ENDIF

externdef __imp_GetAuditedPermissionsFromAclW:PPROC
GetAuditedPermissionsFromAclW equ <__imp_GetAuditedPermissionsFromAclW>
  IFDEF __UNICODE__
    GetAuditedPermissionsFromAcl equ <__imp_GetAuditedPermissionsFromAclW>
  ENDIF

externdef __imp_GetCurrentHwProfileA:PPROC
GetCurrentHwProfileA equ <__imp_GetCurrentHwProfileA>
  IFNDEF __UNICODE__
    GetCurrentHwProfile equ <__imp_GetCurrentHwProfileA>
  ENDIF

externdef __imp_GetCurrentHwProfileW:PPROC
GetCurrentHwProfileW equ <__imp_GetCurrentHwProfileW>
  IFDEF __UNICODE__
    GetCurrentHwProfile equ <__imp_GetCurrentHwProfileW>
  ENDIF

externdef __imp_GetEffectiveRightsFromAclA:PPROC
GetEffectiveRightsFromAclA equ <__imp_GetEffectiveRightsFromAclA>
  IFNDEF __UNICODE__
    GetEffectiveRightsFromAcl equ <__imp_GetEffectiveRightsFromAclA>
  ENDIF

externdef __imp_GetEffectiveRightsFromAclW:PPROC
GetEffectiveRightsFromAclW equ <__imp_GetEffectiveRightsFromAclW>
  IFDEF __UNICODE__
    GetEffectiveRightsFromAcl equ <__imp_GetEffectiveRightsFromAclW>
  ENDIF

externdef __imp_GetEventLogInformation:PPROC
GetEventLogInformation equ <__imp_GetEventLogInformation>

externdef __imp_GetExplicitEntriesFromAclA:PPROC
GetExplicitEntriesFromAclA equ <__imp_GetExplicitEntriesFromAclA>
  IFNDEF __UNICODE__
    GetExplicitEntriesFromAcl equ <__imp_GetExplicitEntriesFromAclA>
  ENDIF

externdef __imp_GetExplicitEntriesFromAclW:PPROC
GetExplicitEntriesFromAclW equ <__imp_GetExplicitEntriesFromAclW>
  IFDEF __UNICODE__
    GetExplicitEntriesFromAcl equ <__imp_GetExplicitEntriesFromAclW>
  ENDIF

externdef __imp_GetFileSecurityA:PPROC
GetFileSecurityA equ <__imp_GetFileSecurityA>
  IFNDEF __UNICODE__
    GetFileSecurity equ <__imp_GetFileSecurityA>
  ENDIF

externdef __imp_GetFileSecurityW:PPROC
GetFileSecurityW equ <__imp_GetFileSecurityW>
  IFDEF __UNICODE__
    GetFileSecurity equ <__imp_GetFileSecurityW>
  ENDIF

externdef __imp_GetInformationCodeAuthzLevelW:PPROC
GetInformationCodeAuthzLevelW equ <__imp_GetInformationCodeAuthzLevelW>
  IFDEF __UNICODE__
    GetInformationCodeAuthzLevel equ <__imp_GetInformationCodeAuthzLevelW>
  ENDIF

externdef __imp_GetInformationCodeAuthzPolicyW:PPROC
GetInformationCodeAuthzPolicyW equ <__imp_GetInformationCodeAuthzPolicyW>
  IFDEF __UNICODE__
    GetInformationCodeAuthzPolicy equ <__imp_GetInformationCodeAuthzPolicyW>
  ENDIF

externdef __imp_GetInheritanceSourceA:PPROC
GetInheritanceSourceA equ <__imp_GetInheritanceSourceA>
  IFNDEF __UNICODE__
    GetInheritanceSource equ <__imp_GetInheritanceSourceA>
  ENDIF

externdef __imp_GetInheritanceSourceW:PPROC
GetInheritanceSourceW equ <__imp_GetInheritanceSourceW>
  IFDEF __UNICODE__
    GetInheritanceSource equ <__imp_GetInheritanceSourceW>
  ENDIF

externdef __imp_GetKernelObjectSecurity:PPROC
GetKernelObjectSecurity equ <__imp_GetKernelObjectSecurity>

externdef __imp_GetLengthSid:PPROC
GetLengthSid equ <__imp_GetLengthSid>

externdef __imp_GetLocalManagedApplicationData:PPROC
GetLocalManagedApplicationData equ <__imp_GetLocalManagedApplicationData>

externdef __imp_GetLocalManagedApplications:PPROC
GetLocalManagedApplications equ <__imp_GetLocalManagedApplications>

externdef __imp_GetManagedApplicationCategories:PPROC
GetManagedApplicationCategories equ <__imp_GetManagedApplicationCategories>

externdef __imp_GetManagedApplications:PPROC
GetManagedApplications equ <__imp_GetManagedApplications>

externdef __imp_GetMultipleTrusteeA:PPROC
GetMultipleTrusteeA equ <__imp_GetMultipleTrusteeA>
  IFNDEF __UNICODE__
    GetMultipleTrustee equ <__imp_GetMultipleTrusteeA>
  ENDIF

externdef __imp_GetMultipleTrusteeOperationA:PPROC
GetMultipleTrusteeOperationA equ <__imp_GetMultipleTrusteeOperationA>
  IFNDEF __UNICODE__
    GetMultipleTrusteeOperation equ <__imp_GetMultipleTrusteeOperationA>
  ENDIF

externdef __imp_GetMultipleTrusteeOperationW:PPROC
GetMultipleTrusteeOperationW equ <__imp_GetMultipleTrusteeOperationW>
  IFDEF __UNICODE__
    GetMultipleTrusteeOperation equ <__imp_GetMultipleTrusteeOperationW>
  ENDIF

externdef __imp_GetMultipleTrusteeW:PPROC
GetMultipleTrusteeW equ <__imp_GetMultipleTrusteeW>
  IFDEF __UNICODE__
    GetMultipleTrustee equ <__imp_GetMultipleTrusteeW>
  ENDIF

externdef __imp_GetNamedSecurityInfoA:PPROC
GetNamedSecurityInfoA equ <__imp_GetNamedSecurityInfoA>
  IFNDEF __UNICODE__
    GetNamedSecurityInfo equ <__imp_GetNamedSecurityInfoA>
  ENDIF

externdef __imp_GetNamedSecurityInfoExA:PPROC
GetNamedSecurityInfoExA equ <__imp_GetNamedSecurityInfoExA>
  IFNDEF __UNICODE__
    GetNamedSecurityInfoEx equ <__imp_GetNamedSecurityInfoExA>
  ENDIF

externdef __imp_GetNamedSecurityInfoExW:PPROC
GetNamedSecurityInfoExW equ <__imp_GetNamedSecurityInfoExW>
  IFDEF __UNICODE__
    GetNamedSecurityInfoEx equ <__imp_GetNamedSecurityInfoExW>
  ENDIF

externdef __imp_GetNamedSecurityInfoW:PPROC
GetNamedSecurityInfoW equ <__imp_GetNamedSecurityInfoW>
  IFDEF __UNICODE__
    GetNamedSecurityInfo equ <__imp_GetNamedSecurityInfoW>
  ENDIF

externdef __imp_GetNumberOfEventLogRecords:PPROC
GetNumberOfEventLogRecords equ <__imp_GetNumberOfEventLogRecords>

externdef __imp_GetOldestEventLogRecord:PPROC
GetOldestEventLogRecord equ <__imp_GetOldestEventLogRecord>

externdef __imp_GetOverlappedAccessResults:PPROC
GetOverlappedAccessResults equ <__imp_GetOverlappedAccessResults>

externdef __imp_GetPrivateObjectSecurity:PPROC
GetPrivateObjectSecurity equ <__imp_GetPrivateObjectSecurity>

externdef __imp_GetSecurityDescriptorControl:PPROC
GetSecurityDescriptorControl equ <__imp_GetSecurityDescriptorControl>

externdef __imp_GetSecurityDescriptorDacl:PPROC
GetSecurityDescriptorDacl equ <__imp_GetSecurityDescriptorDacl>

externdef __imp_GetSecurityDescriptorGroup:PPROC
GetSecurityDescriptorGroup equ <__imp_GetSecurityDescriptorGroup>

externdef __imp_GetSecurityDescriptorLength:PPROC
GetSecurityDescriptorLength equ <__imp_GetSecurityDescriptorLength>

externdef __imp_GetSecurityDescriptorOwner:PPROC
GetSecurityDescriptorOwner equ <__imp_GetSecurityDescriptorOwner>

externdef __imp_GetSecurityDescriptorRMControl:PPROC
GetSecurityDescriptorRMControl equ <__imp_GetSecurityDescriptorRMControl>

externdef __imp_GetSecurityDescriptorSacl:PPROC
GetSecurityDescriptorSacl equ <__imp_GetSecurityDescriptorSacl>

externdef __imp_GetSecurityInfo:PPROC
GetSecurityInfo equ <__imp_GetSecurityInfo>

externdef __imp_GetSecurityInfoExA:PPROC
GetSecurityInfoExA equ <__imp_GetSecurityInfoExA>
  IFNDEF __UNICODE__
    GetSecurityInfoEx equ <__imp_GetSecurityInfoExA>
  ENDIF

externdef __imp_GetSecurityInfoExW:PPROC
GetSecurityInfoExW equ <__imp_GetSecurityInfoExW>
  IFDEF __UNICODE__
    GetSecurityInfoEx equ <__imp_GetSecurityInfoExW>
  ENDIF

externdef __imp_GetServiceDisplayNameA:PPROC
GetServiceDisplayNameA equ <__imp_GetServiceDisplayNameA>
  IFNDEF __UNICODE__
    GetServiceDisplayName equ <__imp_GetServiceDisplayNameA>
  ENDIF

externdef __imp_GetServiceDisplayNameW:PPROC
GetServiceDisplayNameW equ <__imp_GetServiceDisplayNameW>
  IFDEF __UNICODE__
    GetServiceDisplayName equ <__imp_GetServiceDisplayNameW>
  ENDIF

externdef __imp_GetServiceKeyNameA:PPROC
GetServiceKeyNameA equ <__imp_GetServiceKeyNameA>
  IFNDEF __UNICODE__
    GetServiceKeyName equ <__imp_GetServiceKeyNameA>
  ENDIF

externdef __imp_GetServiceKeyNameW:PPROC
GetServiceKeyNameW equ <__imp_GetServiceKeyNameW>
  IFDEF __UNICODE__
    GetServiceKeyName equ <__imp_GetServiceKeyNameW>
  ENDIF

externdef __imp_GetSidIdentifierAuthority:PPROC
GetSidIdentifierAuthority equ <__imp_GetSidIdentifierAuthority>

externdef __imp_GetSidLengthRequired:PPROC
GetSidLengthRequired equ <__imp_GetSidLengthRequired>

externdef __imp_GetSidSubAuthority:PPROC
GetSidSubAuthority equ <__imp_GetSidSubAuthority>

externdef __imp_GetSidSubAuthorityCount:PPROC
GetSidSubAuthorityCount equ <__imp_GetSidSubAuthorityCount>

externdef __imp_GetTokenInformation:PPROC
GetTokenInformation equ <__imp_GetTokenInformation>

externdef __imp_GetTraceEnableFlags:PPROC
GetTraceEnableFlags equ <__imp_GetTraceEnableFlags>

externdef __imp_GetTraceEnableLevel:PPROC
GetTraceEnableLevel equ <__imp_GetTraceEnableLevel>

externdef __imp_GetTraceLoggerHandle:PPROC
GetTraceLoggerHandle equ <__imp_GetTraceLoggerHandle>

externdef __imp_GetTrusteeFormA:PPROC
GetTrusteeFormA equ <__imp_GetTrusteeFormA>
  IFNDEF __UNICODE__
    GetTrusteeForm equ <__imp_GetTrusteeFormA>
  ENDIF

externdef __imp_GetTrusteeFormW:PPROC
GetTrusteeFormW equ <__imp_GetTrusteeFormW>
  IFDEF __UNICODE__
    GetTrusteeForm equ <__imp_GetTrusteeFormW>
  ENDIF

externdef __imp_GetTrusteeNameA:PPROC
GetTrusteeNameA equ <__imp_GetTrusteeNameA>
  IFNDEF __UNICODE__
    GetTrusteeName equ <__imp_GetTrusteeNameA>
  ENDIF

externdef __imp_GetTrusteeNameW:PPROC
GetTrusteeNameW equ <__imp_GetTrusteeNameW>
  IFDEF __UNICODE__
    GetTrusteeName equ <__imp_GetTrusteeNameW>
  ENDIF

externdef __imp_GetTrusteeTypeA:PPROC
GetTrusteeTypeA equ <__imp_GetTrusteeTypeA>
  IFNDEF __UNICODE__
    GetTrusteeType equ <__imp_GetTrusteeTypeA>
  ENDIF

externdef __imp_GetTrusteeTypeW:PPROC
GetTrusteeTypeW equ <__imp_GetTrusteeTypeW>
  IFDEF __UNICODE__
    GetTrusteeType equ <__imp_GetTrusteeTypeW>
  ENDIF

externdef __imp_GetUserNameA:PPROC
GetUserNameA equ <__imp_GetUserNameA>
  IFNDEF __UNICODE__
    GetUserName equ <__imp_GetUserNameA>
  ENDIF

externdef __imp_GetUserNameW:PPROC
GetUserNameW equ <__imp_GetUserNameW>
  IFDEF __UNICODE__
    GetUserName equ <__imp_GetUserNameW>
  ENDIF

externdef __imp_GetWindowsAccountDomainSid:PPROC
GetWindowsAccountDomainSid equ <__imp_GetWindowsAccountDomainSid>

externdef __imp_I_QueryTagInformation:PPROC
I_QueryTagInformation equ <__imp_I_QueryTagInformation>

externdef __imp_I_ScGetCurrentGroupStateW:PPROC
I_ScGetCurrentGroupStateW equ <__imp_I_ScGetCurrentGroupStateW>
  IFDEF __UNICODE__
    I_ScGetCurrentGroupState equ <__imp_I_ScGetCurrentGroupStateW>
  ENDIF

externdef __imp_I_ScIsSecurityProcess:PPROC
I_ScIsSecurityProcess equ <__imp_I_ScIsSecurityProcess>

externdef __imp_I_ScPnPGetServiceName:PPROC
I_ScPnPGetServiceName equ <__imp_I_ScPnPGetServiceName>

externdef __imp_I_ScSendTSMessage:PPROC
I_ScSendTSMessage equ <__imp_I_ScSendTSMessage>

externdef __imp_I_ScSetServiceBitsA:PPROC
I_ScSetServiceBitsA equ <__imp_I_ScSetServiceBitsA>
  IFNDEF __UNICODE__
    I_ScSetServiceBits equ <__imp_I_ScSetServiceBitsA>
  ENDIF

externdef __imp_I_ScSetServiceBitsW:PPROC
I_ScSetServiceBitsW equ <__imp_I_ScSetServiceBitsW>
  IFDEF __UNICODE__
    I_ScSetServiceBits equ <__imp_I_ScSetServiceBitsW>
  ENDIF

externdef __imp_IdentifyCodeAuthzLevelW:PPROC
IdentifyCodeAuthzLevelW equ <__imp_IdentifyCodeAuthzLevelW>
  IFDEF __UNICODE__
    IdentifyCodeAuthzLevel equ <__imp_IdentifyCodeAuthzLevelW>
  ENDIF

externdef __imp_ImpersonateAnonymousToken:PPROC
ImpersonateAnonymousToken equ <__imp_ImpersonateAnonymousToken>

externdef __imp_ImpersonateLoggedOnUser:PPROC
ImpersonateLoggedOnUser equ <__imp_ImpersonateLoggedOnUser>

externdef __imp_ImpersonateNamedPipeClient:PPROC
ImpersonateNamedPipeClient equ <__imp_ImpersonateNamedPipeClient>

externdef __imp_ImpersonateSelf:PPROC
ImpersonateSelf equ <__imp_ImpersonateSelf>

externdef __imp_InitializeAcl:PPROC
InitializeAcl equ <__imp_InitializeAcl>

externdef __imp_InitializeSecurityDescriptor:PPROC
InitializeSecurityDescriptor equ <__imp_InitializeSecurityDescriptor>

externdef __imp_InitializeSid:PPROC
InitializeSid equ <__imp_InitializeSid>

externdef __imp_InitiateSystemShutdownA:PPROC
InitiateSystemShutdownA equ <__imp_InitiateSystemShutdownA>
  IFNDEF __UNICODE__
    InitiateSystemShutdown equ <__imp_InitiateSystemShutdownA>
  ENDIF

externdef __imp_InitiateSystemShutdownExA:PPROC
InitiateSystemShutdownExA equ <__imp_InitiateSystemShutdownExA>
  IFNDEF __UNICODE__
    InitiateSystemShutdownEx equ <__imp_InitiateSystemShutdownExA>
  ENDIF

externdef __imp_InitiateSystemShutdownExW:PPROC
InitiateSystemShutdownExW equ <__imp_InitiateSystemShutdownExW>
  IFDEF __UNICODE__
    InitiateSystemShutdownEx equ <__imp_InitiateSystemShutdownExW>
  ENDIF

externdef __imp_InitiateSystemShutdownW:PPROC
InitiateSystemShutdownW equ <__imp_InitiateSystemShutdownW>
  IFDEF __UNICODE__
    InitiateSystemShutdown equ <__imp_InitiateSystemShutdownW>
  ENDIF

externdef __imp_InstallApplication:PPROC
InstallApplication equ <__imp_InstallApplication>

externdef __imp_IsTextUnicode:PPROC
IsTextUnicode equ <__imp_IsTextUnicode>

externdef __imp_IsTokenRestricted:PPROC
IsTokenRestricted equ <__imp_IsTokenRestricted>

externdef __imp_IsTokenUntrusted:PPROC
IsTokenUntrusted equ <__imp_IsTokenUntrusted>

externdef __imp_IsValidAcl:PPROC
IsValidAcl equ <__imp_IsValidAcl>

externdef __imp_IsValidSecurityDescriptor:PPROC
IsValidSecurityDescriptor equ <__imp_IsValidSecurityDescriptor>

externdef __imp_IsValidSid:PPROC
IsValidSid equ <__imp_IsValidSid>

externdef __imp_IsWellKnownSid:PPROC
IsWellKnownSid equ <__imp_IsWellKnownSid>

externdef __imp_LockServiceDatabase:PPROC
LockServiceDatabase equ <__imp_LockServiceDatabase>

externdef __imp_LogonUserA:PPROC
LogonUserA equ <__imp_LogonUserA>
  IFNDEF __UNICODE__
    LogonUser equ <__imp_LogonUserA>
  ENDIF

externdef __imp_LogonUserExA:PPROC
LogonUserExA equ <__imp_LogonUserExA>
  IFNDEF __UNICODE__
    LogonUserEx equ <__imp_LogonUserExA>
  ENDIF

externdef __imp_LogonUserExW:PPROC
LogonUserExW equ <__imp_LogonUserExW>
  IFDEF __UNICODE__
    LogonUserEx equ <__imp_LogonUserExW>
  ENDIF

externdef __imp_LogonUserW:PPROC
LogonUserW equ <__imp_LogonUserW>
  IFDEF __UNICODE__
    LogonUser equ <__imp_LogonUserW>
  ENDIF

externdef __imp_LookupAccountNameA:PPROC
LookupAccountNameA equ <__imp_LookupAccountNameA>
  IFNDEF __UNICODE__
    LookupAccountName equ <__imp_LookupAccountNameA>
  ENDIF

externdef __imp_LookupAccountNameW:PPROC
LookupAccountNameW equ <__imp_LookupAccountNameW>
  IFDEF __UNICODE__
    LookupAccountName equ <__imp_LookupAccountNameW>
  ENDIF

externdef __imp_LookupAccountSidA:PPROC
LookupAccountSidA equ <__imp_LookupAccountSidA>
  IFNDEF __UNICODE__
    LookupAccountSid equ <__imp_LookupAccountSidA>
  ENDIF

externdef __imp_LookupAccountSidW:PPROC
LookupAccountSidW equ <__imp_LookupAccountSidW>
  IFDEF __UNICODE__
    LookupAccountSid equ <__imp_LookupAccountSidW>
  ENDIF

externdef __imp_LookupPrivilegeDisplayNameA:PPROC
LookupPrivilegeDisplayNameA equ <__imp_LookupPrivilegeDisplayNameA>
  IFNDEF __UNICODE__
    LookupPrivilegeDisplayName equ <__imp_LookupPrivilegeDisplayNameA>
  ENDIF

externdef __imp_LookupPrivilegeDisplayNameW:PPROC
LookupPrivilegeDisplayNameW equ <__imp_LookupPrivilegeDisplayNameW>
  IFDEF __UNICODE__
    LookupPrivilegeDisplayName equ <__imp_LookupPrivilegeDisplayNameW>
  ENDIF

externdef __imp_LookupPrivilegeNameA:PPROC
LookupPrivilegeNameA equ <__imp_LookupPrivilegeNameA>
  IFNDEF __UNICODE__
    LookupPrivilegeName equ <__imp_LookupPrivilegeNameA>
  ENDIF

externdef __imp_LookupPrivilegeNameW:PPROC
LookupPrivilegeNameW equ <__imp_LookupPrivilegeNameW>
  IFDEF __UNICODE__
    LookupPrivilegeName equ <__imp_LookupPrivilegeNameW>
  ENDIF

externdef __imp_LookupPrivilegeValueA:PPROC
LookupPrivilegeValueA equ <__imp_LookupPrivilegeValueA>
  IFNDEF __UNICODE__
    LookupPrivilegeValue equ <__imp_LookupPrivilegeValueA>
  ENDIF

externdef __imp_LookupPrivilegeValueW:PPROC
LookupPrivilegeValueW equ <__imp_LookupPrivilegeValueW>
  IFDEF __UNICODE__
    LookupPrivilegeValue equ <__imp_LookupPrivilegeValueW>
  ENDIF

externdef __imp_LookupSecurityDescriptorPartsA:PPROC
LookupSecurityDescriptorPartsA equ <__imp_LookupSecurityDescriptorPartsA>
  IFNDEF __UNICODE__
    LookupSecurityDescriptorParts equ <__imp_LookupSecurityDescriptorPartsA>
  ENDIF

externdef __imp_LookupSecurityDescriptorPartsW:PPROC
LookupSecurityDescriptorPartsW equ <__imp_LookupSecurityDescriptorPartsW>
  IFDEF __UNICODE__
    LookupSecurityDescriptorParts equ <__imp_LookupSecurityDescriptorPartsW>
  ENDIF

externdef __imp_LsaAddAccountRights:PPROC
LsaAddAccountRights equ <__imp_LsaAddAccountRights>

externdef __imp_LsaAddPrivilegesToAccount:PPROC
LsaAddPrivilegesToAccount equ <__imp_LsaAddPrivilegesToAccount>

externdef __imp_LsaClearAuditLog:PPROC
LsaClearAuditLog equ <__imp_LsaClearAuditLog>

externdef __imp_LsaClose:PPROC
LsaClose equ <__imp_LsaClose>

externdef __imp_LsaCreateAccount:PPROC
LsaCreateAccount equ <__imp_LsaCreateAccount>

externdef __imp_LsaCreateSecret:PPROC
LsaCreateSecret equ <__imp_LsaCreateSecret>

externdef __imp_LsaCreateTrustedDomain:PPROC
LsaCreateTrustedDomain equ <__imp_LsaCreateTrustedDomain>

externdef __imp_LsaCreateTrustedDomainEx:PPROC
LsaCreateTrustedDomainEx equ <__imp_LsaCreateTrustedDomainEx>

externdef __imp_LsaDelete:PPROC
LsaDelete equ <__imp_LsaDelete>

externdef __imp_LsaDeleteTrustedDomain:PPROC
LsaDeleteTrustedDomain equ <__imp_LsaDeleteTrustedDomain>

externdef __imp_LsaEnumerateAccountRights:PPROC
LsaEnumerateAccountRights equ <__imp_LsaEnumerateAccountRights>

externdef __imp_LsaEnumerateAccounts:PPROC
LsaEnumerateAccounts equ <__imp_LsaEnumerateAccounts>

externdef __imp_LsaEnumerateAccountsWithUserRight:PPROC
LsaEnumerateAccountsWithUserRight equ <__imp_LsaEnumerateAccountsWithUserRight>

externdef __imp_LsaEnumeratePrivileges:PPROC
LsaEnumeratePrivileges equ <__imp_LsaEnumeratePrivileges>

externdef __imp_LsaEnumeratePrivilegesOfAccount:PPROC
LsaEnumeratePrivilegesOfAccount equ <__imp_LsaEnumeratePrivilegesOfAccount>

externdef __imp_LsaEnumerateTrustedDomains:PPROC
LsaEnumerateTrustedDomains equ <__imp_LsaEnumerateTrustedDomains>

externdef __imp_LsaEnumerateTrustedDomainsEx:PPROC
LsaEnumerateTrustedDomainsEx equ <__imp_LsaEnumerateTrustedDomainsEx>

externdef __imp_LsaFreeMemory:PPROC
LsaFreeMemory equ <__imp_LsaFreeMemory>

externdef __imp_LsaGetQuotasForAccount:PPROC
LsaGetQuotasForAccount equ <__imp_LsaGetQuotasForAccount>

externdef __imp_LsaGetRemoteUserName:PPROC
LsaGetRemoteUserName equ <__imp_LsaGetRemoteUserName>

externdef __imp_LsaGetSystemAccessAccount:PPROC
LsaGetSystemAccessAccount equ <__imp_LsaGetSystemAccessAccount>

externdef __imp_LsaGetUserName:PPROC
LsaGetUserName equ <__imp_LsaGetUserName>

externdef __imp_LsaICLookupNames:PPROC
LsaICLookupNames equ <__imp_LsaICLookupNames>

externdef __imp_LsaICLookupNamesWithCreds:PPROC
LsaICLookupNamesWithCreds equ <__imp_LsaICLookupNamesWithCreds>

externdef __imp_LsaICLookupSids:PPROC
LsaICLookupSids equ <__imp_LsaICLookupSids>

externdef __imp_LsaICLookupSidsWithCreds:PPROC
LsaICLookupSidsWithCreds equ <__imp_LsaICLookupSidsWithCreds>

externdef __imp_LsaLookupNames2:PPROC
LsaLookupNames2 equ <__imp_LsaLookupNames2>

externdef __imp_LsaLookupNames:PPROC
LsaLookupNames equ <__imp_LsaLookupNames>

externdef __imp_LsaLookupPrivilegeDisplayName:PPROC
LsaLookupPrivilegeDisplayName equ <__imp_LsaLookupPrivilegeDisplayName>

externdef __imp_LsaLookupPrivilegeName:PPROC
LsaLookupPrivilegeName equ <__imp_LsaLookupPrivilegeName>

externdef __imp_LsaLookupPrivilegeValue:PPROC
LsaLookupPrivilegeValue equ <__imp_LsaLookupPrivilegeValue>

externdef __imp_LsaLookupSids:PPROC
LsaLookupSids equ <__imp_LsaLookupSids>

externdef __imp_LsaNtStatusToWinError:PPROC
LsaNtStatusToWinError equ <__imp_LsaNtStatusToWinError>

externdef __imp_LsaOpenAccount:PPROC
LsaOpenAccount equ <__imp_LsaOpenAccount>

externdef __imp_LsaOpenPolicy:PPROC
LsaOpenPolicy equ <__imp_LsaOpenPolicy>

externdef __imp_LsaOpenPolicySce:PPROC
LsaOpenPolicySce equ <__imp_LsaOpenPolicySce>

externdef __imp_LsaOpenSecret:PPROC
LsaOpenSecret equ <__imp_LsaOpenSecret>

externdef __imp_LsaOpenTrustedDomain:PPROC
LsaOpenTrustedDomain equ <__imp_LsaOpenTrustedDomain>

externdef __imp_LsaOpenTrustedDomainByName:PPROC
LsaOpenTrustedDomainByName equ <__imp_LsaOpenTrustedDomainByName>

externdef __imp_LsaQueryDomainInformationPolicy:PPROC
LsaQueryDomainInformationPolicy equ <__imp_LsaQueryDomainInformationPolicy>

externdef __imp_LsaQueryForestTrustInformation:PPROC
LsaQueryForestTrustInformation equ <__imp_LsaQueryForestTrustInformation>

externdef __imp_LsaQueryInfoTrustedDomain:PPROC
LsaQueryInfoTrustedDomain equ <__imp_LsaQueryInfoTrustedDomain>

externdef __imp_LsaQueryInformationPolicy:PPROC
LsaQueryInformationPolicy equ <__imp_LsaQueryInformationPolicy>

externdef __imp_LsaQuerySecret:PPROC
LsaQuerySecret equ <__imp_LsaQuerySecret>

externdef __imp_LsaQuerySecurityObject:PPROC
LsaQuerySecurityObject equ <__imp_LsaQuerySecurityObject>

externdef __imp_LsaQueryTrustedDomainInfo:PPROC
LsaQueryTrustedDomainInfo equ <__imp_LsaQueryTrustedDomainInfo>

externdef __imp_LsaQueryTrustedDomainInfoByName:PPROC
LsaQueryTrustedDomainInfoByName equ <__imp_LsaQueryTrustedDomainInfoByName>

externdef __imp_LsaRemoveAccountRights:PPROC
LsaRemoveAccountRights equ <__imp_LsaRemoveAccountRights>

externdef __imp_LsaRemovePrivilegesFromAccount:PPROC
LsaRemovePrivilegesFromAccount equ <__imp_LsaRemovePrivilegesFromAccount>

externdef __imp_LsaRetrievePrivateData:PPROC
LsaRetrievePrivateData equ <__imp_LsaRetrievePrivateData>

externdef __imp_LsaSetDomainInformationPolicy:PPROC
LsaSetDomainInformationPolicy equ <__imp_LsaSetDomainInformationPolicy>

externdef __imp_LsaSetForestTrustInformation:PPROC
LsaSetForestTrustInformation equ <__imp_LsaSetForestTrustInformation>

externdef __imp_LsaSetInformationPolicy:PPROC
LsaSetInformationPolicy equ <__imp_LsaSetInformationPolicy>

externdef __imp_LsaSetInformationTrustedDomain:PPROC
LsaSetInformationTrustedDomain equ <__imp_LsaSetInformationTrustedDomain>

externdef __imp_LsaSetQuotasForAccount:PPROC
LsaSetQuotasForAccount equ <__imp_LsaSetQuotasForAccount>

externdef __imp_LsaSetSecret:PPROC
LsaSetSecret equ <__imp_LsaSetSecret>

externdef __imp_LsaSetSecurityObject:PPROC
LsaSetSecurityObject equ <__imp_LsaSetSecurityObject>

externdef __imp_LsaSetSystemAccessAccount:PPROC
LsaSetSystemAccessAccount equ <__imp_LsaSetSystemAccessAccount>

externdef __imp_LsaSetTrustedDomainInfoByName:PPROC
LsaSetTrustedDomainInfoByName equ <__imp_LsaSetTrustedDomainInfoByName>

externdef __imp_LsaSetTrustedDomainInformation:PPROC
LsaSetTrustedDomainInformation equ <__imp_LsaSetTrustedDomainInformation>

externdef __imp_LsaStorePrivateData:PPROC
LsaStorePrivateData equ <__imp_LsaStorePrivateData>

externdef __imp_MD4Final:PPROC
MD4Final equ <__imp_MD4Final>

externdef __imp_MD4Init:PPROC
MD4Init equ <__imp_MD4Init>

externdef __imp_MD4Update:PPROC
MD4Update equ <__imp_MD4Update>

externdef __imp_MD5Final:PPROC
MD5Final equ <__imp_MD5Final>

externdef __imp_MD5Init:PPROC
MD5Init equ <__imp_MD5Init>

externdef __imp_MD5Update:PPROC
MD5Update equ <__imp_MD5Update>

externdef __imp_MSChapSrvChangePassword2:PPROC
MSChapSrvChangePassword2 equ <__imp_MSChapSrvChangePassword2>

externdef __imp_MSChapSrvChangePassword:PPROC
MSChapSrvChangePassword equ <__imp_MSChapSrvChangePassword>

externdef __imp_MakeAbsoluteSD2:PPROC
MakeAbsoluteSD2 equ <__imp_MakeAbsoluteSD2>

externdef __imp_MakeAbsoluteSD:PPROC
MakeAbsoluteSD equ <__imp_MakeAbsoluteSD>

externdef __imp_MakeSelfRelativeSD:PPROC
MakeSelfRelativeSD equ <__imp_MakeSelfRelativeSD>

externdef __imp_MapGenericMask:PPROC
MapGenericMask equ <__imp_MapGenericMask>

externdef __imp_NotifyBootConfigStatus:PPROC
NotifyBootConfigStatus equ <__imp_NotifyBootConfigStatus>

externdef __imp_NotifyChangeEventLog:PPROC
NotifyChangeEventLog equ <__imp_NotifyChangeEventLog>

externdef __imp_ObjectCloseAuditAlarmA:PPROC
ObjectCloseAuditAlarmA equ <__imp_ObjectCloseAuditAlarmA>
  IFNDEF __UNICODE__
    ObjectCloseAuditAlarm equ <__imp_ObjectCloseAuditAlarmA>
  ENDIF

externdef __imp_ObjectCloseAuditAlarmW:PPROC
ObjectCloseAuditAlarmW equ <__imp_ObjectCloseAuditAlarmW>
  IFDEF __UNICODE__
    ObjectCloseAuditAlarm equ <__imp_ObjectCloseAuditAlarmW>
  ENDIF

externdef __imp_ObjectDeleteAuditAlarmA:PPROC
ObjectDeleteAuditAlarmA equ <__imp_ObjectDeleteAuditAlarmA>
  IFNDEF __UNICODE__
    ObjectDeleteAuditAlarm equ <__imp_ObjectDeleteAuditAlarmA>
  ENDIF

externdef __imp_ObjectDeleteAuditAlarmW:PPROC
ObjectDeleteAuditAlarmW equ <__imp_ObjectDeleteAuditAlarmW>
  IFDEF __UNICODE__
    ObjectDeleteAuditAlarm equ <__imp_ObjectDeleteAuditAlarmW>
  ENDIF

externdef __imp_ObjectOpenAuditAlarmA:PPROC
ObjectOpenAuditAlarmA equ <__imp_ObjectOpenAuditAlarmA>
  IFNDEF __UNICODE__
    ObjectOpenAuditAlarm equ <__imp_ObjectOpenAuditAlarmA>
  ENDIF

externdef __imp_ObjectOpenAuditAlarmW:PPROC
ObjectOpenAuditAlarmW equ <__imp_ObjectOpenAuditAlarmW>
  IFDEF __UNICODE__
    ObjectOpenAuditAlarm equ <__imp_ObjectOpenAuditAlarmW>
  ENDIF

externdef __imp_ObjectPrivilegeAuditAlarmA:PPROC
ObjectPrivilegeAuditAlarmA equ <__imp_ObjectPrivilegeAuditAlarmA>
  IFNDEF __UNICODE__
    ObjectPrivilegeAuditAlarm equ <__imp_ObjectPrivilegeAuditAlarmA>
  ENDIF

externdef __imp_ObjectPrivilegeAuditAlarmW:PPROC
ObjectPrivilegeAuditAlarmW equ <__imp_ObjectPrivilegeAuditAlarmW>
  IFDEF __UNICODE__
    ObjectPrivilegeAuditAlarm equ <__imp_ObjectPrivilegeAuditAlarmW>
  ENDIF

externdef __imp_OpenBackupEventLogA:PPROC
OpenBackupEventLogA equ <__imp_OpenBackupEventLogA>
  IFNDEF __UNICODE__
    OpenBackupEventLog equ <__imp_OpenBackupEventLogA>
  ENDIF

externdef __imp_OpenBackupEventLogW:PPROC
OpenBackupEventLogW equ <__imp_OpenBackupEventLogW>
  IFDEF __UNICODE__
    OpenBackupEventLog equ <__imp_OpenBackupEventLogW>
  ENDIF

externdef __imp_OpenEncryptedFileRawA:PPROC
OpenEncryptedFileRawA equ <__imp_OpenEncryptedFileRawA>
  IFNDEF __UNICODE__
    OpenEncryptedFileRaw equ <__imp_OpenEncryptedFileRawA>
  ENDIF

externdef __imp_OpenEncryptedFileRawW:PPROC
OpenEncryptedFileRawW equ <__imp_OpenEncryptedFileRawW>
  IFDEF __UNICODE__
    OpenEncryptedFileRaw equ <__imp_OpenEncryptedFileRawW>
  ENDIF

externdef __imp_OpenEventLogA:PPROC
OpenEventLogA equ <__imp_OpenEventLogA>
  IFNDEF __UNICODE__
    OpenEventLog equ <__imp_OpenEventLogA>
  ENDIF

externdef __imp_OpenEventLogW:PPROC
OpenEventLogW equ <__imp_OpenEventLogW>
  IFDEF __UNICODE__
    OpenEventLog equ <__imp_OpenEventLogW>
  ENDIF

externdef __imp_OpenProcessToken:PPROC
OpenProcessToken equ <__imp_OpenProcessToken>

externdef __imp_OpenSCManagerA:PPROC
OpenSCManagerA equ <__imp_OpenSCManagerA>
  IFNDEF __UNICODE__
    OpenSCManager equ <__imp_OpenSCManagerA>
  ENDIF

externdef __imp_OpenSCManagerW:PPROC
OpenSCManagerW equ <__imp_OpenSCManagerW>
  IFDEF __UNICODE__
    OpenSCManager equ <__imp_OpenSCManagerW>
  ENDIF

externdef __imp_OpenServiceA:PPROC
OpenServiceA equ <__imp_OpenServiceA>
  IFNDEF __UNICODE__
    OpenService equ <__imp_OpenServiceA>
  ENDIF

externdef __imp_OpenServiceW:PPROC
OpenServiceW equ <__imp_OpenServiceW>
  IFDEF __UNICODE__
    OpenService equ <__imp_OpenServiceW>
  ENDIF

externdef __imp_OpenThreadToken:PPROC
OpenThreadToken equ <__imp_OpenThreadToken>

externdef __imp_OpenTraceA:PPROC
OpenTraceA equ <__imp_OpenTraceA>
  IFNDEF __UNICODE__
    OpenTrace equ <__imp_OpenTraceA>
  ENDIF

externdef __imp_OpenTraceW:PPROC
OpenTraceW equ <__imp_OpenTraceW>
  IFDEF __UNICODE__
    OpenTrace equ <__imp_OpenTraceW>
  ENDIF

externdef __imp_PrivilegeCheck:PPROC
PrivilegeCheck equ <__imp_PrivilegeCheck>

externdef __imp_PrivilegedServiceAuditAlarmA:PPROC
PrivilegedServiceAuditAlarmA equ <__imp_PrivilegedServiceAuditAlarmA>
  IFNDEF __UNICODE__
    PrivilegedServiceAuditAlarm equ <__imp_PrivilegedServiceAuditAlarmA>
  ENDIF

externdef __imp_PrivilegedServiceAuditAlarmW:PPROC
PrivilegedServiceAuditAlarmW equ <__imp_PrivilegedServiceAuditAlarmW>
  IFDEF __UNICODE__
    PrivilegedServiceAuditAlarm equ <__imp_PrivilegedServiceAuditAlarmW>
  ENDIF

externdef __imp_ProcessIdleTasks:PPROC
ProcessIdleTasks equ <__imp_ProcessIdleTasks>

externdef __imp_ProcessTrace:PPROC
ProcessTrace equ <__imp_ProcessTrace>

externdef __imp_QueryAllTracesA:PPROC
QueryAllTracesA equ <__imp_QueryAllTracesA>
  IFNDEF __UNICODE__
    QueryAllTraces equ <__imp_QueryAllTracesA>
  ENDIF

externdef __imp_QueryAllTracesW:PPROC
QueryAllTracesW equ <__imp_QueryAllTracesW>
  IFDEF __UNICODE__
    QueryAllTraces equ <__imp_QueryAllTracesW>
  ENDIF

externdef __imp_QueryRecoveryAgentsOnEncryptedFile:PPROC
QueryRecoveryAgentsOnEncryptedFile equ <__imp_QueryRecoveryAgentsOnEncryptedFile>

externdef __imp_QueryServiceConfig2A:PPROC
QueryServiceConfig2A equ <__imp_QueryServiceConfig2A>
  IFNDEF __UNICODE__
    QueryServiceConfig2 equ <__imp_QueryServiceConfig2A>
  ENDIF

externdef __imp_QueryServiceConfig2W:PPROC
QueryServiceConfig2W equ <__imp_QueryServiceConfig2W>
  IFDEF __UNICODE__
    QueryServiceConfig2 equ <__imp_QueryServiceConfig2W>
  ENDIF

externdef __imp_QueryServiceConfigA:PPROC
QueryServiceConfigA equ <__imp_QueryServiceConfigA>
  IFNDEF __UNICODE__
    QueryServiceConfig equ <__imp_QueryServiceConfigA>
  ENDIF

externdef __imp_QueryServiceConfigW:PPROC
QueryServiceConfigW equ <__imp_QueryServiceConfigW>
  IFDEF __UNICODE__
    QueryServiceConfig equ <__imp_QueryServiceConfigW>
  ENDIF

externdef __imp_QueryServiceLockStatusA:PPROC
QueryServiceLockStatusA equ <__imp_QueryServiceLockStatusA>
  IFNDEF __UNICODE__
    QueryServiceLockStatus equ <__imp_QueryServiceLockStatusA>
  ENDIF

externdef __imp_QueryServiceLockStatusW:PPROC
QueryServiceLockStatusW equ <__imp_QueryServiceLockStatusW>
  IFDEF __UNICODE__
    QueryServiceLockStatus equ <__imp_QueryServiceLockStatusW>
  ENDIF

externdef __imp_QueryServiceObjectSecurity:PPROC
QueryServiceObjectSecurity equ <__imp_QueryServiceObjectSecurity>

externdef __imp_QueryServiceStatus:PPROC
QueryServiceStatus equ <__imp_QueryServiceStatus>

externdef __imp_QueryServiceStatusEx:PPROC
QueryServiceStatusEx equ <__imp_QueryServiceStatusEx>

externdef __imp_QueryTraceA:PPROC
QueryTraceA equ <__imp_QueryTraceA>
  IFNDEF __UNICODE__
    QueryTrace equ <__imp_QueryTraceA>
  ENDIF

externdef __imp_QueryTraceW:PPROC
QueryTraceW equ <__imp_QueryTraceW>
  IFDEF __UNICODE__
    QueryTrace equ <__imp_QueryTraceW>
  ENDIF

externdef __imp_QueryUsersOnEncryptedFile:PPROC
QueryUsersOnEncryptedFile equ <__imp_QueryUsersOnEncryptedFile>

externdef __imp_ReadEncryptedFileRaw:PPROC
ReadEncryptedFileRaw equ <__imp_ReadEncryptedFileRaw>

externdef __imp_ReadEventLogA:PPROC
ReadEventLogA equ <__imp_ReadEventLogA>
  IFNDEF __UNICODE__
    ReadEventLog equ <__imp_ReadEventLogA>
  ENDIF

externdef __imp_ReadEventLogW:PPROC
ReadEventLogW equ <__imp_ReadEventLogW>
  IFDEF __UNICODE__
    ReadEventLog equ <__imp_ReadEventLogW>
  ENDIF

externdef __imp_RegCloseKey:PPROC
RegCloseKey equ <__imp_RegCloseKey>

externdef __imp_RegConnectRegistryA:PPROC
RegConnectRegistryA equ <__imp_RegConnectRegistryA>
  IFNDEF __UNICODE__
    RegConnectRegistry equ <__imp_RegConnectRegistryA>
  ENDIF

externdef __imp_RegConnectRegistryExA:PPROC
RegConnectRegistryExA equ <__imp_RegConnectRegistryExA>
  IFNDEF __UNICODE__
    RegConnectRegistryEx equ <__imp_RegConnectRegistryExA>
  ENDIF

externdef __imp_RegConnectRegistryExW:PPROC
RegConnectRegistryExW equ <__imp_RegConnectRegistryExW>
  IFDEF __UNICODE__
    RegConnectRegistryEx equ <__imp_RegConnectRegistryExW>
  ENDIF

externdef __imp_RegConnectRegistryW:PPROC
RegConnectRegistryW equ <__imp_RegConnectRegistryW>
  IFDEF __UNICODE__
    RegConnectRegistry equ <__imp_RegConnectRegistryW>
  ENDIF

externdef __imp_RegCreateKeyA:PPROC
RegCreateKeyA equ <__imp_RegCreateKeyA>
  IFNDEF __UNICODE__
    RegCreateKey equ <__imp_RegCreateKeyA>
  ENDIF

externdef __imp_RegCreateKeyExA:PPROC
RegCreateKeyExA equ <__imp_RegCreateKeyExA>
  IFNDEF __UNICODE__
    RegCreateKeyEx equ <__imp_RegCreateKeyExA>
  ENDIF

externdef __imp_RegCreateKeyExW:PPROC
RegCreateKeyExW equ <__imp_RegCreateKeyExW>
  IFDEF __UNICODE__
    RegCreateKeyEx equ <__imp_RegCreateKeyExW>
  ENDIF

externdef __imp_RegCreateKeyW:PPROC
RegCreateKeyW equ <__imp_RegCreateKeyW>
  IFDEF __UNICODE__
    RegCreateKey equ <__imp_RegCreateKeyW>
  ENDIF

externdef __imp_RegDeleteKeyA:PPROC
RegDeleteKeyA equ <__imp_RegDeleteKeyA>
  IFNDEF __UNICODE__
    RegDeleteKey equ <__imp_RegDeleteKeyA>
  ENDIF

externdef __imp_RegDeleteKeyExA:PPROC
RegDeleteKeyExA equ <__imp_RegDeleteKeyExA>
  IFNDEF __UNICODE__
    RegDeleteKeyEx equ <__imp_RegDeleteKeyExA>
  ENDIF

externdef __imp_RegDeleteKeyExW:PPROC
RegDeleteKeyExW equ <__imp_RegDeleteKeyExW>
  IFDEF __UNICODE__
    RegDeleteKeyEx equ <__imp_RegDeleteKeyExW>
  ENDIF

externdef __imp_RegDeleteKeyW:PPROC
RegDeleteKeyW equ <__imp_RegDeleteKeyW>
  IFDEF __UNICODE__
    RegDeleteKey equ <__imp_RegDeleteKeyW>
  ENDIF

externdef __imp_RegDeleteValueA:PPROC
RegDeleteValueA equ <__imp_RegDeleteValueA>
  IFNDEF __UNICODE__
    RegDeleteValue equ <__imp_RegDeleteValueA>
  ENDIF

externdef __imp_RegDeleteValueW:PPROC
RegDeleteValueW equ <__imp_RegDeleteValueW>
  IFDEF __UNICODE__
    RegDeleteValue equ <__imp_RegDeleteValueW>
  ENDIF

externdef __imp_RegDisablePredefinedCache:PPROC
RegDisablePredefinedCache equ <__imp_RegDisablePredefinedCache>

externdef __imp_RegDisableReflectionKey:PPROC
RegDisableReflectionKey equ <__imp_RegDisableReflectionKey>

externdef __imp_RegEnableReflectionKey:PPROC
RegEnableReflectionKey equ <__imp_RegEnableReflectionKey>

externdef __imp_RegEnumKeyA:PPROC
RegEnumKeyA equ <__imp_RegEnumKeyA>
  IFNDEF __UNICODE__
    RegEnumKey equ <__imp_RegEnumKeyA>
  ENDIF

externdef __imp_RegEnumKeyExA:PPROC
RegEnumKeyExA equ <__imp_RegEnumKeyExA>
  IFNDEF __UNICODE__
    RegEnumKeyEx equ <__imp_RegEnumKeyExA>
  ENDIF

externdef __imp_RegEnumKeyExW:PPROC
RegEnumKeyExW equ <__imp_RegEnumKeyExW>
  IFDEF __UNICODE__
    RegEnumKeyEx equ <__imp_RegEnumKeyExW>
  ENDIF

externdef __imp_RegEnumKeyW:PPROC
RegEnumKeyW equ <__imp_RegEnumKeyW>
  IFDEF __UNICODE__
    RegEnumKey equ <__imp_RegEnumKeyW>
  ENDIF

externdef __imp_RegEnumValueA:PPROC
RegEnumValueA equ <__imp_RegEnumValueA>
  IFNDEF __UNICODE__
    RegEnumValue equ <__imp_RegEnumValueA>
  ENDIF

externdef __imp_RegEnumValueW:PPROC
RegEnumValueW equ <__imp_RegEnumValueW>
  IFDEF __UNICODE__
    RegEnumValue equ <__imp_RegEnumValueW>
  ENDIF

externdef __imp_RegFlushKey:PPROC
RegFlushKey equ <__imp_RegFlushKey>

externdef __imp_RegGetKeySecurity:PPROC
RegGetKeySecurity equ <__imp_RegGetKeySecurity>

externdef __imp_RegGetValueA:PPROC
RegGetValueA equ <__imp_RegGetValueA>
  IFNDEF __UNICODE__
    RegGetValue equ <__imp_RegGetValueA>
  ENDIF

externdef __imp_RegGetValueW:PPROC
RegGetValueW equ <__imp_RegGetValueW>
  IFDEF __UNICODE__
    RegGetValue equ <__imp_RegGetValueW>
  ENDIF

externdef __imp_RegLoadKeyA:PPROC
RegLoadKeyA equ <__imp_RegLoadKeyA>
  IFNDEF __UNICODE__
    RegLoadKey equ <__imp_RegLoadKeyA>
  ENDIF

externdef __imp_RegLoadKeyW:PPROC
RegLoadKeyW equ <__imp_RegLoadKeyW>
  IFDEF __UNICODE__
    RegLoadKey equ <__imp_RegLoadKeyW>
  ENDIF

externdef __imp_RegNotifyChangeKeyValue:PPROC
RegNotifyChangeKeyValue equ <__imp_RegNotifyChangeKeyValue>

externdef __imp_RegOpenCurrentUser:PPROC
RegOpenCurrentUser equ <__imp_RegOpenCurrentUser>

externdef __imp_RegOpenKeyA:PPROC
RegOpenKeyA equ <__imp_RegOpenKeyA>
  IFNDEF __UNICODE__
    RegOpenKey equ <__imp_RegOpenKeyA>
  ENDIF

externdef __imp_RegOpenKeyExA:PPROC
RegOpenKeyExA equ <__imp_RegOpenKeyExA>
  IFNDEF __UNICODE__
    RegOpenKeyEx equ <__imp_RegOpenKeyExA>
  ENDIF

externdef __imp_RegOpenKeyExW:PPROC
RegOpenKeyExW equ <__imp_RegOpenKeyExW>
  IFDEF __UNICODE__
    RegOpenKeyEx equ <__imp_RegOpenKeyExW>
  ENDIF

externdef __imp_RegOpenKeyW:PPROC
RegOpenKeyW equ <__imp_RegOpenKeyW>
  IFDEF __UNICODE__
    RegOpenKey equ <__imp_RegOpenKeyW>
  ENDIF

externdef __imp_RegOpenUserClassesRoot:PPROC
RegOpenUserClassesRoot equ <__imp_RegOpenUserClassesRoot>

externdef __imp_RegOverridePredefKey:PPROC
RegOverridePredefKey equ <__imp_RegOverridePredefKey>

externdef __imp_RegQueryInfoKeyA:PPROC
RegQueryInfoKeyA equ <__imp_RegQueryInfoKeyA>
  IFNDEF __UNICODE__
    RegQueryInfoKey equ <__imp_RegQueryInfoKeyA>
  ENDIF

externdef __imp_RegQueryInfoKeyW:PPROC
RegQueryInfoKeyW equ <__imp_RegQueryInfoKeyW>
  IFDEF __UNICODE__
    RegQueryInfoKey equ <__imp_RegQueryInfoKeyW>
  ENDIF

externdef __imp_RegQueryMultipleValuesA:PPROC
RegQueryMultipleValuesA equ <__imp_RegQueryMultipleValuesA>
  IFNDEF __UNICODE__
    RegQueryMultipleValues equ <__imp_RegQueryMultipleValuesA>
  ENDIF

externdef __imp_RegQueryMultipleValuesW:PPROC
RegQueryMultipleValuesW equ <__imp_RegQueryMultipleValuesW>
  IFDEF __UNICODE__
    RegQueryMultipleValues equ <__imp_RegQueryMultipleValuesW>
  ENDIF

externdef __imp_RegQueryReflectionKey:PPROC
RegQueryReflectionKey equ <__imp_RegQueryReflectionKey>

externdef __imp_RegQueryValueA:PPROC
RegQueryValueA equ <__imp_RegQueryValueA>
  IFNDEF __UNICODE__
    RegQueryValue equ <__imp_RegQueryValueA>
  ENDIF

externdef __imp_RegQueryValueExA:PPROC
RegQueryValueExA equ <__imp_RegQueryValueExA>
  IFNDEF __UNICODE__
    RegQueryValueEx equ <__imp_RegQueryValueExA>
  ENDIF

externdef __imp_RegQueryValueExW:PPROC
RegQueryValueExW equ <__imp_RegQueryValueExW>
  IFDEF __UNICODE__
    RegQueryValueEx equ <__imp_RegQueryValueExW>
  ENDIF

externdef __imp_RegQueryValueW:PPROC
RegQueryValueW equ <__imp_RegQueryValueW>
  IFDEF __UNICODE__
    RegQueryValue equ <__imp_RegQueryValueW>
  ENDIF

externdef __imp_RegReplaceKeyA:PPROC
RegReplaceKeyA equ <__imp_RegReplaceKeyA>
  IFNDEF __UNICODE__
    RegReplaceKey equ <__imp_RegReplaceKeyA>
  ENDIF

externdef __imp_RegReplaceKeyW:PPROC
RegReplaceKeyW equ <__imp_RegReplaceKeyW>
  IFDEF __UNICODE__
    RegReplaceKey equ <__imp_RegReplaceKeyW>
  ENDIF

externdef __imp_RegRestoreKeyA:PPROC
RegRestoreKeyA equ <__imp_RegRestoreKeyA>
  IFNDEF __UNICODE__
    RegRestoreKey equ <__imp_RegRestoreKeyA>
  ENDIF

externdef __imp_RegRestoreKeyW:PPROC
RegRestoreKeyW equ <__imp_RegRestoreKeyW>
  IFDEF __UNICODE__
    RegRestoreKey equ <__imp_RegRestoreKeyW>
  ENDIF

externdef __imp_RegSaveKeyA:PPROC
RegSaveKeyA equ <__imp_RegSaveKeyA>
  IFNDEF __UNICODE__
    RegSaveKey equ <__imp_RegSaveKeyA>
  ENDIF

externdef __imp_RegSaveKeyExA:PPROC
RegSaveKeyExA equ <__imp_RegSaveKeyExA>
  IFNDEF __UNICODE__
    RegSaveKeyEx equ <__imp_RegSaveKeyExA>
  ENDIF

externdef __imp_RegSaveKeyExW:PPROC
RegSaveKeyExW equ <__imp_RegSaveKeyExW>
  IFDEF __UNICODE__
    RegSaveKeyEx equ <__imp_RegSaveKeyExW>
  ENDIF

externdef __imp_RegSaveKeyW:PPROC
RegSaveKeyW equ <__imp_RegSaveKeyW>
  IFDEF __UNICODE__
    RegSaveKey equ <__imp_RegSaveKeyW>
  ENDIF

externdef __imp_RegSetKeySecurity:PPROC
RegSetKeySecurity equ <__imp_RegSetKeySecurity>

externdef __imp_RegSetValueA:PPROC
RegSetValueA equ <__imp_RegSetValueA>
  IFNDEF __UNICODE__
    RegSetValue equ <__imp_RegSetValueA>
  ENDIF

externdef __imp_RegSetValueExA:PPROC
RegSetValueExA equ <__imp_RegSetValueExA>
  IFNDEF __UNICODE__
    RegSetValueEx equ <__imp_RegSetValueExA>
  ENDIF

externdef __imp_RegSetValueExW:PPROC
RegSetValueExW equ <__imp_RegSetValueExW>
  IFDEF __UNICODE__
    RegSetValueEx equ <__imp_RegSetValueExW>
  ENDIF

externdef __imp_RegSetValueW:PPROC
RegSetValueW equ <__imp_RegSetValueW>
  IFDEF __UNICODE__
    RegSetValue equ <__imp_RegSetValueW>
  ENDIF

externdef __imp_RegUnLoadKeyA:PPROC
RegUnLoadKeyA equ <__imp_RegUnLoadKeyA>
  IFNDEF __UNICODE__
    RegUnLoadKey equ <__imp_RegUnLoadKeyA>
  ENDIF

externdef __imp_RegUnLoadKeyW:PPROC
RegUnLoadKeyW equ <__imp_RegUnLoadKeyW>
  IFDEF __UNICODE__
    RegUnLoadKey equ <__imp_RegUnLoadKeyW>
  ENDIF

externdef __imp_RegisterEventSourceA:PPROC
RegisterEventSourceA equ <__imp_RegisterEventSourceA>
  IFNDEF __UNICODE__
    RegisterEventSource equ <__imp_RegisterEventSourceA>
  ENDIF

externdef __imp_RegisterEventSourceW:PPROC
RegisterEventSourceW equ <__imp_RegisterEventSourceW>
  IFDEF __UNICODE__
    RegisterEventSource equ <__imp_RegisterEventSourceW>
  ENDIF

externdef __imp_RegisterIdleTask:PPROC
RegisterIdleTask equ <__imp_RegisterIdleTask>

externdef __imp_RegisterServiceCtrlHandlerA:PPROC
RegisterServiceCtrlHandlerA equ <__imp_RegisterServiceCtrlHandlerA>
  IFNDEF __UNICODE__
    RegisterServiceCtrlHandler equ <__imp_RegisterServiceCtrlHandlerA>
  ENDIF

externdef __imp_RegisterServiceCtrlHandlerExA:PPROC
RegisterServiceCtrlHandlerExA equ <__imp_RegisterServiceCtrlHandlerExA>
  IFNDEF __UNICODE__
    RegisterServiceCtrlHandlerEx equ <__imp_RegisterServiceCtrlHandlerExA>
  ENDIF

externdef __imp_RegisterServiceCtrlHandlerExW:PPROC
RegisterServiceCtrlHandlerExW equ <__imp_RegisterServiceCtrlHandlerExW>
  IFDEF __UNICODE__
    RegisterServiceCtrlHandlerEx equ <__imp_RegisterServiceCtrlHandlerExW>
  ENDIF

externdef __imp_RegisterServiceCtrlHandlerW:PPROC
RegisterServiceCtrlHandlerW equ <__imp_RegisterServiceCtrlHandlerW>
  IFDEF __UNICODE__
    RegisterServiceCtrlHandler equ <__imp_RegisterServiceCtrlHandlerW>
  ENDIF

externdef __imp_RegisterTraceGuidsA:PPROC
RegisterTraceGuidsA equ <__imp_RegisterTraceGuidsA>
  IFNDEF __UNICODE__
    RegisterTraceGuids equ <__imp_RegisterTraceGuidsA>
  ENDIF

externdef __imp_RegisterTraceGuidsW:PPROC
RegisterTraceGuidsW equ <__imp_RegisterTraceGuidsW>
  IFDEF __UNICODE__
    RegisterTraceGuids equ <__imp_RegisterTraceGuidsW>
  ENDIF

externdef __imp_RemoveTraceCallback:PPROC
RemoveTraceCallback equ <__imp_RemoveTraceCallback>

externdef __imp_RemoveUsersFromEncryptedFile:PPROC
RemoveUsersFromEncryptedFile equ <__imp_RemoveUsersFromEncryptedFile>

externdef __imp_ReportEventA:PPROC
ReportEventA equ <__imp_ReportEventA>
  IFNDEF __UNICODE__
    ReportEvent equ <__imp_ReportEventA>
  ENDIF

externdef __imp_ReportEventW:PPROC
ReportEventW equ <__imp_ReportEventW>
  IFDEF __UNICODE__
    ReportEvent equ <__imp_ReportEventW>
  ENDIF

externdef __imp_RevertToSelf:PPROC
RevertToSelf equ <__imp_RevertToSelf>

externdef __imp_SaferCloseLevel:PPROC
SaferCloseLevel equ <__imp_SaferCloseLevel>

externdef __imp_SaferComputeTokenFromLevel:PPROC
SaferComputeTokenFromLevel equ <__imp_SaferComputeTokenFromLevel>

externdef __imp_SaferCreateLevel:PPROC
SaferCreateLevel equ <__imp_SaferCreateLevel>

externdef __imp_SaferGetLevelInformation:PPROC
SaferGetLevelInformation equ <__imp_SaferGetLevelInformation>

externdef __imp_SaferGetPolicyInformation:PPROC
SaferGetPolicyInformation equ <__imp_SaferGetPolicyInformation>

externdef __imp_SaferIdentifyLevel:PPROC
SaferIdentifyLevel equ <__imp_SaferIdentifyLevel>

externdef __imp_SaferRecordEventLogEntry:PPROC
SaferRecordEventLogEntry equ <__imp_SaferRecordEventLogEntry>

externdef __imp_SaferSetLevelInformation:PPROC
SaferSetLevelInformation equ <__imp_SaferSetLevelInformation>

externdef __imp_SaferSetPolicyInformation:PPROC
SaferSetPolicyInformation equ <__imp_SaferSetPolicyInformation>

externdef __imp_SaferiChangeRegistryScope:PPROC
SaferiChangeRegistryScope equ <__imp_SaferiChangeRegistryScope>

externdef __imp_SaferiCompareTokenLevels:PPROC
SaferiCompareTokenLevels equ <__imp_SaferiCompareTokenLevels>

externdef __imp_SaferiIsExecutableFileType:PPROC
SaferiIsExecutableFileType equ <__imp_SaferiIsExecutableFileType>

externdef __imp_SaferiPopulateDefaultsInRegistry:PPROC
SaferiPopulateDefaultsInRegistry equ <__imp_SaferiPopulateDefaultsInRegistry>

externdef __imp_SaferiRecordEventLogEntry:PPROC
SaferiRecordEventLogEntry equ <__imp_SaferiRecordEventLogEntry>

externdef __imp_SaferiReplaceProcessThreadTokens:PPROC
SaferiReplaceProcessThreadTokens equ <__imp_SaferiReplaceProcessThreadTokens>

externdef __imp_SaferiSearchMatchingHashRules:PPROC
SaferiSearchMatchingHashRules equ <__imp_SaferiSearchMatchingHashRules>

externdef __imp_SetAclInformation:PPROC
SetAclInformation equ <__imp_SetAclInformation>

externdef __imp_SetEntriesInAccessListA:PPROC
SetEntriesInAccessListA equ <__imp_SetEntriesInAccessListA>
  IFNDEF __UNICODE__
    SetEntriesInAccessList equ <__imp_SetEntriesInAccessListA>
  ENDIF

externdef __imp_SetEntriesInAccessListW:PPROC
SetEntriesInAccessListW equ <__imp_SetEntriesInAccessListW>
  IFDEF __UNICODE__
    SetEntriesInAccessList equ <__imp_SetEntriesInAccessListW>
  ENDIF

externdef __imp_SetEntriesInAclA:PPROC
SetEntriesInAclA equ <__imp_SetEntriesInAclA>
  IFNDEF __UNICODE__
    SetEntriesInAcl equ <__imp_SetEntriesInAclA>
  ENDIF

externdef __imp_SetEntriesInAclW:PPROC
SetEntriesInAclW equ <__imp_SetEntriesInAclW>
  IFDEF __UNICODE__
    SetEntriesInAcl equ <__imp_SetEntriesInAclW>
  ENDIF

externdef __imp_SetEntriesInAuditListA:PPROC
SetEntriesInAuditListA equ <__imp_SetEntriesInAuditListA>
  IFNDEF __UNICODE__
    SetEntriesInAuditList equ <__imp_SetEntriesInAuditListA>
  ENDIF

externdef __imp_SetEntriesInAuditListW:PPROC
SetEntriesInAuditListW equ <__imp_SetEntriesInAuditListW>
  IFDEF __UNICODE__
    SetEntriesInAuditList equ <__imp_SetEntriesInAuditListW>
  ENDIF

externdef __imp_SetFileSecurityA:PPROC
SetFileSecurityA equ <__imp_SetFileSecurityA>
  IFNDEF __UNICODE__
    SetFileSecurity equ <__imp_SetFileSecurityA>
  ENDIF

externdef __imp_SetFileSecurityW:PPROC
SetFileSecurityW equ <__imp_SetFileSecurityW>
  IFDEF __UNICODE__
    SetFileSecurity equ <__imp_SetFileSecurityW>
  ENDIF

externdef __imp_SetInformationCodeAuthzLevelW:PPROC
SetInformationCodeAuthzLevelW equ <__imp_SetInformationCodeAuthzLevelW>
  IFDEF __UNICODE__
    SetInformationCodeAuthzLevel equ <__imp_SetInformationCodeAuthzLevelW>
  ENDIF

externdef __imp_SetInformationCodeAuthzPolicyW:PPROC
SetInformationCodeAuthzPolicyW equ <__imp_SetInformationCodeAuthzPolicyW>
  IFDEF __UNICODE__
    SetInformationCodeAuthzPolicy equ <__imp_SetInformationCodeAuthzPolicyW>
  ENDIF

externdef __imp_SetKernelObjectSecurity:PPROC
SetKernelObjectSecurity equ <__imp_SetKernelObjectSecurity>

externdef __imp_SetNamedSecurityInfoA:PPROC
SetNamedSecurityInfoA equ <__imp_SetNamedSecurityInfoA>
  IFNDEF __UNICODE__
    SetNamedSecurityInfo equ <__imp_SetNamedSecurityInfoA>
  ENDIF

externdef __imp_SetNamedSecurityInfoExA:PPROC
SetNamedSecurityInfoExA equ <__imp_SetNamedSecurityInfoExA>
  IFNDEF __UNICODE__
    SetNamedSecurityInfoEx equ <__imp_SetNamedSecurityInfoExA>
  ENDIF

externdef __imp_SetNamedSecurityInfoExW:PPROC
SetNamedSecurityInfoExW equ <__imp_SetNamedSecurityInfoExW>
  IFDEF __UNICODE__
    SetNamedSecurityInfoEx equ <__imp_SetNamedSecurityInfoExW>
  ENDIF

externdef __imp_SetNamedSecurityInfoW:PPROC
SetNamedSecurityInfoW equ <__imp_SetNamedSecurityInfoW>
  IFDEF __UNICODE__
    SetNamedSecurityInfo equ <__imp_SetNamedSecurityInfoW>
  ENDIF

externdef __imp_SetPrivateObjectSecurity:PPROC
SetPrivateObjectSecurity equ <__imp_SetPrivateObjectSecurity>

externdef __imp_SetPrivateObjectSecurityEx:PPROC
SetPrivateObjectSecurityEx equ <__imp_SetPrivateObjectSecurityEx>

externdef __imp_SetSecurityDescriptorControl:PPROC
SetSecurityDescriptorControl equ <__imp_SetSecurityDescriptorControl>

externdef __imp_SetSecurityDescriptorDacl:PPROC
SetSecurityDescriptorDacl equ <__imp_SetSecurityDescriptorDacl>

externdef __imp_SetSecurityDescriptorGroup:PPROC
SetSecurityDescriptorGroup equ <__imp_SetSecurityDescriptorGroup>

externdef __imp_SetSecurityDescriptorOwner:PPROC
SetSecurityDescriptorOwner equ <__imp_SetSecurityDescriptorOwner>

externdef __imp_SetSecurityDescriptorRMControl:PPROC
SetSecurityDescriptorRMControl equ <__imp_SetSecurityDescriptorRMControl>

externdef __imp_SetSecurityDescriptorSacl:PPROC
SetSecurityDescriptorSacl equ <__imp_SetSecurityDescriptorSacl>

externdef __imp_SetSecurityInfo:PPROC
SetSecurityInfo equ <__imp_SetSecurityInfo>

externdef __imp_SetSecurityInfoExA:PPROC
SetSecurityInfoExA equ <__imp_SetSecurityInfoExA>
  IFNDEF __UNICODE__
    SetSecurityInfoEx equ <__imp_SetSecurityInfoExA>
  ENDIF

externdef __imp_SetSecurityInfoExW:PPROC
SetSecurityInfoExW equ <__imp_SetSecurityInfoExW>
  IFDEF __UNICODE__
    SetSecurityInfoEx equ <__imp_SetSecurityInfoExW>
  ENDIF

externdef __imp_SetServiceBits:PPROC
SetServiceBits equ <__imp_SetServiceBits>

externdef __imp_SetServiceObjectSecurity:PPROC
SetServiceObjectSecurity equ <__imp_SetServiceObjectSecurity>

externdef __imp_SetServiceStatus:PPROC
SetServiceStatus equ <__imp_SetServiceStatus>

externdef __imp_SetThreadToken:PPROC
SetThreadToken equ <__imp_SetThreadToken>

externdef __imp_SetTokenInformation:PPROC
SetTokenInformation equ <__imp_SetTokenInformation>

externdef __imp_SetTraceCallback:PPROC
SetTraceCallback equ <__imp_SetTraceCallback>

externdef __imp_SetUserFileEncryptionKey:PPROC
SetUserFileEncryptionKey equ <__imp_SetUserFileEncryptionKey>

externdef __imp_StartServiceA:PPROC
StartServiceA equ <__imp_StartServiceA>
  IFNDEF __UNICODE__
    StartService equ <__imp_StartServiceA>
  ENDIF

externdef __imp_StartServiceCtrlDispatcherA:PPROC
StartServiceCtrlDispatcherA equ <__imp_StartServiceCtrlDispatcherA>
  IFNDEF __UNICODE__
    StartServiceCtrlDispatcher equ <__imp_StartServiceCtrlDispatcherA>
  ENDIF

externdef __imp_StartServiceCtrlDispatcherW:PPROC
StartServiceCtrlDispatcherW equ <__imp_StartServiceCtrlDispatcherW>
  IFDEF __UNICODE__
    StartServiceCtrlDispatcher equ <__imp_StartServiceCtrlDispatcherW>
  ENDIF

externdef __imp_StartServiceW:PPROC
StartServiceW equ <__imp_StartServiceW>
  IFDEF __UNICODE__
    StartService equ <__imp_StartServiceW>
  ENDIF

externdef __imp_StartTraceA:PPROC
StartTraceA equ <__imp_StartTraceA>
  IFNDEF __UNICODE__
    StartTrace equ <__imp_StartTraceA>
  ENDIF

externdef __imp_StartTraceW:PPROC
StartTraceW equ <__imp_StartTraceW>
  IFDEF __UNICODE__
    StartTrace equ <__imp_StartTraceW>
  ENDIF

externdef __imp_StopTraceA:PPROC
StopTraceA equ <__imp_StopTraceA>
  IFNDEF __UNICODE__
    StopTrace equ <__imp_StopTraceA>
  ENDIF

externdef __imp_StopTraceW:PPROC
StopTraceW equ <__imp_StopTraceW>
  IFDEF __UNICODE__
    StopTrace equ <__imp_StopTraceW>
  ENDIF

externdef __imp_SystemFunction001:PPROC
SystemFunction001 equ <__imp_SystemFunction001>

externdef __imp_SystemFunction002:PPROC
SystemFunction002 equ <__imp_SystemFunction002>

externdef __imp_SystemFunction003:PPROC
SystemFunction003 equ <__imp_SystemFunction003>

externdef __imp_SystemFunction004:PPROC
SystemFunction004 equ <__imp_SystemFunction004>

externdef __imp_SystemFunction005:PPROC
SystemFunction005 equ <__imp_SystemFunction005>

externdef __imp_SystemFunction006:PPROC
SystemFunction006 equ <__imp_SystemFunction006>

externdef __imp_SystemFunction007:PPROC
SystemFunction007 equ <__imp_SystemFunction007>

externdef __imp_SystemFunction008:PPROC
SystemFunction008 equ <__imp_SystemFunction008>

externdef __imp_SystemFunction009:PPROC
SystemFunction009 equ <__imp_SystemFunction009>

externdef __imp_SystemFunction010:PPROC
SystemFunction010 equ <__imp_SystemFunction010>

externdef __imp_SystemFunction011:PPROC
SystemFunction011 equ <__imp_SystemFunction011>

externdef __imp_SystemFunction012:PPROC
SystemFunction012 equ <__imp_SystemFunction012>

externdef __imp_SystemFunction013:PPROC
SystemFunction013 equ <__imp_SystemFunction013>

externdef __imp_SystemFunction014:PPROC
SystemFunction014 equ <__imp_SystemFunction014>

externdef __imp_SystemFunction015:PPROC
SystemFunction015 equ <__imp_SystemFunction015>

externdef __imp_SystemFunction016:PPROC
SystemFunction016 equ <__imp_SystemFunction016>

externdef __imp_SystemFunction017:PPROC
SystemFunction017 equ <__imp_SystemFunction017>

externdef __imp_SystemFunction018:PPROC
SystemFunction018 equ <__imp_SystemFunction018>

externdef __imp_SystemFunction019:PPROC
SystemFunction019 equ <__imp_SystemFunction019>

externdef __imp_SystemFunction020:PPROC
SystemFunction020 equ <__imp_SystemFunction020>

externdef __imp_SystemFunction021:PPROC
SystemFunction021 equ <__imp_SystemFunction021>

externdef __imp_SystemFunction022:PPROC
SystemFunction022 equ <__imp_SystemFunction022>

externdef __imp_SystemFunction023:PPROC
SystemFunction023 equ <__imp_SystemFunction023>

externdef __imp_SystemFunction024:PPROC
SystemFunction024 equ <__imp_SystemFunction024>

externdef __imp_SystemFunction025:PPROC
SystemFunction025 equ <__imp_SystemFunction025>

externdef __imp_SystemFunction026:PPROC
SystemFunction026 equ <__imp_SystemFunction026>

externdef __imp_SystemFunction027:PPROC
SystemFunction027 equ <__imp_SystemFunction027>

externdef __imp_SystemFunction028:PPROC
SystemFunction028 equ <__imp_SystemFunction028>

externdef __imp_SystemFunction029:PPROC
SystemFunction029 equ <__imp_SystemFunction029>

externdef __imp_SystemFunction030:PPROC
SystemFunction030 equ <__imp_SystemFunction030>

externdef __imp_SystemFunction031:PPROC
SystemFunction031 equ <__imp_SystemFunction031>

externdef __imp_SystemFunction032:PPROC
SystemFunction032 equ <__imp_SystemFunction032>

externdef __imp_SystemFunction033:PPROC
SystemFunction033 equ <__imp_SystemFunction033>

externdef __imp_SystemFunction034:PPROC
SystemFunction034 equ <__imp_SystemFunction034>

externdef __imp_SystemFunction035:PPROC
SystemFunction035 equ <__imp_SystemFunction035>

externdef __imp_SystemFunction036:PPROC
SystemFunction036 equ <__imp_SystemFunction036>

externdef __imp_SystemFunction040:PPROC
SystemFunction040 equ <__imp_SystemFunction040>

externdef __imp_SystemFunction041:PPROC
SystemFunction041 equ <__imp_SystemFunction041>

externdef __imp_TraceEvent:PPROC
TraceEvent equ <__imp_TraceEvent>

externdef __imp_TraceEventInstance:PPROC
TraceEventInstance equ <__imp_TraceEventInstance>

externdef __imp_TraceMessage:PPROC
TraceMessage equ <__imp_TraceMessage>

externdef __imp_TraceMessageVa:PPROC
TraceMessageVa equ <__imp_TraceMessageVa>

externdef __imp_TreeResetNamedSecurityInfoA:PPROC
TreeResetNamedSecurityInfoA equ <__imp_TreeResetNamedSecurityInfoA>
  IFNDEF __UNICODE__
    TreeResetNamedSecurityInfo equ <__imp_TreeResetNamedSecurityInfoA>
  ENDIF

externdef __imp_TreeResetNamedSecurityInfoW:PPROC
TreeResetNamedSecurityInfoW equ <__imp_TreeResetNamedSecurityInfoW>
  IFDEF __UNICODE__
    TreeResetNamedSecurityInfo equ <__imp_TreeResetNamedSecurityInfoW>
  ENDIF

externdef __imp_TrusteeAccessToObjectA:PPROC
TrusteeAccessToObjectA equ <__imp_TrusteeAccessToObjectA>
  IFNDEF __UNICODE__
    TrusteeAccessToObject equ <__imp_TrusteeAccessToObjectA>
  ENDIF

externdef __imp_TrusteeAccessToObjectW:PPROC
TrusteeAccessToObjectW equ <__imp_TrusteeAccessToObjectW>
  IFDEF __UNICODE__
    TrusteeAccessToObject equ <__imp_TrusteeAccessToObjectW>
  ENDIF

externdef __imp_UninstallApplication:PPROC
UninstallApplication equ <__imp_UninstallApplication>

externdef __imp_UnlockServiceDatabase:PPROC
UnlockServiceDatabase equ <__imp_UnlockServiceDatabase>

externdef __imp_UnregisterIdleTask:PPROC
UnregisterIdleTask equ <__imp_UnregisterIdleTask>

externdef __imp_UnregisterTraceGuids:PPROC
UnregisterTraceGuids equ <__imp_UnregisterTraceGuids>

externdef __imp_UpdateTraceA:PPROC
UpdateTraceA equ <__imp_UpdateTraceA>
  IFNDEF __UNICODE__
    UpdateTrace equ <__imp_UpdateTraceA>
  ENDIF

externdef __imp_UpdateTraceW:PPROC
UpdateTraceW equ <__imp_UpdateTraceW>
  IFDEF __UNICODE__
    UpdateTrace equ <__imp_UpdateTraceW>
  ENDIF

externdef __imp_WdmWmiServiceMain:PPROC
WdmWmiServiceMain equ <__imp_WdmWmiServiceMain>

externdef __imp_WmiCloseBlock:PPROC
WmiCloseBlock equ <__imp_WmiCloseBlock>

externdef __imp_WmiCloseTraceWithCursor:PPROC
WmiCloseTraceWithCursor equ <__imp_WmiCloseTraceWithCursor>

externdef __imp_WmiConvertTimestamp:PPROC
WmiConvertTimestamp equ <__imp_WmiConvertTimestamp>

externdef __imp_WmiDevInstToInstanceNameA:PPROC
WmiDevInstToInstanceNameA equ <__imp_WmiDevInstToInstanceNameA>
  IFNDEF __UNICODE__
    WmiDevInstToInstanceName equ <__imp_WmiDevInstToInstanceNameA>
  ENDIF

externdef __imp_WmiDevInstToInstanceNameW:PPROC
WmiDevInstToInstanceNameW equ <__imp_WmiDevInstToInstanceNameW>
  IFDEF __UNICODE__
    WmiDevInstToInstanceName equ <__imp_WmiDevInstToInstanceNameW>
  ENDIF

externdef __imp_WmiEnumerateGuids:PPROC
WmiEnumerateGuids equ <__imp_WmiEnumerateGuids>

externdef __imp_WmiExecuteMethodA:PPROC
WmiExecuteMethodA equ <__imp_WmiExecuteMethodA>
  IFNDEF __UNICODE__
    WmiExecuteMethod equ <__imp_WmiExecuteMethodA>
  ENDIF

externdef __imp_WmiExecuteMethodW:PPROC
WmiExecuteMethodW equ <__imp_WmiExecuteMethodW>
  IFDEF __UNICODE__
    WmiExecuteMethod equ <__imp_WmiExecuteMethodW>
  ENDIF

externdef __imp_WmiFileHandleToInstanceNameA:PPROC
WmiFileHandleToInstanceNameA equ <__imp_WmiFileHandleToInstanceNameA>
  IFNDEF __UNICODE__
    WmiFileHandleToInstanceName equ <__imp_WmiFileHandleToInstanceNameA>
  ENDIF

externdef __imp_WmiFileHandleToInstanceNameW:PPROC
WmiFileHandleToInstanceNameW equ <__imp_WmiFileHandleToInstanceNameW>
  IFDEF __UNICODE__
    WmiFileHandleToInstanceName equ <__imp_WmiFileHandleToInstanceNameW>
  ENDIF

externdef __imp_WmiFreeBuffer:PPROC
WmiFreeBuffer equ <__imp_WmiFreeBuffer>

externdef __imp_WmiGetFirstTraceOffset:PPROC
WmiGetFirstTraceOffset equ <__imp_WmiGetFirstTraceOffset>

externdef __imp_WmiGetNextEvent:PPROC
WmiGetNextEvent equ <__imp_WmiGetNextEvent>

externdef __imp_WmiGetTraceHeader:PPROC
WmiGetTraceHeader equ <__imp_WmiGetTraceHeader>

externdef __imp_WmiMofEnumerateResourcesA:PPROC
WmiMofEnumerateResourcesA equ <__imp_WmiMofEnumerateResourcesA>
  IFNDEF __UNICODE__
    WmiMofEnumerateResources equ <__imp_WmiMofEnumerateResourcesA>
  ENDIF

externdef __imp_WmiMofEnumerateResourcesW:PPROC
WmiMofEnumerateResourcesW equ <__imp_WmiMofEnumerateResourcesW>
  IFDEF __UNICODE__
    WmiMofEnumerateResources equ <__imp_WmiMofEnumerateResourcesW>
  ENDIF

externdef __imp_WmiNotificationRegistrationA:PPROC
WmiNotificationRegistrationA equ <__imp_WmiNotificationRegistrationA>
  IFNDEF __UNICODE__
    WmiNotificationRegistration equ <__imp_WmiNotificationRegistrationA>
  ENDIF

externdef __imp_WmiNotificationRegistrationW:PPROC
WmiNotificationRegistrationW equ <__imp_WmiNotificationRegistrationW>
  IFDEF __UNICODE__
    WmiNotificationRegistration equ <__imp_WmiNotificationRegistrationW>
  ENDIF

externdef __imp_WmiOpenBlock:PPROC
WmiOpenBlock equ <__imp_WmiOpenBlock>

externdef __imp_WmiOpenTraceWithCursor:PPROC
WmiOpenTraceWithCursor equ <__imp_WmiOpenTraceWithCursor>

externdef __imp_WmiParseTraceEvent:PPROC
WmiParseTraceEvent equ <__imp_WmiParseTraceEvent>

externdef __imp_WmiQueryAllDataA:PPROC
WmiQueryAllDataA equ <__imp_WmiQueryAllDataA>
  IFNDEF __UNICODE__
    WmiQueryAllData equ <__imp_WmiQueryAllDataA>
  ENDIF

externdef __imp_WmiQueryAllDataMultipleA:PPROC
WmiQueryAllDataMultipleA equ <__imp_WmiQueryAllDataMultipleA>
  IFNDEF __UNICODE__
    WmiQueryAllDataMultiple equ <__imp_WmiQueryAllDataMultipleA>
  ENDIF

externdef __imp_WmiQueryAllDataMultipleW:PPROC
WmiQueryAllDataMultipleW equ <__imp_WmiQueryAllDataMultipleW>
  IFDEF __UNICODE__
    WmiQueryAllDataMultiple equ <__imp_WmiQueryAllDataMultipleW>
  ENDIF

externdef __imp_WmiQueryAllDataW:PPROC
WmiQueryAllDataW equ <__imp_WmiQueryAllDataW>
  IFDEF __UNICODE__
    WmiQueryAllData equ <__imp_WmiQueryAllDataW>
  ENDIF

externdef __imp_WmiQueryGuidInformation:PPROC
WmiQueryGuidInformation equ <__imp_WmiQueryGuidInformation>

externdef __imp_WmiQuerySingleInstanceA:PPROC
WmiQuerySingleInstanceA equ <__imp_WmiQuerySingleInstanceA>
  IFNDEF __UNICODE__
    WmiQuerySingleInstance equ <__imp_WmiQuerySingleInstanceA>
  ENDIF

externdef __imp_WmiQuerySingleInstanceMultipleA:PPROC
WmiQuerySingleInstanceMultipleA equ <__imp_WmiQuerySingleInstanceMultipleA>
  IFNDEF __UNICODE__
    WmiQuerySingleInstanceMultiple equ <__imp_WmiQuerySingleInstanceMultipleA>
  ENDIF

externdef __imp_WmiQuerySingleInstanceMultipleW:PPROC
WmiQuerySingleInstanceMultipleW equ <__imp_WmiQuerySingleInstanceMultipleW>
  IFDEF __UNICODE__
    WmiQuerySingleInstanceMultiple equ <__imp_WmiQuerySingleInstanceMultipleW>
  ENDIF

externdef __imp_WmiQuerySingleInstanceW:PPROC
WmiQuerySingleInstanceW equ <__imp_WmiQuerySingleInstanceW>
  IFDEF __UNICODE__
    WmiQuerySingleInstance equ <__imp_WmiQuerySingleInstanceW>
  ENDIF

externdef __imp_WmiReceiveNotificationsA:PPROC
WmiReceiveNotificationsA equ <__imp_WmiReceiveNotificationsA>
  IFNDEF __UNICODE__
    WmiReceiveNotifications equ <__imp_WmiReceiveNotificationsA>
  ENDIF

externdef __imp_WmiReceiveNotificationsW:PPROC
WmiReceiveNotificationsW equ <__imp_WmiReceiveNotificationsW>
  IFDEF __UNICODE__
    WmiReceiveNotifications equ <__imp_WmiReceiveNotificationsW>
  ENDIF

externdef __imp_WmiSetSingleInstanceA:PPROC
WmiSetSingleInstanceA equ <__imp_WmiSetSingleInstanceA>
  IFNDEF __UNICODE__
    WmiSetSingleInstance equ <__imp_WmiSetSingleInstanceA>
  ENDIF

externdef __imp_WmiSetSingleInstanceW:PPROC
WmiSetSingleInstanceW equ <__imp_WmiSetSingleInstanceW>
  IFDEF __UNICODE__
    WmiSetSingleInstance equ <__imp_WmiSetSingleInstanceW>
  ENDIF

externdef __imp_WmiSetSingleItemA:PPROC
WmiSetSingleItemA equ <__imp_WmiSetSingleItemA>
  IFNDEF __UNICODE__
    WmiSetSingleItem equ <__imp_WmiSetSingleItemA>
  ENDIF

externdef __imp_WmiSetSingleItemW:PPROC
WmiSetSingleItemW equ <__imp_WmiSetSingleItemW>
  IFDEF __UNICODE__
    WmiSetSingleItem equ <__imp_WmiSetSingleItemW>
  ENDIF

externdef __imp_Wow64Win32ApiEntry:PPROC
Wow64Win32ApiEntry equ <__imp_Wow64Win32ApiEntry>

externdef __imp_WriteEncryptedFileRaw:PPROC
WriteEncryptedFileRaw equ <__imp_WriteEncryptedFileRaw>
