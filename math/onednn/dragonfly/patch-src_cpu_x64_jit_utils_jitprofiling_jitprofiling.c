--- src/cpu/x64/jit_utils/jitprofiling/jitprofiling.c.orig	2021-06-11 09:29:04.373345000 +0200
+++ src/cpu/x64/jit_utils/jitprofiling/jitprofiling.c	2021-06-11 09:29:36.622621000 +0200
@@ -40,7 +40,7 @@
 #if ITT_PLATFORM==ITT_PLATFORM_WIN
 #include <windows.h>
 #endif /* ITT_PLATFORM==ITT_PLATFORM_WIN */
-#if ITT_PLATFORM != ITT_PLATFORM_MAC && ITT_PLATFORM != ITT_PLATFORM_FREEBSD
+#if ITT_PLATFORM != ITT_PLATFORM_MAC && ITT_PLATFORM != ITT_PLATFORM_FREEBSD && ITT_PLATFORM != ITT_PLATFORM_DRAGONFLY
 #include <malloc.h>
 #endif
 #include <stdlib.h>
