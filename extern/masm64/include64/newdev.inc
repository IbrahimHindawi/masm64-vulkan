externdef __imp_ClientSideInstallW:PPROC
ClientSideInstallW equ <__imp_ClientSideInstallW>
  IFDEF __UNICODE__
    ClientSideInstall equ <__imp_ClientSideInstallW>
  ENDIF

externdef __imp_DevInstallW:PPROC
DevInstallW equ <__imp_DevInstallW>
  IFDEF __UNICODE__
    DevInstall equ <__imp_DevInstallW>
  ENDIF

externdef __imp_InstallDevInst:PPROC
InstallDevInst equ <__imp_InstallDevInst>

externdef __imp_InstallDevInstEx:PPROC
InstallDevInstEx equ <__imp_InstallDevInstEx>

externdef __imp_InstallNewDevice:PPROC
InstallNewDevice equ <__imp_InstallNewDevice>

externdef __imp_InstallSelectedDevice:PPROC
InstallSelectedDevice equ <__imp_InstallSelectedDevice>

externdef __imp_InstallSelectedDriver:PPROC
InstallSelectedDriver equ <__imp_InstallSelectedDriver>

externdef __imp_InstallWindowsUpdateDriver:PPROC
InstallWindowsUpdateDriver equ <__imp_InstallWindowsUpdateDriver>

externdef __imp_RollbackDriver:PPROC
RollbackDriver equ <__imp_RollbackDriver>

externdef __imp_UpdateDriverForPlugAndPlayDevicesA:PPROC
UpdateDriverForPlugAndPlayDevicesA equ <__imp_UpdateDriverForPlugAndPlayDevicesA>
  IFNDEF __UNICODE__
    UpdateDriverForPlugAndPlayDevices equ <__imp_UpdateDriverForPlugAndPlayDevicesA>
  ENDIF

externdef __imp_UpdateDriverForPlugAndPlayDevicesW:PPROC
UpdateDriverForPlugAndPlayDevicesW equ <__imp_UpdateDriverForPlugAndPlayDevicesW>
  IFDEF __UNICODE__
    UpdateDriverForPlugAndPlayDevices equ <__imp_UpdateDriverForPlugAndPlayDevicesW>
  ENDIF

externdef __imp_WindowsUpdateDriverSearchingPolicyUi:PPROC
WindowsUpdateDriverSearchingPolicyUi equ <__imp_WindowsUpdateDriverSearchingPolicyUi>
