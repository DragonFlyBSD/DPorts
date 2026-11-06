--- src/mod_inputdev/inputdev_parallel/inputdev_parallel.cpp.orig	2026-11-06 07:28:25 UTC
+++ src/mod_inputdev/inputdev_parallel/inputdev_parallel.cpp
@@ -28,7 +28,7 @@
 #if defined(__APPLE__) || defined(MACOSX)
 #else
 #  if defined(WIN32)
-#  elif defined(__powerpc__) || defined (__FreeBSD__)
+#  elif defined(__powerpc__) || defined (__FreeBSD__) || defined (__DragonFly__)
 #    define ioperm(a,b,c) -1
 #    define inb(a) 0
 #    define outb(a,b)
