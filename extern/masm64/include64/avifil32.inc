externdef __imp_AVIBuildFilter:PPROC
AVIBuildFilter equ <__imp_AVIBuildFilter>

externdef __imp_AVIBuildFilterA:PPROC
AVIBuildFilterA equ <__imp_AVIBuildFilterA>
  IFNDEF __UNICODE__
    AVIBuildFilter equ <__imp_AVIBuildFilterA>
  ENDIF

externdef __imp_AVIBuildFilterW:PPROC
AVIBuildFilterW equ <__imp_AVIBuildFilterW>
  IFDEF __UNICODE__
    AVIBuildFilter equ <__imp_AVIBuildFilterW>
  ENDIF

externdef __imp_AVIClearClipboard:PPROC
AVIClearClipboard equ <__imp_AVIClearClipboard>

externdef __imp_AVIFileAddRef:PPROC
AVIFileAddRef equ <__imp_AVIFileAddRef>

externdef __imp_AVIFileCreateStream:PPROC
AVIFileCreateStream equ <__imp_AVIFileCreateStream>

externdef __imp_AVIFileCreateStreamA:PPROC
AVIFileCreateStreamA equ <__imp_AVIFileCreateStreamA>
  IFNDEF __UNICODE__
    AVIFileCreateStream equ <__imp_AVIFileCreateStreamA>
  ENDIF

externdef __imp_AVIFileCreateStreamW:PPROC
AVIFileCreateStreamW equ <__imp_AVIFileCreateStreamW>
  IFDEF __UNICODE__
    AVIFileCreateStream equ <__imp_AVIFileCreateStreamW>
  ENDIF

externdef __imp_AVIFileEndRecord:PPROC
AVIFileEndRecord equ <__imp_AVIFileEndRecord>

externdef __imp_AVIFileExit:PPROC
AVIFileExit equ <__imp_AVIFileExit>

externdef __imp_AVIFileGetStream:PPROC
AVIFileGetStream equ <__imp_AVIFileGetStream>

externdef __imp_AVIFileInfo:PPROC
AVIFileInfo equ <__imp_AVIFileInfo>

externdef __imp_AVIFileInfoA:PPROC
AVIFileInfoA equ <__imp_AVIFileInfoA>
  IFNDEF __UNICODE__
    AVIFileInfo equ <__imp_AVIFileInfoA>
  ENDIF

externdef __imp_AVIFileInfoW:PPROC
AVIFileInfoW equ <__imp_AVIFileInfoW>
  IFDEF __UNICODE__
    AVIFileInfo equ <__imp_AVIFileInfoW>
  ENDIF

externdef __imp_AVIFileInit:PPROC
AVIFileInit equ <__imp_AVIFileInit>

externdef __imp_AVIFileOpen:PPROC
AVIFileOpen equ <__imp_AVIFileOpen>

externdef __imp_AVIFileOpenA:PPROC
AVIFileOpenA equ <__imp_AVIFileOpenA>
  IFNDEF __UNICODE__
    AVIFileOpen equ <__imp_AVIFileOpenA>
  ENDIF

externdef __imp_AVIFileOpenW:PPROC
AVIFileOpenW equ <__imp_AVIFileOpenW>
  IFDEF __UNICODE__
    AVIFileOpen equ <__imp_AVIFileOpenW>
  ENDIF

externdef __imp_AVIFileReadData:PPROC
AVIFileReadData equ <__imp_AVIFileReadData>

externdef __imp_AVIFileRelease:PPROC
AVIFileRelease equ <__imp_AVIFileRelease>

externdef __imp_AVIFileWriteData:PPROC
AVIFileWriteData equ <__imp_AVIFileWriteData>

externdef __imp_AVIGetFromClipboard:PPROC
AVIGetFromClipboard equ <__imp_AVIGetFromClipboard>

externdef __imp_AVIMakeCompressedStream:PPROC
AVIMakeCompressedStream equ <__imp_AVIMakeCompressedStream>

externdef __imp_AVIMakeFileFromStreams:PPROC
AVIMakeFileFromStreams equ <__imp_AVIMakeFileFromStreams>

externdef __imp_AVIMakeStreamFromClipboard:PPROC
AVIMakeStreamFromClipboard equ <__imp_AVIMakeStreamFromClipboard>

externdef __imp_AVIPutFileOnClipboard:PPROC
AVIPutFileOnClipboard equ <__imp_AVIPutFileOnClipboard>

externdef __imp_AVISave:PPROC
AVISave equ <__imp_AVISave>

externdef __imp_AVISaveA:PPROC
AVISaveA equ <__imp_AVISaveA>
  IFNDEF __UNICODE__
    AVISave equ <__imp_AVISaveA>
  ENDIF

externdef __imp_AVISaveOptions:PPROC
AVISaveOptions equ <__imp_AVISaveOptions>

externdef __imp_AVISaveOptionsFree:PPROC
AVISaveOptionsFree equ <__imp_AVISaveOptionsFree>

externdef __imp_AVISaveV:PPROC
AVISaveV equ <__imp_AVISaveV>

externdef __imp_AVISaveVA:PPROC
AVISaveVA equ <__imp_AVISaveVA>
  IFNDEF __UNICODE__
    AVISaveV equ <__imp_AVISaveVA>
  ENDIF

externdef __imp_AVISaveVW:PPROC
AVISaveVW equ <__imp_AVISaveVW>
  IFDEF __UNICODE__
    AVISaveV equ <__imp_AVISaveVW>
  ENDIF

externdef __imp_AVISaveW:PPROC
AVISaveW equ <__imp_AVISaveW>
  IFDEF __UNICODE__
    AVISave equ <__imp_AVISaveW>
  ENDIF

externdef __imp_AVIStreamAddRef:PPROC
AVIStreamAddRef equ <__imp_AVIStreamAddRef>

externdef __imp_AVIStreamBeginStreaming:PPROC
AVIStreamBeginStreaming equ <__imp_AVIStreamBeginStreaming>

externdef __imp_AVIStreamCreate:PPROC
AVIStreamCreate equ <__imp_AVIStreamCreate>

externdef __imp_AVIStreamEndStreaming:PPROC
AVIStreamEndStreaming equ <__imp_AVIStreamEndStreaming>

externdef __imp_AVIStreamFindSample:PPROC
AVIStreamFindSample equ <__imp_AVIStreamFindSample>

externdef __imp_AVIStreamGetFrame:PPROC
AVIStreamGetFrame equ <__imp_AVIStreamGetFrame>

externdef __imp_AVIStreamGetFrameClose:PPROC
AVIStreamGetFrameClose equ <__imp_AVIStreamGetFrameClose>

externdef __imp_AVIStreamGetFrameOpen:PPROC
AVIStreamGetFrameOpen equ <__imp_AVIStreamGetFrameOpen>

externdef __imp_AVIStreamInfo:PPROC
AVIStreamInfo equ <__imp_AVIStreamInfo>

externdef __imp_AVIStreamInfoA:PPROC
AVIStreamInfoA equ <__imp_AVIStreamInfoA>
  IFNDEF __UNICODE__
    AVIStreamInfo equ <__imp_AVIStreamInfoA>
  ENDIF

externdef __imp_AVIStreamInfoW:PPROC
AVIStreamInfoW equ <__imp_AVIStreamInfoW>
  IFDEF __UNICODE__
    AVIStreamInfo equ <__imp_AVIStreamInfoW>
  ENDIF

externdef __imp_AVIStreamLength:PPROC
AVIStreamLength equ <__imp_AVIStreamLength>

externdef __imp_AVIStreamOpenFromFile:PPROC
AVIStreamOpenFromFile equ <__imp_AVIStreamOpenFromFile>

externdef __imp_AVIStreamOpenFromFileA:PPROC
AVIStreamOpenFromFileA equ <__imp_AVIStreamOpenFromFileA>
  IFNDEF __UNICODE__
    AVIStreamOpenFromFile equ <__imp_AVIStreamOpenFromFileA>
  ENDIF

externdef __imp_AVIStreamOpenFromFileW:PPROC
AVIStreamOpenFromFileW equ <__imp_AVIStreamOpenFromFileW>
  IFDEF __UNICODE__
    AVIStreamOpenFromFile equ <__imp_AVIStreamOpenFromFileW>
  ENDIF

externdef __imp_AVIStreamRead:PPROC
AVIStreamRead equ <__imp_AVIStreamRead>

externdef __imp_AVIStreamReadData:PPROC
AVIStreamReadData equ <__imp_AVIStreamReadData>

externdef __imp_AVIStreamReadFormat:PPROC
AVIStreamReadFormat equ <__imp_AVIStreamReadFormat>

externdef __imp_AVIStreamRelease:PPROC
AVIStreamRelease equ <__imp_AVIStreamRelease>

externdef __imp_AVIStreamSampleToTime:PPROC
AVIStreamSampleToTime equ <__imp_AVIStreamSampleToTime>

externdef __imp_AVIStreamSetFormat:PPROC
AVIStreamSetFormat equ <__imp_AVIStreamSetFormat>

externdef __imp_AVIStreamStart:PPROC
AVIStreamStart equ <__imp_AVIStreamStart>

externdef __imp_AVIStreamTimeToSample:PPROC
AVIStreamTimeToSample equ <__imp_AVIStreamTimeToSample>

externdef __imp_AVIStreamWrite:PPROC
AVIStreamWrite equ <__imp_AVIStreamWrite>

externdef __imp_AVIStreamWriteData:PPROC
AVIStreamWriteData equ <__imp_AVIStreamWriteData>

externdef __imp_CreateEditableStream:PPROC
CreateEditableStream equ <__imp_CreateEditableStream>

externdef __imp_DllCanUnloadNow:PPROC
DllCanUnloadNow equ <__imp_DllCanUnloadNow>

externdef __imp_DllGetClassObject:PPROC
DllGetClassObject equ <__imp_DllGetClassObject>

externdef __imp_EditStreamClone:PPROC
EditStreamClone equ <__imp_EditStreamClone>

externdef __imp_EditStreamCopy:PPROC
EditStreamCopy equ <__imp_EditStreamCopy>

externdef __imp_EditStreamCut:PPROC
EditStreamCut equ <__imp_EditStreamCut>

externdef __imp_EditStreamPaste:PPROC
EditStreamPaste equ <__imp_EditStreamPaste>

externdef __imp_EditStreamSetInfo:PPROC
EditStreamSetInfo equ <__imp_EditStreamSetInfo>

externdef __imp_EditStreamSetInfoA:PPROC
EditStreamSetInfoA equ <__imp_EditStreamSetInfoA>
  IFNDEF __UNICODE__
    EditStreamSetInfo equ <__imp_EditStreamSetInfoA>
  ENDIF

externdef __imp_EditStreamSetInfoW:PPROC
EditStreamSetInfoW equ <__imp_EditStreamSetInfoW>
  IFDEF __UNICODE__
    EditStreamSetInfo equ <__imp_EditStreamSetInfoW>
  ENDIF

externdef __imp_EditStreamSetName:PPROC
EditStreamSetName equ <__imp_EditStreamSetName>

externdef __imp_EditStreamSetNameA:PPROC
EditStreamSetNameA equ <__imp_EditStreamSetNameA>
  IFNDEF __UNICODE__
    EditStreamSetName equ <__imp_EditStreamSetNameA>
  ENDIF

externdef __imp_EditStreamSetNameW:PPROC
EditStreamSetNameW equ <__imp_EditStreamSetNameW>
  IFDEF __UNICODE__
    EditStreamSetName equ <__imp_EditStreamSetNameW>
  ENDIF

externdef __imp_IID_IAVIEditStream:PPROC
IID_IAVIEditStream equ <__imp_IID_IAVIEditStream>

externdef __imp_IID_IAVIFile:PPROC
IID_IAVIFile equ <__imp_IID_IAVIFile>

externdef __imp_IID_IAVIStream:PPROC
IID_IAVIStream equ <__imp_IID_IAVIStream>

externdef __imp_IID_IGetFrame:PPROC
IID_IGetFrame equ <__imp_IID_IGetFrame>
