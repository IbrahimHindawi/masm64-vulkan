externdef __imp_StreamingDeviceClassInstaller:PPROC
StreamingDeviceClassInstaller equ <__imp_StreamingDeviceClassInstaller>

externdef __imp_StreamingDeviceRemove:PPROC
StreamingDeviceRemove equ <__imp_StreamingDeviceRemove>

externdef __imp_StreamingDeviceRemoveA:PPROC
StreamingDeviceRemoveA equ <__imp_StreamingDeviceRemoveA>
  IFNDEF __UNICODE__
    StreamingDeviceRemove equ <__imp_StreamingDeviceRemoveA>
  ENDIF

externdef __imp_StreamingDeviceRemoveW:PPROC
StreamingDeviceRemoveW equ <__imp_StreamingDeviceRemoveW>
  IFDEF __UNICODE__
    StreamingDeviceRemove equ <__imp_StreamingDeviceRemoveW>
  ENDIF

externdef __imp_StreamingDeviceSetup:PPROC
StreamingDeviceSetup equ <__imp_StreamingDeviceSetup>

externdef __imp_StreamingDeviceSetupA:PPROC
StreamingDeviceSetupA equ <__imp_StreamingDeviceSetupA>
  IFNDEF __UNICODE__
    StreamingDeviceSetup equ <__imp_StreamingDeviceSetupA>
  ENDIF

externdef __imp_StreamingDeviceSetupW:PPROC
StreamingDeviceSetupW equ <__imp_StreamingDeviceSetupW>
  IFDEF __UNICODE__
    StreamingDeviceSetup equ <__imp_StreamingDeviceSetupW>
  ENDIF

externdef __imp_SwEnumCoInstaller:PPROC
SwEnumCoInstaller equ <__imp_SwEnumCoInstaller>
