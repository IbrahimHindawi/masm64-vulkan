@echo off

set project_name=main

mkdir build
pushd build

rc.exe /nologo ..\resource\resource.rc
move ..\resource\resource.res .\

set mlargs=/Cp /Cx /Fm /FR /W2 /Zd /Zf /Zi /nologo
set corelibs=kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib C:\VulkanSDK\1.4.313.0\Lib\vulkan-1.lib
set linkargs=resource.res /debug:full /nologo /opt:ref /opt:noicf /largeaddressaware:no /def:..\source\%project_name%.def /entry:main /machine:x64 /map /out:%project_name%.exe /PDB:%project_name%.pdb /subsystem:console %corelibs%

ml64.exe %mlargs% /I..\extern\masm64\include64 /I..\extern\masm64\macros64 /I..\extern\vulkan ..\source\%project_name%.asm /link %linkargs%

popd

:: preproc out -> link -> exe
:: ml64.exe /Cp /Cx /Fm /FR /W2 /Zd /Zf /Zi /nologo main_out.asm /link resource.res /debug:full
::  /nologo /opt:ref /opt:noicf /largeaddressaware:no /def:..\source\main.def /entry:main /machine:x64 /map
::  /out:main_out.exe /PDB:main_out.pdb /subsystem:console kernel32.lib user32.lib gdi32.lib winspool.lib c
:: omdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib C:\VulkanSD
:: K\1.4.313.0\Lib\vulkan-1.lib
