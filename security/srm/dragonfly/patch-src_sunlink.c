--- src/sunlink.c.orig	2014-01-13 22:45:59.000000000 +0200
+++ src/sunlink.c
@@ -100,7 +100,7 @@ static volatile int SIGINT_received = 0;
 #if defined(__linux__) && !defined(__USE_GNU)
 typedef __sighandler_t sighandler_t;
 #endif
-#if defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 typedef sig_t sighandler_t;
 #endif
 
@@ -794,7 +794,7 @@ next_ads:
 
 #if defined(__linux__)
     srm.buffer_size = fs_stats.f_bsize;
-#elif defined(__FreeBSD__) || defined(__APPLE__)
+#elif defined(__DragonFly__) || defined(__FreeBSD__) || defined(__APPLE__)
     srm.buffer_size = fs_stats.f_iosize;
 #else
 #error Please define your platform.
