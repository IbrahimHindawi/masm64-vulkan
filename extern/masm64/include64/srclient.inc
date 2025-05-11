externdef __imp_CreateFirstRunRp:PPROC
CreateFirstRunRp equ <__imp_CreateFirstRunRp>

externdef __imp_CreateSnapshot:PPROC
CreateSnapshot equ <__imp_CreateSnapshot>

externdef __imp_DisableFIFO:PPROC
DisableFIFO equ <__imp_DisableFIFO>

externdef __imp_DisableSR:PPROC
DisableSR equ <__imp_DisableSR>

externdef __imp_DllCanUnloadNow:PPROC
DllCanUnloadNow equ <__imp_DllCanUnloadNow>

externdef __imp_DllGetClassObject:PPROC
DllGetClassObject equ <__imp_DllGetClassObject>

externdef __imp_DllRegisterServer:PPROC
DllRegisterServer equ <__imp_DllRegisterServer>

externdef __imp_DllUnregisterServer:PPROC
DllUnregisterServer equ <__imp_DllUnregisterServer>

externdef __imp_EnableFIFO:PPROC
EnableFIFO equ <__imp_EnableFIFO>

externdef __imp_EnableSR:PPROC
EnableSR equ <__imp_EnableSR>

externdef __imp_EnableSREx:PPROC
EnableSREx equ <__imp_EnableSREx>

externdef __imp_ResetSR:PPROC
ResetSR equ <__imp_ResetSR>

externdef __imp_RestoreSnapshot:PPROC
RestoreSnapshot equ <__imp_RestoreSnapshot>

externdef __imp_SRCompress:PPROC
SRCompress equ <__imp_SRCompress>

externdef __imp_SRFifo:PPROC
SRFifo equ <__imp_SRFifo>

externdef __imp_SRFreeze:PPROC
SRFreeze equ <__imp_SRFreeze>

externdef __imp_SRNotify:PPROC
SRNotify equ <__imp_SRNotify>

externdef __imp_SRPrintState:PPROC
SRPrintState equ <__imp_SRPrintState>

externdef __imp_SRRegisterSnapshotCallback:PPROC
SRRegisterSnapshotCallback equ <__imp_SRRegisterSnapshotCallback>

externdef __imp_SRRemoveRestorePoint:PPROC
SRRemoveRestorePoint equ <__imp_SRRemoveRestorePoint>

externdef __imp_SRSetRestorePointA:PPROC
SRSetRestorePointA equ <__imp_SRSetRestorePointA>
  IFNDEF __UNICODE__
    SRSetRestorePoint equ <__imp_SRSetRestorePointA>
  ENDIF

externdef __imp_SRSetRestorePointW:PPROC
SRSetRestorePointW equ <__imp_SRSetRestorePointW>
  IFDEF __UNICODE__
    SRSetRestorePoint equ <__imp_SRSetRestorePointW>
  ENDIF

externdef __imp_SRSwitchLog:PPROC
SRSwitchLog equ <__imp_SRSwitchLog>

externdef __imp_SRUnregisterSnapshotCallback:PPROC
SRUnregisterSnapshotCallback equ <__imp_SRUnregisterSnapshotCallback>

externdef __imp_SRUpdateDSSize:PPROC
SRUpdateDSSize equ <__imp_SRUpdateDSSize>

externdef __imp_SRUpdateMonitoredListA:PPROC
SRUpdateMonitoredListA equ <__imp_SRUpdateMonitoredListA>
  IFNDEF __UNICODE__
    SRUpdateMonitoredList equ <__imp_SRUpdateMonitoredListA>
  ENDIF

externdef __imp_SRUpdateMonitoredListW:PPROC
SRUpdateMonitoredListW equ <__imp_SRUpdateMonitoredListW>
  IFDEF __UNICODE__
    SRUpdateMonitoredList equ <__imp_SRUpdateMonitoredListW>
  ENDIF
