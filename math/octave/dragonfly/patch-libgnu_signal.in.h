--- libgnu/signal.in.h.orig	2023-05-03 12:31:45.194899000 +0200
+++ libgnu/signal.in.h	2023-05-03 12:32:20.805500000 +0200
@@ -66,6 +66,7 @@
    But avoid namespace pollution on glibc systems.*/
 #if (@GNULIB_PTHREAD_SIGMASK@ || defined GNULIB_POSIXCHECK) \
     && ((defined __APPLE__ && defined __MACH__) \
+        || defined(__DragonFly__) \
         || (defined __FreeBSD__ && __FreeBSD__ < 8) \
         || (defined __OpenBSD__ && OpenBSD < 201205) \
         || defined __osf__ || defined __sun || defined __ANDROID__ \
