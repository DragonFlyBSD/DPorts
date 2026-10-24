--- lib/senna_in.h.orig
+++ lib/senna_in.h
@@ -27,7 +27,7 @@
 /* #define __USE_XOPEN2K 1 */
 #define _XOPEN_SOURCE 600
 #else
-#if !defined(__APPLE__) && !defined(__FreeBSD__)
+#if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 #define _XOPEN_SOURCE 500
 #endif
 #endif /* USE_AIO */
