--- chkdirs.c.orig	2017-06-07 12:16:49 UTC
+++ chkdirs.c
@@ -27,7 +27,7 @@
 
 */
 
-#if defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__sun) || defined (hpux) || defined (__bsdi__) || defined (bsdi) || defined (__APPLE__)
+#if defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__sun) || defined (hpux) || defined (__bsdi__) || defined (bsdi) || defined (__APPLE__) || defined(__DragonFly__)
 #include <limits.h>
 #elif defined(__APPLE__) && defined(__MACH__)
 #include <sys/syslimits.h>
