--- mbdyn/mbdyn.h.orig	2017-01-12 16:09:55 UTC
+++ mbdyn/mbdyn.h
@@ -50,7 +50,7 @@ typedef long int      Lint;
 typedef double        Real;
 
 /* signal types */
-#if defined(HAVE_SIGNAL) && !defined(__FreeBSD__)
+#if defined(HAVE_SIGNAL) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 #ifndef HAVE___SIGHANDLER_T
 #ifndef HAVE_SIGHANDLER_T
 typedef void (*__sighandler_t)(int);
