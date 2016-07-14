--- ioparport.cpp.orig	2014-08-03 13:31:14.000000000 +0300
+++ ioparport.cpp
@@ -50,8 +50,13 @@ Dmitry Teytelman [dimtey@gmail.com] 14 J
 #endif
 
 #include <sys/ioctl.h>
+#ifdef __DragonFly__
+#  include <dev/misc/ppi/ppi.h>
+#  include <bus/ppbus/ppbconf.h>
+#else
 #  include <dev/ppbus/ppi.h>
 #  include <dev/ppbus/ppbconf.h>
+#endif
 
 #  define PARPORT_CONTROL_STROBE    STROBE
 #  define PARPORT_CONTROL_AUTOFD    AUTOFEED
