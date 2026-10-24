--- pcap-bpf.c.orig	2026-09-13 13:16:00 UTC
+++ pcap-bpf.c
@@ -43,7 +43,7 @@
 #endif
 #include <sys/utsname.h>
 
-#if defined(__FreeBSD__) && __FreeBSD_version < 1600006
+#if (defined(__FreeBSD__) && __FreeBSD_version < 1600006) || defined(__DragonFly__)
 /*
  * Add support for creating FreeBSD usbusN interfaces as necessary.
  */
@@ -1763,7 +1763,7 @@ pcap_cleanup_bpf(pcap_t *p)
 		}
 #endif /* HAVE_BSD_IEEE80211 */
 
-#if defined(__FreeBSD__) && __FreeBSD_version < 1600006
+#if (defined(__FreeBSD__) && __FreeBSD_version < 1600006) || defined(__DragonFly__)
 		/*
 		 * Attempt to destroy the usbusN interface that we created.
 		 */
@@ -2038,7 +2038,7 @@ pcap_activate_bpf(pcap_t *p)
 	}
 #endif /* __APPLE__ */
 
-#if defined(__FreeBSD__) && __FreeBSD_version < 1600006
+#if (defined(__FreeBSD__) && __FreeBSD_version < 1600006) || defined(__DragonFly__)
 	/*
 	 * If this is FreeBSD 15 or earlier, and the device name begins
 	 * with "usbus", try to create the interface if it's not available.
@@ -2846,7 +2846,7 @@ check_bpf_bindable(const char *name)
 	return (1);
 }
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 static int
 get_flags_stub(const char *name _U_, bpf_u_int32 *flags _U_, char *errbuf _U_)
 {
@@ -3138,7 +3138,7 @@ pcapint_platform_finddevs(pcap_if_list_t *devlistp, ch
 		return (-1);
 #endif
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #if __FreeBSD_version >= 1600006
 	if (finddevs_bpf(devlistp, errbuf) == -1)
 		return (-1);
