--- src/3rdparty/chromium/third_party/crashpad/crashpad/util/misc/capture_context.h.orig	2026-10-23 12:00:00 UTC
+++ src/3rdparty/chromium/third_party/crashpad/crashpad/util/misc/capture_context.h
@@ -22,7 +22,7 @@
 #elif BUILDFLAG(IS_WIN)
 #include <windows.h>
 #elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID) || \
-      BUILDFLAG(IS_FREEBSD)
+      BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
 #include <ucontext.h>
 #elif BUILDFLAG(IS_OPENBSD)
 #include <sys/signal.h>
