--- src/common/config.h.orig	2015-12-14 16:22:28.000000000 +0200
+++ src/common/config.h
@@ -39,7 +39,7 @@
 #		define LOVE_MACOSX 1
 #	endif
 #endif
-#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 // I know it's not linux, but it seems most "linux-only" code is bsd-compatible
 #	define LOVE_LINUX 1
 #endif
