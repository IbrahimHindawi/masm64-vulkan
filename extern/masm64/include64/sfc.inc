externdef __imp_SRSetRestorePoint:PPROC
SRSetRestorePoint equ <__imp_SRSetRestorePoint>

externdef __imp_SRSetRestorePointA:PPROC
SRSetRestorePointA equ <__imp_SRSetRestorePointA>
  IFNDEF __UNICODE__
    SRSetRestorePoint equ <__imp_SRSetRestorePointA>
  ENDIF

externdef __imp_SRSetRestorePointW:PPROC
SRSetRestorePointW equ <__imp_SRSetRestorePointW>
  IFDEF __UNICODE__
    SRSetRestorePoint equ <__imp_SRSetRestorePointW>
  ENDIF

externdef __imp_SfcGetNextProtectedFile:PPROC
SfcGetNextProtectedFile equ <__imp_SfcGetNextProtectedFile>

externdef __imp_SfcIsFileProtected:PPROC
SfcIsFileProtected equ <__imp_SfcIsFileProtected>

externdef __imp_SfcWLEventLogoff:PPROC
SfcWLEventLogoff equ <__imp_SfcWLEventLogoff>

externdef __imp_SfcWLEventLogon:PPROC
SfcWLEventLogon equ <__imp_SfcWLEventLogon>

externdef __imp_SfpVerifyFile:PPROC
SfpVerifyFile equ <__imp_SfpVerifyFile>

externdef __imp_sfc_ordinal1:PPROC
sfc_ordinal1 equ <__imp_sfc_ordinal1>

externdef __imp_sfc_ordinal2:PPROC
sfc_ordinal2 equ <__imp_sfc_ordinal2>

externdef __imp_sfc_ordinal3:PPROC
sfc_ordinal3 equ <__imp_sfc_ordinal3>

externdef __imp_sfc_ordinal4:PPROC
sfc_ordinal4 equ <__imp_sfc_ordinal4>

externdef __imp_sfc_ordinal5:PPROC
sfc_ordinal5 equ <__imp_sfc_ordinal5>

externdef __imp_sfc_ordinal6:PPROC
sfc_ordinal6 equ <__imp_sfc_ordinal6>

externdef __imp_sfc_ordinal7:PPROC
sfc_ordinal7 equ <__imp_sfc_ordinal7>

externdef __imp_sfc_ordinal8:PPROC
sfc_ordinal8 equ <__imp_sfc_ordinal8>

externdef __imp_sfc_ordinal9:PPROC
sfc_ordinal9 equ <__imp_sfc_ordinal9>
