--- base/threading/platform_thread_posix.cc.orig	2026-09-19 22:41:55 UTC
+++ base/threading/platform_thread_posix.cc
@@ -16,6 +16,10 @@
 #include <sys/types.h>
 #include <unistd.h>
 
+#if defined(OS_DRAGONFLY)
+#include <pthread_np.h>
+#endif
+
 #include <memory>
 #include <tuple>
 
@@ -277,6 +281,8 @@
   return PlatformThreadId(pthread_self());
 #elif BUILDFLAG(IS_OPENBSD)
   return PlatformThreadId(static_cast<uint64_t>(getthrid()));
+#elif BUILDFLAG(IS_DRAGONFLY)
+  return PlatformThreadId(static_cast<uint64_t>(lwp_gettid()));
 #elif BUILDFLAG(IS_FREEBSD)
   return PlatformThreadId(static_cast<uint64_t>(pthread_getthreadid_np()));
 #elif BUILDFLAG(IS_POSIX) && !BUILDFLAG(IS_AIX)
