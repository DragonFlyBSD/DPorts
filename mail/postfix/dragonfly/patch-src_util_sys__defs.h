--- src/util/sys_defs.h.orig	2025-11-15 22:37:18.628140000 +0100
+++ src/util/sys_defs.h	2025-11-15 23:00:56.472102000 +0100
@@ -125,6 +125,10 @@
 #define HAS_CLOSEFROM
 #endif
 
+#if defined(__DragonFly__) 
+#define HAS_CLOSEFROM
+#endif
+
 /* OpenBSD version is year+month */
 
 #if OpenBSD >= 199805			/* XXX */
@@ -174,7 +178,6 @@
 #endif
 
 #if defined(__DragonFly__)
-#define HAS_DEV_URANDOM
 #define HAS_ISSETUGID
 #define HAS_FUTIMES
 #define SOCKADDR_SIZE	socklen_t
