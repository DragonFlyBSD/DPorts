diff --git third_party/vulkan-loader/src/loader/vk_loader_platform.h third_party/vulkan-loader/src/loader/vk_loader_platform.h
index be1b08a3651e..988820b1d0a2 100644
--- third_party/vulkan-loader/src/loader/vk_loader_platform.h
+++ third_party/vulkan-loader/src/loader/vk_loader_platform.h
@@ -26,7 +26,7 @@
  */
 #pragma once
 
-#if defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #include <sys/types.h>
 #include <sys/select.h>
 #endif
@@ -332,7 +332,7 @@ static inline char *loader_platform_executable_path(char *buffer, size_t size) {
     return buffer;
 }
 #endif
-#elif defined(__DragonFly__) || defined(__FreeBSD__) || defined(__NetBSD__)
+#elif defined(__DragonFly__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 #include <sys/sysctl.h>
 static inline char *loader_platform_executable_path(char *buffer, size_t size) {
     int mib[] = {
