--- src/corelib/thread/qthread_unix.cpp.orig	2022-11-16 07:54:24 UTC
+++ src/corelib/thread/qthread_unix.cpp
@@ -35,7 +35,11 @@
 #include <errno.h>
 
 #if defined(Q_OS_FREEBSD)
+#ifdef __DragonFly__
+#  include <sys/cpumask.h>
+#else
 #  include <sys/cpuset.h>
+#endif
 #elif defined(Q_OS_BSD4)
 #  include <sys/sysctl.h>
 #endif
@@ -412,8 +416,10 @@ int QThread::idealThreadCount() noexcept
         cores = (int)psd.psd_proc_cnt;
     }
 #elif (defined(Q_OS_LINUX) && !defined(Q_OS_ANDROID)) || defined(Q_OS_FREEBSD)
-#  if defined(Q_OS_FREEBSD) && !defined(CPU_COUNT_S)
-#    define CPU_COUNT_S(setsize, cpusetp)   ((int)BIT_COUNT(setsize, cpusetp))
+#  if defined(__FreeBSD__)
+#   if !defined(CPU_COUNT_S)
+#     define CPU_COUNT_S(setsize, cpusetp)   ((int)BIT_COUNT(setsize, cpusetp))
+#   endif
     // match the Linux API for simplicity
     using cpu_set_t = cpuset_t;
     auto sched_getaffinity = [](pid_t, size_t cpusetsize, cpu_set_t *mask) {
@@ -433,7 +439,11 @@ int QThread::idealThreadCount() noexcept
         if (size > 4)
             return 1;
     }
+# ifdef __DragonFly__
+    cores = CPU_COUNT(cpuset.data());
+# else
     cores = CPU_COUNT_S(sizeof(cpu_set_t) * size, cpuset.data());
+# endif
 #elif defined(Q_OS_BSD4)
     // OpenBSD, NetBSD, BSD/OS, Darwin (macOS, iOS, etc.)
     size_t len = sizeof(cores);
