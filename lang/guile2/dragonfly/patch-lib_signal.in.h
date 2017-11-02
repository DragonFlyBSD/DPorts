--- lib/signal.in.h.orig	2016-12-15 02:03:33.000000000 +0200
+++ lib/signal.in.h
@@ -60,7 +60,7 @@
    But avoid namespace pollution on glibc systems.*/
 #if (@GNULIB_PTHREAD_SIGMASK@ || defined GNULIB_POSIXCHECK) \
     && ((defined __APPLE__ && defined __MACH__) \
-        || defined __FreeBSD__ || defined __OpenBSD__ || defined __osf__ \
+        || defined __FreeBSD__ || defined __OpenBSD__ || defined __osf__ || defined __DragonFly__ \
         || defined __sun || defined __ANDROID__) \
     && ! defined __GLIBC__
 # include <pthread.h>
