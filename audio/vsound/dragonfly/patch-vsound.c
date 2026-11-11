--- vsound.c.orig
+++ vsound.c
@@ -64,7 +64,7 @@
 
 #define REAL_LIBC RTLD_NEXT
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 typedef unsigned long request_t;
 #else
 typedef int request_t;
