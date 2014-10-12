--- src/lj_alloc.c.orig	2014-10-12 14:10:26 UTC
+++ src/lj_alloc.c
@@ -188,14 +188,14 @@
   return ptr;
 }
 
-#elif LJ_TARGET_OSX || LJ_TARGET_PS4 || defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__sun__)
+#elif LJ_TARGET_OSX || LJ_TARGET_PS4 || defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__) || defined(__sun__)
 
 /* OSX and FreeBSD mmap() use a naive first-fit linear search.
 ** That's perfect for us. Except that -pagezero_size must be set for OSX,
 ** otherwise the lower 4GB are blocked. And the 32GB RLIMIT_DATA needs
 ** to be reduced to 250MB on FreeBSD.
 */
-#if LJ_TARGET_OSX
+#if LJ_TARGET_OSX || defined(__DragonFly__)
 #define MMAP_REGION_START	((uintptr_t)0x10000)
 #elif LJ_TARGET_PS4
 #define MMAP_REGION_START	((uintptr_t)0x4000)
@@ -232,7 +232,7 @@
       return p;
     }
     if (p != CMFAIL) munmap(p, size);
-#ifdef __sun__
+#if defined(__sun__) || defined(__DragonFly__)
     alloc_hint += 0x1000000;  /* Need near-exhaustive linear scan. */
     if (alloc_hint + size < MMAP_REGION_END) continue;
 #endif
