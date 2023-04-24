--- utils/s2n_fork_detection.c.orig	2023-04-17 21:07:42.270230000 +0200
+++ utils/s2n_fork_detection.c	2023-04-17 21:08:04.160559000 +0200
@@ -20,7 +20,7 @@
 typedef struct _opaque_pthread_once_t __darwin_pthread_once_t;
 typedef __darwin_pthread_once_t pthread_once_t;
     #define _DARWIN_C_SOURCE
-#elif defined(__FreeBSD__) || defined(__OpenBSD__)
+#elif defined(__DragonFly__) || defined(__FreeBSD__) || defined(__OpenBSD__)
     /* FreeBSD requires POSIX compatibility off for its syscalls (enables __BSD_VISIBLE)
      * Without the below line, <sys/mman.h> cannot be imported (it requires __BSD_VISIBLE) */
     #undef _POSIX_C_SOURCE
