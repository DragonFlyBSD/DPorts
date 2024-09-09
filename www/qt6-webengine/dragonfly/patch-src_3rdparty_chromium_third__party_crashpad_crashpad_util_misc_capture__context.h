--- src/3rdparty/chromium/third_party/crashpad/crashpad/util/misc/capture_context.h.orig	2024-02-10 00:23:21 UTC
+++ src/3rdparty/chromium/third_party/crashpad/crashpad/util/misc/capture_context.h
@@ -21,7 +21,7 @@
 #include <mach/mach.h>
 #elif BUILDFLAG(IS_WIN)
 #include <windows.h>
-#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_DRAGONFLY)
 #include <ucontext.h>
 #elif BUILDFLAG(IS_FUCHSIA)
 #include <signal.h>
