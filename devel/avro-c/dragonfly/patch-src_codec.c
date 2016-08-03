--- src/codec.c.intermediate	2016-08-03 13:38:00 UTC
+++ src/codec.c
@@ -21,7 +21,7 @@
 #  if defined(__APPLE__)
 #    include <libkern/OSByteOrder.h>
 #    define __bswap_32 OSSwapInt32
-#  elif defined(__FreeBSD__)
+#  elif defined(__FreeBSD__) || defined(__DragonFly__)
 #    include <sys/endian.h>
 #    define __bswap_32 bswap32
 #  else
