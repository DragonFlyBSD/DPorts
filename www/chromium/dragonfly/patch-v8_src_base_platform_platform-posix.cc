--- v8/src/base/platform/platform-posix.cc.intermediate	2015-02-03 09:51:28 UTC
+++ v8/src/base/platform/platform-posix.cc
@@ -260,7 +260,11 @@ int OS::GetCurrentThreadId() {
 #elif V8_OS_ANDROID
   return static_cast<int>(gettid());
 #elif V8_OS_FREEBSD
+#  ifdef __DragonFly__
+  return static_cast<int>(lwp_gettid());
+#  else
   return static_cast<int>(pthread_getthreadid_np());
+#  endif
 #else
   return static_cast<int>(pthread_self());
 #endif
