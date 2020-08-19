--- input/drivers_hid/libusb_hid.c.orig	2020-03-20 16:34:45 UTC
+++ input/drivers_hid/libusb_hid.c
@@ -16,7 +16,7 @@
 #include <stdlib.h>
 #include <string.h>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <libusb.h>
 #else
 #include <libusb-1.0/libusb.h>
@@ -43,7 +43,7 @@ typedef struct libusb_hid
    joypad_connection_t *slots;
    sthread_t *poll_thread;
    int can_hotplug;
-#if defined(__FreeBSD__) && LIBUSB_API_VERSION <= 0x01000102
+#if (defined(__FreeBSD__) && LIBUSB_API_VERSION <= 0x01000102) || defined(__DragonFly__)
    libusb_hotplug_callback_handle hp;
 #else
    int hp; /* libusb_hotplug_callback_handle is just int */
