--- src/3rdparty/chromium/third_party/angle/third_party/vulkan-loader/src/loader/loader.c.intermediate	2020-08-18 13:08:52.000000000 +0000
+++ src/3rdparty/chromium/third_party/angle/third_party/vulkan-loader/src/loader/loader.c
@@ -229,7 +229,7 @@ void *loader_device_heap_realloc(const s
 }
 
 // Environment variables
-#if defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 
 static inline bool IsHighIntegrity() {
     return geteuid() != getuid() || getegid() != getgid();
