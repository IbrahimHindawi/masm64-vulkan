;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
;           MASM64 Vulkan
;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
option casemap:none
StdOutHandle equ -11
include masm64rt.inc
include saha.asm
include macros.asm

include vulkan_core.asm
include vulkan_win32.asm
; include vulkan_procs.asm
; include vkenums.asm

;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
; types
;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
pointer typedef qword
VkInstance typedef qword
VkSurfaceKHR typedef qword

Payload struct
    tag qword ?
    id byte ?
Payload ends

vec3 struct
    x real4 ?
    y real4 ?
    z real4 ?
vec3 ends

QueueFamilyIndices struct
    graphicsFamily dword ?
    presentFamily dword ?
QueueFamilyIndices ends

;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
; macros
;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
DebugPrint macro Message:req
    lea rcx, Message
    call OutputDebugString
endm

VK_MAKE_API_VERSION macro name:req, variant:req, major:req, minor:req, patch:req
    name equ (((variant shl 29) or (major shl 22) or (minor shl 12) or patch))
endm

ExtensionValidationCheck macro i:req
    ; local loop_extension_validation_layer_find, extension_validation_label_not_found
    mov rsi, extensions_available
    xor rcx, rcx
    mov r8, sizeof VkExtensionProperties
    mov r9, extension_string_array + 8 * i
    loop_extension_validation_layer_find_&i&:
        push rcx
        push rdx
        push r8
        lea rcx, [rsi.VkExtensionProperties.extensionName]
        mov rdx, r9
        call strcmp64
        cmp rax, 0
        jne extension_validation_label_not_found_&i&
        add found_extensions, 1
        lea r9, extension_string_array + 8 * i
        extension_validation_label_not_found_&i&:
        pop r8
        pop rdx
        pop rcx
        add rsi, r8
        inc rcx
        cmp rcx, extension_count
        jl loop_extension_validation_layer_find_&i&
endm
;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
.const
;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
alignofqword equ sizeof qword
alignofdword equ sizeof dword
alignofword equ sizeof word
alignofbyte equ sizeof byte

outputmessage byte 'MASM64Vulkan'
              byte 0ah, 0dh
              byte 'Game Engine Initialize'
              byte 0ah, 0dh
outputmessagelength equ $ - outputmessage

window_class_name byte "MASM64HandmadeWindowClass", 0
window_title byte "MASM64Handmade", 0
application_name byte "MASM64Vulkan", 0

VK_MAKE_API_VERSION application_api_version, 0, 1, 1, 0

;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
.data
;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
pos qword ?
paint_phrase byte "I must Paint now!", 0ah, 0dh, 0
close_phrase byte "I must Close now!", 0ah, 0dh, 0
vulkan_phrase byte "Vulkan Validation Layer: ", 0
new_line byte ".", 0ah, 0
align 16
window_instance qword ?
nShowCmd sdword 10
align 16
window_class WNDCLASSEX <>
align 16
window_handle HWND ?
align 16
message MSG <>
message_result byte ?
found_validation byte ?

align 16
vulkan_module HMODULE ?
; instance
;---------------------------------------------------------------------------------------------------
align 16
context_instance VkInstance ?
align 16
application_info VkApplicationInfo <>
align 16
instance_info VkInstanceCreateInfo <>

; validation layers
;---------------------------------------------------------------------------------------------------
layer_string_0 byte "VK_LAYER_KHRONOS_validation", 0
layers qword offset layer_string_0
layers_available qword ?
layers_count qword ?

extension_string_0 byte "VK_KHR_surface", 0
extension_string_1 byte "VK_KHR_win32_surface", 0
extension_string_2 byte "VK_EXT_debug_utils", 0
extension_string_array qword offset extension_string_0
                       qword offset extension_string_1
                       qword offset extension_string_2
extension_string_array_end:
extension_string_array_count = (extension_string_array_end - extension_string_array) / sizeof qword
; sizeofarray extension_string_array_count, extension_string_array_end, extension_string_array
extensions_available qword ?
extension_count qword ?
found_extensions byte ?
required_extension_count byte ?

align 16
debug_callback_create_info VkDebugUtilsMessengerCreateInfoEXT <>

align 16
debug_callback_create_info_2 VkDebugUtilsMessengerCreateInfoEXT <>
debug_messenger qword ?

align 16
surface_create_info VkWin32SurfaceCreateInfoKHR <>
context_surface VkSurfaceKHR ?

; devices
;---------------------------------------------------------------------------------------------------
physical_device_count qword ?
physical_devices qword ?; VkPhysicalDevice
queue_family_has_value byte ?
align 16
device_properties VkPhysicalDeviceProperties <>
align 16
supports_present byte ?
queue_families_has_value byte ?


align 8
queue_family_properties qword ?; VkQueueFamilyProperties
queue_family_count dword ?
present_support dword ?
align 16
indices QueueFamilyIndices <>
align 16
findQueueFamilies_indices QueueFamilyIndices <>


; procs to load
;---------------------------------------------------------------------------------------------------
; load from dll
; vkEnumerateInstanceLayerProperties qword ?
; vkEnumerateInstanceExtensionProperties qword ?
; vkCreateInstance qword ?
; extern vkCreateInstance:qword

; load from api
; vkGetInstanceProcAddr qword ?
vkCreateDebugReportCallbackEXT qword ?
; void vkDestroyDebugReportCallbackEXT(VkInstance instance, VkDebugReportCallbackEXT callback, const VkAllocationCallbacks * pAllocator)
vkDestroyDebugReportCallbackEXT qword ?
; TYPEDEF PFN_vkDebugReportMessageEXT = void (*)(VkInstance, VkDebugReportFlagsEXT, VkDebugReportObjectTypeEXT, uint64_t, size_t, int32_t, const char *, const char *) __attribute__((stdcall)), TypeKind.POINTER
PFN_vkDebugReportMessageEXT typedef qword
; vkDestroyDebugReportCallbackEXT qword ?
vkDebugReportMessageEXT qword ?
; vkCreateDebugUtilsMessengerEXT qword ?
; vkCreateWin32SurfaceKHR qword ?
; vkEnumeratePhysicalDevices qword ?
; vkGetPhysicalDeviceProperties qword ?
; vkGetPhysicalDeviceQueueFamilyProperties qword ?
vkGetPhysicalDeviceSurfaceSupportKHR qword ?
; VkResult vkCreateInstance(const VkInstanceCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkInstance * pInstance)

; VkResult vkCreateDebugUtilsMessengerEXT(VkInstance instance, const VkDebugUtilsMessengerCreateInfoEXT * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDebugUtilsMessengerEXT * pMessenger)
vkCreateDebugUtilsMessengerEXT qword ?

; public vkCreateInstance 
vkCreateInstance qword ?

; void vkDestroyInstance(VkInstance instance, const VkAllocationCallbacks * pAllocator)
vkDestroyInstance qword ?

; VkResult vkEnumeratePhysicalDevices(VkInstance instance, uint32_t * pPhysicalDeviceCount, VkPhysicalDevice * pPhysicalDevices)
vkEnumeratePhysicalDevices qword ?

; void vkGetPhysicalDeviceFeatures(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures * pFeatures)
vkGetPhysicalDeviceFeatures qword ?

; void vkGetPhysicalDeviceFormatProperties(VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties * pFormatProperties)
vkGetPhysicalDeviceFormatProperties qword ?

; VkResult vkGetPhysicalDeviceImageFormatProperties(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags, VkImageFormatProperties * pImageFormatProperties)
vkGetPhysicalDeviceImageFormatProperties qword ?

; void vkGetPhysicalDeviceProperties(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties * pProperties)
vkGetPhysicalDeviceProperties qword ?

; void vkGetPhysicalDeviceQueueFamilyProperties(VkPhysicalDevice physicalDevice, uint32_t * pQueueFamilyPropertyCount, VkQueueFamilyProperties * pQueueFamilyProperties)
vkGetPhysicalDeviceQueueFamilyProperties qword ?

; void vkGetPhysicalDeviceMemoryProperties(VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties * pMemoryProperties)
vkGetPhysicalDeviceMemoryProperties qword ?

; PFN_vkVoidFunction vkGetInstanceProcAddr(VkInstance instance, const char * pName)
vkGetInstanceProcAddr qword ?

; PFN_vkVoidFunction vkGetDeviceProcAddr(VkDevice device, const char * pName)
vkGetDeviceProcAddr qword ?

; VkResult vkCreateDevice(VkPhysicalDevice physicalDevice, const VkDeviceCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDevice * pDevice)
vkCreateDevice qword ?

; void vkDestroyDevice(VkDevice device, const VkAllocationCallbacks * pAllocator)
vkDestroyDevice qword ?

; VkResult vkEnumerateInstanceExtensionProperties(const char * pLayerName, uint32_t * pPropertyCount, VkExtensionProperties * pProperties)
vkEnumerateInstanceExtensionProperties qword ?

; VkResult vkEnumerateDeviceExtensionProperties(VkPhysicalDevice physicalDevice, const char * pLayerName, uint32_t * pPropertyCount, VkExtensionProperties * pProperties)
vkEnumerateDeviceExtensionProperties qword ?

; VkResult vkEnumerateInstanceLayerProperties(uint32_t * pPropertyCount, VkLayerProperties * pProperties)
vkEnumerateInstanceLayerProperties qword ?

; VkResult vkEnumerateDeviceLayerProperties(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, VkLayerProperties * pProperties)
vkEnumerateDeviceLayerProperties qword ?

; void vkGetDeviceQueue(VkDevice device, uint32_t queueFamilyIndex, uint32_t queueIndex, VkQueue * pQueue)
vkGetDeviceQueue qword ?

; VkResult vkQueueSubmit(VkQueue queue, uint32_t submitCount, const VkSubmitInfo * pSubmits, VkFence fence)
vkQueueSubmit qword ?

; VkResult vkQueueWaitIdle(VkQueue queue)
vkQueueWaitIdle qword ?

; VkResult vkDeviceWaitIdle(VkDevice device)
vkDeviceWaitIdle qword ?

; VkResult vkAllocateMemory(VkDevice device, const VkMemoryAllocateInfo * pAllocateInfo, const VkAllocationCallbacks * pAllocator, VkDeviceMemory * pMemory)
vkAllocateMemory qword ?

; void vkFreeMemory(VkDevice device, VkDeviceMemory memory, const VkAllocationCallbacks * pAllocator)
vkFreeMemory qword ?

; VkResult vkMapMemory(VkDevice device, VkDeviceMemory memory, VkDeviceSize offset, VkDeviceSize size, VkMemoryMapFlags flags, void ** ppData)
vkMapMemory qword ?

; void vkUnmapMemory(VkDevice device, VkDeviceMemory memory)
vkUnmapMemory qword ?

; VkResult vkFlushMappedMemoryRanges(VkDevice device, uint32_t memoryRangeCount, const VkMappedMemoryRange * pMemoryRanges)
vkFlushMappedMemoryRanges qword ?

; VkResult vkInvalidateMappedMemoryRanges(VkDevice device, uint32_t memoryRangeCount, const VkMappedMemoryRange * pMemoryRanges)
vkInvalidateMappedMemoryRanges qword ?

; void vkGetDeviceMemoryCommitment(VkDevice device, VkDeviceMemory memory, VkDeviceSize * pCommittedMemoryInBytes)
vkGetDeviceMemoryCommitment qword ?

; VkResult vkBindBufferMemory(VkDevice device, VkBuffer buffer, VkDeviceMemory memory, VkDeviceSize memoryOffset)
vkBindBufferMemory qword ?

; VkResult vkBindImageMemory(VkDevice device, VkImage image, VkDeviceMemory memory, VkDeviceSize memoryOffset)
vkBindImageMemory qword ?

; void vkGetBufferMemoryRequirements(VkDevice device, VkBuffer buffer, VkMemoryRequirements * pMemoryRequirements)
vkGetBufferMemoryRequirements qword ?

; void vkGetImageMemoryRequirements(VkDevice device, VkImage image, VkMemoryRequirements * pMemoryRequirements)
vkGetImageMemoryRequirements qword ?

; void vkGetImageSparseMemoryRequirements(VkDevice device, VkImage image, uint32_t * pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements * pSparseMemoryRequirements)
vkGetImageSparseMemoryRequirements qword ?

; void vkGetPhysicalDeviceSparseImageFormatProperties(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkSampleCountFlagBits samples, VkImageUsageFlags usage, VkImageTiling tiling, uint32_t * pPropertyCount, VkSparseImageFormatProperties * pProperties)
vkGetPhysicalDeviceSparseImageFormatProperties qword ?

; VkResult vkQueueBindSparse(VkQueue queue, uint32_t bindInfoCount, const VkBindSparseInfo * pBindInfo, VkFence fence)
vkQueueBindSparse qword ?

; VkResult vkCreateFence(VkDevice device, const VkFenceCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkFence * pFence)
vkCreateFence qword ?

; void vkDestroyFence(VkDevice device, VkFence fence, const VkAllocationCallbacks * pAllocator)
vkDestroyFence qword ?

; VkResult vkResetFences(VkDevice device, uint32_t fenceCount, const VkFence * pFences)
vkResetFences qword ?

; VkResult vkGetFenceStatus(VkDevice device, VkFence fence)
vkGetFenceStatus qword ?

; VkResult vkWaitForFences(VkDevice device, uint32_t fenceCount, const VkFence * pFences, VkBool32 waitAll, uint64_t timeout)
vkWaitForFences qword ?

; VkResult vkCreateSemaphore(VkDevice device, const VkSemaphoreCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSemaphore * pSemaphore)
vkCreateSemaphore qword ?

; void vkDestroySemaphore(VkDevice device, VkSemaphore semaphore, const VkAllocationCallbacks * pAllocator)
vkDestroySemaphore qword ?

; VkResult vkCreateEvent(VkDevice device, const VkEventCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkEvent * pEvent)
vkCreateEvent qword ?

; void vkDestroyEvent(VkDevice device, VkEvent event, const VkAllocationCallbacks * pAllocator)
vkDestroyEvent qword ?

; VkResult vkGetEventStatus(VkDevice device, VkEvent event)
vkGetEventStatus qword ?

; VkResult vkSetEvent(VkDevice device, VkEvent event)
vkSetEvent qword ?

; VkResult vkResetEvent(VkDevice device, VkEvent event)
vkResetEvent qword ?

; VkResult vkCreateQueryPool(VkDevice device, const VkQueryPoolCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkQueryPool * pQueryPool)
vkCreateQueryPool qword ?

; void vkDestroyQueryPool(VkDevice device, VkQueryPool queryPool, const VkAllocationCallbacks * pAllocator)
vkDestroyQueryPool qword ?

; VkResult vkGetQueryPoolResults(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, size_t dataSize, void * pData, VkDeviceSize stride, VkQueryResultFlags flags)
vkGetQueryPoolResults qword ?

; VkResult vkCreateBuffer(VkDevice device, const VkBufferCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkBuffer * pBuffer)
vkCreateBuffer qword ?

; void vkDestroyBuffer(VkDevice device, VkBuffer buffer, const VkAllocationCallbacks * pAllocator)
vkDestroyBuffer qword ?

; VkResult vkCreateBufferView(VkDevice device, const VkBufferViewCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkBufferView * pView)
vkCreateBufferView qword ?

; void vkDestroyBufferView(VkDevice device, VkBufferView bufferView, const VkAllocationCallbacks * pAllocator)
vkDestroyBufferView qword ?

; VkResult vkCreateImage(VkDevice device, const VkImageCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkImage * pImage)
vkCreateImage qword ?

; void vkDestroyImage(VkDevice device, VkImage image, const VkAllocationCallbacks * pAllocator)
vkDestroyImage qword ?

; void vkGetImageSubresourceLayout(VkDevice device, VkImage image, const VkImageSubresource * pSubresource, VkSubresourceLayout * pLayout)
vkGetImageSubresourceLayout qword ?

; VkResult vkCreateImageView(VkDevice device, const VkImageViewCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkImageView * pView)
vkCreateImageView qword ?

; void vkDestroyImageView(VkDevice device, VkImageView imageView, const VkAllocationCallbacks * pAllocator)
vkDestroyImageView qword ?

; VkResult vkCreateShaderModule(VkDevice device, const VkShaderModuleCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkShaderModule * pShaderModule)
vkCreateShaderModule qword ?

; void vkDestroyShaderModule(VkDevice device, VkShaderModule shaderModule, const VkAllocationCallbacks * pAllocator)
vkDestroyShaderModule qword ?

; VkResult vkCreatePipelineCache(VkDevice device, const VkPipelineCacheCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkPipelineCache * pPipelineCache)
vkCreatePipelineCache qword ?

; void vkDestroyPipelineCache(VkDevice device, VkPipelineCache pipelineCache, const VkAllocationCallbacks * pAllocator)
vkDestroyPipelineCache qword ?

; VkResult vkGetPipelineCacheData(VkDevice device, VkPipelineCache pipelineCache, size_t * pDataSize, void * pData)
vkGetPipelineCacheData qword ?

; VkResult vkMergePipelineCaches(VkDevice device, VkPipelineCache dstCache, uint32_t srcCacheCount, const VkPipelineCache * pSrcCaches)
vkMergePipelineCaches qword ?

; VkResult vkCreateGraphicsPipelines(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkGraphicsPipelineCreateInfo * pCreateInfos, const VkAllocationCallbacks * pAllocator, VkPipeline * pPipelines)
vkCreateGraphicsPipelines qword ?

; VkResult vkCreateComputePipelines(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkComputePipelineCreateInfo * pCreateInfos, const VkAllocationCallbacks * pAllocator, VkPipeline * pPipelines)
vkCreateComputePipelines qword ?

; void vkDestroyPipeline(VkDevice device, VkPipeline pipeline, const VkAllocationCallbacks * pAllocator)
vkDestroyPipeline qword ?

; VkResult vkCreatePipelineLayout(VkDevice device, const VkPipelineLayoutCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkPipelineLayout * pPipelineLayout)
vkCreatePipelineLayout qword ?

; void vkDestroyPipelineLayout(VkDevice device, VkPipelineLayout pipelineLayout, const VkAllocationCallbacks * pAllocator)
vkDestroyPipelineLayout qword ?

; VkResult vkCreateSampler(VkDevice device, const VkSamplerCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSampler * pSampler)
vkCreateSampler qword ?

; void vkDestroySampler(VkDevice device, VkSampler sampler, const VkAllocationCallbacks * pAllocator)
vkDestroySampler qword ?

; VkResult vkCreateDescriptorSetLayout(VkDevice device, const VkDescriptorSetLayoutCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDescriptorSetLayout * pSetLayout)
vkCreateDescriptorSetLayout qword ?

; void vkDestroyDescriptorSetLayout(VkDevice device, VkDescriptorSetLayout descriptorSetLayout, const VkAllocationCallbacks * pAllocator)
vkDestroyDescriptorSetLayout qword ?

; VkResult vkCreateDescriptorPool(VkDevice device, const VkDescriptorPoolCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDescriptorPool * pDescriptorPool)
vkCreateDescriptorPool qword ?

; void vkDestroyDescriptorPool(VkDevice device, VkDescriptorPool descriptorPool, const VkAllocationCallbacks * pAllocator)
vkDestroyDescriptorPool qword ?

; VkResult vkResetDescriptorPool(VkDevice device, VkDescriptorPool descriptorPool, VkDescriptorPoolResetFlags flags)
vkResetDescriptorPool qword ?

; VkResult vkAllocateDescriptorSets(VkDevice device, const VkDescriptorSetAllocateInfo * pAllocateInfo, VkDescriptorSet * pDescriptorSets)
vkAllocateDescriptorSets qword ?

; VkResult vkFreeDescriptorSets(VkDevice device, VkDescriptorPool descriptorPool, uint32_t descriptorSetCount, const VkDescriptorSet * pDescriptorSets)
vkFreeDescriptorSets qword ?

; void vkUpdateDescriptorSets(VkDevice device, uint32_t descriptorWriteCount, const VkWriteDescriptorSet * pDescriptorWrites, uint32_t descriptorCopyCount, const VkCopyDescriptorSet * pDescriptorCopies)
vkUpdateDescriptorSets qword ?

; VkResult vkCreateFramebuffer(VkDevice device, const VkFramebufferCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkFramebuffer * pFramebuffer)
vkCreateFramebuffer qword ?

; void vkDestroyFramebuffer(VkDevice device, VkFramebuffer framebuffer, const VkAllocationCallbacks * pAllocator)
vkDestroyFramebuffer qword ?

; VkResult vkCreateRenderPass(VkDevice device, const VkRenderPassCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkRenderPass * pRenderPass)
vkCreateRenderPass qword ?

; void vkDestroyRenderPass(VkDevice device, VkRenderPass renderPass, const VkAllocationCallbacks * pAllocator)
vkDestroyRenderPass qword ?

; void vkGetRenderAreaGranularity(VkDevice device, VkRenderPass renderPass, VkExtent2D * pGranularity)
vkGetRenderAreaGranularity qword ?

; VkResult vkCreateCommandPool(VkDevice device, const VkCommandPoolCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkCommandPool * pCommandPool)
vkCreateCommandPool qword ?

; void vkDestroyCommandPool(VkDevice device, VkCommandPool commandPool, const VkAllocationCallbacks * pAllocator)
vkDestroyCommandPool qword ?

; VkResult vkResetCommandPool(VkDevice device, VkCommandPool commandPool, VkCommandPoolResetFlags flags)
vkResetCommandPool qword ?

; VkResult vkAllocateCommandBuffers(VkDevice device, const VkCommandBufferAllocateInfo * pAllocateInfo, VkCommandBuffer * pCommandBuffers)
vkAllocateCommandBuffers qword ?

; void vkFreeCommandBuffers(VkDevice device, VkCommandPool commandPool, uint32_t commandBufferCount, const VkCommandBuffer * pCommandBuffers)
vkFreeCommandBuffers qword ?

; VkResult vkBeginCommandBuffer(VkCommandBuffer commandBuffer, const VkCommandBufferBeginInfo * pBeginInfo)
vkBeginCommandBuffer qword ?

; VkResult vkEndCommandBuffer(VkCommandBuffer commandBuffer)
vkEndCommandBuffer qword ?

; VkResult vkResetCommandBuffer(VkCommandBuffer commandBuffer, VkCommandBufferResetFlags flags)
vkResetCommandBuffer qword ?

; void vkCmdBindPipeline(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline)
vkCmdBindPipeline qword ?

; void vkCmdSetViewport(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkViewport * pViewports)
vkCmdSetViewport qword ?

; void vkCmdSetScissor(VkCommandBuffer commandBuffer, uint32_t firstScissor, uint32_t scissorCount, const VkRect2D * pScissors)
vkCmdSetScissor qword ?

; void vkCmdSetLineWidth(VkCommandBuffer commandBuffer, float lineWidth)
vkCmdSetLineWidth qword ?

; void vkCmdSetDepthBias(VkCommandBuffer commandBuffer, float depthBiasConstantFactor, float depthBiasClamp, float depthBiasSlopeFactor)
vkCmdSetDepthBias qword ?

; void vkCmdSetBlendConstants(VkCommandBuffer commandBuffer, const float[4] blendConstants)
vkCmdSetBlendConstants qword ?

; void vkCmdSetDepthBounds(VkCommandBuffer commandBuffer, float minDepthBounds, float maxDepthBounds)
vkCmdSetDepthBounds qword ?

; void vkCmdSetStencilCompareMask(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t compareMask)
vkCmdSetStencilCompareMask qword ?

; void vkCmdSetStencilWriteMask(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t writeMask)
vkCmdSetStencilWriteMask qword ?

; void vkCmdSetStencilReference(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t reference)
vkCmdSetStencilReference qword ?

; void vkCmdBindDescriptorSets(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t firstSet, uint32_t descriptorSetCount, const VkDescriptorSet * pDescriptorSets, uint32_t dynamicOffsetCount, const uint32_t * pDynamicOffsets)
vkCmdBindDescriptorSets qword ?

; void vkCmdBindIndexBuffer(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkIndexType indexType)
vkCmdBindIndexBuffer qword ?

; void vkCmdBindVertexBuffers(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer * pBuffers, const VkDeviceSize * pOffsets)
vkCmdBindVertexBuffers qword ?

; void vkCmdDraw(VkCommandBuffer commandBuffer, uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t firstInstance)
vkCmdDraw qword ?

; void vkCmdDrawIndexed(VkCommandBuffer commandBuffer, uint32_t indexCount, uint32_t instanceCount, uint32_t firstIndex, int32_t vertexOffset, uint32_t firstInstance)
vkCmdDrawIndexed qword ?

; void vkCmdDrawIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride)
vkCmdDrawIndirect qword ?

; void vkCmdDrawIndexedIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride)
vkCmdDrawIndexedIndirect qword ?

; void vkCmdDispatch(VkCommandBuffer commandBuffer, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ)
vkCmdDispatch qword ?

; void vkCmdDispatchIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset)
vkCmdDispatchIndirect qword ?

; void vkCmdCopyBuffer(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferCopy * pRegions)
vkCmdCopyBuffer qword ?

; void vkCmdCopyImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageCopy * pRegions)
vkCmdCopyImage qword ?

; void vkCmdBlitImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageBlit * pRegions, VkFilter filter)
vkCmdBlitImage qword ?

; void vkCmdCopyBufferToImage(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkBufferImageCopy * pRegions)
vkCmdCopyBufferToImage qword ?

; void vkCmdCopyImageToBuffer(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferImageCopy * pRegions)
vkCmdCopyImageToBuffer qword ?

; void vkCmdUpdateBuffer(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize dataSize, const void * pData)
vkCmdUpdateBuffer qword ?

; void vkCmdFillBuffer(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize size, uint32_t data)
vkCmdFillBuffer qword ?

; void vkCmdClearColorImage(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearColorValue * pColor, uint32_t rangeCount, const VkImageSubresourceRange * pRanges)
vkCmdClearColorImage qword ?

; void vkCmdClearDepthStencilImage(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearDepthStencilValue * pDepthStencil, uint32_t rangeCount, const VkImageSubresourceRange * pRanges)
vkCmdClearDepthStencilImage qword ?

; void vkCmdClearAttachments(VkCommandBuffer commandBuffer, uint32_t attachmentCount, const VkClearAttachment * pAttachments, uint32_t rectCount, const VkClearRect * pRects)
vkCmdClearAttachments qword ?

; void vkCmdResolveImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageResolve * pRegions)
vkCmdResolveImage qword ?

; void vkCmdSetEvent(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask)
vkCmdSetEvent qword ?

; void vkCmdResetEvent(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask)
vkCmdResetEvent qword ?

; void vkCmdWaitEvents(VkCommandBuffer commandBuffer, uint32_t eventCount, const VkEvent * pEvents, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, uint32_t memoryBarrierCount, const VkMemoryBarrier * pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier * pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier * pImageMemoryBarriers)
vkCmdWaitEvents qword ?

; void vkCmdPipelineBarrier(VkCommandBuffer commandBuffer, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, VkDependencyFlags dependencyFlags, uint32_t memoryBarrierCount, const VkMemoryBarrier * pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier * pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier * pImageMemoryBarriers)
vkCmdPipelineBarrier qword ?

; void vkCmdBeginQuery(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags)
vkCmdBeginQuery qword ?

; void vkCmdEndQuery(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query)
vkCmdEndQuery qword ?

; void vkCmdResetQueryPool(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount)
vkCmdResetQueryPool qword ?

; void vkCmdWriteTimestamp(VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkQueryPool queryPool, uint32_t query)
vkCmdWriteTimestamp qword ?

; void vkCmdCopyQueryPoolResults(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize stride, VkQueryResultFlags flags)
vkCmdCopyQueryPoolResults qword ?

; void vkCmdPushConstants(VkCommandBuffer commandBuffer, VkPipelineLayout layout, VkShaderStageFlags stageFlags, uint32_t offset, uint32_t size, const void * pValues)
vkCmdPushConstants qword ?

; void vkCmdBeginRenderPass(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo * pRenderPassBegin, VkSubpassContents contents)
vkCmdBeginRenderPass qword ?

; void vkCmdNextSubpass(VkCommandBuffer commandBuffer, VkSubpassContents contents)
vkCmdNextSubpass qword ?

; void vkCmdEndRenderPass(VkCommandBuffer commandBuffer)
vkCmdEndRenderPass qword ?

; void vkCmdExecuteCommands(VkCommandBuffer commandBuffer, uint32_t commandBufferCount, const VkCommandBuffer * pCommandBuffers)
vkCmdExecuteCommands qword ?


; win32
; VkResult vkGetPhysicalDeviceSurfacePresentModes2EXT(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR * pSurfaceInfo, uint32_t * pPresentModeCount, VkPresentModeKHR * pPresentModes)
vkGetPhysicalDeviceSurfacePresentModes2EXT qword ?

; VkResult vkAcquireFullScreenExclusiveModeEXT(VkDevice device, VkSwapchainKHR swapchain)
vkAcquireFullScreenExclusiveModeEXT qword ?

; VkResult vkReleaseFullScreenExclusiveModeEXT(VkDevice device, VkSwapchainKHR swapchain)
vkReleaseFullScreenExclusiveModeEXT qword ?

; VkResult vkGetDeviceGroupSurfacePresentModes2EXT(VkDevice device, const VkPhysicalDeviceSurfaceInfo2KHR * pSurfaceInfo, VkDeviceGroupPresentModeFlagsKHR * pModes)
vkGetDeviceGroupSurfacePresentModes2EXT qword ?

; TYPEDEF PFN_vkAcquireWinrtDisplayNV = VkResult (*)(VkPhysicalDevice, VkDisplayKHR) __attribute__((stdcall)), TypeKind.POINTER
PFN_vkAcquireWinrtDisplayNV typedef qword

; TYPEDEF PFN_vkGetWinrtDisplayNV = VkResult (*)(VkPhysicalDevice, uint32_t, VkDisplayKHR *) __attribute__((stdcall)), TypeKind.POINTER
PFN_vkGetWinrtDisplayNV typedef qword

; VkResult vkAcquireWinrtDisplayNV(VkPhysicalDevice physicalDevice, VkDisplayKHR display)
vkAcquireWinrtDisplayNV qword ?

; VkResult vkGetWinrtDisplayNV(VkPhysicalDevice physicalDevice, uint32_t deviceRelativeId, VkDisplayKHR * pDisplay)
vkGetWinrtDisplayNV qword ?

; VkResult vkCreateWin32SurfaceKHR(VkInstance instance, const VkWin32SurfaceCreateInfoKHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface)
vkCreateWin32SurfaceKHR qword ?

;---------------------------------------------------------------------------------------------------
.code
;---------------------------------------------------------------------------------------------------
align 16
VulkanLoad proc
    invoke LoadLibrary, "vulkan-1.dll"
    AssertNotEq rax, 0
    mov vulkan_module, rax

    invoke GetProcAddress, vulkan_module, "vkCreateInstance"
    AssertNotEq rax, 0
    mov vkCreateInstance, rax

    invoke GetProcAddress, vulkan_module, "vkEnumerateInstanceLayerProperties"
    AssertNotEq rax, 0
    mov vkEnumerateInstanceLayerProperties, rax

    invoke GetProcAddress, vulkan_module, "vkEnumerateInstanceExtensionProperties"
    AssertNotEq rax, 0
    mov vkEnumerateInstanceExtensionProperties, rax

    invoke GetProcAddress, vulkan_module, "vkGetInstanceProcAddr"
    AssertNotEq rax, 0
    mov vkGetInstanceProcAddr, rax

    invoke GetProcAddress, vulkan_module, "vkCreateWin32SurfaceKHR"
    AssertNotEq rax, 0
    mov vkCreateWin32SurfaceKHR, rax

    invoke GetProcAddress, vulkan_module, "vkEnumeratePhysicalDevices"
    AssertNotEq rax, 0
    mov vkEnumeratePhysicalDevices, rax

    invoke GetProcAddress, vulkan_module, "vkGetPhysicalDeviceProperties"
    AssertNotEq rax, 0
    mov vkGetPhysicalDeviceProperties, rax

    invoke GetProcAddress, vulkan_module, "vkGetPhysicalDeviceQueueFamilyProperties"
    AssertNotEq rax, 0
    mov vkGetPhysicalDeviceQueueFamilyProperties, rax

    ret
VulkanLoad endp

align 16
VulkanLoadExt proc
    invoke vkGetInstanceProcAddr, context_instance, "vkCreateDebugReportCallbackEXT"
    ; AssertNotEq rax, 0
    mov vkCreateDebugReportCallbackEXT, rax

    invoke vkGetInstanceProcAddr, context_instance, "vkDestroyDebugReportCallbackEXT"
    ; AssertNotEq rax, 0
    mov vkDestroyDebugReportCallbackEXT, rax

    invoke vkGetInstanceProcAddr, context_instance, "vkDebugReportMessageEXT"
    ; AssertNotEq rax, 0
    mov vkDebugReportMessageEXT, rax

    invoke vkGetInstanceProcAddr, context_instance, "vkCreateDebugUtilsMessengerEXT"
    AssertNotEq rax, 0
    mov vkCreateDebugUtilsMessengerEXT, rax

    invoke vkGetInstanceProcAddr, context_instance, "vkGetPhysicalDeviceSurfaceSupportKHR"
    AssertNotEq rax, 0
    mov vkGetPhysicalDeviceSurfaceSupportKHR, rax


    ret
VulkanLoadExt endp

align 16
WindowProc proc hWin:QWORD,uMsg:QWORD,wParam:QWORD,lParam:QWORD
    cmp uMsg, WM_PAINT
    je OnPaint

    cmp uMsg, WM_CLOSE
    je OnClose

    cmp uMsg, WM_CREATE
    je OnCreate

    cmp uMsg, WM_SIZE
    je OnSize

    cmp uMsg, WM_DESTROY
    je OnDestroy

    invoke DefWindowProc, hWin, uMsg, wParam, lParam
    ret

    OnPaint:
        ; DebugPrint paint_phrase
        ret
    OnClose:
        invoke SendMessage, hWin, WM_DESTROY, 0, 0
        invoke PostQuitMessage, 0
        ret
    OnCreate:
        xor rax, rax
        ret
    OnSize:
        ret
    OnDestroy:
        ; DebugPrint close_phrase
        invoke PostQuitMessage, 0
        ret
    ret
WindowProc endp

align 16
MessageLoopProcess proc
    LOCAL msg    :MSG
    LOCAL pmsg   :QWORD

    mov pmsg, ptr$(msg)
    jmp gmsg

  mloop:
    invoke TranslateMessage,pmsg
    invoke DispatchMessage,pmsg
  gmsg:
    test rax, rv(GetMessage,pmsg,0,0,0)     ; loop until GetMessage returns zero
    jnz mloop
    ret
MessageLoopProcess endp

align 16
arenaTest proc
    mov rcx, 32
    call memoryIsPowerOfTwo
    AssertEq rax, 1
    mov rcx, 33
    call memoryIsPowerOfTwo
    AssertEq rax, 0

    invoke arenaPush, ADDR arena, sizeof qword * 24, 8
    xor rcx, rcx
    loop_arr_00000:
        mov rdx, 0DEADBEEFCAFEBABEh
        mov [rax + rcx * 8], rdx
        inc rcx
        cmp rcx, 24
        jl loop_arr_00000
    invoke arenaSetPos, ADDR arena, pos

    invoke arenaPush, ADDR arena, 12, 8
    xor rcx, rcx
    loop_arr_00001:
        mov rdx, 0CAFEBABEF00DB105h
        mov [rax + rcx * 8], rdx
        inc rcx
        cmp rcx, 12
        jl loop_arr_00001
    invoke arenaSetPos, ADDR arena, pos

    arenaPushArray ADDR arena, Payload, 16, 8
    mov rsi, rax
    xor rcx, rcx
    mov r8, sizeof Payload
    mov r9, 0DEADFEEDBABE5EEDh
    loop_arr_00002:
        mov rax, rcx
        mul r8
        mov [rsi.Payload.tag + rax], r9
        mov [rsi.Payload.id + rax], r9b
        inc rcx
        cmp rcx, 16
        jl loop_arr_00002
    invoke arenaSetPos, ADDR arena, pos

    arenaPushArray ADDR arena, Payload, 16, 8
    mov rsi, rax
    xor rcx, rcx
    mov r8, sizeof Payload
    mov r9, 0DEFE0000BAAD0000h
    loop_arr_00003:
        mov [rsi.Payload.tag], r9
        mov [rsi.Payload.id], cl
        add rsi, r8
        inc rcx
        cmp rcx, 16
        jl loop_arr_00003
    invoke arenaSetPos, ADDR arena, pos

    ;;;; ; arenaPushArray ADDR arena, qword, 1000h, 8
    ;;;; invoke arenaPush, ADDR arena, sizeof qword * 1000h, 8
    ;;;; mov rsi, rax
    ;;;; xor rcx, rcx
    ;;;; mov r8, sizeof qword
    ;;;; mov r9, 0DEFEDEFEDEFEDEFEh
    ;;;; loop_arr_00004:
    ;;;;     mov [rsi], r9
    ;;;;     add rsi, r8
    ;;;;     inc rcx
    ;;;;     cmp rcx, 1000h
    ;;;;     jl loop_arr_00004
    ;;;; ; invoke arenaSetPos, ADDR arena, pos
    ;;;; invoke arenaPush, ADDR arena, sizeof qword * 1000h, 8
    ;;;; ; arenaPushArray ADDR arena, qword, 1000h, 8
    ;;;; mov rsi, rax
    ;;;; xor rcx, rcx
    ;;;; mov r8, sizeof qword
    ;;;; mov r9, 0DEFEDEFEDEFEDEFEh
    ;;;; loop_arr_00005:
    ;;;;     mov [rsi], r9
    ;;;;     add rsi, r8
    ;;;;     inc rcx
    ;;;;     cmp rcx, 1000h
    ;;;;     jl loop_arr_00005

    xor rax, rax
    ret
arenaTest endp

; rcx = pointer to string1 (const char*)
; rdx = pointer to string2 (const char*)
; returns:
;   rax = 0 if equal
;   rax < 0 if string1 < string2
;   rax > 0 if string1 > string2
strcmp64 PROC
        SaveRegisters
        movzx   r8d, BYTE PTR [rcx]
        xor     r9d, r9d
        cmp     r8b, BYTE PTR [rdx]
        jne     SHORT $LN10@my_strcmp
        mov     r10, rcx
        mov     rax, rdx
        sub     r10, rdx
$LL2@my_strcmp:
        test    r8b, r8b
        je      SHORT $LN10@my_strcmp
        cmp     BYTE PTR [rax], 0
        je      SHORT $LN10@my_strcmp
        movzx   r8d, BYTE PTR [r10+rax+1]
        inc     rax
        inc     r9d
        cmp     r8b, BYTE PTR [rax]
        je      SHORT $LL2@my_strcmp
$LN10@my_strcmp:
        movsxd  rax, r9d
        movsx   r8d, BYTE PTR [rax+rcx]
        add     rax, rdx
        test    r8b, r8b
        jne     SHORT $LN13@my_strcmp
        cmp     BYTE PTR [rax], r8b
        jne     SHORT $LN13@my_strcmp
        xor     eax, eax
        ret     0
$LN13@my_strcmp:
        movsx   ecx, BYTE PTR [rax]
        mov     eax, r8d
        sub     eax, ecx
        RestoreRegisters
        ret     0
strcmp64 ENDP

; VKAPI_ATTR 
; VkBool32 
; VKAPI_CALL 
; debugCallback(
; VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity, rcx
; VkDebugUtilsMessageTypeFlagsEXT messageType, rdx
; const VkDebugUtilsMessengerCallbackDataEXT* pCallbackData, r8
; void* pUserData), r9
align 16
VulkanDebugReportCallback proc
    push rbx
    sub rsp, 28h
    lea rbx, [r8 + 0D0h] ; hack!
    lea rcx, vulkan_phrase
    invoke OutputDebugString
    mov rcx, rbx
    invoke OutputDebugString
    lea rcx, new_line
    invoke OutputDebugString
    add rsp, 28h
    pop rbx
    xor rax, rax
    ret
VulkanDebugReportCallback endp

align 16
findQueueFamilies proc
    push rbp
    mov rbp, rsp
    sub rsp, 32
    SaveRegisters

    mov r13, rcx ; device

    ; mov rcx, physical_devices[i]
    ; lea rdx, queue_family_count
    ; xor r8, r8
    invoke vkGetPhysicalDeviceQueueFamilyProperties, rcx, ADDR queue_family_count, 0

    ; allocate
    xor rdx, rdx
    mov edx, sizeof VkQueueFamilyProperties
    mov eax, queue_family_count
    mul edx
    invoke arenaPushZero, ADDR arena, rax, alignofqword
    AssertNotEq rax, 0
    mov queue_family_properties, rax
    ; save pos
    mov pos, rax

    invoke vkGetPhysicalDeviceQueueFamilyProperties, r13, ADDR queue_family_count, rax

    xor rdx, rdx ; graphics_family_has_value
    xor rax, rax
    xor rbx, rbx
    xor r8, r8 ; present_family_has_value

    xor r11, r11
    mov rsi, queue_family_properties
    queue_family_properties_loop_00000001:
        mov eax, [rsi].VkQueueFamilyProperties.queueFlags
        mov rbx, VK_QUEUE_GRAPHICS_BIT
        and rax, rbx
        cmp rax, 0
        je has_not_queue_graphics_bit
            mov indices.graphicsFamily, r11d
            mov rdx, 1
        has_not_queue_graphics_bit:
        invoke vkGetPhysicalDeviceSurfaceSupportKHR, r13, r11, context_surface, ADDR present_support
        mov r10d, present_support
        cmp r10, 0
        je has_not_present
            mov indices.presentFamily, r11d
            mov r8, 1
        has_not_present:
        and r8, rdx
        cmp r8, 0
        je has_not_both
            mov rax, 1
            jmp found_it
        has_not_both:

        add rsi, sizeof VkQueueFamilyProperties
        inc r11d
        cmp r11d, queue_family_count
        jl queue_family_properties_loop_00000001

    found_it:
    ; copy found indices outwards
    ; mov findQueueFamilies_indices
    ; free
    invoke arenaSetPos, ADDR arena, pos

    RestoreRegisters
    add rsp, 32
    pop rbp
    ret
findQueueFamilies endp

align 16
isDeviceSuitable proc
    push rbp
    mov rbp, rsp
    sub rsp, 32
    SaveRegisters

    ; mov rcx, physical_devices[i]
    invoke findQueueFamilies, rcx

    RestoreRegisters
    add rsp, 32
    pop rbp
    ret
isDeviceSuitable endp

align 16
main proc
    lea rcx, arena
    call arenaInit
    mov pos, rax
    call arenaTest

    mov window_instance, rv(GetModuleHandle, 0)

    mov rcx, StdOutHandle
    call GetStdHandle
    invoke WriteFile, rax, ADDR outputmessage, outputmessagelength, 0

    mov window_class.cbSize, sizeof WNDCLASSEX
    xor rcx, rcx
    mov rcx, CS_HREDRAW or CS_VREDRAW
    mov window_class.style, ecx
    lea rcx, WindowProc
    mov window_class.lpfnWndProc, rcx
    mov rcx, window_instance
    mov window_class.hInstance, rcx
    lea rcx, window_class_name
    mov window_class.lpszClassName, rcx

    invoke RegisterClassEx, ADDR window_class
    AssertNotEq rax, 0

    invoke CreateWindowEx, 0, ADDR window_class_name, ADDR window_title, WS_OVERLAPPEDWINDOW or WS_VISIBLE, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, 0, 0, window_instance, 0
    AssertNotEq rax, 0
    mov window_handle, rax

    call VulkanLoad

    ; instance layers
    ;---------------------------------------------------------------------------------------------------
    invoke vkEnumerateInstanceLayerProperties, ADDR layers_count, 0
    AssertEq rax, VK_SUCCESS
    arenaPushArrayZero ADDR arena, VkLayerProperties, layers_count, 4
    ; invoke arenaPushZero, ADDR arena, rax, 4
    AssertNotEq rax, 0
    mov layers_available, rax
    invoke vkEnumerateInstanceLayerProperties, ADDR layers_count, rax

    mov rsi, layers_available
    xor rcx, rcx
    mov r8, sizeof VkLayerProperties
    lea r9, layer_string_0
    loop_validation_layer_find_00000000:
        push rcx
        push rdx
        lea rcx, [rsi.VkLayerProperties.layerName]
        mov rdx, r9
        call strcmp64
        cmp rax, 0
        jne validation_label_not_found 
        mov found_validation, 1
        lea r9, layer_string_0
        validation_label_not_found:
        pop rdx
        pop rcx

        add rsi, r8
        inc rcx
        cmp rcx, layers_count
        jl loop_validation_layer_find_00000000
    invoke arenaSetPos, ADDR arena, pos

    ; instance extension_string_array
    invoke vkEnumerateInstanceExtensionProperties, 0, ADDR extension_count, 0
    AssertEq rax, VK_SUCCESS
    mov edx, sizeof VkExtensionProperties 
    xor rax, rax
    mov rax, extension_count
    mul edx
    invoke arenaPushZero, ADDR arena, rax, 4
    AssertNotEq rax, 0
    ; invoke arenaPush, ADDR arena, rax, 4
    mov extensions_available, rax
    invoke vkEnumerateInstanceExtensionProperties, 0, ADDR extension_count, extensions_available
    AssertEq rax, VK_SUCCESS

    ExtensionValidationCheck 0
    ExtensionValidationCheck 1
    ExtensionValidationCheck 2
    ; include asmgen.asm
    invoke arenaSetPos, ADDR arena, pos

    mov al, found_extensions
    AssertEq al, extension_string_array_count

    ; create instance
    ;---------------------------------------------------------------------------------------------------
    mov application_info._sType, VK_STRUCTURE_TYPE_APPLICATION_INFO
    lea rcx, application_name
        mov application_info.pApplicationName, rcx
    mov application_info.applicationVersion, application_api_version
    mov application_info.apiVersion, application_api_version
    mov application_info.engineVersion, 1

    mov instance_info._sType, VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO
    lea rcx, application_info
        mov instance_info.pApplicationInfo, rcx
    mov instance_info.enabledLayerCount, 1
    lea rcx, layers
        mov instance_info.ppEnabledLayerNames, rcx
    ; debuginfo
    mov debug_callback_create_info._sType, VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT
    mov debug_callback_create_info.messageSeverity, VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT or VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT or VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT
    mov debug_callback_create_info.messageType, VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT or VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT or VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT
    lea rcx, VulkanDebugReportCallback
        mov debug_callback_create_info.pfnUserCallback, rcx
    ; debuginfo
    mov instance_info.enabledExtensionCount, 3
    lea rcx, extension_string_array
        mov instance_info.ppEnabledExtensionNames, rcx
    lea rcx, debug_callback_create_info
        mov instance_info.pNext, rcx

    invoke vkCreateInstance, ADDR instance_info, 0, ADDR context_instance
    AssertEq rax, VK_SUCCESS

    call VulkanLoadExt

    ; debuginfo
    ; mov debug_callback_create_info_2._sType, VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT
    ; mov debug_callback_create_info_2.messageSeverity, VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT or VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT or VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT
    ; mov debug_callback_create_info_2.messageType, VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT or VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT or VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT
    ; lea rcx, VulkanDebugReportCallback
    ;     mov debug_callback_create_info_2.pfnUserCallback, rcx
    ; debuginfo
    invoke vkCreateDebugUtilsMessengerEXT, context_instance, ADDR debug_callback_create_info, 0, ADDR debug_messenger
    AssertEq rax, VK_SUCCESS

    mov surface_create_info._sType, VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR
    mov rcx, window_instance
    mov surface_create_info.hinstance, rcx
    mov rcx,  window_handle
    mov surface_create_info.hwnd, rcx

    invoke vkCreateWin32SurfaceKHR, context_instance, ADDR surface_create_info, 0, ADDR context_surface
    AssertEq rax, VK_SUCCESS

    ; physical devices
    ;---------------------------------------------------------------------------------------------------
    invoke vkEnumeratePhysicalDevices, context_instance, ADDR physical_device_count, 0
    mov rax, physical_device_count
    AssertNotEq rax, 0

    mov edx, sizeof qword; sizeof typedef VkPhysicalDevice pointer
    xor rax, rax
    mov rax, physical_device_count
    mul edx
    invoke arenaPushZero, ADDR arena, rax, alignofqword
    AssertNotEq rax, 0
    mov physical_devices, rax

    invoke vkEnumeratePhysicalDevices, context_instance, ADDR physical_device_count, physical_devices
    AssertEq rax, VK_SUCCESS

    ;;;; mov rax, physical_devices
    ;;;; mov rcx, [rax]
    ;;;; lea rdx, queue_family_count
    ;;;; xor r8, r8
    ;;;; call vkGetPhysicalDeviceQueueFamilyProperties

    xor rsi, rsi
    is_device_suitable_loop_00000000:
        ; SaveRegisters
        mov rax, physical_devices
        mov rcx, [rax + sizeof qword * rsi]
        invoke isDeviceSuitable, rcx
        ; RestoreRegisters
        cmp rax, 0
        jz is_not_suitable
            jmp device_found
        is_not_suitable:
        inc rsi
        cmp rsi, physical_device_count
        jl is_device_suitable_loop_00000000
    device_found:

    call MessageLoopProcess

    invoke ExitProcess, 0
    ret
main endp
end
