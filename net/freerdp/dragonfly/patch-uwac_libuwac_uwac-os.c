--- uwac/libuwac/uwac-os.c.orig	2021-10-21 06:30:50 UTC
+++ uwac/libuwac/uwac-os.c
@@ -31,6 +31,7 @@
 
 #if defined(__FreeBSD__) || defined(__DragonFly__)
 #define USE_SHM
+#define SHM_ANON        ((char *)1)
 #endif
 
 /* uClibc and uClibc-ng don't provide O_TMPFILE */
