--- ipc/chromium/src/base/platform_thread_posix.cc.orig	2019-05-07 13:53:02 UTC
+++ ipc/chromium/src/base/platform_thread_posix.cc
@@ -18,6 +18,11 @@
 #  include <sys/prctl.h>
 #endif
 
+#if defined(OS_DRAGONFLY)
+#include <sys/param.h>
+#include <sys/lwp.h>
+#endif
+
 #if !defined(OS_MACOSX)
 #  include <unistd.h>
 #endif
