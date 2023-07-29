--- sapi/fpm/fpm/fpm_sockets.h.orig	2022-06-07 15:53:41 UTC
+++ sapi/fpm/fpm/fpm_sockets.h
@@ -14,7 +14,7 @@
 /*
   On Linux, FreeBSD, OpenBSD and macOS, backlog negative values are truncated to SOMAXCONN
 */
-#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__linux__) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__linux__) || defined(__APPLE__) || defined(__DragonFly__)
 #define FPM_BACKLOG_DEFAULT -1
 #else
 #define FPM_BACKLOG_DEFAULT 511
