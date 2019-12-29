--- wvdecrypter/cdm/build/build_config.h.orig	2019-11-21 12:08:51 UTC
+++ wvdecrypter/cdm/build/build_config.h
@@ -49,6 +49,8 @@
 #elif defined(_WIN32)
 #define OS_WIN 1
 #define TOOLKIT_VIEWS 1
+#elif defined(__DragonFly__)
+#define OS_DRAGONFLY 1
 #elif defined(__FreeBSD__)
 #define OS_FREEBSD 1
 #elif defined(__OpenBSD__)
@@ -67,7 +69,7 @@
 
 // For access to standard BSD features, use OS_BSD instead of a
 // more specific macro.
-#if defined(OS_FREEBSD) || defined(OS_OPENBSD)
+#if defined(OS_FREEBSD) || defined(OS_OPENBSD) || defined(OS_DRAGONFLY)
 #define OS_BSD 1
 #endif
 
@@ -75,7 +77,7 @@
 // more specific macro.
 #if defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_FREEBSD) ||     \
     defined(OS_OPENBSD) || defined(OS_SOLARIS) || defined(OS_ANDROID) ||  \
-    defined(OS_NACL) || defined(OS_QNX)
+    defined(OS_NACL) || defined(OS_QNX) || defined(OS_DRAGONFLY)
 #define OS_POSIX 1
 #endif
 
