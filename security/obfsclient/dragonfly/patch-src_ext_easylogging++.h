--- src/ext/easylogging++.h.intermediate	2016-08-16 13:34:59 UTC
+++ src/ext/easylogging++.h
@@ -79,7 +79,7 @@
 #   define _ELPP_OS_MAC 0
 #endif  // defined(__APPLE__)
 // FreeBSD
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #   define _ELPP_OS_FREEBSD 1
 #else
 #   define _ELPP_OS_FREEBSD 0
