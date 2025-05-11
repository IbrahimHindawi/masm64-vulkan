externdef __imp_AddUserToObjectW:PPROC
AddUserToObjectW equ <__imp_AddUserToObjectW>
  IFDEF __UNICODE__
    AddUserToObject equ <__imp_AddUserToObjectW>
  ENDIF

externdef __imp_BackCurrentEfsCert:PPROC
BackCurrentEfsCert equ <__imp_BackCurrentEfsCert>

externdef __imp_EfsDetail:PPROC
EfsDetail equ <__imp_EfsDetail>
