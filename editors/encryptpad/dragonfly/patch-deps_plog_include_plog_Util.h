--- deps/plog/include/plog/Util.h.orig	2018-09-16 03:57:30 UTC
+++ deps/plog/include/plog/Util.h
@@ -102,6 +102,8 @@ namespace plog
             return GetCurrentThreadId();
 #elif defined(__linux__)
             return static_cast<unsigned int>(::syscall(__NR_gettid));
+#elif defined(__DragonFly__)
+            return static_cast<unsigned int>(::syscall(SYS_lwp_gettid));
 #elif defined(__FreeBSD__)
             long tid;
             syscall(SYS_thr_self, &tid);
