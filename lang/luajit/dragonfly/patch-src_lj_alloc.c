--- src/lj_alloc.c.orig	2017-05-02 02:11:00.000000000 +0800
+++ src/lj_alloc.c	2019-02-18 22:35:03.848748000 +0800
@@ -172,7 +172,15 @@ static LJ_AINLINE int CALL_MUNMAP(void *
 #if !defined(MAP_ANONYMOUS) && defined(MAP_ANON)
 #define MAP_ANONYMOUS		MAP_ANON
 #endif
+#if defined(__DragonFly__) && (__DragonFly_version < 500503)
+/*
+ * MAP_TRYFIXED is the only way to get the mmap(2) work under 2GB
+ * before RLIMIT_DATA support, which is implemented at 500503.
+ */
+#define MMAP_FLAGS		(MAP_PRIVATE|MAP_ANONYMOUS|MAP_TRYFIXED)
+#else
 #define MMAP_FLAGS		(MAP_PRIVATE|MAP_ANONYMOUS)
+#endif
 
 #if LJ_64
 /* 64 bit mode needs special support for allocating memory in the lower 2GB. */
@@ -201,7 +209,7 @@ static LJ_AINLINE void *CALL_MMAP(size_t
 ** otherwise the lower 4GB are blocked. And the 32GB RLIMIT_DATA needs
 ** to be reduced to 250MB on FreeBSD.
 */
-#if LJ_TARGET_OSX || defined(__DragonFly__)
+#if LJ_TARGET_OSX || (defined(__DragonFly__) && (__DragonFly_version < 500503))
 #define MMAP_REGION_START	((uintptr_t)0x10000)
 #elif LJ_TARGET_PS4
 #define MMAP_REGION_START	((uintptr_t)0x4000)
@@ -210,7 +218,7 @@ static LJ_AINLINE void *CALL_MMAP(size_t
 #endif
 #define MMAP_REGION_END		((uintptr_t)0x80000000)
 
-#if (defined(__FreeBSD__) || defined(__FreeBSD_kernel__)) && !LJ_TARGET_PS4
+#if ((defined(__FreeBSD__) || defined(__FreeBSD_kernel__)) && !LJ_TARGET_PS4) || (defined(__DragonFly__) && __DragonFly_version >= 500503)
 #include <sys/resource.h>
 #endif
 
@@ -220,7 +228,7 @@ static LJ_AINLINE void *CALL_MMAP(size_t
   /* Hint for next allocation. Doesn't need to be thread-safe. */
   static uintptr_t alloc_hint = MMAP_REGION_START;
   int retry = 0;
-#if (defined(__FreeBSD__) || defined(__FreeBSD_kernel__)) && !LJ_TARGET_PS4
+#if ((defined(__FreeBSD__) || defined(__FreeBSD_kernel__)) && !LJ_TARGET_PS4) || (defined(__DragonFly__) && __DragonFly_version >= 500503)
   static int rlimit_modified = 0;
   if (LJ_UNLIKELY(rlimit_modified == 0)) {
     struct rlimit rlim;
@@ -238,7 +246,7 @@ static LJ_AINLINE void *CALL_MMAP(size_t
       return p;
     }
     if (p != CMFAIL) munmap(p, size);
-#if defined(__sun__) || defined(__DragonFly__)
+#if defined(__sun__) || (defined(__DragonFly__) && (__DragonFly_version < 500503))
     alloc_hint += 0x1000000;  /* Need near-exhaustive linear scan. */
     if (alloc_hint + size < MMAP_REGION_END) continue;
 #endif
