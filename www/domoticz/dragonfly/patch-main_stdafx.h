--- main/stdafx.h.orig	2019-05-10 09:37:55 UTC
+++ main/stdafx.h
@@ -37,7 +37,7 @@ typedef unsigned char       BYTE;
 	#endif
 #endif
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	#include <netinet/in.h>
 #endif
 
