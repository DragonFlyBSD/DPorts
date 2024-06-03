diff --git base/process/launch_posix.cc base/process/launch_posix.cc
index 48284166206..7833e6ff808 100644
--- src/3rdparty/chromium/base/process/launch_posix.cc
+++ src/3rdparty/chromium/base/process/launch_posix.cc
@@ -55,7 +55,7 @@
 #include <sys/ioctl.h>
 #endif
 
-#if BUILDFLAG(IS_FREEBSD)
+#if BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
 #include <sys/event.h>
 #include <sys/ucontext.h>
 #endif
@@ -210,6 +210,8 @@ static const char kFDDir[] = "/dev/fd";
 static const char kFDDir[] = "/dev/fd";
 #elif BUILDFLAG(IS_OPENBSD)
 static const char kFDDir[] = "/dev/fd";
+#elif BUILDFLAG(IS_DRAGONFLY)
+static const char kFDDir[] = "/dev/fd";
 #elif BUILDFLAG(IS_ANDROID)
 static const char kFDDir[] = "/proc/self/fd";
 #endif
