diff --git base/threading/platform_thread_internal_posix.h base/threading/platform_thread_internal_posix.h
index 09c01e31d85a..06819b82ba30 100644
--- base/threading/platform_thread_internal_posix.h
+++ base/threading/platform_thread_internal_posix.h
@@ -10,6 +10,9 @@
 #include "base/base_export.h"
 #include "base/threading/platform_thread.h"
 #include "build/build_config.h"
+#if defined(OS_DRAGONFLY)
+#include <sys/rtprio.h>
+#endif
 
 namespace base {
 
