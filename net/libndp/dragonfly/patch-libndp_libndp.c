--- libndp/libndp.c.orig	2026-11-05 12:42:19 UTC
+++ libndp/libndp.c
@@ -44,6 +44,14 @@
 #define ND_OPT_PI_FLAG_RADDR	0x20
 #define ifr_hwaddr				ifr_addr
 #define ETH_ALEN				6
+#endif
+
+#ifdef __DragonFly__
+#include <ifaddrs.h>
+#include <net/if_dl.h>
+#define ND_RA_FLAG_HOME_AGENT	ND_RA_FLAG_HA
+#define ND_OPT_PI_FLAG_RADDR	0x20
+#define ETH_ALEN		ETHER_ADDR_LEN
 #endif
 
 #include "ndp_private.h"
@@ -765,8 +773,38 @@
 	}
 }
 
+#ifdef __DragonFly__
+/* No SIOCGIFHWADDR here: take the AF_LINK address from getifaddrs(). */
 static int ndp_get_iface_mac(int ifindex, char *ptr)
 {
+	struct ifaddrs *ifap, *ifa;
+	int err = -ENODEV;
+
+	if (getifaddrs(&ifap) == -1) {
+		pr_err("%s: Failed to get iface addresses", __func__);
+		return -errno;
+	}
+
+	for (ifa = ifap; ifa; ifa = ifa->ifa_next) {
+		struct sockaddr_dl *sdl = (struct sockaddr_dl *) ifa->ifa_addr;
+
+		if (!sdl || sdl->sdl_family != AF_LINK || sdl->sdl_index != ifindex)
+			continue;
+		if (sdl->sdl_alen != ETHER_ADDR_LEN)
+			break;
+		memcpy(ptr, LLADDR(sdl), ETHER_ADDR_LEN);
+		err = 0;
+		break;
+	}
+	if (err)
+		pr_err("%s: Failed to get iface mac with index %d\n", __func__, ifindex);
+
+	freeifaddrs(ifap);
+	return err;
+}
+#else
+static int ndp_get_iface_mac(int ifindex, char *ptr)
+{
 	int sockfd, err = 0;
 	struct ifreq ifr;
 
@@ -794,6 +832,7 @@
 	close(sockfd);
 	return err;
 }
+#endif
 
 static void ndp_msg_opt_set_linkaddr(struct ndp_msg *msg, int ndp_opt)
 {
