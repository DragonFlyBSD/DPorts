--- include/xincs.h.orig	2016-11-10 02:47:58.000000000 +0200
+++ include/xincs.h
@@ -201,6 +201,9 @@
 #include <semaphore.h>
 #endif
 #if defined(HAVE_PTHREAD_SETAFFINITY_NP)
+#if defined(__DragonFly__)
+#include <pthread_np.h>
+#endif
 #if defined(__FreeBSD__)
 #include <osreldate.h>
 #if __FreeBSD_version >= 702000
