diff --git base/process/launch_posix.cc base/process/launch_posix.cc
index 237c642a6f9f..24d0bbbc83ec 100644
--- base/process/launch_posix.cc
+++ base/process/launch_posix.cc
@@ -57,7 +57,7 @@
 #include <sys/ioctl.h>
 #endif
 
-#if BUILDFLAG(IS_FREEBSD)
+#if BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
 #include <sys/event.h>
 #include <sys/ucontext.h>
 #endif
@@ -213,6 +213,8 @@ static const char kFDDir[] = "/dev/fd";
 static const char kFDDir[] = "/dev/fd";
 #elif BUILDFLAG(IS_OPENBSD)
 static const char kFDDir[] = "/dev/fd";
+#elif BUILDFLAG(IS_DRAGONFLY)
+static const char kFDDir[] = "/dev/fd";
 #elif BUILDFLAG(IS_ANDROID)
 static const char kFDDir[] = "/proc/self/fd";
 #endif
