--- src/easylogging++.h.orig
+++ src/easylogging++.h
@@ -90,7 +90,7 @@
 #else
 #  define ELPP_OS_MAC 0
 #endif
-#if (defined(__FreeBSD__) || defined(__FreeBSD_kernel__))
+#if (defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__))
 #  define ELPP_OS_FREEBSD 1
 #else
 #  define ELPP_OS_FREEBSD 0
