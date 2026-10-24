--- trantor/utils/Logger.cc.orig
+++ trantor/utils/Logger.cc
@@ -47,7 +47,7 @@
 }
 }  // namespace std
 #endif
-#if defined __FreeBSD__
+#if defined __FreeBSD__ || defined __DragonFly__
 #include <pthread_np.h>
 #endif
 
@@ -158,7 +158,7 @@
 #ifdef __linux__
     if (threadId_ == 0)
         threadId_ = static_cast<pid_t>(::syscall(SYS_gettid));
-#elif defined __FreeBSD__
+#elif defined __FreeBSD__ || defined __DragonFly__
     if (threadId_ == 0)
     {
         threadId_ = pthread_getthreadid_np();
