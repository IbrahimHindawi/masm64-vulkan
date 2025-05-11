externdef __imp_Activate_RunDLL:PPROC
Activate_RunDLL equ <__imp_Activate_RunDLL>

externdef __imp_AppCompat_RunDLLW:PPROC
AppCompat_RunDLLW equ <__imp_AppCompat_RunDLLW>
  IFDEF __UNICODE__
    AppCompat_RunDLL equ <__imp_AppCompat_RunDLLW>
  ENDIF

externdef __imp_CDefFolderMenu_Create2:PPROC
CDefFolderMenu_Create2 equ <__imp_CDefFolderMenu_Create2>

externdef __imp_CDefFolderMenu_Create:PPROC
CDefFolderMenu_Create equ <__imp_CDefFolderMenu_Create>

externdef __imp_CallCPLEntry16:PPROC
CallCPLEntry16 equ <__imp_CallCPLEntry16>

externdef __imp_CheckEscapesA:PPROC
CheckEscapesA equ <__imp_CheckEscapesA>
  IFNDEF __UNICODE__
    CheckEscapes equ <__imp_CheckEscapesA>
  ENDIF

externdef __imp_CheckEscapesW:PPROC
CheckEscapesW equ <__imp_CheckEscapesW>
  IFDEF __UNICODE__
    CheckEscapes equ <__imp_CheckEscapesW>
  ENDIF

externdef __imp_CommandLineToArgvW:PPROC
CommandLineToArgvW equ <__imp_CommandLineToArgvW>
  IFDEF __UNICODE__
    CommandLineToArgv equ <__imp_CommandLineToArgvW>
  ENDIF

externdef __imp_Control_FillCache_RunDLL:PPROC
Control_FillCache_RunDLL equ <__imp_Control_FillCache_RunDLL>

externdef __imp_Control_FillCache_RunDLLA:PPROC
Control_FillCache_RunDLLA equ <__imp_Control_FillCache_RunDLLA>
  IFNDEF __UNICODE__
    Control_FillCache_RunDLL equ <__imp_Control_FillCache_RunDLLA>
  ENDIF

externdef __imp_Control_FillCache_RunDLLW:PPROC
Control_FillCache_RunDLLW equ <__imp_Control_FillCache_RunDLLW>
  IFDEF __UNICODE__
    Control_FillCache_RunDLL equ <__imp_Control_FillCache_RunDLLW>
  ENDIF

externdef __imp_Control_RunDLL:PPROC
Control_RunDLL equ <__imp_Control_RunDLL>

externdef __imp_Control_RunDLLA:PPROC
Control_RunDLLA equ <__imp_Control_RunDLLA>
  IFNDEF __UNICODE__
    Control_RunDLL equ <__imp_Control_RunDLLA>
  ENDIF

externdef __imp_Control_RunDLLAsUserW:PPROC
Control_RunDLLAsUserW equ <__imp_Control_RunDLLAsUserW>
  IFDEF __UNICODE__
    Control_RunDLLAsUser equ <__imp_Control_RunDLLAsUserW>
  ENDIF

externdef __imp_Control_RunDLLW:PPROC
Control_RunDLLW equ <__imp_Control_RunDLLW>
  IFDEF __UNICODE__
    Control_RunDLL equ <__imp_Control_RunDLLW>
  ENDIF

externdef __imp_DAD_AutoScroll:PPROC
DAD_AutoScroll equ <__imp_DAD_AutoScroll>

externdef __imp_DAD_DragEnterEx2:PPROC
DAD_DragEnterEx2 equ <__imp_DAD_DragEnterEx2>

externdef __imp_DAD_DragEnterEx:PPROC
DAD_DragEnterEx equ <__imp_DAD_DragEnterEx>

externdef __imp_DAD_DragLeave:PPROC
DAD_DragLeave equ <__imp_DAD_DragLeave>

externdef __imp_DAD_DragMove:PPROC
DAD_DragMove equ <__imp_DAD_DragMove>

externdef __imp_DAD_SetDragImage:PPROC
DAD_SetDragImage equ <__imp_DAD_SetDragImage>

externdef __imp_DAD_ShowDragImage:PPROC
DAD_ShowDragImage equ <__imp_DAD_ShowDragImage>

externdef __imp_DllCanUnloadNow:PPROC
DllCanUnloadNow equ <__imp_DllCanUnloadNow>

externdef __imp_DllGetClassObject:PPROC
DllGetClassObject equ <__imp_DllGetClassObject>

externdef __imp_DllGetVersion:PPROC
DllGetVersion equ <__imp_DllGetVersion>

externdef __imp_DllInstall:PPROC
DllInstall equ <__imp_DllInstall>

externdef __imp_DllRegisterServer:PPROC
DllRegisterServer equ <__imp_DllRegisterServer>

externdef __imp_DllUnregisterServer:PPROC
DllUnregisterServer equ <__imp_DllUnregisterServer>

externdef __imp_DoEnvironmentSubstA:PPROC
DoEnvironmentSubstA equ <__imp_DoEnvironmentSubstA>
  IFNDEF __UNICODE__
    DoEnvironmentSubst equ <__imp_DoEnvironmentSubstA>
  ENDIF

externdef __imp_DoEnvironmentSubstW:PPROC
DoEnvironmentSubstW equ <__imp_DoEnvironmentSubstW>
  IFDEF __UNICODE__
    DoEnvironmentSubst equ <__imp_DoEnvironmentSubstW>
  ENDIF

externdef __imp_DragAcceptFiles:PPROC
DragAcceptFiles equ <__imp_DragAcceptFiles>

externdef __imp_DragFinish:PPROC
DragFinish equ <__imp_DragFinish>

externdef __imp_DragQueryFile:PPROC
DragQueryFile equ <__imp_DragQueryFile>

externdef __imp_DragQueryFileA:PPROC
DragQueryFileA equ <__imp_DragQueryFileA>
  IFNDEF __UNICODE__
    DragQueryFile equ <__imp_DragQueryFileA>
  ENDIF

externdef __imp_DragQueryFileAorW:PPROC
DragQueryFileAorW equ <__imp_DragQueryFileAorW>
  IFDEF __UNICODE__
    DragQueryFileAor equ <__imp_DragQueryFileAorW>
  ENDIF

externdef __imp_DragQueryFileW:PPROC
DragQueryFileW equ <__imp_DragQueryFileW>
  IFDEF __UNICODE__
    DragQueryFile equ <__imp_DragQueryFileW>
  ENDIF

externdef __imp_DragQueryPoint:PPROC
DragQueryPoint equ <__imp_DragQueryPoint>

externdef __imp_DriveType:PPROC
DriveType equ <__imp_DriveType>

externdef __imp_DuplicateIcon:PPROC
DuplicateIcon equ <__imp_DuplicateIcon>

externdef __imp_ExtractAssociatedIconA:PPROC
ExtractAssociatedIconA equ <__imp_ExtractAssociatedIconA>
  IFNDEF __UNICODE__
    ExtractAssociatedIcon equ <__imp_ExtractAssociatedIconA>
  ENDIF

externdef __imp_ExtractAssociatedIconExA:PPROC
ExtractAssociatedIconExA equ <__imp_ExtractAssociatedIconExA>
  IFNDEF __UNICODE__
    ExtractAssociatedIconEx equ <__imp_ExtractAssociatedIconExA>
  ENDIF

externdef __imp_ExtractAssociatedIconExW:PPROC
ExtractAssociatedIconExW equ <__imp_ExtractAssociatedIconExW>
  IFDEF __UNICODE__
    ExtractAssociatedIconEx equ <__imp_ExtractAssociatedIconExW>
  ENDIF

externdef __imp_ExtractAssociatedIconW:PPROC
ExtractAssociatedIconW equ <__imp_ExtractAssociatedIconW>
  IFDEF __UNICODE__
    ExtractAssociatedIcon equ <__imp_ExtractAssociatedIconW>
  ENDIF

externdef __imp_ExtractIconA:PPROC
ExtractIconA equ <__imp_ExtractIconA>
  IFNDEF __UNICODE__
    ExtractIcon equ <__imp_ExtractIconA>
  ENDIF

externdef __imp_ExtractIconEx:PPROC
ExtractIconEx equ <__imp_ExtractIconEx>

externdef __imp_ExtractIconExA:PPROC
ExtractIconExA equ <__imp_ExtractIconExA>
  IFNDEF __UNICODE__
    ExtractIconEx equ <__imp_ExtractIconExA>
  ENDIF

externdef __imp_ExtractIconExW:PPROC
ExtractIconExW equ <__imp_ExtractIconExW>
  IFDEF __UNICODE__
    ExtractIconEx equ <__imp_ExtractIconExW>
  ENDIF

externdef __imp_ExtractIconResInfoA:PPROC
ExtractIconResInfoA equ <__imp_ExtractIconResInfoA>
  IFNDEF __UNICODE__
    ExtractIconResInfo equ <__imp_ExtractIconResInfoA>
  ENDIF

externdef __imp_ExtractIconResInfoW:PPROC
ExtractIconResInfoW equ <__imp_ExtractIconResInfoW>
  IFDEF __UNICODE__
    ExtractIconResInfo equ <__imp_ExtractIconResInfoW>
  ENDIF

externdef __imp_ExtractIconW:PPROC
ExtractIconW equ <__imp_ExtractIconW>
  IFDEF __UNICODE__
    ExtractIcon equ <__imp_ExtractIconW>
  ENDIF

externdef __imp_ExtractVersionResource16W:PPROC
ExtractVersionResource16W equ <__imp_ExtractVersionResource16W>
  IFDEF __UNICODE__
    ExtractVersionResource16 equ <__imp_ExtractVersionResource16W>
  ENDIF

externdef __imp_FindExeDlgProc:PPROC
FindExeDlgProc equ <__imp_FindExeDlgProc>

externdef __imp_FindExecutableA:PPROC
FindExecutableA equ <__imp_FindExecutableA>
  IFNDEF __UNICODE__
    FindExecutable equ <__imp_FindExecutableA>
  ENDIF

externdef __imp_FindExecutableW:PPROC
FindExecutableW equ <__imp_FindExecutableW>
  IFDEF __UNICODE__
    FindExecutable equ <__imp_FindExecutableW>
  ENDIF

externdef __imp_FreeIconList:PPROC
FreeIconList equ <__imp_FreeIconList>

externdef __imp_GetFileNameFromBrowse:PPROC
GetFileNameFromBrowse equ <__imp_GetFileNameFromBrowse>

externdef __imp_ILAppendID:PPROC
ILAppendID equ <__imp_ILAppendID>

externdef __imp_ILClone:PPROC
ILClone equ <__imp_ILClone>

externdef __imp_ILCloneFirst:PPROC
ILCloneFirst equ <__imp_ILCloneFirst>

externdef __imp_ILCombine:PPROC
ILCombine equ <__imp_ILCombine>

externdef __imp_ILCreateFromPath:PPROC
ILCreateFromPath equ <__imp_ILCreateFromPath>

externdef __imp_ILCreateFromPathA:PPROC
ILCreateFromPathA equ <__imp_ILCreateFromPathA>
  IFNDEF __UNICODE__
    ILCreateFromPath equ <__imp_ILCreateFromPathA>
  ENDIF

externdef __imp_ILCreateFromPathW:PPROC
ILCreateFromPathW equ <__imp_ILCreateFromPathW>
  IFDEF __UNICODE__
    ILCreateFromPath equ <__imp_ILCreateFromPathW>
  ENDIF

externdef __imp_ILFindChild:PPROC
ILFindChild equ <__imp_ILFindChild>

externdef __imp_ILFindLastID:PPROC
ILFindLastID equ <__imp_ILFindLastID>

externdef __imp_ILFree:PPROC
ILFree equ <__imp_ILFree>

externdef __imp_ILGetNext:PPROC
ILGetNext equ <__imp_ILGetNext>

externdef __imp_ILGetSize:PPROC
ILGetSize equ <__imp_ILGetSize>

externdef __imp_ILIsEqual:PPROC
ILIsEqual equ <__imp_ILIsEqual>

externdef __imp_ILIsParent:PPROC
ILIsParent equ <__imp_ILIsParent>

externdef __imp_ILLoadFromStream:PPROC
ILLoadFromStream equ <__imp_ILLoadFromStream>

externdef __imp_ILRemoveLastID:PPROC
ILRemoveLastID equ <__imp_ILRemoveLastID>

externdef __imp_ILSaveToStream:PPROC
ILSaveToStream equ <__imp_ILSaveToStream>

externdef __imp_InternalExtractIconListA:PPROC
InternalExtractIconListA equ <__imp_InternalExtractIconListA>
  IFNDEF __UNICODE__
    InternalExtractIconList equ <__imp_InternalExtractIconListA>
  ENDIF

externdef __imp_InternalExtractIconListW:PPROC
InternalExtractIconListW equ <__imp_InternalExtractIconListW>
  IFDEF __UNICODE__
    InternalExtractIconList equ <__imp_InternalExtractIconListW>
  ENDIF

externdef __imp_IsLFNDrive:PPROC
IsLFNDrive equ <__imp_IsLFNDrive>

externdef __imp_IsLFNDriveA:PPROC
IsLFNDriveA equ <__imp_IsLFNDriveA>
  IFNDEF __UNICODE__
    IsLFNDrive equ <__imp_IsLFNDriveA>
  ENDIF

externdef __imp_IsLFNDriveW:PPROC
IsLFNDriveW equ <__imp_IsLFNDriveW>
  IFDEF __UNICODE__
    IsLFNDrive equ <__imp_IsLFNDriveW>
  ENDIF

externdef __imp_IsNetDrive:PPROC
IsNetDrive equ <__imp_IsNetDrive>

externdef __imp_IsUserAnAdmin:PPROC
IsUserAnAdmin equ <__imp_IsUserAnAdmin>

externdef __imp_OpenAs_RunDLL:PPROC
OpenAs_RunDLL equ <__imp_OpenAs_RunDLL>

externdef __imp_OpenAs_RunDLLA:PPROC
OpenAs_RunDLLA equ <__imp_OpenAs_RunDLLA>
  IFNDEF __UNICODE__
    OpenAs_RunDLL equ <__imp_OpenAs_RunDLLA>
  ENDIF

externdef __imp_OpenAs_RunDLLW:PPROC
OpenAs_RunDLLW equ <__imp_OpenAs_RunDLLW>
  IFDEF __UNICODE__
    OpenAs_RunDLL equ <__imp_OpenAs_RunDLLW>
  ENDIF

externdef __imp_OpenRegStream:PPROC
OpenRegStream equ <__imp_OpenRegStream>

externdef __imp_Options_RunDLL:PPROC
Options_RunDLL equ <__imp_Options_RunDLL>

externdef __imp_Options_RunDLLA:PPROC
Options_RunDLLA equ <__imp_Options_RunDLLA>
  IFNDEF __UNICODE__
    Options_RunDLL equ <__imp_Options_RunDLLA>
  ENDIF

externdef __imp_Options_RunDLLW:PPROC
Options_RunDLLW equ <__imp_Options_RunDLLW>
  IFDEF __UNICODE__
    Options_RunDLL equ <__imp_Options_RunDLLW>
  ENDIF

externdef __imp_PathCleanupSpec:PPROC
PathCleanupSpec equ <__imp_PathCleanupSpec>

externdef __imp_PathGetShortPath:PPROC
PathGetShortPath equ <__imp_PathGetShortPath>

externdef __imp_PathIsExe:PPROC
PathIsExe equ <__imp_PathIsExe>

externdef __imp_PathIsSlowA:PPROC
PathIsSlowA equ <__imp_PathIsSlowA>
  IFNDEF __UNICODE__
    PathIsSlow equ <__imp_PathIsSlowA>
  ENDIF

externdef __imp_PathIsSlowW:PPROC
PathIsSlowW equ <__imp_PathIsSlowW>
  IFDEF __UNICODE__
    PathIsSlow equ <__imp_PathIsSlowW>
  ENDIF

externdef __imp_PathMakeUniqueName:PPROC
PathMakeUniqueName equ <__imp_PathMakeUniqueName>

externdef __imp_PathProcessCommand:PPROC
PathProcessCommand equ <__imp_PathProcessCommand>

externdef __imp_PathQualify:PPROC
PathQualify equ <__imp_PathQualify>

externdef __imp_PathResolve:PPROC
PathResolve equ <__imp_PathResolve>

externdef __imp_PathYetAnotherMakeUniqueName:PPROC
PathYetAnotherMakeUniqueName equ <__imp_PathYetAnotherMakeUniqueName>

externdef __imp_PickIconDlg:PPROC
PickIconDlg equ <__imp_PickIconDlg>

externdef __imp_PifMgr_CloseProperties:PPROC
PifMgr_CloseProperties equ <__imp_PifMgr_CloseProperties>

externdef __imp_PifMgr_GetProperties:PPROC
PifMgr_GetProperties equ <__imp_PifMgr_GetProperties>

externdef __imp_PifMgr_OpenProperties:PPROC
PifMgr_OpenProperties equ <__imp_PifMgr_OpenProperties>

externdef __imp_PifMgr_SetProperties:PPROC
PifMgr_SetProperties equ <__imp_PifMgr_SetProperties>

externdef __imp_PrintersGetCommand_RunDLL:PPROC
PrintersGetCommand_RunDLL equ <__imp_PrintersGetCommand_RunDLL>

externdef __imp_PrintersGetCommand_RunDLLA:PPROC
PrintersGetCommand_RunDLLA equ <__imp_PrintersGetCommand_RunDLLA>
  IFNDEF __UNICODE__
    PrintersGetCommand_RunDLL equ <__imp_PrintersGetCommand_RunDLLA>
  ENDIF

externdef __imp_PrintersGetCommand_RunDLLW:PPROC
PrintersGetCommand_RunDLLW equ <__imp_PrintersGetCommand_RunDLLW>
  IFDEF __UNICODE__
    PrintersGetCommand_RunDLL equ <__imp_PrintersGetCommand_RunDLLW>
  ENDIF

externdef __imp_ReadCabinetState:PPROC
ReadCabinetState equ <__imp_ReadCabinetState>

externdef __imp_RealDriveType:PPROC
RealDriveType equ <__imp_RealDriveType>

externdef __imp_RealShellExecuteA:PPROC
RealShellExecuteA equ <__imp_RealShellExecuteA>
  IFNDEF __UNICODE__
    RealShellExecute equ <__imp_RealShellExecuteA>
  ENDIF

externdef __imp_RealShellExecuteExA:PPROC
RealShellExecuteExA equ <__imp_RealShellExecuteExA>
  IFNDEF __UNICODE__
    RealShellExecuteEx equ <__imp_RealShellExecuteExA>
  ENDIF

externdef __imp_RealShellExecuteExW:PPROC
RealShellExecuteExW equ <__imp_RealShellExecuteExW>
  IFDEF __UNICODE__
    RealShellExecuteEx equ <__imp_RealShellExecuteExW>
  ENDIF

externdef __imp_RealShellExecuteW:PPROC
RealShellExecuteW equ <__imp_RealShellExecuteW>
  IFDEF __UNICODE__
    RealShellExecute equ <__imp_RealShellExecuteW>
  ENDIF

externdef __imp_RegenerateUserEnvironment:PPROC
RegenerateUserEnvironment equ <__imp_RegenerateUserEnvironment>

externdef __imp_RestartDialog:PPROC
RestartDialog equ <__imp_RestartDialog>

externdef __imp_RestartDialogEx:PPROC
RestartDialogEx equ <__imp_RestartDialogEx>

externdef __imp_SHAddFromPropSheetExtArray:PPROC
SHAddFromPropSheetExtArray equ <__imp_SHAddFromPropSheetExtArray>

externdef __imp_SHAddToRecentDocs:PPROC
SHAddToRecentDocs equ <__imp_SHAddToRecentDocs>

externdef __imp_SHAlloc:PPROC
SHAlloc equ <__imp_SHAlloc>

externdef __imp_SHAllocShared:PPROC
SHAllocShared equ <__imp_SHAllocShared>

externdef __imp_SHAppBarMessage:PPROC
SHAppBarMessage equ <__imp_SHAppBarMessage>

externdef __imp_SHBindToParent:PPROC
SHBindToParent equ <__imp_SHBindToParent>

externdef __imp_SHBrowseForFolder:PPROC
SHBrowseForFolder equ <__imp_SHBrowseForFolder>

externdef __imp_SHBrowseForFolderA:PPROC
SHBrowseForFolderA equ <__imp_SHBrowseForFolderA>
  IFNDEF __UNICODE__
    SHBrowseForFolder equ <__imp_SHBrowseForFolderA>
  ENDIF

externdef __imp_SHBrowseForFolderW:PPROC
SHBrowseForFolderW equ <__imp_SHBrowseForFolderW>
  IFDEF __UNICODE__
    SHBrowseForFolder equ <__imp_SHBrowseForFolderW>
  ENDIF

externdef __imp_SHCLSIDFromString:PPROC
SHCLSIDFromString equ <__imp_SHCLSIDFromString>

externdef __imp_SHChangeNotification_Lock:PPROC
SHChangeNotification_Lock equ <__imp_SHChangeNotification_Lock>

externdef __imp_SHChangeNotification_Unlock:PPROC
SHChangeNotification_Unlock equ <__imp_SHChangeNotification_Unlock>

externdef __imp_SHChangeNotify:PPROC
SHChangeNotify equ <__imp_SHChangeNotify>

externdef __imp_SHChangeNotifyDeregister:PPROC
SHChangeNotifyDeregister equ <__imp_SHChangeNotifyDeregister>

externdef __imp_SHChangeNotifyRegister:PPROC
SHChangeNotifyRegister equ <__imp_SHChangeNotifyRegister>

externdef __imp_SHChangeNotifySuspendResume:PPROC
SHChangeNotifySuspendResume equ <__imp_SHChangeNotifySuspendResume>

externdef __imp_SHCloneSpecialIDList:PPROC
SHCloneSpecialIDList equ <__imp_SHCloneSpecialIDList>

externdef __imp_SHCoCreateInstance:PPROC
SHCoCreateInstance equ <__imp_SHCoCreateInstance>

externdef __imp_SHCreateDirectory:PPROC
SHCreateDirectory equ <__imp_SHCreateDirectory>

externdef __imp_SHCreateDirectoryExA:PPROC
SHCreateDirectoryExA equ <__imp_SHCreateDirectoryExA>
  IFNDEF __UNICODE__
    SHCreateDirectoryEx equ <__imp_SHCreateDirectoryExA>
  ENDIF

externdef __imp_SHCreateDirectoryExW:PPROC
SHCreateDirectoryExW equ <__imp_SHCreateDirectoryExW>
  IFDEF __UNICODE__
    SHCreateDirectoryEx equ <__imp_SHCreateDirectoryExW>
  ENDIF

externdef __imp_SHCreateFileExtractIconW:PPROC
SHCreateFileExtractIconW equ <__imp_SHCreateFileExtractIconW>
  IFDEF __UNICODE__
    SHCreateFileExtractIcon equ <__imp_SHCreateFileExtractIconW>
  ENDIF

externdef __imp_SHCreateLocalServerRunDll:PPROC
SHCreateLocalServerRunDll equ <__imp_SHCreateLocalServerRunDll>

externdef __imp_SHCreateProcessAsUserW:PPROC
SHCreateProcessAsUserW equ <__imp_SHCreateProcessAsUserW>
  IFDEF __UNICODE__
    SHCreateProcessAsUser equ <__imp_SHCreateProcessAsUserW>
  ENDIF

externdef __imp_SHCreatePropSheetExtArray:PPROC
SHCreatePropSheetExtArray equ <__imp_SHCreatePropSheetExtArray>

externdef __imp_SHCreateQueryCancelAutoPlayMoniker:PPROC
SHCreateQueryCancelAutoPlayMoniker equ <__imp_SHCreateQueryCancelAutoPlayMoniker>

externdef __imp_SHCreateShellFolderView:PPROC
SHCreateShellFolderView equ <__imp_SHCreateShellFolderView>

externdef __imp_SHCreateShellFolderViewEx:PPROC
SHCreateShellFolderViewEx equ <__imp_SHCreateShellFolderViewEx>

externdef __imp_SHCreateShellItem:PPROC
SHCreateShellItem equ <__imp_SHCreateShellItem>

externdef __imp_SHCreateStdEnumFmtEtc:PPROC
SHCreateStdEnumFmtEtc equ <__imp_SHCreateStdEnumFmtEtc>

externdef __imp_SHDefExtractIconA:PPROC
SHDefExtractIconA equ <__imp_SHDefExtractIconA>
  IFNDEF __UNICODE__
    SHDefExtractIcon equ <__imp_SHDefExtractIconA>
  ENDIF

externdef __imp_SHDefExtractIconW:PPROC
SHDefExtractIconW equ <__imp_SHDefExtractIconW>
  IFDEF __UNICODE__
    SHDefExtractIcon equ <__imp_SHDefExtractIconW>
  ENDIF

externdef __imp_SHDestroyPropSheetExtArray:PPROC
SHDestroyPropSheetExtArray equ <__imp_SHDestroyPropSheetExtArray>

externdef __imp_SHDoDragDrop:PPROC
SHDoDragDrop equ <__imp_SHDoDragDrop>

externdef __imp_SHEmptyRecycleBinA:PPROC
SHEmptyRecycleBinA equ <__imp_SHEmptyRecycleBinA>
  IFNDEF __UNICODE__
    SHEmptyRecycleBin equ <__imp_SHEmptyRecycleBinA>
  ENDIF

externdef __imp_SHEmptyRecycleBinW:PPROC
SHEmptyRecycleBinW equ <__imp_SHEmptyRecycleBinW>
  IFDEF __UNICODE__
    SHEmptyRecycleBin equ <__imp_SHEmptyRecycleBinW>
  ENDIF

externdef __imp_SHEnableServiceObject:PPROC
SHEnableServiceObject equ <__imp_SHEnableServiceObject>

externdef __imp_SHEnumerateUnreadMailAccountsW:PPROC
SHEnumerateUnreadMailAccountsW equ <__imp_SHEnumerateUnreadMailAccountsW>
  IFDEF __UNICODE__
    SHEnumerateUnreadMailAccounts equ <__imp_SHEnumerateUnreadMailAccountsW>
  ENDIF

externdef __imp_SHExtractIconsW:PPROC
SHExtractIconsW equ <__imp_SHExtractIconsW>
  IFDEF __UNICODE__
    SHExtractIcons equ <__imp_SHExtractIconsW>
  ENDIF

externdef __imp_SHFileOperation:PPROC
SHFileOperation equ <__imp_SHFileOperation>

externdef __imp_SHFileOperationA:PPROC
SHFileOperationA equ <__imp_SHFileOperationA>
  IFNDEF __UNICODE__
    SHFileOperation equ <__imp_SHFileOperationA>
  ENDIF

externdef __imp_SHFileOperationW:PPROC
SHFileOperationW equ <__imp_SHFileOperationW>
  IFDEF __UNICODE__
    SHFileOperation equ <__imp_SHFileOperationW>
  ENDIF

externdef __imp_SHFindFiles:PPROC
SHFindFiles equ <__imp_SHFindFiles>

externdef __imp_SHFind_InitMenuPopup:PPROC
SHFind_InitMenuPopup equ <__imp_SHFind_InitMenuPopup>

externdef __imp_SHFlushClipboard:PPROC
SHFlushClipboard equ <__imp_SHFlushClipboard>

externdef __imp_SHFlushSFCache:PPROC
SHFlushSFCache equ <__imp_SHFlushSFCache>

externdef __imp_SHFormatDrive:PPROC
SHFormatDrive equ <__imp_SHFormatDrive>

externdef __imp_SHFree:PPROC
SHFree equ <__imp_SHFree>

externdef __imp_SHFreeNameMappings:PPROC
SHFreeNameMappings equ <__imp_SHFreeNameMappings>

externdef __imp_SHFreeShared:PPROC
SHFreeShared equ <__imp_SHFreeShared>

externdef __imp_SHGetAttributesFromDataObject:PPROC
SHGetAttributesFromDataObject equ <__imp_SHGetAttributesFromDataObject>

externdef __imp_SHGetDataFromIDListA:PPROC
SHGetDataFromIDListA equ <__imp_SHGetDataFromIDListA>
  IFNDEF __UNICODE__
    SHGetDataFromIDList equ <__imp_SHGetDataFromIDListA>
  ENDIF

externdef __imp_SHGetDataFromIDListW:PPROC
SHGetDataFromIDListW equ <__imp_SHGetDataFromIDListW>
  IFDEF __UNICODE__
    SHGetDataFromIDList equ <__imp_SHGetDataFromIDListW>
  ENDIF

externdef __imp_SHGetDesktopFolder:PPROC
SHGetDesktopFolder equ <__imp_SHGetDesktopFolder>

externdef __imp_SHGetDiskFreeSpaceA:PPROC
SHGetDiskFreeSpaceA equ <__imp_SHGetDiskFreeSpaceA>
  IFNDEF __UNICODE__
    SHGetDiskFreeSpace equ <__imp_SHGetDiskFreeSpaceA>
  ENDIF

externdef __imp_SHGetDiskFreeSpaceExA:PPROC
SHGetDiskFreeSpaceExA equ <__imp_SHGetDiskFreeSpaceExA>
  IFNDEF __UNICODE__
    SHGetDiskFreeSpaceEx equ <__imp_SHGetDiskFreeSpaceExA>
  ENDIF

externdef __imp_SHGetDiskFreeSpaceExW:PPROC
SHGetDiskFreeSpaceExW equ <__imp_SHGetDiskFreeSpaceExW>
  IFDEF __UNICODE__
    SHGetDiskFreeSpaceEx equ <__imp_SHGetDiskFreeSpaceExW>
  ENDIF

externdef __imp_SHGetFileInfo:PPROC
SHGetFileInfo equ <__imp_SHGetFileInfo>

externdef __imp_SHGetFileInfoA:PPROC
SHGetFileInfoA equ <__imp_SHGetFileInfoA>
  IFNDEF __UNICODE__
    SHGetFileInfo equ <__imp_SHGetFileInfoA>
  ENDIF

externdef __imp_SHGetFileInfoW:PPROC
SHGetFileInfoW equ <__imp_SHGetFileInfoW>
  IFDEF __UNICODE__
    SHGetFileInfo equ <__imp_SHGetFileInfoW>
  ENDIF

externdef __imp_SHGetFolderLocation:PPROC
SHGetFolderLocation equ <__imp_SHGetFolderLocation>

externdef __imp_SHGetFolderPathA:PPROC
SHGetFolderPathA equ <__imp_SHGetFolderPathA>
  IFNDEF __UNICODE__
    SHGetFolderPath equ <__imp_SHGetFolderPathA>
  ENDIF

externdef __imp_SHGetFolderPathAndSubDirA:PPROC
SHGetFolderPathAndSubDirA equ <__imp_SHGetFolderPathAndSubDirA>
  IFNDEF __UNICODE__
    SHGetFolderPathAndSubDir equ <__imp_SHGetFolderPathAndSubDirA>
  ENDIF

externdef __imp_SHGetFolderPathAndSubDirW:PPROC
SHGetFolderPathAndSubDirW equ <__imp_SHGetFolderPathAndSubDirW>
  IFDEF __UNICODE__
    SHGetFolderPathAndSubDir equ <__imp_SHGetFolderPathAndSubDirW>
  ENDIF

externdef __imp_SHGetFolderPathW:PPROC
SHGetFolderPathW equ <__imp_SHGetFolderPathW>
  IFDEF __UNICODE__
    SHGetFolderPath equ <__imp_SHGetFolderPathW>
  ENDIF

externdef __imp_SHGetIconOverlayIndexA:PPROC
SHGetIconOverlayIndexA equ <__imp_SHGetIconOverlayIndexA>
  IFNDEF __UNICODE__
    SHGetIconOverlayIndex equ <__imp_SHGetIconOverlayIndexA>
  ENDIF

externdef __imp_SHGetIconOverlayIndexW:PPROC
SHGetIconOverlayIndexW equ <__imp_SHGetIconOverlayIndexW>
  IFDEF __UNICODE__
    SHGetIconOverlayIndex equ <__imp_SHGetIconOverlayIndexW>
  ENDIF

externdef __imp_SHGetImageList:PPROC
SHGetImageList equ <__imp_SHGetImageList>

externdef __imp_SHGetInstanceExplorer:PPROC
SHGetInstanceExplorer equ <__imp_SHGetInstanceExplorer>

externdef __imp_SHGetMalloc:PPROC
SHGetMalloc equ <__imp_SHGetMalloc>

externdef __imp_SHGetNewLinkInfo:PPROC
SHGetNewLinkInfo equ <__imp_SHGetNewLinkInfo>

externdef __imp_SHGetNewLinkInfoA:PPROC
SHGetNewLinkInfoA equ <__imp_SHGetNewLinkInfoA>
  IFNDEF __UNICODE__
    SHGetNewLinkInfo equ <__imp_SHGetNewLinkInfoA>
  ENDIF

externdef __imp_SHGetNewLinkInfoW:PPROC
SHGetNewLinkInfoW equ <__imp_SHGetNewLinkInfoW>
  IFDEF __UNICODE__
    SHGetNewLinkInfo equ <__imp_SHGetNewLinkInfoW>
  ENDIF

externdef __imp_SHGetPathFromIDList:PPROC
SHGetPathFromIDList equ <__imp_SHGetPathFromIDList>

externdef __imp_SHGetPathFromIDListA:PPROC
SHGetPathFromIDListA equ <__imp_SHGetPathFromIDListA>
  IFNDEF __UNICODE__
    SHGetPathFromIDList equ <__imp_SHGetPathFromIDListA>
  ENDIF

externdef __imp_SHGetPathFromIDListW:PPROC
SHGetPathFromIDListW equ <__imp_SHGetPathFromIDListW>
  IFDEF __UNICODE__
    SHGetPathFromIDList equ <__imp_SHGetPathFromIDListW>
  ENDIF

externdef __imp_SHGetRealIDL:PPROC
SHGetRealIDL equ <__imp_SHGetRealIDL>

externdef __imp_SHGetSetFolderCustomSettingsW:PPROC
SHGetSetFolderCustomSettingsW equ <__imp_SHGetSetFolderCustomSettingsW>
  IFDEF __UNICODE__
    SHGetSetFolderCustomSettings equ <__imp_SHGetSetFolderCustomSettingsW>
  ENDIF

externdef __imp_SHGetSetSettings:PPROC
SHGetSetSettings equ <__imp_SHGetSetSettings>

externdef __imp_SHGetSettings:PPROC
SHGetSettings equ <__imp_SHGetSettings>

externdef __imp_SHGetShellStyleHInstance:PPROC
SHGetShellStyleHInstance equ <__imp_SHGetShellStyleHInstance>

externdef __imp_SHGetSpecialFolderLocation:PPROC
SHGetSpecialFolderLocation equ <__imp_SHGetSpecialFolderLocation>

externdef __imp_SHGetSpecialFolderPathA:PPROC
SHGetSpecialFolderPathA equ <__imp_SHGetSpecialFolderPathA>
  IFNDEF __UNICODE__
    SHGetSpecialFolderPath equ <__imp_SHGetSpecialFolderPathA>
  ENDIF

externdef __imp_SHGetSpecialFolderPathW:PPROC
SHGetSpecialFolderPathW equ <__imp_SHGetSpecialFolderPathW>
  IFDEF __UNICODE__
    SHGetSpecialFolderPath equ <__imp_SHGetSpecialFolderPathW>
  ENDIF

externdef __imp_SHGetUnreadMailCountW:PPROC
SHGetUnreadMailCountW equ <__imp_SHGetUnreadMailCountW>
  IFDEF __UNICODE__
    SHGetUnreadMailCount equ <__imp_SHGetUnreadMailCountW>
  ENDIF

externdef __imp_SHHandleUpdateImage:PPROC
SHHandleUpdateImage equ <__imp_SHHandleUpdateImage>

externdef __imp_SHHelpShortcuts_RunDLL:PPROC
SHHelpShortcuts_RunDLL equ <__imp_SHHelpShortcuts_RunDLL>

externdef __imp_SHHelpShortcuts_RunDLLA:PPROC
SHHelpShortcuts_RunDLLA equ <__imp_SHHelpShortcuts_RunDLLA>
  IFNDEF __UNICODE__
    SHHelpShortcuts_RunDLL equ <__imp_SHHelpShortcuts_RunDLLA>
  ENDIF

externdef __imp_SHHelpShortcuts_RunDLLW:PPROC
SHHelpShortcuts_RunDLLW equ <__imp_SHHelpShortcuts_RunDLLW>
  IFDEF __UNICODE__
    SHHelpShortcuts_RunDLL equ <__imp_SHHelpShortcuts_RunDLLW>
  ENDIF

externdef __imp_SHILCreateFromPath:PPROC
SHILCreateFromPath equ <__imp_SHILCreateFromPath>

externdef __imp_SHInvokePrinterCommandA:PPROC
SHInvokePrinterCommandA equ <__imp_SHInvokePrinterCommandA>
  IFNDEF __UNICODE__
    SHInvokePrinterCommand equ <__imp_SHInvokePrinterCommandA>
  ENDIF

externdef __imp_SHInvokePrinterCommandW:PPROC
SHInvokePrinterCommandW equ <__imp_SHInvokePrinterCommandW>
  IFDEF __UNICODE__
    SHInvokePrinterCommand equ <__imp_SHInvokePrinterCommandW>
  ENDIF

externdef __imp_SHIsFileAvailableOffline:PPROC
SHIsFileAvailableOffline equ <__imp_SHIsFileAvailableOffline>

externdef __imp_SHLimitInputEdit:PPROC
SHLimitInputEdit equ <__imp_SHLimitInputEdit>

externdef __imp_SHLoadInProc:PPROC
SHLoadInProc equ <__imp_SHLoadInProc>

externdef __imp_SHLoadNonloadedIconOverlayIdentifiers:PPROC
SHLoadNonloadedIconOverlayIdentifiers equ <__imp_SHLoadNonloadedIconOverlayIdentifiers>

externdef __imp_SHLoadOLE:PPROC
SHLoadOLE equ <__imp_SHLoadOLE>

externdef __imp_SHLockShared:PPROC
SHLockShared equ <__imp_SHLockShared>

externdef __imp_SHMapIDListToImageListIndexAsync:PPROC
SHMapIDListToImageListIndexAsync equ <__imp_SHMapIDListToImageListIndexAsync>

externdef __imp_SHMapPIDLToSystemImageListIndex:PPROC
SHMapPIDLToSystemImageListIndex equ <__imp_SHMapPIDLToSystemImageListIndex>

externdef __imp_SHMultiFileProperties:PPROC
SHMultiFileProperties equ <__imp_SHMultiFileProperties>

externdef __imp_SHObjectProperties:PPROC
SHObjectProperties equ <__imp_SHObjectProperties>

externdef __imp_SHOpenFolderAndSelectItems:PPROC
SHOpenFolderAndSelectItems equ <__imp_SHOpenFolderAndSelectItems>

externdef __imp_SHOpenPropSheetW:PPROC
SHOpenPropSheetW equ <__imp_SHOpenPropSheetW>
  IFDEF __UNICODE__
    SHOpenPropSheet equ <__imp_SHOpenPropSheetW>
  ENDIF

externdef __imp_SHParseDisplayName:PPROC
SHParseDisplayName equ <__imp_SHParseDisplayName>

externdef __imp_SHPathPrepareForWriteA:PPROC
SHPathPrepareForWriteA equ <__imp_SHPathPrepareForWriteA>
  IFNDEF __UNICODE__
    SHPathPrepareForWrite equ <__imp_SHPathPrepareForWriteA>
  ENDIF

externdef __imp_SHPathPrepareForWriteW:PPROC
SHPathPrepareForWriteW equ <__imp_SHPathPrepareForWriteW>
  IFDEF __UNICODE__
    SHPathPrepareForWrite equ <__imp_SHPathPrepareForWriteW>
  ENDIF

externdef __imp_SHPropStgCreate:PPROC
SHPropStgCreate equ <__imp_SHPropStgCreate>

externdef __imp_SHPropStgReadMultiple:PPROC
SHPropStgReadMultiple equ <__imp_SHPropStgReadMultiple>

externdef __imp_SHPropStgWriteMultiple:PPROC
SHPropStgWriteMultiple equ <__imp_SHPropStgWriteMultiple>

externdef __imp_SHQueryRecycleBinA:PPROC
SHQueryRecycleBinA equ <__imp_SHQueryRecycleBinA>
  IFNDEF __UNICODE__
    SHQueryRecycleBin equ <__imp_SHQueryRecycleBinA>
  ENDIF

externdef __imp_SHQueryRecycleBinW:PPROC
SHQueryRecycleBinW equ <__imp_SHQueryRecycleBinW>
  IFDEF __UNICODE__
    SHQueryRecycleBin equ <__imp_SHQueryRecycleBinW>
  ENDIF

externdef __imp_SHReplaceFromPropSheetExtArray:PPROC
SHReplaceFromPropSheetExtArray equ <__imp_SHReplaceFromPropSheetExtArray>

externdef __imp_SHRestricted:PPROC
SHRestricted equ <__imp_SHRestricted>

externdef __imp_SHRunControlPanel:PPROC
SHRunControlPanel equ <__imp_SHRunControlPanel>

externdef __imp_SHSetInstanceExplorer:PPROC
SHSetInstanceExplorer equ <__imp_SHSetInstanceExplorer>

externdef __imp_SHSetLocalizedName:PPROC
SHSetLocalizedName equ <__imp_SHSetLocalizedName>

externdef __imp_SHSetUnreadMailCountW:PPROC
SHSetUnreadMailCountW equ <__imp_SHSetUnreadMailCountW>
  IFDEF __UNICODE__
    SHSetUnreadMailCount equ <__imp_SHSetUnreadMailCountW>
  ENDIF

externdef __imp_SHShellFolderView_Message:PPROC
SHShellFolderView_Message equ <__imp_SHShellFolderView_Message>

externdef __imp_SHSimpleIDListFromPath:PPROC
SHSimpleIDListFromPath equ <__imp_SHSimpleIDListFromPath>

externdef __imp_SHStartNetConnectionDialogW:PPROC
SHStartNetConnectionDialogW equ <__imp_SHStartNetConnectionDialogW>
  IFDEF __UNICODE__
    SHStartNetConnectionDialog equ <__imp_SHStartNetConnectionDialogW>
  ENDIF

externdef __imp_SHTestTokenMembership:PPROC
SHTestTokenMembership equ <__imp_SHTestTokenMembership>

externdef __imp_SHUnlockShared:PPROC
SHUnlockShared equ <__imp_SHUnlockShared>

externdef __imp_SHUpdateImageA:PPROC
SHUpdateImageA equ <__imp_SHUpdateImageA>
  IFNDEF __UNICODE__
    SHUpdateImage equ <__imp_SHUpdateImageA>
  ENDIF

externdef __imp_SHUpdateImageW:PPROC
SHUpdateImageW equ <__imp_SHUpdateImageW>
  IFDEF __UNICODE__
    SHUpdateImage equ <__imp_SHUpdateImageW>
  ENDIF

externdef __imp_SHUpdateRecycleBinIcon:PPROC
SHUpdateRecycleBinIcon equ <__imp_SHUpdateRecycleBinIcon>

externdef __imp_SHValidateUNC:PPROC
SHValidateUNC equ <__imp_SHValidateUNC>

externdef __imp_SheChangeDirA:PPROC
SheChangeDirA equ <__imp_SheChangeDirA>
  IFNDEF __UNICODE__
    SheChangeDir equ <__imp_SheChangeDirA>
  ENDIF

externdef __imp_SheChangeDirExA:PPROC
SheChangeDirExA equ <__imp_SheChangeDirExA>
  IFNDEF __UNICODE__
    SheChangeDirEx equ <__imp_SheChangeDirExA>
  ENDIF

externdef __imp_SheChangeDirExW:PPROC
SheChangeDirExW equ <__imp_SheChangeDirExW>
  IFDEF __UNICODE__
    SheChangeDirEx equ <__imp_SheChangeDirExW>
  ENDIF

externdef __imp_SheChangeDirW:PPROC
SheChangeDirW equ <__imp_SheChangeDirW>
  IFDEF __UNICODE__
    SheChangeDir equ <__imp_SheChangeDirW>
  ENDIF

externdef __imp_SheConvertPathW:PPROC
SheConvertPathW equ <__imp_SheConvertPathW>
  IFDEF __UNICODE__
    SheConvertPath equ <__imp_SheConvertPathW>
  ENDIF

externdef __imp_SheFullPathA:PPROC
SheFullPathA equ <__imp_SheFullPathA>
  IFNDEF __UNICODE__
    SheFullPath equ <__imp_SheFullPathA>
  ENDIF

externdef __imp_SheFullPathW:PPROC
SheFullPathW equ <__imp_SheFullPathW>
  IFDEF __UNICODE__
    SheFullPath equ <__imp_SheFullPathW>
  ENDIF

externdef __imp_SheGetCurDrive:PPROC
SheGetCurDrive equ <__imp_SheGetCurDrive>

externdef __imp_SheGetDirA:PPROC
SheGetDirA equ <__imp_SheGetDirA>
  IFNDEF __UNICODE__
    SheGetDir equ <__imp_SheGetDirA>
  ENDIF

externdef __imp_SheGetDirExW:PPROC
SheGetDirExW equ <__imp_SheGetDirExW>
  IFDEF __UNICODE__
    SheGetDirEx equ <__imp_SheGetDirExW>
  ENDIF

externdef __imp_SheGetDirW:PPROC
SheGetDirW equ <__imp_SheGetDirW>
  IFDEF __UNICODE__
    SheGetDir equ <__imp_SheGetDirW>
  ENDIF

externdef __imp_SheGetPathOffsetW:PPROC
SheGetPathOffsetW equ <__imp_SheGetPathOffsetW>
  IFDEF __UNICODE__
    SheGetPathOffset equ <__imp_SheGetPathOffsetW>
  ENDIF

externdef __imp_SheRemoveQuotesA:PPROC
SheRemoveQuotesA equ <__imp_SheRemoveQuotesA>
  IFNDEF __UNICODE__
    SheRemoveQuotes equ <__imp_SheRemoveQuotesA>
  ENDIF

externdef __imp_SheRemoveQuotesW:PPROC
SheRemoveQuotesW equ <__imp_SheRemoveQuotesW>
  IFDEF __UNICODE__
    SheRemoveQuotes equ <__imp_SheRemoveQuotesW>
  ENDIF

externdef __imp_SheSetCurDrive:PPROC
SheSetCurDrive equ <__imp_SheSetCurDrive>

externdef __imp_SheShortenPathA:PPROC
SheShortenPathA equ <__imp_SheShortenPathA>
  IFNDEF __UNICODE__
    SheShortenPath equ <__imp_SheShortenPathA>
  ENDIF

externdef __imp_SheShortenPathW:PPROC
SheShortenPathW equ <__imp_SheShortenPathW>
  IFDEF __UNICODE__
    SheShortenPath equ <__imp_SheShortenPathW>
  ENDIF

externdef __imp_ShellAboutA:PPROC
ShellAboutA equ <__imp_ShellAboutA>
  IFNDEF __UNICODE__
    ShellAbout equ <__imp_ShellAboutA>
  ENDIF

externdef __imp_ShellAboutW:PPROC
ShellAboutW equ <__imp_ShellAboutW>
  IFDEF __UNICODE__
    ShellAbout equ <__imp_ShellAboutW>
  ENDIF

externdef __imp_ShellExec_RunDLL:PPROC
ShellExec_RunDLL equ <__imp_ShellExec_RunDLL>

externdef __imp_ShellExec_RunDLLA:PPROC
ShellExec_RunDLLA equ <__imp_ShellExec_RunDLLA>
  IFNDEF __UNICODE__
    ShellExec_RunDLL equ <__imp_ShellExec_RunDLLA>
  ENDIF

externdef __imp_ShellExec_RunDLLW:PPROC
ShellExec_RunDLLW equ <__imp_ShellExec_RunDLLW>
  IFDEF __UNICODE__
    ShellExec_RunDLL equ <__imp_ShellExec_RunDLLW>
  ENDIF

externdef __imp_ShellExecuteA:PPROC
ShellExecuteA equ <__imp_ShellExecuteA>
  IFNDEF __UNICODE__
    ShellExecute equ <__imp_ShellExecuteA>
  ENDIF

externdef __imp_ShellExecuteEx:PPROC
ShellExecuteEx equ <__imp_ShellExecuteEx>

externdef __imp_ShellExecuteExA:PPROC
ShellExecuteExA equ <__imp_ShellExecuteExA>
  IFNDEF __UNICODE__
    ShellExecuteEx equ <__imp_ShellExecuteExA>
  ENDIF

externdef __imp_ShellExecuteExW:PPROC
ShellExecuteExW equ <__imp_ShellExecuteExW>
  IFDEF __UNICODE__
    ShellExecuteEx equ <__imp_ShellExecuteExW>
  ENDIF

externdef __imp_ShellExecuteW:PPROC
ShellExecuteW equ <__imp_ShellExecuteW>
  IFDEF __UNICODE__
    ShellExecute equ <__imp_ShellExecuteW>
  ENDIF

externdef __imp_ShellHookProc:PPROC
ShellHookProc equ <__imp_ShellHookProc>

externdef __imp_ShellMessageBoxA:PPROC
ShellMessageBoxA equ <__imp_ShellMessageBoxA>
  IFNDEF __UNICODE__
    ShellMessageBox equ <__imp_ShellMessageBoxA>
  ENDIF

externdef __imp_ShellMessageBoxW:PPROC
ShellMessageBoxW equ <__imp_ShellMessageBoxW>
  IFDEF __UNICODE__
    ShellMessageBox equ <__imp_ShellMessageBoxW>
  ENDIF

externdef __imp_Shell_GetCachedImageIndex:PPROC
Shell_GetCachedImageIndex equ <__imp_Shell_GetCachedImageIndex>

externdef __imp_Shell_GetImageLists:PPROC
Shell_GetImageLists equ <__imp_Shell_GetImageLists>

externdef __imp_Shell_MergeMenus:PPROC
Shell_MergeMenus equ <__imp_Shell_MergeMenus>

externdef __imp_Shell_NotifyIcon:PPROC
Shell_NotifyIcon equ <__imp_Shell_NotifyIcon>

externdef __imp_Shell_NotifyIconA:PPROC
Shell_NotifyIconA equ <__imp_Shell_NotifyIconA>
  IFNDEF __UNICODE__
    Shell_NotifyIcon equ <__imp_Shell_NotifyIconA>
  ENDIF

externdef __imp_Shell_NotifyIconW:PPROC
Shell_NotifyIconW equ <__imp_Shell_NotifyIconW>
  IFDEF __UNICODE__
    Shell_NotifyIcon equ <__imp_Shell_NotifyIconW>
  ENDIF

externdef __imp_SignalFileOpen:PPROC
SignalFileOpen equ <__imp_SignalFileOpen>

externdef __imp_StrChrA:PPROC
StrChrA equ <__imp_StrChrA>
  IFNDEF __UNICODE__
    StrChr equ <__imp_StrChrA>
  ENDIF

externdef __imp_StrChrIA:PPROC
StrChrIA equ <__imp_StrChrIA>
  IFNDEF __UNICODE__
    StrChrI equ <__imp_StrChrIA>
  ENDIF

externdef __imp_StrChrIW:PPROC
StrChrIW equ <__imp_StrChrIW>
  IFDEF __UNICODE__
    StrChrI equ <__imp_StrChrIW>
  ENDIF

externdef __imp_StrChrW:PPROC
StrChrW equ <__imp_StrChrW>
  IFDEF __UNICODE__
    StrChr equ <__imp_StrChrW>
  ENDIF

externdef __imp_StrCmpNA:PPROC
StrCmpNA equ <__imp_StrCmpNA>
  IFNDEF __UNICODE__
    StrCmpN equ <__imp_StrCmpNA>
  ENDIF

externdef __imp_StrCmpNIA:PPROC
StrCmpNIA equ <__imp_StrCmpNIA>
  IFNDEF __UNICODE__
    StrCmpNI equ <__imp_StrCmpNIA>
  ENDIF

externdef __imp_StrCmpNIW:PPROC
StrCmpNIW equ <__imp_StrCmpNIW>
  IFDEF __UNICODE__
    StrCmpNI equ <__imp_StrCmpNIW>
  ENDIF

externdef __imp_StrCmpNW:PPROC
StrCmpNW equ <__imp_StrCmpNW>
  IFDEF __UNICODE__
    StrCmpN equ <__imp_StrCmpNW>
  ENDIF

externdef __imp_StrCpyNA:PPROC
StrCpyNA equ <__imp_StrCpyNA>
  IFNDEF __UNICODE__
    StrCpyN equ <__imp_StrCpyNA>
  ENDIF

externdef __imp_StrCpyNW:PPROC
StrCpyNW equ <__imp_StrCpyNW>
  IFDEF __UNICODE__
    StrCpyN equ <__imp_StrCpyNW>
  ENDIF

externdef __imp_StrNCmpA:PPROC
StrNCmpA equ <__imp_StrNCmpA>
  IFNDEF __UNICODE__
    StrNCmp equ <__imp_StrNCmpA>
  ENDIF

externdef __imp_StrNCmpIA:PPROC
StrNCmpIA equ <__imp_StrNCmpIA>
  IFNDEF __UNICODE__
    StrNCmpI equ <__imp_StrNCmpIA>
  ENDIF

externdef __imp_StrNCmpIW:PPROC
StrNCmpIW equ <__imp_StrNCmpIW>
  IFDEF __UNICODE__
    StrNCmpI equ <__imp_StrNCmpIW>
  ENDIF

externdef __imp_StrNCmpW:PPROC
StrNCmpW equ <__imp_StrNCmpW>
  IFDEF __UNICODE__
    StrNCmp equ <__imp_StrNCmpW>
  ENDIF

externdef __imp_StrNCpyA:PPROC
StrNCpyA equ <__imp_StrNCpyA>
  IFNDEF __UNICODE__
    StrNCpy equ <__imp_StrNCpyA>
  ENDIF

externdef __imp_StrNCpyW:PPROC
StrNCpyW equ <__imp_StrNCpyW>
  IFDEF __UNICODE__
    StrNCpy equ <__imp_StrNCpyW>
  ENDIF

externdef __imp_StrRChrA:PPROC
StrRChrA equ <__imp_StrRChrA>
  IFNDEF __UNICODE__
    StrRChr equ <__imp_StrRChrA>
  ENDIF

externdef __imp_StrRChrIA:PPROC
StrRChrIA equ <__imp_StrRChrIA>
  IFNDEF __UNICODE__
    StrRChrI equ <__imp_StrRChrIA>
  ENDIF

externdef __imp_StrRChrIW:PPROC
StrRChrIW equ <__imp_StrRChrIW>
  IFDEF __UNICODE__
    StrRChrI equ <__imp_StrRChrIW>
  ENDIF

externdef __imp_StrRChrW:PPROC
StrRChrW equ <__imp_StrRChrW>
  IFDEF __UNICODE__
    StrRChr equ <__imp_StrRChrW>
  ENDIF

externdef __imp_StrRStrA:PPROC
StrRStrA equ <__imp_StrRStrA>
  IFNDEF __UNICODE__
    StrRStr equ <__imp_StrRStrA>
  ENDIF

externdef __imp_StrRStrIA:PPROC
StrRStrIA equ <__imp_StrRStrIA>
  IFNDEF __UNICODE__
    StrRStrI equ <__imp_StrRStrIA>
  ENDIF

externdef __imp_StrRStrIW:PPROC
StrRStrIW equ <__imp_StrRStrIW>
  IFDEF __UNICODE__
    StrRStrI equ <__imp_StrRStrIW>
  ENDIF

externdef __imp_StrRStrW:PPROC
StrRStrW equ <__imp_StrRStrW>
  IFDEF __UNICODE__
    StrRStr equ <__imp_StrRStrW>
  ENDIF

externdef __imp_StrStrA:PPROC
StrStrA equ <__imp_StrStrA>
  IFNDEF __UNICODE__
    StrStr equ <__imp_StrStrA>
  ENDIF

externdef __imp_StrStrIA:PPROC
StrStrIA equ <__imp_StrStrIA>
  IFNDEF __UNICODE__
    StrStrI equ <__imp_StrStrIA>
  ENDIF

externdef __imp_StrStrIW:PPROC
StrStrIW equ <__imp_StrStrIW>
  IFDEF __UNICODE__
    StrStrI equ <__imp_StrStrIW>
  ENDIF

externdef __imp_StrStrW:PPROC
StrStrW equ <__imp_StrStrW>
  IFDEF __UNICODE__
    StrStr equ <__imp_StrStrW>
  ENDIF

externdef __imp_WOWShellExecute:PPROC
WOWShellExecute equ <__imp_WOWShellExecute>

externdef __imp_Win32DeleteFile:PPROC
Win32DeleteFile equ <__imp_Win32DeleteFile>

externdef __imp_WriteCabinetState:PPROC
WriteCabinetState equ <__imp_WriteCabinetState>

externdef __imp_shell32_ordinal122:PPROC
shell32_ordinal122 equ <__imp_shell32_ordinal122>

externdef __imp_shell32_ordinal123:PPROC
shell32_ordinal123 equ <__imp_shell32_ordinal123>

externdef __imp_shell32_ordinal126:PPROC
shell32_ordinal126 equ <__imp_shell32_ordinal126>

externdef __imp_shell32_ordinal127:PPROC
shell32_ordinal127 equ <__imp_shell32_ordinal127>

externdef __imp_shell32_ordinal128:PPROC
shell32_ordinal128 equ <__imp_shell32_ordinal128>

externdef __imp_shell32_ordinal12:PPROC
shell32_ordinal12 equ <__imp_shell32_ordinal12>

externdef __imp_shell32_ordinal130:PPROC
shell32_ordinal130 equ <__imp_shell32_ordinal130>

externdef __imp_shell32_ordinal145:PPROC
shell32_ordinal145 equ <__imp_shell32_ordinal145>

externdef __imp_shell32_ordinal146:PPROC
shell32_ordinal146 equ <__imp_shell32_ordinal146>

externdef __imp_shell32_ordinal156:PPROC
shell32_ordinal156 equ <__imp_shell32_ordinal156>

externdef __imp_shell32_ordinal158:PPROC
shell32_ordinal158 equ <__imp_shell32_ordinal158>

externdef __imp_shell32_ordinal159:PPROC
shell32_ordinal159 equ <__imp_shell32_ordinal159>

externdef __imp_shell32_ordinal15:PPROC
shell32_ordinal15 equ <__imp_shell32_ordinal15>

externdef __imp_shell32_ordinal160:PPROC
shell32_ordinal160 equ <__imp_shell32_ordinal160>

externdef __imp_shell32_ordinal163:PPROC
shell32_ordinal163 equ <__imp_shell32_ordinal163>

externdef __imp_shell32_ordinal172:PPROC
shell32_ordinal172 equ <__imp_shell32_ordinal172>

externdef __imp_shell32_ordinal175:PPROC
shell32_ordinal175 equ <__imp_shell32_ordinal175>

externdef __imp_shell32_ordinal177:PPROC
shell32_ordinal177 equ <__imp_shell32_ordinal177>

externdef __imp_shell32_ordinal181:PPROC
shell32_ordinal181 equ <__imp_shell32_ordinal181>

externdef __imp_shell32_ordinal184:PPROC
shell32_ordinal184 equ <__imp_shell32_ordinal184>

externdef __imp_shell32_ordinal185:PPROC
shell32_ordinal185 equ <__imp_shell32_ordinal185>

externdef __imp_shell32_ordinal186:PPROC
shell32_ordinal186 equ <__imp_shell32_ordinal186>

externdef __imp_shell32_ordinal187:PPROC
shell32_ordinal187 equ <__imp_shell32_ordinal187>

externdef __imp_shell32_ordinal188:PPROC
shell32_ordinal188 equ <__imp_shell32_ordinal188>

externdef __imp_shell32_ordinal194:PPROC
shell32_ordinal194 equ <__imp_shell32_ordinal194>

externdef __imp_shell32_ordinal197:PPROC
shell32_ordinal197 equ <__imp_shell32_ordinal197>

externdef __imp_shell32_ordinal198:PPROC
shell32_ordinal198 equ <__imp_shell32_ordinal198>

externdef __imp_shell32_ordinal200:PPROC
shell32_ordinal200 equ <__imp_shell32_ordinal200>

externdef __imp_shell32_ordinal201:PPROC
shell32_ordinal201 equ <__imp_shell32_ordinal201>

externdef __imp_shell32_ordinal202:PPROC
shell32_ordinal202 equ <__imp_shell32_ordinal202>

externdef __imp_shell32_ordinal203:PPROC
shell32_ordinal203 equ <__imp_shell32_ordinal203>

externdef __imp_shell32_ordinal204:PPROC
shell32_ordinal204 equ <__imp_shell32_ordinal204>

externdef __imp_shell32_ordinal205:PPROC
shell32_ordinal205 equ <__imp_shell32_ordinal205>

externdef __imp_shell32_ordinal209:PPROC
shell32_ordinal209 equ <__imp_shell32_ordinal209>

externdef __imp_shell32_ordinal20:PPROC
shell32_ordinal20 equ <__imp_shell32_ordinal20>

externdef __imp_shell32_ordinal210:PPROC
shell32_ordinal210 equ <__imp_shell32_ordinal210>

externdef __imp_shell32_ordinal211:PPROC
shell32_ordinal211 equ <__imp_shell32_ordinal211>

externdef __imp_shell32_ordinal212:PPROC
shell32_ordinal212 equ <__imp_shell32_ordinal212>

externdef __imp_shell32_ordinal213:PPROC
shell32_ordinal213 equ <__imp_shell32_ordinal213>

externdef __imp_shell32_ordinal214:PPROC
shell32_ordinal214 equ <__imp_shell32_ordinal214>

externdef __imp_shell32_ordinal215:PPROC
shell32_ordinal215 equ <__imp_shell32_ordinal215>

externdef __imp_shell32_ordinal230:PPROC
shell32_ordinal230 equ <__imp_shell32_ordinal230>

externdef __imp_shell32_ordinal231:PPROC
shell32_ordinal231 equ <__imp_shell32_ordinal231>

externdef __imp_shell32_ordinal232:PPROC
shell32_ordinal232 equ <__imp_shell32_ordinal232>

externdef __imp_shell32_ordinal233:PPROC
shell32_ordinal233 equ <__imp_shell32_ordinal233>

externdef __imp_shell32_ordinal234:PPROC
shell32_ordinal234 equ <__imp_shell32_ordinal234>

externdef __imp_shell32_ordinal235:PPROC
shell32_ordinal235 equ <__imp_shell32_ordinal235>

externdef __imp_shell32_ordinal236:PPROC
shell32_ordinal236 equ <__imp_shell32_ordinal236>

externdef __imp_shell32_ordinal237:PPROC
shell32_ordinal237 equ <__imp_shell32_ordinal237>

externdef __imp_shell32_ordinal241:PPROC
shell32_ordinal241 equ <__imp_shell32_ordinal241>

externdef __imp_shell32_ordinal242:PPROC
shell32_ordinal242 equ <__imp_shell32_ordinal242>

externdef __imp_shell32_ordinal243:PPROC
shell32_ordinal243 equ <__imp_shell32_ordinal243>

externdef __imp_shell32_ordinal244:PPROC
shell32_ordinal244 equ <__imp_shell32_ordinal244>

externdef __imp_shell32_ordinal246:PPROC
shell32_ordinal246 equ <__imp_shell32_ordinal246>

externdef __imp_shell32_ordinal247:PPROC
shell32_ordinal247 equ <__imp_shell32_ordinal247>

externdef __imp_shell32_ordinal248:PPROC
shell32_ordinal248 equ <__imp_shell32_ordinal248>

externdef __imp_shell32_ordinal249:PPROC
shell32_ordinal249 equ <__imp_shell32_ordinal249>

externdef __imp_shell32_ordinal250:PPROC
shell32_ordinal250 equ <__imp_shell32_ordinal250>

externdef __imp_shell32_ordinal251:PPROC
shell32_ordinal251 equ <__imp_shell32_ordinal251>

externdef __imp_shell32_ordinal252:PPROC
shell32_ordinal252 equ <__imp_shell32_ordinal252>

externdef __imp_shell32_ordinal253:PPROC
shell32_ordinal253 equ <__imp_shell32_ordinal253>

externdef __imp_shell32_ordinal254:PPROC
shell32_ordinal254 equ <__imp_shell32_ordinal254>

externdef __imp_shell32_ordinal257:PPROC
shell32_ordinal257 equ <__imp_shell32_ordinal257>

externdef __imp_shell32_ordinal258:PPROC
shell32_ordinal258 equ <__imp_shell32_ordinal258>

externdef __imp_shell32_ordinal259:PPROC
shell32_ordinal259 equ <__imp_shell32_ordinal259>

externdef __imp_shell32_ordinal29:PPROC
shell32_ordinal29 equ <__imp_shell32_ordinal29>

externdef __imp_shell32_ordinal30:PPROC
shell32_ordinal30 equ <__imp_shell32_ordinal30>

externdef __imp_shell32_ordinal31:PPROC
shell32_ordinal31 equ <__imp_shell32_ordinal31>

externdef __imp_shell32_ordinal32:PPROC
shell32_ordinal32 equ <__imp_shell32_ordinal32>

externdef __imp_shell32_ordinal33:PPROC
shell32_ordinal33 equ <__imp_shell32_ordinal33>

externdef __imp_shell32_ordinal34:PPROC
shell32_ordinal34 equ <__imp_shell32_ordinal34>

externdef __imp_shell32_ordinal35:PPROC
shell32_ordinal35 equ <__imp_shell32_ordinal35>

externdef __imp_shell32_ordinal36:PPROC
shell32_ordinal36 equ <__imp_shell32_ordinal36>

externdef __imp_shell32_ordinal37:PPROC
shell32_ordinal37 equ <__imp_shell32_ordinal37>

externdef __imp_shell32_ordinal38:PPROC
shell32_ordinal38 equ <__imp_shell32_ordinal38>

externdef __imp_shell32_ordinal398:PPROC
shell32_ordinal398 equ <__imp_shell32_ordinal398>

externdef __imp_shell32_ordinal399:PPROC
shell32_ordinal399 equ <__imp_shell32_ordinal399>

externdef __imp_shell32_ordinal39:PPROC
shell32_ordinal39 equ <__imp_shell32_ordinal39>

externdef __imp_shell32_ordinal400:PPROC
shell32_ordinal400 equ <__imp_shell32_ordinal400>

externdef __imp_shell32_ordinal401:PPROC
shell32_ordinal401 equ <__imp_shell32_ordinal401>

externdef __imp_shell32_ordinal402:PPROC
shell32_ordinal402 equ <__imp_shell32_ordinal402>

externdef __imp_shell32_ordinal403:PPROC
shell32_ordinal403 equ <__imp_shell32_ordinal403>

externdef __imp_shell32_ordinal404:PPROC
shell32_ordinal404 equ <__imp_shell32_ordinal404>

externdef __imp_shell32_ordinal405:PPROC
shell32_ordinal405 equ <__imp_shell32_ordinal405>

externdef __imp_shell32_ordinal406:PPROC
shell32_ordinal406 equ <__imp_shell32_ordinal406>

externdef __imp_shell32_ordinal407:PPROC
shell32_ordinal407 equ <__imp_shell32_ordinal407>

externdef __imp_shell32_ordinal408:PPROC
shell32_ordinal408 equ <__imp_shell32_ordinal408>

externdef __imp_shell32_ordinal409:PPROC
shell32_ordinal409 equ <__imp_shell32_ordinal409>

externdef __imp_shell32_ordinal40:PPROC
shell32_ordinal40 equ <__imp_shell32_ordinal40>

externdef __imp_shell32_ordinal410:PPROC
shell32_ordinal410 equ <__imp_shell32_ordinal410>

externdef __imp_shell32_ordinal411:PPROC
shell32_ordinal411 equ <__imp_shell32_ordinal411>

externdef __imp_shell32_ordinal412:PPROC
shell32_ordinal412 equ <__imp_shell32_ordinal412>

externdef __imp_shell32_ordinal413:PPROC
shell32_ordinal413 equ <__imp_shell32_ordinal413>

externdef __imp_shell32_ordinal414:PPROC
shell32_ordinal414 equ <__imp_shell32_ordinal414>

externdef __imp_shell32_ordinal415:PPROC
shell32_ordinal415 equ <__imp_shell32_ordinal415>

externdef __imp_shell32_ordinal416:PPROC
shell32_ordinal416 equ <__imp_shell32_ordinal416>

externdef __imp_shell32_ordinal417:PPROC
shell32_ordinal417 equ <__imp_shell32_ordinal417>

externdef __imp_shell32_ordinal418:PPROC
shell32_ordinal418 equ <__imp_shell32_ordinal418>

externdef __imp_shell32_ordinal419:PPROC
shell32_ordinal419 equ <__imp_shell32_ordinal419>

externdef __imp_shell32_ordinal420:PPROC
shell32_ordinal420 equ <__imp_shell32_ordinal420>

externdef __imp_shell32_ordinal421:PPROC
shell32_ordinal421 equ <__imp_shell32_ordinal421>

externdef __imp_shell32_ordinal422:PPROC
shell32_ordinal422 equ <__imp_shell32_ordinal422>

externdef __imp_shell32_ordinal423:PPROC
shell32_ordinal423 equ <__imp_shell32_ordinal423>

externdef __imp_shell32_ordinal424:PPROC
shell32_ordinal424 equ <__imp_shell32_ordinal424>

externdef __imp_shell32_ordinal425:PPROC
shell32_ordinal425 equ <__imp_shell32_ordinal425>

externdef __imp_shell32_ordinal426:PPROC
shell32_ordinal426 equ <__imp_shell32_ordinal426>

externdef __imp_shell32_ordinal427:PPROC
shell32_ordinal427 equ <__imp_shell32_ordinal427>

externdef __imp_shell32_ordinal428:PPROC
shell32_ordinal428 equ <__imp_shell32_ordinal428>

externdef __imp_shell32_ordinal429:PPROC
shell32_ordinal429 equ <__imp_shell32_ordinal429>

externdef __imp_shell32_ordinal430:PPROC
shell32_ordinal430 equ <__imp_shell32_ordinal430>

externdef __imp_shell32_ordinal431:PPROC
shell32_ordinal431 equ <__imp_shell32_ordinal431>

externdef __imp_shell32_ordinal432:PPROC
shell32_ordinal432 equ <__imp_shell32_ordinal432>

externdef __imp_shell32_ordinal433:PPROC
shell32_ordinal433 equ <__imp_shell32_ordinal433>

externdef __imp_shell32_ordinal434:PPROC
shell32_ordinal434 equ <__imp_shell32_ordinal434>

externdef __imp_shell32_ordinal435:PPROC
shell32_ordinal435 equ <__imp_shell32_ordinal435>

externdef __imp_shell32_ordinal436:PPROC
shell32_ordinal436 equ <__imp_shell32_ordinal436>

externdef __imp_shell32_ordinal437:PPROC
shell32_ordinal437 equ <__imp_shell32_ordinal437>

externdef __imp_shell32_ordinal438:PPROC
shell32_ordinal438 equ <__imp_shell32_ordinal438>

externdef __imp_shell32_ordinal439:PPROC
shell32_ordinal439 equ <__imp_shell32_ordinal439>

externdef __imp_shell32_ordinal440:PPROC
shell32_ordinal440 equ <__imp_shell32_ordinal440>

externdef __imp_shell32_ordinal441:PPROC
shell32_ordinal441 equ <__imp_shell32_ordinal441>

externdef __imp_shell32_ordinal442:PPROC
shell32_ordinal442 equ <__imp_shell32_ordinal442>

externdef __imp_shell32_ordinal443:PPROC
shell32_ordinal443 equ <__imp_shell32_ordinal443>

externdef __imp_shell32_ordinal444:PPROC
shell32_ordinal444 equ <__imp_shell32_ordinal444>

externdef __imp_shell32_ordinal445:PPROC
shell32_ordinal445 equ <__imp_shell32_ordinal445>

externdef __imp_shell32_ordinal446:PPROC
shell32_ordinal446 equ <__imp_shell32_ordinal446>

externdef __imp_shell32_ordinal447:PPROC
shell32_ordinal447 equ <__imp_shell32_ordinal447>

externdef __imp_shell32_ordinal448:PPROC
shell32_ordinal448 equ <__imp_shell32_ordinal448>

externdef __imp_shell32_ordinal449:PPROC
shell32_ordinal449 equ <__imp_shell32_ordinal449>

externdef __imp_shell32_ordinal44:PPROC
shell32_ordinal44 equ <__imp_shell32_ordinal44>

externdef __imp_shell32_ordinal450:PPROC
shell32_ordinal450 equ <__imp_shell32_ordinal450>

externdef __imp_shell32_ordinal451:PPROC
shell32_ordinal451 equ <__imp_shell32_ordinal451>

externdef __imp_shell32_ordinal452:PPROC
shell32_ordinal452 equ <__imp_shell32_ordinal452>

externdef __imp_shell32_ordinal453:PPROC
shell32_ordinal453 equ <__imp_shell32_ordinal453>

externdef __imp_shell32_ordinal454:PPROC
shell32_ordinal454 equ <__imp_shell32_ordinal454>

externdef __imp_shell32_ordinal455:PPROC
shell32_ordinal455 equ <__imp_shell32_ordinal455>

externdef __imp_shell32_ordinal456:PPROC
shell32_ordinal456 equ <__imp_shell32_ordinal456>

externdef __imp_shell32_ordinal457:PPROC
shell32_ordinal457 equ <__imp_shell32_ordinal457>

externdef __imp_shell32_ordinal458:PPROC
shell32_ordinal458 equ <__imp_shell32_ordinal458>

externdef __imp_shell32_ordinal459:PPROC
shell32_ordinal459 equ <__imp_shell32_ordinal459>

externdef __imp_shell32_ordinal45:PPROC
shell32_ordinal45 equ <__imp_shell32_ordinal45>

externdef __imp_shell32_ordinal460:PPROC
shell32_ordinal460 equ <__imp_shell32_ordinal460>

externdef __imp_shell32_ordinal461:PPROC
shell32_ordinal461 equ <__imp_shell32_ordinal461>

externdef __imp_shell32_ordinal462:PPROC
shell32_ordinal462 equ <__imp_shell32_ordinal462>

externdef __imp_shell32_ordinal463:PPROC
shell32_ordinal463 equ <__imp_shell32_ordinal463>

externdef __imp_shell32_ordinal464:PPROC
shell32_ordinal464 equ <__imp_shell32_ordinal464>

externdef __imp_shell32_ordinal465:PPROC
shell32_ordinal465 equ <__imp_shell32_ordinal465>

externdef __imp_shell32_ordinal466:PPROC
shell32_ordinal466 equ <__imp_shell32_ordinal466>

externdef __imp_shell32_ordinal467:PPROC
shell32_ordinal467 equ <__imp_shell32_ordinal467>

externdef __imp_shell32_ordinal468:PPROC
shell32_ordinal468 equ <__imp_shell32_ordinal468>

externdef __imp_shell32_ordinal469:PPROC
shell32_ordinal469 equ <__imp_shell32_ordinal469>

externdef __imp_shell32_ordinal46:PPROC
shell32_ordinal46 equ <__imp_shell32_ordinal46>

externdef __imp_shell32_ordinal470:PPROC
shell32_ordinal470 equ <__imp_shell32_ordinal470>

externdef __imp_shell32_ordinal471:PPROC
shell32_ordinal471 equ <__imp_shell32_ordinal471>

externdef __imp_shell32_ordinal472:PPROC
shell32_ordinal472 equ <__imp_shell32_ordinal472>

externdef __imp_shell32_ordinal473:PPROC
shell32_ordinal473 equ <__imp_shell32_ordinal473>

externdef __imp_shell32_ordinal474:PPROC
shell32_ordinal474 equ <__imp_shell32_ordinal474>

externdef __imp_shell32_ordinal475:PPROC
shell32_ordinal475 equ <__imp_shell32_ordinal475>

externdef __imp_shell32_ordinal476:PPROC
shell32_ordinal476 equ <__imp_shell32_ordinal476>

externdef __imp_shell32_ordinal477:PPROC
shell32_ordinal477 equ <__imp_shell32_ordinal477>

externdef __imp_shell32_ordinal478:PPROC
shell32_ordinal478 equ <__imp_shell32_ordinal478>

externdef __imp_shell32_ordinal479:PPROC
shell32_ordinal479 equ <__imp_shell32_ordinal479>

externdef __imp_shell32_ordinal480:PPROC
shell32_ordinal480 equ <__imp_shell32_ordinal480>

externdef __imp_shell32_ordinal481:PPROC
shell32_ordinal481 equ <__imp_shell32_ordinal481>

externdef __imp_shell32_ordinal482:PPROC
shell32_ordinal482 equ <__imp_shell32_ordinal482>

externdef __imp_shell32_ordinal483:PPROC
shell32_ordinal483 equ <__imp_shell32_ordinal483>

externdef __imp_shell32_ordinal484:PPROC
shell32_ordinal484 equ <__imp_shell32_ordinal484>

externdef __imp_shell32_ordinal485:PPROC
shell32_ordinal485 equ <__imp_shell32_ordinal485>

externdef __imp_shell32_ordinal486:PPROC
shell32_ordinal486 equ <__imp_shell32_ordinal486>

externdef __imp_shell32_ordinal487:PPROC
shell32_ordinal487 equ <__imp_shell32_ordinal487>

externdef __imp_shell32_ordinal488:PPROC
shell32_ordinal488 equ <__imp_shell32_ordinal488>

externdef __imp_shell32_ordinal489:PPROC
shell32_ordinal489 equ <__imp_shell32_ordinal489>

externdef __imp_shell32_ordinal48:PPROC
shell32_ordinal48 equ <__imp_shell32_ordinal48>

externdef __imp_shell32_ordinal490:PPROC
shell32_ordinal490 equ <__imp_shell32_ordinal490>

externdef __imp_shell32_ordinal491:PPROC
shell32_ordinal491 equ <__imp_shell32_ordinal491>

externdef __imp_shell32_ordinal492:PPROC
shell32_ordinal492 equ <__imp_shell32_ordinal492>

externdef __imp_shell32_ordinal493:PPROC
shell32_ordinal493 equ <__imp_shell32_ordinal493>

externdef __imp_shell32_ordinal494:PPROC
shell32_ordinal494 equ <__imp_shell32_ordinal494>

externdef __imp_shell32_ordinal495:PPROC
shell32_ordinal495 equ <__imp_shell32_ordinal495>

externdef __imp_shell32_ordinal496:PPROC
shell32_ordinal496 equ <__imp_shell32_ordinal496>

externdef __imp_shell32_ordinal497:PPROC
shell32_ordinal497 equ <__imp_shell32_ordinal497>

externdef __imp_shell32_ordinal498:PPROC
shell32_ordinal498 equ <__imp_shell32_ordinal498>

externdef __imp_shell32_ordinal499:PPROC
shell32_ordinal499 equ <__imp_shell32_ordinal499>

externdef __imp_shell32_ordinal500:PPROC
shell32_ordinal500 equ <__imp_shell32_ordinal500>

externdef __imp_shell32_ordinal501:PPROC
shell32_ordinal501 equ <__imp_shell32_ordinal501>

externdef __imp_shell32_ordinal502:PPROC
shell32_ordinal502 equ <__imp_shell32_ordinal502>

externdef __imp_shell32_ordinal503:PPROC
shell32_ordinal503 equ <__imp_shell32_ordinal503>

externdef __imp_shell32_ordinal504:PPROC
shell32_ordinal504 equ <__imp_shell32_ordinal504>

externdef __imp_shell32_ordinal505:PPROC
shell32_ordinal505 equ <__imp_shell32_ordinal505>

externdef __imp_shell32_ordinal506:PPROC
shell32_ordinal506 equ <__imp_shell32_ordinal506>

externdef __imp_shell32_ordinal507:PPROC
shell32_ordinal507 equ <__imp_shell32_ordinal507>

externdef __imp_shell32_ordinal508:PPROC
shell32_ordinal508 equ <__imp_shell32_ordinal508>

externdef __imp_shell32_ordinal509:PPROC
shell32_ordinal509 equ <__imp_shell32_ordinal509>

externdef __imp_shell32_ordinal50:PPROC
shell32_ordinal50 equ <__imp_shell32_ordinal50>

externdef __imp_shell32_ordinal510:PPROC
shell32_ordinal510 equ <__imp_shell32_ordinal510>

externdef __imp_shell32_ordinal511:PPROC
shell32_ordinal511 equ <__imp_shell32_ordinal511>

externdef __imp_shell32_ordinal512:PPROC
shell32_ordinal512 equ <__imp_shell32_ordinal512>

externdef __imp_shell32_ordinal513:PPROC
shell32_ordinal513 equ <__imp_shell32_ordinal513>

externdef __imp_shell32_ordinal514:PPROC
shell32_ordinal514 equ <__imp_shell32_ordinal514>

externdef __imp_shell32_ordinal515:PPROC
shell32_ordinal515 equ <__imp_shell32_ordinal515>

externdef __imp_shell32_ordinal516:PPROC
shell32_ordinal516 equ <__imp_shell32_ordinal516>

externdef __imp_shell32_ordinal517:PPROC
shell32_ordinal517 equ <__imp_shell32_ordinal517>

externdef __imp_shell32_ordinal518:PPROC
shell32_ordinal518 equ <__imp_shell32_ordinal518>

externdef __imp_shell32_ordinal519:PPROC
shell32_ordinal519 equ <__imp_shell32_ordinal519>

externdef __imp_shell32_ordinal525:PPROC
shell32_ordinal525 equ <__imp_shell32_ordinal525>

externdef __imp_shell32_ordinal527:PPROC
shell32_ordinal527 equ <__imp_shell32_ordinal527>

externdef __imp_shell32_ordinal528:PPROC
shell32_ordinal528 equ <__imp_shell32_ordinal528>

externdef __imp_shell32_ordinal529:PPROC
shell32_ordinal529 equ <__imp_shell32_ordinal529>

externdef __imp_shell32_ordinal52:PPROC
shell32_ordinal52 equ <__imp_shell32_ordinal52>

externdef __imp_shell32_ordinal530:PPROC
shell32_ordinal530 equ <__imp_shell32_ordinal530>

externdef __imp_shell32_ordinal531:PPROC
shell32_ordinal531 equ <__imp_shell32_ordinal531>

externdef __imp_shell32_ordinal532:PPROC
shell32_ordinal532 equ <__imp_shell32_ordinal532>

externdef __imp_shell32_ordinal533:PPROC
shell32_ordinal533 equ <__imp_shell32_ordinal533>

externdef __imp_shell32_ordinal534:PPROC
shell32_ordinal534 equ <__imp_shell32_ordinal534>

externdef __imp_shell32_ordinal535:PPROC
shell32_ordinal535 equ <__imp_shell32_ordinal535>

externdef __imp_shell32_ordinal536:PPROC
shell32_ordinal536 equ <__imp_shell32_ordinal536>

externdef __imp_shell32_ordinal537:PPROC
shell32_ordinal537 equ <__imp_shell32_ordinal537>

externdef __imp_shell32_ordinal538:PPROC
shell32_ordinal538 equ <__imp_shell32_ordinal538>

externdef __imp_shell32_ordinal539:PPROC
shell32_ordinal539 equ <__imp_shell32_ordinal539>

externdef __imp_shell32_ordinal53:PPROC
shell32_ordinal53 equ <__imp_shell32_ordinal53>

externdef __imp_shell32_ordinal540:PPROC
shell32_ordinal540 equ <__imp_shell32_ordinal540>

externdef __imp_shell32_ordinal541:PPROC
shell32_ordinal541 equ <__imp_shell32_ordinal541>

externdef __imp_shell32_ordinal542:PPROC
shell32_ordinal542 equ <__imp_shell32_ordinal542>

externdef __imp_shell32_ordinal543:PPROC
shell32_ordinal543 equ <__imp_shell32_ordinal543>

externdef __imp_shell32_ordinal544:PPROC
shell32_ordinal544 equ <__imp_shell32_ordinal544>

externdef __imp_shell32_ordinal545:PPROC
shell32_ordinal545 equ <__imp_shell32_ordinal545>

externdef __imp_shell32_ordinal546:PPROC
shell32_ordinal546 equ <__imp_shell32_ordinal546>

externdef __imp_shell32_ordinal547:PPROC
shell32_ordinal547 equ <__imp_shell32_ordinal547>

externdef __imp_shell32_ordinal548:PPROC
shell32_ordinal548 equ <__imp_shell32_ordinal548>

externdef __imp_shell32_ordinal549:PPROC
shell32_ordinal549 equ <__imp_shell32_ordinal549>

externdef __imp_shell32_ordinal54:PPROC
shell32_ordinal54 equ <__imp_shell32_ordinal54>

externdef __imp_shell32_ordinal550:PPROC
shell32_ordinal550 equ <__imp_shell32_ordinal550>

externdef __imp_shell32_ordinal551:PPROC
shell32_ordinal551 equ <__imp_shell32_ordinal551>

externdef __imp_shell32_ordinal552:PPROC
shell32_ordinal552 equ <__imp_shell32_ordinal552>

externdef __imp_shell32_ordinal553:PPROC
shell32_ordinal553 equ <__imp_shell32_ordinal553>

externdef __imp_shell32_ordinal554:PPROC
shell32_ordinal554 equ <__imp_shell32_ordinal554>

externdef __imp_shell32_ordinal555:PPROC
shell32_ordinal555 equ <__imp_shell32_ordinal555>

externdef __imp_shell32_ordinal556:PPROC
shell32_ordinal556 equ <__imp_shell32_ordinal556>

externdef __imp_shell32_ordinal557:PPROC
shell32_ordinal557 equ <__imp_shell32_ordinal557>

externdef __imp_shell32_ordinal558:PPROC
shell32_ordinal558 equ <__imp_shell32_ordinal558>

externdef __imp_shell32_ordinal559:PPROC
shell32_ordinal559 equ <__imp_shell32_ordinal559>

externdef __imp_shell32_ordinal55:PPROC
shell32_ordinal55 equ <__imp_shell32_ordinal55>

externdef __imp_shell32_ordinal560:PPROC
shell32_ordinal560 equ <__imp_shell32_ordinal560>

externdef __imp_shell32_ordinal561:PPROC
shell32_ordinal561 equ <__imp_shell32_ordinal561>

externdef __imp_shell32_ordinal562:PPROC
shell32_ordinal562 equ <__imp_shell32_ordinal562>

externdef __imp_shell32_ordinal563:PPROC
shell32_ordinal563 equ <__imp_shell32_ordinal563>

externdef __imp_shell32_ordinal564:PPROC
shell32_ordinal564 equ <__imp_shell32_ordinal564>

externdef __imp_shell32_ordinal565:PPROC
shell32_ordinal565 equ <__imp_shell32_ordinal565>

externdef __imp_shell32_ordinal566:PPROC
shell32_ordinal566 equ <__imp_shell32_ordinal566>

externdef __imp_shell32_ordinal567:PPROC
shell32_ordinal567 equ <__imp_shell32_ordinal567>

externdef __imp_shell32_ordinal568:PPROC
shell32_ordinal568 equ <__imp_shell32_ordinal568>

externdef __imp_shell32_ordinal569:PPROC
shell32_ordinal569 equ <__imp_shell32_ordinal569>

externdef __imp_shell32_ordinal56:PPROC
shell32_ordinal56 equ <__imp_shell32_ordinal56>

externdef __imp_shell32_ordinal570:PPROC
shell32_ordinal570 equ <__imp_shell32_ordinal570>

externdef __imp_shell32_ordinal571:PPROC
shell32_ordinal571 equ <__imp_shell32_ordinal571>

externdef __imp_shell32_ordinal572:PPROC
shell32_ordinal572 equ <__imp_shell32_ordinal572>

externdef __imp_shell32_ordinal573:PPROC
shell32_ordinal573 equ <__imp_shell32_ordinal573>

externdef __imp_shell32_ordinal574:PPROC
shell32_ordinal574 equ <__imp_shell32_ordinal574>

externdef __imp_shell32_ordinal575:PPROC
shell32_ordinal575 equ <__imp_shell32_ordinal575>

externdef __imp_shell32_ordinal576:PPROC
shell32_ordinal576 equ <__imp_shell32_ordinal576>

externdef __imp_shell32_ordinal577:PPROC
shell32_ordinal577 equ <__imp_shell32_ordinal577>

externdef __imp_shell32_ordinal578:PPROC
shell32_ordinal578 equ <__imp_shell32_ordinal578>

externdef __imp_shell32_ordinal579:PPROC
shell32_ordinal579 equ <__imp_shell32_ordinal579>

externdef __imp_shell32_ordinal57:PPROC
shell32_ordinal57 equ <__imp_shell32_ordinal57>

externdef __imp_shell32_ordinal580:PPROC
shell32_ordinal580 equ <__imp_shell32_ordinal580>

externdef __imp_shell32_ordinal581:PPROC
shell32_ordinal581 equ <__imp_shell32_ordinal581>

externdef __imp_shell32_ordinal582:PPROC
shell32_ordinal582 equ <__imp_shell32_ordinal582>

externdef __imp_shell32_ordinal583:PPROC
shell32_ordinal583 equ <__imp_shell32_ordinal583>

externdef __imp_shell32_ordinal584:PPROC
shell32_ordinal584 equ <__imp_shell32_ordinal584>

externdef __imp_shell32_ordinal585:PPROC
shell32_ordinal585 equ <__imp_shell32_ordinal585>

externdef __imp_shell32_ordinal586:PPROC
shell32_ordinal586 equ <__imp_shell32_ordinal586>

externdef __imp_shell32_ordinal587:PPROC
shell32_ordinal587 equ <__imp_shell32_ordinal587>

externdef __imp_shell32_ordinal588:PPROC
shell32_ordinal588 equ <__imp_shell32_ordinal588>

externdef __imp_shell32_ordinal589:PPROC
shell32_ordinal589 equ <__imp_shell32_ordinal589>

externdef __imp_shell32_ordinal58:PPROC
shell32_ordinal58 equ <__imp_shell32_ordinal58>

externdef __imp_shell32_ordinal590:PPROC
shell32_ordinal590 equ <__imp_shell32_ordinal590>

externdef __imp_shell32_ordinal591:PPROC
shell32_ordinal591 equ <__imp_shell32_ordinal591>

externdef __imp_shell32_ordinal592:PPROC
shell32_ordinal592 equ <__imp_shell32_ordinal592>

externdef __imp_shell32_ordinal593:PPROC
shell32_ordinal593 equ <__imp_shell32_ordinal593>

externdef __imp_shell32_ordinal594:PPROC
shell32_ordinal594 equ <__imp_shell32_ordinal594>

externdef __imp_shell32_ordinal595:PPROC
shell32_ordinal595 equ <__imp_shell32_ordinal595>

externdef __imp_shell32_ordinal596:PPROC
shell32_ordinal596 equ <__imp_shell32_ordinal596>

externdef __imp_shell32_ordinal597:PPROC
shell32_ordinal597 equ <__imp_shell32_ordinal597>

externdef __imp_shell32_ordinal598:PPROC
shell32_ordinal598 equ <__imp_shell32_ordinal598>

externdef __imp_shell32_ordinal599:PPROC
shell32_ordinal599 equ <__imp_shell32_ordinal599>

externdef __imp_shell32_ordinal5:PPROC
shell32_ordinal5 equ <__imp_shell32_ordinal5>

externdef __imp_shell32_ordinal600:PPROC
shell32_ordinal600 equ <__imp_shell32_ordinal600>

externdef __imp_shell32_ordinal601:PPROC
shell32_ordinal601 equ <__imp_shell32_ordinal601>

externdef __imp_shell32_ordinal602:PPROC
shell32_ordinal602 equ <__imp_shell32_ordinal602>

externdef __imp_shell32_ordinal603:PPROC
shell32_ordinal603 equ <__imp_shell32_ordinal603>

externdef __imp_shell32_ordinal604:PPROC
shell32_ordinal604 equ <__imp_shell32_ordinal604>

externdef __imp_shell32_ordinal605:PPROC
shell32_ordinal605 equ <__imp_shell32_ordinal605>

externdef __imp_shell32_ordinal606:PPROC
shell32_ordinal606 equ <__imp_shell32_ordinal606>

externdef __imp_shell32_ordinal607:PPROC
shell32_ordinal607 equ <__imp_shell32_ordinal607>

externdef __imp_shell32_ordinal608:PPROC
shell32_ordinal608 equ <__imp_shell32_ordinal608>

externdef __imp_shell32_ordinal609:PPROC
shell32_ordinal609 equ <__imp_shell32_ordinal609>

externdef __imp_shell32_ordinal60:PPROC
shell32_ordinal60 equ <__imp_shell32_ordinal60>

externdef __imp_shell32_ordinal610:PPROC
shell32_ordinal610 equ <__imp_shell32_ordinal610>

externdef __imp_shell32_ordinal611:PPROC
shell32_ordinal611 equ <__imp_shell32_ordinal611>

externdef __imp_shell32_ordinal612:PPROC
shell32_ordinal612 equ <__imp_shell32_ordinal612>

externdef __imp_shell32_ordinal613:PPROC
shell32_ordinal613 equ <__imp_shell32_ordinal613>

externdef __imp_shell32_ordinal614:PPROC
shell32_ordinal614 equ <__imp_shell32_ordinal614>

externdef __imp_shell32_ordinal615:PPROC
shell32_ordinal615 equ <__imp_shell32_ordinal615>

externdef __imp_shell32_ordinal616:PPROC
shell32_ordinal616 equ <__imp_shell32_ordinal616>

externdef __imp_shell32_ordinal617:PPROC
shell32_ordinal617 equ <__imp_shell32_ordinal617>

externdef __imp_shell32_ordinal618:PPROC
shell32_ordinal618 equ <__imp_shell32_ordinal618>

externdef __imp_shell32_ordinal619:PPROC
shell32_ordinal619 equ <__imp_shell32_ordinal619>

externdef __imp_shell32_ordinal61:PPROC
shell32_ordinal61 equ <__imp_shell32_ordinal61>

externdef __imp_shell32_ordinal620:PPROC
shell32_ordinal620 equ <__imp_shell32_ordinal620>

externdef __imp_shell32_ordinal621:PPROC
shell32_ordinal621 equ <__imp_shell32_ordinal621>

externdef __imp_shell32_ordinal622:PPROC
shell32_ordinal622 equ <__imp_shell32_ordinal622>

externdef __imp_shell32_ordinal623:PPROC
shell32_ordinal623 equ <__imp_shell32_ordinal623>

externdef __imp_shell32_ordinal624:PPROC
shell32_ordinal624 equ <__imp_shell32_ordinal624>

externdef __imp_shell32_ordinal625:PPROC
shell32_ordinal625 equ <__imp_shell32_ordinal625>

externdef __imp_shell32_ordinal626:PPROC
shell32_ordinal626 equ <__imp_shell32_ordinal626>

externdef __imp_shell32_ordinal627:PPROC
shell32_ordinal627 equ <__imp_shell32_ordinal627>

externdef __imp_shell32_ordinal628:PPROC
shell32_ordinal628 equ <__imp_shell32_ordinal628>

externdef __imp_shell32_ordinal629:PPROC
shell32_ordinal629 equ <__imp_shell32_ordinal629>

externdef __imp_shell32_ordinal630:PPROC
shell32_ordinal630 equ <__imp_shell32_ordinal630>

externdef __imp_shell32_ordinal631:PPROC
shell32_ordinal631 equ <__imp_shell32_ordinal631>

externdef __imp_shell32_ordinal632:PPROC
shell32_ordinal632 equ <__imp_shell32_ordinal632>

externdef __imp_shell32_ordinal633:PPROC
shell32_ordinal633 equ <__imp_shell32_ordinal633>

externdef __imp_shell32_ordinal634:PPROC
shell32_ordinal634 equ <__imp_shell32_ordinal634>

externdef __imp_shell32_ordinal635:PPROC
shell32_ordinal635 equ <__imp_shell32_ordinal635>

externdef __imp_shell32_ordinal636:PPROC
shell32_ordinal636 equ <__imp_shell32_ordinal636>

externdef __imp_shell32_ordinal637:PPROC
shell32_ordinal637 equ <__imp_shell32_ordinal637>

externdef __imp_shell32_ordinal638:PPROC
shell32_ordinal638 equ <__imp_shell32_ordinal638>

externdef __imp_shell32_ordinal639:PPROC
shell32_ordinal639 equ <__imp_shell32_ordinal639>

externdef __imp_shell32_ordinal640:PPROC
shell32_ordinal640 equ <__imp_shell32_ordinal640>

externdef __imp_shell32_ordinal641:PPROC
shell32_ordinal641 equ <__imp_shell32_ordinal641>

externdef __imp_shell32_ordinal642:PPROC
shell32_ordinal642 equ <__imp_shell32_ordinal642>

externdef __imp_shell32_ordinal643:PPROC
shell32_ordinal643 equ <__imp_shell32_ordinal643>

externdef __imp_shell32_ordinal646:PPROC
shell32_ordinal646 equ <__imp_shell32_ordinal646>

externdef __imp_shell32_ordinal647:PPROC
shell32_ordinal647 equ <__imp_shell32_ordinal647>

externdef __imp_shell32_ordinal648:PPROC
shell32_ordinal648 equ <__imp_shell32_ordinal648>

externdef __imp_shell32_ordinal649:PPROC
shell32_ordinal649 equ <__imp_shell32_ordinal649>

externdef __imp_shell32_ordinal650:PPROC
shell32_ordinal650 equ <__imp_shell32_ordinal650>

externdef __imp_shell32_ordinal651:PPROC
shell32_ordinal651 equ <__imp_shell32_ordinal651>

externdef __imp_shell32_ordinal655:PPROC
shell32_ordinal655 equ <__imp_shell32_ordinal655>

externdef __imp_shell32_ordinal656:PPROC
shell32_ordinal656 equ <__imp_shell32_ordinal656>

externdef __imp_shell32_ordinal657:PPROC
shell32_ordinal657 equ <__imp_shell32_ordinal657>

externdef __imp_shell32_ordinal658:PPROC
shell32_ordinal658 equ <__imp_shell32_ordinal658>

externdef __imp_shell32_ordinal659:PPROC
shell32_ordinal659 equ <__imp_shell32_ordinal659>

externdef __imp_shell32_ordinal65:PPROC
shell32_ordinal65 equ <__imp_shell32_ordinal65>

externdef __imp_shell32_ordinal660:PPROC
shell32_ordinal660 equ <__imp_shell32_ordinal660>

externdef __imp_shell32_ordinal661:PPROC
shell32_ordinal661 equ <__imp_shell32_ordinal661>

externdef __imp_shell32_ordinal662:PPROC
shell32_ordinal662 equ <__imp_shell32_ordinal662>

externdef __imp_shell32_ordinal663:PPROC
shell32_ordinal663 equ <__imp_shell32_ordinal663>

externdef __imp_shell32_ordinal664:PPROC
shell32_ordinal664 equ <__imp_shell32_ordinal664>

externdef __imp_shell32_ordinal665:PPROC
shell32_ordinal665 equ <__imp_shell32_ordinal665>

externdef __imp_shell32_ordinal666:PPROC
shell32_ordinal666 equ <__imp_shell32_ordinal666>

externdef __imp_shell32_ordinal667:PPROC
shell32_ordinal667 equ <__imp_shell32_ordinal667>

externdef __imp_shell32_ordinal668:PPROC
shell32_ordinal668 equ <__imp_shell32_ordinal668>

externdef __imp_shell32_ordinal669:PPROC
shell32_ordinal669 equ <__imp_shell32_ordinal669>

externdef __imp_shell32_ordinal670:PPROC
shell32_ordinal670 equ <__imp_shell32_ordinal670>

externdef __imp_shell32_ordinal671:PPROC
shell32_ordinal671 equ <__imp_shell32_ordinal671>

externdef __imp_shell32_ordinal672:PPROC
shell32_ordinal672 equ <__imp_shell32_ordinal672>

externdef __imp_shell32_ordinal673:PPROC
shell32_ordinal673 equ <__imp_shell32_ordinal673>

externdef __imp_shell32_ordinal674:PPROC
shell32_ordinal674 equ <__imp_shell32_ordinal674>

externdef __imp_shell32_ordinal675:PPROC
shell32_ordinal675 equ <__imp_shell32_ordinal675>

externdef __imp_shell32_ordinal676:PPROC
shell32_ordinal676 equ <__imp_shell32_ordinal676>

externdef __imp_shell32_ordinal677:PPROC
shell32_ordinal677 equ <__imp_shell32_ordinal677>

externdef __imp_shell32_ordinal678:PPROC
shell32_ordinal678 equ <__imp_shell32_ordinal678>

externdef __imp_shell32_ordinal679:PPROC
shell32_ordinal679 equ <__imp_shell32_ordinal679>

externdef __imp_shell32_ordinal681:PPROC
shell32_ordinal681 equ <__imp_shell32_ordinal681>

externdef __imp_shell32_ordinal682:PPROC
shell32_ordinal682 equ <__imp_shell32_ordinal682>

externdef __imp_shell32_ordinal683:PPROC
shell32_ordinal683 equ <__imp_shell32_ordinal683>

externdef __imp_shell32_ordinal684:PPROC
shell32_ordinal684 equ <__imp_shell32_ordinal684>

externdef __imp_shell32_ordinal686:PPROC
shell32_ordinal686 equ <__imp_shell32_ordinal686>

externdef __imp_shell32_ordinal687:PPROC
shell32_ordinal687 equ <__imp_shell32_ordinal687>

externdef __imp_shell32_ordinal690:PPROC
shell32_ordinal690 equ <__imp_shell32_ordinal690>

externdef __imp_shell32_ordinal691:PPROC
shell32_ordinal691 equ <__imp_shell32_ordinal691>

externdef __imp_shell32_ordinal692:PPROC
shell32_ordinal692 equ <__imp_shell32_ordinal692>

externdef __imp_shell32_ordinal693:PPROC
shell32_ordinal693 equ <__imp_shell32_ordinal693>

externdef __imp_shell32_ordinal694:PPROC
shell32_ordinal694 equ <__imp_shell32_ordinal694>

externdef __imp_shell32_ordinal695:PPROC
shell32_ordinal695 equ <__imp_shell32_ordinal695>

externdef __imp_shell32_ordinal696:PPROC
shell32_ordinal696 equ <__imp_shell32_ordinal696>

externdef __imp_shell32_ordinal697:PPROC
shell32_ordinal697 equ <__imp_shell32_ordinal697>

externdef __imp_shell32_ordinal698:PPROC
shell32_ordinal698 equ <__imp_shell32_ordinal698>

externdef __imp_shell32_ordinal699:PPROC
shell32_ordinal699 equ <__imp_shell32_ordinal699>

externdef __imp_shell32_ordinal69:PPROC
shell32_ordinal69 equ <__imp_shell32_ordinal69>

externdef __imp_shell32_ordinal702:PPROC
shell32_ordinal702 equ <__imp_shell32_ordinal702>

externdef __imp_shell32_ordinal703:PPROC
shell32_ordinal703 equ <__imp_shell32_ordinal703>

externdef __imp_shell32_ordinal704:PPROC
shell32_ordinal704 equ <__imp_shell32_ordinal704>

externdef __imp_shell32_ordinal705:PPROC
shell32_ordinal705 equ <__imp_shell32_ordinal705>

externdef __imp_shell32_ordinal706:PPROC
shell32_ordinal706 equ <__imp_shell32_ordinal706>

externdef __imp_shell32_ordinal707:PPROC
shell32_ordinal707 equ <__imp_shell32_ordinal707>

externdef __imp_shell32_ordinal708:PPROC
shell32_ordinal708 equ <__imp_shell32_ordinal708>

externdef __imp_shell32_ordinal70:PPROC
shell32_ordinal70 equ <__imp_shell32_ordinal70>

externdef __imp_shell32_ordinal710:PPROC
shell32_ordinal710 equ <__imp_shell32_ordinal710>

externdef __imp_shell32_ordinal711:PPROC
shell32_ordinal711 equ <__imp_shell32_ordinal711>

externdef __imp_shell32_ordinal712:PPROC
shell32_ordinal712 equ <__imp_shell32_ordinal712>

externdef __imp_shell32_ordinal713:PPROC
shell32_ordinal713 equ <__imp_shell32_ordinal713>

externdef __imp_shell32_ordinal714:PPROC
shell32_ordinal714 equ <__imp_shell32_ordinal714>

externdef __imp_shell32_ordinal715:PPROC
shell32_ordinal715 equ <__imp_shell32_ordinal715>

externdef __imp_shell32_ordinal717:PPROC
shell32_ordinal717 equ <__imp_shell32_ordinal717>

externdef __imp_shell32_ordinal718:PPROC
shell32_ordinal718 equ <__imp_shell32_ordinal718>

externdef __imp_shell32_ordinal719:PPROC
shell32_ordinal719 equ <__imp_shell32_ordinal719>

externdef __imp_shell32_ordinal720:PPROC
shell32_ordinal720 equ <__imp_shell32_ordinal720>

externdef __imp_shell32_ordinal721:PPROC
shell32_ordinal721 equ <__imp_shell32_ordinal721>

externdef __imp_shell32_ordinal722:PPROC
shell32_ordinal722 equ <__imp_shell32_ordinal722>

externdef __imp_shell32_ordinal723:PPROC
shell32_ordinal723 equ <__imp_shell32_ordinal723>

externdef __imp_shell32_ordinal724:PPROC
shell32_ordinal724 equ <__imp_shell32_ordinal724>

externdef __imp_shell32_ordinal725:PPROC
shell32_ordinal725 equ <__imp_shell32_ordinal725>

externdef __imp_shell32_ordinal726:PPROC
shell32_ordinal726 equ <__imp_shell32_ordinal726>

externdef __imp_shell32_ordinal728:PPROC
shell32_ordinal728 equ <__imp_shell32_ordinal728>

externdef __imp_shell32_ordinal729:PPROC
shell32_ordinal729 equ <__imp_shell32_ordinal729>

externdef __imp_shell32_ordinal731:PPROC
shell32_ordinal731 equ <__imp_shell32_ordinal731>

externdef __imp_shell32_ordinal732:PPROC
shell32_ordinal732 equ <__imp_shell32_ordinal732>

externdef __imp_shell32_ordinal733:PPROC
shell32_ordinal733 equ <__imp_shell32_ordinal733>

externdef __imp_shell32_ordinal734:PPROC
shell32_ordinal734 equ <__imp_shell32_ordinal734>

externdef __imp_shell32_ordinal735:PPROC
shell32_ordinal735 equ <__imp_shell32_ordinal735>

externdef __imp_shell32_ordinal736:PPROC
shell32_ordinal736 equ <__imp_shell32_ordinal736>

externdef __imp_shell32_ordinal737:PPROC
shell32_ordinal737 equ <__imp_shell32_ordinal737>

externdef __imp_shell32_ordinal738:PPROC
shell32_ordinal738 equ <__imp_shell32_ordinal738>

externdef __imp_shell32_ordinal739:PPROC
shell32_ordinal739 equ <__imp_shell32_ordinal739>

externdef __imp_shell32_ordinal740:PPROC
shell32_ordinal740 equ <__imp_shell32_ordinal740>

externdef __imp_shell32_ordinal741:PPROC
shell32_ordinal741 equ <__imp_shell32_ordinal741>

externdef __imp_shell32_ordinal742:PPROC
shell32_ordinal742 equ <__imp_shell32_ordinal742>

externdef __imp_shell32_ordinal744:PPROC
shell32_ordinal744 equ <__imp_shell32_ordinal744>

externdef __imp_shell32_ordinal745:PPROC
shell32_ordinal745 equ <__imp_shell32_ordinal745>

externdef __imp_shell32_ordinal746:PPROC
shell32_ordinal746 equ <__imp_shell32_ordinal746>

externdef __imp_shell32_ordinal748:PPROC
shell32_ordinal748 equ <__imp_shell32_ordinal748>

externdef __imp_shell32_ordinal751:PPROC
shell32_ordinal751 equ <__imp_shell32_ordinal751>

externdef __imp_shell32_ordinal752:PPROC
shell32_ordinal752 equ <__imp_shell32_ordinal752>

externdef __imp_shell32_ordinal753:PPROC
shell32_ordinal753 equ <__imp_shell32_ordinal753>

externdef __imp_shell32_ordinal754:PPROC
shell32_ordinal754 equ <__imp_shell32_ordinal754>

externdef __imp_shell32_ordinal755:PPROC
shell32_ordinal755 equ <__imp_shell32_ordinal755>

externdef __imp_shell32_ordinal756:PPROC
shell32_ordinal756 equ <__imp_shell32_ordinal756>

externdef __imp_shell32_ordinal76:PPROC
shell32_ordinal76 equ <__imp_shell32_ordinal76>

externdef __imp_shell32_ordinal78:PPROC
shell32_ordinal78 equ <__imp_shell32_ordinal78>

externdef __imp_shell32_ordinal79:PPROC
shell32_ordinal79 equ <__imp_shell32_ordinal79>

externdef __imp_shell32_ordinal7:PPROC
shell32_ordinal7 equ <__imp_shell32_ordinal7>

externdef __imp_shell32_ordinal82:PPROC
shell32_ordinal82 equ <__imp_shell32_ordinal82>

externdef __imp_shell32_ordinal83:PPROC
shell32_ordinal83 equ <__imp_shell32_ordinal83>

externdef __imp_shell32_ordinal84:PPROC
shell32_ordinal84 equ <__imp_shell32_ordinal84>

externdef __imp_shell32_ordinal86:PPROC
shell32_ordinal86 equ <__imp_shell32_ordinal86>

externdef __imp_shell32_ordinal87:PPROC
shell32_ordinal87 equ <__imp_shell32_ordinal87>

externdef __imp_shell32_ordinal8:PPROC
shell32_ordinal8 equ <__imp_shell32_ordinal8>

externdef __imp_shell32_ordinal91:PPROC
shell32_ordinal91 equ <__imp_shell32_ordinal91>

externdef __imp_shell32_ordinal93:PPROC
shell32_ordinal93 equ <__imp_shell32_ordinal93>

externdef __imp_shell32_ordinal94:PPROC
shell32_ordinal94 equ <__imp_shell32_ordinal94>

externdef __imp_shell32_ordinal95:PPROC
shell32_ordinal95 equ <__imp_shell32_ordinal95>

externdef __imp_shell32_ordinal96:PPROC
shell32_ordinal96 equ <__imp_shell32_ordinal96>

externdef __imp_shell32_ordinal97:PPROC
shell32_ordinal97 equ <__imp_shell32_ordinal97>

externdef __imp_shell32_ordinal99:PPROC
shell32_ordinal99 equ <__imp_shell32_ordinal99>
