--- external/PlayfieldEngine/include/playfield/c89compat.h.orig	2026-04-30 07:06:04 UTC
+++ external/PlayfieldEngine/include/playfield/c89compat.h
@@ -215,7 +215,7 @@ extern "C" {
 #endif
 
 /* FreeBSD */
-#if defined(__FreeBSD__) && !defined(PF_TARGET_UNITY)
+#if (defined(__FreeBSD__) || defined(__DragonFly__)) && !defined(PF_TARGET_UNITY)
 #define PF_TARGET_FREEBSD
 #ifndef PF_TARGET_POSIX
 #define PF_TARGET_POSIX
