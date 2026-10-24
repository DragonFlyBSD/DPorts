--- src/3rdparty/chromium/base/files/dir_reader_linux.h.orig	2026-10-23 12:00:00 UTC
+++ src/3rdparty/chromium/base/files/dir_reader_linux.h
@@ -66,7 +66,7 @@ class DirReaderLinux {
   bool Next() {
     if (size_) {
       linux_dirent* dirent = reinterpret_cast<linux_dirent*>(&buf_[offset_]);
-      offset_ += dirent->d_reclen;
+      offset_ += _DIRENT_RECLEN(dirent->d_namlen);
     }
 
     if (offset_ != size_) {
