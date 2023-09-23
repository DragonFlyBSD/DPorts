diff --git third_party/perfetto/src/base/file_utils.cc third_party/perfetto/src/base/file_utils.cc
index e7d4c9464fe..e97016fdf99 100644
--- third_party/perfetto/src/base/file_utils.cc
+++ third_party/perfetto/src/base/file_utils.cc
@@ -192,7 +192,8 @@ bool FlushFile(int fd) {
 #if PERFETTO_BUILDFLAG(PERFETTO_OS_LINUX) || \
     PERFETTO_BUILDFLAG(PERFETTO_OS_ANDROID)
   return !PERFETTO_EINTR(fdatasync(fd));
-#elif PERFETTO_BUILDFLAG(PERFETTO_OS_WIN)
+#endif
+#if PERFETTO_BUILDFLAG(PERFETTO_OS_WIN)
   return !PERFETTO_EINTR(_commit(fd));
 #else
   return !PERFETTO_EINTR(fsync(fd));
