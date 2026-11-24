--- passh.c.orig
+++ passh.c
@@ -26,7 +26,7 @@
  * - On OS X EI Capitan (10.11.6), definging _XOPEN_SOURCE=600 would cause
  *   SIGWINCH to be undefined.
  */
-#if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(_AIX)
+#if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__DragonFly__) && !defined(_AIX)
 #define _XOPEN_SOURCE 600 /* for posix_openpt() */
 #endif
 
