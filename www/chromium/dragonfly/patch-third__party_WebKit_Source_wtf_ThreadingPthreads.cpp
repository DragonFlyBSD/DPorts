--- third_party/WebKit/Source/wtf/ThreadingPthreads.cpp.intermediate	2016-11-29 20:34:07.000000000 +0200
+++ third_party/WebKit/Source/wtf/ThreadingPthreads.cpp
@@ -100,7 +100,11 @@ ThreadIdentifier currentThread()
 #elif OS(LINUX)
     return syscall(__NR_gettid);
 #elif OS(BSD)
+# ifndef __DragonFly__
     return pthread_getthreadid_np();
+# else
+    return syscall(SYS_lwp_gettid);
+# endif
 #elif OS(ANDROID)
     return gettid();
 #else
