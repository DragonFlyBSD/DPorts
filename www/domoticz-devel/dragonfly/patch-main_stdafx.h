--- main/stdafx.h.orig
+++ main/stdafx.h
@@ -38,7 +38,7 @@
 	#endif
 #endif
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	#include <netinet/in.h>
 #endif
 
