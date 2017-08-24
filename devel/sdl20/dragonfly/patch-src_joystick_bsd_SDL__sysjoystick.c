--- src/joystick/bsd/SDL_sysjoystick.c.orig	2016-10-20 05:56:26.000000000 +0200
+++ src/joystick/bsd/SDL_sysjoystick.c	2017-08-15 20:36:02.689385000 +0200
@@ -43,8 +43,8 @@
 #include <usb.h>
 #endif
 #ifdef __DragonFly__
-#include <bus/usb/usb.h>
-#include <bus/usb/usbhid.h>
+#include <bus/u4b/usb.h>
+#include <bus/u4b/usbhid.h>
 #else
 #include <dev/usb/usb.h>
 #include <dev/usb/usbhid.h>
@@ -59,13 +59,14 @@
 #endif
 
 #if defined(__FREEBSD__) || defined(__FreeBSD_kernel__)
-#ifndef __DragonFly__
 #include <osreldate.h>
-#endif
 #if __FreeBSD_kernel_version > 800063
 #include <dev/usb/usb_ioctl.h>
 #endif
 #include <sys/joystick.h>
+#elif defined(__DragonFly__)
+#include <bus/u4b/usb_ioctl.h>
+#include <sys/joystick.h>
 #endif
 
 #if SDL_JOYSTICK_USBHID_MACHINE_JOYSTICK_H
@@ -83,7 +84,8 @@
 
 struct report
 {
-#if defined(__FREEBSD__) && (__FreeBSD_kernel_version > 900000)
+#if (defined(__FREEBSD__) && (__FreeBSD_kernel_version > 900000)) || \
+    defined(__DragonFly__)
     void *buf; /* Buffer */
 #elif defined(__FREEBSD__) && (__FreeBSD_kernel_version > 800063)
     struct usb_gen_descriptor *buf; /* Buffer */
@@ -153,7 +155,7 @@
 
 #if defined(USBHID_UCR_DATA) || (defined(__FreeBSD_kernel__) && __FreeBSD_kernel_version <= 800063)
 #define REP_BUF_DATA(rep) ((rep)->buf->ucr_data)
-#elif (defined(__FREEBSD__) && (__FreeBSD_kernel_version > 900000))
+#elif (defined(__FREEBSD__) && (__FreeBSD_kernel_version > 900000)) || defined(__DragonFly__)
 #define REP_BUF_DATA(rep) ((rep)->buf)
 #elif (defined(__FREEBSD__) && (__FreeBSD_kernel_version > 800063))
 #define REP_BUF_DATA(rep) ((rep)->buf->ugd_data)
@@ -329,7 +331,7 @@
         goto usberr;
     }
     rep = &hw->inreport;
-#if defined(__FREEBSD__) && (__FreeBSD_kernel_version > 800063) || defined(__FreeBSD_kernel__)
+#if defined(__FREEBSD__) && (__FreeBSD_kernel_version > 800063) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
     rep->rid = hid_get_report_id(fd);
     if (rep->rid < 0) {
 #else
@@ -377,7 +379,7 @@
                      hw->path);
         goto usberr;
     }
-#if defined(USBHID_NEW) || (defined(__FREEBSD__) && __FreeBSD_kernel_version >= 500111) || defined(__FreeBSD_kernel__)
+#if defined(USBHID_NEW) || (defined(__FREEBSD__) && __FreeBSD_kernel_version >= 500111) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
     hdata = hid_start_parse(hw->repdesc, 1 << hid_input, rep->rid);
 #else
     hdata = hid_start_parse(hw->repdesc, 1 << hid_input);
@@ -480,7 +482,7 @@
     int nbutton, naxe = -1;
     Sint32 v;
 
-#if defined(__FREEBSD__) || SDL_JOYSTICK_USBHID_MACHINE_JOYSTICK_H || defined(__FreeBSD_kernel__)
+#if defined(__FREEBSD__) || SDL_JOYSTICK_USBHID_MACHINE_JOYSTICK_H || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
     struct joystick gameport;
     static int x, y, xmin = 0xffff, ymin = 0xffff, xmax = 0, ymax = 0;
 
@@ -534,7 +536,7 @@
     rep = &joy->hwdata->inreport;
 
     while (read(joy->hwdata->fd, REP_BUF_DATA(rep), rep->size) == rep->size) {
-#if defined(USBHID_NEW) || (defined(__FREEBSD__) && __FreeBSD_kernel_version >= 500111) || defined(__FreeBSD_kernel__)
+#if defined(USBHID_NEW) || (defined(__FREEBSD__) && __FreeBSD_kernel_version >= 500111) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
         hdata = hid_start_parse(joy->hwdata->repdesc, 1 << hid_input, rep->rid);
 #else
         hdata = hid_start_parse(joy->hwdata->repdesc, 1 << hid_input);
@@ -643,7 +645,7 @@
     int len;
 
 #ifdef __DragonFly__
-    len = hid_report_size(rd, r->rid, repinfo[repind].kind);
+    len = hid_report_size(rd, repinfo[repind].kind, r->rid);
 #elif __FREEBSD__
 # if (__FreeBSD_kernel_version >= 460000) || defined(__FreeBSD_kernel__)
 #  if (__FreeBSD_kernel_version <= 500111)
@@ -668,7 +670,7 @@
     r->size = len;
 
     if (r->size > 0) {
-#if defined(__FREEBSD__) && (__FreeBSD_kernel_version > 900000)
+#if (defined(__FREEBSD__) && (__FreeBSD_kernel_version > 900000)) || defined(__DragonFly__)
         r->buf = SDL_malloc(r->size);
 #else
         r->buf = SDL_malloc(sizeof(*r->buf) - sizeof(REP_BUF_DATA(r)) +
