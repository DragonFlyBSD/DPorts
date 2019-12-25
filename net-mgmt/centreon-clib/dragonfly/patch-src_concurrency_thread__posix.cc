--- src/concurrency/thread_posix.cc.orig	2019-10-11 11:03:52 UTC
+++ src/concurrency/thread_posix.cc
@@ -21,7 +21,7 @@
 #include <cstring>
 #include <ctime>
 #include <pthread.h>
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <pthread_np.h>
 #elif defined(__NetBSD__)
 #  include <signal.h>
