--- src/3rdparty/chromium/third_party/perfetto/include/perfetto/ext/base/thread_utils.h.intermediate	2020-04-21 17:37:26 UTC
+++ src/3rdparty/chromium/third_party/perfetto/include/perfetto/ext/base/thread_utils.h
@@ -33,7 +33,8 @@
 #include <sys/types.h>
 #include <unistd.h>
 #endif
-#if PERFETTO_BUILDFLAG(PERFETTO_OS_FREEBSD)
+#if PERFETTO_BUILDFLAG(PERFETTO_OS_FREEBSD) || \
+  PERFETTO_BUILDFLAG(PERFETTO_OS_DRAGONFLY)
 #include <pthread_np.h>
 #endif
 
@@ -45,7 +46,8 @@ using PlatformThreadID = pid_t;
 inline PlatformThreadID GetThreadId() {
   return gettid();
 }
-#elif PERFETTO_BUILDFLAG(PERFETTO_OS_FREEBSD)
+#elif PERFETTO_BUILDFLAG(PERFETTO_OS_FREEBSD) || \
+  PERFETTO_BUILDFLAG(PERFETTO_OS_DRAGONFLY)
 using PlatformThreadID = int;
 inline PlatformThreadID GetThreadId() {
   return pthread_getthreadid_np();
