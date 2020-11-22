--- src/aircrack-util/cpuset_pthread.c.orig	2018-12-09 22:53:44 UTC
+++ src/aircrack-util/cpuset_pthread.c
@@ -37,6 +37,9 @@
 #include <assert.h>
 #include <limits.h>
 #include <pthread.h>
+#if defined(__DragonFly__)
+#include <pthread_np.h>
+#endif
 #include <stdlib.h>
 #include <sys/types.h>
 
