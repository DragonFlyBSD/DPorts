--- src/3rdparty/chromium/third_party/vulkan-deps/vulkan-loader/src/loader/vk_loader_platform.h.orig	Thu Nov  6 19:16:32 2025
+++ src/3rdparty/chromium/third_party/vulkan-deps/vulkan-loader/src/loader/vk_loader_platform.h	Thu Nov
@@ -26,7 +26,7 @@
  */
 #pragma once
 
-#if defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #include <sys/types.h>
 #include <sys/select.h>
 #endif
@@ -306,7 +306,8 @@ static inline char *loader_platform_executable_path(ch
     return buffer;
 }
 #endif
-#elif defined(__DragonFly__) || defined(__FreeBSD__) || defined(__NetBSD__)
+#elif defined(__DragonFly__) || defined(__FreeBSD__) || defined(__NetBSD__) || \
+	defined(__DragonFly__)
 #include <sys/sysctl.h>
 static inline char *loader_platform_executable_path(char *buffer, size_t size) {
     int mib[] = {
