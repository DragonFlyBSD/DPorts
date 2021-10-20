--- src/lib/index/index_read.c.orig	2020-09-26 23:29:25 UTC
+++ src/lib/index/index_read.c
@@ -28,7 +28,7 @@
 #include <stdint.h>
 #include <stdbool.h>
 #include <string.h>
-#ifdef FREEBSD
+#if defined(FREEBSD) || defined(__DragonFly__)
 #include <sys/endian.h>
 #else
 #include <endian.h>
