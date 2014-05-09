--- src/osgEarth/ThreadingUtils.cpp.intermediate	2014-05-09 14:24:31.817118000 +0000
+++ src/osgEarth/ThreadingUtils.cpp
@@ -23,7 +23,6 @@
 #else
 #   include <unistd.h>
 #   include <sys/syscall.h>
-#   include <sys/thr.h>
 #endif
 
 using namespace osgEarth::Threading;
@@ -39,6 +38,8 @@ unsigned osgEarth::Threading::getCurrent
   return (unsigned)::GetCurrentThreadId();
 #elif __APPLE__
   return ::syscall(SYS_thread_selfid);
+#elif __DragonFly__
+  return (unsigned)::syscall(SYS_lwp_gettid);
 #elif __FreeBSD__
   long lwpid;
   thr_self(&lwpid);
