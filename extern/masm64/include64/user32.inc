externdef __imp_ActivateKeyboardLayout:PPROC
ActivateKeyboardLayout equ <__imp_ActivateKeyboardLayout>

externdef __imp_AdjustWindowRect:PPROC
AdjustWindowRect equ <__imp_AdjustWindowRect>

externdef __imp_AdjustWindowRectEx:PPROC
AdjustWindowRectEx equ <__imp_AdjustWindowRectEx>

externdef __imp_AlignRects:PPROC
AlignRects equ <__imp_AlignRects>

externdef __imp_AllowForegroundActivation:PPROC
AllowForegroundActivation equ <__imp_AllowForegroundActivation>

externdef __imp_AllowSetForegroundWindow:PPROC
AllowSetForegroundWindow equ <__imp_AllowSetForegroundWindow>

externdef __imp_AnimateWindow:PPROC
AnimateWindow equ <__imp_AnimateWindow>

externdef __imp_AnyPopup:PPROC
AnyPopup equ <__imp_AnyPopup>

externdef __imp_AppendMenuA:PPROC
AppendMenuA equ <__imp_AppendMenuA>
  IFNDEF __UNICODE__
    AppendMenu equ <__imp_AppendMenuA>
  ENDIF

externdef __imp_AppendMenuW:PPROC
AppendMenuW equ <__imp_AppendMenuW>
  IFDEF __UNICODE__
    AppendMenu equ <__imp_AppendMenuW>
  ENDIF

externdef __imp_ArrangeIconicWindows:PPROC
ArrangeIconicWindows equ <__imp_ArrangeIconicWindows>

externdef __imp_AttachThreadInput:PPROC
AttachThreadInput equ <__imp_AttachThreadInput>

externdef __imp_BeginDeferWindowPos:PPROC
BeginDeferWindowPos equ <__imp_BeginDeferWindowPos>

externdef __imp_BeginPaint:PPROC
BeginPaint equ <__imp_BeginPaint>

externdef __imp_BlockInput:PPROC
BlockInput equ <__imp_BlockInput>

externdef __imp_BringWindowToTop:PPROC
BringWindowToTop equ <__imp_BringWindowToTop>

externdef __imp_BroadcastSystemMessage:PPROC
BroadcastSystemMessage equ <__imp_BroadcastSystemMessage>

externdef __imp_BroadcastSystemMessageA:PPROC
BroadcastSystemMessageA equ <__imp_BroadcastSystemMessageA>
  IFNDEF __UNICODE__
    BroadcastSystemMessage equ <__imp_BroadcastSystemMessageA>
  ENDIF

externdef __imp_BroadcastSystemMessageExA:PPROC
BroadcastSystemMessageExA equ <__imp_BroadcastSystemMessageExA>
  IFNDEF __UNICODE__
    BroadcastSystemMessageEx equ <__imp_BroadcastSystemMessageExA>
  ENDIF

externdef __imp_BroadcastSystemMessageExW:PPROC
BroadcastSystemMessageExW equ <__imp_BroadcastSystemMessageExW>
  IFDEF __UNICODE__
    BroadcastSystemMessageEx equ <__imp_BroadcastSystemMessageExW>
  ENDIF

externdef __imp_BroadcastSystemMessageW:PPROC
BroadcastSystemMessageW equ <__imp_BroadcastSystemMessageW>
  IFDEF __UNICODE__
    BroadcastSystemMessage equ <__imp_BroadcastSystemMessageW>
  ENDIF

externdef __imp_BuildReasonArray:PPROC
BuildReasonArray equ <__imp_BuildReasonArray>

externdef __imp_CalcMenuBar:PPROC
CalcMenuBar equ <__imp_CalcMenuBar>

externdef __imp_CallMsgFilter:PPROC
CallMsgFilter equ <__imp_CallMsgFilter>

externdef __imp_CallMsgFilterA:PPROC
CallMsgFilterA equ <__imp_CallMsgFilterA>
  IFNDEF __UNICODE__
    CallMsgFilter equ <__imp_CallMsgFilterA>
  ENDIF

externdef __imp_CallMsgFilterW:PPROC
CallMsgFilterW equ <__imp_CallMsgFilterW>
  IFDEF __UNICODE__
    CallMsgFilter equ <__imp_CallMsgFilterW>
  ENDIF

externdef __imp_CallNextHookEx:PPROC
CallNextHookEx equ <__imp_CallNextHookEx>

externdef __imp_CallWindowProcA:PPROC
CallWindowProcA equ <__imp_CallWindowProcA>
  IFNDEF __UNICODE__
    CallWindowProc equ <__imp_CallWindowProcA>
  ENDIF

externdef __imp_CallWindowProcW:PPROC
CallWindowProcW equ <__imp_CallWindowProcW>
  IFDEF __UNICODE__
    CallWindowProc equ <__imp_CallWindowProcW>
  ENDIF

externdef __imp_CascadeChildWindows:PPROC
CascadeChildWindows equ <__imp_CascadeChildWindows>

externdef __imp_CascadeWindows:PPROC
CascadeWindows equ <__imp_CascadeWindows>

externdef __imp_ChangeClipboardChain:PPROC
ChangeClipboardChain equ <__imp_ChangeClipboardChain>

externdef __imp_ChangeDisplaySettingsA:PPROC
ChangeDisplaySettingsA equ <__imp_ChangeDisplaySettingsA>
  IFNDEF __UNICODE__
    ChangeDisplaySettings equ <__imp_ChangeDisplaySettingsA>
  ENDIF

externdef __imp_ChangeDisplaySettingsExA:PPROC
ChangeDisplaySettingsExA equ <__imp_ChangeDisplaySettingsExA>
  IFNDEF __UNICODE__
    ChangeDisplaySettingsEx equ <__imp_ChangeDisplaySettingsExA>
  ENDIF

externdef __imp_ChangeDisplaySettingsExW:PPROC
ChangeDisplaySettingsExW equ <__imp_ChangeDisplaySettingsExW>
  IFDEF __UNICODE__
    ChangeDisplaySettingsEx equ <__imp_ChangeDisplaySettingsExW>
  ENDIF

externdef __imp_ChangeDisplaySettingsW:PPROC
ChangeDisplaySettingsW equ <__imp_ChangeDisplaySettingsW>
  IFDEF __UNICODE__
    ChangeDisplaySettings equ <__imp_ChangeDisplaySettingsW>
  ENDIF

externdef __imp_ChangeMenuA:PPROC
ChangeMenuA equ <__imp_ChangeMenuA>
  IFNDEF __UNICODE__
    ChangeMenu equ <__imp_ChangeMenuA>
  ENDIF

externdef __imp_ChangeMenuW:PPROC
ChangeMenuW equ <__imp_ChangeMenuW>
  IFDEF __UNICODE__
    ChangeMenu equ <__imp_ChangeMenuW>
  ENDIF

externdef __imp_CharLowerA:PPROC
CharLowerA equ <__imp_CharLowerA>
  IFNDEF __UNICODE__
    CharLower equ <__imp_CharLowerA>
  ENDIF

externdef __imp_CharLowerBuffA:PPROC
CharLowerBuffA equ <__imp_CharLowerBuffA>
  IFNDEF __UNICODE__
    CharLowerBuff equ <__imp_CharLowerBuffA>
  ENDIF

externdef __imp_CharLowerBuffW:PPROC
CharLowerBuffW equ <__imp_CharLowerBuffW>
  IFDEF __UNICODE__
    CharLowerBuff equ <__imp_CharLowerBuffW>
  ENDIF

externdef __imp_CharLowerW:PPROC
CharLowerW equ <__imp_CharLowerW>
  IFDEF __UNICODE__
    CharLower equ <__imp_CharLowerW>
  ENDIF

externdef __imp_CharNextA:PPROC
CharNextA equ <__imp_CharNextA>
  IFNDEF __UNICODE__
    CharNext equ <__imp_CharNextA>
  ENDIF

externdef __imp_CharNextExA:PPROC
CharNextExA equ <__imp_CharNextExA>
  IFNDEF __UNICODE__
    CharNextEx equ <__imp_CharNextExA>
  ENDIF

externdef __imp_CharNextW:PPROC
CharNextW equ <__imp_CharNextW>
  IFDEF __UNICODE__
    CharNext equ <__imp_CharNextW>
  ENDIF

externdef __imp_CharPrevA:PPROC
CharPrevA equ <__imp_CharPrevA>
  IFNDEF __UNICODE__
    CharPrev equ <__imp_CharPrevA>
  ENDIF

externdef __imp_CharPrevExA:PPROC
CharPrevExA equ <__imp_CharPrevExA>
  IFNDEF __UNICODE__
    CharPrevEx equ <__imp_CharPrevExA>
  ENDIF

externdef __imp_CharPrevW:PPROC
CharPrevW equ <__imp_CharPrevW>
  IFDEF __UNICODE__
    CharPrev equ <__imp_CharPrevW>
  ENDIF

externdef __imp_CharToOemA:PPROC
CharToOemA equ <__imp_CharToOemA>
  IFNDEF __UNICODE__
    CharToOem equ <__imp_CharToOemA>
  ENDIF

externdef __imp_CharToOemBuffA:PPROC
CharToOemBuffA equ <__imp_CharToOemBuffA>
  IFNDEF __UNICODE__
    CharToOemBuff equ <__imp_CharToOemBuffA>
  ENDIF

externdef __imp_CharToOemBuffW:PPROC
CharToOemBuffW equ <__imp_CharToOemBuffW>
  IFDEF __UNICODE__
    CharToOemBuff equ <__imp_CharToOemBuffW>
  ENDIF

externdef __imp_CharToOemW:PPROC
CharToOemW equ <__imp_CharToOemW>
  IFDEF __UNICODE__
    CharToOem equ <__imp_CharToOemW>
  ENDIF

externdef __imp_CharUpperA:PPROC
CharUpperA equ <__imp_CharUpperA>
  IFNDEF __UNICODE__
    CharUpper equ <__imp_CharUpperA>
  ENDIF

externdef __imp_CharUpperBuffA:PPROC
CharUpperBuffA equ <__imp_CharUpperBuffA>
  IFNDEF __UNICODE__
    CharUpperBuff equ <__imp_CharUpperBuffA>
  ENDIF

externdef __imp_CharUpperBuffW:PPROC
CharUpperBuffW equ <__imp_CharUpperBuffW>
  IFDEF __UNICODE__
    CharUpperBuff equ <__imp_CharUpperBuffW>
  ENDIF

externdef __imp_CharUpperW:PPROC
CharUpperW equ <__imp_CharUpperW>
  IFDEF __UNICODE__
    CharUpper equ <__imp_CharUpperW>
  ENDIF

externdef __imp_CheckDlgButton:PPROC
CheckDlgButton equ <__imp_CheckDlgButton>

externdef __imp_CheckMenuItem:PPROC
CheckMenuItem equ <__imp_CheckMenuItem>

externdef __imp_CheckMenuRadioItem:PPROC
CheckMenuRadioItem equ <__imp_CheckMenuRadioItem>

externdef __imp_CheckRadioButton:PPROC
CheckRadioButton equ <__imp_CheckRadioButton>

externdef __imp_ChildWindowFromPoint:PPROC
ChildWindowFromPoint equ <__imp_ChildWindowFromPoint>

externdef __imp_ChildWindowFromPointEx:PPROC
ChildWindowFromPointEx equ <__imp_ChildWindowFromPointEx>

externdef __imp_CliImmSetHotKey:PPROC
CliImmSetHotKey equ <__imp_CliImmSetHotKey>

externdef __imp_ClientThreadSetup:PPROC
ClientThreadSetup equ <__imp_ClientThreadSetup>

externdef __imp_ClientToScreen:PPROC
ClientToScreen equ <__imp_ClientToScreen>

externdef __imp_ClipCursor:PPROC
ClipCursor equ <__imp_ClipCursor>

externdef __imp_CloseClipboard:PPROC
CloseClipboard equ <__imp_CloseClipboard>

externdef __imp_CloseDesktop:PPROC
CloseDesktop equ <__imp_CloseDesktop>

externdef __imp_CloseWindow:PPROC
CloseWindow equ <__imp_CloseWindow>

externdef __imp_CloseWindowStation:PPROC
CloseWindowStation equ <__imp_CloseWindowStation>

externdef __imp_CopyAcceleratorTableA:PPROC
CopyAcceleratorTableA equ <__imp_CopyAcceleratorTableA>
  IFNDEF __UNICODE__
    CopyAcceleratorTable equ <__imp_CopyAcceleratorTableA>
  ENDIF

externdef __imp_CopyAcceleratorTableW:PPROC
CopyAcceleratorTableW equ <__imp_CopyAcceleratorTableW>
  IFDEF __UNICODE__
    CopyAcceleratorTable equ <__imp_CopyAcceleratorTableW>
  ENDIF

externdef __imp_CopyIcon:PPROC
CopyIcon equ <__imp_CopyIcon>

externdef __imp_CopyImage:PPROC
CopyImage equ <__imp_CopyImage>

externdef __imp_CopyRect:PPROC
CopyRect equ <__imp_CopyRect>

externdef __imp_CountClipboardFormats:PPROC
CountClipboardFormats equ <__imp_CountClipboardFormats>

externdef __imp_CreateAcceleratorTableA:PPROC
CreateAcceleratorTableA equ <__imp_CreateAcceleratorTableA>
  IFNDEF __UNICODE__
    CreateAcceleratorTable equ <__imp_CreateAcceleratorTableA>
  ENDIF

externdef __imp_CreateAcceleratorTableW:PPROC
CreateAcceleratorTableW equ <__imp_CreateAcceleratorTableW>
  IFDEF __UNICODE__
    CreateAcceleratorTable equ <__imp_CreateAcceleratorTableW>
  ENDIF

externdef __imp_CreateCaret:PPROC
CreateCaret equ <__imp_CreateCaret>

externdef __imp_CreateCursor:PPROC
CreateCursor equ <__imp_CreateCursor>

externdef __imp_CreateDesktopA:PPROC
CreateDesktopA equ <__imp_CreateDesktopA>
  IFNDEF __UNICODE__
    CreateDesktop equ <__imp_CreateDesktopA>
  ENDIF

externdef __imp_CreateDesktopW:PPROC
CreateDesktopW equ <__imp_CreateDesktopW>
  IFDEF __UNICODE__
    CreateDesktop equ <__imp_CreateDesktopW>
  ENDIF

externdef __imp_CreateDialogIndirectParamA:PPROC
CreateDialogIndirectParamA equ <__imp_CreateDialogIndirectParamA>
  IFNDEF __UNICODE__
    CreateDialogIndirectParam equ <__imp_CreateDialogIndirectParamA>
  ENDIF

externdef __imp_CreateDialogIndirectParamAorW:PPROC
CreateDialogIndirectParamAorW equ <__imp_CreateDialogIndirectParamAorW>
  IFDEF __UNICODE__
    CreateDialogIndirectParamAor equ <__imp_CreateDialogIndirectParamAorW>
  ENDIF

externdef __imp_CreateDialogIndirectParamW:PPROC
CreateDialogIndirectParamW equ <__imp_CreateDialogIndirectParamW>
  IFDEF __UNICODE__
    CreateDialogIndirectParam equ <__imp_CreateDialogIndirectParamW>
  ENDIF

externdef __imp_CreateDialogParamA:PPROC
CreateDialogParamA equ <__imp_CreateDialogParamA>
  IFNDEF __UNICODE__
    CreateDialogParam equ <__imp_CreateDialogParamA>
  ENDIF

externdef __imp_CreateDialogParamW:PPROC
CreateDialogParamW equ <__imp_CreateDialogParamW>
  IFDEF __UNICODE__
    CreateDialogParam equ <__imp_CreateDialogParamW>
  ENDIF

externdef __imp_CreateIcon:PPROC
CreateIcon equ <__imp_CreateIcon>

externdef __imp_CreateIconFromResource:PPROC
CreateIconFromResource equ <__imp_CreateIconFromResource>

externdef __imp_CreateIconFromResourceEx:PPROC
CreateIconFromResourceEx equ <__imp_CreateIconFromResourceEx>

externdef __imp_CreateIconIndirect:PPROC
CreateIconIndirect equ <__imp_CreateIconIndirect>

externdef __imp_CreateMDIWindowA:PPROC
CreateMDIWindowA equ <__imp_CreateMDIWindowA>
  IFNDEF __UNICODE__
    CreateMDIWindow equ <__imp_CreateMDIWindowA>
  ENDIF

externdef __imp_CreateMDIWindowW:PPROC
CreateMDIWindowW equ <__imp_CreateMDIWindowW>
  IFDEF __UNICODE__
    CreateMDIWindow equ <__imp_CreateMDIWindowW>
  ENDIF

externdef __imp_CreateMenu:PPROC
CreateMenu equ <__imp_CreateMenu>

externdef __imp_CreatePopupMenu:PPROC
CreatePopupMenu equ <__imp_CreatePopupMenu>

externdef __imp_CreateSystemThreads:PPROC
CreateSystemThreads equ <__imp_CreateSystemThreads>

externdef __imp_CreateWindowExA:PPROC
CreateWindowExA equ <__imp_CreateWindowExA>
  IFNDEF __UNICODE__
    CreateWindowEx equ <__imp_CreateWindowExA>
  ENDIF

externdef __imp_CreateWindowExW:PPROC
CreateWindowExW equ <__imp_CreateWindowExW>
  IFDEF __UNICODE__
    CreateWindowEx equ <__imp_CreateWindowExW>
  ENDIF

externdef __imp_CreateWindowStationA:PPROC
CreateWindowStationA equ <__imp_CreateWindowStationA>
  IFNDEF __UNICODE__
    CreateWindowStation equ <__imp_CreateWindowStationA>
  ENDIF

externdef __imp_CreateWindowStationW:PPROC
CreateWindowStationW equ <__imp_CreateWindowStationW>
  IFDEF __UNICODE__
    CreateWindowStation equ <__imp_CreateWindowStationW>
  ENDIF

externdef __imp_CsrBroadcastSystemMessageExW:PPROC
CsrBroadcastSystemMessageExW equ <__imp_CsrBroadcastSystemMessageExW>
  IFDEF __UNICODE__
    CsrBroadcastSystemMessageEx equ <__imp_CsrBroadcastSystemMessageExW>
  ENDIF

externdef __imp_CtxInitUser32:PPROC
CtxInitUser32 equ <__imp_CtxInitUser32>

externdef __imp_DdeAbandonTransaction:PPROC
DdeAbandonTransaction equ <__imp_DdeAbandonTransaction>

externdef __imp_DdeAccessData:PPROC
DdeAccessData equ <__imp_DdeAccessData>

externdef __imp_DdeAddData:PPROC
DdeAddData equ <__imp_DdeAddData>

externdef __imp_DdeClientTransaction:PPROC
DdeClientTransaction equ <__imp_DdeClientTransaction>

externdef __imp_DdeCmpStringHandles:PPROC
DdeCmpStringHandles equ <__imp_DdeCmpStringHandles>

externdef __imp_DdeConnect:PPROC
DdeConnect equ <__imp_DdeConnect>

externdef __imp_DdeConnectList:PPROC
DdeConnectList equ <__imp_DdeConnectList>

externdef __imp_DdeCreateDataHandle:PPROC
DdeCreateDataHandle equ <__imp_DdeCreateDataHandle>

externdef __imp_DdeCreateStringHandleA:PPROC
DdeCreateStringHandleA equ <__imp_DdeCreateStringHandleA>
  IFNDEF __UNICODE__
    DdeCreateStringHandle equ <__imp_DdeCreateStringHandleA>
  ENDIF

externdef __imp_DdeCreateStringHandleW:PPROC
DdeCreateStringHandleW equ <__imp_DdeCreateStringHandleW>
  IFDEF __UNICODE__
    DdeCreateStringHandle equ <__imp_DdeCreateStringHandleW>
  ENDIF

externdef __imp_DdeDisconnect:PPROC
DdeDisconnect equ <__imp_DdeDisconnect>

externdef __imp_DdeDisconnectList:PPROC
DdeDisconnectList equ <__imp_DdeDisconnectList>

externdef __imp_DdeEnableCallback:PPROC
DdeEnableCallback equ <__imp_DdeEnableCallback>

externdef __imp_DdeFreeDataHandle:PPROC
DdeFreeDataHandle equ <__imp_DdeFreeDataHandle>

externdef __imp_DdeFreeStringHandle:PPROC
DdeFreeStringHandle equ <__imp_DdeFreeStringHandle>

externdef __imp_DdeGetData:PPROC
DdeGetData equ <__imp_DdeGetData>

externdef __imp_DdeGetLastError:PPROC
DdeGetLastError equ <__imp_DdeGetLastError>

externdef __imp_DdeGetQualityOfService:PPROC
DdeGetQualityOfService equ <__imp_DdeGetQualityOfService>

externdef __imp_DdeImpersonateClient:PPROC
DdeImpersonateClient equ <__imp_DdeImpersonateClient>

externdef __imp_DdeInitializeA:PPROC
DdeInitializeA equ <__imp_DdeInitializeA>
  IFNDEF __UNICODE__
    DdeInitialize equ <__imp_DdeInitializeA>
  ENDIF

externdef __imp_DdeInitializeW:PPROC
DdeInitializeW equ <__imp_DdeInitializeW>
  IFDEF __UNICODE__
    DdeInitialize equ <__imp_DdeInitializeW>
  ENDIF

externdef __imp_DdeKeepStringHandle:PPROC
DdeKeepStringHandle equ <__imp_DdeKeepStringHandle>

externdef __imp_DdeNameService:PPROC
DdeNameService equ <__imp_DdeNameService>

externdef __imp_DdePostAdvise:PPROC
DdePostAdvise equ <__imp_DdePostAdvise>

externdef __imp_DdeQueryConvInfo:PPROC
DdeQueryConvInfo equ <__imp_DdeQueryConvInfo>

externdef __imp_DdeQueryNextServer:PPROC
DdeQueryNextServer equ <__imp_DdeQueryNextServer>

externdef __imp_DdeQueryStringA:PPROC
DdeQueryStringA equ <__imp_DdeQueryStringA>
  IFNDEF __UNICODE__
    DdeQueryString equ <__imp_DdeQueryStringA>
  ENDIF

externdef __imp_DdeQueryStringW:PPROC
DdeQueryStringW equ <__imp_DdeQueryStringW>
  IFDEF __UNICODE__
    DdeQueryString equ <__imp_DdeQueryStringW>
  ENDIF

externdef __imp_DdeReconnect:PPROC
DdeReconnect equ <__imp_DdeReconnect>

externdef __imp_DdeSetQualityOfService:PPROC
DdeSetQualityOfService equ <__imp_DdeSetQualityOfService>

externdef __imp_DdeSetUserHandle:PPROC
DdeSetUserHandle equ <__imp_DdeSetUserHandle>

externdef __imp_DdeUnaccessData:PPROC
DdeUnaccessData equ <__imp_DdeUnaccessData>

externdef __imp_DdeUninitialize:PPROC
DdeUninitialize equ <__imp_DdeUninitialize>

externdef __imp_DefDlgProcA:PPROC
DefDlgProcA equ <__imp_DefDlgProcA>
  IFNDEF __UNICODE__
    DefDlgProc equ <__imp_DefDlgProcA>
  ENDIF

externdef __imp_DefDlgProcW:PPROC
DefDlgProcW equ <__imp_DefDlgProcW>
  IFDEF __UNICODE__
    DefDlgProc equ <__imp_DefDlgProcW>
  ENDIF

externdef __imp_DefFrameProcA:PPROC
DefFrameProcA equ <__imp_DefFrameProcA>
  IFNDEF __UNICODE__
    DefFrameProc equ <__imp_DefFrameProcA>
  ENDIF

externdef __imp_DefFrameProcW:PPROC
DefFrameProcW equ <__imp_DefFrameProcW>
  IFDEF __UNICODE__
    DefFrameProc equ <__imp_DefFrameProcW>
  ENDIF

externdef __imp_DefMDIChildProcA:PPROC
DefMDIChildProcA equ <__imp_DefMDIChildProcA>
  IFNDEF __UNICODE__
    DefMDIChildProc equ <__imp_DefMDIChildProcA>
  ENDIF

externdef __imp_DefMDIChildProcW:PPROC
DefMDIChildProcW equ <__imp_DefMDIChildProcW>
  IFDEF __UNICODE__
    DefMDIChildProc equ <__imp_DefMDIChildProcW>
  ENDIF

externdef __imp_DefRawInputProc:PPROC
DefRawInputProc equ <__imp_DefRawInputProc>

externdef __imp_DefWindowProcA:PPROC
DefWindowProcA equ <__imp_DefWindowProcA>
  IFNDEF __UNICODE__
    DefWindowProc equ <__imp_DefWindowProcA>
  ENDIF

externdef __imp_DefWindowProcW:PPROC
DefWindowProcW equ <__imp_DefWindowProcW>
  IFDEF __UNICODE__
    DefWindowProc equ <__imp_DefWindowProcW>
  ENDIF

externdef __imp_DeferWindowPos:PPROC
DeferWindowPos equ <__imp_DeferWindowPos>

externdef __imp_DeleteMenu:PPROC
DeleteMenu equ <__imp_DeleteMenu>

externdef __imp_DeregisterShellHookWindow:PPROC
DeregisterShellHookWindow equ <__imp_DeregisterShellHookWindow>

externdef __imp_DestroyAcceleratorTable:PPROC
DestroyAcceleratorTable equ <__imp_DestroyAcceleratorTable>

externdef __imp_DestroyCaret:PPROC
DestroyCaret equ <__imp_DestroyCaret>

externdef __imp_DestroyCursor:PPROC
DestroyCursor equ <__imp_DestroyCursor>

externdef __imp_DestroyIcon:PPROC
DestroyIcon equ <__imp_DestroyIcon>

externdef __imp_DestroyMenu:PPROC
DestroyMenu equ <__imp_DestroyMenu>

externdef __imp_DestroyReasons:PPROC
DestroyReasons equ <__imp_DestroyReasons>

externdef __imp_DestroyWindow:PPROC
DestroyWindow equ <__imp_DestroyWindow>

externdef __imp_DeviceEventWorker:PPROC
DeviceEventWorker equ <__imp_DeviceEventWorker>

externdef __imp_DialogBoxIndirectParamA:PPROC
DialogBoxIndirectParamA equ <__imp_DialogBoxIndirectParamA>
  IFNDEF __UNICODE__
    DialogBoxIndirectParam equ <__imp_DialogBoxIndirectParamA>
  ENDIF

externdef __imp_DialogBoxIndirectParamAorW:PPROC
DialogBoxIndirectParamAorW equ <__imp_DialogBoxIndirectParamAorW>
  IFDEF __UNICODE__
    DialogBoxIndirectParamAor equ <__imp_DialogBoxIndirectParamAorW>
  ENDIF

externdef __imp_DialogBoxIndirectParamW:PPROC
DialogBoxIndirectParamW equ <__imp_DialogBoxIndirectParamW>
  IFDEF __UNICODE__
    DialogBoxIndirectParam equ <__imp_DialogBoxIndirectParamW>
  ENDIF

externdef __imp_DialogBoxParamA:PPROC
DialogBoxParamA equ <__imp_DialogBoxParamA>
  IFNDEF __UNICODE__
    DialogBoxParam equ <__imp_DialogBoxParamA>
  ENDIF

externdef __imp_DialogBoxParamW:PPROC
DialogBoxParamW equ <__imp_DialogBoxParamW>
  IFDEF __UNICODE__
    DialogBoxParam equ <__imp_DialogBoxParamW>
  ENDIF

externdef __imp_DisableProcessWindowsGhosting:PPROC
DisableProcessWindowsGhosting equ <__imp_DisableProcessWindowsGhosting>

externdef __imp_DispatchMessageA:PPROC
DispatchMessageA equ <__imp_DispatchMessageA>
  IFNDEF __UNICODE__
    DispatchMessage equ <__imp_DispatchMessageA>
  ENDIF

externdef __imp_DispatchMessageW:PPROC
DispatchMessageW equ <__imp_DispatchMessageW>
  IFDEF __UNICODE__
    DispatchMessage equ <__imp_DispatchMessageW>
  ENDIF

externdef __imp_DisplayExitWindowsWarnings:PPROC
DisplayExitWindowsWarnings equ <__imp_DisplayExitWindowsWarnings>

externdef __imp_DlgDirListA:PPROC
DlgDirListA equ <__imp_DlgDirListA>
  IFNDEF __UNICODE__
    DlgDirList equ <__imp_DlgDirListA>
  ENDIF

externdef __imp_DlgDirListComboBoxA:PPROC
DlgDirListComboBoxA equ <__imp_DlgDirListComboBoxA>
  IFNDEF __UNICODE__
    DlgDirListComboBox equ <__imp_DlgDirListComboBoxA>
  ENDIF

externdef __imp_DlgDirListComboBoxW:PPROC
DlgDirListComboBoxW equ <__imp_DlgDirListComboBoxW>
  IFDEF __UNICODE__
    DlgDirListComboBox equ <__imp_DlgDirListComboBoxW>
  ENDIF

externdef __imp_DlgDirListW:PPROC
DlgDirListW equ <__imp_DlgDirListW>
  IFDEF __UNICODE__
    DlgDirList equ <__imp_DlgDirListW>
  ENDIF

externdef __imp_DlgDirSelectComboBoxExA:PPROC
DlgDirSelectComboBoxExA equ <__imp_DlgDirSelectComboBoxExA>
  IFNDEF __UNICODE__
    DlgDirSelectComboBoxEx equ <__imp_DlgDirSelectComboBoxExA>
  ENDIF

externdef __imp_DlgDirSelectComboBoxExW:PPROC
DlgDirSelectComboBoxExW equ <__imp_DlgDirSelectComboBoxExW>
  IFDEF __UNICODE__
    DlgDirSelectComboBoxEx equ <__imp_DlgDirSelectComboBoxExW>
  ENDIF

externdef __imp_DlgDirSelectExA:PPROC
DlgDirSelectExA equ <__imp_DlgDirSelectExA>
  IFNDEF __UNICODE__
    DlgDirSelectEx equ <__imp_DlgDirSelectExA>
  ENDIF

externdef __imp_DlgDirSelectExW:PPROC
DlgDirSelectExW equ <__imp_DlgDirSelectExW>
  IFDEF __UNICODE__
    DlgDirSelectEx equ <__imp_DlgDirSelectExW>
  ENDIF

externdef __imp_DragDetect:PPROC
DragDetect equ <__imp_DragDetect>

externdef __imp_DragObject:PPROC
DragObject equ <__imp_DragObject>

externdef __imp_DrawAnimatedRects:PPROC
DrawAnimatedRects equ <__imp_DrawAnimatedRects>

externdef __imp_DrawCaption:PPROC
DrawCaption equ <__imp_DrawCaption>

externdef __imp_DrawCaptionTempA:PPROC
DrawCaptionTempA equ <__imp_DrawCaptionTempA>
  IFNDEF __UNICODE__
    DrawCaptionTemp equ <__imp_DrawCaptionTempA>
  ENDIF

externdef __imp_DrawCaptionTempW:PPROC
DrawCaptionTempW equ <__imp_DrawCaptionTempW>
  IFDEF __UNICODE__
    DrawCaptionTemp equ <__imp_DrawCaptionTempW>
  ENDIF

externdef __imp_DrawEdge:PPROC
DrawEdge equ <__imp_DrawEdge>

externdef __imp_DrawFocusRect:PPROC
DrawFocusRect equ <__imp_DrawFocusRect>

externdef __imp_DrawFrame:PPROC
DrawFrame equ <__imp_DrawFrame>

externdef __imp_DrawFrameControl:PPROC
DrawFrameControl equ <__imp_DrawFrameControl>

externdef __imp_DrawIcon:PPROC
DrawIcon equ <__imp_DrawIcon>

externdef __imp_DrawIconEx:PPROC
DrawIconEx equ <__imp_DrawIconEx>

externdef __imp_DrawMenuBar:PPROC
DrawMenuBar equ <__imp_DrawMenuBar>

externdef __imp_DrawMenuBarTemp:PPROC
DrawMenuBarTemp equ <__imp_DrawMenuBarTemp>

externdef __imp_DrawStateA:PPROC
DrawStateA equ <__imp_DrawStateA>
  IFNDEF __UNICODE__
    DrawState equ <__imp_DrawStateA>
  ENDIF

externdef __imp_DrawStateW:PPROC
DrawStateW equ <__imp_DrawStateW>
  IFDEF __UNICODE__
    DrawState equ <__imp_DrawStateW>
  ENDIF

externdef __imp_DrawTextA:PPROC
DrawTextA equ <__imp_DrawTextA>
  IFNDEF __UNICODE__
    DrawText equ <__imp_DrawTextA>
  ENDIF

externdef __imp_DrawTextExA:PPROC
DrawTextExA equ <__imp_DrawTextExA>
  IFNDEF __UNICODE__
    DrawTextEx equ <__imp_DrawTextExA>
  ENDIF

externdef __imp_DrawTextExW:PPROC
DrawTextExW equ <__imp_DrawTextExW>
  IFDEF __UNICODE__
    DrawTextEx equ <__imp_DrawTextExW>
  ENDIF

externdef __imp_DrawTextW:PPROC
DrawTextW equ <__imp_DrawTextW>
  IFDEF __UNICODE__
    DrawText equ <__imp_DrawTextW>
  ENDIF

externdef __imp_EditWndProc:PPROC
EditWndProc equ <__imp_EditWndProc>

externdef __imp_EmptyClipboard:PPROC
EmptyClipboard equ <__imp_EmptyClipboard>

externdef __imp_EnableMenuItem:PPROC
EnableMenuItem equ <__imp_EnableMenuItem>

externdef __imp_EnableScrollBar:PPROC
EnableScrollBar equ <__imp_EnableScrollBar>

externdef __imp_EnableWindow:PPROC
EnableWindow equ <__imp_EnableWindow>

externdef __imp_EndDeferWindowPos:PPROC
EndDeferWindowPos equ <__imp_EndDeferWindowPos>

externdef __imp_EndDialog:PPROC
EndDialog equ <__imp_EndDialog>

externdef __imp_EndMenu:PPROC
EndMenu equ <__imp_EndMenu>

externdef __imp_EndPaint:PPROC
EndPaint equ <__imp_EndPaint>

externdef __imp_EndTask:PPROC
EndTask equ <__imp_EndTask>

externdef __imp_EnterReaderModeHelper:PPROC
EnterReaderModeHelper equ <__imp_EnterReaderModeHelper>

externdef __imp_EnumChildWindows:PPROC
EnumChildWindows equ <__imp_EnumChildWindows>

externdef __imp_EnumClipboardFormats:PPROC
EnumClipboardFormats equ <__imp_EnumClipboardFormats>

externdef __imp_EnumDesktopWindows:PPROC
EnumDesktopWindows equ <__imp_EnumDesktopWindows>

externdef __imp_EnumDesktopsA:PPROC
EnumDesktopsA equ <__imp_EnumDesktopsA>
  IFNDEF __UNICODE__
    EnumDesktops equ <__imp_EnumDesktopsA>
  ENDIF

externdef __imp_EnumDesktopsW:PPROC
EnumDesktopsW equ <__imp_EnumDesktopsW>
  IFDEF __UNICODE__
    EnumDesktops equ <__imp_EnumDesktopsW>
  ENDIF

externdef __imp_EnumDisplayDevicesA:PPROC
EnumDisplayDevicesA equ <__imp_EnumDisplayDevicesA>
  IFNDEF __UNICODE__
    EnumDisplayDevices equ <__imp_EnumDisplayDevicesA>
  ENDIF

externdef __imp_EnumDisplayDevicesW:PPROC
EnumDisplayDevicesW equ <__imp_EnumDisplayDevicesW>
  IFDEF __UNICODE__
    EnumDisplayDevices equ <__imp_EnumDisplayDevicesW>
  ENDIF

externdef __imp_EnumDisplayMonitors:PPROC
EnumDisplayMonitors equ <__imp_EnumDisplayMonitors>

externdef __imp_EnumDisplaySettingsA:PPROC
EnumDisplaySettingsA equ <__imp_EnumDisplaySettingsA>
  IFNDEF __UNICODE__
    EnumDisplaySettings equ <__imp_EnumDisplaySettingsA>
  ENDIF

externdef __imp_EnumDisplaySettingsExA:PPROC
EnumDisplaySettingsExA equ <__imp_EnumDisplaySettingsExA>
  IFNDEF __UNICODE__
    EnumDisplaySettingsEx equ <__imp_EnumDisplaySettingsExA>
  ENDIF

externdef __imp_EnumDisplaySettingsExW:PPROC
EnumDisplaySettingsExW equ <__imp_EnumDisplaySettingsExW>
  IFDEF __UNICODE__
    EnumDisplaySettingsEx equ <__imp_EnumDisplaySettingsExW>
  ENDIF

externdef __imp_EnumDisplaySettingsW:PPROC
EnumDisplaySettingsW equ <__imp_EnumDisplaySettingsW>
  IFDEF __UNICODE__
    EnumDisplaySettings equ <__imp_EnumDisplaySettingsW>
  ENDIF

externdef __imp_EnumPropsA:PPROC
EnumPropsA equ <__imp_EnumPropsA>
  IFNDEF __UNICODE__
    EnumProps equ <__imp_EnumPropsA>
  ENDIF

externdef __imp_EnumPropsExA:PPROC
EnumPropsExA equ <__imp_EnumPropsExA>
  IFNDEF __UNICODE__
    EnumPropsEx equ <__imp_EnumPropsExA>
  ENDIF

externdef __imp_EnumPropsExW:PPROC
EnumPropsExW equ <__imp_EnumPropsExW>
  IFDEF __UNICODE__
    EnumPropsEx equ <__imp_EnumPropsExW>
  ENDIF

externdef __imp_EnumPropsW:PPROC
EnumPropsW equ <__imp_EnumPropsW>
  IFDEF __UNICODE__
    EnumProps equ <__imp_EnumPropsW>
  ENDIF

externdef __imp_EnumThreadWindows:PPROC
EnumThreadWindows equ <__imp_EnumThreadWindows>

externdef __imp_EnumWindowStationsA:PPROC
EnumWindowStationsA equ <__imp_EnumWindowStationsA>
  IFNDEF __UNICODE__
    EnumWindowStations equ <__imp_EnumWindowStationsA>
  ENDIF

externdef __imp_EnumWindowStationsW:PPROC
EnumWindowStationsW equ <__imp_EnumWindowStationsW>
  IFDEF __UNICODE__
    EnumWindowStations equ <__imp_EnumWindowStationsW>
  ENDIF

externdef __imp_EnumWindows:PPROC
EnumWindows equ <__imp_EnumWindows>

externdef __imp_EqualRect:PPROC
EqualRect equ <__imp_EqualRect>

externdef __imp_ExcludeUpdateRgn:PPROC
ExcludeUpdateRgn equ <__imp_ExcludeUpdateRgn>

externdef __imp_ExitWindowsEx:PPROC
ExitWindowsEx equ <__imp_ExitWindowsEx>

externdef __imp_FillRect:PPROC
FillRect equ <__imp_FillRect>

externdef __imp_FindWindowA:PPROC
FindWindowA equ <__imp_FindWindowA>
  IFNDEF __UNICODE__
    FindWindow equ <__imp_FindWindowA>
  ENDIF

externdef __imp_FindWindowExA:PPROC
FindWindowExA equ <__imp_FindWindowExA>
  IFNDEF __UNICODE__
    FindWindowEx equ <__imp_FindWindowExA>
  ENDIF

externdef __imp_FindWindowExW:PPROC
FindWindowExW equ <__imp_FindWindowExW>
  IFDEF __UNICODE__
    FindWindowEx equ <__imp_FindWindowExW>
  ENDIF

externdef __imp_FindWindowW:PPROC
FindWindowW equ <__imp_FindWindowW>
  IFDEF __UNICODE__
    FindWindow equ <__imp_FindWindowW>
  ENDIF

externdef __imp_FlashWindow:PPROC
FlashWindow equ <__imp_FlashWindow>

externdef __imp_FlashWindowEx:PPROC
FlashWindowEx equ <__imp_FlashWindowEx>

externdef __imp_FrameRect:PPROC
FrameRect equ <__imp_FrameRect>

externdef __imp_FreeDDElParam:PPROC
FreeDDElParam equ <__imp_FreeDDElParam>

externdef __imp_GetActiveWindow:PPROC
GetActiveWindow equ <__imp_GetActiveWindow>

externdef __imp_GetAltTabInfo:PPROC
GetAltTabInfo equ <__imp_GetAltTabInfo>

externdef __imp_GetAltTabInfoA:PPROC
GetAltTabInfoA equ <__imp_GetAltTabInfoA>
  IFNDEF __UNICODE__
    GetAltTabInfo equ <__imp_GetAltTabInfoA>
  ENDIF

externdef __imp_GetAltTabInfoW:PPROC
GetAltTabInfoW equ <__imp_GetAltTabInfoW>
  IFDEF __UNICODE__
    GetAltTabInfo equ <__imp_GetAltTabInfoW>
  ENDIF

externdef __imp_GetAncestor:PPROC
GetAncestor equ <__imp_GetAncestor>

externdef __imp_GetAppCompatFlags2:PPROC
GetAppCompatFlags2 equ <__imp_GetAppCompatFlags2>

externdef __imp_GetAppCompatFlags:PPROC
GetAppCompatFlags equ <__imp_GetAppCompatFlags>

externdef __imp_GetAsyncKeyState:PPROC
GetAsyncKeyState equ <__imp_GetAsyncKeyState>

externdef __imp_GetCapture:PPROC
GetCapture equ <__imp_GetCapture>

externdef __imp_GetCaretBlinkTime:PPROC
GetCaretBlinkTime equ <__imp_GetCaretBlinkTime>

externdef __imp_GetCaretPos:PPROC
GetCaretPos equ <__imp_GetCaretPos>

externdef __imp_GetClassInfoA:PPROC
GetClassInfoA equ <__imp_GetClassInfoA>
  IFNDEF __UNICODE__
    GetClassInfo equ <__imp_GetClassInfoA>
  ENDIF

externdef __imp_GetClassInfoExA:PPROC
GetClassInfoExA equ <__imp_GetClassInfoExA>
  IFNDEF __UNICODE__
    GetClassInfoEx equ <__imp_GetClassInfoExA>
  ENDIF

externdef __imp_GetClassInfoExW:PPROC
GetClassInfoExW equ <__imp_GetClassInfoExW>
  IFDEF __UNICODE__
    GetClassInfoEx equ <__imp_GetClassInfoExW>
  ENDIF

externdef __imp_GetClassInfoW:PPROC
GetClassInfoW equ <__imp_GetClassInfoW>
  IFDEF __UNICODE__
    GetClassInfo equ <__imp_GetClassInfoW>
  ENDIF

externdef __imp_GetClassLongA:PPROC
GetClassLongA equ <__imp_GetClassLongA>
  IFNDEF __UNICODE__
    GetClassLong equ <__imp_GetClassLongA>
  ENDIF

externdef __imp_GetClassLongPtrA:PPROC
GetClassLongPtrA equ <__imp_GetClassLongPtrA>
  IFNDEF __UNICODE__
    GetClassLongPtr equ <__imp_GetClassLongPtrA>
  ENDIF

externdef __imp_GetClassLongPtrW:PPROC
GetClassLongPtrW equ <__imp_GetClassLongPtrW>
  IFDEF __UNICODE__
    GetClassLongPtr equ <__imp_GetClassLongPtrW>
  ENDIF

externdef __imp_GetClassLongW:PPROC
GetClassLongW equ <__imp_GetClassLongW>
  IFDEF __UNICODE__
    GetClassLong equ <__imp_GetClassLongW>
  ENDIF

externdef __imp_GetClassNameA:PPROC
GetClassNameA equ <__imp_GetClassNameA>
  IFNDEF __UNICODE__
    GetClassName equ <__imp_GetClassNameA>
  ENDIF

externdef __imp_GetClassNameW:PPROC
GetClassNameW equ <__imp_GetClassNameW>
  IFDEF __UNICODE__
    GetClassName equ <__imp_GetClassNameW>
  ENDIF

externdef __imp_GetClassWord:PPROC
GetClassWord equ <__imp_GetClassWord>

externdef __imp_GetClientRect:PPROC
GetClientRect equ <__imp_GetClientRect>

externdef __imp_GetClipCursor:PPROC
GetClipCursor equ <__imp_GetClipCursor>

externdef __imp_GetClipboardData:PPROC
GetClipboardData equ <__imp_GetClipboardData>

externdef __imp_GetClipboardFormatNameA:PPROC
GetClipboardFormatNameA equ <__imp_GetClipboardFormatNameA>
  IFNDEF __UNICODE__
    GetClipboardFormatName equ <__imp_GetClipboardFormatNameA>
  ENDIF

externdef __imp_GetClipboardFormatNameW:PPROC
GetClipboardFormatNameW equ <__imp_GetClipboardFormatNameW>
  IFDEF __UNICODE__
    GetClipboardFormatName equ <__imp_GetClipboardFormatNameW>
  ENDIF

externdef __imp_GetClipboardOwner:PPROC
GetClipboardOwner equ <__imp_GetClipboardOwner>

externdef __imp_GetClipboardSequenceNumber:PPROC
GetClipboardSequenceNumber equ <__imp_GetClipboardSequenceNumber>

externdef __imp_GetClipboardViewer:PPROC
GetClipboardViewer equ <__imp_GetClipboardViewer>

externdef __imp_GetComboBoxInfo:PPROC
GetComboBoxInfo equ <__imp_GetComboBoxInfo>

externdef __imp_GetCursor:PPROC
GetCursor equ <__imp_GetCursor>

externdef __imp_GetCursorFrameInfo:PPROC
GetCursorFrameInfo equ <__imp_GetCursorFrameInfo>

externdef __imp_GetCursorInfo:PPROC
GetCursorInfo equ <__imp_GetCursorInfo>

externdef __imp_GetCursorPos:PPROC
GetCursorPos equ <__imp_GetCursorPos>

externdef __imp_GetDC:PPROC
GetDC equ <__imp_GetDC>

externdef __imp_GetDCEx:PPROC
GetDCEx equ <__imp_GetDCEx>

externdef __imp_GetDesktopWindow:PPROC
GetDesktopWindow equ <__imp_GetDesktopWindow>

externdef __imp_GetDialogBaseUnits:PPROC
GetDialogBaseUnits equ <__imp_GetDialogBaseUnits>

externdef __imp_GetDlgCtrlID:PPROC
GetDlgCtrlID equ <__imp_GetDlgCtrlID>

externdef __imp_GetDlgItem:PPROC
GetDlgItem equ <__imp_GetDlgItem>

externdef __imp_GetDlgItemInt:PPROC
GetDlgItemInt equ <__imp_GetDlgItemInt>

externdef __imp_GetDlgItemTextA:PPROC
GetDlgItemTextA equ <__imp_GetDlgItemTextA>
  IFNDEF __UNICODE__
    GetDlgItemText equ <__imp_GetDlgItemTextA>
  ENDIF

externdef __imp_GetDlgItemTextW:PPROC
GetDlgItemTextW equ <__imp_GetDlgItemTextW>
  IFDEF __UNICODE__
    GetDlgItemText equ <__imp_GetDlgItemTextW>
  ENDIF

externdef __imp_GetDoubleClickTime:PPROC
GetDoubleClickTime equ <__imp_GetDoubleClickTime>

externdef __imp_GetFocus:PPROC
GetFocus equ <__imp_GetFocus>

externdef __imp_GetForegroundWindow:PPROC
GetForegroundWindow equ <__imp_GetForegroundWindow>

externdef __imp_GetGUIThreadInfo:PPROC
GetGUIThreadInfo equ <__imp_GetGUIThreadInfo>

externdef __imp_GetGuiResources:PPROC
GetGuiResources equ <__imp_GetGuiResources>

externdef __imp_GetIconInfo:PPROC
GetIconInfo equ <__imp_GetIconInfo>

externdef __imp_GetInputDesktop:PPROC
GetInputDesktop equ <__imp_GetInputDesktop>

externdef __imp_GetInputState:PPROC
GetInputState equ <__imp_GetInputState>

externdef __imp_GetInternalWindowPos:PPROC
GetInternalWindowPos equ <__imp_GetInternalWindowPos>

externdef __imp_GetKBCodePage:PPROC
GetKBCodePage equ <__imp_GetKBCodePage>

externdef __imp_GetKeyNameTextA:PPROC
GetKeyNameTextA equ <__imp_GetKeyNameTextA>
  IFNDEF __UNICODE__
    GetKeyNameText equ <__imp_GetKeyNameTextA>
  ENDIF

externdef __imp_GetKeyNameTextW:PPROC
GetKeyNameTextW equ <__imp_GetKeyNameTextW>
  IFDEF __UNICODE__
    GetKeyNameText equ <__imp_GetKeyNameTextW>
  ENDIF

externdef __imp_GetKeyState:PPROC
GetKeyState equ <__imp_GetKeyState>

externdef __imp_GetKeyboardLayout:PPROC
GetKeyboardLayout equ <__imp_GetKeyboardLayout>

externdef __imp_GetKeyboardLayoutList:PPROC
GetKeyboardLayoutList equ <__imp_GetKeyboardLayoutList>

externdef __imp_GetKeyboardLayoutNameA:PPROC
GetKeyboardLayoutNameA equ <__imp_GetKeyboardLayoutNameA>
  IFNDEF __UNICODE__
    GetKeyboardLayoutName equ <__imp_GetKeyboardLayoutNameA>
  ENDIF

externdef __imp_GetKeyboardLayoutNameW:PPROC
GetKeyboardLayoutNameW equ <__imp_GetKeyboardLayoutNameW>
  IFDEF __UNICODE__
    GetKeyboardLayoutName equ <__imp_GetKeyboardLayoutNameW>
  ENDIF

externdef __imp_GetKeyboardState:PPROC
GetKeyboardState equ <__imp_GetKeyboardState>

externdef __imp_GetKeyboardType:PPROC
GetKeyboardType equ <__imp_GetKeyboardType>

externdef __imp_GetLastActivePopup:PPROC
GetLastActivePopup equ <__imp_GetLastActivePopup>

externdef __imp_GetLastInputInfo:PPROC
GetLastInputInfo equ <__imp_GetLastInputInfo>

externdef __imp_GetLayeredWindowAttributes:PPROC
GetLayeredWindowAttributes equ <__imp_GetLayeredWindowAttributes>

externdef __imp_GetListBoxInfo:PPROC
GetListBoxInfo equ <__imp_GetListBoxInfo>

externdef __imp_GetMenu:PPROC
GetMenu equ <__imp_GetMenu>

externdef __imp_GetMenuBarInfo:PPROC
GetMenuBarInfo equ <__imp_GetMenuBarInfo>

externdef __imp_GetMenuCheckMarkDimensions:PPROC
GetMenuCheckMarkDimensions equ <__imp_GetMenuCheckMarkDimensions>

externdef __imp_GetMenuContextHelpId:PPROC
GetMenuContextHelpId equ <__imp_GetMenuContextHelpId>

externdef __imp_GetMenuDefaultItem:PPROC
GetMenuDefaultItem equ <__imp_GetMenuDefaultItem>

externdef __imp_GetMenuInfo:PPROC
GetMenuInfo equ <__imp_GetMenuInfo>

externdef __imp_GetMenuItemCount:PPROC
GetMenuItemCount equ <__imp_GetMenuItemCount>

externdef __imp_GetMenuItemID:PPROC
GetMenuItemID equ <__imp_GetMenuItemID>

externdef __imp_GetMenuItemInfoA:PPROC
GetMenuItemInfoA equ <__imp_GetMenuItemInfoA>
  IFNDEF __UNICODE__
    GetMenuItemInfo equ <__imp_GetMenuItemInfoA>
  ENDIF

externdef __imp_GetMenuItemInfoW:PPROC
GetMenuItemInfoW equ <__imp_GetMenuItemInfoW>
  IFDEF __UNICODE__
    GetMenuItemInfo equ <__imp_GetMenuItemInfoW>
  ENDIF

externdef __imp_GetMenuItemRect:PPROC
GetMenuItemRect equ <__imp_GetMenuItemRect>

externdef __imp_GetMenuState:PPROC
GetMenuState equ <__imp_GetMenuState>

externdef __imp_GetMenuStringA:PPROC
GetMenuStringA equ <__imp_GetMenuStringA>
  IFNDEF __UNICODE__
    GetMenuString equ <__imp_GetMenuStringA>
  ENDIF

externdef __imp_GetMenuStringW:PPROC
GetMenuStringW equ <__imp_GetMenuStringW>
  IFDEF __UNICODE__
    GetMenuString equ <__imp_GetMenuStringW>
  ENDIF

externdef __imp_GetMessageA:PPROC
GetMessageA equ <__imp_GetMessageA>
  IFNDEF __UNICODE__
    GetMessage equ <__imp_GetMessageA>
  ENDIF

externdef __imp_GetMessageExtraInfo:PPROC
GetMessageExtraInfo equ <__imp_GetMessageExtraInfo>

externdef __imp_GetMessagePos:PPROC
GetMessagePos equ <__imp_GetMessagePos>

externdef __imp_GetMessageTime:PPROC
GetMessageTime equ <__imp_GetMessageTime>

externdef __imp_GetMessageW:PPROC
GetMessageW equ <__imp_GetMessageW>
  IFDEF __UNICODE__
    GetMessage equ <__imp_GetMessageW>
  ENDIF

externdef __imp_GetMonitorInfoA:PPROC
GetMonitorInfoA equ <__imp_GetMonitorInfoA>
  IFNDEF __UNICODE__
    GetMonitorInfo equ <__imp_GetMonitorInfoA>
  ENDIF

externdef __imp_GetMonitorInfoW:PPROC
GetMonitorInfoW equ <__imp_GetMonitorInfoW>
  IFDEF __UNICODE__
    GetMonitorInfo equ <__imp_GetMonitorInfoW>
  ENDIF

externdef __imp_GetMouseMovePointsEx:PPROC
GetMouseMovePointsEx equ <__imp_GetMouseMovePointsEx>

externdef __imp_GetNextDlgGroupItem:PPROC
GetNextDlgGroupItem equ <__imp_GetNextDlgGroupItem>

externdef __imp_GetNextDlgTabItem:PPROC
GetNextDlgTabItem equ <__imp_GetNextDlgTabItem>

externdef __imp_GetOpenClipboardWindow:PPROC
GetOpenClipboardWindow equ <__imp_GetOpenClipboardWindow>

externdef __imp_GetParent:PPROC
GetParent equ <__imp_GetParent>

externdef __imp_GetPriorityClipboardFormat:PPROC
GetPriorityClipboardFormat equ <__imp_GetPriorityClipboardFormat>

externdef __imp_GetProcessDefaultLayout:PPROC
GetProcessDefaultLayout equ <__imp_GetProcessDefaultLayout>

externdef __imp_GetProcessWindowStation:PPROC
GetProcessWindowStation equ <__imp_GetProcessWindowStation>

externdef __imp_GetProgmanWindow:PPROC
GetProgmanWindow equ <__imp_GetProgmanWindow>

externdef __imp_GetPropA:PPROC
GetPropA equ <__imp_GetPropA>
  IFNDEF __UNICODE__
    GetProp equ <__imp_GetPropA>
  ENDIF

externdef __imp_GetPropW:PPROC
GetPropW equ <__imp_GetPropW>
  IFDEF __UNICODE__
    GetProp equ <__imp_GetPropW>
  ENDIF

externdef __imp_GetQueueStatus:PPROC
GetQueueStatus equ <__imp_GetQueueStatus>

externdef __imp_GetRawInputBuffer:PPROC
GetRawInputBuffer equ <__imp_GetRawInputBuffer>

externdef __imp_GetRawInputData:PPROC
GetRawInputData equ <__imp_GetRawInputData>

externdef __imp_GetRawInputDeviceInfoA:PPROC
GetRawInputDeviceInfoA equ <__imp_GetRawInputDeviceInfoA>
  IFNDEF __UNICODE__
    GetRawInputDeviceInfo equ <__imp_GetRawInputDeviceInfoA>
  ENDIF

externdef __imp_GetRawInputDeviceInfoW:PPROC
GetRawInputDeviceInfoW equ <__imp_GetRawInputDeviceInfoW>
  IFDEF __UNICODE__
    GetRawInputDeviceInfo equ <__imp_GetRawInputDeviceInfoW>
  ENDIF

externdef __imp_GetRawInputDeviceList:PPROC
GetRawInputDeviceList equ <__imp_GetRawInputDeviceList>

externdef __imp_GetReasonTitleFromReasonCode:PPROC
GetReasonTitleFromReasonCode equ <__imp_GetReasonTitleFromReasonCode>

externdef __imp_GetRegisteredRawInputDevices:PPROC
GetRegisteredRawInputDevices equ <__imp_GetRegisteredRawInputDevices>

externdef __imp_GetScrollBarInfo:PPROC
GetScrollBarInfo equ <__imp_GetScrollBarInfo>

externdef __imp_GetScrollInfo:PPROC
GetScrollInfo equ <__imp_GetScrollInfo>

externdef __imp_GetScrollPos:PPROC
GetScrollPos equ <__imp_GetScrollPos>

externdef __imp_GetScrollRange:PPROC
GetScrollRange equ <__imp_GetScrollRange>

externdef __imp_GetShellWindow:PPROC
GetShellWindow equ <__imp_GetShellWindow>

externdef __imp_GetSubMenu:PPROC
GetSubMenu equ <__imp_GetSubMenu>

externdef __imp_GetSysColor:PPROC
GetSysColor equ <__imp_GetSysColor>

externdef __imp_GetSysColorBrush:PPROC
GetSysColorBrush equ <__imp_GetSysColorBrush>

externdef __imp_GetSystemMenu:PPROC
GetSystemMenu equ <__imp_GetSystemMenu>

externdef __imp_GetSystemMetrics:PPROC
GetSystemMetrics equ <__imp_GetSystemMetrics>

externdef __imp_GetTabbedTextExtentA:PPROC
GetTabbedTextExtentA equ <__imp_GetTabbedTextExtentA>
  IFNDEF __UNICODE__
    GetTabbedTextExtent equ <__imp_GetTabbedTextExtentA>
  ENDIF

externdef __imp_GetTabbedTextExtentW:PPROC
GetTabbedTextExtentW equ <__imp_GetTabbedTextExtentW>
  IFDEF __UNICODE__
    GetTabbedTextExtent equ <__imp_GetTabbedTextExtentW>
  ENDIF

externdef __imp_GetTaskmanWindow:PPROC
GetTaskmanWindow equ <__imp_GetTaskmanWindow>

externdef __imp_GetThreadDesktop:PPROC
GetThreadDesktop equ <__imp_GetThreadDesktop>

externdef __imp_GetTitleBarInfo:PPROC
GetTitleBarInfo equ <__imp_GetTitleBarInfo>

externdef __imp_GetTopWindow:PPROC
GetTopWindow equ <__imp_GetTopWindow>

externdef __imp_GetUpdateRect:PPROC
GetUpdateRect equ <__imp_GetUpdateRect>

externdef __imp_GetUpdateRgn:PPROC
GetUpdateRgn equ <__imp_GetUpdateRgn>

externdef __imp_GetUserObjectInformationA:PPROC
GetUserObjectInformationA equ <__imp_GetUserObjectInformationA>
  IFNDEF __UNICODE__
    GetUserObjectInformation equ <__imp_GetUserObjectInformationA>
  ENDIF

externdef __imp_GetUserObjectInformationW:PPROC
GetUserObjectInformationW equ <__imp_GetUserObjectInformationW>
  IFDEF __UNICODE__
    GetUserObjectInformation equ <__imp_GetUserObjectInformationW>
  ENDIF

externdef __imp_GetUserObjectSecurity:PPROC
GetUserObjectSecurity equ <__imp_GetUserObjectSecurity>

externdef __imp_GetWinStationInfo:PPROC
GetWinStationInfo equ <__imp_GetWinStationInfo>

externdef __imp_GetWindow:PPROC
GetWindow equ <__imp_GetWindow>

externdef __imp_GetWindowContextHelpId:PPROC
GetWindowContextHelpId equ <__imp_GetWindowContextHelpId>

externdef __imp_GetWindowDC:PPROC
GetWindowDC equ <__imp_GetWindowDC>

externdef __imp_GetWindowInfo:PPROC
GetWindowInfo equ <__imp_GetWindowInfo>

externdef __imp_GetWindowLongA:PPROC
GetWindowLongA equ <__imp_GetWindowLongA>
  IFNDEF __UNICODE__
    GetWindowLong equ <__imp_GetWindowLongA>
  ENDIF

externdef __imp_GetWindowLongPtrA:PPROC
GetWindowLongPtrA equ <__imp_GetWindowLongPtrA>
  IFNDEF __UNICODE__
    GetWindowLongPtr equ <__imp_GetWindowLongPtrA>
  ENDIF

externdef __imp_GetWindowLongPtrW:PPROC
GetWindowLongPtrW equ <__imp_GetWindowLongPtrW>
  IFDEF __UNICODE__
    GetWindowLongPtr equ <__imp_GetWindowLongPtrW>
  ENDIF

externdef __imp_GetWindowLongW:PPROC
GetWindowLongW equ <__imp_GetWindowLongW>
  IFDEF __UNICODE__
    GetWindowLong equ <__imp_GetWindowLongW>
  ENDIF

externdef __imp_GetWindowModuleFileName:PPROC
GetWindowModuleFileName equ <__imp_GetWindowModuleFileName>

externdef __imp_GetWindowModuleFileNameA:PPROC
GetWindowModuleFileNameA equ <__imp_GetWindowModuleFileNameA>
  IFNDEF __UNICODE__
    GetWindowModuleFileName equ <__imp_GetWindowModuleFileNameA>
  ENDIF

externdef __imp_GetWindowModuleFileNameW:PPROC
GetWindowModuleFileNameW equ <__imp_GetWindowModuleFileNameW>
  IFDEF __UNICODE__
    GetWindowModuleFileName equ <__imp_GetWindowModuleFileNameW>
  ENDIF

externdef __imp_GetWindowPlacement:PPROC
GetWindowPlacement equ <__imp_GetWindowPlacement>

externdef __imp_GetWindowRect:PPROC
GetWindowRect equ <__imp_GetWindowRect>

externdef __imp_GetWindowRgn:PPROC
GetWindowRgn equ <__imp_GetWindowRgn>

externdef __imp_GetWindowRgnBox:PPROC
GetWindowRgnBox equ <__imp_GetWindowRgnBox>

externdef __imp_GetWindowTextA:PPROC
GetWindowTextA equ <__imp_GetWindowTextA>
  IFNDEF __UNICODE__
    GetWindowText equ <__imp_GetWindowTextA>
  ENDIF

externdef __imp_GetWindowTextLengthA:PPROC
GetWindowTextLengthA equ <__imp_GetWindowTextLengthA>
  IFNDEF __UNICODE__
    GetWindowTextLength equ <__imp_GetWindowTextLengthA>
  ENDIF

externdef __imp_GetWindowTextLengthW:PPROC
GetWindowTextLengthW equ <__imp_GetWindowTextLengthW>
  IFDEF __UNICODE__
    GetWindowTextLength equ <__imp_GetWindowTextLengthW>
  ENDIF

externdef __imp_GetWindowTextW:PPROC
GetWindowTextW equ <__imp_GetWindowTextW>
  IFDEF __UNICODE__
    GetWindowText equ <__imp_GetWindowTextW>
  ENDIF

externdef __imp_GetWindowThreadProcessId:PPROC
GetWindowThreadProcessId equ <__imp_GetWindowThreadProcessId>

externdef __imp_GetWindowWord:PPROC
GetWindowWord equ <__imp_GetWindowWord>

externdef __imp_GrayStringA:PPROC
GrayStringA equ <__imp_GrayStringA>
  IFNDEF __UNICODE__
    GrayString equ <__imp_GrayStringA>
  ENDIF

externdef __imp_GrayStringW:PPROC
GrayStringW equ <__imp_GrayStringW>
  IFDEF __UNICODE__
    GrayString equ <__imp_GrayStringW>
  ENDIF

externdef __imp_HideCaret:PPROC
HideCaret equ <__imp_HideCaret>

externdef __imp_HiliteMenuItem:PPROC
HiliteMenuItem equ <__imp_HiliteMenuItem>

externdef __imp_IMPGetIMEA:PPROC
IMPGetIMEA equ <__imp_IMPGetIMEA>
  IFNDEF __UNICODE__
    IMPGetIME equ <__imp_IMPGetIMEA>
  ENDIF

externdef __imp_IMPGetIMEW:PPROC
IMPGetIMEW equ <__imp_IMPGetIMEW>
  IFDEF __UNICODE__
    IMPGetIME equ <__imp_IMPGetIMEW>
  ENDIF

externdef __imp_IMPQueryIMEA:PPROC
IMPQueryIMEA equ <__imp_IMPQueryIMEA>
  IFNDEF __UNICODE__
    IMPQueryIME equ <__imp_IMPQueryIMEA>
  ENDIF

externdef __imp_IMPQueryIMEW:PPROC
IMPQueryIMEW equ <__imp_IMPQueryIMEW>
  IFDEF __UNICODE__
    IMPQueryIME equ <__imp_IMPQueryIMEW>
  ENDIF

externdef __imp_IMPSetIMEA:PPROC
IMPSetIMEA equ <__imp_IMPSetIMEA>
  IFNDEF __UNICODE__
    IMPSetIME equ <__imp_IMPSetIMEA>
  ENDIF

externdef __imp_IMPSetIMEW:PPROC
IMPSetIMEW equ <__imp_IMPSetIMEW>
  IFDEF __UNICODE__
    IMPSetIME equ <__imp_IMPSetIMEW>
  ENDIF

externdef __imp_ImpersonateDdeClientWindow:PPROC
ImpersonateDdeClientWindow equ <__imp_ImpersonateDdeClientWindow>

externdef __imp_InSendMessage:PPROC
InSendMessage equ <__imp_InSendMessage>

externdef __imp_InSendMessageEx:PPROC
InSendMessageEx equ <__imp_InSendMessageEx>

externdef __imp_InflateRect:PPROC
InflateRect equ <__imp_InflateRect>

externdef __imp_InitializeLpkHooks:PPROC
InitializeLpkHooks equ <__imp_InitializeLpkHooks>

externdef __imp_InsertMenuA:PPROC
InsertMenuA equ <__imp_InsertMenuA>
  IFNDEF __UNICODE__
    InsertMenu equ <__imp_InsertMenuA>
  ENDIF

externdef __imp_InsertMenuItemA:PPROC
InsertMenuItemA equ <__imp_InsertMenuItemA>
  IFNDEF __UNICODE__
    InsertMenuItem equ <__imp_InsertMenuItemA>
  ENDIF

externdef __imp_InsertMenuItemW:PPROC
InsertMenuItemW equ <__imp_InsertMenuItemW>
  IFDEF __UNICODE__
    InsertMenuItem equ <__imp_InsertMenuItemW>
  ENDIF

externdef __imp_InsertMenuW:PPROC
InsertMenuW equ <__imp_InsertMenuW>
  IFDEF __UNICODE__
    InsertMenu equ <__imp_InsertMenuW>
  ENDIF

externdef __imp_InternalGetWindowText:PPROC
InternalGetWindowText equ <__imp_InternalGetWindowText>

externdef __imp_IntersectRect:PPROC
IntersectRect equ <__imp_IntersectRect>

externdef __imp_InvalidateRect:PPROC
InvalidateRect equ <__imp_InvalidateRect>

externdef __imp_InvalidateRgn:PPROC
InvalidateRgn equ <__imp_InvalidateRgn>

externdef __imp_InvertRect:PPROC
InvertRect equ <__imp_InvertRect>

externdef __imp_IsCharAlphaA:PPROC
IsCharAlphaA equ <__imp_IsCharAlphaA>
  IFNDEF __UNICODE__
    IsCharAlpha equ <__imp_IsCharAlphaA>
  ENDIF

externdef __imp_IsCharAlphaNumericA:PPROC
IsCharAlphaNumericA equ <__imp_IsCharAlphaNumericA>
  IFNDEF __UNICODE__
    IsCharAlphaNumeric equ <__imp_IsCharAlphaNumericA>
  ENDIF

externdef __imp_IsCharAlphaNumericW:PPROC
IsCharAlphaNumericW equ <__imp_IsCharAlphaNumericW>
  IFDEF __UNICODE__
    IsCharAlphaNumeric equ <__imp_IsCharAlphaNumericW>
  ENDIF

externdef __imp_IsCharAlphaW:PPROC
IsCharAlphaW equ <__imp_IsCharAlphaW>
  IFDEF __UNICODE__
    IsCharAlpha equ <__imp_IsCharAlphaW>
  ENDIF

externdef __imp_IsCharLowerA:PPROC
IsCharLowerA equ <__imp_IsCharLowerA>
  IFNDEF __UNICODE__
    IsCharLower equ <__imp_IsCharLowerA>
  ENDIF

externdef __imp_IsCharLowerW:PPROC
IsCharLowerW equ <__imp_IsCharLowerW>
  IFDEF __UNICODE__
    IsCharLower equ <__imp_IsCharLowerW>
  ENDIF

externdef __imp_IsCharUpperA:PPROC
IsCharUpperA equ <__imp_IsCharUpperA>
  IFNDEF __UNICODE__
    IsCharUpper equ <__imp_IsCharUpperA>
  ENDIF

externdef __imp_IsCharUpperW:PPROC
IsCharUpperW equ <__imp_IsCharUpperW>
  IFDEF __UNICODE__
    IsCharUpper equ <__imp_IsCharUpperW>
  ENDIF

externdef __imp_IsChild:PPROC
IsChild equ <__imp_IsChild>

externdef __imp_IsClipboardFormatAvailable:PPROC
IsClipboardFormatAvailable equ <__imp_IsClipboardFormatAvailable>

externdef __imp_IsDialogMessage:PPROC
IsDialogMessage equ <__imp_IsDialogMessage>

externdef __imp_IsDialogMessageA:PPROC
IsDialogMessageA equ <__imp_IsDialogMessageA>
  IFNDEF __UNICODE__
    IsDialogMessage equ <__imp_IsDialogMessageA>
  ENDIF

externdef __imp_IsDialogMessageW:PPROC
IsDialogMessageW equ <__imp_IsDialogMessageW>
  IFDEF __UNICODE__
    IsDialogMessage equ <__imp_IsDialogMessageW>
  ENDIF

externdef __imp_IsDlgButtonChecked:PPROC
IsDlgButtonChecked equ <__imp_IsDlgButtonChecked>

externdef __imp_IsGUIThread:PPROC
IsGUIThread equ <__imp_IsGUIThread>

externdef __imp_IsHungAppWindow:PPROC
IsHungAppWindow equ <__imp_IsHungAppWindow>

externdef __imp_IsIconic:PPROC
IsIconic equ <__imp_IsIconic>

externdef __imp_IsMenu:PPROC
IsMenu equ <__imp_IsMenu>

externdef __imp_IsProcess16Bit:PPROC
IsProcess16Bit equ <__imp_IsProcess16Bit>

externdef __imp_IsRectEmpty:PPROC
IsRectEmpty equ <__imp_IsRectEmpty>

externdef __imp_IsSETEnabled:PPROC
IsSETEnabled equ <__imp_IsSETEnabled>

externdef __imp_IsServerSideWindow:PPROC
IsServerSideWindow equ <__imp_IsServerSideWindow>

externdef __imp_IsWinEventHookInstalled:PPROC
IsWinEventHookInstalled equ <__imp_IsWinEventHookInstalled>

externdef __imp_IsWindow:PPROC
IsWindow equ <__imp_IsWindow>

externdef __imp_IsWindowEnabled:PPROC
IsWindowEnabled equ <__imp_IsWindowEnabled>

externdef __imp_IsWindowInDestroy:PPROC
IsWindowInDestroy equ <__imp_IsWindowInDestroy>

externdef __imp_IsWindowUnicode:PPROC
IsWindowUnicode equ <__imp_IsWindowUnicode>

externdef __imp_IsWindowVisible:PPROC
IsWindowVisible equ <__imp_IsWindowVisible>

externdef __imp_IsWow64Message:PPROC
IsWow64Message equ <__imp_IsWow64Message>

externdef __imp_IsZoomed:PPROC
IsZoomed equ <__imp_IsZoomed>

externdef __imp_KillSystemTimer:PPROC
KillSystemTimer equ <__imp_KillSystemTimer>

externdef __imp_KillTimer:PPROC
KillTimer equ <__imp_KillTimer>

externdef __imp_LoadAcceleratorsA:PPROC
LoadAcceleratorsA equ <__imp_LoadAcceleratorsA>
  IFNDEF __UNICODE__
    LoadAccelerators equ <__imp_LoadAcceleratorsA>
  ENDIF

externdef __imp_LoadAcceleratorsW:PPROC
LoadAcceleratorsW equ <__imp_LoadAcceleratorsW>
  IFDEF __UNICODE__
    LoadAccelerators equ <__imp_LoadAcceleratorsW>
  ENDIF

externdef __imp_LoadBitmapA:PPROC
LoadBitmapA equ <__imp_LoadBitmapA>
  IFNDEF __UNICODE__
    LoadBitmap equ <__imp_LoadBitmapA>
  ENDIF

externdef __imp_LoadBitmapW:PPROC
LoadBitmapW equ <__imp_LoadBitmapW>
  IFDEF __UNICODE__
    LoadBitmap equ <__imp_LoadBitmapW>
  ENDIF

externdef __imp_LoadCursorA:PPROC
LoadCursorA equ <__imp_LoadCursorA>
  IFNDEF __UNICODE__
    LoadCursor equ <__imp_LoadCursorA>
  ENDIF

externdef __imp_LoadCursorFromFileA:PPROC
LoadCursorFromFileA equ <__imp_LoadCursorFromFileA>
  IFNDEF __UNICODE__
    LoadCursorFromFile equ <__imp_LoadCursorFromFileA>
  ENDIF

externdef __imp_LoadCursorFromFileW:PPROC
LoadCursorFromFileW equ <__imp_LoadCursorFromFileW>
  IFDEF __UNICODE__
    LoadCursorFromFile equ <__imp_LoadCursorFromFileW>
  ENDIF

externdef __imp_LoadCursorW:PPROC
LoadCursorW equ <__imp_LoadCursorW>
  IFDEF __UNICODE__
    LoadCursor equ <__imp_LoadCursorW>
  ENDIF

externdef __imp_LoadIconA:PPROC
LoadIconA equ <__imp_LoadIconA>
  IFNDEF __UNICODE__
    LoadIcon equ <__imp_LoadIconA>
  ENDIF

externdef __imp_LoadIconW:PPROC
LoadIconW equ <__imp_LoadIconW>
  IFDEF __UNICODE__
    LoadIcon equ <__imp_LoadIconW>
  ENDIF

externdef __imp_LoadImageA:PPROC
LoadImageA equ <__imp_LoadImageA>
  IFNDEF __UNICODE__
    LoadImage equ <__imp_LoadImageA>
  ENDIF

externdef __imp_LoadImageW:PPROC
LoadImageW equ <__imp_LoadImageW>
  IFDEF __UNICODE__
    LoadImage equ <__imp_LoadImageW>
  ENDIF

externdef __imp_LoadKeyboardLayoutA:PPROC
LoadKeyboardLayoutA equ <__imp_LoadKeyboardLayoutA>
  IFNDEF __UNICODE__
    LoadKeyboardLayout equ <__imp_LoadKeyboardLayoutA>
  ENDIF

externdef __imp_LoadKeyboardLayoutEx:PPROC
LoadKeyboardLayoutEx equ <__imp_LoadKeyboardLayoutEx>

externdef __imp_LoadKeyboardLayoutW:PPROC
LoadKeyboardLayoutW equ <__imp_LoadKeyboardLayoutW>
  IFDEF __UNICODE__
    LoadKeyboardLayout equ <__imp_LoadKeyboardLayoutW>
  ENDIF

externdef __imp_LoadLocalFonts:PPROC
LoadLocalFonts equ <__imp_LoadLocalFonts>

externdef __imp_LoadMenuA:PPROC
LoadMenuA equ <__imp_LoadMenuA>
  IFNDEF __UNICODE__
    LoadMenu equ <__imp_LoadMenuA>
  ENDIF

externdef __imp_LoadMenuIndirectA:PPROC
LoadMenuIndirectA equ <__imp_LoadMenuIndirectA>
  IFNDEF __UNICODE__
    LoadMenuIndirect equ <__imp_LoadMenuIndirectA>
  ENDIF

externdef __imp_LoadMenuIndirectW:PPROC
LoadMenuIndirectW equ <__imp_LoadMenuIndirectW>
  IFDEF __UNICODE__
    LoadMenuIndirect equ <__imp_LoadMenuIndirectW>
  ENDIF

externdef __imp_LoadMenuW:PPROC
LoadMenuW equ <__imp_LoadMenuW>
  IFDEF __UNICODE__
    LoadMenu equ <__imp_LoadMenuW>
  ENDIF

externdef __imp_LoadRemoteFonts:PPROC
LoadRemoteFonts equ <__imp_LoadRemoteFonts>

externdef __imp_LoadStringA:PPROC
LoadStringA equ <__imp_LoadStringA>
  IFNDEF __UNICODE__
    LoadString equ <__imp_LoadStringA>
  ENDIF

externdef __imp_LoadStringW:PPROC
LoadStringW equ <__imp_LoadStringW>
  IFDEF __UNICODE__
    LoadString equ <__imp_LoadStringW>
  ENDIF

externdef __imp_LockSetForegroundWindow:PPROC
LockSetForegroundWindow equ <__imp_LockSetForegroundWindow>

externdef __imp_LockWindowStation:PPROC
LockWindowStation equ <__imp_LockWindowStation>

externdef __imp_LockWindowUpdate:PPROC
LockWindowUpdate equ <__imp_LockWindowUpdate>

externdef __imp_LockWorkStation:PPROC
LockWorkStation equ <__imp_LockWorkStation>

externdef __imp_LookupIconIdFromDirectory:PPROC
LookupIconIdFromDirectory equ <__imp_LookupIconIdFromDirectory>

externdef __imp_LookupIconIdFromDirectoryEx:PPROC
LookupIconIdFromDirectoryEx equ <__imp_LookupIconIdFromDirectoryEx>

externdef __imp_MBToWCSEx:PPROC
MBToWCSEx equ <__imp_MBToWCSEx>

externdef __imp_MB_GetString:PPROC
MB_GetString equ <__imp_MB_GetString>

externdef __imp_MapDialogRect:PPROC
MapDialogRect equ <__imp_MapDialogRect>

externdef __imp_MapVirtualKeyA:PPROC
MapVirtualKeyA equ <__imp_MapVirtualKeyA>
  IFNDEF __UNICODE__
    MapVirtualKey equ <__imp_MapVirtualKeyA>
  ENDIF

externdef __imp_MapVirtualKeyExA:PPROC
MapVirtualKeyExA equ <__imp_MapVirtualKeyExA>
  IFNDEF __UNICODE__
    MapVirtualKeyEx equ <__imp_MapVirtualKeyExA>
  ENDIF

externdef __imp_MapVirtualKeyExW:PPROC
MapVirtualKeyExW equ <__imp_MapVirtualKeyExW>
  IFDEF __UNICODE__
    MapVirtualKeyEx equ <__imp_MapVirtualKeyExW>
  ENDIF

externdef __imp_MapVirtualKeyW:PPROC
MapVirtualKeyW equ <__imp_MapVirtualKeyW>
  IFDEF __UNICODE__
    MapVirtualKey equ <__imp_MapVirtualKeyW>
  ENDIF

externdef __imp_MapWindowPoints:PPROC
MapWindowPoints equ <__imp_MapWindowPoints>

externdef __imp_MenuItemFromPoint:PPROC
MenuItemFromPoint equ <__imp_MenuItemFromPoint>

externdef __imp_MenuWindowProcA:PPROC
MenuWindowProcA equ <__imp_MenuWindowProcA>
  IFNDEF __UNICODE__
    MenuWindowProc equ <__imp_MenuWindowProcA>
  ENDIF

externdef __imp_MenuWindowProcW:PPROC
MenuWindowProcW equ <__imp_MenuWindowProcW>
  IFDEF __UNICODE__
    MenuWindowProc equ <__imp_MenuWindowProcW>
  ENDIF

externdef __imp_MessageBeep:PPROC
MessageBeep equ <__imp_MessageBeep>

externdef __imp_MessageBoxA:PPROC
MessageBoxA equ <__imp_MessageBoxA>
  IFNDEF __UNICODE__
    MessageBox equ <__imp_MessageBoxA>
  ENDIF

externdef __imp_MessageBoxExA:PPROC
MessageBoxExA equ <__imp_MessageBoxExA>
  IFNDEF __UNICODE__
    MessageBoxEx equ <__imp_MessageBoxExA>
  ENDIF

externdef __imp_MessageBoxExW:PPROC
MessageBoxExW equ <__imp_MessageBoxExW>
  IFDEF __UNICODE__
    MessageBoxEx equ <__imp_MessageBoxExW>
  ENDIF

externdef __imp_MessageBoxIndirectA:PPROC
MessageBoxIndirectA equ <__imp_MessageBoxIndirectA>
  IFNDEF __UNICODE__
    MessageBoxIndirect equ <__imp_MessageBoxIndirectA>
  ENDIF

externdef __imp_MessageBoxIndirectW:PPROC
MessageBoxIndirectW equ <__imp_MessageBoxIndirectW>
  IFDEF __UNICODE__
    MessageBoxIndirect equ <__imp_MessageBoxIndirectW>
  ENDIF

externdef __imp_MessageBoxTimeoutA:PPROC
MessageBoxTimeoutA equ <__imp_MessageBoxTimeoutA>
  IFNDEF __UNICODE__
    MessageBoxTimeout equ <__imp_MessageBoxTimeoutA>
  ENDIF

externdef __imp_MessageBoxTimeoutW:PPROC
MessageBoxTimeoutW equ <__imp_MessageBoxTimeoutW>
  IFDEF __UNICODE__
    MessageBoxTimeout equ <__imp_MessageBoxTimeoutW>
  ENDIF

externdef __imp_MessageBoxW:PPROC
MessageBoxW equ <__imp_MessageBoxW>
  IFDEF __UNICODE__
    MessageBox equ <__imp_MessageBoxW>
  ENDIF

externdef __imp_ModifyMenuA:PPROC
ModifyMenuA equ <__imp_ModifyMenuA>
  IFNDEF __UNICODE__
    ModifyMenu equ <__imp_ModifyMenuA>
  ENDIF

externdef __imp_ModifyMenuW:PPROC
ModifyMenuW equ <__imp_ModifyMenuW>
  IFDEF __UNICODE__
    ModifyMenu equ <__imp_ModifyMenuW>
  ENDIF

externdef __imp_MonitorFromPoint:PPROC
MonitorFromPoint equ <__imp_MonitorFromPoint>

externdef __imp_MonitorFromRect:PPROC
MonitorFromRect equ <__imp_MonitorFromRect>

externdef __imp_MonitorFromWindow:PPROC
MonitorFromWindow equ <__imp_MonitorFromWindow>

externdef __imp_MoveWindow:PPROC
MoveWindow equ <__imp_MoveWindow>

externdef __imp_MsgWaitForMultipleObjects:PPROC
MsgWaitForMultipleObjects equ <__imp_MsgWaitForMultipleObjects>

externdef __imp_MsgWaitForMultipleObjectsEx:PPROC
MsgWaitForMultipleObjectsEx equ <__imp_MsgWaitForMultipleObjectsEx>

externdef __imp_NotifyWinEvent:PPROC
NotifyWinEvent equ <__imp_NotifyWinEvent>

externdef __imp_OemKeyScan:PPROC
OemKeyScan equ <__imp_OemKeyScan>

externdef __imp_OemToCharA:PPROC
OemToCharA equ <__imp_OemToCharA>
  IFNDEF __UNICODE__
    OemToChar equ <__imp_OemToCharA>
  ENDIF

externdef __imp_OemToCharBuffA:PPROC
OemToCharBuffA equ <__imp_OemToCharBuffA>
  IFNDEF __UNICODE__
    OemToCharBuff equ <__imp_OemToCharBuffA>
  ENDIF

externdef __imp_OemToCharBuffW:PPROC
OemToCharBuffW equ <__imp_OemToCharBuffW>
  IFDEF __UNICODE__
    OemToCharBuff equ <__imp_OemToCharBuffW>
  ENDIF

externdef __imp_OemToCharW:PPROC
OemToCharW equ <__imp_OemToCharW>
  IFDEF __UNICODE__
    OemToChar equ <__imp_OemToCharW>
  ENDIF

externdef __imp_OffsetRect:PPROC
OffsetRect equ <__imp_OffsetRect>

externdef __imp_OpenClipboard:PPROC
OpenClipboard equ <__imp_OpenClipboard>

externdef __imp_OpenDesktopA:PPROC
OpenDesktopA equ <__imp_OpenDesktopA>
  IFNDEF __UNICODE__
    OpenDesktop equ <__imp_OpenDesktopA>
  ENDIF

externdef __imp_OpenDesktopW:PPROC
OpenDesktopW equ <__imp_OpenDesktopW>
  IFDEF __UNICODE__
    OpenDesktop equ <__imp_OpenDesktopW>
  ENDIF

externdef __imp_OpenIcon:PPROC
OpenIcon equ <__imp_OpenIcon>

externdef __imp_OpenInputDesktop:PPROC
OpenInputDesktop equ <__imp_OpenInputDesktop>

externdef __imp_OpenWindowStationA:PPROC
OpenWindowStationA equ <__imp_OpenWindowStationA>
  IFNDEF __UNICODE__
    OpenWindowStation equ <__imp_OpenWindowStationA>
  ENDIF

externdef __imp_OpenWindowStationW:PPROC
OpenWindowStationW equ <__imp_OpenWindowStationW>
  IFDEF __UNICODE__
    OpenWindowStation equ <__imp_OpenWindowStationW>
  ENDIF

externdef __imp_PackDDElParam:PPROC
PackDDElParam equ <__imp_PackDDElParam>

externdef __imp_PaintDesktop:PPROC
PaintDesktop equ <__imp_PaintDesktop>

externdef __imp_PaintMenuBar:PPROC
PaintMenuBar equ <__imp_PaintMenuBar>

externdef __imp_PeekMessageA:PPROC
PeekMessageA equ <__imp_PeekMessageA>
  IFNDEF __UNICODE__
    PeekMessage equ <__imp_PeekMessageA>
  ENDIF

externdef __imp_PeekMessageW:PPROC
PeekMessageW equ <__imp_PeekMessageW>
  IFDEF __UNICODE__
    PeekMessage equ <__imp_PeekMessageW>
  ENDIF

externdef __imp_PostMessageA:PPROC
PostMessageA equ <__imp_PostMessageA>
  IFNDEF __UNICODE__
    PostMessage equ <__imp_PostMessageA>
  ENDIF

externdef __imp_PostMessageW:PPROC
PostMessageW equ <__imp_PostMessageW>
  IFDEF __UNICODE__
    PostMessage equ <__imp_PostMessageW>
  ENDIF

externdef __imp_PostQuitMessage:PPROC
PostQuitMessage equ <__imp_PostQuitMessage>

externdef __imp_PostThreadMessageA:PPROC
PostThreadMessageA equ <__imp_PostThreadMessageA>
  IFNDEF __UNICODE__
    PostThreadMessage equ <__imp_PostThreadMessageA>
  ENDIF

externdef __imp_PostThreadMessageW:PPROC
PostThreadMessageW equ <__imp_PostThreadMessageW>
  IFDEF __UNICODE__
    PostThreadMessage equ <__imp_PostThreadMessageW>
  ENDIF

externdef __imp_PrintWindow:PPROC
PrintWindow equ <__imp_PrintWindow>

externdef __imp_PrivateExtractIconExA:PPROC
PrivateExtractIconExA equ <__imp_PrivateExtractIconExA>
  IFNDEF __UNICODE__
    PrivateExtractIconEx equ <__imp_PrivateExtractIconExA>
  ENDIF

externdef __imp_PrivateExtractIconExW:PPROC
PrivateExtractIconExW equ <__imp_PrivateExtractIconExW>
  IFDEF __UNICODE__
    PrivateExtractIconEx equ <__imp_PrivateExtractIconExW>
  ENDIF

externdef __imp_PrivateExtractIconsA:PPROC
PrivateExtractIconsA equ <__imp_PrivateExtractIconsA>
  IFNDEF __UNICODE__
    PrivateExtractIcons equ <__imp_PrivateExtractIconsA>
  ENDIF

externdef __imp_PrivateExtractIconsW:PPROC
PrivateExtractIconsW equ <__imp_PrivateExtractIconsW>
  IFDEF __UNICODE__
    PrivateExtractIcons equ <__imp_PrivateExtractIconsW>
  ENDIF

externdef __imp_PtInRect:PPROC
PtInRect equ <__imp_PtInRect>

externdef __imp_QuerySendMessage:PPROC
QuerySendMessage equ <__imp_QuerySendMessage>

externdef __imp_RealChildWindowFromPoint:PPROC
RealChildWindowFromPoint equ <__imp_RealChildWindowFromPoint>

externdef __imp_RealGetWindowClass:PPROC
RealGetWindowClass equ <__imp_RealGetWindowClass>

externdef __imp_RealGetWindowClassA:PPROC
RealGetWindowClassA equ <__imp_RealGetWindowClassA>
  IFNDEF __UNICODE__
    RealGetWindowClass equ <__imp_RealGetWindowClassA>
  ENDIF

externdef __imp_RealGetWindowClassW:PPROC
RealGetWindowClassW equ <__imp_RealGetWindowClassW>
  IFDEF __UNICODE__
    RealGetWindowClass equ <__imp_RealGetWindowClassW>
  ENDIF

externdef __imp_ReasonCodeNeedsBugID:PPROC
ReasonCodeNeedsBugID equ <__imp_ReasonCodeNeedsBugID>

externdef __imp_ReasonCodeNeedsComment:PPROC
ReasonCodeNeedsComment equ <__imp_ReasonCodeNeedsComment>

externdef __imp_RecordShutdownReason:PPROC
RecordShutdownReason equ <__imp_RecordShutdownReason>

externdef __imp_RedrawWindow:PPROC
RedrawWindow equ <__imp_RedrawWindow>

externdef __imp_RegisterClassA:PPROC
RegisterClassA equ <__imp_RegisterClassA>
  IFNDEF __UNICODE__
    RegisterClass equ <__imp_RegisterClassA>
  ENDIF

externdef __imp_RegisterClassExA:PPROC
RegisterClassExA equ <__imp_RegisterClassExA>
  IFNDEF __UNICODE__
    RegisterClassEx equ <__imp_RegisterClassExA>
  ENDIF

externdef __imp_RegisterClassExW:PPROC
RegisterClassExW equ <__imp_RegisterClassExW>
  IFDEF __UNICODE__
    RegisterClassEx equ <__imp_RegisterClassExW>
  ENDIF

externdef __imp_RegisterClassW:PPROC
RegisterClassW equ <__imp_RegisterClassW>
  IFDEF __UNICODE__
    RegisterClass equ <__imp_RegisterClassW>
  ENDIF

externdef __imp_RegisterClipboardFormatA:PPROC
RegisterClipboardFormatA equ <__imp_RegisterClipboardFormatA>
  IFNDEF __UNICODE__
    RegisterClipboardFormat equ <__imp_RegisterClipboardFormatA>
  ENDIF

externdef __imp_RegisterClipboardFormatW:PPROC
RegisterClipboardFormatW equ <__imp_RegisterClipboardFormatW>
  IFDEF __UNICODE__
    RegisterClipboardFormat equ <__imp_RegisterClipboardFormatW>
  ENDIF

externdef __imp_RegisterDeviceNotificationA:PPROC
RegisterDeviceNotificationA equ <__imp_RegisterDeviceNotificationA>
  IFNDEF __UNICODE__
    RegisterDeviceNotification equ <__imp_RegisterDeviceNotificationA>
  ENDIF

externdef __imp_RegisterDeviceNotificationW:PPROC
RegisterDeviceNotificationW equ <__imp_RegisterDeviceNotificationW>
  IFDEF __UNICODE__
    RegisterDeviceNotification equ <__imp_RegisterDeviceNotificationW>
  ENDIF

externdef __imp_RegisterHotKey:PPROC
RegisterHotKey equ <__imp_RegisterHotKey>

externdef __imp_RegisterLogonProcess:PPROC
RegisterLogonProcess equ <__imp_RegisterLogonProcess>

externdef __imp_RegisterMessagePumpHook:PPROC
RegisterMessagePumpHook equ <__imp_RegisterMessagePumpHook>

externdef __imp_RegisterRawInputDevices:PPROC
RegisterRawInputDevices equ <__imp_RegisterRawInputDevices>

externdef __imp_RegisterServicesProcess:PPROC
RegisterServicesProcess equ <__imp_RegisterServicesProcess>

externdef __imp_RegisterShellHookWindow:PPROC
RegisterShellHookWindow equ <__imp_RegisterShellHookWindow>

externdef __imp_RegisterSystemThread:PPROC
RegisterSystemThread equ <__imp_RegisterSystemThread>

externdef __imp_RegisterTasklist:PPROC
RegisterTasklist equ <__imp_RegisterTasklist>

externdef __imp_RegisterUserApiHook:PPROC
RegisterUserApiHook equ <__imp_RegisterUserApiHook>

externdef __imp_RegisterWindowMessageA:PPROC
RegisterWindowMessageA equ <__imp_RegisterWindowMessageA>
  IFNDEF __UNICODE__
    RegisterWindowMessage equ <__imp_RegisterWindowMessageA>
  ENDIF

externdef __imp_RegisterWindowMessageW:PPROC
RegisterWindowMessageW equ <__imp_RegisterWindowMessageW>
  IFDEF __UNICODE__
    RegisterWindowMessage equ <__imp_RegisterWindowMessageW>
  ENDIF

externdef __imp_ReleaseCapture:PPROC
ReleaseCapture equ <__imp_ReleaseCapture>

externdef __imp_ReleaseDC:PPROC
ReleaseDC equ <__imp_ReleaseDC>

externdef __imp_RemoveMenu:PPROC
RemoveMenu equ <__imp_RemoveMenu>

externdef __imp_RemovePropA:PPROC
RemovePropA equ <__imp_RemovePropA>
  IFNDEF __UNICODE__
    RemoveProp equ <__imp_RemovePropA>
  ENDIF

externdef __imp_RemovePropW:PPROC
RemovePropW equ <__imp_RemovePropW>
  IFDEF __UNICODE__
    RemoveProp equ <__imp_RemovePropW>
  ENDIF

externdef __imp_ReplyMessage:PPROC
ReplyMessage equ <__imp_ReplyMessage>

externdef __imp_ResolveDesktopForWOW:PPROC
ResolveDesktopForWOW equ <__imp_ResolveDesktopForWOW>
  IFDEF __UNICODE__
    ResolveDesktopForWO equ <__imp_ResolveDesktopForWOW>
  ENDIF

externdef __imp_ReuseDDElParam:PPROC
ReuseDDElParam equ <__imp_ReuseDDElParam>

externdef __imp_ScreenToClient:PPROC
ScreenToClient equ <__imp_ScreenToClient>

externdef __imp_ScrollChildren:PPROC
ScrollChildren equ <__imp_ScrollChildren>

externdef __imp_ScrollDC:PPROC
ScrollDC equ <__imp_ScrollDC>

externdef __imp_ScrollWindow:PPROC
ScrollWindow equ <__imp_ScrollWindow>

externdef __imp_ScrollWindowEx:PPROC
ScrollWindowEx equ <__imp_ScrollWindowEx>

externdef __imp_SendDlgItemMessageA:PPROC
SendDlgItemMessageA equ <__imp_SendDlgItemMessageA>
  IFNDEF __UNICODE__
    SendDlgItemMessage equ <__imp_SendDlgItemMessageA>
  ENDIF

externdef __imp_SendDlgItemMessageW:PPROC
SendDlgItemMessageW equ <__imp_SendDlgItemMessageW>
  IFDEF __UNICODE__
    SendDlgItemMessage equ <__imp_SendDlgItemMessageW>
  ENDIF

externdef __imp_SendIMEMessageExA:PPROC
SendIMEMessageExA equ <__imp_SendIMEMessageExA>
  IFNDEF __UNICODE__
    SendIMEMessageEx equ <__imp_SendIMEMessageExA>
  ENDIF

externdef __imp_SendIMEMessageExW:PPROC
SendIMEMessageExW equ <__imp_SendIMEMessageExW>
  IFDEF __UNICODE__
    SendIMEMessageEx equ <__imp_SendIMEMessageExW>
  ENDIF

externdef __imp_SendInput:PPROC
SendInput equ <__imp_SendInput>

externdef __imp_SendMessageA:PPROC
SendMessageA equ <__imp_SendMessageA>
  IFNDEF __UNICODE__
    SendMessage equ <__imp_SendMessageA>
  ENDIF

externdef __imp_SendMessageCallbackA:PPROC
SendMessageCallbackA equ <__imp_SendMessageCallbackA>
  IFNDEF __UNICODE__
    SendMessageCallback equ <__imp_SendMessageCallbackA>
  ENDIF

externdef __imp_SendMessageCallbackW:PPROC
SendMessageCallbackW equ <__imp_SendMessageCallbackW>
  IFDEF __UNICODE__
    SendMessageCallback equ <__imp_SendMessageCallbackW>
  ENDIF

externdef __imp_SendMessageTimeoutA:PPROC
SendMessageTimeoutA equ <__imp_SendMessageTimeoutA>
  IFNDEF __UNICODE__
    SendMessageTimeout equ <__imp_SendMessageTimeoutA>
  ENDIF

externdef __imp_SendMessageTimeoutW:PPROC
SendMessageTimeoutW equ <__imp_SendMessageTimeoutW>
  IFDEF __UNICODE__
    SendMessageTimeout equ <__imp_SendMessageTimeoutW>
  ENDIF

externdef __imp_SendMessageW:PPROC
SendMessageW equ <__imp_SendMessageW>
  IFDEF __UNICODE__
    SendMessage equ <__imp_SendMessageW>
  ENDIF

externdef __imp_SendNotifyMessageA:PPROC
SendNotifyMessageA equ <__imp_SendNotifyMessageA>
  IFNDEF __UNICODE__
    SendNotifyMessage equ <__imp_SendNotifyMessageA>
  ENDIF

externdef __imp_SendNotifyMessageW:PPROC
SendNotifyMessageW equ <__imp_SendNotifyMessageW>
  IFDEF __UNICODE__
    SendNotifyMessage equ <__imp_SendNotifyMessageW>
  ENDIF

externdef __imp_SetActiveWindow:PPROC
SetActiveWindow equ <__imp_SetActiveWindow>

externdef __imp_SetCapture:PPROC
SetCapture equ <__imp_SetCapture>

externdef __imp_SetCaretBlinkTime:PPROC
SetCaretBlinkTime equ <__imp_SetCaretBlinkTime>

externdef __imp_SetCaretPos:PPROC
SetCaretPos equ <__imp_SetCaretPos>

externdef __imp_SetClassLongA:PPROC
SetClassLongA equ <__imp_SetClassLongA>
  IFNDEF __UNICODE__
    SetClassLong equ <__imp_SetClassLongA>
  ENDIF

externdef __imp_SetClassLongPtrA:PPROC
SetClassLongPtrA equ <__imp_SetClassLongPtrA>
  IFNDEF __UNICODE__
    SetClassLongPtr equ <__imp_SetClassLongPtrA>
  ENDIF

externdef __imp_SetClassLongPtrW:PPROC
SetClassLongPtrW equ <__imp_SetClassLongPtrW>
  IFDEF __UNICODE__
    SetClassLongPtr equ <__imp_SetClassLongPtrW>
  ENDIF

externdef __imp_SetClassLongW:PPROC
SetClassLongW equ <__imp_SetClassLongW>
  IFDEF __UNICODE__
    SetClassLong equ <__imp_SetClassLongW>
  ENDIF

externdef __imp_SetClassWord:PPROC
SetClassWord equ <__imp_SetClassWord>

externdef __imp_SetClipboardData:PPROC
SetClipboardData equ <__imp_SetClipboardData>

externdef __imp_SetClipboardViewer:PPROC
SetClipboardViewer equ <__imp_SetClipboardViewer>

externdef __imp_SetConsoleReserveKeys:PPROC
SetConsoleReserveKeys equ <__imp_SetConsoleReserveKeys>

externdef __imp_SetCursor:PPROC
SetCursor equ <__imp_SetCursor>

externdef __imp_SetCursorContents:PPROC
SetCursorContents equ <__imp_SetCursorContents>

externdef __imp_SetCursorPos:PPROC
SetCursorPos equ <__imp_SetCursorPos>

externdef __imp_SetDebugErrorLevel:PPROC
SetDebugErrorLevel equ <__imp_SetDebugErrorLevel>

externdef __imp_SetDeskWallpaper:PPROC
SetDeskWallpaper equ <__imp_SetDeskWallpaper>

externdef __imp_SetDlgItemInt:PPROC
SetDlgItemInt equ <__imp_SetDlgItemInt>

externdef __imp_SetDlgItemTextA:PPROC
SetDlgItemTextA equ <__imp_SetDlgItemTextA>
  IFNDEF __UNICODE__
    SetDlgItemText equ <__imp_SetDlgItemTextA>
  ENDIF

externdef __imp_SetDlgItemTextW:PPROC
SetDlgItemTextW equ <__imp_SetDlgItemTextW>
  IFDEF __UNICODE__
    SetDlgItemText equ <__imp_SetDlgItemTextW>
  ENDIF

externdef __imp_SetDoubleClickTime:PPROC
SetDoubleClickTime equ <__imp_SetDoubleClickTime>

externdef __imp_SetFocus:PPROC
SetFocus equ <__imp_SetFocus>

externdef __imp_SetForegroundWindow:PPROC
SetForegroundWindow equ <__imp_SetForegroundWindow>

externdef __imp_SetInternalWindowPos:PPROC
SetInternalWindowPos equ <__imp_SetInternalWindowPos>

externdef __imp_SetKeyboardState:PPROC
SetKeyboardState equ <__imp_SetKeyboardState>

externdef __imp_SetLastErrorEx:PPROC
SetLastErrorEx equ <__imp_SetLastErrorEx>

externdef __imp_SetLayeredWindowAttributes:PPROC
SetLayeredWindowAttributes equ <__imp_SetLayeredWindowAttributes>

externdef __imp_SetLogonNotifyWindow:PPROC
SetLogonNotifyWindow equ <__imp_SetLogonNotifyWindow>

externdef __imp_SetMenu:PPROC
SetMenu equ <__imp_SetMenu>

externdef __imp_SetMenuContextHelpId:PPROC
SetMenuContextHelpId equ <__imp_SetMenuContextHelpId>

externdef __imp_SetMenuDefaultItem:PPROC
SetMenuDefaultItem equ <__imp_SetMenuDefaultItem>

externdef __imp_SetMenuInfo:PPROC
SetMenuInfo equ <__imp_SetMenuInfo>

externdef __imp_SetMenuItemBitmaps:PPROC
SetMenuItemBitmaps equ <__imp_SetMenuItemBitmaps>

externdef __imp_SetMenuItemInfoA:PPROC
SetMenuItemInfoA equ <__imp_SetMenuItemInfoA>
  IFNDEF __UNICODE__
    SetMenuItemInfo equ <__imp_SetMenuItemInfoA>
  ENDIF

externdef __imp_SetMenuItemInfoW:PPROC
SetMenuItemInfoW equ <__imp_SetMenuItemInfoW>
  IFDEF __UNICODE__
    SetMenuItemInfo equ <__imp_SetMenuItemInfoW>
  ENDIF

externdef __imp_SetMessageExtraInfo:PPROC
SetMessageExtraInfo equ <__imp_SetMessageExtraInfo>

externdef __imp_SetMessageQueue:PPROC
SetMessageQueue equ <__imp_SetMessageQueue>

externdef __imp_SetParent:PPROC
SetParent equ <__imp_SetParent>

externdef __imp_SetProcessDefaultLayout:PPROC
SetProcessDefaultLayout equ <__imp_SetProcessDefaultLayout>

externdef __imp_SetProcessWindowStation:PPROC
SetProcessWindowStation equ <__imp_SetProcessWindowStation>

externdef __imp_SetProgmanWindow:PPROC
SetProgmanWindow equ <__imp_SetProgmanWindow>

externdef __imp_SetPropA:PPROC
SetPropA equ <__imp_SetPropA>
  IFNDEF __UNICODE__
    SetProp equ <__imp_SetPropA>
  ENDIF

externdef __imp_SetPropW:PPROC
SetPropW equ <__imp_SetPropW>
  IFDEF __UNICODE__
    SetProp equ <__imp_SetPropW>
  ENDIF

externdef __imp_SetRect:PPROC
SetRect equ <__imp_SetRect>

externdef __imp_SetRectEmpty:PPROC
SetRectEmpty equ <__imp_SetRectEmpty>

externdef __imp_SetScrollInfo:PPROC
SetScrollInfo equ <__imp_SetScrollInfo>

externdef __imp_SetScrollPos:PPROC
SetScrollPos equ <__imp_SetScrollPos>

externdef __imp_SetScrollRange:PPROC
SetScrollRange equ <__imp_SetScrollRange>

externdef __imp_SetShellWindow:PPROC
SetShellWindow equ <__imp_SetShellWindow>

externdef __imp_SetShellWindowEx:PPROC
SetShellWindowEx equ <__imp_SetShellWindowEx>

externdef __imp_SetSysColors:PPROC
SetSysColors equ <__imp_SetSysColors>

externdef __imp_SetSysColorsTemp:PPROC
SetSysColorsTemp equ <__imp_SetSysColorsTemp>

externdef __imp_SetSystemCursor:PPROC
SetSystemCursor equ <__imp_SetSystemCursor>

externdef __imp_SetSystemMenu:PPROC
SetSystemMenu equ <__imp_SetSystemMenu>

externdef __imp_SetSystemTimer:PPROC
SetSystemTimer equ <__imp_SetSystemTimer>

externdef __imp_SetTaskmanWindow:PPROC
SetTaskmanWindow equ <__imp_SetTaskmanWindow>

externdef __imp_SetThreadDesktop:PPROC
SetThreadDesktop equ <__imp_SetThreadDesktop>

externdef __imp_SetTimer:PPROC
SetTimer equ <__imp_SetTimer>

externdef __imp_SetUserObjectInformationA:PPROC
SetUserObjectInformationA equ <__imp_SetUserObjectInformationA>
  IFNDEF __UNICODE__
    SetUserObjectInformation equ <__imp_SetUserObjectInformationA>
  ENDIF

externdef __imp_SetUserObjectInformationW:PPROC
SetUserObjectInformationW equ <__imp_SetUserObjectInformationW>
  IFDEF __UNICODE__
    SetUserObjectInformation equ <__imp_SetUserObjectInformationW>
  ENDIF

externdef __imp_SetUserObjectSecurity:PPROC
SetUserObjectSecurity equ <__imp_SetUserObjectSecurity>

externdef __imp_SetWinEventHook:PPROC
SetWinEventHook equ <__imp_SetWinEventHook>

externdef __imp_SetWindowContextHelpId:PPROC
SetWindowContextHelpId equ <__imp_SetWindowContextHelpId>

externdef __imp_SetWindowLongA:PPROC
SetWindowLongA equ <__imp_SetWindowLongA>
  IFNDEF __UNICODE__
    SetWindowLong equ <__imp_SetWindowLongA>
  ENDIF

externdef __imp_SetWindowLongPtrA:PPROC
SetWindowLongPtrA equ <__imp_SetWindowLongPtrA>
  IFNDEF __UNICODE__
    SetWindowLongPtr equ <__imp_SetWindowLongPtrA>
  ENDIF

externdef __imp_SetWindowLongPtrW:PPROC
SetWindowLongPtrW equ <__imp_SetWindowLongPtrW>
  IFDEF __UNICODE__
    SetWindowLongPtr equ <__imp_SetWindowLongPtrW>
  ENDIF

externdef __imp_SetWindowLongW:PPROC
SetWindowLongW equ <__imp_SetWindowLongW>
  IFDEF __UNICODE__
    SetWindowLong equ <__imp_SetWindowLongW>
  ENDIF

externdef __imp_SetWindowPlacement:PPROC
SetWindowPlacement equ <__imp_SetWindowPlacement>

externdef __imp_SetWindowPos:PPROC
SetWindowPos equ <__imp_SetWindowPos>

externdef __imp_SetWindowRgn:PPROC
SetWindowRgn equ <__imp_SetWindowRgn>

externdef __imp_SetWindowStationUser:PPROC
SetWindowStationUser equ <__imp_SetWindowStationUser>

externdef __imp_SetWindowTextA:PPROC
SetWindowTextA equ <__imp_SetWindowTextA>
  IFNDEF __UNICODE__
    SetWindowText equ <__imp_SetWindowTextA>
  ENDIF

externdef __imp_SetWindowTextW:PPROC
SetWindowTextW equ <__imp_SetWindowTextW>
  IFDEF __UNICODE__
    SetWindowText equ <__imp_SetWindowTextW>
  ENDIF

externdef __imp_SetWindowWord:PPROC
SetWindowWord equ <__imp_SetWindowWord>

externdef __imp_SetWindowsHookA:PPROC
SetWindowsHookA equ <__imp_SetWindowsHookA>
  IFNDEF __UNICODE__
    SetWindowsHook equ <__imp_SetWindowsHookA>
  ENDIF

externdef __imp_SetWindowsHookExA:PPROC
SetWindowsHookExA equ <__imp_SetWindowsHookExA>
  IFNDEF __UNICODE__
    SetWindowsHookEx equ <__imp_SetWindowsHookExA>
  ENDIF

externdef __imp_SetWindowsHookExW:PPROC
SetWindowsHookExW equ <__imp_SetWindowsHookExW>
  IFDEF __UNICODE__
    SetWindowsHookEx equ <__imp_SetWindowsHookExW>
  ENDIF

externdef __imp_SetWindowsHookW:PPROC
SetWindowsHookW equ <__imp_SetWindowsHookW>
  IFDEF __UNICODE__
    SetWindowsHook equ <__imp_SetWindowsHookW>
  ENDIF

externdef __imp_ShowCaret:PPROC
ShowCaret equ <__imp_ShowCaret>

externdef __imp_ShowCursor:PPROC
ShowCursor equ <__imp_ShowCursor>

externdef __imp_ShowOwnedPopups:PPROC
ShowOwnedPopups equ <__imp_ShowOwnedPopups>

externdef __imp_ShowScrollBar:PPROC
ShowScrollBar equ <__imp_ShowScrollBar>

externdef __imp_ShowStartGlass:PPROC
ShowStartGlass equ <__imp_ShowStartGlass>

externdef __imp_ShowWindow:PPROC
ShowWindow equ <__imp_ShowWindow>

externdef __imp_ShowWindowAsync:PPROC
ShowWindowAsync equ <__imp_ShowWindowAsync>

externdef __imp_SoftModalMessageBox:PPROC
SoftModalMessageBox equ <__imp_SoftModalMessageBox>

externdef __imp_SubtractRect:PPROC
SubtractRect equ <__imp_SubtractRect>

externdef __imp_SwapMouseButton:PPROC
SwapMouseButton equ <__imp_SwapMouseButton>

externdef __imp_SwitchDesktop:PPROC
SwitchDesktop equ <__imp_SwitchDesktop>

externdef __imp_SwitchToThisWindow:PPROC
SwitchToThisWindow equ <__imp_SwitchToThisWindow>

externdef __imp_SystemParametersInfoA:PPROC
SystemParametersInfoA equ <__imp_SystemParametersInfoA>
  IFNDEF __UNICODE__
    SystemParametersInfo equ <__imp_SystemParametersInfoA>
  ENDIF

externdef __imp_SystemParametersInfoW:PPROC
SystemParametersInfoW equ <__imp_SystemParametersInfoW>
  IFDEF __UNICODE__
    SystemParametersInfo equ <__imp_SystemParametersInfoW>
  ENDIF

externdef __imp_TabbedTextOutA:PPROC
TabbedTextOutA equ <__imp_TabbedTextOutA>
  IFNDEF __UNICODE__
    TabbedTextOut equ <__imp_TabbedTextOutA>
  ENDIF

externdef __imp_TabbedTextOutW:PPROC
TabbedTextOutW equ <__imp_TabbedTextOutW>
  IFDEF __UNICODE__
    TabbedTextOut equ <__imp_TabbedTextOutW>
  ENDIF

externdef __imp_TileChildWindows:PPROC
TileChildWindows equ <__imp_TileChildWindows>

externdef __imp_TileWindows:PPROC
TileWindows equ <__imp_TileWindows>

externdef __imp_ToAscii:PPROC
ToAscii equ <__imp_ToAscii>

externdef __imp_ToAsciiEx:PPROC
ToAsciiEx equ <__imp_ToAsciiEx>

externdef __imp_ToUnicode:PPROC
ToUnicode equ <__imp_ToUnicode>

externdef __imp_ToUnicodeEx:PPROC
ToUnicodeEx equ <__imp_ToUnicodeEx>

externdef __imp_TrackMouseEvent:PPROC
TrackMouseEvent equ <__imp_TrackMouseEvent>

externdef __imp_TrackPopupMenu:PPROC
TrackPopupMenu equ <__imp_TrackPopupMenu>

externdef __imp_TrackPopupMenuEx:PPROC
TrackPopupMenuEx equ <__imp_TrackPopupMenuEx>

externdef __imp_TranslateAccelerator:PPROC
TranslateAccelerator equ <__imp_TranslateAccelerator>

externdef __imp_TranslateAcceleratorA:PPROC
TranslateAcceleratorA equ <__imp_TranslateAcceleratorA>
  IFNDEF __UNICODE__
    TranslateAccelerator equ <__imp_TranslateAcceleratorA>
  ENDIF

externdef __imp_TranslateAcceleratorW:PPROC
TranslateAcceleratorW equ <__imp_TranslateAcceleratorW>
  IFDEF __UNICODE__
    TranslateAccelerator equ <__imp_TranslateAcceleratorW>
  ENDIF

externdef __imp_TranslateMDISysAccel:PPROC
TranslateMDISysAccel equ <__imp_TranslateMDISysAccel>

externdef __imp_TranslateMessage:PPROC
TranslateMessage equ <__imp_TranslateMessage>

externdef __imp_TranslateMessageEx:PPROC
TranslateMessageEx equ <__imp_TranslateMessageEx>

externdef __imp_UnhookWinEvent:PPROC
UnhookWinEvent equ <__imp_UnhookWinEvent>

externdef __imp_UnhookWindowsHook:PPROC
UnhookWindowsHook equ <__imp_UnhookWindowsHook>

externdef __imp_UnhookWindowsHookEx:PPROC
UnhookWindowsHookEx equ <__imp_UnhookWindowsHookEx>

externdef __imp_UnionRect:PPROC
UnionRect equ <__imp_UnionRect>

externdef __imp_UnloadKeyboardLayout:PPROC
UnloadKeyboardLayout equ <__imp_UnloadKeyboardLayout>

externdef __imp_UnlockWindowStation:PPROC
UnlockWindowStation equ <__imp_UnlockWindowStation>

externdef __imp_UnpackDDElParam:PPROC
UnpackDDElParam equ <__imp_UnpackDDElParam>

externdef __imp_UnregisterClassA:PPROC
UnregisterClassA equ <__imp_UnregisterClassA>
  IFNDEF __UNICODE__
    UnregisterClass equ <__imp_UnregisterClassA>
  ENDIF

externdef __imp_UnregisterClassW:PPROC
UnregisterClassW equ <__imp_UnregisterClassW>
  IFDEF __UNICODE__
    UnregisterClass equ <__imp_UnregisterClassW>
  ENDIF

externdef __imp_UnregisterDeviceNotification:PPROC
UnregisterDeviceNotification equ <__imp_UnregisterDeviceNotification>

externdef __imp_UnregisterHotKey:PPROC
UnregisterHotKey equ <__imp_UnregisterHotKey>

externdef __imp_UnregisterMessagePumpHook:PPROC
UnregisterMessagePumpHook equ <__imp_UnregisterMessagePumpHook>

externdef __imp_UnregisterUserApiHook:PPROC
UnregisterUserApiHook equ <__imp_UnregisterUserApiHook>

externdef __imp_UpdateLayeredWindow:PPROC
UpdateLayeredWindow equ <__imp_UpdateLayeredWindow>

externdef __imp_UpdateLayeredWindowIndirect:PPROC
UpdateLayeredWindowIndirect equ <__imp_UpdateLayeredWindowIndirect>

externdef __imp_UpdatePerUserSystemParameters:PPROC
UpdatePerUserSystemParameters equ <__imp_UpdatePerUserSystemParameters>

externdef __imp_UpdateWindow:PPROC
UpdateWindow equ <__imp_UpdateWindow>

externdef __imp_User32InitializeImmEntryTable:PPROC
User32InitializeImmEntryTable equ <__imp_User32InitializeImmEntryTable>

externdef __imp_UserClientDllInitialize:PPROC
UserClientDllInitialize equ <__imp_UserClientDllInitialize>

externdef __imp_UserHandleGrantAccess:PPROC
UserHandleGrantAccess equ <__imp_UserHandleGrantAccess>

externdef __imp_UserLpkPSMTextOut:PPROC
UserLpkPSMTextOut equ <__imp_UserLpkPSMTextOut>

externdef __imp_UserLpkTabbedTextOut:PPROC
UserLpkTabbedTextOut equ <__imp_UserLpkTabbedTextOut>

externdef __imp_UserRealizePalette:PPROC
UserRealizePalette equ <__imp_UserRealizePalette>

externdef __imp_UserRegisterWowHandlers:PPROC
UserRegisterWowHandlers equ <__imp_UserRegisterWowHandlers>

externdef __imp_ValidateRect:PPROC
ValidateRect equ <__imp_ValidateRect>

externdef __imp_ValidateRgn:PPROC
ValidateRgn equ <__imp_ValidateRgn>

externdef __imp_VkKeyScanA:PPROC
VkKeyScanA equ <__imp_VkKeyScanA>
  IFNDEF __UNICODE__
    VkKeyScan equ <__imp_VkKeyScanA>
  ENDIF

externdef __imp_VkKeyScanExA:PPROC
VkKeyScanExA equ <__imp_VkKeyScanExA>
  IFNDEF __UNICODE__
    VkKeyScanEx equ <__imp_VkKeyScanExA>
  ENDIF

externdef __imp_VkKeyScanExW:PPROC
VkKeyScanExW equ <__imp_VkKeyScanExW>
  IFDEF __UNICODE__
    VkKeyScanEx equ <__imp_VkKeyScanExW>
  ENDIF

externdef __imp_VkKeyScanW:PPROC
VkKeyScanW equ <__imp_VkKeyScanW>
  IFDEF __UNICODE__
    VkKeyScan equ <__imp_VkKeyScanW>
  ENDIF

externdef __imp_WCSToMBEx:PPROC
WCSToMBEx equ <__imp_WCSToMBEx>

externdef __imp_WINNLSEnableIME:PPROC
WINNLSEnableIME equ <__imp_WINNLSEnableIME>

externdef __imp_WINNLSGetEnableStatus:PPROC
WINNLSGetEnableStatus equ <__imp_WINNLSGetEnableStatus>

externdef __imp_WINNLSGetIMEHotkey:PPROC
WINNLSGetIMEHotkey equ <__imp_WINNLSGetIMEHotkey>

externdef __imp_WaitForInputIdle:PPROC
WaitForInputIdle equ <__imp_WaitForInputIdle>

externdef __imp_WaitMessage:PPROC
WaitMessage equ <__imp_WaitMessage>

externdef __imp_Win32PoolAllocationStats:PPROC
Win32PoolAllocationStats equ <__imp_Win32PoolAllocationStats>

externdef __imp_WinHelpA:PPROC
WinHelpA equ <__imp_WinHelpA>
  IFNDEF __UNICODE__
    WinHelp equ <__imp_WinHelpA>
  ENDIF

externdef __imp_WinHelpW:PPROC
WinHelpW equ <__imp_WinHelpW>
  IFDEF __UNICODE__
    WinHelp equ <__imp_WinHelpW>
  ENDIF

externdef __imp_WindowFromDC:PPROC
WindowFromDC equ <__imp_WindowFromDC>

externdef __imp_WindowFromPoint:PPROC
WindowFromPoint equ <__imp_WindowFromPoint>

externdef __imp_keybd_event:PPROC
keybd_event equ <__imp_keybd_event>

externdef __imp_mouse_event:PPROC
mouse_event equ <__imp_mouse_event>

externdef __imp_wsprintfA:PPROC
wsprintfA equ <__imp_wsprintfA>
  IFNDEF __UNICODE__
    wsprintf equ <__imp_wsprintfA>
  ENDIF

externdef __imp_wsprintfW:PPROC
wsprintfW equ <__imp_wsprintfW>
  IFDEF __UNICODE__
    wsprintf equ <__imp_wsprintfW>
  ENDIF

externdef __imp_wvsprintfA:PPROC
wvsprintfA equ <__imp_wvsprintfA>
  IFNDEF __UNICODE__
    wvsprintf equ <__imp_wvsprintfA>
  ENDIF

externdef __imp_wvsprintfW:PPROC
wvsprintfW equ <__imp_wvsprintfW>
  IFDEF __UNICODE__
    wvsprintf equ <__imp_wvsprintfW>
  ENDIF
