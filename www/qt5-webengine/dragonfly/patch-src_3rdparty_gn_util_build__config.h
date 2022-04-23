--- src/3rdparty/gn/util/build_config.h.orig	2019-03-07 09:23:57 UTC
+++ src/3rdparty/gn/util/build_config.h
@@ -53,6 +53,9 @@
 #define OS_FUCHSIA 1
 #elif defined(__FreeBSD__)
 #define OS_FREEBSD 1
+#elif defined(__DragonFly__)
+#define OS_FREEBSD 1
+#define OS_DRAGONFLY 1
 #elif defined(__NetBSD__)
 #define OS_NETBSD 1
 #elif defined(__OpenBSD__)
@@ -73,14 +76,14 @@
 
 // For access to standard BSD features, use OS_BSD instead of a
 // more specific macro.
-#if defined(OS_FREEBSD) || defined(OS_NETBSD) || defined(OS_OPENBSD)
+#if defined(OS_FREEBSD) || defined(OS_NETBSD) || defined(OS_OPENBSD) || defined(OS_DRAGONFLY)
 #define OS_BSD 1
 #endif
 
 // For access to standard POSIXish features, use OS_POSIX instead of a
 // more specific macro.
 #if defined(OS_AIX) || defined(OS_ANDROID) || defined(OS_ASMJS) ||    \
-    defined(OS_FREEBSD) || defined(OS_LINUX) || defined(OS_MACOSX) || \
+    defined(OS_FREEBSD) || defined(OS_DRAGONFLY) || defined(OS_LINUX) || defined(OS_MACOSX) || \
     defined(OS_NACL) || defined(OS_NETBSD) || defined(OS_OPENBSD) ||  \
     defined(OS_QNX) || defined(OS_SOLARIS)
 #define OS_POSIX 1
