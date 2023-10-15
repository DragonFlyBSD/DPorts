--- util-src/pposix.c.orig	2023-10-11 00:32:24 UTC
+++ util-src/pposix.c
@@ -32,7 +32,7 @@
 #endif
 #endif
 
-#if ! defined(__FreeBSD__)
+#if ! defined(__FreeBSD__) && !defined(__DragonFly__)
 #ifndef _POSIX_C_SOURCE
 #define _POSIX_C_SOURCE 200809L
 #endif
