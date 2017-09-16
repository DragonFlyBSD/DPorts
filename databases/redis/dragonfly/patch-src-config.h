--- src/config.h.orig   2015-04-07 21:24:36.634829000 +0300
+++ src/config.h    2015-04-07 21:24:53.388849000 +0300
@@ -62,7 +62,7 @@
 #endif
 
 /* Test for backtrace() */
-#if defined(__APPLE__) || (defined(__linux__) && defined(__GLIBC__)) || defined(__FreeBSD__)
+#if defined(__APPLE__) || (defined(__linux__) && defined(__GLIBC__)) || defined(__FreeBSD__) || defined(__DragonFly__)
 #define HAVE_BACKTRACE 1
 #endif
 
@@ -77,7 +77,7 @@
 #endif
 
-#if (defined(__APPLE__) && defined(MAC_OS_X_VERSION_10_6)) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined (__NetBSD__)
+#if (defined(__APPLE__) && defined(MAC_OS_X_VERSION_10_6)) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined (__NetBSD__) || defined(__DragonFly__)
 #define HAVE_KQUEUE 1
 #endif
 
 #ifdef __sun
 
