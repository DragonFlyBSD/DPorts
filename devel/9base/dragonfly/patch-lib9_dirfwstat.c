--- lib9/dirfwstat.c.orig	2010-06-04 13:46:05.000000000 +0300
+++ lib9/dirfwstat.c
@@ -4,7 +4,7 @@
 #include <sys/time.h>
 #include <sys/stat.h>
 
-#if defined(__FreeBSD__) || defined(__APPLE__) || defined(__OpenBSD__) || defined(__linux__)
+#if defined(__FreeBSD__) || defined(__APPLE__) || defined(__OpenBSD__) || defined(__DragonFly__) || defined(__linux__)
 /* do nothing -- futimes exists and is fine */
 
 #elif defined(__SunOS5_9__)
