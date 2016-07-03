--- support.h.orig	2014-03-02 19:57:37.000000000 +0200
+++ support.h
@@ -16,7 +16,12 @@
 #define lseek64 lseek
 #endif
 
-#if defined (__FreeBSD__) || defined (__FreeBSD_kernel__)
+#if defined (__DragonFly__)
+//#include <sys/diskslice.h>
+#define lseek64 lseek
+#endif
+
+#if defined (__DragonFly__) || defined (__FreeBSD__) || defined (__FreeBSD_kernel__)
 #define DEFAULT_GPT_TYPE 0xA503
 #endif
 
