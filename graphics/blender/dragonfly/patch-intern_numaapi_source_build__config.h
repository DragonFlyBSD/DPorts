--- intern/numaapi/source/build_config.h.orig	2019-07-22 13:32:27 UTC
+++ intern/numaapi/source/build_config.h
@@ -75,6 +75,8 @@
 #  define OS_IRIX 1
 #elif defined(_WIN32)
 #  define OS_WIN 1
+#elif defined(__DragonFly__)
+#  define OS_DRAGONFLY 1
 #elif defined(__FreeBSD__)
 #  define OS_FREEBSD 1
 #elif defined(__NetBSD__)
@@ -122,6 +124,9 @@
 #if !defined(OS_WIN)
 #  define OS_WIN 0
 #endif
+#if !defined(OS_DRAGONFLY)
+#  define OS_DRAGONFLY 0
+#endif
 #if !defined(OS_FREEBSD)
 #  define OS_FREEBSD 0
 #endif
@@ -143,7 +148,7 @@
 //
 // For access to standard BSD features, use OS_BSD instead of a
 // more specific macro.
-#if OS_FREEBSD || OS_OPENBSD || OS_NETBSD
+#if OS_FREEBSD || OS_OPENBSD || OS_NETBSD || OS_DRAGONFLY
 #  define OS_BSD 1
 #else
 #  define OS_BSD 0
