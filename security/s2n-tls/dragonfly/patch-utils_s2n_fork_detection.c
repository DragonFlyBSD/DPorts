--- utils/s2n_fork_detection.c.orig	2022-10-19 19:49:32.700756000 +0200
+++ utils/s2n_fork_detection.c	2022-10-19 19:53:53.594820000 +0200
@@ -20,7 +20,7 @@
     typedef struct _opaque_pthread_once_t  __darwin_pthread_once_t;
     typedef __darwin_pthread_once_t pthread_once_t;
     #define _DARWIN_C_SOURCE
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
     /* FreeBSD requires POSIX compatibility off for its syscalls (enables __BSD_VISIBLE)
      * Without the below line, <sys/mman.h> cannot be imported (it requires __BSD_VISIBLE) */
     #undef _POSIX_C_SOURCE
