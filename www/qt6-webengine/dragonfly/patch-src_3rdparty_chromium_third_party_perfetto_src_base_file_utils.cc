diff --git third_party/perfetto/src/base/file_utils.cc third_party/perfetto/src/base/file_utils.cc
index ce4584c7fe0..f30917c2af3 100644
--- src/3rdparty/chromium/third_party/perfetto/src/base/file_utils.cc
+++ src/3rdparty/chromium/third_party/perfetto/src/base/file_utils.cc
@@ -163,7 +163,8 @@ bool FlushFile(int fd) {
 #if PERFETTO_BUILDFLAG(PERFETTO_OS_LINUX) || \
     PERFETTO_BUILDFLAG(PERFETTO_OS_ANDROID)
   return !PERFETTO_EINTR(fdatasync(fd));
-#elif PERFETTO_BUILDFLAG(PERFETTO_OS_WIN)
+#endif
+#if PERFETTO_BUILDFLAG(PERFETTO_OS_WIN)
   return !PERFETTO_EINTR(_commit(fd));
 #else
   return !PERFETTO_EINTR(fsync(fd));
