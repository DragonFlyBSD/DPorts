--- deps/hiredis/fmacros.h.orig	2019-08-12 14:11:53 UTC
+++ deps/hiredis/fmacros.h
@@ -13,7 +13,7 @@
 #if defined(__sun__)
 #define _POSIX_C_SOURCE 200112L
 #else
-#if !(defined(__APPLE__) && defined(__MACH__)) && !(defined(__FreeBSD__))
+#if !(defined(__APPLE__) && defined(__MACH__)) && !(defined(__FreeBSD__)) && !defined(__DragonFly__)
 #define _XOPEN_SOURCE 600
 #endif
 #endif
