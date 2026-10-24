--- Proxy.cpp.orig
+++ Proxy.cpp
@@ -28,7 +28,7 @@
 
 #include "Misc.h"
 
-#if defined(__CYGWIN32__) || defined(__APPLE__) || defined(__FreeBSD__) || defined(__sun)
+#if defined(__CYGWIN32__) || defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__sun)
 #include <netinet/in_systm.h>
 #endif
 
