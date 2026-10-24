--- Foundation/src/Thread_POSIX.cpp.orig	2024-10-15 00:00:00 UTC
+++ Foundation/src/Thread_POSIX.cpp
@@ -25,7 +25,11 @@
 
 
 #if POCO_OS == POCO_OS_FREE_BSD
+#  if defined(__DragonFly__)
+#    include <unistd.h>
+#  else
 #    include <sys/thr.h>
+#  endif
 #    include <pthread_np.h>
 #    include <osreldate.h>
 #endif
@@ -389,6 +393,8 @@
 	id = ::syscall(SYS_gettid);
 #elif POCO_OS == POCO_OS_MAC_OS_X
 	id = ::pthread_mach_thread_np(::pthread_self());
+#elif POCO_OS == POCO_OS_FREE_BSD && defined(__DragonFly__)
+	id = ::lwp_gettid();
 #elif POCO_OS == POCO_OS_FREE_BSD
 	if (0 != thr_self(&id)) id = 0;
 #endif
