--- lib/bch.c.orig	2019-10-07 21:14:02 UTC
+++ lib/bch.c
@@ -60,7 +60,7 @@
 #include <linux/bitops.h>
 #else
 #include <errno.h>
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
 #elif defined(__APPLE__)
 #include <machine/endian.h>
