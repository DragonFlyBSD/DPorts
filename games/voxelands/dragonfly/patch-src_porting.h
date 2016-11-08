--- src/porting.h.orig	2016-04-30 06:49:46 UTC
+++ src/porting.h
@@ -50,7 +50,7 @@
 	#define sleep_ms(x) usleep(x*1000)
 #endif
 
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 	#include <sys/types.h>
 	#include <sys/sysctl.h>
 #endif
