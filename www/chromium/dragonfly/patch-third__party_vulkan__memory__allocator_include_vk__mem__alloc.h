diff --git third_party/vulkan_memory_allocator/include/vk_mem_alloc.h third_party/vulkan_memory_allocator/include/vk_mem_alloc.h
index 2bf9b127d8f6..8b6f744f08b5 100644
--- third_party/vulkan_memory_allocator/include/vk_mem_alloc.h
+++ third_party/vulkan_memory_allocator/include/vk_mem_alloc.h
@@ -2760,7 +2760,7 @@ void* vma_aligned_alloc(size_t alignment, size_t size)
 
     return memalign(alignment, size);
 }
-#elif defined(__APPLE__) || defined(__ANDROID__) || (defined(__linux__) && defined(__GLIBCXX__) && !defined(_GLIBCXX_HAVE_ALIGNED_ALLOC)) || defined(__OpenBSD__) || defined(__FreeBSD__)
+#elif defined(__APPLE__) || defined(__ANDROID__) || (defined(__linux__) && defined(__GLIBCXX__) && !defined(_GLIBCXX_HAVE_ALIGNED_ALLOC)) || defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <cstdlib>
 
 #if defined(__APPLE__)
