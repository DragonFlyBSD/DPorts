--- ambfor/alloc.c.orig	2018-05-22 11:05:36 UTC
+++ ambfor/alloc.c
@@ -1,5 +1,5 @@
 
-#if defined(DARWIN) || defined(FREEBSD)
+#if defined(DARWIN) || defined(FREEBSD) || defined(__DragonFly__)
 #else
 #include <malloc.h>
 #endif
