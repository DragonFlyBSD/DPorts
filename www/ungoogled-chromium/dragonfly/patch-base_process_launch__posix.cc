diff --git base/process/launch_posix.cc base/process/launch_posix.cc
index 5c11a3e0f1ee..7a2f92900876 100644
--- base/process/launch_posix.cc
+++ base/process/launch_posix.cc
@@ -53,7 +53,7 @@
 #include <sys/ioctl.h>
 #endif
 
-#if BUILDFLAG(IS_FREEBSD)
+#if BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
 #include <sys/event.h>
 #include <sys/ucontext.h>
 #endif
@@ -222,6 +222,8 @@ static const char kFDDir[] = "/dev/fd";
 static const char kFDDir[] = "/dev/fd";
 #elif BUILDFLAG(IS_OPENBSD)
 static const char kFDDir[] = "/dev/fd";
+#elif BUILDFLAG(IS_DRAGONFLY)
+static const char kFDDir[] = "/dev/fd";
 #elif BUILDFLAG(IS_ANDROID)
 static const char kFDDir[] = "/proc/self/fd";
 #endif
