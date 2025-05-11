externdef __imp_BindImage:PPROC
BindImage equ <__imp_BindImage>

externdef __imp_BindImageEx:PPROC
BindImageEx equ <__imp_BindImageEx>

externdef __imp_CheckSumMappedFile:PPROC
CheckSumMappedFile equ <__imp_CheckSumMappedFile>

externdef __imp_EnumerateLoadedModules64:PPROC
EnumerateLoadedModules64 equ <__imp_EnumerateLoadedModules64>

externdef __imp_EnumerateLoadedModules:PPROC
EnumerateLoadedModules equ <__imp_EnumerateLoadedModules>

externdef __imp_FindDebugInfoFile:PPROC
FindDebugInfoFile equ <__imp_FindDebugInfoFile>

externdef __imp_FindDebugInfoFileEx:PPROC
FindDebugInfoFileEx equ <__imp_FindDebugInfoFileEx>

externdef __imp_FindExecutableImage:PPROC
FindExecutableImage equ <__imp_FindExecutableImage>

externdef __imp_FindExecutableImageEx:PPROC
FindExecutableImageEx equ <__imp_FindExecutableImageEx>

externdef __imp_FindFileInPath:PPROC
FindFileInPath equ <__imp_FindFileInPath>

externdef __imp_FindFileInSearchPath:PPROC
FindFileInSearchPath equ <__imp_FindFileInSearchPath>

externdef __imp_GetImageConfigInformation:PPROC
GetImageConfigInformation equ <__imp_GetImageConfigInformation>

externdef __imp_GetImageUnusedHeaderBytes:PPROC
GetImageUnusedHeaderBytes equ <__imp_GetImageUnusedHeaderBytes>

externdef __imp_GetTimestampForLoadedLibrary:PPROC
GetTimestampForLoadedLibrary equ <__imp_GetTimestampForLoadedLibrary>

externdef __imp_ImageAddCertificate:PPROC
ImageAddCertificate equ <__imp_ImageAddCertificate>

externdef __imp_ImageDirectoryEntryToData:PPROC
ImageDirectoryEntryToData equ <__imp_ImageDirectoryEntryToData>

externdef __imp_ImageDirectoryEntryToDataEx:PPROC
ImageDirectoryEntryToDataEx equ <__imp_ImageDirectoryEntryToDataEx>

externdef __imp_ImageEnumerateCertificates:PPROC
ImageEnumerateCertificates equ <__imp_ImageEnumerateCertificates>

externdef __imp_ImageGetCertificateData:PPROC
ImageGetCertificateData equ <__imp_ImageGetCertificateData>

externdef __imp_ImageGetCertificateHeader:PPROC
ImageGetCertificateHeader equ <__imp_ImageGetCertificateHeader>

externdef __imp_ImageGetDigestStream:PPROC
ImageGetDigestStream equ <__imp_ImageGetDigestStream>

externdef __imp_ImageLoad:PPROC
ImageLoad equ <__imp_ImageLoad>

externdef __imp_ImageNtHeader:PPROC
ImageNtHeader equ <__imp_ImageNtHeader>

externdef __imp_ImageRemoveCertificate:PPROC
ImageRemoveCertificate equ <__imp_ImageRemoveCertificate>

externdef __imp_ImageRvaToSection:PPROC
ImageRvaToSection equ <__imp_ImageRvaToSection>

externdef __imp_ImageRvaToVa:PPROC
ImageRvaToVa equ <__imp_ImageRvaToVa>

externdef __imp_ImageUnload:PPROC
ImageUnload equ <__imp_ImageUnload>

externdef __imp_ImagehlpApiVersion:PPROC
ImagehlpApiVersion equ <__imp_ImagehlpApiVersion>

externdef __imp_ImagehlpApiVersionEx:PPROC
ImagehlpApiVersionEx equ <__imp_ImagehlpApiVersionEx>

externdef __imp_MakeSureDirectoryPathExists:PPROC
MakeSureDirectoryPathExists equ <__imp_MakeSureDirectoryPathExists>

externdef __imp_MapAndLoad:PPROC
MapAndLoad equ <__imp_MapAndLoad>

externdef __imp_MapFileAndCheckSumA:PPROC
MapFileAndCheckSumA equ <__imp_MapFileAndCheckSumA>
  IFNDEF __UNICODE__
    MapFileAndCheckSum equ <__imp_MapFileAndCheckSumA>
  ENDIF

externdef __imp_MapFileAndCheckSumW:PPROC
MapFileAndCheckSumW equ <__imp_MapFileAndCheckSumW>
  IFDEF __UNICODE__
    MapFileAndCheckSum equ <__imp_MapFileAndCheckSumW>
  ENDIF

externdef __imp_ReBaseImage64:PPROC
ReBaseImage64 equ <__imp_ReBaseImage64>

externdef __imp_ReBaseImage:PPROC
ReBaseImage equ <__imp_ReBaseImage>

externdef __imp_RemovePrivateCvSymbolic:PPROC
RemovePrivateCvSymbolic equ <__imp_RemovePrivateCvSymbolic>

externdef __imp_RemovePrivateCvSymbolicEx:PPROC
RemovePrivateCvSymbolicEx equ <__imp_RemovePrivateCvSymbolicEx>

externdef __imp_RemoveRelocations:PPROC
RemoveRelocations equ <__imp_RemoveRelocations>

externdef __imp_SearchTreeForFile:PPROC
SearchTreeForFile equ <__imp_SearchTreeForFile>

externdef __imp_SetImageConfigInformation:PPROC
SetImageConfigInformation equ <__imp_SetImageConfigInformation>

externdef __imp_SplitSymbols:PPROC
SplitSymbols equ <__imp_SplitSymbols>

externdef __imp_StackWalk64:PPROC
StackWalk64 equ <__imp_StackWalk64>

externdef __imp_StackWalk:PPROC
StackWalk equ <__imp_StackWalk>

externdef __imp_SymCleanup:PPROC
SymCleanup equ <__imp_SymCleanup>

externdef __imp_SymEnumSym:PPROC
SymEnumSym equ <__imp_SymEnumSym>

externdef __imp_SymEnumSymbols:PPROC
SymEnumSymbols equ <__imp_SymEnumSymbols>

externdef __imp_SymEnumSymbolsForAddr:PPROC
SymEnumSymbolsForAddr equ <__imp_SymEnumSymbolsForAddr>

externdef __imp_SymEnumTypes:PPROC
SymEnumTypes equ <__imp_SymEnumTypes>

externdef __imp_SymEnumerateModules64:PPROC
SymEnumerateModules64 equ <__imp_SymEnumerateModules64>

externdef __imp_SymEnumerateModules:PPROC
SymEnumerateModules equ <__imp_SymEnumerateModules>

externdef __imp_SymEnumerateSymbols64:PPROC
SymEnumerateSymbols64 equ <__imp_SymEnumerateSymbols64>

externdef __imp_SymEnumerateSymbols:PPROC
SymEnumerateSymbols equ <__imp_SymEnumerateSymbols>

externdef __imp_SymEnumerateSymbolsW64:PPROC
SymEnumerateSymbolsW64 equ <__imp_SymEnumerateSymbolsW64>

externdef __imp_SymEnumerateSymbolsW:PPROC
SymEnumerateSymbolsW equ <__imp_SymEnumerateSymbolsW>
  IFDEF __UNICODE__
    SymEnumerateSymbols equ <__imp_SymEnumerateSymbolsW>
  ENDIF

externdef __imp_SymFindFileInPath:PPROC
SymFindFileInPath equ <__imp_SymFindFileInPath>

externdef __imp_SymFromAddr:PPROC
SymFromAddr equ <__imp_SymFromAddr>

externdef __imp_SymFromName:PPROC
SymFromName equ <__imp_SymFromName>

externdef __imp_SymFunctionTableAccess64:PPROC
SymFunctionTableAccess64 equ <__imp_SymFunctionTableAccess64>

externdef __imp_SymFunctionTableAccess:PPROC
SymFunctionTableAccess equ <__imp_SymFunctionTableAccess>

externdef __imp_SymGetLineFromAddr64:PPROC
SymGetLineFromAddr64 equ <__imp_SymGetLineFromAddr64>

externdef __imp_SymGetLineFromAddr:PPROC
SymGetLineFromAddr equ <__imp_SymGetLineFromAddr>

externdef __imp_SymGetLineFromName64:PPROC
SymGetLineFromName64 equ <__imp_SymGetLineFromName64>

externdef __imp_SymGetLineFromName:PPROC
SymGetLineFromName equ <__imp_SymGetLineFromName>

externdef __imp_SymGetLineNext64:PPROC
SymGetLineNext64 equ <__imp_SymGetLineNext64>

externdef __imp_SymGetLineNext:PPROC
SymGetLineNext equ <__imp_SymGetLineNext>

externdef __imp_SymGetLinePrev64:PPROC
SymGetLinePrev64 equ <__imp_SymGetLinePrev64>

externdef __imp_SymGetLinePrev:PPROC
SymGetLinePrev equ <__imp_SymGetLinePrev>

externdef __imp_SymGetModuleBase64:PPROC
SymGetModuleBase64 equ <__imp_SymGetModuleBase64>

externdef __imp_SymGetModuleBase:PPROC
SymGetModuleBase equ <__imp_SymGetModuleBase>

externdef __imp_SymGetModuleInfo64:PPROC
SymGetModuleInfo64 equ <__imp_SymGetModuleInfo64>

externdef __imp_SymGetModuleInfo:PPROC
SymGetModuleInfo equ <__imp_SymGetModuleInfo>

externdef __imp_SymGetModuleInfoW64:PPROC
SymGetModuleInfoW64 equ <__imp_SymGetModuleInfoW64>

externdef __imp_SymGetModuleInfoW:PPROC
SymGetModuleInfoW equ <__imp_SymGetModuleInfoW>
  IFDEF __UNICODE__
    SymGetModuleInfo equ <__imp_SymGetModuleInfoW>
  ENDIF

externdef __imp_SymGetOptions:PPROC
SymGetOptions equ <__imp_SymGetOptions>

externdef __imp_SymGetSearchPath:PPROC
SymGetSearchPath equ <__imp_SymGetSearchPath>

externdef __imp_SymGetSymFromAddr64:PPROC
SymGetSymFromAddr64 equ <__imp_SymGetSymFromAddr64>

externdef __imp_SymGetSymFromAddr:PPROC
SymGetSymFromAddr equ <__imp_SymGetSymFromAddr>

externdef __imp_SymGetSymFromName64:PPROC
SymGetSymFromName64 equ <__imp_SymGetSymFromName64>

externdef __imp_SymGetSymFromName:PPROC
SymGetSymFromName equ <__imp_SymGetSymFromName>

externdef __imp_SymGetSymNext64:PPROC
SymGetSymNext64 equ <__imp_SymGetSymNext64>

externdef __imp_SymGetSymNext:PPROC
SymGetSymNext equ <__imp_SymGetSymNext>

externdef __imp_SymGetSymPrev64:PPROC
SymGetSymPrev64 equ <__imp_SymGetSymPrev64>

externdef __imp_SymGetSymPrev:PPROC
SymGetSymPrev equ <__imp_SymGetSymPrev>

externdef __imp_SymGetTypeFromName:PPROC
SymGetTypeFromName equ <__imp_SymGetTypeFromName>

externdef __imp_SymGetTypeInfo:PPROC
SymGetTypeInfo equ <__imp_SymGetTypeInfo>

externdef __imp_SymInitialize:PPROC
SymInitialize equ <__imp_SymInitialize>

externdef __imp_SymLoadModule64:PPROC
SymLoadModule64 equ <__imp_SymLoadModule64>

externdef __imp_SymLoadModule:PPROC
SymLoadModule equ <__imp_SymLoadModule>

externdef __imp_SymMatchFileName:PPROC
SymMatchFileName equ <__imp_SymMatchFileName>

externdef __imp_SymMatchString:PPROC
SymMatchString equ <__imp_SymMatchString>

externdef __imp_SymRegisterCallback64:PPROC
SymRegisterCallback64 equ <__imp_SymRegisterCallback64>

externdef __imp_SymRegisterCallback:PPROC
SymRegisterCallback equ <__imp_SymRegisterCallback>

externdef __imp_SymRegisterFunctionEntryCallback64:PPROC
SymRegisterFunctionEntryCallback64 equ <__imp_SymRegisterFunctionEntryCallback64>

externdef __imp_SymRegisterFunctionEntryCallback:PPROC
SymRegisterFunctionEntryCallback equ <__imp_SymRegisterFunctionEntryCallback>

externdef __imp_SymSetContext:PPROC
SymSetContext equ <__imp_SymSetContext>

externdef __imp_SymSetOptions:PPROC
SymSetOptions equ <__imp_SymSetOptions>

externdef __imp_SymSetSearchPath:PPROC
SymSetSearchPath equ <__imp_SymSetSearchPath>

externdef __imp_SymUnDName64:PPROC
SymUnDName64 equ <__imp_SymUnDName64>

externdef __imp_SymUnDName:PPROC
SymUnDName equ <__imp_SymUnDName>

externdef __imp_SymUnloadModule64:PPROC
SymUnloadModule64 equ <__imp_SymUnloadModule64>

externdef __imp_SymUnloadModule:PPROC
SymUnloadModule equ <__imp_SymUnloadModule>

externdef __imp_TouchFileTimes:PPROC
TouchFileTimes equ <__imp_TouchFileTimes>

externdef __imp_UnDecorateSymbolName:PPROC
UnDecorateSymbolName equ <__imp_UnDecorateSymbolName>

externdef __imp_UnMapAndLoad:PPROC
UnMapAndLoad equ <__imp_UnMapAndLoad>

externdef __imp_UpdateDebugInfoFile:PPROC
UpdateDebugInfoFile equ <__imp_UpdateDebugInfoFile>

externdef __imp_UpdateDebugInfoFileEx:PPROC
UpdateDebugInfoFileEx equ <__imp_UpdateDebugInfoFileEx>
