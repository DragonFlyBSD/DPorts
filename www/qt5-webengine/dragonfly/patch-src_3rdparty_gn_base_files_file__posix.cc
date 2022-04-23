--- src/3rdparty/gn/base/files/file_posix.cc.intermediate	2019-12-19 23:45:29 UTC
+++ src/3rdparty/gn/base/files/file_posix.cc
@@ -414,7 +414,7 @@ void File::DoInitialize(const FilePath&
 bool File::Flush() {
   DCHECK(IsValid());
 
-#if defined(OS_LINUX) || defined(OS_BSD)
+#if defined(OS_LINUX) || defined(OS_BSD) && !defined(__DragonFly__)
   return !HANDLE_EINTR(fdatasync(file_.get()));
 #else
   return !HANDLE_EINTR(fsync(file_.get()));
