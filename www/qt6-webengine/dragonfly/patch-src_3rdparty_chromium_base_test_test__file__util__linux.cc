--- src/3rdparty/chromium/base/test/test_file_util_linux.cc.intermediate	2026-09-17 07:06:56 UTC
+++ src/3rdparty/chromium/base/test/test_file_util_linux.cc
@@ -54,7 +54,11 @@ bool EvictFileFromSystemCache(const FilePath& file) {
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
