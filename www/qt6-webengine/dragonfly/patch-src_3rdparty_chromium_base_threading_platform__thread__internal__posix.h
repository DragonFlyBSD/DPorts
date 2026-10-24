--- src/3rdparty/chromium/base/threading/platform_thread_internal_posix.h.orig	2026-05-08 07:54:08 UTC
+++ src/3rdparty/chromium/base/threading/platform_thread_internal_posix.h
@@ -10,6 +10,9 @@
 #include "base/base_export.h"
 #include "base/threading/platform_thread.h"
 #include "build/build_config.h"
+#if defined(OS_DRAGONFLY)
+#include <sys/rtprio.h>
+#endif
 
 namespace base {
 
