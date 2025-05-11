externdef __imp_BackupPerfRegistryToFileW:PPROC
BackupPerfRegistryToFileW equ <__imp_BackupPerfRegistryToFileW>
  IFDEF __UNICODE__
    BackupPerfRegistryToFile equ <__imp_BackupPerfRegistryToFileW>
  ENDIF

externdef __imp_InstallPerfDllA:PPROC
InstallPerfDllA equ <__imp_InstallPerfDllA>
  IFNDEF __UNICODE__
    InstallPerfDll equ <__imp_InstallPerfDllA>
  ENDIF

externdef __imp_InstallPerfDllW:PPROC
InstallPerfDllW equ <__imp_InstallPerfDllW>
  IFDEF __UNICODE__
    InstallPerfDll equ <__imp_InstallPerfDllW>
  ENDIF

externdef __imp_LoadPerfCounterTextStringsA:PPROC
LoadPerfCounterTextStringsA equ <__imp_LoadPerfCounterTextStringsA>
  IFNDEF __UNICODE__
    LoadPerfCounterTextStrings equ <__imp_LoadPerfCounterTextStringsA>
  ENDIF

externdef __imp_LoadPerfCounterTextStringsW:PPROC
LoadPerfCounterTextStringsW equ <__imp_LoadPerfCounterTextStringsW>
  IFDEF __UNICODE__
    LoadPerfCounterTextStrings equ <__imp_LoadPerfCounterTextStringsW>
  ENDIF

externdef __imp_RestorePerfRegistryFromFileW:PPROC
RestorePerfRegistryFromFileW equ <__imp_RestorePerfRegistryFromFileW>
  IFDEF __UNICODE__
    RestorePerfRegistryFromFile equ <__imp_RestorePerfRegistryFromFileW>
  ENDIF

externdef __imp_SetServiceAsTrustedA:PPROC
SetServiceAsTrustedA equ <__imp_SetServiceAsTrustedA>
  IFNDEF __UNICODE__
    SetServiceAsTrusted equ <__imp_SetServiceAsTrustedA>
  ENDIF

externdef __imp_SetServiceAsTrustedW:PPROC
SetServiceAsTrustedW equ <__imp_SetServiceAsTrustedW>
  IFDEF __UNICODE__
    SetServiceAsTrusted equ <__imp_SetServiceAsTrustedW>
  ENDIF

externdef __imp_UnloadPerfCounterTextStringsA:PPROC
UnloadPerfCounterTextStringsA equ <__imp_UnloadPerfCounterTextStringsA>
  IFNDEF __UNICODE__
    UnloadPerfCounterTextStrings equ <__imp_UnloadPerfCounterTextStringsA>
  ENDIF

externdef __imp_UnloadPerfCounterTextStringsW:PPROC
UnloadPerfCounterTextStringsW equ <__imp_UnloadPerfCounterTextStringsW>
  IFDEF __UNICODE__
    UnloadPerfCounterTextStrings equ <__imp_UnloadPerfCounterTextStringsW>
  ENDIF

externdef __imp_UpdatePerfNameFilesA:PPROC
UpdatePerfNameFilesA equ <__imp_UpdatePerfNameFilesA>
  IFNDEF __UNICODE__
    UpdatePerfNameFiles equ <__imp_UpdatePerfNameFilesA>
  ENDIF

externdef __imp_UpdatePerfNameFilesW:PPROC
UpdatePerfNameFilesW equ <__imp_UpdatePerfNameFilesW>
  IFDEF __UNICODE__
    UpdatePerfNameFiles equ <__imp_UpdatePerfNameFilesW>
  ENDIF
