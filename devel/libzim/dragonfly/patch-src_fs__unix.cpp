--- src/fs_unix.cpp.orig	2026-10-23 00:00:00 UTC
+++ src/fs_unix.cpp
@@ -36,7 +36,8 @@
 
 zsize_t FD::readAt(char* dest, zsize_t size, offset_t offset) const
 {
-#if defined(__APPLE__) || defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__HAIKU__)
+#if defined(__APPLE__) || defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__HAIKU__) || \
+  defined(__DragonFly__)
 # define PREAD pread
 #else
 # define PREAD pread64
