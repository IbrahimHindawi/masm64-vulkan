externdef __imp_GetDomainName:PPROC
GetDomainName equ <__imp_GetDomainName>

externdef __imp_QueryUserProperty:PPROC
QueryUserProperty equ <__imp_QueryUserProperty>

externdef __imp_RegBuildNumberQuery:PPROC
RegBuildNumberQuery equ <__imp_RegBuildNumberQuery>

externdef __imp_RegCdCreateA:PPROC
RegCdCreateA equ <__imp_RegCdCreateA>
  IFNDEF __UNICODE__
    RegCdCreate equ <__imp_RegCdCreateA>
  ENDIF

externdef __imp_RegCdCreateW:PPROC
RegCdCreateW equ <__imp_RegCdCreateW>
  IFDEF __UNICODE__
    RegCdCreate equ <__imp_RegCdCreateW>
  ENDIF

externdef __imp_RegCdDeleteA:PPROC
RegCdDeleteA equ <__imp_RegCdDeleteA>
  IFNDEF __UNICODE__
    RegCdDelete equ <__imp_RegCdDeleteA>
  ENDIF

externdef __imp_RegCdDeleteW:PPROC
RegCdDeleteW equ <__imp_RegCdDeleteW>
  IFDEF __UNICODE__
    RegCdDelete equ <__imp_RegCdDeleteW>
  ENDIF

externdef __imp_RegCdEnumerateA:PPROC
RegCdEnumerateA equ <__imp_RegCdEnumerateA>
  IFNDEF __UNICODE__
    RegCdEnumerate equ <__imp_RegCdEnumerateA>
  ENDIF

externdef __imp_RegCdEnumerateW:PPROC
RegCdEnumerateW equ <__imp_RegCdEnumerateW>
  IFDEF __UNICODE__
    RegCdEnumerate equ <__imp_RegCdEnumerateW>
  ENDIF

externdef __imp_RegCdQueryA:PPROC
RegCdQueryA equ <__imp_RegCdQueryA>
  IFNDEF __UNICODE__
    RegCdQuery equ <__imp_RegCdQueryA>
  ENDIF

externdef __imp_RegCdQueryW:PPROC
RegCdQueryW equ <__imp_RegCdQueryW>
  IFDEF __UNICODE__
    RegCdQuery equ <__imp_RegCdQueryW>
  ENDIF

externdef __imp_RegCloseServer:PPROC
RegCloseServer equ <__imp_RegCloseServer>

externdef __imp_RegConsoleShadowQueryA:PPROC
RegConsoleShadowQueryA equ <__imp_RegConsoleShadowQueryA>
  IFNDEF __UNICODE__
    RegConsoleShadowQuery equ <__imp_RegConsoleShadowQueryA>
  ENDIF

externdef __imp_RegConsoleShadowQueryW:PPROC
RegConsoleShadowQueryW equ <__imp_RegConsoleShadowQueryW>
  IFDEF __UNICODE__
    RegConsoleShadowQuery equ <__imp_RegConsoleShadowQueryW>
  ENDIF

externdef __imp_RegCreateUserConfigW:PPROC
RegCreateUserConfigW equ <__imp_RegCreateUserConfigW>
  IFDEF __UNICODE__
    RegCreateUserConfig equ <__imp_RegCreateUserConfigW>
  ENDIF

externdef __imp_RegDefaultUserConfigQueryA:PPROC
RegDefaultUserConfigQueryA equ <__imp_RegDefaultUserConfigQueryA>
  IFNDEF __UNICODE__
    RegDefaultUserConfigQuery equ <__imp_RegDefaultUserConfigQueryA>
  ENDIF

externdef __imp_RegDefaultUserConfigQueryW:PPROC
RegDefaultUserConfigQueryW equ <__imp_RegDefaultUserConfigQueryW>
  IFDEF __UNICODE__
    RegDefaultUserConfigQuery equ <__imp_RegDefaultUserConfigQueryW>
  ENDIF

externdef __imp_RegDenyTSConnectionsPolicy:PPROC
RegDenyTSConnectionsPolicy equ <__imp_RegDenyTSConnectionsPolicy>

externdef __imp_RegFreeUtilityCommandList:PPROC
RegFreeUtilityCommandList equ <__imp_RegFreeUtilityCommandList>

externdef __imp_RegGetLicensingModePolicy:PPROC
RegGetLicensingModePolicy equ <__imp_RegGetLicensingModePolicy>

externdef __imp_RegGetMachinePolicy:PPROC
RegGetMachinePolicy equ <__imp_RegGetMachinePolicy>

externdef __imp_RegGetMachinePolicyEx:PPROC
RegGetMachinePolicyEx equ <__imp_RegGetMachinePolicyEx>

externdef __imp_RegGetMachinePolicyNew:PPROC
RegGetMachinePolicyNew equ <__imp_RegGetMachinePolicyNew>

externdef __imp_RegGetTServerVersion:PPROC
RegGetTServerVersion equ <__imp_RegGetTServerVersion>

externdef __imp_RegGetUserConfigFromUserParameters:PPROC
RegGetUserConfigFromUserParameters equ <__imp_RegGetUserConfigFromUserParameters>

externdef __imp_RegGetUserPolicy:PPROC
RegGetUserPolicy equ <__imp_RegGetUserPolicy>

externdef __imp_RegIsMachineInHelpMode:PPROC
RegIsMachineInHelpMode equ <__imp_RegIsMachineInHelpMode>

externdef __imp_RegIsMachinePolicyAllowHelp:PPROC
RegIsMachinePolicyAllowHelp equ <__imp_RegIsMachinePolicyAllowHelp>

externdef __imp_RegIsTServer:PPROC
RegIsTServer equ <__imp_RegIsTServer>

externdef __imp_RegIsTimeZoneRedirectionEnabled:PPROC
RegIsTimeZoneRedirectionEnabled equ <__imp_RegIsTimeZoneRedirectionEnabled>

externdef __imp_RegMergeUserConfigWithUserParameters:PPROC
RegMergeUserConfigWithUserParameters equ <__imp_RegMergeUserConfigWithUserParameters>

externdef __imp_RegOpenServerA:PPROC
RegOpenServerA equ <__imp_RegOpenServerA>
  IFNDEF __UNICODE__
    RegOpenServer equ <__imp_RegOpenServerA>
  ENDIF

externdef __imp_RegOpenServerW:PPROC
RegOpenServerW equ <__imp_RegOpenServerW>
  IFDEF __UNICODE__
    RegOpenServer equ <__imp_RegOpenServerW>
  ENDIF

externdef __imp_RegPdCreateA:PPROC
RegPdCreateA equ <__imp_RegPdCreateA>
  IFNDEF __UNICODE__
    RegPdCreate equ <__imp_RegPdCreateA>
  ENDIF

externdef __imp_RegPdCreateW:PPROC
RegPdCreateW equ <__imp_RegPdCreateW>
  IFDEF __UNICODE__
    RegPdCreate equ <__imp_RegPdCreateW>
  ENDIF

externdef __imp_RegPdDeleteA:PPROC
RegPdDeleteA equ <__imp_RegPdDeleteA>
  IFNDEF __UNICODE__
    RegPdDelete equ <__imp_RegPdDeleteA>
  ENDIF

externdef __imp_RegPdDeleteW:PPROC
RegPdDeleteW equ <__imp_RegPdDeleteW>
  IFDEF __UNICODE__
    RegPdDelete equ <__imp_RegPdDeleteW>
  ENDIF

externdef __imp_RegPdEnumerateA:PPROC
RegPdEnumerateA equ <__imp_RegPdEnumerateA>
  IFNDEF __UNICODE__
    RegPdEnumerate equ <__imp_RegPdEnumerateA>
  ENDIF

externdef __imp_RegPdEnumerateW:PPROC
RegPdEnumerateW equ <__imp_RegPdEnumerateW>
  IFDEF __UNICODE__
    RegPdEnumerate equ <__imp_RegPdEnumerateW>
  ENDIF

externdef __imp_RegPdQueryA:PPROC
RegPdQueryA equ <__imp_RegPdQueryA>
  IFNDEF __UNICODE__
    RegPdQuery equ <__imp_RegPdQueryA>
  ENDIF

externdef __imp_RegPdQueryW:PPROC
RegPdQueryW equ <__imp_RegPdQueryW>
  IFDEF __UNICODE__
    RegPdQuery equ <__imp_RegPdQueryW>
  ENDIF

externdef __imp_RegQueryOEMId:PPROC
RegQueryOEMId equ <__imp_RegQueryOEMId>

externdef __imp_RegQueryUtilityCommandList:PPROC
RegQueryUtilityCommandList equ <__imp_RegQueryUtilityCommandList>

externdef __imp_RegSAMUserConfig:PPROC
RegSAMUserConfig equ <__imp_RegSAMUserConfig>

externdef __imp_RegUserConfigDelete:PPROC
RegUserConfigDelete equ <__imp_RegUserConfigDelete>

externdef __imp_RegUserConfigQuery:PPROC
RegUserConfigQuery equ <__imp_RegUserConfigQuery>

externdef __imp_RegUserConfigRename:PPROC
RegUserConfigRename equ <__imp_RegUserConfigRename>

externdef __imp_RegUserConfigSet:PPROC
RegUserConfigSet equ <__imp_RegUserConfigSet>

externdef __imp_RegWdCreateA:PPROC
RegWdCreateA equ <__imp_RegWdCreateA>
  IFNDEF __UNICODE__
    RegWdCreate equ <__imp_RegWdCreateA>
  ENDIF

externdef __imp_RegWdCreateW:PPROC
RegWdCreateW equ <__imp_RegWdCreateW>
  IFDEF __UNICODE__
    RegWdCreate equ <__imp_RegWdCreateW>
  ENDIF

externdef __imp_RegWdDeleteA:PPROC
RegWdDeleteA equ <__imp_RegWdDeleteA>
  IFNDEF __UNICODE__
    RegWdDelete equ <__imp_RegWdDeleteA>
  ENDIF

externdef __imp_RegWdDeleteW:PPROC
RegWdDeleteW equ <__imp_RegWdDeleteW>
  IFDEF __UNICODE__
    RegWdDelete equ <__imp_RegWdDeleteW>
  ENDIF

externdef __imp_RegWdEnumerateA:PPROC
RegWdEnumerateA equ <__imp_RegWdEnumerateA>
  IFNDEF __UNICODE__
    RegWdEnumerate equ <__imp_RegWdEnumerateA>
  ENDIF

externdef __imp_RegWdEnumerateW:PPROC
RegWdEnumerateW equ <__imp_RegWdEnumerateW>
  IFDEF __UNICODE__
    RegWdEnumerate equ <__imp_RegWdEnumerateW>
  ENDIF

externdef __imp_RegWdQueryA:PPROC
RegWdQueryA equ <__imp_RegWdQueryA>
  IFNDEF __UNICODE__
    RegWdQuery equ <__imp_RegWdQueryA>
  ENDIF

externdef __imp_RegWdQueryW:PPROC
RegWdQueryW equ <__imp_RegWdQueryW>
  IFDEF __UNICODE__
    RegWdQuery equ <__imp_RegWdQueryW>
  ENDIF

externdef __imp_RegWinStationAccessCheck:PPROC
RegWinStationAccessCheck equ <__imp_RegWinStationAccessCheck>

externdef __imp_RegWinStationCreateA:PPROC
RegWinStationCreateA equ <__imp_RegWinStationCreateA>
  IFNDEF __UNICODE__
    RegWinStationCreate equ <__imp_RegWinStationCreateA>
  ENDIF

externdef __imp_RegWinStationCreateW:PPROC
RegWinStationCreateW equ <__imp_RegWinStationCreateW>
  IFDEF __UNICODE__
    RegWinStationCreate equ <__imp_RegWinStationCreateW>
  ENDIF

externdef __imp_RegWinStationDeleteA:PPROC
RegWinStationDeleteA equ <__imp_RegWinStationDeleteA>
  IFNDEF __UNICODE__
    RegWinStationDelete equ <__imp_RegWinStationDeleteA>
  ENDIF

externdef __imp_RegWinStationDeleteW:PPROC
RegWinStationDeleteW equ <__imp_RegWinStationDeleteW>
  IFDEF __UNICODE__
    RegWinStationDelete equ <__imp_RegWinStationDeleteW>
  ENDIF

externdef __imp_RegWinStationEnumerateA:PPROC
RegWinStationEnumerateA equ <__imp_RegWinStationEnumerateA>
  IFNDEF __UNICODE__
    RegWinStationEnumerate equ <__imp_RegWinStationEnumerateA>
  ENDIF

externdef __imp_RegWinStationEnumerateW:PPROC
RegWinStationEnumerateW equ <__imp_RegWinStationEnumerateW>
  IFDEF __UNICODE__
    RegWinStationEnumerate equ <__imp_RegWinStationEnumerateW>
  ENDIF

externdef __imp_RegWinStationQueryA:PPROC
RegWinStationQueryA equ <__imp_RegWinStationQueryA>
  IFNDEF __UNICODE__
    RegWinStationQuery equ <__imp_RegWinStationQueryA>
  ENDIF

externdef __imp_RegWinStationQueryDefaultSecurity:PPROC
RegWinStationQueryDefaultSecurity equ <__imp_RegWinStationQueryDefaultSecurity>

externdef __imp_RegWinStationQueryEx:PPROC
RegWinStationQueryEx equ <__imp_RegWinStationQueryEx>

externdef __imp_RegWinStationQueryExNew:PPROC
RegWinStationQueryExNew equ <__imp_RegWinStationQueryExNew>

externdef __imp_RegWinStationQueryNumValueW:PPROC
RegWinStationQueryNumValueW equ <__imp_RegWinStationQueryNumValueW>
  IFDEF __UNICODE__
    RegWinStationQueryNumValue equ <__imp_RegWinStationQueryNumValueW>
  ENDIF

externdef __imp_RegWinStationQuerySecurityA:PPROC
RegWinStationQuerySecurityA equ <__imp_RegWinStationQuerySecurityA>
  IFNDEF __UNICODE__
    RegWinStationQuerySecurity equ <__imp_RegWinStationQuerySecurityA>
  ENDIF

externdef __imp_RegWinStationQuerySecurityW:PPROC
RegWinStationQuerySecurityW equ <__imp_RegWinStationQuerySecurityW>
  IFDEF __UNICODE__
    RegWinStationQuerySecurity equ <__imp_RegWinStationQuerySecurityW>
  ENDIF

externdef __imp_RegWinStationQueryValueW:PPROC
RegWinStationQueryValueW equ <__imp_RegWinStationQueryValueW>
  IFDEF __UNICODE__
    RegWinStationQueryValue equ <__imp_RegWinStationQueryValueW>
  ENDIF

externdef __imp_RegWinStationQueryW:PPROC
RegWinStationQueryW equ <__imp_RegWinStationQueryW>
  IFDEF __UNICODE__
    RegWinStationQuery equ <__imp_RegWinStationQueryW>
  ENDIF

externdef __imp_RegWinStationSetNumValueW:PPROC
RegWinStationSetNumValueW equ <__imp_RegWinStationSetNumValueW>
  IFDEF __UNICODE__
    RegWinStationSetNumValue equ <__imp_RegWinStationSetNumValueW>
  ENDIF

externdef __imp_RegWinStationSetSecurityA:PPROC
RegWinStationSetSecurityA equ <__imp_RegWinStationSetSecurityA>
  IFNDEF __UNICODE__
    RegWinStationSetSecurity equ <__imp_RegWinStationSetSecurityA>
  ENDIF

externdef __imp_RegWinStationSetSecurityW:PPROC
RegWinStationSetSecurityW equ <__imp_RegWinStationSetSecurityW>
  IFDEF __UNICODE__
    RegWinStationSetSecurity equ <__imp_RegWinStationSetSecurityW>
  ENDIF

externdef __imp_RegWinstationQuerySecurityConfig_Machine:PPROC
RegWinstationQuerySecurityConfig_Machine equ <__imp_RegWinstationQuerySecurityConfig_Machine>

externdef __imp_RegWinstationQuerySecurityConfig_Merged:PPROC
RegWinstationQuerySecurityConfig_Merged equ <__imp_RegWinstationQuerySecurityConfig_Merged>

externdef __imp_RegWinstationSetSecurityConfig:PPROC
RegWinstationSetSecurityConfig equ <__imp_RegWinstationSetSecurityConfig>

externdef __imp_SetUserProperty:PPROC
SetUserProperty equ <__imp_SetUserProperty>

externdef __imp_UsrPropGetString:PPROC
UsrPropGetString equ <__imp_UsrPropGetString>

externdef __imp_UsrPropGetValue:PPROC
UsrPropGetValue equ <__imp_UsrPropGetValue>

externdef __imp_UsrPropSetString:PPROC
UsrPropSetString equ <__imp_UsrPropSetString>

externdef __imp_UsrPropSetValue:PPROC
UsrPropSetValue equ <__imp_UsrPropSetValue>

externdef __imp_WaitForTSConnectionsPolicyChanges:PPROC
WaitForTSConnectionsPolicyChanges equ <__imp_WaitForTSConnectionsPolicyChanges>
