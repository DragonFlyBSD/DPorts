--- ext/opcache/shared_alloc_shm.c.orig	2021-12-15 02:00:45 UTC
+++ ext/opcache/shared_alloc_shm.c
@@ -23,7 +23,7 @@
 
 #ifdef USE_SHM
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 # include <machine/param.h>
 #endif
 #include <sys/types.h>
