--- src/buffer.cpp.intermediate	2019-05-02 21:22:05 UTC
+++ src/buffer.cpp
@@ -46,7 +46,7 @@ MMapBuffer::MMapBuffer(int fd, offset_t
 {
   offset_t pa_offset(offset.v & ~(sysconf(_SC_PAGE_SIZE) - 1));
   _offset = offset-pa_offset;
-#if defined(__APPLE__)
+#if defined(__APPLE__) || defined(__DragonFly__)
   #define MAP_FLAGS MAP_PRIVATE
 #else
   #define MAP_FLAGS MAP_PRIVATE|MAP_PREFAULT_READ
