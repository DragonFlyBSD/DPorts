--- link-grammar/parse/extract-links.c.orig	2026-10-26 06:39:41 UTC
+++ link-grammar/parse/extract-links.c
@@ -14,7 +14,7 @@
 #include <limits.h>                     // INT_MAX
 #ifdef __APPLE__
 #include <malloc/malloc.h>
-#else
+#elif !defined(__DragonFly__)
 #include <malloc.h>                     // malloc_trim
 #endif
 #include <math.h>                       // log2
