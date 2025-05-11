
    OPTION DOTNAME                          ; required for macro files
    option casemap:none                     ; case sensitive

    include \masm64\include64\win64.inc     ; main include file
    include \masm64\macros64\vasily.inc     ; main macro file
    include \masm64\macros64\macros64.inc   ; auxillary macro file

    STACKFRAME                              ; create a default stack frame

    include \masm64\m64lib\m64lib.inc       ; include file for m64lib library

  ; ------------------------
  ; system API include64 files
  ; ------------------------
    include \masm64\include64\kernel32.inc
    include \masm64\include64\user32.inc
    include \masm64\include64\gdi32.inc
    include \masm64\include64\Comctl32.inc
    include \masm64\include64\comdlg32.inc
    include \masm64\include64\shell32.inc
    include \masm64\include64\oleaut32.inc
    include \masm64\include64\ole32.inc
    include \masm64\include64\msvcrt.inc
    include \masm64\include64\Shlwapi.inc
    include \masm64\include64\gdiplus.inc

    includelib \masm64\m64lib\m64lib.lib    ; m64lib library

  ; ------------------------
  ; system API library files
  ; ------------------------
    includelib \masm64\lib64\kernel32.lib
    includelib \masm64\lib64\user32.lib
    includelib \masm64\lib64\gdi32.lib
    includelib \masm64\lib64\Comctl32.lib
    includelib \masm64\lib64\comdlg32.lib
    includelib \masm64\lib64\shell32.lib
    includelib \masm64\lib64\oleaut32.lib
    includelib \masm64\lib64\ole32.lib
    includelib \masm64\lib64\msvcrt.lib
    includelib \masm64\lib64\Shlwapi.lib
    includelib \masm64\lib64\gdiplus.lib


