--- values.h.intermediate	2019-05-08 21:21:18.000000000 +0000
+++ values.h
@@ -30,6 +30,10 @@
 
 #include <cstdint>
 
+#ifdef __DragonFly__
+#include <sys/endian.h>
+#endif
+
 enum value_slot {
     VALUE_LASTMOD = 0,	// 4 byte big endian value - seconds since 1970.
     VALUE_MD5 = 1,	// 16 byte MD5 checksum of original document.
