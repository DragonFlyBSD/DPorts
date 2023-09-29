diff --git components/sync_device_info/local_device_info_util_linux.cc components/sync_device_info/local_device_info_util_linux.cc
index 0be5361ac9a..e58e4ab1b62 100644
--- components/sync_device_info/local_device_info_util_linux.cc
+++ components/sync_device_info/local_device_info_util_linux.cc
@@ -9,7 +9,7 @@
 
 #include "base/linux_util.h"
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/param.h>
 #define HOST_NAME_MAX MAXHOSTNAMELEN
 #endif
