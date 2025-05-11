externdef __imp_DrawDibBegin:PPROC
DrawDibBegin equ <__imp_DrawDibBegin>

externdef __imp_DrawDibChangePalette:PPROC
DrawDibChangePalette equ <__imp_DrawDibChangePalette>

externdef __imp_DrawDibClose:PPROC
DrawDibClose equ <__imp_DrawDibClose>

externdef __imp_DrawDibDraw:PPROC
DrawDibDraw equ <__imp_DrawDibDraw>

externdef __imp_DrawDibEnd:PPROC
DrawDibEnd equ <__imp_DrawDibEnd>

externdef __imp_DrawDibGetBuffer:PPROC
DrawDibGetBuffer equ <__imp_DrawDibGetBuffer>

externdef __imp_DrawDibGetPalette:PPROC
DrawDibGetPalette equ <__imp_DrawDibGetPalette>

externdef __imp_DrawDibOpen:PPROC
DrawDibOpen equ <__imp_DrawDibOpen>

externdef __imp_DrawDibProfileDisplay:PPROC
DrawDibProfileDisplay equ <__imp_DrawDibProfileDisplay>

externdef __imp_DrawDibRealize:PPROC
DrawDibRealize equ <__imp_DrawDibRealize>

externdef __imp_DrawDibSetPalette:PPROC
DrawDibSetPalette equ <__imp_DrawDibSetPalette>

externdef __imp_DrawDibStart:PPROC
DrawDibStart equ <__imp_DrawDibStart>

externdef __imp_DrawDibStop:PPROC
DrawDibStop equ <__imp_DrawDibStop>

externdef __imp_DrawDibTime:PPROC
DrawDibTime equ <__imp_DrawDibTime>

externdef __imp_GetOpenFileNamePreview:PPROC
GetOpenFileNamePreview equ <__imp_GetOpenFileNamePreview>

externdef __imp_GetOpenFileNamePreviewA:PPROC
GetOpenFileNamePreviewA equ <__imp_GetOpenFileNamePreviewA>
  IFNDEF __UNICODE__
    GetOpenFileNamePreview equ <__imp_GetOpenFileNamePreviewA>
  ENDIF

externdef __imp_GetOpenFileNamePreviewW:PPROC
GetOpenFileNamePreviewW equ <__imp_GetOpenFileNamePreviewW>
  IFDEF __UNICODE__
    GetOpenFileNamePreview equ <__imp_GetOpenFileNamePreviewW>
  ENDIF

externdef __imp_GetSaveFileNamePreviewA:PPROC
GetSaveFileNamePreviewA equ <__imp_GetSaveFileNamePreviewA>
  IFNDEF __UNICODE__
    GetSaveFileNamePreview equ <__imp_GetSaveFileNamePreviewA>
  ENDIF

externdef __imp_GetSaveFileNamePreviewW:PPROC
GetSaveFileNamePreviewW equ <__imp_GetSaveFileNamePreviewW>
  IFDEF __UNICODE__
    GetSaveFileNamePreview equ <__imp_GetSaveFileNamePreviewW>
  ENDIF

externdef __imp_ICClose:PPROC
ICClose equ <__imp_ICClose>

externdef __imp_ICCompress:PPROC
ICCompress equ <__imp_ICCompress>

externdef __imp_ICCompressorChoose:PPROC
ICCompressorChoose equ <__imp_ICCompressorChoose>

externdef __imp_ICCompressorFree:PPROC
ICCompressorFree equ <__imp_ICCompressorFree>

externdef __imp_ICDecompress:PPROC
ICDecompress equ <__imp_ICDecompress>

externdef __imp_ICDraw:PPROC
ICDraw equ <__imp_ICDraw>

externdef __imp_ICDrawBegin:PPROC
ICDrawBegin equ <__imp_ICDrawBegin>

externdef __imp_ICGetDisplayFormat:PPROC
ICGetDisplayFormat equ <__imp_ICGetDisplayFormat>

externdef __imp_ICGetInfo:PPROC
ICGetInfo equ <__imp_ICGetInfo>

externdef __imp_ICImageCompress:PPROC
ICImageCompress equ <__imp_ICImageCompress>

externdef __imp_ICImageDecompress:PPROC
ICImageDecompress equ <__imp_ICImageDecompress>

externdef __imp_ICInfo:PPROC
ICInfo equ <__imp_ICInfo>

externdef __imp_ICInstall:PPROC
ICInstall equ <__imp_ICInstall>

externdef __imp_ICLocate:PPROC
ICLocate equ <__imp_ICLocate>

externdef __imp_ICMThunk32:PPROC
ICMThunk32 equ <__imp_ICMThunk32>

externdef __imp_ICOpen:PPROC
ICOpen equ <__imp_ICOpen>

externdef __imp_ICOpenFunction:PPROC
ICOpenFunction equ <__imp_ICOpenFunction>

externdef __imp_ICRemove:PPROC
ICRemove equ <__imp_ICRemove>

externdef __imp_ICSendMessage:PPROC
ICSendMessage equ <__imp_ICSendMessage>

externdef __imp_ICSeqCompressFrame:PPROC
ICSeqCompressFrame equ <__imp_ICSeqCompressFrame>

externdef __imp_ICSeqCompressFrameEnd:PPROC
ICSeqCompressFrameEnd equ <__imp_ICSeqCompressFrameEnd>

externdef __imp_ICSeqCompressFrameStart:PPROC
ICSeqCompressFrameStart equ <__imp_ICSeqCompressFrameStart>

externdef __imp_MCIWndCreate:PPROC
MCIWndCreate equ <__imp_MCIWndCreate>

externdef __imp_MCIWndCreateA:PPROC
MCIWndCreateA equ <__imp_MCIWndCreateA>
  IFNDEF __UNICODE__
    MCIWndCreate equ <__imp_MCIWndCreateA>
  ENDIF

externdef __imp_MCIWndCreateW:PPROC
MCIWndCreateW equ <__imp_MCIWndCreateW>
  IFDEF __UNICODE__
    MCIWndCreate equ <__imp_MCIWndCreateW>
  ENDIF

externdef __imp_MCIWndRegisterClass:PPROC
MCIWndRegisterClass equ <__imp_MCIWndRegisterClass>

externdef __imp_StretchDIB:PPROC
StretchDIB equ <__imp_StretchDIB>

externdef __imp_VideoForWindowsVersion:PPROC
VideoForWindowsVersion equ <__imp_VideoForWindowsVersion>
