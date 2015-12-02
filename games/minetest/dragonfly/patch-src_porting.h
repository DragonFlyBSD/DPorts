--- src/porting.h.orig	2015-02-18 19:50:37.000000000 +0200
+++ src/porting.h
@@ -321,7 +321,7 @@
 		 */
 		prctl(PR_SET_NAME, name);
 	}
-#elif defined(__FreeBSD__) || defined(__OpenBSD__)
+#elif defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 	#include <pthread.h>
 	#include <pthread_np.h>
 
