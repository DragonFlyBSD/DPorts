--- src/bin/termptysave.c.orig	2014-09-14 21:46:20 UTC
+++ src/bin/termptysave.c
@@ -10,6 +10,9 @@
 #  define MAP_ANONYMOUS MAP_ANON
 # endif
 #endif
+#ifdef __DragonFly__
+#  define MAP_ANONYMOUS MAP_ANON
+#endif
 
 #define MEM_ALLOC_ALIGN  16
 #define MEM_BLOCKS       1024
