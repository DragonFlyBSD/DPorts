--- motion.h.orig	2016-10-25 04:39:24.000000000 +0300
+++ motion.h
@@ -12,7 +12,7 @@
 
 #include "config.h"
 
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 #define BSD
 #endif
 
