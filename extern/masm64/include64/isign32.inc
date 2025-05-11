externdef __imp_AutoDialLogon:PPROC
AutoDialLogon equ <__imp_AutoDialLogon>

externdef __imp_AutoDialLogonA:PPROC
AutoDialLogonA equ <__imp_AutoDialLogonA>
  IFNDEF __UNICODE__
    AutoDialLogon equ <__imp_AutoDialLogonA>
  ENDIF

externdef __imp_AutoDialLogonW:PPROC
AutoDialLogonW equ <__imp_AutoDialLogonW>
  IFDEF __UNICODE__
    AutoDialLogon equ <__imp_AutoDialLogonW>
  ENDIF

externdef __imp_AutoDialSignup:PPROC
AutoDialSignup equ <__imp_AutoDialSignup>

externdef __imp_AutoDialSignupA:PPROC
AutoDialSignupA equ <__imp_AutoDialSignupA>
  IFNDEF __UNICODE__
    AutoDialSignup equ <__imp_AutoDialSignupA>
  ENDIF

externdef __imp_AutoDialSignupW:PPROC
AutoDialSignupW equ <__imp_AutoDialSignupW>
  IFDEF __UNICODE__
    AutoDialSignup equ <__imp_AutoDialSignupW>
  ENDIF

externdef __imp_IEAKProcessISP:PPROC
IEAKProcessISP equ <__imp_IEAKProcessISP>

externdef __imp_IEAKProcessISPA:PPROC
IEAKProcessISPA equ <__imp_IEAKProcessISPA>
  IFNDEF __UNICODE__
    IEAKProcessISP equ <__imp_IEAKProcessISPA>
  ENDIF

externdef __imp_IEAKProcessISPW:PPROC
IEAKProcessISPW equ <__imp_IEAKProcessISPW>
  IFDEF __UNICODE__
    IEAKProcessISP equ <__imp_IEAKProcessISPW>
  ENDIF

externdef __imp_Signup:PPROC
Signup equ <__imp_Signup>
