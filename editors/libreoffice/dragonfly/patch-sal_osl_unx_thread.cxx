--- sal/osl/unx/thread.cxx.orig	2021-09-08 17:53:20 UTC
+++ sal/osl/unx/thread.cxx
@@ -30,6 +30,9 @@
 #if defined(OPENBSD)
 #include <sched.h>
 #endif
+#ifdef __DragonFly__
+#include <pthread_np.h>
+#endif
 #ifdef __FreeBSD__
 #if __FreeBSD_version <= 1201517
 #include <pthread_np.h>
@@ -573,7 +576,7 @@ void SAL_CALL osl_setThreadName(char con
     int err = pthread_setname_np( pthread_self(), shortname );
     if ( 0 != err )
         SAL_WARN("sal.osl", "pthread_setname_np failed with errno " << err);
-#elif defined __FreeBSD__
+#elif defined __FreeBSD__ || defined __DragonFly__
     pthread_setname_np( pthread_self(), name );
 #elif defined MACOSX || defined IOS
     pthread_setname_np( name );
