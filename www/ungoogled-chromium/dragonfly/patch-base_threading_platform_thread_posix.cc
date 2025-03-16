diff --git base/threading/platform_thread_posix.cc base/threading/platform_thread_posix.cc
index dab12e7fa88e..7aec576a9774 100644
--- base/threading/platform_thread_posix.cc
+++ base/threading/platform_thread_posix.cc
@@ -13,6 +13,10 @@
 #include <sys/types.h>
 #include <unistd.h>
 
+#if defined(OS_DRAGONFLY)
+#include <pthread_np.h>
+#endif
+
 #include <memory>
 #include <tuple>
 
