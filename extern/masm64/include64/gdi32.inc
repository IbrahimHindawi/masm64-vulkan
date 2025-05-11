externdef __imp_AbortDoc:PPROC
AbortDoc equ <__imp_AbortDoc>

externdef __imp_AbortPath:PPROC
AbortPath equ <__imp_AbortPath>

externdef __imp_AddFontMemResourceEx:PPROC
AddFontMemResourceEx equ <__imp_AddFontMemResourceEx>

externdef __imp_AddFontResourceA:PPROC
AddFontResourceA equ <__imp_AddFontResourceA>
  IFNDEF __UNICODE__
    AddFontResource equ <__imp_AddFontResourceA>
  ENDIF

externdef __imp_AddFontResourceExA:PPROC
AddFontResourceExA equ <__imp_AddFontResourceExA>
  IFNDEF __UNICODE__
    AddFontResourceEx equ <__imp_AddFontResourceExA>
  ENDIF

externdef __imp_AddFontResourceExW:PPROC
AddFontResourceExW equ <__imp_AddFontResourceExW>
  IFDEF __UNICODE__
    AddFontResourceEx equ <__imp_AddFontResourceExW>
  ENDIF

externdef __imp_AddFontResourceTracking:PPROC
AddFontResourceTracking equ <__imp_AddFontResourceTracking>

externdef __imp_AddFontResourceW:PPROC
AddFontResourceW equ <__imp_AddFontResourceW>
  IFDEF __UNICODE__
    AddFontResource equ <__imp_AddFontResourceW>
  ENDIF

externdef __imp_AngleArc:PPROC
AngleArc equ <__imp_AngleArc>

externdef __imp_AnimatePalette:PPROC
AnimatePalette equ <__imp_AnimatePalette>

externdef __imp_AnyLinkedFonts:PPROC
AnyLinkedFonts equ <__imp_AnyLinkedFonts>

externdef __imp_Arc:PPROC
Arc equ <__imp_Arc>

externdef __imp_ArcTo:PPROC
ArcTo equ <__imp_ArcTo>

externdef __imp_BRUSHOBJ_hGetColorTransform:PPROC
BRUSHOBJ_hGetColorTransform equ <__imp_BRUSHOBJ_hGetColorTransform>

externdef __imp_BRUSHOBJ_pvAllocRbrush:PPROC
BRUSHOBJ_pvAllocRbrush equ <__imp_BRUSHOBJ_pvAllocRbrush>

externdef __imp_BRUSHOBJ_pvGetRbrush:PPROC
BRUSHOBJ_pvGetRbrush equ <__imp_BRUSHOBJ_pvGetRbrush>

externdef __imp_BRUSHOBJ_ulGetBrushColor:PPROC
BRUSHOBJ_ulGetBrushColor equ <__imp_BRUSHOBJ_ulGetBrushColor>

externdef __imp_BeginPath:PPROC
BeginPath equ <__imp_BeginPath>

externdef __imp_BitBlt:PPROC
BitBlt equ <__imp_BitBlt>

externdef __imp_CLIPOBJ_bEnum:PPROC
CLIPOBJ_bEnum equ <__imp_CLIPOBJ_bEnum>

externdef __imp_CLIPOBJ_cEnumStart:PPROC
CLIPOBJ_cEnumStart equ <__imp_CLIPOBJ_cEnumStart>

externdef __imp_CLIPOBJ_ppoGetPath:PPROC
CLIPOBJ_ppoGetPath equ <__imp_CLIPOBJ_ppoGetPath>

externdef __imp_CancelDC:PPROC
CancelDC equ <__imp_CancelDC>

externdef __imp_CheckColorsInGamut:PPROC
CheckColorsInGamut equ <__imp_CheckColorsInGamut>

externdef __imp_ChoosePixelFormat:PPROC
ChoosePixelFormat equ <__imp_ChoosePixelFormat>

externdef __imp_Chord:PPROC
Chord equ <__imp_Chord>

externdef __imp_ClearBitmapAttributes:PPROC
ClearBitmapAttributes equ <__imp_ClearBitmapAttributes>

externdef __imp_ClearBrushAttributes:PPROC
ClearBrushAttributes equ <__imp_ClearBrushAttributes>

externdef __imp_CloseEnhMetaFile:PPROC
CloseEnhMetaFile equ <__imp_CloseEnhMetaFile>

externdef __imp_CloseFigure:PPROC
CloseFigure equ <__imp_CloseFigure>

externdef __imp_CloseMetaFile:PPROC
CloseMetaFile equ <__imp_CloseMetaFile>

externdef __imp_ColorCorrectPalette:PPROC
ColorCorrectPalette equ <__imp_ColorCorrectPalette>

externdef __imp_ColorMatchToTarget:PPROC
ColorMatchToTarget equ <__imp_ColorMatchToTarget>

externdef __imp_CombineRgn:PPROC
CombineRgn equ <__imp_CombineRgn>

externdef __imp_CombineTransform:PPROC
CombineTransform equ <__imp_CombineTransform>

externdef __imp_CopyEnhMetaFileA:PPROC
CopyEnhMetaFileA equ <__imp_CopyEnhMetaFileA>
  IFNDEF __UNICODE__
    CopyEnhMetaFile equ <__imp_CopyEnhMetaFileA>
  ENDIF

externdef __imp_CopyEnhMetaFileW:PPROC
CopyEnhMetaFileW equ <__imp_CopyEnhMetaFileW>
  IFDEF __UNICODE__
    CopyEnhMetaFile equ <__imp_CopyEnhMetaFileW>
  ENDIF

externdef __imp_CopyMetaFileA:PPROC
CopyMetaFileA equ <__imp_CopyMetaFileA>
  IFNDEF __UNICODE__
    CopyMetaFile equ <__imp_CopyMetaFileA>
  ENDIF

externdef __imp_CopyMetaFileW:PPROC
CopyMetaFileW equ <__imp_CopyMetaFileW>
  IFDEF __UNICODE__
    CopyMetaFile equ <__imp_CopyMetaFileW>
  ENDIF

externdef __imp_CreateBitmap:PPROC
CreateBitmap equ <__imp_CreateBitmap>

externdef __imp_CreateBitmapIndirect:PPROC
CreateBitmapIndirect equ <__imp_CreateBitmapIndirect>

externdef __imp_CreateBrushIndirect:PPROC
CreateBrushIndirect equ <__imp_CreateBrushIndirect>

externdef __imp_CreateColorSpaceA:PPROC
CreateColorSpaceA equ <__imp_CreateColorSpaceA>
  IFNDEF __UNICODE__
    CreateColorSpace equ <__imp_CreateColorSpaceA>
  ENDIF

externdef __imp_CreateColorSpaceW:PPROC
CreateColorSpaceW equ <__imp_CreateColorSpaceW>
  IFDEF __UNICODE__
    CreateColorSpace equ <__imp_CreateColorSpaceW>
  ENDIF

externdef __imp_CreateCompatibleBitmap:PPROC
CreateCompatibleBitmap equ <__imp_CreateCompatibleBitmap>

externdef __imp_CreateCompatibleDC:PPROC
CreateCompatibleDC equ <__imp_CreateCompatibleDC>

externdef __imp_CreateDCA:PPROC
CreateDCA equ <__imp_CreateDCA>
  IFNDEF __UNICODE__
    CreateDC equ <__imp_CreateDCA>
  ENDIF

externdef __imp_CreateDCW:PPROC
CreateDCW equ <__imp_CreateDCW>
  IFDEF __UNICODE__
    CreateDC equ <__imp_CreateDCW>
  ENDIF

externdef __imp_CreateDIBPatternBrush:PPROC
CreateDIBPatternBrush equ <__imp_CreateDIBPatternBrush>

externdef __imp_CreateDIBPatternBrushPt:PPROC
CreateDIBPatternBrushPt equ <__imp_CreateDIBPatternBrushPt>

externdef __imp_CreateDIBSection:PPROC
CreateDIBSection equ <__imp_CreateDIBSection>

externdef __imp_CreateDIBitmap:PPROC
CreateDIBitmap equ <__imp_CreateDIBitmap>

externdef __imp_CreateDiscardableBitmap:PPROC
CreateDiscardableBitmap equ <__imp_CreateDiscardableBitmap>

externdef __imp_CreateEllipticRgn:PPROC
CreateEllipticRgn equ <__imp_CreateEllipticRgn>

externdef __imp_CreateEllipticRgnIndirect:PPROC
CreateEllipticRgnIndirect equ <__imp_CreateEllipticRgnIndirect>

externdef __imp_CreateEnhMetaFileA:PPROC
CreateEnhMetaFileA equ <__imp_CreateEnhMetaFileA>
  IFNDEF __UNICODE__
    CreateEnhMetaFile equ <__imp_CreateEnhMetaFileA>
  ENDIF

externdef __imp_CreateEnhMetaFileW:PPROC
CreateEnhMetaFileW equ <__imp_CreateEnhMetaFileW>
  IFDEF __UNICODE__
    CreateEnhMetaFile equ <__imp_CreateEnhMetaFileW>
  ENDIF

externdef __imp_CreateFontA:PPROC
CreateFontA equ <__imp_CreateFontA>
  IFNDEF __UNICODE__
    CreateFont equ <__imp_CreateFontA>
  ENDIF

externdef __imp_CreateFontIndirectA:PPROC
CreateFontIndirectA equ <__imp_CreateFontIndirectA>
  IFNDEF __UNICODE__
    CreateFontIndirect equ <__imp_CreateFontIndirectA>
  ENDIF

externdef __imp_CreateFontIndirectExA:PPROC
CreateFontIndirectExA equ <__imp_CreateFontIndirectExA>
  IFNDEF __UNICODE__
    CreateFontIndirectEx equ <__imp_CreateFontIndirectExA>
  ENDIF

externdef __imp_CreateFontIndirectExW:PPROC
CreateFontIndirectExW equ <__imp_CreateFontIndirectExW>
  IFDEF __UNICODE__
    CreateFontIndirectEx equ <__imp_CreateFontIndirectExW>
  ENDIF

externdef __imp_CreateFontIndirectW:PPROC
CreateFontIndirectW equ <__imp_CreateFontIndirectW>
  IFDEF __UNICODE__
    CreateFontIndirect equ <__imp_CreateFontIndirectW>
  ENDIF

externdef __imp_CreateFontW:PPROC
CreateFontW equ <__imp_CreateFontW>
  IFDEF __UNICODE__
    CreateFont equ <__imp_CreateFontW>
  ENDIF

externdef __imp_CreateHalftonePalette:PPROC
CreateHalftonePalette equ <__imp_CreateHalftonePalette>

externdef __imp_CreateHatchBrush:PPROC
CreateHatchBrush equ <__imp_CreateHatchBrush>

externdef __imp_CreateICA:PPROC
CreateICA equ <__imp_CreateICA>
  IFNDEF __UNICODE__
    CreateIC equ <__imp_CreateICA>
  ENDIF

externdef __imp_CreateICW:PPROC
CreateICW equ <__imp_CreateICW>
  IFDEF __UNICODE__
    CreateIC equ <__imp_CreateICW>
  ENDIF

externdef __imp_CreateMetaFileA:PPROC
CreateMetaFileA equ <__imp_CreateMetaFileA>
  IFNDEF __UNICODE__
    CreateMetaFile equ <__imp_CreateMetaFileA>
  ENDIF

externdef __imp_CreateMetaFileW:PPROC
CreateMetaFileW equ <__imp_CreateMetaFileW>
  IFDEF __UNICODE__
    CreateMetaFile equ <__imp_CreateMetaFileW>
  ENDIF

externdef __imp_CreatePalette:PPROC
CreatePalette equ <__imp_CreatePalette>

externdef __imp_CreatePatternBrush:PPROC
CreatePatternBrush equ <__imp_CreatePatternBrush>

externdef __imp_CreatePen:PPROC
CreatePen equ <__imp_CreatePen>

externdef __imp_CreatePenIndirect:PPROC
CreatePenIndirect equ <__imp_CreatePenIndirect>

externdef __imp_CreatePolyPolygonRgn:PPROC
CreatePolyPolygonRgn equ <__imp_CreatePolyPolygonRgn>

externdef __imp_CreatePolygonRgn:PPROC
CreatePolygonRgn equ <__imp_CreatePolygonRgn>

externdef __imp_CreateRectRgn:PPROC
CreateRectRgn equ <__imp_CreateRectRgn>

externdef __imp_CreateRectRgnIndirect:PPROC
CreateRectRgnIndirect equ <__imp_CreateRectRgnIndirect>

externdef __imp_CreateRoundRectRgn:PPROC
CreateRoundRectRgn equ <__imp_CreateRoundRectRgn>

externdef __imp_CreateScalableFontResourceA:PPROC
CreateScalableFontResourceA equ <__imp_CreateScalableFontResourceA>
  IFNDEF __UNICODE__
    CreateScalableFontResource equ <__imp_CreateScalableFontResourceA>
  ENDIF

externdef __imp_CreateScalableFontResourceW:PPROC
CreateScalableFontResourceW equ <__imp_CreateScalableFontResourceW>
  IFDEF __UNICODE__
    CreateScalableFontResource equ <__imp_CreateScalableFontResourceW>
  ENDIF

externdef __imp_CreateSolidBrush:PPROC
CreateSolidBrush equ <__imp_CreateSolidBrush>

externdef __imp_DPtoLP:PPROC
DPtoLP equ <__imp_DPtoLP>

externdef __imp_DdEntry0:PPROC
DdEntry0 equ <__imp_DdEntry0>

externdef __imp_DdEntry10:PPROC
DdEntry10 equ <__imp_DdEntry10>

externdef __imp_DdEntry11:PPROC
DdEntry11 equ <__imp_DdEntry11>

externdef __imp_DdEntry12:PPROC
DdEntry12 equ <__imp_DdEntry12>

externdef __imp_DdEntry13:PPROC
DdEntry13 equ <__imp_DdEntry13>

externdef __imp_DdEntry14:PPROC
DdEntry14 equ <__imp_DdEntry14>

externdef __imp_DdEntry15:PPROC
DdEntry15 equ <__imp_DdEntry15>

externdef __imp_DdEntry16:PPROC
DdEntry16 equ <__imp_DdEntry16>

externdef __imp_DdEntry17:PPROC
DdEntry17 equ <__imp_DdEntry17>

externdef __imp_DdEntry18:PPROC
DdEntry18 equ <__imp_DdEntry18>

externdef __imp_DdEntry19:PPROC
DdEntry19 equ <__imp_DdEntry19>

externdef __imp_DdEntry1:PPROC
DdEntry1 equ <__imp_DdEntry1>

externdef __imp_DdEntry20:PPROC
DdEntry20 equ <__imp_DdEntry20>

externdef __imp_DdEntry21:PPROC
DdEntry21 equ <__imp_DdEntry21>

externdef __imp_DdEntry22:PPROC
DdEntry22 equ <__imp_DdEntry22>

externdef __imp_DdEntry23:PPROC
DdEntry23 equ <__imp_DdEntry23>

externdef __imp_DdEntry24:PPROC
DdEntry24 equ <__imp_DdEntry24>

externdef __imp_DdEntry25:PPROC
DdEntry25 equ <__imp_DdEntry25>

externdef __imp_DdEntry26:PPROC
DdEntry26 equ <__imp_DdEntry26>

externdef __imp_DdEntry27:PPROC
DdEntry27 equ <__imp_DdEntry27>

externdef __imp_DdEntry28:PPROC
DdEntry28 equ <__imp_DdEntry28>

externdef __imp_DdEntry29:PPROC
DdEntry29 equ <__imp_DdEntry29>

externdef __imp_DdEntry2:PPROC
DdEntry2 equ <__imp_DdEntry2>

externdef __imp_DdEntry30:PPROC
DdEntry30 equ <__imp_DdEntry30>

externdef __imp_DdEntry31:PPROC
DdEntry31 equ <__imp_DdEntry31>

externdef __imp_DdEntry32:PPROC
DdEntry32 equ <__imp_DdEntry32>

externdef __imp_DdEntry33:PPROC
DdEntry33 equ <__imp_DdEntry33>

externdef __imp_DdEntry34:PPROC
DdEntry34 equ <__imp_DdEntry34>

externdef __imp_DdEntry35:PPROC
DdEntry35 equ <__imp_DdEntry35>

externdef __imp_DdEntry36:PPROC
DdEntry36 equ <__imp_DdEntry36>

externdef __imp_DdEntry37:PPROC
DdEntry37 equ <__imp_DdEntry37>

externdef __imp_DdEntry38:PPROC
DdEntry38 equ <__imp_DdEntry38>

externdef __imp_DdEntry39:PPROC
DdEntry39 equ <__imp_DdEntry39>

externdef __imp_DdEntry3:PPROC
DdEntry3 equ <__imp_DdEntry3>

externdef __imp_DdEntry40:PPROC
DdEntry40 equ <__imp_DdEntry40>

externdef __imp_DdEntry41:PPROC
DdEntry41 equ <__imp_DdEntry41>

externdef __imp_DdEntry42:PPROC
DdEntry42 equ <__imp_DdEntry42>

externdef __imp_DdEntry43:PPROC
DdEntry43 equ <__imp_DdEntry43>

externdef __imp_DdEntry44:PPROC
DdEntry44 equ <__imp_DdEntry44>

externdef __imp_DdEntry45:PPROC
DdEntry45 equ <__imp_DdEntry45>

externdef __imp_DdEntry46:PPROC
DdEntry46 equ <__imp_DdEntry46>

externdef __imp_DdEntry47:PPROC
DdEntry47 equ <__imp_DdEntry47>

externdef __imp_DdEntry48:PPROC
DdEntry48 equ <__imp_DdEntry48>

externdef __imp_DdEntry49:PPROC
DdEntry49 equ <__imp_DdEntry49>

externdef __imp_DdEntry4:PPROC
DdEntry4 equ <__imp_DdEntry4>

externdef __imp_DdEntry50:PPROC
DdEntry50 equ <__imp_DdEntry50>

externdef __imp_DdEntry51:PPROC
DdEntry51 equ <__imp_DdEntry51>

externdef __imp_DdEntry52:PPROC
DdEntry52 equ <__imp_DdEntry52>

externdef __imp_DdEntry53:PPROC
DdEntry53 equ <__imp_DdEntry53>

externdef __imp_DdEntry54:PPROC
DdEntry54 equ <__imp_DdEntry54>

externdef __imp_DdEntry55:PPROC
DdEntry55 equ <__imp_DdEntry55>

externdef __imp_DdEntry56:PPROC
DdEntry56 equ <__imp_DdEntry56>

externdef __imp_DdEntry5:PPROC
DdEntry5 equ <__imp_DdEntry5>

externdef __imp_DdEntry6:PPROC
DdEntry6 equ <__imp_DdEntry6>

externdef __imp_DdEntry7:PPROC
DdEntry7 equ <__imp_DdEntry7>

externdef __imp_DdEntry8:PPROC
DdEntry8 equ <__imp_DdEntry8>

externdef __imp_DdEntry9:PPROC
DdEntry9 equ <__imp_DdEntry9>

externdef __imp_DeleteColorSpace:PPROC
DeleteColorSpace equ <__imp_DeleteColorSpace>

externdef __imp_DeleteDC:PPROC
DeleteDC equ <__imp_DeleteDC>

externdef __imp_DeleteEnhMetaFile:PPROC
DeleteEnhMetaFile equ <__imp_DeleteEnhMetaFile>

externdef __imp_DeleteMetaFile:PPROC
DeleteMetaFile equ <__imp_DeleteMetaFile>

externdef __imp_DeleteObject:PPROC
DeleteObject equ <__imp_DeleteObject>

externdef __imp_DescribePixelFormat:PPROC
DescribePixelFormat equ <__imp_DescribePixelFormat>

externdef __imp_DeviceCapabilitiesExA:PPROC
DeviceCapabilitiesExA equ <__imp_DeviceCapabilitiesExA>
  IFNDEF __UNICODE__
    DeviceCapabilitiesEx equ <__imp_DeviceCapabilitiesExA>
  ENDIF

externdef __imp_DeviceCapabilitiesExW:PPROC
DeviceCapabilitiesExW equ <__imp_DeviceCapabilitiesExW>
  IFDEF __UNICODE__
    DeviceCapabilitiesEx equ <__imp_DeviceCapabilitiesExW>
  ENDIF

externdef __imp_DrawEscape:PPROC
DrawEscape equ <__imp_DrawEscape>

externdef __imp_Ellipse:PPROC
Ellipse equ <__imp_Ellipse>

externdef __imp_EnableEUDC:PPROC
EnableEUDC equ <__imp_EnableEUDC>

externdef __imp_EndDoc:PPROC
EndDoc equ <__imp_EndDoc>

externdef __imp_EndFormPage:PPROC
EndFormPage equ <__imp_EndFormPage>

externdef __imp_EndPage:PPROC
EndPage equ <__imp_EndPage>

externdef __imp_EndPath:PPROC
EndPath equ <__imp_EndPath>

externdef __imp_EngAcquireSemaphore:PPROC
EngAcquireSemaphore equ <__imp_EngAcquireSemaphore>

externdef __imp_EngAlphaBlend:PPROC
EngAlphaBlend equ <__imp_EngAlphaBlend>

externdef __imp_EngAssociateSurface:PPROC
EngAssociateSurface equ <__imp_EngAssociateSurface>

externdef __imp_EngBitBlt:PPROC
EngBitBlt equ <__imp_EngBitBlt>

externdef __imp_EngCheckAbort:PPROC
EngCheckAbort equ <__imp_EngCheckAbort>

externdef __imp_EngComputeGlyphSet:PPROC
EngComputeGlyphSet equ <__imp_EngComputeGlyphSet>

externdef __imp_EngCopyBits:PPROC
EngCopyBits equ <__imp_EngCopyBits>

externdef __imp_EngCreateBitmap:PPROC
EngCreateBitmap equ <__imp_EngCreateBitmap>

externdef __imp_EngCreateClip:PPROC
EngCreateClip equ <__imp_EngCreateClip>

externdef __imp_EngCreateDeviceBitmap:PPROC
EngCreateDeviceBitmap equ <__imp_EngCreateDeviceBitmap>

externdef __imp_EngCreateDeviceSurface:PPROC
EngCreateDeviceSurface equ <__imp_EngCreateDeviceSurface>

externdef __imp_EngCreatePalette:PPROC
EngCreatePalette equ <__imp_EngCreatePalette>

externdef __imp_EngCreateSemaphore:PPROC
EngCreateSemaphore equ <__imp_EngCreateSemaphore>

externdef __imp_EngDeleteClip:PPROC
EngDeleteClip equ <__imp_EngDeleteClip>

externdef __imp_EngDeletePalette:PPROC
EngDeletePalette equ <__imp_EngDeletePalette>

externdef __imp_EngDeletePath:PPROC
EngDeletePath equ <__imp_EngDeletePath>

externdef __imp_EngDeleteSemaphore:PPROC
EngDeleteSemaphore equ <__imp_EngDeleteSemaphore>

externdef __imp_EngDeleteSurface:PPROC
EngDeleteSurface equ <__imp_EngDeleteSurface>

externdef __imp_EngEraseSurface:PPROC
EngEraseSurface equ <__imp_EngEraseSurface>

externdef __imp_EngFillPath:PPROC
EngFillPath equ <__imp_EngFillPath>

externdef __imp_EngFindResource:PPROC
EngFindResource equ <__imp_EngFindResource>

externdef __imp_EngFreeModule:PPROC
EngFreeModule equ <__imp_EngFreeModule>

externdef __imp_EngGetCurrentCodePage:PPROC
EngGetCurrentCodePage equ <__imp_EngGetCurrentCodePage>

externdef __imp_EngGetDriverName:PPROC
EngGetDriverName equ <__imp_EngGetDriverName>

externdef __imp_EngGetPrinterDataFileName:PPROC
EngGetPrinterDataFileName equ <__imp_EngGetPrinterDataFileName>

externdef __imp_EngGradientFill:PPROC
EngGradientFill equ <__imp_EngGradientFill>

externdef __imp_EngLineTo:PPROC
EngLineTo equ <__imp_EngLineTo>

externdef __imp_EngLoadModule:PPROC
EngLoadModule equ <__imp_EngLoadModule>

externdef __imp_EngLockSurface:PPROC
EngLockSurface equ <__imp_EngLockSurface>

externdef __imp_EngMarkBandingSurface:PPROC
EngMarkBandingSurface equ <__imp_EngMarkBandingSurface>

externdef __imp_EngMultiByteToUnicodeN:PPROC
EngMultiByteToUnicodeN equ <__imp_EngMultiByteToUnicodeN>

externdef __imp_EngMultiByteToWideChar:PPROC
EngMultiByteToWideChar equ <__imp_EngMultiByteToWideChar>

externdef __imp_EngPaint:PPROC
EngPaint equ <__imp_EngPaint>

externdef __imp_EngPlgBlt:PPROC
EngPlgBlt equ <__imp_EngPlgBlt>

externdef __imp_EngQueryEMFInfo:PPROC
EngQueryEMFInfo equ <__imp_EngQueryEMFInfo>

externdef __imp_EngQueryLocalTime:PPROC
EngQueryLocalTime equ <__imp_EngQueryLocalTime>

externdef __imp_EngReleaseSemaphore:PPROC
EngReleaseSemaphore equ <__imp_EngReleaseSemaphore>

externdef __imp_EngStretchBlt:PPROC
EngStretchBlt equ <__imp_EngStretchBlt>

externdef __imp_EngStretchBltROP:PPROC
EngStretchBltROP equ <__imp_EngStretchBltROP>

externdef __imp_EngStrokeAndFillPath:PPROC
EngStrokeAndFillPath equ <__imp_EngStrokeAndFillPath>

externdef __imp_EngStrokePath:PPROC
EngStrokePath equ <__imp_EngStrokePath>

externdef __imp_EngTextOut:PPROC
EngTextOut equ <__imp_EngTextOut>

externdef __imp_EngTransparentBlt:PPROC
EngTransparentBlt equ <__imp_EngTransparentBlt>

externdef __imp_EngUnicodeToMultiByteN:PPROC
EngUnicodeToMultiByteN equ <__imp_EngUnicodeToMultiByteN>

externdef __imp_EngUnlockSurface:PPROC
EngUnlockSurface equ <__imp_EngUnlockSurface>

externdef __imp_EngWideCharToMultiByte:PPROC
EngWideCharToMultiByte equ <__imp_EngWideCharToMultiByte>

externdef __imp_EnumEnhMetaFile:PPROC
EnumEnhMetaFile equ <__imp_EnumEnhMetaFile>

externdef __imp_EnumFontFamiliesA:PPROC
EnumFontFamiliesA equ <__imp_EnumFontFamiliesA>
  IFNDEF __UNICODE__
    EnumFontFamilies equ <__imp_EnumFontFamiliesA>
  ENDIF

externdef __imp_EnumFontFamiliesExA:PPROC
EnumFontFamiliesExA equ <__imp_EnumFontFamiliesExA>
  IFNDEF __UNICODE__
    EnumFontFamiliesEx equ <__imp_EnumFontFamiliesExA>
  ENDIF

externdef __imp_EnumFontFamiliesExW:PPROC
EnumFontFamiliesExW equ <__imp_EnumFontFamiliesExW>
  IFDEF __UNICODE__
    EnumFontFamiliesEx equ <__imp_EnumFontFamiliesExW>
  ENDIF

externdef __imp_EnumFontFamiliesW:PPROC
EnumFontFamiliesW equ <__imp_EnumFontFamiliesW>
  IFDEF __UNICODE__
    EnumFontFamilies equ <__imp_EnumFontFamiliesW>
  ENDIF

externdef __imp_EnumFontsA:PPROC
EnumFontsA equ <__imp_EnumFontsA>
  IFNDEF __UNICODE__
    EnumFonts equ <__imp_EnumFontsA>
  ENDIF

externdef __imp_EnumFontsW:PPROC
EnumFontsW equ <__imp_EnumFontsW>
  IFDEF __UNICODE__
    EnumFonts equ <__imp_EnumFontsW>
  ENDIF

externdef __imp_EnumICMProfilesA:PPROC
EnumICMProfilesA equ <__imp_EnumICMProfilesA>
  IFNDEF __UNICODE__
    EnumICMProfiles equ <__imp_EnumICMProfilesA>
  ENDIF

externdef __imp_EnumICMProfilesW:PPROC
EnumICMProfilesW equ <__imp_EnumICMProfilesW>
  IFDEF __UNICODE__
    EnumICMProfiles equ <__imp_EnumICMProfilesW>
  ENDIF

externdef __imp_EnumMetaFile:PPROC
EnumMetaFile equ <__imp_EnumMetaFile>

externdef __imp_EnumObjects:PPROC
EnumObjects equ <__imp_EnumObjects>

externdef __imp_EqualRgn:PPROC
EqualRgn equ <__imp_EqualRgn>

externdef __imp_Escape:PPROC
Escape equ <__imp_Escape>

externdef __imp_EudcLoadLinkW:PPROC
EudcLoadLinkW equ <__imp_EudcLoadLinkW>
  IFDEF __UNICODE__
    EudcLoadLink equ <__imp_EudcLoadLinkW>
  ENDIF

externdef __imp_EudcUnloadLinkW:PPROC
EudcUnloadLinkW equ <__imp_EudcUnloadLinkW>
  IFDEF __UNICODE__
    EudcUnloadLink equ <__imp_EudcUnloadLinkW>
  ENDIF

externdef __imp_ExcludeClipRect:PPROC
ExcludeClipRect equ <__imp_ExcludeClipRect>

externdef __imp_ExtCreatePen:PPROC
ExtCreatePen equ <__imp_ExtCreatePen>

externdef __imp_ExtCreateRegion:PPROC
ExtCreateRegion equ <__imp_ExtCreateRegion>

externdef __imp_ExtEscape:PPROC
ExtEscape equ <__imp_ExtEscape>

externdef __imp_ExtFloodFill:PPROC
ExtFloodFill equ <__imp_ExtFloodFill>

externdef __imp_ExtSelectClipRgn:PPROC
ExtSelectClipRgn equ <__imp_ExtSelectClipRgn>

externdef __imp_ExtTextOutA:PPROC
ExtTextOutA equ <__imp_ExtTextOutA>
  IFNDEF __UNICODE__
    ExtTextOut equ <__imp_ExtTextOutA>
  ENDIF

externdef __imp_ExtTextOutW:PPROC
ExtTextOutW equ <__imp_ExtTextOutW>
  IFDEF __UNICODE__
    ExtTextOut equ <__imp_ExtTextOutW>
  ENDIF

externdef __imp_FONTOBJ_cGetAllGlyphHandles:PPROC
FONTOBJ_cGetAllGlyphHandles equ <__imp_FONTOBJ_cGetAllGlyphHandles>

externdef __imp_FONTOBJ_cGetGlyphs:PPROC
FONTOBJ_cGetGlyphs equ <__imp_FONTOBJ_cGetGlyphs>

externdef __imp_FONTOBJ_pQueryGlyphAttrs:PPROC
FONTOBJ_pQueryGlyphAttrs equ <__imp_FONTOBJ_pQueryGlyphAttrs>

externdef __imp_FONTOBJ_pfdg:PPROC
FONTOBJ_pfdg equ <__imp_FONTOBJ_pfdg>

externdef __imp_FONTOBJ_pifi:PPROC
FONTOBJ_pifi equ <__imp_FONTOBJ_pifi>

externdef __imp_FONTOBJ_pvTrueTypeFontFile:PPROC
FONTOBJ_pvTrueTypeFontFile equ <__imp_FONTOBJ_pvTrueTypeFontFile>

externdef __imp_FONTOBJ_pxoGetXform:PPROC
FONTOBJ_pxoGetXform equ <__imp_FONTOBJ_pxoGetXform>

externdef __imp_FONTOBJ_vGetInfo:PPROC
FONTOBJ_vGetInfo equ <__imp_FONTOBJ_vGetInfo>

externdef __imp_FillPath:PPROC
FillPath equ <__imp_FillPath>

externdef __imp_FillRgn:PPROC
FillRgn equ <__imp_FillRgn>

externdef __imp_FixBrushOrgEx:PPROC
FixBrushOrgEx equ <__imp_FixBrushOrgEx>

externdef __imp_FlattenPath:PPROC
FlattenPath equ <__imp_FlattenPath>

externdef __imp_FloodFill:PPROC
FloodFill equ <__imp_FloodFill>

externdef __imp_FontIsLinked:PPROC
FontIsLinked equ <__imp_FontIsLinked>

externdef __imp_FrameRgn:PPROC
FrameRgn equ <__imp_FrameRgn>

externdef __imp_GdiAddFontResourceW:PPROC
GdiAddFontResourceW equ <__imp_GdiAddFontResourceW>
  IFDEF __UNICODE__
    GdiAddFontResource equ <__imp_GdiAddFontResourceW>
  ENDIF

externdef __imp_GdiAddGlsBounds:PPROC
GdiAddGlsBounds equ <__imp_GdiAddGlsBounds>

externdef __imp_GdiAddGlsRecord:PPROC
GdiAddGlsRecord equ <__imp_GdiAddGlsRecord>

externdef __imp_GdiAlphaBlend:PPROC
GdiAlphaBlend equ <__imp_GdiAlphaBlend>

externdef __imp_GdiArtificialDecrementDriver:PPROC
GdiArtificialDecrementDriver equ <__imp_GdiArtificialDecrementDriver>

externdef __imp_GdiCleanCacheDC:PPROC
GdiCleanCacheDC equ <__imp_GdiCleanCacheDC>

externdef __imp_GdiComment:PPROC
GdiComment equ <__imp_GdiComment>

externdef __imp_GdiConsoleTextOut:PPROC
GdiConsoleTextOut equ <__imp_GdiConsoleTextOut>

externdef __imp_GdiConvertAndCheckDC:PPROC
GdiConvertAndCheckDC equ <__imp_GdiConvertAndCheckDC>

externdef __imp_GdiConvertBitmap:PPROC
GdiConvertBitmap equ <__imp_GdiConvertBitmap>

externdef __imp_GdiConvertBitmapV5:PPROC
GdiConvertBitmapV5 equ <__imp_GdiConvertBitmapV5>

externdef __imp_GdiConvertBrush:PPROC
GdiConvertBrush equ <__imp_GdiConvertBrush>

externdef __imp_GdiConvertDC:PPROC
GdiConvertDC equ <__imp_GdiConvertDC>

externdef __imp_GdiConvertEnhMetaFile:PPROC
GdiConvertEnhMetaFile equ <__imp_GdiConvertEnhMetaFile>

externdef __imp_GdiConvertFont:PPROC
GdiConvertFont equ <__imp_GdiConvertFont>

externdef __imp_GdiConvertMetaFilePict:PPROC
GdiConvertMetaFilePict equ <__imp_GdiConvertMetaFilePict>

externdef __imp_GdiConvertPalette:PPROC
GdiConvertPalette equ <__imp_GdiConvertPalette>

externdef __imp_GdiConvertRegion:PPROC
GdiConvertRegion equ <__imp_GdiConvertRegion>

externdef __imp_GdiConvertToDevmodeW:PPROC
GdiConvertToDevmodeW equ <__imp_GdiConvertToDevmodeW>
  IFDEF __UNICODE__
    GdiConvertToDevmode equ <__imp_GdiConvertToDevmodeW>
  ENDIF

externdef __imp_GdiCreateLocalEnhMetaFile:PPROC
GdiCreateLocalEnhMetaFile equ <__imp_GdiCreateLocalEnhMetaFile>

externdef __imp_GdiCreateLocalMetaFilePict:PPROC
GdiCreateLocalMetaFilePict equ <__imp_GdiCreateLocalMetaFilePict>

externdef __imp_GdiDeleteLocalDC:PPROC
GdiDeleteLocalDC equ <__imp_GdiDeleteLocalDC>

externdef __imp_GdiDeleteSpoolFileHandle:PPROC
GdiDeleteSpoolFileHandle equ <__imp_GdiDeleteSpoolFileHandle>

externdef __imp_GdiDescribePixelFormat:PPROC
GdiDescribePixelFormat equ <__imp_GdiDescribePixelFormat>

externdef __imp_GdiDllInitialize:PPROC
GdiDllInitialize equ <__imp_GdiDllInitialize>

externdef __imp_GdiDrawStream:PPROC
GdiDrawStream equ <__imp_GdiDrawStream>

externdef __imp_GdiEndDocEMF:PPROC
GdiEndDocEMF equ <__imp_GdiEndDocEMF>

externdef __imp_GdiEndPageEMF:PPROC
GdiEndPageEMF equ <__imp_GdiEndPageEMF>

externdef __imp_GdiEntry10:PPROC
GdiEntry10 equ <__imp_GdiEntry10>

externdef __imp_GdiEntry11:PPROC
GdiEntry11 equ <__imp_GdiEntry11>

externdef __imp_GdiEntry12:PPROC
GdiEntry12 equ <__imp_GdiEntry12>

externdef __imp_GdiEntry13:PPROC
GdiEntry13 equ <__imp_GdiEntry13>

externdef __imp_GdiEntry14:PPROC
GdiEntry14 equ <__imp_GdiEntry14>

externdef __imp_GdiEntry15:PPROC
GdiEntry15 equ <__imp_GdiEntry15>

externdef __imp_GdiEntry16:PPROC
GdiEntry16 equ <__imp_GdiEntry16>

externdef __imp_GdiEntry1:PPROC
GdiEntry1 equ <__imp_GdiEntry1>

externdef __imp_GdiEntry2:PPROC
GdiEntry2 equ <__imp_GdiEntry2>

externdef __imp_GdiEntry3:PPROC
GdiEntry3 equ <__imp_GdiEntry3>

externdef __imp_GdiEntry4:PPROC
GdiEntry4 equ <__imp_GdiEntry4>

externdef __imp_GdiEntry5:PPROC
GdiEntry5 equ <__imp_GdiEntry5>

externdef __imp_GdiEntry6:PPROC
GdiEntry6 equ <__imp_GdiEntry6>

externdef __imp_GdiEntry7:PPROC
GdiEntry7 equ <__imp_GdiEntry7>

externdef __imp_GdiEntry8:PPROC
GdiEntry8 equ <__imp_GdiEntry8>

externdef __imp_GdiEntry9:PPROC
GdiEntry9 equ <__imp_GdiEntry9>

externdef __imp_GdiFixUpHandle:PPROC
GdiFixUpHandle equ <__imp_GdiFixUpHandle>

externdef __imp_GdiFlush:PPROC
GdiFlush equ <__imp_GdiFlush>

externdef __imp_GdiFullscreenControl:PPROC
GdiFullscreenControl equ <__imp_GdiFullscreenControl>

externdef __imp_GdiGetBatchLimit:PPROC
GdiGetBatchLimit equ <__imp_GdiGetBatchLimit>

externdef __imp_GdiGetBitmapBitsSize:PPROC
GdiGetBitmapBitsSize equ <__imp_GdiGetBitmapBitsSize>

externdef __imp_GdiGetCharDimensions:PPROC
GdiGetCharDimensions equ <__imp_GdiGetCharDimensions>

externdef __imp_GdiGetCodePage:PPROC
GdiGetCodePage equ <__imp_GdiGetCodePage>

externdef __imp_GdiGetDC:PPROC
GdiGetDC equ <__imp_GdiGetDC>

externdef __imp_GdiGetDevmodeForPage:PPROC
GdiGetDevmodeForPage equ <__imp_GdiGetDevmodeForPage>

externdef __imp_GdiGetLocalBrush:PPROC
GdiGetLocalBrush equ <__imp_GdiGetLocalBrush>

externdef __imp_GdiGetLocalDC:PPROC
GdiGetLocalDC equ <__imp_GdiGetLocalDC>

externdef __imp_GdiGetLocalFont:PPROC
GdiGetLocalFont equ <__imp_GdiGetLocalFont>

externdef __imp_GdiGetPageCount:PPROC
GdiGetPageCount equ <__imp_GdiGetPageCount>

externdef __imp_GdiGetPageHandle:PPROC
GdiGetPageHandle equ <__imp_GdiGetPageHandle>

externdef __imp_GdiGetSpoolFileHandle:PPROC
GdiGetSpoolFileHandle equ <__imp_GdiGetSpoolFileHandle>

externdef __imp_GdiGetSpoolMessage:PPROC
GdiGetSpoolMessage equ <__imp_GdiGetSpoolMessage>

externdef __imp_GdiGradientFill:PPROC
GdiGradientFill equ <__imp_GdiGradientFill>

externdef __imp_GdiInitSpool:PPROC
GdiInitSpool equ <__imp_GdiInitSpool>

externdef __imp_GdiInitializeLanguagePack:PPROC
GdiInitializeLanguagePack equ <__imp_GdiInitializeLanguagePack>

externdef __imp_GdiIsMetaFileDC:PPROC
GdiIsMetaFileDC equ <__imp_GdiIsMetaFileDC>

externdef __imp_GdiIsMetaPrintDC:PPROC
GdiIsMetaPrintDC equ <__imp_GdiIsMetaPrintDC>

externdef __imp_GdiIsPlayMetafileDC:PPROC
GdiIsPlayMetafileDC equ <__imp_GdiIsPlayMetafileDC>

externdef __imp_GdiPlayDCScript:PPROC
GdiPlayDCScript equ <__imp_GdiPlayDCScript>

externdef __imp_GdiPlayEMF:PPROC
GdiPlayEMF equ <__imp_GdiPlayEMF>

externdef __imp_GdiPlayJournal:PPROC
GdiPlayJournal equ <__imp_GdiPlayJournal>

externdef __imp_GdiPlayPageEMF:PPROC
GdiPlayPageEMF equ <__imp_GdiPlayPageEMF>

externdef __imp_GdiPlayPrivatePageEMF:PPROC
GdiPlayPrivatePageEMF equ <__imp_GdiPlayPrivatePageEMF>

externdef __imp_GdiPlayScript:PPROC
GdiPlayScript equ <__imp_GdiPlayScript>

externdef __imp_GdiPrinterThunk:PPROC
GdiPrinterThunk equ <__imp_GdiPrinterThunk>

externdef __imp_GdiProcessSetup:PPROC
GdiProcessSetup equ <__imp_GdiProcessSetup>

externdef __imp_GdiQueryFonts:PPROC
GdiQueryFonts equ <__imp_GdiQueryFonts>

externdef __imp_GdiQueryTable:PPROC
GdiQueryTable equ <__imp_GdiQueryTable>

externdef __imp_GdiRealizationInfo:PPROC
GdiRealizationInfo equ <__imp_GdiRealizationInfo>

externdef __imp_GdiReleaseDC:PPROC
GdiReleaseDC equ <__imp_GdiReleaseDC>

externdef __imp_GdiReleaseLocalDC:PPROC
GdiReleaseLocalDC equ <__imp_GdiReleaseLocalDC>

externdef __imp_GdiResetDCEMF:PPROC
GdiResetDCEMF equ <__imp_GdiResetDCEMF>

externdef __imp_GdiSetAttrs:PPROC
GdiSetAttrs equ <__imp_GdiSetAttrs>

externdef __imp_GdiSetBatchLimit:PPROC
GdiSetBatchLimit equ <__imp_GdiSetBatchLimit>

externdef __imp_GdiSetLastError:PPROC
GdiSetLastError equ <__imp_GdiSetLastError>

externdef __imp_GdiSetPixelFormat:PPROC
GdiSetPixelFormat equ <__imp_GdiSetPixelFormat>

externdef __imp_GdiSetServerAttr:PPROC
GdiSetServerAttr equ <__imp_GdiSetServerAttr>

externdef __imp_GdiStartDocEMF:PPROC
GdiStartDocEMF equ <__imp_GdiStartDocEMF>

externdef __imp_GdiStartPageEMF:PPROC
GdiStartPageEMF equ <__imp_GdiStartPageEMF>

externdef __imp_GdiSwapBuffers:PPROC
GdiSwapBuffers equ <__imp_GdiSwapBuffers>

externdef __imp_GdiTransparentBlt:PPROC
GdiTransparentBlt equ <__imp_GdiTransparentBlt>

externdef __imp_GdiValidateHandle:PPROC
GdiValidateHandle equ <__imp_GdiValidateHandle>

externdef __imp_GetArcDirection:PPROC
GetArcDirection equ <__imp_GetArcDirection>

externdef __imp_GetAspectRatioFilterEx:PPROC
GetAspectRatioFilterEx equ <__imp_GetAspectRatioFilterEx>

externdef __imp_GetBitmapAttributes:PPROC
GetBitmapAttributes equ <__imp_GetBitmapAttributes>

externdef __imp_GetBitmapBits:PPROC
GetBitmapBits equ <__imp_GetBitmapBits>

externdef __imp_GetBitmapDimensionEx:PPROC
GetBitmapDimensionEx equ <__imp_GetBitmapDimensionEx>

externdef __imp_GetBkColor:PPROC
GetBkColor equ <__imp_GetBkColor>

externdef __imp_GetBkMode:PPROC
GetBkMode equ <__imp_GetBkMode>

externdef __imp_GetBoundsRect:PPROC
GetBoundsRect equ <__imp_GetBoundsRect>

externdef __imp_GetBrushAttributes:PPROC
GetBrushAttributes equ <__imp_GetBrushAttributes>

externdef __imp_GetBrushOrgEx:PPROC
GetBrushOrgEx equ <__imp_GetBrushOrgEx>

externdef __imp_GetCharABCWidthsA:PPROC
GetCharABCWidthsA equ <__imp_GetCharABCWidthsA>
  IFNDEF __UNICODE__
    GetCharABCWidths equ <__imp_GetCharABCWidthsA>
  ENDIF

externdef __imp_GetCharABCWidthsFloatA:PPROC
GetCharABCWidthsFloatA equ <__imp_GetCharABCWidthsFloatA>
  IFNDEF __UNICODE__
    GetCharABCWidthsFloat equ <__imp_GetCharABCWidthsFloatA>
  ENDIF

externdef __imp_GetCharABCWidthsFloatW:PPROC
GetCharABCWidthsFloatW equ <__imp_GetCharABCWidthsFloatW>
  IFDEF __UNICODE__
    GetCharABCWidthsFloat equ <__imp_GetCharABCWidthsFloatW>
  ENDIF

externdef __imp_GetCharABCWidthsI:PPROC
GetCharABCWidthsI equ <__imp_GetCharABCWidthsI>

externdef __imp_GetCharABCWidthsW:PPROC
GetCharABCWidthsW equ <__imp_GetCharABCWidthsW>
  IFDEF __UNICODE__
    GetCharABCWidths equ <__imp_GetCharABCWidthsW>
  ENDIF

externdef __imp_GetCharWidth32A:PPROC
GetCharWidth32A equ <__imp_GetCharWidth32A>
  IFNDEF __UNICODE__
    GetCharWidth32 equ <__imp_GetCharWidth32A>
  ENDIF

externdef __imp_GetCharWidth32W:PPROC
GetCharWidth32W equ <__imp_GetCharWidth32W>
  IFDEF __UNICODE__
    GetCharWidth32 equ <__imp_GetCharWidth32W>
  ENDIF

externdef __imp_GetCharWidthA:PPROC
GetCharWidthA equ <__imp_GetCharWidthA>
  IFNDEF __UNICODE__
    GetCharWidth equ <__imp_GetCharWidthA>
  ENDIF

externdef __imp_GetCharWidthFloatA:PPROC
GetCharWidthFloatA equ <__imp_GetCharWidthFloatA>
  IFNDEF __UNICODE__
    GetCharWidthFloat equ <__imp_GetCharWidthFloatA>
  ENDIF

externdef __imp_GetCharWidthFloatW:PPROC
GetCharWidthFloatW equ <__imp_GetCharWidthFloatW>
  IFDEF __UNICODE__
    GetCharWidthFloat equ <__imp_GetCharWidthFloatW>
  ENDIF

externdef __imp_GetCharWidthI:PPROC
GetCharWidthI equ <__imp_GetCharWidthI>

externdef __imp_GetCharWidthInfo:PPROC
GetCharWidthInfo equ <__imp_GetCharWidthInfo>

externdef __imp_GetCharWidthW:PPROC
GetCharWidthW equ <__imp_GetCharWidthW>
  IFDEF __UNICODE__
    GetCharWidth equ <__imp_GetCharWidthW>
  ENDIF

externdef __imp_GetCharacterPlacementA:PPROC
GetCharacterPlacementA equ <__imp_GetCharacterPlacementA>
  IFNDEF __UNICODE__
    GetCharacterPlacement equ <__imp_GetCharacterPlacementA>
  ENDIF

externdef __imp_GetCharacterPlacementW:PPROC
GetCharacterPlacementW equ <__imp_GetCharacterPlacementW>
  IFDEF __UNICODE__
    GetCharacterPlacement equ <__imp_GetCharacterPlacementW>
  ENDIF

externdef __imp_GetClipBox:PPROC
GetClipBox equ <__imp_GetClipBox>

externdef __imp_GetClipRgn:PPROC
GetClipRgn equ <__imp_GetClipRgn>

externdef __imp_GetColorAdjustment:PPROC
GetColorAdjustment equ <__imp_GetColorAdjustment>

externdef __imp_GetColorSpace:PPROC
GetColorSpace equ <__imp_GetColorSpace>

externdef __imp_GetCurrentObject:PPROC
GetCurrentObject equ <__imp_GetCurrentObject>

externdef __imp_GetCurrentPositionEx:PPROC
GetCurrentPositionEx equ <__imp_GetCurrentPositionEx>

externdef __imp_GetDCBrushColor:PPROC
GetDCBrushColor equ <__imp_GetDCBrushColor>

externdef __imp_GetDCOrgEx:PPROC
GetDCOrgEx equ <__imp_GetDCOrgEx>

externdef __imp_GetDCPenColor:PPROC
GetDCPenColor equ <__imp_GetDCPenColor>

externdef __imp_GetDIBColorTable:PPROC
GetDIBColorTable equ <__imp_GetDIBColorTable>

externdef __imp_GetDIBits:PPROC
GetDIBits equ <__imp_GetDIBits>

externdef __imp_GetDeviceCaps:PPROC
GetDeviceCaps equ <__imp_GetDeviceCaps>

externdef __imp_GetDeviceGammaRamp:PPROC
GetDeviceGammaRamp equ <__imp_GetDeviceGammaRamp>

externdef __imp_GetETM:PPROC
GetETM equ <__imp_GetETM>

externdef __imp_GetEUDCTimeStamp:PPROC
GetEUDCTimeStamp equ <__imp_GetEUDCTimeStamp>

externdef __imp_GetEUDCTimeStampExW:PPROC
GetEUDCTimeStampExW equ <__imp_GetEUDCTimeStampExW>
  IFDEF __UNICODE__
    GetEUDCTimeStampEx equ <__imp_GetEUDCTimeStampExW>
  ENDIF

externdef __imp_GetEnhMetaFileA:PPROC
GetEnhMetaFileA equ <__imp_GetEnhMetaFileA>
  IFNDEF __UNICODE__
    GetEnhMetaFile equ <__imp_GetEnhMetaFileA>
  ENDIF

externdef __imp_GetEnhMetaFileBits:PPROC
GetEnhMetaFileBits equ <__imp_GetEnhMetaFileBits>

externdef __imp_GetEnhMetaFileDescriptionA:PPROC
GetEnhMetaFileDescriptionA equ <__imp_GetEnhMetaFileDescriptionA>
  IFNDEF __UNICODE__
    GetEnhMetaFileDescription equ <__imp_GetEnhMetaFileDescriptionA>
  ENDIF

externdef __imp_GetEnhMetaFileDescriptionW:PPROC
GetEnhMetaFileDescriptionW equ <__imp_GetEnhMetaFileDescriptionW>
  IFDEF __UNICODE__
    GetEnhMetaFileDescription equ <__imp_GetEnhMetaFileDescriptionW>
  ENDIF

externdef __imp_GetEnhMetaFileHeader:PPROC
GetEnhMetaFileHeader equ <__imp_GetEnhMetaFileHeader>

externdef __imp_GetEnhMetaFilePaletteEntries:PPROC
GetEnhMetaFilePaletteEntries equ <__imp_GetEnhMetaFilePaletteEntries>

externdef __imp_GetEnhMetaFilePixelFormat:PPROC
GetEnhMetaFilePixelFormat equ <__imp_GetEnhMetaFilePixelFormat>

externdef __imp_GetEnhMetaFileW:PPROC
GetEnhMetaFileW equ <__imp_GetEnhMetaFileW>
  IFDEF __UNICODE__
    GetEnhMetaFile equ <__imp_GetEnhMetaFileW>
  ENDIF

externdef __imp_GetFontAssocStatus:PPROC
GetFontAssocStatus equ <__imp_GetFontAssocStatus>

externdef __imp_GetFontData:PPROC
GetFontData equ <__imp_GetFontData>

externdef __imp_GetFontLanguageInfo:PPROC
GetFontLanguageInfo equ <__imp_GetFontLanguageInfo>

externdef __imp_GetFontResourceInfoW:PPROC
GetFontResourceInfoW equ <__imp_GetFontResourceInfoW>
  IFDEF __UNICODE__
    GetFontResourceInfo equ <__imp_GetFontResourceInfoW>
  ENDIF

externdef __imp_GetFontUnicodeRanges:PPROC
GetFontUnicodeRanges equ <__imp_GetFontUnicodeRanges>

externdef __imp_GetGlyphIndicesA:PPROC
GetGlyphIndicesA equ <__imp_GetGlyphIndicesA>
  IFNDEF __UNICODE__
    GetGlyphIndices equ <__imp_GetGlyphIndicesA>
  ENDIF

externdef __imp_GetGlyphIndicesW:PPROC
GetGlyphIndicesW equ <__imp_GetGlyphIndicesW>
  IFDEF __UNICODE__
    GetGlyphIndices equ <__imp_GetGlyphIndicesW>
  ENDIF

externdef __imp_GetGlyphOutline:PPROC
GetGlyphOutline equ <__imp_GetGlyphOutline>

externdef __imp_GetGlyphOutlineA:PPROC
GetGlyphOutlineA equ <__imp_GetGlyphOutlineA>
  IFNDEF __UNICODE__
    GetGlyphOutline equ <__imp_GetGlyphOutlineA>
  ENDIF

externdef __imp_GetGlyphOutlineW:PPROC
GetGlyphOutlineW equ <__imp_GetGlyphOutlineW>
  IFDEF __UNICODE__
    GetGlyphOutline equ <__imp_GetGlyphOutlineW>
  ENDIF

externdef __imp_GetGlyphOutlineWow:PPROC
GetGlyphOutlineWow equ <__imp_GetGlyphOutlineWow>

externdef __imp_GetGraphicsMode:PPROC
GetGraphicsMode equ <__imp_GetGraphicsMode>

externdef __imp_GetHFONT:PPROC
GetHFONT equ <__imp_GetHFONT>

externdef __imp_GetICMProfileA:PPROC
GetICMProfileA equ <__imp_GetICMProfileA>
  IFNDEF __UNICODE__
    GetICMProfile equ <__imp_GetICMProfileA>
  ENDIF

externdef __imp_GetICMProfileW:PPROC
GetICMProfileW equ <__imp_GetICMProfileW>
  IFDEF __UNICODE__
    GetICMProfile equ <__imp_GetICMProfileW>
  ENDIF

externdef __imp_GetKerningPairs:PPROC
GetKerningPairs equ <__imp_GetKerningPairs>

externdef __imp_GetKerningPairsA:PPROC
GetKerningPairsA equ <__imp_GetKerningPairsA>
  IFNDEF __UNICODE__
    GetKerningPairs equ <__imp_GetKerningPairsA>
  ENDIF

externdef __imp_GetKerningPairsW:PPROC
GetKerningPairsW equ <__imp_GetKerningPairsW>
  IFDEF __UNICODE__
    GetKerningPairs equ <__imp_GetKerningPairsW>
  ENDIF

externdef __imp_GetLayout:PPROC
GetLayout equ <__imp_GetLayout>

externdef __imp_GetLogColorSpaceA:PPROC
GetLogColorSpaceA equ <__imp_GetLogColorSpaceA>
  IFNDEF __UNICODE__
    GetLogColorSpace equ <__imp_GetLogColorSpaceA>
  ENDIF

externdef __imp_GetLogColorSpaceW:PPROC
GetLogColorSpaceW equ <__imp_GetLogColorSpaceW>
  IFDEF __UNICODE__
    GetLogColorSpace equ <__imp_GetLogColorSpaceW>
  ENDIF

externdef __imp_GetMapMode:PPROC
GetMapMode equ <__imp_GetMapMode>

externdef __imp_GetMetaFileA:PPROC
GetMetaFileA equ <__imp_GetMetaFileA>
  IFNDEF __UNICODE__
    GetMetaFile equ <__imp_GetMetaFileA>
  ENDIF

externdef __imp_GetMetaFileBitsEx:PPROC
GetMetaFileBitsEx equ <__imp_GetMetaFileBitsEx>

externdef __imp_GetMetaFileW:PPROC
GetMetaFileW equ <__imp_GetMetaFileW>
  IFDEF __UNICODE__
    GetMetaFile equ <__imp_GetMetaFileW>
  ENDIF

externdef __imp_GetMetaRgn:PPROC
GetMetaRgn equ <__imp_GetMetaRgn>

externdef __imp_GetMiterLimit:PPROC
GetMiterLimit equ <__imp_GetMiterLimit>

externdef __imp_GetNearestColor:PPROC
GetNearestColor equ <__imp_GetNearestColor>

externdef __imp_GetNearestPaletteIndex:PPROC
GetNearestPaletteIndex equ <__imp_GetNearestPaletteIndex>

externdef __imp_GetObjectA:PPROC
GetObjectA equ <__imp_GetObjectA>
  IFNDEF __UNICODE__
    GetObject equ <__imp_GetObjectA>
  ENDIF

externdef __imp_GetObjectType:PPROC
GetObjectType equ <__imp_GetObjectType>

externdef __imp_GetObjectW:PPROC
GetObjectW equ <__imp_GetObjectW>
  IFDEF __UNICODE__
    GetObject equ <__imp_GetObjectW>
  ENDIF

externdef __imp_GetOutlineTextMetricsA:PPROC
GetOutlineTextMetricsA equ <__imp_GetOutlineTextMetricsA>
  IFNDEF __UNICODE__
    GetOutlineTextMetrics equ <__imp_GetOutlineTextMetricsA>
  ENDIF

externdef __imp_GetOutlineTextMetricsW:PPROC
GetOutlineTextMetricsW equ <__imp_GetOutlineTextMetricsW>
  IFDEF __UNICODE__
    GetOutlineTextMetrics equ <__imp_GetOutlineTextMetricsW>
  ENDIF

externdef __imp_GetPaletteEntries:PPROC
GetPaletteEntries equ <__imp_GetPaletteEntries>

externdef __imp_GetPath:PPROC
GetPath equ <__imp_GetPath>

externdef __imp_GetPixel:PPROC
GetPixel equ <__imp_GetPixel>

externdef __imp_GetPixelFormat:PPROC
GetPixelFormat equ <__imp_GetPixelFormat>

externdef __imp_GetPolyFillMode:PPROC
GetPolyFillMode equ <__imp_GetPolyFillMode>

externdef __imp_GetROP2:PPROC
GetROP2 equ <__imp_GetROP2>

externdef __imp_GetRandomRgn:PPROC
GetRandomRgn equ <__imp_GetRandomRgn>

externdef __imp_GetRasterizerCaps:PPROC
GetRasterizerCaps equ <__imp_GetRasterizerCaps>

externdef __imp_GetRegionData:PPROC
GetRegionData equ <__imp_GetRegionData>

externdef __imp_GetRelAbs:PPROC
GetRelAbs equ <__imp_GetRelAbs>

externdef __imp_GetRgnBox:PPROC
GetRgnBox equ <__imp_GetRgnBox>

externdef __imp_GetStockObject:PPROC
GetStockObject equ <__imp_GetStockObject>

externdef __imp_GetStretchBltMode:PPROC
GetStretchBltMode equ <__imp_GetStretchBltMode>

externdef __imp_GetStringBitmapA:PPROC
GetStringBitmapA equ <__imp_GetStringBitmapA>
  IFNDEF __UNICODE__
    GetStringBitmap equ <__imp_GetStringBitmapA>
  ENDIF

externdef __imp_GetStringBitmapW:PPROC
GetStringBitmapW equ <__imp_GetStringBitmapW>
  IFDEF __UNICODE__
    GetStringBitmap equ <__imp_GetStringBitmapW>
  ENDIF

externdef __imp_GetSystemPaletteEntries:PPROC
GetSystemPaletteEntries equ <__imp_GetSystemPaletteEntries>

externdef __imp_GetSystemPaletteUse:PPROC
GetSystemPaletteUse equ <__imp_GetSystemPaletteUse>

externdef __imp_GetTextAlign:PPROC
GetTextAlign equ <__imp_GetTextAlign>

externdef __imp_GetTextCharacterExtra:PPROC
GetTextCharacterExtra equ <__imp_GetTextCharacterExtra>

externdef __imp_GetTextCharset:PPROC
GetTextCharset equ <__imp_GetTextCharset>

externdef __imp_GetTextCharsetInfo:PPROC
GetTextCharsetInfo equ <__imp_GetTextCharsetInfo>

externdef __imp_GetTextColor:PPROC
GetTextColor equ <__imp_GetTextColor>

externdef __imp_GetTextExtentExPointA:PPROC
GetTextExtentExPointA equ <__imp_GetTextExtentExPointA>
  IFNDEF __UNICODE__
    GetTextExtentExPoint equ <__imp_GetTextExtentExPointA>
  ENDIF

externdef __imp_GetTextExtentExPointI:PPROC
GetTextExtentExPointI equ <__imp_GetTextExtentExPointI>

externdef __imp_GetTextExtentExPointW:PPROC
GetTextExtentExPointW equ <__imp_GetTextExtentExPointW>
  IFDEF __UNICODE__
    GetTextExtentExPoint equ <__imp_GetTextExtentExPointW>
  ENDIF

externdef __imp_GetTextExtentExPointWPri:PPROC
GetTextExtentExPointWPri equ <__imp_GetTextExtentExPointWPri>

externdef __imp_GetTextExtentPoint32A:PPROC
GetTextExtentPoint32A equ <__imp_GetTextExtentPoint32A>
  IFNDEF __UNICODE__
    GetTextExtentPoint32 equ <__imp_GetTextExtentPoint32A>
  ENDIF

externdef __imp_GetTextExtentPoint32W:PPROC
GetTextExtentPoint32W equ <__imp_GetTextExtentPoint32W>
  IFDEF __UNICODE__
    GetTextExtentPoint32 equ <__imp_GetTextExtentPoint32W>
  ENDIF

externdef __imp_GetTextExtentPointA:PPROC
GetTextExtentPointA equ <__imp_GetTextExtentPointA>
  IFNDEF __UNICODE__
    GetTextExtentPoint equ <__imp_GetTextExtentPointA>
  ENDIF

externdef __imp_GetTextExtentPointI:PPROC
GetTextExtentPointI equ <__imp_GetTextExtentPointI>

externdef __imp_GetTextExtentPointW:PPROC
GetTextExtentPointW equ <__imp_GetTextExtentPointW>
  IFDEF __UNICODE__
    GetTextExtentPoint equ <__imp_GetTextExtentPointW>
  ENDIF

externdef __imp_GetTextFaceA:PPROC
GetTextFaceA equ <__imp_GetTextFaceA>
  IFNDEF __UNICODE__
    GetTextFace equ <__imp_GetTextFaceA>
  ENDIF

externdef __imp_GetTextFaceAliasW:PPROC
GetTextFaceAliasW equ <__imp_GetTextFaceAliasW>
  IFDEF __UNICODE__
    GetTextFaceAlias equ <__imp_GetTextFaceAliasW>
  ENDIF

externdef __imp_GetTextFaceW:PPROC
GetTextFaceW equ <__imp_GetTextFaceW>
  IFDEF __UNICODE__
    GetTextFace equ <__imp_GetTextFaceW>
  ENDIF

externdef __imp_GetTextMetricsA:PPROC
GetTextMetricsA equ <__imp_GetTextMetricsA>
  IFNDEF __UNICODE__
    GetTextMetrics equ <__imp_GetTextMetricsA>
  ENDIF

externdef __imp_GetTextMetricsW:PPROC
GetTextMetricsW equ <__imp_GetTextMetricsW>
  IFDEF __UNICODE__
    GetTextMetrics equ <__imp_GetTextMetricsW>
  ENDIF

externdef __imp_GetTransform:PPROC
GetTransform equ <__imp_GetTransform>

externdef __imp_GetViewportExtEx:PPROC
GetViewportExtEx equ <__imp_GetViewportExtEx>

externdef __imp_GetViewportOrgEx:PPROC
GetViewportOrgEx equ <__imp_GetViewportOrgEx>

externdef __imp_GetWinMetaFileBits:PPROC
GetWinMetaFileBits equ <__imp_GetWinMetaFileBits>

externdef __imp_GetWindowExtEx:PPROC
GetWindowExtEx equ <__imp_GetWindowExtEx>

externdef __imp_GetWindowOrgEx:PPROC
GetWindowOrgEx equ <__imp_GetWindowOrgEx>

externdef __imp_GetWorldTransform:PPROC
GetWorldTransform equ <__imp_GetWorldTransform>

externdef __imp_HT_Get8BPPFormatPalette:PPROC
HT_Get8BPPFormatPalette equ <__imp_HT_Get8BPPFormatPalette>

externdef __imp_HT_Get8BPPMaskPalette:PPROC
HT_Get8BPPMaskPalette equ <__imp_HT_Get8BPPMaskPalette>

externdef __imp_IntersectClipRect:PPROC
IntersectClipRect equ <__imp_IntersectClipRect>

externdef __imp_InvertRgn:PPROC
InvertRgn equ <__imp_InvertRgn>

externdef __imp_IsValidEnhMetaRecord:PPROC
IsValidEnhMetaRecord equ <__imp_IsValidEnhMetaRecord>

externdef __imp_IsValidEnhMetaRecordOffExt:PPROC
IsValidEnhMetaRecordOffExt equ <__imp_IsValidEnhMetaRecordOffExt>

externdef __imp_LPtoDP:PPROC
LPtoDP equ <__imp_LPtoDP>

externdef __imp_LineDDA:PPROC
LineDDA equ <__imp_LineDDA>
  IFNDEF __UNICODE__
    LineDD equ <__imp_LineDDA>
  ENDIF

externdef __imp_LineTo:PPROC
LineTo equ <__imp_LineTo>

externdef __imp_MaskBlt:PPROC
MaskBlt equ <__imp_MaskBlt>

externdef __imp_MirrorRgn:PPROC
MirrorRgn equ <__imp_MirrorRgn>

externdef __imp_ModifyWorldTransform:PPROC
ModifyWorldTransform equ <__imp_ModifyWorldTransform>

externdef __imp_MoveToEx:PPROC
MoveToEx equ <__imp_MoveToEx>

externdef __imp_NamedEscape:PPROC
NamedEscape equ <__imp_NamedEscape>

externdef __imp_OffsetClipRgn:PPROC
OffsetClipRgn equ <__imp_OffsetClipRgn>

externdef __imp_OffsetRgn:PPROC
OffsetRgn equ <__imp_OffsetRgn>

externdef __imp_OffsetViewportOrgEx:PPROC
OffsetViewportOrgEx equ <__imp_OffsetViewportOrgEx>

externdef __imp_OffsetWindowOrgEx:PPROC
OffsetWindowOrgEx equ <__imp_OffsetWindowOrgEx>

externdef __imp_PATHOBJ_bEnum:PPROC
PATHOBJ_bEnum equ <__imp_PATHOBJ_bEnum>

externdef __imp_PATHOBJ_bEnumClipLines:PPROC
PATHOBJ_bEnumClipLines equ <__imp_PATHOBJ_bEnumClipLines>

externdef __imp_PATHOBJ_vEnumStart:PPROC
PATHOBJ_vEnumStart equ <__imp_PATHOBJ_vEnumStart>

externdef __imp_PATHOBJ_vEnumStartClipLines:PPROC
PATHOBJ_vEnumStartClipLines equ <__imp_PATHOBJ_vEnumStartClipLines>

externdef __imp_PATHOBJ_vGetBounds:PPROC
PATHOBJ_vGetBounds equ <__imp_PATHOBJ_vGetBounds>

externdef __imp_PaintRgn:PPROC
PaintRgn equ <__imp_PaintRgn>

externdef __imp_PatBlt:PPROC
PatBlt equ <__imp_PatBlt>

externdef __imp_PathToRegion:PPROC
PathToRegion equ <__imp_PathToRegion>

externdef __imp_Pie:PPROC
Pie equ <__imp_Pie>

externdef __imp_PlayEnhMetaFile:PPROC
PlayEnhMetaFile equ <__imp_PlayEnhMetaFile>

externdef __imp_PlayEnhMetaFileRecord:PPROC
PlayEnhMetaFileRecord equ <__imp_PlayEnhMetaFileRecord>

externdef __imp_PlayMetaFile:PPROC
PlayMetaFile equ <__imp_PlayMetaFile>

externdef __imp_PlayMetaFileRecord:PPROC
PlayMetaFileRecord equ <__imp_PlayMetaFileRecord>

externdef __imp_PlgBlt:PPROC
PlgBlt equ <__imp_PlgBlt>

externdef __imp_PolyBezier:PPROC
PolyBezier equ <__imp_PolyBezier>

externdef __imp_PolyBezierTo:PPROC
PolyBezierTo equ <__imp_PolyBezierTo>

externdef __imp_PolyDraw:PPROC
PolyDraw equ <__imp_PolyDraw>

externdef __imp_PolyPatBlt:PPROC
PolyPatBlt equ <__imp_PolyPatBlt>

externdef __imp_PolyPolygon:PPROC
PolyPolygon equ <__imp_PolyPolygon>

externdef __imp_PolyPolyline:PPROC
PolyPolyline equ <__imp_PolyPolyline>

externdef __imp_PolyTextOutA:PPROC
PolyTextOutA equ <__imp_PolyTextOutA>
  IFNDEF __UNICODE__
    PolyTextOut equ <__imp_PolyTextOutA>
  ENDIF

externdef __imp_PolyTextOutW:PPROC
PolyTextOutW equ <__imp_PolyTextOutW>
  IFDEF __UNICODE__
    PolyTextOut equ <__imp_PolyTextOutW>
  ENDIF

externdef __imp_Polygon:PPROC
Polygon equ <__imp_Polygon>

externdef __imp_Polyline:PPROC
Polyline equ <__imp_Polyline>

externdef __imp_PolylineTo:PPROC
PolylineTo equ <__imp_PolylineTo>

externdef __imp_PtInRegion:PPROC
PtInRegion equ <__imp_PtInRegion>

externdef __imp_PtVisible:PPROC
PtVisible equ <__imp_PtVisible>

externdef __imp_QueryFontAssocStatus:PPROC
QueryFontAssocStatus equ <__imp_QueryFontAssocStatus>

externdef __imp_RealizePalette:PPROC
RealizePalette equ <__imp_RealizePalette>

externdef __imp_RectInRegion:PPROC
RectInRegion equ <__imp_RectInRegion>

externdef __imp_RectVisible:PPROC
RectVisible equ <__imp_RectVisible>

externdef __imp_Rectangle:PPROC
Rectangle equ <__imp_Rectangle>

externdef __imp_RemoveFontMemResourceEx:PPROC
RemoveFontMemResourceEx equ <__imp_RemoveFontMemResourceEx>

externdef __imp_RemoveFontResourceA:PPROC
RemoveFontResourceA equ <__imp_RemoveFontResourceA>
  IFNDEF __UNICODE__
    RemoveFontResource equ <__imp_RemoveFontResourceA>
  ENDIF

externdef __imp_RemoveFontResourceExA:PPROC
RemoveFontResourceExA equ <__imp_RemoveFontResourceExA>
  IFNDEF __UNICODE__
    RemoveFontResourceEx equ <__imp_RemoveFontResourceExA>
  ENDIF

externdef __imp_RemoveFontResourceExW:PPROC
RemoveFontResourceExW equ <__imp_RemoveFontResourceExW>
  IFDEF __UNICODE__
    RemoveFontResourceEx equ <__imp_RemoveFontResourceExW>
  ENDIF

externdef __imp_RemoveFontResourceTracking:PPROC
RemoveFontResourceTracking equ <__imp_RemoveFontResourceTracking>

externdef __imp_RemoveFontResourceW:PPROC
RemoveFontResourceW equ <__imp_RemoveFontResourceW>
  IFDEF __UNICODE__
    RemoveFontResource equ <__imp_RemoveFontResourceW>
  ENDIF

externdef __imp_ResetDCA:PPROC
ResetDCA equ <__imp_ResetDCA>
  IFNDEF __UNICODE__
    ResetDC equ <__imp_ResetDCA>
  ENDIF

externdef __imp_ResetDCW:PPROC
ResetDCW equ <__imp_ResetDCW>
  IFDEF __UNICODE__
    ResetDC equ <__imp_ResetDCW>
  ENDIF

externdef __imp_ResizePalette:PPROC
ResizePalette equ <__imp_ResizePalette>

externdef __imp_RestoreDC:PPROC
RestoreDC equ <__imp_RestoreDC>

externdef __imp_RoundRect:PPROC
RoundRect equ <__imp_RoundRect>

externdef __imp_STROBJ_bEnum:PPROC
STROBJ_bEnum equ <__imp_STROBJ_bEnum>

externdef __imp_STROBJ_bEnumPositionsOnly:PPROC
STROBJ_bEnumPositionsOnly equ <__imp_STROBJ_bEnumPositionsOnly>

externdef __imp_STROBJ_bGetAdvanceWidths:PPROC
STROBJ_bGetAdvanceWidths equ <__imp_STROBJ_bGetAdvanceWidths>

externdef __imp_STROBJ_dwGetCodePage:PPROC
STROBJ_dwGetCodePage equ <__imp_STROBJ_dwGetCodePage>

externdef __imp_STROBJ_vEnumStart:PPROC
STROBJ_vEnumStart equ <__imp_STROBJ_vEnumStart>

externdef __imp_SaveDC:PPROC
SaveDC equ <__imp_SaveDC>

externdef __imp_ScaleViewportExtEx:PPROC
ScaleViewportExtEx equ <__imp_ScaleViewportExtEx>

externdef __imp_ScaleWindowExtEx:PPROC
ScaleWindowExtEx equ <__imp_ScaleWindowExtEx>

externdef __imp_SelectBrushLocal:PPROC
SelectBrushLocal equ <__imp_SelectBrushLocal>

externdef __imp_SelectClipPath:PPROC
SelectClipPath equ <__imp_SelectClipPath>

externdef __imp_SelectClipRgn:PPROC
SelectClipRgn equ <__imp_SelectClipRgn>

externdef __imp_SelectFontLocal:PPROC
SelectFontLocal equ <__imp_SelectFontLocal>

externdef __imp_SelectObject:PPROC
SelectObject equ <__imp_SelectObject>

externdef __imp_SelectPalette:PPROC
SelectPalette equ <__imp_SelectPalette>

externdef __imp_SetAbortProc:PPROC
SetAbortProc equ <__imp_SetAbortProc>

externdef __imp_SetArcDirection:PPROC
SetArcDirection equ <__imp_SetArcDirection>

externdef __imp_SetBitmapAttributes:PPROC
SetBitmapAttributes equ <__imp_SetBitmapAttributes>

externdef __imp_SetBitmapBits:PPROC
SetBitmapBits equ <__imp_SetBitmapBits>

externdef __imp_SetBitmapDimensionEx:PPROC
SetBitmapDimensionEx equ <__imp_SetBitmapDimensionEx>

externdef __imp_SetBkColor:PPROC
SetBkColor equ <__imp_SetBkColor>

externdef __imp_SetBkMode:PPROC
SetBkMode equ <__imp_SetBkMode>

externdef __imp_SetBoundsRect:PPROC
SetBoundsRect equ <__imp_SetBoundsRect>

externdef __imp_SetBrushAttributes:PPROC
SetBrushAttributes equ <__imp_SetBrushAttributes>

externdef __imp_SetBrushOrgEx:PPROC
SetBrushOrgEx equ <__imp_SetBrushOrgEx>

externdef __imp_SetColorAdjustment:PPROC
SetColorAdjustment equ <__imp_SetColorAdjustment>

externdef __imp_SetColorSpace:PPROC
SetColorSpace equ <__imp_SetColorSpace>

externdef __imp_SetDCBrushColor:PPROC
SetDCBrushColor equ <__imp_SetDCBrushColor>

externdef __imp_SetDCPenColor:PPROC
SetDCPenColor equ <__imp_SetDCPenColor>

externdef __imp_SetDIBColorTable:PPROC
SetDIBColorTable equ <__imp_SetDIBColorTable>

externdef __imp_SetDIBits:PPROC
SetDIBits equ <__imp_SetDIBits>

externdef __imp_SetDIBitsToDevice:PPROC
SetDIBitsToDevice equ <__imp_SetDIBitsToDevice>

externdef __imp_SetDeviceGammaRamp:PPROC
SetDeviceGammaRamp equ <__imp_SetDeviceGammaRamp>

externdef __imp_SetEnhMetaFileBits:PPROC
SetEnhMetaFileBits equ <__imp_SetEnhMetaFileBits>

externdef __imp_SetFontEnumeration:PPROC
SetFontEnumeration equ <__imp_SetFontEnumeration>

externdef __imp_SetGraphicsMode:PPROC
SetGraphicsMode equ <__imp_SetGraphicsMode>

externdef __imp_SetICMMode:PPROC
SetICMMode equ <__imp_SetICMMode>

externdef __imp_SetICMProfileA:PPROC
SetICMProfileA equ <__imp_SetICMProfileA>
  IFNDEF __UNICODE__
    SetICMProfile equ <__imp_SetICMProfileA>
  ENDIF

externdef __imp_SetICMProfileW:PPROC
SetICMProfileW equ <__imp_SetICMProfileW>
  IFDEF __UNICODE__
    SetICMProfile equ <__imp_SetICMProfileW>
  ENDIF

externdef __imp_SetLayout:PPROC
SetLayout equ <__imp_SetLayout>

externdef __imp_SetLayoutWidth:PPROC
SetLayoutWidth equ <__imp_SetLayoutWidth>

externdef __imp_SetMagicColors:PPROC
SetMagicColors equ <__imp_SetMagicColors>

externdef __imp_SetMapMode:PPROC
SetMapMode equ <__imp_SetMapMode>

externdef __imp_SetMapperFlags:PPROC
SetMapperFlags equ <__imp_SetMapperFlags>

externdef __imp_SetMetaFileBitsEx:PPROC
SetMetaFileBitsEx equ <__imp_SetMetaFileBitsEx>

externdef __imp_SetMetaRgn:PPROC
SetMetaRgn equ <__imp_SetMetaRgn>

externdef __imp_SetMiterLimit:PPROC
SetMiterLimit equ <__imp_SetMiterLimit>

externdef __imp_SetPaletteEntries:PPROC
SetPaletteEntries equ <__imp_SetPaletteEntries>

externdef __imp_SetPixel:PPROC
SetPixel equ <__imp_SetPixel>

externdef __imp_SetPixelFormat:PPROC
SetPixelFormat equ <__imp_SetPixelFormat>

externdef __imp_SetPixelV:PPROC
SetPixelV equ <__imp_SetPixelV>

externdef __imp_SetPolyFillMode:PPROC
SetPolyFillMode equ <__imp_SetPolyFillMode>

externdef __imp_SetROP2:PPROC
SetROP2 equ <__imp_SetROP2>

externdef __imp_SetRectRgn:PPROC
SetRectRgn equ <__imp_SetRectRgn>

externdef __imp_SetRelAbs:PPROC
SetRelAbs equ <__imp_SetRelAbs>

externdef __imp_SetStretchBltMode:PPROC
SetStretchBltMode equ <__imp_SetStretchBltMode>

externdef __imp_SetSystemPaletteUse:PPROC
SetSystemPaletteUse equ <__imp_SetSystemPaletteUse>

externdef __imp_SetTextAlign:PPROC
SetTextAlign equ <__imp_SetTextAlign>

externdef __imp_SetTextCharacterExtra:PPROC
SetTextCharacterExtra equ <__imp_SetTextCharacterExtra>

externdef __imp_SetTextColor:PPROC
SetTextColor equ <__imp_SetTextColor>

externdef __imp_SetTextJustification:PPROC
SetTextJustification equ <__imp_SetTextJustification>

externdef __imp_SetViewportExtEx:PPROC
SetViewportExtEx equ <__imp_SetViewportExtEx>

externdef __imp_SetViewportOrgEx:PPROC
SetViewportOrgEx equ <__imp_SetViewportOrgEx>

externdef __imp_SetVirtualResolution:PPROC
SetVirtualResolution equ <__imp_SetVirtualResolution>

externdef __imp_SetWinMetaFileBits:PPROC
SetWinMetaFileBits equ <__imp_SetWinMetaFileBits>

externdef __imp_SetWindowExtEx:PPROC
SetWindowExtEx equ <__imp_SetWindowExtEx>

externdef __imp_SetWindowOrgEx:PPROC
SetWindowOrgEx equ <__imp_SetWindowOrgEx>

externdef __imp_SetWorldTransform:PPROC
SetWorldTransform equ <__imp_SetWorldTransform>

externdef __imp_StartDocA:PPROC
StartDocA equ <__imp_StartDocA>
  IFNDEF __UNICODE__
    StartDoc equ <__imp_StartDocA>
  ENDIF

externdef __imp_StartDocW:PPROC
StartDocW equ <__imp_StartDocW>
  IFDEF __UNICODE__
    StartDoc equ <__imp_StartDocW>
  ENDIF

externdef __imp_StartFormPage:PPROC
StartFormPage equ <__imp_StartFormPage>

externdef __imp_StartPage:PPROC
StartPage equ <__imp_StartPage>

externdef __imp_StretchBlt:PPROC
StretchBlt equ <__imp_StretchBlt>

externdef __imp_StretchDIBits:PPROC
StretchDIBits equ <__imp_StretchDIBits>

externdef __imp_StrokeAndFillPath:PPROC
StrokeAndFillPath equ <__imp_StrokeAndFillPath>

externdef __imp_StrokePath:PPROC
StrokePath equ <__imp_StrokePath>

externdef __imp_SwapBuffers:PPROC
SwapBuffers equ <__imp_SwapBuffers>

externdef __imp_TextOutA:PPROC
TextOutA equ <__imp_TextOutA>
  IFNDEF __UNICODE__
    TextOut equ <__imp_TextOutA>
  ENDIF

externdef __imp_TextOutW:PPROC
TextOutW equ <__imp_TextOutW>
  IFDEF __UNICODE__
    TextOut equ <__imp_TextOutW>
  ENDIF

externdef __imp_TranslateCharsetInfo:PPROC
TranslateCharsetInfo equ <__imp_TranslateCharsetInfo>

externdef __imp_UnloadNetworkFonts:PPROC
UnloadNetworkFonts equ <__imp_UnloadNetworkFonts>

externdef __imp_UnrealizeObject:PPROC
UnrealizeObject equ <__imp_UnrealizeObject>

externdef __imp_UpdateColors:PPROC
UpdateColors equ <__imp_UpdateColors>

externdef __imp_UpdateICMRegKeyA:PPROC
UpdateICMRegKeyA equ <__imp_UpdateICMRegKeyA>
  IFNDEF __UNICODE__
    UpdateICMRegKey equ <__imp_UpdateICMRegKeyA>
  ENDIF

externdef __imp_UpdateICMRegKeyW:PPROC
UpdateICMRegKeyW equ <__imp_UpdateICMRegKeyW>
  IFDEF __UNICODE__
    UpdateICMRegKey equ <__imp_UpdateICMRegKeyW>
  ENDIF

externdef __imp_WidenPath:PPROC
WidenPath equ <__imp_WidenPath>

externdef __imp_XFORMOBJ_bApplyXform:PPROC
XFORMOBJ_bApplyXform equ <__imp_XFORMOBJ_bApplyXform>

externdef __imp_XFORMOBJ_iGetXform:PPROC
XFORMOBJ_iGetXform equ <__imp_XFORMOBJ_iGetXform>

externdef __imp_XLATEOBJ_cGetPalette:PPROC
XLATEOBJ_cGetPalette equ <__imp_XLATEOBJ_cGetPalette>

externdef __imp_XLATEOBJ_hGetColorTransform:PPROC
XLATEOBJ_hGetColorTransform equ <__imp_XLATEOBJ_hGetColorTransform>

externdef __imp_XLATEOBJ_iXlate:PPROC
XLATEOBJ_iXlate equ <__imp_XLATEOBJ_iXlate>

externdef __imp_XLATEOBJ_piVector:PPROC
XLATEOBJ_piVector equ <__imp_XLATEOBJ_piVector>

externdef __imp_bInitSystemAndFontsDirectoriesW:PPROC
bInitSystemAndFontsDirectoriesW equ <__imp_bInitSystemAndFontsDirectoriesW>
  IFDEF __UNICODE__
    bInitSystemAndFontsDirectories equ <__imp_bInitSystemAndFontsDirectoriesW>
  ENDIF

externdef __imp_bMakePathNameW:PPROC
bMakePathNameW equ <__imp_bMakePathNameW>
  IFDEF __UNICODE__
    bMakePathName equ <__imp_bMakePathNameW>
  ENDIF

externdef __imp_cGetTTFFromFOT:PPROC
cGetTTFFromFOT equ <__imp_cGetTTFFromFOT>

externdef __imp_gdiPlaySpoolStream:PPROC
gdiPlaySpoolStream equ <__imp_gdiPlaySpoolStream>
