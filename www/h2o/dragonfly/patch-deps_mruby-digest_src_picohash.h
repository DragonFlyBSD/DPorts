--- deps/mruby-digest/src/picohash.h.orig	2020-03-21 19:49:34 UTC
+++ deps/mruby-digest/src/picohash.h
@@ -26,7 +26,7 @@
 #define _PICOHASH_BIG_ENDIAN
 #endif
 #else               // ! defined __LITTLE_ENDIAN__
-#include <endian.h> // machine/endian.h
+#include <machine/endian.h> // machine/endian.h
 #if __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__
 #define _PICOHASH_BIG_ENDIAN
 #endif
