--- Libs/C/usb.c.orig	2012-12-19 18:46:05.000000000 +0200
+++ Libs/C/usb.c
@@ -14,7 +14,7 @@ int     usb_device_info(struct usb_devic
 	{
 	    fputs("---------------------------------------------------------------------------\n",stderr);
 	    fputs("Could not read USB configurations.  This is probably a permissions problem.\n",stderr);
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	    fputs("Check /dev/usb* and /dev/ugen*.\n",stderr);
 #endif
 	    fputs("Run 'man roboctl' for more information.\n",stderr);
