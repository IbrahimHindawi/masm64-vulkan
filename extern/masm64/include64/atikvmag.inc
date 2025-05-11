externdef __imp_GsDrvEnableDriver:PPROC
GsDrvEnableDriver equ <__imp_GsDrvEnableDriver>

externdef __imp_VCAMInitEntryPoints:PPROC
VCAMInitEntryPoints equ <__imp_VCAMInitEntryPoints>

externdef __imp_bDestroyVCAM:PPROC
bDestroyVCAM equ <__imp_bDestroyVCAM>

externdef __imp_bDisableVCAMByHDevice:PPROC
bDisableVCAMByHDevice equ <__imp_bDisableVCAMByHDevice>

externdef __imp_bVCAMInitialize:PPROC
bVCAMInitialize equ <__imp_bVCAMInitialize>

externdef __imp_bVCAMSetDriverCallsEx:PPROC
bVCAMSetDriverCallsEx equ <__imp_bVCAMSetDriverCallsEx>

externdef __imp_ulVCAMEscape:PPROC
ulVCAMEscape equ <__imp_ulVCAMEscape>

externdef __imp_ulVCAMGetHeaderVersion:PPROC
ulVCAMGetHeaderVersion equ <__imp_ulVCAMGetHeaderVersion>

externdef __imp_vNotifyVCAMCALLink:PPROC
vNotifyVCAMCALLink equ <__imp_vNotifyVCAMCALLink>

externdef __imp_vNotifyVCAMCALLink_WA:PPROC
vNotifyVCAMCALLink_WA equ <__imp_vNotifyVCAMCALLink_WA>
  IFNDEF __UNICODE__
    vNotifyVCAMCALLink_W equ <__imp_vNotifyVCAMCALLink_WA>
  ENDIF
