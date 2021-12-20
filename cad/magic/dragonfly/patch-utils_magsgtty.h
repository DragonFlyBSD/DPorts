--- utils/magsgtty.h.orig	2020-05-24 07:00:08 UTC
+++ utils/magsgtty.h
@@ -33,7 +33,9 @@
 # endif
 
 #include <sys/ioctl.h>
+#ifndef __DragonFly__
 #include <sys/ioctl_compat.h>
+#endif
 
 #else
 #include <termio.h>
