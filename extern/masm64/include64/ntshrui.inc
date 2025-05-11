externdef __imp_CanShareFolderW:PPROC
CanShareFolderW equ <__imp_CanShareFolderW>
  IFDEF __UNICODE__
    CanShareFolder equ <__imp_CanShareFolderW>
  ENDIF

externdef __imp_DllCanUnloadNow:PPROC
DllCanUnloadNow equ <__imp_DllCanUnloadNow>

externdef __imp_DllGetClassObject:PPROC
DllGetClassObject equ <__imp_DllGetClassObject>

externdef __imp_GetLocalPathFromNetResource:PPROC
GetLocalPathFromNetResource equ <__imp_GetLocalPathFromNetResource>

externdef __imp_GetLocalPathFromNetResourceA:PPROC
GetLocalPathFromNetResourceA equ <__imp_GetLocalPathFromNetResourceA>
  IFNDEF __UNICODE__
    GetLocalPathFromNetResource equ <__imp_GetLocalPathFromNetResourceA>
  ENDIF

externdef __imp_GetLocalPathFromNetResourceW:PPROC
GetLocalPathFromNetResourceW equ <__imp_GetLocalPathFromNetResourceW>
  IFDEF __UNICODE__
    GetLocalPathFromNetResource equ <__imp_GetLocalPathFromNetResourceW>
  ENDIF

externdef __imp_GetNetResourceFromLocalPath:PPROC
GetNetResourceFromLocalPath equ <__imp_GetNetResourceFromLocalPath>

externdef __imp_GetNetResourceFromLocalPathA:PPROC
GetNetResourceFromLocalPathA equ <__imp_GetNetResourceFromLocalPathA>
  IFNDEF __UNICODE__
    GetNetResourceFromLocalPath equ <__imp_GetNetResourceFromLocalPathA>
  ENDIF

externdef __imp_GetNetResourceFromLocalPathW:PPROC
GetNetResourceFromLocalPathW equ <__imp_GetNetResourceFromLocalPathW>
  IFDEF __UNICODE__
    GetNetResourceFromLocalPath equ <__imp_GetNetResourceFromLocalPathW>
  ENDIF

externdef __imp_IsFolderPrivateForUser:PPROC
IsFolderPrivateForUser equ <__imp_IsFolderPrivateForUser>

externdef __imp_IsPathShared:PPROC
IsPathShared equ <__imp_IsPathShared>

externdef __imp_IsPathSharedA:PPROC
IsPathSharedA equ <__imp_IsPathSharedA>
  IFNDEF __UNICODE__
    IsPathShared equ <__imp_IsPathSharedA>
  ENDIF

externdef __imp_IsPathSharedW:PPROC
IsPathSharedW equ <__imp_IsPathSharedW>
  IFDEF __UNICODE__
    IsPathShared equ <__imp_IsPathSharedW>
  ENDIF

externdef __imp_SetFolderPermissionsForSharing:PPROC
SetFolderPermissionsForSharing equ <__imp_SetFolderPermissionsForSharing>

externdef __imp_SharingDialog:PPROC
SharingDialog equ <__imp_SharingDialog>

externdef __imp_SharingDialogA:PPROC
SharingDialogA equ <__imp_SharingDialogA>
  IFNDEF __UNICODE__
    SharingDialog equ <__imp_SharingDialogA>
  ENDIF

externdef __imp_SharingDialogW:PPROC
SharingDialogW equ <__imp_SharingDialogW>
  IFDEF __UNICODE__
    SharingDialog equ <__imp_SharingDialogW>
  ENDIF

externdef __imp_ShowShareFolderUIW:PPROC
ShowShareFolderUIW equ <__imp_ShowShareFolderUIW>
  IFDEF __UNICODE__
    ShowShareFolderUI equ <__imp_ShowShareFolderUIW>
  ENDIF
