externdef __imp_DbgHelpCreateUserDump:PPROC
DbgHelpCreateUserDump equ <__imp_DbgHelpCreateUserDump>

externdef __imp_DbgHelpCreateUserDumpW:PPROC
DbgHelpCreateUserDumpW equ <__imp_DbgHelpCreateUserDumpW>
  IFDEF __UNICODE__
    DbgHelpCreateUserDump equ <__imp_DbgHelpCreateUserDumpW>
  ENDIF

externdef __imp_EnumerateLoadedModules64:PPROC
EnumerateLoadedModules64 equ <__imp_EnumerateLoadedModules64>

externdef __imp_EnumerateLoadedModules:PPROC
EnumerateLoadedModules equ <__imp_EnumerateLoadedModules>

externdef __imp_ExtensionApiVersion:PPROC
ExtensionApiVersion equ <__imp_ExtensionApiVersion>

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

externdef __imp_GetTimestampForLoadedLibrary:PPROC
GetTimestampForLoadedLibrary equ <__imp_GetTimestampForLoadedLibrary>

externdef __imp_ImageDirectoryEntryToData:PPROC
ImageDirectoryEntryToData equ <__imp_ImageDirectoryEntryToData>

externdef __imp_ImageDirectoryEntryToDataEx:PPROC
ImageDirectoryEntryToDataEx equ <__imp_ImageDirectoryEntryToDataEx>

externdef __imp_ImageNtHeader:PPROC
ImageNtHeader equ <__imp_ImageNtHeader>

externdef __imp_ImageRvaToSection:PPROC
ImageRvaToSection equ <__imp_ImageRvaToSection>

externdef __imp_ImageRvaToVa:PPROC
ImageRvaToVa equ <__imp_ImageRvaToVa>

externdef __imp_ImagehlpApiVersion:PPROC
ImagehlpApiVersion equ <__imp_ImagehlpApiVersion>

externdef __imp_ImagehlpApiVersionEx:PPROC
ImagehlpApiVersionEx equ <__imp_ImagehlpApiVersionEx>

externdef __imp_MakeSureDirectoryPathExists:PPROC
MakeSureDirectoryPathExists equ <__imp_MakeSureDirectoryPathExists>

externdef __imp_MiniDumpReadDumpStream:PPROC
MiniDumpReadDumpStream equ <__imp_MiniDumpReadDumpStream>

externdef __imp_MiniDumpWriteDump:PPROC
MiniDumpWriteDump equ <__imp_MiniDumpWriteDump>

externdef __imp_SearchTreeForFile:PPROC
SearchTreeForFile equ <__imp_SearchTreeForFile>

externdef __imp_StackWalk64:PPROC
StackWalk64 equ <__imp_StackWalk64>

externdef __imp_StackWalk:PPROC
StackWalk equ <__imp_StackWalk>

externdef __imp_SymAddSymbol:PPROC
SymAddSymbol equ <__imp_SymAddSymbol>

externdef __imp_SymCleanup:PPROC
SymCleanup equ <__imp_SymCleanup>

externdef __imp_SymDeleteSymbol:PPROC
SymDeleteSymbol equ <__imp_SymDeleteSymbol>

externdef __imp_SymEnumLines:PPROC
SymEnumLines equ <__imp_SymEnumLines>

externdef __imp_SymEnumSourceFiles:PPROC
SymEnumSourceFiles equ <__imp_SymEnumSourceFiles>

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

externdef __imp_SymFromToken:PPROC
SymFromToken equ <__imp_SymFromToken>

externdef __imp_SymFunctionTableAccess64:PPROC
SymFunctionTableAccess64 equ <__imp_SymFunctionTableAccess64>

externdef __imp_SymFunctionTableAccess:PPROC
SymFunctionTableAccess equ <__imp_SymFunctionTableAccess>

externdef __imp_SymGetFileLineOffsets64:PPROC
SymGetFileLineOffsets64 equ <__imp_SymGetFileLineOffsets64>

externdef __imp_SymGetHomeDirectory:PPROC
SymGetHomeDirectory equ <__imp_SymGetHomeDirectory>

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

externdef __imp_SymLoadModuleEx:PPROC
SymLoadModuleEx equ <__imp_SymLoadModuleEx>

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

externdef __imp_SymSetHomeDirectory:PPROC
SymSetHomeDirectory equ <__imp_SymSetHomeDirectory>

externdef __imp_SymSetOptions:PPROC
SymSetOptions equ <__imp_SymSetOptions>

externdef __imp_SymSetParentWindow:PPROC
SymSetParentWindow equ <__imp_SymSetParentWindow>

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

externdef __imp_UnDecorateSymbolName:PPROC
UnDecorateSymbolName equ <__imp_UnDecorateSymbolName>

externdef __imp_WinDbgExtensionDllInit:PPROC
WinDbgExtensionDllInit equ <__imp_WinDbgExtensionDllInit>

externdef __imp_dbghelp:PPROC
dbghelp equ <__imp_dbghelp>

externdef __imp_dh:PPROC
dh equ <__imp_dh>

externdef __imp_fptr:PPROC
fptr equ <__imp_fptr>

externdef __imp_lm:PPROC
lm equ <__imp_lm>

externdef __imp_lmi:PPROC
lmi equ <__imp_lmi>

externdef __imp_omap:PPROC
omap equ <__imp_omap>

externdef __imp_srcfiles:PPROC
srcfiles equ <__imp_srcfiles>

externdef __imp_stackdbg:PPROC
stackdbg equ <__imp_stackdbg>

externdef __imp_sym:PPROC
sym equ <__imp_sym>

externdef __imp_symsrv:PPROC
symsrv equ <__imp_symsrv>

externdef __imp_vc7fpo:PPROC
vc7fpo equ <__imp_vc7fpo>
