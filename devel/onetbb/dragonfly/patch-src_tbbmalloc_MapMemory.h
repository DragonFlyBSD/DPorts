--- src/tbbmalloc/MapMemory.h.orig	2021-10-04 09:50:18 UTC
+++ src/tbbmalloc/MapMemory.h
@@ -19,7 +19,7 @@
 
 #include <stdlib.h>
 
-#if __unix__ || __APPLE__ || __sun || __FreeBSD__
+#if __unix__ || __APPLE__ || __sun || __FreeBSD__ || __DragonFly__
 
 #if __sun && !defined(_XPG4_2)
  // To have void* as mmap's 1st argument
