--- lib/util.c.c	2015-09-11 18:30:41.000000000 +0300
+++ lib/util.c
@@ -242,6 +242,9 @@ int set_cpu(uint32_t core)
 #define cpu_set_t cpuset_t
 #endif
 
+#if defined(__DragonFly__)
+#include <pthread_np.h>
+#endif
 
 int set_cpu(uint32_t core)
 {
