--- unix/sh_unix.c.orig	2006-12-31 19:01:34.000000000 +0200
+++ unix/sh_unix.c
@@ -28,7 +28,7 @@ Foundation, Inc., 59 Temple Place - Suit
 
 #include "../qcommon/qcommon.h"
 
-#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#if defined(__DragonFly__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
 #include <machine/param.h>
 #endif
 
