--- src/compat.h.orig	2016-02-12 08:48:41 UTC
+++ src/compat.h
@@ -5,7 +5,7 @@
 #include "config.h"
 #endif
 
-#ifdef __FreeBSD__
+#if defined __FreeBSD__ || defined __DragonFly__
 #define __dead __dead2
 #endif /* __FreeBSD__ */
 
