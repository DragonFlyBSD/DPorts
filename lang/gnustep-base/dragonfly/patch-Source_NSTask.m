--- Source/NSTask.m.orig	Sun Jan  8 08:41:32 2023
+++ Source/NSTask.m	Sat Nov
@@ -50,7 +50,7 @@
 #import "GSPrivate.h"
 
 #include <sys/types.h>
-#if defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #include <fcntl.h>
 #endif
 
