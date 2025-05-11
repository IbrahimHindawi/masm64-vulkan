externdef __imp_Briefcase_Create:PPROC
Briefcase_Create equ <__imp_Briefcase_Create>

externdef __imp_Briefcase_CreateA:PPROC
Briefcase_CreateA equ <__imp_Briefcase_CreateA>
  IFNDEF __UNICODE__
    Briefcase_Create equ <__imp_Briefcase_CreateA>
  ENDIF

externdef __imp_Briefcase_CreateW:PPROC
Briefcase_CreateW equ <__imp_Briefcase_CreateW>
  IFDEF __UNICODE__
    Briefcase_Create equ <__imp_Briefcase_CreateW>
  ENDIF

externdef __imp_Briefcase_Intro:PPROC
Briefcase_Intro equ <__imp_Briefcase_Intro>

externdef __imp_DllCanUnloadNow:PPROC
DllCanUnloadNow equ <__imp_DllCanUnloadNow>

externdef __imp_DllGetClassObject:PPROC
DllGetClassObject equ <__imp_DllGetClassObject>
