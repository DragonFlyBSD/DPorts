--- lib/chunkio/deps/crc32/crc32.c.intermediate	2019-01-28 14:13:44 UTC
+++ lib/chunkio/deps/crc32/crc32.c
@@ -29,7 +29,7 @@
 #  define htole16(x) (x)
 #  define be16toh(x) ntohs(x)
 #  define le16toh(x) (x)
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <sys/endian.h>
 #else
 #  include <endian.h>
