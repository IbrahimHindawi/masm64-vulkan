externdef __imp_TcAddFilter:PPROC
TcAddFilter equ <__imp_TcAddFilter>

externdef __imp_TcAddFlow:PPROC
TcAddFlow equ <__imp_TcAddFlow>

externdef __imp_TcCloseInterface:PPROC
TcCloseInterface equ <__imp_TcCloseInterface>

externdef __imp_TcDeleteFilter:PPROC
TcDeleteFilter equ <__imp_TcDeleteFilter>

externdef __imp_TcDeleteFlow:PPROC
TcDeleteFlow equ <__imp_TcDeleteFlow>

externdef __imp_TcDeregisterClient:PPROC
TcDeregisterClient equ <__imp_TcDeregisterClient>

externdef __imp_TcEnumerateFlows:PPROC
TcEnumerateFlows equ <__imp_TcEnumerateFlows>

externdef __imp_TcEnumerateInterfaces:PPROC
TcEnumerateInterfaces equ <__imp_TcEnumerateInterfaces>

externdef __imp_TcGetFlowNameA:PPROC
TcGetFlowNameA equ <__imp_TcGetFlowNameA>
  IFNDEF __UNICODE__
    TcGetFlowName equ <__imp_TcGetFlowNameA>
  ENDIF

externdef __imp_TcGetFlowNameW:PPROC
TcGetFlowNameW equ <__imp_TcGetFlowNameW>
  IFDEF __UNICODE__
    TcGetFlowName equ <__imp_TcGetFlowNameW>
  ENDIF

externdef __imp_TcModifyFlow:PPROC
TcModifyFlow equ <__imp_TcModifyFlow>

externdef __imp_TcOpenInterfaceA:PPROC
TcOpenInterfaceA equ <__imp_TcOpenInterfaceA>
  IFNDEF __UNICODE__
    TcOpenInterface equ <__imp_TcOpenInterfaceA>
  ENDIF

externdef __imp_TcOpenInterfaceW:PPROC
TcOpenInterfaceW equ <__imp_TcOpenInterfaceW>
  IFDEF __UNICODE__
    TcOpenInterface equ <__imp_TcOpenInterfaceW>
  ENDIF

externdef __imp_TcQueryFlowA:PPROC
TcQueryFlowA equ <__imp_TcQueryFlowA>
  IFNDEF __UNICODE__
    TcQueryFlow equ <__imp_TcQueryFlowA>
  ENDIF

externdef __imp_TcQueryFlowW:PPROC
TcQueryFlowW equ <__imp_TcQueryFlowW>
  IFDEF __UNICODE__
    TcQueryFlow equ <__imp_TcQueryFlowW>
  ENDIF

externdef __imp_TcQueryInterface:PPROC
TcQueryInterface equ <__imp_TcQueryInterface>

externdef __imp_TcRegisterClient:PPROC
TcRegisterClient equ <__imp_TcRegisterClient>

externdef __imp_TcSetFlowA:PPROC
TcSetFlowA equ <__imp_TcSetFlowA>
  IFNDEF __UNICODE__
    TcSetFlow equ <__imp_TcSetFlowA>
  ENDIF

externdef __imp_TcSetFlowW:PPROC
TcSetFlowW equ <__imp_TcSetFlowW>
  IFDEF __UNICODE__
    TcSetFlow equ <__imp_TcSetFlowW>
  ENDIF

externdef __imp_TcSetInterface:PPROC
TcSetInterface equ <__imp_TcSetInterface>
