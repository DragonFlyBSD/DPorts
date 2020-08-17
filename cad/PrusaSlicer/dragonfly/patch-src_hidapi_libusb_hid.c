--- src/hidapi/libusb/hid.c.intermediate	2020-08-17 17:13:43.000000000 +0000
+++ src/hidapi/libusb/hid.c
@@ -313,7 +313,7 @@ static int get_usage(uint8_t *report_des
 }
 #endif /* INVASIVE_GET_USAGE */
 
-#if defined(__FreeBSD__) && __FreeBSD__ < 10
+#if defined(__FreeBSD__) && __FreeBSD__ < 10 && !defined(__DragonFly__)
 /* The libusb version included in FreeBSD < 10 doesn't have this function. In
    mainline libusb, it's inlined in libusb.h. This function will bear a striking
    resemblance to that one, because there's about one way to code it.
