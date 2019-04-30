--- libgnu/signal.in.h.orig	2019-02-23 17:33:37 UTC
+++ libgnu/signal.in.h
@@ -59,7 +59,7 @@
    declare pthread_sigmask in <pthread.h>, not in <signal.h>.
    But avoid namespace pollution on glibc systems.*/
 #if (@GNULIB_PTHREAD_SIGMASK@ || defined GNULIB_POSIXCHECK) \
-    && ((defined __APPLE__ && defined __MACH__) \
+    && ((defined __APPLE__ && defined __MACH__) || defined __DragonFly__ \
         || defined __FreeBSD__ || defined __OpenBSD__ || defined __osf__ \
         || defined __sun || defined __ANDROID__) \
     && ! defined __GLIBC__
