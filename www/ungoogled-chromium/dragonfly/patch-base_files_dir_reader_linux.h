diff --git base/files/dir_reader_linux.h base/files/dir_reader_linux.h
index 8d7284b37cf..72dace32254 100644
--- base/files/dir_reader_linux.h
+++ base/files/dir_reader_linux.h
@@ -62,7 +62,7 @@ class DirReaderLinux {
   bool Next() {
     if (size_) {
       linux_dirent* dirent = reinterpret_cast<linux_dirent*>(&buf_[offset_]);
-      offset_ += dirent->d_reclen;
+      offset_ += _DIRENT_RECLEN(dirent->d_namlen);
     }
 
     if (offset_ != size_)
