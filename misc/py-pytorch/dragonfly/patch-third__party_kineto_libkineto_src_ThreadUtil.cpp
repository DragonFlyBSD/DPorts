--- third_party/kineto/libkineto/src/ThreadUtil.cpp.orig
+++ third_party/kineto/libkineto/src/ThreadUtil.cpp
@@ -91,6 +91,8 @@
     sysTid = static_cast<int32_t>(GetCurrentThreadId());
 #elif defined __FreeBSD__
     syscall(SYS_thr_self, &sysTid);
+#elif defined __DragonFly__
+    sysTid = static_cast<int32_t>(lwp_gettid());
 #elif defined _AIX
     sysTid = pthread_self();
 #else
