externdef __imp_EmptyWorkingSet:PPROC
EmptyWorkingSet equ <__imp_EmptyWorkingSet>

externdef __imp_EnumDeviceDrivers:PPROC
EnumDeviceDrivers equ <__imp_EnumDeviceDrivers>

externdef __imp_EnumPageFilesA:PPROC
EnumPageFilesA equ <__imp_EnumPageFilesA>
  IFNDEF __UNICODE__
    EnumPageFiles equ <__imp_EnumPageFilesA>
  ENDIF

externdef __imp_EnumPageFilesW:PPROC
EnumPageFilesW equ <__imp_EnumPageFilesW>
  IFDEF __UNICODE__
    EnumPageFiles equ <__imp_EnumPageFilesW>
  ENDIF

externdef __imp_EnumProcessModules:PPROC
EnumProcessModules equ <__imp_EnumProcessModules>

externdef __imp_EnumProcesses:PPROC
EnumProcesses equ <__imp_EnumProcesses>

externdef __imp_GetDeviceDriverBaseNameA:PPROC
GetDeviceDriverBaseNameA equ <__imp_GetDeviceDriverBaseNameA>
  IFNDEF __UNICODE__
    GetDeviceDriverBaseName equ <__imp_GetDeviceDriverBaseNameA>
  ENDIF

externdef __imp_GetDeviceDriverBaseNameW:PPROC
GetDeviceDriverBaseNameW equ <__imp_GetDeviceDriverBaseNameW>
  IFDEF __UNICODE__
    GetDeviceDriverBaseName equ <__imp_GetDeviceDriverBaseNameW>
  ENDIF

externdef __imp_GetDeviceDriverFileNameA:PPROC
GetDeviceDriverFileNameA equ <__imp_GetDeviceDriverFileNameA>
  IFNDEF __UNICODE__
    GetDeviceDriverFileName equ <__imp_GetDeviceDriverFileNameA>
  ENDIF

externdef __imp_GetDeviceDriverFileNameW:PPROC
GetDeviceDriverFileNameW equ <__imp_GetDeviceDriverFileNameW>
  IFDEF __UNICODE__
    GetDeviceDriverFileName equ <__imp_GetDeviceDriverFileNameW>
  ENDIF

externdef __imp_GetMappedFileNameA:PPROC
GetMappedFileNameA equ <__imp_GetMappedFileNameA>
  IFNDEF __UNICODE__
    GetMappedFileName equ <__imp_GetMappedFileNameA>
  ENDIF

externdef __imp_GetMappedFileNameW:PPROC
GetMappedFileNameW equ <__imp_GetMappedFileNameW>
  IFDEF __UNICODE__
    GetMappedFileName equ <__imp_GetMappedFileNameW>
  ENDIF

externdef __imp_GetModuleBaseNameA:PPROC
GetModuleBaseNameA equ <__imp_GetModuleBaseNameA>
  IFNDEF __UNICODE__
    GetModuleBaseName equ <__imp_GetModuleBaseNameA>
  ENDIF

externdef __imp_GetModuleBaseNameW:PPROC
GetModuleBaseNameW equ <__imp_GetModuleBaseNameW>
  IFDEF __UNICODE__
    GetModuleBaseName equ <__imp_GetModuleBaseNameW>
  ENDIF

externdef __imp_GetModuleFileNameExA:PPROC
GetModuleFileNameExA equ <__imp_GetModuleFileNameExA>
  IFNDEF __UNICODE__
    GetModuleFileNameEx equ <__imp_GetModuleFileNameExA>
  ENDIF

externdef __imp_GetModuleFileNameExW:PPROC
GetModuleFileNameExW equ <__imp_GetModuleFileNameExW>
  IFDEF __UNICODE__
    GetModuleFileNameEx equ <__imp_GetModuleFileNameExW>
  ENDIF

externdef __imp_GetModuleInformation:PPROC
GetModuleInformation equ <__imp_GetModuleInformation>

externdef __imp_GetPerformanceInfo:PPROC
GetPerformanceInfo equ <__imp_GetPerformanceInfo>

externdef __imp_GetProcessImageFileNameA:PPROC
GetProcessImageFileNameA equ <__imp_GetProcessImageFileNameA>
  IFNDEF __UNICODE__
    GetProcessImageFileName equ <__imp_GetProcessImageFileNameA>
  ENDIF

externdef __imp_GetProcessImageFileNameW:PPROC
GetProcessImageFileNameW equ <__imp_GetProcessImageFileNameW>
  IFDEF __UNICODE__
    GetProcessImageFileName equ <__imp_GetProcessImageFileNameW>
  ENDIF

externdef __imp_GetProcessMemoryInfo:PPROC
GetProcessMemoryInfo equ <__imp_GetProcessMemoryInfo>

externdef __imp_GetWsChanges:PPROC
GetWsChanges equ <__imp_GetWsChanges>

externdef __imp_InitializeProcessForWsWatch:PPROC
InitializeProcessForWsWatch equ <__imp_InitializeProcessForWsWatch>

externdef __imp_QueryWorkingSet:PPROC
QueryWorkingSet equ <__imp_QueryWorkingSet>

externdef __imp_QueryWorkingSetEx:PPROC
QueryWorkingSetEx equ <__imp_QueryWorkingSetEx>
