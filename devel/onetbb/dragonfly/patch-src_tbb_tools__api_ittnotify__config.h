--- src/tbb/tools_api/ittnotify_config.h.orig	2021-10-04 09:50:18 UTC
+++ src/tbb/tools_api/ittnotify_config.h
@@ -39,7 +39,7 @@
 #    define ITT_OS ITT_OS_WIN
 #  elif defined( __APPLE__ ) && defined( __MACH__ )
 #    define ITT_OS ITT_OS_MAC
-#  elif defined( __FreeBSD__ )
+#  elif defined( __FreeBSD__ ) || defined(__DragonFly__)
 #    define ITT_OS ITT_OS_FREEBSD
 #  else
 #    define ITT_OS ITT_OS_LINUX
