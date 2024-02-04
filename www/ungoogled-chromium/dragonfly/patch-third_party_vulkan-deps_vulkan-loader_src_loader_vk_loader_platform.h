diff --git third_party/vulkan-deps/vulkan-loader/src/loader/vk_loader_platform.h third_party/vulkan-deps/vulkan-loader/src/loader/vk_loader_platform.h
index 7af8d4af54b..8e7d9403e83 100644
--- third_party/vulkan-deps/vulkan-loader/src/loader/vk_loader_platform.h
+++ third_party/vulkan-deps/vulkan-loader/src/loader/vk_loader_platform.h
@@ -24,7 +24,7 @@
  */
 #pragma once
 
-#if defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #include <sys/types.h>
 #include <sys/select.h>
 #endif
@@ -291,7 +291,7 @@ static inline char *loader_platform_executable_path(char *buffer, size_t size) {
     return buffer;
 }
 #endif
-#elif defined(__DragonFly__) || defined(__FreeBSD__) || defined(__NetBSD__)
+#elif defined(__DragonFly__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 #include <sys/sysctl.h>
 static inline char *loader_platform_executable_path(char *buffer, size_t size) {
     int mib[] = {
