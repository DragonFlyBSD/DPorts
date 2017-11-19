--- src/FCConfig.h.orig	2017-11-19 22:15:37 UTC
+++ src/FCConfig.h
@@ -74,7 +74,7 @@
 #   ifndef FC_OS_LINUX
 #   define FC_OS_LINUX
 #   endif
-#elif defined(__NetBSD__) || defined(__FreeBSD__) || defined(__OpenBSD__)
+#elif defined(__NetBSD__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined __DragonFly__
 #   ifndef FC_OS_BSD
 #   define FC_OS_BSD
 #   endif
