--- src/concurrency/thread_pool.cc.orig	2019-10-11 11:03:52 UTC
+++ src/concurrency/thread_pool.cc
@@ -19,7 +19,7 @@
 #include <cstdlib>
 #if defined(_WIN32)
 #  include <windows.h> // for GetSystemInfo
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <sys/types.h>
 #  include <sys/sysctl.h>
 #elif defined(__NetBSD__)
@@ -123,7 +123,7 @@ void thread_pool::set_max_thread_count(u
       max = 1;
     else
       max = ncpus;
-#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
     size_t len(sizeof(max));
     int mib[2];
     mib[0] = CTL_HW;
