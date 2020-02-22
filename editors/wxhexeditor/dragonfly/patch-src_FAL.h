--- src/FAL.h.orig	2017-12-31 02:15:18.000000000 +0000
+++ src/FAL.h
@@ -73,7 +73,11 @@
 
 	#ifdef BSD
 		#include <sys/ptrace.h>
+	   #ifdef __DragonFly__
+		#include <sys/diskslice.h>
+	   #else
 		#include <sys/disk.h>
+	   #endif
 	#else
 		#include <linux/fs.h>
 	#endif
