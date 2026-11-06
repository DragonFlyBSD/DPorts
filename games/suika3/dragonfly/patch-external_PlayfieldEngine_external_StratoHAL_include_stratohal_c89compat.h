--- external/PlayfieldEngine/external/StratoHAL/include/stratohal/c89compat.h.orig	2026-04-30 07:06:04 UTC
+++ external/PlayfieldEngine/external/StratoHAL/include/stratohal/c89compat.h
@@ -216,7 +216,7 @@ extern "C" {
 #endif
 
 /* FreeBSD */
-#if defined(__FreeBSD__) && !defined(HAL_TARGET_UNITY)
+#if (defined(__FreeBSD__) || defined(__DragonFly__)) && !defined(HAL_TARGET_UNITY)
 #define HAL_TARGET_FREEBSD
 #ifndef HAL_TARGET_POSIX
 #define HAL_TARGET_POSIX
