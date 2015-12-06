--- BlockOut/Http.cpp.bak	2015-12-06 16:39:41.000000000 +0200
+++ BlockOut/Http.cpp
@@ -30,6 +30,9 @@
 #else
 #include <Winsock2.h>
 #endif
+#ifdef __DragonFly__
+#include <sys/select.h>
+#endif
 
 #ifdef WINDOWS
 // Initialize Winsock
