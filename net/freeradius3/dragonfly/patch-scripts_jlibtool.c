--- scripts/jlibtool.c.orig	2019-11-14 17:08:23 UTC
+++ scripts/jlibtool.c
@@ -79,7 +79,7 @@
 #  define LD_LIBRARY_PATH_LOCAL		"DYLD_FALLBACK_LIBRARY_PATH"
 #endif
 
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || (defined(__sun) && defined(__GNUC__))
+#if defined(__linux__) || defined(__DragonFly__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || (defined(__sun) && defined(__GNUC__))
 #  define SHELL_CMD 			"/bin/sh"
 #  define DYNAMIC_LIB_EXT		"so"
 #  define MODULE_LIB_EXT		"so"
