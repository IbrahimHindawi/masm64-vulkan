externdef __imp_CPlApplet:PPROC
CPlApplet equ <__imp_CPlApplet>

externdef __imp_DllCanUnloadNow:PPROC
DllCanUnloadNow equ <__imp_DllCanUnloadNow>

externdef __imp_DllGetClassObject:PPROC
DllGetClassObject equ <__imp_DllGetClassObject>

externdef __imp_DllRegisterServer:PPROC
DllRegisterServer equ <__imp_DllRegisterServer>

externdef __imp_DllUnregisterServer:PPROC
DllUnregisterServer equ <__imp_DllUnregisterServer>

externdef __imp_HotPlugChildWithInvalidIdW:PPROC
HotPlugChildWithInvalidIdW equ <__imp_HotPlugChildWithInvalidIdW>
  IFDEF __UNICODE__
    HotPlugChildWithInvalidId equ <__imp_HotPlugChildWithInvalidIdW>
  ENDIF

externdef __imp_HotPlugDriverBlockedW:PPROC
HotPlugDriverBlockedW equ <__imp_HotPlugDriverBlockedW>
  IFDEF __UNICODE__
    HotPlugDriverBlocked equ <__imp_HotPlugDriverBlockedW>
  ENDIF

externdef __imp_HotPlugEjectVetoedW:PPROC
HotPlugEjectVetoedW equ <__imp_HotPlugEjectVetoedW>
  IFDEF __UNICODE__
    HotPlugEjectVetoed equ <__imp_HotPlugEjectVetoedW>
  ENDIF

externdef __imp_HotPlugHibernateVetoedW:PPROC
HotPlugHibernateVetoedW equ <__imp_HotPlugHibernateVetoedW>
  IFDEF __UNICODE__
    HotPlugHibernateVetoed equ <__imp_HotPlugHibernateVetoedW>
  ENDIF

externdef __imp_HotPlugRemovalVetoedW:PPROC
HotPlugRemovalVetoedW equ <__imp_HotPlugRemovalVetoedW>
  IFDEF __UNICODE__
    HotPlugRemovalVetoed equ <__imp_HotPlugRemovalVetoedW>
  ENDIF

externdef __imp_HotPlugSafeRemovalNotificationW:PPROC
HotPlugSafeRemovalNotificationW equ <__imp_HotPlugSafeRemovalNotificationW>
  IFDEF __UNICODE__
    HotPlugSafeRemovalNotification equ <__imp_HotPlugSafeRemovalNotificationW>
  ENDIF

externdef __imp_HotPlugStandbyVetoedW:PPROC
HotPlugStandbyVetoedW equ <__imp_HotPlugStandbyVetoedW>
  IFDEF __UNICODE__
    HotPlugStandbyVetoed equ <__imp_HotPlugStandbyVetoedW>
  ENDIF

externdef __imp_HotPlugWarmEjectVetoedW:PPROC
HotPlugWarmEjectVetoedW equ <__imp_HotPlugWarmEjectVetoedW>
  IFDEF __UNICODE__
    HotPlugWarmEjectVetoed equ <__imp_HotPlugWarmEjectVetoedW>
  ENDIF
