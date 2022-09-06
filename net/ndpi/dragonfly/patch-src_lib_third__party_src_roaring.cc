--- src/lib/third_party/src/roaring.cc.orig	2022-09-05 07:58:23 UTC
+++ src/lib/third_party/src/roaring.cc
@@ -292,7 +292,7 @@ static inline uint32_t croaring_detect_s
 #include <stdbool.h>
 #include <stdint.h>
 #include <stdlib.h>  // will provide posix_memalign with _POSIX_C_SOURCE as defined above
-#if !(defined(__APPLE__)) && !(defined(__FreeBSD__))
+#if !(defined(__APPLE__)) && !(defined(__FreeBSD__)) && !(defined(__DragonFly__))
 #include <malloc.h>  // this should never be needed but there are some reports that it is needed.
 #endif
 
