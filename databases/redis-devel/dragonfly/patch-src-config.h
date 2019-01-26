--- src/config.h.orig	2018-12-12 12:25:58 UTC
+++ src/config.h
@@ -78,7 +78,7 @@
 #define HAVE_EPOLL 1
 #endif
 
-#if (defined(__APPLE__) && defined(MAC_OS_X_VERSION_10_6)) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined (__NetBSD__)
+#if (defined(__APPLE__) && defined(MAC_OS_X_VERSION_10_6)) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined (__NetBSD__) || defined(__DragonFly__)
 #define HAVE_KQUEUE 1
 #endif
 
