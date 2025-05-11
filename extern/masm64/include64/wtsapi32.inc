externdef __imp_WTSCloseServer:PPROC
WTSCloseServer equ <__imp_WTSCloseServer>

externdef __imp_WTSDisconnectSession:PPROC
WTSDisconnectSession equ <__imp_WTSDisconnectSession>

externdef __imp_WTSEnumerateProcessesA:PPROC
WTSEnumerateProcessesA equ <__imp_WTSEnumerateProcessesA>
  IFNDEF __UNICODE__
    WTSEnumerateProcesses equ <__imp_WTSEnumerateProcessesA>
  ENDIF

externdef __imp_WTSEnumerateProcessesW:PPROC
WTSEnumerateProcessesW equ <__imp_WTSEnumerateProcessesW>
  IFDEF __UNICODE__
    WTSEnumerateProcesses equ <__imp_WTSEnumerateProcessesW>
  ENDIF

externdef __imp_WTSEnumerateServersA:PPROC
WTSEnumerateServersA equ <__imp_WTSEnumerateServersA>
  IFNDEF __UNICODE__
    WTSEnumerateServers equ <__imp_WTSEnumerateServersA>
  ENDIF

externdef __imp_WTSEnumerateServersW:PPROC
WTSEnumerateServersW equ <__imp_WTSEnumerateServersW>
  IFDEF __UNICODE__
    WTSEnumerateServers equ <__imp_WTSEnumerateServersW>
  ENDIF

externdef __imp_WTSEnumerateSessionsA:PPROC
WTSEnumerateSessionsA equ <__imp_WTSEnumerateSessionsA>
  IFNDEF __UNICODE__
    WTSEnumerateSessions equ <__imp_WTSEnumerateSessionsA>
  ENDIF

externdef __imp_WTSEnumerateSessionsW:PPROC
WTSEnumerateSessionsW equ <__imp_WTSEnumerateSessionsW>
  IFDEF __UNICODE__
    WTSEnumerateSessions equ <__imp_WTSEnumerateSessionsW>
  ENDIF

externdef __imp_WTSFreeMemory:PPROC
WTSFreeMemory equ <__imp_WTSFreeMemory>

externdef __imp_WTSLogoffSession:PPROC
WTSLogoffSession equ <__imp_WTSLogoffSession>

externdef __imp_WTSOpenServerA:PPROC
WTSOpenServerA equ <__imp_WTSOpenServerA>
  IFNDEF __UNICODE__
    WTSOpenServer equ <__imp_WTSOpenServerA>
  ENDIF

externdef __imp_WTSOpenServerW:PPROC
WTSOpenServerW equ <__imp_WTSOpenServerW>
  IFDEF __UNICODE__
    WTSOpenServer equ <__imp_WTSOpenServerW>
  ENDIF

externdef __imp_WTSQuerySessionInformationA:PPROC
WTSQuerySessionInformationA equ <__imp_WTSQuerySessionInformationA>
  IFNDEF __UNICODE__
    WTSQuerySessionInformation equ <__imp_WTSQuerySessionInformationA>
  ENDIF

externdef __imp_WTSQuerySessionInformationW:PPROC
WTSQuerySessionInformationW equ <__imp_WTSQuerySessionInformationW>
  IFDEF __UNICODE__
    WTSQuerySessionInformation equ <__imp_WTSQuerySessionInformationW>
  ENDIF

externdef __imp_WTSQueryUserConfigA:PPROC
WTSQueryUserConfigA equ <__imp_WTSQueryUserConfigA>
  IFNDEF __UNICODE__
    WTSQueryUserConfig equ <__imp_WTSQueryUserConfigA>
  ENDIF

externdef __imp_WTSQueryUserConfigW:PPROC
WTSQueryUserConfigW equ <__imp_WTSQueryUserConfigW>
  IFDEF __UNICODE__
    WTSQueryUserConfig equ <__imp_WTSQueryUserConfigW>
  ENDIF

externdef __imp_WTSQueryUserToken:PPROC
WTSQueryUserToken equ <__imp_WTSQueryUserToken>

externdef __imp_WTSRegisterSessionNotification:PPROC
WTSRegisterSessionNotification equ <__imp_WTSRegisterSessionNotification>

externdef __imp_WTSSendMessageA:PPROC
WTSSendMessageA equ <__imp_WTSSendMessageA>
  IFNDEF __UNICODE__
    WTSSendMessage equ <__imp_WTSSendMessageA>
  ENDIF

externdef __imp_WTSSendMessageW:PPROC
WTSSendMessageW equ <__imp_WTSSendMessageW>
  IFDEF __UNICODE__
    WTSSendMessage equ <__imp_WTSSendMessageW>
  ENDIF

externdef __imp_WTSSetSessionInformationA:PPROC
WTSSetSessionInformationA equ <__imp_WTSSetSessionInformationA>
  IFNDEF __UNICODE__
    WTSSetSessionInformation equ <__imp_WTSSetSessionInformationA>
  ENDIF

externdef __imp_WTSSetSessionInformationW:PPROC
WTSSetSessionInformationW equ <__imp_WTSSetSessionInformationW>
  IFDEF __UNICODE__
    WTSSetSessionInformation equ <__imp_WTSSetSessionInformationW>
  ENDIF

externdef __imp_WTSSetUserConfigA:PPROC
WTSSetUserConfigA equ <__imp_WTSSetUserConfigA>
  IFNDEF __UNICODE__
    WTSSetUserConfig equ <__imp_WTSSetUserConfigA>
  ENDIF

externdef __imp_WTSSetUserConfigW:PPROC
WTSSetUserConfigW equ <__imp_WTSSetUserConfigW>
  IFDEF __UNICODE__
    WTSSetUserConfig equ <__imp_WTSSetUserConfigW>
  ENDIF

externdef __imp_WTSShutdownSystem:PPROC
WTSShutdownSystem equ <__imp_WTSShutdownSystem>

externdef __imp_WTSTerminateProcess:PPROC
WTSTerminateProcess equ <__imp_WTSTerminateProcess>

externdef __imp_WTSUnRegisterSessionNotification:PPROC
WTSUnRegisterSessionNotification equ <__imp_WTSUnRegisterSessionNotification>

externdef __imp_WTSVirtualChannelClose:PPROC
WTSVirtualChannelClose equ <__imp_WTSVirtualChannelClose>

externdef __imp_WTSVirtualChannelOpen:PPROC
WTSVirtualChannelOpen equ <__imp_WTSVirtualChannelOpen>

externdef __imp_WTSVirtualChannelPurgeInput:PPROC
WTSVirtualChannelPurgeInput equ <__imp_WTSVirtualChannelPurgeInput>

externdef __imp_WTSVirtualChannelPurgeOutput:PPROC
WTSVirtualChannelPurgeOutput equ <__imp_WTSVirtualChannelPurgeOutput>

externdef __imp_WTSVirtualChannelQuery:PPROC
WTSVirtualChannelQuery equ <__imp_WTSVirtualChannelQuery>

externdef __imp_WTSVirtualChannelRead:PPROC
WTSVirtualChannelRead equ <__imp_WTSVirtualChannelRead>

externdef __imp_WTSVirtualChannelWrite:PPROC
WTSVirtualChannelWrite equ <__imp_WTSVirtualChannelWrite>

externdef __imp_WTSWaitSystemEvent:PPROC
WTSWaitSystemEvent equ <__imp_WTSWaitSystemEvent>
