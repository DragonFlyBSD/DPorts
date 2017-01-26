--- mozilla/ipc/chromium/src/base/platform_thread_posix.cc.orig	2016-12-14 04:07:49.000000000 +0200
+++ mozilla/ipc/chromium/src/base/platform_thread_posix.cc
@@ -16,6 +16,11 @@
 #elif defined(OS_LINUX)
 #include <sys/syscall.h>
 #include <sys/prctl.h>
+#elif defined(OS_DRAGONFLY)
+#include <sys/param.h>
+#if __DragonFly_version >= 400709
+#include <sys/lwp.h>
+#endif
 #endif
 
 #if !defined(OS_MACOSX)
