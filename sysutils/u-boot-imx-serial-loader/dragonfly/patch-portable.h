--- portable.h.orig	2016-12-27 15:30:43 UTC
+++ portable.h
@@ -25,7 +25,7 @@ extern int debugmode;
 #ifdef __linux__
 #include <linux/limits.h>
 #endif
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/param.h>
 #endif
 
