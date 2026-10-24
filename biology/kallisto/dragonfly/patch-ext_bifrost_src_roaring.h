--- ext/bifrost/src/roaring.h.orig	2026-01-20 17:34:25 UTC
+++ ext/bifrost/src/roaring.h
@@ -33,7 +33,7 @@
 #include <stdbool.h>
 #include <stdint.h>
 #include <stdlib.h>  // will provide posix_memalign with _POSIX_C_SOURCE as defined above
-#if !(defined(__APPLE__)) && !(defined(__FreeBSD__))
+#if !(defined(__APPLE__)) && !(defined(__FreeBSD__)) && !(defined(__DragonFly__))
 #include <malloc.h>  // this should never be needed but there are some reports that it is needed.
 #endif
 
