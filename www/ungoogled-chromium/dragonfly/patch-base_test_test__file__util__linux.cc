diff --git base/test/test_file_util_linux.cc base/test/test_file_util_linux.cc
index b964af69dc8c..9ffb5c7190a4 100644
--- base/test/test_file_util_linux.cc
+++ base/test/test_file_util_linux.cc
@@ -53,7 +53,11 @@ bool EvictFileFromSystemCache(const FilePath& file) {
   if (!fd.is_valid()) {
     return false;
   }
+#if (OS_DRAGONFLY)
+  if (fsync(fd.get()) != 0) {
+#else
   if (fdatasync(fd.get()) != 0) {
+#endif
     return false;
   }
 #if !BUILDFLAG(IS_BSD)
