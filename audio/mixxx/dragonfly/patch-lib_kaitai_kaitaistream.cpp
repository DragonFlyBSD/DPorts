--- lib/kaitai/kaitaistream.cpp.intermediate	2021-12-19 18:53:22.000000000 +0000
+++ lib/kaitai/kaitaistream.cpp
@@ -17,7 +17,7 @@
 #define bswap_16(x) _byteswap_ushort(x)
 #define bswap_32(x) _byteswap_ulong(x)
 #define bswap_64(x) _byteswap_uint64(x)
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
 #define bswap_16(x) bswap16(x)
 #define bswap_32(x) bswap32(x)
