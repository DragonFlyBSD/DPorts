diff --git base/test/test_file_util_linux.cc base/test/test_file_util_linux.cc
index f95a04ba3fa..3dc5b3855f3 100644
--- base/test/test_file_util_linux.cc
+++ base/test/test_file_util_linux.cc
@@ -52,7 +52,11 @@ bool EvictFileFromSystemCache(const FilePath& file) {
   ScopedFD fd(open(file.value().c_str(), O_RDONLY));
   if (!fd.is_valid())
     return false;
+#if (OS_DRAGONFLY)
+  if (fsync(fd.get()) != 0)
+#else
   if (fdatasync(fd.get()) != 0)
+#endif
     return false;
 #if !BUILDFLAG(IS_BSD)
   if (posix_fadvise(fd.get(), 0, 0, POSIX_FADV_DONTNEED) != 0)
