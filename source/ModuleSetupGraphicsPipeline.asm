;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
; ModuleSetupGraphicsPipeline
;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
ifndef ModuleSetupGraphicsPipelineHeaderGuard
ModuleSetupGraphicsPipelineHeaderGuard = 0

;---------------------------------------------------------------------------------------------------
.data
;---------------------------------------------------------------------------------------------------
SetupGraphicsPipeline_shader_module VkShaderModule ?
SetupGraphicsPipeline_create_info VkShaderModuleCreateInfo <>

;---------------------------------------------------------------------------------------------------
.code
;---------------------------------------------------------------------------------------------------
align 16
SetupGraphicsPipeline_CreateShaderModule proc; rcx:qword:file_handle; rdx:qword:file_size
    procPrologue
    ;---
    mov SetupGraphicsPipeline_create_info.pCode, rax
    mov SetupGraphicsPipeline_create_info._sType, VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO
    mov rax, FileOps_file_size.LARGE_INTEGER.QuadPart
    mov SetupGraphicsPipeline_create_info.codeSize, rax
    invoke vkCreateShaderModule, qword ptr g_logical_device, ADDR SetupGraphicsPipeline_create_info, 0, ADDR SetupGraphicsPipeline_shader_module
    AssertEq rax, VK_SUCCESS
    ;---
    procEpilogue
    ret
SetupGraphicsPipeline_CreateShaderModule endp

align 16
SetupGraphicsPipeline_Execute proc
    procPrologue
    ;---
    arenaGetPos arena, qword ptr pos
    invoke FileOps_ReadBinary, ADDR shader_vert_path
    mov rcx, rax
    invoke SetupGraphicsPipeline_CreateShaderModule
    invoke arenaSetPos, ADDR arena, qword ptr pos
    ;---
    procEpilogue
    ret
SetupGraphicsPipeline_Execute endp
endif
