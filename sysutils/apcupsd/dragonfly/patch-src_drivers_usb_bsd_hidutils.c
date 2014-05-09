--- src/drivers/usb/bsd/hidutils.c.orig	2009-10-31 14:04:32.000000000 +0000
+++ src/drivers/usb/bsd/hidutils.c
@@ -26,8 +26,20 @@
 #include "apc.h"
 
 #include "hidutils.h"
+#ifdef __DragonFly__
+#include <sys/param.h>
+#  if __DragonFly_version < 300703
+#include <bus/usb/usb.h>
+#include <bus/usb/usbhid.h>
+#  else
+#include <bus/u4b/usb.h>
+#include <bus/u4b/usbhid.h>
+#include <bus/u4b/usb_ioctl.h>
+#  endif
+#else
 #include <dev/usb/usb.h>
 #include <dev/usb/usbhid.h>
+#endif
 
 #define MAX_SANE_DESCRIPTOR_LEN 4096
 
@@ -39,6 +51,9 @@
  */
 unsigned char *hidu_fetch_report_descriptor(int fd, int *rlen)
 {
+#if defined(__DragonFly__) && __DragonFly_version >= 300703
+   return NULL;
+#else
    int rc, i, rdesclen;
    struct usb_config_desc cdesc;
    struct usb_full_desc fdesc;
@@ -148,6 +163,7 @@ unsigned char *hidu_fetch_report_descrip
 
    *rlen = rdesclen;
    return (unsigned char *)req.ucr_data;
+#endif
 }
 
 /* Push a value onto the collection stack */
@@ -271,6 +287,9 @@ int hidu_locate_item(report_desc_t rdesc
  */
 int hidu_get_report(int fd, hid_item_t *item, unsigned char *data, int len)
 {
+#if defined(__DragonFly__) && __DragonFly_version >= 300703
+   return -1;
+#else
    int rc;
    struct usb_ctl_request req;
 
@@ -299,6 +318,7 @@ int hidu_get_report(int fd, hid_item_t *
    hex_dump(300, data, req.ucr_actlen);
 
    return req.ucr_actlen;
+#endif
 }
 
 /*
@@ -345,6 +365,9 @@ int hidu_set_report(int fd, hid_item_t *
  */
 const char *hidu_get_string(int fd, int index)
 {
+#if defined(__DragonFly__) && __DragonFly_version >= 300703
+   return NULL;
+#else
    int rc, i;
    struct usb_string_desc sd;
    static char string[128];
@@ -371,4 +394,5 @@ const char *hidu_get_string(int fd, int
 
    string[i] = '\0';
    return string;
+#endif
 }
