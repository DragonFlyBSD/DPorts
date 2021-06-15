--- prf_common_circular.c.orig	2021-06-15 11:37:41.598090000 +0200
+++ prf_common_circular.c	2021-06-15 11:41:44.322610000 +0200
@@ -322,7 +322,7 @@
 #if defined(__linux__)
       #include <malloc.h>
       malloc_stats();
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) && !defined(__DragonFly__)
       #include <stdlib.h>
       #include <malloc_np.h>
       malloc_stats_print(NULL, NULL, "g");
