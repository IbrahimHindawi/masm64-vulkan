externdef __imp_ActivateActCtx:PPROC
ActivateActCtx equ <__imp_ActivateActCtx>

externdef __imp_AddAtomA:PPROC
AddAtomA equ <__imp_AddAtomA>
  IFNDEF __UNICODE__
    AddAtom equ <__imp_AddAtomA>
  ENDIF

externdef __imp_AddAtomW:PPROC
AddAtomW equ <__imp_AddAtomW>
  IFDEF __UNICODE__
    AddAtom equ <__imp_AddAtomW>
  ENDIF

externdef __imp_AddConsoleAliasA:PPROC
AddConsoleAliasA equ <__imp_AddConsoleAliasA>
  IFNDEF __UNICODE__
    AddConsoleAlias equ <__imp_AddConsoleAliasA>
  ENDIF

externdef __imp_AddConsoleAliasW:PPROC
AddConsoleAliasW equ <__imp_AddConsoleAliasW>
  IFDEF __UNICODE__
    AddConsoleAlias equ <__imp_AddConsoleAliasW>
  ENDIF

externdef __imp_AddLocalAlternateComputerNameA:PPROC
AddLocalAlternateComputerNameA equ <__imp_AddLocalAlternateComputerNameA>
  IFNDEF __UNICODE__
    AddLocalAlternateComputerName equ <__imp_AddLocalAlternateComputerNameA>
  ENDIF

externdef __imp_AddLocalAlternateComputerNameW:PPROC
AddLocalAlternateComputerNameW equ <__imp_AddLocalAlternateComputerNameW>
  IFDEF __UNICODE__
    AddLocalAlternateComputerName equ <__imp_AddLocalAlternateComputerNameW>
  ENDIF

externdef __imp_AddRefActCtx:PPROC
AddRefActCtx equ <__imp_AddRefActCtx>

externdef __imp_AddVectoredContinueHandler:PPROC
AddVectoredContinueHandler equ <__imp_AddVectoredContinueHandler>

externdef __imp_AddVectoredExceptionHandler:PPROC
AddVectoredExceptionHandler equ <__imp_AddVectoredExceptionHandler>

externdef __imp_AllocConsole:PPROC
AllocConsole equ <__imp_AllocConsole>

externdef __imp_AllocateUserPhysicalPages:PPROC
AllocateUserPhysicalPages equ <__imp_AllocateUserPhysicalPages>

externdef __imp_AreFileApisANSI:PPROC
AreFileApisANSI equ <__imp_AreFileApisANSI>

externdef __imp_AssignProcessToJobObject:PPROC
AssignProcessToJobObject equ <__imp_AssignProcessToJobObject>

externdef __imp_AttachConsole:PPROC
AttachConsole equ <__imp_AttachConsole>

externdef __imp_BackupRead:PPROC
BackupRead equ <__imp_BackupRead>

externdef __imp_BackupSeek:PPROC
BackupSeek equ <__imp_BackupSeek>

externdef __imp_BackupWrite:PPROC
BackupWrite equ <__imp_BackupWrite>

externdef __imp_BaseCheckAppcompatCache:PPROC
BaseCheckAppcompatCache equ <__imp_BaseCheckAppcompatCache>

externdef __imp_BaseCheckRunApp:PPROC
BaseCheckRunApp equ <__imp_BaseCheckRunApp>

externdef __imp_BaseCleanupAppcompatCacheSupport:PPROC
BaseCleanupAppcompatCacheSupport equ <__imp_BaseCleanupAppcompatCacheSupport>

externdef __imp_BaseDumpAppcompatCache:PPROC
BaseDumpAppcompatCache equ <__imp_BaseDumpAppcompatCache>

externdef __imp_BaseFlushAppcompatCache:PPROC
BaseFlushAppcompatCache equ <__imp_BaseFlushAppcompatCache>

externdef __imp_BaseInitAppcompatCacheSupport:PPROC
BaseInitAppcompatCacheSupport equ <__imp_BaseInitAppcompatCacheSupport>

externdef __imp_BaseIsAppcompatInfrastructureDisabled:PPROC
BaseIsAppcompatInfrastructureDisabled equ <__imp_BaseIsAppcompatInfrastructureDisabled>

externdef __imp_BaseProcessInitPostImport:PPROC
BaseProcessInitPostImport equ <__imp_BaseProcessInitPostImport>

externdef __imp_BaseProcessStart:PPROC
BaseProcessStart equ <__imp_BaseProcessStart>

externdef __imp_BaseQueryModuleData:PPROC
BaseQueryModuleData equ <__imp_BaseQueryModuleData>

externdef __imp_BaseThreadStart:PPROC
BaseThreadStart equ <__imp_BaseThreadStart>

externdef __imp_BaseUpdateAppcompatCache:PPROC
BaseUpdateAppcompatCache equ <__imp_BaseUpdateAppcompatCache>

externdef __imp_BasepCheckBadapp:PPROC
BasepCheckBadapp equ <__imp_BasepCheckBadapp>

externdef __imp_BasepCheckWinSaferRestrictions:PPROC
BasepCheckWinSaferRestrictions equ <__imp_BasepCheckWinSaferRestrictions>

externdef __imp_BasepFreeAppCompatData:PPROC
BasepFreeAppCompatData equ <__imp_BasepFreeAppCompatData>

externdef __imp_Beep:PPROC
Beep equ <__imp_Beep>

externdef __imp_BeginUpdateResourceA:PPROC
BeginUpdateResourceA equ <__imp_BeginUpdateResourceA>
  IFNDEF __UNICODE__
    BeginUpdateResource equ <__imp_BeginUpdateResourceA>
  ENDIF

externdef __imp_BeginUpdateResourceW:PPROC
BeginUpdateResourceW equ <__imp_BeginUpdateResourceW>
  IFDEF __UNICODE__
    BeginUpdateResource equ <__imp_BeginUpdateResourceW>
  ENDIF

externdef __imp_BindIoCompletionCallback:PPROC
BindIoCompletionCallback equ <__imp_BindIoCompletionCallback>

externdef __imp_BuildCommDCBA:PPROC
BuildCommDCBA equ <__imp_BuildCommDCBA>
  IFNDEF __UNICODE__
    BuildCommDCB equ <__imp_BuildCommDCBA>
  ENDIF

externdef __imp_BuildCommDCBAndTimeoutsA:PPROC
BuildCommDCBAndTimeoutsA equ <__imp_BuildCommDCBAndTimeoutsA>
  IFNDEF __UNICODE__
    BuildCommDCBAndTimeouts equ <__imp_BuildCommDCBAndTimeoutsA>
  ENDIF

externdef __imp_BuildCommDCBAndTimeoutsW:PPROC
BuildCommDCBAndTimeoutsW equ <__imp_BuildCommDCBAndTimeoutsW>
  IFDEF __UNICODE__
    BuildCommDCBAndTimeouts equ <__imp_BuildCommDCBAndTimeoutsW>
  ENDIF

externdef __imp_BuildCommDCBW:PPROC
BuildCommDCBW equ <__imp_BuildCommDCBW>
  IFDEF __UNICODE__
    BuildCommDCB equ <__imp_BuildCommDCBW>
  ENDIF

externdef __imp_CallNamedPipeA:PPROC
CallNamedPipeA equ <__imp_CallNamedPipeA>
  IFNDEF __UNICODE__
    CallNamedPipe equ <__imp_CallNamedPipeA>
  ENDIF

externdef __imp_CallNamedPipeW:PPROC
CallNamedPipeW equ <__imp_CallNamedPipeW>
  IFDEF __UNICODE__
    CallNamedPipe equ <__imp_CallNamedPipeW>
  ENDIF

externdef __imp_CancelDeviceWakeupRequest:PPROC
CancelDeviceWakeupRequest equ <__imp_CancelDeviceWakeupRequest>

externdef __imp_CancelIo:PPROC
CancelIo equ <__imp_CancelIo>

externdef __imp_CancelTimerQueueTimer:PPROC
CancelTimerQueueTimer equ <__imp_CancelTimerQueueTimer>

externdef __imp_CancelWaitableTimer:PPROC
CancelWaitableTimer equ <__imp_CancelWaitableTimer>

externdef __imp_ChangeTimerQueueTimer:PPROC
ChangeTimerQueueTimer equ <__imp_ChangeTimerQueueTimer>

externdef __imp_CheckNameLegalDOS8Dot3A:PPROC
CheckNameLegalDOS8Dot3A equ <__imp_CheckNameLegalDOS8Dot3A>
  IFNDEF __UNICODE__
    CheckNameLegalDOS8Dot3 equ <__imp_CheckNameLegalDOS8Dot3A>
  ENDIF

externdef __imp_CheckNameLegalDOS8Dot3W:PPROC
CheckNameLegalDOS8Dot3W equ <__imp_CheckNameLegalDOS8Dot3W>
  IFDEF __UNICODE__
    CheckNameLegalDOS8Dot3 equ <__imp_CheckNameLegalDOS8Dot3W>
  ENDIF

externdef __imp_CheckRemoteDebuggerPresent:PPROC
CheckRemoteDebuggerPresent equ <__imp_CheckRemoteDebuggerPresent>

externdef __imp_ClearCommBreak:PPROC
ClearCommBreak equ <__imp_ClearCommBreak>

externdef __imp_ClearCommError:PPROC
ClearCommError equ <__imp_ClearCommError>

externdef __imp_CloseConsoleHandle:PPROC
CloseConsoleHandle equ <__imp_CloseConsoleHandle>

externdef __imp_CloseHandle:PPROC
CloseHandle equ <__imp_CloseHandle>

externdef __imp_CloseProfileUserMapping:PPROC
CloseProfileUserMapping equ <__imp_CloseProfileUserMapping>

externdef __imp_CmdBatNotification:PPROC
CmdBatNotification equ <__imp_CmdBatNotification>

externdef __imp_CommConfigDialogA:PPROC
CommConfigDialogA equ <__imp_CommConfigDialogA>
  IFNDEF __UNICODE__
    CommConfigDialog equ <__imp_CommConfigDialogA>
  ENDIF

externdef __imp_CommConfigDialogW:PPROC
CommConfigDialogW equ <__imp_CommConfigDialogW>
  IFDEF __UNICODE__
    CommConfigDialog equ <__imp_CommConfigDialogW>
  ENDIF

externdef __imp_CompareFileTime:PPROC
CompareFileTime equ <__imp_CompareFileTime>

externdef __imp_CompareStringA:PPROC
CompareStringA equ <__imp_CompareStringA>
  IFNDEF __UNICODE__
    CompareString equ <__imp_CompareStringA>
  ENDIF

externdef __imp_CompareStringW:PPROC
CompareStringW equ <__imp_CompareStringW>
  IFDEF __UNICODE__
    CompareString equ <__imp_CompareStringW>
  ENDIF

externdef __imp_ConnectNamedPipe:PPROC
ConnectNamedPipe equ <__imp_ConnectNamedPipe>

externdef __imp_ConsoleIMERoutine:PPROC
ConsoleIMERoutine equ <__imp_ConsoleIMERoutine>

externdef __imp_ConsoleMenuControl:PPROC
ConsoleMenuControl equ <__imp_ConsoleMenuControl>

externdef __imp_ContinueDebugEvent:PPROC
ContinueDebugEvent equ <__imp_ContinueDebugEvent>

externdef __imp_ConvertDefaultLocale:PPROC
ConvertDefaultLocale equ <__imp_ConvertDefaultLocale>

externdef __imp_ConvertFiberToThread:PPROC
ConvertFiberToThread equ <__imp_ConvertFiberToThread>

externdef __imp_ConvertThreadToFiber:PPROC
ConvertThreadToFiber equ <__imp_ConvertThreadToFiber>

externdef __imp_ConvertThreadToFiberEx:PPROC
ConvertThreadToFiberEx equ <__imp_ConvertThreadToFiberEx>

externdef __imp_CopyFileA:PPROC
CopyFileA equ <__imp_CopyFileA>
  IFNDEF __UNICODE__
    CopyFile equ <__imp_CopyFileA>
  ENDIF

externdef __imp_CopyFileExA:PPROC
CopyFileExA equ <__imp_CopyFileExA>
  IFNDEF __UNICODE__
    CopyFileEx equ <__imp_CopyFileExA>
  ENDIF

externdef __imp_CopyFileExW:PPROC
CopyFileExW equ <__imp_CopyFileExW>
  IFDEF __UNICODE__
    CopyFileEx equ <__imp_CopyFileExW>
  ENDIF

externdef __imp_CopyFileW:PPROC
CopyFileW equ <__imp_CopyFileW>
  IFDEF __UNICODE__
    CopyFile equ <__imp_CopyFileW>
  ENDIF

externdef __imp_CopyLZFile:PPROC
CopyLZFile equ <__imp_CopyLZFile>

externdef __imp_CreateActCtxA:PPROC
CreateActCtxA equ <__imp_CreateActCtxA>
  IFNDEF __UNICODE__
    CreateActCtx equ <__imp_CreateActCtxA>
  ENDIF

externdef __imp_CreateActCtxW:PPROC
CreateActCtxW equ <__imp_CreateActCtxW>
  IFDEF __UNICODE__
    CreateActCtx equ <__imp_CreateActCtxW>
  ENDIF

externdef __imp_CreateConsoleScreenBuffer:PPROC
CreateConsoleScreenBuffer equ <__imp_CreateConsoleScreenBuffer>

externdef __imp_CreateDirectoryA:PPROC
CreateDirectoryA equ <__imp_CreateDirectoryA>
  IFNDEF __UNICODE__
    CreateDirectory equ <__imp_CreateDirectoryA>
  ENDIF

externdef __imp_CreateDirectoryExA:PPROC
CreateDirectoryExA equ <__imp_CreateDirectoryExA>
  IFNDEF __UNICODE__
    CreateDirectoryEx equ <__imp_CreateDirectoryExA>
  ENDIF

externdef __imp_CreateDirectoryExW:PPROC
CreateDirectoryExW equ <__imp_CreateDirectoryExW>
  IFDEF __UNICODE__
    CreateDirectoryEx equ <__imp_CreateDirectoryExW>
  ENDIF

externdef __imp_CreateDirectoryW:PPROC
CreateDirectoryW equ <__imp_CreateDirectoryW>
  IFDEF __UNICODE__
    CreateDirectory equ <__imp_CreateDirectoryW>
  ENDIF

externdef __imp_CreateEventA:PPROC
CreateEventA equ <__imp_CreateEventA>
  IFNDEF __UNICODE__
    CreateEvent equ <__imp_CreateEventA>
  ENDIF

externdef __imp_CreateEventW:PPROC
CreateEventW equ <__imp_CreateEventW>
  IFDEF __UNICODE__
    CreateEvent equ <__imp_CreateEventW>
  ENDIF

externdef __imp_CreateFiber:PPROC
CreateFiber equ <__imp_CreateFiber>

externdef __imp_CreateFiberEx:PPROC
CreateFiberEx equ <__imp_CreateFiberEx>

externdef __imp_CreateFileA:PPROC
CreateFileA equ <__imp_CreateFileA>
  IFNDEF __UNICODE__
    CreateFile equ <__imp_CreateFileA>
  ENDIF

externdef __imp_CreateFileMappingA:PPROC
CreateFileMappingA equ <__imp_CreateFileMappingA>
  IFNDEF __UNICODE__
    CreateFileMapping equ <__imp_CreateFileMappingA>
  ENDIF

externdef __imp_CreateFileMappingW:PPROC
CreateFileMappingW equ <__imp_CreateFileMappingW>
  IFDEF __UNICODE__
    CreateFileMapping equ <__imp_CreateFileMappingW>
  ENDIF

externdef __imp_CreateFileW:PPROC
CreateFileW equ <__imp_CreateFileW>
  IFDEF __UNICODE__
    CreateFile equ <__imp_CreateFileW>
  ENDIF

externdef __imp_CreateHardLinkA:PPROC
CreateHardLinkA equ <__imp_CreateHardLinkA>
  IFNDEF __UNICODE__
    CreateHardLink equ <__imp_CreateHardLinkA>
  ENDIF

externdef __imp_CreateHardLinkW:PPROC
CreateHardLinkW equ <__imp_CreateHardLinkW>
  IFDEF __UNICODE__
    CreateHardLink equ <__imp_CreateHardLinkW>
  ENDIF

externdef __imp_CreateIoCompletionPort:PPROC
CreateIoCompletionPort equ <__imp_CreateIoCompletionPort>

externdef __imp_CreateJobObjectA:PPROC
CreateJobObjectA equ <__imp_CreateJobObjectA>
  IFNDEF __UNICODE__
    CreateJobObject equ <__imp_CreateJobObjectA>
  ENDIF

externdef __imp_CreateJobObjectW:PPROC
CreateJobObjectW equ <__imp_CreateJobObjectW>
  IFDEF __UNICODE__
    CreateJobObject equ <__imp_CreateJobObjectW>
  ENDIF

externdef __imp_CreateJobSet:PPROC
CreateJobSet equ <__imp_CreateJobSet>

externdef __imp_CreateMailslotA:PPROC
CreateMailslotA equ <__imp_CreateMailslotA>
  IFNDEF __UNICODE__
    CreateMailslot equ <__imp_CreateMailslotA>
  ENDIF

externdef __imp_CreateMailslotW:PPROC
CreateMailslotW equ <__imp_CreateMailslotW>
  IFDEF __UNICODE__
    CreateMailslot equ <__imp_CreateMailslotW>
  ENDIF

externdef __imp_CreateMemoryResourceNotification:PPROC
CreateMemoryResourceNotification equ <__imp_CreateMemoryResourceNotification>

externdef __imp_CreateMutexA:PPROC
CreateMutexA equ <__imp_CreateMutexA>
  IFNDEF __UNICODE__
    CreateMutex equ <__imp_CreateMutexA>
  ENDIF

externdef __imp_CreateMutexW:PPROC
CreateMutexW equ <__imp_CreateMutexW>
  IFDEF __UNICODE__
    CreateMutex equ <__imp_CreateMutexW>
  ENDIF

externdef __imp_CreateNamedPipeA:PPROC
CreateNamedPipeA equ <__imp_CreateNamedPipeA>
  IFNDEF __UNICODE__
    CreateNamedPipe equ <__imp_CreateNamedPipeA>
  ENDIF

externdef __imp_CreateNamedPipeW:PPROC
CreateNamedPipeW equ <__imp_CreateNamedPipeW>
  IFDEF __UNICODE__
    CreateNamedPipe equ <__imp_CreateNamedPipeW>
  ENDIF

externdef __imp_CreateNlsSecurityDescriptor:PPROC
CreateNlsSecurityDescriptor equ <__imp_CreateNlsSecurityDescriptor>

externdef __imp_CreatePipe:PPROC
CreatePipe equ <__imp_CreatePipe>

externdef __imp_CreateProcessA:PPROC
CreateProcessA equ <__imp_CreateProcessA>
  IFNDEF __UNICODE__
    CreateProcess equ <__imp_CreateProcessA>
  ENDIF

externdef __imp_CreateProcessInternalA:PPROC
CreateProcessInternalA equ <__imp_CreateProcessInternalA>
  IFNDEF __UNICODE__
    CreateProcessInternal equ <__imp_CreateProcessInternalA>
  ENDIF

externdef __imp_CreateProcessInternalW:PPROC
CreateProcessInternalW equ <__imp_CreateProcessInternalW>
  IFDEF __UNICODE__
    CreateProcessInternal equ <__imp_CreateProcessInternalW>
  ENDIF

externdef __imp_CreateProcessW:PPROC
CreateProcessW equ <__imp_CreateProcessW>
  IFDEF __UNICODE__
    CreateProcess equ <__imp_CreateProcessW>
  ENDIF

externdef __imp_CreateRemoteThread:PPROC
CreateRemoteThread equ <__imp_CreateRemoteThread>

externdef __imp_CreateSemaphoreA:PPROC
CreateSemaphoreA equ <__imp_CreateSemaphoreA>
  IFNDEF __UNICODE__
    CreateSemaphore equ <__imp_CreateSemaphoreA>
  ENDIF

externdef __imp_CreateSemaphoreW:PPROC
CreateSemaphoreW equ <__imp_CreateSemaphoreW>
  IFDEF __UNICODE__
    CreateSemaphore equ <__imp_CreateSemaphoreW>
  ENDIF

externdef __imp_CreateTapePartition:PPROC
CreateTapePartition equ <__imp_CreateTapePartition>

externdef __imp_CreateThread:PPROC
CreateThread equ <__imp_CreateThread>

externdef __imp_CreateTimerQueue:PPROC
CreateTimerQueue equ <__imp_CreateTimerQueue>

externdef __imp_CreateTimerQueueTimer:PPROC
CreateTimerQueueTimer equ <__imp_CreateTimerQueueTimer>

externdef __imp_CreateToolhelp32Snapshot:PPROC
CreateToolhelp32Snapshot equ <__imp_CreateToolhelp32Snapshot>

externdef __imp_CreateWaitableTimerA:PPROC
CreateWaitableTimerA equ <__imp_CreateWaitableTimerA>
  IFNDEF __UNICODE__
    CreateWaitableTimer equ <__imp_CreateWaitableTimerA>
  ENDIF

externdef __imp_CreateWaitableTimerW:PPROC
CreateWaitableTimerW equ <__imp_CreateWaitableTimerW>
  IFDEF __UNICODE__
    CreateWaitableTimer equ <__imp_CreateWaitableTimerW>
  ENDIF

externdef __imp_CtrlRoutine:PPROC
CtrlRoutine equ <__imp_CtrlRoutine>

externdef __imp_DeactivateActCtx:PPROC
DeactivateActCtx equ <__imp_DeactivateActCtx>

externdef __imp_DebugActiveProcess:PPROC
DebugActiveProcess equ <__imp_DebugActiveProcess>

externdef __imp_DebugActiveProcessStop:PPROC
DebugActiveProcessStop equ <__imp_DebugActiveProcessStop>

externdef __imp_DebugBreak:PPROC
DebugBreak equ <__imp_DebugBreak>

externdef __imp_DebugBreakProcess:PPROC
DebugBreakProcess equ <__imp_DebugBreakProcess>

externdef __imp_DebugSetProcessKillOnExit:PPROC
DebugSetProcessKillOnExit equ <__imp_DebugSetProcessKillOnExit>

externdef __imp_DecodePointer:PPROC
DecodePointer equ <__imp_DecodePointer>

externdef __imp_DecodeSystemPointer:PPROC
DecodeSystemPointer equ <__imp_DecodeSystemPointer>

externdef __imp_DefineDosDeviceA:PPROC
DefineDosDeviceA equ <__imp_DefineDosDeviceA>
  IFNDEF __UNICODE__
    DefineDosDevice equ <__imp_DefineDosDeviceA>
  ENDIF

externdef __imp_DefineDosDeviceW:PPROC
DefineDosDeviceW equ <__imp_DefineDosDeviceW>
  IFDEF __UNICODE__
    DefineDosDevice equ <__imp_DefineDosDeviceW>
  ENDIF

externdef __imp_DelayLoadFailureHook:PPROC
DelayLoadFailureHook equ <__imp_DelayLoadFailureHook>

externdef __imp_DeleteAtom:PPROC
DeleteAtom equ <__imp_DeleteAtom>

externdef __imp_DeleteCriticalSection:PPROC
DeleteCriticalSection equ <__imp_DeleteCriticalSection>

externdef __imp_DeleteFiber:PPROC
DeleteFiber equ <__imp_DeleteFiber>

externdef __imp_DeleteFileA:PPROC
DeleteFileA equ <__imp_DeleteFileA>
  IFNDEF __UNICODE__
    DeleteFile equ <__imp_DeleteFileA>
  ENDIF

externdef __imp_DeleteFileW:PPROC
DeleteFileW equ <__imp_DeleteFileW>
  IFDEF __UNICODE__
    DeleteFile equ <__imp_DeleteFileW>
  ENDIF

externdef __imp_DeleteTimerQueue:PPROC
DeleteTimerQueue equ <__imp_DeleteTimerQueue>

externdef __imp_DeleteTimerQueueEx:PPROC
DeleteTimerQueueEx equ <__imp_DeleteTimerQueueEx>

externdef __imp_DeleteTimerQueueTimer:PPROC
DeleteTimerQueueTimer equ <__imp_DeleteTimerQueueTimer>

externdef __imp_DeleteVolumeMountPointA:PPROC
DeleteVolumeMountPointA equ <__imp_DeleteVolumeMountPointA>
  IFNDEF __UNICODE__
    DeleteVolumeMountPoint equ <__imp_DeleteVolumeMountPointA>
  ENDIF

externdef __imp_DeleteVolumeMountPointW:PPROC
DeleteVolumeMountPointW equ <__imp_DeleteVolumeMountPointW>
  IFDEF __UNICODE__
    DeleteVolumeMountPoint equ <__imp_DeleteVolumeMountPointW>
  ENDIF

externdef __imp_DeviceIoControl:PPROC
DeviceIoControl equ <__imp_DeviceIoControl>

externdef __imp_DisableThreadLibraryCalls:PPROC
DisableThreadLibraryCalls equ <__imp_DisableThreadLibraryCalls>

externdef __imp_DisconnectNamedPipe:PPROC
DisconnectNamedPipe equ <__imp_DisconnectNamedPipe>

externdef __imp_DnsHostnameToComputerNameA:PPROC
DnsHostnameToComputerNameA equ <__imp_DnsHostnameToComputerNameA>
  IFNDEF __UNICODE__
    DnsHostnameToComputerName equ <__imp_DnsHostnameToComputerNameA>
  ENDIF

externdef __imp_DnsHostnameToComputerNameW:PPROC
DnsHostnameToComputerNameW equ <__imp_DnsHostnameToComputerNameW>
  IFDEF __UNICODE__
    DnsHostnameToComputerName equ <__imp_DnsHostnameToComputerNameW>
  ENDIF

externdef __imp_DosDateTimeToFileTime:PPROC
DosDateTimeToFileTime equ <__imp_DosDateTimeToFileTime>

externdef __imp_DosPathToSessionPathA:PPROC
DosPathToSessionPathA equ <__imp_DosPathToSessionPathA>
  IFNDEF __UNICODE__
    DosPathToSessionPath equ <__imp_DosPathToSessionPathA>
  ENDIF

externdef __imp_DosPathToSessionPathW:PPROC
DosPathToSessionPathW equ <__imp_DosPathToSessionPathW>
  IFDEF __UNICODE__
    DosPathToSessionPath equ <__imp_DosPathToSessionPathW>
  ENDIF

externdef __imp_DuplicateConsoleHandle:PPROC
DuplicateConsoleHandle equ <__imp_DuplicateConsoleHandle>

externdef __imp_DuplicateHandle:PPROC
DuplicateHandle equ <__imp_DuplicateHandle>

externdef __imp_EncodePointer:PPROC
EncodePointer equ <__imp_EncodePointer>

externdef __imp_EncodeSystemPointer:PPROC
EncodeSystemPointer equ <__imp_EncodeSystemPointer>

externdef __imp_EndUpdateResourceA:PPROC
EndUpdateResourceA equ <__imp_EndUpdateResourceA>
  IFNDEF __UNICODE__
    EndUpdateResource equ <__imp_EndUpdateResourceA>
  ENDIF

externdef __imp_EndUpdateResourceW:PPROC
EndUpdateResourceW equ <__imp_EndUpdateResourceW>
  IFDEF __UNICODE__
    EndUpdateResource equ <__imp_EndUpdateResourceW>
  ENDIF

externdef __imp_EnterCriticalSection:PPROC
EnterCriticalSection equ <__imp_EnterCriticalSection>

externdef __imp_EnumCalendarInfoA:PPROC
EnumCalendarInfoA equ <__imp_EnumCalendarInfoA>
  IFNDEF __UNICODE__
    EnumCalendarInfo equ <__imp_EnumCalendarInfoA>
  ENDIF

externdef __imp_EnumCalendarInfoExA:PPROC
EnumCalendarInfoExA equ <__imp_EnumCalendarInfoExA>
  IFNDEF __UNICODE__
    EnumCalendarInfoEx equ <__imp_EnumCalendarInfoExA>
  ENDIF

externdef __imp_EnumCalendarInfoExW:PPROC
EnumCalendarInfoExW equ <__imp_EnumCalendarInfoExW>
  IFDEF __UNICODE__
    EnumCalendarInfoEx equ <__imp_EnumCalendarInfoExW>
  ENDIF

externdef __imp_EnumCalendarInfoW:PPROC
EnumCalendarInfoW equ <__imp_EnumCalendarInfoW>
  IFDEF __UNICODE__
    EnumCalendarInfo equ <__imp_EnumCalendarInfoW>
  ENDIF

externdef __imp_EnumDateFormatsA:PPROC
EnumDateFormatsA equ <__imp_EnumDateFormatsA>
  IFNDEF __UNICODE__
    EnumDateFormats equ <__imp_EnumDateFormatsA>
  ENDIF

externdef __imp_EnumDateFormatsExA:PPROC
EnumDateFormatsExA equ <__imp_EnumDateFormatsExA>
  IFNDEF __UNICODE__
    EnumDateFormatsEx equ <__imp_EnumDateFormatsExA>
  ENDIF

externdef __imp_EnumDateFormatsExW:PPROC
EnumDateFormatsExW equ <__imp_EnumDateFormatsExW>
  IFDEF __UNICODE__
    EnumDateFormatsEx equ <__imp_EnumDateFormatsExW>
  ENDIF

externdef __imp_EnumDateFormatsW:PPROC
EnumDateFormatsW equ <__imp_EnumDateFormatsW>
  IFDEF __UNICODE__
    EnumDateFormats equ <__imp_EnumDateFormatsW>
  ENDIF

externdef __imp_EnumLanguageGroupLocalesA:PPROC
EnumLanguageGroupLocalesA equ <__imp_EnumLanguageGroupLocalesA>
  IFNDEF __UNICODE__
    EnumLanguageGroupLocales equ <__imp_EnumLanguageGroupLocalesA>
  ENDIF

externdef __imp_EnumLanguageGroupLocalesW:PPROC
EnumLanguageGroupLocalesW equ <__imp_EnumLanguageGroupLocalesW>
  IFDEF __UNICODE__
    EnumLanguageGroupLocales equ <__imp_EnumLanguageGroupLocalesW>
  ENDIF

externdef __imp_EnumResourceLanguagesA:PPROC
EnumResourceLanguagesA equ <__imp_EnumResourceLanguagesA>
  IFNDEF __UNICODE__
    EnumResourceLanguages equ <__imp_EnumResourceLanguagesA>
  ENDIF

externdef __imp_EnumResourceLanguagesW:PPROC
EnumResourceLanguagesW equ <__imp_EnumResourceLanguagesW>
  IFDEF __UNICODE__
    EnumResourceLanguages equ <__imp_EnumResourceLanguagesW>
  ENDIF

externdef __imp_EnumResourceNamesA:PPROC
EnumResourceNamesA equ <__imp_EnumResourceNamesA>
  IFNDEF __UNICODE__
    EnumResourceNames equ <__imp_EnumResourceNamesA>
  ENDIF

externdef __imp_EnumResourceNamesW:PPROC
EnumResourceNamesW equ <__imp_EnumResourceNamesW>
  IFDEF __UNICODE__
    EnumResourceNames equ <__imp_EnumResourceNamesW>
  ENDIF

externdef __imp_EnumResourceTypesA:PPROC
EnumResourceTypesA equ <__imp_EnumResourceTypesA>
  IFNDEF __UNICODE__
    EnumResourceTypes equ <__imp_EnumResourceTypesA>
  ENDIF

externdef __imp_EnumResourceTypesW:PPROC
EnumResourceTypesW equ <__imp_EnumResourceTypesW>
  IFDEF __UNICODE__
    EnumResourceTypes equ <__imp_EnumResourceTypesW>
  ENDIF

externdef __imp_EnumSystemCodePagesA:PPROC
EnumSystemCodePagesA equ <__imp_EnumSystemCodePagesA>
  IFNDEF __UNICODE__
    EnumSystemCodePages equ <__imp_EnumSystemCodePagesA>
  ENDIF

externdef __imp_EnumSystemCodePagesW:PPROC
EnumSystemCodePagesW equ <__imp_EnumSystemCodePagesW>
  IFDEF __UNICODE__
    EnumSystemCodePages equ <__imp_EnumSystemCodePagesW>
  ENDIF

externdef __imp_EnumSystemFirmwareTables:PPROC
EnumSystemFirmwareTables equ <__imp_EnumSystemFirmwareTables>

externdef __imp_EnumSystemGeoID:PPROC
EnumSystemGeoID equ <__imp_EnumSystemGeoID>

externdef __imp_EnumSystemLanguageGroupsA:PPROC
EnumSystemLanguageGroupsA equ <__imp_EnumSystemLanguageGroupsA>
  IFNDEF __UNICODE__
    EnumSystemLanguageGroups equ <__imp_EnumSystemLanguageGroupsA>
  ENDIF

externdef __imp_EnumSystemLanguageGroupsW:PPROC
EnumSystemLanguageGroupsW equ <__imp_EnumSystemLanguageGroupsW>
  IFDEF __UNICODE__
    EnumSystemLanguageGroups equ <__imp_EnumSystemLanguageGroupsW>
  ENDIF

externdef __imp_EnumSystemLocalesA:PPROC
EnumSystemLocalesA equ <__imp_EnumSystemLocalesA>
  IFNDEF __UNICODE__
    EnumSystemLocales equ <__imp_EnumSystemLocalesA>
  ENDIF

externdef __imp_EnumSystemLocalesW:PPROC
EnumSystemLocalesW equ <__imp_EnumSystemLocalesW>
  IFDEF __UNICODE__
    EnumSystemLocales equ <__imp_EnumSystemLocalesW>
  ENDIF

externdef __imp_EnumTimeFormatsA:PPROC
EnumTimeFormatsA equ <__imp_EnumTimeFormatsA>
  IFNDEF __UNICODE__
    EnumTimeFormats equ <__imp_EnumTimeFormatsA>
  ENDIF

externdef __imp_EnumTimeFormatsW:PPROC
EnumTimeFormatsW equ <__imp_EnumTimeFormatsW>
  IFDEF __UNICODE__
    EnumTimeFormats equ <__imp_EnumTimeFormatsW>
  ENDIF

externdef __imp_EnumUILanguagesA:PPROC
EnumUILanguagesA equ <__imp_EnumUILanguagesA>
  IFNDEF __UNICODE__
    EnumUILanguages equ <__imp_EnumUILanguagesA>
  ENDIF

externdef __imp_EnumUILanguagesW:PPROC
EnumUILanguagesW equ <__imp_EnumUILanguagesW>
  IFDEF __UNICODE__
    EnumUILanguages equ <__imp_EnumUILanguagesW>
  ENDIF

externdef __imp_EnumerateLocalComputerNamesA:PPROC
EnumerateLocalComputerNamesA equ <__imp_EnumerateLocalComputerNamesA>
  IFNDEF __UNICODE__
    EnumerateLocalComputerNames equ <__imp_EnumerateLocalComputerNamesA>
  ENDIF

externdef __imp_EnumerateLocalComputerNamesW:PPROC
EnumerateLocalComputerNamesW equ <__imp_EnumerateLocalComputerNamesW>
  IFDEF __UNICODE__
    EnumerateLocalComputerNames equ <__imp_EnumerateLocalComputerNamesW>
  ENDIF

externdef __imp_EraseTape:PPROC
EraseTape equ <__imp_EraseTape>

externdef __imp_EscapeCommFunction:PPROC
EscapeCommFunction equ <__imp_EscapeCommFunction>

externdef __imp_ExitProcess:PPROC
ExitProcess equ <__imp_ExitProcess>

externdef __imp_ExitThread:PPROC
ExitThread equ <__imp_ExitThread>

externdef __imp_ExitVDM:PPROC
ExitVDM equ <__imp_ExitVDM>

externdef __imp_ExpandEnvironmentStringsA:PPROC
ExpandEnvironmentStringsA equ <__imp_ExpandEnvironmentStringsA>
  IFNDEF __UNICODE__
    ExpandEnvironmentStrings equ <__imp_ExpandEnvironmentStringsA>
  ENDIF

externdef __imp_ExpandEnvironmentStringsW:PPROC
ExpandEnvironmentStringsW equ <__imp_ExpandEnvironmentStringsW>
  IFDEF __UNICODE__
    ExpandEnvironmentStrings equ <__imp_ExpandEnvironmentStringsW>
  ENDIF

externdef __imp_ExpungeConsoleCommandHistoryA:PPROC
ExpungeConsoleCommandHistoryA equ <__imp_ExpungeConsoleCommandHistoryA>
  IFNDEF __UNICODE__
    ExpungeConsoleCommandHistory equ <__imp_ExpungeConsoleCommandHistoryA>
  ENDIF

externdef __imp_ExpungeConsoleCommandHistoryW:PPROC
ExpungeConsoleCommandHistoryW equ <__imp_ExpungeConsoleCommandHistoryW>
  IFDEF __UNICODE__
    ExpungeConsoleCommandHistory equ <__imp_ExpungeConsoleCommandHistoryW>
  ENDIF

externdef __imp_FatalAppExitA:PPROC
FatalAppExitA equ <__imp_FatalAppExitA>
  IFNDEF __UNICODE__
    FatalAppExit equ <__imp_FatalAppExitA>
  ENDIF

externdef __imp_FatalAppExitW:PPROC
FatalAppExitW equ <__imp_FatalAppExitW>
  IFDEF __UNICODE__
    FatalAppExit equ <__imp_FatalAppExitW>
  ENDIF

externdef __imp_FatalExit:PPROC
FatalExit equ <__imp_FatalExit>

externdef __imp_FileTimeToDosDateTime:PPROC
FileTimeToDosDateTime equ <__imp_FileTimeToDosDateTime>

externdef __imp_FileTimeToLocalFileTime:PPROC
FileTimeToLocalFileTime equ <__imp_FileTimeToLocalFileTime>

externdef __imp_FileTimeToSystemTime:PPROC
FileTimeToSystemTime equ <__imp_FileTimeToSystemTime>

externdef __imp_FillConsoleOutputAttribute:PPROC
FillConsoleOutputAttribute equ <__imp_FillConsoleOutputAttribute>

externdef __imp_FillConsoleOutputCharacterA:PPROC
FillConsoleOutputCharacterA equ <__imp_FillConsoleOutputCharacterA>
  IFNDEF __UNICODE__
    FillConsoleOutputCharacter equ <__imp_FillConsoleOutputCharacterA>
  ENDIF

externdef __imp_FillConsoleOutputCharacterW:PPROC
FillConsoleOutputCharacterW equ <__imp_FillConsoleOutputCharacterW>
  IFDEF __UNICODE__
    FillConsoleOutputCharacter equ <__imp_FillConsoleOutputCharacterW>
  ENDIF

externdef __imp_FindActCtxSectionGuid:PPROC
FindActCtxSectionGuid equ <__imp_FindActCtxSectionGuid>

externdef __imp_FindActCtxSectionStringA:PPROC
FindActCtxSectionStringA equ <__imp_FindActCtxSectionStringA>
  IFNDEF __UNICODE__
    FindActCtxSectionString equ <__imp_FindActCtxSectionStringA>
  ENDIF

externdef __imp_FindActCtxSectionStringW:PPROC
FindActCtxSectionStringW equ <__imp_FindActCtxSectionStringW>
  IFDEF __UNICODE__
    FindActCtxSectionString equ <__imp_FindActCtxSectionStringW>
  ENDIF

externdef __imp_FindAtomA:PPROC
FindAtomA equ <__imp_FindAtomA>
  IFNDEF __UNICODE__
    FindAtom equ <__imp_FindAtomA>
  ENDIF

externdef __imp_FindAtomW:PPROC
FindAtomW equ <__imp_FindAtomW>
  IFDEF __UNICODE__
    FindAtom equ <__imp_FindAtomW>
  ENDIF

externdef __imp_FindClose:PPROC
FindClose equ <__imp_FindClose>

externdef __imp_FindCloseChangeNotification:PPROC
FindCloseChangeNotification equ <__imp_FindCloseChangeNotification>

externdef __imp_FindFirstChangeNotificationA:PPROC
FindFirstChangeNotificationA equ <__imp_FindFirstChangeNotificationA>
  IFNDEF __UNICODE__
    FindFirstChangeNotification equ <__imp_FindFirstChangeNotificationA>
  ENDIF

externdef __imp_FindFirstChangeNotificationW:PPROC
FindFirstChangeNotificationW equ <__imp_FindFirstChangeNotificationW>
  IFDEF __UNICODE__
    FindFirstChangeNotification equ <__imp_FindFirstChangeNotificationW>
  ENDIF

externdef __imp_FindFirstFileA:PPROC
FindFirstFileA equ <__imp_FindFirstFileA>
  IFNDEF __UNICODE__
    FindFirstFile equ <__imp_FindFirstFileA>
  ENDIF

externdef __imp_FindFirstFileExA:PPROC
FindFirstFileExA equ <__imp_FindFirstFileExA>
  IFNDEF __UNICODE__
    FindFirstFileEx equ <__imp_FindFirstFileExA>
  ENDIF

externdef __imp_FindFirstFileExW:PPROC
FindFirstFileExW equ <__imp_FindFirstFileExW>
  IFDEF __UNICODE__
    FindFirstFileEx equ <__imp_FindFirstFileExW>
  ENDIF

externdef __imp_FindFirstFileW:PPROC
FindFirstFileW equ <__imp_FindFirstFileW>
  IFDEF __UNICODE__
    FindFirstFile equ <__imp_FindFirstFileW>
  ENDIF

externdef __imp_FindFirstStreamW:PPROC
FindFirstStreamW equ <__imp_FindFirstStreamW>
  IFDEF __UNICODE__
    FindFirstStream equ <__imp_FindFirstStreamW>
  ENDIF

externdef __imp_FindFirstVolumeA:PPROC
FindFirstVolumeA equ <__imp_FindFirstVolumeA>
  IFNDEF __UNICODE__
    FindFirstVolume equ <__imp_FindFirstVolumeA>
  ENDIF

externdef __imp_FindFirstVolumeMountPointA:PPROC
FindFirstVolumeMountPointA equ <__imp_FindFirstVolumeMountPointA>
  IFNDEF __UNICODE__
    FindFirstVolumeMountPoint equ <__imp_FindFirstVolumeMountPointA>
  ENDIF

externdef __imp_FindFirstVolumeMountPointW:PPROC
FindFirstVolumeMountPointW equ <__imp_FindFirstVolumeMountPointW>
  IFDEF __UNICODE__
    FindFirstVolumeMountPoint equ <__imp_FindFirstVolumeMountPointW>
  ENDIF

externdef __imp_FindFirstVolumeW:PPROC
FindFirstVolumeW equ <__imp_FindFirstVolumeW>
  IFDEF __UNICODE__
    FindFirstVolume equ <__imp_FindFirstVolumeW>
  ENDIF

externdef __imp_FindNextChangeNotification:PPROC
FindNextChangeNotification equ <__imp_FindNextChangeNotification>

externdef __imp_FindNextFileA:PPROC
FindNextFileA equ <__imp_FindNextFileA>
  IFNDEF __UNICODE__
    FindNextFile equ <__imp_FindNextFileA>
  ENDIF

externdef __imp_FindNextFileW:PPROC
FindNextFileW equ <__imp_FindNextFileW>
  IFDEF __UNICODE__
    FindNextFile equ <__imp_FindNextFileW>
  ENDIF

externdef __imp_FindNextStreamW:PPROC
FindNextStreamW equ <__imp_FindNextStreamW>
  IFDEF __UNICODE__
    FindNextStream equ <__imp_FindNextStreamW>
  ENDIF

externdef __imp_FindNextVolumeA:PPROC
FindNextVolumeA equ <__imp_FindNextVolumeA>
  IFNDEF __UNICODE__
    FindNextVolume equ <__imp_FindNextVolumeA>
  ENDIF

externdef __imp_FindNextVolumeMountPointA:PPROC
FindNextVolumeMountPointA equ <__imp_FindNextVolumeMountPointA>
  IFNDEF __UNICODE__
    FindNextVolumeMountPoint equ <__imp_FindNextVolumeMountPointA>
  ENDIF

externdef __imp_FindNextVolumeMountPointW:PPROC
FindNextVolumeMountPointW equ <__imp_FindNextVolumeMountPointW>
  IFDEF __UNICODE__
    FindNextVolumeMountPoint equ <__imp_FindNextVolumeMountPointW>
  ENDIF

externdef __imp_FindNextVolumeW:PPROC
FindNextVolumeW equ <__imp_FindNextVolumeW>
  IFDEF __UNICODE__
    FindNextVolume equ <__imp_FindNextVolumeW>
  ENDIF

externdef __imp_FindResourceA:PPROC
FindResourceA equ <__imp_FindResourceA>
  IFNDEF __UNICODE__
    FindResource equ <__imp_FindResourceA>
  ENDIF

externdef __imp_FindResourceExA:PPROC
FindResourceExA equ <__imp_FindResourceExA>
  IFNDEF __UNICODE__
    FindResourceEx equ <__imp_FindResourceExA>
  ENDIF

externdef __imp_FindResourceExW:PPROC
FindResourceExW equ <__imp_FindResourceExW>
  IFDEF __UNICODE__
    FindResourceEx equ <__imp_FindResourceExW>
  ENDIF

externdef __imp_FindResourceW:PPROC
FindResourceW equ <__imp_FindResourceW>
  IFDEF __UNICODE__
    FindResource equ <__imp_FindResourceW>
  ENDIF

externdef __imp_FindVolumeClose:PPROC
FindVolumeClose equ <__imp_FindVolumeClose>

externdef __imp_FindVolumeMountPointClose:PPROC
FindVolumeMountPointClose equ <__imp_FindVolumeMountPointClose>

externdef __imp_FlsAlloc:PPROC
FlsAlloc equ <__imp_FlsAlloc>

externdef __imp_FlsFree:PPROC
FlsFree equ <__imp_FlsFree>

externdef __imp_FlsGetValue:PPROC
FlsGetValue equ <__imp_FlsGetValue>

externdef __imp_FlsSetValue:PPROC
FlsSetValue equ <__imp_FlsSetValue>

externdef __imp_FlushConsoleInputBuffer:PPROC
FlushConsoleInputBuffer equ <__imp_FlushConsoleInputBuffer>

externdef __imp_FlushFileBuffers:PPROC
FlushFileBuffers equ <__imp_FlushFileBuffers>

externdef __imp_FlushInstructionCache:PPROC
FlushInstructionCache equ <__imp_FlushInstructionCache>

externdef __imp_FlushViewOfFile:PPROC
FlushViewOfFile equ <__imp_FlushViewOfFile>

externdef __imp_FoldStringA:PPROC
FoldStringA equ <__imp_FoldStringA>
  IFNDEF __UNICODE__
    FoldString equ <__imp_FoldStringA>
  ENDIF

externdef __imp_FoldStringW:PPROC
FoldStringW equ <__imp_FoldStringW>
  IFDEF __UNICODE__
    FoldString equ <__imp_FoldStringW>
  ENDIF

externdef __imp_FormatMessageA:PPROC
FormatMessageA equ <__imp_FormatMessageA>
  IFNDEF __UNICODE__
    FormatMessage equ <__imp_FormatMessageA>
  ENDIF

externdef __imp_FormatMessageW:PPROC
FormatMessageW equ <__imp_FormatMessageW>
  IFDEF __UNICODE__
    FormatMessage equ <__imp_FormatMessageW>
  ENDIF

externdef __imp_FreeConsole:PPROC
FreeConsole equ <__imp_FreeConsole>

externdef __imp_FreeEnvironmentStringsA:PPROC
FreeEnvironmentStringsA equ <__imp_FreeEnvironmentStringsA>
  IFNDEF __UNICODE__
    FreeEnvironmentStrings equ <__imp_FreeEnvironmentStringsA>
  ENDIF

externdef __imp_FreeEnvironmentStringsW:PPROC
FreeEnvironmentStringsW equ <__imp_FreeEnvironmentStringsW>
  IFDEF __UNICODE__
    FreeEnvironmentStrings equ <__imp_FreeEnvironmentStringsW>
  ENDIF

externdef __imp_FreeLibrary:PPROC
FreeLibrary equ <__imp_FreeLibrary>

externdef __imp_FreeLibraryAndExitThread:PPROC
FreeLibraryAndExitThread equ <__imp_FreeLibraryAndExitThread>

externdef __imp_FreeResource:PPROC
FreeResource equ <__imp_FreeResource>

externdef __imp_FreeUserPhysicalPages:PPROC
FreeUserPhysicalPages equ <__imp_FreeUserPhysicalPages>

externdef __imp_GenerateConsoleCtrlEvent:PPROC
GenerateConsoleCtrlEvent equ <__imp_GenerateConsoleCtrlEvent>

externdef __imp_GetACP:PPROC
GetACP equ <__imp_GetACP>

externdef __imp_GetAtomNameA:PPROC
GetAtomNameA equ <__imp_GetAtomNameA>
  IFNDEF __UNICODE__
    GetAtomName equ <__imp_GetAtomNameA>
  ENDIF

externdef __imp_GetAtomNameW:PPROC
GetAtomNameW equ <__imp_GetAtomNameW>
  IFDEF __UNICODE__
    GetAtomName equ <__imp_GetAtomNameW>
  ENDIF

externdef __imp_GetBinaryType:PPROC
GetBinaryType equ <__imp_GetBinaryType>

externdef __imp_GetBinaryTypeA:PPROC
GetBinaryTypeA equ <__imp_GetBinaryTypeA>
  IFNDEF __UNICODE__
    GetBinaryType equ <__imp_GetBinaryTypeA>
  ENDIF

externdef __imp_GetBinaryTypeW:PPROC
GetBinaryTypeW equ <__imp_GetBinaryTypeW>
  IFDEF __UNICODE__
    GetBinaryType equ <__imp_GetBinaryTypeW>
  ENDIF

externdef __imp_GetCPFileNameFromRegistry:PPROC
GetCPFileNameFromRegistry equ <__imp_GetCPFileNameFromRegistry>

externdef __imp_GetCPInfo:PPROC
GetCPInfo equ <__imp_GetCPInfo>

externdef __imp_GetCPInfoExA:PPROC
GetCPInfoExA equ <__imp_GetCPInfoExA>
  IFNDEF __UNICODE__
    GetCPInfoEx equ <__imp_GetCPInfoExA>
  ENDIF

externdef __imp_GetCPInfoExW:PPROC
GetCPInfoExW equ <__imp_GetCPInfoExW>
  IFDEF __UNICODE__
    GetCPInfoEx equ <__imp_GetCPInfoExW>
  ENDIF

externdef __imp_GetCalendarInfoA:PPROC
GetCalendarInfoA equ <__imp_GetCalendarInfoA>
  IFNDEF __UNICODE__
    GetCalendarInfo equ <__imp_GetCalendarInfoA>
  ENDIF

externdef __imp_GetCalendarInfoW:PPROC
GetCalendarInfoW equ <__imp_GetCalendarInfoW>
  IFDEF __UNICODE__
    GetCalendarInfo equ <__imp_GetCalendarInfoW>
  ENDIF

externdef __imp_GetComPlusPackageInstallStatus:PPROC
GetComPlusPackageInstallStatus equ <__imp_GetComPlusPackageInstallStatus>

externdef __imp_GetCommConfig:PPROC
GetCommConfig equ <__imp_GetCommConfig>

externdef __imp_GetCommMask:PPROC
GetCommMask equ <__imp_GetCommMask>

externdef __imp_GetCommModemStatus:PPROC
GetCommModemStatus equ <__imp_GetCommModemStatus>

externdef __imp_GetCommProperties:PPROC
GetCommProperties equ <__imp_GetCommProperties>

externdef __imp_GetCommState:PPROC
GetCommState equ <__imp_GetCommState>

externdef __imp_GetCommTimeouts:PPROC
GetCommTimeouts equ <__imp_GetCommTimeouts>

externdef __imp_GetCommandLineA:PPROC
GetCommandLineA equ <__imp_GetCommandLineA>
  IFNDEF __UNICODE__
    GetCommandLine equ <__imp_GetCommandLineA>
  ENDIF

externdef __imp_GetCommandLineW:PPROC
GetCommandLineW equ <__imp_GetCommandLineW>
  IFDEF __UNICODE__
    GetCommandLine equ <__imp_GetCommandLineW>
  ENDIF

externdef __imp_GetCompressedFileSizeA:PPROC
GetCompressedFileSizeA equ <__imp_GetCompressedFileSizeA>
  IFNDEF __UNICODE__
    GetCompressedFileSize equ <__imp_GetCompressedFileSizeA>
  ENDIF

externdef __imp_GetCompressedFileSizeW:PPROC
GetCompressedFileSizeW equ <__imp_GetCompressedFileSizeW>
  IFDEF __UNICODE__
    GetCompressedFileSize equ <__imp_GetCompressedFileSizeW>
  ENDIF

externdef __imp_GetComputerNameA:PPROC
GetComputerNameA equ <__imp_GetComputerNameA>
  IFNDEF __UNICODE__
    GetComputerName equ <__imp_GetComputerNameA>
  ENDIF

externdef __imp_GetComputerNameExA:PPROC
GetComputerNameExA equ <__imp_GetComputerNameExA>
  IFNDEF __UNICODE__
    GetComputerNameEx equ <__imp_GetComputerNameExA>
  ENDIF

externdef __imp_GetComputerNameExW:PPROC
GetComputerNameExW equ <__imp_GetComputerNameExW>
  IFDEF __UNICODE__
    GetComputerNameEx equ <__imp_GetComputerNameExW>
  ENDIF

externdef __imp_GetComputerNameW:PPROC
GetComputerNameW equ <__imp_GetComputerNameW>
  IFDEF __UNICODE__
    GetComputerName equ <__imp_GetComputerNameW>
  ENDIF

externdef __imp_GetConsoleAliasA:PPROC
GetConsoleAliasA equ <__imp_GetConsoleAliasA>
  IFNDEF __UNICODE__
    GetConsoleAlias equ <__imp_GetConsoleAliasA>
  ENDIF

externdef __imp_GetConsoleAliasExesA:PPROC
GetConsoleAliasExesA equ <__imp_GetConsoleAliasExesA>
  IFNDEF __UNICODE__
    GetConsoleAliasExes equ <__imp_GetConsoleAliasExesA>
  ENDIF

externdef __imp_GetConsoleAliasExesLengthA:PPROC
GetConsoleAliasExesLengthA equ <__imp_GetConsoleAliasExesLengthA>
  IFNDEF __UNICODE__
    GetConsoleAliasExesLength equ <__imp_GetConsoleAliasExesLengthA>
  ENDIF

externdef __imp_GetConsoleAliasExesLengthW:PPROC
GetConsoleAliasExesLengthW equ <__imp_GetConsoleAliasExesLengthW>
  IFDEF __UNICODE__
    GetConsoleAliasExesLength equ <__imp_GetConsoleAliasExesLengthW>
  ENDIF

externdef __imp_GetConsoleAliasExesW:PPROC
GetConsoleAliasExesW equ <__imp_GetConsoleAliasExesW>
  IFDEF __UNICODE__
    GetConsoleAliasExes equ <__imp_GetConsoleAliasExesW>
  ENDIF

externdef __imp_GetConsoleAliasW:PPROC
GetConsoleAliasW equ <__imp_GetConsoleAliasW>
  IFDEF __UNICODE__
    GetConsoleAlias equ <__imp_GetConsoleAliasW>
  ENDIF

externdef __imp_GetConsoleAliasesA:PPROC
GetConsoleAliasesA equ <__imp_GetConsoleAliasesA>
  IFNDEF __UNICODE__
    GetConsoleAliases equ <__imp_GetConsoleAliasesA>
  ENDIF

externdef __imp_GetConsoleAliasesLengthA:PPROC
GetConsoleAliasesLengthA equ <__imp_GetConsoleAliasesLengthA>
  IFNDEF __UNICODE__
    GetConsoleAliasesLength equ <__imp_GetConsoleAliasesLengthA>
  ENDIF

externdef __imp_GetConsoleAliasesLengthW:PPROC
GetConsoleAliasesLengthW equ <__imp_GetConsoleAliasesLengthW>
  IFDEF __UNICODE__
    GetConsoleAliasesLength equ <__imp_GetConsoleAliasesLengthW>
  ENDIF

externdef __imp_GetConsoleAliasesW:PPROC
GetConsoleAliasesW equ <__imp_GetConsoleAliasesW>
  IFDEF __UNICODE__
    GetConsoleAliases equ <__imp_GetConsoleAliasesW>
  ENDIF

externdef __imp_GetConsoleCP:PPROC
GetConsoleCP equ <__imp_GetConsoleCP>

externdef __imp_GetConsoleCharType:PPROC
GetConsoleCharType equ <__imp_GetConsoleCharType>

externdef __imp_GetConsoleCommandHistoryA:PPROC
GetConsoleCommandHistoryA equ <__imp_GetConsoleCommandHistoryA>
  IFNDEF __UNICODE__
    GetConsoleCommandHistory equ <__imp_GetConsoleCommandHistoryA>
  ENDIF

externdef __imp_GetConsoleCommandHistoryLengthA:PPROC
GetConsoleCommandHistoryLengthA equ <__imp_GetConsoleCommandHistoryLengthA>
  IFNDEF __UNICODE__
    GetConsoleCommandHistoryLength equ <__imp_GetConsoleCommandHistoryLengthA>
  ENDIF

externdef __imp_GetConsoleCommandHistoryLengthW:PPROC
GetConsoleCommandHistoryLengthW equ <__imp_GetConsoleCommandHistoryLengthW>
  IFDEF __UNICODE__
    GetConsoleCommandHistoryLength equ <__imp_GetConsoleCommandHistoryLengthW>
  ENDIF

externdef __imp_GetConsoleCommandHistoryW:PPROC
GetConsoleCommandHistoryW equ <__imp_GetConsoleCommandHistoryW>
  IFDEF __UNICODE__
    GetConsoleCommandHistory equ <__imp_GetConsoleCommandHistoryW>
  ENDIF

externdef __imp_GetConsoleCursorInfo:PPROC
GetConsoleCursorInfo equ <__imp_GetConsoleCursorInfo>

externdef __imp_GetConsoleCursorMode:PPROC
GetConsoleCursorMode equ <__imp_GetConsoleCursorMode>

externdef __imp_GetConsoleDisplayMode:PPROC
GetConsoleDisplayMode equ <__imp_GetConsoleDisplayMode>

externdef __imp_GetConsoleFontInfo:PPROC
GetConsoleFontInfo equ <__imp_GetConsoleFontInfo>

externdef __imp_GetConsoleFontSize:PPROC
GetConsoleFontSize equ <__imp_GetConsoleFontSize>

externdef __imp_GetConsoleHardwareState:PPROC
GetConsoleHardwareState equ <__imp_GetConsoleHardwareState>

externdef __imp_GetConsoleInputExeNameA:PPROC
GetConsoleInputExeNameA equ <__imp_GetConsoleInputExeNameA>
  IFNDEF __UNICODE__
    GetConsoleInputExeName equ <__imp_GetConsoleInputExeNameA>
  ENDIF

externdef __imp_GetConsoleInputExeNameW:PPROC
GetConsoleInputExeNameW equ <__imp_GetConsoleInputExeNameW>
  IFDEF __UNICODE__
    GetConsoleInputExeName equ <__imp_GetConsoleInputExeNameW>
  ENDIF

externdef __imp_GetConsoleInputWaitHandle:PPROC
GetConsoleInputWaitHandle equ <__imp_GetConsoleInputWaitHandle>

externdef __imp_GetConsoleKeyboardLayoutNameA:PPROC
GetConsoleKeyboardLayoutNameA equ <__imp_GetConsoleKeyboardLayoutNameA>
  IFNDEF __UNICODE__
    GetConsoleKeyboardLayoutName equ <__imp_GetConsoleKeyboardLayoutNameA>
  ENDIF

externdef __imp_GetConsoleKeyboardLayoutNameW:PPROC
GetConsoleKeyboardLayoutNameW equ <__imp_GetConsoleKeyboardLayoutNameW>
  IFDEF __UNICODE__
    GetConsoleKeyboardLayoutName equ <__imp_GetConsoleKeyboardLayoutNameW>
  ENDIF

externdef __imp_GetConsoleMode:PPROC
GetConsoleMode equ <__imp_GetConsoleMode>

externdef __imp_GetConsoleNlsMode:PPROC
GetConsoleNlsMode equ <__imp_GetConsoleNlsMode>

externdef __imp_GetConsoleOutputCP:PPROC
GetConsoleOutputCP equ <__imp_GetConsoleOutputCP>

externdef __imp_GetConsoleProcessList:PPROC
GetConsoleProcessList equ <__imp_GetConsoleProcessList>

externdef __imp_GetConsoleScreenBufferInfo:PPROC
GetConsoleScreenBufferInfo equ <__imp_GetConsoleScreenBufferInfo>

externdef __imp_GetConsoleSelectionInfo:PPROC
GetConsoleSelectionInfo equ <__imp_GetConsoleSelectionInfo>

externdef __imp_GetConsoleTitleA:PPROC
GetConsoleTitleA equ <__imp_GetConsoleTitleA>
  IFNDEF __UNICODE__
    GetConsoleTitle equ <__imp_GetConsoleTitleA>
  ENDIF

externdef __imp_GetConsoleTitleW:PPROC
GetConsoleTitleW equ <__imp_GetConsoleTitleW>
  IFDEF __UNICODE__
    GetConsoleTitle equ <__imp_GetConsoleTitleW>
  ENDIF

externdef __imp_GetConsoleWindow:PPROC
GetConsoleWindow equ <__imp_GetConsoleWindow>

externdef __imp_GetCurrencyFormatA:PPROC
GetCurrencyFormatA equ <__imp_GetCurrencyFormatA>
  IFNDEF __UNICODE__
    GetCurrencyFormat equ <__imp_GetCurrencyFormatA>
  ENDIF

externdef __imp_GetCurrencyFormatW:PPROC
GetCurrencyFormatW equ <__imp_GetCurrencyFormatW>
  IFDEF __UNICODE__
    GetCurrencyFormat equ <__imp_GetCurrencyFormatW>
  ENDIF

externdef __imp_GetCurrentActCtx:PPROC
GetCurrentActCtx equ <__imp_GetCurrentActCtx>

externdef __imp_GetCurrentConsoleFont:PPROC
GetCurrentConsoleFont equ <__imp_GetCurrentConsoleFont>

externdef __imp_GetCurrentDirectoryA:PPROC
GetCurrentDirectoryA equ <__imp_GetCurrentDirectoryA>
  IFNDEF __UNICODE__
    GetCurrentDirectory equ <__imp_GetCurrentDirectoryA>
  ENDIF

externdef __imp_GetCurrentDirectoryW:PPROC
GetCurrentDirectoryW equ <__imp_GetCurrentDirectoryW>
  IFDEF __UNICODE__
    GetCurrentDirectory equ <__imp_GetCurrentDirectoryW>
  ENDIF

externdef __imp_GetCurrentProcess:PPROC
GetCurrentProcess equ <__imp_GetCurrentProcess>

externdef __imp_GetCurrentProcessId:PPROC
GetCurrentProcessId equ <__imp_GetCurrentProcessId>

externdef __imp_GetCurrentProcessorNumber:PPROC
GetCurrentProcessorNumber equ <__imp_GetCurrentProcessorNumber>

externdef __imp_GetCurrentThread:PPROC
GetCurrentThread equ <__imp_GetCurrentThread>

externdef __imp_GetCurrentThreadId:PPROC
GetCurrentThreadId equ <__imp_GetCurrentThreadId>

externdef __imp_GetDateFormatA:PPROC
GetDateFormatA equ <__imp_GetDateFormatA>
  IFNDEF __UNICODE__
    GetDateFormat equ <__imp_GetDateFormatA>
  ENDIF

externdef __imp_GetDateFormatW:PPROC
GetDateFormatW equ <__imp_GetDateFormatW>
  IFDEF __UNICODE__
    GetDateFormat equ <__imp_GetDateFormatW>
  ENDIF

externdef __imp_GetDefaultCommConfigA:PPROC
GetDefaultCommConfigA equ <__imp_GetDefaultCommConfigA>
  IFNDEF __UNICODE__
    GetDefaultCommConfig equ <__imp_GetDefaultCommConfigA>
  ENDIF

externdef __imp_GetDefaultCommConfigW:PPROC
GetDefaultCommConfigW equ <__imp_GetDefaultCommConfigW>
  IFDEF __UNICODE__
    GetDefaultCommConfig equ <__imp_GetDefaultCommConfigW>
  ENDIF

externdef __imp_GetDefaultSortkeySize:PPROC
GetDefaultSortkeySize equ <__imp_GetDefaultSortkeySize>

externdef __imp_GetDevicePowerState:PPROC
GetDevicePowerState equ <__imp_GetDevicePowerState>

externdef __imp_GetDiskFreeSpaceA:PPROC
GetDiskFreeSpaceA equ <__imp_GetDiskFreeSpaceA>
  IFNDEF __UNICODE__
    GetDiskFreeSpace equ <__imp_GetDiskFreeSpaceA>
  ENDIF

externdef __imp_GetDiskFreeSpaceExA:PPROC
GetDiskFreeSpaceExA equ <__imp_GetDiskFreeSpaceExA>
  IFNDEF __UNICODE__
    GetDiskFreeSpaceEx equ <__imp_GetDiskFreeSpaceExA>
  ENDIF

externdef __imp_GetDiskFreeSpaceExW:PPROC
GetDiskFreeSpaceExW equ <__imp_GetDiskFreeSpaceExW>
  IFDEF __UNICODE__
    GetDiskFreeSpaceEx equ <__imp_GetDiskFreeSpaceExW>
  ENDIF

externdef __imp_GetDiskFreeSpaceW:PPROC
GetDiskFreeSpaceW equ <__imp_GetDiskFreeSpaceW>
  IFDEF __UNICODE__
    GetDiskFreeSpace equ <__imp_GetDiskFreeSpaceW>
  ENDIF

externdef __imp_GetDllDirectoryA:PPROC
GetDllDirectoryA equ <__imp_GetDllDirectoryA>
  IFNDEF __UNICODE__
    GetDllDirectory equ <__imp_GetDllDirectoryA>
  ENDIF

externdef __imp_GetDllDirectoryW:PPROC
GetDllDirectoryW equ <__imp_GetDllDirectoryW>
  IFDEF __UNICODE__
    GetDllDirectory equ <__imp_GetDllDirectoryW>
  ENDIF

externdef __imp_GetDriveTypeA:PPROC
GetDriveTypeA equ <__imp_GetDriveTypeA>
  IFNDEF __UNICODE__
    GetDriveType equ <__imp_GetDriveTypeA>
  ENDIF

externdef __imp_GetDriveTypeW:PPROC
GetDriveTypeW equ <__imp_GetDriveTypeW>
  IFDEF __UNICODE__
    GetDriveType equ <__imp_GetDriveTypeW>
  ENDIF

externdef __imp_GetEnvironmentStrings:PPROC
GetEnvironmentStrings equ <__imp_GetEnvironmentStrings>

externdef __imp_GetEnvironmentStringsA:PPROC
GetEnvironmentStringsA equ <__imp_GetEnvironmentStringsA>
  IFNDEF __UNICODE__
    GetEnvironmentStrings equ <__imp_GetEnvironmentStringsA>
  ENDIF

externdef __imp_GetEnvironmentStringsW:PPROC
GetEnvironmentStringsW equ <__imp_GetEnvironmentStringsW>
  IFDEF __UNICODE__
    GetEnvironmentStrings equ <__imp_GetEnvironmentStringsW>
  ENDIF

externdef __imp_GetEnvironmentVariableA:PPROC
GetEnvironmentVariableA equ <__imp_GetEnvironmentVariableA>
  IFNDEF __UNICODE__
    GetEnvironmentVariable equ <__imp_GetEnvironmentVariableA>
  ENDIF

externdef __imp_GetEnvironmentVariableW:PPROC
GetEnvironmentVariableW equ <__imp_GetEnvironmentVariableW>
  IFDEF __UNICODE__
    GetEnvironmentVariable equ <__imp_GetEnvironmentVariableW>
  ENDIF

externdef __imp_GetExitCodeProcess:PPROC
GetExitCodeProcess equ <__imp_GetExitCodeProcess>

externdef __imp_GetExitCodeThread:PPROC
GetExitCodeThread equ <__imp_GetExitCodeThread>

externdef __imp_GetExpandedNameA:PPROC
GetExpandedNameA equ <__imp_GetExpandedNameA>
  IFNDEF __UNICODE__
    GetExpandedName equ <__imp_GetExpandedNameA>
  ENDIF

externdef __imp_GetExpandedNameW:PPROC
GetExpandedNameW equ <__imp_GetExpandedNameW>
  IFDEF __UNICODE__
    GetExpandedName equ <__imp_GetExpandedNameW>
  ENDIF

externdef __imp_GetFileAttributesA:PPROC
GetFileAttributesA equ <__imp_GetFileAttributesA>
  IFNDEF __UNICODE__
    GetFileAttributes equ <__imp_GetFileAttributesA>
  ENDIF

externdef __imp_GetFileAttributesExA:PPROC
GetFileAttributesExA equ <__imp_GetFileAttributesExA>
  IFNDEF __UNICODE__
    GetFileAttributesEx equ <__imp_GetFileAttributesExA>
  ENDIF

externdef __imp_GetFileAttributesExW:PPROC
GetFileAttributesExW equ <__imp_GetFileAttributesExW>
  IFDEF __UNICODE__
    GetFileAttributesEx equ <__imp_GetFileAttributesExW>
  ENDIF

externdef __imp_GetFileAttributesW:PPROC
GetFileAttributesW equ <__imp_GetFileAttributesW>
  IFDEF __UNICODE__
    GetFileAttributes equ <__imp_GetFileAttributesW>
  ENDIF

externdef __imp_GetFileInformationByHandle:PPROC
GetFileInformationByHandle equ <__imp_GetFileInformationByHandle>

externdef __imp_GetFileSize:PPROC
GetFileSize equ <__imp_GetFileSize>

externdef __imp_GetFileSizeEx:PPROC
GetFileSizeEx equ <__imp_GetFileSizeEx>

externdef __imp_GetFileTime:PPROC
GetFileTime equ <__imp_GetFileTime>

externdef __imp_GetFileType:PPROC
GetFileType equ <__imp_GetFileType>

externdef __imp_GetFirmwareEnvironmentVariableA:PPROC
GetFirmwareEnvironmentVariableA equ <__imp_GetFirmwareEnvironmentVariableA>
  IFNDEF __UNICODE__
    GetFirmwareEnvironmentVariable equ <__imp_GetFirmwareEnvironmentVariableA>
  ENDIF

externdef __imp_GetFirmwareEnvironmentVariableW:PPROC
GetFirmwareEnvironmentVariableW equ <__imp_GetFirmwareEnvironmentVariableW>
  IFDEF __UNICODE__
    GetFirmwareEnvironmentVariable equ <__imp_GetFirmwareEnvironmentVariableW>
  ENDIF

externdef __imp_GetFullPathNameA:PPROC
GetFullPathNameA equ <__imp_GetFullPathNameA>
  IFNDEF __UNICODE__
    GetFullPathName equ <__imp_GetFullPathNameA>
  ENDIF

externdef __imp_GetFullPathNameW:PPROC
GetFullPathNameW equ <__imp_GetFullPathNameW>
  IFDEF __UNICODE__
    GetFullPathName equ <__imp_GetFullPathNameW>
  ENDIF

externdef __imp_GetGeoInfoA:PPROC
GetGeoInfoA equ <__imp_GetGeoInfoA>
  IFNDEF __UNICODE__
    GetGeoInfo equ <__imp_GetGeoInfoA>
  ENDIF

externdef __imp_GetGeoInfoW:PPROC
GetGeoInfoW equ <__imp_GetGeoInfoW>
  IFDEF __UNICODE__
    GetGeoInfo equ <__imp_GetGeoInfoW>
  ENDIF

externdef __imp_GetHandleInformation:PPROC
GetHandleInformation equ <__imp_GetHandleInformation>

externdef __imp_GetLargePageMinimum:PPROC
GetLargePageMinimum equ <__imp_GetLargePageMinimum>

externdef __imp_GetLargestConsoleWindowSize:PPROC
GetLargestConsoleWindowSize equ <__imp_GetLargestConsoleWindowSize>

externdef __imp_GetLastError:PPROC
GetLastError equ <__imp_GetLastError>

externdef __imp_GetLinguistLangSize:PPROC
GetLinguistLangSize equ <__imp_GetLinguistLangSize>

externdef __imp_GetLocalTime:PPROC
GetLocalTime equ <__imp_GetLocalTime>

externdef __imp_GetLocaleInfoA:PPROC
GetLocaleInfoA equ <__imp_GetLocaleInfoA>
  IFNDEF __UNICODE__
    GetLocaleInfo equ <__imp_GetLocaleInfoA>
  ENDIF

externdef __imp_GetLocaleInfoW:PPROC
GetLocaleInfoW equ <__imp_GetLocaleInfoW>
  IFDEF __UNICODE__
    GetLocaleInfo equ <__imp_GetLocaleInfoW>
  ENDIF

externdef __imp_GetLogicalDriveStringsA:PPROC
GetLogicalDriveStringsA equ <__imp_GetLogicalDriveStringsA>
  IFNDEF __UNICODE__
    GetLogicalDriveStrings equ <__imp_GetLogicalDriveStringsA>
  ENDIF

externdef __imp_GetLogicalDriveStringsW:PPROC
GetLogicalDriveStringsW equ <__imp_GetLogicalDriveStringsW>
  IFDEF __UNICODE__
    GetLogicalDriveStrings equ <__imp_GetLogicalDriveStringsW>
  ENDIF

externdef __imp_GetLogicalDrives:PPROC
GetLogicalDrives equ <__imp_GetLogicalDrives>

externdef __imp_GetLogicalProcessorInformation:PPROC
GetLogicalProcessorInformation equ <__imp_GetLogicalProcessorInformation>

externdef __imp_GetLongPathNameA:PPROC
GetLongPathNameA equ <__imp_GetLongPathNameA>
  IFNDEF __UNICODE__
    GetLongPathName equ <__imp_GetLongPathNameA>
  ENDIF

externdef __imp_GetLongPathNameW:PPROC
GetLongPathNameW equ <__imp_GetLongPathNameW>
  IFDEF __UNICODE__
    GetLongPathName equ <__imp_GetLongPathNameW>
  ENDIF

externdef __imp_GetMailslotInfo:PPROC
GetMailslotInfo equ <__imp_GetMailslotInfo>

externdef __imp_GetModuleFileNameA:PPROC
GetModuleFileNameA equ <__imp_GetModuleFileNameA>
  IFNDEF __UNICODE__
    GetModuleFileName equ <__imp_GetModuleFileNameA>
  ENDIF

externdef __imp_GetModuleFileNameW:PPROC
GetModuleFileNameW equ <__imp_GetModuleFileNameW>
  IFDEF __UNICODE__
    GetModuleFileName equ <__imp_GetModuleFileNameW>
  ENDIF

externdef __imp_GetModuleHandleA:PPROC
GetModuleHandleA equ <__imp_GetModuleHandleA>
  IFNDEF __UNICODE__
    GetModuleHandle equ <__imp_GetModuleHandleA>
  ENDIF

externdef __imp_GetModuleHandleExA:PPROC
GetModuleHandleExA equ <__imp_GetModuleHandleExA>
  IFNDEF __UNICODE__
    GetModuleHandleEx equ <__imp_GetModuleHandleExA>
  ENDIF

externdef __imp_GetModuleHandleExW:PPROC
GetModuleHandleExW equ <__imp_GetModuleHandleExW>
  IFDEF __UNICODE__
    GetModuleHandleEx equ <__imp_GetModuleHandleExW>
  ENDIF

externdef __imp_GetModuleHandleW:PPROC
GetModuleHandleW equ <__imp_GetModuleHandleW>
  IFDEF __UNICODE__
    GetModuleHandle equ <__imp_GetModuleHandleW>
  ENDIF

externdef __imp_GetNLSVersion:PPROC
GetNLSVersion equ <__imp_GetNLSVersion>

externdef __imp_GetNamedPipeHandleStateA:PPROC
GetNamedPipeHandleStateA equ <__imp_GetNamedPipeHandleStateA>
  IFNDEF __UNICODE__
    GetNamedPipeHandleState equ <__imp_GetNamedPipeHandleStateA>
  ENDIF

externdef __imp_GetNamedPipeHandleStateW:PPROC
GetNamedPipeHandleStateW equ <__imp_GetNamedPipeHandleStateW>
  IFDEF __UNICODE__
    GetNamedPipeHandleState equ <__imp_GetNamedPipeHandleStateW>
  ENDIF

externdef __imp_GetNamedPipeInfo:PPROC
GetNamedPipeInfo equ <__imp_GetNamedPipeInfo>

externdef __imp_GetNativeSystemInfo:PPROC
GetNativeSystemInfo equ <__imp_GetNativeSystemInfo>

externdef __imp_GetNextVDMCommand:PPROC
GetNextVDMCommand equ <__imp_GetNextVDMCommand>

externdef __imp_GetNlsSectionName:PPROC
GetNlsSectionName equ <__imp_GetNlsSectionName>

externdef __imp_GetNumaAvailableMemoryNode:PPROC
GetNumaAvailableMemoryNode equ <__imp_GetNumaAvailableMemoryNode>

externdef __imp_GetNumaHighestNodeNumber:PPROC
GetNumaHighestNodeNumber equ <__imp_GetNumaHighestNodeNumber>

externdef __imp_GetNumaNodeProcessorMask:PPROC
GetNumaNodeProcessorMask equ <__imp_GetNumaNodeProcessorMask>

externdef __imp_GetNumaProcessorNode:PPROC
GetNumaProcessorNode equ <__imp_GetNumaProcessorNode>

externdef __imp_GetNumberFormatA:PPROC
GetNumberFormatA equ <__imp_GetNumberFormatA>
  IFNDEF __UNICODE__
    GetNumberFormat equ <__imp_GetNumberFormatA>
  ENDIF

externdef __imp_GetNumberFormatW:PPROC
GetNumberFormatW equ <__imp_GetNumberFormatW>
  IFDEF __UNICODE__
    GetNumberFormat equ <__imp_GetNumberFormatW>
  ENDIF

externdef __imp_GetNumberOfConsoleFonts:PPROC
GetNumberOfConsoleFonts equ <__imp_GetNumberOfConsoleFonts>

externdef __imp_GetNumberOfConsoleInputEvents:PPROC
GetNumberOfConsoleInputEvents equ <__imp_GetNumberOfConsoleInputEvents>

externdef __imp_GetNumberOfConsoleMouseButtons:PPROC
GetNumberOfConsoleMouseButtons equ <__imp_GetNumberOfConsoleMouseButtons>

externdef __imp_GetOEMCP:PPROC
GetOEMCP equ <__imp_GetOEMCP>

externdef __imp_GetOverlappedResult:PPROC
GetOverlappedResult equ <__imp_GetOverlappedResult>

externdef __imp_GetPriorityClass:PPROC
GetPriorityClass equ <__imp_GetPriorityClass>

externdef __imp_GetPrivateProfileIntA:PPROC
GetPrivateProfileIntA equ <__imp_GetPrivateProfileIntA>
  IFNDEF __UNICODE__
    GetPrivateProfileInt equ <__imp_GetPrivateProfileIntA>
  ENDIF

externdef __imp_GetPrivateProfileIntW:PPROC
GetPrivateProfileIntW equ <__imp_GetPrivateProfileIntW>
  IFDEF __UNICODE__
    GetPrivateProfileInt equ <__imp_GetPrivateProfileIntW>
  ENDIF

externdef __imp_GetPrivateProfileSectionA:PPROC
GetPrivateProfileSectionA equ <__imp_GetPrivateProfileSectionA>
  IFNDEF __UNICODE__
    GetPrivateProfileSection equ <__imp_GetPrivateProfileSectionA>
  ENDIF

externdef __imp_GetPrivateProfileSectionNamesA:PPROC
GetPrivateProfileSectionNamesA equ <__imp_GetPrivateProfileSectionNamesA>
  IFNDEF __UNICODE__
    GetPrivateProfileSectionNames equ <__imp_GetPrivateProfileSectionNamesA>
  ENDIF

externdef __imp_GetPrivateProfileSectionNamesW:PPROC
GetPrivateProfileSectionNamesW equ <__imp_GetPrivateProfileSectionNamesW>
  IFDEF __UNICODE__
    GetPrivateProfileSectionNames equ <__imp_GetPrivateProfileSectionNamesW>
  ENDIF

externdef __imp_GetPrivateProfileSectionW:PPROC
GetPrivateProfileSectionW equ <__imp_GetPrivateProfileSectionW>
  IFDEF __UNICODE__
    GetPrivateProfileSection equ <__imp_GetPrivateProfileSectionW>
  ENDIF

externdef __imp_GetPrivateProfileStringA:PPROC
GetPrivateProfileStringA equ <__imp_GetPrivateProfileStringA>
  IFNDEF __UNICODE__
    GetPrivateProfileString equ <__imp_GetPrivateProfileStringA>
  ENDIF

externdef __imp_GetPrivateProfileStringW:PPROC
GetPrivateProfileStringW equ <__imp_GetPrivateProfileStringW>
  IFDEF __UNICODE__
    GetPrivateProfileString equ <__imp_GetPrivateProfileStringW>
  ENDIF

externdef __imp_GetPrivateProfileStructA:PPROC
GetPrivateProfileStructA equ <__imp_GetPrivateProfileStructA>
  IFNDEF __UNICODE__
    GetPrivateProfileStruct equ <__imp_GetPrivateProfileStructA>
  ENDIF

externdef __imp_GetPrivateProfileStructW:PPROC
GetPrivateProfileStructW equ <__imp_GetPrivateProfileStructW>
  IFDEF __UNICODE__
    GetPrivateProfileStruct equ <__imp_GetPrivateProfileStructW>
  ENDIF

externdef __imp_GetProcAddress:PPROC
GetProcAddress equ <__imp_GetProcAddress>

externdef __imp_GetProcessAffinityMask:PPROC
GetProcessAffinityMask equ <__imp_GetProcessAffinityMask>

externdef __imp_GetProcessHandleCount:PPROC
GetProcessHandleCount equ <__imp_GetProcessHandleCount>

externdef __imp_GetProcessHeap:PPROC
GetProcessHeap equ <__imp_GetProcessHeap>

externdef __imp_GetProcessHeaps:PPROC
GetProcessHeaps equ <__imp_GetProcessHeaps>

externdef __imp_GetProcessId:PPROC
GetProcessId equ <__imp_GetProcessId>

externdef __imp_GetProcessIdOfThread:PPROC
GetProcessIdOfThread equ <__imp_GetProcessIdOfThread>

externdef __imp_GetProcessIoCounters:PPROC
GetProcessIoCounters equ <__imp_GetProcessIoCounters>

externdef __imp_GetProcessPriorityBoost:PPROC
GetProcessPriorityBoost equ <__imp_GetProcessPriorityBoost>

externdef __imp_GetProcessShutdownParameters:PPROC
GetProcessShutdownParameters equ <__imp_GetProcessShutdownParameters>

externdef __imp_GetProcessTimes:PPROC
GetProcessTimes equ <__imp_GetProcessTimes>

externdef __imp_GetProcessVersion:PPROC
GetProcessVersion equ <__imp_GetProcessVersion>

externdef __imp_GetProcessWorkingSetSize:PPROC
GetProcessWorkingSetSize equ <__imp_GetProcessWorkingSetSize>

externdef __imp_GetProcessWorkingSetSizeEx:PPROC
GetProcessWorkingSetSizeEx equ <__imp_GetProcessWorkingSetSizeEx>

externdef __imp_GetProfileIntA:PPROC
GetProfileIntA equ <__imp_GetProfileIntA>
  IFNDEF __UNICODE__
    GetProfileInt equ <__imp_GetProfileIntA>
  ENDIF

externdef __imp_GetProfileIntW:PPROC
GetProfileIntW equ <__imp_GetProfileIntW>
  IFDEF __UNICODE__
    GetProfileInt equ <__imp_GetProfileIntW>
  ENDIF

externdef __imp_GetProfileSectionA:PPROC
GetProfileSectionA equ <__imp_GetProfileSectionA>
  IFNDEF __UNICODE__
    GetProfileSection equ <__imp_GetProfileSectionA>
  ENDIF

externdef __imp_GetProfileSectionW:PPROC
GetProfileSectionW equ <__imp_GetProfileSectionW>
  IFDEF __UNICODE__
    GetProfileSection equ <__imp_GetProfileSectionW>
  ENDIF

externdef __imp_GetProfileStringA:PPROC
GetProfileStringA equ <__imp_GetProfileStringA>
  IFNDEF __UNICODE__
    GetProfileString equ <__imp_GetProfileStringA>
  ENDIF

externdef __imp_GetProfileStringW:PPROC
GetProfileStringW equ <__imp_GetProfileStringW>
  IFDEF __UNICODE__
    GetProfileString equ <__imp_GetProfileStringW>
  ENDIF

externdef __imp_GetQueuedCompletionStatus:PPROC
GetQueuedCompletionStatus equ <__imp_GetQueuedCompletionStatus>

externdef __imp_GetShortPathNameA:PPROC
GetShortPathNameA equ <__imp_GetShortPathNameA>
  IFNDEF __UNICODE__
    GetShortPathName equ <__imp_GetShortPathNameA>
  ENDIF

externdef __imp_GetShortPathNameW:PPROC
GetShortPathNameW equ <__imp_GetShortPathNameW>
  IFDEF __UNICODE__
    GetShortPathName equ <__imp_GetShortPathNameW>
  ENDIF

externdef __imp_GetStartupInfoA:PPROC
GetStartupInfoA equ <__imp_GetStartupInfoA>
  IFNDEF __UNICODE__
    GetStartupInfo equ <__imp_GetStartupInfoA>
  ENDIF

externdef __imp_GetStartupInfoW:PPROC
GetStartupInfoW equ <__imp_GetStartupInfoW>
  IFDEF __UNICODE__
    GetStartupInfo equ <__imp_GetStartupInfoW>
  ENDIF

externdef __imp_GetStdHandle:PPROC
GetStdHandle equ <__imp_GetStdHandle>

externdef __imp_GetStringTypeA:PPROC
GetStringTypeA equ <__imp_GetStringTypeA>
  IFNDEF __UNICODE__
    GetStringType equ <__imp_GetStringTypeA>
  ENDIF

externdef __imp_GetStringTypeExA:PPROC
GetStringTypeExA equ <__imp_GetStringTypeExA>
  IFNDEF __UNICODE__
    GetStringTypeEx equ <__imp_GetStringTypeExA>
  ENDIF

externdef __imp_GetStringTypeExW:PPROC
GetStringTypeExW equ <__imp_GetStringTypeExW>
  IFDEF __UNICODE__
    GetStringTypeEx equ <__imp_GetStringTypeExW>
  ENDIF

externdef __imp_GetStringTypeW:PPROC
GetStringTypeW equ <__imp_GetStringTypeW>
  IFDEF __UNICODE__
    GetStringType equ <__imp_GetStringTypeW>
  ENDIF

externdef __imp_GetSystemDefaultLCID:PPROC
GetSystemDefaultLCID equ <__imp_GetSystemDefaultLCID>

externdef __imp_GetSystemDefaultLangID:PPROC
GetSystemDefaultLangID equ <__imp_GetSystemDefaultLangID>

externdef __imp_GetSystemDefaultUILanguage:PPROC
GetSystemDefaultUILanguage equ <__imp_GetSystemDefaultUILanguage>

externdef __imp_GetSystemDirectoryA:PPROC
GetSystemDirectoryA equ <__imp_GetSystemDirectoryA>
  IFNDEF __UNICODE__
    GetSystemDirectory equ <__imp_GetSystemDirectoryA>
  ENDIF

externdef __imp_GetSystemDirectoryW:PPROC
GetSystemDirectoryW equ <__imp_GetSystemDirectoryW>
  IFDEF __UNICODE__
    GetSystemDirectory equ <__imp_GetSystemDirectoryW>
  ENDIF

externdef __imp_GetSystemFileCacheSize:PPROC
GetSystemFileCacheSize equ <__imp_GetSystemFileCacheSize>

externdef __imp_GetSystemFirmwareTable:PPROC
GetSystemFirmwareTable equ <__imp_GetSystemFirmwareTable>

externdef __imp_GetSystemInfo:PPROC
GetSystemInfo equ <__imp_GetSystemInfo>

externdef __imp_GetSystemPowerStatus:PPROC
GetSystemPowerStatus equ <__imp_GetSystemPowerStatus>

externdef __imp_GetSystemRegistryQuota:PPROC
GetSystemRegistryQuota equ <__imp_GetSystemRegistryQuota>

externdef __imp_GetSystemTime:PPROC
GetSystemTime equ <__imp_GetSystemTime>

externdef __imp_GetSystemTimeAdjustment:PPROC
GetSystemTimeAdjustment equ <__imp_GetSystemTimeAdjustment>

externdef __imp_GetSystemTimeAsFileTime:PPROC
GetSystemTimeAsFileTime equ <__imp_GetSystemTimeAsFileTime>

externdef __imp_GetSystemTimes:PPROC
GetSystemTimes equ <__imp_GetSystemTimes>

externdef __imp_GetSystemWindowsDirectoryA:PPROC
GetSystemWindowsDirectoryA equ <__imp_GetSystemWindowsDirectoryA>
  IFNDEF __UNICODE__
    GetSystemWindowsDirectory equ <__imp_GetSystemWindowsDirectoryA>
  ENDIF

externdef __imp_GetSystemWindowsDirectoryW:PPROC
GetSystemWindowsDirectoryW equ <__imp_GetSystemWindowsDirectoryW>
  IFDEF __UNICODE__
    GetSystemWindowsDirectory equ <__imp_GetSystemWindowsDirectoryW>
  ENDIF

externdef __imp_GetSystemWow64DirectoryA:PPROC
GetSystemWow64DirectoryA equ <__imp_GetSystemWow64DirectoryA>
  IFNDEF __UNICODE__
    GetSystemWow64Directory equ <__imp_GetSystemWow64DirectoryA>
  ENDIF

externdef __imp_GetSystemWow64DirectoryW:PPROC
GetSystemWow64DirectoryW equ <__imp_GetSystemWow64DirectoryW>
  IFDEF __UNICODE__
    GetSystemWow64Directory equ <__imp_GetSystemWow64DirectoryW>
  ENDIF

externdef __imp_GetTapeParameters:PPROC
GetTapeParameters equ <__imp_GetTapeParameters>

externdef __imp_GetTapePosition:PPROC
GetTapePosition equ <__imp_GetTapePosition>

externdef __imp_GetTapeStatus:PPROC
GetTapeStatus equ <__imp_GetTapeStatus>

externdef __imp_GetTempFileNameA:PPROC
GetTempFileNameA equ <__imp_GetTempFileNameA>
  IFNDEF __UNICODE__
    GetTempFileName equ <__imp_GetTempFileNameA>
  ENDIF

externdef __imp_GetTempFileNameW:PPROC
GetTempFileNameW equ <__imp_GetTempFileNameW>
  IFDEF __UNICODE__
    GetTempFileName equ <__imp_GetTempFileNameW>
  ENDIF

externdef __imp_GetTempPathA:PPROC
GetTempPathA equ <__imp_GetTempPathA>
  IFNDEF __UNICODE__
    GetTempPath equ <__imp_GetTempPathA>
  ENDIF

externdef __imp_GetTempPathW:PPROC
GetTempPathW equ <__imp_GetTempPathW>
  IFDEF __UNICODE__
    GetTempPath equ <__imp_GetTempPathW>
  ENDIF

externdef __imp_GetThreadContext:PPROC
GetThreadContext equ <__imp_GetThreadContext>

externdef __imp_GetThreadIOPendingFlag:PPROC
GetThreadIOPendingFlag equ <__imp_GetThreadIOPendingFlag>

externdef __imp_GetThreadId:PPROC
GetThreadId equ <__imp_GetThreadId>

externdef __imp_GetThreadLocale:PPROC
GetThreadLocale equ <__imp_GetThreadLocale>

externdef __imp_GetThreadPriority:PPROC
GetThreadPriority equ <__imp_GetThreadPriority>

externdef __imp_GetThreadPriorityBoost:PPROC
GetThreadPriorityBoost equ <__imp_GetThreadPriorityBoost>

externdef __imp_GetThreadSelectorEntry:PPROC
GetThreadSelectorEntry equ <__imp_GetThreadSelectorEntry>

externdef __imp_GetThreadTimes:PPROC
GetThreadTimes equ <__imp_GetThreadTimes>

externdef __imp_GetTickCount:PPROC
GetTickCount equ <__imp_GetTickCount>

externdef __imp_GetTimeFormatA:PPROC
GetTimeFormatA equ <__imp_GetTimeFormatA>
  IFNDEF __UNICODE__
    GetTimeFormat equ <__imp_GetTimeFormatA>
  ENDIF

externdef __imp_GetTimeFormatW:PPROC
GetTimeFormatW equ <__imp_GetTimeFormatW>
  IFDEF __UNICODE__
    GetTimeFormat equ <__imp_GetTimeFormatW>
  ENDIF

externdef __imp_GetTimeZoneInformation:PPROC
GetTimeZoneInformation equ <__imp_GetTimeZoneInformation>

externdef __imp_GetUserDefaultLCID:PPROC
GetUserDefaultLCID equ <__imp_GetUserDefaultLCID>

externdef __imp_GetUserDefaultLangID:PPROC
GetUserDefaultLangID equ <__imp_GetUserDefaultLangID>

externdef __imp_GetUserDefaultUILanguage:PPROC
GetUserDefaultUILanguage equ <__imp_GetUserDefaultUILanguage>

externdef __imp_GetUserGeoID:PPROC
GetUserGeoID equ <__imp_GetUserGeoID>

externdef __imp_GetVDMCurrentDirectories:PPROC
GetVDMCurrentDirectories equ <__imp_GetVDMCurrentDirectories>

externdef __imp_GetVersion:PPROC
GetVersion equ <__imp_GetVersion>

externdef __imp_GetVersionExA:PPROC
GetVersionExA equ <__imp_GetVersionExA>
  IFNDEF __UNICODE__
    GetVersionEx equ <__imp_GetVersionExA>
  ENDIF

externdef __imp_GetVersionExW:PPROC
GetVersionExW equ <__imp_GetVersionExW>
  IFDEF __UNICODE__
    GetVersionEx equ <__imp_GetVersionExW>
  ENDIF

externdef __imp_GetVolumeInformationA:PPROC
GetVolumeInformationA equ <__imp_GetVolumeInformationA>
  IFNDEF __UNICODE__
    GetVolumeInformation equ <__imp_GetVolumeInformationA>
  ENDIF

externdef __imp_GetVolumeInformationW:PPROC
GetVolumeInformationW equ <__imp_GetVolumeInformationW>
  IFDEF __UNICODE__
    GetVolumeInformation equ <__imp_GetVolumeInformationW>
  ENDIF

externdef __imp_GetVolumeNameForVolumeMountPointA:PPROC
GetVolumeNameForVolumeMountPointA equ <__imp_GetVolumeNameForVolumeMountPointA>
  IFNDEF __UNICODE__
    GetVolumeNameForVolumeMountPoint equ <__imp_GetVolumeNameForVolumeMountPointA>
  ENDIF

externdef __imp_GetVolumeNameForVolumeMountPointW:PPROC
GetVolumeNameForVolumeMountPointW equ <__imp_GetVolumeNameForVolumeMountPointW>
  IFDEF __UNICODE__
    GetVolumeNameForVolumeMountPoint equ <__imp_GetVolumeNameForVolumeMountPointW>
  ENDIF

externdef __imp_GetVolumePathNameA:PPROC
GetVolumePathNameA equ <__imp_GetVolumePathNameA>
  IFNDEF __UNICODE__
    GetVolumePathName equ <__imp_GetVolumePathNameA>
  ENDIF

externdef __imp_GetVolumePathNameW:PPROC
GetVolumePathNameW equ <__imp_GetVolumePathNameW>
  IFDEF __UNICODE__
    GetVolumePathName equ <__imp_GetVolumePathNameW>
  ENDIF

externdef __imp_GetVolumePathNamesForVolumeNameA:PPROC
GetVolumePathNamesForVolumeNameA equ <__imp_GetVolumePathNamesForVolumeNameA>
  IFNDEF __UNICODE__
    GetVolumePathNamesForVolumeName equ <__imp_GetVolumePathNamesForVolumeNameA>
  ENDIF

externdef __imp_GetVolumePathNamesForVolumeNameW:PPROC
GetVolumePathNamesForVolumeNameW equ <__imp_GetVolumePathNamesForVolumeNameW>
  IFDEF __UNICODE__
    GetVolumePathNamesForVolumeName equ <__imp_GetVolumePathNamesForVolumeNameW>
  ENDIF

externdef __imp_GetWindowsDirectoryA:PPROC
GetWindowsDirectoryA equ <__imp_GetWindowsDirectoryA>
  IFNDEF __UNICODE__
    GetWindowsDirectory equ <__imp_GetWindowsDirectoryA>
  ENDIF

externdef __imp_GetWindowsDirectoryW:PPROC
GetWindowsDirectoryW equ <__imp_GetWindowsDirectoryW>
  IFDEF __UNICODE__
    GetWindowsDirectory equ <__imp_GetWindowsDirectoryW>
  ENDIF

externdef __imp_GetWriteWatch:PPROC
GetWriteWatch equ <__imp_GetWriteWatch>

externdef __imp_GlobalAddAtomA:PPROC
GlobalAddAtomA equ <__imp_GlobalAddAtomA>
  IFNDEF __UNICODE__
    GlobalAddAtom equ <__imp_GlobalAddAtomA>
  ENDIF

externdef __imp_GlobalAddAtomW:PPROC
GlobalAddAtomW equ <__imp_GlobalAddAtomW>
  IFDEF __UNICODE__
    GlobalAddAtom equ <__imp_GlobalAddAtomW>
  ENDIF

externdef __imp_GlobalAlloc:PPROC
GlobalAlloc equ <__imp_GlobalAlloc>

externdef __imp_GlobalCompact:PPROC
GlobalCompact equ <__imp_GlobalCompact>

externdef __imp_GlobalDeleteAtom:PPROC
GlobalDeleteAtom equ <__imp_GlobalDeleteAtom>

externdef __imp_GlobalFindAtomA:PPROC
GlobalFindAtomA equ <__imp_GlobalFindAtomA>
  IFNDEF __UNICODE__
    GlobalFindAtom equ <__imp_GlobalFindAtomA>
  ENDIF

externdef __imp_GlobalFindAtomW:PPROC
GlobalFindAtomW equ <__imp_GlobalFindAtomW>
  IFDEF __UNICODE__
    GlobalFindAtom equ <__imp_GlobalFindAtomW>
  ENDIF

externdef __imp_GlobalFix:PPROC
GlobalFix equ <__imp_GlobalFix>

externdef __imp_GlobalFlags:PPROC
GlobalFlags equ <__imp_GlobalFlags>

externdef __imp_GlobalFree:PPROC
GlobalFree equ <__imp_GlobalFree>

externdef __imp_GlobalGetAtomNameA:PPROC
GlobalGetAtomNameA equ <__imp_GlobalGetAtomNameA>
  IFNDEF __UNICODE__
    GlobalGetAtomName equ <__imp_GlobalGetAtomNameA>
  ENDIF

externdef __imp_GlobalGetAtomNameW:PPROC
GlobalGetAtomNameW equ <__imp_GlobalGetAtomNameW>
  IFDEF __UNICODE__
    GlobalGetAtomName equ <__imp_GlobalGetAtomNameW>
  ENDIF

externdef __imp_GlobalHandle:PPROC
GlobalHandle equ <__imp_GlobalHandle>

externdef __imp_GlobalLock:PPROC
GlobalLock equ <__imp_GlobalLock>

externdef __imp_GlobalMemoryStatus:PPROC
GlobalMemoryStatus equ <__imp_GlobalMemoryStatus>

externdef __imp_GlobalMemoryStatusEx:PPROC
GlobalMemoryStatusEx equ <__imp_GlobalMemoryStatusEx>

externdef __imp_GlobalReAlloc:PPROC
GlobalReAlloc equ <__imp_GlobalReAlloc>

externdef __imp_GlobalSize:PPROC
GlobalSize equ <__imp_GlobalSize>

externdef __imp_GlobalUnWire:PPROC
GlobalUnWire equ <__imp_GlobalUnWire>

externdef __imp_GlobalUnfix:PPROC
GlobalUnfix equ <__imp_GlobalUnfix>

externdef __imp_GlobalUnlock:PPROC
GlobalUnlock equ <__imp_GlobalUnlock>

externdef __imp_GlobalWire:PPROC
GlobalWire equ <__imp_GlobalWire>

externdef __imp_Heap32First:PPROC
Heap32First equ <__imp_Heap32First>

externdef __imp_Heap32ListFirst:PPROC
Heap32ListFirst equ <__imp_Heap32ListFirst>

externdef __imp_Heap32ListNext:PPROC
Heap32ListNext equ <__imp_Heap32ListNext>

externdef __imp_Heap32Next:PPROC
Heap32Next equ <__imp_Heap32Next>

externdef __imp_HeapAlloc:PPROC
HeapAlloc equ <__imp_HeapAlloc>

externdef __imp_HeapCompact:PPROC
HeapCompact equ <__imp_HeapCompact>

externdef __imp_HeapCreate:PPROC
HeapCreate equ <__imp_HeapCreate>

externdef __imp_HeapCreateTagsW:PPROC
HeapCreateTagsW equ <__imp_HeapCreateTagsW>
  IFDEF __UNICODE__
    HeapCreateTags equ <__imp_HeapCreateTagsW>
  ENDIF

externdef __imp_HeapDestroy:PPROC
HeapDestroy equ <__imp_HeapDestroy>

externdef __imp_HeapExtend:PPROC
HeapExtend equ <__imp_HeapExtend>

externdef __imp_HeapFree:PPROC
HeapFree equ <__imp_HeapFree>

externdef __imp_HeapLock:PPROC
HeapLock equ <__imp_HeapLock>

externdef __imp_HeapQueryInformation:PPROC
HeapQueryInformation equ <__imp_HeapQueryInformation>

externdef __imp_HeapQueryTagW:PPROC
HeapQueryTagW equ <__imp_HeapQueryTagW>
  IFDEF __UNICODE__
    HeapQueryTag equ <__imp_HeapQueryTagW>
  ENDIF

externdef __imp_HeapReAlloc:PPROC
HeapReAlloc equ <__imp_HeapReAlloc>

externdef __imp_HeapSetInformation:PPROC
HeapSetInformation equ <__imp_HeapSetInformation>

externdef __imp_HeapSize:PPROC
HeapSize equ <__imp_HeapSize>

externdef __imp_HeapSummary:PPROC
HeapSummary equ <__imp_HeapSummary>

externdef __imp_HeapUnlock:PPROC
HeapUnlock equ <__imp_HeapUnlock>

externdef __imp_HeapUsage:PPROC
HeapUsage equ <__imp_HeapUsage>

externdef __imp_HeapValidate:PPROC
HeapValidate equ <__imp_HeapValidate>

externdef __imp_HeapWalk:PPROC
HeapWalk equ <__imp_HeapWalk>

externdef __imp_InitAtomTable:PPROC
InitAtomTable equ <__imp_InitAtomTable>

externdef __imp_InitializeCriticalSection:PPROC
InitializeCriticalSection equ <__imp_InitializeCriticalSection>

externdef __imp_InitializeCriticalSectionAndSpinCount:PPROC
InitializeCriticalSectionAndSpinCount equ <__imp_InitializeCriticalSectionAndSpinCount>

externdef __imp_InitializeSListHead:PPROC
InitializeSListHead equ <__imp_InitializeSListHead>

externdef __imp_InterlockedFlushSList:PPROC
InterlockedFlushSList equ <__imp_InterlockedFlushSList>

externdef __imp_InterlockedPopEntrySList:PPROC
InterlockedPopEntrySList equ <__imp_InterlockedPopEntrySList>

externdef __imp_InterlockedPushEntrySList:PPROC
InterlockedPushEntrySList equ <__imp_InterlockedPushEntrySList>

externdef __imp_InvalidateConsoleDIBits:PPROC
InvalidateConsoleDIBits equ <__imp_InvalidateConsoleDIBits>

externdef __imp_IsBadCodePtr:PPROC
IsBadCodePtr equ <__imp_IsBadCodePtr>

externdef __imp_IsBadHugeReadPtr:PPROC
IsBadHugeReadPtr equ <__imp_IsBadHugeReadPtr>

externdef __imp_IsBadHugeWritePtr:PPROC
IsBadHugeWritePtr equ <__imp_IsBadHugeWritePtr>

externdef __imp_IsBadReadPtr:PPROC
IsBadReadPtr equ <__imp_IsBadReadPtr>

externdef __imp_IsBadStringPtrA:PPROC
IsBadStringPtrA equ <__imp_IsBadStringPtrA>
  IFNDEF __UNICODE__
    IsBadStringPtr equ <__imp_IsBadStringPtrA>
  ENDIF

externdef __imp_IsBadStringPtrW:PPROC
IsBadStringPtrW equ <__imp_IsBadStringPtrW>
  IFDEF __UNICODE__
    IsBadStringPtr equ <__imp_IsBadStringPtrW>
  ENDIF

externdef __imp_IsBadWritePtr:PPROC
IsBadWritePtr equ <__imp_IsBadWritePtr>

externdef __imp_IsDBCSLeadByte:PPROC
IsDBCSLeadByte equ <__imp_IsDBCSLeadByte>

externdef __imp_IsDBCSLeadByteEx:PPROC
IsDBCSLeadByteEx equ <__imp_IsDBCSLeadByteEx>

externdef __imp_IsDebuggerPresent:PPROC
IsDebuggerPresent equ <__imp_IsDebuggerPresent>

externdef __imp_IsNLSDefinedString:PPROC
IsNLSDefinedString equ <__imp_IsNLSDefinedString>

externdef __imp_IsProcessInJob:PPROC
IsProcessInJob equ <__imp_IsProcessInJob>

externdef __imp_IsProcessorFeaturePresent:PPROC
IsProcessorFeaturePresent equ <__imp_IsProcessorFeaturePresent>

externdef __imp_IsSystemResumeAutomatic:PPROC
IsSystemResumeAutomatic equ <__imp_IsSystemResumeAutomatic>

externdef __imp_IsTimeZoneRedirectionEnabled:PPROC
IsTimeZoneRedirectionEnabled equ <__imp_IsTimeZoneRedirectionEnabled>

externdef __imp_IsValidCodePage:PPROC
IsValidCodePage equ <__imp_IsValidCodePage>

externdef __imp_IsValidLanguageGroup:PPROC
IsValidLanguageGroup equ <__imp_IsValidLanguageGroup>

externdef __imp_IsValidLocale:PPROC
IsValidLocale equ <__imp_IsValidLocale>

externdef __imp_IsValidUILanguage:PPROC
IsValidUILanguage equ <__imp_IsValidUILanguage>

externdef __imp_IsWow64Process:PPROC
IsWow64Process equ <__imp_IsWow64Process>

externdef __imp_LCMapStringA:PPROC
LCMapStringA equ <__imp_LCMapStringA>
  IFNDEF __UNICODE__
    LCMapString equ <__imp_LCMapStringA>
  ENDIF

externdef __imp_LCMapStringW:PPROC
LCMapStringW equ <__imp_LCMapStringW>
  IFDEF __UNICODE__
    LCMapString equ <__imp_LCMapStringW>
  ENDIF

externdef __imp_LZClose:PPROC
LZClose equ <__imp_LZClose>

externdef __imp_LZCloseFile:PPROC
LZCloseFile equ <__imp_LZCloseFile>

externdef __imp_LZCopy:PPROC
LZCopy equ <__imp_LZCopy>

externdef __imp_LZCreateFileW:PPROC
LZCreateFileW equ <__imp_LZCreateFileW>
  IFDEF __UNICODE__
    LZCreateFile equ <__imp_LZCreateFileW>
  ENDIF

externdef __imp_LZDone:PPROC
LZDone equ <__imp_LZDone>

externdef __imp_LZInit:PPROC
LZInit equ <__imp_LZInit>

externdef __imp_LZOpenFileA:PPROC
LZOpenFileA equ <__imp_LZOpenFileA>
  IFNDEF __UNICODE__
    LZOpenFile equ <__imp_LZOpenFileA>
  ENDIF

externdef __imp_LZOpenFileW:PPROC
LZOpenFileW equ <__imp_LZOpenFileW>
  IFDEF __UNICODE__
    LZOpenFile equ <__imp_LZOpenFileW>
  ENDIF

externdef __imp_LZRead:PPROC
LZRead equ <__imp_LZRead>

externdef __imp_LZSeek:PPROC
LZSeek equ <__imp_LZSeek>

externdef __imp_LZStart:PPROC
LZStart equ <__imp_LZStart>

externdef __imp_LeaveCriticalSection:PPROC
LeaveCriticalSection equ <__imp_LeaveCriticalSection>

externdef __imp_LoadLibraryA:PPROC
LoadLibraryA equ <__imp_LoadLibraryA>
  IFNDEF __UNICODE__
    LoadLibrary equ <__imp_LoadLibraryA>
  ENDIF

externdef __imp_LoadLibraryExA:PPROC
LoadLibraryExA equ <__imp_LoadLibraryExA>
  IFNDEF __UNICODE__
    LoadLibraryEx equ <__imp_LoadLibraryExA>
  ENDIF

externdef __imp_LoadLibraryExW:PPROC
LoadLibraryExW equ <__imp_LoadLibraryExW>
  IFDEF __UNICODE__
    LoadLibraryEx equ <__imp_LoadLibraryExW>
  ENDIF

externdef __imp_LoadLibraryW:PPROC
LoadLibraryW equ <__imp_LoadLibraryW>
  IFDEF __UNICODE__
    LoadLibrary equ <__imp_LoadLibraryW>
  ENDIF

externdef __imp_LoadModule:PPROC
LoadModule equ <__imp_LoadModule>

externdef __imp_LoadResource:PPROC
LoadResource equ <__imp_LoadResource>

externdef __imp_LocalAlloc:PPROC
LocalAlloc equ <__imp_LocalAlloc>

externdef __imp_LocalCompact:PPROC
LocalCompact equ <__imp_LocalCompact>

externdef __imp_LocalFileTimeToFileTime:PPROC
LocalFileTimeToFileTime equ <__imp_LocalFileTimeToFileTime>

externdef __imp_LocalFlags:PPROC
LocalFlags equ <__imp_LocalFlags>

externdef __imp_LocalFree:PPROC
LocalFree equ <__imp_LocalFree>

externdef __imp_LocalHandle:PPROC
LocalHandle equ <__imp_LocalHandle>

externdef __imp_LocalLock:PPROC
LocalLock equ <__imp_LocalLock>

externdef __imp_LocalReAlloc:PPROC
LocalReAlloc equ <__imp_LocalReAlloc>

externdef __imp_LocalShrink:PPROC
LocalShrink equ <__imp_LocalShrink>

externdef __imp_LocalSize:PPROC
LocalSize equ <__imp_LocalSize>

externdef __imp_LocalUnlock:PPROC
LocalUnlock equ <__imp_LocalUnlock>

externdef __imp_LockFile:PPROC
LockFile equ <__imp_LockFile>

externdef __imp_LockFileEx:PPROC
LockFileEx equ <__imp_LockFileEx>

externdef __imp_LockResource:PPROC
LockResource equ <__imp_LockResource>

externdef __imp_MapUserPhysicalPages:PPROC
MapUserPhysicalPages equ <__imp_MapUserPhysicalPages>

externdef __imp_MapUserPhysicalPagesScatter:PPROC
MapUserPhysicalPagesScatter equ <__imp_MapUserPhysicalPagesScatter>

externdef __imp_MapViewOfFile:PPROC
MapViewOfFile equ <__imp_MapViewOfFile>

externdef __imp_MapViewOfFileEx:PPROC
MapViewOfFileEx equ <__imp_MapViewOfFileEx>

externdef __imp_Module32First:PPROC
Module32First equ <__imp_Module32First>

externdef __imp_Module32FirstW:PPROC
Module32FirstW equ <__imp_Module32FirstW>
  IFDEF __UNICODE__
    Module32First equ <__imp_Module32FirstW>
  ENDIF

externdef __imp_Module32Next:PPROC
Module32Next equ <__imp_Module32Next>

externdef __imp_Module32NextW:PPROC
Module32NextW equ <__imp_Module32NextW>
  IFDEF __UNICODE__
    Module32Next equ <__imp_Module32NextW>
  ENDIF

externdef __imp_MoveFileA:PPROC
MoveFileA equ <__imp_MoveFileA>
  IFNDEF __UNICODE__
    MoveFile equ <__imp_MoveFileA>
  ENDIF

externdef __imp_MoveFileExA:PPROC
MoveFileExA equ <__imp_MoveFileExA>
  IFNDEF __UNICODE__
    MoveFileEx equ <__imp_MoveFileExA>
  ENDIF

externdef __imp_MoveFileExW:PPROC
MoveFileExW equ <__imp_MoveFileExW>
  IFDEF __UNICODE__
    MoveFileEx equ <__imp_MoveFileExW>
  ENDIF

externdef __imp_MoveFileW:PPROC
MoveFileW equ <__imp_MoveFileW>
  IFDEF __UNICODE__
    MoveFile equ <__imp_MoveFileW>
  ENDIF

externdef __imp_MoveFileWithProgressA:PPROC
MoveFileWithProgressA equ <__imp_MoveFileWithProgressA>
  IFNDEF __UNICODE__
    MoveFileWithProgress equ <__imp_MoveFileWithProgressA>
  ENDIF

externdef __imp_MoveFileWithProgressW:PPROC
MoveFileWithProgressW equ <__imp_MoveFileWithProgressW>
  IFDEF __UNICODE__
    MoveFileWithProgress equ <__imp_MoveFileWithProgressW>
  ENDIF

externdef __imp_MulDiv:PPROC
MulDiv equ <__imp_MulDiv>

externdef __imp_MultiByteToWideChar:PPROC
MultiByteToWideChar equ <__imp_MultiByteToWideChar>

externdef __imp_NeedCurrentDirectoryForExePathA:PPROC
NeedCurrentDirectoryForExePathA equ <__imp_NeedCurrentDirectoryForExePathA>
  IFNDEF __UNICODE__
    NeedCurrentDirectoryForExePath equ <__imp_NeedCurrentDirectoryForExePathA>
  ENDIF

externdef __imp_NeedCurrentDirectoryForExePathW:PPROC
NeedCurrentDirectoryForExePathW equ <__imp_NeedCurrentDirectoryForExePathW>
  IFDEF __UNICODE__
    NeedCurrentDirectoryForExePath equ <__imp_NeedCurrentDirectoryForExePathW>
  ENDIF

externdef __imp_NlsConvertIntegerToString:PPROC
NlsConvertIntegerToString equ <__imp_NlsConvertIntegerToString>

externdef __imp_NlsGetCacheUpdateCount:PPROC
NlsGetCacheUpdateCount equ <__imp_NlsGetCacheUpdateCount>

externdef __imp_NlsResetProcessLocale:PPROC
NlsResetProcessLocale equ <__imp_NlsResetProcessLocale>

externdef __imp_OpenConsoleW:PPROC
OpenConsoleW equ <__imp_OpenConsoleW>
  IFDEF __UNICODE__
    OpenConsole equ <__imp_OpenConsoleW>
  ENDIF

externdef __imp_OpenDataFile:PPROC
OpenDataFile equ <__imp_OpenDataFile>

externdef __imp_OpenEventA:PPROC
OpenEventA equ <__imp_OpenEventA>
  IFNDEF __UNICODE__
    OpenEvent equ <__imp_OpenEventA>
  ENDIF

externdef __imp_OpenEventW:PPROC
OpenEventW equ <__imp_OpenEventW>
  IFDEF __UNICODE__
    OpenEvent equ <__imp_OpenEventW>
  ENDIF

externdef __imp_OpenFile:PPROC
OpenFile equ <__imp_OpenFile>

externdef __imp_OpenFileMappingA:PPROC
OpenFileMappingA equ <__imp_OpenFileMappingA>
  IFNDEF __UNICODE__
    OpenFileMapping equ <__imp_OpenFileMappingA>
  ENDIF

externdef __imp_OpenFileMappingW:PPROC
OpenFileMappingW equ <__imp_OpenFileMappingW>
  IFDEF __UNICODE__
    OpenFileMapping equ <__imp_OpenFileMappingW>
  ENDIF

externdef __imp_OpenJobObjectA:PPROC
OpenJobObjectA equ <__imp_OpenJobObjectA>
  IFNDEF __UNICODE__
    OpenJobObject equ <__imp_OpenJobObjectA>
  ENDIF

externdef __imp_OpenJobObjectW:PPROC
OpenJobObjectW equ <__imp_OpenJobObjectW>
  IFDEF __UNICODE__
    OpenJobObject equ <__imp_OpenJobObjectW>
  ENDIF

externdef __imp_OpenMutexA:PPROC
OpenMutexA equ <__imp_OpenMutexA>
  IFNDEF __UNICODE__
    OpenMutex equ <__imp_OpenMutexA>
  ENDIF

externdef __imp_OpenMutexW:PPROC
OpenMutexW equ <__imp_OpenMutexW>
  IFDEF __UNICODE__
    OpenMutex equ <__imp_OpenMutexW>
  ENDIF

externdef __imp_OpenProcess:PPROC
OpenProcess equ <__imp_OpenProcess>

externdef __imp_OpenProfileUserMapping:PPROC
OpenProfileUserMapping equ <__imp_OpenProfileUserMapping>

externdef __imp_OpenSemaphoreA:PPROC
OpenSemaphoreA equ <__imp_OpenSemaphoreA>
  IFNDEF __UNICODE__
    OpenSemaphore equ <__imp_OpenSemaphoreA>
  ENDIF

externdef __imp_OpenSemaphoreW:PPROC
OpenSemaphoreW equ <__imp_OpenSemaphoreW>
  IFDEF __UNICODE__
    OpenSemaphore equ <__imp_OpenSemaphoreW>
  ENDIF

externdef __imp_OpenThread:PPROC
OpenThread equ <__imp_OpenThread>

externdef __imp_OpenWaitableTimerA:PPROC
OpenWaitableTimerA equ <__imp_OpenWaitableTimerA>
  IFNDEF __UNICODE__
    OpenWaitableTimer equ <__imp_OpenWaitableTimerA>
  ENDIF

externdef __imp_OpenWaitableTimerW:PPROC
OpenWaitableTimerW equ <__imp_OpenWaitableTimerW>
  IFDEF __UNICODE__
    OpenWaitableTimer equ <__imp_OpenWaitableTimerW>
  ENDIF

externdef __imp_OutputDebugStringA:PPROC
OutputDebugStringA equ <__imp_OutputDebugStringA>
  IFNDEF __UNICODE__
    OutputDebugString equ <__imp_OutputDebugStringA>
  ENDIF

externdef __imp_OutputDebugStringW:PPROC
OutputDebugStringW equ <__imp_OutputDebugStringW>
  IFDEF __UNICODE__
    OutputDebugString equ <__imp_OutputDebugStringW>
  ENDIF

externdef __imp_PeekConsoleInputA:PPROC
PeekConsoleInputA equ <__imp_PeekConsoleInputA>
  IFNDEF __UNICODE__
    PeekConsoleInput equ <__imp_PeekConsoleInputA>
  ENDIF

externdef __imp_PeekConsoleInputW:PPROC
PeekConsoleInputW equ <__imp_PeekConsoleInputW>
  IFDEF __UNICODE__
    PeekConsoleInput equ <__imp_PeekConsoleInputW>
  ENDIF

externdef __imp_PeekNamedPipe:PPROC
PeekNamedPipe equ <__imp_PeekNamedPipe>

externdef __imp_PostQueuedCompletionStatus:PPROC
PostQueuedCompletionStatus equ <__imp_PostQueuedCompletionStatus>

externdef __imp_PrepareTape:PPROC
PrepareTape equ <__imp_PrepareTape>

externdef __imp_PrivCopyFileExW:PPROC
PrivCopyFileExW equ <__imp_PrivCopyFileExW>
  IFDEF __UNICODE__
    PrivCopyFileEx equ <__imp_PrivCopyFileExW>
  ENDIF

externdef __imp_PrivMoveFileIdentityW:PPROC
PrivMoveFileIdentityW equ <__imp_PrivMoveFileIdentityW>
  IFDEF __UNICODE__
    PrivMoveFileIdentity equ <__imp_PrivMoveFileIdentityW>
  ENDIF

externdef __imp_Process32First:PPROC
Process32First equ <__imp_Process32First>

externdef __imp_Process32FirstW:PPROC
Process32FirstW equ <__imp_Process32FirstW>
  IFDEF __UNICODE__
    Process32First equ <__imp_Process32FirstW>
  ENDIF

externdef __imp_Process32Next:PPROC
Process32Next equ <__imp_Process32Next>

externdef __imp_Process32NextW:PPROC
Process32NextW equ <__imp_Process32NextW>
  IFDEF __UNICODE__
    Process32Next equ <__imp_Process32NextW>
  ENDIF

externdef __imp_ProcessIdToSessionId:PPROC
ProcessIdToSessionId equ <__imp_ProcessIdToSessionId>

externdef __imp_PulseEvent:PPROC
PulseEvent equ <__imp_PulseEvent>

externdef __imp_PurgeComm:PPROC
PurgeComm equ <__imp_PurgeComm>

externdef __imp_QueryActCtxW:PPROC
QueryActCtxW equ <__imp_QueryActCtxW>
  IFDEF __UNICODE__
    QueryActCtx equ <__imp_QueryActCtxW>
  ENDIF

externdef __imp_QueryDepthSList:PPROC
QueryDepthSList equ <__imp_QueryDepthSList>

externdef __imp_QueryDosDeviceA:PPROC
QueryDosDeviceA equ <__imp_QueryDosDeviceA>
  IFNDEF __UNICODE__
    QueryDosDevice equ <__imp_QueryDosDeviceA>
  ENDIF

externdef __imp_QueryDosDeviceW:PPROC
QueryDosDeviceW equ <__imp_QueryDosDeviceW>
  IFDEF __UNICODE__
    QueryDosDevice equ <__imp_QueryDosDeviceW>
  ENDIF

externdef __imp_QueryInformationJobObject:PPROC
QueryInformationJobObject equ <__imp_QueryInformationJobObject>

externdef __imp_QueryMemoryResourceNotification:PPROC
QueryMemoryResourceNotification equ <__imp_QueryMemoryResourceNotification>

externdef __imp_QueryPerformanceCounter:PPROC
QueryPerformanceCounter equ <__imp_QueryPerformanceCounter>

externdef __imp_QueryPerformanceFrequency:PPROC
QueryPerformanceFrequency equ <__imp_QueryPerformanceFrequency>

externdef __imp_QueueUserAPC:PPROC
QueueUserAPC equ <__imp_QueueUserAPC>

externdef __imp_QueueUserWorkItem:PPROC
QueueUserWorkItem equ <__imp_QueueUserWorkItem>

externdef __imp_RaiseException:PPROC
RaiseException equ <__imp_RaiseException>

externdef __imp_ReOpenFile:PPROC
ReOpenFile equ <__imp_ReOpenFile>

externdef __imp_ReadConsoleA:PPROC
ReadConsoleA equ <__imp_ReadConsoleA>
  IFNDEF __UNICODE__
    ReadConsole equ <__imp_ReadConsoleA>
  ENDIF

externdef __imp_ReadConsoleInputA:PPROC
ReadConsoleInputA equ <__imp_ReadConsoleInputA>
  IFNDEF __UNICODE__
    ReadConsoleInput equ <__imp_ReadConsoleInputA>
  ENDIF

externdef __imp_ReadConsoleInputExA:PPROC
ReadConsoleInputExA equ <__imp_ReadConsoleInputExA>
  IFNDEF __UNICODE__
    ReadConsoleInputEx equ <__imp_ReadConsoleInputExA>
  ENDIF

externdef __imp_ReadConsoleInputExW:PPROC
ReadConsoleInputExW equ <__imp_ReadConsoleInputExW>
  IFDEF __UNICODE__
    ReadConsoleInputEx equ <__imp_ReadConsoleInputExW>
  ENDIF

externdef __imp_ReadConsoleInputW:PPROC
ReadConsoleInputW equ <__imp_ReadConsoleInputW>
  IFDEF __UNICODE__
    ReadConsoleInput equ <__imp_ReadConsoleInputW>
  ENDIF

externdef __imp_ReadConsoleOutputA:PPROC
ReadConsoleOutputA equ <__imp_ReadConsoleOutputA>
  IFNDEF __UNICODE__
    ReadConsoleOutput equ <__imp_ReadConsoleOutputA>
  ENDIF

externdef __imp_ReadConsoleOutputAttribute:PPROC
ReadConsoleOutputAttribute equ <__imp_ReadConsoleOutputAttribute>

externdef __imp_ReadConsoleOutputCharacterA:PPROC
ReadConsoleOutputCharacterA equ <__imp_ReadConsoleOutputCharacterA>
  IFNDEF __UNICODE__
    ReadConsoleOutputCharacter equ <__imp_ReadConsoleOutputCharacterA>
  ENDIF

externdef __imp_ReadConsoleOutputCharacterW:PPROC
ReadConsoleOutputCharacterW equ <__imp_ReadConsoleOutputCharacterW>
  IFDEF __UNICODE__
    ReadConsoleOutputCharacter equ <__imp_ReadConsoleOutputCharacterW>
  ENDIF

externdef __imp_ReadConsoleOutputW:PPROC
ReadConsoleOutputW equ <__imp_ReadConsoleOutputW>
  IFDEF __UNICODE__
    ReadConsoleOutput equ <__imp_ReadConsoleOutputW>
  ENDIF

externdef __imp_ReadConsoleW:PPROC
ReadConsoleW equ <__imp_ReadConsoleW>
  IFDEF __UNICODE__
    ReadConsole equ <__imp_ReadConsoleW>
  ENDIF

externdef __imp_ReadDirectoryChangesW:PPROC
ReadDirectoryChangesW equ <__imp_ReadDirectoryChangesW>
  IFDEF __UNICODE__
    ReadDirectoryChanges equ <__imp_ReadDirectoryChangesW>
  ENDIF

externdef __imp_ReadFile:PPROC
ReadFile equ <__imp_ReadFile>

externdef __imp_ReadFileEx:PPROC
ReadFileEx equ <__imp_ReadFileEx>

externdef __imp_ReadFileScatter:PPROC
ReadFileScatter equ <__imp_ReadFileScatter>

externdef __imp_ReadProcessMemory:PPROC
ReadProcessMemory equ <__imp_ReadProcessMemory>

externdef __imp_RegisterConsoleIME:PPROC
RegisterConsoleIME equ <__imp_RegisterConsoleIME>

externdef __imp_RegisterConsoleOS2:PPROC
RegisterConsoleOS2 equ <__imp_RegisterConsoleOS2>

externdef __imp_RegisterConsoleVDM:PPROC
RegisterConsoleVDM equ <__imp_RegisterConsoleVDM>

externdef __imp_RegisterWaitForInputIdle:PPROC
RegisterWaitForInputIdle equ <__imp_RegisterWaitForInputIdle>

externdef __imp_RegisterWaitForSingleObject:PPROC
RegisterWaitForSingleObject equ <__imp_RegisterWaitForSingleObject>

externdef __imp_RegisterWaitForSingleObjectEx:PPROC
RegisterWaitForSingleObjectEx equ <__imp_RegisterWaitForSingleObjectEx>

externdef __imp_RegisterWowBaseHandlers:PPROC
RegisterWowBaseHandlers equ <__imp_RegisterWowBaseHandlers>

externdef __imp_RegisterWowExec:PPROC
RegisterWowExec equ <__imp_RegisterWowExec>

externdef __imp_ReleaseActCtx:PPROC
ReleaseActCtx equ <__imp_ReleaseActCtx>

externdef __imp_ReleaseMutex:PPROC
ReleaseMutex equ <__imp_ReleaseMutex>

externdef __imp_ReleaseSemaphore:PPROC
ReleaseSemaphore equ <__imp_ReleaseSemaphore>

externdef __imp_RemoveDirectoryA:PPROC
RemoveDirectoryA equ <__imp_RemoveDirectoryA>
  IFNDEF __UNICODE__
    RemoveDirectory equ <__imp_RemoveDirectoryA>
  ENDIF

externdef __imp_RemoveDirectoryW:PPROC
RemoveDirectoryW equ <__imp_RemoveDirectoryW>
  IFDEF __UNICODE__
    RemoveDirectory equ <__imp_RemoveDirectoryW>
  ENDIF

externdef __imp_RemoveLocalAlternateComputerNameA:PPROC
RemoveLocalAlternateComputerNameA equ <__imp_RemoveLocalAlternateComputerNameA>
  IFNDEF __UNICODE__
    RemoveLocalAlternateComputerName equ <__imp_RemoveLocalAlternateComputerNameA>
  ENDIF

externdef __imp_RemoveLocalAlternateComputerNameW:PPROC
RemoveLocalAlternateComputerNameW equ <__imp_RemoveLocalAlternateComputerNameW>
  IFDEF __UNICODE__
    RemoveLocalAlternateComputerName equ <__imp_RemoveLocalAlternateComputerNameW>
  ENDIF

externdef __imp_RemoveVectoredContinueHandler:PPROC
RemoveVectoredContinueHandler equ <__imp_RemoveVectoredContinueHandler>

externdef __imp_RemoveVectoredExceptionHandler:PPROC
RemoveVectoredExceptionHandler equ <__imp_RemoveVectoredExceptionHandler>

externdef __imp_ReplaceFile:PPROC
ReplaceFile equ <__imp_ReplaceFile>

externdef __imp_ReplaceFileA:PPROC
ReplaceFileA equ <__imp_ReplaceFileA>
  IFNDEF __UNICODE__
    ReplaceFile equ <__imp_ReplaceFileA>
  ENDIF

externdef __imp_ReplaceFileW:PPROC
ReplaceFileW equ <__imp_ReplaceFileW>
  IFDEF __UNICODE__
    ReplaceFile equ <__imp_ReplaceFileW>
  ENDIF

externdef __imp_RequestDeviceWakeup:PPROC
RequestDeviceWakeup equ <__imp_RequestDeviceWakeup>

externdef __imp_RequestWakeupLatency:PPROC
RequestWakeupLatency equ <__imp_RequestWakeupLatency>

externdef __imp_ResetEvent:PPROC
ResetEvent equ <__imp_ResetEvent>

externdef __imp_ResetWriteWatch:PPROC
ResetWriteWatch equ <__imp_ResetWriteWatch>

externdef __imp_RestoreLastError:PPROC
RestoreLastError equ <__imp_RestoreLastError>

externdef __imp_ResumeThread:PPROC
ResumeThread equ <__imp_ResumeThread>

externdef __imp_RtlAddFunctionTable:PPROC
RtlAddFunctionTable equ <__imp_RtlAddFunctionTable>

externdef __imp_RtlCaptureContext:PPROC
RtlCaptureContext equ <__imp_RtlCaptureContext>

externdef __imp_RtlCaptureStackBackTrace:PPROC
RtlCaptureStackBackTrace equ <__imp_RtlCaptureStackBackTrace>

externdef __imp_RtlCompareMemory:PPROC
RtlCompareMemory equ <__imp_RtlCompareMemory>

externdef __imp_RtlCopyMemory:PPROC
RtlCopyMemory equ <__imp_RtlCopyMemory>

externdef __imp_RtlDeleteFunctionTable:PPROC
RtlDeleteFunctionTable equ <__imp_RtlDeleteFunctionTable>

externdef __imp_RtlFillMemory:PPROC
RtlFillMemory equ <__imp_RtlFillMemory>

externdef __imp_RtlInstallFunctionTableCallback:PPROC
RtlInstallFunctionTableCallback equ <__imp_RtlInstallFunctionTableCallback>

externdef __imp_RtlLookupFunctionEntry:PPROC
RtlLookupFunctionEntry equ <__imp_RtlLookupFunctionEntry>

externdef __imp_RtlMoveMemory:PPROC
RtlMoveMemory equ <__imp_RtlMoveMemory>

externdef __imp_RtlPcToFileHeader:PPROC
RtlPcToFileHeader equ <__imp_RtlPcToFileHeader>

externdef __imp_RtlRaiseException:PPROC
RtlRaiseException equ <__imp_RtlRaiseException>

externdef __imp_RtlRestoreContext:PPROC
RtlRestoreContext equ <__imp_RtlRestoreContext>

externdef __imp_RtlUnwind:PPROC
RtlUnwind equ <__imp_RtlUnwind>

externdef __imp_RtlUnwindEx:PPROC
RtlUnwindEx equ <__imp_RtlUnwindEx>

externdef __imp_RtlVirtualUnwind:PPROC
RtlVirtualUnwind equ <__imp_RtlVirtualUnwind>

externdef __imp_RtlZeroMemory:PPROC
RtlZeroMemory equ <__imp_RtlZeroMemory>

externdef __imp_ScrollConsoleScreenBufferA:PPROC
ScrollConsoleScreenBufferA equ <__imp_ScrollConsoleScreenBufferA>
  IFNDEF __UNICODE__
    ScrollConsoleScreenBuffer equ <__imp_ScrollConsoleScreenBufferA>
  ENDIF

externdef __imp_ScrollConsoleScreenBufferW:PPROC
ScrollConsoleScreenBufferW equ <__imp_ScrollConsoleScreenBufferW>
  IFDEF __UNICODE__
    ScrollConsoleScreenBuffer equ <__imp_ScrollConsoleScreenBufferW>
  ENDIF

externdef __imp_SearchPathA:PPROC
SearchPathA equ <__imp_SearchPathA>
  IFNDEF __UNICODE__
    SearchPath equ <__imp_SearchPathA>
  ENDIF

externdef __imp_SearchPathW:PPROC
SearchPathW equ <__imp_SearchPathW>
  IFDEF __UNICODE__
    SearchPath equ <__imp_SearchPathW>
  ENDIF

externdef __imp_SetCPGlobal:PPROC
SetCPGlobal equ <__imp_SetCPGlobal>

externdef __imp_SetCalendarInfoA:PPROC
SetCalendarInfoA equ <__imp_SetCalendarInfoA>
  IFNDEF __UNICODE__
    SetCalendarInfo equ <__imp_SetCalendarInfoA>
  ENDIF

externdef __imp_SetCalendarInfoW:PPROC
SetCalendarInfoW equ <__imp_SetCalendarInfoW>
  IFDEF __UNICODE__
    SetCalendarInfo equ <__imp_SetCalendarInfoW>
  ENDIF

externdef __imp_SetClientTimeZoneInformation:PPROC
SetClientTimeZoneInformation equ <__imp_SetClientTimeZoneInformation>

externdef __imp_SetComPlusPackageInstallStatus:PPROC
SetComPlusPackageInstallStatus equ <__imp_SetComPlusPackageInstallStatus>

externdef __imp_SetCommBreak:PPROC
SetCommBreak equ <__imp_SetCommBreak>

externdef __imp_SetCommConfig:PPROC
SetCommConfig equ <__imp_SetCommConfig>

externdef __imp_SetCommMask:PPROC
SetCommMask equ <__imp_SetCommMask>

externdef __imp_SetCommState:PPROC
SetCommState equ <__imp_SetCommState>

externdef __imp_SetCommTimeouts:PPROC
SetCommTimeouts equ <__imp_SetCommTimeouts>

externdef __imp_SetComputerNameA:PPROC
SetComputerNameA equ <__imp_SetComputerNameA>
  IFNDEF __UNICODE__
    SetComputerName equ <__imp_SetComputerNameA>
  ENDIF

externdef __imp_SetComputerNameExA:PPROC
SetComputerNameExA equ <__imp_SetComputerNameExA>
  IFNDEF __UNICODE__
    SetComputerNameEx equ <__imp_SetComputerNameExA>
  ENDIF

externdef __imp_SetComputerNameExW:PPROC
SetComputerNameExW equ <__imp_SetComputerNameExW>
  IFDEF __UNICODE__
    SetComputerNameEx equ <__imp_SetComputerNameExW>
  ENDIF

externdef __imp_SetComputerNameW:PPROC
SetComputerNameW equ <__imp_SetComputerNameW>
  IFDEF __UNICODE__
    SetComputerName equ <__imp_SetComputerNameW>
  ENDIF

externdef __imp_SetConsoleActiveScreenBuffer:PPROC
SetConsoleActiveScreenBuffer equ <__imp_SetConsoleActiveScreenBuffer>

externdef __imp_SetConsoleCP:PPROC
SetConsoleCP equ <__imp_SetConsoleCP>

externdef __imp_SetConsoleCommandHistoryMode:PPROC
SetConsoleCommandHistoryMode equ <__imp_SetConsoleCommandHistoryMode>

externdef __imp_SetConsoleCtrlHandler:PPROC
SetConsoleCtrlHandler equ <__imp_SetConsoleCtrlHandler>

externdef __imp_SetConsoleCursor:PPROC
SetConsoleCursor equ <__imp_SetConsoleCursor>

externdef __imp_SetConsoleCursorInfo:PPROC
SetConsoleCursorInfo equ <__imp_SetConsoleCursorInfo>

externdef __imp_SetConsoleCursorMode:PPROC
SetConsoleCursorMode equ <__imp_SetConsoleCursorMode>

externdef __imp_SetConsoleCursorPosition:PPROC
SetConsoleCursorPosition equ <__imp_SetConsoleCursorPosition>

externdef __imp_SetConsoleDisplayMode:PPROC
SetConsoleDisplayMode equ <__imp_SetConsoleDisplayMode>

externdef __imp_SetConsoleFont:PPROC
SetConsoleFont equ <__imp_SetConsoleFont>

externdef __imp_SetConsoleHardwareState:PPROC
SetConsoleHardwareState equ <__imp_SetConsoleHardwareState>

externdef __imp_SetConsoleIcon:PPROC
SetConsoleIcon equ <__imp_SetConsoleIcon>

externdef __imp_SetConsoleInputExeNameA:PPROC
SetConsoleInputExeNameA equ <__imp_SetConsoleInputExeNameA>
  IFNDEF __UNICODE__
    SetConsoleInputExeName equ <__imp_SetConsoleInputExeNameA>
  ENDIF

externdef __imp_SetConsoleInputExeNameW:PPROC
SetConsoleInputExeNameW equ <__imp_SetConsoleInputExeNameW>
  IFDEF __UNICODE__
    SetConsoleInputExeName equ <__imp_SetConsoleInputExeNameW>
  ENDIF

externdef __imp_SetConsoleKeyShortcuts:PPROC
SetConsoleKeyShortcuts equ <__imp_SetConsoleKeyShortcuts>

externdef __imp_SetConsoleLocalEUDC:PPROC
SetConsoleLocalEUDC equ <__imp_SetConsoleLocalEUDC>

externdef __imp_SetConsoleMaximumWindowSize:PPROC
SetConsoleMaximumWindowSize equ <__imp_SetConsoleMaximumWindowSize>

externdef __imp_SetConsoleMenuClose:PPROC
SetConsoleMenuClose equ <__imp_SetConsoleMenuClose>

externdef __imp_SetConsoleMode:PPROC
SetConsoleMode equ <__imp_SetConsoleMode>

externdef __imp_SetConsoleNlsMode:PPROC
SetConsoleNlsMode equ <__imp_SetConsoleNlsMode>

externdef __imp_SetConsoleNumberOfCommandsA:PPROC
SetConsoleNumberOfCommandsA equ <__imp_SetConsoleNumberOfCommandsA>
  IFNDEF __UNICODE__
    SetConsoleNumberOfCommands equ <__imp_SetConsoleNumberOfCommandsA>
  ENDIF

externdef __imp_SetConsoleNumberOfCommandsW:PPROC
SetConsoleNumberOfCommandsW equ <__imp_SetConsoleNumberOfCommandsW>
  IFDEF __UNICODE__
    SetConsoleNumberOfCommands equ <__imp_SetConsoleNumberOfCommandsW>
  ENDIF

externdef __imp_SetConsoleOS2OemFormat:PPROC
SetConsoleOS2OemFormat equ <__imp_SetConsoleOS2OemFormat>

externdef __imp_SetConsoleOutputCP:PPROC
SetConsoleOutputCP equ <__imp_SetConsoleOutputCP>

externdef __imp_SetConsolePalette:PPROC
SetConsolePalette equ <__imp_SetConsolePalette>

externdef __imp_SetConsoleScreenBufferSize:PPROC
SetConsoleScreenBufferSize equ <__imp_SetConsoleScreenBufferSize>

externdef __imp_SetConsoleTextAttribute:PPROC
SetConsoleTextAttribute equ <__imp_SetConsoleTextAttribute>

externdef __imp_SetConsoleTitleA:PPROC
SetConsoleTitleA equ <__imp_SetConsoleTitleA>
  IFNDEF __UNICODE__
    SetConsoleTitle equ <__imp_SetConsoleTitleA>
  ENDIF

externdef __imp_SetConsoleTitleW:PPROC
SetConsoleTitleW equ <__imp_SetConsoleTitleW>
  IFDEF __UNICODE__
    SetConsoleTitle equ <__imp_SetConsoleTitleW>
  ENDIF

externdef __imp_SetConsoleWindowInfo:PPROC
SetConsoleWindowInfo equ <__imp_SetConsoleWindowInfo>

externdef __imp_SetCriticalSectionSpinCount:PPROC
SetCriticalSectionSpinCount equ <__imp_SetCriticalSectionSpinCount>

externdef __imp_SetCurrentDirectoryA:PPROC
SetCurrentDirectoryA equ <__imp_SetCurrentDirectoryA>
  IFNDEF __UNICODE__
    SetCurrentDirectory equ <__imp_SetCurrentDirectoryA>
  ENDIF

externdef __imp_SetCurrentDirectoryW:PPROC
SetCurrentDirectoryW equ <__imp_SetCurrentDirectoryW>
  IFDEF __UNICODE__
    SetCurrentDirectory equ <__imp_SetCurrentDirectoryW>
  ENDIF

externdef __imp_SetDefaultCommConfigA:PPROC
SetDefaultCommConfigA equ <__imp_SetDefaultCommConfigA>
  IFNDEF __UNICODE__
    SetDefaultCommConfig equ <__imp_SetDefaultCommConfigA>
  ENDIF

externdef __imp_SetDefaultCommConfigW:PPROC
SetDefaultCommConfigW equ <__imp_SetDefaultCommConfigW>
  IFDEF __UNICODE__
    SetDefaultCommConfig equ <__imp_SetDefaultCommConfigW>
  ENDIF

externdef __imp_SetDllDirectoryA:PPROC
SetDllDirectoryA equ <__imp_SetDllDirectoryA>
  IFNDEF __UNICODE__
    SetDllDirectory equ <__imp_SetDllDirectoryA>
  ENDIF

externdef __imp_SetDllDirectoryW:PPROC
SetDllDirectoryW equ <__imp_SetDllDirectoryW>
  IFDEF __UNICODE__
    SetDllDirectory equ <__imp_SetDllDirectoryW>
  ENDIF

externdef __imp_SetEndOfFile:PPROC
SetEndOfFile equ <__imp_SetEndOfFile>

externdef __imp_SetEnvironmentStringsA:PPROC
SetEnvironmentStringsA equ <__imp_SetEnvironmentStringsA>
  IFNDEF __UNICODE__
    SetEnvironmentStrings equ <__imp_SetEnvironmentStringsA>
  ENDIF

externdef __imp_SetEnvironmentStringsW:PPROC
SetEnvironmentStringsW equ <__imp_SetEnvironmentStringsW>
  IFDEF __UNICODE__
    SetEnvironmentStrings equ <__imp_SetEnvironmentStringsW>
  ENDIF

externdef __imp_SetEnvironmentVariableA:PPROC
SetEnvironmentVariableA equ <__imp_SetEnvironmentVariableA>
  IFNDEF __UNICODE__
    SetEnvironmentVariable equ <__imp_SetEnvironmentVariableA>
  ENDIF

externdef __imp_SetEnvironmentVariableW:PPROC
SetEnvironmentVariableW equ <__imp_SetEnvironmentVariableW>
  IFDEF __UNICODE__
    SetEnvironmentVariable equ <__imp_SetEnvironmentVariableW>
  ENDIF

externdef __imp_SetErrorMode:PPROC
SetErrorMode equ <__imp_SetErrorMode>

externdef __imp_SetEvent:PPROC
SetEvent equ <__imp_SetEvent>

externdef __imp_SetFileApisToANSI:PPROC
SetFileApisToANSI equ <__imp_SetFileApisToANSI>

externdef __imp_SetFileApisToOEM:PPROC
SetFileApisToOEM equ <__imp_SetFileApisToOEM>

externdef __imp_SetFileAttributesA:PPROC
SetFileAttributesA equ <__imp_SetFileAttributesA>
  IFNDEF __UNICODE__
    SetFileAttributes equ <__imp_SetFileAttributesA>
  ENDIF

externdef __imp_SetFileAttributesW:PPROC
SetFileAttributesW equ <__imp_SetFileAttributesW>
  IFDEF __UNICODE__
    SetFileAttributes equ <__imp_SetFileAttributesW>
  ENDIF

externdef __imp_SetFileCompletionNotificationModes:PPROC
SetFileCompletionNotificationModes equ <__imp_SetFileCompletionNotificationModes>

externdef __imp_SetFilePointer:PPROC
SetFilePointer equ <__imp_SetFilePointer>

externdef __imp_SetFilePointerEx:PPROC
SetFilePointerEx equ <__imp_SetFilePointerEx>

externdef __imp_SetFileShortNameA:PPROC
SetFileShortNameA equ <__imp_SetFileShortNameA>
  IFNDEF __UNICODE__
    SetFileShortName equ <__imp_SetFileShortNameA>
  ENDIF

externdef __imp_SetFileShortNameW:PPROC
SetFileShortNameW equ <__imp_SetFileShortNameW>
  IFDEF __UNICODE__
    SetFileShortName equ <__imp_SetFileShortNameW>
  ENDIF

externdef __imp_SetFileTime:PPROC
SetFileTime equ <__imp_SetFileTime>

externdef __imp_SetFileValidData:PPROC
SetFileValidData equ <__imp_SetFileValidData>

externdef __imp_SetFirmwareEnvironmentVariableA:PPROC
SetFirmwareEnvironmentVariableA equ <__imp_SetFirmwareEnvironmentVariableA>
  IFNDEF __UNICODE__
    SetFirmwareEnvironmentVariable equ <__imp_SetFirmwareEnvironmentVariableA>
  ENDIF

externdef __imp_SetFirmwareEnvironmentVariableW:PPROC
SetFirmwareEnvironmentVariableW equ <__imp_SetFirmwareEnvironmentVariableW>
  IFDEF __UNICODE__
    SetFirmwareEnvironmentVariable equ <__imp_SetFirmwareEnvironmentVariableW>
  ENDIF

externdef __imp_SetHandleCount:PPROC
SetHandleCount equ <__imp_SetHandleCount>

externdef __imp_SetHandleInformation:PPROC
SetHandleInformation equ <__imp_SetHandleInformation>

externdef __imp_SetInformationJobObject:PPROC
SetInformationJobObject equ <__imp_SetInformationJobObject>

externdef __imp_SetLastConsoleEventActive:PPROC
SetLastConsoleEventActive equ <__imp_SetLastConsoleEventActive>

externdef __imp_SetLastError:PPROC
SetLastError equ <__imp_SetLastError>

externdef __imp_SetLocalPrimaryComputerNameA:PPROC
SetLocalPrimaryComputerNameA equ <__imp_SetLocalPrimaryComputerNameA>
  IFNDEF __UNICODE__
    SetLocalPrimaryComputerName equ <__imp_SetLocalPrimaryComputerNameA>
  ENDIF

externdef __imp_SetLocalPrimaryComputerNameW:PPROC
SetLocalPrimaryComputerNameW equ <__imp_SetLocalPrimaryComputerNameW>
  IFDEF __UNICODE__
    SetLocalPrimaryComputerName equ <__imp_SetLocalPrimaryComputerNameW>
  ENDIF

externdef __imp_SetLocalTime:PPROC
SetLocalTime equ <__imp_SetLocalTime>

externdef __imp_SetLocaleInfoA:PPROC
SetLocaleInfoA equ <__imp_SetLocaleInfoA>
  IFNDEF __UNICODE__
    SetLocaleInfo equ <__imp_SetLocaleInfoA>
  ENDIF

externdef __imp_SetLocaleInfoW:PPROC
SetLocaleInfoW equ <__imp_SetLocaleInfoW>
  IFDEF __UNICODE__
    SetLocaleInfo equ <__imp_SetLocaleInfoW>
  ENDIF

externdef __imp_SetMailslotInfo:PPROC
SetMailslotInfo equ <__imp_SetMailslotInfo>

externdef __imp_SetMessageWaitingIndicator:PPROC
SetMessageWaitingIndicator equ <__imp_SetMessageWaitingIndicator>

externdef __imp_SetNamedPipeHandleState:PPROC
SetNamedPipeHandleState equ <__imp_SetNamedPipeHandleState>

externdef __imp_SetPriorityClass:PPROC
SetPriorityClass equ <__imp_SetPriorityClass>

externdef __imp_SetProcessAffinityMask:PPROC
SetProcessAffinityMask equ <__imp_SetProcessAffinityMask>

externdef __imp_SetProcessPriorityBoost:PPROC
SetProcessPriorityBoost equ <__imp_SetProcessPriorityBoost>

externdef __imp_SetProcessShutdownParameters:PPROC
SetProcessShutdownParameters equ <__imp_SetProcessShutdownParameters>

externdef __imp_SetProcessWorkingSetSize:PPROC
SetProcessWorkingSetSize equ <__imp_SetProcessWorkingSetSize>

externdef __imp_SetProcessWorkingSetSizeEx:PPROC
SetProcessWorkingSetSizeEx equ <__imp_SetProcessWorkingSetSizeEx>

externdef __imp_SetStdHandle:PPROC
SetStdHandle equ <__imp_SetStdHandle>

externdef __imp_SetSystemFileCacheSize:PPROC
SetSystemFileCacheSize equ <__imp_SetSystemFileCacheSize>

externdef __imp_SetSystemPowerState:PPROC
SetSystemPowerState equ <__imp_SetSystemPowerState>

externdef __imp_SetSystemTime:PPROC
SetSystemTime equ <__imp_SetSystemTime>

externdef __imp_SetSystemTimeAdjustment:PPROC
SetSystemTimeAdjustment equ <__imp_SetSystemTimeAdjustment>

externdef __imp_SetTapeParameters:PPROC
SetTapeParameters equ <__imp_SetTapeParameters>

externdef __imp_SetTapePosition:PPROC
SetTapePosition equ <__imp_SetTapePosition>

externdef __imp_SetTermsrvAppInstallMode:PPROC
SetTermsrvAppInstallMode equ <__imp_SetTermsrvAppInstallMode>

externdef __imp_SetThreadAffinityMask:PPROC
SetThreadAffinityMask equ <__imp_SetThreadAffinityMask>

externdef __imp_SetThreadContext:PPROC
SetThreadContext equ <__imp_SetThreadContext>

externdef __imp_SetThreadExecutionState:PPROC
SetThreadExecutionState equ <__imp_SetThreadExecutionState>

externdef __imp_SetThreadIdealProcessor:PPROC
SetThreadIdealProcessor equ <__imp_SetThreadIdealProcessor>

externdef __imp_SetThreadLocale:PPROC
SetThreadLocale equ <__imp_SetThreadLocale>

externdef __imp_SetThreadPriority:PPROC
SetThreadPriority equ <__imp_SetThreadPriority>

externdef __imp_SetThreadPriorityBoost:PPROC
SetThreadPriorityBoost equ <__imp_SetThreadPriorityBoost>

externdef __imp_SetThreadStackGuarantee:PPROC
SetThreadStackGuarantee equ <__imp_SetThreadStackGuarantee>

externdef __imp_SetThreadUILanguage:PPROC
SetThreadUILanguage equ <__imp_SetThreadUILanguage>

externdef __imp_SetTimeZoneInformation:PPROC
SetTimeZoneInformation equ <__imp_SetTimeZoneInformation>

externdef __imp_SetTimerQueueTimer:PPROC
SetTimerQueueTimer equ <__imp_SetTimerQueueTimer>

externdef __imp_SetUnhandledExceptionFilter:PPROC
SetUnhandledExceptionFilter equ <__imp_SetUnhandledExceptionFilter>

externdef __imp_SetUserGeoID:PPROC
SetUserGeoID equ <__imp_SetUserGeoID>

externdef __imp_SetVDMCurrentDirectories:PPROC
SetVDMCurrentDirectories equ <__imp_SetVDMCurrentDirectories>

externdef __imp_SetVolumeLabelA:PPROC
SetVolumeLabelA equ <__imp_SetVolumeLabelA>
  IFNDEF __UNICODE__
    SetVolumeLabel equ <__imp_SetVolumeLabelA>
  ENDIF

externdef __imp_SetVolumeLabelW:PPROC
SetVolumeLabelW equ <__imp_SetVolumeLabelW>
  IFDEF __UNICODE__
    SetVolumeLabel equ <__imp_SetVolumeLabelW>
  ENDIF

externdef __imp_SetVolumeMountPointA:PPROC
SetVolumeMountPointA equ <__imp_SetVolumeMountPointA>
  IFNDEF __UNICODE__
    SetVolumeMountPoint equ <__imp_SetVolumeMountPointA>
  ENDIF

externdef __imp_SetVolumeMountPointW:PPROC
SetVolumeMountPointW equ <__imp_SetVolumeMountPointW>
  IFDEF __UNICODE__
    SetVolumeMountPoint equ <__imp_SetVolumeMountPointW>
  ENDIF

externdef __imp_SetWaitableTimer:PPROC
SetWaitableTimer equ <__imp_SetWaitableTimer>

externdef __imp_SetupComm:PPROC
SetupComm equ <__imp_SetupComm>

externdef __imp_ShowConsoleCursor:PPROC
ShowConsoleCursor equ <__imp_ShowConsoleCursor>

externdef __imp_SignalObjectAndWait:PPROC
SignalObjectAndWait equ <__imp_SignalObjectAndWait>

externdef __imp_SizeofResource:PPROC
SizeofResource equ <__imp_SizeofResource>

externdef __imp_Sleep:PPROC
Sleep equ <__imp_Sleep>

externdef __imp_SleepEx:PPROC
SleepEx equ <__imp_SleepEx>

externdef __imp_SuspendThread:PPROC
SuspendThread equ <__imp_SuspendThread>

externdef __imp_SwitchToFiber:PPROC
SwitchToFiber equ <__imp_SwitchToFiber>

externdef __imp_SwitchToThread:PPROC
SwitchToThread equ <__imp_SwitchToThread>

externdef __imp_SystemTimeToFileTime:PPROC
SystemTimeToFileTime equ <__imp_SystemTimeToFileTime>

externdef __imp_SystemTimeToTzSpecificLocalTime:PPROC
SystemTimeToTzSpecificLocalTime equ <__imp_SystemTimeToTzSpecificLocalTime>

externdef __imp_TerminateJobObject:PPROC
TerminateJobObject equ <__imp_TerminateJobObject>

externdef __imp_TerminateProcess:PPROC
TerminateProcess equ <__imp_TerminateProcess>

externdef __imp_TerminateThread:PPROC
TerminateThread equ <__imp_TerminateThread>

externdef __imp_TermsrvAppInstallMode:PPROC
TermsrvAppInstallMode equ <__imp_TermsrvAppInstallMode>

externdef __imp_Thread32First:PPROC
Thread32First equ <__imp_Thread32First>

externdef __imp_Thread32Next:PPROC
Thread32Next equ <__imp_Thread32Next>

externdef __imp_TlsAlloc:PPROC
TlsAlloc equ <__imp_TlsAlloc>

externdef __imp_TlsFree:PPROC
TlsFree equ <__imp_TlsFree>

externdef __imp_TlsGetValue:PPROC
TlsGetValue equ <__imp_TlsGetValue>

externdef __imp_TlsSetValue:PPROC
TlsSetValue equ <__imp_TlsSetValue>

externdef __imp_Toolhelp32ReadProcessMemory:PPROC
Toolhelp32ReadProcessMemory equ <__imp_Toolhelp32ReadProcessMemory>

externdef __imp_TransactNamedPipe:PPROC
TransactNamedPipe equ <__imp_TransactNamedPipe>

externdef __imp_TransmitCommChar:PPROC
TransmitCommChar equ <__imp_TransmitCommChar>

externdef __imp_TryEnterCriticalSection:PPROC
TryEnterCriticalSection equ <__imp_TryEnterCriticalSection>

externdef __imp_TzSpecificLocalTimeToSystemTime:PPROC
TzSpecificLocalTimeToSystemTime equ <__imp_TzSpecificLocalTimeToSystemTime>

externdef __imp_UTRegister:PPROC
UTRegister equ <__imp_UTRegister>

externdef __imp_UTUnRegister:PPROC
UTUnRegister equ <__imp_UTUnRegister>

externdef __imp_UnhandledExceptionFilter:PPROC
UnhandledExceptionFilter equ <__imp_UnhandledExceptionFilter>

externdef __imp_UnlockFile:PPROC
UnlockFile equ <__imp_UnlockFile>

externdef __imp_UnlockFileEx:PPROC
UnlockFileEx equ <__imp_UnlockFileEx>

externdef __imp_UnmapViewOfFile:PPROC
UnmapViewOfFile equ <__imp_UnmapViewOfFile>

externdef __imp_UnregisterConsoleIME:PPROC
UnregisterConsoleIME equ <__imp_UnregisterConsoleIME>

externdef __imp_UnregisterWait:PPROC
UnregisterWait equ <__imp_UnregisterWait>

externdef __imp_UnregisterWaitEx:PPROC
UnregisterWaitEx equ <__imp_UnregisterWaitEx>

externdef __imp_UpdateResourceA:PPROC
UpdateResourceA equ <__imp_UpdateResourceA>
  IFNDEF __UNICODE__
    UpdateResource equ <__imp_UpdateResourceA>
  ENDIF

externdef __imp_UpdateResourceW:PPROC
UpdateResourceW equ <__imp_UpdateResourceW>
  IFDEF __UNICODE__
    UpdateResource equ <__imp_UpdateResourceW>
  ENDIF

externdef __imp_VDMConsoleOperation:PPROC
VDMConsoleOperation equ <__imp_VDMConsoleOperation>

externdef __imp_VDMOperationStarted:PPROC
VDMOperationStarted equ <__imp_VDMOperationStarted>

externdef __imp_ValidateLCType:PPROC
ValidateLCType equ <__imp_ValidateLCType>

externdef __imp_ValidateLocale:PPROC
ValidateLocale equ <__imp_ValidateLocale>

externdef __imp_VerLanguageNameA:PPROC
VerLanguageNameA equ <__imp_VerLanguageNameA>
  IFNDEF __UNICODE__
    VerLanguageName equ <__imp_VerLanguageNameA>
  ENDIF

externdef __imp_VerLanguageNameW:PPROC
VerLanguageNameW equ <__imp_VerLanguageNameW>
  IFDEF __UNICODE__
    VerLanguageName equ <__imp_VerLanguageNameW>
  ENDIF

externdef __imp_VerSetConditionMask:PPROC
VerSetConditionMask equ <__imp_VerSetConditionMask>

externdef __imp_VerifyConsoleIoHandle:PPROC
VerifyConsoleIoHandle equ <__imp_VerifyConsoleIoHandle>

externdef __imp_VerifyVersionInfoA:PPROC
VerifyVersionInfoA equ <__imp_VerifyVersionInfoA>
  IFNDEF __UNICODE__
    VerifyVersionInfo equ <__imp_VerifyVersionInfoA>
  ENDIF

externdef __imp_VerifyVersionInfoW:PPROC
VerifyVersionInfoW equ <__imp_VerifyVersionInfoW>
  IFDEF __UNICODE__
    VerifyVersionInfo equ <__imp_VerifyVersionInfoW>
  ENDIF

externdef __imp_VirtualAlloc:PPROC
VirtualAlloc equ <__imp_VirtualAlloc>

externdef __imp_VirtualAllocEx:PPROC
VirtualAllocEx equ <__imp_VirtualAllocEx>

externdef __imp_VirtualFree:PPROC
VirtualFree equ <__imp_VirtualFree>

externdef __imp_VirtualFreeEx:PPROC
VirtualFreeEx equ <__imp_VirtualFreeEx>

externdef __imp_VirtualLock:PPROC
VirtualLock equ <__imp_VirtualLock>

externdef __imp_VirtualProtect:PPROC
VirtualProtect equ <__imp_VirtualProtect>

externdef __imp_VirtualProtectEx:PPROC
VirtualProtectEx equ <__imp_VirtualProtectEx>

externdef __imp_VirtualQuery:PPROC
VirtualQuery equ <__imp_VirtualQuery>

externdef __imp_VirtualQueryEx:PPROC
VirtualQueryEx equ <__imp_VirtualQueryEx>

externdef __imp_VirtualUnlock:PPROC
VirtualUnlock equ <__imp_VirtualUnlock>

externdef __imp_WTSGetActiveConsoleSessionId:PPROC
WTSGetActiveConsoleSessionId equ <__imp_WTSGetActiveConsoleSessionId>

externdef __imp_WaitCommEvent:PPROC
WaitCommEvent equ <__imp_WaitCommEvent>

externdef __imp_WaitForDebugEvent:PPROC
WaitForDebugEvent equ <__imp_WaitForDebugEvent>

externdef __imp_WaitForMultipleObjects:PPROC
WaitForMultipleObjects equ <__imp_WaitForMultipleObjects>

externdef __imp_WaitForMultipleObjectsEx:PPROC
WaitForMultipleObjectsEx equ <__imp_WaitForMultipleObjectsEx>

externdef __imp_WaitForSingleObject:PPROC
WaitForSingleObject equ <__imp_WaitForSingleObject>

externdef __imp_WaitForSingleObjectEx:PPROC
WaitForSingleObjectEx equ <__imp_WaitForSingleObjectEx>

externdef __imp_WaitNamedPipeA:PPROC
WaitNamedPipeA equ <__imp_WaitNamedPipeA>
  IFNDEF __UNICODE__
    WaitNamedPipe equ <__imp_WaitNamedPipeA>
  ENDIF

externdef __imp_WaitNamedPipeW:PPROC
WaitNamedPipeW equ <__imp_WaitNamedPipeW>
  IFDEF __UNICODE__
    WaitNamedPipe equ <__imp_WaitNamedPipeW>
  ENDIF

externdef __imp_WideCharToMultiByte:PPROC
WideCharToMultiByte equ <__imp_WideCharToMultiByte>

externdef __imp_WinExec:PPROC
WinExec equ <__imp_WinExec>

externdef __imp_Wow64DisableWow64FsRedirection:PPROC
Wow64DisableWow64FsRedirection equ <__imp_Wow64DisableWow64FsRedirection>

externdef __imp_Wow64EnableWow64FsRedirection:PPROC
Wow64EnableWow64FsRedirection equ <__imp_Wow64EnableWow64FsRedirection>

externdef __imp_Wow64RevertWow64FsRedirection:PPROC
Wow64RevertWow64FsRedirection equ <__imp_Wow64RevertWow64FsRedirection>

externdef __imp_WriteConsoleA:PPROC
WriteConsoleA equ <__imp_WriteConsoleA>
  IFNDEF __UNICODE__
    WriteConsole equ <__imp_WriteConsoleA>
  ENDIF

externdef __imp_WriteConsoleInputA:PPROC
WriteConsoleInputA equ <__imp_WriteConsoleInputA>
  IFNDEF __UNICODE__
    WriteConsoleInput equ <__imp_WriteConsoleInputA>
  ENDIF

externdef __imp_WriteConsoleInputVDMA:PPROC
WriteConsoleInputVDMA equ <__imp_WriteConsoleInputVDMA>
  IFNDEF __UNICODE__
    WriteConsoleInputVDM equ <__imp_WriteConsoleInputVDMA>
  ENDIF

externdef __imp_WriteConsoleInputVDMW:PPROC
WriteConsoleInputVDMW equ <__imp_WriteConsoleInputVDMW>
  IFDEF __UNICODE__
    WriteConsoleInputVDM equ <__imp_WriteConsoleInputVDMW>
  ENDIF

externdef __imp_WriteConsoleInputW:PPROC
WriteConsoleInputW equ <__imp_WriteConsoleInputW>
  IFDEF __UNICODE__
    WriteConsoleInput equ <__imp_WriteConsoleInputW>
  ENDIF

externdef __imp_WriteConsoleOutputA:PPROC
WriteConsoleOutputA equ <__imp_WriteConsoleOutputA>
  IFNDEF __UNICODE__
    WriteConsoleOutput equ <__imp_WriteConsoleOutputA>
  ENDIF

externdef __imp_WriteConsoleOutputAttribute:PPROC
WriteConsoleOutputAttribute equ <__imp_WriteConsoleOutputAttribute>

externdef __imp_WriteConsoleOutputCharacterA:PPROC
WriteConsoleOutputCharacterA equ <__imp_WriteConsoleOutputCharacterA>
  IFNDEF __UNICODE__
    WriteConsoleOutputCharacter equ <__imp_WriteConsoleOutputCharacterA>
  ENDIF

externdef __imp_WriteConsoleOutputCharacterW:PPROC
WriteConsoleOutputCharacterW equ <__imp_WriteConsoleOutputCharacterW>
  IFDEF __UNICODE__
    WriteConsoleOutputCharacter equ <__imp_WriteConsoleOutputCharacterW>
  ENDIF

externdef __imp_WriteConsoleOutputW:PPROC
WriteConsoleOutputW equ <__imp_WriteConsoleOutputW>
  IFDEF __UNICODE__
    WriteConsoleOutput equ <__imp_WriteConsoleOutputW>
  ENDIF

externdef __imp_WriteConsoleW:PPROC
WriteConsoleW equ <__imp_WriteConsoleW>
  IFDEF __UNICODE__
    WriteConsole equ <__imp_WriteConsoleW>
  ENDIF

externdef __imp_WriteFile:PPROC
WriteFile equ <__imp_WriteFile>

externdef __imp_WriteFileEx:PPROC
WriteFileEx equ <__imp_WriteFileEx>

externdef __imp_WriteFileGather:PPROC
WriteFileGather equ <__imp_WriteFileGather>

externdef __imp_WritePrivateProfileSectionA:PPROC
WritePrivateProfileSectionA equ <__imp_WritePrivateProfileSectionA>
  IFNDEF __UNICODE__
    WritePrivateProfileSection equ <__imp_WritePrivateProfileSectionA>
  ENDIF

externdef __imp_WritePrivateProfileSectionW:PPROC
WritePrivateProfileSectionW equ <__imp_WritePrivateProfileSectionW>
  IFDEF __UNICODE__
    WritePrivateProfileSection equ <__imp_WritePrivateProfileSectionW>
  ENDIF

externdef __imp_WritePrivateProfileStringA:PPROC
WritePrivateProfileStringA equ <__imp_WritePrivateProfileStringA>
  IFNDEF __UNICODE__
    WritePrivateProfileString equ <__imp_WritePrivateProfileStringA>
  ENDIF

externdef __imp_WritePrivateProfileStringW:PPROC
WritePrivateProfileStringW equ <__imp_WritePrivateProfileStringW>
  IFDEF __UNICODE__
    WritePrivateProfileString equ <__imp_WritePrivateProfileStringW>
  ENDIF

externdef __imp_WritePrivateProfileStructA:PPROC
WritePrivateProfileStructA equ <__imp_WritePrivateProfileStructA>
  IFNDEF __UNICODE__
    WritePrivateProfileStruct equ <__imp_WritePrivateProfileStructA>
  ENDIF

externdef __imp_WritePrivateProfileStructW:PPROC
WritePrivateProfileStructW equ <__imp_WritePrivateProfileStructW>
  IFDEF __UNICODE__
    WritePrivateProfileStruct equ <__imp_WritePrivateProfileStructW>
  ENDIF

externdef __imp_WriteProcessMemory:PPROC
WriteProcessMemory equ <__imp_WriteProcessMemory>

externdef __imp_WriteProfileSectionA:PPROC
WriteProfileSectionA equ <__imp_WriteProfileSectionA>
  IFNDEF __UNICODE__
    WriteProfileSection equ <__imp_WriteProfileSectionA>
  ENDIF

externdef __imp_WriteProfileSectionW:PPROC
WriteProfileSectionW equ <__imp_WriteProfileSectionW>
  IFDEF __UNICODE__
    WriteProfileSection equ <__imp_WriteProfileSectionW>
  ENDIF

externdef __imp_WriteProfileStringA:PPROC
WriteProfileStringA equ <__imp_WriteProfileStringA>
  IFNDEF __UNICODE__
    WriteProfileString equ <__imp_WriteProfileStringA>
  ENDIF

externdef __imp_WriteProfileStringW:PPROC
WriteProfileStringW equ <__imp_WriteProfileStringW>
  IFDEF __UNICODE__
    WriteProfileString equ <__imp_WriteProfileStringW>
  ENDIF

externdef __imp_WriteTapemark:PPROC
WriteTapemark equ <__imp_WriteTapemark>

externdef __imp_ZombifyActCtx:PPROC
ZombifyActCtx equ <__imp_ZombifyActCtx>

externdef __imp___C_specific_handler:PPROC
__C_specific_handler equ <__imp___C_specific_handler>

externdef __imp___chkstk:PPROC
__chkstk equ <__imp___chkstk>

externdef __imp___misaligned_access:PPROC
__misaligned_access equ <__imp___misaligned_access>

externdef __imp__hread:PPROC
_hread equ <__imp__hread>

externdef __imp__hwrite:PPROC
_hwrite equ <__imp__hwrite>

externdef __imp__lclose:PPROC
_lclose equ <__imp__lclose>

externdef __imp__lcreat:PPROC
_lcreat equ <__imp__lcreat>

externdef __imp__llseek:PPROC
_llseek equ <__imp__llseek>

externdef __imp__local_unwind:PPROC
_local_unwind equ <__imp__local_unwind>

externdef __imp__lopen:PPROC
_lopen equ <__imp__lopen>

externdef __imp__lread:PPROC
_lread equ <__imp__lread>

externdef __imp__lwrite:PPROC
_lwrite equ <__imp__lwrite>

externdef __imp_lstrcat:PPROC
lstrcat equ <__imp_lstrcat>

externdef __imp_lstrcatA:PPROC
lstrcatA equ <__imp_lstrcatA>
  IFNDEF __UNICODE__
    lstrcat equ <__imp_lstrcatA>
  ENDIF

externdef __imp_lstrcatW:PPROC
lstrcatW equ <__imp_lstrcatW>
  IFDEF __UNICODE__
    lstrcat equ <__imp_lstrcatW>
  ENDIF

externdef __imp_lstrcmp:PPROC
lstrcmp equ <__imp_lstrcmp>

externdef __imp_lstrcmpA:PPROC
lstrcmpA equ <__imp_lstrcmpA>
  IFNDEF __UNICODE__
    lstrcmp equ <__imp_lstrcmpA>
  ENDIF

externdef __imp_lstrcmpW:PPROC
lstrcmpW equ <__imp_lstrcmpW>
  IFDEF __UNICODE__
    lstrcmp equ <__imp_lstrcmpW>
  ENDIF

externdef __imp_lstrcmpi:PPROC
lstrcmpi equ <__imp_lstrcmpi>

externdef __imp_lstrcmpiA:PPROC
lstrcmpiA equ <__imp_lstrcmpiA>
  IFNDEF __UNICODE__
    lstrcmpi equ <__imp_lstrcmpiA>
  ENDIF

externdef __imp_lstrcmpiW:PPROC
lstrcmpiW equ <__imp_lstrcmpiW>
  IFDEF __UNICODE__
    lstrcmpi equ <__imp_lstrcmpiW>
  ENDIF

externdef __imp_lstrcpy:PPROC
lstrcpy equ <__imp_lstrcpy>

externdef __imp_lstrcpyA:PPROC
lstrcpyA equ <__imp_lstrcpyA>
  IFNDEF __UNICODE__
    lstrcpy equ <__imp_lstrcpyA>
  ENDIF

externdef __imp_lstrcpyW:PPROC
lstrcpyW equ <__imp_lstrcpyW>
  IFDEF __UNICODE__
    lstrcpy equ <__imp_lstrcpyW>
  ENDIF

externdef __imp_lstrcpyn:PPROC
lstrcpyn equ <__imp_lstrcpyn>

externdef __imp_lstrcpynA:PPROC
lstrcpynA equ <__imp_lstrcpynA>
  IFNDEF __UNICODE__
    lstrcpyn equ <__imp_lstrcpynA>
  ENDIF

externdef __imp_lstrcpynW:PPROC
lstrcpynW equ <__imp_lstrcpynW>
  IFDEF __UNICODE__
    lstrcpyn equ <__imp_lstrcpynW>
  ENDIF

externdef __imp_lstrlen:PPROC
lstrlen equ <__imp_lstrlen>

externdef __imp_lstrlenA:PPROC
lstrlenA equ <__imp_lstrlenA>
  IFNDEF __UNICODE__
    lstrlen equ <__imp_lstrlenA>
  ENDIF

externdef __imp_lstrlenW:PPROC
lstrlenW equ <__imp_lstrlenW>
  IFDEF __UNICODE__
    lstrlen equ <__imp_lstrlenW>
  ENDIF

externdef __imp_uaw_lstrcmpW:PPROC
uaw_lstrcmpW equ <__imp_uaw_lstrcmpW>
  IFDEF __UNICODE__
    uaw_lstrcmp equ <__imp_uaw_lstrcmpW>
  ENDIF

externdef __imp_uaw_lstrcmpiW:PPROC
uaw_lstrcmpiW equ <__imp_uaw_lstrcmpiW>
  IFDEF __UNICODE__
    uaw_lstrcmpi equ <__imp_uaw_lstrcmpiW>
  ENDIF

externdef __imp_uaw_lstrlenW:PPROC
uaw_lstrlenW equ <__imp_uaw_lstrlenW>
  IFDEF __UNICODE__
    uaw_lstrlen equ <__imp_uaw_lstrlenW>
  ENDIF

externdef __imp_uaw_wcschr:PPROC
uaw_wcschr equ <__imp_uaw_wcschr>

externdef __imp_uaw_wcscpy:PPROC
uaw_wcscpy equ <__imp_uaw_wcscpy>

externdef __imp_uaw_wcsicmp:PPROC
uaw_wcsicmp equ <__imp_uaw_wcsicmp>

externdef __imp_uaw_wcslen:PPROC
uaw_wcslen equ <__imp_uaw_wcslen>

externdef __imp_uaw_wcsrchr:PPROC
uaw_wcsrchr equ <__imp_uaw_wcsrchr>
