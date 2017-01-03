--- tgl/tl-parser/portable_endian.h.intermediate	2017-01-03 17:33:28.000000000 +0200
+++ tgl/tl-parser/portable_endian.h
@@ -53,7 +53,7 @@
 
 #	include <sys/endian.h>
 
-#if !defined(__FreeBSD__)
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #	define be16toh(x) betoh16(x)
 #	define le16toh(x) letoh16(x)
 
