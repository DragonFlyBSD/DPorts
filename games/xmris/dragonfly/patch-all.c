--- all.c.orig	2026-11-06 02:42:36 UTC
+++ all.c
@@ -637,7 +637,7 @@ FUNCARG((stream),
  * returns the error string, or NULL
  */
 {
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
   extern int sys_nerr;
   extern char *sys_errlist[];
 #endif
