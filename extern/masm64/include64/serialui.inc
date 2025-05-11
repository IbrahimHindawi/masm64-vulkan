externdef __imp_drvCommConfigDialogA:PPROC
drvCommConfigDialogA equ <__imp_drvCommConfigDialogA>
  IFNDEF __UNICODE__
    drvCommConfigDialog equ <__imp_drvCommConfigDialogA>
  ENDIF

externdef __imp_drvCommConfigDialogW:PPROC
drvCommConfigDialogW equ <__imp_drvCommConfigDialogW>
  IFDEF __UNICODE__
    drvCommConfigDialog equ <__imp_drvCommConfigDialogW>
  ENDIF

externdef __imp_drvGetDefaultCommConfigA:PPROC
drvGetDefaultCommConfigA equ <__imp_drvGetDefaultCommConfigA>
  IFNDEF __UNICODE__
    drvGetDefaultCommConfig equ <__imp_drvGetDefaultCommConfigA>
  ENDIF

externdef __imp_drvGetDefaultCommConfigW:PPROC
drvGetDefaultCommConfigW equ <__imp_drvGetDefaultCommConfigW>
  IFDEF __UNICODE__
    drvGetDefaultCommConfig equ <__imp_drvGetDefaultCommConfigW>
  ENDIF

externdef __imp_drvSetDefaultCommConfigA:PPROC
drvSetDefaultCommConfigA equ <__imp_drvSetDefaultCommConfigA>
  IFNDEF __UNICODE__
    drvSetDefaultCommConfig equ <__imp_drvSetDefaultCommConfigA>
  ENDIF

externdef __imp_drvSetDefaultCommConfigW:PPROC
drvSetDefaultCommConfigW equ <__imp_drvSetDefaultCommConfigW>
  IFDEF __UNICODE__
    drvSetDefaultCommConfig equ <__imp_drvSetDefaultCommConfigW>
  ENDIF
