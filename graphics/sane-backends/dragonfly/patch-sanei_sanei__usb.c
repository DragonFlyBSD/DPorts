--- sanei/sanei_usb.c.orig	2013-08-28 00:47:03.000000000 +0000
+++ sanei/sanei_usb.c
@@ -118,7 +118,10 @@ GetNextDescriptor( struct usb_descriptor
 #include <dev/usb/usb.h>
 #endif /* __FreeBSD__ */
 #if defined (__DragonFly__)
-#include <bus/usb/usb.h>
+#include <sys/param.h>
+#  if __DragonFly_version < 300703
+#    include <bus/usb/usb.h>
+#  endif
 #endif
 
 #define BACKEND_NAME	sanei_usb
