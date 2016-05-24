--- src/osgEarth/ThreadingUtils.cpp.intermediate	2016-05-23 16:05:03 UTC
+++ src/osgEarth/ThreadingUtils.cpp
@@ -23,7 +23,6 @@
 #else
 #   include <unistd.h>
 #   include <sys/syscall.h>
-#   include <sys/thr.h>
 #endif
 
 using namespace osgEarth::Threading;
@@ -41,6 +40,8 @@ unsigned osgEarth::Threading::getCurrent
   return ::syscall(SYS_thread_selfid);
 #elif __ANDROID__
   return gettid();
+#elif __DragonFly__
+  return (unsigned)::syscall(SYS_lwp_gettid);
 #elif __FreeBSD__
   long lwpid;
   thr_self(&lwpid);
