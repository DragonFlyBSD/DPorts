--- src/common/ittnotify/ittnotify_config.h.orig	2021-07-27 16:21:39.809652000 +0200
+++ src/common/ittnotify/ittnotify_config.h	2021-07-27 16:23:48.066731000 +0200
@@ -58,6 +58,10 @@
 #  define ITT_OS_OPENBSD   5
 #endif /* ITT_OS_OPENBSD */
 
+#ifndef ITT_OS_DRAGONFLY
+#  define ITT_OS_DRAGONFLY   6
+#endif /* ITT_OS_DRAGONFLY */
+
 #ifndef ITT_OS
 #  if defined WIN32 || defined _WIN32
 #    define ITT_OS ITT_OS_WIN
@@ -67,6 +71,8 @@
 #    define ITT_OS ITT_OS_FREEBSD
 #  elif defined( __OpenBSD__ )
 #    define ITT_OS ITT_OS_OPENBSD
+#  elif defined( __DragonFly__ )
+#    define ITT_OS ITT_OS_DRAGONFLY
 #  else
 #    define ITT_OS ITT_OS_LINUX
 #  endif
@@ -92,6 +98,10 @@
 #  define ITT_PLATFORM_OPENBSD 5
 #endif /* ITT_PLATFORM_OPENBSD */
 
+#ifndef ITT_PLATFORM_DRAGONFLY
+#  define ITT_PLATFORM_DRAGONFLY 6
+#endif /* ITT_PLATFORM_DRAGONFLY */
+
 #ifndef ITT_PLATFORM
 #  if ITT_OS==ITT_OS_WIN
 #    define ITT_PLATFORM ITT_PLATFORM_WIN
@@ -101,6 +111,8 @@
 #    define ITT_PLATFORM ITT_PLATFORM_FREEBSD
 #  elif ITT_OS==ITT_OS_OPENBSD
 #    define ITT_PLATFORM ITT_PLATFORM_OPENBSD
+#  elif ITT_OS==ITT_OS_DRAGONFLY
+#    define ITT_PLATFORM ITT_PLATFORM_DRAGONFLY
 #  else
 #    define ITT_PLATFORM ITT_PLATFORM_POSIX
 #  endif
