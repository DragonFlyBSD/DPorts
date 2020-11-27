--- sorted-hashtable.c.intermediate	2020-11-27 13:54:17.000000000 +0000
+++ sorted-hashtable.c
@@ -23,7 +23,7 @@
 #include <stdlib.h>
 #include <string.h>
 
-#if !defined(__FreeBSD__) && !defined(__APPLE__)
+#if !defined(__FreeBSD__) && !defined(__APPLE__) && !defined(__DragonFly__)
 #include <malloc.h>
 #endif
 
