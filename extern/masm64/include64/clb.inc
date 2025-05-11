externdef __imp_ClbAddData:PPROC
ClbAddData equ <__imp_ClbAddData>

externdef __imp_ClbSetColumnWidths:PPROC
ClbSetColumnWidths equ <__imp_ClbSetColumnWidths>

externdef __imp_ClbStyleW:PPROC
ClbStyleW equ <__imp_ClbStyleW>
  IFDEF __UNICODE__
    ClbStyle equ <__imp_ClbStyleW>
  ENDIF

externdef __imp_ClbWndProc:PPROC
ClbWndProc equ <__imp_ClbWndProc>

externdef __imp_CustomControlInfoW:PPROC
CustomControlInfoW equ <__imp_CustomControlInfoW>
  IFDEF __UNICODE__
    CustomControlInfo equ <__imp_CustomControlInfoW>
  ENDIF
