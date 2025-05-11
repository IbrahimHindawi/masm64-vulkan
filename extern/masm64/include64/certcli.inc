externdef __imp_CAAccessCheck:PPROC
CAAccessCheck equ <__imp_CAAccessCheck>

externdef __imp_CAAccessCheckEx:PPROC
CAAccessCheckEx equ <__imp_CAAccessCheckEx>

externdef __imp_CAAddCACertificateType:PPROC
CAAddCACertificateType equ <__imp_CAAddCACertificateType>

externdef __imp_CACertTypeAccessCheck:PPROC
CACertTypeAccessCheck equ <__imp_CACertTypeAccessCheck>

externdef __imp_CACertTypeAccessCheckEx:PPROC
CACertTypeAccessCheckEx equ <__imp_CACertTypeAccessCheckEx>

externdef __imp_CACertTypeGetSecurity:PPROC
CACertTypeGetSecurity equ <__imp_CACertTypeGetSecurity>

externdef __imp_CACertTypeQuery:PPROC
CACertTypeQuery equ <__imp_CACertTypeQuery>

externdef __imp_CACertTypeRegisterQuery:PPROC
CACertTypeRegisterQuery equ <__imp_CACertTypeRegisterQuery>

externdef __imp_CACertTypeSetSecurity:PPROC
CACertTypeSetSecurity equ <__imp_CACertTypeSetSecurity>

externdef __imp_CACertTypeUnregisterQuery:PPROC
CACertTypeUnregisterQuery equ <__imp_CACertTypeUnregisterQuery>

externdef __imp_CACloneCertType:PPROC
CACloneCertType equ <__imp_CACloneCertType>

externdef __imp_CACloseCA:PPROC
CACloseCA equ <__imp_CACloseCA>
  IFNDEF __UNICODE__
    CACloseC equ <__imp_CACloseCA>
  ENDIF

externdef __imp_CACloseCertType:PPROC
CACloseCertType equ <__imp_CACloseCertType>

externdef __imp_CACountCAs:PPROC
CACountCAs equ <__imp_CACountCAs>

externdef __imp_CACountCertTypes:PPROC
CACountCertTypes equ <__imp_CACountCertTypes>

externdef __imp_CACreateAutoEnrollmentObjectEx:PPROC
CACreateAutoEnrollmentObjectEx equ <__imp_CACreateAutoEnrollmentObjectEx>

externdef __imp_CACreateCertType:PPROC
CACreateCertType equ <__imp_CACreateCertType>

externdef __imp_CACreateLocalAutoEnrollmentObject:PPROC
CACreateLocalAutoEnrollmentObject equ <__imp_CACreateLocalAutoEnrollmentObject>

externdef __imp_CACreateNewCA:PPROC
CACreateNewCA equ <__imp_CACreateNewCA>
  IFNDEF __UNICODE__
    CACreateNewC equ <__imp_CACreateNewCA>
  ENDIF

externdef __imp_CADeleteCA:PPROC
CADeleteCA equ <__imp_CADeleteCA>
  IFNDEF __UNICODE__
    CADeleteC equ <__imp_CADeleteCA>
  ENDIF

externdef __imp_CADeleteCertType:PPROC
CADeleteCertType equ <__imp_CADeleteCertType>

externdef __imp_CADeleteLocalAutoEnrollmentObject:PPROC
CADeleteLocalAutoEnrollmentObject equ <__imp_CADeleteLocalAutoEnrollmentObject>

externdef __imp_CAEnumCertTypes:PPROC
CAEnumCertTypes equ <__imp_CAEnumCertTypes>

externdef __imp_CAEnumCertTypesEx:PPROC
CAEnumCertTypesEx equ <__imp_CAEnumCertTypesEx>

externdef __imp_CAEnumCertTypesForCA:PPROC
CAEnumCertTypesForCA equ <__imp_CAEnumCertTypesForCA>
  IFNDEF __UNICODE__
    CAEnumCertTypesForC equ <__imp_CAEnumCertTypesForCA>
  ENDIF

externdef __imp_CAEnumCertTypesForCAEx:PPROC
CAEnumCertTypesForCAEx equ <__imp_CAEnumCertTypesForCAEx>

externdef __imp_CAEnumFirstCA:PPROC
CAEnumFirstCA equ <__imp_CAEnumFirstCA>
  IFNDEF __UNICODE__
    CAEnumFirstC equ <__imp_CAEnumFirstCA>
  ENDIF

externdef __imp_CAEnumNextCA:PPROC
CAEnumNextCA equ <__imp_CAEnumNextCA>
  IFNDEF __UNICODE__
    CAEnumNextC equ <__imp_CAEnumNextCA>
  ENDIF

externdef __imp_CAEnumNextCertType:PPROC
CAEnumNextCertType equ <__imp_CAEnumNextCertType>

externdef __imp_CAFindByCertType:PPROC
CAFindByCertType equ <__imp_CAFindByCertType>

externdef __imp_CAFindByIssuerDN:PPROC
CAFindByIssuerDN equ <__imp_CAFindByIssuerDN>

externdef __imp_CAFindByName:PPROC
CAFindByName equ <__imp_CAFindByName>

externdef __imp_CAFindCertTypeByName:PPROC
CAFindCertTypeByName equ <__imp_CAFindCertTypeByName>

externdef __imp_CAFreeCAProperty:PPROC
CAFreeCAProperty equ <__imp_CAFreeCAProperty>

externdef __imp_CAFreeCertTypeExtensions:PPROC
CAFreeCertTypeExtensions equ <__imp_CAFreeCertTypeExtensions>

externdef __imp_CAFreeCertTypeProperty:PPROC
CAFreeCertTypeProperty equ <__imp_CAFreeCertTypeProperty>

externdef __imp_CAGetCACertificate:PPROC
CAGetCACertificate equ <__imp_CAGetCACertificate>

externdef __imp_CAGetCAExpiration:PPROC
CAGetCAExpiration equ <__imp_CAGetCAExpiration>

externdef __imp_CAGetCAFlags:PPROC
CAGetCAFlags equ <__imp_CAGetCAFlags>

externdef __imp_CAGetCAProperty:PPROC
CAGetCAProperty equ <__imp_CAGetCAProperty>

externdef __imp_CAGetCASecurity:PPROC
CAGetCASecurity equ <__imp_CAGetCASecurity>

externdef __imp_CAGetCertTypeExpiration:PPROC
CAGetCertTypeExpiration equ <__imp_CAGetCertTypeExpiration>

externdef __imp_CAGetCertTypeExtensions:PPROC
CAGetCertTypeExtensions equ <__imp_CAGetCertTypeExtensions>

externdef __imp_CAGetCertTypeExtensionsEx:PPROC
CAGetCertTypeExtensionsEx equ <__imp_CAGetCertTypeExtensionsEx>

externdef __imp_CAGetCertTypeFlags:PPROC
CAGetCertTypeFlags equ <__imp_CAGetCertTypeFlags>

externdef __imp_CAGetCertTypeFlagsEx:PPROC
CAGetCertTypeFlagsEx equ <__imp_CAGetCertTypeFlagsEx>

externdef __imp_CAGetCertTypeKeySpec:PPROC
CAGetCertTypeKeySpec equ <__imp_CAGetCertTypeKeySpec>

externdef __imp_CAGetCertTypeProperty:PPROC
CAGetCertTypeProperty equ <__imp_CAGetCertTypeProperty>

externdef __imp_CAGetCertTypePropertyEx:PPROC
CAGetCertTypePropertyEx equ <__imp_CAGetCertTypePropertyEx>

externdef __imp_CAGetDN:PPROC
CAGetDN equ <__imp_CAGetDN>

externdef __imp_CAInstallDefaultCertType:PPROC
CAInstallDefaultCertType equ <__imp_CAInstallDefaultCertType>

externdef __imp_CAIsCertTypeCurrent:PPROC
CAIsCertTypeCurrent equ <__imp_CAIsCertTypeCurrent>

externdef __imp_CAOIDAdd:PPROC
CAOIDAdd equ <__imp_CAOIDAdd>

externdef __imp_CAOIDCreateNew:PPROC
CAOIDCreateNew equ <__imp_CAOIDCreateNew>

externdef __imp_CAOIDDelete:PPROC
CAOIDDelete equ <__imp_CAOIDDelete>

externdef __imp_CAOIDFreeLdapURL:PPROC
CAOIDFreeLdapURL equ <__imp_CAOIDFreeLdapURL>

externdef __imp_CAOIDFreeProperty:PPROC
CAOIDFreeProperty equ <__imp_CAOIDFreeProperty>

externdef __imp_CAOIDGetLdapURL:PPROC
CAOIDGetLdapURL equ <__imp_CAOIDGetLdapURL>

externdef __imp_CAOIDGetProperty:PPROC
CAOIDGetProperty equ <__imp_CAOIDGetProperty>

externdef __imp_CAOIDSetProperty:PPROC
CAOIDSetProperty equ <__imp_CAOIDSetProperty>

externdef __imp_CARemoveCACertificateType:PPROC
CARemoveCACertificateType equ <__imp_CARemoveCACertificateType>

externdef __imp_CASetCACertificate:PPROC
CASetCACertificate equ <__imp_CASetCACertificate>

externdef __imp_CASetCAExpiration:PPROC
CASetCAExpiration equ <__imp_CASetCAExpiration>

externdef __imp_CASetCAFlags:PPROC
CASetCAFlags equ <__imp_CASetCAFlags>

externdef __imp_CASetCAProperty:PPROC
CASetCAProperty equ <__imp_CASetCAProperty>

externdef __imp_CASetCASecurity:PPROC
CASetCASecurity equ <__imp_CASetCASecurity>

externdef __imp_CASetCertTypeExpiration:PPROC
CASetCertTypeExpiration equ <__imp_CASetCertTypeExpiration>

externdef __imp_CASetCertTypeExtension:PPROC
CASetCertTypeExtension equ <__imp_CASetCertTypeExtension>

externdef __imp_CASetCertTypeFlags:PPROC
CASetCertTypeFlags equ <__imp_CASetCertTypeFlags>

externdef __imp_CASetCertTypeFlagsEx:PPROC
CASetCertTypeFlagsEx equ <__imp_CASetCertTypeFlagsEx>

externdef __imp_CASetCertTypeKeySpec:PPROC
CASetCertTypeKeySpec equ <__imp_CASetCertTypeKeySpec>

externdef __imp_CASetCertTypeProperty:PPROC
CASetCertTypeProperty equ <__imp_CASetCertTypeProperty>

externdef __imp_CASetCertTypePropertyEx:PPROC
CASetCertTypePropertyEx equ <__imp_CASetCertTypePropertyEx>

externdef __imp_CAUpdateCA:PPROC
CAUpdateCA equ <__imp_CAUpdateCA>
  IFNDEF __UNICODE__
    CAUpdateC equ <__imp_CAUpdateCA>
  ENDIF

externdef __imp_CAUpdateCertType:PPROC
CAUpdateCertType equ <__imp_CAUpdateCertType>

externdef __imp_DllCanUnloadNow:PPROC
DllCanUnloadNow equ <__imp_DllCanUnloadNow>

externdef __imp_DllGetClassObject:PPROC
DllGetClassObject equ <__imp_DllGetClassObject>

externdef __imp_DllInstall:PPROC
DllInstall equ <__imp_DllInstall>

externdef __imp_DllRegisterServer:PPROC
DllRegisterServer equ <__imp_DllRegisterServer>

externdef __imp_DllUnregisterServer:PPROC
DllUnregisterServer equ <__imp_DllUnregisterServer>

externdef __imp_GetProxyDllInfo:PPROC
GetProxyDllInfo equ <__imp_GetProxyDllInfo>

externdef __imp_certcli_ordinal201:PPROC
certcli_ordinal201 equ <__imp_certcli_ordinal201>

externdef __imp_certcli_ordinal202:PPROC
certcli_ordinal202 equ <__imp_certcli_ordinal202>

externdef __imp_certcli_ordinal203:PPROC
certcli_ordinal203 equ <__imp_certcli_ordinal203>

externdef __imp_certcli_ordinal204:PPROC
certcli_ordinal204 equ <__imp_certcli_ordinal204>

externdef __imp_certcli_ordinal205:PPROC
certcli_ordinal205 equ <__imp_certcli_ordinal205>

externdef __imp_certcli_ordinal206:PPROC
certcli_ordinal206 equ <__imp_certcli_ordinal206>

externdef __imp_certcli_ordinal207:PPROC
certcli_ordinal207 equ <__imp_certcli_ordinal207>

externdef __imp_certcli_ordinal208:PPROC
certcli_ordinal208 equ <__imp_certcli_ordinal208>

externdef __imp_certcli_ordinal209:PPROC
certcli_ordinal209 equ <__imp_certcli_ordinal209>

externdef __imp_certcli_ordinal210:PPROC
certcli_ordinal210 equ <__imp_certcli_ordinal210>

externdef __imp_certcli_ordinal211:PPROC
certcli_ordinal211 equ <__imp_certcli_ordinal211>

externdef __imp_certcli_ordinal212:PPROC
certcli_ordinal212 equ <__imp_certcli_ordinal212>

externdef __imp_certcli_ordinal213:PPROC
certcli_ordinal213 equ <__imp_certcli_ordinal213>

externdef __imp_certcli_ordinal214:PPROC
certcli_ordinal214 equ <__imp_certcli_ordinal214>

externdef __imp_certcli_ordinal215:PPROC
certcli_ordinal215 equ <__imp_certcli_ordinal215>

externdef __imp_certcli_ordinal216:PPROC
certcli_ordinal216 equ <__imp_certcli_ordinal216>

externdef __imp_certcli_ordinal217:PPROC
certcli_ordinal217 equ <__imp_certcli_ordinal217>

externdef __imp_certcli_ordinal218:PPROC
certcli_ordinal218 equ <__imp_certcli_ordinal218>

externdef __imp_certcli_ordinal219:PPROC
certcli_ordinal219 equ <__imp_certcli_ordinal219>

externdef __imp_certcli_ordinal220:PPROC
certcli_ordinal220 equ <__imp_certcli_ordinal220>

externdef __imp_certcli_ordinal221:PPROC
certcli_ordinal221 equ <__imp_certcli_ordinal221>

externdef __imp_certcli_ordinal222:PPROC
certcli_ordinal222 equ <__imp_certcli_ordinal222>

externdef __imp_certcli_ordinal223:PPROC
certcli_ordinal223 equ <__imp_certcli_ordinal223>

externdef __imp_certcli_ordinal224:PPROC
certcli_ordinal224 equ <__imp_certcli_ordinal224>

externdef __imp_certcli_ordinal225:PPROC
certcli_ordinal225 equ <__imp_certcli_ordinal225>

externdef __imp_certcli_ordinal226:PPROC
certcli_ordinal226 equ <__imp_certcli_ordinal226>

externdef __imp_certcli_ordinal227:PPROC
certcli_ordinal227 equ <__imp_certcli_ordinal227>

externdef __imp_certcli_ordinal228:PPROC
certcli_ordinal228 equ <__imp_certcli_ordinal228>

externdef __imp_certcli_ordinal229:PPROC
certcli_ordinal229 equ <__imp_certcli_ordinal229>

externdef __imp_certcli_ordinal230:PPROC
certcli_ordinal230 equ <__imp_certcli_ordinal230>

externdef __imp_certcli_ordinal231:PPROC
certcli_ordinal231 equ <__imp_certcli_ordinal231>

externdef __imp_certcli_ordinal232:PPROC
certcli_ordinal232 equ <__imp_certcli_ordinal232>

externdef __imp_certcli_ordinal233:PPROC
certcli_ordinal233 equ <__imp_certcli_ordinal233>

externdef __imp_certcli_ordinal234:PPROC
certcli_ordinal234 equ <__imp_certcli_ordinal234>

externdef __imp_certcli_ordinal235:PPROC
certcli_ordinal235 equ <__imp_certcli_ordinal235>

externdef __imp_certcli_ordinal236:PPROC
certcli_ordinal236 equ <__imp_certcli_ordinal236>

externdef __imp_certcli_ordinal237:PPROC
certcli_ordinal237 equ <__imp_certcli_ordinal237>

externdef __imp_certcli_ordinal238:PPROC
certcli_ordinal238 equ <__imp_certcli_ordinal238>

externdef __imp_certcli_ordinal239:PPROC
certcli_ordinal239 equ <__imp_certcli_ordinal239>

externdef __imp_certcli_ordinal240:PPROC
certcli_ordinal240 equ <__imp_certcli_ordinal240>

externdef __imp_certcli_ordinal241:PPROC
certcli_ordinal241 equ <__imp_certcli_ordinal241>

externdef __imp_certcli_ordinal242:PPROC
certcli_ordinal242 equ <__imp_certcli_ordinal242>

externdef __imp_certcli_ordinal243:PPROC
certcli_ordinal243 equ <__imp_certcli_ordinal243>

externdef __imp_certcli_ordinal244:PPROC
certcli_ordinal244 equ <__imp_certcli_ordinal244>

externdef __imp_certcli_ordinal245:PPROC
certcli_ordinal245 equ <__imp_certcli_ordinal245>

externdef __imp_certcli_ordinal246:PPROC
certcli_ordinal246 equ <__imp_certcli_ordinal246>

externdef __imp_certcli_ordinal247:PPROC
certcli_ordinal247 equ <__imp_certcli_ordinal247>

externdef __imp_certcli_ordinal248:PPROC
certcli_ordinal248 equ <__imp_certcli_ordinal248>

externdef __imp_certcli_ordinal249:PPROC
certcli_ordinal249 equ <__imp_certcli_ordinal249>

externdef __imp_certcli_ordinal250:PPROC
certcli_ordinal250 equ <__imp_certcli_ordinal250>

externdef __imp_certcli_ordinal251:PPROC
certcli_ordinal251 equ <__imp_certcli_ordinal251>

externdef __imp_certcli_ordinal252:PPROC
certcli_ordinal252 equ <__imp_certcli_ordinal252>

externdef __imp_certcli_ordinal253:PPROC
certcli_ordinal253 equ <__imp_certcli_ordinal253>

externdef __imp_certcli_ordinal254:PPROC
certcli_ordinal254 equ <__imp_certcli_ordinal254>

externdef __imp_certcli_ordinal255:PPROC
certcli_ordinal255 equ <__imp_certcli_ordinal255>

externdef __imp_certcli_ordinal256:PPROC
certcli_ordinal256 equ <__imp_certcli_ordinal256>

externdef __imp_certcli_ordinal257:PPROC
certcli_ordinal257 equ <__imp_certcli_ordinal257>

externdef __imp_certcli_ordinal258:PPROC
certcli_ordinal258 equ <__imp_certcli_ordinal258>

externdef __imp_certcli_ordinal259:PPROC
certcli_ordinal259 equ <__imp_certcli_ordinal259>

externdef __imp_certcli_ordinal260:PPROC
certcli_ordinal260 equ <__imp_certcli_ordinal260>

externdef __imp_certcli_ordinal261:PPROC
certcli_ordinal261 equ <__imp_certcli_ordinal261>

externdef __imp_certcli_ordinal262:PPROC
certcli_ordinal262 equ <__imp_certcli_ordinal262>

externdef __imp_certcli_ordinal263:PPROC
certcli_ordinal263 equ <__imp_certcli_ordinal263>

externdef __imp_certcli_ordinal264:PPROC
certcli_ordinal264 equ <__imp_certcli_ordinal264>

externdef __imp_certcli_ordinal265:PPROC
certcli_ordinal265 equ <__imp_certcli_ordinal265>

externdef __imp_certcli_ordinal266:PPROC
certcli_ordinal266 equ <__imp_certcli_ordinal266>

externdef __imp_certcli_ordinal267:PPROC
certcli_ordinal267 equ <__imp_certcli_ordinal267>
