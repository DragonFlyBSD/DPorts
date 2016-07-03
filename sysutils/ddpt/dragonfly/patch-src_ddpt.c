--- src/ddpt.c.orig	2014-12-27 08:01:02.000000000 +0200
+++ src/ddpt.c
@@ -93,7 +93,9 @@ static const char * ddpt_version_str = "
 #ifdef SG_LIB_FREEBSD
 #include <sys/ioctl.h>
 #include <libgen.h>
+#ifndef __DragonFly__
 #include <sys/disk.h>
+#endif
 #include <sys/filio.h>
 #endif
 
