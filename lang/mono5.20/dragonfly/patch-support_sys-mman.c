--- support/sys-mman.c.orig	2019-07-16 18:16:12 UTC
+++ support/sys-mman.c
@@ -17,7 +17,7 @@
 /* For mincore () */
 #define _DARWIN_C_SOURCE
 #endif
-#if defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 /* For mincore () */
 #define __BSD_VISIBLE 1
 #endif
