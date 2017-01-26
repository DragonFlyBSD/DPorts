--- mozilla/ipc/chromium/src/base/platform_thread_posix.cc.orig	2016-12-23 06:04:03.000000000 +0200
+++ mozilla/ipc/chromium/src/base/platform_thread_posix.cc
@@ -14,6 +14,11 @@
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
