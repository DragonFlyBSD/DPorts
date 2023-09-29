--- third_party/ittapi/src/ittnotify/jitprofiling.c.orig	2023-09-24 19:15:39 UTC
+++ third_party/ittapi/src/ittnotify/jitprofiling.c
@@ -9,7 +9,7 @@
 #if ITT_PLATFORM==ITT_PLATFORM_WIN
 #include <windows.h>
 #endif /* ITT_PLATFORM==ITT_PLATFORM_WIN */
-#if ITT_PLATFORM != ITT_PLATFORM_MAC && ITT_PLATFORM != ITT_PLATFORM_FREEBSD
+#if ITT_PLATFORM != ITT_PLATFORM_MAC && ITT_PLATFORM != ITT_PLATFORM_FREEBSD && ITT_PLATFORM != ITT_PLATFORM_DRAGONFLY
 #include <malloc.h>
 #endif
 #include <stdlib.h>
