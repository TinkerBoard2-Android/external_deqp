/* WARNING: This is auto-generated file. Do not modify, since changes will
 * be lost! Modify the generating script instead.
 */
virtual PFN_vkVoidFunction	getDeviceProcAddr							(VkDevice device, const char* pName) const;
virtual void				destroyDevice								(VkDevice device, const VkAllocationCallbacks* pAllocator) const;
virtual void				getDeviceQueue								(VkDevice device, deUint32 queueFamilyIndex, deUint32 queueIndex, VkQueue* pQueue) const;
virtual VkResult			queueSubmit									(VkQueue queue, deUint32 submitCount, const VkSubmitInfo* pSubmits, VkFence fence) const;
virtual VkResult			queueWaitIdle								(VkQueue queue) const;
virtual VkResult			deviceWaitIdle								(VkDevice device) const;
virtual VkResult			allocateMemory								(VkDevice device, const VkMemoryAllocateInfo* pAllocateInfo, const VkAllocationCallbacks* pAllocator, VkDeviceMemory* pMemory) const;
virtual void				freeMemory									(VkDevice device, VkDeviceMemory memory, const VkAllocationCallbacks* pAllocator) const;
virtual VkResult			mapMemory									(VkDevice device, VkDeviceMemory memory, VkDeviceSize offset, VkDeviceSize size, VkMemoryMapFlags flags, void** ppData) const;
virtual void				unmapMemory									(VkDevice device, VkDeviceMemory memory) const;
virtual VkResult			flushMappedMemoryRanges						(VkDevice device, deUint32 memoryRangeCount, const VkMappedMemoryRange* pMemoryRanges) const;
virtual VkResult			invalidateMappedMemoryRanges				(VkDevice device, deUint32 memoryRangeCount, const VkMappedMemoryRange* pMemoryRanges) const;
virtual void				getDeviceMemoryCommitment					(VkDevice device, VkDeviceMemory memory, VkDeviceSize* pCommittedMemoryInBytes) const;
virtual VkResult			bindBufferMemory							(VkDevice device, VkBuffer buffer, VkDeviceMemory memory, VkDeviceSize memoryOffset) const;
virtual VkResult			bindImageMemory								(VkDevice device, VkImage image, VkDeviceMemory memory, VkDeviceSize memoryOffset) const;
virtual void				getBufferMemoryRequirements					(VkDevice device, VkBuffer buffer, VkMemoryRequirements* pMemoryRequirements) const;
virtual void				getImageMemoryRequirements					(VkDevice device, VkImage image, VkMemoryRequirements* pMemoryRequirements) const;
virtual void				getImageSparseMemoryRequirements			(VkDevice device, VkImage image, deUint32* pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements* pSparseMemoryRequirements) const;
virtual VkResult			queueBindSparse								(VkQueue queue, deUint32 bindInfoCount, const VkBindSparseInfo* pBindInfo, VkFence fence) const;
virtual VkResult			createFence									(VkDevice device, const VkFenceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence) const;
virtual void				destroyFence								(VkDevice device, VkFence fence, const VkAllocationCallbacks* pAllocator) const;
virtual VkResult			resetFences									(VkDevice device, deUint32 fenceCount, const VkFence* pFences) const;
virtual VkResult			getFenceStatus								(VkDevice device, VkFence fence) const;
virtual VkResult			waitForFences								(VkDevice device, deUint32 fenceCount, const VkFence* pFences, VkBool32 waitAll, deUint64 timeout) const;
virtual VkResult			createSemaphore								(VkDevice device, const VkSemaphoreCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSemaphore* pSemaphore) const;
virtual void				destroySemaphore							(VkDevice device, VkSemaphore semaphore, const VkAllocationCallbacks* pAllocator) const;
virtual VkResult			createEvent									(VkDevice device, const VkEventCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkEvent* pEvent) const;
virtual void				destroyEvent								(VkDevice device, VkEvent event, const VkAllocationCallbacks* pAllocator) const;
virtual VkResult			getEventStatus								(VkDevice device, VkEvent event) const;
virtual VkResult			setEvent									(VkDevice device, VkEvent event) const;
virtual VkResult			resetEvent									(VkDevice device, VkEvent event) const;
virtual VkResult			createQueryPool								(VkDevice device, const VkQueryPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkQueryPool* pQueryPool) const;
virtual void				destroyQueryPool							(VkDevice device, VkQueryPool queryPool, const VkAllocationCallbacks* pAllocator) const;
virtual VkResult			getQueryPoolResults							(VkDevice device, VkQueryPool queryPool, deUint32 firstQuery, deUint32 queryCount, deUintptr dataSize, void* pData, VkDeviceSize stride, VkQueryResultFlags flags) const;
virtual VkResult			createBuffer								(VkDevice device, const VkBufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkBuffer* pBuffer) const;
virtual void				destroyBuffer								(VkDevice device, VkBuffer buffer, const VkAllocationCallbacks* pAllocator) const;
virtual VkResult			createBufferView							(VkDevice device, const VkBufferViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkBufferView* pView) const;
virtual void				destroyBufferView							(VkDevice device, VkBufferView bufferView, const VkAllocationCallbacks* pAllocator) const;
virtual VkResult			createImage									(VkDevice device, const VkImageCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkImage* pImage) const;
virtual void				destroyImage								(VkDevice device, VkImage image, const VkAllocationCallbacks* pAllocator) const;
virtual void				getImageSubresourceLayout					(VkDevice device, VkImage image, const VkImageSubresource* pSubresource, VkSubresourceLayout* pLayout) const;
virtual VkResult			createImageView								(VkDevice device, const VkImageViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkImageView* pView) const;
virtual void				destroyImageView							(VkDevice device, VkImageView imageView, const VkAllocationCallbacks* pAllocator) const;
virtual VkResult			createShaderModule							(VkDevice device, const VkShaderModuleCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkShaderModule* pShaderModule) const;
virtual void				destroyShaderModule							(VkDevice device, VkShaderModule shaderModule, const VkAllocationCallbacks* pAllocator) const;
virtual VkResult			createPipelineCache							(VkDevice device, const VkPipelineCacheCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkPipelineCache* pPipelineCache) const;
virtual void				destroyPipelineCache						(VkDevice device, VkPipelineCache pipelineCache, const VkAllocationCallbacks* pAllocator) const;
virtual VkResult			getPipelineCacheData						(VkDevice device, VkPipelineCache pipelineCache, deUintptr* pDataSize, void* pData) const;
virtual VkResult			mergePipelineCaches							(VkDevice device, VkPipelineCache dstCache, deUint32 srcCacheCount, const VkPipelineCache* pSrcCaches) const;
virtual VkResult			createGraphicsPipelines						(VkDevice device, VkPipelineCache pipelineCache, deUint32 createInfoCount, const VkGraphicsPipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines) const;
virtual VkResult			createComputePipelines						(VkDevice device, VkPipelineCache pipelineCache, deUint32 createInfoCount, const VkComputePipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines) const;
virtual void				destroyPipeline								(VkDevice device, VkPipeline pipeline, const VkAllocationCallbacks* pAllocator) const;
virtual VkResult			createPipelineLayout						(VkDevice device, const VkPipelineLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkPipelineLayout* pPipelineLayout) const;
virtual void				destroyPipelineLayout						(VkDevice device, VkPipelineLayout pipelineLayout, const VkAllocationCallbacks* pAllocator) const;
virtual VkResult			createSampler								(VkDevice device, const VkSamplerCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSampler* pSampler) const;
virtual void				destroySampler								(VkDevice device, VkSampler sampler, const VkAllocationCallbacks* pAllocator) const;
virtual VkResult			createDescriptorSetLayout					(VkDevice device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorSetLayout* pSetLayout) const;
virtual void				destroyDescriptorSetLayout					(VkDevice device, VkDescriptorSetLayout descriptorSetLayout, const VkAllocationCallbacks* pAllocator) const;
virtual VkResult			createDescriptorPool						(VkDevice device, const VkDescriptorPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorPool* pDescriptorPool) const;
virtual void				destroyDescriptorPool						(VkDevice device, VkDescriptorPool descriptorPool, const VkAllocationCallbacks* pAllocator) const;
virtual VkResult			resetDescriptorPool							(VkDevice device, VkDescriptorPool descriptorPool, VkDescriptorPoolResetFlags flags) const;
virtual VkResult			allocateDescriptorSets						(VkDevice device, const VkDescriptorSetAllocateInfo* pAllocateInfo, VkDescriptorSet* pDescriptorSets) const;
virtual VkResult			freeDescriptorSets							(VkDevice device, VkDescriptorPool descriptorPool, deUint32 descriptorSetCount, const VkDescriptorSet* pDescriptorSets) const;
virtual void				updateDescriptorSets						(VkDevice device, deUint32 descriptorWriteCount, const VkWriteDescriptorSet* pDescriptorWrites, deUint32 descriptorCopyCount, const VkCopyDescriptorSet* pDescriptorCopies) const;
virtual VkResult			createFramebuffer							(VkDevice device, const VkFramebufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkFramebuffer* pFramebuffer) const;
virtual void				destroyFramebuffer							(VkDevice device, VkFramebuffer framebuffer, const VkAllocationCallbacks* pAllocator) const;
virtual VkResult			createRenderPass							(VkDevice device, const VkRenderPassCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass) const;
virtual void				destroyRenderPass							(VkDevice device, VkRenderPass renderPass, const VkAllocationCallbacks* pAllocator) const;
virtual void				getRenderAreaGranularity					(VkDevice device, VkRenderPass renderPass, VkExtent2D* pGranularity) const;
virtual VkResult			createCommandPool							(VkDevice device, const VkCommandPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkCommandPool* pCommandPool) const;
virtual void				destroyCommandPool							(VkDevice device, VkCommandPool commandPool, const VkAllocationCallbacks* pAllocator) const;
virtual VkResult			resetCommandPool							(VkDevice device, VkCommandPool commandPool, VkCommandPoolResetFlags flags) const;
virtual VkResult			allocateCommandBuffers						(VkDevice device, const VkCommandBufferAllocateInfo* pAllocateInfo, VkCommandBuffer* pCommandBuffers) const;
virtual void				freeCommandBuffers							(VkDevice device, VkCommandPool commandPool, deUint32 commandBufferCount, const VkCommandBuffer* pCommandBuffers) const;
virtual VkResult			beginCommandBuffer							(VkCommandBuffer commandBuffer, const VkCommandBufferBeginInfo* pBeginInfo) const;
virtual VkResult			endCommandBuffer							(VkCommandBuffer commandBuffer) const;
virtual VkResult			resetCommandBuffer							(VkCommandBuffer commandBuffer, VkCommandBufferResetFlags flags) const;
virtual void				cmdBindPipeline								(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline) const;
virtual void				cmdSetViewport								(VkCommandBuffer commandBuffer, deUint32 firstViewport, deUint32 viewportCount, const VkViewport* pViewports) const;
virtual void				cmdSetScissor								(VkCommandBuffer commandBuffer, deUint32 firstScissor, deUint32 scissorCount, const VkRect2D* pScissors) const;
virtual void				cmdSetLineWidth								(VkCommandBuffer commandBuffer, float lineWidth) const;
virtual void				cmdSetDepthBias								(VkCommandBuffer commandBuffer, float depthBiasConstantFactor, float depthBiasClamp, float depthBiasSlopeFactor) const;
virtual void				cmdSetBlendConstants						(VkCommandBuffer commandBuffer, const float blendConstants[4]) const;
virtual void				cmdSetDepthBounds							(VkCommandBuffer commandBuffer, float minDepthBounds, float maxDepthBounds) const;
virtual void				cmdSetStencilCompareMask					(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, deUint32 compareMask) const;
virtual void				cmdSetStencilWriteMask						(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, deUint32 writeMask) const;
virtual void				cmdSetStencilReference						(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, deUint32 reference) const;
virtual void				cmdBindDescriptorSets						(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, deUint32 firstSet, deUint32 descriptorSetCount, const VkDescriptorSet* pDescriptorSets, deUint32 dynamicOffsetCount, const deUint32* pDynamicOffsets) const;
virtual void				cmdBindIndexBuffer							(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkIndexType indexType) const;
virtual void				cmdBindVertexBuffers						(VkCommandBuffer commandBuffer, deUint32 firstBinding, deUint32 bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets) const;
virtual void				cmdDraw										(VkCommandBuffer commandBuffer, deUint32 vertexCount, deUint32 instanceCount, deUint32 firstVertex, deUint32 firstInstance) const;
virtual void				cmdDrawIndexed								(VkCommandBuffer commandBuffer, deUint32 indexCount, deUint32 instanceCount, deUint32 firstIndex, deInt32 vertexOffset, deUint32 firstInstance) const;
virtual void				cmdDrawIndirect								(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, deUint32 drawCount, deUint32 stride) const;
virtual void				cmdDrawIndexedIndirect						(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, deUint32 drawCount, deUint32 stride) const;
virtual void				cmdDispatch									(VkCommandBuffer commandBuffer, deUint32 groupCountX, deUint32 groupCountY, deUint32 groupCountZ) const;
virtual void				cmdDispatchIndirect							(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset) const;
virtual void				cmdCopyBuffer								(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkBuffer dstBuffer, deUint32 regionCount, const VkBufferCopy* pRegions) const;
virtual void				cmdCopyImage								(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, deUint32 regionCount, const VkImageCopy* pRegions) const;
virtual void				cmdBlitImage								(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, deUint32 regionCount, const VkImageBlit* pRegions, VkFilter filter) const;
virtual void				cmdCopyBufferToImage						(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkImage dstImage, VkImageLayout dstImageLayout, deUint32 regionCount, const VkBufferImageCopy* pRegions) const;
virtual void				cmdCopyImageToBuffer						(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer dstBuffer, deUint32 regionCount, const VkBufferImageCopy* pRegions) const;
virtual void				cmdUpdateBuffer								(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize dataSize, const void* pData) const;
virtual void				cmdFillBuffer								(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize size, deUint32 data) const;
virtual void				cmdClearColorImage							(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearColorValue* pColor, deUint32 rangeCount, const VkImageSubresourceRange* pRanges) const;
virtual void				cmdClearDepthStencilImage					(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearDepthStencilValue* pDepthStencil, deUint32 rangeCount, const VkImageSubresourceRange* pRanges) const;
virtual void				cmdClearAttachments							(VkCommandBuffer commandBuffer, deUint32 attachmentCount, const VkClearAttachment* pAttachments, deUint32 rectCount, const VkClearRect* pRects) const;
virtual void				cmdResolveImage								(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, deUint32 regionCount, const VkImageResolve* pRegions) const;
virtual void				cmdSetEvent									(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask) const;
virtual void				cmdResetEvent								(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask) const;
virtual void				cmdWaitEvents								(VkCommandBuffer commandBuffer, deUint32 eventCount, const VkEvent* pEvents, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, deUint32 memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers, deUint32 bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers, deUint32 imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers) const;
virtual void				cmdPipelineBarrier							(VkCommandBuffer commandBuffer, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, VkDependencyFlags dependencyFlags, deUint32 memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers, deUint32 bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers, deUint32 imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers) const;
virtual void				cmdBeginQuery								(VkCommandBuffer commandBuffer, VkQueryPool queryPool, deUint32 query, VkQueryControlFlags flags) const;
virtual void				cmdEndQuery									(VkCommandBuffer commandBuffer, VkQueryPool queryPool, deUint32 query) const;
virtual void				cmdResetQueryPool							(VkCommandBuffer commandBuffer, VkQueryPool queryPool, deUint32 firstQuery, deUint32 queryCount) const;
virtual void				cmdWriteTimestamp							(VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkQueryPool queryPool, deUint32 query) const;
virtual void				cmdCopyQueryPoolResults						(VkCommandBuffer commandBuffer, VkQueryPool queryPool, deUint32 firstQuery, deUint32 queryCount, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize stride, VkQueryResultFlags flags) const;
virtual void				cmdPushConstants							(VkCommandBuffer commandBuffer, VkPipelineLayout layout, VkShaderStageFlags stageFlags, deUint32 offset, deUint32 size, const void* pValues) const;
virtual void				cmdBeginRenderPass							(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo* pRenderPassBegin, VkSubpassContents contents) const;
virtual void				cmdNextSubpass								(VkCommandBuffer commandBuffer, VkSubpassContents contents) const;
virtual void				cmdEndRenderPass							(VkCommandBuffer commandBuffer) const;
virtual void				cmdExecuteCommands							(VkCommandBuffer commandBuffer, deUint32 commandBufferCount, const VkCommandBuffer* pCommandBuffers) const;
virtual VkResult			bindBufferMemory2							(VkDevice device, deUint32 bindInfoCount, const VkBindBufferMemoryInfo* pBindInfos) const;
virtual VkResult			bindImageMemory2							(VkDevice device, deUint32 bindInfoCount, const VkBindImageMemoryInfo* pBindInfos) const;
virtual void				getDeviceGroupPeerMemoryFeatures			(VkDevice device, deUint32 heapIndex, deUint32 localDeviceIndex, deUint32 remoteDeviceIndex, VkPeerMemoryFeatureFlags* pPeerMemoryFeatures) const;
virtual void				cmdSetDeviceMask							(VkCommandBuffer commandBuffer, deUint32 deviceMask) const;
virtual void				cmdDispatchBase								(VkCommandBuffer commandBuffer, deUint32 baseGroupX, deUint32 baseGroupY, deUint32 baseGroupZ, deUint32 groupCountX, deUint32 groupCountY, deUint32 groupCountZ) const;
virtual void				getImageMemoryRequirements2					(VkDevice device, const VkImageMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements) const;
virtual void				getBufferMemoryRequirements2				(VkDevice device, const VkBufferMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements) const;
virtual void				getImageSparseMemoryRequirements2			(VkDevice device, const VkImageSparseMemoryRequirementsInfo2* pInfo, deUint32* pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2* pSparseMemoryRequirements) const;
virtual void				trimCommandPool								(VkDevice device, VkCommandPool commandPool, VkCommandPoolTrimFlags flags) const;
virtual void				getDeviceQueue2								(VkDevice device, const VkDeviceQueueInfo2* pQueueInfo, VkQueue* pQueue) const;
virtual VkResult			createSamplerYcbcrConversion				(VkDevice device, const VkSamplerYcbcrConversionCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSamplerYcbcrConversion* pYcbcrConversion) const;
virtual void				destroySamplerYcbcrConversion				(VkDevice device, VkSamplerYcbcrConversion ycbcrConversion, const VkAllocationCallbacks* pAllocator) const;
virtual VkResult			createDescriptorUpdateTemplate				(VkDevice device, const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorUpdateTemplate* pDescriptorUpdateTemplate) const;
virtual void				destroyDescriptorUpdateTemplate				(VkDevice device, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const VkAllocationCallbacks* pAllocator) const;
virtual void				updateDescriptorSetWithTemplate				(VkDevice device, VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const void* pData) const;
virtual void				getDescriptorSetLayoutSupport				(VkDevice device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, VkDescriptorSetLayoutSupport* pSupport) const;
virtual VkResult			createSwapchainKHR							(VkDevice device, const VkSwapchainCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSwapchainKHR* pSwapchain) const;
virtual void				destroySwapchainKHR							(VkDevice device, VkSwapchainKHR swapchain, const VkAllocationCallbacks* pAllocator) const;
virtual VkResult			getSwapchainImagesKHR						(VkDevice device, VkSwapchainKHR swapchain, deUint32* pSwapchainImageCount, VkImage* pSwapchainImages) const;
virtual VkResult			acquireNextImageKHR							(VkDevice device, VkSwapchainKHR swapchain, deUint64 timeout, VkSemaphore semaphore, VkFence fence, deUint32* pImageIndex) const;
virtual VkResult			queuePresentKHR								(VkQueue queue, const VkPresentInfoKHR* pPresentInfo) const;
virtual VkResult			getDeviceGroupPresentCapabilitiesKHR		(VkDevice device, VkDeviceGroupPresentCapabilitiesKHR* pDeviceGroupPresentCapabilities) const;
virtual VkResult			getDeviceGroupSurfacePresentModesKHR		(VkDevice device, VkSurfaceKHR surface, VkDeviceGroupPresentModeFlagsKHR* pModes) const;
virtual VkResult			acquireNextImage2KHR						(VkDevice device, const VkAcquireNextImageInfoKHR* pAcquireInfo, deUint32* pImageIndex) const;
virtual VkResult			createSharedSwapchainsKHR					(VkDevice device, deUint32 swapchainCount, const VkSwapchainCreateInfoKHR* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkSwapchainKHR* pSwapchains) const;
virtual VkResult			getMemoryWin32HandleKHR						(VkDevice device, const VkMemoryGetWin32HandleInfoKHR* pGetWin32HandleInfo, pt::Win32Handle* pHandle) const;
virtual VkResult			getMemoryWin32HandlePropertiesKHR			(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, pt::Win32Handle handle, VkMemoryWin32HandlePropertiesKHR* pMemoryWin32HandleProperties) const;
virtual VkResult			getMemoryFdKHR								(VkDevice device, const VkMemoryGetFdInfoKHR* pGetFdInfo, int* pFd) const;
virtual VkResult			getMemoryFdPropertiesKHR					(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, int fd, VkMemoryFdPropertiesKHR* pMemoryFdProperties) const;
virtual VkResult			importSemaphoreWin32HandleKHR				(VkDevice device, const VkImportSemaphoreWin32HandleInfoKHR* pImportSemaphoreWin32HandleInfo) const;
virtual VkResult			getSemaphoreWin32HandleKHR					(VkDevice device, const VkSemaphoreGetWin32HandleInfoKHR* pGetWin32HandleInfo, pt::Win32Handle* pHandle) const;
virtual VkResult			importSemaphoreFdKHR						(VkDevice device, const VkImportSemaphoreFdInfoKHR* pImportSemaphoreFdInfo) const;
virtual VkResult			getSemaphoreFdKHR							(VkDevice device, const VkSemaphoreGetFdInfoKHR* pGetFdInfo, int* pFd) const;
virtual void				cmdPushDescriptorSetKHR						(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, deUint32 set, deUint32 descriptorWriteCount, const VkWriteDescriptorSet* pDescriptorWrites) const;
virtual void				cmdPushDescriptorSetWithTemplateKHR			(VkCommandBuffer commandBuffer, VkDescriptorUpdateTemplate descriptorUpdateTemplate, VkPipelineLayout layout, deUint32 set, const void* pData) const;
virtual VkResult			createRenderPass2KHR						(VkDevice device, const VkRenderPassCreateInfo2KHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass) const;
virtual void				cmdBeginRenderPass2KHR						(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo* pRenderPassBegin, const VkSubpassBeginInfoKHR* pSubpassBeginInfo) const;
virtual void				cmdNextSubpass2KHR							(VkCommandBuffer commandBuffer, const VkSubpassBeginInfoKHR* pSubpassBeginInfo, const VkSubpassEndInfoKHR* pSubpassEndInfo) const;
virtual void				cmdEndRenderPass2KHR						(VkCommandBuffer commandBuffer, const VkSubpassEndInfoKHR* pSubpassEndInfo) const;
virtual VkResult			getSwapchainStatusKHR						(VkDevice device, VkSwapchainKHR swapchain) const;
virtual VkResult			importFenceWin32HandleKHR					(VkDevice device, const VkImportFenceWin32HandleInfoKHR* pImportFenceWin32HandleInfo) const;
virtual VkResult			getFenceWin32HandleKHR						(VkDevice device, const VkFenceGetWin32HandleInfoKHR* pGetWin32HandleInfo, pt::Win32Handle* pHandle) const;
virtual VkResult			importFenceFdKHR							(VkDevice device, const VkImportFenceFdInfoKHR* pImportFenceFdInfo) const;
virtual VkResult			getFenceFdKHR								(VkDevice device, const VkFenceGetFdInfoKHR* pGetFdInfo, int* pFd) const;
virtual VkResult			debugMarkerSetObjectTagEXT					(VkDevice device, const VkDebugMarkerObjectTagInfoEXT* pTagInfo) const;
virtual VkResult			debugMarkerSetObjectNameEXT					(VkDevice device, const VkDebugMarkerObjectNameInfoEXT* pNameInfo) const;
virtual void				cmdDebugMarkerBeginEXT						(VkCommandBuffer commandBuffer, const VkDebugMarkerMarkerInfoEXT* pMarkerInfo) const;
virtual void				cmdDebugMarkerEndEXT						(VkCommandBuffer commandBuffer) const;
virtual void				cmdDebugMarkerInsertEXT						(VkCommandBuffer commandBuffer, const VkDebugMarkerMarkerInfoEXT* pMarkerInfo) const;
virtual void				cmdDrawIndirectCountAMD						(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, deUint32 maxDrawCount, deUint32 stride) const;
virtual void				cmdDrawIndexedIndirectCountAMD				(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, deUint32 maxDrawCount, deUint32 stride) const;
virtual void				cmdDrawIndirectCountKHR						(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, deUint32 maxDrawCount, deUint32 stride) const;
virtual void				cmdDrawIndexedIndirectCountKHR				(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, deUint32 maxDrawCount, deUint32 stride) const;
virtual VkResult			getMemoryWin32HandleNV						(VkDevice device, VkDeviceMemory memory, VkExternalMemoryHandleTypeFlagsNV handleType, pt::Win32Handle* pHandle) const;
virtual void				cmdProcessCommandsNVX						(VkCommandBuffer commandBuffer, const VkCmdProcessCommandsInfoNVX* pProcessCommandsInfo) const;
virtual void				cmdReserveSpaceForCommandsNVX				(VkCommandBuffer commandBuffer, const VkCmdReserveSpaceForCommandsInfoNVX* pReserveSpaceInfo) const;
virtual VkResult			createIndirectCommandsLayoutNVX				(VkDevice device, const VkIndirectCommandsLayoutCreateInfoNVX* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkIndirectCommandsLayoutNVX* pIndirectCommandsLayout) const;
virtual void				destroyIndirectCommandsLayoutNVX			(VkDevice device, VkIndirectCommandsLayoutNVX indirectCommandsLayout, const VkAllocationCallbacks* pAllocator) const;
virtual VkResult			createObjectTableNVX						(VkDevice device, const VkObjectTableCreateInfoNVX* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkObjectTableNVX* pObjectTable) const;
virtual void				destroyObjectTableNVX						(VkDevice device, VkObjectTableNVX objectTable, const VkAllocationCallbacks* pAllocator) const;
virtual VkResult			registerObjectsNVX							(VkDevice device, VkObjectTableNVX objectTable, deUint32 objectCount, const VkObjectTableEntryNVX* const* ppObjectTableEntries, const deUint32* pObjectIndices) const;
virtual VkResult			unregisterObjectsNVX						(VkDevice device, VkObjectTableNVX objectTable, deUint32 objectCount, const VkObjectEntryTypeNVX* pObjectEntryTypes, const deUint32* pObjectIndices) const;
virtual void				cmdSetViewportWScalingNV					(VkCommandBuffer commandBuffer, deUint32 firstViewport, deUint32 viewportCount, const VkViewportWScalingNV* pViewportWScalings) const;
virtual VkResult			displayPowerControlEXT						(VkDevice device, VkDisplayKHR display, const VkDisplayPowerInfoEXT* pDisplayPowerInfo) const;
virtual VkResult			registerDeviceEventEXT						(VkDevice device, const VkDeviceEventInfoEXT* pDeviceEventInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence) const;
virtual VkResult			registerDisplayEventEXT						(VkDevice device, VkDisplayKHR display, const VkDisplayEventInfoEXT* pDisplayEventInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence) const;
virtual VkResult			getSwapchainCounterEXT						(VkDevice device, VkSwapchainKHR swapchain, VkSurfaceCounterFlagBitsEXT counter, deUint64* pCounterValue) const;
virtual VkResult			getRefreshCycleDurationGOOGLE				(VkDevice device, VkSwapchainKHR swapchain, VkRefreshCycleDurationGOOGLE* pDisplayTimingProperties) const;
virtual VkResult			getPastPresentationTimingGOOGLE				(VkDevice device, VkSwapchainKHR swapchain, deUint32* pPresentationTimingCount, VkPastPresentationTimingGOOGLE* pPresentationTimings) const;
virtual void				cmdSetDiscardRectangleEXT					(VkCommandBuffer commandBuffer, deUint32 firstDiscardRectangle, deUint32 discardRectangleCount, const VkRect2D* pDiscardRectangles) const;
virtual void				setHdrMetadataEXT							(VkDevice device, deUint32 swapchainCount, const VkSwapchainKHR* pSwapchains, const VkHdrMetadataEXT* pMetadata) const;
virtual void				cmdSetSampleLocationsEXT					(VkCommandBuffer commandBuffer, const VkSampleLocationsInfoEXT* pSampleLocationsInfo) const;
virtual VkResult			createValidationCacheEXT					(VkDevice device, const VkValidationCacheCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkValidationCacheEXT* pValidationCache) const;
virtual void				destroyValidationCacheEXT					(VkDevice device, VkValidationCacheEXT validationCache, const VkAllocationCallbacks* pAllocator) const;
virtual VkResult			mergeValidationCachesEXT					(VkDevice device, VkValidationCacheEXT dstCache, deUint32 srcCacheCount, const VkValidationCacheEXT* pSrcCaches) const;
virtual VkResult			getValidationCacheDataEXT					(VkDevice device, VkValidationCacheEXT validationCache, deUintptr* pDataSize, void* pData) const;
virtual VkResult			getAndroidHardwareBufferPropertiesANDROID	(VkDevice device, const struct pt::AndroidHardwareBufferPtr buffer, VkAndroidHardwareBufferPropertiesANDROID* pProperties) const;
virtual VkResult			getMemoryAndroidHardwareBufferANDROID		(VkDevice device, const VkMemoryGetAndroidHardwareBufferInfoANDROID* pInfo, struct pt::AndroidHardwareBufferPtr* pBuffer) const;
