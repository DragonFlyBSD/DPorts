diff --git third_party/perfetto/src/base/file_utils.cc third_party/perfetto/src/base/file_utils.cc
index 0969515e67d..f518323c298 100644
--- third_party/perfetto/src/base/file_utils.cc
+++ third_party/perfetto/src/base/file_utils.cc
@@ -205,7 +205,8 @@ bool FlushFile(int fd) {
 #if PERFETTO_BUILDFLAG(PERFETTO_OS_LINUX) || \
     PERFETTO_BUILDFLAG(PERFETTO_OS_ANDROID)
   return !PERFETTO_EINTR(fdatasync(fd));
-#elif PERFETTO_BUILDFLAG(PERFETTO_OS_WIN)
+#endif
+#if PERFETTO_BUILDFLAG(PERFETTO_OS_WIN)
   return !PERFETTO_EINTR(_commit(fd));
 #else
   return !PERFETTO_EINTR(fsync(fd));
