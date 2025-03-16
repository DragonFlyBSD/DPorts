--- src/3rdparty/chromium/third_party/vulkan-deps/vulkan-loader/src/loader/vk_loader_platform.h.orig	Fri Feb 28 18:16:35 2025
+++ src/3rdparty/chromium/third_party/vulkan-deps/vulkan-loader/src/loader/vk_loader_platform.h	Fri Feb
@@ -24,7 +24,7 @@
  */
 #pragma once
 
-#if defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #include <sys/types.h>
 #include <sys/select.h>
 #endif
@@ -283,7 +283,7 @@ static inline char *loader_platform_executable_path(ch
     buffer[ret] = '\0';
     return buffer;
 }
-#elif defined(__DragonFly__) || defined(__FreeBSD__) || defined(__NetBSD__)
+#elif defined(__DragonFly__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 #include <sys/sysctl.h>
 static inline char *loader_platform_executable_path(char *buffer, size_t size) {
     int mib[] = {
