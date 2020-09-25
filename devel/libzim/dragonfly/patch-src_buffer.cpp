--- src/buffer.cpp.orig	2020-09-02 16:22:41 UTC
+++ src/buffer.cpp
@@ -105,7 +105,7 @@ MMapBuffer::MMapBuffer(int fd, offset_t
 {
   offset_t pa_offset(offset.v & ~(sysconf(_SC_PAGE_SIZE) - 1));
   _offset = offset-pa_offset;
-#if defined(__APPLE__) || defined(__OpenBSD__)
+#if defined(__APPLE__) || defined(__OpenBSD__) || defined(__DragonFly__)
   #define MAP_FLAGS MAP_PRIVATE
 #elif defined(__FreeBSD__)
   #define MAP_FLAGS MAP_PRIVATE|MAP_PREFAULT_READ
