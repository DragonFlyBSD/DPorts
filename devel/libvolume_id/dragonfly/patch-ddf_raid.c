--- ddf_raid.c.orig	2007-12-27 02:05:32.000000000 +0100
+++ ddf_raid.c	2012-12-18 16:20:44.621474000 +0100
@@ -22,7 +22,7 @@
 #include <string.h>
 #include <errno.h>
 #include <ctype.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
 #else
 #include <byteswap.h>
