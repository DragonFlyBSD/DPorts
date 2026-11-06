--- winpr/include/winpr/platform.h.orig	2026-11-05 11:07:23 UTC
+++ winpr/include/winpr/platform.h
@@ -738,7 +738,7 @@
 // It is only used for VirtualChannelInit, and all FreeRDP channels use VirtualChannelInitEx
 // The old virtual channel API is only realistically used on Windows where TLS is available
 #if defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 201112L) && \
-    !defined(__STDC_NO_THREADS__) // C11
+    !defined(__STDC_NO_THREADS__) && !defined(__DragonFly__) // C11, no <threads.h> on DragonFly
 #include <threads.h>
 
 #define WINPR_TLS thread_local
