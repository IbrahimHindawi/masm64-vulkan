; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 winshell proc lpfilename:QWORD,process_priority:QWORD

    LOCAL xc    :QWORD          ; exit code
    LOCAL cth   :QWORD          ; current thread handle
    LOCAL cpr   :QWORD          ; current priority status
    LOCAL st_info:STARTUPINFO
    LOCAL pr_info:PROCESS_INFORMATION

    invoke zerofill,ADDR st_info,104

    mov st_info.cb, 24          ; set the structure size member

    invoke CreateProcess,NULL,lpfilename,NULL,NULL, \
                         NULL,NULL,NULL,NULL, \
                         ADDR st_info, \
                         ADDR pr_info

    invoke SetPriorityClass,pr_info.hProcess,process_priority

    mov cth, rv(GetCurrentThread)
    mov cpr, rv(GetThreadPriority,cth)
    invoke SetThreadPriority,cth,THREAD_PRIORITY_IDLE

  ; -------------------------------------------
  ; loop while created process is still active
  ; -------------------------------------------
  @@:
    invoke GetExitCodeProcess,pr_info.hProcess,ADDR xc
    invoke SleepEx, 1, 0
    cmp xc, STILL_ACTIVE
    je @B

    invoke SetThreadPriority,cth,cpr

    invoke CloseHandle, pr_info.hThread
    invoke CloseHandle, pr_info.hProcess

    ret

 winshell endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
