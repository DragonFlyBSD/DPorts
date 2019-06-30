--- src/airserv-ng.c.orig	2018-12-09 22:53:44 UTC
+++ src/airserv-ng.c
@@ -34,7 +34,7 @@
 #include <stdarg.h>
 #include <signal.h>
 
-#ifdef __NetBSD__
+#if defined(__NetBSD__) || defined(__DragonFly__)
 #include <sys/select.h>
 #endif
 
