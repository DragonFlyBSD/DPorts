diff --git third_party/vulkan-deps/vulkan-loader/src/loader/stack_allocation.h third_party/vulkan-deps/vulkan-loader/src/loader/stack_allocation.h
index d1958fbdccc..22e3076e003 100644
--- src/3rdparty/chromium/third_party/vulkan-deps/vulkan-loader/src/loader/stack_allocation.h
+++ src/3rdparty/chromium/third_party/vulkan-deps/vulkan-loader/src/loader/stack_allocation.h
@@ -36,7 +36,7 @@
 #include <stdlib.h>
 #endif
 
-#if defined(__linux__) || defined(__APPLE__) || defined(__Fuchsia__) || defined(__QNXNTO__) || defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__linux__) || defined(__APPLE__) || defined(__Fuchsia__) || defined(__QNXNTO__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #define loader_stack_alloc(size) alloca(size)
 #elif defined(_WIN32)
 #define loader_stack_alloc(size) _alloca(size)
