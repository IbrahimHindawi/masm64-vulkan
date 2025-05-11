externdef __imp_AddERExcludedApplicationA:PPROC
AddERExcludedApplicationA equ <__imp_AddERExcludedApplicationA>
  IFNDEF __UNICODE__
    AddERExcludedApplication equ <__imp_AddERExcludedApplicationA>
  ENDIF

externdef __imp_AddERExcludedApplicationW:PPROC
AddERExcludedApplicationW equ <__imp_AddERExcludedApplicationW>
  IFDEF __UNICODE__
    AddERExcludedApplication equ <__imp_AddERExcludedApplicationW>
  ENDIF

externdef __imp_CreateMinidumpW:PPROC
CreateMinidumpW equ <__imp_CreateMinidumpW>
  IFDEF __UNICODE__
    CreateMinidump equ <__imp_CreateMinidumpW>
  ENDIF

externdef __imp_ReportEREvent:PPROC
ReportEREvent equ <__imp_ReportEREvent>

externdef __imp_ReportEREventDW:PPROC
ReportEREventDW equ <__imp_ReportEREventDW>
  IFDEF __UNICODE__
    ReportEREventD equ <__imp_ReportEREventDW>
  ENDIF

externdef __imp_ReportFault:PPROC
ReportFault equ <__imp_ReportFault>

externdef __imp_ReportFaultDWM:PPROC
ReportFaultDWM equ <__imp_ReportFaultDWM>

externdef __imp_ReportFaultFromQueue:PPROC
ReportFaultFromQueue equ <__imp_ReportFaultFromQueue>

externdef __imp_ReportFaultToQueue:PPROC
ReportFaultToQueue equ <__imp_ReportFaultToQueue>

externdef __imp_ReportHang:PPROC
ReportHang equ <__imp_ReportHang>

externdef __imp_ReportKernelFaultDWW:PPROC
ReportKernelFaultDWW equ <__imp_ReportKernelFaultDWW>
  IFDEF __UNICODE__
    ReportKernelFaultDW equ <__imp_ReportKernelFaultDWW>
  ENDIF
