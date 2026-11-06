--- contrib/eggbitset/roaring.h.orig	2025-10-28 23:23:12 UTC
+++ contrib/eggbitset/roaring.h
@@ -58,7 +58,7 @@ enum {
 #include <stdbool.h>
 #include <stdint.h>
 #include <stdlib.h>  // will provide posix_memalign with _POSIX_C_SOURCE as defined above
-#if !(defined(__APPLE__)) && !(defined(__FreeBSD__)) && !(defined(__OpenBSD__))
+#if !(defined(__APPLE__)) && !(defined(__FreeBSD__)) && !(defined(__OpenBSD__)) && !(defined(__DragonFly__))
 #include <malloc.h>  // this should never be needed but there are some reports that it is needed.
 #endif
 
