externdef __imp_Msv1_0SubAuthenticationRoutineEx:PPROC
Msv1_0SubAuthenticationRoutineEx equ <__imp_Msv1_0SubAuthenticationRoutineEx>

externdef __imp_RegisterIISSUBA:PPROC
RegisterIISSUBA equ <__imp_RegisterIISSUBA>
  IFNDEF __UNICODE__
    RegisterIISSUB equ <__imp_RegisterIISSUBA>
  ENDIF

externdef __imp_UnregisterIISSUBA:PPROC
UnregisterIISSUBA equ <__imp_UnregisterIISSUBA>
  IFNDEF __UNICODE__
    UnregisterIISSUB equ <__imp_UnregisterIISSUBA>
  ENDIF
