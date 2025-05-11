externdef __imp_AddDeviceWasChosen:PPROC
AddDeviceWasChosen equ <__imp_AddDeviceWasChosen>

externdef __imp_AddDeviceWasChosenA:PPROC
AddDeviceWasChosenA equ <__imp_AddDeviceWasChosenA>
  IFNDEF __UNICODE__
    AddDeviceWasChosen equ <__imp_AddDeviceWasChosenA>
  ENDIF

externdef __imp_AddDeviceWasChosenW:PPROC
AddDeviceWasChosenW equ <__imp_AddDeviceWasChosenW>
  IFDEF __UNICODE__
    AddDeviceWasChosen equ <__imp_AddDeviceWasChosenW>
  ENDIF

externdef __imp_DllCanUnloadNow:PPROC
DllCanUnloadNow equ <__imp_DllCanUnloadNow>

externdef __imp_DllGetClassObject:PPROC
DllGetClassObject equ <__imp_DllGetClassObject>

externdef __imp_DllRegisterServer:PPROC
DllRegisterServer equ <__imp_DllRegisterServer>

externdef __imp_DllUnregisterServer:PPROC
DllUnregisterServer equ <__imp_DllUnregisterServer>

externdef __imp_DoDeleteAllItems:PPROC
DoDeleteAllItems equ <__imp_DoDeleteAllItems>

externdef __imp_MakeFullPidlForDevice:PPROC
MakeFullPidlForDevice equ <__imp_MakeFullPidlForDevice>
