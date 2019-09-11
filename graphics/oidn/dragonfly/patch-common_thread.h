--- common/thread.h.intermediate	2019-09-01 14:03:05.000000000 +0000
+++ common/thread.h
@@ -143,9 +143,13 @@ namespace oidn {
     void restore(int threadIndex);
   };
 
-#elif defined(__linux__) || defined(__FreeBSD__)
+#elif defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 
+#if defined(__FreeBSD__)
 #include <sys/cpuset.h>
+#elif defined(__DragonFly__)
+#include <pthread_np.h>
+#endif
 
   // --------------------------------------------------------------------------
   // ThreadAffinity - Linux
