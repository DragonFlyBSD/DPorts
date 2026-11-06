--- tools/irsend.c.orig	2026-11-06 07:28:29 UTC
+++ tools/irsend.c
@@ -41,7 +41,7 @@
 #include <errno.h>
 #include <signal.h>
 #include <limits.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <netinet/in.h>
 #endif
 
