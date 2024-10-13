--- src/glog/platform.h.orig	2024-10-06 14:08:39.604460000 +0200
+++ src/glog/platform.h	2024-10-06 14:09:03.804859000 +0200
@@ -45,6 +45,8 @@
 #  endif
 #elif defined(macintosh) || defined(__APPLE__) || defined(__APPLE_CC__)
 #  define GLOG_OS_MACOSX
+#elif defined(__DragonFly__)
+#  define GLOG_OS_DRAGOFLY
 #elif defined(__FreeBSD__)
 #  define GLOG_OS_FREEBSD
 #elif defined(__NetBSD__)
