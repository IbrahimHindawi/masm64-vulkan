externdef __imp_CleanOnlineAppCache:PPROC
CleanOnlineAppCache equ <__imp_CleanOnlineAppCache>

externdef __imp_CreateActContext:PPROC
CreateActContext equ <__imp_CreateActContext>

externdef __imp_CreateCMSFromXml:PPROC
CreateCMSFromXml equ <__imp_CreateCMSFromXml>

externdef __imp_DllCanUnloadNow:PPROC
DllCanUnloadNow equ <__imp_DllCanUnloadNow>

externdef __imp_DllGetClassObject:PPROC
DllGetClassObject equ <__imp_DllGetClassObject>

externdef __imp_GetCurrentActContext:PPROC
GetCurrentActContext equ <__imp_GetCurrentActContext>

externdef __imp_GetDeploymentDataFromManifest:PPROC
GetDeploymentDataFromManifest equ <__imp_GetDeploymentDataFromManifest>

externdef __imp_GetUserStateManager:PPROC
GetUserStateManager equ <__imp_GetUserStateManager>

externdef __imp_GetUserStore:PPROC
GetUserStore equ <__imp_GetUserStore>

externdef __imp_KillService:PPROC
KillService equ <__imp_KillService>

externdef __imp_ParseManifest:PPROC
ParseManifest equ <__imp_ParseManifest>

externdef __imp_ShArpMaintain:PPROC
ShArpMaintain equ <__imp_ShArpMaintain>

externdef __imp_ShArpMaintainW:PPROC
ShArpMaintainW equ <__imp_ShArpMaintainW>
  IFDEF __UNICODE__
    ShArpMaintain equ <__imp_ShArpMaintainW>
  ENDIF

externdef __imp_ShOpenVerbApplication:PPROC
ShOpenVerbApplication equ <__imp_ShOpenVerbApplication>

externdef __imp_ShOpenVerbApplicationW:PPROC
ShOpenVerbApplicationW equ <__imp_ShOpenVerbApplicationW>
  IFDEF __UNICODE__
    ShOpenVerbApplication equ <__imp_ShOpenVerbApplicationW>
  ENDIF

externdef __imp_ShOpenVerbShortcut:PPROC
ShOpenVerbShortcut equ <__imp_ShOpenVerbShortcut>

externdef __imp_ShOpenVerbShortcutW:PPROC
ShOpenVerbShortcutW equ <__imp_ShOpenVerbShortcutW>
  IFDEF __UNICODE__
    ShOpenVerbShortcut equ <__imp_ShOpenVerbShortcutW>
  ENDIF
