--- third_party/ittapi/src/ittnotify/ittnotify_config.h.orig
+++ third_party/ittapi/src/ittnotify/ittnotify_config.h
@@ -32,7 +32,7 @@
 #    define ITT_OS ITT_OS_WIN
 #  elif defined( __APPLE__ ) && defined( __MACH__ )
 #    define ITT_OS ITT_OS_MAC
-#  elif defined( __FreeBSD__ )
+#  elif defined( __FreeBSD__ ) || defined( __DragonFly__ )
 #    define ITT_OS ITT_OS_FREEBSD
 #  elif defined( __OpenBSD__ )
 #    define ITT_OS ITT_OS_OPENBSD
