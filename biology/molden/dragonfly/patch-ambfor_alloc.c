--- ambfor/alloc.c.orig	2015-07-21 16:35:18.000000000 +0300
+++ ambfor/alloc.c
@@ -1,5 +1,5 @@
 
-#if defined(DARWIN) || defined(FREEBSD)
+#if defined(DARWIN) || defined(FREEBSD) || defined(DRAGONFLY)
 #else
 #include <malloc.h>
 #endif
