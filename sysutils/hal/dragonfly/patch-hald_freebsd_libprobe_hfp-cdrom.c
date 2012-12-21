--- hald/freebsd/libprobe/hfp-cdrom.c.orig	2008-08-10 15:50:10.000000000 +0200
+++ hald/freebsd/libprobe/hfp-cdrom.c	2012-12-21 18:56:09.798312000 +0100
@@ -32,7 +32,11 @@
 #include <unistd.h>
 #include <sys/ioctl.h>
 #include <sys/types.h>
+#ifdef __DragonFly__
+#include <sys/nata.h>
+#else
 #include <sys/ata.h>
+#endif
 #include <stdio.h>
 #include <camlib.h>
 #include <cam/scsi/scsi_message.h>
