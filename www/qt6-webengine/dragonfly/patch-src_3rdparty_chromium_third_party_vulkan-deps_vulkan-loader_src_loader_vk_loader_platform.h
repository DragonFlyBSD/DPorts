diff --git third_party/vulkan-deps/vulkan-loader/src/loader/vk_loader_platform.h third_party/vulkan-deps/vulkan-loader/src/loader/vk_loader_platform.h
index 798130145e8..c594e7ef95a 100644
--- src/3rdparty/chromium/third_party/vulkan-deps/vulkan-loader/src/loader/vk_loader_platform.h
+++ src/3rdparty/chromium/third_party/vulkan-deps/vulkan-loader/src/loader/vk_loader_platform.h
@@ -24,7 +24,7 @@
  */
 #pragma once
 
-#if defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #include <sys/types.h>
 #include <sys/select.h>
 #endif
@@ -43,7 +43,7 @@
 #include "dlopen_fuchsia.h"
 #endif  // defined(__Fuchsia__)
 
-#if defined(__linux__) || defined(__APPLE__) || defined(__Fuchsia__) || defined(__QNXNTO__) || defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__linux__) || defined(__APPLE__) || defined(__Fuchsia__) || defined(__QNXNTO__) || defined(__FreeBSD__) || defined(__OpenBSD__) ||  defined(__DragonFly__)
 #include <unistd.h>
 // Note: The following file is for dynamic loading:
 #include <dlfcn.h>
@@ -98,7 +98,7 @@
 #define LAYERS_PATH_ENV "VK_LAYER_PATH"
 #define ENABLED_LAYERS_ENV "VK_INSTANCE_LAYERS"
 
-#if defined(__linux__) || defined(__APPLE__) || defined(__Fuchsia__) || defined(__QNXNTO__) || defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__linux__) || defined(__APPLE__) || defined(__Fuchsia__) || defined(__QNXNTO__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 /* Linux-specific common code: */
 
 // VK Library Filenames, Paths, etc.:
@@ -219,7 +219,7 @@ static inline void loader_platform_thread_once_fn(pthread_once_t *ctl, void (*fu
 
 #endif
 
-#if defined(__linux__) || defined(__APPLE__) || defined(__Fuchsia__) || defined(__QNXNTO__) || defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__linux__) || defined(__APPLE__) || defined(__Fuchsia__) || defined(__QNXNTO__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 
 // File IO
 static inline bool loader_platform_file_exists(const char *path) {
@@ -259,7 +259,7 @@ static inline char *loader_platform_executable_path(char *buffer, size_t size) {
     buffer[ret] = '\0';
     return buffer;
 }
-#elif defined(__DragonFly__) || defined(__FreeBSD__) || defined(__NetBSD__)
+#elif defined(__DragonFly__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 #include <sys/sysctl.h>
 static inline char *loader_platform_executable_path(char *buffer, size_t size) {
     int mib[] = {
