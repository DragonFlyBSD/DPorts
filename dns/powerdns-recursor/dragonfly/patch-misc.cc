--- misc.cc.orig	2017-12-04 12:51:03 UTC
+++ misc.cc
@@ -57,7 +57,7 @@
 #include <sys/types.h>
 #include <pwd.h>
 #include <grp.h>
-#ifdef __FreeBSD__
+#if defined __FreeBSD__ || defined __DragonFly__
 #  include <pthread_np.h>
 #endif
 
@@ -1325,7 +1325,7 @@ bool isSettingThreadCPUAffinitySupported
 int mapThreadToCPUList(pthread_t tid, const std::set<int>& cpus)
 {
 #ifdef HAVE_PTHREAD_SETAFFINITY_NP
-#  ifdef __FreeBSD__
+#  if defined __FreeBSD__|| defined __DragonFly__
 #    define cpu_set_t cpuset_t
 #  endif
   cpu_set_t cpuset;
