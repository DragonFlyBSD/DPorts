--- spf.c.orig	2015-10-30 20:22:30.000000000 +0200
+++ spf.c
@@ -59,7 +59,7 @@ __RCSID("$Id: spf.c,v 1.40 2015/10/30 18
 #include <dmalloc.h> 
 #endif
 
-#ifdef  __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define HAVE_NS_TYPE
 #endif
 
