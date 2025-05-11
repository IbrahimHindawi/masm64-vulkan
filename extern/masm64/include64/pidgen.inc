externdef __imp_PIDGenA:PPROC
PIDGenA equ <__imp_PIDGenA>
  IFNDEF __UNICODE__
    PIDGen equ <__imp_PIDGenA>
  ENDIF

externdef __imp_PIDGenEx2A:PPROC
PIDGenEx2A equ <__imp_PIDGenEx2A>
  IFNDEF __UNICODE__
    PIDGenEx2 equ <__imp_PIDGenEx2A>
  ENDIF

externdef __imp_PIDGenEx2W:PPROC
PIDGenEx2W equ <__imp_PIDGenEx2W>
  IFDEF __UNICODE__
    PIDGenEx2 equ <__imp_PIDGenEx2W>
  ENDIF

externdef __imp_PIDGenExA:PPROC
PIDGenExA equ <__imp_PIDGenExA>
  IFNDEF __UNICODE__
    PIDGenEx equ <__imp_PIDGenExA>
  ENDIF

externdef __imp_PIDGenExW:PPROC
PIDGenExW equ <__imp_PIDGenExW>
  IFDEF __UNICODE__
    PIDGenEx equ <__imp_PIDGenExW>
  ENDIF

externdef __imp_PIDGenSimpA:PPROC
PIDGenSimpA equ <__imp_PIDGenSimpA>
  IFNDEF __UNICODE__
    PIDGenSimp equ <__imp_PIDGenSimpA>
  ENDIF

externdef __imp_PIDGenSimpW:PPROC
PIDGenSimpW equ <__imp_PIDGenSimpW>
  IFDEF __UNICODE__
    PIDGenSimp equ <__imp_PIDGenSimpW>
  ENDIF

externdef __imp_PIDGenW:PPROC
PIDGenW equ <__imp_PIDGenW>
  IFDEF __UNICODE__
    PIDGen equ <__imp_PIDGenW>
  ENDIF

externdef __imp_SetupPIDGenA:PPROC
SetupPIDGenA equ <__imp_SetupPIDGenA>
  IFNDEF __UNICODE__
    SetupPIDGen equ <__imp_SetupPIDGenA>
  ENDIF

externdef __imp_SetupPIDGenExA:PPROC
SetupPIDGenExA equ <__imp_SetupPIDGenExA>
  IFNDEF __UNICODE__
    SetupPIDGenEx equ <__imp_SetupPIDGenExA>
  ENDIF

externdef __imp_SetupPIDGenExW:PPROC
SetupPIDGenExW equ <__imp_SetupPIDGenExW>
  IFDEF __UNICODE__
    SetupPIDGenEx equ <__imp_SetupPIDGenExW>
  ENDIF

externdef __imp_SetupPIDGenW:PPROC
SetupPIDGenW equ <__imp_SetupPIDGenW>
  IFDEF __UNICODE__
    SetupPIDGen equ <__imp_SetupPIDGenW>
  ENDIF
