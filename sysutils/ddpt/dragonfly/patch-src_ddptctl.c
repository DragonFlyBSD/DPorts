--- src/ddptctl.c.orig	2014-12-27 08:01:02.000000000 +0200
+++ src/ddptctl.c
@@ -90,7 +90,9 @@ const char * ddptctl_version_str = "0.95
 #ifdef SG_LIB_FREEBSD
 #include <sys/ioctl.h>
 #include <libgen.h>
+#ifndef __DragonFly__
 #include <sys/disk.h>
+#endif
 #include <sys/filio.h>
 #endif
 
