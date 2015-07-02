--- lib/signal.in.h.orig	2014-02-14 22:00:33 UTC
+++ lib/signal.in.h
@@ -59,7 +59,7 @@
    pthread_sigmask in <pthread.h>, not in <signal.h>.
    But avoid namespace pollution on glibc systems.*/
 #if (@GNULIB_PTHREAD_SIGMASK@ || defined GNULIB_POSIXCHECK) \
-    && ((defined __APPLE__ && defined __MACH__) || defined __FreeBSD__ || defined __OpenBSD__ || defined __osf__ || defined __sun) \
+    && ((defined __APPLE__ && defined __MACH__) || defined __FreeBSD__ || defined __OpenBSD__ || defined __DragonFly__ || defined __osf__ || defined __sun) \
     && ! defined __GLIBC__
 # include <pthread.h>
 #endif
