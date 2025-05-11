externdef __imp_DwTerminalDlg:PPROC
DwTerminalDlg equ <__imp_DwTerminalDlg>

externdef __imp_GetRasDialOutProtocols:PPROC
GetRasDialOutProtocols equ <__imp_GetRasDialOutProtocols>

externdef __imp_RasAutodialDisableDlgA:PPROC
RasAutodialDisableDlgA equ <__imp_RasAutodialDisableDlgA>
  IFNDEF __UNICODE__
    RasAutodialDisableDlg equ <__imp_RasAutodialDisableDlgA>
  ENDIF

externdef __imp_RasAutodialDisableDlgW:PPROC
RasAutodialDisableDlgW equ <__imp_RasAutodialDisableDlgW>
  IFDEF __UNICODE__
    RasAutodialDisableDlg equ <__imp_RasAutodialDisableDlgW>
  ENDIF

externdef __imp_RasAutodialQueryDlgA:PPROC
RasAutodialQueryDlgA equ <__imp_RasAutodialQueryDlgA>
  IFNDEF __UNICODE__
    RasAutodialQueryDlg equ <__imp_RasAutodialQueryDlgA>
  ENDIF

externdef __imp_RasAutodialQueryDlgW:PPROC
RasAutodialQueryDlgW equ <__imp_RasAutodialQueryDlgW>
  IFDEF __UNICODE__
    RasAutodialQueryDlg equ <__imp_RasAutodialQueryDlgW>
  ENDIF

externdef __imp_RasDialDlgA:PPROC
RasDialDlgA equ <__imp_RasDialDlgA>
  IFNDEF __UNICODE__
    RasDialDlg equ <__imp_RasDialDlgA>
  ENDIF

externdef __imp_RasDialDlgW:PPROC
RasDialDlgW equ <__imp_RasDialDlgW>
  IFDEF __UNICODE__
    RasDialDlg equ <__imp_RasDialDlgW>
  ENDIF

externdef __imp_RasEntryDlgA:PPROC
RasEntryDlgA equ <__imp_RasEntryDlgA>
  IFNDEF __UNICODE__
    RasEntryDlg equ <__imp_RasEntryDlgA>
  ENDIF

externdef __imp_RasEntryDlgW:PPROC
RasEntryDlgW equ <__imp_RasEntryDlgW>
  IFDEF __UNICODE__
    RasEntryDlg equ <__imp_RasEntryDlgW>
  ENDIF

externdef __imp_RasMonitorDlgA:PPROC
RasMonitorDlgA equ <__imp_RasMonitorDlgA>
  IFNDEF __UNICODE__
    RasMonitorDlg equ <__imp_RasMonitorDlgA>
  ENDIF

externdef __imp_RasMonitorDlgW:PPROC
RasMonitorDlgW equ <__imp_RasMonitorDlgW>
  IFDEF __UNICODE__
    RasMonitorDlg equ <__imp_RasMonitorDlgW>
  ENDIF

externdef __imp_RasPhonebookDlgA:PPROC
RasPhonebookDlgA equ <__imp_RasPhonebookDlgA>
  IFNDEF __UNICODE__
    RasPhonebookDlg equ <__imp_RasPhonebookDlgA>
  ENDIF

externdef __imp_RasPhonebookDlgW:PPROC
RasPhonebookDlgW equ <__imp_RasPhonebookDlgW>
  IFDEF __UNICODE__
    RasPhonebookDlg equ <__imp_RasPhonebookDlgW>
  ENDIF

externdef __imp_RasSrvAddPropPages:PPROC
RasSrvAddPropPages equ <__imp_RasSrvAddPropPages>

externdef __imp_RasSrvAddWizPages:PPROC
RasSrvAddWizPages equ <__imp_RasSrvAddWizPages>

externdef __imp_RasSrvAllowConnectionsConfig:PPROC
RasSrvAllowConnectionsConfig equ <__imp_RasSrvAllowConnectionsConfig>

externdef __imp_RasSrvCleanupService:PPROC
RasSrvCleanupService equ <__imp_RasSrvCleanupService>

externdef __imp_RasSrvEnumConnections:PPROC
RasSrvEnumConnections equ <__imp_RasSrvEnumConnections>

externdef __imp_RasSrvHangupConnection:PPROC
RasSrvHangupConnection equ <__imp_RasSrvHangupConnection>

externdef __imp_RasSrvInitializeService:PPROC
RasSrvInitializeService equ <__imp_RasSrvInitializeService>

externdef __imp_RasSrvIsConnectionConnected:PPROC
RasSrvIsConnectionConnected equ <__imp_RasSrvIsConnectionConnected>

externdef __imp_RasSrvIsICConfigured:PPROC
RasSrvIsICConfigured equ <__imp_RasSrvIsICConfigured>

externdef __imp_RasSrvIsServiceRunning:PPROC
RasSrvIsServiceRunning equ <__imp_RasSrvIsServiceRunning>

externdef __imp_RasSrvQueryShowIcon:PPROC
RasSrvQueryShowIcon equ <__imp_RasSrvQueryShowIcon>

externdef __imp_RasUserEnableManualDial:PPROC
RasUserEnableManualDial equ <__imp_RasUserEnableManualDial>

externdef __imp_RasUserGetManualDial:PPROC
RasUserGetManualDial equ <__imp_RasUserGetManualDial>

externdef __imp_RasUserPrefsDlg:PPROC
RasUserPrefsDlg equ <__imp_RasUserPrefsDlg>

externdef __imp_RasWizCreateNewEntry:PPROC
RasWizCreateNewEntry equ <__imp_RasWizCreateNewEntry>

externdef __imp_RasWizGetNCCFlags:PPROC
RasWizGetNCCFlags equ <__imp_RasWizGetNCCFlags>

externdef __imp_RasWizGetSuggestedEntryName:PPROC
RasWizGetSuggestedEntryName equ <__imp_RasWizGetSuggestedEntryName>

externdef __imp_RasWizGetUserInputConnectionName:PPROC
RasWizGetUserInputConnectionName equ <__imp_RasWizGetUserInputConnectionName>

externdef __imp_RasWizIsEntryRenamable:PPROC
RasWizIsEntryRenamable equ <__imp_RasWizIsEntryRenamable>

externdef __imp_RasWizQueryMaxPageCount:PPROC
RasWizQueryMaxPageCount equ <__imp_RasWizQueryMaxPageCount>

externdef __imp_RasWizSetEntryName:PPROC
RasWizSetEntryName equ <__imp_RasWizSetEntryName>

externdef __imp_RouterEntryDlgA:PPROC
RouterEntryDlgA equ <__imp_RouterEntryDlgA>
  IFNDEF __UNICODE__
    RouterEntryDlg equ <__imp_RouterEntryDlgA>
  ENDIF

externdef __imp_RouterEntryDlgW:PPROC
RouterEntryDlgW equ <__imp_RouterEntryDlgW>
  IFDEF __UNICODE__
    RouterEntryDlg equ <__imp_RouterEntryDlgW>
  ENDIF
