--- src/3rdparty/chromium/third_party/angle/third_party/vulkan-loader/src/loader/vk_loader_platform.h.orig	2020-08-18 13:08:52.000000000 +0000
+++ src/3rdparty/chromium/third_party/angle/third_party/vulkan-loader/src/loader/vk_loader_platform.h
@@ -31,7 +31,7 @@
 #include "vulkan/vk_platform.h"
 #include "vulkan/vk_sdk_platform.h"
 
-#if defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 /* Linux-specific common code: */
 
 // Headers:
