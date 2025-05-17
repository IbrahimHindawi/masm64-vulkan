VkExtent2D STRUCT
    m_width DWORD ?
    height DWORD ?
VkExtent2D ENDS

VkExtent3D STRUCT
    m_width DWORD ?
    height DWORD ?
    depth DWORD ?
VkExtent3D ENDS

VkOffset2D STRUCT
    x DWORD ?
    y DWORD ?
VkOffset2D ENDS

VkOffset3D STRUCT
    x DWORD ?
    y DWORD ?
    z DWORD ?
VkOffset3D ENDS

VkRect2D STRUCT
    m_offset DWORD ?
    extent DWORD ?
VkRect2D ENDS

VkBaseInStructure STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
VkBaseInStructure ENDS

VkBaseOutStructure STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
VkBaseOutStructure ENDS

VkBufferMemoryBarrier STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    srcAccessMask DWORD ?
    dstAccessMask DWORD ?
    srcQueueFamilyIndex DWORD ?
    dstQueueFamilyIndex DWORD ?
    buffer DWORD ?
    m_offset DWORD ?
    m_size DWORD ?
    BYTE 4 dup(?)
VkBufferMemoryBarrier ENDS

VkDispatchIndirectCommand STRUCT
    x DWORD ?
    y DWORD ?
    z DWORD ?
VkDispatchIndirectCommand ENDS

VkDrawIndexedIndirectCommand STRUCT
    indexCount DWORD ?
    instanceCount DWORD ?
    firstIndex DWORD ?
    vertexOffset DWORD ?
    firstInstance DWORD ?
VkDrawIndexedIndirectCommand ENDS

VkDrawIndirectCommand STRUCT
    vertexCount DWORD ?
    instanceCount DWORD ?
    firstVertex DWORD ?
    firstInstance DWORD ?
VkDrawIndirectCommand ENDS

VkImageSubresourceRange STRUCT
    aspectMask DWORD ?
    baseMipLevel DWORD ?
    levelCount DWORD ?
    baseArrayLayer DWORD ?
    layerCount DWORD ?
VkImageSubresourceRange ENDS

VkImageMemoryBarrier STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    srcAccessMask DWORD ?
    dstAccessMask DWORD ?
    oldLayout DWORD ?
    newLayout DWORD ?
    srcQueueFamilyIndex DWORD ?
    dstQueueFamilyIndex DWORD ?
    image DWORD ?
    subresourceRange DWORD ?
VkImageMemoryBarrier ENDS

VkMemoryBarrier STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    srcAccessMask DWORD ?
    dstAccessMask DWORD ?
VkMemoryBarrier ENDS

VkPipelineCacheHeaderVersionOne STRUCT
    headerSize DWORD ?
    headerVersion DWORD ?
    vendorID DWORD ?
    deviceID DWORD ?
VkPipelineCacheHeaderVersionOne ENDS

VkAllocationCallbacks STRUCT
    pUserData QWORD ?
    pfnAllocation DWORD ?
    pfnReallocation DWORD ?
    pfnFree DWORD ?
    pfnInternalAllocation DWORD ?
    pfnInternalFree DWORD ?
    BYTE 4 dup(?)
VkAllocationCallbacks ENDS

VkApplicationInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    pApplicationName QWORD ?
    applicationVersion DWORD ?
    BYTE 4 dup(?)
    pEngineName QWORD ?
    engineVersion DWORD ?
    apiVersion DWORD ?
VkApplicationInfo ENDS

VkFormatProperties STRUCT
    linearTilingFeatures DWORD ?
    optimalTilingFeatures DWORD ?
    bufferFeatures DWORD ?
VkFormatProperties ENDS

VkImageFormatProperties STRUCT
    maxExtent DWORD ?
    maxMipLevels DWORD ?
    maxArrayLayers DWORD ?
    sampleCounts DWORD ?
    maxResourceSize DWORD ?
VkImageFormatProperties ENDS

VkInstanceCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    BYTE 4 dup(?)
    pApplicationInfo QWORD ?
    enabledLayerCount DWORD ?
    BYTE 4 dup(?)
    ppEnabledLayerNames QWORD ?
    enabledExtensionCount DWORD ?
    BYTE 4 dup(?)
    ppEnabledExtensionNames QWORD ?
VkInstanceCreateInfo ENDS

VkMemoryHeap STRUCT
    m_size DWORD ?
    flags DWORD ?
VkMemoryHeap ENDS

VkMemoryType STRUCT
    propertyFlags DWORD ?
    heapIndex DWORD ?
VkMemoryType ENDS

VkPhysicalDeviceFeatures STRUCT
    robustBufferAccess DWORD ?
    fullDrawIndexUint32 DWORD ?
    imageCubeArray DWORD ?
    independentBlend DWORD ?
    geometryShader DWORD ?
    tessellationShader DWORD ?
    sampleRateShading DWORD ?
    dualSrcBlend DWORD ?
    logicOp DWORD ?
    multiDrawIndirect DWORD ?
    drawIndirectFirstInstance DWORD ?
    depthClamp DWORD ?
    depthBiasClamp DWORD ?
    fillModeNonSolid DWORD ?
    depthBounds DWORD ?
    wideLines DWORD ?
    largePoints DWORD ?
    alphaToOne DWORD ?
    multiViewport DWORD ?
    samplerAnisotropy DWORD ?
    textureCompressionETC2 DWORD ?
    textureCompressionASTC_LDR DWORD ?
    textureCompressionBC DWORD ?
    occlusionQueryPrecise DWORD ?
    pipelineStatisticsQuery DWORD ?
    vertexPipelineStoresAndAtomics DWORD ?
    fragmentStoresAndAtomics DWORD ?
    shaderTessellationAndGeometryPointSize DWORD ?
    shaderImageGatherExtended DWORD ?
    shaderStorageImageExtendedFormats DWORD ?
    shaderStorageImageMultisample DWORD ?
    shaderStorageImageReadWithoutFormat DWORD ?
    shaderStorageImageWriteWithoutFormat DWORD ?
    shaderUniformBufferArrayDynamicIndexing DWORD ?
    shaderSampledImageArrayDynamicIndexing DWORD ?
    shaderStorageBufferArrayDynamicIndexing DWORD ?
    shaderStorageImageArrayDynamicIndexing DWORD ?
    shaderClipDistance DWORD ?
    shaderCullDistance DWORD ?
    shaderFloat64 DWORD ?
    shaderInt64 DWORD ?
    shaderInt16 DWORD ?
    shaderResourceResidency DWORD ?
    shaderResourceMinLod DWORD ?
    sparseBinding DWORD ?
    sparseResidencyBuffer DWORD ?
    sparseResidencyImage2D DWORD ?
    sparseResidencyImage3D DWORD ?
    sparseResidency2Samples DWORD ?
    sparseResidency4Samples DWORD ?
    sparseResidency8Samples DWORD ?
    sparseResidency16Samples DWORD ?
    sparseResidencyAliased DWORD ?
    variableMultisampleRate DWORD ?
    inheritedQueries DWORD ?
VkPhysicalDeviceFeatures ENDS

VkPhysicalDeviceLimits STRUCT
    maxImageDimension1D DWORD ?
    maxImageDimension2D DWORD ?
    maxImageDimension3D DWORD ?
    maxImageDimensionCube DWORD ?
    maxImageArrayLayers DWORD ?
    maxTexelBufferElements DWORD ?
    maxUniformBufferRange DWORD ?
    maxStorageBufferRange DWORD ?
    maxPushConstantsSize DWORD ?
    maxMemoryAllocationCount DWORD ?
    maxSamplerAllocationCount DWORD ?
    bufferImageGranularity DWORD ?
    sparseAddressSpaceSize DWORD ?
    maxBoundDescriptorSets DWORD ?
    maxPerStageDescriptorSamplers DWORD ?
    maxPerStageDescriptorUniformBuffers DWORD ?
    maxPerStageDescriptorStorageBuffers DWORD ?
    maxPerStageDescriptorSampledImages DWORD ?
    maxPerStageDescriptorStorageImages DWORD ?
    maxPerStageDescriptorInputAttachments DWORD ?
    maxPerStageResources DWORD ?
    maxDescriptorSetSamplers DWORD ?
    maxDescriptorSetUniformBuffers DWORD ?
    maxDescriptorSetUniformBuffersDynamic DWORD ?
    maxDescriptorSetStorageBuffers DWORD ?
    maxDescriptorSetStorageBuffersDynamic DWORD ?
    maxDescriptorSetSampledImages DWORD ?
    maxDescriptorSetStorageImages DWORD ?
    maxDescriptorSetInputAttachments DWORD ?
    maxVertexInputAttributes DWORD ?
    maxVertexInputBindings DWORD ?
    maxVertexInputAttributeOffset DWORD ?
    maxVertexInputBindingStride DWORD ?
    maxVertexOutputComponents DWORD ?
    maxTessellationGenerationLevel DWORD ?
    maxTessellationPatchSize DWORD ?
    maxTessellationControlPerVertexInputComponents DWORD ?
    maxTessellationControlPerVertexOutputComponents DWORD ?
    maxTessellationControlPerPatchOutputComponents DWORD ?
    maxTessellationControlTotalOutputComponents DWORD ?
    maxTessellationEvaluationInputComponents DWORD ?
    maxTessellationEvaluationOutputComponents DWORD ?
    maxGeometryShaderInvocations DWORD ?
    maxGeometryInputComponents DWORD ?
    maxGeometryOutputComponents DWORD ?
    maxGeometryOutputVertices DWORD ?
    maxGeometryTotalOutputComponents DWORD ?
    maxFragmentInputComponents DWORD ?
    maxFragmentOutputAttachments DWORD ?
    maxFragmentDualSrcAttachments DWORD ?
    maxFragmentCombinedOutputResources DWORD ?
    maxComputeSharedMemorySize DWORD ?
    maxComputeWorkGroupCount DWORD 3 dup(?)
    maxComputeWorkGroupInvocations DWORD ?
    maxComputeWorkGroupSize DWORD 3 dup(?)
    subPixelPrecisionBits DWORD ?
    subTexelPrecisionBits DWORD ?
    mipmapPrecisionBits DWORD ?
    maxDrawIndexedIndexValue DWORD ?
    maxDrawIndirectCount DWORD ?
    maxSamplerLodBias DWORD ?
    maxSamplerAnisotropy DWORD ?
    maxViewports DWORD ?
    maxViewportDimensions DWORD 2 dup(?)
    viewportBoundsRange DWORD 2 dup(?)
    viewportSubPixelBits DWORD ?
    minMemoryMapAlignment QWORD ?
    minTexelBufferOffsetAlignment DWORD ?
    minUniformBufferOffsetAlignment DWORD ?
    minStorageBufferOffsetAlignment DWORD ?
    minTexelOffset DWORD ?
    maxTexelOffset DWORD ?
    minTexelGatherOffset DWORD ?
    maxTexelGatherOffset DWORD ?
    minInterpolationOffset DWORD ?
    maxInterpolationOffset DWORD ?
    subPixelInterpolationOffsetBits DWORD ?
    maxFramebufferWidth DWORD ?
    maxFramebufferHeight DWORD ?
    maxFramebufferLayers DWORD ?
    framebufferColorSampleCounts DWORD ?
    framebufferDepthSampleCounts DWORD ?
    framebufferStencilSampleCounts DWORD ?
    framebufferNoAttachmentsSampleCounts DWORD ?
    maxColorAttachments DWORD ?
    sampledImageColorSampleCounts DWORD ?
    sampledImageIntegerSampleCounts DWORD ?
    sampledImageDepthSampleCounts DWORD ?
    sampledImageStencilSampleCounts DWORD ?
    storageImageSampleCounts DWORD ?
    maxSampleMaskWords DWORD ?
    timestampComputeAndGraphics DWORD ?
    timestampPeriod DWORD ?
    maxClipDistances DWORD ?
    maxCullDistances DWORD ?
    maxCombinedClipAndCullDistances DWORD ?
    discreteQueuePriorities DWORD ?
    pointSizeRange DWORD 2 dup(?)
    lineWidthRange DWORD 2 dup(?)
    pointSizeGranularity DWORD ?
    lineWidthGranularity DWORD ?
    strictLines DWORD ?
    standardSampleLocations DWORD ?
    optimalBufferCopyOffsetAlignment DWORD ?
    optimalBufferCopyRowPitchAlignment DWORD ?
    nonCoherentAtomSize DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceLimits ENDS

VkPhysicalDeviceMemoryProperties STRUCT
    memoryTypeCount DWORD ?
    memoryHeapCount DWORD ?
VkPhysicalDeviceMemoryProperties ENDS

VkPhysicalDeviceSparseProperties STRUCT
    residencyStandard2DBlockShape DWORD ?
    residencyStandard2DMultisampleBlockShape DWORD ?
    residencyStandard3DBlockShape DWORD ?
    residencyAlignedMipSize DWORD ?
    residencyNonResidentStrict DWORD ?
VkPhysicalDeviceSparseProperties ENDS

VkPhysicalDeviceProperties STRUCT
    apiVersion DWORD ?
    driverVersion DWORD ?
    vendorID DWORD ?
    deviceID DWORD ?
    deviceType DWORD ?
    limits DWORD ?
    sparseProperties DWORD ?
VkPhysicalDeviceProperties ENDS

VkQueueFamilyProperties STRUCT
    queueFlags DWORD ?
    queueCount DWORD ?
    timestampValidBits DWORD ?
    minImageTransferGranularity DWORD ?
VkQueueFamilyProperties ENDS

VkDeviceQueueCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    queueFamilyIndex DWORD ?
    queueCount DWORD ?
    BYTE 4 dup(?)
    pQueuePriorities QWORD ?
VkDeviceQueueCreateInfo ENDS

VkDeviceCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    queueCreateInfoCount DWORD ?
    pQueueCreateInfos QWORD ?
    enabledLayerCount DWORD ?
    BYTE 4 dup(?)
    ppEnabledLayerNames QWORD ?
    enabledExtensionCount DWORD ?
    BYTE 4 dup(?)
    ppEnabledExtensionNames QWORD ?
    pEnabledFeatures QWORD ?
VkDeviceCreateInfo ENDS

VkExtensionProperties STRUCT
    specVersion DWORD ?
VkExtensionProperties ENDS

VK_MAX_EXTENSION_NAME_SIZE equ 256
VK_MAX_DESCRIPTION_SIZE equ 256
align 4
VkLayerProperties STRUCT
    layerName BYTE VK_MAX_EXTENSION_NAME_SIZE dup(?)
    specVersion DWORD ?
    implementationVersion DWORD ?
    description BYTE VK_MAX_DESCRIPTION_SIZE dup(?)
VkLayerProperties ENDS

VkSubmitInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    waitSemaphoreCount DWORD ?
    BYTE 4 dup(?)
    pWaitSemaphores QWORD ?
    pWaitDstStageMask QWORD ?
    commandBufferCount DWORD ?
    BYTE 4 dup(?)
    pCommandBuffers QWORD ?
    signalSemaphoreCount DWORD ?
    BYTE 4 dup(?)
    pSignalSemaphores QWORD ?
VkSubmitInfo ENDS

VkMappedMemoryRange STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    memory DWORD ?
    m_offset DWORD ?
    m_size DWORD ?
    BYTE 4 dup(?)
VkMappedMemoryRange ENDS

VkMemoryAllocateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    allocationSize DWORD ?
    memoryTypeIndex DWORD ?
VkMemoryAllocateInfo ENDS

VkMemoryRequirements STRUCT
    m_size DWORD ?
    alignment DWORD ?
    memoryTypeBits DWORD ?
VkMemoryRequirements ENDS

VkSparseMemoryBind STRUCT
    resourceOffset DWORD ?
    m_size DWORD ?
    memory DWORD ?
    memoryOffset DWORD ?
    flags DWORD ?
VkSparseMemoryBind ENDS

VkSparseBufferMemoryBindInfo STRUCT
    buffer DWORD ?
    bindCount DWORD ?
    pBinds QWORD ?
VkSparseBufferMemoryBindInfo ENDS

VkSparseImageOpaqueMemoryBindInfo STRUCT
    image DWORD ?
    bindCount DWORD ?
    pBinds QWORD ?
VkSparseImageOpaqueMemoryBindInfo ENDS

VkImageSubresource STRUCT
    aspectMask DWORD ?
    mipLevel DWORD ?
    arrayLayer DWORD ?
VkImageSubresource ENDS

VkSparseImageMemoryBind STRUCT
    subresource DWORD ?
    m_offset DWORD ?
    extent DWORD ?
    memory DWORD ?
    memoryOffset DWORD ?
    flags DWORD ?
VkSparseImageMemoryBind ENDS

VkSparseImageMemoryBindInfo STRUCT
    image DWORD ?
    bindCount DWORD ?
    pBinds QWORD ?
VkSparseImageMemoryBindInfo ENDS

VkBindSparseInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    waitSemaphoreCount DWORD ?
    BYTE 4 dup(?)
    pWaitSemaphores QWORD ?
    bufferBindCount DWORD ?
    BYTE 4 dup(?)
    pBufferBinds QWORD ?
    imageOpaqueBindCount DWORD ?
    BYTE 4 dup(?)
    pImageOpaqueBinds QWORD ?
    imageBindCount DWORD ?
    BYTE 4 dup(?)
    pImageBinds QWORD ?
    signalSemaphoreCount DWORD ?
    BYTE 4 dup(?)
    pSignalSemaphores QWORD ?
VkBindSparseInfo ENDS

VkSparseImageFormatProperties STRUCT
    aspectMask DWORD ?
    imageGranularity DWORD ?
    flags DWORD ?
VkSparseImageFormatProperties ENDS

VkSparseImageMemoryRequirements STRUCT
    formatProperties DWORD ?
    imageMipTailFirstLod DWORD ?
    imageMipTailSize DWORD ?
    imageMipTailOffset DWORD ?
    imageMipTailStride DWORD ?
VkSparseImageMemoryRequirements ENDS

VkFenceCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    BYTE 4 dup(?)
VkFenceCreateInfo ENDS

VkSemaphoreCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    BYTE 4 dup(?)
VkSemaphoreCreateInfo ENDS

VkEventCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    BYTE 4 dup(?)
VkEventCreateInfo ENDS

VkQueryPoolCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    queryType DWORD ?
    queryCount DWORD ?
    pipelineStatistics DWORD ?
VkQueryPoolCreateInfo ENDS

VkBufferCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    m_size DWORD ?
    usage DWORD ?
    sharingMode DWORD ?
    queueFamilyIndexCount DWORD ?
    BYTE 4 dup(?)
    pQueueFamilyIndices QWORD ?
VkBufferCreateInfo ENDS

VkBufferViewCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    buffer DWORD ?
    format DWORD ?
    m_offset DWORD ?
    range DWORD ?
    BYTE 4 dup(?)
VkBufferViewCreateInfo ENDS

VkImageCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    imageType DWORD ?
    format DWORD ?
    extent DWORD ?
    mipLevels DWORD ?
    arrayLayers DWORD ?
    samples DWORD ?
    tiling DWORD ?
    usage DWORD ?
    sharingMode DWORD ?
    queueFamilyIndexCount DWORD ?
    BYTE 4 dup(?)
    pQueueFamilyIndices QWORD ?
    initialLayout DWORD ?
    BYTE 4 dup(?)
VkImageCreateInfo ENDS

VkSubresourceLayout STRUCT
    m_offset DWORD ?
    m_size DWORD ?
    rowPitch DWORD ?
    arrayPitch DWORD ?
    depthPitch DWORD ?
VkSubresourceLayout ENDS

VkComponentMapping STRUCT
    r DWORD ?
    g DWORD ?
    b DWORD ?
    a DWORD ?
VkComponentMapping ENDS

VkImageViewCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    image DWORD ?
    viewType DWORD ?
    format DWORD ?
    components DWORD ?
    subresourceRange DWORD ?
VkImageViewCreateInfo ENDS

VkShaderModuleCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    BYTE 4 dup(?)
    codeSize QWORD ?
    pCode QWORD ?
VkShaderModuleCreateInfo ENDS

VkPipelineCacheCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    BYTE 4 dup(?)
    initialDataSize QWORD ?
    pInitialData QWORD ?
VkPipelineCacheCreateInfo ENDS

VkSpecializationMapEntry STRUCT
    constantID DWORD ?
    m_offset DWORD ?
    m_size QWORD ?
VkSpecializationMapEntry ENDS

VkSpecializationInfo STRUCT
    mapEntryCount DWORD ?
    BYTE 4 dup(?)
    pMapEntries QWORD ?
    dataSize QWORD ?
    pData QWORD ?
VkSpecializationInfo ENDS

VkPipelineShaderStageCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    stage DWORD ?
    module DWORD ?
    BYTE 4 dup(?)
    pName QWORD ?
    pSpecializationInfo QWORD ?
VkPipelineShaderStageCreateInfo ENDS

VkComputePipelineCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    stage DWORD ?
    layout DWORD ?
    basePipelineHandle DWORD ?
    basePipelineIndex DWORD ?
    BYTE 4 dup(?)
VkComputePipelineCreateInfo ENDS

VkVertexInputBindingDescription STRUCT
    binding DWORD ?
    stride DWORD ?
    inputRate DWORD ?
VkVertexInputBindingDescription ENDS

VkVertexInputAttributeDescription STRUCT
    location DWORD ?
    binding DWORD ?
    format DWORD ?
    m_offset DWORD ?
VkVertexInputAttributeDescription ENDS

VkPipelineVertexInputStateCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    vertexBindingDescriptionCount DWORD ?
    pVertexBindingDescriptions QWORD ?
    vertexAttributeDescriptionCount DWORD ?
    BYTE 4 dup(?)
    pVertexAttributeDescriptions QWORD ?
VkPipelineVertexInputStateCreateInfo ENDS

VkPipelineInputAssemblyStateCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    topology DWORD ?
    primitiveRestartEnable DWORD ?
    BYTE 4 dup(?)
VkPipelineInputAssemblyStateCreateInfo ENDS

VkPipelineTessellationStateCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    patchControlPoints DWORD ?
VkPipelineTessellationStateCreateInfo ENDS

VkViewport STRUCT
    x DWORD ?
    y DWORD ?
    m_width DWORD ?
    height DWORD ?
    minDepth DWORD ?
    maxDepth DWORD ?
VkViewport ENDS

VkPipelineViewportStateCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    viewportCount DWORD ?
    pViewports QWORD ?
    scissorCount DWORD ?
    BYTE 4 dup(?)
    pScissors QWORD ?
VkPipelineViewportStateCreateInfo ENDS

VkPipelineRasterizationStateCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    depthClampEnable DWORD ?
    rasterizerDiscardEnable DWORD ?
    polygonMode DWORD ?
    cullMode DWORD ?
    frontFace DWORD ?
    depthBiasEnable DWORD ?
    depthBiasConstantFactor DWORD ?
    depthBiasClamp DWORD ?
    depthBiasSlopeFactor DWORD ?
    lineWidth DWORD ?
    BYTE 4 dup(?)
VkPipelineRasterizationStateCreateInfo ENDS

VkPipelineMultisampleStateCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    rasterizationSamples DWORD ?
    sampleShadingEnable DWORD ?
    minSampleShading DWORD ?
    pSampleMask QWORD ?
    alphaToCoverageEnable DWORD ?
    alphaToOneEnable DWORD ?
VkPipelineMultisampleStateCreateInfo ENDS

VkStencilOpState STRUCT
    failOp DWORD ?
    passOp DWORD ?
    depthFailOp DWORD ?
    compareOp DWORD ?
    compareMask DWORD ?
    writeMask DWORD ?
    reference DWORD ?
VkStencilOpState ENDS

VkPipelineDepthStencilStateCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    depthTestEnable DWORD ?
    depthWriteEnable DWORD ?
    depthCompareOp DWORD ?
    depthBoundsTestEnable DWORD ?
    stencilTestEnable DWORD ?
    front DWORD ?
    back DWORD ?
    minDepthBounds DWORD ?
    maxDepthBounds DWORD ?
VkPipelineDepthStencilStateCreateInfo ENDS

VkPipelineColorBlendAttachmentState STRUCT
    blendEnable DWORD ?
    srcColorBlendFactor DWORD ?
    dstColorBlendFactor DWORD ?
    colorBlendOp DWORD ?
    srcAlphaBlendFactor DWORD ?
    dstAlphaBlendFactor DWORD ?
    alphaBlendOp DWORD ?
    colorWriteMask DWORD ?
VkPipelineColorBlendAttachmentState ENDS

VkPipelineColorBlendStateCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    logicOpEnable DWORD ?
    logicOp DWORD ?
    attachmentCount DWORD ?
    pAttachments QWORD ?
    blendConstants DWORD 4 dup(?)
VkPipelineColorBlendStateCreateInfo ENDS

VkPipelineDynamicStateCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    dynamicStateCount DWORD ?
    pDynamicStates QWORD ?
VkPipelineDynamicStateCreateInfo ENDS

VkGraphicsPipelineCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    stageCount DWORD ?
    pStages QWORD ?
    pVertexInputState QWORD ?
    pInputAssemblyState QWORD ?
    pTessellationState QWORD ?
    pViewportState QWORD ?
    pRasterizationState QWORD ?
    pMultisampleState QWORD ?
    pDepthStencilState QWORD ?
    pColorBlendState QWORD ?
    pDynamicState QWORD ?
    layout DWORD ?
    renderPass DWORD ?
    subpass DWORD ?
    basePipelineHandle DWORD ?
    basePipelineIndex DWORD ?
    BYTE 4 dup(?)
VkGraphicsPipelineCreateInfo ENDS

VkPushConstantRange STRUCT
    stageFlags DWORD ?
    m_offset DWORD ?
    m_size DWORD ?
VkPushConstantRange ENDS

VkPipelineLayoutCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    setLayoutCount DWORD ?
    pSetLayouts QWORD ?
    pushConstantRangeCount DWORD ?
    BYTE 4 dup(?)
    pPushConstantRanges QWORD ?
VkPipelineLayoutCreateInfo ENDS

VkSamplerCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    magFilter DWORD ?
    minFilter DWORD ?
    mipmapMode DWORD ?
    addressModeU DWORD ?
    addressModeV DWORD ?
    addressModeW DWORD ?
    mipLodBias DWORD ?
    anisotropyEnable DWORD ?
    maxAnisotropy DWORD ?
    compareEnable DWORD ?
    compareOp DWORD ?
    minLod DWORD ?
    maxLod DWORD ?
    borderColor DWORD ?
    unnormalizedCoordinates DWORD ?
VkSamplerCreateInfo ENDS

VkCopyDescriptorSet STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    srcSet DWORD ?
    srcBinding DWORD ?
    srcArrayElement DWORD ?
    dstSet DWORD ?
    dstBinding DWORD ?
    dstArrayElement DWORD ?
    descriptorCount DWORD ?
    BYTE 4 dup(?)
VkCopyDescriptorSet ENDS

VkDescriptorBufferInfo STRUCT
    buffer DWORD ?
    m_offset DWORD ?
    range DWORD ?
VkDescriptorBufferInfo ENDS

VkDescriptorImageInfo STRUCT
    sampler DWORD ?
    imageView DWORD ?
    imageLayout DWORD ?
VkDescriptorImageInfo ENDS

VkDescriptorPoolSize STRUCT
    m_type DWORD ?
    descriptorCount DWORD ?
VkDescriptorPoolSize ENDS

VkDescriptorPoolCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    maxSets DWORD ?
    poolSizeCount DWORD ?
    BYTE 4 dup(?)
    pPoolSizes QWORD ?
VkDescriptorPoolCreateInfo ENDS

VkDescriptorSetAllocateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    descriptorPool DWORD ?
    descriptorSetCount DWORD ?
    pSetLayouts QWORD ?
VkDescriptorSetAllocateInfo ENDS

VkDescriptorSetLayoutBinding STRUCT
    binding DWORD ?
    descriptorType DWORD ?
    descriptorCount DWORD ?
    stageFlags DWORD ?
    pImmutableSamplers QWORD ?
VkDescriptorSetLayoutBinding ENDS

VkDescriptorSetLayoutCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    bindingCount DWORD ?
    pBindings QWORD ?
VkDescriptorSetLayoutCreateInfo ENDS

VkWriteDescriptorSet STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    dstSet DWORD ?
    dstBinding DWORD ?
    dstArrayElement DWORD ?
    descriptorCount DWORD ?
    descriptorType DWORD ?
    BYTE 4 dup(?)
    pImageInfo QWORD ?
    pBufferInfo QWORD ?
    pTexelBufferView QWORD ?
VkWriteDescriptorSet ENDS

VkAttachmentDescription STRUCT
    flags DWORD ?
    format DWORD ?
    samples DWORD ?
    loadOp DWORD ?
    storeOp DWORD ?
    stencilLoadOp DWORD ?
    stencilStoreOp DWORD ?
    initialLayout DWORD ?
    finalLayout DWORD ?
VkAttachmentDescription ENDS

VkAttachmentReference STRUCT
    attachment DWORD ?
    layout DWORD ?
VkAttachmentReference ENDS

VkFramebufferCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    renderPass DWORD ?
    attachmentCount DWORD ?
    BYTE 4 dup(?)
    pAttachments QWORD ?
    m_width DWORD ?
    height DWORD ?
    layers DWORD ?
    BYTE 4 dup(?)
VkFramebufferCreateInfo ENDS

VkSubpassDescription STRUCT
    flags DWORD ?
    pipelineBindPoint DWORD ?
    inputAttachmentCount DWORD ?
    BYTE 4 dup(?)
    pInputAttachments QWORD ?
    colorAttachmentCount DWORD ?
    BYTE 4 dup(?)
    pColorAttachments QWORD ?
    pResolveAttachments QWORD ?
    pDepthStencilAttachment QWORD ?
    preserveAttachmentCount DWORD ?
    BYTE 4 dup(?)
    pPreserveAttachments QWORD ?
VkSubpassDescription ENDS

VkSubpassDependency STRUCT
    srcSubpass DWORD ?
    dstSubpass DWORD ?
    srcStageMask DWORD ?
    dstStageMask DWORD ?
    srcAccessMask DWORD ?
    dstAccessMask DWORD ?
    dependencyFlags DWORD ?
VkSubpassDependency ENDS

VkRenderPassCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    attachmentCount DWORD ?
    pAttachments QWORD ?
    subpassCount DWORD ?
    BYTE 4 dup(?)
    pSubpasses QWORD ?
    dependencyCount DWORD ?
    BYTE 4 dup(?)
    pDependencies QWORD ?
VkRenderPassCreateInfo ENDS

VkCommandPoolCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    queueFamilyIndex DWORD ?
VkCommandPoolCreateInfo ENDS

VkCommandBufferAllocateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    commandPool DWORD ?
    level DWORD ?
    commandBufferCount DWORD ?
    BYTE 4 dup(?)
VkCommandBufferAllocateInfo ENDS

VkCommandBufferInheritanceInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    renderPass DWORD ?
    subpass DWORD ?
    framebuffer DWORD ?
    occlusionQueryEnable DWORD ?
    queryFlags DWORD ?
    pipelineStatistics DWORD ?
VkCommandBufferInheritanceInfo ENDS

VkCommandBufferBeginInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    BYTE 4 dup(?)
    pInheritanceInfo QWORD ?
VkCommandBufferBeginInfo ENDS

VkBufferCopy STRUCT
    srcOffset DWORD ?
    dstOffset DWORD ?
    m_size DWORD ?
VkBufferCopy ENDS

VkImageSubresourceLayers STRUCT
    aspectMask DWORD ?
    mipLevel DWORD ?
    baseArrayLayer DWORD ?
    layerCount DWORD ?
VkImageSubresourceLayers ENDS

VkBufferImageCopy STRUCT
    bufferOffset DWORD ?
    bufferRowLength DWORD ?
    bufferImageHeight DWORD ?
    imageSubresource DWORD ?
    imageOffset DWORD ?
    imageExtent DWORD ?
VkBufferImageCopy ENDS

VkClearDepthStencilValue STRUCT
    depth DWORD ?
    stencil DWORD ?
VkClearDepthStencilValue ENDS

VkClearAttachment STRUCT
    aspectMask DWORD ?
    colorAttachment DWORD ?
    clearValue DWORD ?
VkClearAttachment ENDS

VkClearRect STRUCT
    rect DWORD ?
    baseArrayLayer DWORD ?
    layerCount DWORD ?
VkClearRect ENDS

VkImageBlit STRUCT
    srcSubresource DWORD ?
    srcOffsets DWORD 2 dup(?)
    dstSubresource DWORD ?
    dstOffsets DWORD 2 dup(?)
VkImageBlit ENDS

VkImageCopy STRUCT
    srcSubresource DWORD ?
    srcOffset DWORD ?
    dstSubresource DWORD ?
    dstOffset DWORD ?
    extent DWORD ?
VkImageCopy ENDS

VkImageResolve STRUCT
    srcSubresource DWORD ?
    srcOffset DWORD ?
    dstSubresource DWORD ?
    dstOffset DWORD ?
    extent DWORD ?
VkImageResolve ENDS

VkRenderPassBeginInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    renderPass DWORD ?
    framebuffer DWORD ?
    renderArea DWORD ?
    clearValueCount DWORD ?
    pClearValues QWORD ?
VkRenderPassBeginInfo ENDS

VkPhysicalDeviceSubgroupProperties STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    subgroupSize DWORD ?
    supportedStages DWORD ?
    supportedOperations DWORD ?
    quadOperationsInAllStages DWORD ?
VkPhysicalDeviceSubgroupProperties ENDS

VkBindBufferMemoryInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    buffer DWORD ?
    memory DWORD ?
    memoryOffset DWORD ?
    BYTE 4 dup(?)
VkBindBufferMemoryInfo ENDS

VkBindImageMemoryInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    image DWORD ?
    memory DWORD ?
    memoryOffset DWORD ?
    BYTE 4 dup(?)
VkBindImageMemoryInfo ENDS

VkPhysicalDevice16BitStorageFeatures STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    storageBuffer16BitAccess DWORD ?
    uniformAndStorageBuffer16BitAccess DWORD ?
    storagePushConstant16 DWORD ?
    storageInputOutput16 DWORD ?
VkPhysicalDevice16BitStorageFeatures ENDS

VkMemoryDedicatedRequirements STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    prefersDedicatedAllocation DWORD ?
    requiresDedicatedAllocation DWORD ?
VkMemoryDedicatedRequirements ENDS

VkMemoryDedicatedAllocateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    image DWORD ?
    buffer DWORD ?
VkMemoryDedicatedAllocateInfo ENDS

VkMemoryAllocateFlagsInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    deviceMask DWORD ?
VkMemoryAllocateFlagsInfo ENDS

VkDeviceGroupRenderPassBeginInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    deviceMask DWORD ?
    deviceRenderAreaCount DWORD ?
    pDeviceRenderAreas QWORD ?
VkDeviceGroupRenderPassBeginInfo ENDS

VkDeviceGroupCommandBufferBeginInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    deviceMask DWORD ?
    BYTE 4 dup(?)
VkDeviceGroupCommandBufferBeginInfo ENDS

VkDeviceGroupSubmitInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    waitSemaphoreCount DWORD ?
    BYTE 4 dup(?)
    pWaitSemaphoreDeviceIndices QWORD ?
    commandBufferCount DWORD ?
    BYTE 4 dup(?)
    pCommandBufferDeviceMasks QWORD ?
    signalSemaphoreCount DWORD ?
    BYTE 4 dup(?)
    pSignalSemaphoreDeviceIndices QWORD ?
VkDeviceGroupSubmitInfo ENDS

VkDeviceGroupBindSparseInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    resourceDeviceIndex DWORD ?
    memoryDeviceIndex DWORD ?
VkDeviceGroupBindSparseInfo ENDS

VkBindBufferMemoryDeviceGroupInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    deviceIndexCount DWORD ?
    BYTE 4 dup(?)
    pDeviceIndices QWORD ?
VkBindBufferMemoryDeviceGroupInfo ENDS

VkBindImageMemoryDeviceGroupInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    deviceIndexCount DWORD ?
    BYTE 4 dup(?)
    pDeviceIndices QWORD ?
    splitInstanceBindRegionCount DWORD ?
    BYTE 4 dup(?)
    pSplitInstanceBindRegions QWORD ?
VkBindImageMemoryDeviceGroupInfo ENDS

VkPhysicalDeviceGroupProperties STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    physicalDeviceCount DWORD ?
    subsetAllocation DWORD ?
VkPhysicalDeviceGroupProperties ENDS

VkDeviceGroupDeviceCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    physicalDeviceCount DWORD ?
    BYTE 4 dup(?)
    pPhysicalDevices QWORD ?
VkDeviceGroupDeviceCreateInfo ENDS

VkBufferMemoryRequirementsInfo2 STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    buffer DWORD ?
    BYTE 4 dup(?)
VkBufferMemoryRequirementsInfo2 ENDS

VkImageMemoryRequirementsInfo2 STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    image DWORD ?
    BYTE 4 dup(?)
VkImageMemoryRequirementsInfo2 ENDS

VkImageSparseMemoryRequirementsInfo2 STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    image DWORD ?
    BYTE 4 dup(?)
VkImageSparseMemoryRequirementsInfo2 ENDS

VkMemoryRequirements2 STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    memoryRequirements DWORD ?
    BYTE 4 dup(?)
VkMemoryRequirements2 ENDS

VkSparseImageMemoryRequirements2 STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    memoryRequirements DWORD ?
    BYTE 4 dup(?)
VkSparseImageMemoryRequirements2 ENDS

VkPhysicalDeviceFeatures2 STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    features DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceFeatures2 ENDS

VkPhysicalDeviceProperties2 STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    properties DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceProperties2 ENDS

VkFormatProperties2 STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    formatProperties DWORD ?
    BYTE 4 dup(?)
VkFormatProperties2 ENDS

VkImageFormatProperties2 STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    imageFormatProperties DWORD ?
    BYTE 4 dup(?)
VkImageFormatProperties2 ENDS

VkPhysicalDeviceImageFormatInfo2 STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    format DWORD ?
    m_type DWORD ?
    tiling DWORD ?
    usage DWORD ?
    flags DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceImageFormatInfo2 ENDS

VkQueueFamilyProperties2 STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    queueFamilyProperties DWORD ?
    BYTE 4 dup(?)
VkQueueFamilyProperties2 ENDS

VkPhysicalDeviceMemoryProperties2 STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    memoryProperties DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceMemoryProperties2 ENDS

VkSparseImageFormatProperties2 STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    properties DWORD ?
    BYTE 4 dup(?)
VkSparseImageFormatProperties2 ENDS

VkPhysicalDeviceSparseImageFormatInfo2 STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    format DWORD ?
    m_type DWORD ?
    samples DWORD ?
    usage DWORD ?
    tiling DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceSparseImageFormatInfo2 ENDS

VkPhysicalDevicePointClippingProperties STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    pointClippingBehavior DWORD ?
    BYTE 4 dup(?)
VkPhysicalDevicePointClippingProperties ENDS

VkInputAttachmentAspectReference STRUCT
    subpass DWORD ?
    inputAttachmentIndex DWORD ?
    aspectMask DWORD ?
VkInputAttachmentAspectReference ENDS

VkRenderPassInputAttachmentAspectCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    aspectReferenceCount DWORD ?
    BYTE 4 dup(?)
    pAspectReferences QWORD ?
VkRenderPassInputAttachmentAspectCreateInfo ENDS

VkImageViewUsageCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    usage DWORD ?
    BYTE 4 dup(?)
VkImageViewUsageCreateInfo ENDS

VkPipelineTessellationDomainOriginStateCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    domainOrigin DWORD ?
    BYTE 4 dup(?)
VkPipelineTessellationDomainOriginStateCreateInfo ENDS

VkRenderPassMultiviewCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    subpassCount DWORD ?
    BYTE 4 dup(?)
    pViewMasks QWORD ?
    dependencyCount DWORD ?
    BYTE 4 dup(?)
    pViewOffsets QWORD ?
    correlationMaskCount DWORD ?
    BYTE 4 dup(?)
    pCorrelationMasks QWORD ?
VkRenderPassMultiviewCreateInfo ENDS

VkPhysicalDeviceMultiviewFeatures STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    multiview DWORD ?
    multiviewGeometryShader DWORD ?
    multiviewTessellationShader DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceMultiviewFeatures ENDS

VkPhysicalDeviceMultiviewProperties STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    maxMultiviewViewCount DWORD ?
    maxMultiviewInstanceIndex DWORD ?
VkPhysicalDeviceMultiviewProperties ENDS

VkPhysicalDeviceVariablePointersFeatures STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    variablePointersStorageBuffer DWORD ?
    variablePointers DWORD ?
VkPhysicalDeviceVariablePointersFeatures ENDS

VkPhysicalDeviceProtectedMemoryFeatures STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    protectedMemory DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceProtectedMemoryFeatures ENDS

VkPhysicalDeviceProtectedMemoryProperties STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    protectedNoFault DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceProtectedMemoryProperties ENDS

VkDeviceQueueInfo2 STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    queueFamilyIndex DWORD ?
    queueIndex DWORD ?
    BYTE 4 dup(?)
VkDeviceQueueInfo2 ENDS

VkProtectedSubmitInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    protectedSubmit DWORD ?
    BYTE 4 dup(?)
VkProtectedSubmitInfo ENDS

VkSamplerYcbcrConversionCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    format DWORD ?
    ycbcrModel DWORD ?
    ycbcrRange DWORD ?
    components DWORD ?
    xChromaOffset DWORD ?
    yChromaOffset DWORD ?
    chromaFilter DWORD ?
    forceExplicitReconstruction DWORD ?
VkSamplerYcbcrConversionCreateInfo ENDS

VkSamplerYcbcrConversionInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    conversion DWORD ?
    BYTE 4 dup(?)
VkSamplerYcbcrConversionInfo ENDS

VkBindImagePlaneMemoryInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    planeAspect DWORD ?
    BYTE 4 dup(?)
VkBindImagePlaneMemoryInfo ENDS

VkImagePlaneMemoryRequirementsInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    planeAspect DWORD ?
    BYTE 4 dup(?)
VkImagePlaneMemoryRequirementsInfo ENDS

VkPhysicalDeviceSamplerYcbcrConversionFeatures STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    samplerYcbcrConversion DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceSamplerYcbcrConversionFeatures ENDS

VkSamplerYcbcrConversionImageFormatProperties STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    combinedImageSamplerDescriptorCount DWORD ?
    BYTE 4 dup(?)
VkSamplerYcbcrConversionImageFormatProperties ENDS

VkDescriptorUpdateTemplateEntry STRUCT
    dstBinding DWORD ?
    dstArrayElement DWORD ?
    descriptorCount DWORD ?
    descriptorType DWORD ?
    m_offset QWORD ?
    stride QWORD ?
VkDescriptorUpdateTemplateEntry ENDS

VkDescriptorUpdateTemplateCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    descriptorUpdateEntryCount DWORD ?
    pDescriptorUpdateEntries QWORD ?
    templateType DWORD ?
    descriptorSetLayout DWORD ?
    pipelineBindPoint DWORD ?
    pipelineLayout DWORD ?
    set DWORD ?
    BYTE 4 dup(?)
VkDescriptorUpdateTemplateCreateInfo ENDS

VkExternalMemoryProperties STRUCT
    externalMemoryFeatures DWORD ?
    exportFromImportedHandleTypes DWORD ?
    compatibleHandleTypes DWORD ?
VkExternalMemoryProperties ENDS

VkPhysicalDeviceExternalImageFormatInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    handleType DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceExternalImageFormatInfo ENDS

VkExternalImageFormatProperties STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    externalMemoryProperties DWORD ?
    BYTE 4 dup(?)
VkExternalImageFormatProperties ENDS

VkPhysicalDeviceExternalBufferInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    usage DWORD ?
    handleType DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceExternalBufferInfo ENDS

VkExternalBufferProperties STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    externalMemoryProperties DWORD ?
    BYTE 4 dup(?)
VkExternalBufferProperties ENDS

VkPhysicalDeviceIDProperties STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    deviceNodeMask DWORD ?
    deviceLUIDValid DWORD ?
VkPhysicalDeviceIDProperties ENDS

VkExternalMemoryImageCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    handleTypes DWORD ?
    BYTE 4 dup(?)
VkExternalMemoryImageCreateInfo ENDS

VkExternalMemoryBufferCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    handleTypes DWORD ?
    BYTE 4 dup(?)
VkExternalMemoryBufferCreateInfo ENDS

VkExportMemoryAllocateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    handleTypes DWORD ?
    BYTE 4 dup(?)
VkExportMemoryAllocateInfo ENDS

VkPhysicalDeviceExternalFenceInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    handleType DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceExternalFenceInfo ENDS

VkExternalFenceProperties STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    exportFromImportedHandleTypes DWORD ?
    compatibleHandleTypes DWORD ?
    externalFenceFeatures DWORD ?
    BYTE 4 dup(?)
VkExternalFenceProperties ENDS

VkExportFenceCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    handleTypes DWORD ?
    BYTE 4 dup(?)
VkExportFenceCreateInfo ENDS

VkExportSemaphoreCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    handleTypes DWORD ?
    BYTE 4 dup(?)
VkExportSemaphoreCreateInfo ENDS

VkPhysicalDeviceExternalSemaphoreInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    handleType DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceExternalSemaphoreInfo ENDS

VkExternalSemaphoreProperties STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    exportFromImportedHandleTypes DWORD ?
    compatibleHandleTypes DWORD ?
    externalSemaphoreFeatures DWORD ?
    BYTE 4 dup(?)
VkExternalSemaphoreProperties ENDS

VkPhysicalDeviceMaintenance3Properties STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    maxPerSetDescriptors DWORD ?
    maxMemoryAllocationSize DWORD ?
VkPhysicalDeviceMaintenance3Properties ENDS

VkDescriptorSetLayoutSupport STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    supported DWORD ?
    BYTE 4 dup(?)
VkDescriptorSetLayoutSupport ENDS

VkPhysicalDeviceShaderDrawParametersFeatures STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    shaderDrawParameters DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceShaderDrawParametersFeatures ENDS

VkPhysicalDeviceVulkan11Features STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    storageBuffer16BitAccess DWORD ?
    uniformAndStorageBuffer16BitAccess DWORD ?
    storagePushConstant16 DWORD ?
    storageInputOutput16 DWORD ?
    multiview DWORD ?
    multiviewGeometryShader DWORD ?
    multiviewTessellationShader DWORD ?
    variablePointersStorageBuffer DWORD ?
    variablePointers DWORD ?
    protectedMemory DWORD ?
    samplerYcbcrConversion DWORD ?
    shaderDrawParameters DWORD ?
VkPhysicalDeviceVulkan11Features ENDS

VkPhysicalDeviceVulkan11Properties STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    deviceNodeMask DWORD ?
    deviceLUIDValid DWORD ?
    subgroupSize DWORD ?
    subgroupSupportedStages DWORD ?
    subgroupSupportedOperations DWORD ?
    subgroupQuadOperationsInAllStages DWORD ?
    pointClippingBehavior DWORD ?
    maxMultiviewViewCount DWORD ?
    maxMultiviewInstanceIndex DWORD ?
    protectedNoFault DWORD ?
    maxPerSetDescriptors DWORD ?
    maxMemoryAllocationSize DWORD ?
VkPhysicalDeviceVulkan11Properties ENDS

VkPhysicalDeviceVulkan12Features STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    samplerMirrorClampToEdge DWORD ?
    drawIndirectCount DWORD ?
    storageBuffer8BitAccess DWORD ?
    uniformAndStorageBuffer8BitAccess DWORD ?
    storagePushConstant8 DWORD ?
    shaderBufferInt64Atomics DWORD ?
    shaderSharedInt64Atomics DWORD ?
    shaderFloat16 DWORD ?
    shaderInt8 DWORD ?
    descriptorIndexing DWORD ?
    shaderInputAttachmentArrayDynamicIndexing DWORD ?
    shaderUniformTexelBufferArrayDynamicIndexing DWORD ?
    shaderStorageTexelBufferArrayDynamicIndexing DWORD ?
    shaderUniformBufferArrayNonUniformIndexing DWORD ?
    shaderSampledImageArrayNonUniformIndexing DWORD ?
    shaderStorageBufferArrayNonUniformIndexing DWORD ?
    shaderStorageImageArrayNonUniformIndexing DWORD ?
    shaderInputAttachmentArrayNonUniformIndexing DWORD ?
    shaderUniformTexelBufferArrayNonUniformIndexing DWORD ?
    shaderStorageTexelBufferArrayNonUniformIndexing DWORD ?
    descriptorBindingUniformBufferUpdateAfterBind DWORD ?
    descriptorBindingSampledImageUpdateAfterBind DWORD ?
    descriptorBindingStorageImageUpdateAfterBind DWORD ?
    descriptorBindingStorageBufferUpdateAfterBind DWORD ?
    descriptorBindingUniformTexelBufferUpdateAfterBind DWORD ?
    descriptorBindingStorageTexelBufferUpdateAfterBind DWORD ?
    descriptorBindingUpdateUnusedWhilePending DWORD ?
    descriptorBindingPartiallyBound DWORD ?
    descriptorBindingVariableDescriptorCount DWORD ?
    runtimeDescriptorArray DWORD ?
    samplerFilterMinmax DWORD ?
    scalarBlockLayout DWORD ?
    imagelessFramebuffer DWORD ?
    uniformBufferStandardLayout DWORD ?
    shaderSubgroupExtendedTypes DWORD ?
    separateDepthStencilLayouts DWORD ?
    hostQueryReset DWORD ?
    timelineSemaphore DWORD ?
    bufferDeviceAddress DWORD ?
    bufferDeviceAddressCaptureReplay DWORD ?
    bufferDeviceAddressMultiDevice DWORD ?
    vulkanMemoryModel DWORD ?
    vulkanMemoryModelDeviceScope DWORD ?
    vulkanMemoryModelAvailabilityVisibilityChains DWORD ?
    shaderOutputViewportIndex DWORD ?
    shaderOutputLayer DWORD ?
    subgroupBroadcastDynamicId DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceVulkan12Features ENDS

VkConformanceVersion STRUCT
    major BYTE ?
    minor BYTE ?
    subminor BYTE ?
    patch BYTE ?
VkConformanceVersion ENDS

VkPhysicalDeviceVulkan12Properties STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    driverID DWORD ?
    conformanceVersion DWORD ?
    denormBehaviorIndependence DWORD ?
    roundingModeIndependence DWORD ?
    shaderSignedZeroInfNanPreserveFloat16 DWORD ?
    shaderSignedZeroInfNanPreserveFloat32 DWORD ?
    shaderSignedZeroInfNanPreserveFloat64 DWORD ?
    shaderDenormPreserveFloat16 DWORD ?
    shaderDenormPreserveFloat32 DWORD ?
    shaderDenormPreserveFloat64 DWORD ?
    shaderDenormFlushToZeroFloat16 DWORD ?
    shaderDenormFlushToZeroFloat32 DWORD ?
    shaderDenormFlushToZeroFloat64 DWORD ?
    shaderRoundingModeRTEFloat16 DWORD ?
    shaderRoundingModeRTEFloat32 DWORD ?
    shaderRoundingModeRTEFloat64 DWORD ?
    shaderRoundingModeRTZFloat16 DWORD ?
    shaderRoundingModeRTZFloat32 DWORD ?
    shaderRoundingModeRTZFloat64 DWORD ?
    maxUpdateAfterBindDescriptorsInAllPools DWORD ?
    shaderUniformBufferArrayNonUniformIndexingNative DWORD ?
    shaderSampledImageArrayNonUniformIndexingNative DWORD ?
    shaderStorageBufferArrayNonUniformIndexingNative DWORD ?
    shaderStorageImageArrayNonUniformIndexingNative DWORD ?
    shaderInputAttachmentArrayNonUniformIndexingNative DWORD ?
    robustBufferAccessUpdateAfterBind DWORD ?
    quadDivergentImplicitLod DWORD ?
    maxPerStageDescriptorUpdateAfterBindSamplers DWORD ?
    maxPerStageDescriptorUpdateAfterBindUniformBuffers DWORD ?
    maxPerStageDescriptorUpdateAfterBindStorageBuffers DWORD ?
    maxPerStageDescriptorUpdateAfterBindSampledImages DWORD ?
    maxPerStageDescriptorUpdateAfterBindStorageImages DWORD ?
    maxPerStageDescriptorUpdateAfterBindInputAttachments DWORD ?
    maxPerStageUpdateAfterBindResources DWORD ?
    maxDescriptorSetUpdateAfterBindSamplers DWORD ?
    maxDescriptorSetUpdateAfterBindUniformBuffers DWORD ?
    maxDescriptorSetUpdateAfterBindUniformBuffersDynamic DWORD ?
    maxDescriptorSetUpdateAfterBindStorageBuffers DWORD ?
    maxDescriptorSetUpdateAfterBindStorageBuffersDynamic DWORD ?
    maxDescriptorSetUpdateAfterBindSampledImages DWORD ?
    maxDescriptorSetUpdateAfterBindStorageImages DWORD ?
    maxDescriptorSetUpdateAfterBindInputAttachments DWORD ?
    supportedDepthResolveModes DWORD ?
    supportedStencilResolveModes DWORD ?
    independentResolveNone DWORD ?
    independentResolve DWORD ?
    filterMinmaxSingleComponentFormats DWORD ?
    filterMinmaxImageComponentMapping DWORD ?
    maxTimelineSemaphoreValueDifference QWORD ?
    framebufferIntegerColorSampleCounts DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceVulkan12Properties ENDS

VkImageFormatListCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    viewFormatCount DWORD ?
    BYTE 4 dup(?)
    pViewFormats QWORD ?
VkImageFormatListCreateInfo ENDS

VkAttachmentDescription2 STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    format DWORD ?
    samples DWORD ?
    loadOp DWORD ?
    storeOp DWORD ?
    stencilLoadOp DWORD ?
    stencilStoreOp DWORD ?
    initialLayout DWORD ?
    finalLayout DWORD ?
    BYTE 4 dup(?)
VkAttachmentDescription2 ENDS

VkAttachmentReference2 STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    attachment DWORD ?
    layout DWORD ?
    aspectMask DWORD ?
    BYTE 4 dup(?)
VkAttachmentReference2 ENDS

VkSubpassDescription2 STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    pipelineBindPoint DWORD ?
    viewMask DWORD ?
    inputAttachmentCount DWORD ?
    pInputAttachments QWORD ?
    colorAttachmentCount DWORD ?
    BYTE 4 dup(?)
    pColorAttachments QWORD ?
    pResolveAttachments QWORD ?
    pDepthStencilAttachment QWORD ?
    preserveAttachmentCount DWORD ?
    BYTE 4 dup(?)
    pPreserveAttachments QWORD ?
VkSubpassDescription2 ENDS

VkSubpassDependency2 STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    srcSubpass DWORD ?
    dstSubpass DWORD ?
    srcStageMask DWORD ?
    dstStageMask DWORD ?
    srcAccessMask DWORD ?
    dstAccessMask DWORD ?
    dependencyFlags DWORD ?
    viewOffset DWORD ?
VkSubpassDependency2 ENDS

VkRenderPassCreateInfo2 STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    attachmentCount DWORD ?
    pAttachments QWORD ?
    subpassCount DWORD ?
    BYTE 4 dup(?)
    pSubpasses QWORD ?
    dependencyCount DWORD ?
    BYTE 4 dup(?)
    pDependencies QWORD ?
    correlatedViewMaskCount DWORD ?
    BYTE 4 dup(?)
    pCorrelatedViewMasks QWORD ?
VkRenderPassCreateInfo2 ENDS

VkSubpassBeginInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    contents DWORD ?
    BYTE 4 dup(?)
VkSubpassBeginInfo ENDS

VkSubpassEndInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
VkSubpassEndInfo ENDS

VkPhysicalDevice8BitStorageFeatures STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    storageBuffer8BitAccess DWORD ?
    uniformAndStorageBuffer8BitAccess DWORD ?
    storagePushConstant8 DWORD ?
    BYTE 4 dup(?)
VkPhysicalDevice8BitStorageFeatures ENDS

VkPhysicalDeviceDriverProperties STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    driverID DWORD ?
    conformanceVersion DWORD ?
VkPhysicalDeviceDriverProperties ENDS

VkPhysicalDeviceShaderAtomicInt64Features STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    shaderBufferInt64Atomics DWORD ?
    shaderSharedInt64Atomics DWORD ?
VkPhysicalDeviceShaderAtomicInt64Features ENDS

VkPhysicalDeviceShaderFloat16Int8Features STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    shaderFloat16 DWORD ?
    shaderInt8 DWORD ?
VkPhysicalDeviceShaderFloat16Int8Features ENDS

VkPhysicalDeviceFloatControlsProperties STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    denormBehaviorIndependence DWORD ?
    roundingModeIndependence DWORD ?
    shaderSignedZeroInfNanPreserveFloat16 DWORD ?
    shaderSignedZeroInfNanPreserveFloat32 DWORD ?
    shaderSignedZeroInfNanPreserveFloat64 DWORD ?
    shaderDenormPreserveFloat16 DWORD ?
    shaderDenormPreserveFloat32 DWORD ?
    shaderDenormPreserveFloat64 DWORD ?
    shaderDenormFlushToZeroFloat16 DWORD ?
    shaderDenormFlushToZeroFloat32 DWORD ?
    shaderDenormFlushToZeroFloat64 DWORD ?
    shaderRoundingModeRTEFloat16 DWORD ?
    shaderRoundingModeRTEFloat32 DWORD ?
    shaderRoundingModeRTEFloat64 DWORD ?
    shaderRoundingModeRTZFloat16 DWORD ?
    shaderRoundingModeRTZFloat32 DWORD ?
    shaderRoundingModeRTZFloat64 DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceFloatControlsProperties ENDS

VkDescriptorSetLayoutBindingFlagsCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    bindingCount DWORD ?
    BYTE 4 dup(?)
    pBindingFlags QWORD ?
VkDescriptorSetLayoutBindingFlagsCreateInfo ENDS

VkPhysicalDeviceDescriptorIndexingFeatures STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    shaderInputAttachmentArrayDynamicIndexing DWORD ?
    shaderUniformTexelBufferArrayDynamicIndexing DWORD ?
    shaderStorageTexelBufferArrayDynamicIndexing DWORD ?
    shaderUniformBufferArrayNonUniformIndexing DWORD ?
    shaderSampledImageArrayNonUniformIndexing DWORD ?
    shaderStorageBufferArrayNonUniformIndexing DWORD ?
    shaderStorageImageArrayNonUniformIndexing DWORD ?
    shaderInputAttachmentArrayNonUniformIndexing DWORD ?
    shaderUniformTexelBufferArrayNonUniformIndexing DWORD ?
    shaderStorageTexelBufferArrayNonUniformIndexing DWORD ?
    descriptorBindingUniformBufferUpdateAfterBind DWORD ?
    descriptorBindingSampledImageUpdateAfterBind DWORD ?
    descriptorBindingStorageImageUpdateAfterBind DWORD ?
    descriptorBindingStorageBufferUpdateAfterBind DWORD ?
    descriptorBindingUniformTexelBufferUpdateAfterBind DWORD ?
    descriptorBindingStorageTexelBufferUpdateAfterBind DWORD ?
    descriptorBindingUpdateUnusedWhilePending DWORD ?
    descriptorBindingPartiallyBound DWORD ?
    descriptorBindingVariableDescriptorCount DWORD ?
    runtimeDescriptorArray DWORD ?
VkPhysicalDeviceDescriptorIndexingFeatures ENDS

VkPhysicalDeviceDescriptorIndexingProperties STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    maxUpdateAfterBindDescriptorsInAllPools DWORD ?
    shaderUniformBufferArrayNonUniformIndexingNative DWORD ?
    shaderSampledImageArrayNonUniformIndexingNative DWORD ?
    shaderStorageBufferArrayNonUniformIndexingNative DWORD ?
    shaderStorageImageArrayNonUniformIndexingNative DWORD ?
    shaderInputAttachmentArrayNonUniformIndexingNative DWORD ?
    robustBufferAccessUpdateAfterBind DWORD ?
    quadDivergentImplicitLod DWORD ?
    maxPerStageDescriptorUpdateAfterBindSamplers DWORD ?
    maxPerStageDescriptorUpdateAfterBindUniformBuffers DWORD ?
    maxPerStageDescriptorUpdateAfterBindStorageBuffers DWORD ?
    maxPerStageDescriptorUpdateAfterBindSampledImages DWORD ?
    maxPerStageDescriptorUpdateAfterBindStorageImages DWORD ?
    maxPerStageDescriptorUpdateAfterBindInputAttachments DWORD ?
    maxPerStageUpdateAfterBindResources DWORD ?
    maxDescriptorSetUpdateAfterBindSamplers DWORD ?
    maxDescriptorSetUpdateAfterBindUniformBuffers DWORD ?
    maxDescriptorSetUpdateAfterBindUniformBuffersDynamic DWORD ?
    maxDescriptorSetUpdateAfterBindStorageBuffers DWORD ?
    maxDescriptorSetUpdateAfterBindStorageBuffersDynamic DWORD ?
    maxDescriptorSetUpdateAfterBindSampledImages DWORD ?
    maxDescriptorSetUpdateAfterBindStorageImages DWORD ?
    maxDescriptorSetUpdateAfterBindInputAttachments DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceDescriptorIndexingProperties ENDS

VkDescriptorSetVariableDescriptorCountAllocateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    descriptorSetCount DWORD ?
    BYTE 4 dup(?)
    pDescriptorCounts QWORD ?
VkDescriptorSetVariableDescriptorCountAllocateInfo ENDS

VkDescriptorSetVariableDescriptorCountLayoutSupport STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    maxVariableDescriptorCount DWORD ?
    BYTE 4 dup(?)
VkDescriptorSetVariableDescriptorCountLayoutSupport ENDS

VkSubpassDescriptionDepthStencilResolve STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    depthResolveMode DWORD ?
    stencilResolveMode DWORD ?
    pDepthStencilResolveAttachment QWORD ?
VkSubpassDescriptionDepthStencilResolve ENDS

VkPhysicalDeviceDepthStencilResolveProperties STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    supportedDepthResolveModes DWORD ?
    supportedStencilResolveModes DWORD ?
    independentResolveNone DWORD ?
    independentResolve DWORD ?
VkPhysicalDeviceDepthStencilResolveProperties ENDS

VkPhysicalDeviceScalarBlockLayoutFeatures STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    scalarBlockLayout DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceScalarBlockLayoutFeatures ENDS

VkImageStencilUsageCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    stencilUsage DWORD ?
    BYTE 4 dup(?)
VkImageStencilUsageCreateInfo ENDS

VkSamplerReductionModeCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    reductionMode DWORD ?
    BYTE 4 dup(?)
VkSamplerReductionModeCreateInfo ENDS

VkPhysicalDeviceSamplerFilterMinmaxProperties STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    filterMinmaxSingleComponentFormats DWORD ?
    filterMinmaxImageComponentMapping DWORD ?
VkPhysicalDeviceSamplerFilterMinmaxProperties ENDS

VkPhysicalDeviceVulkanMemoryModelFeatures STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    vulkanMemoryModel DWORD ?
    vulkanMemoryModelDeviceScope DWORD ?
    vulkanMemoryModelAvailabilityVisibilityChains DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceVulkanMemoryModelFeatures ENDS

VkPhysicalDeviceImagelessFramebufferFeatures STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    imagelessFramebuffer DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceImagelessFramebufferFeatures ENDS

VkFramebufferAttachmentImageInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    usage DWORD ?
    m_width DWORD ?
    height DWORD ?
    layerCount DWORD ?
    viewFormatCount DWORD ?
    pViewFormats QWORD ?
VkFramebufferAttachmentImageInfo ENDS

VkFramebufferAttachmentsCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    attachmentImageInfoCount DWORD ?
    BYTE 4 dup(?)
    pAttachmentImageInfos QWORD ?
VkFramebufferAttachmentsCreateInfo ENDS

VkRenderPassAttachmentBeginInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    attachmentCount DWORD ?
    BYTE 4 dup(?)
    pAttachments QWORD ?
VkRenderPassAttachmentBeginInfo ENDS

VkPhysicalDeviceUniformBufferStandardLayoutFeatures STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    uniformBufferStandardLayout DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceUniformBufferStandardLayoutFeatures ENDS

VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    shaderSubgroupExtendedTypes DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures ENDS

VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    separateDepthStencilLayouts DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures ENDS

VkAttachmentReferenceStencilLayout STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    stencilLayout DWORD ?
    BYTE 4 dup(?)
VkAttachmentReferenceStencilLayout ENDS

VkAttachmentDescriptionStencilLayout STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    stencilInitialLayout DWORD ?
    stencilFinalLayout DWORD ?
VkAttachmentDescriptionStencilLayout ENDS

VkPhysicalDeviceHostQueryResetFeatures STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    hostQueryReset DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceHostQueryResetFeatures ENDS

VkPhysicalDeviceTimelineSemaphoreFeatures STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    timelineSemaphore DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceTimelineSemaphoreFeatures ENDS

VkPhysicalDeviceTimelineSemaphoreProperties STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    maxTimelineSemaphoreValueDifference QWORD ?
VkPhysicalDeviceTimelineSemaphoreProperties ENDS

VkSemaphoreTypeCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    semaphoreType DWORD ?
    BYTE 4 dup(?)
    initialValue QWORD ?
VkSemaphoreTypeCreateInfo ENDS

VkTimelineSemaphoreSubmitInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    waitSemaphoreValueCount DWORD ?
    BYTE 4 dup(?)
    pWaitSemaphoreValues QWORD ?
    signalSemaphoreValueCount DWORD ?
    BYTE 4 dup(?)
    pSignalSemaphoreValues QWORD ?
VkTimelineSemaphoreSubmitInfo ENDS

VkSemaphoreWaitInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    semaphoreCount DWORD ?
    pSemaphores QWORD ?
    pValues QWORD ?
VkSemaphoreWaitInfo ENDS

VkSemaphoreSignalInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    semaphore DWORD ?
    BYTE 4 dup(?)
    value QWORD ?
VkSemaphoreSignalInfo ENDS

VkPhysicalDeviceBufferDeviceAddressFeatures STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    bufferDeviceAddress DWORD ?
    bufferDeviceAddressCaptureReplay DWORD ?
    bufferDeviceAddressMultiDevice DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceBufferDeviceAddressFeatures ENDS

VkBufferDeviceAddressInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    buffer DWORD ?
    BYTE 4 dup(?)
VkBufferDeviceAddressInfo ENDS

VkBufferOpaqueCaptureAddressCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    opaqueCaptureAddress QWORD ?
VkBufferOpaqueCaptureAddressCreateInfo ENDS

VkMemoryOpaqueCaptureAddressAllocateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    opaqueCaptureAddress QWORD ?
VkMemoryOpaqueCaptureAddressAllocateInfo ENDS

VkDeviceMemoryOpaqueCaptureAddressInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    memory DWORD ?
    BYTE 4 dup(?)
VkDeviceMemoryOpaqueCaptureAddressInfo ENDS

VkPhysicalDeviceVulkan13Features STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    robustImageAccess DWORD ?
    inlineUniformBlock DWORD ?
    descriptorBindingInlineUniformBlockUpdateAfterBind DWORD ?
    pipelineCreationCacheControl DWORD ?
    privateData DWORD ?
    shaderDemoteToHelperInvocation DWORD ?
    shaderTerminateInvocation DWORD ?
    subgroupSizeControl DWORD ?
    computeFullSubgroups DWORD ?
    synchronization2 DWORD ?
    textureCompressionASTC_HDR DWORD ?
    shaderZeroInitializeWorkgroupMemory DWORD ?
    dynamicRendering DWORD ?
    shaderIntegerDotProduct DWORD ?
    maintenance4 DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceVulkan13Features ENDS

VkPhysicalDeviceVulkan13Properties STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    minSubgroupSize DWORD ?
    maxSubgroupSize DWORD ?
    maxComputeWorkgroupSubgroups DWORD ?
    requiredSubgroupSizeStages DWORD ?
    maxInlineUniformBlockSize DWORD ?
    maxPerStageDescriptorInlineUniformBlocks DWORD ?
    maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks DWORD ?
    maxDescriptorSetInlineUniformBlocks DWORD ?
    maxDescriptorSetUpdateAfterBindInlineUniformBlocks DWORD ?
    maxInlineUniformTotalSize DWORD ?
    integerDotProduct8BitUnsignedAccelerated DWORD ?
    integerDotProduct8BitSignedAccelerated DWORD ?
    integerDotProduct8BitMixedSignednessAccelerated DWORD ?
    integerDotProduct4x8BitPackedUnsignedAccelerated DWORD ?
    integerDotProduct4x8BitPackedSignedAccelerated DWORD ?
    integerDotProduct4x8BitPackedMixedSignednessAccelerated DWORD ?
    integerDotProduct16BitUnsignedAccelerated DWORD ?
    integerDotProduct16BitSignedAccelerated DWORD ?
    integerDotProduct16BitMixedSignednessAccelerated DWORD ?
    integerDotProduct32BitUnsignedAccelerated DWORD ?
    integerDotProduct32BitSignedAccelerated DWORD ?
    integerDotProduct32BitMixedSignednessAccelerated DWORD ?
    integerDotProduct64BitUnsignedAccelerated DWORD ?
    integerDotProduct64BitSignedAccelerated DWORD ?
    integerDotProduct64BitMixedSignednessAccelerated DWORD ?
    integerDotProductAccumulatingSaturating8BitUnsignedAccelerated DWORD ?
    integerDotProductAccumulatingSaturating8BitSignedAccelerated DWORD ?
    integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated DWORD ?
    integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated DWORD ?
    integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated DWORD ?
    integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated DWORD ?
    integerDotProductAccumulatingSaturating16BitUnsignedAccelerated DWORD ?
    integerDotProductAccumulatingSaturating16BitSignedAccelerated DWORD ?
    integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated DWORD ?
    integerDotProductAccumulatingSaturating32BitUnsignedAccelerated DWORD ?
    integerDotProductAccumulatingSaturating32BitSignedAccelerated DWORD ?
    integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated DWORD ?
    integerDotProductAccumulatingSaturating64BitUnsignedAccelerated DWORD ?
    integerDotProductAccumulatingSaturating64BitSignedAccelerated DWORD ?
    integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated DWORD ?
    storageTexelBufferOffsetAlignmentBytes DWORD ?
    storageTexelBufferOffsetSingleTexelAlignment DWORD ?
    uniformTexelBufferOffsetAlignmentBytes DWORD ?
    uniformTexelBufferOffsetSingleTexelAlignment DWORD ?
    maxBufferSize DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceVulkan13Properties ENDS

VkPipelineCreationFeedback STRUCT
    flags DWORD ?
    BYTE 4 dup(?)
    duration QWORD ?
VkPipelineCreationFeedback ENDS

VkPipelineCreationFeedbackCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    pPipelineCreationFeedback QWORD ?
    pipelineStageCreationFeedbackCount DWORD ?
    BYTE 4 dup(?)
    pPipelineStageCreationFeedbacks QWORD ?
VkPipelineCreationFeedbackCreateInfo ENDS

VkPhysicalDeviceShaderTerminateInvocationFeatures STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    shaderTerminateInvocation DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceShaderTerminateInvocationFeatures ENDS

VkPhysicalDeviceToolProperties STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    purposes DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceToolProperties ENDS

VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    shaderDemoteToHelperInvocation DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures ENDS

VkPhysicalDevicePrivateDataFeatures STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    privateData DWORD ?
    BYTE 4 dup(?)
VkPhysicalDevicePrivateDataFeatures ENDS

VkDevicePrivateDataCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    privateDataSlotRequestCount DWORD ?
    BYTE 4 dup(?)
VkDevicePrivateDataCreateInfo ENDS

VkPrivateDataSlotCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    BYTE 4 dup(?)
VkPrivateDataSlotCreateInfo ENDS

VkPhysicalDevicePipelineCreationCacheControlFeatures STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    pipelineCreationCacheControl DWORD ?
    BYTE 4 dup(?)
VkPhysicalDevicePipelineCreationCacheControlFeatures ENDS

VkMemoryBarrier2 STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    srcStageMask DWORD ?
    srcAccessMask DWORD ?
    dstStageMask DWORD ?
    dstAccessMask DWORD ?
VkMemoryBarrier2 ENDS

VkBufferMemoryBarrier2 STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    srcStageMask DWORD ?
    srcAccessMask DWORD ?
    dstStageMask DWORD ?
    dstAccessMask DWORD ?
    srcQueueFamilyIndex DWORD ?
    dstQueueFamilyIndex DWORD ?
    buffer DWORD ?
    m_offset DWORD ?
    m_size DWORD ?
    BYTE 4 dup(?)
VkBufferMemoryBarrier2 ENDS

VkImageMemoryBarrier2 STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    srcStageMask DWORD ?
    srcAccessMask DWORD ?
    dstStageMask DWORD ?
    dstAccessMask DWORD ?
    oldLayout DWORD ?
    newLayout DWORD ?
    srcQueueFamilyIndex DWORD ?
    dstQueueFamilyIndex DWORD ?
    image DWORD ?
    subresourceRange DWORD ?
VkImageMemoryBarrier2 ENDS

VkDependencyInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    dependencyFlags DWORD ?
    memoryBarrierCount DWORD ?
    pMemoryBarriers QWORD ?
    bufferMemoryBarrierCount DWORD ?
    BYTE 4 dup(?)
    pBufferMemoryBarriers QWORD ?
    imageMemoryBarrierCount DWORD ?
    BYTE 4 dup(?)
    pImageMemoryBarriers QWORD ?
VkDependencyInfo ENDS

VkSemaphoreSubmitInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    semaphore DWORD ?
    BYTE 4 dup(?)
    value QWORD ?
    stageMask DWORD ?
    deviceIndex DWORD ?
VkSemaphoreSubmitInfo ENDS

VkCommandBufferSubmitInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    commandBuffer DWORD ?
    deviceMask DWORD ?
VkCommandBufferSubmitInfo ENDS

VkSubmitInfo2 STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    waitSemaphoreInfoCount DWORD ?
    pWaitSemaphoreInfos QWORD ?
    commandBufferInfoCount DWORD ?
    BYTE 4 dup(?)
    pCommandBufferInfos QWORD ?
    signalSemaphoreInfoCount DWORD ?
    BYTE 4 dup(?)
    pSignalSemaphoreInfos QWORD ?
VkSubmitInfo2 ENDS

VkPhysicalDeviceSynchronization2Features STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    synchronization2 DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceSynchronization2Features ENDS

VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    shaderZeroInitializeWorkgroupMemory DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures ENDS

VkPhysicalDeviceImageRobustnessFeatures STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    robustImageAccess DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceImageRobustnessFeatures ENDS

VkBufferCopy2 STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    srcOffset DWORD ?
    dstOffset DWORD ?
    m_size DWORD ?
    BYTE 4 dup(?)
VkBufferCopy2 ENDS

VkCopyBufferInfo2 STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    srcBuffer DWORD ?
    dstBuffer DWORD ?
    regionCount DWORD ?
    BYTE 4 dup(?)
    pRegions QWORD ?
VkCopyBufferInfo2 ENDS

VkImageCopy2 STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    srcSubresource DWORD ?
    srcOffset DWORD ?
    dstSubresource DWORD ?
    dstOffset DWORD ?
    extent DWORD ?
    BYTE 4 dup(?)
VkImageCopy2 ENDS

VkCopyImageInfo2 STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    srcImage DWORD ?
    srcImageLayout DWORD ?
    dstImage DWORD ?
    dstImageLayout DWORD ?
    regionCount DWORD ?
    BYTE 4 dup(?)
    pRegions QWORD ?
VkCopyImageInfo2 ENDS

VkBufferImageCopy2 STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    bufferOffset DWORD ?
    bufferRowLength DWORD ?
    bufferImageHeight DWORD ?
    imageSubresource DWORD ?
    imageOffset DWORD ?
    imageExtent DWORD ?
VkBufferImageCopy2 ENDS

VkCopyBufferToImageInfo2 STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    srcBuffer DWORD ?
    dstImage DWORD ?
    dstImageLayout DWORD ?
    regionCount DWORD ?
    pRegions QWORD ?
VkCopyBufferToImageInfo2 ENDS

VkCopyImageToBufferInfo2 STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    srcImage DWORD ?
    srcImageLayout DWORD ?
    dstBuffer DWORD ?
    regionCount DWORD ?
    pRegions QWORD ?
VkCopyImageToBufferInfo2 ENDS

VkImageBlit2 STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    srcSubresource DWORD ?
    srcOffsets DWORD 2 dup(?)
    dstSubresource DWORD ?
    dstOffsets DWORD 2 dup(?)
VkImageBlit2 ENDS

VkBlitImageInfo2 STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    srcImage DWORD ?
    srcImageLayout DWORD ?
    dstImage DWORD ?
    dstImageLayout DWORD ?
    regionCount DWORD ?
    BYTE 4 dup(?)
    pRegions QWORD ?
    filter DWORD ?
    BYTE 4 dup(?)
VkBlitImageInfo2 ENDS

VkImageResolve2 STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    srcSubresource DWORD ?
    srcOffset DWORD ?
    dstSubresource DWORD ?
    dstOffset DWORD ?
    extent DWORD ?
    BYTE 4 dup(?)
VkImageResolve2 ENDS

VkResolveImageInfo2 STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    srcImage DWORD ?
    srcImageLayout DWORD ?
    dstImage DWORD ?
    dstImageLayout DWORD ?
    regionCount DWORD ?
    BYTE 4 dup(?)
    pRegions QWORD ?
VkResolveImageInfo2 ENDS

VkPhysicalDeviceSubgroupSizeControlFeatures STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    subgroupSizeControl DWORD ?
    computeFullSubgroups DWORD ?
VkPhysicalDeviceSubgroupSizeControlFeatures ENDS

VkPhysicalDeviceSubgroupSizeControlProperties STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    minSubgroupSize DWORD ?
    maxSubgroupSize DWORD ?
    maxComputeWorkgroupSubgroups DWORD ?
    requiredSubgroupSizeStages DWORD ?
VkPhysicalDeviceSubgroupSizeControlProperties ENDS

VkPipelineShaderStageRequiredSubgroupSizeCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    requiredSubgroupSize DWORD ?
    BYTE 4 dup(?)
VkPipelineShaderStageRequiredSubgroupSizeCreateInfo ENDS

VkPhysicalDeviceInlineUniformBlockFeatures STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    inlineUniformBlock DWORD ?
    descriptorBindingInlineUniformBlockUpdateAfterBind DWORD ?
VkPhysicalDeviceInlineUniformBlockFeatures ENDS

VkPhysicalDeviceInlineUniformBlockProperties STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    maxInlineUniformBlockSize DWORD ?
    maxPerStageDescriptorInlineUniformBlocks DWORD ?
    maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks DWORD ?
    maxDescriptorSetInlineUniformBlocks DWORD ?
    maxDescriptorSetUpdateAfterBindInlineUniformBlocks DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceInlineUniformBlockProperties ENDS

VkWriteDescriptorSetInlineUniformBlock STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    dataSize DWORD ?
    BYTE 4 dup(?)
    pData QWORD ?
VkWriteDescriptorSetInlineUniformBlock ENDS

VkDescriptorPoolInlineUniformBlockCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    maxInlineUniformBlockBindings DWORD ?
    BYTE 4 dup(?)
VkDescriptorPoolInlineUniformBlockCreateInfo ENDS

VkPhysicalDeviceTextureCompressionASTCHDRFeatures STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    textureCompressionASTC_HDR DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceTextureCompressionASTCHDRFeatures ENDS

VkRenderingAttachmentInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    imageView DWORD ?
    imageLayout DWORD ?
    resolveMode DWORD ?
    resolveImageView DWORD ?
    resolveImageLayout DWORD ?
    loadOp DWORD ?
    storeOp DWORD ?
    clearValue DWORD ?
VkRenderingAttachmentInfo ENDS

VkRenderingInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    renderArea DWORD ?
    layerCount DWORD ?
    viewMask DWORD ?
    colorAttachmentCount DWORD ?
    BYTE 4 dup(?)
    pColorAttachments QWORD ?
    pDepthAttachment QWORD ?
    pStencilAttachment QWORD ?
VkRenderingInfo ENDS

VkPipelineRenderingCreateInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    viewMask DWORD ?
    colorAttachmentCount DWORD ?
    pColorAttachmentFormats QWORD ?
    depthAttachmentFormat DWORD ?
    stencilAttachmentFormat DWORD ?
VkPipelineRenderingCreateInfo ENDS

VkPhysicalDeviceDynamicRenderingFeatures STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    dynamicRendering DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceDynamicRenderingFeatures ENDS

VkCommandBufferInheritanceRenderingInfo STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    viewMask DWORD ?
    colorAttachmentCount DWORD ?
    BYTE 4 dup(?)
    pColorAttachmentFormats QWORD ?
    depthAttachmentFormat DWORD ?
    stencilAttachmentFormat DWORD ?
    rasterizationSamples DWORD ?
    BYTE 4 dup(?)
VkCommandBufferInheritanceRenderingInfo ENDS

VkPhysicalDeviceShaderIntegerDotProductFeatures STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    shaderIntegerDotProduct DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceShaderIntegerDotProductFeatures ENDS

VkPhysicalDeviceShaderIntegerDotProductProperties STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    integerDotProduct8BitUnsignedAccelerated DWORD ?
    integerDotProduct8BitSignedAccelerated DWORD ?
    integerDotProduct8BitMixedSignednessAccelerated DWORD ?
    integerDotProduct4x8BitPackedUnsignedAccelerated DWORD ?
    integerDotProduct4x8BitPackedSignedAccelerated DWORD ?
    integerDotProduct4x8BitPackedMixedSignednessAccelerated DWORD ?
    integerDotProduct16BitUnsignedAccelerated DWORD ?
    integerDotProduct16BitSignedAccelerated DWORD ?
    integerDotProduct16BitMixedSignednessAccelerated DWORD ?
    integerDotProduct32BitUnsignedAccelerated DWORD ?
    integerDotProduct32BitSignedAccelerated DWORD ?
    integerDotProduct32BitMixedSignednessAccelerated DWORD ?
    integerDotProduct64BitUnsignedAccelerated DWORD ?
    integerDotProduct64BitSignedAccelerated DWORD ?
    integerDotProduct64BitMixedSignednessAccelerated DWORD ?
    integerDotProductAccumulatingSaturating8BitUnsignedAccelerated DWORD ?
    integerDotProductAccumulatingSaturating8BitSignedAccelerated DWORD ?
    integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated DWORD ?
    integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated DWORD ?
    integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated DWORD ?
    integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated DWORD ?
    integerDotProductAccumulatingSaturating16BitUnsignedAccelerated DWORD ?
    integerDotProductAccumulatingSaturating16BitSignedAccelerated DWORD ?
    integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated DWORD ?
    integerDotProductAccumulatingSaturating32BitUnsignedAccelerated DWORD ?
    integerDotProductAccumulatingSaturating32BitSignedAccelerated DWORD ?
    integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated DWORD ?
    integerDotProductAccumulatingSaturating64BitUnsignedAccelerated DWORD ?
    integerDotProductAccumulatingSaturating64BitSignedAccelerated DWORD ?
    integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated DWORD ?
VkPhysicalDeviceShaderIntegerDotProductProperties ENDS

VkPhysicalDeviceTexelBufferAlignmentProperties STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    storageTexelBufferOffsetAlignmentBytes DWORD ?
    storageTexelBufferOffsetSingleTexelAlignment DWORD ?
    uniformTexelBufferOffsetAlignmentBytes DWORD ?
    uniformTexelBufferOffsetSingleTexelAlignment DWORD ?
VkPhysicalDeviceTexelBufferAlignmentProperties ENDS

VkFormatProperties3 STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    linearTilingFeatures DWORD ?
    optimalTilingFeatures DWORD ?
    bufferFeatures DWORD ?
    BYTE 4 dup(?)
VkFormatProperties3 ENDS

VkPhysicalDeviceMaintenance4Features STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    maintenance4 DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceMaintenance4Features ENDS

VkPhysicalDeviceMaintenance4Properties STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    maxBufferSize DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceMaintenance4Properties ENDS

VkDeviceBufferMemoryRequirements STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    pCreateInfo QWORD ?
VkDeviceBufferMemoryRequirements ENDS

VkDeviceImageMemoryRequirements STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    pCreateInfo QWORD ?
    planeAspect DWORD ?
    BYTE 4 dup(?)
VkDeviceImageMemoryRequirements ENDS

VkSurfaceCapabilitiesKHR STRUCT
    minImageCount DWORD ?
    maxImageCount DWORD ?
    currentExtent DWORD ?
    minImageExtent DWORD ?
    maxImageExtent DWORD ?
    maxImageArrayLayers DWORD ?
    supportedTransforms DWORD ?
    currentTransform DWORD ?
    supportedCompositeAlpha DWORD ?
    supportedUsageFlags DWORD ?
VkSurfaceCapabilitiesKHR ENDS

VkSurfaceFormatKHR STRUCT
    format DWORD ?
    colorSpace DWORD ?
VkSurfaceFormatKHR ENDS

VkSwapchainCreateInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    surface DWORD ?
    minImageCount DWORD ?
    imageFormat DWORD ?
    imageColorSpace DWORD ?
    imageExtent DWORD ?
    imageArrayLayers DWORD ?
    imageUsage DWORD ?
    imageSharingMode DWORD ?
    queueFamilyIndexCount DWORD ?
    pQueueFamilyIndices QWORD ?
    preTransform DWORD ?
    compositeAlpha DWORD ?
    presentMode DWORD ?
    clipped DWORD ?
    oldSwapchain DWORD ?
    BYTE 4 dup(?)
VkSwapchainCreateInfoKHR ENDS

VkPresentInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    waitSemaphoreCount DWORD ?
    BYTE 4 dup(?)
    pWaitSemaphores QWORD ?
    swapchainCount DWORD ?
    BYTE 4 dup(?)
    pSwapchains QWORD ?
    pImageIndices QWORD ?
    pResults QWORD ?
VkPresentInfoKHR ENDS

VkImageSwapchainCreateInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    swapchain DWORD ?
    BYTE 4 dup(?)
VkImageSwapchainCreateInfoKHR ENDS

VkBindImageMemorySwapchainInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    swapchain DWORD ?
    imageIndex DWORD ?
VkBindImageMemorySwapchainInfoKHR ENDS

VkAcquireNextImageInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    swapchain DWORD ?
    BYTE 4 dup(?)
    timeout QWORD ?
    semaphore DWORD ?
    fence DWORD ?
    deviceMask DWORD ?
    BYTE 4 dup(?)
VkAcquireNextImageInfoKHR ENDS

VkDeviceGroupPresentCapabilitiesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    modes DWORD ?
    BYTE 4 dup(?)
VkDeviceGroupPresentCapabilitiesKHR ENDS

VkDeviceGroupPresentInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    swapchainCount DWORD ?
    BYTE 4 dup(?)
    pDeviceMasks QWORD ?
    mode DWORD ?
    BYTE 4 dup(?)
VkDeviceGroupPresentInfoKHR ENDS

VkDeviceGroupSwapchainCreateInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    modes DWORD ?
    BYTE 4 dup(?)
VkDeviceGroupSwapchainCreateInfoKHR ENDS

VkDisplayModeParametersKHR STRUCT
    visibleRegion DWORD ?
    refreshRate DWORD ?
VkDisplayModeParametersKHR ENDS

VkDisplayModeCreateInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    parameters DWORD ?
VkDisplayModeCreateInfoKHR ENDS

VkDisplayModePropertiesKHR STRUCT
    displayMode DWORD ?
    parameters DWORD ?
VkDisplayModePropertiesKHR ENDS

VkDisplayPlaneCapabilitiesKHR STRUCT
    supportedAlpha DWORD ?
    minSrcPosition DWORD ?
    maxSrcPosition DWORD ?
    minSrcExtent DWORD ?
    maxSrcExtent DWORD ?
    minDstPosition DWORD ?
    maxDstPosition DWORD ?
    minDstExtent DWORD ?
    maxDstExtent DWORD ?
VkDisplayPlaneCapabilitiesKHR ENDS

VkDisplayPlanePropertiesKHR STRUCT
    currentDisplay DWORD ?
    currentStackIndex DWORD ?
VkDisplayPlanePropertiesKHR ENDS

VkDisplayPropertiesKHR STRUCT
    display DWORD ?
    BYTE 4 dup(?)
    displayName QWORD ?
    physicalDimensions DWORD ?
    physicalResolution DWORD ?
    supportedTransforms DWORD ?
    planeReorderPossible DWORD ?
    persistentContent DWORD ?
    BYTE 4 dup(?)
VkDisplayPropertiesKHR ENDS

VkDisplaySurfaceCreateInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    displayMode DWORD ?
    planeIndex DWORD ?
    planeStackIndex DWORD ?
    transform DWORD ?
    globalAlpha DWORD ?
    alphaMode DWORD ?
    imageExtent DWORD ?
VkDisplaySurfaceCreateInfoKHR ENDS

VkDisplayPresentInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    srcRect DWORD ?
    dstRect DWORD ?
    persistent DWORD ?
    BYTE 4 dup(?)
VkDisplayPresentInfoKHR ENDS

VkQueueFamilyQueryResultStatusPropertiesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    queryResultStatusSupport DWORD ?
    BYTE 4 dup(?)
VkQueueFamilyQueryResultStatusPropertiesKHR ENDS

VkQueueFamilyVideoPropertiesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    videoCodecOperations DWORD ?
    BYTE 4 dup(?)
VkQueueFamilyVideoPropertiesKHR ENDS

VkVideoProfileInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    videoCodecOperation DWORD ?
    chromaSubsampling DWORD ?
    lumaBitDepth DWORD ?
    chromaBitDepth DWORD ?
VkVideoProfileInfoKHR ENDS

VkVideoProfileListInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    profileCount DWORD ?
    BYTE 4 dup(?)
    pProfiles QWORD ?
VkVideoProfileListInfoKHR ENDS

VkVideoCapabilitiesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    minBitstreamBufferOffsetAlignment DWORD ?
    minBitstreamBufferSizeAlignment DWORD ?
    pictureAccessGranularity DWORD ?
    minCodedExtent DWORD ?
    maxCodedExtent DWORD ?
    maxDpbSlots DWORD ?
    maxActiveReferencePictures DWORD ?
    stdHeaderVersion DWORD ?
    BYTE 4 dup(?)
VkVideoCapabilitiesKHR ENDS

VkPhysicalDeviceVideoFormatInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    imageUsage DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceVideoFormatInfoKHR ENDS

VkVideoFormatPropertiesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    format DWORD ?
    componentMapping DWORD ?
    imageCreateFlags DWORD ?
    imageType DWORD ?
    imageTiling DWORD ?
    imageUsageFlags DWORD ?
VkVideoFormatPropertiesKHR ENDS

VkVideoPictureResourceInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    codedOffset DWORD ?
    codedExtent DWORD ?
    baseArrayLayer DWORD ?
    imageViewBinding DWORD ?
VkVideoPictureResourceInfoKHR ENDS

VkVideoReferenceSlotInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    slotIndex DWORD ?
    BYTE 4 dup(?)
    pPictureResource QWORD ?
VkVideoReferenceSlotInfoKHR ENDS

VkVideoSessionMemoryRequirementsKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    memoryBindIndex DWORD ?
    memoryRequirements DWORD ?
VkVideoSessionMemoryRequirementsKHR ENDS

VkBindVideoSessionMemoryInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    memoryBindIndex DWORD ?
    memory DWORD ?
    memoryOffset DWORD ?
    memorySize DWORD ?
VkBindVideoSessionMemoryInfoKHR ENDS

VkVideoSessionCreateInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    queueFamilyIndex DWORD ?
    flags DWORD ?
    pVideoProfile QWORD ?
    pictureFormat DWORD ?
    maxCodedExtent DWORD ?
    referencePictureFormat DWORD ?
    maxDpbSlots DWORD ?
    maxActiveReferencePictures DWORD ?
    BYTE 4 dup(?)
    pStdHeaderVersion QWORD ?
VkVideoSessionCreateInfoKHR ENDS

VkVideoSessionParametersCreateInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    videoSessionParametersTemplate DWORD ?
    videoSession DWORD ?
    BYTE 4 dup(?)
VkVideoSessionParametersCreateInfoKHR ENDS

VkVideoSessionParametersUpdateInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    updateSequenceCount DWORD ?
    BYTE 4 dup(?)
VkVideoSessionParametersUpdateInfoKHR ENDS

VkVideoBeginCodingInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    videoSession DWORD ?
    videoSessionParameters DWORD ?
    referenceSlotCount DWORD ?
    pReferenceSlots QWORD ?
VkVideoBeginCodingInfoKHR ENDS

VkVideoEndCodingInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    BYTE 4 dup(?)
VkVideoEndCodingInfoKHR ENDS

VkVideoCodingControlInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    BYTE 4 dup(?)
VkVideoCodingControlInfoKHR ENDS

VkVideoDecodeCapabilitiesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    BYTE 4 dup(?)
VkVideoDecodeCapabilitiesKHR ENDS

VkVideoDecodeUsageInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    videoUsageHints DWORD ?
    BYTE 4 dup(?)
VkVideoDecodeUsageInfoKHR ENDS

VkVideoDecodeInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    srcBuffer DWORD ?
    srcBufferOffset DWORD ?
    srcBufferRange DWORD ?
    dstPictureResource DWORD ?
    BYTE 4 dup(?)
    pSetupReferenceSlot QWORD ?
    referenceSlotCount DWORD ?
    BYTE 4 dup(?)
    pReferenceSlots QWORD ?
VkVideoDecodeInfoKHR ENDS

VkVideoEncodeH264CapabilitiesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    maxLevelIdc DWORD ?
    maxSliceCount DWORD ?
    maxPPictureL0ReferenceCount DWORD ?
    maxBPictureL0ReferenceCount DWORD ?
    maxL1ReferenceCount DWORD ?
    maxTemporalLayerCount DWORD ?
    expectDyadicTemporalLayerPattern DWORD ?
    minQp DWORD ?
    maxQp DWORD ?
    prefersGopRemainingFrames DWORD ?
    requiresGopRemainingFrames DWORD ?
    stdSyntaxFlags DWORD ?
    BYTE 4 dup(?)
VkVideoEncodeH264CapabilitiesKHR ENDS

VkVideoEncodeH264QpKHR STRUCT
    qpI DWORD ?
    qpP DWORD ?
    qpB DWORD ?
VkVideoEncodeH264QpKHR ENDS

VkVideoEncodeH264QualityLevelPropertiesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    preferredRateControlFlags DWORD ?
    preferredGopFrameCount DWORD ?
    preferredIdrPeriod DWORD ?
    preferredConsecutiveBFrameCount DWORD ?
    preferredTemporalLayerCount DWORD ?
    preferredConstantQp DWORD ?
    preferredMaxL0ReferenceCount DWORD ?
    preferredMaxL1ReferenceCount DWORD ?
    preferredStdEntropyCodingModeFlag DWORD ?
    BYTE 4 dup(?)
VkVideoEncodeH264QualityLevelPropertiesKHR ENDS

VkVideoEncodeH264SessionCreateInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    useMaxLevelIdc DWORD ?
    maxLevelIdc DWORD ?
VkVideoEncodeH264SessionCreateInfoKHR ENDS

VkVideoEncodeH264SessionParametersAddInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    stdSPSCount DWORD ?
    BYTE 4 dup(?)
    pStdSPSs QWORD ?
    stdPPSCount DWORD ?
    BYTE 4 dup(?)
    pStdPPSs QWORD ?
VkVideoEncodeH264SessionParametersAddInfoKHR ENDS

VkVideoEncodeH264SessionParametersCreateInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    maxStdSPSCount DWORD ?
    maxStdPPSCount DWORD ?
    pParametersAddInfo QWORD ?
VkVideoEncodeH264SessionParametersCreateInfoKHR ENDS

VkVideoEncodeH264SessionParametersGetInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    writeStdSPS DWORD ?
    writeStdPPS DWORD ?
    stdSPSId DWORD ?
    stdPPSId DWORD ?
VkVideoEncodeH264SessionParametersGetInfoKHR ENDS

VkVideoEncodeH264SessionParametersFeedbackInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    hasStdSPSOverrides DWORD ?
    hasStdPPSOverrides DWORD ?
VkVideoEncodeH264SessionParametersFeedbackInfoKHR ENDS

VkVideoEncodeH264NaluSliceInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    constantQp DWORD ?
    BYTE 4 dup(?)
    pStdSliceHeader QWORD ?
VkVideoEncodeH264NaluSliceInfoKHR ENDS

VkVideoEncodeH264PictureInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    naluSliceEntryCount DWORD ?
    BYTE 4 dup(?)
    pNaluSliceEntries QWORD ?
    pStdPictureInfo QWORD ?
    generatePrefixNalu DWORD ?
    BYTE 4 dup(?)
VkVideoEncodeH264PictureInfoKHR ENDS

VkVideoEncodeH264DpbSlotInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    pStdReferenceInfo QWORD ?
VkVideoEncodeH264DpbSlotInfoKHR ENDS

VkVideoEncodeH264ProfileInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    stdProfileIdc DWORD ?
    BYTE 4 dup(?)
VkVideoEncodeH264ProfileInfoKHR ENDS

VkVideoEncodeH264RateControlInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    gopFrameCount DWORD ?
    idrPeriod DWORD ?
    consecutiveBFrameCount DWORD ?
    temporalLayerCount DWORD ?
    BYTE 4 dup(?)
VkVideoEncodeH264RateControlInfoKHR ENDS

VkVideoEncodeH264FrameSizeKHR STRUCT
    frameISize DWORD ?
    framePSize DWORD ?
    frameBSize DWORD ?
VkVideoEncodeH264FrameSizeKHR ENDS

VkVideoEncodeH264RateControlLayerInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    useMinQp DWORD ?
    minQp DWORD ?
    useMaxQp DWORD ?
    maxQp DWORD ?
    useMaxFrameSize DWORD ?
    maxFrameSize DWORD ?
VkVideoEncodeH264RateControlLayerInfoKHR ENDS

VkVideoEncodeH264GopRemainingFrameInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    useGopRemainingFrames DWORD ?
    gopRemainingI DWORD ?
    gopRemainingP DWORD ?
    gopRemainingB DWORD ?
VkVideoEncodeH264GopRemainingFrameInfoKHR ENDS

VkVideoEncodeH265CapabilitiesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    maxLevelIdc DWORD ?
    maxSliceSegmentCount DWORD ?
    maxTiles DWORD ?
    ctbSizes DWORD ?
    transformBlockSizes DWORD ?
    maxPPictureL0ReferenceCount DWORD ?
    maxBPictureL0ReferenceCount DWORD ?
    maxL1ReferenceCount DWORD ?
    maxSubLayerCount DWORD ?
    expectDyadicTemporalSubLayerPattern DWORD ?
    minQp DWORD ?
    maxQp DWORD ?
    prefersGopRemainingFrames DWORD ?
    requiresGopRemainingFrames DWORD ?
    stdSyntaxFlags DWORD ?
VkVideoEncodeH265CapabilitiesKHR ENDS

VkVideoEncodeH265SessionCreateInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    useMaxLevelIdc DWORD ?
    maxLevelIdc DWORD ?
VkVideoEncodeH265SessionCreateInfoKHR ENDS

VkVideoEncodeH265QpKHR STRUCT
    qpI DWORD ?
    qpP DWORD ?
    qpB DWORD ?
VkVideoEncodeH265QpKHR ENDS

VkVideoEncodeH265QualityLevelPropertiesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    preferredRateControlFlags DWORD ?
    preferredGopFrameCount DWORD ?
    preferredIdrPeriod DWORD ?
    preferredConsecutiveBFrameCount DWORD ?
    preferredSubLayerCount DWORD ?
    preferredConstantQp DWORD ?
    preferredMaxL0ReferenceCount DWORD ?
    preferredMaxL1ReferenceCount DWORD ?
VkVideoEncodeH265QualityLevelPropertiesKHR ENDS

VkVideoEncodeH265SessionParametersAddInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    stdVPSCount DWORD ?
    BYTE 4 dup(?)
    pStdVPSs QWORD ?
    stdSPSCount DWORD ?
    BYTE 4 dup(?)
    pStdSPSs QWORD ?
    stdPPSCount DWORD ?
    BYTE 4 dup(?)
    pStdPPSs QWORD ?
VkVideoEncodeH265SessionParametersAddInfoKHR ENDS

VkVideoEncodeH265SessionParametersCreateInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    maxStdVPSCount DWORD ?
    maxStdSPSCount DWORD ?
    maxStdPPSCount DWORD ?
    BYTE 4 dup(?)
    pParametersAddInfo QWORD ?
VkVideoEncodeH265SessionParametersCreateInfoKHR ENDS

VkVideoEncodeH265SessionParametersGetInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    writeStdVPS DWORD ?
    writeStdSPS DWORD ?
    writeStdPPS DWORD ?
    stdVPSId DWORD ?
    stdSPSId DWORD ?
    stdPPSId DWORD ?
VkVideoEncodeH265SessionParametersGetInfoKHR ENDS

VkVideoEncodeH265SessionParametersFeedbackInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    hasStdVPSOverrides DWORD ?
    hasStdSPSOverrides DWORD ?
    hasStdPPSOverrides DWORD ?
    BYTE 4 dup(?)
VkVideoEncodeH265SessionParametersFeedbackInfoKHR ENDS

VkVideoEncodeH265NaluSliceSegmentInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    constantQp DWORD ?
    BYTE 4 dup(?)
    pStdSliceSegmentHeader QWORD ?
VkVideoEncodeH265NaluSliceSegmentInfoKHR ENDS

VkVideoEncodeH265PictureInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    naluSliceSegmentEntryCount DWORD ?
    BYTE 4 dup(?)
    pNaluSliceSegmentEntries QWORD ?
    pStdPictureInfo QWORD ?
VkVideoEncodeH265PictureInfoKHR ENDS

VkVideoEncodeH265DpbSlotInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    pStdReferenceInfo QWORD ?
VkVideoEncodeH265DpbSlotInfoKHR ENDS

VkVideoEncodeH265ProfileInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    stdProfileIdc DWORD ?
    BYTE 4 dup(?)
VkVideoEncodeH265ProfileInfoKHR ENDS

VkVideoEncodeH265RateControlInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    gopFrameCount DWORD ?
    idrPeriod DWORD ?
    consecutiveBFrameCount DWORD ?
    subLayerCount DWORD ?
    BYTE 4 dup(?)
VkVideoEncodeH265RateControlInfoKHR ENDS

VkVideoEncodeH265FrameSizeKHR STRUCT
    frameISize DWORD ?
    framePSize DWORD ?
    frameBSize DWORD ?
VkVideoEncodeH265FrameSizeKHR ENDS

VkVideoEncodeH265RateControlLayerInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    useMinQp DWORD ?
    minQp DWORD ?
    useMaxQp DWORD ?
    maxQp DWORD ?
    useMaxFrameSize DWORD ?
    maxFrameSize DWORD ?
VkVideoEncodeH265RateControlLayerInfoKHR ENDS

VkVideoEncodeH265GopRemainingFrameInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    useGopRemainingFrames DWORD ?
    gopRemainingI DWORD ?
    gopRemainingP DWORD ?
    gopRemainingB DWORD ?
VkVideoEncodeH265GopRemainingFrameInfoKHR ENDS

VkVideoDecodeH264ProfileInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    stdProfileIdc DWORD ?
    pictureLayout DWORD ?
VkVideoDecodeH264ProfileInfoKHR ENDS

VkVideoDecodeH264CapabilitiesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    maxLevelIdc DWORD ?
    fieldOffsetGranularity DWORD ?
VkVideoDecodeH264CapabilitiesKHR ENDS

VkVideoDecodeH264SessionParametersAddInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    stdSPSCount DWORD ?
    BYTE 4 dup(?)
    pStdSPSs QWORD ?
    stdPPSCount DWORD ?
    BYTE 4 dup(?)
    pStdPPSs QWORD ?
VkVideoDecodeH264SessionParametersAddInfoKHR ENDS

VkVideoDecodeH264SessionParametersCreateInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    maxStdSPSCount DWORD ?
    maxStdPPSCount DWORD ?
    pParametersAddInfo QWORD ?
VkVideoDecodeH264SessionParametersCreateInfoKHR ENDS

VkVideoDecodeH264PictureInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    pStdPictureInfo QWORD ?
    sliceCount DWORD ?
    BYTE 4 dup(?)
    pSliceOffsets QWORD ?
VkVideoDecodeH264PictureInfoKHR ENDS

VkVideoDecodeH264DpbSlotInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    pStdReferenceInfo QWORD ?
VkVideoDecodeH264DpbSlotInfoKHR ENDS

VkRenderingFragmentShadingRateAttachmentInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    imageView DWORD ?
    imageLayout DWORD ?
    shadingRateAttachmentTexelSize DWORD ?
    BYTE 4 dup(?)
VkRenderingFragmentShadingRateAttachmentInfoKHR ENDS

VkRenderingFragmentDensityMapAttachmentInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    imageView DWORD ?
    imageLayout DWORD ?
VkRenderingFragmentDensityMapAttachmentInfoEXT ENDS

VkAttachmentSampleCountInfoAMD STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    colorAttachmentCount DWORD ?
    BYTE 4 dup(?)
    pColorAttachmentSamples QWORD ?
    depthStencilAttachmentSamples DWORD ?
    BYTE 4 dup(?)
VkAttachmentSampleCountInfoAMD ENDS

VkMultiviewPerViewAttributesInfoNVX STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    perViewAttributes DWORD ?
    perViewAttributesPositionXOnly DWORD ?
VkMultiviewPerViewAttributesInfoNVX ENDS

VkImportMemoryFdInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    handleType DWORD ?
    fd DWORD ?
VkImportMemoryFdInfoKHR ENDS

VkMemoryFdPropertiesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    memoryTypeBits DWORD ?
    BYTE 4 dup(?)
VkMemoryFdPropertiesKHR ENDS

VkMemoryGetFdInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    memory DWORD ?
    handleType DWORD ?
VkMemoryGetFdInfoKHR ENDS

VkImportSemaphoreFdInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    semaphore DWORD ?
    flags DWORD ?
    handleType DWORD ?
    fd DWORD ?
VkImportSemaphoreFdInfoKHR ENDS

VkSemaphoreGetFdInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    semaphore DWORD ?
    handleType DWORD ?
VkSemaphoreGetFdInfoKHR ENDS

VkPhysicalDevicePushDescriptorPropertiesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    maxPushDescriptors DWORD ?
    BYTE 4 dup(?)
VkPhysicalDevicePushDescriptorPropertiesKHR ENDS

VkRectLayerKHR STRUCT
    m_offset DWORD ?
    extent DWORD ?
    layer DWORD ?
VkRectLayerKHR ENDS

VkPresentRegionKHR STRUCT
    rectangleCount DWORD ?
    BYTE 4 dup(?)
    pRectangles QWORD ?
VkPresentRegionKHR ENDS

VkPresentRegionsKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    swapchainCount DWORD ?
    BYTE 4 dup(?)
    pRegions QWORD ?
VkPresentRegionsKHR ENDS

VkSharedPresentSurfaceCapabilitiesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    sharedPresentSupportedUsageFlags DWORD ?
    BYTE 4 dup(?)
VkSharedPresentSurfaceCapabilitiesKHR ENDS

VkImportFenceFdInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    fence DWORD ?
    flags DWORD ?
    handleType DWORD ?
    fd DWORD ?
VkImportFenceFdInfoKHR ENDS

VkFenceGetFdInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    fence DWORD ?
    handleType DWORD ?
VkFenceGetFdInfoKHR ENDS

VkPhysicalDevicePerformanceQueryFeaturesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    performanceCounterQueryPools DWORD ?
    performanceCounterMultipleQueryPools DWORD ?
VkPhysicalDevicePerformanceQueryFeaturesKHR ENDS

VkPhysicalDevicePerformanceQueryPropertiesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    allowCommandBufferQueryCopies DWORD ?
    BYTE 4 dup(?)
VkPhysicalDevicePerformanceQueryPropertiesKHR ENDS

VkPerformanceCounterKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    unit DWORD ?
    scope DWORD ?
    storage DWORD ?
    BYTE 4 dup(?)
VkPerformanceCounterKHR ENDS

VkPerformanceCounterDescriptionKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    BYTE 4 dup(?)
VkPerformanceCounterDescriptionKHR ENDS

VkQueryPoolPerformanceCreateInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    queueFamilyIndex DWORD ?
    counterIndexCount DWORD ?
    pCounterIndices QWORD ?
VkQueryPoolPerformanceCreateInfoKHR ENDS

VkAcquireProfilingLockInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    BYTE 4 dup(?)
    timeout QWORD ?
VkAcquireProfilingLockInfoKHR ENDS

VkPerformanceQuerySubmitInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    counterPassIndex DWORD ?
    BYTE 4 dup(?)
VkPerformanceQuerySubmitInfoKHR ENDS

VkPhysicalDeviceSurfaceInfo2KHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    surface DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceSurfaceInfo2KHR ENDS

VkSurfaceCapabilities2KHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    surfaceCapabilities DWORD ?
    BYTE 4 dup(?)
VkSurfaceCapabilities2KHR ENDS

VkSurfaceFormat2KHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    surfaceFormat DWORD ?
    BYTE 4 dup(?)
VkSurfaceFormat2KHR ENDS

VkDisplayProperties2KHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    displayProperties DWORD ?
    BYTE 4 dup(?)
VkDisplayProperties2KHR ENDS

VkDisplayPlaneProperties2KHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    displayPlaneProperties DWORD ?
    BYTE 4 dup(?)
VkDisplayPlaneProperties2KHR ENDS

VkDisplayModeProperties2KHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    displayModeProperties DWORD ?
    BYTE 4 dup(?)
VkDisplayModeProperties2KHR ENDS

VkDisplayPlaneInfo2KHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    mode DWORD ?
    planeIndex DWORD ?
VkDisplayPlaneInfo2KHR ENDS

VkDisplayPlaneCapabilities2KHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    capabilities DWORD ?
    BYTE 4 dup(?)
VkDisplayPlaneCapabilities2KHR ENDS

VkPhysicalDeviceShaderClockFeaturesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    shaderSubgroupClock DWORD ?
    shaderDeviceClock DWORD ?
VkPhysicalDeviceShaderClockFeaturesKHR ENDS

VkVideoDecodeH265ProfileInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    stdProfileIdc DWORD ?
    BYTE 4 dup(?)
VkVideoDecodeH265ProfileInfoKHR ENDS

VkVideoDecodeH265CapabilitiesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    maxLevelIdc DWORD ?
    BYTE 4 dup(?)
VkVideoDecodeH265CapabilitiesKHR ENDS

VkVideoDecodeH265SessionParametersAddInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    stdVPSCount DWORD ?
    BYTE 4 dup(?)
    pStdVPSs QWORD ?
    stdSPSCount DWORD ?
    BYTE 4 dup(?)
    pStdSPSs QWORD ?
    stdPPSCount DWORD ?
    BYTE 4 dup(?)
    pStdPPSs QWORD ?
VkVideoDecodeH265SessionParametersAddInfoKHR ENDS

VkVideoDecodeH265SessionParametersCreateInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    maxStdVPSCount DWORD ?
    maxStdSPSCount DWORD ?
    maxStdPPSCount DWORD ?
    BYTE 4 dup(?)
    pParametersAddInfo QWORD ?
VkVideoDecodeH265SessionParametersCreateInfoKHR ENDS

VkVideoDecodeH265PictureInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    pStdPictureInfo QWORD ?
    sliceSegmentCount DWORD ?
    BYTE 4 dup(?)
    pSliceSegmentOffsets QWORD ?
VkVideoDecodeH265PictureInfoKHR ENDS

VkVideoDecodeH265DpbSlotInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    pStdReferenceInfo QWORD ?
VkVideoDecodeH265DpbSlotInfoKHR ENDS

VkDeviceQueueGlobalPriorityCreateInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    globalPriority DWORD ?
    BYTE 4 dup(?)
VkDeviceQueueGlobalPriorityCreateInfoKHR ENDS

VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    globalPriorityQuery DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR ENDS

VkQueueFamilyGlobalPriorityPropertiesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    priorityCount DWORD ?
    BYTE 4 dup(?)
VkQueueFamilyGlobalPriorityPropertiesKHR ENDS

VkFragmentShadingRateAttachmentInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    pFragmentShadingRateAttachment QWORD ?
    shadingRateAttachmentTexelSize DWORD ?
    BYTE 4 dup(?)
VkFragmentShadingRateAttachmentInfoKHR ENDS

VkPipelineFragmentShadingRateStateCreateInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    fragmentSize DWORD ?
    combinerOps DWORD 2 dup(?)
    BYTE 4 dup(?)
VkPipelineFragmentShadingRateStateCreateInfoKHR ENDS

VkPhysicalDeviceFragmentShadingRateFeaturesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    pipelineFragmentShadingRate DWORD ?
    primitiveFragmentShadingRate DWORD ?
    attachmentFragmentShadingRate DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceFragmentShadingRateFeaturesKHR ENDS

VkPhysicalDeviceFragmentShadingRatePropertiesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    minFragmentShadingRateAttachmentTexelSize DWORD ?
    maxFragmentShadingRateAttachmentTexelSize DWORD ?
    maxFragmentShadingRateAttachmentTexelSizeAspectRatio DWORD ?
    primitiveFragmentShadingRateWithMultipleViewports DWORD ?
    layeredShadingRateAttachments DWORD ?
    fragmentShadingRateNonTrivialCombinerOps DWORD ?
    maxFragmentSize DWORD ?
    maxFragmentSizeAspectRatio DWORD ?
    maxFragmentShadingRateCoverageSamples DWORD ?
    maxFragmentShadingRateRasterizationSamples DWORD ?
    fragmentShadingRateWithShaderDepthStencilWrites DWORD ?
    fragmentShadingRateWithSampleMask DWORD ?
    fragmentShadingRateWithShaderSampleMask DWORD ?
    fragmentShadingRateWithConservativeRasterization DWORD ?
    fragmentShadingRateWithFragmentShaderInterlock DWORD ?
    fragmentShadingRateWithCustomSampleLocations DWORD ?
    fragmentShadingRateStrictMultiplyCombiner DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceFragmentShadingRatePropertiesKHR ENDS

VkPhysicalDeviceFragmentShadingRateKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    sampleCounts DWORD ?
    fragmentSize DWORD ?
VkPhysicalDeviceFragmentShadingRateKHR ENDS

VkPhysicalDeviceDynamicRenderingLocalReadFeaturesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    dynamicRenderingLocalRead DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceDynamicRenderingLocalReadFeaturesKHR ENDS

VkRenderingAttachmentLocationInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    colorAttachmentCount DWORD ?
    BYTE 4 dup(?)
    pColorAttachmentLocations QWORD ?
VkRenderingAttachmentLocationInfoKHR ENDS

VkRenderingInputAttachmentIndexInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    colorAttachmentCount DWORD ?
    BYTE 4 dup(?)
    pColorAttachmentInputIndices QWORD ?
    pDepthInputAttachmentIndex QWORD ?
    pStencilInputAttachmentIndex QWORD ?
VkRenderingInputAttachmentIndexInfoKHR ENDS

VkPhysicalDeviceShaderQuadControlFeaturesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    shaderQuadControl DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceShaderQuadControlFeaturesKHR ENDS

VkSurfaceProtectedCapabilitiesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    supportsProtected DWORD ?
    BYTE 4 dup(?)
VkSurfaceProtectedCapabilitiesKHR ENDS

VkPhysicalDevicePresentWaitFeaturesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    presentWait DWORD ?
    BYTE 4 dup(?)
VkPhysicalDevicePresentWaitFeaturesKHR ENDS

VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    pipelineExecutableInfo DWORD ?
    BYTE 4 dup(?)
VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR ENDS

VkPipelineInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    pipeline DWORD ?
    BYTE 4 dup(?)
VkPipelineInfoKHR ENDS

VkPipelineExecutablePropertiesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    stages DWORD ?
    subgroupSize DWORD ?
VkPipelineExecutablePropertiesKHR ENDS

VkPipelineExecutableInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    pipeline DWORD ?
    executableIndex DWORD ?
VkPipelineExecutableInfoKHR ENDS

VkPipelineExecutableStatisticKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    format DWORD ?
    value DWORD ?
VkPipelineExecutableStatisticKHR ENDS

VkPipelineExecutableInternalRepresentationKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    isText DWORD ?
    BYTE 4 dup(?)
    dataSize QWORD ?
    pData QWORD ?
VkPipelineExecutableInternalRepresentationKHR ENDS

VkMemoryMapInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    memory DWORD ?
    m_offset DWORD ?
    m_size DWORD ?
VkMemoryMapInfoKHR ENDS

VkMemoryUnmapInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    memory DWORD ?
VkMemoryUnmapInfoKHR ENDS

VkPipelineLibraryCreateInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    libraryCount DWORD ?
    BYTE 4 dup(?)
    pLibraries QWORD ?
VkPipelineLibraryCreateInfoKHR ENDS

VkPresentIdKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    swapchainCount DWORD ?
    BYTE 4 dup(?)
    pPresentIds QWORD ?
VkPresentIdKHR ENDS

VkPhysicalDevicePresentIdFeaturesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    presentId DWORD ?
    BYTE 4 dup(?)
VkPhysicalDevicePresentIdFeaturesKHR ENDS

VkVideoEncodeInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    dstBuffer DWORD ?
    dstBufferOffset DWORD ?
    dstBufferRange DWORD ?
    srcPictureResource DWORD ?
    BYTE 4 dup(?)
    pSetupReferenceSlot QWORD ?
    referenceSlotCount DWORD ?
    BYTE 4 dup(?)
    pReferenceSlots QWORD ?
    precedingExternallyEncodedBytes DWORD ?
    BYTE 4 dup(?)
VkVideoEncodeInfoKHR ENDS

VkVideoEncodeCapabilitiesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    rateControlModes DWORD ?
    maxRateControlLayers DWORD ?
    BYTE 4 dup(?)
    maxBitrate QWORD ?
    maxQualityLevels DWORD ?
    encodeInputPictureGranularity DWORD ?
    supportedEncodeFeedbackFlags DWORD ?
    BYTE 4 dup(?)
VkVideoEncodeCapabilitiesKHR ENDS

VkQueryPoolVideoEncodeFeedbackCreateInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    encodeFeedbackFlags DWORD ?
    BYTE 4 dup(?)
VkQueryPoolVideoEncodeFeedbackCreateInfoKHR ENDS

VkVideoEncodeUsageInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    videoUsageHints DWORD ?
    videoContentHints DWORD ?
    tuningMode DWORD ?
    BYTE 4 dup(?)
VkVideoEncodeUsageInfoKHR ENDS

VkVideoEncodeRateControlLayerInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    averageBitrate QWORD ?
    maxBitrate QWORD ?
    frameRateNumerator DWORD ?
    frameRateDenominator DWORD ?
VkVideoEncodeRateControlLayerInfoKHR ENDS

VkVideoEncodeRateControlInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    rateControlMode DWORD ?
    layerCount DWORD ?
    BYTE 4 dup(?)
    pLayers QWORD ?
    virtualBufferSizeInMs DWORD ?
    initialVirtualBufferSizeInMs DWORD ?
VkVideoEncodeRateControlInfoKHR ENDS

VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    pVideoProfile QWORD ?
    qualityLevel DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR ENDS

VkVideoEncodeQualityLevelPropertiesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    preferredRateControlMode DWORD ?
    preferredRateControlLayerCount DWORD ?
VkVideoEncodeQualityLevelPropertiesKHR ENDS

VkVideoEncodeQualityLevelInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    qualityLevel DWORD ?
    BYTE 4 dup(?)
VkVideoEncodeQualityLevelInfoKHR ENDS

VkVideoEncodeSessionParametersGetInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    videoSessionParameters DWORD ?
    BYTE 4 dup(?)
VkVideoEncodeSessionParametersGetInfoKHR ENDS

VkVideoEncodeSessionParametersFeedbackInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    hasOverrides DWORD ?
    BYTE 4 dup(?)
VkVideoEncodeSessionParametersFeedbackInfoKHR ENDS

VkQueueFamilyCheckpointProperties2NV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    checkpointExecutionStageMask DWORD ?
    BYTE 4 dup(?)
VkQueueFamilyCheckpointProperties2NV ENDS

VkCheckpointData2NV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    stage DWORD ?
    BYTE 4 dup(?)
    pCheckpointMarker QWORD ?
VkCheckpointData2NV ENDS

VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    fragmentShaderBarycentric DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR ENDS

VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    triStripVertexOrderIndependentOfProvokingVertex DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR ENDS

VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    shaderSubgroupUniformControlFlow DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR ENDS

VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    workgroupMemoryExplicitLayout DWORD ?
    workgroupMemoryExplicitLayoutScalarBlockLayout DWORD ?
    workgroupMemoryExplicitLayout8BitAccess DWORD ?
    workgroupMemoryExplicitLayout16BitAccess DWORD ?
VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR ENDS

VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    rayTracingMaintenance1 DWORD ?
    rayTracingPipelineTraceRaysIndirect2 DWORD ?
VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR ENDS

VkTraceRaysIndirectCommand2KHR STRUCT
    raygenShaderRecordAddress DWORD ?
    raygenShaderRecordSize DWORD ?
    missShaderBindingTableAddress DWORD ?
    missShaderBindingTableSize DWORD ?
    missShaderBindingTableStride DWORD ?
    hitShaderBindingTableAddress DWORD ?
    hitShaderBindingTableSize DWORD ?
    hitShaderBindingTableStride DWORD ?
    callableShaderBindingTableAddress DWORD ?
    callableShaderBindingTableSize DWORD ?
    callableShaderBindingTableStride DWORD ?
    m_width DWORD ?
    height DWORD ?
    depth DWORD ?
VkTraceRaysIndirectCommand2KHR ENDS

VkPhysicalDeviceShaderSubgroupRotateFeaturesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    shaderSubgroupRotate DWORD ?
    shaderSubgroupRotateClustered DWORD ?
VkPhysicalDeviceShaderSubgroupRotateFeaturesKHR ENDS

VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    shaderMaximalReconvergence DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR ENDS

VkPhysicalDeviceMaintenance5FeaturesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    maintenance5 DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceMaintenance5FeaturesKHR ENDS

VkPhysicalDeviceMaintenance5PropertiesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    earlyFragmentMultisampleCoverageAfterSampleCounting DWORD ?
    earlyFragmentSampleMaskTestBeforeSampleCounting DWORD ?
    depthStencilSwizzleOneSupport DWORD ?
    polygonModePointSize DWORD ?
    nonStrictSinglePixelWideLinesUseParallelogram DWORD ?
    nonStrictWideLinesUseParallelogram DWORD ?
VkPhysicalDeviceMaintenance5PropertiesKHR ENDS

VkRenderingAreaInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    viewMask DWORD ?
    colorAttachmentCount DWORD ?
    pColorAttachmentFormats QWORD ?
    depthAttachmentFormat DWORD ?
    stencilAttachmentFormat DWORD ?
VkRenderingAreaInfoKHR ENDS

VkImageSubresource2KHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    imageSubresource DWORD ?
    BYTE 4 dup(?)
VkImageSubresource2KHR ENDS

VkDeviceImageSubresourceInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    pCreateInfo QWORD ?
    pSubresource QWORD ?
VkDeviceImageSubresourceInfoKHR ENDS

VkSubresourceLayout2KHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    subresourceLayout DWORD ?
    BYTE 4 dup(?)
VkSubresourceLayout2KHR ENDS

VkPipelineCreateFlags2CreateInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    BYTE 4 dup(?)
VkPipelineCreateFlags2CreateInfoKHR ENDS

VkBufferUsageFlags2CreateInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    usage DWORD ?
    BYTE 4 dup(?)
VkBufferUsageFlags2CreateInfoKHR ENDS

VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    rayTracingPositionFetch DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR ENDS

VkCooperativeMatrixPropertiesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    MSize DWORD ?
    NSize DWORD ?
    KSize DWORD ?
    AType DWORD ?
    BType DWORD ?
    CType DWORD ?
    ResultType DWORD ?
    saturatingAccumulation DWORD ?
    scope DWORD ?
    BYTE 4 dup(?)
VkCooperativeMatrixPropertiesKHR ENDS

VkPhysicalDeviceCooperativeMatrixFeaturesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    cooperativeMatrix DWORD ?
    cooperativeMatrixRobustBufferAccess DWORD ?
VkPhysicalDeviceCooperativeMatrixFeaturesKHR ENDS

VkPhysicalDeviceCooperativeMatrixPropertiesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    cooperativeMatrixSupportedStages DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceCooperativeMatrixPropertiesKHR ENDS

VkVideoDecodeAV1ProfileInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    stdProfile DWORD ?
    filmGrainSupport DWORD ?
VkVideoDecodeAV1ProfileInfoKHR ENDS

VkVideoDecodeAV1CapabilitiesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    maxLevel DWORD ?
    BYTE 4 dup(?)
VkVideoDecodeAV1CapabilitiesKHR ENDS

VkVideoDecodeAV1SessionParametersCreateInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    pStdSequenceHeader QWORD ?
VkVideoDecodeAV1SessionParametersCreateInfoKHR ENDS

VkVideoDecodeAV1PictureInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    pStdPictureInfo QWORD ?
    frameHeaderOffset DWORD ?
    tileCount DWORD ?
    pTileOffsets QWORD ?
    pTileSizes QWORD ?
VkVideoDecodeAV1PictureInfoKHR ENDS

VkVideoDecodeAV1DpbSlotInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    pStdReferenceInfo QWORD ?
VkVideoDecodeAV1DpbSlotInfoKHR ENDS

VkPhysicalDeviceVideoMaintenance1FeaturesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    videoMaintenance1 DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceVideoMaintenance1FeaturesKHR ENDS

VkVideoInlineQueryInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    queryPool DWORD ?
    firstQuery DWORD ?
    queryCount DWORD ?
    BYTE 4 dup(?)
VkVideoInlineQueryInfoKHR ENDS

VkPhysicalDeviceVertexAttributeDivisorPropertiesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    maxVertexAttribDivisor DWORD ?
    supportsNonZeroFirstInstance DWORD ?
VkPhysicalDeviceVertexAttributeDivisorPropertiesKHR ENDS

VkVertexInputBindingDivisorDescriptionKHR STRUCT
    binding DWORD ?
    divisor DWORD ?
VkVertexInputBindingDivisorDescriptionKHR ENDS

VkPipelineVertexInputDivisorStateCreateInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    vertexBindingDivisorCount DWORD ?
    BYTE 4 dup(?)
    pVertexBindingDivisors QWORD ?
VkPipelineVertexInputDivisorStateCreateInfoKHR ENDS

VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    vertexAttributeInstanceRateDivisor DWORD ?
    vertexAttributeInstanceRateZeroDivisor DWORD ?
VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR ENDS

VkPhysicalDeviceShaderFloatControls2FeaturesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    shaderFloatControls2 DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceShaderFloatControls2FeaturesKHR ENDS

VkPhysicalDeviceIndexTypeUint8FeaturesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    indexTypeUint8 DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceIndexTypeUint8FeaturesKHR ENDS

VkPhysicalDeviceLineRasterizationFeaturesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    rectangularLines DWORD ?
    bresenhamLines DWORD ?
    smoothLines DWORD ?
    stippledRectangularLines DWORD ?
    stippledBresenhamLines DWORD ?
    stippledSmoothLines DWORD ?
VkPhysicalDeviceLineRasterizationFeaturesKHR ENDS

VkPhysicalDeviceLineRasterizationPropertiesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    lineSubPixelPrecisionBits DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceLineRasterizationPropertiesKHR ENDS

VkPipelineRasterizationLineStateCreateInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    lineRasterizationMode DWORD ?
    stippledLineEnable DWORD ?
    lineStippleFactor DWORD ?
    lineStipplePattern WORD ?
    BYTE 2 dup(?)
VkPipelineRasterizationLineStateCreateInfoKHR ENDS

VkCalibratedTimestampInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    timeDomain DWORD ?
    BYTE 4 dup(?)
VkCalibratedTimestampInfoKHR ENDS

VkPhysicalDeviceShaderExpectAssumeFeaturesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    shaderExpectAssume DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceShaderExpectAssumeFeaturesKHR ENDS

VkPhysicalDeviceMaintenance6FeaturesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    maintenance6 DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceMaintenance6FeaturesKHR ENDS

VkPhysicalDeviceMaintenance6PropertiesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    blockTexelViewCompatibleMultipleLayers DWORD ?
    maxCombinedImageSamplerDescriptorCount DWORD ?
    fragmentShadingRateClampCombinerInputs DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceMaintenance6PropertiesKHR ENDS

VkBindMemoryStatusKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    pResult QWORD ?
VkBindMemoryStatusKHR ENDS

VkBindDescriptorSetsInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    stageFlags DWORD ?
    layout DWORD ?
    firstSet DWORD ?
    descriptorSetCount DWORD ?
    pDescriptorSets QWORD ?
    dynamicOffsetCount DWORD ?
    BYTE 4 dup(?)
    pDynamicOffsets QWORD ?
VkBindDescriptorSetsInfoKHR ENDS

VkPushConstantsInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    layout DWORD ?
    stageFlags DWORD ?
    m_offset DWORD ?
    m_size DWORD ?
    pValues QWORD ?
VkPushConstantsInfoKHR ENDS

VkPushDescriptorSetInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    stageFlags DWORD ?
    layout DWORD ?
    set DWORD ?
    descriptorWriteCount DWORD ?
    pDescriptorWrites QWORD ?
VkPushDescriptorSetInfoKHR ENDS

VkPushDescriptorSetWithTemplateInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    descriptorUpdateTemplate DWORD ?
    layout DWORD ?
    set DWORD ?
    BYTE 4 dup(?)
    pData QWORD ?
VkPushDescriptorSetWithTemplateInfoKHR ENDS

VkSetDescriptorBufferOffsetsInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    stageFlags DWORD ?
    layout DWORD ?
    firstSet DWORD ?
    setCount DWORD ?
    pBufferIndices QWORD ?
    pOffsets QWORD ?
VkSetDescriptorBufferOffsetsInfoEXT ENDS

VkBindDescriptorBufferEmbeddedSamplersInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    stageFlags DWORD ?
    layout DWORD ?
    set DWORD ?
    BYTE 4 dup(?)
VkBindDescriptorBufferEmbeddedSamplersInfoEXT ENDS

VkDebugReportCallbackCreateInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    pfnCallback DWORD ?
    pUserData QWORD ?
VkDebugReportCallbackCreateInfoEXT ENDS

VkPipelineRasterizationStateRasterizationOrderAMD STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    rasterizationOrder DWORD ?
    BYTE 4 dup(?)
VkPipelineRasterizationStateRasterizationOrderAMD ENDS

VkDebugMarkerObjectNameInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    objectType DWORD ?
    BYTE 4 dup(?)
    object QWORD ?
    pObjectName QWORD ?
VkDebugMarkerObjectNameInfoEXT ENDS

VkDebugMarkerObjectTagInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    objectType DWORD ?
    BYTE 4 dup(?)
    object QWORD ?
    tagName QWORD ?
    tagSize QWORD ?
    pTag QWORD ?
VkDebugMarkerObjectTagInfoEXT ENDS

VkDebugMarkerMarkerInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    pMarkerName QWORD ?
    color DWORD 4 dup(?)
VkDebugMarkerMarkerInfoEXT ENDS

VkDedicatedAllocationImageCreateInfoNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    dedicatedAllocation DWORD ?
    BYTE 4 dup(?)
VkDedicatedAllocationImageCreateInfoNV ENDS

VkDedicatedAllocationBufferCreateInfoNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    dedicatedAllocation DWORD ?
    BYTE 4 dup(?)
VkDedicatedAllocationBufferCreateInfoNV ENDS

VkDedicatedAllocationMemoryAllocateInfoNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    image DWORD ?
    buffer DWORD ?
VkDedicatedAllocationMemoryAllocateInfoNV ENDS

VkPhysicalDeviceTransformFeedbackFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    transformFeedback DWORD ?
    geometryStreams DWORD ?
VkPhysicalDeviceTransformFeedbackFeaturesEXT ENDS

VkPhysicalDeviceTransformFeedbackPropertiesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    maxTransformFeedbackStreams DWORD ?
    maxTransformFeedbackBuffers DWORD ?
    maxTransformFeedbackBufferSize DWORD ?
    maxTransformFeedbackStreamDataSize DWORD ?
    maxTransformFeedbackBufferDataSize DWORD ?
    maxTransformFeedbackBufferDataStride DWORD ?
    transformFeedbackQueries DWORD ?
    transformFeedbackStreamsLinesTriangles DWORD ?
    transformFeedbackRasterizationStreamSelect DWORD ?
    transformFeedbackDraw DWORD ?
VkPhysicalDeviceTransformFeedbackPropertiesEXT ENDS

VkPipelineRasterizationStateStreamCreateInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    rasterizationStream DWORD ?
VkPipelineRasterizationStateStreamCreateInfoEXT ENDS

VkCuModuleCreateInfoNVX STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    dataSize QWORD ?
    pData QWORD ?
VkCuModuleCreateInfoNVX ENDS

VkCuFunctionCreateInfoNVX STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    module DWORD ?
    BYTE 4 dup(?)
    pName QWORD ?
VkCuFunctionCreateInfoNVX ENDS

VkCuLaunchInfoNVX STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    function DWORD ?
    gridDimX DWORD ?
    gridDimY DWORD ?
    gridDimZ DWORD ?
    blockDimX DWORD ?
    blockDimY DWORD ?
    blockDimZ DWORD ?
    sharedMemBytes DWORD ?
    paramCount QWORD ?
    pParams QWORD ?
    extraCount QWORD ?
    pExtras QWORD ?
VkCuLaunchInfoNVX ENDS

VkImageViewHandleInfoNVX STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    imageView DWORD ?
    descriptorType DWORD ?
    sampler DWORD ?
    BYTE 4 dup(?)
VkImageViewHandleInfoNVX ENDS

VkImageViewAddressPropertiesNVX STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    deviceAddress DWORD ?
    m_size DWORD ?
VkImageViewAddressPropertiesNVX ENDS

VkTextureLODGatherFormatPropertiesAMD STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    supportsTextureGatherLODBiasAMD DWORD ?
    BYTE 4 dup(?)
VkTextureLODGatherFormatPropertiesAMD ENDS

VkShaderResourceUsageAMD STRUCT
    numUsedVgprs DWORD ?
    numUsedSgprs DWORD ?
    ldsSizePerLocalWorkGroup DWORD ?
    BYTE 4 dup(?)
    ldsUsageSizeInBytes QWORD ?
    scratchMemUsageInBytes QWORD ?
VkShaderResourceUsageAMD ENDS

VkShaderStatisticsInfoAMD STRUCT
    shaderStageMask DWORD ?
    resourceUsage DWORD ?
    numPhysicalVgprs DWORD ?
    numPhysicalSgprs DWORD ?
    numAvailableVgprs DWORD ?
    numAvailableSgprs DWORD ?
    computeWorkGroupSize DWORD 3 dup(?)
VkShaderStatisticsInfoAMD ENDS

VkPhysicalDeviceCornerSampledImageFeaturesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    cornerSampledImage DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceCornerSampledImageFeaturesNV ENDS

VkExternalImageFormatPropertiesNV STRUCT
    imageFormatProperties DWORD ?
    externalMemoryFeatures DWORD ?
    exportFromImportedHandleTypes DWORD ?
    compatibleHandleTypes DWORD ?
VkExternalImageFormatPropertiesNV ENDS

VkExternalMemoryImageCreateInfoNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    handleTypes DWORD ?
    BYTE 4 dup(?)
VkExternalMemoryImageCreateInfoNV ENDS

VkExportMemoryAllocateInfoNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    handleTypes DWORD ?
    BYTE 4 dup(?)
VkExportMemoryAllocateInfoNV ENDS

VkValidationFlagsEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    disabledValidationCheckCount DWORD ?
    BYTE 4 dup(?)
    pDisabledValidationChecks QWORD ?
VkValidationFlagsEXT ENDS

VkImageViewASTCDecodeModeEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    decodeMode DWORD ?
    BYTE 4 dup(?)
VkImageViewASTCDecodeModeEXT ENDS

VkPhysicalDeviceASTCDecodeFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    decodeModeSharedExponent DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceASTCDecodeFeaturesEXT ENDS

VkPhysicalDevicePipelineRobustnessFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    pipelineRobustness DWORD ?
    BYTE 4 dup(?)
VkPhysicalDevicePipelineRobustnessFeaturesEXT ENDS

VkPhysicalDevicePipelineRobustnessPropertiesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    defaultRobustnessStorageBuffers DWORD ?
    defaultRobustnessUniformBuffers DWORD ?
    defaultRobustnessVertexInputs DWORD ?
    defaultRobustnessImages DWORD ?
VkPhysicalDevicePipelineRobustnessPropertiesEXT ENDS

VkPipelineRobustnessCreateInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    storageBuffers DWORD ?
    uniformBuffers DWORD ?
    vertexInputs DWORD ?
    images DWORD ?
VkPipelineRobustnessCreateInfoEXT ENDS

VkConditionalRenderingBeginInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    buffer DWORD ?
    m_offset DWORD ?
    flags DWORD ?
    BYTE 4 dup(?)
VkConditionalRenderingBeginInfoEXT ENDS

VkPhysicalDeviceConditionalRenderingFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    conditionalRendering DWORD ?
    inheritedConditionalRendering DWORD ?
VkPhysicalDeviceConditionalRenderingFeaturesEXT ENDS

VkCommandBufferInheritanceConditionalRenderingInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    conditionalRenderingEnable DWORD ?
    BYTE 4 dup(?)
VkCommandBufferInheritanceConditionalRenderingInfoEXT ENDS

VkViewportWScalingNV STRUCT
    xcoeff DWORD ?
    ycoeff DWORD ?
VkViewportWScalingNV ENDS

VkPipelineViewportWScalingStateCreateInfoNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    viewportWScalingEnable DWORD ?
    viewportCount DWORD ?
    pViewportWScalings QWORD ?
VkPipelineViewportWScalingStateCreateInfoNV ENDS

VkSurfaceCapabilities2EXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    minImageCount DWORD ?
    maxImageCount DWORD ?
    currentExtent DWORD ?
    minImageExtent DWORD ?
    maxImageExtent DWORD ?
    maxImageArrayLayers DWORD ?
    supportedTransforms DWORD ?
    currentTransform DWORD ?
    supportedCompositeAlpha DWORD ?
    supportedUsageFlags DWORD ?
    supportedSurfaceCounters DWORD ?
    BYTE 4 dup(?)
VkSurfaceCapabilities2EXT ENDS

VkDisplayPowerInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    powerState DWORD ?
    BYTE 4 dup(?)
VkDisplayPowerInfoEXT ENDS

VkDeviceEventInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    deviceEvent DWORD ?
    BYTE 4 dup(?)
VkDeviceEventInfoEXT ENDS

VkDisplayEventInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    displayEvent DWORD ?
    BYTE 4 dup(?)
VkDisplayEventInfoEXT ENDS

VkSwapchainCounterCreateInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    surfaceCounters DWORD ?
    BYTE 4 dup(?)
VkSwapchainCounterCreateInfoEXT ENDS

VkRefreshCycleDurationGOOGLE STRUCT
    refreshDuration QWORD ?
VkRefreshCycleDurationGOOGLE ENDS

VkPastPresentationTimingGOOGLE STRUCT
    presentID DWORD ?
    BYTE 4 dup(?)
    desiredPresentTime QWORD ?
    actualPresentTime QWORD ?
    earliestPresentTime QWORD ?
    presentMargin QWORD ?
VkPastPresentationTimingGOOGLE ENDS

VkPresentTimeGOOGLE STRUCT
    presentID DWORD ?
    BYTE 4 dup(?)
    desiredPresentTime QWORD ?
VkPresentTimeGOOGLE ENDS

VkPresentTimesInfoGOOGLE STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    swapchainCount DWORD ?
    BYTE 4 dup(?)
    pTimes QWORD ?
VkPresentTimesInfoGOOGLE ENDS

VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    perViewPositionAllComponents DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX ENDS

VkViewportSwizzleNV STRUCT
    x DWORD ?
    y DWORD ?
    z DWORD ?
    w DWORD ?
VkViewportSwizzleNV ENDS

VkPipelineViewportSwizzleStateCreateInfoNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    viewportCount DWORD ?
    pViewportSwizzles QWORD ?
VkPipelineViewportSwizzleStateCreateInfoNV ENDS

VkPhysicalDeviceDiscardRectanglePropertiesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    maxDiscardRectangles DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceDiscardRectanglePropertiesEXT ENDS

VkPipelineDiscardRectangleStateCreateInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    discardRectangleMode DWORD ?
    discardRectangleCount DWORD ?
    BYTE 4 dup(?)
    pDiscardRectangles QWORD ?
VkPipelineDiscardRectangleStateCreateInfoEXT ENDS

VkPhysicalDeviceConservativeRasterizationPropertiesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    primitiveOverestimationSize DWORD ?
    maxExtraPrimitiveOverestimationSize DWORD ?
    extraPrimitiveOverestimationSizeGranularity DWORD ?
    primitiveUnderestimation DWORD ?
    conservativePointAndLineRasterization DWORD ?
    degenerateTrianglesRasterized DWORD ?
    degenerateLinesRasterized DWORD ?
    fullyCoveredFragmentShaderInputVariable DWORD ?
    conservativeRasterizationPostDepthCoverage DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceConservativeRasterizationPropertiesEXT ENDS

VkPipelineRasterizationConservativeStateCreateInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    conservativeRasterizationMode DWORD ?
    extraPrimitiveOverestimationSize DWORD ?
    BYTE 4 dup(?)
VkPipelineRasterizationConservativeStateCreateInfoEXT ENDS

VkPhysicalDeviceDepthClipEnableFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    depthClipEnable DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceDepthClipEnableFeaturesEXT ENDS

VkPipelineRasterizationDepthClipStateCreateInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    depthClipEnable DWORD ?
VkPipelineRasterizationDepthClipStateCreateInfoEXT ENDS

VkXYColorEXT STRUCT
    x DWORD ?
    y DWORD ?
VkXYColorEXT ENDS

VkHdrMetadataEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    displayPrimaryRed DWORD ?
    displayPrimaryGreen DWORD ?
    displayPrimaryBlue DWORD ?
    whitePoint DWORD ?
    maxLuminance DWORD ?
    minLuminance DWORD ?
    maxContentLightLevel DWORD ?
    maxFrameAverageLightLevel DWORD ?
VkHdrMetadataEXT ENDS

VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    relaxedLineRasterization DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG ENDS

VkDebugUtilsLabelEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    pLabelName QWORD ?
    color DWORD 4 dup(?)
VkDebugUtilsLabelEXT ENDS

VkDebugUtilsObjectNameInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    objectType DWORD ?
    BYTE 4 dup(?)
    objectHandle QWORD ?
    pObjectName QWORD ?
VkDebugUtilsObjectNameInfoEXT ENDS

VkDebugUtilsMessengerCallbackDataEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    BYTE 4 dup(?)
    pMessageIdName QWORD ?
    messageIdNumber DWORD ?
    BYTE 4 dup(?)
    pMessage QWORD ?
    queueLabelCount DWORD ?
    BYTE 4 dup(?)
    pQueueLabels QWORD ?
    cmdBufLabelCount DWORD ?
    BYTE 4 dup(?)
    pCmdBufLabels QWORD ?
    objectCount DWORD ?
    BYTE 4 dup(?)
    pObjects QWORD ?
VkDebugUtilsMessengerCallbackDataEXT ENDS

VkDebugUtilsMessengerCreateInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    messageSeverity DWORD ?
    messageType DWORD ?
    pfnUserCallback DWORD ?
    pUserData QWORD ?
VkDebugUtilsMessengerCreateInfoEXT ENDS

VkDebugUtilsObjectTagInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    objectType DWORD ?
    BYTE 4 dup(?)
    objectHandle QWORD ?
    tagName QWORD ?
    tagSize QWORD ?
    pTag QWORD ?
VkDebugUtilsObjectTagInfoEXT ENDS

VkSampleLocationEXT STRUCT
    x DWORD ?
    y DWORD ?
VkSampleLocationEXT ENDS

VkSampleLocationsInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    sampleLocationsPerPixel DWORD ?
    sampleLocationGridSize DWORD ?
    sampleLocationsCount DWORD ?
    BYTE 4 dup(?)
    pSampleLocations QWORD ?
VkSampleLocationsInfoEXT ENDS

VkAttachmentSampleLocationsEXT STRUCT
    attachmentIndex DWORD ?
    sampleLocationsInfo DWORD ?
VkAttachmentSampleLocationsEXT ENDS

VkSubpassSampleLocationsEXT STRUCT
    subpassIndex DWORD ?
    sampleLocationsInfo DWORD ?
VkSubpassSampleLocationsEXT ENDS

VkRenderPassSampleLocationsBeginInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    attachmentInitialSampleLocationsCount DWORD ?
    BYTE 4 dup(?)
    pAttachmentInitialSampleLocations QWORD ?
    postSubpassSampleLocationsCount DWORD ?
    BYTE 4 dup(?)
    pPostSubpassSampleLocations QWORD ?
VkRenderPassSampleLocationsBeginInfoEXT ENDS

VkPipelineSampleLocationsStateCreateInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    sampleLocationsEnable DWORD ?
    sampleLocationsInfo DWORD ?
VkPipelineSampleLocationsStateCreateInfoEXT ENDS

VkPhysicalDeviceSampleLocationsPropertiesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    sampleLocationSampleCounts DWORD ?
    maxSampleLocationGridSize DWORD ?
    sampleLocationCoordinateRange DWORD 2 dup(?)
    sampleLocationSubPixelBits DWORD ?
    variableSampleLocations DWORD ?
VkPhysicalDeviceSampleLocationsPropertiesEXT ENDS

VkMultisamplePropertiesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    maxSampleLocationGridSize DWORD ?
    BYTE 4 dup(?)
VkMultisamplePropertiesEXT ENDS

VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    advancedBlendCoherentOperations DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT ENDS

VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    advancedBlendMaxColorAttachments DWORD ?
    advancedBlendIndependentBlend DWORD ?
    advancedBlendNonPremultipliedSrcColor DWORD ?
    advancedBlendNonPremultipliedDstColor DWORD ?
    advancedBlendCorrelatedOverlap DWORD ?
    advancedBlendAllOperations DWORD ?
VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT ENDS

VkPipelineColorBlendAdvancedStateCreateInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    srcPremultiplied DWORD ?
    dstPremultiplied DWORD ?
    blendOverlap DWORD ?
    BYTE 4 dup(?)
VkPipelineColorBlendAdvancedStateCreateInfoEXT ENDS

VkPipelineCoverageToColorStateCreateInfoNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    coverageToColorEnable DWORD ?
    coverageToColorLocation DWORD ?
    BYTE 4 dup(?)
VkPipelineCoverageToColorStateCreateInfoNV ENDS

VkPipelineCoverageModulationStateCreateInfoNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    coverageModulationMode DWORD ?
    coverageModulationTableEnable DWORD ?
    coverageModulationTableCount DWORD ?
    pCoverageModulationTable QWORD ?
VkPipelineCoverageModulationStateCreateInfoNV ENDS

VkPhysicalDeviceShaderSMBuiltinsPropertiesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    shaderSMCount DWORD ?
    shaderWarpsPerSM DWORD ?
VkPhysicalDeviceShaderSMBuiltinsPropertiesNV ENDS

VkPhysicalDeviceShaderSMBuiltinsFeaturesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    shaderSMBuiltins DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceShaderSMBuiltinsFeaturesNV ENDS

VkDrmFormatModifierPropertiesEXT STRUCT
    drmFormatModifier QWORD ?
    drmFormatModifierPlaneCount DWORD ?
    drmFormatModifierTilingFeatures DWORD ?
VkDrmFormatModifierPropertiesEXT ENDS

VkDrmFormatModifierPropertiesListEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    drmFormatModifierCount DWORD ?
    BYTE 4 dup(?)
    pDrmFormatModifierProperties QWORD ?
VkDrmFormatModifierPropertiesListEXT ENDS

VkPhysicalDeviceImageDrmFormatModifierInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    drmFormatModifier QWORD ?
    sharingMode DWORD ?
    queueFamilyIndexCount DWORD ?
    pQueueFamilyIndices QWORD ?
VkPhysicalDeviceImageDrmFormatModifierInfoEXT ENDS

VkImageDrmFormatModifierListCreateInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    drmFormatModifierCount DWORD ?
    BYTE 4 dup(?)
    pDrmFormatModifiers QWORD ?
VkImageDrmFormatModifierListCreateInfoEXT ENDS

VkImageDrmFormatModifierExplicitCreateInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    drmFormatModifier QWORD ?
    drmFormatModifierPlaneCount DWORD ?
    BYTE 4 dup(?)
    pPlaneLayouts QWORD ?
VkImageDrmFormatModifierExplicitCreateInfoEXT ENDS

VkImageDrmFormatModifierPropertiesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    drmFormatModifier QWORD ?
VkImageDrmFormatModifierPropertiesEXT ENDS

VkDrmFormatModifierProperties2EXT STRUCT
    drmFormatModifier QWORD ?
    drmFormatModifierPlaneCount DWORD ?
    drmFormatModifierTilingFeatures DWORD ?
VkDrmFormatModifierProperties2EXT ENDS

VkDrmFormatModifierPropertiesList2EXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    drmFormatModifierCount DWORD ?
    BYTE 4 dup(?)
    pDrmFormatModifierProperties QWORD ?
VkDrmFormatModifierPropertiesList2EXT ENDS

VkValidationCacheCreateInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    BYTE 4 dup(?)
    initialDataSize QWORD ?
    pInitialData QWORD ?
VkValidationCacheCreateInfoEXT ENDS

VkShaderModuleValidationCacheCreateInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    validationCache DWORD ?
    BYTE 4 dup(?)
VkShaderModuleValidationCacheCreateInfoEXT ENDS

VkShadingRatePaletteNV STRUCT
    shadingRatePaletteEntryCount DWORD ?
    BYTE 4 dup(?)
    pShadingRatePaletteEntries QWORD ?
VkShadingRatePaletteNV ENDS

VkPipelineViewportShadingRateImageStateCreateInfoNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    shadingRateImageEnable DWORD ?
    viewportCount DWORD ?
    pShadingRatePalettes QWORD ?
VkPipelineViewportShadingRateImageStateCreateInfoNV ENDS

VkPhysicalDeviceShadingRateImageFeaturesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    shadingRateImage DWORD ?
    shadingRateCoarseSampleOrder DWORD ?
VkPhysicalDeviceShadingRateImageFeaturesNV ENDS

VkPhysicalDeviceShadingRateImagePropertiesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    shadingRateTexelSize DWORD ?
    shadingRatePaletteSize DWORD ?
    shadingRateMaxCoarseSamples DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceShadingRateImagePropertiesNV ENDS

VkCoarseSampleLocationNV STRUCT
    pixelX DWORD ?
    pixelY DWORD ?
    sample DWORD ?
VkCoarseSampleLocationNV ENDS

VkCoarseSampleOrderCustomNV STRUCT
    shadingRate DWORD ?
    sampleCount DWORD ?
    sampleLocationCount DWORD ?
    BYTE 4 dup(?)
    pSampleLocations QWORD ?
VkCoarseSampleOrderCustomNV ENDS

VkPipelineViewportCoarseSampleOrderStateCreateInfoNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    sampleOrderType DWORD ?
    customSampleOrderCount DWORD ?
    pCustomSampleOrders QWORD ?
VkPipelineViewportCoarseSampleOrderStateCreateInfoNV ENDS

VkRayTracingShaderGroupCreateInfoNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    m_type DWORD ?
    generalShader DWORD ?
    closestHitShader DWORD ?
    anyHitShader DWORD ?
    intersectionShader DWORD ?
    BYTE 4 dup(?)
VkRayTracingShaderGroupCreateInfoNV ENDS

VkRayTracingPipelineCreateInfoNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    stageCount DWORD ?
    pStages QWORD ?
    groupCount DWORD ?
    BYTE 4 dup(?)
    pGroups QWORD ?
    maxRecursionDepth DWORD ?
    layout DWORD ?
    basePipelineHandle DWORD ?
    basePipelineIndex DWORD ?
VkRayTracingPipelineCreateInfoNV ENDS

VkGeometryTrianglesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    vertexData DWORD ?
    vertexOffset DWORD ?
    vertexCount DWORD ?
    vertexStride DWORD ?
    vertexFormat DWORD ?
    indexData DWORD ?
    indexOffset DWORD ?
    indexCount DWORD ?
    indexType DWORD ?
    transformData DWORD ?
    transformOffset DWORD ?
    BYTE 4 dup(?)
VkGeometryTrianglesNV ENDS

VkGeometryAABBNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    aabbData DWORD ?
    numAABBs DWORD ?
    stride DWORD ?
    m_offset DWORD ?
VkGeometryAABBNV ENDS

VkGeometryDataNV STRUCT
    triangles DWORD ?
    aabbs DWORD ?
VkGeometryDataNV ENDS

VkGeometryNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    geometryType DWORD ?
    geometry DWORD ?
    flags DWORD ?
    BYTE 4 dup(?)
VkGeometryNV ENDS

VkAccelerationStructureInfoNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    m_type DWORD ?
    flags DWORD ?
    instanceCount DWORD ?
    geometryCount DWORD ?
    pGeometries QWORD ?
VkAccelerationStructureInfoNV ENDS

VkAccelerationStructureCreateInfoNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    compactedSize DWORD ?
    info DWORD ?
VkAccelerationStructureCreateInfoNV ENDS

VkBindAccelerationStructureMemoryInfoNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    accelerationStructure DWORD ?
    memory DWORD ?
    memoryOffset DWORD ?
    deviceIndexCount DWORD ?
    pDeviceIndices QWORD ?
VkBindAccelerationStructureMemoryInfoNV ENDS

VkWriteDescriptorSetAccelerationStructureNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    accelerationStructureCount DWORD ?
    BYTE 4 dup(?)
    pAccelerationStructures QWORD ?
VkWriteDescriptorSetAccelerationStructureNV ENDS

VkAccelerationStructureMemoryRequirementsInfoNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    m_type DWORD ?
    accelerationStructure DWORD ?
VkAccelerationStructureMemoryRequirementsInfoNV ENDS

VkPhysicalDeviceRayTracingPropertiesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    shaderGroupHandleSize DWORD ?
    maxRecursionDepth DWORD ?
    maxShaderGroupStride DWORD ?
    shaderGroupBaseAlignment DWORD ?
    maxGeometryCount QWORD ?
    maxInstanceCount QWORD ?
    maxTriangleCount QWORD ?
    maxDescriptorSetAccelerationStructures DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceRayTracingPropertiesNV ENDS

VkTransformMatrixKHR STRUCT
VkTransformMatrixKHR ENDS

VkAabbPositionsKHR STRUCT
    minX DWORD ?
    minY DWORD ?
    minZ DWORD ?
    maxX DWORD ?
    maxY DWORD ?
    maxZ DWORD ?
VkAabbPositionsKHR ENDS

VkAccelerationStructureInstanceKHR STRUCT
    transform DWORD ?
    BYTE 4 dup(?)
    accelerationStructureReference QWORD ?
VkAccelerationStructureInstanceKHR ENDS

VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    representativeFragmentTest DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV ENDS

VkPipelineRepresentativeFragmentTestStateCreateInfoNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    representativeFragmentTestEnable DWORD ?
    BYTE 4 dup(?)
VkPipelineRepresentativeFragmentTestStateCreateInfoNV ENDS

VkPhysicalDeviceImageViewImageFormatInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    imageViewType DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceImageViewImageFormatInfoEXT ENDS

VkFilterCubicImageViewImageFormatPropertiesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    filterCubic DWORD ?
    filterCubicMinmax DWORD ?
VkFilterCubicImageViewImageFormatPropertiesEXT ENDS

VkImportMemoryHostPointerInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    handleType DWORD ?
    BYTE 4 dup(?)
    pHostPointer QWORD ?
VkImportMemoryHostPointerInfoEXT ENDS

VkMemoryHostPointerPropertiesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    memoryTypeBits DWORD ?
    BYTE 4 dup(?)
VkMemoryHostPointerPropertiesEXT ENDS

VkPhysicalDeviceExternalMemoryHostPropertiesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    minImportedHostPointerAlignment DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceExternalMemoryHostPropertiesEXT ENDS

VkPipelineCompilerControlCreateInfoAMD STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    compilerControlFlags DWORD ?
    BYTE 4 dup(?)
VkPipelineCompilerControlCreateInfoAMD ENDS

VkPhysicalDeviceShaderCorePropertiesAMD STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    shaderEngineCount DWORD ?
    shaderArraysPerEngineCount DWORD ?
    computeUnitsPerShaderArray DWORD ?
    simdPerComputeUnit DWORD ?
    wavefrontsPerSimd DWORD ?
    wavefrontSize DWORD ?
    sgprsPerSimd DWORD ?
    minSgprAllocation DWORD ?
    maxSgprAllocation DWORD ?
    sgprAllocationGranularity DWORD ?
    vgprsPerSimd DWORD ?
    minVgprAllocation DWORD ?
    maxVgprAllocation DWORD ?
    vgprAllocationGranularity DWORD ?
VkPhysicalDeviceShaderCorePropertiesAMD ENDS

VkDeviceMemoryOverallocationCreateInfoAMD STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    overallocationBehavior DWORD ?
    BYTE 4 dup(?)
VkDeviceMemoryOverallocationCreateInfoAMD ENDS

VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    maxVertexAttribDivisor DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT ENDS

VkPhysicalDeviceComputeShaderDerivativesFeaturesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    computeDerivativeGroupQuads DWORD ?
    computeDerivativeGroupLinear DWORD ?
VkPhysicalDeviceComputeShaderDerivativesFeaturesNV ENDS

VkPhysicalDeviceMeshShaderFeaturesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    taskShader DWORD ?
    meshShader DWORD ?
VkPhysicalDeviceMeshShaderFeaturesNV ENDS

VkPhysicalDeviceMeshShaderPropertiesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    maxDrawMeshTasksCount DWORD ?
    maxTaskWorkGroupInvocations DWORD ?
    maxTaskWorkGroupSize DWORD 3 dup(?)
    maxTaskTotalMemorySize DWORD ?
    maxTaskOutputCount DWORD ?
    maxMeshWorkGroupInvocations DWORD ?
    maxMeshWorkGroupSize DWORD 3 dup(?)
    maxMeshTotalMemorySize DWORD ?
    maxMeshOutputVertices DWORD ?
    maxMeshOutputPrimitives DWORD ?
    maxMeshMultiviewViewCount DWORD ?
    meshOutputPerVertexGranularity DWORD ?
    meshOutputPerPrimitiveGranularity DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceMeshShaderPropertiesNV ENDS

VkDrawMeshTasksIndirectCommandNV STRUCT
    taskCount DWORD ?
    firstTask DWORD ?
VkDrawMeshTasksIndirectCommandNV ENDS

VkPhysicalDeviceShaderImageFootprintFeaturesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    imageFootprint DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceShaderImageFootprintFeaturesNV ENDS

VkPipelineViewportExclusiveScissorStateCreateInfoNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    exclusiveScissorCount DWORD ?
    BYTE 4 dup(?)
    pExclusiveScissors QWORD ?
VkPipelineViewportExclusiveScissorStateCreateInfoNV ENDS

VkPhysicalDeviceExclusiveScissorFeaturesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    exclusiveScissor DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceExclusiveScissorFeaturesNV ENDS

VkQueueFamilyCheckpointPropertiesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    checkpointExecutionStageMask DWORD ?
    BYTE 4 dup(?)
VkQueueFamilyCheckpointPropertiesNV ENDS

VkCheckpointDataNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    stage DWORD ?
    BYTE 4 dup(?)
    pCheckpointMarker QWORD ?
VkCheckpointDataNV ENDS

VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    shaderIntegerFunctions2 DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL ENDS

VkPerformanceValueINTEL STRUCT
    m_type DWORD ?
    data DWORD ?
VkPerformanceValueINTEL ENDS

VkInitializePerformanceApiInfoINTEL STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    pUserData QWORD ?
VkInitializePerformanceApiInfoINTEL ENDS

VkQueryPoolPerformanceQueryCreateInfoINTEL STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    performanceCountersSampling DWORD ?
    BYTE 4 dup(?)
VkQueryPoolPerformanceQueryCreateInfoINTEL ENDS

VkPerformanceMarkerInfoINTEL STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    marker QWORD ?
VkPerformanceMarkerInfoINTEL ENDS

VkPerformanceStreamMarkerInfoINTEL STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    marker DWORD ?
    BYTE 4 dup(?)
VkPerformanceStreamMarkerInfoINTEL ENDS

VkPerformanceOverrideInfoINTEL STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    m_type DWORD ?
    enable DWORD ?
    parameter QWORD ?
VkPerformanceOverrideInfoINTEL ENDS

VkPerformanceConfigurationAcquireInfoINTEL STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    m_type DWORD ?
    BYTE 4 dup(?)
VkPerformanceConfigurationAcquireInfoINTEL ENDS

VkPhysicalDevicePCIBusInfoPropertiesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    pciDomain DWORD ?
    pciBus DWORD ?
    pciDevice DWORD ?
    pciFunction DWORD ?
VkPhysicalDevicePCIBusInfoPropertiesEXT ENDS

VkDisplayNativeHdrSurfaceCapabilitiesAMD STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    localDimmingSupport DWORD ?
    BYTE 4 dup(?)
VkDisplayNativeHdrSurfaceCapabilitiesAMD ENDS

VkSwapchainDisplayNativeHdrCreateInfoAMD STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    localDimmingEnable DWORD ?
    BYTE 4 dup(?)
VkSwapchainDisplayNativeHdrCreateInfoAMD ENDS

VkPhysicalDeviceFragmentDensityMapFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    fragmentDensityMap DWORD ?
    fragmentDensityMapDynamic DWORD ?
    fragmentDensityMapNonSubsampledImages DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceFragmentDensityMapFeaturesEXT ENDS

VkPhysicalDeviceFragmentDensityMapPropertiesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    minFragmentDensityTexelSize DWORD ?
    maxFragmentDensityTexelSize DWORD ?
    fragmentDensityInvocations DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceFragmentDensityMapPropertiesEXT ENDS

VkRenderPassFragmentDensityMapCreateInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    fragmentDensityMapAttachment DWORD ?
    BYTE 4 dup(?)
VkRenderPassFragmentDensityMapCreateInfoEXT ENDS

VkPhysicalDeviceShaderCoreProperties2AMD STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    shaderCoreFeatures DWORD ?
    activeComputeUnitCount DWORD ?
VkPhysicalDeviceShaderCoreProperties2AMD ENDS

VkPhysicalDeviceCoherentMemoryFeaturesAMD STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    deviceCoherentMemory DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceCoherentMemoryFeaturesAMD ENDS

VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    shaderImageInt64Atomics DWORD ?
    sparseImageInt64Atomics DWORD ?
VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT ENDS

VkPhysicalDeviceMemoryBudgetPropertiesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
VkPhysicalDeviceMemoryBudgetPropertiesEXT ENDS

VkPhysicalDeviceMemoryPriorityFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    memoryPriority DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceMemoryPriorityFeaturesEXT ENDS

VkMemoryPriorityAllocateInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    priority DWORD ?
    BYTE 4 dup(?)
VkMemoryPriorityAllocateInfoEXT ENDS

VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    dedicatedAllocationImageAliasing DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV ENDS

VkPhysicalDeviceBufferDeviceAddressFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    bufferDeviceAddress DWORD ?
    bufferDeviceAddressCaptureReplay DWORD ?
    bufferDeviceAddressMultiDevice DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceBufferDeviceAddressFeaturesEXT ENDS

VkBufferDeviceAddressCreateInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    deviceAddress DWORD ?
    BYTE 4 dup(?)
VkBufferDeviceAddressCreateInfoEXT ENDS

VkValidationFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    enabledValidationFeatureCount DWORD ?
    BYTE 4 dup(?)
    pEnabledValidationFeatures QWORD ?
    disabledValidationFeatureCount DWORD ?
    BYTE 4 dup(?)
    pDisabledValidationFeatures QWORD ?
VkValidationFeaturesEXT ENDS

VkCooperativeMatrixPropertiesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    MSize DWORD ?
    NSize DWORD ?
    KSize DWORD ?
    AType DWORD ?
    BType DWORD ?
    CType DWORD ?
    DType DWORD ?
    scope DWORD ?
VkCooperativeMatrixPropertiesNV ENDS

VkPhysicalDeviceCooperativeMatrixFeaturesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    cooperativeMatrix DWORD ?
    cooperativeMatrixRobustBufferAccess DWORD ?
VkPhysicalDeviceCooperativeMatrixFeaturesNV ENDS

VkPhysicalDeviceCooperativeMatrixPropertiesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    cooperativeMatrixSupportedStages DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceCooperativeMatrixPropertiesNV ENDS

VkPhysicalDeviceCoverageReductionModeFeaturesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    coverageReductionMode DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceCoverageReductionModeFeaturesNV ENDS

VkPipelineCoverageReductionStateCreateInfoNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    coverageReductionMode DWORD ?
VkPipelineCoverageReductionStateCreateInfoNV ENDS

VkFramebufferMixedSamplesCombinationNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    coverageReductionMode DWORD ?
    rasterizationSamples DWORD ?
    depthStencilSamples DWORD ?
    colorSamples DWORD ?
VkFramebufferMixedSamplesCombinationNV ENDS

VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    fragmentShaderSampleInterlock DWORD ?
    fragmentShaderPixelInterlock DWORD ?
    fragmentShaderShadingRateInterlock DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT ENDS

VkPhysicalDeviceYcbcrImageArraysFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    ycbcrImageArrays DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceYcbcrImageArraysFeaturesEXT ENDS

VkPhysicalDeviceProvokingVertexFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    provokingVertexLast DWORD ?
    transformFeedbackPreservesProvokingVertex DWORD ?
VkPhysicalDeviceProvokingVertexFeaturesEXT ENDS

VkPhysicalDeviceProvokingVertexPropertiesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    provokingVertexModePerPipeline DWORD ?
    transformFeedbackPreservesTriangleFanProvokingVertex DWORD ?
VkPhysicalDeviceProvokingVertexPropertiesEXT ENDS

VkPipelineRasterizationProvokingVertexStateCreateInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    provokingVertexMode DWORD ?
    BYTE 4 dup(?)
VkPipelineRasterizationProvokingVertexStateCreateInfoEXT ENDS

VkHeadlessSurfaceCreateInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    BYTE 4 dup(?)
VkHeadlessSurfaceCreateInfoEXT ENDS

VkPhysicalDeviceShaderAtomicFloatFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    shaderBufferFloat32Atomics DWORD ?
    shaderBufferFloat32AtomicAdd DWORD ?
    shaderBufferFloat64Atomics DWORD ?
    shaderBufferFloat64AtomicAdd DWORD ?
    shaderSharedFloat32Atomics DWORD ?
    shaderSharedFloat32AtomicAdd DWORD ?
    shaderSharedFloat64Atomics DWORD ?
    shaderSharedFloat64AtomicAdd DWORD ?
    shaderImageFloat32Atomics DWORD ?
    shaderImageFloat32AtomicAdd DWORD ?
    sparseImageFloat32Atomics DWORD ?
    sparseImageFloat32AtomicAdd DWORD ?
VkPhysicalDeviceShaderAtomicFloatFeaturesEXT ENDS

VkPhysicalDeviceExtendedDynamicStateFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    extendedDynamicState DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceExtendedDynamicStateFeaturesEXT ENDS

VkPhysicalDeviceHostImageCopyFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    hostImageCopy DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceHostImageCopyFeaturesEXT ENDS

VkPhysicalDeviceHostImageCopyPropertiesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    copySrcLayoutCount DWORD ?
    BYTE 4 dup(?)
    pCopySrcLayouts QWORD ?
    copyDstLayoutCount DWORD ?
    BYTE 4 dup(?)
    pCopyDstLayouts QWORD ?
    identicalMemoryTypeRequirements DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceHostImageCopyPropertiesEXT ENDS

VkMemoryToImageCopyEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    pHostPointer QWORD ?
    memoryRowLength DWORD ?
    memoryImageHeight DWORD ?
    imageSubresource DWORD ?
    imageOffset DWORD ?
    imageExtent DWORD ?
    BYTE 4 dup(?)
VkMemoryToImageCopyEXT ENDS

VkImageToMemoryCopyEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    pHostPointer QWORD ?
    memoryRowLength DWORD ?
    memoryImageHeight DWORD ?
    imageSubresource DWORD ?
    imageOffset DWORD ?
    imageExtent DWORD ?
    BYTE 4 dup(?)
VkImageToMemoryCopyEXT ENDS

VkCopyMemoryToImageInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    dstImage DWORD ?
    dstImageLayout DWORD ?
    regionCount DWORD ?
    pRegions QWORD ?
VkCopyMemoryToImageInfoEXT ENDS

VkCopyImageToMemoryInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    srcImage DWORD ?
    srcImageLayout DWORD ?
    regionCount DWORD ?
    pRegions QWORD ?
VkCopyImageToMemoryInfoEXT ENDS

VkCopyImageToImageInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    srcImage DWORD ?
    srcImageLayout DWORD ?
    dstImage DWORD ?
    dstImageLayout DWORD ?
    regionCount DWORD ?
    pRegions QWORD ?
VkCopyImageToImageInfoEXT ENDS

VkHostImageLayoutTransitionInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    image DWORD ?
    oldLayout DWORD ?
    newLayout DWORD ?
    subresourceRange DWORD ?
VkHostImageLayoutTransitionInfoEXT ENDS

VkSubresourceHostMemcpySizeEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    m_size DWORD ?
    BYTE 4 dup(?)
VkSubresourceHostMemcpySizeEXT ENDS

VkHostImageCopyDevicePerformanceQueryEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    optimalDeviceAccess DWORD ?
    identicalMemoryLayout DWORD ?
VkHostImageCopyDevicePerformanceQueryEXT ENDS

VkPhysicalDeviceMapMemoryPlacedFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    memoryMapPlaced DWORD ?
    memoryMapRangePlaced DWORD ?
    memoryUnmapReserve DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceMapMemoryPlacedFeaturesEXT ENDS

VkPhysicalDeviceMapMemoryPlacedPropertiesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    minPlacedMemoryMapAlignment DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceMapMemoryPlacedPropertiesEXT ENDS

VkMemoryMapPlacedInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    pPlacedAddress QWORD ?
VkMemoryMapPlacedInfoEXT ENDS

VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    shaderBufferFloat16Atomics DWORD ?
    shaderBufferFloat16AtomicAdd DWORD ?
    shaderBufferFloat16AtomicMinMax DWORD ?
    shaderBufferFloat32AtomicMinMax DWORD ?
    shaderBufferFloat64AtomicMinMax DWORD ?
    shaderSharedFloat16Atomics DWORD ?
    shaderSharedFloat16AtomicAdd DWORD ?
    shaderSharedFloat16AtomicMinMax DWORD ?
    shaderSharedFloat32AtomicMinMax DWORD ?
    shaderSharedFloat64AtomicMinMax DWORD ?
    shaderImageFloat32AtomicMinMax DWORD ?
    sparseImageFloat32AtomicMinMax DWORD ?
VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT ENDS

VkSurfacePresentModeEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    presentMode DWORD ?
    BYTE 4 dup(?)
VkSurfacePresentModeEXT ENDS

VkSurfacePresentScalingCapabilitiesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    supportedPresentScaling DWORD ?
    supportedPresentGravityX DWORD ?
    supportedPresentGravityY DWORD ?
    minScaledImageExtent DWORD ?
    maxScaledImageExtent DWORD ?
    BYTE 4 dup(?)
VkSurfacePresentScalingCapabilitiesEXT ENDS

VkSurfacePresentModeCompatibilityEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    presentModeCount DWORD ?
    BYTE 4 dup(?)
    pPresentModes QWORD ?
VkSurfacePresentModeCompatibilityEXT ENDS

VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    swapchainMaintenance1 DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT ENDS

VkSwapchainPresentFenceInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    swapchainCount DWORD ?
    BYTE 4 dup(?)
    pFences QWORD ?
VkSwapchainPresentFenceInfoEXT ENDS

VkSwapchainPresentModesCreateInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    presentModeCount DWORD ?
    BYTE 4 dup(?)
    pPresentModes QWORD ?
VkSwapchainPresentModesCreateInfoEXT ENDS

VkSwapchainPresentModeInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    swapchainCount DWORD ?
    BYTE 4 dup(?)
    pPresentModes QWORD ?
VkSwapchainPresentModeInfoEXT ENDS

VkSwapchainPresentScalingCreateInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    scalingBehavior DWORD ?
    presentGravityX DWORD ?
    presentGravityY DWORD ?
    BYTE 4 dup(?)
VkSwapchainPresentScalingCreateInfoEXT ENDS

VkReleaseSwapchainImagesInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    swapchain DWORD ?
    imageIndexCount DWORD ?
    pImageIndices QWORD ?
VkReleaseSwapchainImagesInfoEXT ENDS

VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    maxGraphicsShaderGroupCount DWORD ?
    maxIndirectSequenceCount DWORD ?
    maxIndirectCommandsTokenCount DWORD ?
    maxIndirectCommandsStreamCount DWORD ?
    maxIndirectCommandsTokenOffset DWORD ?
    maxIndirectCommandsStreamStride DWORD ?
    minSequencesCountBufferOffsetAlignment DWORD ?
    minSequencesIndexBufferOffsetAlignment DWORD ?
    minIndirectCommandsBufferOffsetAlignment DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV ENDS

VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    deviceGeneratedCommands DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV ENDS

VkGraphicsShaderGroupCreateInfoNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    stageCount DWORD ?
    BYTE 4 dup(?)
    pStages QWORD ?
    pVertexInputState QWORD ?
    pTessellationState QWORD ?
VkGraphicsShaderGroupCreateInfoNV ENDS

VkGraphicsPipelineShaderGroupsCreateInfoNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    groupCount DWORD ?
    BYTE 4 dup(?)
    pGroups QWORD ?
    pipelineCount DWORD ?
    BYTE 4 dup(?)
    pPipelines QWORD ?
VkGraphicsPipelineShaderGroupsCreateInfoNV ENDS

VkBindShaderGroupIndirectCommandNV STRUCT
    groupIndex DWORD ?
VkBindShaderGroupIndirectCommandNV ENDS

VkBindIndexBufferIndirectCommandNV STRUCT
    bufferAddress DWORD ?
    m_size DWORD ?
    indexType DWORD ?
VkBindIndexBufferIndirectCommandNV ENDS

VkBindVertexBufferIndirectCommandNV STRUCT
    bufferAddress DWORD ?
    m_size DWORD ?
    stride DWORD ?
VkBindVertexBufferIndirectCommandNV ENDS

VkSetStateFlagsIndirectCommandNV STRUCT
    data DWORD ?
VkSetStateFlagsIndirectCommandNV ENDS

VkIndirectCommandsStreamNV STRUCT
    buffer DWORD ?
    m_offset DWORD ?
VkIndirectCommandsStreamNV ENDS

VkIndirectCommandsLayoutTokenNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    tokenType DWORD ?
    stream DWORD ?
    m_offset DWORD ?
    vertexBindingUnit DWORD ?
    vertexDynamicStride DWORD ?
    pushconstantPipelineLayout DWORD ?
    pushconstantShaderStageFlags DWORD ?
    pushconstantOffset DWORD ?
    pushconstantSize DWORD ?
    indirectStateFlags DWORD ?
    indexTypeCount DWORD ?
    BYTE 4 dup(?)
    pIndexTypes QWORD ?
    pIndexTypeValues QWORD ?
VkIndirectCommandsLayoutTokenNV ENDS

VkIndirectCommandsLayoutCreateInfoNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    pipelineBindPoint DWORD ?
    tokenCount DWORD ?
    BYTE 4 dup(?)
    pTokens QWORD ?
    streamCount DWORD ?
    BYTE 4 dup(?)
    pStreamStrides QWORD ?
VkIndirectCommandsLayoutCreateInfoNV ENDS

VkGeneratedCommandsInfoNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    pipelineBindPoint DWORD ?
    pipeline DWORD ?
    indirectCommandsLayout DWORD ?
    streamCount DWORD ?
    pStreams QWORD ?
    sequencesCount DWORD ?
    preprocessBuffer DWORD ?
    preprocessOffset DWORD ?
    preprocessSize DWORD ?
    sequencesCountBuffer DWORD ?
    sequencesCountOffset DWORD ?
    sequencesIndexBuffer DWORD ?
    sequencesIndexOffset DWORD ?
VkGeneratedCommandsInfoNV ENDS

VkGeneratedCommandsMemoryRequirementsInfoNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    pipelineBindPoint DWORD ?
    pipeline DWORD ?
    indirectCommandsLayout DWORD ?
    maxSequencesCount DWORD ?
VkGeneratedCommandsMemoryRequirementsInfoNV ENDS

VkPhysicalDeviceInheritedViewportScissorFeaturesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    inheritedViewportScissor2D DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceInheritedViewportScissorFeaturesNV ENDS

VkCommandBufferInheritanceViewportScissorInfoNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    viewportScissor2D DWORD ?
    viewportDepthCount DWORD ?
    pViewportDepths QWORD ?
VkCommandBufferInheritanceViewportScissorInfoNV ENDS

VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    texelBufferAlignment DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT ENDS

VkRenderPassTransformBeginInfoQCOM STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    transform DWORD ?
    BYTE 4 dup(?)
VkRenderPassTransformBeginInfoQCOM ENDS

VkCommandBufferInheritanceRenderPassTransformInfoQCOM STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    transform DWORD ?
    renderArea DWORD ?
VkCommandBufferInheritanceRenderPassTransformInfoQCOM ENDS

VkPhysicalDeviceDepthBiasControlFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    depthBiasControl DWORD ?
    leastRepresentableValueForceUnormRepresentation DWORD ?
    floatRepresentation DWORD ?
    depthBiasExact DWORD ?
VkPhysicalDeviceDepthBiasControlFeaturesEXT ENDS

VkDepthBiasInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    depthBiasConstantFactor DWORD ?
    depthBiasClamp DWORD ?
    depthBiasSlopeFactor DWORD ?
    BYTE 4 dup(?)
VkDepthBiasInfoEXT ENDS

VkDepthBiasRepresentationInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    depthBiasRepresentation DWORD ?
    depthBiasExact DWORD ?
VkDepthBiasRepresentationInfoEXT ENDS

VkPhysicalDeviceDeviceMemoryReportFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    deviceMemoryReport DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceDeviceMemoryReportFeaturesEXT ENDS

VkDeviceMemoryReportCallbackDataEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    m_type DWORD ?
    memoryObjectId QWORD ?
    m_size DWORD ?
    objectType DWORD ?
    objectHandle QWORD ?
    heapIndex DWORD ?
    BYTE 4 dup(?)
VkDeviceMemoryReportCallbackDataEXT ENDS

VkDeviceDeviceMemoryReportCreateInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    pfnUserCallback DWORD ?
    pUserData QWORD ?
VkDeviceDeviceMemoryReportCreateInfoEXT ENDS

VkPhysicalDeviceRobustness2FeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    robustBufferAccess2 DWORD ?
    robustImageAccess2 DWORD ?
    nullDescriptor DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceRobustness2FeaturesEXT ENDS

VkPhysicalDeviceRobustness2PropertiesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    robustStorageBufferAccessSizeAlignment DWORD ?
    robustUniformBufferAccessSizeAlignment DWORD ?
VkPhysicalDeviceRobustness2PropertiesEXT ENDS

VkSamplerCustomBorderColorCreateInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    customBorderColor DWORD ?
    format DWORD ?
VkSamplerCustomBorderColorCreateInfoEXT ENDS

VkPhysicalDeviceCustomBorderColorPropertiesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    maxCustomBorderColorSamplers DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceCustomBorderColorPropertiesEXT ENDS

VkPhysicalDeviceCustomBorderColorFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    customBorderColors DWORD ?
    customBorderColorWithoutFormat DWORD ?
VkPhysicalDeviceCustomBorderColorFeaturesEXT ENDS

VkPhysicalDevicePresentBarrierFeaturesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    presentBarrier DWORD ?
    BYTE 4 dup(?)
VkPhysicalDevicePresentBarrierFeaturesNV ENDS

VkSurfaceCapabilitiesPresentBarrierNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    presentBarrierSupported DWORD ?
    BYTE 4 dup(?)
VkSurfaceCapabilitiesPresentBarrierNV ENDS

VkSwapchainPresentBarrierCreateInfoNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    presentBarrierEnable DWORD ?
    BYTE 4 dup(?)
VkSwapchainPresentBarrierCreateInfoNV ENDS

VkPhysicalDeviceDiagnosticsConfigFeaturesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    diagnosticsConfig DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceDiagnosticsConfigFeaturesNV ENDS

VkDeviceDiagnosticsConfigCreateInfoNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    BYTE 4 dup(?)
VkDeviceDiagnosticsConfigCreateInfoNV ENDS

VkCudaModuleCreateInfoNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    dataSize QWORD ?
    pData QWORD ?
VkCudaModuleCreateInfoNV ENDS

VkCudaFunctionCreateInfoNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    module DWORD ?
    BYTE 4 dup(?)
    pName QWORD ?
VkCudaFunctionCreateInfoNV ENDS

VkCudaLaunchInfoNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    function DWORD ?
    gridDimX DWORD ?
    gridDimY DWORD ?
    gridDimZ DWORD ?
    blockDimX DWORD ?
    blockDimY DWORD ?
    blockDimZ DWORD ?
    sharedMemBytes DWORD ?
    paramCount QWORD ?
    pParams QWORD ?
    extraCount QWORD ?
    pExtras QWORD ?
VkCudaLaunchInfoNV ENDS

VkPhysicalDeviceCudaKernelLaunchFeaturesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    cudaKernelLaunchFeatures DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceCudaKernelLaunchFeaturesNV ENDS

VkPhysicalDeviceCudaKernelLaunchPropertiesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    computeCapabilityMinor DWORD ?
    computeCapabilityMajor DWORD ?
VkPhysicalDeviceCudaKernelLaunchPropertiesNV ENDS

VkQueryLowLatencySupportNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    pQueriedLowLatencyData QWORD ?
VkQueryLowLatencySupportNV ENDS

VkPhysicalDeviceDescriptorBufferPropertiesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    combinedImageSamplerDescriptorSingleArray DWORD ?
    bufferlessPushDescriptors DWORD ?
    allowSamplerImageViewPostSubmitCreation DWORD ?
    descriptorBufferOffsetAlignment DWORD ?
    maxDescriptorBufferBindings DWORD ?
    maxResourceDescriptorBufferBindings DWORD ?
    maxSamplerDescriptorBufferBindings DWORD ?
    maxEmbeddedImmutableSamplerBindings DWORD ?
    maxEmbeddedImmutableSamplers DWORD ?
    BYTE 4 dup(?)
    bufferCaptureReplayDescriptorDataSize QWORD ?
    imageCaptureReplayDescriptorDataSize QWORD ?
    imageViewCaptureReplayDescriptorDataSize QWORD ?
    samplerCaptureReplayDescriptorDataSize QWORD ?
    accelerationStructureCaptureReplayDescriptorDataSize QWORD ?
    samplerDescriptorSize QWORD ?
    combinedImageSamplerDescriptorSize QWORD ?
    sampledImageDescriptorSize QWORD ?
    storageImageDescriptorSize QWORD ?
    uniformTexelBufferDescriptorSize QWORD ?
    robustUniformTexelBufferDescriptorSize QWORD ?
    storageTexelBufferDescriptorSize QWORD ?
    robustStorageTexelBufferDescriptorSize QWORD ?
    uniformBufferDescriptorSize QWORD ?
    robustUniformBufferDescriptorSize QWORD ?
    storageBufferDescriptorSize QWORD ?
    robustStorageBufferDescriptorSize QWORD ?
    inputAttachmentDescriptorSize QWORD ?
    accelerationStructureDescriptorSize QWORD ?
    maxSamplerDescriptorBufferRange DWORD ?
    maxResourceDescriptorBufferRange DWORD ?
    samplerDescriptorBufferAddressSpaceSize DWORD ?
    resourceDescriptorBufferAddressSpaceSize DWORD ?
    descriptorBufferAddressSpaceSize DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceDescriptorBufferPropertiesEXT ENDS

VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    combinedImageSamplerDensityMapDescriptorSize QWORD ?
VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT ENDS

VkPhysicalDeviceDescriptorBufferFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    descriptorBuffer DWORD ?
    descriptorBufferCaptureReplay DWORD ?
    descriptorBufferImageLayoutIgnored DWORD ?
    descriptorBufferPushDescriptors DWORD ?
VkPhysicalDeviceDescriptorBufferFeaturesEXT ENDS

VkDescriptorAddressInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    address DWORD ?
    range DWORD ?
    format DWORD ?
    BYTE 4 dup(?)
VkDescriptorAddressInfoEXT ENDS

VkDescriptorBufferBindingInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    address DWORD ?
    usage DWORD ?
VkDescriptorBufferBindingInfoEXT ENDS

VkDescriptorBufferBindingPushDescriptorBufferHandleEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    buffer DWORD ?
    BYTE 4 dup(?)
VkDescriptorBufferBindingPushDescriptorBufferHandleEXT ENDS

VkDescriptorGetInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    m_type DWORD ?
    data DWORD ?
VkDescriptorGetInfoEXT ENDS

VkBufferCaptureDescriptorDataInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    buffer DWORD ?
    BYTE 4 dup(?)
VkBufferCaptureDescriptorDataInfoEXT ENDS

VkImageCaptureDescriptorDataInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    image DWORD ?
    BYTE 4 dup(?)
VkImageCaptureDescriptorDataInfoEXT ENDS

VkImageViewCaptureDescriptorDataInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    imageView DWORD ?
    BYTE 4 dup(?)
VkImageViewCaptureDescriptorDataInfoEXT ENDS

VkSamplerCaptureDescriptorDataInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    sampler DWORD ?
    BYTE 4 dup(?)
VkSamplerCaptureDescriptorDataInfoEXT ENDS

VkOpaqueCaptureDescriptorDataCreateInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    opaqueCaptureDescriptorData QWORD ?
VkOpaqueCaptureDescriptorDataCreateInfoEXT ENDS

VkAccelerationStructureCaptureDescriptorDataInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    accelerationStructure DWORD ?
    accelerationStructureNV DWORD ?
VkAccelerationStructureCaptureDescriptorDataInfoEXT ENDS

VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    graphicsPipelineLibrary DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT ENDS

VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    graphicsPipelineLibraryFastLinking DWORD ?
    graphicsPipelineLibraryIndependentInterpolationDecoration DWORD ?
VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT ENDS

VkGraphicsPipelineLibraryCreateInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    BYTE 4 dup(?)
VkGraphicsPipelineLibraryCreateInfoEXT ENDS

VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    shaderEarlyAndLateFragmentTests DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD ENDS

VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    fragmentShadingRateEnums DWORD ?
    supersampleFragmentShadingRates DWORD ?
    noInvocationFragmentShadingRates DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV ENDS

VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    maxFragmentShadingRateInvocationCount DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV ENDS

VkPipelineFragmentShadingRateEnumStateCreateInfoNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    shadingRateType DWORD ?
    shadingRate DWORD ?
    combinerOps DWORD 2 dup(?)
VkPipelineFragmentShadingRateEnumStateCreateInfoNV ENDS

VkAccelerationStructureGeometryMotionTrianglesDataNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    vertexData DWORD ?
    BYTE 4 dup(?)
VkAccelerationStructureGeometryMotionTrianglesDataNV ENDS

VkAccelerationStructureMotionInfoNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    maxInstances DWORD ?
    flags DWORD ?
VkAccelerationStructureMotionInfoNV ENDS

VkAccelerationStructureMatrixMotionInstanceNV STRUCT
    transformT0 DWORD ?
    transformT1 DWORD ?
    accelerationStructureReference QWORD ?
VkAccelerationStructureMatrixMotionInstanceNV ENDS

VkSRTDataNV STRUCT
    sx DWORD ?
    a DWORD ?
    b DWORD ?
    pvx DWORD ?
    sy DWORD ?
    c DWORD ?
    pvy DWORD ?
    sz DWORD ?
    pvz DWORD ?
    qx DWORD ?
    qy DWORD ?
    qz DWORD ?
    qw DWORD ?
    tx DWORD ?
    ty DWORD ?
    tz DWORD ?
VkSRTDataNV ENDS

VkAccelerationStructureSRTMotionInstanceNV STRUCT
    transformT0 DWORD ?
    transformT1 DWORD ?
    accelerationStructureReference QWORD ?
VkAccelerationStructureSRTMotionInstanceNV ENDS

VkAccelerationStructureMotionInstanceNV STRUCT
    m_type DWORD ?
    flags DWORD ?
    data DWORD ?
VkAccelerationStructureMotionInstanceNV ENDS

VkPhysicalDeviceRayTracingMotionBlurFeaturesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    rayTracingMotionBlur DWORD ?
    rayTracingMotionBlurPipelineTraceRaysIndirect DWORD ?
VkPhysicalDeviceRayTracingMotionBlurFeaturesNV ENDS

VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    ycbcr2plane444Formats DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT ENDS

VkPhysicalDeviceFragmentDensityMap2FeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    fragmentDensityMapDeferred DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceFragmentDensityMap2FeaturesEXT ENDS

VkPhysicalDeviceFragmentDensityMap2PropertiesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    subsampledLoads DWORD ?
    subsampledCoarseReconstructionEarlyAccess DWORD ?
    maxSubsampledArrayLayers DWORD ?
    maxDescriptorSetSubsampledSamplers DWORD ?
VkPhysicalDeviceFragmentDensityMap2PropertiesEXT ENDS

VkCopyCommandTransformInfoQCOM STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    transform DWORD ?
    BYTE 4 dup(?)
VkCopyCommandTransformInfoQCOM ENDS

VkPhysicalDeviceImageCompressionControlFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    imageCompressionControl DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceImageCompressionControlFeaturesEXT ENDS

VkImageCompressionControlEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    compressionControlPlaneCount DWORD ?
    pFixedRateFlags QWORD ?
VkImageCompressionControlEXT ENDS

VkImageCompressionPropertiesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    imageCompressionFlags DWORD ?
    imageCompressionFixedRateFlags DWORD ?
VkImageCompressionPropertiesEXT ENDS

VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    attachmentFeedbackLoopLayout DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT ENDS

VkPhysicalDevice4444FormatsFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    formatA4R4G4B4 DWORD ?
    formatA4B4G4R4 DWORD ?
VkPhysicalDevice4444FormatsFeaturesEXT ENDS

VkPhysicalDeviceFaultFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    deviceFault DWORD ?
    deviceFaultVendorBinary DWORD ?
VkPhysicalDeviceFaultFeaturesEXT ENDS

VkDeviceFaultCountsEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    addressInfoCount DWORD ?
    vendorInfoCount DWORD ?
    vendorBinarySize DWORD ?
    BYTE 4 dup(?)
VkDeviceFaultCountsEXT ENDS

VkDeviceFaultAddressInfoEXT STRUCT
    addressType DWORD ?
    reportedAddress DWORD ?
    addressPrecision DWORD ?
VkDeviceFaultAddressInfoEXT ENDS

VkDeviceFaultVendorInfoEXT STRUCT
    vendorFaultCode QWORD ?
    vendorFaultData QWORD ?
VkDeviceFaultVendorInfoEXT ENDS

VkDeviceFaultInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    pAddressInfos QWORD ?
    pVendorInfos QWORD ?
    pVendorBinaryData QWORD ?
VkDeviceFaultInfoEXT ENDS

VkDeviceFaultVendorBinaryHeaderVersionOneEXT STRUCT
    headerSize DWORD ?
    headerVersion DWORD ?
    vendorID DWORD ?
    deviceID DWORD ?
    driverVersion DWORD ?
    applicationNameOffset DWORD ?
    applicationVersion DWORD ?
    engineNameOffset DWORD ?
    engineVersion DWORD ?
    apiVersion DWORD ?
VkDeviceFaultVendorBinaryHeaderVersionOneEXT ENDS

VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    rasterizationOrderColorAttachmentAccess DWORD ?
    rasterizationOrderDepthAttachmentAccess DWORD ?
    rasterizationOrderStencilAttachmentAccess DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT ENDS

VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    formatRgba10x6WithoutYCbCrSampler DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT ENDS

VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    mutableDescriptorType DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT ENDS

VkMutableDescriptorTypeListEXT STRUCT
    descriptorTypeCount DWORD ?
    BYTE 4 dup(?)
    pDescriptorTypes QWORD ?
VkMutableDescriptorTypeListEXT ENDS

VkMutableDescriptorTypeCreateInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    mutableDescriptorTypeListCount DWORD ?
    BYTE 4 dup(?)
    pMutableDescriptorTypeLists QWORD ?
VkMutableDescriptorTypeCreateInfoEXT ENDS

VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    vertexInputDynamicState DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT ENDS

VkVertexInputBindingDescription2EXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    binding DWORD ?
    stride DWORD ?
    inputRate DWORD ?
    divisor DWORD ?
VkVertexInputBindingDescription2EXT ENDS

VkVertexInputAttributeDescription2EXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    location DWORD ?
    binding DWORD ?
    format DWORD ?
    m_offset DWORD ?
VkVertexInputAttributeDescription2EXT ENDS

VkPhysicalDeviceDrmPropertiesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    hasPrimary DWORD ?
    hasRender DWORD ?
    primaryMajor QWORD ?
    primaryMinor QWORD ?
    renderMajor QWORD ?
    renderMinor QWORD ?
VkPhysicalDeviceDrmPropertiesEXT ENDS

VkPhysicalDeviceAddressBindingReportFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    reportAddressBinding DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceAddressBindingReportFeaturesEXT ENDS

VkDeviceAddressBindingCallbackDataEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    baseAddress DWORD ?
    m_size DWORD ?
    bindingType DWORD ?
VkDeviceAddressBindingCallbackDataEXT ENDS

VkPhysicalDeviceDepthClipControlFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    depthClipControl DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceDepthClipControlFeaturesEXT ENDS

VkPipelineViewportDepthClipControlCreateInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    negativeOneToOne DWORD ?
    BYTE 4 dup(?)
VkPipelineViewportDepthClipControlCreateInfoEXT ENDS

VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    primitiveTopologyListRestart DWORD ?
    primitiveTopologyPatchListRestart DWORD ?
VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT ENDS

VkSubpassShadingPipelineCreateInfoHUAWEI STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    renderPass DWORD ?
    subpass DWORD ?
VkSubpassShadingPipelineCreateInfoHUAWEI ENDS

VkPhysicalDeviceSubpassShadingFeaturesHUAWEI STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    subpassShading DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceSubpassShadingFeaturesHUAWEI ENDS

VkPhysicalDeviceSubpassShadingPropertiesHUAWEI STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    maxSubpassShadingWorkgroupSizeAspectRatio DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceSubpassShadingPropertiesHUAWEI ENDS

VkPhysicalDeviceInvocationMaskFeaturesHUAWEI STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    invocationMask DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceInvocationMaskFeaturesHUAWEI ENDS

VkMemoryGetRemoteAddressInfoNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    memory DWORD ?
    handleType DWORD ?
VkMemoryGetRemoteAddressInfoNV ENDS

VkPhysicalDeviceExternalMemoryRDMAFeaturesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    externalMemoryRDMA DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceExternalMemoryRDMAFeaturesNV ENDS

VkPipelinePropertiesIdentifierEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
VkPipelinePropertiesIdentifierEXT ENDS

VkPhysicalDevicePipelinePropertiesFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    pipelinePropertiesIdentifier DWORD ?
    BYTE 4 dup(?)
VkPhysicalDevicePipelinePropertiesFeaturesEXT ENDS

VkPhysicalDeviceFrameBoundaryFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    frameBoundary DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceFrameBoundaryFeaturesEXT ENDS

VkFrameBoundaryEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    BYTE 4 dup(?)
    frameID QWORD ?
    imageCount DWORD ?
    BYTE 4 dup(?)
    pImages QWORD ?
    bufferCount DWORD ?
    BYTE 4 dup(?)
    pBuffers QWORD ?
    tagName QWORD ?
    tagSize QWORD ?
    pTag QWORD ?
VkFrameBoundaryEXT ENDS

VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    multisampledRenderToSingleSampled DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT ENDS

VkSubpassResolvePerformanceQueryEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    optimal DWORD ?
    BYTE 4 dup(?)
VkSubpassResolvePerformanceQueryEXT ENDS

VkMultisampledRenderToSingleSampledInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    multisampledRenderToSingleSampledEnable DWORD ?
    rasterizationSamples DWORD ?
VkMultisampledRenderToSingleSampledInfoEXT ENDS

VkPhysicalDeviceExtendedDynamicState2FeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    extendedDynamicState2 DWORD ?
    extendedDynamicState2LogicOp DWORD ?
    extendedDynamicState2PatchControlPoints DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceExtendedDynamicState2FeaturesEXT ENDS

VkPhysicalDeviceColorWriteEnableFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    colorWriteEnable DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceColorWriteEnableFeaturesEXT ENDS

VkPipelineColorWriteCreateInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    attachmentCount DWORD ?
    BYTE 4 dup(?)
    pColorWriteEnables QWORD ?
VkPipelineColorWriteCreateInfoEXT ENDS

VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    primitivesGeneratedQuery DWORD ?
    primitivesGeneratedQueryWithRasterizerDiscard DWORD ?
    primitivesGeneratedQueryWithNonZeroStreams DWORD ?
    BYTE 4 dup(?)
VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT ENDS

VkPhysicalDeviceImageViewMinLodFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    minLod DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceImageViewMinLodFeaturesEXT ENDS

VkImageViewMinLodCreateInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    minLod DWORD ?
    BYTE 4 dup(?)
VkImageViewMinLodCreateInfoEXT ENDS

VkPhysicalDeviceMultiDrawFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    multiDraw DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceMultiDrawFeaturesEXT ENDS

VkPhysicalDeviceMultiDrawPropertiesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    maxMultiDrawCount DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceMultiDrawPropertiesEXT ENDS

VkMultiDrawInfoEXT STRUCT
    firstVertex DWORD ?
    vertexCount DWORD ?
VkMultiDrawInfoEXT ENDS

VkMultiDrawIndexedInfoEXT STRUCT
    firstIndex DWORD ?
    indexCount DWORD ?
    vertexOffset DWORD ?
VkMultiDrawIndexedInfoEXT ENDS

VkPhysicalDeviceImage2DViewOf3DFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    image2DViewOf3D DWORD ?
    sampler2DViewOf3D DWORD ?
VkPhysicalDeviceImage2DViewOf3DFeaturesEXT ENDS

VkPhysicalDeviceShaderTileImageFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    shaderTileImageColorReadAccess DWORD ?
    shaderTileImageDepthReadAccess DWORD ?
    shaderTileImageStencilReadAccess DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceShaderTileImageFeaturesEXT ENDS

VkPhysicalDeviceShaderTileImagePropertiesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    shaderTileImageCoherentReadAccelerated DWORD ?
    shaderTileImageReadSampleFromPixelRateInvocation DWORD ?
    shaderTileImageReadFromHelperInvocation DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceShaderTileImagePropertiesEXT ENDS

VkMicromapUsageEXT STRUCT
    count DWORD ?
    subdivisionLevel DWORD ?
    format DWORD ?
VkMicromapUsageEXT ENDS

VkMicromapBuildInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    m_type DWORD ?
    flags DWORD ?
    mode DWORD ?
    dstMicromap DWORD ?
    usageCountsCount DWORD ?
    BYTE 4 dup(?)
    pUsageCounts QWORD ?
    ppUsageCounts QWORD ?
    data DWORD ?
    scratchData DWORD ?
    triangleArray DWORD ?
    triangleArrayStride DWORD ?
VkMicromapBuildInfoEXT ENDS

VkMicromapCreateInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    createFlags DWORD ?
    buffer DWORD ?
    m_offset DWORD ?
    m_size DWORD ?
    m_type DWORD ?
    deviceAddress DWORD ?
VkMicromapCreateInfoEXT ENDS

VkPhysicalDeviceOpacityMicromapFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    micromap DWORD ?
    micromapCaptureReplay DWORD ?
    micromapHostCommands DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceOpacityMicromapFeaturesEXT ENDS

VkPhysicalDeviceOpacityMicromapPropertiesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    maxOpacity2StateSubdivisionLevel DWORD ?
    maxOpacity4StateSubdivisionLevel DWORD ?
VkPhysicalDeviceOpacityMicromapPropertiesEXT ENDS

VkMicromapVersionInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    pVersionData QWORD ?
VkMicromapVersionInfoEXT ENDS

VkCopyMicromapToMemoryInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    src DWORD ?
    dst DWORD ?
    mode DWORD ?
    BYTE 4 dup(?)
VkCopyMicromapToMemoryInfoEXT ENDS

VkCopyMemoryToMicromapInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    src DWORD ?
    dst DWORD ?
    mode DWORD ?
    BYTE 4 dup(?)
VkCopyMemoryToMicromapInfoEXT ENDS

VkCopyMicromapInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    src DWORD ?
    dst DWORD ?
    mode DWORD ?
    BYTE 4 dup(?)
VkCopyMicromapInfoEXT ENDS

VkMicromapBuildSizesInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    micromapSize DWORD ?
    buildScratchSize DWORD ?
    discardable DWORD ?
    BYTE 4 dup(?)
VkMicromapBuildSizesInfoEXT ENDS

VkAccelerationStructureTrianglesOpacityMicromapEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    indexType DWORD ?
    indexBuffer DWORD ?
    indexStride DWORD ?
    baseTriangle DWORD ?
    usageCountsCount DWORD ?
    BYTE 4 dup(?)
    pUsageCounts QWORD ?
    ppUsageCounts QWORD ?
    micromap DWORD ?
    BYTE 4 dup(?)
VkAccelerationStructureTrianglesOpacityMicromapEXT ENDS

VkMicromapTriangleEXT STRUCT
    dataOffset DWORD ?
    subdivisionLevel WORD ?
    format WORD ?
VkMicromapTriangleEXT ENDS

VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    clustercullingShader DWORD ?
    multiviewClusterCullingShader DWORD ?
VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI ENDS

VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    maxWorkGroupCount DWORD 3 dup(?)
    maxWorkGroupSize DWORD 3 dup(?)
    maxOutputClusterCount DWORD ?
    indirectBufferOffsetAlignment DWORD ?
VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI ENDS

VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    clusterShadingRate DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI ENDS

VkPhysicalDeviceBorderColorSwizzleFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    borderColorSwizzle DWORD ?
    borderColorSwizzleFromImage DWORD ?
VkPhysicalDeviceBorderColorSwizzleFeaturesEXT ENDS

VkSamplerBorderColorComponentMappingCreateInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    components DWORD ?
    srgb DWORD ?
VkSamplerBorderColorComponentMappingCreateInfoEXT ENDS

VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    pageableDeviceLocalMemory DWORD ?
    BYTE 4 dup(?)
VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT ENDS

VkPhysicalDeviceShaderCorePropertiesARM STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    pixelRate DWORD ?
    texelRate DWORD ?
    fmaRate DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceShaderCorePropertiesARM ENDS

VkDeviceQueueShaderCoreControlCreateInfoARM STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    shaderCoreCount DWORD ?
    BYTE 4 dup(?)
VkDeviceQueueShaderCoreControlCreateInfoARM ENDS

VkPhysicalDeviceSchedulingControlsFeaturesARM STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    schedulingControls DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceSchedulingControlsFeaturesARM ENDS

VkPhysicalDeviceSchedulingControlsPropertiesARM STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    schedulingControlsFlags DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceSchedulingControlsPropertiesARM ENDS

VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    imageSlicedViewOf3D DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT ENDS

VkImageViewSlicedCreateInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    sliceOffset DWORD ?
    sliceCount DWORD ?
VkImageViewSlicedCreateInfoEXT ENDS

VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    descriptorSetHostMapping DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE ENDS

VkDescriptorSetBindingReferenceVALVE STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    descriptorSetLayout DWORD ?
    binding DWORD ?
VkDescriptorSetBindingReferenceVALVE ENDS

VkDescriptorSetLayoutHostMappingInfoVALVE STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    descriptorOffset QWORD ?
    descriptorSize DWORD ?
    BYTE 4 dup(?)
VkDescriptorSetLayoutHostMappingInfoVALVE ENDS

VkPhysicalDeviceDepthClampZeroOneFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    depthClampZeroOne DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceDepthClampZeroOneFeaturesEXT ENDS

VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    nonSeamlessCubeMap DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT ENDS

VkPhysicalDeviceRenderPassStripedFeaturesARM STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    renderPassStriped DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceRenderPassStripedFeaturesARM ENDS

VkPhysicalDeviceRenderPassStripedPropertiesARM STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    renderPassStripeGranularity DWORD ?
    maxRenderPassStripes DWORD ?
VkPhysicalDeviceRenderPassStripedPropertiesARM ENDS

VkRenderPassStripeInfoARM STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    stripeArea DWORD ?
    BYTE 4 dup(?)
VkRenderPassStripeInfoARM ENDS

VkRenderPassStripeBeginInfoARM STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    stripeInfoCount DWORD ?
    BYTE 4 dup(?)
    pStripeInfos QWORD ?
VkRenderPassStripeBeginInfoARM ENDS

VkRenderPassStripeSubmitInfoARM STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    stripeSemaphoreInfoCount DWORD ?
    BYTE 4 dup(?)
    pStripeSemaphoreInfos QWORD ?
VkRenderPassStripeSubmitInfoARM ENDS

VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    fragmentDensityMapOffset DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM ENDS

VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    fragmentDensityOffsetGranularity DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM ENDS

VkSubpassFragmentDensityMapOffsetEndInfoQCOM STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    fragmentDensityOffsetCount DWORD ?
    BYTE 4 dup(?)
    pFragmentDensityOffsets QWORD ?
VkSubpassFragmentDensityMapOffsetEndInfoQCOM ENDS

VkCopyMemoryIndirectCommandNV STRUCT
    srcAddress DWORD ?
    dstAddress DWORD ?
    m_size DWORD ?
VkCopyMemoryIndirectCommandNV ENDS

VkCopyMemoryToImageIndirectCommandNV STRUCT
    srcAddress DWORD ?
    bufferRowLength DWORD ?
    bufferImageHeight DWORD ?
    imageSubresource DWORD ?
    imageOffset DWORD ?
    imageExtent DWORD ?
VkCopyMemoryToImageIndirectCommandNV ENDS

VkPhysicalDeviceCopyMemoryIndirectFeaturesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    indirectCopy DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceCopyMemoryIndirectFeaturesNV ENDS

VkPhysicalDeviceCopyMemoryIndirectPropertiesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    supportedQueues DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceCopyMemoryIndirectPropertiesNV ENDS

VkDecompressMemoryRegionNV STRUCT
    srcAddress DWORD ?
    dstAddress DWORD ?
    compressedSize DWORD ?
    decompressedSize DWORD ?
    decompressionMethod DWORD ?
VkDecompressMemoryRegionNV ENDS

VkPhysicalDeviceMemoryDecompressionFeaturesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    memoryDecompression DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceMemoryDecompressionFeaturesNV ENDS

VkPhysicalDeviceMemoryDecompressionPropertiesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    decompressionMethods DWORD ?
    BYTE 4 dup(?)
    maxDecompressionIndirectCount QWORD ?
VkPhysicalDeviceMemoryDecompressionPropertiesNV ENDS

VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    deviceGeneratedCompute DWORD ?
    deviceGeneratedComputePipelines DWORD ?
    deviceGeneratedComputeCaptureReplay DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV ENDS

VkComputePipelineIndirectBufferInfoNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    deviceAddress DWORD ?
    m_size DWORD ?
    pipelineDeviceAddressCaptureReplay DWORD ?
    BYTE 4 dup(?)
VkComputePipelineIndirectBufferInfoNV ENDS

VkPipelineIndirectDeviceAddressInfoNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    pipelineBindPoint DWORD ?
    pipeline DWORD ?
VkPipelineIndirectDeviceAddressInfoNV ENDS

VkBindPipelineIndirectCommandNV STRUCT
    pipelineAddress DWORD ?
VkBindPipelineIndirectCommandNV ENDS

VkPhysicalDeviceLinearColorAttachmentFeaturesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    linearColorAttachment DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceLinearColorAttachmentFeaturesNV ENDS

VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    imageCompressionControlSwapchain DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT ENDS

VkImageViewSampleWeightCreateInfoQCOM STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    filterCenter DWORD ?
    filterSize DWORD ?
    numPhases DWORD ?
    BYTE 4 dup(?)
VkImageViewSampleWeightCreateInfoQCOM ENDS

VkPhysicalDeviceImageProcessingFeaturesQCOM STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    textureSampleWeighted DWORD ?
    textureBoxFilter DWORD ?
    textureBlockMatch DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceImageProcessingFeaturesQCOM ENDS

VkPhysicalDeviceImageProcessingPropertiesQCOM STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    maxWeightFilterPhases DWORD ?
    maxWeightFilterDimension DWORD ?
    maxBlockMatchRegion DWORD ?
    maxBoxFilterBlockSize DWORD ?
VkPhysicalDeviceImageProcessingPropertiesQCOM ENDS

VkPhysicalDeviceNestedCommandBufferFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    nestedCommandBuffer DWORD ?
    nestedCommandBufferRendering DWORD ?
    nestedCommandBufferSimultaneousUse DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceNestedCommandBufferFeaturesEXT ENDS

VkPhysicalDeviceNestedCommandBufferPropertiesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    maxCommandBufferNestingLevel DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceNestedCommandBufferPropertiesEXT ENDS

VkExternalMemoryAcquireUnmodifiedEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    acquireUnmodifiedMemory DWORD ?
    BYTE 4 dup(?)
VkExternalMemoryAcquireUnmodifiedEXT ENDS

VkPhysicalDeviceExtendedDynamicState3FeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    extendedDynamicState3TessellationDomainOrigin DWORD ?
    extendedDynamicState3DepthClampEnable DWORD ?
    extendedDynamicState3PolygonMode DWORD ?
    extendedDynamicState3RasterizationSamples DWORD ?
    extendedDynamicState3SampleMask DWORD ?
    extendedDynamicState3AlphaToCoverageEnable DWORD ?
    extendedDynamicState3AlphaToOneEnable DWORD ?
    extendedDynamicState3LogicOpEnable DWORD ?
    extendedDynamicState3ColorBlendEnable DWORD ?
    extendedDynamicState3ColorBlendEquation DWORD ?
    extendedDynamicState3ColorWriteMask DWORD ?
    extendedDynamicState3RasterizationStream DWORD ?
    extendedDynamicState3ConservativeRasterizationMode DWORD ?
    extendedDynamicState3ExtraPrimitiveOverestimationSize DWORD ?
    extendedDynamicState3DepthClipEnable DWORD ?
    extendedDynamicState3SampleLocationsEnable DWORD ?
    extendedDynamicState3ColorBlendAdvanced DWORD ?
    extendedDynamicState3ProvokingVertexMode DWORD ?
    extendedDynamicState3LineRasterizationMode DWORD ?
    extendedDynamicState3LineStippleEnable DWORD ?
    extendedDynamicState3DepthClipNegativeOneToOne DWORD ?
    extendedDynamicState3ViewportWScalingEnable DWORD ?
    extendedDynamicState3ViewportSwizzle DWORD ?
    extendedDynamicState3CoverageToColorEnable DWORD ?
    extendedDynamicState3CoverageToColorLocation DWORD ?
    extendedDynamicState3CoverageModulationMode DWORD ?
    extendedDynamicState3CoverageModulationTableEnable DWORD ?
    extendedDynamicState3CoverageModulationTable DWORD ?
    extendedDynamicState3CoverageReductionMode DWORD ?
    extendedDynamicState3RepresentativeFragmentTestEnable DWORD ?
    extendedDynamicState3ShadingRateImageEnable DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceExtendedDynamicState3FeaturesEXT ENDS

VkPhysicalDeviceExtendedDynamicState3PropertiesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    dynamicPrimitiveTopologyUnrestricted DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceExtendedDynamicState3PropertiesEXT ENDS

VkColorBlendEquationEXT STRUCT
    srcColorBlendFactor DWORD ?
    dstColorBlendFactor DWORD ?
    colorBlendOp DWORD ?
    srcAlphaBlendFactor DWORD ?
    dstAlphaBlendFactor DWORD ?
    alphaBlendOp DWORD ?
VkColorBlendEquationEXT ENDS

VkColorBlendAdvancedEXT STRUCT
    advancedBlendOp DWORD ?
    srcPremultiplied DWORD ?
    dstPremultiplied DWORD ?
    blendOverlap DWORD ?
    clampResults DWORD ?
VkColorBlendAdvancedEXT ENDS

VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    subpassMergeFeedback DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT ENDS

VkRenderPassCreationControlEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    disallowMerging DWORD ?
    BYTE 4 dup(?)
VkRenderPassCreationControlEXT ENDS

VkRenderPassCreationFeedbackInfoEXT STRUCT
    postMergeSubpassCount DWORD ?
VkRenderPassCreationFeedbackInfoEXT ENDS

VkRenderPassCreationFeedbackCreateInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    pRenderPassFeedback QWORD ?
VkRenderPassCreationFeedbackCreateInfoEXT ENDS

VkRenderPassSubpassFeedbackInfoEXT STRUCT
    subpassMergeStatus DWORD ?
    postMergeIndex DWORD ?
VkRenderPassSubpassFeedbackInfoEXT ENDS

VkRenderPassSubpassFeedbackCreateInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    pSubpassFeedback QWORD ?
VkRenderPassSubpassFeedbackCreateInfoEXT ENDS

VkDirectDriverLoadingInfoLUNARG STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    pfnGetInstanceProcAddr DWORD ?
VkDirectDriverLoadingInfoLUNARG ENDS

VkDirectDriverLoadingListLUNARG STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    mode DWORD ?
    driverCount DWORD ?
    pDrivers QWORD ?
VkDirectDriverLoadingListLUNARG ENDS

VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    shaderModuleIdentifier DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT ENDS

VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT ENDS

VkPipelineShaderStageModuleIdentifierCreateInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    identifierSize DWORD ?
    BYTE 4 dup(?)
    pIdentifier QWORD ?
VkPipelineShaderStageModuleIdentifierCreateInfoEXT ENDS

VkShaderModuleIdentifierEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    identifierSize DWORD ?
    BYTE 4 dup(?)
VkShaderModuleIdentifierEXT ENDS

VkPhysicalDeviceOpticalFlowFeaturesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    opticalFlow DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceOpticalFlowFeaturesNV ENDS

VkPhysicalDeviceOpticalFlowPropertiesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    supportedOutputGridSizes DWORD ?
    supportedHintGridSizes DWORD ?
    hintSupported DWORD ?
    costSupported DWORD ?
    bidirectionalFlowSupported DWORD ?
    globalFlowSupported DWORD ?
    minWidth DWORD ?
    minHeight DWORD ?
    maxWidth DWORD ?
    maxHeight DWORD ?
    maxNumRegionsOfInterest DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceOpticalFlowPropertiesNV ENDS

VkOpticalFlowImageFormatInfoNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    usage DWORD ?
    BYTE 4 dup(?)
VkOpticalFlowImageFormatInfoNV ENDS

VkOpticalFlowImageFormatPropertiesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    format DWORD ?
    BYTE 4 dup(?)
VkOpticalFlowImageFormatPropertiesNV ENDS

VkOpticalFlowSessionCreateInfoNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    m_width DWORD ?
    height DWORD ?
    imageFormat DWORD ?
    flowVectorFormat DWORD ?
    costFormat DWORD ?
    outputGridSize DWORD ?
    hintGridSize DWORD ?
    performanceLevel DWORD ?
    flags DWORD ?
    BYTE 4 dup(?)
VkOpticalFlowSessionCreateInfoNV ENDS

VkOpticalFlowSessionCreatePrivateDataInfoNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    id DWORD ?
    m_size DWORD ?
    pPrivateData QWORD ?
VkOpticalFlowSessionCreatePrivateDataInfoNV ENDS

VkOpticalFlowExecuteInfoNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    regionCount DWORD ?
    pRegions QWORD ?
VkOpticalFlowExecuteInfoNV ENDS

VkPhysicalDeviceLegacyDitheringFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    legacyDithering DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceLegacyDitheringFeaturesEXT ENDS

VkPhysicalDevicePipelineProtectedAccessFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    pipelineProtectedAccess DWORD ?
    BYTE 4 dup(?)
VkPhysicalDevicePipelineProtectedAccessFeaturesEXT ENDS

VkPhysicalDeviceShaderObjectFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    shaderObject DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceShaderObjectFeaturesEXT ENDS

VkPhysicalDeviceShaderObjectPropertiesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    shaderBinaryVersion DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceShaderObjectPropertiesEXT ENDS

VkShaderCreateInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    stage DWORD ?
    nextStage DWORD ?
    codeType DWORD ?
    codeSize QWORD ?
    pCode QWORD ?
    pName QWORD ?
    setLayoutCount DWORD ?
    BYTE 4 dup(?)
    pSetLayouts QWORD ?
    pushConstantRangeCount DWORD ?
    BYTE 4 dup(?)
    pPushConstantRanges QWORD ?
    pSpecializationInfo QWORD ?
VkShaderCreateInfoEXT ENDS

VkPhysicalDeviceTilePropertiesFeaturesQCOM STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    tileProperties DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceTilePropertiesFeaturesQCOM ENDS

VkTilePropertiesQCOM STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    tileSize DWORD ?
    apronSize DWORD ?
    origin DWORD ?
    BYTE 4 dup(?)
VkTilePropertiesQCOM ENDS

VkPhysicalDeviceAmigoProfilingFeaturesSEC STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    amigoProfiling DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceAmigoProfilingFeaturesSEC ENDS

VkAmigoProfilingSubmitInfoSEC STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    firstDrawTimestamp QWORD ?
    swapBufferTimestamp QWORD ?
VkAmigoProfilingSubmitInfoSEC ENDS

VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    multiviewPerViewViewports DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM ENDS

VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    rayTracingInvocationReorderReorderingHint DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV ENDS

VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    rayTracingInvocationReorder DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV ENDS

VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    extendedSparseAddressSpace DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV ENDS

VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    extendedSparseAddressSpaceSize DWORD ?
    extendedSparseImageUsageFlags DWORD ?
    extendedSparseBufferUsageFlags DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV ENDS

VkLayerSettingEXT STRUCT
    pLayerName QWORD ?
    pSettingName QWORD ?
    m_type DWORD ?
    valueCount DWORD ?
    pValues QWORD ?
VkLayerSettingEXT ENDS

VkLayerSettingsCreateInfoEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    settingCount DWORD ?
    BYTE 4 dup(?)
    pSettings QWORD ?
VkLayerSettingsCreateInfoEXT ENDS

VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    shaderCoreBuiltins DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM ENDS

VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    shaderCoreMask QWORD ?
    shaderCoreCount DWORD ?
    shaderWarpsPerCore DWORD ?
VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM ENDS

VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    pipelineLibraryGroupHandles DWORD ?
    BYTE 4 dup(?)
VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT ENDS

VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    dynamicRenderingUnusedAttachments DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT ENDS

VkLatencySleepModeInfoNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    lowLatencyMode DWORD ?
    lowLatencyBoost DWORD ?
    minimumIntervalUs DWORD ?
    BYTE 4 dup(?)
VkLatencySleepModeInfoNV ENDS

VkLatencySleepInfoNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    signalSemaphore DWORD ?
    BYTE 4 dup(?)
    value QWORD ?
VkLatencySleepInfoNV ENDS

VkSetLatencyMarkerInfoNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    presentID QWORD ?
    marker DWORD ?
    BYTE 4 dup(?)
VkSetLatencyMarkerInfoNV ENDS

VkLatencyTimingsFrameReportNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    presentID QWORD ?
    inputSampleTimeUs QWORD ?
    simStartTimeUs QWORD ?
    simEndTimeUs QWORD ?
    renderSubmitStartTimeUs QWORD ?
    renderSubmitEndTimeUs QWORD ?
    presentStartTimeUs QWORD ?
    presentEndTimeUs QWORD ?
    driverStartTimeUs QWORD ?
    driverEndTimeUs QWORD ?
    osRenderQueueStartTimeUs QWORD ?
    osRenderQueueEndTimeUs QWORD ?
    gpuRenderStartTimeUs QWORD ?
    gpuRenderEndTimeUs QWORD ?
VkLatencyTimingsFrameReportNV ENDS

VkGetLatencyMarkerInfoNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    timingCount DWORD ?
    BYTE 4 dup(?)
    pTimings QWORD ?
VkGetLatencyMarkerInfoNV ENDS

VkLatencySubmissionPresentIdNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    presentID QWORD ?
VkLatencySubmissionPresentIdNV ENDS

VkSwapchainLatencyCreateInfoNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    latencyModeEnable DWORD ?
    BYTE 4 dup(?)
VkSwapchainLatencyCreateInfoNV ENDS

VkOutOfBandQueueTypeInfoNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    queueType DWORD ?
    BYTE 4 dup(?)
VkOutOfBandQueueTypeInfoNV ENDS

VkLatencySurfaceCapabilitiesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    presentModeCount DWORD ?
    BYTE 4 dup(?)
    pPresentModes QWORD ?
VkLatencySurfaceCapabilitiesNV ENDS

VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    multiviewPerViewRenderAreas DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM ENDS

VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    perViewRenderAreaCount DWORD ?
    BYTE 4 dup(?)
    pPerViewRenderAreas QWORD ?
VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM ENDS

VkPhysicalDevicePerStageDescriptorSetFeaturesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    perStageDescriptorSet DWORD ?
    dynamicPipelineLayout DWORD ?
VkPhysicalDevicePerStageDescriptorSetFeaturesNV ENDS

VkPhysicalDeviceImageProcessing2FeaturesQCOM STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    textureBlockMatch2 DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceImageProcessing2FeaturesQCOM ENDS

VkPhysicalDeviceImageProcessing2PropertiesQCOM STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    maxBlockMatchWindow DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceImageProcessing2PropertiesQCOM ENDS

VkSamplerBlockMatchWindowCreateInfoQCOM STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    windowExtent DWORD ?
    windowCompareMode DWORD ?
VkSamplerBlockMatchWindowCreateInfoQCOM ENDS

VkPhysicalDeviceCubicWeightsFeaturesQCOM STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    selectableCubicWeights DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceCubicWeightsFeaturesQCOM ENDS

VkSamplerCubicWeightsCreateInfoQCOM STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    cubicWeights DWORD ?
    BYTE 4 dup(?)
VkSamplerCubicWeightsCreateInfoQCOM ENDS

VkBlitImageCubicWeightsInfoQCOM STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    cubicWeights DWORD ?
    BYTE 4 dup(?)
VkBlitImageCubicWeightsInfoQCOM ENDS

VkPhysicalDeviceYcbcrDegammaFeaturesQCOM STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    ycbcrDegamma DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceYcbcrDegammaFeaturesQCOM ENDS

VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    enableYDegamma DWORD ?
    enableCbCrDegamma DWORD ?
VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM ENDS

VkPhysicalDeviceCubicClampFeaturesQCOM STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    cubicRangeClamp DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceCubicClampFeaturesQCOM ENDS

VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    attachmentFeedbackLoopDynamicState DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT ENDS

VkPhysicalDeviceLayeredDriverPropertiesMSFT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    underlyingAPI DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceLayeredDriverPropertiesMSFT ENDS

VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    descriptorPoolOverallocation DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV ENDS

VkPhysicalDeviceRawAccessChainsFeaturesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    shaderRawAccessChains DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceRawAccessChainsFeaturesNV ENDS

VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    shaderFloat16VectorAtomics DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV ENDS

VkPhysicalDeviceRayTracingValidationFeaturesNV STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    rayTracingValidation DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceRayTracingValidationFeaturesNV ENDS

VkAccelerationStructureBuildRangeInfoKHR STRUCT
    primitiveCount DWORD ?
    primitiveOffset DWORD ?
    firstVertex DWORD ?
    transformOffset DWORD ?
VkAccelerationStructureBuildRangeInfoKHR ENDS

VkAccelerationStructureGeometryTrianglesDataKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    vertexFormat DWORD ?
    vertexData DWORD ?
    vertexStride DWORD ?
    maxVertex DWORD ?
    indexType DWORD ?
    indexData DWORD ?
    transformData DWORD ?
    BYTE 4 dup(?)
VkAccelerationStructureGeometryTrianglesDataKHR ENDS

VkAccelerationStructureGeometryAabbsDataKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    data DWORD ?
    stride DWORD ?
VkAccelerationStructureGeometryAabbsDataKHR ENDS

VkAccelerationStructureGeometryInstancesDataKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    arrayOfPointers DWORD ?
    data DWORD ?
VkAccelerationStructureGeometryInstancesDataKHR ENDS

VkAccelerationStructureGeometryKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    geometryType DWORD ?
    geometry DWORD ?
    flags DWORD ?
    BYTE 4 dup(?)
VkAccelerationStructureGeometryKHR ENDS

VkAccelerationStructureBuildGeometryInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    m_type DWORD ?
    flags DWORD ?
    mode DWORD ?
    srcAccelerationStructure DWORD ?
    dstAccelerationStructure DWORD ?
    geometryCount DWORD ?
    pGeometries QWORD ?
    ppGeometries QWORD ?
    scratchData DWORD ?
    BYTE 4 dup(?)
VkAccelerationStructureBuildGeometryInfoKHR ENDS

VkAccelerationStructureCreateInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    createFlags DWORD ?
    buffer DWORD ?
    m_offset DWORD ?
    m_size DWORD ?
    m_type DWORD ?
    deviceAddress DWORD ?
VkAccelerationStructureCreateInfoKHR ENDS

VkWriteDescriptorSetAccelerationStructureKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    accelerationStructureCount DWORD ?
    BYTE 4 dup(?)
    pAccelerationStructures QWORD ?
VkWriteDescriptorSetAccelerationStructureKHR ENDS

VkPhysicalDeviceAccelerationStructureFeaturesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    accelerationStructure DWORD ?
    accelerationStructureCaptureReplay DWORD ?
    accelerationStructureIndirectBuild DWORD ?
    accelerationStructureHostCommands DWORD ?
    descriptorBindingAccelerationStructureUpdateAfterBind DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceAccelerationStructureFeaturesKHR ENDS

VkPhysicalDeviceAccelerationStructurePropertiesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    maxGeometryCount QWORD ?
    maxInstanceCount QWORD ?
    maxPrimitiveCount QWORD ?
    maxPerStageDescriptorAccelerationStructures DWORD ?
    maxPerStageDescriptorUpdateAfterBindAccelerationStructures DWORD ?
    maxDescriptorSetAccelerationStructures DWORD ?
    maxDescriptorSetUpdateAfterBindAccelerationStructures DWORD ?
    minAccelerationStructureScratchOffsetAlignment DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceAccelerationStructurePropertiesKHR ENDS

VkAccelerationStructureDeviceAddressInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    accelerationStructure DWORD ?
    BYTE 4 dup(?)
VkAccelerationStructureDeviceAddressInfoKHR ENDS

VkAccelerationStructureVersionInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    pVersionData QWORD ?
VkAccelerationStructureVersionInfoKHR ENDS

VkCopyAccelerationStructureToMemoryInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    src DWORD ?
    dst DWORD ?
    mode DWORD ?
    BYTE 4 dup(?)
VkCopyAccelerationStructureToMemoryInfoKHR ENDS

VkCopyMemoryToAccelerationStructureInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    src DWORD ?
    dst DWORD ?
    mode DWORD ?
    BYTE 4 dup(?)
VkCopyMemoryToAccelerationStructureInfoKHR ENDS

VkCopyAccelerationStructureInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    src DWORD ?
    dst DWORD ?
    mode DWORD ?
    BYTE 4 dup(?)
VkCopyAccelerationStructureInfoKHR ENDS

VkAccelerationStructureBuildSizesInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    accelerationStructureSize DWORD ?
    updateScratchSize DWORD ?
    buildScratchSize DWORD ?
    BYTE 4 dup(?)
VkAccelerationStructureBuildSizesInfoKHR ENDS

VkRayTracingShaderGroupCreateInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    m_type DWORD ?
    generalShader DWORD ?
    closestHitShader DWORD ?
    anyHitShader DWORD ?
    intersectionShader DWORD ?
    BYTE 4 dup(?)
    pShaderGroupCaptureReplayHandle QWORD ?
VkRayTracingShaderGroupCreateInfoKHR ENDS

VkRayTracingPipelineInterfaceCreateInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    maxPipelineRayPayloadSize DWORD ?
    maxPipelineRayHitAttributeSize DWORD ?
VkRayTracingPipelineInterfaceCreateInfoKHR ENDS

VkRayTracingPipelineCreateInfoKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    flags DWORD ?
    stageCount DWORD ?
    pStages QWORD ?
    groupCount DWORD ?
    BYTE 4 dup(?)
    pGroups QWORD ?
    maxPipelineRayRecursionDepth DWORD ?
    BYTE 4 dup(?)
    pLibraryInfo QWORD ?
    pLibraryInterface QWORD ?
    pDynamicState QWORD ?
    layout DWORD ?
    basePipelineHandle DWORD ?
    basePipelineIndex DWORD ?
    BYTE 4 dup(?)
VkRayTracingPipelineCreateInfoKHR ENDS

VkPhysicalDeviceRayTracingPipelineFeaturesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    rayTracingPipeline DWORD ?
    rayTracingPipelineShaderGroupHandleCaptureReplay DWORD ?
    rayTracingPipelineShaderGroupHandleCaptureReplayMixed DWORD ?
    rayTracingPipelineTraceRaysIndirect DWORD ?
    rayTraversalPrimitiveCulling DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceRayTracingPipelineFeaturesKHR ENDS

VkPhysicalDeviceRayTracingPipelinePropertiesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    shaderGroupHandleSize DWORD ?
    maxRayRecursionDepth DWORD ?
    maxShaderGroupStride DWORD ?
    shaderGroupBaseAlignment DWORD ?
    shaderGroupHandleCaptureReplaySize DWORD ?
    maxRayDispatchInvocationCount DWORD ?
    shaderGroupHandleAlignment DWORD ?
    maxRayHitAttributeSize DWORD ?
VkPhysicalDeviceRayTracingPipelinePropertiesKHR ENDS

VkStridedDeviceAddressRegionKHR STRUCT
    deviceAddress DWORD ?
    stride DWORD ?
    m_size DWORD ?
VkStridedDeviceAddressRegionKHR ENDS

VkTraceRaysIndirectCommandKHR STRUCT
    m_width DWORD ?
    height DWORD ?
    depth DWORD ?
VkTraceRaysIndirectCommandKHR ENDS

VkPhysicalDeviceRayQueryFeaturesKHR STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    rayQuery DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceRayQueryFeaturesKHR ENDS

VkPhysicalDeviceMeshShaderFeaturesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    taskShader DWORD ?
    meshShader DWORD ?
    multiviewMeshShader DWORD ?
    primitiveFragmentShadingRateMeshShader DWORD ?
    meshShaderQueries DWORD ?
    BYTE 4 dup(?)
VkPhysicalDeviceMeshShaderFeaturesEXT ENDS

VkPhysicalDeviceMeshShaderPropertiesEXT STRUCT
    sType DWORD ?
    BYTE 4 dup(?)
    pNext QWORD ?
    maxTaskWorkGroupTotalCount DWORD ?
    maxTaskWorkGroupCount DWORD 3 dup(?)
    maxTaskWorkGroupInvocations DWORD ?
    maxTaskWorkGroupSize DWORD 3 dup(?)
    maxTaskPayloadSize DWORD ?
    maxTaskSharedMemorySize DWORD ?
    maxTaskPayloadAndSharedMemorySize DWORD ?
    maxMeshWorkGroupTotalCount DWORD ?
    maxMeshWorkGroupCount DWORD 3 dup(?)
    maxMeshWorkGroupInvocations DWORD ?
    maxMeshWorkGroupSize DWORD 3 dup(?)
    maxMeshSharedMemorySize DWORD ?
    maxMeshPayloadAndSharedMemorySize DWORD ?
    maxMeshOutputMemorySize DWORD ?
    maxMeshPayloadAndOutputMemorySize DWORD ?
    maxMeshOutputComponents DWORD ?
    maxMeshOutputVertices DWORD ?
    maxMeshOutputPrimitives DWORD ?
    maxMeshOutputLayers DWORD ?
    maxMeshMultiviewViewCount DWORD ?
    meshOutputPerVertexGranularity DWORD ?
    meshOutputPerPrimitiveGranularity DWORD ?
    maxPreferredTaskWorkGroupInvocations DWORD ?
    maxPreferredMeshWorkGroupInvocations DWORD ?
    prefersLocalInvocationVertexOutput DWORD ?
    prefersLocalInvocationPrimitiveOutput DWORD ?
    prefersCompactVertexOutput DWORD ?
    prefersCompactPrimitiveOutput DWORD ?
VkPhysicalDeviceMeshShaderPropertiesEXT ENDS

VkDrawMeshTasksIndirectCommandEXT STRUCT
    groupCountX DWORD ?
    groupCountY DWORD ?
    groupCountZ DWORD ?
VkDrawMeshTasksIndirectCommandEXT ENDS
