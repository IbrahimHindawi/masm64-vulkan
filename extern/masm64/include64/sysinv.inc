externdef __imp_GetSystemInventoryA:PPROC
GetSystemInventoryA equ <__imp_GetSystemInventoryA>
  IFNDEF __UNICODE__
    GetSystemInventory equ <__imp_GetSystemInventoryA>
  ENDIF

externdef __imp_GetSystemInventoryW:PPROC
GetSystemInventoryW equ <__imp_GetSystemInventoryW>
  IFDEF __UNICODE__
    GetSystemInventory equ <__imp_GetSystemInventoryW>
  ENDIF
