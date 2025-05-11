externdef __imp_SHGetFolderPathA:PPROC
SHGetFolderPathA equ <__imp_SHGetFolderPathA>
  IFNDEF __UNICODE__
    SHGetFolderPath equ <__imp_SHGetFolderPathA>
  ENDIF

externdef __imp_SHGetFolderPathW:PPROC
SHGetFolderPathW equ <__imp_SHGetFolderPathW>
  IFDEF __UNICODE__
    SHGetFolderPath equ <__imp_SHGetFolderPathW>
  ENDIF
