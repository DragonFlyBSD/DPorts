--- Source/ThirdParty/ANGLE/src/compiler/osinclude.h.orig	2014-10-22 08:16:09 UTC
+++ Source/ThirdParty/ANGLE/src/compiler/osinclude.h
@@ -16,6 +16,7 @@
 #define ANGLE_OS_WIN
 #elif defined(__APPLE__) || defined(__linux__) || \
       defined(__FreeBSD__) || defined(__OpenBSD__) || \
+      defined(__DragonFly__) || \
       defined(__sun) || defined(ANDROID) || \
       defined(__GLIBC__) || defined(__GNU__) || \
       defined(__QNX__)
