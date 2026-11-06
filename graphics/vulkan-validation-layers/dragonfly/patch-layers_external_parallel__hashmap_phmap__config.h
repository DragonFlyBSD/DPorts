--- layers/external/parallel_hashmap/phmap_config.h.orig	2026-08-14 11:28:44 UTC
+++ layers/external/parallel_hashmap/phmap_config.h
@@ -215,7 +215,7 @@
 // -----------------------------------------------------------------------
 #ifdef PHMAP_HAVE_MMAP
 #error PHMAP_HAVE_MMAP cannot be directly set
-#elif defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) || defined(__ros__) || defined(__native_client__) || \
+#elif defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__ros__) || defined(__native_client__) || \
     defined(__asmjs__) || defined(__wasm__) || defined(__Fuchsia__) || defined(__sun) || defined(__ASYLO__)
 #define PHMAP_HAVE_MMAP 1
 #endif
