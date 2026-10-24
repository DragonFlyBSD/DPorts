--- src/3rdparty/chromium/base/process/launch_posix.cc.orig	2026-10-23 12:00:00 UTC
+++ src/3rdparty/chromium/base/process/launch_posix.cc
@@ -52,7 +52,7 @@
 #include <sys/ioctl.h>
 #endif
 
-#if BUILDFLAG(IS_FREEBSD)
+#if BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
 #include <dlfcn.h>
 #include <sys/event.h>
 #include <sys/ucontext.h>
@@ -234,6 +234,8 @@ static const char kFDDir[] = "/dev/fd";
 #elif BUILDFLAG(IS_FREEBSD)
 static const char kFDDir[] = "/dev/fd";
 #elif BUILDFLAG(IS_OPENBSD)
+static const char kFDDir[] = "/dev/fd";
+#elif BUILDFLAG(IS_DRAGONFLY)
 static const char kFDDir[] = "/dev/fd";
 #elif BUILDFLAG(IS_ANDROID)
 static const char kFDDir[] = "/proc/self/fd";
