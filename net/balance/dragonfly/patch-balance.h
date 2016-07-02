--- balance.h.orig	2015-04-28 10:49:41.000000000 +0300
+++ balance.h
@@ -20,6 +20,10 @@
 #include <sys/mman.h>
 #endif
 
+#ifdef __DragonFly__
+#define BalanceBSD 1
+#endif 
+
 #ifdef __FreeBSD__
 #define BalanceBSD 1
 #endif 
