--- folly/portability/SysSyscall.h.orig	2020-06-11 05:04:12 UTC
+++ folly/portability/SysSyscall.h
@@ -23,6 +23,8 @@
 #define FOLLY_SYS_gettid SYS_thread_selfid
 #elif defined(SYS_gettid)
 #define FOLLY_SYS_gettid SYS_gettid
+#elif defined(__DragonFly__)
+#define FOLLY_SYS_gettid SYS_lwp_gettid
 #else
 #define FOLLY_SYS_gettid __NR_gettid
 #endif
