--- src/file/mmc_device_freebsd.c.orig	2026-09-04 09:54:27 UTC
+++ src/file/mmc_device_freebsd.c
@@ -6,7 +6,11 @@
 #include <stdlib.h>
 #include <string.h>
 
+#ifdef __DragonFly__
+#include <bus/cam/scsi/scsi_message.h>
+#else
 #include <cam/scsi/scsi_message.h>
+#endif
 #include <camlib.h>
 
 #include "mmc_device.h"
