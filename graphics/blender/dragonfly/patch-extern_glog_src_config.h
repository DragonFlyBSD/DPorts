--- extern/glog/src/config.h.orig	2016-03-23 10:49:49.000000000 +0200
+++ extern/glog/src/config.h
@@ -4,7 +4,7 @@
 /* Namespace for Google classes */
 #if defined(__APPLE__)
  #include "config_mac.h"
-#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
  #include "config_freebsd.h"
 #elif defined(__MINGW32__)
  #include "windows/config.h"
