--- external/PlayfieldEngine/external/NoctLang/include/noct/c89compat.h.orig	2026-04-30 07:06:04 UTC
+++ external/PlayfieldEngine/external/NoctLang/include/noct/c89compat.h
@@ -216,7 +216,7 @@ extern "C" {
 #endif
 
 /* FreeBSD */
-#if defined(__FreeBSD__) && !defined(NOCT_USE_UNITY)
+#if (defined(__FreeBSD__) || defined(__DragonFly__)) && !defined(NOCT_USE_UNITY)
 #define NOCT_TARGET_FREEBSD
 #ifndef NOCT_TARGET_POSIX
 #define NOCT_TARGET_POSIX
