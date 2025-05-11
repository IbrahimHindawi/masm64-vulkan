externdef __imp_CloseDriver:PPROC
CloseDriver equ <__imp_CloseDriver>

externdef __imp_DefDriverProc:PPROC
DefDriverProc equ <__imp_DefDriverProc>

externdef __imp_DriverCallback:PPROC
DriverCallback equ <__imp_DriverCallback>

externdef __imp_DrvGetModuleHandle:PPROC
DrvGetModuleHandle equ <__imp_DrvGetModuleHandle>

externdef __imp_GetDriverModuleHandle:PPROC
GetDriverModuleHandle equ <__imp_GetDriverModuleHandle>

externdef __imp_MigrateAllDrivers:PPROC
MigrateAllDrivers equ <__imp_MigrateAllDrivers>

externdef __imp_MigrateSoundEvents:PPROC
MigrateSoundEvents equ <__imp_MigrateSoundEvents>

externdef __imp_OpenDriver:PPROC
OpenDriver equ <__imp_OpenDriver>

externdef __imp_PlaySound:PPROC
PlaySound equ <__imp_PlaySound>

externdef __imp_PlaySoundA:PPROC
PlaySoundA equ <__imp_PlaySoundA>
  IFNDEF __UNICODE__
    PlaySound equ <__imp_PlaySoundA>
  ENDIF

externdef __imp_PlaySoundW:PPROC
PlaySoundW equ <__imp_PlaySoundW>
  IFDEF __UNICODE__
    PlaySound equ <__imp_PlaySoundW>
  ENDIF

externdef __imp_SendDriverMessage:PPROC
SendDriverMessage equ <__imp_SendDriverMessage>

externdef __imp_WOWAppExit:PPROC
WOWAppExit equ <__imp_WOWAppExit>

externdef __imp_WinmmLogoff:PPROC
WinmmLogoff equ <__imp_WinmmLogoff>

externdef __imp_WinmmLogon:PPROC
WinmmLogon equ <__imp_WinmmLogon>

externdef __imp_auxGetDevCapsA:PPROC
auxGetDevCapsA equ <__imp_auxGetDevCapsA>
  IFNDEF __UNICODE__
    auxGetDevCaps equ <__imp_auxGetDevCapsA>
  ENDIF

externdef __imp_auxGetDevCapsW:PPROC
auxGetDevCapsW equ <__imp_auxGetDevCapsW>
  IFDEF __UNICODE__
    auxGetDevCaps equ <__imp_auxGetDevCapsW>
  ENDIF

externdef __imp_auxGetNumDevs:PPROC
auxGetNumDevs equ <__imp_auxGetNumDevs>

externdef __imp_auxGetVolume:PPROC
auxGetVolume equ <__imp_auxGetVolume>

externdef __imp_auxOutMessage:PPROC
auxOutMessage equ <__imp_auxOutMessage>

externdef __imp_auxSetVolume:PPROC
auxSetVolume equ <__imp_auxSetVolume>

externdef __imp_gfxAddGfx:PPROC
gfxAddGfx equ <__imp_gfxAddGfx>

externdef __imp_gfxBatchChange:PPROC
gfxBatchChange equ <__imp_gfxBatchChange>

externdef __imp_gfxCreateGfxFactoriesList:PPROC
gfxCreateGfxFactoriesList equ <__imp_gfxCreateGfxFactoriesList>

externdef __imp_gfxCreateZoneFactoriesList:PPROC
gfxCreateZoneFactoriesList equ <__imp_gfxCreateZoneFactoriesList>

externdef __imp_gfxDestroyDeviceInterfaceList:PPROC
gfxDestroyDeviceInterfaceList equ <__imp_gfxDestroyDeviceInterfaceList>

externdef __imp_gfxEnumerateGfxs:PPROC
gfxEnumerateGfxs equ <__imp_gfxEnumerateGfxs>

externdef __imp_gfxLogoff:PPROC
gfxLogoff equ <__imp_gfxLogoff>

externdef __imp_gfxLogon:PPROC
gfxLogon equ <__imp_gfxLogon>

externdef __imp_gfxModifyGfx:PPROC
gfxModifyGfx equ <__imp_gfxModifyGfx>

externdef __imp_gfxOpenGfx:PPROC
gfxOpenGfx equ <__imp_gfxOpenGfx>

externdef __imp_gfxRemoveGfx:PPROC
gfxRemoveGfx equ <__imp_gfxRemoveGfx>

externdef __imp_joyConfigChanged:PPROC
joyConfigChanged equ <__imp_joyConfigChanged>

externdef __imp_joyGetDevCapsA:PPROC
joyGetDevCapsA equ <__imp_joyGetDevCapsA>
  IFNDEF __UNICODE__
    joyGetDevCaps equ <__imp_joyGetDevCapsA>
  ENDIF

externdef __imp_joyGetDevCapsW:PPROC
joyGetDevCapsW equ <__imp_joyGetDevCapsW>
  IFDEF __UNICODE__
    joyGetDevCaps equ <__imp_joyGetDevCapsW>
  ENDIF

externdef __imp_joyGetNumDevs:PPROC
joyGetNumDevs equ <__imp_joyGetNumDevs>

externdef __imp_joyGetPos:PPROC
joyGetPos equ <__imp_joyGetPos>

externdef __imp_joyGetPosEx:PPROC
joyGetPosEx equ <__imp_joyGetPosEx>

externdef __imp_joyGetThreshold:PPROC
joyGetThreshold equ <__imp_joyGetThreshold>

externdef __imp_joyReleaseCapture:PPROC
joyReleaseCapture equ <__imp_joyReleaseCapture>

externdef __imp_joySetCapture:PPROC
joySetCapture equ <__imp_joySetCapture>

externdef __imp_joySetThreshold:PPROC
joySetThreshold equ <__imp_joySetThreshold>

externdef __imp_mciDriverNotify:PPROC
mciDriverNotify equ <__imp_mciDriverNotify>

externdef __imp_mciDriverYield:PPROC
mciDriverYield equ <__imp_mciDriverYield>

externdef __imp_mciExecute:PPROC
mciExecute equ <__imp_mciExecute>

externdef __imp_mciFreeCommandResource:PPROC
mciFreeCommandResource equ <__imp_mciFreeCommandResource>

externdef __imp_mciGetCreatorTask:PPROC
mciGetCreatorTask equ <__imp_mciGetCreatorTask>

externdef __imp_mciGetDeviceIDA:PPROC
mciGetDeviceIDA equ <__imp_mciGetDeviceIDA>
  IFNDEF __UNICODE__
    mciGetDeviceID equ <__imp_mciGetDeviceIDA>
  ENDIF

externdef __imp_mciGetDeviceIDFromElementIDA:PPROC
mciGetDeviceIDFromElementIDA equ <__imp_mciGetDeviceIDFromElementIDA>
  IFNDEF __UNICODE__
    mciGetDeviceIDFromElementID equ <__imp_mciGetDeviceIDFromElementIDA>
  ENDIF

externdef __imp_mciGetDeviceIDFromElementIDW:PPROC
mciGetDeviceIDFromElementIDW equ <__imp_mciGetDeviceIDFromElementIDW>
  IFDEF __UNICODE__
    mciGetDeviceIDFromElementID equ <__imp_mciGetDeviceIDFromElementIDW>
  ENDIF

externdef __imp_mciGetDeviceIDW:PPROC
mciGetDeviceIDW equ <__imp_mciGetDeviceIDW>
  IFDEF __UNICODE__
    mciGetDeviceID equ <__imp_mciGetDeviceIDW>
  ENDIF

externdef __imp_mciGetDriverData:PPROC
mciGetDriverData equ <__imp_mciGetDriverData>

externdef __imp_mciGetErrorStringA:PPROC
mciGetErrorStringA equ <__imp_mciGetErrorStringA>
  IFNDEF __UNICODE__
    mciGetErrorString equ <__imp_mciGetErrorStringA>
  ENDIF

externdef __imp_mciGetErrorStringW:PPROC
mciGetErrorStringW equ <__imp_mciGetErrorStringW>
  IFDEF __UNICODE__
    mciGetErrorString equ <__imp_mciGetErrorStringW>
  ENDIF

externdef __imp_mciGetYieldProc:PPROC
mciGetYieldProc equ <__imp_mciGetYieldProc>

externdef __imp_mciLoadCommandResource:PPROC
mciLoadCommandResource equ <__imp_mciLoadCommandResource>

externdef __imp_mciSendCommandA:PPROC
mciSendCommandA equ <__imp_mciSendCommandA>
  IFNDEF __UNICODE__
    mciSendCommand equ <__imp_mciSendCommandA>
  ENDIF

externdef __imp_mciSendCommandW:PPROC
mciSendCommandW equ <__imp_mciSendCommandW>
  IFDEF __UNICODE__
    mciSendCommand equ <__imp_mciSendCommandW>
  ENDIF

externdef __imp_mciSendStringA:PPROC
mciSendStringA equ <__imp_mciSendStringA>
  IFNDEF __UNICODE__
    mciSendString equ <__imp_mciSendStringA>
  ENDIF

externdef __imp_mciSendStringW:PPROC
mciSendStringW equ <__imp_mciSendStringW>
  IFDEF __UNICODE__
    mciSendString equ <__imp_mciSendStringW>
  ENDIF

externdef __imp_mciSetDriverData:PPROC
mciSetDriverData equ <__imp_mciSetDriverData>

externdef __imp_mciSetYieldProc:PPROC
mciSetYieldProc equ <__imp_mciSetYieldProc>

externdef __imp_midiConnect:PPROC
midiConnect equ <__imp_midiConnect>

externdef __imp_midiDisconnect:PPROC
midiDisconnect equ <__imp_midiDisconnect>

externdef __imp_midiInAddBuffer:PPROC
midiInAddBuffer equ <__imp_midiInAddBuffer>

externdef __imp_midiInClose:PPROC
midiInClose equ <__imp_midiInClose>

externdef __imp_midiInGetDevCapsA:PPROC
midiInGetDevCapsA equ <__imp_midiInGetDevCapsA>
  IFNDEF __UNICODE__
    midiInGetDevCaps equ <__imp_midiInGetDevCapsA>
  ENDIF

externdef __imp_midiInGetDevCapsW:PPROC
midiInGetDevCapsW equ <__imp_midiInGetDevCapsW>
  IFDEF __UNICODE__
    midiInGetDevCaps equ <__imp_midiInGetDevCapsW>
  ENDIF

externdef __imp_midiInGetErrorTextA:PPROC
midiInGetErrorTextA equ <__imp_midiInGetErrorTextA>
  IFNDEF __UNICODE__
    midiInGetErrorText equ <__imp_midiInGetErrorTextA>
  ENDIF

externdef __imp_midiInGetErrorTextW:PPROC
midiInGetErrorTextW equ <__imp_midiInGetErrorTextW>
  IFDEF __UNICODE__
    midiInGetErrorText equ <__imp_midiInGetErrorTextW>
  ENDIF

externdef __imp_midiInGetID:PPROC
midiInGetID equ <__imp_midiInGetID>

externdef __imp_midiInGetNumDevs:PPROC
midiInGetNumDevs equ <__imp_midiInGetNumDevs>

externdef __imp_midiInMessage:PPROC
midiInMessage equ <__imp_midiInMessage>

externdef __imp_midiInOpen:PPROC
midiInOpen equ <__imp_midiInOpen>

externdef __imp_midiInPrepareHeader:PPROC
midiInPrepareHeader equ <__imp_midiInPrepareHeader>

externdef __imp_midiInReset:PPROC
midiInReset equ <__imp_midiInReset>

externdef __imp_midiInStart:PPROC
midiInStart equ <__imp_midiInStart>

externdef __imp_midiInStop:PPROC
midiInStop equ <__imp_midiInStop>

externdef __imp_midiInUnprepareHeader:PPROC
midiInUnprepareHeader equ <__imp_midiInUnprepareHeader>

externdef __imp_midiOutCacheDrumPatches:PPROC
midiOutCacheDrumPatches equ <__imp_midiOutCacheDrumPatches>

externdef __imp_midiOutCachePatches:PPROC
midiOutCachePatches equ <__imp_midiOutCachePatches>

externdef __imp_midiOutClose:PPROC
midiOutClose equ <__imp_midiOutClose>

externdef __imp_midiOutGetDevCapsA:PPROC
midiOutGetDevCapsA equ <__imp_midiOutGetDevCapsA>
  IFNDEF __UNICODE__
    midiOutGetDevCaps equ <__imp_midiOutGetDevCapsA>
  ENDIF

externdef __imp_midiOutGetDevCapsW:PPROC
midiOutGetDevCapsW equ <__imp_midiOutGetDevCapsW>
  IFDEF __UNICODE__
    midiOutGetDevCaps equ <__imp_midiOutGetDevCapsW>
  ENDIF

externdef __imp_midiOutGetErrorTextA:PPROC
midiOutGetErrorTextA equ <__imp_midiOutGetErrorTextA>
  IFNDEF __UNICODE__
    midiOutGetErrorText equ <__imp_midiOutGetErrorTextA>
  ENDIF

externdef __imp_midiOutGetErrorTextW:PPROC
midiOutGetErrorTextW equ <__imp_midiOutGetErrorTextW>
  IFDEF __UNICODE__
    midiOutGetErrorText equ <__imp_midiOutGetErrorTextW>
  ENDIF

externdef __imp_midiOutGetID:PPROC
midiOutGetID equ <__imp_midiOutGetID>

externdef __imp_midiOutGetNumDevs:PPROC
midiOutGetNumDevs equ <__imp_midiOutGetNumDevs>

externdef __imp_midiOutGetVolume:PPROC
midiOutGetVolume equ <__imp_midiOutGetVolume>

externdef __imp_midiOutLongMsg:PPROC
midiOutLongMsg equ <__imp_midiOutLongMsg>

externdef __imp_midiOutMessage:PPROC
midiOutMessage equ <__imp_midiOutMessage>

externdef __imp_midiOutOpen:PPROC
midiOutOpen equ <__imp_midiOutOpen>

externdef __imp_midiOutPrepareHeader:PPROC
midiOutPrepareHeader equ <__imp_midiOutPrepareHeader>

externdef __imp_midiOutReset:PPROC
midiOutReset equ <__imp_midiOutReset>

externdef __imp_midiOutSetVolume:PPROC
midiOutSetVolume equ <__imp_midiOutSetVolume>

externdef __imp_midiOutShortMsg:PPROC
midiOutShortMsg equ <__imp_midiOutShortMsg>

externdef __imp_midiOutUnprepareHeader:PPROC
midiOutUnprepareHeader equ <__imp_midiOutUnprepareHeader>

externdef __imp_midiStreamClose:PPROC
midiStreamClose equ <__imp_midiStreamClose>

externdef __imp_midiStreamOpen:PPROC
midiStreamOpen equ <__imp_midiStreamOpen>

externdef __imp_midiStreamOut:PPROC
midiStreamOut equ <__imp_midiStreamOut>

externdef __imp_midiStreamPause:PPROC
midiStreamPause equ <__imp_midiStreamPause>

externdef __imp_midiStreamPosition:PPROC
midiStreamPosition equ <__imp_midiStreamPosition>

externdef __imp_midiStreamProperty:PPROC
midiStreamProperty equ <__imp_midiStreamProperty>

externdef __imp_midiStreamRestart:PPROC
midiStreamRestart equ <__imp_midiStreamRestart>

externdef __imp_midiStreamStop:PPROC
midiStreamStop equ <__imp_midiStreamStop>

externdef __imp_mixerClose:PPROC
mixerClose equ <__imp_mixerClose>

externdef __imp_mixerGetControlDetailsA:PPROC
mixerGetControlDetailsA equ <__imp_mixerGetControlDetailsA>
  IFNDEF __UNICODE__
    mixerGetControlDetails equ <__imp_mixerGetControlDetailsA>
  ENDIF

externdef __imp_mixerGetControlDetailsW:PPROC
mixerGetControlDetailsW equ <__imp_mixerGetControlDetailsW>
  IFDEF __UNICODE__
    mixerGetControlDetails equ <__imp_mixerGetControlDetailsW>
  ENDIF

externdef __imp_mixerGetDevCapsA:PPROC
mixerGetDevCapsA equ <__imp_mixerGetDevCapsA>
  IFNDEF __UNICODE__
    mixerGetDevCaps equ <__imp_mixerGetDevCapsA>
  ENDIF

externdef __imp_mixerGetDevCapsW:PPROC
mixerGetDevCapsW equ <__imp_mixerGetDevCapsW>
  IFDEF __UNICODE__
    mixerGetDevCaps equ <__imp_mixerGetDevCapsW>
  ENDIF

externdef __imp_mixerGetID:PPROC
mixerGetID equ <__imp_mixerGetID>

externdef __imp_mixerGetLineControlsA:PPROC
mixerGetLineControlsA equ <__imp_mixerGetLineControlsA>
  IFNDEF __UNICODE__
    mixerGetLineControls equ <__imp_mixerGetLineControlsA>
  ENDIF

externdef __imp_mixerGetLineControlsW:PPROC
mixerGetLineControlsW equ <__imp_mixerGetLineControlsW>
  IFDEF __UNICODE__
    mixerGetLineControls equ <__imp_mixerGetLineControlsW>
  ENDIF

externdef __imp_mixerGetLineInfoA:PPROC
mixerGetLineInfoA equ <__imp_mixerGetLineInfoA>
  IFNDEF __UNICODE__
    mixerGetLineInfo equ <__imp_mixerGetLineInfoA>
  ENDIF

externdef __imp_mixerGetLineInfoW:PPROC
mixerGetLineInfoW equ <__imp_mixerGetLineInfoW>
  IFDEF __UNICODE__
    mixerGetLineInfo equ <__imp_mixerGetLineInfoW>
  ENDIF

externdef __imp_mixerGetNumDevs:PPROC
mixerGetNumDevs equ <__imp_mixerGetNumDevs>

externdef __imp_mixerMessage:PPROC
mixerMessage equ <__imp_mixerMessage>

externdef __imp_mixerOpen:PPROC
mixerOpen equ <__imp_mixerOpen>

externdef __imp_mixerSetControlDetails:PPROC
mixerSetControlDetails equ <__imp_mixerSetControlDetails>

externdef __imp_mmDrvInstall:PPROC
mmDrvInstall equ <__imp_mmDrvInstall>

externdef __imp_mmGetCurrentTask:PPROC
mmGetCurrentTask equ <__imp_mmGetCurrentTask>

externdef __imp_mmTaskBlock:PPROC
mmTaskBlock equ <__imp_mmTaskBlock>

externdef __imp_mmTaskCreate:PPROC
mmTaskCreate equ <__imp_mmTaskCreate>

externdef __imp_mmTaskSignal:PPROC
mmTaskSignal equ <__imp_mmTaskSignal>

externdef __imp_mmTaskYield:PPROC
mmTaskYield equ <__imp_mmTaskYield>

externdef __imp_mmioAdvance:PPROC
mmioAdvance equ <__imp_mmioAdvance>

externdef __imp_mmioAscend:PPROC
mmioAscend equ <__imp_mmioAscend>

externdef __imp_mmioClose:PPROC
mmioClose equ <__imp_mmioClose>

externdef __imp_mmioCreateChunk:PPROC
mmioCreateChunk equ <__imp_mmioCreateChunk>

externdef __imp_mmioDescend:PPROC
mmioDescend equ <__imp_mmioDescend>

externdef __imp_mmioFlush:PPROC
mmioFlush equ <__imp_mmioFlush>

externdef __imp_mmioGetInfo:PPROC
mmioGetInfo equ <__imp_mmioGetInfo>

externdef __imp_mmioInstallIOProcA:PPROC
mmioInstallIOProcA equ <__imp_mmioInstallIOProcA>
  IFNDEF __UNICODE__
    mmioInstallIOProc equ <__imp_mmioInstallIOProcA>
  ENDIF

externdef __imp_mmioInstallIOProcW:PPROC
mmioInstallIOProcW equ <__imp_mmioInstallIOProcW>
  IFDEF __UNICODE__
    mmioInstallIOProc equ <__imp_mmioInstallIOProcW>
  ENDIF

externdef __imp_mmioOpenA:PPROC
mmioOpenA equ <__imp_mmioOpenA>
  IFNDEF __UNICODE__
    mmioOpen equ <__imp_mmioOpenA>
  ENDIF

externdef __imp_mmioOpenW:PPROC
mmioOpenW equ <__imp_mmioOpenW>
  IFDEF __UNICODE__
    mmioOpen equ <__imp_mmioOpenW>
  ENDIF

externdef __imp_mmioRead:PPROC
mmioRead equ <__imp_mmioRead>

externdef __imp_mmioRenameA:PPROC
mmioRenameA equ <__imp_mmioRenameA>
  IFNDEF __UNICODE__
    mmioRename equ <__imp_mmioRenameA>
  ENDIF

externdef __imp_mmioRenameW:PPROC
mmioRenameW equ <__imp_mmioRenameW>
  IFDEF __UNICODE__
    mmioRename equ <__imp_mmioRenameW>
  ENDIF

externdef __imp_mmioSeek:PPROC
mmioSeek equ <__imp_mmioSeek>

externdef __imp_mmioSendMessage:PPROC
mmioSendMessage equ <__imp_mmioSendMessage>

externdef __imp_mmioSetBuffer:PPROC
mmioSetBuffer equ <__imp_mmioSetBuffer>

externdef __imp_mmioSetInfo:PPROC
mmioSetInfo equ <__imp_mmioSetInfo>

externdef __imp_mmioStringToFOURCCA:PPROC
mmioStringToFOURCCA equ <__imp_mmioStringToFOURCCA>
  IFNDEF __UNICODE__
    mmioStringToFOURCC equ <__imp_mmioStringToFOURCCA>
  ENDIF

externdef __imp_mmioStringToFOURCCW:PPROC
mmioStringToFOURCCW equ <__imp_mmioStringToFOURCCW>
  IFDEF __UNICODE__
    mmioStringToFOURCC equ <__imp_mmioStringToFOURCCW>
  ENDIF

externdef __imp_mmioWrite:PPROC
mmioWrite equ <__imp_mmioWrite>

externdef __imp_mmsystemGetVersion:PPROC
mmsystemGetVersion equ <__imp_mmsystemGetVersion>

externdef __imp_sndPlaySoundA:PPROC
sndPlaySoundA equ <__imp_sndPlaySoundA>
  IFNDEF __UNICODE__
    sndPlaySound equ <__imp_sndPlaySoundA>
  ENDIF

externdef __imp_sndPlaySoundW:PPROC
sndPlaySoundW equ <__imp_sndPlaySoundW>
  IFDEF __UNICODE__
    sndPlaySound equ <__imp_sndPlaySoundW>
  ENDIF

externdef __imp_timeBeginPeriod:PPROC
timeBeginPeriod equ <__imp_timeBeginPeriod>

externdef __imp_timeEndPeriod:PPROC
timeEndPeriod equ <__imp_timeEndPeriod>

externdef __imp_timeGetDevCaps:PPROC
timeGetDevCaps equ <__imp_timeGetDevCaps>

externdef __imp_timeGetSystemTime:PPROC
timeGetSystemTime equ <__imp_timeGetSystemTime>

externdef __imp_timeGetTime:PPROC
timeGetTime equ <__imp_timeGetTime>

externdef __imp_timeKillEvent:PPROC
timeKillEvent equ <__imp_timeKillEvent>

externdef __imp_timeSetEvent:PPROC
timeSetEvent equ <__imp_timeSetEvent>

externdef __imp_waveInAddBuffer:PPROC
waveInAddBuffer equ <__imp_waveInAddBuffer>

externdef __imp_waveInClose:PPROC
waveInClose equ <__imp_waveInClose>

externdef __imp_waveInGetDevCapsA:PPROC
waveInGetDevCapsA equ <__imp_waveInGetDevCapsA>
  IFNDEF __UNICODE__
    waveInGetDevCaps equ <__imp_waveInGetDevCapsA>
  ENDIF

externdef __imp_waveInGetDevCapsW:PPROC
waveInGetDevCapsW equ <__imp_waveInGetDevCapsW>
  IFDEF __UNICODE__
    waveInGetDevCaps equ <__imp_waveInGetDevCapsW>
  ENDIF

externdef __imp_waveInGetErrorTextA:PPROC
waveInGetErrorTextA equ <__imp_waveInGetErrorTextA>
  IFNDEF __UNICODE__
    waveInGetErrorText equ <__imp_waveInGetErrorTextA>
  ENDIF

externdef __imp_waveInGetErrorTextW:PPROC
waveInGetErrorTextW equ <__imp_waveInGetErrorTextW>
  IFDEF __UNICODE__
    waveInGetErrorText equ <__imp_waveInGetErrorTextW>
  ENDIF

externdef __imp_waveInGetID:PPROC
waveInGetID equ <__imp_waveInGetID>

externdef __imp_waveInGetNumDevs:PPROC
waveInGetNumDevs equ <__imp_waveInGetNumDevs>

externdef __imp_waveInGetPosition:PPROC
waveInGetPosition equ <__imp_waveInGetPosition>

externdef __imp_waveInMessage:PPROC
waveInMessage equ <__imp_waveInMessage>

externdef __imp_waveInOpen:PPROC
waveInOpen equ <__imp_waveInOpen>

externdef __imp_waveInPrepareHeader:PPROC
waveInPrepareHeader equ <__imp_waveInPrepareHeader>

externdef __imp_waveInReset:PPROC
waveInReset equ <__imp_waveInReset>

externdef __imp_waveInStart:PPROC
waveInStart equ <__imp_waveInStart>

externdef __imp_waveInStop:PPROC
waveInStop equ <__imp_waveInStop>

externdef __imp_waveInUnprepareHeader:PPROC
waveInUnprepareHeader equ <__imp_waveInUnprepareHeader>

externdef __imp_waveOutBreakLoop:PPROC
waveOutBreakLoop equ <__imp_waveOutBreakLoop>

externdef __imp_waveOutClose:PPROC
waveOutClose equ <__imp_waveOutClose>

externdef __imp_waveOutGetDevCapsA:PPROC
waveOutGetDevCapsA equ <__imp_waveOutGetDevCapsA>
  IFNDEF __UNICODE__
    waveOutGetDevCaps equ <__imp_waveOutGetDevCapsA>
  ENDIF

externdef __imp_waveOutGetDevCapsW:PPROC
waveOutGetDevCapsW equ <__imp_waveOutGetDevCapsW>
  IFDEF __UNICODE__
    waveOutGetDevCaps equ <__imp_waveOutGetDevCapsW>
  ENDIF

externdef __imp_waveOutGetErrorTextA:PPROC
waveOutGetErrorTextA equ <__imp_waveOutGetErrorTextA>
  IFNDEF __UNICODE__
    waveOutGetErrorText equ <__imp_waveOutGetErrorTextA>
  ENDIF

externdef __imp_waveOutGetErrorTextW:PPROC
waveOutGetErrorTextW equ <__imp_waveOutGetErrorTextW>
  IFDEF __UNICODE__
    waveOutGetErrorText equ <__imp_waveOutGetErrorTextW>
  ENDIF

externdef __imp_waveOutGetID:PPROC
waveOutGetID equ <__imp_waveOutGetID>

externdef __imp_waveOutGetNumDevs:PPROC
waveOutGetNumDevs equ <__imp_waveOutGetNumDevs>

externdef __imp_waveOutGetPitch:PPROC
waveOutGetPitch equ <__imp_waveOutGetPitch>

externdef __imp_waveOutGetPlaybackRate:PPROC
waveOutGetPlaybackRate equ <__imp_waveOutGetPlaybackRate>

externdef __imp_waveOutGetPosition:PPROC
waveOutGetPosition equ <__imp_waveOutGetPosition>

externdef __imp_waveOutGetVolume:PPROC
waveOutGetVolume equ <__imp_waveOutGetVolume>

externdef __imp_waveOutMessage:PPROC
waveOutMessage equ <__imp_waveOutMessage>

externdef __imp_waveOutOpen:PPROC
waveOutOpen equ <__imp_waveOutOpen>

externdef __imp_waveOutPause:PPROC
waveOutPause equ <__imp_waveOutPause>

externdef __imp_waveOutPrepareHeader:PPROC
waveOutPrepareHeader equ <__imp_waveOutPrepareHeader>

externdef __imp_waveOutReset:PPROC
waveOutReset equ <__imp_waveOutReset>

externdef __imp_waveOutRestart:PPROC
waveOutRestart equ <__imp_waveOutRestart>

externdef __imp_waveOutSetPitch:PPROC
waveOutSetPitch equ <__imp_waveOutSetPitch>

externdef __imp_waveOutSetPlaybackRate:PPROC
waveOutSetPlaybackRate equ <__imp_waveOutSetPlaybackRate>

externdef __imp_waveOutSetVolume:PPROC
waveOutSetVolume equ <__imp_waveOutSetVolume>

externdef __imp_waveOutUnprepareHeader:PPROC
waveOutUnprepareHeader equ <__imp_waveOutUnprepareHeader>

externdef __imp_waveOutWrite:PPROC
waveOutWrite equ <__imp_waveOutWrite>

externdef __imp_winmmDbgOut:PPROC
winmmDbgOut equ <__imp_winmmDbgOut>

externdef __imp_winmmSetDebugLevel:PPROC
winmmSetDebugLevel equ <__imp_winmmSetDebugLevel>

externdef __imp_winmm_ordinal2:PPROC
winmm_ordinal2 equ <__imp_winmm_ordinal2>
