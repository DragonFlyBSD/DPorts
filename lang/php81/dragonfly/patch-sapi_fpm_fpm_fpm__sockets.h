--- sapi/fpm/fpm/fpm_sockets.h.orig	2021-12-15 02:00:45 UTC
+++ sapi/fpm/fpm/fpm_sockets.h
@@ -14,7 +14,7 @@
 /*
   On FreeBSD and OpenBSD, backlog negative values are truncated to SOMAXCONN
 */
-#if defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #define FPM_BACKLOG_DEFAULT -1
 #else
 #define FPM_BACKLOG_DEFAULT 511
