--- src/H/memalloc.h.orig
+++ src/H/memalloc.h
@@ -45,7 +45,7 @@
 #elif defined(__GNUC__) || defined(__TINYC__)
 
 #define myalloca  alloca
-#ifndef __FreeBSD__  /* added v2.08 */
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <malloc.h>  /* added v2.07 */
 #endif
 