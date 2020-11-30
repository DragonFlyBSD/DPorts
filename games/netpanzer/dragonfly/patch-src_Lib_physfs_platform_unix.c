--- src/Lib/physfs/platform/unix.c.orig	2016-04-09 15:14:00 UTC
+++ src/Lib/physfs/platform/unix.c
@@ -13,6 +13,7 @@
 
 #include <stdio.h>
 #include <stdlib.h>
+#include <stdint.h>
 #include <string.h>
 #include <ctype.h>
 #include <unistd.h>
@@ -374,7 +375,7 @@ typedef struct
 
 PHYSFS_uint64 __PHYSFS_platformGetThreadID(void)
 {
-    return(PHTREAD_TO_UI64(pthread_self()));
+    return(PHTREAD_TO_UI64((uintptr_t)pthread_self()));
 } /* __PHYSFS_platformGetThreadID */
 
 
