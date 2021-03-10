--- src/basic/missing.h.orig	2021-01-06 13:56:51 UTC
+++ src/basic/missing.h
@@ -70,8 +70,10 @@
 #define TASK_COMM_LEN 16
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
+#ifndef __DragonFly__
 #define ENOMEDIUM       (INT_MAX - 1)
+#endif
 #define ENOPKG          (INT_MAX - 2)
 #define EUNATCH         (INT_MAX - 3)
 #define ENODATA         (INT_MAX - 4)
