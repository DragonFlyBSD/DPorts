--- src/portable_endian.h.intermediate	2019-12-25 10:46:38.000000000 +0000
+++ src/portable_endian.h
@@ -54,7 +54,7 @@
 
 #	include <sys/endian.h>
 
-#if !defined(__FreeBSD__)
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #	define be16toh(x) betoh16(x)
 #	define le16toh(x) letoh16(x)
 
