--- libs/hid/hid_libusb.c.orig
+++ libs/hid/hid_libusb.c
@@ -65,7 +65,7 @@
     } while (0)
 #endif
 
-#if !defined(__FreeBSD__) && !defined(__OpenBSD__)
+#if !defined(__FreeBSD__) && !defined(__DragonFly__) && !defined(__OpenBSD__)
 #define DETACH_KERNEL_DRIVER
 #endif
 
