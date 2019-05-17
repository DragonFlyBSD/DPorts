--- src/fs_unix.cpp.intermediate	2019-05-02 21:07:22 UTC
+++ src/fs_unix.cpp
@@ -34,7 +34,7 @@ namespace unix {
 
 zsize_t FD::readAt(char* dest, zsize_t size, offset_t offset) const
 {
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 # define PREAD pread
 #else
 # define PREAD pread64
