--- third_party/WebKit/Source/wtf/ThreadingPthreads.cpp.intermediate	2017-01-26 11:10:35.000000000 +0200
+++ third_party/WebKit/Source/wtf/ThreadingPthreads.cpp
@@ -96,7 +96,11 @@ ThreadIdentifier currentThread() {
 #elif OS(LINUX)
   return syscall(__NR_gettid);
 #elif OS(BSD)
+# ifndef __DragonFly__
   return pthread_getthreadid_np();
+# else
+  return syscall(SYS_lwp_gettid);
+# endif
 #elif OS(ANDROID)
   return gettid();
 #else
