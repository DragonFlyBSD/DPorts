diff --git base/threading/platform_thread_internal_posix.h base/threading/platform_thread_internal_posix.h
index 120abaeb311..a3d5200335f 100644
--- base/threading/platform_thread_internal_posix.h
+++ base/threading/platform_thread_internal_posix.h
@@ -9,6 +9,9 @@
 #include "base/threading/platform_thread.h"
 #include "build/build_config.h"
 #include "third_party/abseil-cpp/absl/types/optional.h"
+#if defined(OS_DRAGONFLY)
+#include <sys/rtprio.h>
+#endif
 
 namespace base {
 
