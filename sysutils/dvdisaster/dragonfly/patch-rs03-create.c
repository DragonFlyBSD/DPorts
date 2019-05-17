--- rs03-create.c.orig	2015-11-17 20:02:24 UTC
+++ rs03-create.c
@@ -43,6 +43,10 @@
   #define MMAP_FLAGS (MAP_SHARED | MAP_POPULATE | MAP_NORESERVE) 
 #endif
 
+#ifdef __DragonFly__
+#define MAP_PREFAULT_READ 0x0
+#endif
+
 #ifdef SYS_FREEBSD
   #define MMAP_FLAGS (MAP_SHARED | MAP_PREFAULT_READ) 
 #endif
