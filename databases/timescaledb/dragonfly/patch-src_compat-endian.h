--- src/compat-endian.h.orig	2019-05-06 17:49:37 UTC
+++ src/compat-endian.h
@@ -21,7 +21,7 @@
 #define bswap_64(x) OSSwapInt64(x)
 #define _NEED_ENDIAN_COMPAT
 
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
 #else
 #include <endian.h>
