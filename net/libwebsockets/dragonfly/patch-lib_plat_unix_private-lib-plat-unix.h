--- lib/plat/unix/private-lib-plat-unix.h.orig	1970-01-01 00:00:00 UTC
+++ lib/plat/unix/private-lib-plat-unix.h
@@ -53,7 +53,7 @@
 #if defined(__APPLE__)
 #include <machine/endian.h>
 #endif
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
 #endif
 #if defined(__linux__)
