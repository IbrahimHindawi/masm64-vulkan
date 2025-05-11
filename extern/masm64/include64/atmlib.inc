externdef __imp_ATMAddFont:PPROC
ATMAddFont equ <__imp_ATMAddFont>

externdef __imp_ATMAddFontA:PPROC
ATMAddFontA equ <__imp_ATMAddFontA>
  IFNDEF __UNICODE__
    ATMAddFont equ <__imp_ATMAddFontA>
  ENDIF

externdef __imp_ATMAddFontEx:PPROC
ATMAddFontEx equ <__imp_ATMAddFontEx>

externdef __imp_ATMAddFontExA:PPROC
ATMAddFontExA equ <__imp_ATMAddFontExA>
  IFNDEF __UNICODE__
    ATMAddFontEx equ <__imp_ATMAddFontExA>
  ENDIF

externdef __imp_ATMAddFontExW:PPROC
ATMAddFontExW equ <__imp_ATMAddFontExW>
  IFDEF __UNICODE__
    ATMAddFontEx equ <__imp_ATMAddFontExW>
  ENDIF

externdef __imp_ATMAddFontW:PPROC
ATMAddFontW equ <__imp_ATMAddFontW>
  IFDEF __UNICODE__
    ATMAddFont equ <__imp_ATMAddFontW>
  ENDIF

externdef __imp_ATMBBoxBaseXYShowText:PPROC
ATMBBoxBaseXYShowText equ <__imp_ATMBBoxBaseXYShowText>

externdef __imp_ATMBBoxBaseXYShowTextA:PPROC
ATMBBoxBaseXYShowTextA equ <__imp_ATMBBoxBaseXYShowTextA>
  IFNDEF __UNICODE__
    ATMBBoxBaseXYShowText equ <__imp_ATMBBoxBaseXYShowTextA>
  ENDIF

externdef __imp_ATMBBoxBaseXYShowTextW:PPROC
ATMBBoxBaseXYShowTextW equ <__imp_ATMBBoxBaseXYShowTextW>
  IFDEF __UNICODE__
    ATMBBoxBaseXYShowText equ <__imp_ATMBBoxBaseXYShowTextW>
  ENDIF

externdef __imp_ATMBeginFontChange:PPROC
ATMBeginFontChange equ <__imp_ATMBeginFontChange>

externdef __imp_ATMClient:PPROC
ATMClient equ <__imp_ATMClient>

externdef __imp_ATMEndFontChange:PPROC
ATMEndFontChange equ <__imp_ATMEndFontChange>

externdef __imp_ATMEnumFonts:PPROC
ATMEnumFonts equ <__imp_ATMEnumFonts>

externdef __imp_ATMEnumFontsA:PPROC
ATMEnumFontsA equ <__imp_ATMEnumFontsA>
  IFNDEF __UNICODE__
    ATMEnumFonts equ <__imp_ATMEnumFontsA>
  ENDIF

externdef __imp_ATMEnumFontsW:PPROC
ATMEnumFontsW equ <__imp_ATMEnumFontsW>
  IFDEF __UNICODE__
    ATMEnumFonts equ <__imp_ATMEnumFontsW>
  ENDIF

externdef __imp_ATMEnumMMFonts:PPROC
ATMEnumMMFonts equ <__imp_ATMEnumMMFonts>

externdef __imp_ATMEnumMMFontsA:PPROC
ATMEnumMMFontsA equ <__imp_ATMEnumMMFontsA>
  IFNDEF __UNICODE__
    ATMEnumMMFonts equ <__imp_ATMEnumMMFontsA>
  ENDIF

externdef __imp_ATMEnumMMFontsW:PPROC
ATMEnumMMFontsW equ <__imp_ATMEnumMMFontsW>
  IFDEF __UNICODE__
    ATMEnumMMFonts equ <__imp_ATMEnumMMFontsW>
  ENDIF

externdef __imp_ATMFinish:PPROC
ATMFinish equ <__imp_ATMFinish>

externdef __imp_ATMFontAvailable:PPROC
ATMFontAvailable equ <__imp_ATMFontAvailable>

externdef __imp_ATMFontAvailableA:PPROC
ATMFontAvailableA equ <__imp_ATMFontAvailableA>
  IFNDEF __UNICODE__
    ATMFontAvailable equ <__imp_ATMFontAvailableA>
  ENDIF

externdef __imp_ATMFontAvailableW:PPROC
ATMFontAvailableW equ <__imp_ATMFontAvailableW>
  IFDEF __UNICODE__
    ATMFontAvailable equ <__imp_ATMFontAvailableW>
  ENDIF

externdef __imp_ATMFontSelected:PPROC
ATMFontSelected equ <__imp_ATMFontSelected>

externdef __imp_ATMFontStatus:PPROC
ATMFontStatus equ <__imp_ATMFontStatus>

externdef __imp_ATMFontStatusA:PPROC
ATMFontStatusA equ <__imp_ATMFontStatusA>
  IFNDEF __UNICODE__
    ATMFontStatus equ <__imp_ATMFontStatusA>
  ENDIF

externdef __imp_ATMFontStatusW:PPROC
ATMFontStatusW equ <__imp_ATMFontStatusW>
  IFDEF __UNICODE__
    ATMFontStatus equ <__imp_ATMFontStatusW>
  ENDIF

externdef __imp_ATMForceFontChange:PPROC
ATMForceFontChange equ <__imp_ATMForceFontChange>

externdef __imp_ATMGetBuildStr:PPROC
ATMGetBuildStr equ <__imp_ATMGetBuildStr>

externdef __imp_ATMGetBuildStrA:PPROC
ATMGetBuildStrA equ <__imp_ATMGetBuildStrA>
  IFNDEF __UNICODE__
    ATMGetBuildStr equ <__imp_ATMGetBuildStrA>
  ENDIF

externdef __imp_ATMGetBuildStrW:PPROC
ATMGetBuildStrW equ <__imp_ATMGetBuildStrW>
  IFDEF __UNICODE__
    ATMGetBuildStr equ <__imp_ATMGetBuildStrW>
  ENDIF

externdef __imp_ATMGetFontBBox:PPROC
ATMGetFontBBox equ <__imp_ATMGetFontBBox>

externdef __imp_ATMGetFontInfo:PPROC
ATMGetFontInfo equ <__imp_ATMGetFontInfo>

externdef __imp_ATMGetFontInfoA:PPROC
ATMGetFontInfoA equ <__imp_ATMGetFontInfoA>
  IFNDEF __UNICODE__
    ATMGetFontInfo equ <__imp_ATMGetFontInfoA>
  ENDIF

externdef __imp_ATMGetFontInfoW:PPROC
ATMGetFontInfoW equ <__imp_ATMGetFontInfoW>
  IFDEF __UNICODE__
    ATMGetFontInfo equ <__imp_ATMGetFontInfoW>
  ENDIF

externdef __imp_ATMGetFontPaths:PPROC
ATMGetFontPaths equ <__imp_ATMGetFontPaths>

externdef __imp_ATMGetFontPathsA:PPROC
ATMGetFontPathsA equ <__imp_ATMGetFontPathsA>
  IFNDEF __UNICODE__
    ATMGetFontPaths equ <__imp_ATMGetFontPathsA>
  ENDIF

externdef __imp_ATMGetFontPathsW:PPROC
ATMGetFontPathsW equ <__imp_ATMGetFontPathsW>
  IFDEF __UNICODE__
    ATMGetFontPaths equ <__imp_ATMGetFontPathsW>
  ENDIF

externdef __imp_ATMGetGlyphList:PPROC
ATMGetGlyphList equ <__imp_ATMGetGlyphList>

externdef __imp_ATMGetGlyphListA:PPROC
ATMGetGlyphListA equ <__imp_ATMGetGlyphListA>
  IFNDEF __UNICODE__
    ATMGetGlyphList equ <__imp_ATMGetGlyphListA>
  ENDIF

externdef __imp_ATMGetGlyphListW:PPROC
ATMGetGlyphListW equ <__imp_ATMGetGlyphListW>
  IFDEF __UNICODE__
    ATMGetGlyphList equ <__imp_ATMGetGlyphListW>
  ENDIF

externdef __imp_ATMGetMenuName:PPROC
ATMGetMenuName equ <__imp_ATMGetMenuName>

externdef __imp_ATMGetMenuNameA:PPROC
ATMGetMenuNameA equ <__imp_ATMGetMenuNameA>
  IFNDEF __UNICODE__
    ATMGetMenuName equ <__imp_ATMGetMenuNameA>
  ENDIF

externdef __imp_ATMGetMenuNameW:PPROC
ATMGetMenuNameW equ <__imp_ATMGetMenuNameW>
  IFDEF __UNICODE__
    ATMGetMenuName equ <__imp_ATMGetMenuNameW>
  ENDIF

externdef __imp_ATMGetNtmFields:PPROC
ATMGetNtmFields equ <__imp_ATMGetNtmFields>

externdef __imp_ATMGetNtmFieldsA:PPROC
ATMGetNtmFieldsA equ <__imp_ATMGetNtmFieldsA>
  IFNDEF __UNICODE__
    ATMGetNtmFields equ <__imp_ATMGetNtmFieldsA>
  ENDIF

externdef __imp_ATMGetNtmFieldsW:PPROC
ATMGetNtmFieldsW equ <__imp_ATMGetNtmFieldsW>
  IFDEF __UNICODE__
    ATMGetNtmFields equ <__imp_ATMGetNtmFieldsW>
  ENDIF

externdef __imp_ATMGetOutline:PPROC
ATMGetOutline equ <__imp_ATMGetOutline>

externdef __imp_ATMGetOutlineA:PPROC
ATMGetOutlineA equ <__imp_ATMGetOutlineA>
  IFNDEF __UNICODE__
    ATMGetOutline equ <__imp_ATMGetOutlineA>
  ENDIF

externdef __imp_ATMGetOutlineW:PPROC
ATMGetOutlineW equ <__imp_ATMGetOutlineW>
  IFDEF __UNICODE__
    ATMGetOutline equ <__imp_ATMGetOutlineW>
  ENDIF

externdef __imp_ATMGetPostScriptName:PPROC
ATMGetPostScriptName equ <__imp_ATMGetPostScriptName>

externdef __imp_ATMGetPostScriptNameA:PPROC
ATMGetPostScriptNameA equ <__imp_ATMGetPostScriptNameA>
  IFNDEF __UNICODE__
    ATMGetPostScriptName equ <__imp_ATMGetPostScriptNameA>
  ENDIF

externdef __imp_ATMGetPostScriptNameW:PPROC
ATMGetPostScriptNameW equ <__imp_ATMGetPostScriptNameW>
  IFDEF __UNICODE__
    ATMGetPostScriptName equ <__imp_ATMGetPostScriptNameW>
  ENDIF

externdef __imp_ATMGetVersion:PPROC
ATMGetVersion equ <__imp_ATMGetVersion>

externdef __imp_ATMGetVersionEx:PPROC
ATMGetVersionEx equ <__imp_ATMGetVersionEx>

externdef __imp_ATMGetVersionExA:PPROC
ATMGetVersionExA equ <__imp_ATMGetVersionExA>
  IFNDEF __UNICODE__
    ATMGetVersionEx equ <__imp_ATMGetVersionExA>
  ENDIF

externdef __imp_ATMGetVersionExW:PPROC
ATMGetVersionExW equ <__imp_ATMGetVersionExW>
  IFDEF __UNICODE__
    ATMGetVersionEx equ <__imp_ATMGetVersionExW>
  ENDIF

externdef __imp_ATMInstallSubstFontA:PPROC
ATMInstallSubstFontA equ <__imp_ATMInstallSubstFontA>
  IFNDEF __UNICODE__
    ATMInstallSubstFont equ <__imp_ATMInstallSubstFontA>
  ENDIF

externdef __imp_ATMInstallSubstFontW:PPROC
ATMInstallSubstFontW equ <__imp_ATMInstallSubstFontW>
  IFDEF __UNICODE__
    ATMInstallSubstFont equ <__imp_ATMInstallSubstFontW>
  ENDIF

externdef __imp_ATMMakePFM:PPROC
ATMMakePFM equ <__imp_ATMMakePFM>

externdef __imp_ATMMakePFMA:PPROC
ATMMakePFMA equ <__imp_ATMMakePFMA>
  IFNDEF __UNICODE__
    ATMMakePFM equ <__imp_ATMMakePFMA>
  ENDIF

externdef __imp_ATMMakePFMW:PPROC
ATMMakePFMW equ <__imp_ATMMakePFMW>
  IFDEF __UNICODE__
    ATMMakePFM equ <__imp_ATMMakePFMW>
  ENDIF

externdef __imp_ATMMakePSS:PPROC
ATMMakePSS equ <__imp_ATMMakePSS>

externdef __imp_ATMMakePSSA:PPROC
ATMMakePSSA equ <__imp_ATMMakePSSA>
  IFNDEF __UNICODE__
    ATMMakePSS equ <__imp_ATMMakePSSA>
  ENDIF

externdef __imp_ATMMakePSSW:PPROC
ATMMakePSSW equ <__imp_ATMMakePSSW>
  IFDEF __UNICODE__
    ATMMakePSS equ <__imp_ATMMakePSSW>
  ENDIF

externdef __imp_ATMProperlyLoaded:PPROC
ATMProperlyLoaded equ <__imp_ATMProperlyLoaded>

externdef __imp_ATMRemoveFont:PPROC
ATMRemoveFont equ <__imp_ATMRemoveFont>

externdef __imp_ATMRemoveFontA:PPROC
ATMRemoveFontA equ <__imp_ATMRemoveFontA>
  IFNDEF __UNICODE__
    ATMRemoveFont equ <__imp_ATMRemoveFontA>
  ENDIF

externdef __imp_ATMRemoveFontW:PPROC
ATMRemoveFontW equ <__imp_ATMRemoveFontW>
  IFDEF __UNICODE__
    ATMRemoveFont equ <__imp_ATMRemoveFontW>
  ENDIF

externdef __imp_ATMRemoveSubstFontA:PPROC
ATMRemoveSubstFontA equ <__imp_ATMRemoveSubstFontA>
  IFNDEF __UNICODE__
    ATMRemoveSubstFont equ <__imp_ATMRemoveSubstFontA>
  ENDIF

externdef __imp_ATMRemoveSubstFontW:PPROC
ATMRemoveSubstFontW equ <__imp_ATMRemoveSubstFontW>
  IFDEF __UNICODE__
    ATMRemoveSubstFont equ <__imp_ATMRemoveSubstFontW>
  ENDIF

externdef __imp_ATMSelectEncoding:PPROC
ATMSelectEncoding equ <__imp_ATMSelectEncoding>

externdef __imp_ATMSelectObject:PPROC
ATMSelectObject equ <__imp_ATMSelectObject>

externdef __imp_ATMSetFlags:PPROC
ATMSetFlags equ <__imp_ATMSetFlags>

externdef __imp_ATMXYShowText:PPROC
ATMXYShowText equ <__imp_ATMXYShowText>

externdef __imp_ATMXYShowTextA:PPROC
ATMXYShowTextA equ <__imp_ATMXYShowTextA>
  IFNDEF __UNICODE__
    ATMXYShowText equ <__imp_ATMXYShowTextA>
  ENDIF

externdef __imp_ATMXYShowTextW:PPROC
ATMXYShowTextW equ <__imp_ATMXYShowTextW>
  IFDEF __UNICODE__
    ATMXYShowText equ <__imp_ATMXYShowTextW>
  ENDIF
