--- third_party/tbb/src/tbb/tools_api/ittnotify_config.h.orig	2023-05-08 19:58:19 UTC
+++ third_party/tbb/src/tbb/tools_api/ittnotify_config.h
@@ -38,6 +38,10 @@
 #  define ITT_OS_FREEBSD   4
 #endif /* ITT_OS_FREEBSD */
 
+#ifndef ITT_OS_DRAGONFLY
+#  define ITT_OS_DRAGONFLY   5
+#endif /* ITT_OS_DRAGONFLY */
+
 #ifndef ITT_OS
 #  if defined WIN32 || defined _WIN32
 #    define ITT_OS ITT_OS_WIN
@@ -45,6 +49,8 @@
 #    define ITT_OS ITT_OS_MAC
 #  elif defined( __FreeBSD__ )
 #    define ITT_OS ITT_OS_FREEBSD
+#  elif defined( __DragonFly__ )
+#    define ITT_OS ITT_OS_DRAGONFLY
 #  else
 #    define ITT_OS ITT_OS_LINUX
 #  endif
@@ -66,6 +72,10 @@
 #  define ITT_PLATFORM_FREEBSD 4
 #endif /* ITT_PLATFORM_FREEBSD */
 
+#ifndef ITT_PLATFORM_DRAGONFLY
+#  define ITT_PLATFORM_DRAGONFLY 5
+#endif /* ITT_PLATFORM_DRAGONFLY */
+
 #ifndef ITT_PLATFORM
 #  if ITT_OS==ITT_OS_WIN
 #    define ITT_PLATFORM ITT_PLATFORM_WIN
@@ -73,6 +83,8 @@
 #    define ITT_PLATFORM ITT_PLATFORM_MAC
 #  elif ITT_OS==ITT_OS_FREEBSD
 #    define ITT_PLATFORM ITT_PLATFORM_FREEBSD
+#  elif ITT_OS==ITT_OS_DRAGONFLY
+#    define ITT_PLATFORM ITT_PLATFORM_DRAGONFLY
 #  else
 #    define ITT_PLATFORM ITT_PLATFORM_POSIX
 #  endif
