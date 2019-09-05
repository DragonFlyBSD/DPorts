--- src/cpu/jit_utils/jitprofiling/ittnotify_config.h.orig	2019-07-26 00:33:10 UTC
+++ src/cpu/jit_utils/jitprofiling/ittnotify_config.h
@@ -54,6 +54,10 @@
 #  define ITT_OS_FREEBSD   4
 #endif /* ITT_OS_FREEBSD */
 
+#ifndef ITT_OS_DRAGONFLY
+#  define ITT_OS_DRAGONFLY   9
+#endif /* ITT_OS_DRAGONFLY */
+
 #ifndef ITT_OS
 #  if defined WIN32 || defined _WIN32
 #    define ITT_OS ITT_OS_WIN
@@ -61,6 +65,8 @@
 #    define ITT_OS ITT_OS_MAC
 #  elif defined( __FreeBSD__ )
 #    define ITT_OS ITT_OS_FREEBSD
+#  elif defined( __DragonFly__ )
+#    define ITT_OS ITT_OS_DRAGONFLY
 #  else
 #    define ITT_OS ITT_OS_LINUX
 #  endif
@@ -82,6 +88,10 @@
 #  define ITT_PLATFORM_FREEBSD 4
 #endif /* ITT_PLATFORM_FREEBSD */
 
+#ifndef ITT_PLATFORM_DRAGONFLY
+#  define ITT_PLATFORM_DRAGONFLY 9
+#endif /* ITT_PLATFORM_DRAGONFLY */
+
 #ifndef ITT_PLATFORM
 #  if ITT_OS==ITT_OS_WIN
 #    define ITT_PLATFORM ITT_PLATFORM_WIN
@@ -89,6 +99,8 @@
 #    define ITT_PLATFORM ITT_PLATFORM_MAC
 #  elif ITT_OS==ITT_OS_FREEBSD
 #    define ITT_PLATFORM ITT_PLATFORM_FREEBSD
+#  elif ITT_OS==ITT_OS_DRAGONFLY
+#    define ITT_PLATFORM ITT_PLATFORM_DRAGONFLY
 #  else
 #    define ITT_PLATFORM ITT_PLATFORM_POSIX
 #  endif
