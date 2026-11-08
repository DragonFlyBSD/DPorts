--- deps/plog/include/plog/Util.h.orig
+++ deps/plog/include/plog/Util.h
@@ -68,7 +68,7 @@
 #else
 #   include <unistd.h>
 #   include <sys/time.h>
-#   if defined(__linux__) || defined(__FreeBSD__)
+#   if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #       include <sys/syscall.h>
 #   elif defined(__rtems__)
 #       include <rtems.h>
@@ -174,6 +174,8 @@
             return GetCurrentThreadId();
 #elif defined(__linux__)
             return static_cast<unsigned int>(::syscall(__NR_gettid));
+#elif defined(__DragonFly__)
+            return static_cast<unsigned int>(::syscall(SYS_lwp_gettid));
 #elif defined(__FreeBSD__)
             long tid;
             syscall(SYS_thr_self, &tid);
