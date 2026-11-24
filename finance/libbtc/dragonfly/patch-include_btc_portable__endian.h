--- include/btc/portable_endian.h.orig
+++ include/btc/portable_endian.h
@@ -49,7 +49,7 @@
 
 #include <sys/endian.h>
 
-#if !defined(__FreeBSD__)
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #define be16toh(x) betoh16(x)
 #define le16toh(x) letoh16(x)
 
