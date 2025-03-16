--- src/3rdparty/chromium/third_party/crashpad/crashpad/util/misc/capture_context.h.orig	Fri Feb 28 16:55:46 2025
+++ src/3rdparty/chromium/third_party/crashpad/crashpad/util/misc/capture_context.h	Fri Feb
@@ -22,7 +22,7 @@
 #elif BUILDFLAG(IS_WIN)
 #include <windows.h>
 #elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID) || \
-      BUILDFLAG(IS_FREEBSD)
+      BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
 #include <ucontext.h>
 #endif  // BUILDFLAG(IS_APPLE)
 
