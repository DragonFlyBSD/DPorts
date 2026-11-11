--- toolkit/crashreporter/google-breakpad/src/common/memory_allocator.h.orig	2026-09-04 00:01:31 UTC
+++ toolkit/crashreporter/google-breakpad/src/common/memory_allocator.h
@@ -42,7 +42,7 @@
 #include <sanitizer/msan_interface.h>
 #endif
 
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #define sys_mmap mmap
 #define sys_munmap munmap
 #define MAP_ANONYMOUS MAP_ANON
