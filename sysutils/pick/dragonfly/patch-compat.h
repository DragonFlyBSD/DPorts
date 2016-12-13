--- compat.h.orig	2016-10-20 07:33:58 UTC
+++ compat.h
@@ -5,7 +5,7 @@
 #include "config.h"
 #endif
 
-#ifdef __FreeBSD__
+#if defined __FreeBSD__ || defined __DragonFly__
 #define __dead __dead2
 #endif /* __FreeBSD__ */
 
