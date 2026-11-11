--- src/websocket.h.orig
+++ src/websocket.h
@@ -63,7 +63,7 @@
 #  define be16toh(x) BE_IN16(x)
 #  define be32toh(x) BE_IN32(x)
 #  define be64toh(x) BE_IN64(x)
-#elif defined(__FreeBSD__) || defined(__NetBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__)
 #  include <sys/endian.h>
 #elif defined(__OpenBSD__)
 #  include <sys/types.h>
