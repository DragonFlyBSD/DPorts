--- src/corelib/thread/qthread_unix.cpp.orig	2026-05-07 07:50:01 UTC
+++ src/corelib/thread/qthread_unix.cpp
@@ -30,7 +30,11 @@
 #endif
 
 #if defined(Q_OS_FREEBSD)
+#ifdef __DragonFly__
+#  include <sys/cpumask.h>
+#else
 #  include <sys/cpuset.h>
+#endif
 #elif defined(Q_OS_BSD4)
 #  include <sys/sysctl.h>
 #endif
@@ -583,7 +587,11 @@ int QThread::idealThreadCount() noexcept
     do {
         cpu_set_t cpuset[size];
         if (sched_getaffinity(0, sizeof(cpu_set_t) * size, cpuset) == 0) {
+#ifdef __DragonFly__
+            cores = CPU_COUNT(cpuset);
+#else
             cores = CPU_COUNT_S(sizeof(cpu_set_t) * size, cpuset);
+#endif
             break;
         }
         size *= 4;
