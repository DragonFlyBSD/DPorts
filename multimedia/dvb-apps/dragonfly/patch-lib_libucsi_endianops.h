--- lib/libucsi/endianops.h.intermediate	2020-11-20 16:53:23.000000000 +0000
+++ lib/libucsi/endianops.h
@@ -28,6 +28,15 @@ extern "C"
 
 #include <stdint.h>
 
+#ifdef __DragonFly__
+#include <machine/endian.h>
+
+#define bswap_8(x)	((x) & 0xff)
+#define bswap_16(x)	((bswap_8(x) << 8) | bswap_8((x) >> 8))
+#define bswap_32(x)	((bswap_16(x) << 16) | bswap_16((x) >> 16))
+#define bswap_64(x)	((bswap_32(x) << 32) | bswap_32((x) >> 32))
+#endif
+
 #define __ucsi_packed __attribute__((packed))
 
 
