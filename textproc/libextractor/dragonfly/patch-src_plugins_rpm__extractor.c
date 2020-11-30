--- src/plugins/rpm_extractor.c.orig	2018-06-20 20:02:55 UTC
+++ src/plugins/rpm_extractor.c
@@ -30,9 +30,8 @@
 #include <rpm/rpmlog.h>
 #if SOMEBSD
 #include <pthread_np.h>
-#else
-#include <pthread.h>
 #endif
+#include <pthread.h>
 #include <sys/types.h>
 #include <signal.h>
 
