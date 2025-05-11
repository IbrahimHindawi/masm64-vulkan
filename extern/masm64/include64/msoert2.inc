externdef __imp_AppendTempFileList:PPROC
AppendTempFileList equ <__imp_AppendTempFileList>

externdef __imp_AthwsprintfW:PPROC
AthwsprintfW equ <__imp_AthwsprintfW>
  IFDEF __UNICODE__
    Athwsprintf equ <__imp_AthwsprintfW>
  ENDIF

externdef __imp_BrowseForFolder:PPROC
BrowseForFolder equ <__imp_BrowseForFolder>

externdef __imp_BrowseForFolderW:PPROC
BrowseForFolderW equ <__imp_BrowseForFolderW>
  IFDEF __UNICODE__
    BrowseForFolder equ <__imp_BrowseForFolderW>
  ENDIF

externdef __imp_BuildNotificationPackage:PPROC
BuildNotificationPackage equ <__imp_BuildNotificationPackage>

externdef __imp_CchFileTimeToDateTimeSz:PPROC
CchFileTimeToDateTimeSz equ <__imp_CchFileTimeToDateTimeSz>

externdef __imp_CchFileTimeToDateTimeW:PPROC
CchFileTimeToDateTimeW equ <__imp_CchFileTimeToDateTimeW>
  IFDEF __UNICODE__
    CchFileTimeToDateTime equ <__imp_CchFileTimeToDateTimeW>
  ENDIF

externdef __imp_CenterDialog:PPROC
CenterDialog equ <__imp_CenterDialog>

externdef __imp_ChConvertFromHex:PPROC
ChConvertFromHex equ <__imp_ChConvertFromHex>

externdef __imp_CleanupFileNameInPlaceA:PPROC
CleanupFileNameInPlaceA equ <__imp_CleanupFileNameInPlaceA>
  IFNDEF __UNICODE__
    CleanupFileNameInPlace equ <__imp_CleanupFileNameInPlaceA>
  ENDIF

externdef __imp_CleanupFileNameInPlaceW:PPROC
CleanupFileNameInPlaceW equ <__imp_CleanupFileNameInPlaceW>
  IFDEF __UNICODE__
    CleanupFileNameInPlace equ <__imp_CleanupFileNameInPlaceW>
  ENDIF

externdef __imp_CleanupGlobalTempFiles:PPROC
CleanupGlobalTempFiles equ <__imp_CleanupGlobalTempFiles>

externdef __imp_CopyRegistry:PPROC
CopyRegistry equ <__imp_CopyRegistry>

externdef __imp_CrackNotificationPackage:PPROC
CrackNotificationPackage equ <__imp_CrackNotificationPackage>

externdef __imp_CreateDataObject:PPROC
CreateDataObject equ <__imp_CreateDataObject>

externdef __imp_CreateEnumFormatEtc:PPROC
CreateEnumFormatEtc equ <__imp_CreateEnumFormatEtc>

externdef __imp_CreateInfoWindow:PPROC
CreateInfoWindow equ <__imp_CreateInfoWindow>

externdef __imp_CreateLogFile:PPROC
CreateLogFile equ <__imp_CreateLogFile>

externdef __imp_CreateNotify:PPROC
CreateNotify equ <__imp_CreateNotify>

externdef __imp_CreateStreamOnHFile:PPROC
CreateStreamOnHFile equ <__imp_CreateStreamOnHFile>

externdef __imp_CreateStreamOnHFileW:PPROC
CreateStreamOnHFileW equ <__imp_CreateStreamOnHFileW>
  IFDEF __UNICODE__
    CreateStreamOnHFile equ <__imp_CreateStreamOnHFileW>
  ENDIF

externdef __imp_CreateSystemHandleName:PPROC
CreateSystemHandleName equ <__imp_CreateSystemHandleName>

externdef __imp_CreateTempFile:PPROC
CreateTempFile equ <__imp_CreateTempFile>

externdef __imp_CreateTempFileStream:PPROC
CreateTempFileStream equ <__imp_CreateTempFileStream>

externdef __imp_CryptAllocFunc:PPROC
CryptAllocFunc equ <__imp_CryptAllocFunc>

externdef __imp_CryptFreeFunc:PPROC
CryptFreeFunc equ <__imp_CryptFreeFunc>

externdef __imp_DeleteTempFile:PPROC
DeleteTempFile equ <__imp_DeleteTempFile>

externdef __imp_DeleteTempFileOnShutdown:PPROC
DeleteTempFileOnShutdown equ <__imp_DeleteTempFileOnShutdown>

externdef __imp_DeleteTempFileOnShutdownEx:PPROC
DeleteTempFileOnShutdownEx equ <__imp_DeleteTempFileOnShutdownEx>

externdef __imp_DoHotMailWizard:PPROC
DoHotMailWizard equ <__imp_DoHotMailWizard>

externdef __imp_FBuildTempPath:PPROC
FBuildTempPath equ <__imp_FBuildTempPath>

externdef __imp_FBuildTempPathW:PPROC
FBuildTempPathW equ <__imp_FBuildTempPathW>
  IFDEF __UNICODE__
    FBuildTempPath equ <__imp_FBuildTempPathW>
  ENDIF

externdef __imp_FInitializeRichEdit:PPROC
FInitializeRichEdit equ <__imp_FInitializeRichEdit>

externdef __imp_FIsEmptyA:PPROC
FIsEmptyA equ <__imp_FIsEmptyA>
  IFNDEF __UNICODE__
    FIsEmpty equ <__imp_FIsEmptyA>
  ENDIF

externdef __imp_FIsEmptyW:PPROC
FIsEmptyW equ <__imp_FIsEmptyW>
  IFDEF __UNICODE__
    FIsEmpty equ <__imp_FIsEmptyW>
  ENDIF

externdef __imp_FIsHTMLFile:PPROC
FIsHTMLFile equ <__imp_FIsHTMLFile>

externdef __imp_FIsHTMLFileW:PPROC
FIsHTMLFileW equ <__imp_FIsHTMLFileW>
  IFDEF __UNICODE__
    FIsHTMLFile equ <__imp_FIsHTMLFileW>
  ENDIF

externdef __imp_FIsSpaceA:PPROC
FIsSpaceA equ <__imp_FIsSpaceA>
  IFNDEF __UNICODE__
    FIsSpace equ <__imp_FIsSpaceA>
  ENDIF

externdef __imp_FIsSpaceW:PPROC
FIsSpaceW equ <__imp_FIsSpaceW>
  IFDEF __UNICODE__
    FIsSpace equ <__imp_FIsSpaceW>
  ENDIF

externdef __imp_FIsValidFileNameCharA:PPROC
FIsValidFileNameCharA equ <__imp_FIsValidFileNameCharA>
  IFNDEF __UNICODE__
    FIsValidFileNameChar equ <__imp_FIsValidFileNameCharA>
  ENDIF

externdef __imp_FIsValidFileNameCharW:PPROC
FIsValidFileNameCharW equ <__imp_FIsValidFileNameCharW>
  IFDEF __UNICODE__
    FIsValidFileNameChar equ <__imp_FIsValidFileNameCharW>
  ENDIF

externdef __imp_FMissingCert:PPROC
FMissingCert equ <__imp_FMissingCert>

externdef __imp_FreeTempFileList:PPROC
FreeTempFileList equ <__imp_FreeTempFileList>

externdef __imp_GenerateUniqueFileName:PPROC
GenerateUniqueFileName equ <__imp_GenerateUniqueFileName>

externdef __imp_GetDllMajorVersion:PPROC
GetDllMajorVersion equ <__imp_GetDllMajorVersion>

externdef __imp_GetExePath:PPROC
GetExePath equ <__imp_GetExePath>

externdef __imp_GetHtmlCharset:PPROC
GetHtmlCharset equ <__imp_GetHtmlCharset>

externdef __imp_GetRichEdClassStringW:PPROC
GetRichEdClassStringW equ <__imp_GetRichEdClassStringW>
  IFDEF __UNICODE__
    GetRichEdClassString equ <__imp_GetRichEdClassStringW>
  ENDIF

externdef __imp_HrBSTRToLPSZ:PPROC
HrBSTRToLPSZ equ <__imp_HrBSTRToLPSZ>

externdef __imp_HrByteToStream:PPROC
HrByteToStream equ <__imp_HrByteToStream>

externdef __imp_HrCheckTridentMenu:PPROC
HrCheckTridentMenu equ <__imp_HrCheckTridentMenu>

externdef __imp_HrCopyLockBytesToStream:PPROC
HrCopyLockBytesToStream equ <__imp_HrCopyLockBytesToStream>

externdef __imp_HrCopyStream:PPROC
HrCopyStream equ <__imp_HrCopyStream>

externdef __imp_HrCopyStreamCB:PPROC
HrCopyStreamCB equ <__imp_HrCopyStreamCB>

externdef __imp_HrCopyStreamCBEndOnCRLF:PPROC
HrCopyStreamCBEndOnCRLF equ <__imp_HrCopyStreamCBEndOnCRLF>

externdef __imp_HrCopyStreamToByte:PPROC
HrCopyStreamToByte equ <__imp_HrCopyStreamToByte>

externdef __imp_HrCreatePhonebookEntry:PPROC
HrCreatePhonebookEntry equ <__imp_HrCreatePhonebookEntry>

externdef __imp_HrCreateTridentMenu:PPROC
HrCreateTridentMenu equ <__imp_HrCreateTridentMenu>

externdef __imp_HrDecodeObject:PPROC
HrDecodeObject equ <__imp_HrDecodeObject>

externdef __imp_HrEditPhonebookEntry:PPROC
HrEditPhonebookEntry equ <__imp_HrEditPhonebookEntry>

externdef __imp_HrFillRasCombo:PPROC
HrFillRasCombo equ <__imp_HrFillRasCombo>

externdef __imp_HrFindInetTimeZone:PPROC
HrFindInetTimeZone equ <__imp_HrFindInetTimeZone>

externdef __imp_HrGetBodyElement:PPROC
HrGetBodyElement equ <__imp_HrGetBodyElement>

externdef __imp_HrGetCertKeyUsage:PPROC
HrGetCertKeyUsage equ <__imp_HrGetCertKeyUsage>

externdef __imp_HrGetCertificateParam:PPROC
HrGetCertificateParam equ <__imp_HrGetCertificateParam>

externdef __imp_HrGetElementImpl:PPROC
HrGetElementImpl equ <__imp_HrGetElementImpl>

externdef __imp_HrGetMsgParam:PPROC
HrGetMsgParam equ <__imp_HrGetMsgParam>

externdef __imp_HrGetStreamPos:PPROC
HrGetStreamPos equ <__imp_HrGetStreamPos>

externdef __imp_HrGetStreamSize:PPROC
HrGetStreamSize equ <__imp_HrGetStreamSize>

externdef __imp_HrGetStyleSheet:PPROC
HrGetStyleSheet equ <__imp_HrGetStyleSheet>

externdef __imp_HrIStreamToBSTR:PPROC
HrIStreamToBSTR equ <__imp_HrIStreamToBSTR>

externdef __imp_HrIStreamWToBSTR:PPROC
HrIStreamWToBSTR equ <__imp_HrIStreamWToBSTR>

externdef __imp_HrIndexOfMonth:PPROC
HrIndexOfMonth equ <__imp_HrIndexOfMonth>

externdef __imp_HrIndexOfWeek:PPROC
HrIndexOfWeek equ <__imp_HrIndexOfWeek>

externdef __imp_HrIsStreamUnicode:PPROC
HrIsStreamUnicode equ <__imp_HrIsStreamUnicode>

externdef __imp_HrLPSZCPToBSTR:PPROC
HrLPSZCPToBSTR equ <__imp_HrLPSZCPToBSTR>

externdef __imp_HrLPSZToBSTR:PPROC
HrLPSZToBSTR equ <__imp_HrLPSZToBSTR>

externdef __imp_HrRewindStream:PPROC
HrRewindStream equ <__imp_HrRewindStream>

externdef __imp_HrSafeGetStreamSize:PPROC
HrSafeGetStreamSize equ <__imp_HrSafeGetStreamSize>

externdef __imp_HrSetDirtyFlagImpl:PPROC
HrSetDirtyFlagImpl equ <__imp_HrSetDirtyFlagImpl>

externdef __imp_HrStreamSeekBegin:PPROC
HrStreamSeekBegin equ <__imp_HrStreamSeekBegin>

externdef __imp_HrStreamSeekCur:PPROC
HrStreamSeekCur equ <__imp_HrStreamSeekCur>

externdef __imp_HrStreamSeekEnd:PPROC
HrStreamSeekEnd equ <__imp_HrStreamSeekEnd>

externdef __imp_HrStreamSeekSet:PPROC
HrStreamSeekSet equ <__imp_HrStreamSeekSet>

externdef __imp_HrStreamToByte:PPROC
HrStreamToByte equ <__imp_HrStreamToByte>

externdef __imp_HrVerifyCertEnhKeyUsage:PPROC
HrVerifyCertEnhKeyUsage equ <__imp_HrVerifyCertEnhKeyUsage>

externdef __imp_IDrawText:PPROC
IDrawText equ <__imp_IDrawText>

externdef __imp_IUnknownList_CreateInstance:PPROC
IUnknownList_CreateInstance equ <__imp_IUnknownList_CreateInstance>

externdef __imp_IVoidPtrList_CreateInstance:PPROC
IVoidPtrList_CreateInstance equ <__imp_IVoidPtrList_CreateInstance>

externdef __imp_IsDigit:PPROC
IsDigit equ <__imp_IsDigit>

externdef __imp_IsHttpUrlA:PPROC
IsHttpUrlA equ <__imp_IsHttpUrlA>
  IFNDEF __UNICODE__
    IsHttpUrl equ <__imp_IsHttpUrlA>
  ENDIF

externdef __imp_IsPlatformWinNT:PPROC
IsPlatformWinNT equ <__imp_IsPlatformWinNT>

externdef __imp_IsPrint:PPROC
IsPrint equ <__imp_IsPrint>

externdef __imp_IsUpper:PPROC
IsUpper equ <__imp_IsUpper>

externdef __imp_IsValidFileIfFileUrl:PPROC
IsValidFileIfFileUrl equ <__imp_IsValidFileIfFileUrl>

externdef __imp_IsValidFileIfFileUrlW:PPROC
IsValidFileIfFileUrlW equ <__imp_IsValidFileIfFileUrlW>
  IFDEF __UNICODE__
    IsValidFileIfFileUrl equ <__imp_IsValidFileIfFileUrlW>
  ENDIF

externdef __imp_LoadMappedToolbarBitmap:PPROC
LoadMappedToolbarBitmap equ <__imp_LoadMappedToolbarBitmap>

externdef __imp_MessageBoxInst:PPROC
MessageBoxInst equ <__imp_MessageBoxInst>

externdef __imp_MessageBoxInstW:PPROC
MessageBoxInstW equ <__imp_MessageBoxInstW>
  IFDEF __UNICODE__
    MessageBoxInst equ <__imp_MessageBoxInstW>
  ENDIF

externdef __imp_OpenFileStream:PPROC
OpenFileStream equ <__imp_OpenFileStream>

externdef __imp_OpenFileStreamShare:PPROC
OpenFileStreamShare equ <__imp_OpenFileStreamShare>

externdef __imp_OpenFileStreamShareW:PPROC
OpenFileStreamShareW equ <__imp_OpenFileStreamShareW>
  IFDEF __UNICODE__
    OpenFileStreamShare equ <__imp_OpenFileStreamShareW>
  ENDIF

externdef __imp_OpenFileStreamW:PPROC
OpenFileStreamW equ <__imp_OpenFileStreamW>
  IFDEF __UNICODE__
    OpenFileStream equ <__imp_OpenFileStreamW>
  ENDIF

externdef __imp_OpenFileStreamWithFlags:PPROC
OpenFileStreamWithFlags equ <__imp_OpenFileStreamWithFlags>

externdef __imp_OpenFileStreamWithFlagsW:PPROC
OpenFileStreamWithFlagsW equ <__imp_OpenFileStreamWithFlagsW>
  IFDEF __UNICODE__
    OpenFileStreamWithFlags equ <__imp_OpenFileStreamWithFlagsW>
  ENDIF

externdef __imp_PSTCreateTypeSubType_NoUI:PPROC
PSTCreateTypeSubType_NoUI equ <__imp_PSTCreateTypeSubType_NoUI>

externdef __imp_PSTFreeHandle:PPROC
PSTFreeHandle equ <__imp_PSTFreeHandle>

externdef __imp_PSTGetData:PPROC
PSTGetData equ <__imp_PSTGetData>

externdef __imp_PSTSetNewData:PPROC
PSTSetNewData equ <__imp_PSTSetNewData>

externdef __imp_PVDecodeObject:PPROC
PVDecodeObject equ <__imp_PVDecodeObject>

externdef __imp_PVGetCertificateParam:PPROC
PVGetCertificateParam equ <__imp_PVGetCertificateParam>

externdef __imp_PVGetMsgParam:PPROC
PVGetMsgParam equ <__imp_PVGetMsgParam>

externdef __imp_PszAllocA:PPROC
PszAllocA equ <__imp_PszAllocA>
  IFNDEF __UNICODE__
    PszAlloc equ <__imp_PszAllocA>
  ENDIF

externdef __imp_PszAllocW:PPROC
PszAllocW equ <__imp_PszAllocW>
  IFDEF __UNICODE__
    PszAlloc equ <__imp_PszAllocW>
  ENDIF

externdef __imp_PszDayFromIndex:PPROC
PszDayFromIndex equ <__imp_PszDayFromIndex>

externdef __imp_PszDupA:PPROC
PszDupA equ <__imp_PszDupA>
  IFNDEF __UNICODE__
    PszDup equ <__imp_PszDupA>
  ENDIF

externdef __imp_PszDupLenA:PPROC
PszDupLenA equ <__imp_PszDupLenA>
  IFNDEF __UNICODE__
    PszDupLen equ <__imp_PszDupLenA>
  ENDIF

externdef __imp_PszDupW:PPROC
PszDupW equ <__imp_PszDupW>
  IFDEF __UNICODE__
    PszDup equ <__imp_PszDupW>
  ENDIF

externdef __imp_PszEscapeMenuStringA:PPROC
PszEscapeMenuStringA equ <__imp_PszEscapeMenuStringA>
  IFNDEF __UNICODE__
    PszEscapeMenuString equ <__imp_PszEscapeMenuStringA>
  ENDIF

externdef __imp_PszFromANSIStreamA:PPROC
PszFromANSIStreamA equ <__imp_PszFromANSIStreamA>
  IFNDEF __UNICODE__
    PszFromANSIStream equ <__imp_PszFromANSIStreamA>
  ENDIF

externdef __imp_PszMonthFromIndex:PPROC
PszMonthFromIndex equ <__imp_PszMonthFromIndex>

externdef __imp_PszScanToCharA:PPROC
PszScanToCharA equ <__imp_PszScanToCharA>
  IFNDEF __UNICODE__
    PszScanToChar equ <__imp_PszScanToCharA>
  ENDIF

externdef __imp_PszScanToWhiteA:PPROC
PszScanToWhiteA equ <__imp_PszScanToWhiteA>
  IFNDEF __UNICODE__
    PszScanToWhite equ <__imp_PszScanToWhiteA>
  ENDIF

externdef __imp_PszSkipWhiteA:PPROC
PszSkipWhiteA equ <__imp_PszSkipWhiteA>
  IFNDEF __UNICODE__
    PszSkipWhite equ <__imp_PszSkipWhiteA>
  ENDIF

externdef __imp_PszSkipWhiteW:PPROC
PszSkipWhiteW equ <__imp_PszSkipWhiteW>
  IFDEF __UNICODE__
    PszSkipWhite equ <__imp_PszSkipWhiteW>
  ENDIF

externdef __imp_PszToANSI:PPROC
PszToANSI equ <__imp_PszToANSI>

externdef __imp_PszToUnicode:PPROC
PszToUnicode equ <__imp_PszToUnicode>

externdef __imp_ReplaceChars:PPROC
ReplaceChars equ <__imp_ReplaceChars>

externdef __imp_ReplaceCharsW:PPROC
ReplaceCharsW equ <__imp_ReplaceCharsW>
  IFDEF __UNICODE__
    ReplaceChars equ <__imp_ReplaceCharsW>
  ENDIF

externdef __imp_RicheditStreamIn:PPROC
RicheditStreamIn equ <__imp_RicheditStreamIn>

externdef __imp_RicheditStreamOut:PPROC
RicheditStreamOut equ <__imp_RicheditStreamOut>

externdef __imp_SetFontOnRichEd:PPROC
SetFontOnRichEd equ <__imp_SetFontOnRichEd>

externdef __imp_SetIntlFont:PPROC
SetIntlFont equ <__imp_SetIntlFont>

externdef __imp_SetWindowLongPtrAthW:PPROC
SetWindowLongPtrAthW equ <__imp_SetWindowLongPtrAthW>
  IFDEF __UNICODE__
    SetWindowLongPtrAth equ <__imp_SetWindowLongPtrAthW>
  ENDIF

externdef __imp_ShellUtil_GetSpecialFolderPath:PPROC
ShellUtil_GetSpecialFolderPath equ <__imp_ShellUtil_GetSpecialFolderPath>

externdef __imp_StrChrExA:PPROC
StrChrExA equ <__imp_StrChrExA>
  IFNDEF __UNICODE__
    StrChrEx equ <__imp_StrChrExA>
  ENDIF

externdef __imp_StrToUintA:PPROC
StrToUintA equ <__imp_StrToUintA>
  IFNDEF __UNICODE__
    StrToUint equ <__imp_StrToUintA>
  ENDIF

externdef __imp_StrToUintW:PPROC
StrToUintW equ <__imp_StrToUintW>
  IFDEF __UNICODE__
    StrToUint equ <__imp_StrToUintW>
  ENDIF

externdef __imp_StrTokEx:PPROC
StrTokEx equ <__imp_StrTokEx>

externdef __imp_StreamSubStringMatch:PPROC
StreamSubStringMatch equ <__imp_StreamSubStringMatch>

externdef __imp_StripCRLF:PPROC
StripCRLF equ <__imp_StripCRLF>

externdef __imp_SzGetCertificateEmailAddress:PPROC
SzGetCertificateEmailAddress equ <__imp_SzGetCertificateEmailAddress>

externdef __imp_UlStripWhitespace:PPROC
UlStripWhitespace equ <__imp_UlStripWhitespace>

externdef __imp_UlStripWhitespaceW:PPROC
UlStripWhitespaceW equ <__imp_UlStripWhitespaceW>
  IFDEF __UNICODE__
    UlStripWhitespace equ <__imp_UlStripWhitespaceW>
  ENDIF

externdef __imp_UnlocStrEqNW:PPROC
UnlocStrEqNW equ <__imp_UnlocStrEqNW>
  IFDEF __UNICODE__
    UnlocStrEqN equ <__imp_UnlocStrEqNW>
  ENDIF

externdef __imp_UpdateRebarBandColors:PPROC
UpdateRebarBandColors equ <__imp_UpdateRebarBandColors>

externdef __imp_WriteStreamToFile:PPROC
WriteStreamToFile equ <__imp_WriteStreamToFile>

externdef __imp_WriteStreamToFileHandle:PPROC
WriteStreamToFileHandle equ <__imp_WriteStreamToFileHandle>

externdef __imp_WriteStreamToFileW:PPROC
WriteStreamToFileW equ <__imp_WriteStreamToFileW>
  IFDEF __UNICODE__
    WriteStreamToFile equ <__imp_WriteStreamToFileW>
  ENDIF

externdef __imp_WszGenerateNameFromBlob:PPROC
WszGenerateNameFromBlob equ <__imp_WszGenerateNameFromBlob>

externdef __imp__MSG:PPROC
_MSG equ <__imp__MSG>

externdef __imp_fGetBrowserUrlEncoding:PPROC
fGetBrowserUrlEncoding equ <__imp_fGetBrowserUrlEncoding>

externdef __imp_strtrim:PPROC
strtrim equ <__imp_strtrim>

externdef __imp_strtrimW:PPROC
strtrimW equ <__imp_strtrimW>
  IFDEF __UNICODE__
    strtrim equ <__imp_strtrimW>
  ENDIF
