externdef __imp_AddGadgetMessageHandler:PPROC
AddGadgetMessageHandler equ <__imp_AddGadgetMessageHandler>

externdef __imp_AttachWndProcA:PPROC
AttachWndProcA equ <__imp_AttachWndProcA>
  IFNDEF __UNICODE__
    AttachWndProc equ <__imp_AttachWndProcA>
  ENDIF

externdef __imp_AttachWndProcW:PPROC
AttachWndProcW equ <__imp_AttachWndProcW>
  IFDEF __UNICODE__
    AttachWndProc equ <__imp_AttachWndProcW>
  ENDIF

externdef __imp_AutoTrace:PPROC
AutoTrace equ <__imp_AutoTrace>

externdef __imp_BeginTransition:PPROC
BeginTransition equ <__imp_BeginTransition>

externdef __imp_BuildAnimation:PPROC
BuildAnimation equ <__imp_BuildAnimation>

externdef __imp_BuildDropTarget:PPROC
BuildDropTarget equ <__imp_BuildDropTarget>

externdef __imp_BuildInterpolation:PPROC
BuildInterpolation equ <__imp_BuildInterpolation>

externdef __imp_CreateAction:PPROC
CreateAction equ <__imp_CreateAction>

externdef __imp_CreateGadget:PPROC
CreateGadget equ <__imp_CreateGadget>

externdef __imp_CreateTransition:PPROC
CreateTransition equ <__imp_CreateTransition>

externdef __imp_DUserBuildGadget:PPROC
DUserBuildGadget equ <__imp_DUserBuildGadget>

externdef __imp_DUserCastClass:PPROC
DUserCastClass equ <__imp_DUserCastClass>

externdef __imp_DUserCastDirect:PPROC
DUserCastDirect equ <__imp_DUserCastDirect>

externdef __imp_DUserCastHandle:PPROC
DUserCastHandle equ <__imp_DUserCastHandle>

externdef __imp_DUserDeleteGadget:PPROC
DUserDeleteGadget equ <__imp_DUserDeleteGadget>

externdef __imp_DUserFindClass:PPROC
DUserFindClass equ <__imp_DUserFindClass>

externdef __imp_DUserGetAlphaPRID:PPROC
DUserGetAlphaPRID equ <__imp_DUserGetAlphaPRID>

externdef __imp_DUserGetGutsData:PPROC
DUserGetGutsData equ <__imp_DUserGetGutsData>

externdef __imp_DUserGetRectPRID:PPROC
DUserGetRectPRID equ <__imp_DUserGetRectPRID>

externdef __imp_DUserGetRotatePRID:PPROC
DUserGetRotatePRID equ <__imp_DUserGetRotatePRID>

externdef __imp_DUserGetScalePRID:PPROC
DUserGetScalePRID equ <__imp_DUserGetScalePRID>

externdef __imp_DUserInstanceOf:PPROC
DUserInstanceOf equ <__imp_DUserInstanceOf>

externdef __imp_DUserPostEvent:PPROC
DUserPostEvent equ <__imp_DUserPostEvent>

externdef __imp_DUserPostMethod:PPROC
DUserPostMethod equ <__imp_DUserPostMethod>

externdef __imp_DUserRegisterGuts:PPROC
DUserRegisterGuts equ <__imp_DUserRegisterGuts>

externdef __imp_DUserRegisterStub:PPROC
DUserRegisterStub equ <__imp_DUserRegisterStub>

externdef __imp_DUserRegisterSuper:PPROC
DUserRegisterSuper equ <__imp_DUserRegisterSuper>

externdef __imp_DUserSendEvent:PPROC
DUserSendEvent equ <__imp_DUserSendEvent>

externdef __imp_DUserSendMethod:PPROC
DUserSendMethod equ <__imp_DUserSendMethod>

externdef __imp_DUserStopAnimation:PPROC
DUserStopAnimation equ <__imp_DUserStopAnimation>

externdef __imp_DeleteHandle:PPROC
DeleteHandle equ <__imp_DeleteHandle>

externdef __imp_DetachWndProc:PPROC
DetachWndProc equ <__imp_DetachWndProc>

externdef __imp_DllMain:PPROC
DllMain equ <__imp_DllMain>

externdef __imp_DrawGadgetTree:PPROC
DrawGadgetTree equ <__imp_DrawGadgetTree>

externdef __imp_EndTransition:PPROC
EndTransition equ <__imp_EndTransition>

externdef __imp_EnumGadgets:PPROC
EnumGadgets equ <__imp_EnumGadgets>

externdef __imp_FindGadgetFromPoint:PPROC
FindGadgetFromPoint equ <__imp_FindGadgetFromPoint>

externdef __imp_FindGadgetMessages:PPROC
FindGadgetMessages equ <__imp_FindGadgetMessages>

externdef __imp_FindStdColor:PPROC
FindStdColor equ <__imp_FindStdColor>

externdef __imp_FireGadgetMessages:PPROC
FireGadgetMessages equ <__imp_FireGadgetMessages>

externdef __imp_ForwardGadgetMessage:PPROC
ForwardGadgetMessage equ <__imp_ForwardGadgetMessage>

externdef __imp_GetActionTimeslice:PPROC
GetActionTimeslice equ <__imp_GetActionTimeslice>

externdef __imp_GetDebug:PPROC
GetDebug equ <__imp_GetDebug>

externdef __imp_GetGadget:PPROC
GetGadget equ <__imp_GetGadget>

externdef __imp_GetGadgetAnimation:PPROC
GetGadgetAnimation equ <__imp_GetGadgetAnimation>

externdef __imp_GetGadgetBufferInfo:PPROC
GetGadgetBufferInfo equ <__imp_GetGadgetBufferInfo>

externdef __imp_GetGadgetCenterPoint:PPROC
GetGadgetCenterPoint equ <__imp_GetGadgetCenterPoint>

externdef __imp_GetGadgetFocus:PPROC
GetGadgetFocus equ <__imp_GetGadgetFocus>

externdef __imp_GetGadgetMessageFilter:PPROC
GetGadgetMessageFilter equ <__imp_GetGadgetMessageFilter>

externdef __imp_GetGadgetProperty:PPROC
GetGadgetProperty equ <__imp_GetGadgetProperty>

externdef __imp_GetGadgetRect:PPROC
GetGadgetRect equ <__imp_GetGadgetRect>

externdef __imp_GetGadgetRgn:PPROC
GetGadgetRgn equ <__imp_GetGadgetRgn>

externdef __imp_GetGadgetRootInfo:PPROC
GetGadgetRootInfo equ <__imp_GetGadgetRootInfo>

externdef __imp_GetGadgetRotation:PPROC
GetGadgetRotation equ <__imp_GetGadgetRotation>

externdef __imp_GetGadgetScale:PPROC
GetGadgetScale equ <__imp_GetGadgetScale>

externdef __imp_GetGadgetSize:PPROC
GetGadgetSize equ <__imp_GetGadgetSize>

externdef __imp_GetGadgetStyle:PPROC
GetGadgetStyle equ <__imp_GetGadgetStyle>

externdef __imp_GetGadgetTicket:PPROC
GetGadgetTicket equ <__imp_GetGadgetTicket>

externdef __imp_GetMessageExA:PPROC
GetMessageExA equ <__imp_GetMessageExA>
  IFNDEF __UNICODE__
    GetMessageEx equ <__imp_GetMessageExA>
  ENDIF

externdef __imp_GetMessageExW:PPROC
GetMessageExW equ <__imp_GetMessageExW>
  IFDEF __UNICODE__
    GetMessageEx equ <__imp_GetMessageExW>
  ENDIF

externdef __imp_GetStdColorBrushF:PPROC
GetStdColorBrushF equ <__imp_GetStdColorBrushF>

externdef __imp_GetStdColorBrushI:PPROC
GetStdColorBrushI equ <__imp_GetStdColorBrushI>

externdef __imp_GetStdColorF:PPROC
GetStdColorF equ <__imp_GetStdColorF>

externdef __imp_GetStdColorI:PPROC
GetStdColorI equ <__imp_GetStdColorI>

externdef __imp_GetStdColorName:PPROC
GetStdColorName equ <__imp_GetStdColorName>

externdef __imp_GetStdColorPenF:PPROC
GetStdColorPenF equ <__imp_GetStdColorPenF>

externdef __imp_GetStdColorPenI:PPROC
GetStdColorPenI equ <__imp_GetStdColorPenI>

externdef __imp_GetStdPalette:PPROC
GetStdPalette equ <__imp_GetStdPalette>

externdef __imp_GetTransitionInterface:PPROC
GetTransitionInterface equ <__imp_GetTransitionInterface>

externdef __imp_InitGadgetComponent:PPROC
InitGadgetComponent equ <__imp_InitGadgetComponent>

externdef __imp_InitGadgets:PPROC
InitGadgets equ <__imp_InitGadgets>

externdef __imp_InvalidateGadget:PPROC
InvalidateGadget equ <__imp_InvalidateGadget>

externdef __imp_IsGadgetParentChainStyle:PPROC
IsGadgetParentChainStyle equ <__imp_IsGadgetParentChainStyle>

externdef __imp_IsInsideContext:PPROC
IsInsideContext equ <__imp_IsInsideContext>

externdef __imp_IsStartDelete:PPROC
IsStartDelete equ <__imp_IsStartDelete>

externdef __imp_LookupGadgetTicket:PPROC
LookupGadgetTicket equ <__imp_LookupGadgetTicket>

externdef __imp_MapGadgetPoints:PPROC
MapGadgetPoints equ <__imp_MapGadgetPoints>

externdef __imp_PeekMessageExA:PPROC
PeekMessageExA equ <__imp_PeekMessageExA>
  IFNDEF __UNICODE__
    PeekMessageEx equ <__imp_PeekMessageExA>
  ENDIF

externdef __imp_PeekMessageExW:PPROC
PeekMessageExW equ <__imp_PeekMessageExW>
  IFDEF __UNICODE__
    PeekMessageEx equ <__imp_PeekMessageExW>
  ENDIF

externdef __imp_PlayTransition:PPROC
PlayTransition equ <__imp_PlayTransition>

externdef __imp_PrintTransition:PPROC
PrintTransition equ <__imp_PrintTransition>

externdef __imp_RegisterGadgetMessage:PPROC
RegisterGadgetMessage equ <__imp_RegisterGadgetMessage>

externdef __imp_RegisterGadgetMessageString:PPROC
RegisterGadgetMessageString equ <__imp_RegisterGadgetMessageString>

externdef __imp_RegisterGadgetProperty:PPROC
RegisterGadgetProperty equ <__imp_RegisterGadgetProperty>

externdef __imp_RemoveGadgetMessageHandler:PPROC
RemoveGadgetMessageHandler equ <__imp_RemoveGadgetMessageHandler>

externdef __imp_RemoveGadgetProperty:PPROC
RemoveGadgetProperty equ <__imp_RemoveGadgetProperty>

externdef __imp_SetActionTimeslice:PPROC
SetActionTimeslice equ <__imp_SetActionTimeslice>

externdef __imp_SetGadgetBufferInfo:PPROC
SetGadgetBufferInfo equ <__imp_SetGadgetBufferInfo>

externdef __imp_SetGadgetCenterPoint:PPROC
SetGadgetCenterPoint equ <__imp_SetGadgetCenterPoint>

externdef __imp_SetGadgetFillF:PPROC
SetGadgetFillF equ <__imp_SetGadgetFillF>

externdef __imp_SetGadgetFillI:PPROC
SetGadgetFillI equ <__imp_SetGadgetFillI>

externdef __imp_SetGadgetFocus:PPROC
SetGadgetFocus equ <__imp_SetGadgetFocus>

externdef __imp_SetGadgetMessageFilter:PPROC
SetGadgetMessageFilter equ <__imp_SetGadgetMessageFilter>

externdef __imp_SetGadgetOrder:PPROC
SetGadgetOrder equ <__imp_SetGadgetOrder>

externdef __imp_SetGadgetParent:PPROC
SetGadgetParent equ <__imp_SetGadgetParent>

externdef __imp_SetGadgetProperty:PPROC
SetGadgetProperty equ <__imp_SetGadgetProperty>

externdef __imp_SetGadgetRect:PPROC
SetGadgetRect equ <__imp_SetGadgetRect>

externdef __imp_SetGadgetRootInfo:PPROC
SetGadgetRootInfo equ <__imp_SetGadgetRootInfo>

externdef __imp_SetGadgetRotation:PPROC
SetGadgetRotation equ <__imp_SetGadgetRotation>

externdef __imp_SetGadgetScale:PPROC
SetGadgetScale equ <__imp_SetGadgetScale>

externdef __imp_SetGadgetStyle:PPROC
SetGadgetStyle equ <__imp_SetGadgetStyle>

externdef __imp_UninitGadgetComponent:PPROC
UninitGadgetComponent equ <__imp_UninitGadgetComponent>

externdef __imp_UnregisterGadgetMessage:PPROC
UnregisterGadgetMessage equ <__imp_UnregisterGadgetMessage>

externdef __imp_UnregisterGadgetMessageString:PPROC
UnregisterGadgetMessageString equ <__imp_UnregisterGadgetMessageString>

externdef __imp_UnregisterGadgetProperty:PPROC
UnregisterGadgetProperty equ <__imp_UnregisterGadgetProperty>

externdef __imp_UtilBuildFont:PPROC
UtilBuildFont equ <__imp_UtilBuildFont>

externdef __imp_UtilDrawBlendRect:PPROC
UtilDrawBlendRect equ <__imp_UtilDrawBlendRect>

externdef __imp_UtilDrawOutlineRect:PPROC
UtilDrawOutlineRect equ <__imp_UtilDrawOutlineRect>

externdef __imp_UtilGetColor:PPROC
UtilGetColor equ <__imp_UtilGetColor>

externdef __imp_UtilSetBackground:PPROC
UtilSetBackground equ <__imp_UtilSetBackground>

externdef __imp_WaitMessageEx:PPROC
WaitMessageEx equ <__imp_WaitMessageEx>
