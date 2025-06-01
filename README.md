# masm64-vulkan  
## Synopsis  
Pure x64 Microsoft Macro Assembler & Vulkan Game Engine to explore Assembly Programming.
## Dependencies
- msbuild for `ml64.exe` & `link.exe`
- Vulkan SDK 1.3.283.0
- [Unofficial MASM64 SDK](https://masm32.com) `.asm` files placed in `extern`
## MASM64 & Vulkan:  
- Launch command line with x64 Native Tools Command Prompt.  
- Copy `extern\masm64` to `C:\`
- Run `scripts\build.bat`  
## Features
- Arena Allocator (saha.asm)
- Translated Vulkan headers (using `tools\vulkan_gen.bat`)
## Description:
### Libraries
Not using the CRT at all, just pure Assembler, Win32 & Vulkan.
### MASM64 SDK
I don't need the full SDK so I just took the `.asm` files and placed them in my project.  
They are hard coded to be in the `C:\` root so maybe this can be fixed later.  
### Vulkan
I'm using 1.3.283.0 but it should be upgradable using `vulkan-extractor.py`.
