--- folly/Memory.h.orig	2020-06-11 05:04:12 UTC
+++ folly/Memory.h
@@ -58,7 +58,7 @@ inline void deallocateBytes(void* p, siz
     (defined(__APPLE__) &&                                  \
      (__MAC_OS_X_VERSION_MIN_REQUIRED >= __MAC_10_6 ||      \
       __IPHONE_OS_VERSION_MIN_REQUIRED >= __IPHONE_3_0)) || \
-    defined(__FreeBSD__) || defined(__wasm32__)
+  defined(__FreeBSD__) || defined(__wasm32__) || defined(__DragonFly__)
 
 inline void* aligned_malloc(size_t size, size_t align) {
   // use posix_memalign, but mimic the behaviour of memalign
