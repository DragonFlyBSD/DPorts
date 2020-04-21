--- src/3rdparty/chromium/third_party/perfetto/src/base/file_utils.cc.orig	2019-11-27 21:12:25 UTC
+++ src/3rdparty/chromium/third_party/perfetto/src/base/file_utils.cc
@@ -88,8 +88,9 @@ ssize_t WriteAll(int fd, const void* buf
 
 bool FlushFile(int fd) {
   PERFETTO_DCHECK(fd != 0);
-#if PERFETTO_BUILDFLAG(PERFETTO_OS_LINUX) || \
-    PERFETTO_BUILDFLAG(PERFETTO_OS_ANDROID)
+#if (PERFETTO_BUILDFLAG(PERFETTO_OS_LINUX) ||	\
+     PERFETTO_BUILDFLAG(PERFETTO_OS_ANDROID)) && \
+  !PERFETTO_BUILDFLAG(PERFETTO_OS_DRAGONFLY)
   return !PERFETTO_EINTR(fdatasync(fd));
 #elif PERFETTO_BUILDFLAG(PERFETTO_OS_WIN)
   return !PERFETTO_EINTR(_commit(fd));
