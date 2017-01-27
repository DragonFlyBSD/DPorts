--- include/my_thread_os_id.h.orig	2016-11-27 19:44:54 UTC
+++ include/my_thread_os_id.h
@@ -30,6 +30,14 @@
 #include <pthread.h>                /* pthread_self */
 #endif
 
+#if defined __DragonFly__
+#include <sys/param.h>
+#if __DragonFly_version >= 400709
+#include <sys/cdefs.h>
+#include <sys/lwp.h>
+#endif
+#endif
+
 #ifdef HAVE_PTHREAD_GETTHREADID_NP
 #include <pthread_np.h>             /* pthread_getthreadid_np() */
 #endif /* HAVE_PTHREAD_GETTHREADID_NP */
@@ -75,8 +83,12 @@ static inline my_thread_os_id_t my_threa
   return pthread_getthreadid_np();
 #else
 #ifdef HAVE_INTEGER_PTHREAD_SELF
+#  if defined __DragonFly__
+   return lwp_gettid();
+#  else
   /* Unknown platform, fallback. */
   return pthread_self();
+#  endif
 #else
   /* Feature not available. */
   return 0;
