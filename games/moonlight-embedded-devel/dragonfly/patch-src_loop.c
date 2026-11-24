--- src/loop.c.orig
+++ src/loop.c
@@ -27,6 +27,7 @@
 #include <signal.h>
 #include <string.h>
 #include <errno.h>
+#include <fcntl.h>
 
 #define POLL_CTL_ADD 1
 #define POLL_CTL_MOD 2
@@ -143,7 +144,9 @@
       fflags |= NOTE_WRITE;
       break;
     case EVFILT_TIMER:
+#ifdef NOTE_MSECONDS
       fflags |= NOTE_MSECONDS;
+#endif
       fdata = fd;
       break;
     }
@@ -192,7 +195,13 @@
 }
 
 void loop_create() {
+#ifdef KQUEUE_CLOEXEC
   kqueue_fd = kqueuex(KQUEUE_CLOEXEC);
+#else
+  kqueue_fd = kqueue();
+  if (kqueue_fd >= 0)
+    fcntl(kqueue_fd, F_SETFD, FD_CLOEXEC);
+#endif
   if (kqueue_fd < 0) {
     fprintf(stderr, "Can not create kqueue fd: %d\n", errno);
     exit(EXIT_FAILURE);
