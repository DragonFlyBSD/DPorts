--- zconvo.lv2/src/zeta-convolver.h.orig	2025-05-12 15:55:45 UTC
+++ zconvo.lv2/src/zeta-convolver.h
@@ -32,7 +32,7 @@ namespace LV2ZetaConvolver
 #undef ZCSEMA_IS_IMPLEMENTED
 #endif
 
-#if defined(__linux__) || defined(__GNU__) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(PTW32_VERSION) || defined (__WINPTHREADS_VERSION)
+#if defined(__linux__) || defined(__GNU__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__FreeBSD_kernel__) || defined(PTW32_VERSION) || defined (__WINPTHREADS_VERSION)
 
 #include <semaphore.h>
 
