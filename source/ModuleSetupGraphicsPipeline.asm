;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
; ModuleSetupGraphicsPipeline
;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
ifndef ModuleSetupGraphicsPipelineHeaderGuard
ModuleSetupGraphicsPipelineHeaderGuard = 0

;---------------------------------------------------------------------------------------------------
;macro
;---------------------------------------------------------------------------------------------------

;---------------------------------------------------------------------------------------------------
.const
;---------------------------------------------------------------------------------------------------
shader_entry_point_name byte "main", 0

;---------------------------------------------------------------------------------------------------
.data
;---------------------------------------------------------------------------------------------------
; VkPipelineShaderStageCreateInfo shader_stages[] = {
;  vert_shader_stage_info, frag_shader_stage_info
; };
SetupGraphicsPipeline_vert_shader_stage_info VkPipelineShaderStageCreateInfo <>
SetupGraphicsPipeline_frag_shader_stage_info VkPipelineShaderStageCreateInfo <>
SetupGraphicsPipeline_shader_stages qword offset SetupGraphicsPipeline_vert_shader_stage_info
                                    qword offset SetupGraphicsPipeline_frag_shader_stage_info
SetupGraphicsPipeline_shader_stages_end:
SetupGraphicsPipeline_shader_stages_count = (SetupGraphicsPipeline_shader_stages_end - SetupGraphicsPipeline_shader_stages) / sizeof qword

; SetupGraphicsPipeline_dynamic_states VkDynamicStates <>
; VkDynamicState dynamic_states[] = { 
;  VK_DYNAMIC_STATE_VIEWPORT, VK_DYNAMIC_STATE_SCISSOR
; };
SetupGraphicsPipeline_dynamic_state_0 VkDynamicState VK_DYNAMIC_STATE_VIEWPORT
SetupGraphicsPipeline_dynamic_state_1 VkDynamicState VK_DYNAMIC_STATE_SCISSOR
SetupGraphicsPipeline_dynamic_states qword offset SetupGraphicsPipeline_dynamic_state_0
                                     qword offset SetupGraphicsPipeline_dynamic_state_1
SetupGraphicsPipeline_dynamic_states_end:
SetupGraphicsPipeline_dynamic_states_count = (SetupGraphicsPipeline_dynamic_states_end - SetupGraphicsPipeline_dynamic_states) / sizeof qword

align 8
SetupGraphicsPipeline_shader_module VkShaderModule ?
SetupGraphicsPipeline_vert_shader_module VkShaderModule ?
SetupGraphicsPipeline_frag_shader_module VkShaderModule ?
SetupGraphicsPipeline_vertex_input_info VkPipelineVertexInputStateCreateInfo <>
SetupGraphicsPipeline_input_assembly  VkPipelineInputAssemblyStateCreateInfo <>
SetupGraphicsPipeline_viewport_state VkPipelineViewportStateCreateInfo <>
SetupGraphicsPipeline_rasterizer VkPipelineRasterizationStateCreateInfo <>
SetupGraphicsPipeline_multisampling VkPipelineMultisampleStateCreateInfo <>
SetupGraphicsPipeline_color_blend_attachment VkPipelineColorBlendAttachmentState <>
SetupGraphicsPipeline_color_blending VkPipelineColorBlendStateCreateInfo <>
SetupGraphicsPipeline_dynamic_state VkPipelineDynamicStateCreateInfo <>
SetupGraphicsPipeline_pipeline_layout_info VkPipelineLayoutCreateInfo <>
SetupGraphicsPipeline_pipeline_info  VkGraphicsPipelineCreateInfo <>
; this is proc local, I could allocate it on the stack...
SetupGraphicsPipeline_create_info VkShaderModuleCreateInfo <>

;---------------------------------------------------------------------------------------------------
.code
;---------------------------------------------------------------------------------------------------
align 16
SetupGraphicsPipeline_CreateShaderModule proc; rcx:qword:file_handle, rdx:qword:file_size
    procPrologue
    ;---
    mov SetupGraphicsPipeline_create_info.pCode, rcx
    mov SetupGraphicsPipeline_create_info._sType, VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO
    mov rcx, FileOps_file_size.LARGE_INTEGER.QuadPart
    mov SetupGraphicsPipeline_create_info.codeSize, rcx
    invoke vkCreateShaderModule, qword ptr g_logical_device, ADDR SetupGraphicsPipeline_create_info, 0, ADDR SetupGraphicsPipeline_shader_module
    AssertEq rax, VK_SUCCESS
    ;---
    procEpilogue
    ret
SetupGraphicsPipeline_CreateShaderModule endp

SetupGraphicsPipeline_CreateShaderModuleMacro macro basename:req; rcx:qword:file_handle, rdx:qword:file_size
    mov SetupGraphicsPipeline_create_info.pCode, rcx
    mov SetupGraphicsPipeline_create_info._sType, VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO
    mov rcx, FileOps_file_size.LARGE_INTEGER.QuadPart
    mov SetupGraphicsPipeline_create_info.codeSize, rcx
    invoke vkCreateShaderModule, qword ptr g_logical_device, ADDR SetupGraphicsPipeline_create_info, 0, ADDR SetupGraphicsPipeline_&basename
    AssertEq rax, VK_SUCCESS
endm

align 16
SetupGraphicsPipeline_Execute proc
    procPrologue
    ;---
    arenaGetPos arena, qword ptr pos
        invoke FileOps_ReadBinary, ADDR vert_shader_path
        mov rcx, rax
        ; invoke SetupGraphicsPipeline_CreateShaderModule
        SetupGraphicsPipeline_CreateShaderModuleMacro vert_shader_module
    invoke arenaSetPos, ADDR arena, qword ptr pos
    arenaGetPos arena, qword ptr pos
        invoke FileOps_ReadBinary, ADDR frag_shader_path
        mov rcx, rax
        ; invoke SetupGraphicsPipeline_CreateShaderModule
        SetupGraphicsPipeline_CreateShaderModuleMacro frag_shader_module
    invoke arenaSetPos, ADDR arena, qword ptr pos

    mov SetupGraphicsPipeline_vert_shader_stage_info._sType, VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO
    mov SetupGraphicsPipeline_vert_shader_stage_info.stage, VK_SHADER_STAGE_VERTEX_BIT
    mov rax, SetupGraphicsPipeline_vert_shader_module
    mov SetupGraphicsPipeline_vert_shader_stage_info.module, rax
    lea  rax, shader_entry_point_name 
    mov SetupGraphicsPipeline_vert_shader_stage_info.pName, rax

    mov SetupGraphicsPipeline_frag_shader_stage_info._sType, VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO
    mov SetupGraphicsPipeline_frag_shader_stage_info.stage, VK_SHADER_STAGE_FRAGMENT_BIT
    mov rax, SetupGraphicsPipeline_frag_shader_module
    mov SetupGraphicsPipeline_frag_shader_stage_info.module, rax
    lea  rax, shader_entry_point_name 
    mov SetupGraphicsPipeline_frag_shader_stage_info.pName, rax

    mov SetupGraphicsPipeline_vertex_input_info._sType, VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO
    mov SetupGraphicsPipeline_vertex_input_info.vertexBindingDescriptionCount, 0
    mov SetupGraphicsPipeline_vertex_input_info.vertexAttributeDescriptionCount, 0

    mov SetupGraphicsPipeline_input_assembly._sType, VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO
    mov SetupGraphicsPipeline_input_assembly.topology, VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST
    mov SetupGraphicsPipeline_input_assembly.primitiveRestartEnable, 0; VK_FALSE

    mov SetupGraphicsPipeline_viewport_state._sType, VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO
    mov SetupGraphicsPipeline_viewport_state.viewportCount, 1
    mov SetupGraphicsPipeline_viewport_state.scissorCount, 1

    mov SetupGraphicsPipeline_rasterizer._sType, VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO
    mov SetupGraphicsPipeline_rasterizer.depthClampEnable, 0; VK_FALSE
    mov SetupGraphicsPipeline_rasterizer.rasterizerDiscardEnable, 0; VK_FALSE
    mov SetupGraphicsPipeline_rasterizer.polygonMode, VK_POLYGON_MODE_FILL
    mov SetupGraphicsPipeline_rasterizer.lineWidth, 03F800000h
    mov SetupGraphicsPipeline_rasterizer.cullMode, VK_CULL_MODE_BACK_BIT
    mov SetupGraphicsPipeline_rasterizer.frontFace, VK_FRONT_FACE_CLOCKWISE
    mov SetupGraphicsPipeline_rasterizer.depthBiasEnable, 0; VK_FALSE

    mov SetupGraphicsPipeline_multisampling._sType, VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO;
    mov SetupGraphicsPipeline_multisampling.sampleShadingEnable, 0; VK_FALSE
    mov SetupGraphicsPipeline_multisampling.rasterizationSamples, VK_SAMPLE_COUNT_1_BIT

    mov SetupGraphicsPipeline_color_blend_attachment.colorWriteMask, VK_COLOR_COMPONENT_R_BIT or VK_COLOR_COMPONENT_G_BIT or VK_COLOR_COMPONENT_B_BIT or VK_COLOR_COMPONENT_A_BIT
    mov SetupGraphicsPipeline_color_blend_attachment.blendEnable, 0

    mov SetupGraphicsPipeline_color_blending._sType, VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO;
    mov SetupGraphicsPipeline_color_blending.logicOpEnable, 0; VK_FALSE
    mov SetupGraphicsPipeline_color_blending.logicOp, VK_LOGIC_OP_COPY;
    mov SetupGraphicsPipeline_color_blending.attachmentCount, 1;
    lea rax, SetupGraphicsPipeline_color_blend_attachment
    mov SetupGraphicsPipeline_color_blending.pAttachments, rax;
    ; mov dword ptr SetupGraphicsPipeline_color_blending.VkPipelineColorBlendStateCreateInfo.blendConstants + sizeof dword * 0, 0
    ; mov dword ptr SetupGraphicsPipeline_color_blending.VkPipelineColorBlendStateCreateInfo.blendConstants + sizeof dword * 1, 0
    ; mov dword ptr SetupGraphicsPipeline_color_blending.VkPipelineColorBlendStateCreateInfo.blendConstants + sizeof dword * 2, 0
    ; mov dword ptr SetupGraphicsPipeline_color_blending.VkPipelineColorBlendStateCreateInfo.blendConstants + sizeof dword * 3, 0
    ; this compiled wtf?
    ; mov SetupGraphicsPipeline_color_blending.blendConstants[0], 0;
    ; mov SetupGraphicsPipeline_color_blending.blendConstants[1], 0;
    ; mov SetupGraphicsPipeline_color_blending.blendConstants[2], 0;
    ; mov SetupGraphicsPipeline_color_blending.blendConstants[3], 0;

    mov SetupGraphicsPipeline_dynamic_state._sType, VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO
    mov SetupGraphicsPipeline_dynamic_state.dynamicStateCount, SetupGraphicsPipeline_dynamic_states_count
    ; danger, i might have  messed this up, gets me everytime
    mov rax, SetupGraphicsPipeline_dynamic_states
    mov SetupGraphicsPipeline_dynamic_state.pDynamicStates, rax

    mov SetupGraphicsPipeline_pipeline_layout_info._sType, VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO
    mov SetupGraphicsPipeline_pipeline_layout_info.setLayoutCount, 0
    mov SetupGraphicsPipeline_pipeline_layout_info.pushConstantRangeCount, 0

    invoke vkCreatePipelineLayout, qword ptr g_logical_device, ADDR SetupGraphicsPipeline_pipeline_layout_info, 0, ADDR qword ptr g_pipeline_layout
    AssertEq rax, VK_SUCCESS

    mov SetupGraphicsPipeline_pipeline_info._sType, VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO;
    mov SetupGraphicsPipeline_pipeline_info.stageCount, 2;

    mov rax, SetupGraphicsPipeline_shader_stages;
    mov SetupGraphicsPipeline_pipeline_info.pStages, rax

    lea rax, SetupGraphicsPipeline_vertex_input_info
    mov SetupGraphicsPipeline_pipeline_info.pVertexInputState, rax;

    lea rax, SetupGraphicsPipeline_input_assembly
    mov SetupGraphicsPipeline_pipeline_info.pInputAssemblyState, rax

    lea rax, SetupGraphicsPipeline_viewport_state
    mov SetupGraphicsPipeline_pipeline_info.pViewportState, rax

    lea rax, SetupGraphicsPipeline_rasterizer
    mov SetupGraphicsPipeline_pipeline_info.pRasterizationState, rax

    lea rax, SetupGraphicsPipeline_multisampling
    mov SetupGraphicsPipeline_pipeline_info.pMultisampleState, rax

    lea rax, SetupGraphicsPipeline_color_blending
    mov SetupGraphicsPipeline_pipeline_info.pColorBlendState, rax

    lea rax, SetupGraphicsPipeline_dynamic_state
    mov SetupGraphicsPipeline_pipeline_info.pDynamicState, rax

    mov rax, g_pipeline_layout
    mov SetupGraphicsPipeline_pipeline_info.layout, rax

    mov rax, g_render_pass
    mov SetupGraphicsPipeline_pipeline_info.renderPass, rax

    mov SetupGraphicsPipeline_pipeline_info.subpass, 0;
    mov SetupGraphicsPipeline_pipeline_info.basePipelineHandle, 0; VK_NULL_HANDLE

    invoke vkCreateGraphicsPipelines, qword ptr g_logical_device, 0, 1, ADDR SetupGraphicsPipeline_pipeline_info, 0, ADDR qword ptr g_graphics_pipeline
    AssertEq rax, VK_SUCCESS


    ;---
    procEpilogue
    ret
SetupGraphicsPipeline_Execute endp
endif
