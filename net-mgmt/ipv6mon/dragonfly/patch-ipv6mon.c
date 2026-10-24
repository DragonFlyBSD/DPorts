--- ipv6mon.c.intermediate	2026-09-02 11:03:35 UTC
+++ ipv6mon.c
@@ -55,7 +55,7 @@
 #include <ifaddrs.h>
 #ifdef __linux__
 	#include <netpacket/packet.h>
-#elif defined (__FreeBSD__) || defined(__NetBSD__) || defined (__OpenBSD__) || defined(__APPLE__)
+#elif defined (__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__) || defined (__OpenBSD__) || defined(__APPLE__)
 	#include <net/if_dl.h>
 #endif
 #include <syslog.h>
@@ -2192,7 +2192,7 @@ int get_if_addrs(struct iface_data *idata){
 
 #ifdef __linux__
 	struct sockaddr_ll	*sockpptr;
-#elif defined (__FreeBSD__) || defined(__NetBSD__) || defined (__OpenBSD__) || defined(__APPLE__)
+#elif defined (__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__) || defined (__OpenBSD__) || defined(__APPLE__)
 	struct sockaddr_dl	*sockpptr;
 #endif
 
@@ -2216,7 +2216,7 @@ int get_if_addrs(struct iface_data *idata){
 					}
 				}
 			}
-#elif defined (__FreeBSD__) || defined(__NetBSD__) || defined (__OpenBSD__) || defined(__APPLE__)
+#elif defined (__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__) || defined (__OpenBSD__) || defined(__APPLE__)
 			if( !(idata->ether_flag) && ((ptr->ifa_addr)->sa_family == AF_LINK)){
 				if(strncmp(idata->iface, ptr->ifa_name, IFACE_LENGTH-1) == 0){
 					sockpptr = (struct sockaddr_dl *) (ptr->ifa_addr);
@@ -2233,7 +2233,7 @@ int get_if_addrs(struct iface_data *idata){
 				if(!(idata->ip6_local_flag) && (((sockin6ptr->sin6_addr).s6_addr16[0] & htons(0xffc0)) == htons(0xfe80))){
 					if(strncmp(idata->iface, ptr->ifa_name, IFACE_LENGTH-1) == 0){
 						idata->ip6_local = sockin6ptr->sin6_addr;
-#if defined (__FreeBSD__) || defined(__NetBSD__) || defined (__OpenBSD__) || defined(__APPLE__)
+#if defined (__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__) || defined (__OpenBSD__) || defined(__APPLE__)
 						/* BSDs store the interface index in s6_addr16[1], so we must clear it */
 						idata->ip6_local.s6_addr16[1] =0;
 						idata->ip6_local.s6_addr16[2] =0;
