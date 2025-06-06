![VULKASM](https://github.com/IbrahimHindawi/masm64-vulkan/blob/main/vulkasm.png)
# vulkasm  
## Synopsis  
Pure x64 Microsoft Macro Assembler & Vulkan Game Engine to explore Assembly Programming.
## Dependencies
- [Visual Studio 2022](https://visualstudio.microsoft.com/vs/community/) for `ml64.exe` & `link.exe`
- [Vulkan SDK 1.4.313.0](https://sdk.lunarg.com/sdk/download/1.4.313.1/windows/vulkansdk-windows-X64-1.4.313.1.exe) for the vulkan-1.lib
## APIs
- [Unofficial MASM64 SDK](https://masm32.com) `.asm` found in `extern\masm64`
- Assembler compatible Vulkan headers found in `extern\vulkan`
## Build  
- Copy `extern\masm64` to `C:\`
- Launch `x64 Native Tools Command Prompt for VS 2022`
- Run `scripts\build.bat`  
- Run `build\main.exe` or `devenv build\main.exe`
## Features
- MASM64 based Arena Allocator (saha.asm)
- Translated Vulkan C headers to MASM64 (using `tools\vulkan_gen.bat`)
## Description:
### Libraries
Not using the CRT at all, just pure Assembler + Win32 + Vulkan.
### MASM64 SDK
I don't need the full SDK so I just took the `.asm` files and placed them in my project.  
They are hard coded to be in the `C:\` root so maybe this can be fixed later.  
### Vulkan
I'm using `1.4.313.0` but it should be upgradable using `vulkan-extractor.py`.
### Code Style:
#### Build Style
i went ahead and made a Unity/Jumbo build:
- everything is included inside `main.asm`
- only assembing `main.asm` is required
- modules have header guards
- modules are used to fake private but everything is global
- things dumped in main are intended to be specifically global
#### Calling Convention
- the MASM64 SDK comes with an `invoke` macro that automates the Windows x64 calling convention
- example: `void  Proc(&handle, count, NULL);` -> `invoke Proc, ADDR handle, count, 0`  
- in case of stack usage, stack MUST be aligned to `0x10` or 16 so make sure `RSP` ends with a `0` before calling a Windows or Vulkan function.
- i noticed that the `invoke` macro doesn't take care of the shadow space allocation so you have to `sub rsp, 32` then `add rsp, 32` before a function call or else crash. This is especially true if you have to call some Windows/Vulkan function multiple times in a row such as printing otherwise its fine.
#### Modular Assembler Style:
- i divided each vulkan step into its own module with each module having its own variables as I did not do any stack allocation.
- modules look like this: `ModuleDrawFrame.asm` and inside `DrawFrame_render_info` for vars and `DrawFrame_Execute` for procs.
- everything is zeroed out since everything is allocated in the `.data` section but I don't zero anything manually which might be dangerous.
- look at `ModuleTemplate.asm`
## Todo
- [x] get the Vulkan triangle
- [ ] fix `saha.asm` arena macro
- [ ] create modules for the rest of the vulkan code
- [ ] create an arena allocator for permanent storage
- [ ] clean up `vulkan-extractor.py`
- [ ] play with SIMD and game logic
##  Miscellaneous
You can regenerate the vulkan headers using python + libclang by invoking the ugly `vulkan_gen.bat` file from the `tools` directory. The generated headers are almost perfect except for a few bugs which I fixed manually. Will fully automate the process.
## x86-64 Registers Cheat Sheet
### Registers:
| 64  | 32   | 16    | 8      | name            |
|-----|------|-------|--------|-----------------|
| rax | eax  | ax    | ah/al  | accumulator     |
| rbx | ebx  | bx    | bh/bl  | base            |
| rcx | ecx  | cx    | ch/cl  | counter         |
| rdx | edx  | dx    | dh/dl  | data            |
| rsi | esi  | si    | sil    | source_idx      |
| rdi | edi  | di    | dil    | destination_idx |
| rbp | ebp  | bp    | bpl    | base_pointer    |
| rsp | esp  | sp    | spl    | stack_pointer   |
| r8  | r8d  | r8w   | r8b    | general_purpose |
| r9  | r9d  | r9w   | r9b    | general_purpose |
| r10 | r10d | r10w  | r10b   | general_purpose |
| r11 | r11d | r11w  | r11b   | general_purpose |
| r12 | r12d | r12w  | r12b   | general_purpose |
| r13 | r13d | r13w  | r13b   | general_purpose |
| r14 | r14d | r14w  | r14b   | general_purpose |
| r15 | r15d | r15w  | r15b   | general_purpose |
### ✅  Volatile vs Non-Volatile
| Type         | Registers                                          | Responsibility               |
| ------------ | ---------------------------------------------------| ---------------------------- |
| Volatile     | rax, rcx, rdx, r8,  r9,  r10, r11, rsp, xmm0–xmm5  | **Caller** must save         |
| Non-Volatile | rbx, rbp, rsi, rdi, r12, r13, r14, r15, xmm6–xmm15 | **Callee** must save/restore |
### Learning Resources:
If you are new to x86-64 Assembly I suggest:
- [masm64-init](https://github.com/IbrahimHindawi/masm64-init)
- [The Art of 64-Bit Assembly, Volume 1: x86-64 Machine Organization and Programming](https://nostarch.com/art-64-bit-assembly-volume-1)
- [Assembly x64 Programming in easy steps](https://ineasysteps.com/products-page/assembly-x64-programming-in-easy-steps/)
