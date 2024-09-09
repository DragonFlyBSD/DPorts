--- src/3rdparty/chromium/third_party/vulkan-deps/vulkan-loader/src/loader/vk_loader_platform.h.orig	2024-06-09 12:49:10 UTC
+++ src/3rdparty/chromium/third_party/vulkan-deps/vulkan-loader/src/loader/vk_loader_platform.h
@@ -24,7 +24,7 @@
  */
 #pragma once
 
-#if defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #include <sys/types.h>
 #include <sys/select.h>
 #endif
@@ -44,7 +44,7 @@
 #endif  // defined(__Fuchsia__)
 
 #if defined(__linux__) || defined(__APPLE__) || defined(__Fuchsia__) || defined(__QNXNTO__) || defined(__FreeBSD__) || \
-    defined(__OpenBSD__)
+	defined(__OpenBSD__) || defined(__DragonFly__)
 #include <unistd.h>
 // Note: The following file is for dynamic loading:
 #include <dlfcn.h>
@@ -111,7 +111,7 @@
 #define ENABLED_LAYERS_ENV "VK_INSTANCE_LAYERS"
 
 #if defined(__linux__) || defined(__APPLE__) || defined(__Fuchsia__) || defined(__QNXNTO__) || defined(__FreeBSD__) || \
-    defined(__OpenBSD__)
+	defined(__OpenBSD__) || defined(__DragonFly__)
 /* Linux-specific common code: */
 
 // VK Library Filenames, Paths, etc.:
@@ -233,7 +233,7 @@ static inline void loader_platform_threa
 #endif
 
 #if defined(__linux__) || defined(__APPLE__) || defined(__Fuchsia__) || defined(__QNXNTO__) || defined(__FreeBSD__) || \
-    defined(__OpenBSD__)
+	defined(__OpenBSD__) || defined(__DragonFly__)
 
 // File IO
 static inline bool loader_platform_file_exists(const char *path) {
@@ -273,7 +273,7 @@ static inline char *loader_platform_exec
     buffer[ret] = '\0';
     return buffer;
 }
-#elif defined(__DragonFly__) || defined(__FreeBSD__) || defined(__NetBSD__)
+#elif defined(__DragonFly__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 #include <sys/sysctl.h>
 static inline char *loader_platform_executable_path(char *buffer, size_t size) {
     int mib[] = {
