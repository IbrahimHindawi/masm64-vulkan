;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
; SetupRenderPassModule
;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
ifndef SetupRenderPassModuleHeaderGuard
SetupRenderPassModuleHeaderGuard = 0

;---------------------------------------------------------------------------------------------------
.data
;---------------------------------------------------------------------------------------------------
align 4
SetupRenderPass_color_attachment VkAttachmentDescription <>
align 4
SetupRenderPass_color_attachment_ref VkAttachmentReference <>
align 4
SetupRenderPass_dependency VkSubpassDependency <>
align 8
SetupRenderPass_subpass VkSubpassDescription <>
align 8
SetupRenderPass_render_pass_info VkRenderPassCreateInfo <>

;---------------------------------------------------------------------------------------------------
.code
;---------------------------------------------------------------------------------------------------
align 16
SetupRenderPass_Execute proc
    procPrologue
    ;---
    ; these structs are all happily zeroed out by the assembler
    ; it is also a one shot and nothing gets conditionally set
    ; so we can just write once and call the Vulkan API (=
    mov eax, g_swapchain_image_format;
    mov SetupRenderPass_color_attachment.VkAttachmentDescription.format, eax;
    mov SetupRenderPass_color_attachment.VkAttachmentDescription.samples, VK_SAMPLE_COUNT_1_BIT;
    mov SetupRenderPass_color_attachment.VkAttachmentDescription.loadOp, VK_ATTACHMENT_LOAD_OP_CLEAR;
    mov SetupRenderPass_color_attachment.VkAttachmentDescription.storeOp, VK_ATTACHMENT_STORE_OP_STORE;
    mov SetupRenderPass_color_attachment.VkAttachmentDescription.stencilLoadOp, VK_ATTACHMENT_LOAD_OP_DONT_CARE;
    mov SetupRenderPass_color_attachment.VkAttachmentDescription.stencilStoreOp, VK_ATTACHMENT_STORE_OP_DONT_CARE;
    mov SetupRenderPass_color_attachment.VkAttachmentDescription.initialLayout, VK_IMAGE_LAYOUT_UNDEFINED;
    mov SetupRenderPass_color_attachment.VkAttachmentDescription.finalLayout, VK_IMAGE_LAYOUT_PRESENT_SRC_KHR;

    mov SetupRenderPass_color_attachment_ref.VkAttachmentReference.attachment, 0;
    mov SetupRenderPass_color_attachment_ref.VkAttachmentReference.layout, VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;

    mov SetupRenderPass_subpass.VkSubpassDescription.pipelineBindPoint, VK_PIPELINE_BIND_POINT_GRAPHICS;
    mov SetupRenderPass_subpass.VkSubpassDescription.colorAttachmentCount, 1;
    lea rax, SetupRenderPass_color_attachment_ref
    mov SetupRenderPass_subpass.VkSubpassDescription.pColorAttachments, rax;

    mov SetupRenderPass_dependency.VkSubpassDependency.srcSubpass, 0FFFFFFFFh; VK_SUBPASS_EXTERNAL;
    mov SetupRenderPass_dependency.VkSubpassDependency.dstSubpass, 0;
    mov SetupRenderPass_dependency.VkSubpassDependency.srcStageMask, VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT;
    mov SetupRenderPass_dependency.VkSubpassDependency.srcAccessMask, 0;
    mov SetupRenderPass_dependency.VkSubpassDependency.dstStageMask, VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT;
    mov SetupRenderPass_dependency.VkSubpassDependency.dstAccessMask, VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT;

    mov SetupRenderPass_render_pass_info.VkRenderPassCreateInfo._sType, VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO;
    mov SetupRenderPass_render_pass_info.VkRenderPassCreateInfo.attachmentCount, 1;
    lea rax, SetupRenderPass_color_attachment
    mov SetupRenderPass_render_pass_info.VkRenderPassCreateInfo.pAttachments, rax;
    mov SetupRenderPass_render_pass_info.VkRenderPassCreateInfo.subpassCount, 1;
    lea rax, SetupRenderPass_subpass
    mov SetupRenderPass_render_pass_info.VkRenderPassCreateInfo.pSubpasses, rax;
    mov SetupRenderPass_render_pass_info.VkRenderPassCreateInfo.dependencyCount, 1;
    lea rax, SetupRenderPass_dependency
    mov SetupRenderPass_render_pass_info.VkRenderPassCreateInfo.pDependencies, rax;

    invoke vkCreateRenderPass, qword ptr g_logical_device, ADDR SetupRenderPass_render_pass_info, 0, ADDR g_render_pass
    ;---
    procEpilogue
    ret
SetupRenderPass_Execute endp
endif
