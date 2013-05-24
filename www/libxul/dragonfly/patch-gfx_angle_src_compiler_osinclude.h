--- gfx/angle/src/compiler/osinclude.h.orig	2013-01-03 17:43:09.000000000 +0000
+++ gfx/angle/src/compiler/osinclude.h
@@ -16,6 +16,7 @@
 #define ANGLE_OS_WIN
 #elif defined(__APPLE__) || defined(__linux__) || \
       defined(__FreeBSD__) || defined(__OpenBSD__) || \
+      defined(__DragonFly__) || \
       defined(__sun) || defined(ANDROID)
 #define ANGLE_OS_POSIX
 #else
