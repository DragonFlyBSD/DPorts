--- src/ext-libnss-bsd.c.orig	2026-09-01 21:20:00 UTC
+++ src/ext-libnss-bsd.c
@@ -18,7 +18,7 @@
 
 /* Original author: Bruce M. Simpson <bms@FreeBSD.org> */
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 
 #include <sys/param.h>
 #include <sys/types.h>
