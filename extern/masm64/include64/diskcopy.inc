externdef __imp_DiskCopyRunDll:PPROC
DiskCopyRunDll equ <__imp_DiskCopyRunDll>

externdef __imp_DiskCopyRunDllW:PPROC
DiskCopyRunDllW equ <__imp_DiskCopyRunDllW>
  IFDEF __UNICODE__
    DiskCopyRunDll equ <__imp_DiskCopyRunDllW>
  ENDIF

externdef __imp_DllCanUnloadNow:PPROC
DllCanUnloadNow equ <__imp_DllCanUnloadNow>

externdef __imp_DllGetClassObject:PPROC
DllGetClassObject equ <__imp_DllGetClassObject>

externdef __imp_diskcopy_ordinal1:PPROC
diskcopy_ordinal1 equ <__imp_diskcopy_ordinal1>
