--- src/cpu/jit_utils/jitprofiling/jitprofiling.c.orig	2019-07-26 00:33:10 UTC
+++ src/cpu/jit_utils/jitprofiling/jitprofiling.c
@@ -40,7 +40,7 @@
 #if ITT_PLATFORM==ITT_PLATFORM_WIN
 #include <windows.h>
 #endif /* ITT_PLATFORM==ITT_PLATFORM_WIN */
-#if ITT_PLATFORM != ITT_PLATFORM_MAC && ITT_PLATFORM != ITT_PLATFORM_FREEBSD
+#if ITT_PLATFORM != ITT_PLATFORM_MAC && ITT_PLATFORM != ITT_PLATFORM_FREEBSD && ITT_PLATFORM != ITT_PLATFORM_DRAGONFLY
 #include <malloc.h>
 #endif
 #include <stdlib.h>
