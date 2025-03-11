diff --git base/files/dir_reader_linux.h base/files/dir_reader_linux.h
index 5a7ec366fd02..24a349da149d 100644
--- base/files/dir_reader_linux.h
+++ base/files/dir_reader_linux.h
@@ -67,7 +67,7 @@ class DirReaderLinux {
   bool Next() {
     if (size_) {
       linux_dirent* dirent = reinterpret_cast<linux_dirent*>(&buf_[offset_]);
-      offset_ += dirent->d_reclen;
+      offset_ += _DIRENT_RECLEN(dirent->d_namlen);
     }
 
     if (offset_ != size_)
