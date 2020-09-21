--- lib/plat/unix/private.h.orig	2020-09-21 17:50:26.257379000 +0200
+++ lib/plat/unix/private.h	2020-09-21 17:50:57.547487000 +0200
@@ -47,7 +47,7 @@
 #if defined(__APPLE__)
 #include <machine/endian.h>
 #endif
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
 #endif
 #if defined(__linux__)
