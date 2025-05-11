externdef __imp_DllMain:PPROC
DllMain equ <__imp_DllMain>

externdef __imp_EditAuditInfo:PPROC
EditAuditInfo equ <__imp_EditAuditInfo>

externdef __imp_EditOwnerInfo:PPROC
EditOwnerInfo equ <__imp_EditOwnerInfo>

externdef __imp_EditPermissionInfo:PPROC
EditPermissionInfo equ <__imp_EditPermissionInfo>

externdef __imp_FMExtensionProcW:PPROC
FMExtensionProcW equ <__imp_FMExtensionProcW>
  IFDEF __UNICODE__
    FMExtensionProc equ <__imp_FMExtensionProcW>
  ENDIF

externdef __imp_SedDiscretionaryAclEditor:PPROC
SedDiscretionaryAclEditor equ <__imp_SedDiscretionaryAclEditor>

externdef __imp_SedSystemAclEditor:PPROC
SedSystemAclEditor equ <__imp_SedSystemAclEditor>

externdef __imp_SedTakeOwnership:PPROC
SedTakeOwnership equ <__imp_SedTakeOwnership>
