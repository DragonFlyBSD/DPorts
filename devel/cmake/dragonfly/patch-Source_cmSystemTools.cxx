--- Source/cmSystemTools.cxx.orig	2020-12-16 12:35:29 UTC
+++ Source/cmSystemTools.cxx
@@ -6,7 +6,7 @@
 #  define _POSIX_C_SOURCE 200809L
 #endif
 #if defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__NetBSD__) ||    \
-  defined(__QNX__)
+  defined(__QNX__) || defined(__DragonFly__)
 // For isascii
 #  define _XOPEN_SOURCE 700
 #endif
