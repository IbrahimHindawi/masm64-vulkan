![VULKASM](https://github.com/IbrahimHindawi/masm64-vulkan/blob/main/vulkasm.png)
# vulkasm  
## Synopsis  
Pure x64 Microsoft Macro Assembler & Vulkan Game Engine to explore Assembly Programming.
## Dependencies
- [Visual Studio 2022](https://visualstudio.microsoft.com/vs/community/) for `ml64.exe` & `link.exe`
- [Vulkan SDK 1.4.313.0](https://sdk.lunarg.com/sdk/download/1.4.313.1/windows/vulkansdk-windows-X64-1.4.313.1.exe)
- [Unofficial MASM64 SDK](https://masm32.com) `.asm` files placed in `extern`
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
I'm using 1.4.313.0 but it should be upgradable using `vulkan-extractor.py`.
## Todo
- [ ] clean up `vulkan-extractor.py`
- [ ] get the Vulkan triangle
- [ ] play with SIMD and game logic
