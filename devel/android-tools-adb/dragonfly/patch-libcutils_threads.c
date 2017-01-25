--- libcutils/threads.c.orig	2017-01-25 08:28:58.000000000 +0200
+++ libcutils/threads.c
@@ -30,6 +30,10 @@
 #elif defined(_WIN32)
 #include <windows.h>
 #elif defined(__DragonFly__)
+#include <sys/param.h>
+#if __DragonFly_version >= 400709
+#include <sys/lwp.h>
+#endif
 #include <unistd.h>
 #elif defined(__FreeBSD__)
 #include <pthread_np.h>
