--- src/cl_device_id.c.bak	2015-10-03 09:27:01.000000000 +0300
+++ src/cl_device_id.c
@@ -36,7 +36,7 @@
 #include <stdlib.h>
 #if defined(__linux__)
 #include <sys/sysinfo.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/types.h>
 #include <sys/sysctl.h>
 #endif
