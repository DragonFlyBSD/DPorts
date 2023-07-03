--- src/3rdparty/chromium/build/build_config.h.orig	2021-12-15 16:12:54 UTC
+++ src/3rdparty/chromium/build/build_config.h
@@ -74,6 +74,9 @@
 #define OS_FUCHSIA 1
 #elif defined(__FreeBSD__)
 #define OS_FREEBSD 1
+#elif defined(__DragonFly__)
+#define OS_FREEBSD 1
+#define OS_DRAGONFLY 1
 #elif defined(__NetBSD__)
 #define OS_NETBSD 1
 #elif defined(__OpenBSD__)
@@ -98,7 +101,8 @@
 
 // For access to standard BSD features, use OS_BSD instead of a
 // more specific macro.
-#if defined(OS_FREEBSD) || defined(OS_NETBSD) || defined(OS_OPENBSD)
+#if defined(OS_FREEBSD) || defined(OS_NETBSD) || defined(OS_OPENBSD) || \
+    defined(OS_DRAGONFLY)
 #define OS_BSD 1
 #endif
 
@@ -108,7 +112,7 @@
     defined(OS_FREEBSD) || defined(OS_IOS) || defined(OS_LINUX) ||  \
     defined(OS_CHROMEOS) || defined(OS_MAC) || defined(OS_NACL) ||  \
     defined(OS_NETBSD) || defined(OS_OPENBSD) || defined(OS_QNX) || \
-    defined(OS_SOLARIS)
+    defined(OS_SOLARIS) || defined(OS_DRAGONFLY)
 #define OS_POSIX 1
 #endif
 
