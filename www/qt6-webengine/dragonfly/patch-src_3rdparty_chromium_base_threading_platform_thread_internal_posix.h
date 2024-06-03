diff --git base/threading/platform_thread_internal_posix.h base/threading/platform_thread_internal_posix.h
index cfcb1fe5117..18abdd74371 100644
--- src/3rdparty/chromium/base/threading/platform_thread_internal_posix.h
+++ src/3rdparty/chromium/base/threading/platform_thread_internal_posix.h
@@ -9,6 +9,9 @@
 #include "base/threading/platform_thread.h"
 #include "build/build_config.h"
 #include "third_party/abseil-cpp/absl/types/optional.h"
+#if defined(OS_DRAGONFLY)
+#include <sys/rtprio.h>
+#endif
 
 namespace base {
 
