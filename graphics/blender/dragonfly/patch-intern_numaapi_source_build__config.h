--- intern/numaapi/source/build_config.h.orig	2020-02-12 10:15:01 UTC
+++ intern/numaapi/source/build_config.h
@@ -85,6 +85,8 @@
 #  define OS_WIN 1
 #elif defined(__Fuchsia__)
 #  define OS_FUCHSIA 1
+#elif defined(__DragonFly__)
+#  define OS_DRAGONFLY 1
 #elif defined(__FreeBSD__)
 #  define OS_FREEBSD 1
 #elif defined(__NetBSD__)
@@ -146,6 +148,9 @@
 #if !defined(OS_FUCHSIA)
 #  define OS_FUCHSIA 0
 #endif
+#if !defined(OS_DRAGONFLY)
+#  define OS_DRAGONFLY 0
+#endif
 #if !defined(OS_FREEBSD)
 #  define OS_FREEBSD 0
 #endif
@@ -167,7 +172,7 @@
 //
 // For access to standard BSD features, use OS_BSD instead of a
 // more specific macro.
-#if OS_FREEBSD || OS_OPENBSD || OS_NETBSD
+#if OS_FREEBSD || OS_OPENBSD || OS_NETBSD || OS_DRAGONFLY
 #  define OS_BSD 1
 #else
 #  define OS_BSD 0
