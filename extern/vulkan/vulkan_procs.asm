.data
; VkResult vkCreateInstance(const VkInstanceCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkInstance * pInstance)
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
