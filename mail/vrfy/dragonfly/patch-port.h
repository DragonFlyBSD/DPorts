--- port.h.orig	1999-05-11 01:04:08.000000000 +0200
+++ port.h
@@ -40,7 +40,7 @@
 ** Special definitions for certain platforms.
 */
 
-#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#if defined(__DragonFly__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
 #define ERRLIST_DEFINED		/* don't declare sys_errlist */
 #endif
 
