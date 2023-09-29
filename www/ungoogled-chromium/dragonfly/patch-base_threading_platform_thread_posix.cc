diff --git base/threading/platform_thread_posix.cc base/threading/platform_thread_posix.cc
index d17fcfa838d..61bb797b4f1 100644
--- base/threading/platform_thread_posix.cc
+++ base/threading/platform_thread_posix.cc
@@ -14,6 +14,10 @@
 #include <sys/types.h>
 #include <unistd.h>
 
+#if defined(OS_DRAGONFLY)
+#include <pthread_np.h>
+#endif
+
 #include <memory>
 #include <tuple>
 
