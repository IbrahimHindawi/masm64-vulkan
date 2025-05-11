externdef __imp_PhoneBookCopyFilter:PPROC
PhoneBookCopyFilter equ <__imp_PhoneBookCopyFilter>

externdef __imp_PhoneBookEnumCountries:PPROC
PhoneBookEnumCountries equ <__imp_PhoneBookEnumCountries>

externdef __imp_PhoneBookEnumNumbers:PPROC
PhoneBookEnumNumbers equ <__imp_PhoneBookEnumNumbers>

externdef __imp_PhoneBookEnumNumbersWithRegionsZero:PPROC
PhoneBookEnumNumbersWithRegionsZero equ <__imp_PhoneBookEnumNumbersWithRegionsZero>

externdef __imp_PhoneBookEnumRegions:PPROC
PhoneBookEnumRegions equ <__imp_PhoneBookEnumRegions>

externdef __imp_PhoneBookFreeFilter:PPROC
PhoneBookFreeFilter equ <__imp_PhoneBookFreeFilter>

externdef __imp_PhoneBookGetCountryId:PPROC
PhoneBookGetCountryId equ <__imp_PhoneBookGetCountryId>

externdef __imp_PhoneBookGetCountryNameA:PPROC
PhoneBookGetCountryNameA equ <__imp_PhoneBookGetCountryNameA>
  IFNDEF __UNICODE__
    PhoneBookGetCountryName equ <__imp_PhoneBookGetCountryNameA>
  ENDIF

externdef __imp_PhoneBookGetCountryNameW:PPROC
PhoneBookGetCountryNameW equ <__imp_PhoneBookGetCountryNameW>
  IFDEF __UNICODE__
    PhoneBookGetCountryName equ <__imp_PhoneBookGetCountryNameW>
  ENDIF

externdef __imp_PhoneBookGetCurrentCountryId:PPROC
PhoneBookGetCurrentCountryId equ <__imp_PhoneBookGetCurrentCountryId>

externdef __imp_PhoneBookGetPhoneCanonicalA:PPROC
PhoneBookGetPhoneCanonicalA equ <__imp_PhoneBookGetPhoneCanonicalA>
  IFNDEF __UNICODE__
    PhoneBookGetPhoneCanonical equ <__imp_PhoneBookGetPhoneCanonicalA>
  ENDIF

externdef __imp_PhoneBookGetPhoneDUNA:PPROC
PhoneBookGetPhoneDUNA equ <__imp_PhoneBookGetPhoneDUNA>
  IFNDEF __UNICODE__
    PhoneBookGetPhoneDUN equ <__imp_PhoneBookGetPhoneDUNA>
  ENDIF

externdef __imp_PhoneBookGetPhoneDescA:PPROC
PhoneBookGetPhoneDescA equ <__imp_PhoneBookGetPhoneDescA>
  IFNDEF __UNICODE__
    PhoneBookGetPhoneDesc equ <__imp_PhoneBookGetPhoneDescA>
  ENDIF

externdef __imp_PhoneBookGetPhoneDispA:PPROC
PhoneBookGetPhoneDispA equ <__imp_PhoneBookGetPhoneDispA>
  IFNDEF __UNICODE__
    PhoneBookGetPhoneDisp equ <__imp_PhoneBookGetPhoneDispA>
  ENDIF

externdef __imp_PhoneBookGetPhoneNonCanonicalA:PPROC
PhoneBookGetPhoneNonCanonicalA equ <__imp_PhoneBookGetPhoneNonCanonicalA>
  IFNDEF __UNICODE__
    PhoneBookGetPhoneNonCanonical equ <__imp_PhoneBookGetPhoneNonCanonicalA>
  ENDIF

externdef __imp_PhoneBookGetPhoneType:PPROC
PhoneBookGetPhoneType equ <__imp_PhoneBookGetPhoneType>

externdef __imp_PhoneBookGetRegionNameA:PPROC
PhoneBookGetRegionNameA equ <__imp_PhoneBookGetRegionNameA>
  IFNDEF __UNICODE__
    PhoneBookGetRegionName equ <__imp_PhoneBookGetRegionNameA>
  ENDIF

externdef __imp_PhoneBookHasPhoneType:PPROC
PhoneBookHasPhoneType equ <__imp_PhoneBookHasPhoneType>

externdef __imp_PhoneBookLoad:PPROC
PhoneBookLoad equ <__imp_PhoneBookLoad>

externdef __imp_PhoneBookMatchFilter:PPROC
PhoneBookMatchFilter equ <__imp_PhoneBookMatchFilter>

externdef __imp_PhoneBookMergeChanges:PPROC
PhoneBookMergeChanges equ <__imp_PhoneBookMergeChanges>

externdef __imp_PhoneBookParseInfoA:PPROC
PhoneBookParseInfoA equ <__imp_PhoneBookParseInfoA>
  IFNDEF __UNICODE__
    PhoneBookParseInfo equ <__imp_PhoneBookParseInfoA>
  ENDIF

externdef __imp_PhoneBookUnload:PPROC
PhoneBookUnload equ <__imp_PhoneBookUnload>
