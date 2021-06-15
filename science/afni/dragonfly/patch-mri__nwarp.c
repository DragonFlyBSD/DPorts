--- mri_nwarp.c.orig	2021-06-15 11:32:12.715516000 +0200
+++ mri_nwarp.c	2021-06-15 11:33:03.404371000 +0200
@@ -99,7 +99,7 @@
 
 #if defined(__linux__)
 #  include <malloc.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) && !defined(__DragonFly__)
 #  include <stdlib.h>
 #  include <malloc_np.h>
 #endif
@@ -109,7 +109,7 @@
 #if defined(__linux__)
       INFO_message("Memory usage: %s",mesg) ;
       malloc_stats();
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) && !defined(__DragonFly__)
       INFO_message("Memory usage: %s",mesg) ;
       malloc_stats_print(NULL, NULL, "g");
 #endif
