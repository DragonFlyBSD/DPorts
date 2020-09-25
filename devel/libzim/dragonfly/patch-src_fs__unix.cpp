--- src/fs_unix.cpp.orig	2020-09-02 16:22:41 UTC
+++ src/fs_unix.cpp
@@ -34,7 +34,8 @@ namespace unix {
 
 zsize_t FD::readAt(char* dest, zsize_t size, offset_t offset) const
 {
-#if defined(__APPLE__) || defined(__OpenBSD__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__OpenBSD__) || defined(__FreeBSD__) || \
+  defined(__DragonFly__)
 # define PREAD pread
 #else
 # define PREAD pread64
