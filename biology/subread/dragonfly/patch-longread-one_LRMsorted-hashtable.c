--- longread-one/LRMsorted-hashtable.c.intermediate	2020-11-27 13:54:17.000000000 +0000
+++ longread-one/LRMsorted-hashtable.c
@@ -22,7 +22,7 @@
 #include <string.h>
 #include "LRMsorted-hashtable.h"
 
-#if !defined(__APPLE__) && !defined(__FreeBSD__)
+#if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <malloc.h>
 #endif
 
