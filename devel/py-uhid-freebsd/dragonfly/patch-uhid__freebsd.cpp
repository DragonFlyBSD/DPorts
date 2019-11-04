--- uhid_freebsd.cpp.orig	2019-09-10 15:04:48 UTC
+++ uhid_freebsd.cpp
@@ -12,7 +12,11 @@
 #include <regex>
 
 #include <Python.h>
+#ifdef __DragonFly__
+#include <bus/u4b/usb_ioctl.h>
+#else
 #include <dev/usb/usb_ioctl.h>
+#endif
 
 PyDoc_STRVAR(uhid_freebsd_docs,
    "Get information on FreeBSD uhid devices\n");
