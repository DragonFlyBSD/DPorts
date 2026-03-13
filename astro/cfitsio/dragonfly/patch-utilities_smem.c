--- utilities/smem.c.orig	Thu Aug  8 20:18:19 2024
+++ utilities/smem.c	Sun Nov
@@ -1,7 +1,7 @@
 #include <stdio.h>
 #include <memory.h>
 #include <string.h>
-#ifdef __APPLE__
+#if defined(__APPLE__) || defined(__DragonFly__)
 #include <stdlib.h>
 #else
 #include <malloc.h>
