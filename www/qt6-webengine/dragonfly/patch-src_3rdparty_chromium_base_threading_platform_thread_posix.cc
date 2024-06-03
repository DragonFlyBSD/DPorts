diff --git base/threading/platform_thread_posix.cc base/threading/platform_thread_posix.cc
index f24e84bbe78..ed790873381 100644
--- src/3rdparty/chromium/base/threading/platform_thread_posix.cc
+++ src/3rdparty/chromium/base/threading/platform_thread_posix.cc
@@ -14,6 +14,10 @@
 #include <sys/types.h>
 #include <unistd.h>
 
+#if defined(OS_DRAGONFLY)
+#include <pthread_np.h>
+#endif
+
 #include <memory>
 #include <tuple>
 
