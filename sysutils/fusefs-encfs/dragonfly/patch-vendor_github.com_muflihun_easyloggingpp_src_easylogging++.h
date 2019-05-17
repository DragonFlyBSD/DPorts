--- vendor/github.com/muflihun/easyloggingpp/src/easylogging++.h.orig	2018-04-27 08:52:22 UTC
+++ vendor/github.com/muflihun/easyloggingpp/src/easylogging++.h
@@ -93,7 +93,7 @@
 #else
 #  define ELPP_OS_MAC 0
 #endif
-#if (defined(__FreeBSD__))
+#if (defined(__FreeBSD__) || defined(__DragonFly__))
 #  define ELPP_OS_FREEBSD 1
 #else
 #  define ELPP_OS_FREEBSD 0
