--- source/posixthr.h.intermediate	2021-12-20 16:50:15.000000000 +0000
+++ source/posixthr.h
@@ -22,7 +22,7 @@
 #define _POSIXTHR_H
 
 
-#if defined(__linux__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 
 #include <stdlib.h>
 #include <pthread.h>
