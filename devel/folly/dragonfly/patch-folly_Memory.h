--- folly/Memory.h.orig
+++ folly/Memory.h
@@ -45,7 +45,8 @@ namespace folly {
 #if (defined(_POSIX_C_SOURCE) && _POSIX_C_SOURCE >= 200112L) || \
     (defined(_XOPEN_SOURCE) && _XOPEN_SOURCE >= 600) ||         \
     (defined(__ANDROID__) && (__ANDROID_API__ > 16)) ||         \
-    (defined(__APPLE__)) || defined(__FreeBSD__) || defined(__wasm__)
+    (defined(__APPLE__)) || defined(__FreeBSD__) || defined(__wasm__) || \
+    defined(__DragonFly__)
 
 inline void* aligned_malloc(size_t size, size_t align) {
   // Use posix_memalign, but mimic the behaviour of memalign.
