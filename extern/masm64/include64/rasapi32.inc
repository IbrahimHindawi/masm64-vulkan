externdef __imp_DDMFreePhonebookContext:PPROC
DDMFreePhonebookContext equ <__imp_DDMFreePhonebookContext>

externdef __imp_DDMGetPhonebookInfo:PPROC
DDMGetPhonebookInfo equ <__imp_DDMGetPhonebookInfo>

externdef __imp_DwCloneEntry:PPROC
DwCloneEntry equ <__imp_DwCloneEntry>

externdef __imp_DwDeleteSubEntry:PPROC
DwDeleteSubEntry equ <__imp_DwDeleteSubEntry>

externdef __imp_DwEnumEntriesForAllUsers:PPROC
DwEnumEntriesForAllUsers equ <__imp_DwEnumEntriesForAllUsers>

externdef __imp_DwEnumEntryDetails:PPROC
DwEnumEntryDetails equ <__imp_DwEnumEntryDetails>

externdef __imp_DwRasUninitialize:PPROC
DwRasUninitialize equ <__imp_DwRasUninitialize>

externdef __imp_RasAutoDialSharedConnection:PPROC
RasAutoDialSharedConnection equ <__imp_RasAutoDialSharedConnection>

externdef __imp_RasAutodialAddressToNetwork:PPROC
RasAutodialAddressToNetwork equ <__imp_RasAutodialAddressToNetwork>

externdef __imp_RasAutodialEntryToNetwork:PPROC
RasAutodialEntryToNetwork equ <__imp_RasAutodialEntryToNetwork>

externdef __imp_RasClearConnectionStatistics:PPROC
RasClearConnectionStatistics equ <__imp_RasClearConnectionStatistics>

externdef __imp_RasClearLinkStatistics:PPROC
RasClearLinkStatistics equ <__imp_RasClearLinkStatistics>

externdef __imp_RasConnectionNotificationA:PPROC
RasConnectionNotificationA equ <__imp_RasConnectionNotificationA>
  IFNDEF __UNICODE__
    RasConnectionNotification equ <__imp_RasConnectionNotificationA>
  ENDIF

externdef __imp_RasConnectionNotificationW:PPROC
RasConnectionNotificationW equ <__imp_RasConnectionNotificationW>
  IFDEF __UNICODE__
    RasConnectionNotification equ <__imp_RasConnectionNotificationW>
  ENDIF

externdef __imp_RasCreatePhonebookEntryA:PPROC
RasCreatePhonebookEntryA equ <__imp_RasCreatePhonebookEntryA>
  IFNDEF __UNICODE__
    RasCreatePhonebookEntry equ <__imp_RasCreatePhonebookEntryA>
  ENDIF

externdef __imp_RasCreatePhonebookEntryW:PPROC
RasCreatePhonebookEntryW equ <__imp_RasCreatePhonebookEntryW>
  IFDEF __UNICODE__
    RasCreatePhonebookEntry equ <__imp_RasCreatePhonebookEntryW>
  ENDIF

externdef __imp_RasDeleteEntryA:PPROC
RasDeleteEntryA equ <__imp_RasDeleteEntryA>
  IFNDEF __UNICODE__
    RasDeleteEntry equ <__imp_RasDeleteEntryA>
  ENDIF

externdef __imp_RasDeleteEntryW:PPROC
RasDeleteEntryW equ <__imp_RasDeleteEntryW>
  IFDEF __UNICODE__
    RasDeleteEntry equ <__imp_RasDeleteEntryW>
  ENDIF

externdef __imp_RasDeleteSubEntryA:PPROC
RasDeleteSubEntryA equ <__imp_RasDeleteSubEntryA>
  IFNDEF __UNICODE__
    RasDeleteSubEntry equ <__imp_RasDeleteSubEntryA>
  ENDIF

externdef __imp_RasDeleteSubEntryW:PPROC
RasDeleteSubEntryW equ <__imp_RasDeleteSubEntryW>
  IFDEF __UNICODE__
    RasDeleteSubEntry equ <__imp_RasDeleteSubEntryW>
  ENDIF

externdef __imp_RasDialA:PPROC
RasDialA equ <__imp_RasDialA>
  IFNDEF __UNICODE__
    RasDial equ <__imp_RasDialA>
  ENDIF

externdef __imp_RasDialW:PPROC
RasDialW equ <__imp_RasDialW>
  IFDEF __UNICODE__
    RasDial equ <__imp_RasDialW>
  ENDIF

externdef __imp_RasDialWow:PPROC
RasDialWow equ <__imp_RasDialWow>

externdef __imp_RasEditPhonebookEntryA:PPROC
RasEditPhonebookEntryA equ <__imp_RasEditPhonebookEntryA>
  IFNDEF __UNICODE__
    RasEditPhonebookEntry equ <__imp_RasEditPhonebookEntryA>
  ENDIF

externdef __imp_RasEditPhonebookEntryW:PPROC
RasEditPhonebookEntryW equ <__imp_RasEditPhonebookEntryW>
  IFDEF __UNICODE__
    RasEditPhonebookEntry equ <__imp_RasEditPhonebookEntryW>
  ENDIF

externdef __imp_RasEnumAutodialAddressesA:PPROC
RasEnumAutodialAddressesA equ <__imp_RasEnumAutodialAddressesA>
  IFNDEF __UNICODE__
    RasEnumAutodialAddresses equ <__imp_RasEnumAutodialAddressesA>
  ENDIF

externdef __imp_RasEnumAutodialAddressesW:PPROC
RasEnumAutodialAddressesW equ <__imp_RasEnumAutodialAddressesW>
  IFDEF __UNICODE__
    RasEnumAutodialAddresses equ <__imp_RasEnumAutodialAddressesW>
  ENDIF

externdef __imp_RasEnumConnectionsA:PPROC
RasEnumConnectionsA equ <__imp_RasEnumConnectionsA>
  IFNDEF __UNICODE__
    RasEnumConnections equ <__imp_RasEnumConnectionsA>
  ENDIF

externdef __imp_RasEnumConnectionsW:PPROC
RasEnumConnectionsW equ <__imp_RasEnumConnectionsW>
  IFDEF __UNICODE__
    RasEnumConnections equ <__imp_RasEnumConnectionsW>
  ENDIF

externdef __imp_RasEnumConnectionsWow:PPROC
RasEnumConnectionsWow equ <__imp_RasEnumConnectionsWow>

externdef __imp_RasEnumDevicesA:PPROC
RasEnumDevicesA equ <__imp_RasEnumDevicesA>
  IFNDEF __UNICODE__
    RasEnumDevices equ <__imp_RasEnumDevicesA>
  ENDIF

externdef __imp_RasEnumDevicesW:PPROC
RasEnumDevicesW equ <__imp_RasEnumDevicesW>
  IFDEF __UNICODE__
    RasEnumDevices equ <__imp_RasEnumDevicesW>
  ENDIF

externdef __imp_RasEnumEntriesA:PPROC
RasEnumEntriesA equ <__imp_RasEnumEntriesA>
  IFNDEF __UNICODE__
    RasEnumEntries equ <__imp_RasEnumEntriesA>
  ENDIF

externdef __imp_RasEnumEntriesW:PPROC
RasEnumEntriesW equ <__imp_RasEnumEntriesW>
  IFDEF __UNICODE__
    RasEnumEntries equ <__imp_RasEnumEntriesW>
  ENDIF

externdef __imp_RasEnumEntriesWow:PPROC
RasEnumEntriesWow equ <__imp_RasEnumEntriesWow>

externdef __imp_RasFreeEapUserIdentityA:PPROC
RasFreeEapUserIdentityA equ <__imp_RasFreeEapUserIdentityA>
  IFNDEF __UNICODE__
    RasFreeEapUserIdentity equ <__imp_RasFreeEapUserIdentityA>
  ENDIF

externdef __imp_RasFreeEapUserIdentityW:PPROC
RasFreeEapUserIdentityW equ <__imp_RasFreeEapUserIdentityW>
  IFDEF __UNICODE__
    RasFreeEapUserIdentity equ <__imp_RasFreeEapUserIdentityW>
  ENDIF

externdef __imp_RasGetAutodialAddressA:PPROC
RasGetAutodialAddressA equ <__imp_RasGetAutodialAddressA>
  IFNDEF __UNICODE__
    RasGetAutodialAddress equ <__imp_RasGetAutodialAddressA>
  ENDIF

externdef __imp_RasGetAutodialAddressW:PPROC
RasGetAutodialAddressW equ <__imp_RasGetAutodialAddressW>
  IFDEF __UNICODE__
    RasGetAutodialAddress equ <__imp_RasGetAutodialAddressW>
  ENDIF

externdef __imp_RasGetAutodialEnableA:PPROC
RasGetAutodialEnableA equ <__imp_RasGetAutodialEnableA>
  IFNDEF __UNICODE__
    RasGetAutodialEnable equ <__imp_RasGetAutodialEnableA>
  ENDIF

externdef __imp_RasGetAutodialEnableW:PPROC
RasGetAutodialEnableW equ <__imp_RasGetAutodialEnableW>
  IFDEF __UNICODE__
    RasGetAutodialEnable equ <__imp_RasGetAutodialEnableW>
  ENDIF

externdef __imp_RasGetAutodialParamA:PPROC
RasGetAutodialParamA equ <__imp_RasGetAutodialParamA>
  IFNDEF __UNICODE__
    RasGetAutodialParam equ <__imp_RasGetAutodialParamA>
  ENDIF

externdef __imp_RasGetAutodialParamW:PPROC
RasGetAutodialParamW equ <__imp_RasGetAutodialParamW>
  IFDEF __UNICODE__
    RasGetAutodialParam equ <__imp_RasGetAutodialParamW>
  ENDIF

externdef __imp_RasGetConnectResponse:PPROC
RasGetConnectResponse equ <__imp_RasGetConnectResponse>

externdef __imp_RasGetConnectStatusA:PPROC
RasGetConnectStatusA equ <__imp_RasGetConnectStatusA>
  IFNDEF __UNICODE__
    RasGetConnectStatus equ <__imp_RasGetConnectStatusA>
  ENDIF

externdef __imp_RasGetConnectStatusW:PPROC
RasGetConnectStatusW equ <__imp_RasGetConnectStatusW>
  IFDEF __UNICODE__
    RasGetConnectStatus equ <__imp_RasGetConnectStatusW>
  ENDIF

externdef __imp_RasGetConnectStatusWow:PPROC
RasGetConnectStatusWow equ <__imp_RasGetConnectStatusWow>

externdef __imp_RasGetConnectionStatistics:PPROC
RasGetConnectionStatistics equ <__imp_RasGetConnectionStatistics>

externdef __imp_RasGetCountryInfoA:PPROC
RasGetCountryInfoA equ <__imp_RasGetCountryInfoA>
  IFNDEF __UNICODE__
    RasGetCountryInfo equ <__imp_RasGetCountryInfoA>
  ENDIF

externdef __imp_RasGetCountryInfoW:PPROC
RasGetCountryInfoW equ <__imp_RasGetCountryInfoW>
  IFDEF __UNICODE__
    RasGetCountryInfo equ <__imp_RasGetCountryInfoW>
  ENDIF

externdef __imp_RasGetCredentialsA:PPROC
RasGetCredentialsA equ <__imp_RasGetCredentialsA>
  IFNDEF __UNICODE__
    RasGetCredentials equ <__imp_RasGetCredentialsA>
  ENDIF

externdef __imp_RasGetCredentialsW:PPROC
RasGetCredentialsW equ <__imp_RasGetCredentialsW>
  IFDEF __UNICODE__
    RasGetCredentials equ <__imp_RasGetCredentialsW>
  ENDIF

externdef __imp_RasGetCustomAuthDataA:PPROC
RasGetCustomAuthDataA equ <__imp_RasGetCustomAuthDataA>
  IFNDEF __UNICODE__
    RasGetCustomAuthData equ <__imp_RasGetCustomAuthDataA>
  ENDIF

externdef __imp_RasGetCustomAuthDataW:PPROC
RasGetCustomAuthDataW equ <__imp_RasGetCustomAuthDataW>
  IFDEF __UNICODE__
    RasGetCustomAuthData equ <__imp_RasGetCustomAuthDataW>
  ENDIF

externdef __imp_RasGetEapUserDataA:PPROC
RasGetEapUserDataA equ <__imp_RasGetEapUserDataA>
  IFNDEF __UNICODE__
    RasGetEapUserData equ <__imp_RasGetEapUserDataA>
  ENDIF

externdef __imp_RasGetEapUserDataW:PPROC
RasGetEapUserDataW equ <__imp_RasGetEapUserDataW>
  IFDEF __UNICODE__
    RasGetEapUserData equ <__imp_RasGetEapUserDataW>
  ENDIF

externdef __imp_RasGetEapUserIdentityA:PPROC
RasGetEapUserIdentityA equ <__imp_RasGetEapUserIdentityA>
  IFNDEF __UNICODE__
    RasGetEapUserIdentity equ <__imp_RasGetEapUserIdentityA>
  ENDIF

externdef __imp_RasGetEapUserIdentityW:PPROC
RasGetEapUserIdentityW equ <__imp_RasGetEapUserIdentityW>
  IFDEF __UNICODE__
    RasGetEapUserIdentity equ <__imp_RasGetEapUserIdentityW>
  ENDIF

externdef __imp_RasGetEntryDialParamsA:PPROC
RasGetEntryDialParamsA equ <__imp_RasGetEntryDialParamsA>
  IFNDEF __UNICODE__
    RasGetEntryDialParams equ <__imp_RasGetEntryDialParamsA>
  ENDIF

externdef __imp_RasGetEntryDialParamsW:PPROC
RasGetEntryDialParamsW equ <__imp_RasGetEntryDialParamsW>
  IFDEF __UNICODE__
    RasGetEntryDialParams equ <__imp_RasGetEntryDialParamsW>
  ENDIF

externdef __imp_RasGetEntryHrasconnA:PPROC
RasGetEntryHrasconnA equ <__imp_RasGetEntryHrasconnA>
  IFNDEF __UNICODE__
    RasGetEntryHrasconn equ <__imp_RasGetEntryHrasconnA>
  ENDIF

externdef __imp_RasGetEntryHrasconnW:PPROC
RasGetEntryHrasconnW equ <__imp_RasGetEntryHrasconnW>
  IFDEF __UNICODE__
    RasGetEntryHrasconn equ <__imp_RasGetEntryHrasconnW>
  ENDIF

externdef __imp_RasGetEntryPropertiesA:PPROC
RasGetEntryPropertiesA equ <__imp_RasGetEntryPropertiesA>
  IFNDEF __UNICODE__
    RasGetEntryProperties equ <__imp_RasGetEntryPropertiesA>
  ENDIF

externdef __imp_RasGetEntryPropertiesW:PPROC
RasGetEntryPropertiesW equ <__imp_RasGetEntryPropertiesW>
  IFDEF __UNICODE__
    RasGetEntryProperties equ <__imp_RasGetEntryPropertiesW>
  ENDIF

externdef __imp_RasGetErrorStringA:PPROC
RasGetErrorStringA equ <__imp_RasGetErrorStringA>
  IFNDEF __UNICODE__
    RasGetErrorString equ <__imp_RasGetErrorStringA>
  ENDIF

externdef __imp_RasGetErrorStringW:PPROC
RasGetErrorStringW equ <__imp_RasGetErrorStringW>
  IFDEF __UNICODE__
    RasGetErrorString equ <__imp_RasGetErrorStringW>
  ENDIF

externdef __imp_RasGetErrorStringWow:PPROC
RasGetErrorStringWow equ <__imp_RasGetErrorStringWow>

externdef __imp_RasGetHport:PPROC
RasGetHport equ <__imp_RasGetHport>

externdef __imp_RasGetLinkStatistics:PPROC
RasGetLinkStatistics equ <__imp_RasGetLinkStatistics>

externdef __imp_RasGetProjectionInfoA:PPROC
RasGetProjectionInfoA equ <__imp_RasGetProjectionInfoA>
  IFNDEF __UNICODE__
    RasGetProjectionInfo equ <__imp_RasGetProjectionInfoA>
  ENDIF

externdef __imp_RasGetProjectionInfoW:PPROC
RasGetProjectionInfoW equ <__imp_RasGetProjectionInfoW>
  IFDEF __UNICODE__
    RasGetProjectionInfo equ <__imp_RasGetProjectionInfoW>
  ENDIF

externdef __imp_RasGetSubEntryHandleA:PPROC
RasGetSubEntryHandleA equ <__imp_RasGetSubEntryHandleA>
  IFNDEF __UNICODE__
    RasGetSubEntryHandle equ <__imp_RasGetSubEntryHandleA>
  ENDIF

externdef __imp_RasGetSubEntryHandleW:PPROC
RasGetSubEntryHandleW equ <__imp_RasGetSubEntryHandleW>
  IFDEF __UNICODE__
    RasGetSubEntryHandle equ <__imp_RasGetSubEntryHandleW>
  ENDIF

externdef __imp_RasGetSubEntryPropertiesA:PPROC
RasGetSubEntryPropertiesA equ <__imp_RasGetSubEntryPropertiesA>
  IFNDEF __UNICODE__
    RasGetSubEntryProperties equ <__imp_RasGetSubEntryPropertiesA>
  ENDIF

externdef __imp_RasGetSubEntryPropertiesW:PPROC
RasGetSubEntryPropertiesW equ <__imp_RasGetSubEntryPropertiesW>
  IFDEF __UNICODE__
    RasGetSubEntryProperties equ <__imp_RasGetSubEntryPropertiesW>
  ENDIF

externdef __imp_RasHangUpA:PPROC
RasHangUpA equ <__imp_RasHangUpA>
  IFNDEF __UNICODE__
    RasHangUp equ <__imp_RasHangUpA>
  ENDIF

externdef __imp_RasHangUpW:PPROC
RasHangUpW equ <__imp_RasHangUpW>
  IFDEF __UNICODE__
    RasHangUp equ <__imp_RasHangUpW>
  ENDIF

externdef __imp_RasHangUpWow:PPROC
RasHangUpWow equ <__imp_RasHangUpWow>

externdef __imp_RasInvokeEapUI:PPROC
RasInvokeEapUI equ <__imp_RasInvokeEapUI>

externdef __imp_RasIsRouterConnection:PPROC
RasIsRouterConnection equ <__imp_RasIsRouterConnection>

externdef __imp_RasIsSharedConnection:PPROC
RasIsSharedConnection equ <__imp_RasIsSharedConnection>

externdef __imp_RasQueryRedialOnLinkFailure:PPROC
RasQueryRedialOnLinkFailure equ <__imp_RasQueryRedialOnLinkFailure>

externdef __imp_RasQuerySharedAutoDial:PPROC
RasQuerySharedAutoDial equ <__imp_RasQuerySharedAutoDial>

externdef __imp_RasQuerySharedConnection:PPROC
RasQuerySharedConnection equ <__imp_RasQuerySharedConnection>

externdef __imp_RasRenameEntryA:PPROC
RasRenameEntryA equ <__imp_RasRenameEntryA>
  IFNDEF __UNICODE__
    RasRenameEntry equ <__imp_RasRenameEntryA>
  ENDIF

externdef __imp_RasRenameEntryW:PPROC
RasRenameEntryW equ <__imp_RasRenameEntryW>
  IFDEF __UNICODE__
    RasRenameEntry equ <__imp_RasRenameEntryW>
  ENDIF

externdef __imp_RasScriptExecute:PPROC
RasScriptExecute equ <__imp_RasScriptExecute>

externdef __imp_RasScriptGetEventCode:PPROC
RasScriptGetEventCode equ <__imp_RasScriptGetEventCode>

externdef __imp_RasScriptGetIpAddress:PPROC
RasScriptGetIpAddress equ <__imp_RasScriptGetIpAddress>

externdef __imp_RasScriptInit:PPROC
RasScriptInit equ <__imp_RasScriptInit>

externdef __imp_RasScriptReceive:PPROC
RasScriptReceive equ <__imp_RasScriptReceive>

externdef __imp_RasScriptSend:PPROC
RasScriptSend equ <__imp_RasScriptSend>

externdef __imp_RasScriptTerm:PPROC
RasScriptTerm equ <__imp_RasScriptTerm>

externdef __imp_RasSetAutodialAddressA:PPROC
RasSetAutodialAddressA equ <__imp_RasSetAutodialAddressA>
  IFNDEF __UNICODE__
    RasSetAutodialAddress equ <__imp_RasSetAutodialAddressA>
  ENDIF

externdef __imp_RasSetAutodialAddressW:PPROC
RasSetAutodialAddressW equ <__imp_RasSetAutodialAddressW>
  IFDEF __UNICODE__
    RasSetAutodialAddress equ <__imp_RasSetAutodialAddressW>
  ENDIF

externdef __imp_RasSetAutodialEnableA:PPROC
RasSetAutodialEnableA equ <__imp_RasSetAutodialEnableA>
  IFNDEF __UNICODE__
    RasSetAutodialEnable equ <__imp_RasSetAutodialEnableA>
  ENDIF

externdef __imp_RasSetAutodialEnableW:PPROC
RasSetAutodialEnableW equ <__imp_RasSetAutodialEnableW>
  IFDEF __UNICODE__
    RasSetAutodialEnable equ <__imp_RasSetAutodialEnableW>
  ENDIF

externdef __imp_RasSetAutodialParamA:PPROC
RasSetAutodialParamA equ <__imp_RasSetAutodialParamA>
  IFNDEF __UNICODE__
    RasSetAutodialParam equ <__imp_RasSetAutodialParamA>
  ENDIF

externdef __imp_RasSetAutodialParamW:PPROC
RasSetAutodialParamW equ <__imp_RasSetAutodialParamW>
  IFDEF __UNICODE__
    RasSetAutodialParam equ <__imp_RasSetAutodialParamW>
  ENDIF

externdef __imp_RasSetCredentialsA:PPROC
RasSetCredentialsA equ <__imp_RasSetCredentialsA>
  IFNDEF __UNICODE__
    RasSetCredentials equ <__imp_RasSetCredentialsA>
  ENDIF

externdef __imp_RasSetCredentialsW:PPROC
RasSetCredentialsW equ <__imp_RasSetCredentialsW>
  IFDEF __UNICODE__
    RasSetCredentials equ <__imp_RasSetCredentialsW>
  ENDIF

externdef __imp_RasSetCustomAuthDataA:PPROC
RasSetCustomAuthDataA equ <__imp_RasSetCustomAuthDataA>
  IFNDEF __UNICODE__
    RasSetCustomAuthData equ <__imp_RasSetCustomAuthDataA>
  ENDIF

externdef __imp_RasSetCustomAuthDataW:PPROC
RasSetCustomAuthDataW equ <__imp_RasSetCustomAuthDataW>
  IFDEF __UNICODE__
    RasSetCustomAuthData equ <__imp_RasSetCustomAuthDataW>
  ENDIF

externdef __imp_RasSetEapUserDataA:PPROC
RasSetEapUserDataA equ <__imp_RasSetEapUserDataA>
  IFNDEF __UNICODE__
    RasSetEapUserData equ <__imp_RasSetEapUserDataA>
  ENDIF

externdef __imp_RasSetEapUserDataW:PPROC
RasSetEapUserDataW equ <__imp_RasSetEapUserDataW>
  IFDEF __UNICODE__
    RasSetEapUserData equ <__imp_RasSetEapUserDataW>
  ENDIF

externdef __imp_RasSetEntryDialParamsA:PPROC
RasSetEntryDialParamsA equ <__imp_RasSetEntryDialParamsA>
  IFNDEF __UNICODE__
    RasSetEntryDialParams equ <__imp_RasSetEntryDialParamsA>
  ENDIF

externdef __imp_RasSetEntryDialParamsW:PPROC
RasSetEntryDialParamsW equ <__imp_RasSetEntryDialParamsW>
  IFDEF __UNICODE__
    RasSetEntryDialParams equ <__imp_RasSetEntryDialParamsW>
  ENDIF

externdef __imp_RasSetEntryPropertiesA:PPROC
RasSetEntryPropertiesA equ <__imp_RasSetEntryPropertiesA>
  IFNDEF __UNICODE__
    RasSetEntryProperties equ <__imp_RasSetEntryPropertiesA>
  ENDIF

externdef __imp_RasSetEntryPropertiesW:PPROC
RasSetEntryPropertiesW equ <__imp_RasSetEntryPropertiesW>
  IFDEF __UNICODE__
    RasSetEntryProperties equ <__imp_RasSetEntryPropertiesW>
  ENDIF

externdef __imp_RasSetOldPassword:PPROC
RasSetOldPassword equ <__imp_RasSetOldPassword>

externdef __imp_RasSetSharedAutoDial:PPROC
RasSetSharedAutoDial equ <__imp_RasSetSharedAutoDial>

externdef __imp_RasSetSubEntryPropertiesA:PPROC
RasSetSubEntryPropertiesA equ <__imp_RasSetSubEntryPropertiesA>
  IFNDEF __UNICODE__
    RasSetSubEntryProperties equ <__imp_RasSetSubEntryPropertiesA>
  ENDIF

externdef __imp_RasSetSubEntryPropertiesW:PPROC
RasSetSubEntryPropertiesW equ <__imp_RasSetSubEntryPropertiesW>
  IFDEF __UNICODE__
    RasSetSubEntryProperties equ <__imp_RasSetSubEntryPropertiesW>
  ENDIF

externdef __imp_RasValidateEntryNameA:PPROC
RasValidateEntryNameA equ <__imp_RasValidateEntryNameA>
  IFNDEF __UNICODE__
    RasValidateEntryName equ <__imp_RasValidateEntryNameA>
  ENDIF

externdef __imp_RasValidateEntryNameW:PPROC
RasValidateEntryNameW equ <__imp_RasValidateEntryNameW>
  IFDEF __UNICODE__
    RasValidateEntryName equ <__imp_RasValidateEntryNameW>
  ENDIF

externdef __imp_RasfileClose:PPROC
RasfileClose equ <__imp_RasfileClose>

externdef __imp_RasfileDeleteLine:PPROC
RasfileDeleteLine equ <__imp_RasfileDeleteLine>

externdef __imp_RasfileFindFirstLine:PPROC
RasfileFindFirstLine equ <__imp_RasfileFindFirstLine>

externdef __imp_RasfileFindLastLine:PPROC
RasfileFindLastLine equ <__imp_RasfileFindLastLine>

externdef __imp_RasfileFindMarkedLine:PPROC
RasfileFindMarkedLine equ <__imp_RasfileFindMarkedLine>

externdef __imp_RasfileFindNextKeyLine:PPROC
RasfileFindNextKeyLine equ <__imp_RasfileFindNextKeyLine>

externdef __imp_RasfileFindNextLine:PPROC
RasfileFindNextLine equ <__imp_RasfileFindNextLine>

externdef __imp_RasfileFindPrevLine:PPROC
RasfileFindPrevLine equ <__imp_RasfileFindPrevLine>

externdef __imp_RasfileFindSectionLine:PPROC
RasfileFindSectionLine equ <__imp_RasfileFindSectionLine>

externdef __imp_RasfileGetKeyValueFields:PPROC
RasfileGetKeyValueFields equ <__imp_RasfileGetKeyValueFields>

externdef __imp_RasfileGetLine:PPROC
RasfileGetLine equ <__imp_RasfileGetLine>

externdef __imp_RasfileGetLineMark:PPROC
RasfileGetLineMark equ <__imp_RasfileGetLineMark>

externdef __imp_RasfileGetLineText:PPROC
RasfileGetLineText equ <__imp_RasfileGetLineText>

externdef __imp_RasfileGetLineType:PPROC
RasfileGetLineType equ <__imp_RasfileGetLineType>

externdef __imp_RasfileGetSectionName:PPROC
RasfileGetSectionName equ <__imp_RasfileGetSectionName>

externdef __imp_RasfileInsertLine:PPROC
RasfileInsertLine equ <__imp_RasfileInsertLine>

externdef __imp_RasfileLoad:PPROC
RasfileLoad equ <__imp_RasfileLoad>

externdef __imp_RasfileLoadEx:PPROC
RasfileLoadEx equ <__imp_RasfileLoadEx>

externdef __imp_RasfileLoadInfo:PPROC
RasfileLoadInfo equ <__imp_RasfileLoadInfo>

externdef __imp_RasfilePutKeyValueFields:PPROC
RasfilePutKeyValueFields equ <__imp_RasfilePutKeyValueFields>

externdef __imp_RasfilePutLineMark:PPROC
RasfilePutLineMark equ <__imp_RasfilePutLineMark>

externdef __imp_RasfilePutLineText:PPROC
RasfilePutLineText equ <__imp_RasfilePutLineText>

externdef __imp_RasfilePutSectionName:PPROC
RasfilePutSectionName equ <__imp_RasfilePutSectionName>

externdef __imp_RasfileWrite:PPROC
RasfileWrite equ <__imp_RasfileWrite>

externdef __imp_SharedAccessResponseListToString:PPROC
SharedAccessResponseListToString equ <__imp_SharedAccessResponseListToString>

externdef __imp_SharedAccessResponseStringToList:PPROC
SharedAccessResponseStringToList equ <__imp_SharedAccessResponseStringToList>

externdef __imp_UnInitializeRAS:PPROC
UnInitializeRAS equ <__imp_UnInitializeRAS>
