--- libgnu/signal.in.h.orig	2012-01-06 17:10:38.000000000 +0000
+++ libgnu/signal.in.h
@@ -61,7 +61,7 @@
    pthread_sigmask in <pthread.h>, not in <signal.h>.
    But avoid namespace pollution on glibc systems.*/
 #if (@GNULIB_PTHREAD_SIGMASK@ || defined GNULIB_POSIXCHECK) \
-    && ((defined __APPLE__ && defined __MACH__) || defined __FreeBSD__ || defined __OpenBSD__ || defined __osf__ || defined __sun) \
+    && ((defined __APPLE__ && defined __MACH__) || defined __DragonFly__ || defined __FreeBSD__ || defined __OpenBSD__ || defined __osf__ || defined __sun) \
     && ! defined __GLIBC__
 # include <pthread.h>
 #endif
