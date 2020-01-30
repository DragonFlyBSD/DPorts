--- ipc/chromium/src/base/platform_thread_posix.cc.orig	2016-09-05 23:12:53.000000000 +0300
+++ ipc/chromium/src/base/platform_thread_posix.cc
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
