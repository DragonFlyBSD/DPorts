--- extern/glog/src/config.h.orig	2020-08-31 11:59:44 UTC
+++ extern/glog/src/config.h
@@ -1,6 +1,6 @@
 #if defined(__APPLE__)
  #include "config_mac.h"
-#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
  #include "config_freebsd.h"
 #elif defined(__MINGW32__)
  #include "windows/config.h"
