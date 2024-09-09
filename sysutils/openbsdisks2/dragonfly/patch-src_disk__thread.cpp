--- src/disk_thread.cpp.orig	2024-01-14 08:26:01 UTC
+++ src/disk_thread.cpp
@@ -30,7 +30,9 @@
 
 #include <fcntl.h>
 #include <sys/disklabel.h>
+#ifndef __DragonFly__
 #include <sys/dkio.h>
+#endif
 #include <sys/ioctl.h>
 #include <util.h>
 
