externdef __imp_GetOpenCardNameA:PPROC
GetOpenCardNameA equ <__imp_GetOpenCardNameA>
  IFNDEF __UNICODE__
    GetOpenCardName equ <__imp_GetOpenCardNameA>
  ENDIF

externdef __imp_GetOpenCardNameW:PPROC
GetOpenCardNameW equ <__imp_GetOpenCardNameW>
  IFDEF __UNICODE__
    GetOpenCardName equ <__imp_GetOpenCardNameW>
  ENDIF

externdef __imp_SCardDlgExtendedError:PPROC
SCardDlgExtendedError equ <__imp_SCardDlgExtendedError>

externdef __imp_SCardUIDlgChangePINA:PPROC
SCardUIDlgChangePINA equ <__imp_SCardUIDlgChangePINA>
  IFNDEF __UNICODE__
    SCardUIDlgChangePIN equ <__imp_SCardUIDlgChangePINA>
  ENDIF

externdef __imp_SCardUIDlgGetPINA:PPROC
SCardUIDlgGetPINA equ <__imp_SCardUIDlgGetPINA>
  IFNDEF __UNICODE__
    SCardUIDlgGetPIN equ <__imp_SCardUIDlgGetPINA>
  ENDIF

externdef __imp_SCardUIDlgSelectCardA:PPROC
SCardUIDlgSelectCardA equ <__imp_SCardUIDlgSelectCardA>
  IFNDEF __UNICODE__
    SCardUIDlgSelectCard equ <__imp_SCardUIDlgSelectCardA>
  ENDIF

externdef __imp_SCardUIDlgSelectCardW:PPROC
SCardUIDlgSelectCardW equ <__imp_SCardUIDlgSelectCardW>
  IFDEF __UNICODE__
    SCardUIDlgSelectCard equ <__imp_SCardUIDlgSelectCardW>
  ENDIF
