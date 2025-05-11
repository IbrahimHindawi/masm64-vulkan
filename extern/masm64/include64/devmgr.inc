externdef __imp_DeviceAdvancedPropertiesA:PPROC
DeviceAdvancedPropertiesA equ <__imp_DeviceAdvancedPropertiesA>
  IFNDEF __UNICODE__
    DeviceAdvancedProperties equ <__imp_DeviceAdvancedPropertiesA>
  ENDIF

externdef __imp_DeviceAdvancedPropertiesW:PPROC
DeviceAdvancedPropertiesW equ <__imp_DeviceAdvancedPropertiesW>
  IFDEF __UNICODE__
    DeviceAdvancedProperties equ <__imp_DeviceAdvancedPropertiesW>
  ENDIF

externdef __imp_DeviceCreateHardwarePage:PPROC
DeviceCreateHardwarePage equ <__imp_DeviceCreateHardwarePage>

externdef __imp_DeviceCreateHardwarePageEx:PPROC
DeviceCreateHardwarePageEx equ <__imp_DeviceCreateHardwarePageEx>

externdef __imp_DeviceManager_ExecuteA:PPROC
DeviceManager_ExecuteA equ <__imp_DeviceManager_ExecuteA>
  IFNDEF __UNICODE__
    DeviceManager_Execute equ <__imp_DeviceManager_ExecuteA>
  ENDIF

externdef __imp_DeviceManager_ExecuteW:PPROC
DeviceManager_ExecuteW equ <__imp_DeviceManager_ExecuteW>
  IFDEF __UNICODE__
    DeviceManager_Execute equ <__imp_DeviceManager_ExecuteW>
  ENDIF

externdef __imp_DeviceProblemTextA:PPROC
DeviceProblemTextA equ <__imp_DeviceProblemTextA>
  IFNDEF __UNICODE__
    DeviceProblemText equ <__imp_DeviceProblemTextA>
  ENDIF

externdef __imp_DeviceProblemTextW:PPROC
DeviceProblemTextW equ <__imp_DeviceProblemTextW>
  IFDEF __UNICODE__
    DeviceProblemText equ <__imp_DeviceProblemTextW>
  ENDIF

externdef __imp_DeviceProblemWizardA:PPROC
DeviceProblemWizardA equ <__imp_DeviceProblemWizardA>
  IFNDEF __UNICODE__
    DeviceProblemWizard equ <__imp_DeviceProblemWizardA>
  ENDIF

externdef __imp_DeviceProblemWizardW:PPROC
DeviceProblemWizardW equ <__imp_DeviceProblemWizardW>
  IFDEF __UNICODE__
    DeviceProblemWizard equ <__imp_DeviceProblemWizardW>
  ENDIF

externdef __imp_DeviceProblenWizard_RunDLLA:PPROC
DeviceProblenWizard_RunDLLA equ <__imp_DeviceProblenWizard_RunDLLA>
  IFNDEF __UNICODE__
    DeviceProblenWizard_RunDLL equ <__imp_DeviceProblenWizard_RunDLLA>
  ENDIF

externdef __imp_DeviceProblenWizard_RunDLLW:PPROC
DeviceProblenWizard_RunDLLW equ <__imp_DeviceProblenWizard_RunDLLW>
  IFDEF __UNICODE__
    DeviceProblenWizard_RunDLL equ <__imp_DeviceProblenWizard_RunDLLW>
  ENDIF

externdef __imp_DevicePropertiesA:PPROC
DevicePropertiesA equ <__imp_DevicePropertiesA>
  IFNDEF __UNICODE__
    DeviceProperties equ <__imp_DevicePropertiesA>
  ENDIF

externdef __imp_DevicePropertiesExA:PPROC
DevicePropertiesExA equ <__imp_DevicePropertiesExA>
  IFNDEF __UNICODE__
    DevicePropertiesEx equ <__imp_DevicePropertiesExA>
  ENDIF

externdef __imp_DevicePropertiesExW:PPROC
DevicePropertiesExW equ <__imp_DevicePropertiesExW>
  IFDEF __UNICODE__
    DevicePropertiesEx equ <__imp_DevicePropertiesExW>
  ENDIF

externdef __imp_DevicePropertiesW:PPROC
DevicePropertiesW equ <__imp_DevicePropertiesW>
  IFDEF __UNICODE__
    DeviceProperties equ <__imp_DevicePropertiesW>
  ENDIF

externdef __imp_DeviceProperties_RunDLLA:PPROC
DeviceProperties_RunDLLA equ <__imp_DeviceProperties_RunDLLA>
  IFNDEF __UNICODE__
    DeviceProperties_RunDLL equ <__imp_DeviceProperties_RunDLLA>
  ENDIF

externdef __imp_DeviceProperties_RunDLLW:PPROC
DeviceProperties_RunDLLW equ <__imp_DeviceProperties_RunDLLW>
  IFDEF __UNICODE__
    DeviceProperties_RunDLL equ <__imp_DeviceProperties_RunDLLW>
  ENDIF

externdef __imp_DllCanUnloadNow:PPROC
DllCanUnloadNow equ <__imp_DllCanUnloadNow>

externdef __imp_DllGetClassObject:PPROC
DllGetClassObject equ <__imp_DllGetClassObject>

externdef __imp_DllRegisterServer:PPROC
DllRegisterServer equ <__imp_DllRegisterServer>

externdef __imp_DllUnregisterServer:PPROC
DllUnregisterServer equ <__imp_DllUnregisterServer>
