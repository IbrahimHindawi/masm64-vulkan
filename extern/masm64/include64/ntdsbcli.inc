externdef __imp_DsBackupClose:PPROC
DsBackupClose equ <__imp_DsBackupClose>

externdef __imp_DsBackupEnd:PPROC
DsBackupEnd equ <__imp_DsBackupEnd>

externdef __imp_DsBackupFree:PPROC
DsBackupFree equ <__imp_DsBackupFree>

externdef __imp_DsBackupGetBackupLogsA:PPROC
DsBackupGetBackupLogsA equ <__imp_DsBackupGetBackupLogsA>
  IFNDEF __UNICODE__
    DsBackupGetBackupLogs equ <__imp_DsBackupGetBackupLogsA>
  ENDIF

externdef __imp_DsBackupGetBackupLogsW:PPROC
DsBackupGetBackupLogsW equ <__imp_DsBackupGetBackupLogsW>
  IFDEF __UNICODE__
    DsBackupGetBackupLogs equ <__imp_DsBackupGetBackupLogsW>
  ENDIF

externdef __imp_DsBackupGetDatabaseNamesA:PPROC
DsBackupGetDatabaseNamesA equ <__imp_DsBackupGetDatabaseNamesA>
  IFNDEF __UNICODE__
    DsBackupGetDatabaseNames equ <__imp_DsBackupGetDatabaseNamesA>
  ENDIF

externdef __imp_DsBackupGetDatabaseNamesW:PPROC
DsBackupGetDatabaseNamesW equ <__imp_DsBackupGetDatabaseNamesW>
  IFDEF __UNICODE__
    DsBackupGetDatabaseNames equ <__imp_DsBackupGetDatabaseNamesW>
  ENDIF

externdef __imp_DsBackupOpenFileA:PPROC
DsBackupOpenFileA equ <__imp_DsBackupOpenFileA>
  IFNDEF __UNICODE__
    DsBackupOpenFile equ <__imp_DsBackupOpenFileA>
  ENDIF

externdef __imp_DsBackupOpenFileW:PPROC
DsBackupOpenFileW equ <__imp_DsBackupOpenFileW>
  IFDEF __UNICODE__
    DsBackupOpenFile equ <__imp_DsBackupOpenFileW>
  ENDIF

externdef __imp_DsBackupPrepareA:PPROC
DsBackupPrepareA equ <__imp_DsBackupPrepareA>
  IFNDEF __UNICODE__
    DsBackupPrepare equ <__imp_DsBackupPrepareA>
  ENDIF

externdef __imp_DsBackupPrepareW:PPROC
DsBackupPrepareW equ <__imp_DsBackupPrepareW>
  IFDEF __UNICODE__
    DsBackupPrepare equ <__imp_DsBackupPrepareW>
  ENDIF

externdef __imp_DsBackupRead:PPROC
DsBackupRead equ <__imp_DsBackupRead>

externdef __imp_DsBackupTruncateLogs:PPROC
DsBackupTruncateLogs equ <__imp_DsBackupTruncateLogs>

externdef __imp_DsIsNTDSOnlineA:PPROC
DsIsNTDSOnlineA equ <__imp_DsIsNTDSOnlineA>
  IFNDEF __UNICODE__
    DsIsNTDSOnline equ <__imp_DsIsNTDSOnlineA>
  ENDIF

externdef __imp_DsIsNTDSOnlineW:PPROC
DsIsNTDSOnlineW equ <__imp_DsIsNTDSOnlineW>
  IFDEF __UNICODE__
    DsIsNTDSOnline equ <__imp_DsIsNTDSOnlineW>
  ENDIF

externdef __imp_DsRestoreCheckExpiryToken:PPROC
DsRestoreCheckExpiryToken equ <__imp_DsRestoreCheckExpiryToken>

externdef __imp_DsRestoreEnd:PPROC
DsRestoreEnd equ <__imp_DsRestoreEnd>

externdef __imp_DsRestoreGetDatabaseLocationsA:PPROC
DsRestoreGetDatabaseLocationsA equ <__imp_DsRestoreGetDatabaseLocationsA>
  IFNDEF __UNICODE__
    DsRestoreGetDatabaseLocations equ <__imp_DsRestoreGetDatabaseLocationsA>
  ENDIF

externdef __imp_DsRestoreGetDatabaseLocationsW:PPROC
DsRestoreGetDatabaseLocationsW equ <__imp_DsRestoreGetDatabaseLocationsW>
  IFDEF __UNICODE__
    DsRestoreGetDatabaseLocations equ <__imp_DsRestoreGetDatabaseLocationsW>
  ENDIF

externdef __imp_DsRestorePrepareA:PPROC
DsRestorePrepareA equ <__imp_DsRestorePrepareA>
  IFNDEF __UNICODE__
    DsRestorePrepare equ <__imp_DsRestorePrepareA>
  ENDIF

externdef __imp_DsRestorePrepareW:PPROC
DsRestorePrepareW equ <__imp_DsRestorePrepareW>
  IFDEF __UNICODE__
    DsRestorePrepare equ <__imp_DsRestorePrepareW>
  ENDIF

externdef __imp_DsRestoreRegisterA:PPROC
DsRestoreRegisterA equ <__imp_DsRestoreRegisterA>
  IFNDEF __UNICODE__
    DsRestoreRegister equ <__imp_DsRestoreRegisterA>
  ENDIF

externdef __imp_DsRestoreRegisterComplete:PPROC
DsRestoreRegisterComplete equ <__imp_DsRestoreRegisterComplete>

externdef __imp_DsRestoreRegisterW:PPROC
DsRestoreRegisterW equ <__imp_DsRestoreRegisterW>
  IFDEF __UNICODE__
    DsRestoreRegister equ <__imp_DsRestoreRegisterW>
  ENDIF

externdef __imp_DsSetAuthIdentityA:PPROC
DsSetAuthIdentityA equ <__imp_DsSetAuthIdentityA>
  IFNDEF __UNICODE__
    DsSetAuthIdentity equ <__imp_DsSetAuthIdentityA>
  ENDIF

externdef __imp_DsSetAuthIdentityW:PPROC
DsSetAuthIdentityW equ <__imp_DsSetAuthIdentityW>
  IFDEF __UNICODE__
    DsSetAuthIdentity equ <__imp_DsSetAuthIdentityW>
  ENDIF

externdef __imp_DsSetCurrentBackupLogA:PPROC
DsSetCurrentBackupLogA equ <__imp_DsSetCurrentBackupLogA>
  IFNDEF __UNICODE__
    DsSetCurrentBackupLog equ <__imp_DsSetCurrentBackupLogA>
  ENDIF

externdef __imp_DsSetCurrentBackupLogW:PPROC
DsSetCurrentBackupLogW equ <__imp_DsSetCurrentBackupLogW>
  IFDEF __UNICODE__
    DsSetCurrentBackupLog equ <__imp_DsSetCurrentBackupLogW>
  ENDIF
