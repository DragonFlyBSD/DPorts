--- uhubctl.c.orig	2026-10-26 07:08:52 UTC
+++ uhubctl.c
@@ -29,7 +29,7 @@
 #include <unistd.h>
 #endif
 
-#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(_WIN32)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(_WIN32) || defined(__DragonFly__)
 #include <libusb.h>
 #else
 #include <libusb-1.0/libusb.h>
@@ -445,6 +445,12 @@ static int get_hub_info(struct libusb_device *dev, struct hub_info *info)
 
             /* Get container_id: */
             bzero(info->container_id, sizeof(info->container_id));
+#ifdef __DragonFly__
+            /* DragonFly's base libusb has no BOS/container-id API: leave
+             * container_id empty, as for a hub that reports none. */
+            rc = 0;
+            if (rc == 0) {
+#else
             struct libusb_bos_descriptor *bos;
             rc = libusb_get_bos_descriptor(devh, &bos);
             if (rc == 0) {
@@ -468,6 +474,7 @@ static int get_hub_info(struct libusb_device *dev, struct hub_info *info)
                     }
                 }
                 libusb_free_bos_descriptor(bos);
+#endif
 
                 /* Raspberry Pi 4B hack for USB3 root hub: */
                 if (strlen(info->container_id)==0 &&
