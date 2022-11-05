--- openmp/runtime/src/kmp_wrapper_getpid.h.orig	2021-09-24 16:18:10 UTC
+++ openmp/runtime/src/kmp_wrapper_getpid.h
@@ -23,7 +23,7 @@
 #if KMP_OS_DARWIN
 // OS X
 #define __kmp_gettid() pthread_mach_thread_np(pthread_self())
-#elif KMP_OS_FREEBSD
+#elif KMP_OS_FREEBSD || KMP_OS_DRAGONFLY
 #include <pthread_np.h>
 #define __kmp_gettid() pthread_getthreadid_np()
 #elif KMP_OS_NETBSD
