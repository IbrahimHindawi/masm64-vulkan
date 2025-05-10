@echo off

set project_name=main

mkdir build
pushd build

rc.exe /nologo ..\resource\resource.rc
move ..\resource\resource.res .\

set mlargs=/Cp /Cx /Fm /FR /W2 /Zd /Zf /Zi /nologo
set linkargs=resource.res /debug:full /nologo /opt:ref /opt:noicf /largeaddressaware:no /def:..\source\%project_name%.def /entry:main /machine:x64 /map /out:%project_name%.exe /PDB:%project_name%.pdb /subsystem:console kernel32.lib user32.lib

ml64.exe %mlargs% ..\source\%project_name%.asm /link %linkargs%

popd
