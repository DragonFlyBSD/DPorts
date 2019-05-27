--- config/platform/bsd.h.intermediate	2019-05-26 11:43:22.000000000 +0000
+++ config/platform/bsd.h
@@ -2,7 +2,7 @@
 #define __rez_platform_bsd_H__
 
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	#define rez_OS_BSD
 
 #endif
