externdef __imp_IsDestinationReachableA:PPROC
IsDestinationReachableA equ <__imp_IsDestinationReachableA>
  IFNDEF __UNICODE__
    IsDestinationReachable equ <__imp_IsDestinationReachableA>
  ENDIF

externdef __imp_IsDestinationReachableW:PPROC
IsDestinationReachableW equ <__imp_IsDestinationReachableW>
  IFDEF __UNICODE__
    IsDestinationReachable equ <__imp_IsDestinationReachableW>
  ENDIF

externdef __imp_IsNetworkAlive:PPROC
IsNetworkAlive equ <__imp_IsNetworkAlive>
