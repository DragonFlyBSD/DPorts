--- src/3rdparty/chromium/third_party/skia/third_party/vulkanmemoryallocator/include/vk_mem_alloc.h.intermediate	2019-12-20 18:22:02 UTC
+++ src/3rdparty/chromium/third_party/skia/third_party/vulkanmemoryallocator/include/vk_mem_alloc.h
@@ -2232,7 +2232,8 @@ remove them if not needed.
 #include <mutex> // for std::mutex
 #include <atomic> // for std::atomic
 
-#if !defined(_WIN32) && !defined(__APPLE__) && !defined(__FreeBSD__)
+#if !defined(_WIN32) && !defined(__APPLE__) && !defined(__FreeBSD__) && \
+    !defined(__DragonFly__)
     #include <malloc.h> // for aligned_alloc()
 #endif
 
