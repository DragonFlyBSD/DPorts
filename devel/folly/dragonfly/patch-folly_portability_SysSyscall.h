--- folly/portability/SysSyscall.h.orig
+++ folly/portability/SysSyscall.h
@@ -34,6 +34,8 @@
 #define FOLLY_SYS_gettid 0
 #elif defined(__FreeBSD__)
 #define FOLLY_SYS_gettid SYS_thr_self
+#elif defined(__DragonFly__)
+#define FOLLY_SYS_gettid SYS_lwp_gettid
 #elif defined(SYS_gettid)
 #define FOLLY_SYS_gettid SYS_gettid
 #else
