--- hald/freebsd/hf-usb.c.intermediate	2014-04-14 16:09:00.739251000 +0000
+++ hald/freebsd/hf-usb.c
@@ -36,9 +36,23 @@
 #if __FreeBSD_version >= 800064
 #include <legacy/dev/usb/usb.h>
 #else
+#ifdef __DragonFly__
+#  if __DragonFly_version < 300703
+#include <bus/usb/usb.h>
+#  else
+#include <bus/u4b/usb.h>
+#include <bus/u4b/usb_ioctl.h>
+#define	USB_CONFIG_DESCRIPTOR_SIZE 9
+#define	USB_DEVICE_DESCRIPTOR_SIZE 18
+#define	USB_INTERFACE_DESCRIPTOR_SIZE 9
+#define	USB_ENDPOINT_DESCRIPTOR_SIZE 7
+#define	DFU4B 1
+#  endif
+#else
 #include <dev/usb/usb.h>
 #endif
 #endif
+#endif
 
 #include "../logger.h"
 #include "../osspec.h"
@@ -275,9 +289,11 @@ hf_usb_get_devname (const struct usb_dev
   g_return_val_if_fail(di != NULL, NULL);
   g_return_val_if_fail(driver != NULL, NULL);
 
+#ifndef DFU4B
   for (i = 0; i < USB_MAX_DEVNAMES; i++)
     if (hf_devtree_is_driver(di->udi_devnames[i], driver))
       return di->udi_devnames[i];
+#endif
 
   return NULL;
 }
@@ -307,7 +323,11 @@ hf_usb_device_new (HalDevice *parent,
   hal_device_property_set_string(device, "info.vendor", di->udi_vendor);
 
   hal_device_property_set_int(device, "usb_device.bus_number", di->udi_bus);
+#ifndef DFU4B
   hal_device_property_set_int(device, "usb_device.configuration_value", di->udi_config);
+#else
+  hal_device_property_set_int(device, "usb_device.configuration_value", di->udi_config_index);
+#endif
   hal_device_property_set_int(device, "usb_device.num_configurations", device_desc->bNumConfigurations);
   hal_device_property_set_int(device, "usb_device.device_class", di->udi_class);
   hal_device_property_set_int(device, "usb_device.device_subclass", di->udi_subclass);
@@ -347,6 +367,7 @@ hf_usb_device_new (HalDevice *parent,
   hal_device_property_set_string(device, "usb_device.product", di->udi_product);
   hal_device_property_set_string(device, "usb_device.vendor", di->udi_vendor);
 
+#ifndef DFU4B
   if (di->udi_config != 0 && hf_usb_get_descriptor(controller->fd,
 						   di->udi_addr,
 						   UDESC_CONFIG,
@@ -354,6 +375,15 @@ hf_usb_device_new (HalDevice *parent,
 						   &config_desc,
 						   USB_CONFIG_DESCRIPTOR_SIZE,
 						   NULL))
+#else
+  if (hf_usb_get_descriptor(controller->fd,
+                                        di->udi_addr,
+                                        UDESC_CONFIG,
+                                        di->udi_config_index,
+                                        &config_desc,
+                                        USB_CONFIG_DESCRIPTOR_SIZE,
+                                        NULL))
+#endif
     {
       can_wake_up = (config_desc.bmAttributes & UC_REMOTE_WAKEUP) != 0;
       num_interfaces = config_desc.bNumInterface;
@@ -374,6 +404,7 @@ hf_usb_device_new (HalDevice *parent,
   hal_device_property_set_bool(device, "usb_device.can_wake_up", can_wake_up);
   hal_device_property_set_int(device, "usb_device.num_interfaces", num_interfaces);
 
+#ifndef DFU4B
   for (i = 0; i < di->udi_nports; i++)
     if (di->udi_ports[i] > 0 && di->udi_ports[i] < USB_MAX_DEVICES)
       {
@@ -390,9 +421,14 @@ hf_usb_device_new (HalDevice *parent,
    */
   if (*di->udi_devnames[0])
     hf_devtree_device_set_name(device, di->udi_devnames[0]);
+#endif
 
   if ((devname = hf_usb_get_devname(di, "ukbd")))	/* USB keyboard */
+#ifdef __DragonFly__
+    hf_device_set_input(device, "keyboard", "keys", devname);
+#else
     hf_device_set_input(device, "keyboard", "keys", NULL);
+#endif
   else if ((devname = hf_usb_get_devname(di, "ums")))	/* USB mouse */
     hf_device_set_input(device, "mouse", NULL, devname);
   else if ((devname = hf_usb_get_devname(di, "uhid")))	/* UHID device */
@@ -591,9 +627,11 @@ hf_usb_probe_device (HalDevice *parent,
 
   /* add child devices if this is a hub */
 
+#ifndef DFU4B
   for (i = 0; i < device_info->udi_nports; i++)
     if (device_info->udi_ports[i] > 0 && device_info->udi_ports[i] < USB_MAX_DEVICES)
       hf_usb_probe_address(device, controller, device_info->udi_ports[i]);
+#endif
 
   return TRUE;
 }
@@ -638,6 +676,7 @@ hf_usb_privileged_init (void)
     }
 }
 
+#ifndef DFU4B
 static void
 hf_usb_process_event (const struct usb_event *event)
 {
@@ -727,6 +766,7 @@ hf_usb_event_cb (GIOChannel *source, GIO
 
   return TRUE;
 }
+#endif
 
 static void
 hf_usb_init (void)
@@ -737,7 +777,9 @@ hf_usb_init (void)
     return;
 
   channel = g_io_channel_unix_new(hf_usb_fd);
+#ifndef DFU4B
   g_io_add_watch(channel, G_IO_IN, hf_usb_event_cb, NULL);
+#endif
 }
 
 static void
