--- pcap-bpf.c.orig	2018-06-24 17:54:20 UTC
+++ pcap-bpf.c
@@ -45,7 +45,7 @@
 #endif
 #include <sys/utsname.h>
 
-#if defined(__FreeBSD__) && defined(SIOCIFCREATE2)
+#if (defined(__FreeBSD__) || defined(__DragonFly__)) && defined(SIOCIFCREATE2)
 /*
  * Add support for capturing on FreeBSD usbusN interfaces.
  */
@@ -1459,7 +1459,7 @@ pcap_cleanup_bpf(pcap_t *p)
 		}
 #endif /* HAVE_BSD_IEEE80211 */
 
-#if defined(__FreeBSD__) && defined(SIOCIFCREATE2)
+#if (defined(__FreeBSD__) || defined(__DragonFly__)) && defined(SIOCIFCREATE2)
 		/*
 		 * Attempt to destroy the usbusN interface that we created.
 		 */
@@ -1843,7 +1843,7 @@ pcap_activate_bpf(pcap_t *p)
 	 * If this is FreeBSD, and the device name begins with "usbus",
 	 * try to create the interface if it's not available.
 	 */
-#if defined(__FreeBSD__) && defined(SIOCIFCREATE2)
+#if (defined(__FreeBSD__) || defined(__DragonFly__)) && defined(SIOCIFCREATE2)
 	if (strncmp(p->opt.device, usbus_prefix, USBUS_PREFIX_LEN) == 0) {
 		/*
 		 * Do we already have an interface with that name?
@@ -2639,7 +2639,7 @@ check_bpf_bindable(const char *name)
 	return (1);
 }
 
-#if defined(__FreeBSD__) && defined(SIOCIFCREATE2)
+#if (defined(__FreeBSD__) || defined(__DragonFly__)) && defined(SIOCIFCREATE2)
 static int
 get_usb_if_flags(const char *name _U_, bpf_u_int32 *flags _U_, char *errbuf _U_)
 {
@@ -2835,7 +2835,7 @@ pcap_platform_finddevs(pcap_if_list_t *d
 	    get_if_flags) == -1)
 		return (-1);	/* failure */
 
-#if defined(__FreeBSD__) && defined(SIOCIFCREATE2)
+#if (defined(__FreeBSD__) || defined(__DragonFly__)) && defined(SIOCIFCREATE2)
 	if (finddevs_usb(devlistp, errbuf) == -1)
 		return (-1);
 #endif
