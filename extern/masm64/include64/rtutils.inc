externdef __imp_LogErrorA:PPROC
LogErrorA equ <__imp_LogErrorA>
  IFNDEF __UNICODE__
    LogError equ <__imp_LogErrorA>
  ENDIF

externdef __imp_LogErrorW:PPROC
LogErrorW equ <__imp_LogErrorW>
  IFDEF __UNICODE__
    LogError equ <__imp_LogErrorW>
  ENDIF

externdef __imp_LogEventA:PPROC
LogEventA equ <__imp_LogEventA>
  IFNDEF __UNICODE__
    LogEvent equ <__imp_LogEventA>
  ENDIF

externdef __imp_LogEventW:PPROC
LogEventW equ <__imp_LogEventW>
  IFDEF __UNICODE__
    LogEvent equ <__imp_LogEventW>
  ENDIF

externdef __imp_MprSetupProtocolEnum:PPROC
MprSetupProtocolEnum equ <__imp_MprSetupProtocolEnum>

externdef __imp_MprSetupProtocolFree:PPROC
MprSetupProtocolFree equ <__imp_MprSetupProtocolFree>

externdef __imp_QueueWorkItem:PPROC
QueueWorkItem equ <__imp_QueueWorkItem>

externdef __imp_RouterAssert:PPROC
RouterAssert equ <__imp_RouterAssert>

externdef __imp_RouterGetErrorStringA:PPROC
RouterGetErrorStringA equ <__imp_RouterGetErrorStringA>
  IFNDEF __UNICODE__
    RouterGetErrorString equ <__imp_RouterGetErrorStringA>
  ENDIF

externdef __imp_RouterGetErrorStringW:PPROC
RouterGetErrorStringW equ <__imp_RouterGetErrorStringW>
  IFDEF __UNICODE__
    RouterGetErrorString equ <__imp_RouterGetErrorStringW>
  ENDIF

externdef __imp_RouterLogDeregisterA:PPROC
RouterLogDeregisterA equ <__imp_RouterLogDeregisterA>
  IFNDEF __UNICODE__
    RouterLogDeregister equ <__imp_RouterLogDeregisterA>
  ENDIF

externdef __imp_RouterLogDeregisterW:PPROC
RouterLogDeregisterW equ <__imp_RouterLogDeregisterW>
  IFDEF __UNICODE__
    RouterLogDeregister equ <__imp_RouterLogDeregisterW>
  ENDIF

externdef __imp_RouterLogEventA:PPROC
RouterLogEventA equ <__imp_RouterLogEventA>
  IFNDEF __UNICODE__
    RouterLogEvent equ <__imp_RouterLogEventA>
  ENDIF

externdef __imp_RouterLogEventDataA:PPROC
RouterLogEventDataA equ <__imp_RouterLogEventDataA>
  IFNDEF __UNICODE__
    RouterLogEventData equ <__imp_RouterLogEventDataA>
  ENDIF

externdef __imp_RouterLogEventDataW:PPROC
RouterLogEventDataW equ <__imp_RouterLogEventDataW>
  IFDEF __UNICODE__
    RouterLogEventData equ <__imp_RouterLogEventDataW>
  ENDIF

externdef __imp_RouterLogEventExA:PPROC
RouterLogEventExA equ <__imp_RouterLogEventExA>
  IFNDEF __UNICODE__
    RouterLogEventEx equ <__imp_RouterLogEventExA>
  ENDIF

externdef __imp_RouterLogEventExW:PPROC
RouterLogEventExW equ <__imp_RouterLogEventExW>
  IFDEF __UNICODE__
    RouterLogEventEx equ <__imp_RouterLogEventExW>
  ENDIF

externdef __imp_RouterLogEventStringA:PPROC
RouterLogEventStringA equ <__imp_RouterLogEventStringA>
  IFNDEF __UNICODE__
    RouterLogEventString equ <__imp_RouterLogEventStringA>
  ENDIF

externdef __imp_RouterLogEventStringW:PPROC
RouterLogEventStringW equ <__imp_RouterLogEventStringW>
  IFDEF __UNICODE__
    RouterLogEventString equ <__imp_RouterLogEventStringW>
  ENDIF

externdef __imp_RouterLogEventValistExA:PPROC
RouterLogEventValistExA equ <__imp_RouterLogEventValistExA>
  IFNDEF __UNICODE__
    RouterLogEventValistEx equ <__imp_RouterLogEventValistExA>
  ENDIF

externdef __imp_RouterLogEventValistExW:PPROC
RouterLogEventValistExW equ <__imp_RouterLogEventValistExW>
  IFDEF __UNICODE__
    RouterLogEventValistEx equ <__imp_RouterLogEventValistExW>
  ENDIF

externdef __imp_RouterLogEventW:PPROC
RouterLogEventW equ <__imp_RouterLogEventW>
  IFDEF __UNICODE__
    RouterLogEvent equ <__imp_RouterLogEventW>
  ENDIF

externdef __imp_RouterLogRegisterA:PPROC
RouterLogRegisterA equ <__imp_RouterLogRegisterA>
  IFNDEF __UNICODE__
    RouterLogRegister equ <__imp_RouterLogRegisterA>
  ENDIF

externdef __imp_RouterLogRegisterW:PPROC
RouterLogRegisterW equ <__imp_RouterLogRegisterW>
  IFDEF __UNICODE__
    RouterLogRegister equ <__imp_RouterLogRegisterW>
  ENDIF

externdef __imp_SetIoCompletionProc:PPROC
SetIoCompletionProc equ <__imp_SetIoCompletionProc>

externdef __imp_TraceDeregisterA:PPROC
TraceDeregisterA equ <__imp_TraceDeregisterA>
  IFNDEF __UNICODE__
    TraceDeregister equ <__imp_TraceDeregisterA>
  ENDIF

externdef __imp_TraceDeregisterExA:PPROC
TraceDeregisterExA equ <__imp_TraceDeregisterExA>
  IFNDEF __UNICODE__
    TraceDeregisterEx equ <__imp_TraceDeregisterExA>
  ENDIF

externdef __imp_TraceDeregisterExW:PPROC
TraceDeregisterExW equ <__imp_TraceDeregisterExW>
  IFDEF __UNICODE__
    TraceDeregisterEx equ <__imp_TraceDeregisterExW>
  ENDIF

externdef __imp_TraceDeregisterW:PPROC
TraceDeregisterW equ <__imp_TraceDeregisterW>
  IFDEF __UNICODE__
    TraceDeregister equ <__imp_TraceDeregisterW>
  ENDIF

externdef __imp_TraceDumpExA:PPROC
TraceDumpExA equ <__imp_TraceDumpExA>
  IFNDEF __UNICODE__
    TraceDumpEx equ <__imp_TraceDumpExA>
  ENDIF

externdef __imp_TraceDumpExW:PPROC
TraceDumpExW equ <__imp_TraceDumpExW>
  IFDEF __UNICODE__
    TraceDumpEx equ <__imp_TraceDumpExW>
  ENDIF

externdef __imp_TraceGetConsoleA:PPROC
TraceGetConsoleA equ <__imp_TraceGetConsoleA>
  IFNDEF __UNICODE__
    TraceGetConsole equ <__imp_TraceGetConsoleA>
  ENDIF

externdef __imp_TraceGetConsoleW:PPROC
TraceGetConsoleW equ <__imp_TraceGetConsoleW>
  IFDEF __UNICODE__
    TraceGetConsole equ <__imp_TraceGetConsoleW>
  ENDIF

externdef __imp_TracePrintfA:PPROC
TracePrintfA equ <__imp_TracePrintfA>
  IFNDEF __UNICODE__
    TracePrintf equ <__imp_TracePrintfA>
  ENDIF

externdef __imp_TracePrintfExA:PPROC
TracePrintfExA equ <__imp_TracePrintfExA>
  IFNDEF __UNICODE__
    TracePrintfEx equ <__imp_TracePrintfExA>
  ENDIF

externdef __imp_TracePrintfExW:PPROC
TracePrintfExW equ <__imp_TracePrintfExW>
  IFDEF __UNICODE__
    TracePrintfEx equ <__imp_TracePrintfExW>
  ENDIF

externdef __imp_TracePrintfW:PPROC
TracePrintfW equ <__imp_TracePrintfW>
  IFDEF __UNICODE__
    TracePrintf equ <__imp_TracePrintfW>
  ENDIF

externdef __imp_TracePutsExA:PPROC
TracePutsExA equ <__imp_TracePutsExA>
  IFNDEF __UNICODE__
    TracePutsEx equ <__imp_TracePutsExA>
  ENDIF

externdef __imp_TracePutsExW:PPROC
TracePutsExW equ <__imp_TracePutsExW>
  IFDEF __UNICODE__
    TracePutsEx equ <__imp_TracePutsExW>
  ENDIF

externdef __imp_TraceRegisterExA:PPROC
TraceRegisterExA equ <__imp_TraceRegisterExA>
  IFNDEF __UNICODE__
    TraceRegisterEx equ <__imp_TraceRegisterExA>
  ENDIF

externdef __imp_TraceRegisterExW:PPROC
TraceRegisterExW equ <__imp_TraceRegisterExW>
  IFDEF __UNICODE__
    TraceRegisterEx equ <__imp_TraceRegisterExW>
  ENDIF

externdef __imp_TraceVprintfExA:PPROC
TraceVprintfExA equ <__imp_TraceVprintfExA>
  IFNDEF __UNICODE__
    TraceVprintfEx equ <__imp_TraceVprintfExA>
  ENDIF

externdef __imp_TraceVprintfExW:PPROC
TraceVprintfExW equ <__imp_TraceVprintfExW>
  IFDEF __UNICODE__
    TraceVprintfEx equ <__imp_TraceVprintfExW>
  ENDIF
