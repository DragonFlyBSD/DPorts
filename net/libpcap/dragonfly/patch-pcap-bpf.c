--- pcap-bpf.c.orig	2016-10-26 00:07:59 UTC
+++ pcap-bpf.c
@@ -48,7 +48,7 @@
 #endif
 #include <sys/utsname.h>
 
-#if defined(__FreeBSD__) && defined(SIOCIFCREATE2)
+#if (defined(__FreeBSD__) || defined(__DragonFly__)) && defined(SIOCIFCREATE2)
 /*
  * Add support for capturing on FreeBSD usbusN interfaces.
  */
@@ -1451,7 +1451,7 @@ pcap_cleanup_bpf(pcap_t *p)
 		}
 #endif /* HAVE_BSD_IEEE80211 */
 
-#if defined(__FreeBSD__) && defined(SIOCIFCREATE2)
+#if (defined(__FreeBSD__) || defined(__DragonFly__)) && defined(SIOCIFCREATE2)
 		/*
 		 * Attempt to destroy the usbusN interface that we created.
 		 */
@@ -1825,7 +1825,7 @@ pcap_activate_bpf(pcap_t *p)
 	 * If this is FreeBSD, and the device name begins with "usbus",
 	 * try to create the interface if it's not available.
 	 */
-#if defined(__FreeBSD__) && defined(SIOCIFCREATE2)
+#if (defined(__FreeBSD__) || defined(__DragonFly__)) && defined(SIOCIFCREATE2)
 	if (strncmp(p->opt.device, usbus_prefix, USBUS_PREFIX_LEN) == 0) {
 		/*
 		 * Do we already have an interface with that name?
@@ -2582,7 +2582,7 @@ check_bpf_bindable(const char *name)
 	return (1);
 }
 
-#if defined(__FreeBSD__) && defined(SIOCIFCREATE2)
+#if (defined(__FreeBSD__) || defined(__DragonFly__)) && defined(SIOCIFCREATE2)
 static int
 finddevs_usb(pcap_if_t **alldevsp, char *errbuf)
 {
@@ -2662,7 +2662,7 @@ pcap_platform_finddevs(pcap_if_t **allde
 	if (pcap_findalldevs_interfaces(alldevsp, errbuf, check_bpf_bindable) == -1)
 		return (-1);	/* failure */
 
-#if defined(__FreeBSD__) && defined(SIOCIFCREATE2)
+#if (defined(__FreeBSD__) || defined(__DragonFly__)) && defined(SIOCIFCREATE2)
 	if (finddevs_usb(alldevsp, errbuf) == -1)
 		return (-1);
 #endif
