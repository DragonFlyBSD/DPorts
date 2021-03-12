--- src/utils/dlmalloc.c.orig	2020-06-16 16:17:17 UTC
+++ src/utils/dlmalloc.c
@@ -1706,7 +1706,7 @@ static FORCEINLINE int pthread_acquire_l
 #if defined (__SVR4) && defined (__sun) /* solaris */
 			thr_yield();
 #else
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__APPLE__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__APPLE__) || defined(__DragonFly__)
 			sched_yield();
 #else  /* no-op yield on unknown systems */
 			;
