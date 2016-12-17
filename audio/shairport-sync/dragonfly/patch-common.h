--- common.h.orig	2016-10-10 21:06:57.000000000 +0300
+++ common.h
@@ -18,7 +18,7 @@
 #endif
 #endif
 
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__CYGWIN__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__CYGWIN__) || defined(__DragonFly__)
 /* Linux and FreeBSD */
 #define COMPILE_FOR_LINUX_AND_FREEBSD_AND_CYGWIN 1
 #endif
