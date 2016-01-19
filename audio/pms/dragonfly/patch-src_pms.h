--- src/pms.h.orig	2010-05-13 12:09:45.000000000 +0300
+++ src/pms.h
@@ -59,7 +59,7 @@
 #include "input.h"
 #include "mediator.h"
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	#include <sys/wait.h>
 #endif
 
