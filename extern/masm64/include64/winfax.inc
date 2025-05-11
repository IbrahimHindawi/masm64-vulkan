externdef __imp_FaxAbort:PPROC
FaxAbort equ <__imp_FaxAbort>

externdef __imp_FaxAccessCheck:PPROC
FaxAccessCheck equ <__imp_FaxAccessCheck>

externdef __imp_FaxClose:PPROC
FaxClose equ <__imp_FaxClose>

externdef __imp_FaxCompleteJobParamsA:PPROC
FaxCompleteJobParamsA equ <__imp_FaxCompleteJobParamsA>
  IFNDEF __UNICODE__
    FaxCompleteJobParams equ <__imp_FaxCompleteJobParamsA>
  ENDIF

externdef __imp_FaxCompleteJobParamsW:PPROC
FaxCompleteJobParamsW equ <__imp_FaxCompleteJobParamsW>
  IFDEF __UNICODE__
    FaxCompleteJobParams equ <__imp_FaxCompleteJobParamsW>
  ENDIF

externdef __imp_FaxConnectFaxServerA:PPROC
FaxConnectFaxServerA equ <__imp_FaxConnectFaxServerA>
  IFNDEF __UNICODE__
    FaxConnectFaxServer equ <__imp_FaxConnectFaxServerA>
  ENDIF

externdef __imp_FaxConnectFaxServerW:PPROC
FaxConnectFaxServerW equ <__imp_FaxConnectFaxServerW>
  IFDEF __UNICODE__
    FaxConnectFaxServer equ <__imp_FaxConnectFaxServerW>
  ENDIF

externdef __imp_FaxEnableRoutingMethodA:PPROC
FaxEnableRoutingMethodA equ <__imp_FaxEnableRoutingMethodA>
  IFNDEF __UNICODE__
    FaxEnableRoutingMethod equ <__imp_FaxEnableRoutingMethodA>
  ENDIF

externdef __imp_FaxEnableRoutingMethodW:PPROC
FaxEnableRoutingMethodW equ <__imp_FaxEnableRoutingMethodW>
  IFDEF __UNICODE__
    FaxEnableRoutingMethod equ <__imp_FaxEnableRoutingMethodW>
  ENDIF

externdef __imp_FaxEnumGlobalRoutingInfoA:PPROC
FaxEnumGlobalRoutingInfoA equ <__imp_FaxEnumGlobalRoutingInfoA>
  IFNDEF __UNICODE__
    FaxEnumGlobalRoutingInfo equ <__imp_FaxEnumGlobalRoutingInfoA>
  ENDIF

externdef __imp_FaxEnumGlobalRoutingInfoW:PPROC
FaxEnumGlobalRoutingInfoW equ <__imp_FaxEnumGlobalRoutingInfoW>
  IFDEF __UNICODE__
    FaxEnumGlobalRoutingInfo equ <__imp_FaxEnumGlobalRoutingInfoW>
  ENDIF

externdef __imp_FaxEnumJobsA:PPROC
FaxEnumJobsA equ <__imp_FaxEnumJobsA>
  IFNDEF __UNICODE__
    FaxEnumJobs equ <__imp_FaxEnumJobsA>
  ENDIF

externdef __imp_FaxEnumJobsW:PPROC
FaxEnumJobsW equ <__imp_FaxEnumJobsW>
  IFDEF __UNICODE__
    FaxEnumJobs equ <__imp_FaxEnumJobsW>
  ENDIF

externdef __imp_FaxEnumPortsA:PPROC
FaxEnumPortsA equ <__imp_FaxEnumPortsA>
  IFNDEF __UNICODE__
    FaxEnumPorts equ <__imp_FaxEnumPortsA>
  ENDIF

externdef __imp_FaxEnumPortsW:PPROC
FaxEnumPortsW equ <__imp_FaxEnumPortsW>
  IFDEF __UNICODE__
    FaxEnumPorts equ <__imp_FaxEnumPortsW>
  ENDIF

externdef __imp_FaxEnumRoutingMethodsA:PPROC
FaxEnumRoutingMethodsA equ <__imp_FaxEnumRoutingMethodsA>
  IFNDEF __UNICODE__
    FaxEnumRoutingMethods equ <__imp_FaxEnumRoutingMethodsA>
  ENDIF

externdef __imp_FaxEnumRoutingMethodsW:PPROC
FaxEnumRoutingMethodsW equ <__imp_FaxEnumRoutingMethodsW>
  IFDEF __UNICODE__
    FaxEnumRoutingMethods equ <__imp_FaxEnumRoutingMethodsW>
  ENDIF

externdef __imp_FaxFreeBuffer:PPROC
FaxFreeBuffer equ <__imp_FaxFreeBuffer>

externdef __imp_FaxGetConfigurationA:PPROC
FaxGetConfigurationA equ <__imp_FaxGetConfigurationA>
  IFNDEF __UNICODE__
    FaxGetConfiguration equ <__imp_FaxGetConfigurationA>
  ENDIF

externdef __imp_FaxGetConfigurationW:PPROC
FaxGetConfigurationW equ <__imp_FaxGetConfigurationW>
  IFDEF __UNICODE__
    FaxGetConfiguration equ <__imp_FaxGetConfigurationW>
  ENDIF

externdef __imp_FaxGetDeviceStatusA:PPROC
FaxGetDeviceStatusA equ <__imp_FaxGetDeviceStatusA>
  IFNDEF __UNICODE__
    FaxGetDeviceStatus equ <__imp_FaxGetDeviceStatusA>
  ENDIF

externdef __imp_FaxGetDeviceStatusW:PPROC
FaxGetDeviceStatusW equ <__imp_FaxGetDeviceStatusW>
  IFDEF __UNICODE__
    FaxGetDeviceStatus equ <__imp_FaxGetDeviceStatusW>
  ENDIF

externdef __imp_FaxGetJobA:PPROC
FaxGetJobA equ <__imp_FaxGetJobA>
  IFNDEF __UNICODE__
    FaxGetJob equ <__imp_FaxGetJobA>
  ENDIF

externdef __imp_FaxGetJobW:PPROC
FaxGetJobW equ <__imp_FaxGetJobW>
  IFDEF __UNICODE__
    FaxGetJob equ <__imp_FaxGetJobW>
  ENDIF

externdef __imp_FaxGetLoggingCategoriesA:PPROC
FaxGetLoggingCategoriesA equ <__imp_FaxGetLoggingCategoriesA>
  IFNDEF __UNICODE__
    FaxGetLoggingCategories equ <__imp_FaxGetLoggingCategoriesA>
  ENDIF

externdef __imp_FaxGetLoggingCategoriesW:PPROC
FaxGetLoggingCategoriesW equ <__imp_FaxGetLoggingCategoriesW>
  IFDEF __UNICODE__
    FaxGetLoggingCategories equ <__imp_FaxGetLoggingCategoriesW>
  ENDIF

externdef __imp_FaxGetPageData:PPROC
FaxGetPageData equ <__imp_FaxGetPageData>

externdef __imp_FaxGetPortA:PPROC
FaxGetPortA equ <__imp_FaxGetPortA>
  IFNDEF __UNICODE__
    FaxGetPort equ <__imp_FaxGetPortA>
  ENDIF

externdef __imp_FaxGetPortW:PPROC
FaxGetPortW equ <__imp_FaxGetPortW>
  IFDEF __UNICODE__
    FaxGetPort equ <__imp_FaxGetPortW>
  ENDIF

externdef __imp_FaxGetRoutingInfoA:PPROC
FaxGetRoutingInfoA equ <__imp_FaxGetRoutingInfoA>
  IFNDEF __UNICODE__
    FaxGetRoutingInfo equ <__imp_FaxGetRoutingInfoA>
  ENDIF

externdef __imp_FaxGetRoutingInfoW:PPROC
FaxGetRoutingInfoW equ <__imp_FaxGetRoutingInfoW>
  IFDEF __UNICODE__
    FaxGetRoutingInfo equ <__imp_FaxGetRoutingInfoW>
  ENDIF

externdef __imp_FaxInitializeEventQueue:PPROC
FaxInitializeEventQueue equ <__imp_FaxInitializeEventQueue>

externdef __imp_FaxOpenPort:PPROC
FaxOpenPort equ <__imp_FaxOpenPort>

externdef __imp_FaxPrintCoverPageA:PPROC
FaxPrintCoverPageA equ <__imp_FaxPrintCoverPageA>
  IFNDEF __UNICODE__
    FaxPrintCoverPage equ <__imp_FaxPrintCoverPageA>
  ENDIF

externdef __imp_FaxPrintCoverPageW:PPROC
FaxPrintCoverPageW equ <__imp_FaxPrintCoverPageW>
  IFDEF __UNICODE__
    FaxPrintCoverPage equ <__imp_FaxPrintCoverPageW>
  ENDIF

externdef __imp_FaxRegisterRoutingExtensionW:PPROC
FaxRegisterRoutingExtensionW equ <__imp_FaxRegisterRoutingExtensionW>
  IFDEF __UNICODE__
    FaxRegisterRoutingExtension equ <__imp_FaxRegisterRoutingExtensionW>
  ENDIF

externdef __imp_FaxRegisterServiceProviderW:PPROC
FaxRegisterServiceProviderW equ <__imp_FaxRegisterServiceProviderW>
  IFDEF __UNICODE__
    FaxRegisterServiceProvider equ <__imp_FaxRegisterServiceProviderW>
  ENDIF

externdef __imp_FaxSendDocumentA:PPROC
FaxSendDocumentA equ <__imp_FaxSendDocumentA>
  IFNDEF __UNICODE__
    FaxSendDocument equ <__imp_FaxSendDocumentA>
  ENDIF

externdef __imp_FaxSendDocumentForBroadcastA:PPROC
FaxSendDocumentForBroadcastA equ <__imp_FaxSendDocumentForBroadcastA>
  IFNDEF __UNICODE__
    FaxSendDocumentForBroadcast equ <__imp_FaxSendDocumentForBroadcastA>
  ENDIF

externdef __imp_FaxSendDocumentForBroadcastW:PPROC
FaxSendDocumentForBroadcastW equ <__imp_FaxSendDocumentForBroadcastW>
  IFDEF __UNICODE__
    FaxSendDocumentForBroadcast equ <__imp_FaxSendDocumentForBroadcastW>
  ENDIF

externdef __imp_FaxSendDocumentW:PPROC
FaxSendDocumentW equ <__imp_FaxSendDocumentW>
  IFDEF __UNICODE__
    FaxSendDocument equ <__imp_FaxSendDocumentW>
  ENDIF

externdef __imp_FaxSetConfigurationA:PPROC
FaxSetConfigurationA equ <__imp_FaxSetConfigurationA>
  IFNDEF __UNICODE__
    FaxSetConfiguration equ <__imp_FaxSetConfigurationA>
  ENDIF

externdef __imp_FaxSetConfigurationW:PPROC
FaxSetConfigurationW equ <__imp_FaxSetConfigurationW>
  IFDEF __UNICODE__
    FaxSetConfiguration equ <__imp_FaxSetConfigurationW>
  ENDIF

externdef __imp_FaxSetGlobalRoutingInfoA:PPROC
FaxSetGlobalRoutingInfoA equ <__imp_FaxSetGlobalRoutingInfoA>
  IFNDEF __UNICODE__
    FaxSetGlobalRoutingInfo equ <__imp_FaxSetGlobalRoutingInfoA>
  ENDIF

externdef __imp_FaxSetGlobalRoutingInfoW:PPROC
FaxSetGlobalRoutingInfoW equ <__imp_FaxSetGlobalRoutingInfoW>
  IFDEF __UNICODE__
    FaxSetGlobalRoutingInfo equ <__imp_FaxSetGlobalRoutingInfoW>
  ENDIF

externdef __imp_FaxSetJobA:PPROC
FaxSetJobA equ <__imp_FaxSetJobA>
  IFNDEF __UNICODE__
    FaxSetJob equ <__imp_FaxSetJobA>
  ENDIF

externdef __imp_FaxSetJobW:PPROC
FaxSetJobW equ <__imp_FaxSetJobW>
  IFDEF __UNICODE__
    FaxSetJob equ <__imp_FaxSetJobW>
  ENDIF

externdef __imp_FaxSetLoggingCategoriesA:PPROC
FaxSetLoggingCategoriesA equ <__imp_FaxSetLoggingCategoriesA>
  IFNDEF __UNICODE__
    FaxSetLoggingCategories equ <__imp_FaxSetLoggingCategoriesA>
  ENDIF

externdef __imp_FaxSetLoggingCategoriesW:PPROC
FaxSetLoggingCategoriesW equ <__imp_FaxSetLoggingCategoriesW>
  IFDEF __UNICODE__
    FaxSetLoggingCategories equ <__imp_FaxSetLoggingCategoriesW>
  ENDIF

externdef __imp_FaxSetPortA:PPROC
FaxSetPortA equ <__imp_FaxSetPortA>
  IFNDEF __UNICODE__
    FaxSetPort equ <__imp_FaxSetPortA>
  ENDIF

externdef __imp_FaxSetPortW:PPROC
FaxSetPortW equ <__imp_FaxSetPortW>
  IFDEF __UNICODE__
    FaxSetPort equ <__imp_FaxSetPortW>
  ENDIF

externdef __imp_FaxSetRoutingInfoA:PPROC
FaxSetRoutingInfoA equ <__imp_FaxSetRoutingInfoA>
  IFNDEF __UNICODE__
    FaxSetRoutingInfo equ <__imp_FaxSetRoutingInfoA>
  ENDIF

externdef __imp_FaxSetRoutingInfoW:PPROC
FaxSetRoutingInfoW equ <__imp_FaxSetRoutingInfoW>
  IFDEF __UNICODE__
    FaxSetRoutingInfo equ <__imp_FaxSetRoutingInfoW>
  ENDIF

externdef __imp_FaxStartPrintJobA:PPROC
FaxStartPrintJobA equ <__imp_FaxStartPrintJobA>
  IFNDEF __UNICODE__
    FaxStartPrintJob equ <__imp_FaxStartPrintJobA>
  ENDIF

externdef __imp_FaxStartPrintJobW:PPROC
FaxStartPrintJobW equ <__imp_FaxStartPrintJobW>
  IFDEF __UNICODE__
    FaxStartPrintJob equ <__imp_FaxStartPrintJobW>
  ENDIF

externdef __imp_FaxUnregisterServiceProviderW:PPROC
FaxUnregisterServiceProviderW equ <__imp_FaxUnregisterServiceProviderW>
  IFDEF __UNICODE__
    FaxUnregisterServiceProvider equ <__imp_FaxUnregisterServiceProviderW>
  ENDIF
