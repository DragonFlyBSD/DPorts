--- contrib/torch/torch7/lib/TH/THGeneral.c.orig	2018-04-10 16:12:46 UTC
+++ contrib/torch/torch7/lib/TH/THGeneral.c
@@ -14,6 +14,8 @@
 #if (defined(__unix) || defined(_WIN32))
   #if defined(__FreeBSD__)
     #include <malloc_np.h>
+  #elif defined(__DragonFly__)
+    #include <stdlib.h>
   #else
     #include <malloc.h>
   #endif
