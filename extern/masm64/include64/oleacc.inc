externdef __imp_AccessibleChildren:PPROC
AccessibleChildren equ <__imp_AccessibleChildren>

externdef __imp_AccessibleObjectFromEvent:PPROC
AccessibleObjectFromEvent equ <__imp_AccessibleObjectFromEvent>

externdef __imp_AccessibleObjectFromPoint:PPROC
AccessibleObjectFromPoint equ <__imp_AccessibleObjectFromPoint>

externdef __imp_AccessibleObjectFromWindow:PPROC
AccessibleObjectFromWindow equ <__imp_AccessibleObjectFromWindow>

externdef __imp_CreateStdAccessibleObject:PPROC
CreateStdAccessibleObject equ <__imp_CreateStdAccessibleObject>

externdef __imp_CreateStdAccessibleProxyA:PPROC
CreateStdAccessibleProxyA equ <__imp_CreateStdAccessibleProxyA>
  IFNDEF __UNICODE__
    CreateStdAccessibleProxy equ <__imp_CreateStdAccessibleProxyA>
  ENDIF

externdef __imp_CreateStdAccessibleProxyW:PPROC
CreateStdAccessibleProxyW equ <__imp_CreateStdAccessibleProxyW>
  IFDEF __UNICODE__
    CreateStdAccessibleProxy equ <__imp_CreateStdAccessibleProxyW>
  ENDIF

externdef __imp_DllCanUnloadNow:PPROC
DllCanUnloadNow equ <__imp_DllCanUnloadNow>

externdef __imp_DllGetClassObject:PPROC
DllGetClassObject equ <__imp_DllGetClassObject>

externdef __imp_DllRegisterServer:PPROC
DllRegisterServer equ <__imp_DllRegisterServer>

externdef __imp_DllUnregisterServer:PPROC
DllUnregisterServer equ <__imp_DllUnregisterServer>

externdef __imp_GetOleaccVersionInfo:PPROC
GetOleaccVersionInfo equ <__imp_GetOleaccVersionInfo>

externdef __imp_GetRoleTextA:PPROC
GetRoleTextA equ <__imp_GetRoleTextA>
  IFNDEF __UNICODE__
    GetRoleText equ <__imp_GetRoleTextA>
  ENDIF

externdef __imp_GetRoleTextW:PPROC
GetRoleTextW equ <__imp_GetRoleTextW>
  IFDEF __UNICODE__
    GetRoleText equ <__imp_GetRoleTextW>
  ENDIF

externdef __imp_GetStateTextA:PPROC
GetStateTextA equ <__imp_GetStateTextA>
  IFNDEF __UNICODE__
    GetStateText equ <__imp_GetStateTextA>
  ENDIF

externdef __imp_GetStateTextW:PPROC
GetStateTextW equ <__imp_GetStateTextW>
  IFDEF __UNICODE__
    GetStateText equ <__imp_GetStateTextW>
  ENDIF

externdef __imp_IID_IAccessible:PPROC
IID_IAccessible equ <__imp_IID_IAccessible>

externdef __imp_IID_IAccessibleHandler:PPROC
IID_IAccessibleHandler equ <__imp_IID_IAccessibleHandler>

externdef __imp_LIBID_Accessibility:PPROC
LIBID_Accessibility equ <__imp_LIBID_Accessibility>

externdef __imp_LresultFromObject:PPROC
LresultFromObject equ <__imp_LresultFromObject>

externdef __imp_ObjectFromLresult:PPROC
ObjectFromLresult equ <__imp_ObjectFromLresult>

externdef __imp_WindowFromAccessibleObject:PPROC
WindowFromAccessibleObject equ <__imp_WindowFromAccessibleObject>
