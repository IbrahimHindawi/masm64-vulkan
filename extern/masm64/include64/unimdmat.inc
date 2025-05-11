externdef __imp_UmAbortCurrentModemCommand:PPROC
UmAbortCurrentModemCommand equ <__imp_UmAbortCurrentModemCommand>

externdef __imp_UmAnswerModem:PPROC
UmAnswerModem equ <__imp_UmAnswerModem>

externdef __imp_UmCloseModem:PPROC
UmCloseModem equ <__imp_UmCloseModem>

externdef __imp_UmDeinitializeModemDriver:PPROC
UmDeinitializeModemDriver equ <__imp_UmDeinitializeModemDriver>

externdef __imp_UmDialModem:PPROC
UmDialModem equ <__imp_UmDialModem>

externdef __imp_UmDuplicateDeviceHandle:PPROC
UmDuplicateDeviceHandle equ <__imp_UmDuplicateDeviceHandle>

externdef __imp_UmGenerateDigit:PPROC
UmGenerateDigit equ <__imp_UmGenerateDigit>

externdef __imp_UmGetDiagnostics:PPROC
UmGetDiagnostics equ <__imp_UmGetDiagnostics>

externdef __imp_UmHangupModem:PPROC
UmHangupModem equ <__imp_UmHangupModem>

externdef __imp_UmInitModem:PPROC
UmInitModem equ <__imp_UmInitModem>

externdef __imp_UmInitializeModemDriver:PPROC
UmInitializeModemDriver equ <__imp_UmInitializeModemDriver>

externdef __imp_UmIssueCommand:PPROC
UmIssueCommand equ <__imp_UmIssueCommand>

externdef __imp_UmLogDiagnostics:PPROC
UmLogDiagnostics equ <__imp_UmLogDiagnostics>

externdef __imp_UmLogStringA:PPROC
UmLogStringA equ <__imp_UmLogStringA>
  IFNDEF __UNICODE__
    UmLogString equ <__imp_UmLogStringA>
  ENDIF

externdef __imp_UmMonitorModem:PPROC
UmMonitorModem equ <__imp_UmMonitorModem>

externdef __imp_UmOpenModem:PPROC
UmOpenModem equ <__imp_UmOpenModem>

externdef __imp_UmSetPassthroughMode:PPROC
UmSetPassthroughMode equ <__imp_UmSetPassthroughMode>

externdef __imp_UmSetSpeakerPhoneState:PPROC
UmSetSpeakerPhoneState equ <__imp_UmSetSpeakerPhoneState>

externdef __imp_UmWaveAction:PPROC
UmWaveAction equ <__imp_UmWaveAction>
