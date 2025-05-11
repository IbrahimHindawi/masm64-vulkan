externdef __imp_I_MprSaveConn:PPROC
I_MprSaveConn equ <__imp_I_MprSaveConn>

externdef __imp_MultinetGetConnectionPerformanceA:PPROC
MultinetGetConnectionPerformanceA equ <__imp_MultinetGetConnectionPerformanceA>
  IFNDEF __UNICODE__
    MultinetGetConnectionPerformance equ <__imp_MultinetGetConnectionPerformanceA>
  ENDIF

externdef __imp_MultinetGetConnectionPerformanceW:PPROC
MultinetGetConnectionPerformanceW equ <__imp_MultinetGetConnectionPerformanceW>
  IFDEF __UNICODE__
    MultinetGetConnectionPerformance equ <__imp_MultinetGetConnectionPerformanceW>
  ENDIF

externdef __imp_MultinetGetErrorTextA:PPROC
MultinetGetErrorTextA equ <__imp_MultinetGetErrorTextA>
  IFNDEF __UNICODE__
    MultinetGetErrorText equ <__imp_MultinetGetErrorTextA>
  ENDIF

externdef __imp_MultinetGetErrorTextW:PPROC
MultinetGetErrorTextW equ <__imp_MultinetGetErrorTextW>
  IFDEF __UNICODE__
    MultinetGetErrorText equ <__imp_MultinetGetErrorTextW>
  ENDIF

externdef __imp_RestoreConnectionA0:PPROC
RestoreConnectionA0 equ <__imp_RestoreConnectionA0>

externdef __imp_WNetAddConnection2A:PPROC
WNetAddConnection2A equ <__imp_WNetAddConnection2A>
  IFNDEF __UNICODE__
    WNetAddConnection2 equ <__imp_WNetAddConnection2A>
  ENDIF

externdef __imp_WNetAddConnection2W:PPROC
WNetAddConnection2W equ <__imp_WNetAddConnection2W>
  IFDEF __UNICODE__
    WNetAddConnection2 equ <__imp_WNetAddConnection2W>
  ENDIF

externdef __imp_WNetAddConnection3A:PPROC
WNetAddConnection3A equ <__imp_WNetAddConnection3A>
  IFNDEF __UNICODE__
    WNetAddConnection3 equ <__imp_WNetAddConnection3A>
  ENDIF

externdef __imp_WNetAddConnection3W:PPROC
WNetAddConnection3W equ <__imp_WNetAddConnection3W>
  IFDEF __UNICODE__
    WNetAddConnection3 equ <__imp_WNetAddConnection3W>
  ENDIF

externdef __imp_WNetAddConnectionA:PPROC
WNetAddConnectionA equ <__imp_WNetAddConnectionA>
  IFNDEF __UNICODE__
    WNetAddConnection equ <__imp_WNetAddConnectionA>
  ENDIF

externdef __imp_WNetAddConnectionW:PPROC
WNetAddConnectionW equ <__imp_WNetAddConnectionW>
  IFDEF __UNICODE__
    WNetAddConnection equ <__imp_WNetAddConnectionW>
  ENDIF

externdef __imp_WNetCancelConnection2A:PPROC
WNetCancelConnection2A equ <__imp_WNetCancelConnection2A>
  IFNDEF __UNICODE__
    WNetCancelConnection2 equ <__imp_WNetCancelConnection2A>
  ENDIF

externdef __imp_WNetCancelConnection2W:PPROC
WNetCancelConnection2W equ <__imp_WNetCancelConnection2W>
  IFDEF __UNICODE__
    WNetCancelConnection2 equ <__imp_WNetCancelConnection2W>
  ENDIF

externdef __imp_WNetCancelConnectionA:PPROC
WNetCancelConnectionA equ <__imp_WNetCancelConnectionA>
  IFNDEF __UNICODE__
    WNetCancelConnection equ <__imp_WNetCancelConnectionA>
  ENDIF

externdef __imp_WNetCancelConnectionW:PPROC
WNetCancelConnectionW equ <__imp_WNetCancelConnectionW>
  IFDEF __UNICODE__
    WNetCancelConnection equ <__imp_WNetCancelConnectionW>
  ENDIF

externdef __imp_WNetClearConnections:PPROC
WNetClearConnections equ <__imp_WNetClearConnections>

externdef __imp_WNetCloseEnum:PPROC
WNetCloseEnum equ <__imp_WNetCloseEnum>

externdef __imp_WNetConnectionDialog1A:PPROC
WNetConnectionDialog1A equ <__imp_WNetConnectionDialog1A>
  IFNDEF __UNICODE__
    WNetConnectionDialog1 equ <__imp_WNetConnectionDialog1A>
  ENDIF

externdef __imp_WNetConnectionDialog1W:PPROC
WNetConnectionDialog1W equ <__imp_WNetConnectionDialog1W>
  IFDEF __UNICODE__
    WNetConnectionDialog1 equ <__imp_WNetConnectionDialog1W>
  ENDIF

externdef __imp_WNetConnectionDialog2:PPROC
WNetConnectionDialog2 equ <__imp_WNetConnectionDialog2>

externdef __imp_WNetConnectionDialog:PPROC
WNetConnectionDialog equ <__imp_WNetConnectionDialog>

externdef __imp_WNetDirectoryNotifyA:PPROC
WNetDirectoryNotifyA equ <__imp_WNetDirectoryNotifyA>
  IFNDEF __UNICODE__
    WNetDirectoryNotify equ <__imp_WNetDirectoryNotifyA>
  ENDIF

externdef __imp_WNetDirectoryNotifyW:PPROC
WNetDirectoryNotifyW equ <__imp_WNetDirectoryNotifyW>
  IFDEF __UNICODE__
    WNetDirectoryNotify equ <__imp_WNetDirectoryNotifyW>
  ENDIF

externdef __imp_WNetDisconnectDialog1A:PPROC
WNetDisconnectDialog1A equ <__imp_WNetDisconnectDialog1A>
  IFNDEF __UNICODE__
    WNetDisconnectDialog1 equ <__imp_WNetDisconnectDialog1A>
  ENDIF

externdef __imp_WNetDisconnectDialog1W:PPROC
WNetDisconnectDialog1W equ <__imp_WNetDisconnectDialog1W>
  IFDEF __UNICODE__
    WNetDisconnectDialog1 equ <__imp_WNetDisconnectDialog1W>
  ENDIF

externdef __imp_WNetDisconnectDialog2:PPROC
WNetDisconnectDialog2 equ <__imp_WNetDisconnectDialog2>

externdef __imp_WNetDisconnectDialog:PPROC
WNetDisconnectDialog equ <__imp_WNetDisconnectDialog>

externdef __imp_WNetEnumResourceA:PPROC
WNetEnumResourceA equ <__imp_WNetEnumResourceA>
  IFNDEF __UNICODE__
    WNetEnumResource equ <__imp_WNetEnumResourceA>
  ENDIF

externdef __imp_WNetEnumResourceW:PPROC
WNetEnumResourceW equ <__imp_WNetEnumResourceW>
  IFDEF __UNICODE__
    WNetEnumResource equ <__imp_WNetEnumResourceW>
  ENDIF

externdef __imp_WNetFMXEditPerm:PPROC
WNetFMXEditPerm equ <__imp_WNetFMXEditPerm>

externdef __imp_WNetFMXGetPermCaps:PPROC
WNetFMXGetPermCaps equ <__imp_WNetFMXGetPermCaps>

externdef __imp_WNetFMXGetPermHelp:PPROC
WNetFMXGetPermHelp equ <__imp_WNetFMXGetPermHelp>

externdef __imp_WNetFormatNetworkNameA:PPROC
WNetFormatNetworkNameA equ <__imp_WNetFormatNetworkNameA>
  IFNDEF __UNICODE__
    WNetFormatNetworkName equ <__imp_WNetFormatNetworkNameA>
  ENDIF

externdef __imp_WNetFormatNetworkNameW:PPROC
WNetFormatNetworkNameW equ <__imp_WNetFormatNetworkNameW>
  IFDEF __UNICODE__
    WNetFormatNetworkName equ <__imp_WNetFormatNetworkNameW>
  ENDIF

externdef __imp_WNetGetConnection2A:PPROC
WNetGetConnection2A equ <__imp_WNetGetConnection2A>
  IFNDEF __UNICODE__
    WNetGetConnection2 equ <__imp_WNetGetConnection2A>
  ENDIF

externdef __imp_WNetGetConnection2W:PPROC
WNetGetConnection2W equ <__imp_WNetGetConnection2W>
  IFDEF __UNICODE__
    WNetGetConnection2 equ <__imp_WNetGetConnection2W>
  ENDIF

externdef __imp_WNetGetConnection3A:PPROC
WNetGetConnection3A equ <__imp_WNetGetConnection3A>
  IFNDEF __UNICODE__
    WNetGetConnection3 equ <__imp_WNetGetConnection3A>
  ENDIF

externdef __imp_WNetGetConnection3W:PPROC
WNetGetConnection3W equ <__imp_WNetGetConnection3W>
  IFDEF __UNICODE__
    WNetGetConnection3 equ <__imp_WNetGetConnection3W>
  ENDIF

externdef __imp_WNetGetConnectionA:PPROC
WNetGetConnectionA equ <__imp_WNetGetConnectionA>
  IFNDEF __UNICODE__
    WNetGetConnection equ <__imp_WNetGetConnectionA>
  ENDIF

externdef __imp_WNetGetConnectionW:PPROC
WNetGetConnectionW equ <__imp_WNetGetConnectionW>
  IFDEF __UNICODE__
    WNetGetConnection equ <__imp_WNetGetConnectionW>
  ENDIF

externdef __imp_WNetGetDirectoryTypeA:PPROC
WNetGetDirectoryTypeA equ <__imp_WNetGetDirectoryTypeA>
  IFNDEF __UNICODE__
    WNetGetDirectoryType equ <__imp_WNetGetDirectoryTypeA>
  ENDIF

externdef __imp_WNetGetDirectoryTypeW:PPROC
WNetGetDirectoryTypeW equ <__imp_WNetGetDirectoryTypeW>
  IFDEF __UNICODE__
    WNetGetDirectoryType equ <__imp_WNetGetDirectoryTypeW>
  ENDIF

externdef __imp_WNetGetHomeDirectoryW:PPROC
WNetGetHomeDirectoryW equ <__imp_WNetGetHomeDirectoryW>
  IFDEF __UNICODE__
    WNetGetHomeDirectory equ <__imp_WNetGetHomeDirectoryW>
  ENDIF

externdef __imp_WNetGetLastErrorA:PPROC
WNetGetLastErrorA equ <__imp_WNetGetLastErrorA>
  IFNDEF __UNICODE__
    WNetGetLastError equ <__imp_WNetGetLastErrorA>
  ENDIF

externdef __imp_WNetGetLastErrorW:PPROC
WNetGetLastErrorW equ <__imp_WNetGetLastErrorW>
  IFDEF __UNICODE__
    WNetGetLastError equ <__imp_WNetGetLastErrorW>
  ENDIF

externdef __imp_WNetGetNetworkInformationA:PPROC
WNetGetNetworkInformationA equ <__imp_WNetGetNetworkInformationA>
  IFNDEF __UNICODE__
    WNetGetNetworkInformation equ <__imp_WNetGetNetworkInformationA>
  ENDIF

externdef __imp_WNetGetNetworkInformationW:PPROC
WNetGetNetworkInformationW equ <__imp_WNetGetNetworkInformationW>
  IFDEF __UNICODE__
    WNetGetNetworkInformation equ <__imp_WNetGetNetworkInformationW>
  ENDIF

externdef __imp_WNetGetPropertyTextA:PPROC
WNetGetPropertyTextA equ <__imp_WNetGetPropertyTextA>
  IFNDEF __UNICODE__
    WNetGetPropertyText equ <__imp_WNetGetPropertyTextA>
  ENDIF

externdef __imp_WNetGetPropertyTextW:PPROC
WNetGetPropertyTextW equ <__imp_WNetGetPropertyTextW>
  IFDEF __UNICODE__
    WNetGetPropertyText equ <__imp_WNetGetPropertyTextW>
  ENDIF

externdef __imp_WNetGetProviderNameA:PPROC
WNetGetProviderNameA equ <__imp_WNetGetProviderNameA>
  IFNDEF __UNICODE__
    WNetGetProviderName equ <__imp_WNetGetProviderNameA>
  ENDIF

externdef __imp_WNetGetProviderNameW:PPROC
WNetGetProviderNameW equ <__imp_WNetGetProviderNameW>
  IFDEF __UNICODE__
    WNetGetProviderName equ <__imp_WNetGetProviderNameW>
  ENDIF

externdef __imp_WNetGetProviderTypeA:PPROC
WNetGetProviderTypeA equ <__imp_WNetGetProviderTypeA>
  IFNDEF __UNICODE__
    WNetGetProviderType equ <__imp_WNetGetProviderTypeA>
  ENDIF

externdef __imp_WNetGetProviderTypeW:PPROC
WNetGetProviderTypeW equ <__imp_WNetGetProviderTypeW>
  IFDEF __UNICODE__
    WNetGetProviderType equ <__imp_WNetGetProviderTypeW>
  ENDIF

externdef __imp_WNetGetResourceInformationA:PPROC
WNetGetResourceInformationA equ <__imp_WNetGetResourceInformationA>
  IFNDEF __UNICODE__
    WNetGetResourceInformation equ <__imp_WNetGetResourceInformationA>
  ENDIF

externdef __imp_WNetGetResourceInformationW:PPROC
WNetGetResourceInformationW equ <__imp_WNetGetResourceInformationW>
  IFDEF __UNICODE__
    WNetGetResourceInformation equ <__imp_WNetGetResourceInformationW>
  ENDIF

externdef __imp_WNetGetResourceParentA:PPROC
WNetGetResourceParentA equ <__imp_WNetGetResourceParentA>
  IFNDEF __UNICODE__
    WNetGetResourceParent equ <__imp_WNetGetResourceParentA>
  ENDIF

externdef __imp_WNetGetResourceParentW:PPROC
WNetGetResourceParentW equ <__imp_WNetGetResourceParentW>
  IFDEF __UNICODE__
    WNetGetResourceParent equ <__imp_WNetGetResourceParentW>
  ENDIF

externdef __imp_WNetGetSearchDialog:PPROC
WNetGetSearchDialog equ <__imp_WNetGetSearchDialog>

externdef __imp_WNetGetUniversalNameA:PPROC
WNetGetUniversalNameA equ <__imp_WNetGetUniversalNameA>
  IFNDEF __UNICODE__
    WNetGetUniversalName equ <__imp_WNetGetUniversalNameA>
  ENDIF

externdef __imp_WNetGetUniversalNameW:PPROC
WNetGetUniversalNameW equ <__imp_WNetGetUniversalNameW>
  IFDEF __UNICODE__
    WNetGetUniversalName equ <__imp_WNetGetUniversalNameW>
  ENDIF

externdef __imp_WNetGetUserA:PPROC
WNetGetUserA equ <__imp_WNetGetUserA>
  IFNDEF __UNICODE__
    WNetGetUser equ <__imp_WNetGetUserA>
  ENDIF

externdef __imp_WNetGetUserW:PPROC
WNetGetUserW equ <__imp_WNetGetUserW>
  IFDEF __UNICODE__
    WNetGetUser equ <__imp_WNetGetUserW>
  ENDIF

externdef __imp_WNetLogonNotify:PPROC
WNetLogonNotify equ <__imp_WNetLogonNotify>

externdef __imp_WNetOpenEnumA:PPROC
WNetOpenEnumA equ <__imp_WNetOpenEnumA>
  IFNDEF __UNICODE__
    WNetOpenEnum equ <__imp_WNetOpenEnumA>
  ENDIF

externdef __imp_WNetOpenEnumW:PPROC
WNetOpenEnumW equ <__imp_WNetOpenEnumW>
  IFDEF __UNICODE__
    WNetOpenEnum equ <__imp_WNetOpenEnumW>
  ENDIF

externdef __imp_WNetPasswordChangeNotify:PPROC
WNetPasswordChangeNotify equ <__imp_WNetPasswordChangeNotify>

externdef __imp_WNetPropertyDialogA:PPROC
WNetPropertyDialogA equ <__imp_WNetPropertyDialogA>
  IFNDEF __UNICODE__
    WNetPropertyDialog equ <__imp_WNetPropertyDialogA>
  ENDIF

externdef __imp_WNetPropertyDialogW:PPROC
WNetPropertyDialogW equ <__imp_WNetPropertyDialogW>
  IFDEF __UNICODE__
    WNetPropertyDialog equ <__imp_WNetPropertyDialogW>
  ENDIF

externdef __imp_WNetRestoreConnection2W:PPROC
WNetRestoreConnection2W equ <__imp_WNetRestoreConnection2W>
  IFDEF __UNICODE__
    WNetRestoreConnection2 equ <__imp_WNetRestoreConnection2W>
  ENDIF

externdef __imp_WNetRestoreConnectionW:PPROC
WNetRestoreConnectionW equ <__imp_WNetRestoreConnectionW>
  IFDEF __UNICODE__
    WNetRestoreConnection equ <__imp_WNetRestoreConnectionW>
  ENDIF

externdef __imp_WNetSetConnectionA:PPROC
WNetSetConnectionA equ <__imp_WNetSetConnectionA>
  IFNDEF __UNICODE__
    WNetSetConnection equ <__imp_WNetSetConnectionA>
  ENDIF

externdef __imp_WNetSetConnectionW:PPROC
WNetSetConnectionW equ <__imp_WNetSetConnectionW>
  IFDEF __UNICODE__
    WNetSetConnection equ <__imp_WNetSetConnectionW>
  ENDIF

externdef __imp_WNetSetLastErrorA:PPROC
WNetSetLastErrorA equ <__imp_WNetSetLastErrorA>
  IFNDEF __UNICODE__
    WNetSetLastError equ <__imp_WNetSetLastErrorA>
  ENDIF

externdef __imp_WNetSetLastErrorW:PPROC
WNetSetLastErrorW equ <__imp_WNetSetLastErrorW>
  IFDEF __UNICODE__
    WNetSetLastError equ <__imp_WNetSetLastErrorW>
  ENDIF

externdef __imp_WNetSupportGlobalEnum:PPROC
WNetSupportGlobalEnum equ <__imp_WNetSupportGlobalEnum>

externdef __imp_WNetUseConnectionA:PPROC
WNetUseConnectionA equ <__imp_WNetUseConnectionA>
  IFNDEF __UNICODE__
    WNetUseConnection equ <__imp_WNetUseConnectionA>
  ENDIF

externdef __imp_WNetUseConnectionW:PPROC
WNetUseConnectionW equ <__imp_WNetUseConnectionW>
  IFDEF __UNICODE__
    WNetUseConnection equ <__imp_WNetUseConnectionW>
  ENDIF
