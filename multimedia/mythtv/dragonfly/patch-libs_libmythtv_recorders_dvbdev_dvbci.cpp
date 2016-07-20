--- libs/libmythtv/recorders/dvbdev/dvbci.cpp.orig	2015-06-16 19:03:30.000000000 +0300
+++ libs/libmythtv/recorders/dvbdev/dvbci.cpp
@@ -28,7 +28,7 @@
 #include <errno.h>
 #include <ctype.h>
 #include <linux/dvb/ca.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <stdlib.h>
 #else
 #  include <malloc.h>
