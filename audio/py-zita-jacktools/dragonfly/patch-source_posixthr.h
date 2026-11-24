--- source/posixthr.h.orig
+++ source/posixthr.h
@@ -34,7 +34,7 @@
 #endif
 
 
-#if defined(__linux__)  || defined(__GNU__) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#if defined(__linux__)  || defined(__GNU__) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
 
 #include <semaphore.h>
 
