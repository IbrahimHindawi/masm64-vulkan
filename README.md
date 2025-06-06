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
