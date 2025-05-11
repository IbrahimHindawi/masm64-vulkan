externdef __imp_ODBCCPlApplet:PPROC
ODBCCPlApplet equ <__imp_ODBCCPlApplet>

externdef __imp_SQLConfigDataSource:PPROC
SQLConfigDataSource equ <__imp_SQLConfigDataSource>

externdef __imp_SQLConfigDataSourceW:PPROC
SQLConfigDataSourceW equ <__imp_SQLConfigDataSourceW>
  IFDEF __UNICODE__
    SQLConfigDataSource equ <__imp_SQLConfigDataSourceW>
  ENDIF

externdef __imp_SQLConfigDriver:PPROC
SQLConfigDriver equ <__imp_SQLConfigDriver>

externdef __imp_SQLConfigDriverW:PPROC
SQLConfigDriverW equ <__imp_SQLConfigDriverW>
  IFDEF __UNICODE__
    SQLConfigDriver equ <__imp_SQLConfigDriverW>
  ENDIF

externdef __imp_SQLCreateDataSource:PPROC
SQLCreateDataSource equ <__imp_SQLCreateDataSource>

externdef __imp_SQLCreateDataSourceEx:PPROC
SQLCreateDataSourceEx equ <__imp_SQLCreateDataSourceEx>

externdef __imp_SQLCreateDataSourceExW:PPROC
SQLCreateDataSourceExW equ <__imp_SQLCreateDataSourceExW>
  IFDEF __UNICODE__
    SQLCreateDataSourceEx equ <__imp_SQLCreateDataSourceExW>
  ENDIF

externdef __imp_SQLCreateDataSourceW:PPROC
SQLCreateDataSourceW equ <__imp_SQLCreateDataSourceW>
  IFDEF __UNICODE__
    SQLCreateDataSource equ <__imp_SQLCreateDataSourceW>
  ENDIF

externdef __imp_SQLGetAvailableDrivers:PPROC
SQLGetAvailableDrivers equ <__imp_SQLGetAvailableDrivers>

externdef __imp_SQLGetAvailableDriversW:PPROC
SQLGetAvailableDriversW equ <__imp_SQLGetAvailableDriversW>
  IFDEF __UNICODE__
    SQLGetAvailableDrivers equ <__imp_SQLGetAvailableDriversW>
  ENDIF

externdef __imp_SQLGetConfigMode:PPROC
SQLGetConfigMode equ <__imp_SQLGetConfigMode>

externdef __imp_SQLGetInstalledDrivers:PPROC
SQLGetInstalledDrivers equ <__imp_SQLGetInstalledDrivers>

externdef __imp_SQLGetInstalledDriversW:PPROC
SQLGetInstalledDriversW equ <__imp_SQLGetInstalledDriversW>
  IFDEF __UNICODE__
    SQLGetInstalledDrivers equ <__imp_SQLGetInstalledDriversW>
  ENDIF

externdef __imp_SQLGetPrivateProfileString:PPROC
SQLGetPrivateProfileString equ <__imp_SQLGetPrivateProfileString>

externdef __imp_SQLGetPrivateProfileStringW:PPROC
SQLGetPrivateProfileStringW equ <__imp_SQLGetPrivateProfileStringW>
  IFDEF __UNICODE__
    SQLGetPrivateProfileString equ <__imp_SQLGetPrivateProfileStringW>
  ENDIF

externdef __imp_SQLGetTranslator:PPROC
SQLGetTranslator equ <__imp_SQLGetTranslator>

externdef __imp_SQLGetTranslatorW:PPROC
SQLGetTranslatorW equ <__imp_SQLGetTranslatorW>
  IFDEF __UNICODE__
    SQLGetTranslator equ <__imp_SQLGetTranslatorW>
  ENDIF

externdef __imp_SQLInstallDriver:PPROC
SQLInstallDriver equ <__imp_SQLInstallDriver>

externdef __imp_SQLInstallDriverEx:PPROC
SQLInstallDriverEx equ <__imp_SQLInstallDriverEx>

externdef __imp_SQLInstallDriverExW:PPROC
SQLInstallDriverExW equ <__imp_SQLInstallDriverExW>
  IFDEF __UNICODE__
    SQLInstallDriverEx equ <__imp_SQLInstallDriverExW>
  ENDIF

externdef __imp_SQLInstallDriverManager:PPROC
SQLInstallDriverManager equ <__imp_SQLInstallDriverManager>

externdef __imp_SQLInstallDriverManagerW:PPROC
SQLInstallDriverManagerW equ <__imp_SQLInstallDriverManagerW>
  IFDEF __UNICODE__
    SQLInstallDriverManager equ <__imp_SQLInstallDriverManagerW>
  ENDIF

externdef __imp_SQLInstallDriverW:PPROC
SQLInstallDriverW equ <__imp_SQLInstallDriverW>
  IFDEF __UNICODE__
    SQLInstallDriver equ <__imp_SQLInstallDriverW>
  ENDIF

externdef __imp_SQLInstallODBC:PPROC
SQLInstallODBC equ <__imp_SQLInstallODBC>

externdef __imp_SQLInstallODBCW:PPROC
SQLInstallODBCW equ <__imp_SQLInstallODBCW>
  IFDEF __UNICODE__
    SQLInstallODBC equ <__imp_SQLInstallODBCW>
  ENDIF

externdef __imp_SQLInstallTranslator:PPROC
SQLInstallTranslator equ <__imp_SQLInstallTranslator>

externdef __imp_SQLInstallTranslatorEx:PPROC
SQLInstallTranslatorEx equ <__imp_SQLInstallTranslatorEx>

externdef __imp_SQLInstallTranslatorExW:PPROC
SQLInstallTranslatorExW equ <__imp_SQLInstallTranslatorExW>
  IFDEF __UNICODE__
    SQLInstallTranslatorEx equ <__imp_SQLInstallTranslatorExW>
  ENDIF

externdef __imp_SQLInstallTranslatorW:PPROC
SQLInstallTranslatorW equ <__imp_SQLInstallTranslatorW>
  IFDEF __UNICODE__
    SQLInstallTranslator equ <__imp_SQLInstallTranslatorW>
  ENDIF

externdef __imp_SQLInstallerError:PPROC
SQLInstallerError equ <__imp_SQLInstallerError>

externdef __imp_SQLInstallerErrorW:PPROC
SQLInstallerErrorW equ <__imp_SQLInstallerErrorW>
  IFDEF __UNICODE__
    SQLInstallerError equ <__imp_SQLInstallerErrorW>
  ENDIF

externdef __imp_SQLLoadDataSourcesListBox:PPROC
SQLLoadDataSourcesListBox equ <__imp_SQLLoadDataSourcesListBox>

externdef __imp_SQLLoadDriverListBox:PPROC
SQLLoadDriverListBox equ <__imp_SQLLoadDriverListBox>

externdef __imp_SQLManageDataSources:PPROC
SQLManageDataSources equ <__imp_SQLManageDataSources>

externdef __imp_SQLPostInstallerError:PPROC
SQLPostInstallerError equ <__imp_SQLPostInstallerError>

externdef __imp_SQLPostInstallerErrorW:PPROC
SQLPostInstallerErrorW equ <__imp_SQLPostInstallerErrorW>
  IFDEF __UNICODE__
    SQLPostInstallerError equ <__imp_SQLPostInstallerErrorW>
  ENDIF

externdef __imp_SQLReadFileDSN:PPROC
SQLReadFileDSN equ <__imp_SQLReadFileDSN>

externdef __imp_SQLReadFileDSNW:PPROC
SQLReadFileDSNW equ <__imp_SQLReadFileDSNW>
  IFDEF __UNICODE__
    SQLReadFileDSN equ <__imp_SQLReadFileDSNW>
  ENDIF

externdef __imp_SQLRemoveDSNFromIni:PPROC
SQLRemoveDSNFromIni equ <__imp_SQLRemoveDSNFromIni>

externdef __imp_SQLRemoveDSNFromIniW:PPROC
SQLRemoveDSNFromIniW equ <__imp_SQLRemoveDSNFromIniW>
  IFDEF __UNICODE__
    SQLRemoveDSNFromIni equ <__imp_SQLRemoveDSNFromIniW>
  ENDIF

externdef __imp_SQLRemoveDefaultDataSource:PPROC
SQLRemoveDefaultDataSource equ <__imp_SQLRemoveDefaultDataSource>

externdef __imp_SQLRemoveDriver:PPROC
SQLRemoveDriver equ <__imp_SQLRemoveDriver>

externdef __imp_SQLRemoveDriverManager:PPROC
SQLRemoveDriverManager equ <__imp_SQLRemoveDriverManager>

externdef __imp_SQLRemoveDriverW:PPROC
SQLRemoveDriverW equ <__imp_SQLRemoveDriverW>
  IFDEF __UNICODE__
    SQLRemoveDriver equ <__imp_SQLRemoveDriverW>
  ENDIF

externdef __imp_SQLRemoveTranslator:PPROC
SQLRemoveTranslator equ <__imp_SQLRemoveTranslator>

externdef __imp_SQLRemoveTranslatorW:PPROC
SQLRemoveTranslatorW equ <__imp_SQLRemoveTranslatorW>
  IFDEF __UNICODE__
    SQLRemoveTranslator equ <__imp_SQLRemoveTranslatorW>
  ENDIF

externdef __imp_SQLSetConfigMode:PPROC
SQLSetConfigMode equ <__imp_SQLSetConfigMode>

externdef __imp_SQLValidDSN:PPROC
SQLValidDSN equ <__imp_SQLValidDSN>

externdef __imp_SQLValidDSNW:PPROC
SQLValidDSNW equ <__imp_SQLValidDSNW>
  IFDEF __UNICODE__
    SQLValidDSN equ <__imp_SQLValidDSNW>
  ENDIF

externdef __imp_SQLWriteDSNToIni:PPROC
SQLWriteDSNToIni equ <__imp_SQLWriteDSNToIni>

externdef __imp_SQLWriteDSNToIniW:PPROC
SQLWriteDSNToIniW equ <__imp_SQLWriteDSNToIniW>
  IFDEF __UNICODE__
    SQLWriteDSNToIni equ <__imp_SQLWriteDSNToIniW>
  ENDIF

externdef __imp_SQLWriteFileDSN:PPROC
SQLWriteFileDSN equ <__imp_SQLWriteFileDSN>

externdef __imp_SQLWriteFileDSNW:PPROC
SQLWriteFileDSNW equ <__imp_SQLWriteFileDSNW>
  IFDEF __UNICODE__
    SQLWriteFileDSN equ <__imp_SQLWriteFileDSNW>
  ENDIF

externdef __imp_SQLWritePrivateProfileString:PPROC
SQLWritePrivateProfileString equ <__imp_SQLWritePrivateProfileString>

externdef __imp_SQLWritePrivateProfileStringW:PPROC
SQLWritePrivateProfileStringW equ <__imp_SQLWritePrivateProfileStringW>
  IFDEF __UNICODE__
    SQLWritePrivateProfileString equ <__imp_SQLWritePrivateProfileStringW>
  ENDIF

externdef __imp_SelectTransDlg:PPROC
SelectTransDlg equ <__imp_SelectTransDlg>

externdef __imp_odbccp32_ordinal100:PPROC
odbccp32_ordinal100 equ <__imp_odbccp32_ordinal100>

externdef __imp_odbccp32_ordinal102:PPROC
odbccp32_ordinal102 equ <__imp_odbccp32_ordinal102>

externdef __imp_odbccp32_ordinal103:PPROC
odbccp32_ordinal103 equ <__imp_odbccp32_ordinal103>

externdef __imp_odbccp32_ordinal104:PPROC
odbccp32_ordinal104 equ <__imp_odbccp32_ordinal104>

externdef __imp_odbccp32_ordinal105:PPROC
odbccp32_ordinal105 equ <__imp_odbccp32_ordinal105>

externdef __imp_odbccp32_ordinal106:PPROC
odbccp32_ordinal106 equ <__imp_odbccp32_ordinal106>

externdef __imp_odbccp32_ordinal107:PPROC
odbccp32_ordinal107 equ <__imp_odbccp32_ordinal107>

externdef __imp_odbccp32_ordinal108:PPROC
odbccp32_ordinal108 equ <__imp_odbccp32_ordinal108>

externdef __imp_odbccp32_ordinal109:PPROC
odbccp32_ordinal109 equ <__imp_odbccp32_ordinal109>

externdef __imp_odbccp32_ordinal110:PPROC
odbccp32_ordinal110 equ <__imp_odbccp32_ordinal110>

externdef __imp_odbccp32_ordinal111:PPROC
odbccp32_ordinal111 equ <__imp_odbccp32_ordinal111>

externdef __imp_odbccp32_ordinal113:PPROC
odbccp32_ordinal113 equ <__imp_odbccp32_ordinal113>

externdef __imp_odbccp32_ordinal114:PPROC
odbccp32_ordinal114 equ <__imp_odbccp32_ordinal114>

externdef __imp_odbccp32_ordinal115:PPROC
odbccp32_ordinal115 equ <__imp_odbccp32_ordinal115>

externdef __imp_odbccp32_ordinal116:PPROC
odbccp32_ordinal116 equ <__imp_odbccp32_ordinal116>

externdef __imp_odbccp32_ordinal117:PPROC
odbccp32_ordinal117 equ <__imp_odbccp32_ordinal117>

externdef __imp_odbccp32_ordinal118:PPROC
odbccp32_ordinal118 equ <__imp_odbccp32_ordinal118>

externdef __imp_odbccp32_ordinal119:PPROC
odbccp32_ordinal119 equ <__imp_odbccp32_ordinal119>

externdef __imp_odbccp32_ordinal120:PPROC
odbccp32_ordinal120 equ <__imp_odbccp32_ordinal120>

externdef __imp_odbccp32_ordinal121:PPROC
odbccp32_ordinal121 equ <__imp_odbccp32_ordinal121>

externdef __imp_odbccp32_ordinal122:PPROC
odbccp32_ordinal122 equ <__imp_odbccp32_ordinal122>

externdef __imp_odbccp32_ordinal123:PPROC
odbccp32_ordinal123 equ <__imp_odbccp32_ordinal123>

externdef __imp_odbccp32_ordinal124:PPROC
odbccp32_ordinal124 equ <__imp_odbccp32_ordinal124>

externdef __imp_odbccp32_ordinal125:PPROC
odbccp32_ordinal125 equ <__imp_odbccp32_ordinal125>

externdef __imp_odbccp32_ordinal126:PPROC
odbccp32_ordinal126 equ <__imp_odbccp32_ordinal126>

externdef __imp_odbccp32_ordinal127:PPROC
odbccp32_ordinal127 equ <__imp_odbccp32_ordinal127>

externdef __imp_odbccp32_ordinal128:PPROC
odbccp32_ordinal128 equ <__imp_odbccp32_ordinal128>

externdef __imp_odbccp32_ordinal129:PPROC
odbccp32_ordinal129 equ <__imp_odbccp32_ordinal129>

externdef __imp_odbccp32_ordinal130:PPROC
odbccp32_ordinal130 equ <__imp_odbccp32_ordinal130>

externdef __imp_odbccp32_ordinal131:PPROC
odbccp32_ordinal131 equ <__imp_odbccp32_ordinal131>

externdef __imp_odbccp32_ordinal132:PPROC
odbccp32_ordinal132 equ <__imp_odbccp32_ordinal132>

externdef __imp_odbccp32_ordinal133:PPROC
odbccp32_ordinal133 equ <__imp_odbccp32_ordinal133>

externdef __imp_odbccp32_ordinal134:PPROC
odbccp32_ordinal134 equ <__imp_odbccp32_ordinal134>

externdef __imp_odbccp32_ordinal135:PPROC
odbccp32_ordinal135 equ <__imp_odbccp32_ordinal135>

externdef __imp_odbccp32_ordinal136:PPROC
odbccp32_ordinal136 equ <__imp_odbccp32_ordinal136>

externdef __imp_odbccp32_ordinal137:PPROC
odbccp32_ordinal137 equ <__imp_odbccp32_ordinal137>

externdef __imp_odbccp32_ordinal138:PPROC
odbccp32_ordinal138 equ <__imp_odbccp32_ordinal138>

externdef __imp_odbccp32_ordinal139:PPROC
odbccp32_ordinal139 equ <__imp_odbccp32_ordinal139>

externdef __imp_odbccp32_ordinal140:PPROC
odbccp32_ordinal140 equ <__imp_odbccp32_ordinal140>

externdef __imp_odbccp32_ordinal141:PPROC
odbccp32_ordinal141 equ <__imp_odbccp32_ordinal141>

externdef __imp_odbccp32_ordinal142:PPROC
odbccp32_ordinal142 equ <__imp_odbccp32_ordinal142>

externdef __imp_odbccp32_ordinal143:PPROC
odbccp32_ordinal143 equ <__imp_odbccp32_ordinal143>

externdef __imp_odbccp32_ordinal144:PPROC
odbccp32_ordinal144 equ <__imp_odbccp32_ordinal144>

externdef __imp_odbccp32_ordinal145:PPROC
odbccp32_ordinal145 equ <__imp_odbccp32_ordinal145>

externdef __imp_odbccp32_ordinal146:PPROC
odbccp32_ordinal146 equ <__imp_odbccp32_ordinal146>

externdef __imp_odbccp32_ordinal147:PPROC
odbccp32_ordinal147 equ <__imp_odbccp32_ordinal147>

externdef __imp_odbccp32_ordinal148:PPROC
odbccp32_ordinal148 equ <__imp_odbccp32_ordinal148>

externdef __imp_odbccp32_ordinal149:PPROC
odbccp32_ordinal149 equ <__imp_odbccp32_ordinal149>

externdef __imp_odbccp32_ordinal150:PPROC
odbccp32_ordinal150 equ <__imp_odbccp32_ordinal150>

externdef __imp_odbccp32_ordinal151:PPROC
odbccp32_ordinal151 equ <__imp_odbccp32_ordinal151>

externdef __imp_odbccp32_ordinal152:PPROC
odbccp32_ordinal152 equ <__imp_odbccp32_ordinal152>

externdef __imp_odbccp32_ordinal153:PPROC
odbccp32_ordinal153 equ <__imp_odbccp32_ordinal153>

externdef __imp_odbccp32_ordinal154:PPROC
odbccp32_ordinal154 equ <__imp_odbccp32_ordinal154>

externdef __imp_odbccp32_ordinal155:PPROC
odbccp32_ordinal155 equ <__imp_odbccp32_ordinal155>

externdef __imp_odbccp32_ordinal156:PPROC
odbccp32_ordinal156 equ <__imp_odbccp32_ordinal156>

externdef __imp_odbccp32_ordinal157:PPROC
odbccp32_ordinal157 equ <__imp_odbccp32_ordinal157>

externdef __imp_odbccp32_ordinal158:PPROC
odbccp32_ordinal158 equ <__imp_odbccp32_ordinal158>

externdef __imp_odbccp32_ordinal159:PPROC
odbccp32_ordinal159 equ <__imp_odbccp32_ordinal159>

externdef __imp_odbccp32_ordinal160:PPROC
odbccp32_ordinal160 equ <__imp_odbccp32_ordinal160>

externdef __imp_odbccp32_ordinal161:PPROC
odbccp32_ordinal161 equ <__imp_odbccp32_ordinal161>

externdef __imp_odbccp32_ordinal162:PPROC
odbccp32_ordinal162 equ <__imp_odbccp32_ordinal162>

externdef __imp_odbccp32_ordinal163:PPROC
odbccp32_ordinal163 equ <__imp_odbccp32_ordinal163>

externdef __imp_odbccp32_ordinal164:PPROC
odbccp32_ordinal164 equ <__imp_odbccp32_ordinal164>

externdef __imp_odbccp32_ordinal165:PPROC
odbccp32_ordinal165 equ <__imp_odbccp32_ordinal165>

externdef __imp_odbccp32_ordinal166:PPROC
odbccp32_ordinal166 equ <__imp_odbccp32_ordinal166>

externdef __imp_odbccp32_ordinal167:PPROC
odbccp32_ordinal167 equ <__imp_odbccp32_ordinal167>

externdef __imp_odbccp32_ordinal168:PPROC
odbccp32_ordinal168 equ <__imp_odbccp32_ordinal168>

externdef __imp_odbccp32_ordinal169:PPROC
odbccp32_ordinal169 equ <__imp_odbccp32_ordinal169>

externdef __imp_odbccp32_ordinal170:PPROC
odbccp32_ordinal170 equ <__imp_odbccp32_ordinal170>

externdef __imp_odbccp32_ordinal171:PPROC
odbccp32_ordinal171 equ <__imp_odbccp32_ordinal171>

externdef __imp_odbccp32_ordinal172:PPROC
odbccp32_ordinal172 equ <__imp_odbccp32_ordinal172>

externdef __imp_odbccp32_ordinal173:PPROC
odbccp32_ordinal173 equ <__imp_odbccp32_ordinal173>

externdef __imp_odbccp32_ordinal174:PPROC
odbccp32_ordinal174 equ <__imp_odbccp32_ordinal174>

externdef __imp_odbccp32_ordinal175:PPROC
odbccp32_ordinal175 equ <__imp_odbccp32_ordinal175>

externdef __imp_odbccp32_ordinal176:PPROC
odbccp32_ordinal176 equ <__imp_odbccp32_ordinal176>

externdef __imp_odbccp32_ordinal177:PPROC
odbccp32_ordinal177 equ <__imp_odbccp32_ordinal177>

externdef __imp_odbccp32_ordinal178:PPROC
odbccp32_ordinal178 equ <__imp_odbccp32_ordinal178>

externdef __imp_odbccp32_ordinal179:PPROC
odbccp32_ordinal179 equ <__imp_odbccp32_ordinal179>

externdef __imp_odbccp32_ordinal180:PPROC
odbccp32_ordinal180 equ <__imp_odbccp32_ordinal180>

externdef __imp_odbccp32_ordinal181:PPROC
odbccp32_ordinal181 equ <__imp_odbccp32_ordinal181>

externdef __imp_odbccp32_ordinal182:PPROC
odbccp32_ordinal182 equ <__imp_odbccp32_ordinal182>

externdef __imp_odbccp32_ordinal183:PPROC
odbccp32_ordinal183 equ <__imp_odbccp32_ordinal183>

externdef __imp_odbccp32_ordinal184:PPROC
odbccp32_ordinal184 equ <__imp_odbccp32_ordinal184>

externdef __imp_odbccp32_ordinal185:PPROC
odbccp32_ordinal185 equ <__imp_odbccp32_ordinal185>

externdef __imp_odbccp32_ordinal186:PPROC
odbccp32_ordinal186 equ <__imp_odbccp32_ordinal186>

externdef __imp_odbccp32_ordinal187:PPROC
odbccp32_ordinal187 equ <__imp_odbccp32_ordinal187>

externdef __imp_odbccp32_ordinal188:PPROC
odbccp32_ordinal188 equ <__imp_odbccp32_ordinal188>

externdef __imp_odbccp32_ordinal189:PPROC
odbccp32_ordinal189 equ <__imp_odbccp32_ordinal189>

externdef __imp_odbccp32_ordinal190:PPROC
odbccp32_ordinal190 equ <__imp_odbccp32_ordinal190>

externdef __imp_odbccp32_ordinal191:PPROC
odbccp32_ordinal191 equ <__imp_odbccp32_ordinal191>

externdef __imp_odbccp32_ordinal192:PPROC
odbccp32_ordinal192 equ <__imp_odbccp32_ordinal192>

externdef __imp_odbccp32_ordinal193:PPROC
odbccp32_ordinal193 equ <__imp_odbccp32_ordinal193>

externdef __imp_odbccp32_ordinal194:PPROC
odbccp32_ordinal194 equ <__imp_odbccp32_ordinal194>

externdef __imp_odbccp32_ordinal195:PPROC
odbccp32_ordinal195 equ <__imp_odbccp32_ordinal195>

externdef __imp_odbccp32_ordinal196:PPROC
odbccp32_ordinal196 equ <__imp_odbccp32_ordinal196>

externdef __imp_odbccp32_ordinal197:PPROC
odbccp32_ordinal197 equ <__imp_odbccp32_ordinal197>

externdef __imp_odbccp32_ordinal198:PPROC
odbccp32_ordinal198 equ <__imp_odbccp32_ordinal198>

externdef __imp_odbccp32_ordinal199:PPROC
odbccp32_ordinal199 equ <__imp_odbccp32_ordinal199>

externdef __imp_odbccp32_ordinal200:PPROC
odbccp32_ordinal200 equ <__imp_odbccp32_ordinal200>

externdef __imp_odbccp32_ordinal201:PPROC
odbccp32_ordinal201 equ <__imp_odbccp32_ordinal201>

externdef __imp_odbccp32_ordinal207:PPROC
odbccp32_ordinal207 equ <__imp_odbccp32_ordinal207>

externdef __imp_odbccp32_ordinal211:PPROC
odbccp32_ordinal211 equ <__imp_odbccp32_ordinal211>

externdef __imp_odbccp32_ordinal217:PPROC
odbccp32_ordinal217 equ <__imp_odbccp32_ordinal217>

externdef __imp_odbccp32_ordinal227:PPROC
odbccp32_ordinal227 equ <__imp_odbccp32_ordinal227>

externdef __imp_odbccp32_ordinal228:PPROC
odbccp32_ordinal228 equ <__imp_odbccp32_ordinal228>

externdef __imp_odbccp32_ordinal31:PPROC
odbccp32_ordinal31 equ <__imp_odbccp32_ordinal31>

externdef __imp_odbccp32_ordinal32:PPROC
odbccp32_ordinal32 equ <__imp_odbccp32_ordinal32>

externdef __imp_odbccp32_ordinal33:PPROC
odbccp32_ordinal33 equ <__imp_odbccp32_ordinal33>

externdef __imp_odbccp32_ordinal34:PPROC
odbccp32_ordinal34 equ <__imp_odbccp32_ordinal34>

externdef __imp_odbccp32_ordinal35:PPROC
odbccp32_ordinal35 equ <__imp_odbccp32_ordinal35>

externdef __imp_odbccp32_ordinal36:PPROC
odbccp32_ordinal36 equ <__imp_odbccp32_ordinal36>

externdef __imp_odbccp32_ordinal37:PPROC
odbccp32_ordinal37 equ <__imp_odbccp32_ordinal37>

externdef __imp_odbccp32_ordinal38:PPROC
odbccp32_ordinal38 equ <__imp_odbccp32_ordinal38>

externdef __imp_odbccp32_ordinal39:PPROC
odbccp32_ordinal39 equ <__imp_odbccp32_ordinal39>

externdef __imp_odbccp32_ordinal40:PPROC
odbccp32_ordinal40 equ <__imp_odbccp32_ordinal40>

externdef __imp_odbccp32_ordinal41:PPROC
odbccp32_ordinal41 equ <__imp_odbccp32_ordinal41>

externdef __imp_odbccp32_ordinal42:PPROC
odbccp32_ordinal42 equ <__imp_odbccp32_ordinal42>

externdef __imp_odbccp32_ordinal43:PPROC
odbccp32_ordinal43 equ <__imp_odbccp32_ordinal43>

externdef __imp_odbccp32_ordinal44:PPROC
odbccp32_ordinal44 equ <__imp_odbccp32_ordinal44>

externdef __imp_odbccp32_ordinal45:PPROC
odbccp32_ordinal45 equ <__imp_odbccp32_ordinal45>

externdef __imp_odbccp32_ordinal46:PPROC
odbccp32_ordinal46 equ <__imp_odbccp32_ordinal46>

externdef __imp_odbccp32_ordinal47:PPROC
odbccp32_ordinal47 equ <__imp_odbccp32_ordinal47>

externdef __imp_odbccp32_ordinal48:PPROC
odbccp32_ordinal48 equ <__imp_odbccp32_ordinal48>

externdef __imp_odbccp32_ordinal49:PPROC
odbccp32_ordinal49 equ <__imp_odbccp32_ordinal49>

externdef __imp_odbccp32_ordinal50:PPROC
odbccp32_ordinal50 equ <__imp_odbccp32_ordinal50>

externdef __imp_odbccp32_ordinal51:PPROC
odbccp32_ordinal51 equ <__imp_odbccp32_ordinal51>

externdef __imp_odbccp32_ordinal52:PPROC
odbccp32_ordinal52 equ <__imp_odbccp32_ordinal52>

externdef __imp_odbccp32_ordinal53:PPROC
odbccp32_ordinal53 equ <__imp_odbccp32_ordinal53>

externdef __imp_odbccp32_ordinal54:PPROC
odbccp32_ordinal54 equ <__imp_odbccp32_ordinal54>

externdef __imp_odbccp32_ordinal55:PPROC
odbccp32_ordinal55 equ <__imp_odbccp32_ordinal55>

externdef __imp_odbccp32_ordinal56:PPROC
odbccp32_ordinal56 equ <__imp_odbccp32_ordinal56>

externdef __imp_odbccp32_ordinal57:PPROC
odbccp32_ordinal57 equ <__imp_odbccp32_ordinal57>

externdef __imp_odbccp32_ordinal58:PPROC
odbccp32_ordinal58 equ <__imp_odbccp32_ordinal58>

externdef __imp_odbccp32_ordinal59:PPROC
odbccp32_ordinal59 equ <__imp_odbccp32_ordinal59>

externdef __imp_odbccp32_ordinal60:PPROC
odbccp32_ordinal60 equ <__imp_odbccp32_ordinal60>

externdef __imp_odbccp32_ordinal61:PPROC
odbccp32_ordinal61 equ <__imp_odbccp32_ordinal61>

externdef __imp_odbccp32_ordinal62:PPROC
odbccp32_ordinal62 equ <__imp_odbccp32_ordinal62>

externdef __imp_odbccp32_ordinal63:PPROC
odbccp32_ordinal63 equ <__imp_odbccp32_ordinal63>

externdef __imp_odbccp32_ordinal64:PPROC
odbccp32_ordinal64 equ <__imp_odbccp32_ordinal64>

externdef __imp_odbccp32_ordinal65:PPROC
odbccp32_ordinal65 equ <__imp_odbccp32_ordinal65>

externdef __imp_odbccp32_ordinal66:PPROC
odbccp32_ordinal66 equ <__imp_odbccp32_ordinal66>

externdef __imp_odbccp32_ordinal67:PPROC
odbccp32_ordinal67 equ <__imp_odbccp32_ordinal67>

externdef __imp_odbccp32_ordinal68:PPROC
odbccp32_ordinal68 equ <__imp_odbccp32_ordinal68>

externdef __imp_odbccp32_ordinal69:PPROC
odbccp32_ordinal69 equ <__imp_odbccp32_ordinal69>

externdef __imp_odbccp32_ordinal70:PPROC
odbccp32_ordinal70 equ <__imp_odbccp32_ordinal70>

externdef __imp_odbccp32_ordinal71:PPROC
odbccp32_ordinal71 equ <__imp_odbccp32_ordinal71>

externdef __imp_odbccp32_ordinal72:PPROC
odbccp32_ordinal72 equ <__imp_odbccp32_ordinal72>

externdef __imp_odbccp32_ordinal73:PPROC
odbccp32_ordinal73 equ <__imp_odbccp32_ordinal73>

externdef __imp_odbccp32_ordinal74:PPROC
odbccp32_ordinal74 equ <__imp_odbccp32_ordinal74>

externdef __imp_odbccp32_ordinal75:PPROC
odbccp32_ordinal75 equ <__imp_odbccp32_ordinal75>

externdef __imp_odbccp32_ordinal76:PPROC
odbccp32_ordinal76 equ <__imp_odbccp32_ordinal76>

externdef __imp_odbccp32_ordinal77:PPROC
odbccp32_ordinal77 equ <__imp_odbccp32_ordinal77>

externdef __imp_odbccp32_ordinal78:PPROC
odbccp32_ordinal78 equ <__imp_odbccp32_ordinal78>

externdef __imp_odbccp32_ordinal79:PPROC
odbccp32_ordinal79 equ <__imp_odbccp32_ordinal79>

externdef __imp_odbccp32_ordinal80:PPROC
odbccp32_ordinal80 equ <__imp_odbccp32_ordinal80>

externdef __imp_odbccp32_ordinal81:PPROC
odbccp32_ordinal81 equ <__imp_odbccp32_ordinal81>

externdef __imp_odbccp32_ordinal82:PPROC
odbccp32_ordinal82 equ <__imp_odbccp32_ordinal82>

externdef __imp_odbccp32_ordinal83:PPROC
odbccp32_ordinal83 equ <__imp_odbccp32_ordinal83>

externdef __imp_odbccp32_ordinal84:PPROC
odbccp32_ordinal84 equ <__imp_odbccp32_ordinal84>

externdef __imp_odbccp32_ordinal85:PPROC
odbccp32_ordinal85 equ <__imp_odbccp32_ordinal85>

externdef __imp_odbccp32_ordinal86:PPROC
odbccp32_ordinal86 equ <__imp_odbccp32_ordinal86>

externdef __imp_odbccp32_ordinal87:PPROC
odbccp32_ordinal87 equ <__imp_odbccp32_ordinal87>

externdef __imp_odbccp32_ordinal88:PPROC
odbccp32_ordinal88 equ <__imp_odbccp32_ordinal88>

externdef __imp_odbccp32_ordinal89:PPROC
odbccp32_ordinal89 equ <__imp_odbccp32_ordinal89>

externdef __imp_odbccp32_ordinal90:PPROC
odbccp32_ordinal90 equ <__imp_odbccp32_ordinal90>

externdef __imp_odbccp32_ordinal91:PPROC
odbccp32_ordinal91 equ <__imp_odbccp32_ordinal91>

externdef __imp_odbccp32_ordinal92:PPROC
odbccp32_ordinal92 equ <__imp_odbccp32_ordinal92>

externdef __imp_odbccp32_ordinal93:PPROC
odbccp32_ordinal93 equ <__imp_odbccp32_ordinal93>

externdef __imp_odbccp32_ordinal94:PPROC
odbccp32_ordinal94 equ <__imp_odbccp32_ordinal94>

externdef __imp_odbccp32_ordinal95:PPROC
odbccp32_ordinal95 equ <__imp_odbccp32_ordinal95>

externdef __imp_odbccp32_ordinal96:PPROC
odbccp32_ordinal96 equ <__imp_odbccp32_ordinal96>

externdef __imp_odbccp32_ordinal97:PPROC
odbccp32_ordinal97 equ <__imp_odbccp32_ordinal97>

externdef __imp_odbccp32_ordinal98:PPROC
odbccp32_ordinal98 equ <__imp_odbccp32_ordinal98>

externdef __imp_odbccp32_ordinal99:PPROC
odbccp32_ordinal99 equ <__imp_odbccp32_ordinal99>
