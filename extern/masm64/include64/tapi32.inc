externdef __imp_GetTapi16CallbackMsg:PPROC
GetTapi16CallbackMsg equ <__imp_GetTapi16CallbackMsg>

externdef __imp_LAddrParamsInited:PPROC
LAddrParamsInited equ <__imp_LAddrParamsInited>

externdef __imp_LOpenDialAsst:PPROC
LOpenDialAsst equ <__imp_LOpenDialAsst>

externdef __imp_LocWizardDlgProc:PPROC
LocWizardDlgProc equ <__imp_LocWizardDlgProc>

externdef __imp_MMCAddProvider:PPROC
MMCAddProvider equ <__imp_MMCAddProvider>

externdef __imp_MMCConfigProvider:PPROC
MMCConfigProvider equ <__imp_MMCConfigProvider>

externdef __imp_MMCGetAvailableProviders:PPROC
MMCGetAvailableProviders equ <__imp_MMCGetAvailableProviders>

externdef __imp_MMCGetDeviceFlags:PPROC
MMCGetDeviceFlags equ <__imp_MMCGetDeviceFlags>

externdef __imp_MMCGetLineInfo:PPROC
MMCGetLineInfo equ <__imp_MMCGetLineInfo>

externdef __imp_MMCGetLineStatus:PPROC
MMCGetLineStatus equ <__imp_MMCGetLineStatus>

externdef __imp_MMCGetPhoneInfo:PPROC
MMCGetPhoneInfo equ <__imp_MMCGetPhoneInfo>

externdef __imp_MMCGetPhoneStatus:PPROC
MMCGetPhoneStatus equ <__imp_MMCGetPhoneStatus>

externdef __imp_MMCGetProviderList:PPROC
MMCGetProviderList equ <__imp_MMCGetProviderList>

externdef __imp_MMCGetServerConfig:PPROC
MMCGetServerConfig equ <__imp_MMCGetServerConfig>

externdef __imp_MMCInitialize:PPROC
MMCInitialize equ <__imp_MMCInitialize>

externdef __imp_MMCRemoveProvider:PPROC
MMCRemoveProvider equ <__imp_MMCRemoveProvider>

externdef __imp_MMCSetLineInfo:PPROC
MMCSetLineInfo equ <__imp_MMCSetLineInfo>

externdef __imp_MMCSetPhoneInfo:PPROC
MMCSetPhoneInfo equ <__imp_MMCSetPhoneInfo>

externdef __imp_MMCSetServerConfig:PPROC
MMCSetServerConfig equ <__imp_MMCSetServerConfig>

externdef __imp_MMCShutdown:PPROC
MMCShutdown equ <__imp_MMCShutdown>

externdef __imp_NonAsyncEventThread:PPROC
NonAsyncEventThread equ <__imp_NonAsyncEventThread>

externdef __imp_TAPIWndProc:PPROC
TAPIWndProc equ <__imp_TAPIWndProc>

externdef __imp_TUISPIDLLCallback:PPROC
TUISPIDLLCallback equ <__imp_TUISPIDLLCallback>

externdef __imp_internalConfig:PPROC
internalConfig equ <__imp_internalConfig>

externdef __imp_internalCreateDefLocation:PPROC
internalCreateDefLocation equ <__imp_internalCreateDefLocation>

externdef __imp_internalNewLocationW:PPROC
internalNewLocationW equ <__imp_internalNewLocationW>
  IFDEF __UNICODE__
    internalNewLocation equ <__imp_internalNewLocationW>
  ENDIF

externdef __imp_internalPerformance:PPROC
internalPerformance equ <__imp_internalPerformance>

externdef __imp_internalRemoveLocation:PPROC
internalRemoveLocation equ <__imp_internalRemoveLocation>

externdef __imp_internalRenameLocationW:PPROC
internalRenameLocationW equ <__imp_internalRenameLocationW>
  IFDEF __UNICODE__
    internalRenameLocation equ <__imp_internalRenameLocationW>
  ENDIF

externdef __imp_lineAccept:PPROC
lineAccept equ <__imp_lineAccept>

externdef __imp_lineAddProvider:PPROC
lineAddProvider equ <__imp_lineAddProvider>

externdef __imp_lineAddProviderA:PPROC
lineAddProviderA equ <__imp_lineAddProviderA>
  IFNDEF __UNICODE__
    lineAddProvider equ <__imp_lineAddProviderA>
  ENDIF

externdef __imp_lineAddProviderW:PPROC
lineAddProviderW equ <__imp_lineAddProviderW>
  IFDEF __UNICODE__
    lineAddProvider equ <__imp_lineAddProviderW>
  ENDIF

externdef __imp_lineAddToConference:PPROC
lineAddToConference equ <__imp_lineAddToConference>

externdef __imp_lineAgentSpecific:PPROC
lineAgentSpecific equ <__imp_lineAgentSpecific>

externdef __imp_lineAnswer:PPROC
lineAnswer equ <__imp_lineAnswer>

externdef __imp_lineBlindTransfer:PPROC
lineBlindTransfer equ <__imp_lineBlindTransfer>

externdef __imp_lineBlindTransferA:PPROC
lineBlindTransferA equ <__imp_lineBlindTransferA>
  IFNDEF __UNICODE__
    lineBlindTransfer equ <__imp_lineBlindTransferA>
  ENDIF

externdef __imp_lineBlindTransferW:PPROC
lineBlindTransferW equ <__imp_lineBlindTransferW>
  IFDEF __UNICODE__
    lineBlindTransfer equ <__imp_lineBlindTransferW>
  ENDIF

externdef __imp_lineClose:PPROC
lineClose equ <__imp_lineClose>

externdef __imp_lineCompleteCall:PPROC
lineCompleteCall equ <__imp_lineCompleteCall>

externdef __imp_lineCompleteTransfer:PPROC
lineCompleteTransfer equ <__imp_lineCompleteTransfer>

externdef __imp_lineConfigDialog:PPROC
lineConfigDialog equ <__imp_lineConfigDialog>

externdef __imp_lineConfigDialogA:PPROC
lineConfigDialogA equ <__imp_lineConfigDialogA>
  IFNDEF __UNICODE__
    lineConfigDialog equ <__imp_lineConfigDialogA>
  ENDIF

externdef __imp_lineConfigDialogEdit:PPROC
lineConfigDialogEdit equ <__imp_lineConfigDialogEdit>

externdef __imp_lineConfigDialogEditA:PPROC
lineConfigDialogEditA equ <__imp_lineConfigDialogEditA>
  IFNDEF __UNICODE__
    lineConfigDialogEdit equ <__imp_lineConfigDialogEditA>
  ENDIF

externdef __imp_lineConfigDialogEditW:PPROC
lineConfigDialogEditW equ <__imp_lineConfigDialogEditW>
  IFDEF __UNICODE__
    lineConfigDialogEdit equ <__imp_lineConfigDialogEditW>
  ENDIF

externdef __imp_lineConfigDialogW:PPROC
lineConfigDialogW equ <__imp_lineConfigDialogW>
  IFDEF __UNICODE__
    lineConfigDialog equ <__imp_lineConfigDialogW>
  ENDIF

externdef __imp_lineConfigProvider:PPROC
lineConfigProvider equ <__imp_lineConfigProvider>

externdef __imp_lineCreateAgentA:PPROC
lineCreateAgentA equ <__imp_lineCreateAgentA>
  IFNDEF __UNICODE__
    lineCreateAgent equ <__imp_lineCreateAgentA>
  ENDIF

externdef __imp_lineCreateAgentSessionA:PPROC
lineCreateAgentSessionA equ <__imp_lineCreateAgentSessionA>
  IFNDEF __UNICODE__
    lineCreateAgentSession equ <__imp_lineCreateAgentSessionA>
  ENDIF

externdef __imp_lineCreateAgentSessionW:PPROC
lineCreateAgentSessionW equ <__imp_lineCreateAgentSessionW>
  IFDEF __UNICODE__
    lineCreateAgentSession equ <__imp_lineCreateAgentSessionW>
  ENDIF

externdef __imp_lineCreateAgentW:PPROC
lineCreateAgentW equ <__imp_lineCreateAgentW>
  IFDEF __UNICODE__
    lineCreateAgent equ <__imp_lineCreateAgentW>
  ENDIF

externdef __imp_lineDeallocateCall:PPROC
lineDeallocateCall equ <__imp_lineDeallocateCall>

externdef __imp_lineDevSpecific:PPROC
lineDevSpecific equ <__imp_lineDevSpecific>

externdef __imp_lineDevSpecificFeature:PPROC
lineDevSpecificFeature equ <__imp_lineDevSpecificFeature>

externdef __imp_lineDial:PPROC
lineDial equ <__imp_lineDial>

externdef __imp_lineDialA:PPROC
lineDialA equ <__imp_lineDialA>
  IFNDEF __UNICODE__
    lineDial equ <__imp_lineDialA>
  ENDIF

externdef __imp_lineDialW:PPROC
lineDialW equ <__imp_lineDialW>
  IFDEF __UNICODE__
    lineDial equ <__imp_lineDialW>
  ENDIF

externdef __imp_lineDrop:PPROC
lineDrop equ <__imp_lineDrop>

externdef __imp_lineForward:PPROC
lineForward equ <__imp_lineForward>

externdef __imp_lineForwardA:PPROC
lineForwardA equ <__imp_lineForwardA>
  IFNDEF __UNICODE__
    lineForward equ <__imp_lineForwardA>
  ENDIF

externdef __imp_lineForwardW:PPROC
lineForwardW equ <__imp_lineForwardW>
  IFDEF __UNICODE__
    lineForward equ <__imp_lineForwardW>
  ENDIF

externdef __imp_lineGatherDigits:PPROC
lineGatherDigits equ <__imp_lineGatherDigits>

externdef __imp_lineGatherDigitsA:PPROC
lineGatherDigitsA equ <__imp_lineGatherDigitsA>
  IFNDEF __UNICODE__
    lineGatherDigits equ <__imp_lineGatherDigitsA>
  ENDIF

externdef __imp_lineGatherDigitsW:PPROC
lineGatherDigitsW equ <__imp_lineGatherDigitsW>
  IFDEF __UNICODE__
    lineGatherDigits equ <__imp_lineGatherDigitsW>
  ENDIF

externdef __imp_lineGenerateDigits:PPROC
lineGenerateDigits equ <__imp_lineGenerateDigits>

externdef __imp_lineGenerateDigitsA:PPROC
lineGenerateDigitsA equ <__imp_lineGenerateDigitsA>
  IFNDEF __UNICODE__
    lineGenerateDigits equ <__imp_lineGenerateDigitsA>
  ENDIF

externdef __imp_lineGenerateDigitsW:PPROC
lineGenerateDigitsW equ <__imp_lineGenerateDigitsW>
  IFDEF __UNICODE__
    lineGenerateDigits equ <__imp_lineGenerateDigitsW>
  ENDIF

externdef __imp_lineGenerateTone:PPROC
lineGenerateTone equ <__imp_lineGenerateTone>

externdef __imp_lineGetAddressCaps:PPROC
lineGetAddressCaps equ <__imp_lineGetAddressCaps>

externdef __imp_lineGetAddressCapsA:PPROC
lineGetAddressCapsA equ <__imp_lineGetAddressCapsA>
  IFNDEF __UNICODE__
    lineGetAddressCaps equ <__imp_lineGetAddressCapsA>
  ENDIF

externdef __imp_lineGetAddressCapsW:PPROC
lineGetAddressCapsW equ <__imp_lineGetAddressCapsW>
  IFDEF __UNICODE__
    lineGetAddressCaps equ <__imp_lineGetAddressCapsW>
  ENDIF

externdef __imp_lineGetAddressID:PPROC
lineGetAddressID equ <__imp_lineGetAddressID>

externdef __imp_lineGetAddressIDA:PPROC
lineGetAddressIDA equ <__imp_lineGetAddressIDA>
  IFNDEF __UNICODE__
    lineGetAddressID equ <__imp_lineGetAddressIDA>
  ENDIF

externdef __imp_lineGetAddressIDW:PPROC
lineGetAddressIDW equ <__imp_lineGetAddressIDW>
  IFDEF __UNICODE__
    lineGetAddressID equ <__imp_lineGetAddressIDW>
  ENDIF

externdef __imp_lineGetAddressStatus:PPROC
lineGetAddressStatus equ <__imp_lineGetAddressStatus>

externdef __imp_lineGetAddressStatusA:PPROC
lineGetAddressStatusA equ <__imp_lineGetAddressStatusA>
  IFNDEF __UNICODE__
    lineGetAddressStatus equ <__imp_lineGetAddressStatusA>
  ENDIF

externdef __imp_lineGetAddressStatusW:PPROC
lineGetAddressStatusW equ <__imp_lineGetAddressStatusW>
  IFDEF __UNICODE__
    lineGetAddressStatus equ <__imp_lineGetAddressStatusW>
  ENDIF

externdef __imp_lineGetAgentActivityListA:PPROC
lineGetAgentActivityListA equ <__imp_lineGetAgentActivityListA>
  IFNDEF __UNICODE__
    lineGetAgentActivityList equ <__imp_lineGetAgentActivityListA>
  ENDIF

externdef __imp_lineGetAgentActivityListW:PPROC
lineGetAgentActivityListW equ <__imp_lineGetAgentActivityListW>
  IFDEF __UNICODE__
    lineGetAgentActivityList equ <__imp_lineGetAgentActivityListW>
  ENDIF

externdef __imp_lineGetAgentCapsA:PPROC
lineGetAgentCapsA equ <__imp_lineGetAgentCapsA>
  IFNDEF __UNICODE__
    lineGetAgentCaps equ <__imp_lineGetAgentCapsA>
  ENDIF

externdef __imp_lineGetAgentCapsW:PPROC
lineGetAgentCapsW equ <__imp_lineGetAgentCapsW>
  IFDEF __UNICODE__
    lineGetAgentCaps equ <__imp_lineGetAgentCapsW>
  ENDIF

externdef __imp_lineGetAgentGroupListA:PPROC
lineGetAgentGroupListA equ <__imp_lineGetAgentGroupListA>
  IFNDEF __UNICODE__
    lineGetAgentGroupList equ <__imp_lineGetAgentGroupListA>
  ENDIF

externdef __imp_lineGetAgentGroupListW:PPROC
lineGetAgentGroupListW equ <__imp_lineGetAgentGroupListW>
  IFDEF __UNICODE__
    lineGetAgentGroupList equ <__imp_lineGetAgentGroupListW>
  ENDIF

externdef __imp_lineGetAgentInfo:PPROC
lineGetAgentInfo equ <__imp_lineGetAgentInfo>

externdef __imp_lineGetAgentSessionInfo:PPROC
lineGetAgentSessionInfo equ <__imp_lineGetAgentSessionInfo>

externdef __imp_lineGetAgentSessionList:PPROC
lineGetAgentSessionList equ <__imp_lineGetAgentSessionList>

externdef __imp_lineGetAgentStatusA:PPROC
lineGetAgentStatusA equ <__imp_lineGetAgentStatusA>
  IFNDEF __UNICODE__
    lineGetAgentStatus equ <__imp_lineGetAgentStatusA>
  ENDIF

externdef __imp_lineGetAgentStatusW:PPROC
lineGetAgentStatusW equ <__imp_lineGetAgentStatusW>
  IFDEF __UNICODE__
    lineGetAgentStatus equ <__imp_lineGetAgentStatusW>
  ENDIF

externdef __imp_lineGetAppPriority:PPROC
lineGetAppPriority equ <__imp_lineGetAppPriority>

externdef __imp_lineGetAppPriorityA:PPROC
lineGetAppPriorityA equ <__imp_lineGetAppPriorityA>
  IFNDEF __UNICODE__
    lineGetAppPriority equ <__imp_lineGetAppPriorityA>
  ENDIF

externdef __imp_lineGetAppPriorityW:PPROC
lineGetAppPriorityW equ <__imp_lineGetAppPriorityW>
  IFDEF __UNICODE__
    lineGetAppPriority equ <__imp_lineGetAppPriorityW>
  ENDIF

externdef __imp_lineGetCallInfo:PPROC
lineGetCallInfo equ <__imp_lineGetCallInfo>

externdef __imp_lineGetCallInfoA:PPROC
lineGetCallInfoA equ <__imp_lineGetCallInfoA>
  IFNDEF __UNICODE__
    lineGetCallInfo equ <__imp_lineGetCallInfoA>
  ENDIF

externdef __imp_lineGetCallInfoW:PPROC
lineGetCallInfoW equ <__imp_lineGetCallInfoW>
  IFDEF __UNICODE__
    lineGetCallInfo equ <__imp_lineGetCallInfoW>
  ENDIF

externdef __imp_lineGetCallStatus:PPROC
lineGetCallStatus equ <__imp_lineGetCallStatus>

externdef __imp_lineGetConfRelatedCalls:PPROC
lineGetConfRelatedCalls equ <__imp_lineGetConfRelatedCalls>

externdef __imp_lineGetCountry:PPROC
lineGetCountry equ <__imp_lineGetCountry>

externdef __imp_lineGetCountryA:PPROC
lineGetCountryA equ <__imp_lineGetCountryA>
  IFNDEF __UNICODE__
    lineGetCountry equ <__imp_lineGetCountryA>
  ENDIF

externdef __imp_lineGetCountryW:PPROC
lineGetCountryW equ <__imp_lineGetCountryW>
  IFDEF __UNICODE__
    lineGetCountry equ <__imp_lineGetCountryW>
  ENDIF

externdef __imp_lineGetDevCaps:PPROC
lineGetDevCaps equ <__imp_lineGetDevCaps>

externdef __imp_lineGetDevCapsA:PPROC
lineGetDevCapsA equ <__imp_lineGetDevCapsA>
  IFNDEF __UNICODE__
    lineGetDevCaps equ <__imp_lineGetDevCapsA>
  ENDIF

externdef __imp_lineGetDevCapsW:PPROC
lineGetDevCapsW equ <__imp_lineGetDevCapsW>
  IFDEF __UNICODE__
    lineGetDevCaps equ <__imp_lineGetDevCapsW>
  ENDIF

externdef __imp_lineGetDevConfig:PPROC
lineGetDevConfig equ <__imp_lineGetDevConfig>

externdef __imp_lineGetDevConfigA:PPROC
lineGetDevConfigA equ <__imp_lineGetDevConfigA>
  IFNDEF __UNICODE__
    lineGetDevConfig equ <__imp_lineGetDevConfigA>
  ENDIF

externdef __imp_lineGetDevConfigW:PPROC
lineGetDevConfigW equ <__imp_lineGetDevConfigW>
  IFDEF __UNICODE__
    lineGetDevConfig equ <__imp_lineGetDevConfigW>
  ENDIF

externdef __imp_lineGetGroupListA:PPROC
lineGetGroupListA equ <__imp_lineGetGroupListA>
  IFNDEF __UNICODE__
    lineGetGroupList equ <__imp_lineGetGroupListA>
  ENDIF

externdef __imp_lineGetGroupListW:PPROC
lineGetGroupListW equ <__imp_lineGetGroupListW>
  IFDEF __UNICODE__
    lineGetGroupList equ <__imp_lineGetGroupListW>
  ENDIF

externdef __imp_lineGetID:PPROC
lineGetID equ <__imp_lineGetID>

externdef __imp_lineGetIDA:PPROC
lineGetIDA equ <__imp_lineGetIDA>
  IFNDEF __UNICODE__
    lineGetID equ <__imp_lineGetIDA>
  ENDIF

externdef __imp_lineGetIDW:PPROC
lineGetIDW equ <__imp_lineGetIDW>
  IFDEF __UNICODE__
    lineGetID equ <__imp_lineGetIDW>
  ENDIF

externdef __imp_lineGetIcon:PPROC
lineGetIcon equ <__imp_lineGetIcon>

externdef __imp_lineGetIconA:PPROC
lineGetIconA equ <__imp_lineGetIconA>
  IFNDEF __UNICODE__
    lineGetIcon equ <__imp_lineGetIconA>
  ENDIF

externdef __imp_lineGetIconW:PPROC
lineGetIconW equ <__imp_lineGetIconW>
  IFDEF __UNICODE__
    lineGetIcon equ <__imp_lineGetIconW>
  ENDIF

externdef __imp_lineGetLineDevStatus:PPROC
lineGetLineDevStatus equ <__imp_lineGetLineDevStatus>

externdef __imp_lineGetLineDevStatusA:PPROC
lineGetLineDevStatusA equ <__imp_lineGetLineDevStatusA>
  IFNDEF __UNICODE__
    lineGetLineDevStatus equ <__imp_lineGetLineDevStatusA>
  ENDIF

externdef __imp_lineGetLineDevStatusW:PPROC
lineGetLineDevStatusW equ <__imp_lineGetLineDevStatusW>
  IFDEF __UNICODE__
    lineGetLineDevStatus equ <__imp_lineGetLineDevStatusW>
  ENDIF

externdef __imp_lineGetMessage:PPROC
lineGetMessage equ <__imp_lineGetMessage>

externdef __imp_lineGetNewCalls:PPROC
lineGetNewCalls equ <__imp_lineGetNewCalls>

externdef __imp_lineGetNumRings:PPROC
lineGetNumRings equ <__imp_lineGetNumRings>

externdef __imp_lineGetProviderList:PPROC
lineGetProviderList equ <__imp_lineGetProviderList>

externdef __imp_lineGetProviderListA:PPROC
lineGetProviderListA equ <__imp_lineGetProviderListA>
  IFNDEF __UNICODE__
    lineGetProviderList equ <__imp_lineGetProviderListA>
  ENDIF

externdef __imp_lineGetProviderListW:PPROC
lineGetProviderListW equ <__imp_lineGetProviderListW>
  IFDEF __UNICODE__
    lineGetProviderList equ <__imp_lineGetProviderListW>
  ENDIF

externdef __imp_lineGetProxyStatus:PPROC
lineGetProxyStatus equ <__imp_lineGetProxyStatus>

externdef __imp_lineGetQueueInfo:PPROC
lineGetQueueInfo equ <__imp_lineGetQueueInfo>

externdef __imp_lineGetQueueListA:PPROC
lineGetQueueListA equ <__imp_lineGetQueueListA>
  IFNDEF __UNICODE__
    lineGetQueueList equ <__imp_lineGetQueueListA>
  ENDIF

externdef __imp_lineGetQueueListW:PPROC
lineGetQueueListW equ <__imp_lineGetQueueListW>
  IFDEF __UNICODE__
    lineGetQueueList equ <__imp_lineGetQueueListW>
  ENDIF

externdef __imp_lineGetRequest:PPROC
lineGetRequest equ <__imp_lineGetRequest>

externdef __imp_lineGetRequestA:PPROC
lineGetRequestA equ <__imp_lineGetRequestA>
  IFNDEF __UNICODE__
    lineGetRequest equ <__imp_lineGetRequestA>
  ENDIF

externdef __imp_lineGetRequestW:PPROC
lineGetRequestW equ <__imp_lineGetRequestW>
  IFDEF __UNICODE__
    lineGetRequest equ <__imp_lineGetRequestW>
  ENDIF

externdef __imp_lineGetStatusMessages:PPROC
lineGetStatusMessages equ <__imp_lineGetStatusMessages>

externdef __imp_lineGetTranslateCaps:PPROC
lineGetTranslateCaps equ <__imp_lineGetTranslateCaps>

externdef __imp_lineGetTranslateCapsA:PPROC
lineGetTranslateCapsA equ <__imp_lineGetTranslateCapsA>
  IFNDEF __UNICODE__
    lineGetTranslateCaps equ <__imp_lineGetTranslateCapsA>
  ENDIF

externdef __imp_lineGetTranslateCapsW:PPROC
lineGetTranslateCapsW equ <__imp_lineGetTranslateCapsW>
  IFDEF __UNICODE__
    lineGetTranslateCaps equ <__imp_lineGetTranslateCapsW>
  ENDIF

externdef __imp_lineHandoff:PPROC
lineHandoff equ <__imp_lineHandoff>

externdef __imp_lineHandoffA:PPROC
lineHandoffA equ <__imp_lineHandoffA>
  IFNDEF __UNICODE__
    lineHandoff equ <__imp_lineHandoffA>
  ENDIF

externdef __imp_lineHandoffW:PPROC
lineHandoffW equ <__imp_lineHandoffW>
  IFDEF __UNICODE__
    lineHandoff equ <__imp_lineHandoffW>
  ENDIF

externdef __imp_lineHold:PPROC
lineHold equ <__imp_lineHold>

externdef __imp_lineInitialize:PPROC
lineInitialize equ <__imp_lineInitialize>

externdef __imp_lineInitializeExA:PPROC
lineInitializeExA equ <__imp_lineInitializeExA>
  IFNDEF __UNICODE__
    lineInitializeEx equ <__imp_lineInitializeExA>
  ENDIF

externdef __imp_lineInitializeExW:PPROC
lineInitializeExW equ <__imp_lineInitializeExW>
  IFDEF __UNICODE__
    lineInitializeEx equ <__imp_lineInitializeExW>
  ENDIF

externdef __imp_lineMakeCall:PPROC
lineMakeCall equ <__imp_lineMakeCall>

externdef __imp_lineMakeCallA:PPROC
lineMakeCallA equ <__imp_lineMakeCallA>
  IFNDEF __UNICODE__
    lineMakeCall equ <__imp_lineMakeCallA>
  ENDIF

externdef __imp_lineMakeCallW:PPROC
lineMakeCallW equ <__imp_lineMakeCallW>
  IFDEF __UNICODE__
    lineMakeCall equ <__imp_lineMakeCallW>
  ENDIF

externdef __imp_lineMonitorDigits:PPROC
lineMonitorDigits equ <__imp_lineMonitorDigits>

externdef __imp_lineMonitorMedia:PPROC
lineMonitorMedia equ <__imp_lineMonitorMedia>

externdef __imp_lineMonitorTones:PPROC
lineMonitorTones equ <__imp_lineMonitorTones>

externdef __imp_lineNegotiateAPIVersion:PPROC
lineNegotiateAPIVersion equ <__imp_lineNegotiateAPIVersion>

externdef __imp_lineNegotiateExtVersion:PPROC
lineNegotiateExtVersion equ <__imp_lineNegotiateExtVersion>

externdef __imp_lineOpen:PPROC
lineOpen equ <__imp_lineOpen>

externdef __imp_lineOpenA:PPROC
lineOpenA equ <__imp_lineOpenA>
  IFNDEF __UNICODE__
    lineOpen equ <__imp_lineOpenA>
  ENDIF

externdef __imp_lineOpenW:PPROC
lineOpenW equ <__imp_lineOpenW>
  IFDEF __UNICODE__
    lineOpen equ <__imp_lineOpenW>
  ENDIF

externdef __imp_linePark:PPROC
linePark equ <__imp_linePark>

externdef __imp_lineParkA:PPROC
lineParkA equ <__imp_lineParkA>
  IFNDEF __UNICODE__
    linePark equ <__imp_lineParkA>
  ENDIF

externdef __imp_lineParkW:PPROC
lineParkW equ <__imp_lineParkW>
  IFDEF __UNICODE__
    linePark equ <__imp_lineParkW>
  ENDIF

externdef __imp_linePickup:PPROC
linePickup equ <__imp_linePickup>

externdef __imp_linePickupA:PPROC
linePickupA equ <__imp_linePickupA>
  IFNDEF __UNICODE__
    linePickup equ <__imp_linePickupA>
  ENDIF

externdef __imp_linePickupW:PPROC
linePickupW equ <__imp_linePickupW>
  IFDEF __UNICODE__
    linePickup equ <__imp_linePickupW>
  ENDIF

externdef __imp_linePrepareAddToConference:PPROC
linePrepareAddToConference equ <__imp_linePrepareAddToConference>

externdef __imp_linePrepareAddToConferenceA:PPROC
linePrepareAddToConferenceA equ <__imp_linePrepareAddToConferenceA>
  IFNDEF __UNICODE__
    linePrepareAddToConference equ <__imp_linePrepareAddToConferenceA>
  ENDIF

externdef __imp_linePrepareAddToConferenceW:PPROC
linePrepareAddToConferenceW equ <__imp_linePrepareAddToConferenceW>
  IFDEF __UNICODE__
    linePrepareAddToConference equ <__imp_linePrepareAddToConferenceW>
  ENDIF

externdef __imp_lineProxyMessage:PPROC
lineProxyMessage equ <__imp_lineProxyMessage>

externdef __imp_lineProxyResponse:PPROC
lineProxyResponse equ <__imp_lineProxyResponse>

externdef __imp_lineRedirect:PPROC
lineRedirect equ <__imp_lineRedirect>

externdef __imp_lineRedirectA:PPROC
lineRedirectA equ <__imp_lineRedirectA>
  IFNDEF __UNICODE__
    lineRedirect equ <__imp_lineRedirectA>
  ENDIF

externdef __imp_lineRedirectW:PPROC
lineRedirectW equ <__imp_lineRedirectW>
  IFDEF __UNICODE__
    lineRedirect equ <__imp_lineRedirectW>
  ENDIF

externdef __imp_lineRegisterRequestRecipient:PPROC
lineRegisterRequestRecipient equ <__imp_lineRegisterRequestRecipient>

externdef __imp_lineReleaseUserUserInfo:PPROC
lineReleaseUserUserInfo equ <__imp_lineReleaseUserUserInfo>

externdef __imp_lineRemoveFromConference:PPROC
lineRemoveFromConference equ <__imp_lineRemoveFromConference>

externdef __imp_lineRemoveProvider:PPROC
lineRemoveProvider equ <__imp_lineRemoveProvider>

externdef __imp_lineSecureCall:PPROC
lineSecureCall equ <__imp_lineSecureCall>

externdef __imp_lineSendUserUserInfo:PPROC
lineSendUserUserInfo equ <__imp_lineSendUserUserInfo>

externdef __imp_lineSetAgentActivity:PPROC
lineSetAgentActivity equ <__imp_lineSetAgentActivity>

externdef __imp_lineSetAgentGroup:PPROC
lineSetAgentGroup equ <__imp_lineSetAgentGroup>

externdef __imp_lineSetAgentMeasurementPeriod:PPROC
lineSetAgentMeasurementPeriod equ <__imp_lineSetAgentMeasurementPeriod>

externdef __imp_lineSetAgentSessionState:PPROC
lineSetAgentSessionState equ <__imp_lineSetAgentSessionState>

externdef __imp_lineSetAgentState:PPROC
lineSetAgentState equ <__imp_lineSetAgentState>

externdef __imp_lineSetAgentStateEx:PPROC
lineSetAgentStateEx equ <__imp_lineSetAgentStateEx>

externdef __imp_lineSetAppPriority:PPROC
lineSetAppPriority equ <__imp_lineSetAppPriority>

externdef __imp_lineSetAppPriorityA:PPROC
lineSetAppPriorityA equ <__imp_lineSetAppPriorityA>
  IFNDEF __UNICODE__
    lineSetAppPriority equ <__imp_lineSetAppPriorityA>
  ENDIF

externdef __imp_lineSetAppPriorityW:PPROC
lineSetAppPriorityW equ <__imp_lineSetAppPriorityW>
  IFDEF __UNICODE__
    lineSetAppPriority equ <__imp_lineSetAppPriorityW>
  ENDIF

externdef __imp_lineSetAppSpecific:PPROC
lineSetAppSpecific equ <__imp_lineSetAppSpecific>

externdef __imp_lineSetCallData:PPROC
lineSetCallData equ <__imp_lineSetCallData>

externdef __imp_lineSetCallParams:PPROC
lineSetCallParams equ <__imp_lineSetCallParams>

externdef __imp_lineSetCallPrivilege:PPROC
lineSetCallPrivilege equ <__imp_lineSetCallPrivilege>

externdef __imp_lineSetCallQualityOfService:PPROC
lineSetCallQualityOfService equ <__imp_lineSetCallQualityOfService>

externdef __imp_lineSetCallTreatment:PPROC
lineSetCallTreatment equ <__imp_lineSetCallTreatment>

externdef __imp_lineSetCurrentLocation:PPROC
lineSetCurrentLocation equ <__imp_lineSetCurrentLocation>

externdef __imp_lineSetDevConfig:PPROC
lineSetDevConfig equ <__imp_lineSetDevConfig>

externdef __imp_lineSetDevConfigA:PPROC
lineSetDevConfigA equ <__imp_lineSetDevConfigA>
  IFNDEF __UNICODE__
    lineSetDevConfig equ <__imp_lineSetDevConfigA>
  ENDIF

externdef __imp_lineSetDevConfigW:PPROC
lineSetDevConfigW equ <__imp_lineSetDevConfigW>
  IFDEF __UNICODE__
    lineSetDevConfig equ <__imp_lineSetDevConfigW>
  ENDIF

externdef __imp_lineSetLineDevStatus:PPROC
lineSetLineDevStatus equ <__imp_lineSetLineDevStatus>

externdef __imp_lineSetMediaControl:PPROC
lineSetMediaControl equ <__imp_lineSetMediaControl>

externdef __imp_lineSetMediaMode:PPROC
lineSetMediaMode equ <__imp_lineSetMediaMode>

externdef __imp_lineSetNumRings:PPROC
lineSetNumRings equ <__imp_lineSetNumRings>

externdef __imp_lineSetQueueMeasurementPeriod:PPROC
lineSetQueueMeasurementPeriod equ <__imp_lineSetQueueMeasurementPeriod>

externdef __imp_lineSetStatusMessages:PPROC
lineSetStatusMessages equ <__imp_lineSetStatusMessages>

externdef __imp_lineSetTerminal:PPROC
lineSetTerminal equ <__imp_lineSetTerminal>

externdef __imp_lineSetTollList:PPROC
lineSetTollList equ <__imp_lineSetTollList>

externdef __imp_lineSetTollListA:PPROC
lineSetTollListA equ <__imp_lineSetTollListA>
  IFNDEF __UNICODE__
    lineSetTollList equ <__imp_lineSetTollListA>
  ENDIF

externdef __imp_lineSetTollListW:PPROC
lineSetTollListW equ <__imp_lineSetTollListW>
  IFDEF __UNICODE__
    lineSetTollList equ <__imp_lineSetTollListW>
  ENDIF

externdef __imp_lineSetupConference:PPROC
lineSetupConference equ <__imp_lineSetupConference>

externdef __imp_lineSetupConferenceA:PPROC
lineSetupConferenceA equ <__imp_lineSetupConferenceA>
  IFNDEF __UNICODE__
    lineSetupConference equ <__imp_lineSetupConferenceA>
  ENDIF

externdef __imp_lineSetupConferenceW:PPROC
lineSetupConferenceW equ <__imp_lineSetupConferenceW>
  IFDEF __UNICODE__
    lineSetupConference equ <__imp_lineSetupConferenceW>
  ENDIF

externdef __imp_lineSetupTransfer:PPROC
lineSetupTransfer equ <__imp_lineSetupTransfer>

externdef __imp_lineSetupTransferA:PPROC
lineSetupTransferA equ <__imp_lineSetupTransferA>
  IFNDEF __UNICODE__
    lineSetupTransfer equ <__imp_lineSetupTransferA>
  ENDIF

externdef __imp_lineSetupTransferW:PPROC
lineSetupTransferW equ <__imp_lineSetupTransferW>
  IFDEF __UNICODE__
    lineSetupTransfer equ <__imp_lineSetupTransferW>
  ENDIF

externdef __imp_lineShutdown:PPROC
lineShutdown equ <__imp_lineShutdown>

externdef __imp_lineSwapHold:PPROC
lineSwapHold equ <__imp_lineSwapHold>

externdef __imp_lineTranslateAddress:PPROC
lineTranslateAddress equ <__imp_lineTranslateAddress>

externdef __imp_lineTranslateAddressA:PPROC
lineTranslateAddressA equ <__imp_lineTranslateAddressA>
  IFNDEF __UNICODE__
    lineTranslateAddress equ <__imp_lineTranslateAddressA>
  ENDIF

externdef __imp_lineTranslateAddressW:PPROC
lineTranslateAddressW equ <__imp_lineTranslateAddressW>
  IFDEF __UNICODE__
    lineTranslateAddress equ <__imp_lineTranslateAddressW>
  ENDIF

externdef __imp_lineTranslateDialog:PPROC
lineTranslateDialog equ <__imp_lineTranslateDialog>

externdef __imp_lineTranslateDialogA:PPROC
lineTranslateDialogA equ <__imp_lineTranslateDialogA>
  IFNDEF __UNICODE__
    lineTranslateDialog equ <__imp_lineTranslateDialogA>
  ENDIF

externdef __imp_lineTranslateDialogW:PPROC
lineTranslateDialogW equ <__imp_lineTranslateDialogW>
  IFDEF __UNICODE__
    lineTranslateDialog equ <__imp_lineTranslateDialogW>
  ENDIF

externdef __imp_lineUncompleteCall:PPROC
lineUncompleteCall equ <__imp_lineUncompleteCall>

externdef __imp_lineUnhold:PPROC
lineUnhold equ <__imp_lineUnhold>

externdef __imp_lineUnpark:PPROC
lineUnpark equ <__imp_lineUnpark>

externdef __imp_lineUnparkA:PPROC
lineUnparkA equ <__imp_lineUnparkA>
  IFNDEF __UNICODE__
    lineUnpark equ <__imp_lineUnparkA>
  ENDIF

externdef __imp_lineUnparkW:PPROC
lineUnparkW equ <__imp_lineUnparkW>
  IFDEF __UNICODE__
    lineUnpark equ <__imp_lineUnparkW>
  ENDIF

externdef __imp_phoneClose:PPROC
phoneClose equ <__imp_phoneClose>

externdef __imp_phoneConfigDialog:PPROC
phoneConfigDialog equ <__imp_phoneConfigDialog>

externdef __imp_phoneConfigDialogA:PPROC
phoneConfigDialogA equ <__imp_phoneConfigDialogA>
  IFNDEF __UNICODE__
    phoneConfigDialog equ <__imp_phoneConfigDialogA>
  ENDIF

externdef __imp_phoneConfigDialogW:PPROC
phoneConfigDialogW equ <__imp_phoneConfigDialogW>
  IFDEF __UNICODE__
    phoneConfigDialog equ <__imp_phoneConfigDialogW>
  ENDIF

externdef __imp_phoneDevSpecific:PPROC
phoneDevSpecific equ <__imp_phoneDevSpecific>

externdef __imp_phoneGetButtonInfo:PPROC
phoneGetButtonInfo equ <__imp_phoneGetButtonInfo>

externdef __imp_phoneGetButtonInfoA:PPROC
phoneGetButtonInfoA equ <__imp_phoneGetButtonInfoA>
  IFNDEF __UNICODE__
    phoneGetButtonInfo equ <__imp_phoneGetButtonInfoA>
  ENDIF

externdef __imp_phoneGetButtonInfoW:PPROC
phoneGetButtonInfoW equ <__imp_phoneGetButtonInfoW>
  IFDEF __UNICODE__
    phoneGetButtonInfo equ <__imp_phoneGetButtonInfoW>
  ENDIF

externdef __imp_phoneGetData:PPROC
phoneGetData equ <__imp_phoneGetData>

externdef __imp_phoneGetDevCaps:PPROC
phoneGetDevCaps equ <__imp_phoneGetDevCaps>

externdef __imp_phoneGetDevCapsA:PPROC
phoneGetDevCapsA equ <__imp_phoneGetDevCapsA>
  IFNDEF __UNICODE__
    phoneGetDevCaps equ <__imp_phoneGetDevCapsA>
  ENDIF

externdef __imp_phoneGetDevCapsW:PPROC
phoneGetDevCapsW equ <__imp_phoneGetDevCapsW>
  IFDEF __UNICODE__
    phoneGetDevCaps equ <__imp_phoneGetDevCapsW>
  ENDIF

externdef __imp_phoneGetDisplay:PPROC
phoneGetDisplay equ <__imp_phoneGetDisplay>

externdef __imp_phoneGetGain:PPROC
phoneGetGain equ <__imp_phoneGetGain>

externdef __imp_phoneGetHookSwitch:PPROC
phoneGetHookSwitch equ <__imp_phoneGetHookSwitch>

externdef __imp_phoneGetID:PPROC
phoneGetID equ <__imp_phoneGetID>

externdef __imp_phoneGetIDA:PPROC
phoneGetIDA equ <__imp_phoneGetIDA>
  IFNDEF __UNICODE__
    phoneGetID equ <__imp_phoneGetIDA>
  ENDIF

externdef __imp_phoneGetIDW:PPROC
phoneGetIDW equ <__imp_phoneGetIDW>
  IFDEF __UNICODE__
    phoneGetID equ <__imp_phoneGetIDW>
  ENDIF

externdef __imp_phoneGetIcon:PPROC
phoneGetIcon equ <__imp_phoneGetIcon>

externdef __imp_phoneGetIconA:PPROC
phoneGetIconA equ <__imp_phoneGetIconA>
  IFNDEF __UNICODE__
    phoneGetIcon equ <__imp_phoneGetIconA>
  ENDIF

externdef __imp_phoneGetIconW:PPROC
phoneGetIconW equ <__imp_phoneGetIconW>
  IFDEF __UNICODE__
    phoneGetIcon equ <__imp_phoneGetIconW>
  ENDIF

externdef __imp_phoneGetLamp:PPROC
phoneGetLamp equ <__imp_phoneGetLamp>

externdef __imp_phoneGetMessage:PPROC
phoneGetMessage equ <__imp_phoneGetMessage>

externdef __imp_phoneGetRing:PPROC
phoneGetRing equ <__imp_phoneGetRing>

externdef __imp_phoneGetStatus:PPROC
phoneGetStatus equ <__imp_phoneGetStatus>

externdef __imp_phoneGetStatusA:PPROC
phoneGetStatusA equ <__imp_phoneGetStatusA>
  IFNDEF __UNICODE__
    phoneGetStatus equ <__imp_phoneGetStatusA>
  ENDIF

externdef __imp_phoneGetStatusMessages:PPROC
phoneGetStatusMessages equ <__imp_phoneGetStatusMessages>

externdef __imp_phoneGetStatusW:PPROC
phoneGetStatusW equ <__imp_phoneGetStatusW>
  IFDEF __UNICODE__
    phoneGetStatus equ <__imp_phoneGetStatusW>
  ENDIF

externdef __imp_phoneGetVolume:PPROC
phoneGetVolume equ <__imp_phoneGetVolume>

externdef __imp_phoneInitialize:PPROC
phoneInitialize equ <__imp_phoneInitialize>

externdef __imp_phoneInitializeExA:PPROC
phoneInitializeExA equ <__imp_phoneInitializeExA>
  IFNDEF __UNICODE__
    phoneInitializeEx equ <__imp_phoneInitializeExA>
  ENDIF

externdef __imp_phoneInitializeExW:PPROC
phoneInitializeExW equ <__imp_phoneInitializeExW>
  IFDEF __UNICODE__
    phoneInitializeEx equ <__imp_phoneInitializeExW>
  ENDIF

externdef __imp_phoneNegotiateAPIVersion:PPROC
phoneNegotiateAPIVersion equ <__imp_phoneNegotiateAPIVersion>

externdef __imp_phoneNegotiateExtVersion:PPROC
phoneNegotiateExtVersion equ <__imp_phoneNegotiateExtVersion>

externdef __imp_phoneOpen:PPROC
phoneOpen equ <__imp_phoneOpen>

externdef __imp_phoneSetButtonInfo:PPROC
phoneSetButtonInfo equ <__imp_phoneSetButtonInfo>

externdef __imp_phoneSetButtonInfoA:PPROC
phoneSetButtonInfoA equ <__imp_phoneSetButtonInfoA>
  IFNDEF __UNICODE__
    phoneSetButtonInfo equ <__imp_phoneSetButtonInfoA>
  ENDIF

externdef __imp_phoneSetButtonInfoW:PPROC
phoneSetButtonInfoW equ <__imp_phoneSetButtonInfoW>
  IFDEF __UNICODE__
    phoneSetButtonInfo equ <__imp_phoneSetButtonInfoW>
  ENDIF

externdef __imp_phoneSetData:PPROC
phoneSetData equ <__imp_phoneSetData>

externdef __imp_phoneSetDisplay:PPROC
phoneSetDisplay equ <__imp_phoneSetDisplay>

externdef __imp_phoneSetGain:PPROC
phoneSetGain equ <__imp_phoneSetGain>

externdef __imp_phoneSetHookSwitch:PPROC
phoneSetHookSwitch equ <__imp_phoneSetHookSwitch>

externdef __imp_phoneSetLamp:PPROC
phoneSetLamp equ <__imp_phoneSetLamp>

externdef __imp_phoneSetRing:PPROC
phoneSetRing equ <__imp_phoneSetRing>

externdef __imp_phoneSetStatusMessages:PPROC
phoneSetStatusMessages equ <__imp_phoneSetStatusMessages>

externdef __imp_phoneSetVolume:PPROC
phoneSetVolume equ <__imp_phoneSetVolume>

externdef __imp_phoneShutdown:PPROC
phoneShutdown equ <__imp_phoneShutdown>

externdef __imp_tapiGetLocationInfo:PPROC
tapiGetLocationInfo equ <__imp_tapiGetLocationInfo>

externdef __imp_tapiGetLocationInfoA:PPROC
tapiGetLocationInfoA equ <__imp_tapiGetLocationInfoA>
  IFNDEF __UNICODE__
    tapiGetLocationInfo equ <__imp_tapiGetLocationInfoA>
  ENDIF

externdef __imp_tapiGetLocationInfoW:PPROC
tapiGetLocationInfoW equ <__imp_tapiGetLocationInfoW>
  IFDEF __UNICODE__
    tapiGetLocationInfo equ <__imp_tapiGetLocationInfoW>
  ENDIF

externdef __imp_tapiRequestDrop:PPROC
tapiRequestDrop equ <__imp_tapiRequestDrop>

externdef __imp_tapiRequestMakeCall:PPROC
tapiRequestMakeCall equ <__imp_tapiRequestMakeCall>

externdef __imp_tapiRequestMakeCallA:PPROC
tapiRequestMakeCallA equ <__imp_tapiRequestMakeCallA>
  IFNDEF __UNICODE__
    tapiRequestMakeCall equ <__imp_tapiRequestMakeCallA>
  ENDIF

externdef __imp_tapiRequestMakeCallW:PPROC
tapiRequestMakeCallW equ <__imp_tapiRequestMakeCallW>
  IFDEF __UNICODE__
    tapiRequestMakeCall equ <__imp_tapiRequestMakeCallW>
  ENDIF

externdef __imp_tapiRequestMediaCall:PPROC
tapiRequestMediaCall equ <__imp_tapiRequestMediaCall>

externdef __imp_tapiRequestMediaCallA:PPROC
tapiRequestMediaCallA equ <__imp_tapiRequestMediaCallA>
  IFNDEF __UNICODE__
    tapiRequestMediaCall equ <__imp_tapiRequestMediaCallA>
  ENDIF

externdef __imp_tapiRequestMediaCallW:PPROC
tapiRequestMediaCallW equ <__imp_tapiRequestMediaCallW>
  IFDEF __UNICODE__
    tapiRequestMediaCall equ <__imp_tapiRequestMediaCallW>
  ENDIF
