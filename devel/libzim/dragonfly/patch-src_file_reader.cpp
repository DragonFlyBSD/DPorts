--- src/file_reader.cpp.orig	2021-01-25 23:05:05.216987000 +0100
+++ src/file_reader.cpp	2021-01-25 23:06:51.117520000 +0100
@@ -134,7 +134,7 @@
 char*
 mmapReadOnly(int fd, offset_type offset, size_type size)
 {
-#if defined(__APPLE__) || defined(__OpenBSD__)
+#if defined(__APPLE__) || defined(__OpenBSD__) || defined(__DragonFly__)
   const auto MAP_FLAGS = MAP_PRIVATE;
 #elif defined(__FreeBSD__)
   const auto MAP_FLAGS = MAP_PRIVATE|MAP_PREFAULT_READ;
