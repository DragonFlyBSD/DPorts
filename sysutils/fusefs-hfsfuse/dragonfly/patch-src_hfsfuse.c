--- src/hfsfuse.c.orig	2018-01-18 14:20:39 UTC
+++ src/hfsfuse.c
@@ -34,7 +34,7 @@
 #include "version.h"
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define ENODATA ENOATTR
 #endif
 
