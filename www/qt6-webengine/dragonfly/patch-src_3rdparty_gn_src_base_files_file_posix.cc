diff --git src/3rdparty/gn/src/base/files/file_posix.cc src/3rdparty/gn/src/base/files/file_posix.cc
index 8c6d8d4b9fa..c8aa2ded689 100644
--- src/3rdparty/gn/src/base/files/file_posix.cc
+++ src/3rdparty/gn/src/base/files/file_posix.cc
@@ -371,7 +371,7 @@ void File::DoInitialize(const FilePath& path, uint32_t flags) {
 bool File::Flush() {
   DCHECK(IsValid());
 
-#if defined(OS_LINUX) || defined(OS_BSD)
+#if defined(OS_LINUX) || defined(OS_BSD) && !defined(OS_DRAGONFLY)
   return !HANDLE_EINTR(fdatasync(file_.get()));
 #else
   return !HANDLE_EINTR(fsync(file_.get()));
