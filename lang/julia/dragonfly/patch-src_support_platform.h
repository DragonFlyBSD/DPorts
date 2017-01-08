--- src/support/platform.h.orig	2016-09-20 05:54:22.000000000 +0300
+++ src/support/platform.h
@@ -19,6 +19,7 @@
  *          _COMPILER_MINGW_
  *      OS:
  *          _OS_FREEBSD_
+ *          _OS_DRAGONFLY_
  *          _OS_LINUX_
  *          _OS_WINDOWS_
  *          _OS_DARWIN_
@@ -65,6 +66,8 @@
 
 #if defined(__FreeBSD__)
 #define _OS_FREEBSD_
+#elif defined(__DragonFly__)
+#define _OS_DRAGONFLY_
 #elif defined(__linux__)
 #define _OS_LINUX_
 #elif defined(_WIN32) || defined(_WIN64)
