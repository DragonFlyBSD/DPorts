--- util/build_config.h.orig	2019-02-12 17:36:05 UTC
+++ util/build_config.h
@@ -51,6 +51,8 @@
 #define OS_WIN 1
 #elif defined(__Fuchsia__)
 #define OS_FUCHSIA 1
+#elif defined(__DragonFly__)
+#define OS_DRAGONFLY 1
 #elif defined(__FreeBSD__)
 #define OS_FREEBSD 1
 #elif defined(__NetBSD__)
@@ -73,7 +75,7 @@
 
 // For access to standard BSD features, use OS_BSD instead of a
 // more specific macro.
-#if defined(OS_FREEBSD) || defined(OS_NETBSD) || defined(OS_OPENBSD)
+#if defined(OS_FREEBSD) || defined(OS_NETBSD) || defined(OS_OPENBSD) || defined(OS_DRAGONFLY)
 #define OS_BSD 1
 #endif
 
@@ -82,7 +84,7 @@
 #if defined(OS_AIX) || defined(OS_ANDROID) || defined(OS_ASMJS) ||    \
     defined(OS_FREEBSD) || defined(OS_LINUX) || defined(OS_MACOSX) || \
     defined(OS_NACL) || defined(OS_NETBSD) || defined(OS_OPENBSD) ||  \
-    defined(OS_QNX) || defined(OS_SOLARIS)
+    defined(OS_QNX) || defined(OS_SOLARIS) || defined(OS_DRAGONFLY)
 #define OS_POSIX 1
 #endif
 
