--- Libs/C/rct_machdep.h.orig	2012-12-19 18:46:05.000000000 +0200
+++ Libs/C/rct_machdep.h
@@ -1,5 +1,5 @@
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <bluetooth.h>
 #endif
 
