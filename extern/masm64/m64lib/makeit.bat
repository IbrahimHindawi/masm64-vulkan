: いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

@echo off

: delete any existing library
  if exist m64lib.lib del m64lib.lib

: assemble modules
  for %%x in (*.asm) do \masm64\bin64\ml64 /c /nologo %%x

: redirect object files into a response file
  dir /b *.obj > obj.txt

: link the object modules into a library
  \masm64\bin64\lib /MACHINE:X64 /OUT:m64lib.lib @obj.txt

: clean up the junk
  del *.obj

: display the library at the console
  dir *.lib                                             

pause

: いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい
