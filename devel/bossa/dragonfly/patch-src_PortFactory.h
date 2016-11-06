--- src/PortFactory.h.orig	2016-09-16 09:12:11 UTC
+++ src/PortFactory.h
@@ -56,7 +56,7 @@ typedef LinuxPortFactory PortFactory;
 #elif defined(__APPLE__)
 #include "OSXPortFactory.h"
 typedef OSXPortFactory PortFactory;
-#elif defined(__OpenBSD__) || defined(__FreeBSD__)
+#elif defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
 // This is likely to work (but not tested) for the other BSDs as well
 #include "BSDPortFactory.h"
 typedef BSDPortFactory PortFactory;
