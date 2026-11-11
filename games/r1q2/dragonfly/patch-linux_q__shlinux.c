--- linux/q_shlinux.c.orig
+++ linux/q_shlinux.c
@@ -26,7 +26,7 @@
 int maxhunksize;
 int curhunksize;
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define MMAP_ANON MAP_ANON
 #else
 #define MMAP_ANON MAP_ANONYMOUS
