--- utils/s2n_fork_detection_features.h.orig	Tue Mar 18 22:43:41 2025
+++ utils/s2n_fork_detection_features.h	Sun Nov
@@ -22,7 +22,7 @@
 typedef struct _opaque_pthread_once_t __darwin_pthread_once_t;
 typedef __darwin_pthread_once_t pthread_once_t;
     #define _DARWIN_C_SOURCE
-#elif defined(__FreeBSD__) || defined(__OpenBSD__)
+#elif defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
     /* FreeBSD requires POSIX compatibility off for its syscalls (enables __BSD_VISIBLE)
      * Without the below line, <sys/mman.h> cannot be imported (it requires __BSD_VISIBLE) */
     #undef _POSIX_C_SOURCE
