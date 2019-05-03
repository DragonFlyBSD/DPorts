--- src/common/config.h.orig	2016-10-24 21:03:27 UTC
+++ src/common/config.h
@@ -48,7 +48,7 @@
 #		define LOVE_MACOSX 1
 #	endif
 #endif
-#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 // I know it's not linux, but it seems most "linux-only" code is bsd-compatible
 #	define LOVE_LINUX 1
 #endif
