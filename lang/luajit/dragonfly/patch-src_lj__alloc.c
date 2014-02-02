--- src/lj_alloc.c.orig	2013-06-03 19:00:00.000000000 +0000
+++ src/lj_alloc.c
@@ -188,7 +188,8 @@ static LJ_AINLINE void *CALL_MMAP(size_t
   return ptr;
 }
 
-#elif LJ_TARGET_OSX || defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__OpenBSD__) || defined(__sun__)
+#elif LJ_TARGET_OSX || defined(__FreeBSD__) || defined(__FreeBSD_kernel__) \
+ || defined(__OpenBSD__) || defined(__sun__) || defined(__DragonFly__)
 
 /* OSX and FreeBSD mmap() use a naive first-fit linear search.
 ** That's perfect for us. Except that -pagezero_size must be set for OSX,
