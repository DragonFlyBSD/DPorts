diff --git tools/gn/src/base/files/file_posix.cc tools/gn/src/base/files/file_posix.cc
index 82f6f9a5a5c3..a09f153ee6da 100644
--- tools/gn/src/base/files/file_posix.cc
+++ tools/gn/src/base/files/file_posix.cc
@@ -359,7 +359,7 @@ void File::DoInitialize(const FilePath& path, uint32_t flags) {
 bool File::Flush() {
   DCHECK(IsValid());
 
-#if defined(OS_LINUX) || defined(OS_BSD)
+#if defined(OS_LINUX) || defined(OS_BSD) && !defined(OS_DRAGONFLY)
   return !HANDLE_EINTR(fdatasync(file_.get()));
 #else
   return !HANDLE_EINTR(fsync(file_.get()));
