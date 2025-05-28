:: ugly but works
set filename=vulkan_win32
python vulkan-extractor.py vk_wrapper.c %filename%.h > %filename%.tmp && python paragraph_remove.py %filename%.tmp > %filename%.asm && copy /Y %filename%.asm ..\source

set filename2=vulkan_core
python vulkan-extractor.py vk_wrapper.c %filename2%.h > %filename2%.tmp && python paragraph_remove.py %filename2%.tmp > %filename2%.asm && copy /Y %filename2%.asm ..\source
