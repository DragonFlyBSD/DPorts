--- getMB-smb_ioctl.c.intermediate	2013-04-14 19:48:03.899064000 +0000
+++ getMB-smb_ioctl.c
@@ -14,11 +14,15 @@
 #include <sys/types.h>
 #include <sys/ioctl.h>
 
+#ifdef __DragonFly__
+#include <bus/smbus/smb.h>
+#else
 #if __FreeBSD_version >= 500000
 #include <dev/smbus/smb.h>
 #else
 #include <machine/smb.h>
 #endif
+#endif
 
 #include "methods.h"
 
