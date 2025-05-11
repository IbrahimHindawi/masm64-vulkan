externdef __imp_CopyLZFile:PPROC
CopyLZFile equ <__imp_CopyLZFile>

externdef __imp_GetExpandedNameA:PPROC
GetExpandedNameA equ <__imp_GetExpandedNameA>
  IFNDEF __UNICODE__
    GetExpandedName equ <__imp_GetExpandedNameA>
  ENDIF

externdef __imp_GetExpandedNameW:PPROC
GetExpandedNameW equ <__imp_GetExpandedNameW>
  IFDEF __UNICODE__
    GetExpandedName equ <__imp_GetExpandedNameW>
  ENDIF

externdef __imp_LZClose:PPROC
LZClose equ <__imp_LZClose>

externdef __imp_LZCloseFile:PPROC
LZCloseFile equ <__imp_LZCloseFile>

externdef __imp_LZCopy:PPROC
LZCopy equ <__imp_LZCopy>

externdef __imp_LZCreateFileW:PPROC
LZCreateFileW equ <__imp_LZCreateFileW>
  IFDEF __UNICODE__
    LZCreateFile equ <__imp_LZCreateFileW>
  ENDIF

externdef __imp_LZDone:PPROC
LZDone equ <__imp_LZDone>

externdef __imp_LZInit:PPROC
LZInit equ <__imp_LZInit>

externdef __imp_LZOpenFileA:PPROC
LZOpenFileA equ <__imp_LZOpenFileA>
  IFNDEF __UNICODE__
    LZOpenFile equ <__imp_LZOpenFileA>
  ENDIF

externdef __imp_LZOpenFileW:PPROC
LZOpenFileW equ <__imp_LZOpenFileW>
  IFDEF __UNICODE__
    LZOpenFile equ <__imp_LZOpenFileW>
  ENDIF

externdef __imp_LZRead:PPROC
LZRead equ <__imp_LZRead>

externdef __imp_LZSeek:PPROC
LZSeek equ <__imp_LZSeek>

externdef __imp_LZStart:PPROC
LZStart equ <__imp_LZStart>
