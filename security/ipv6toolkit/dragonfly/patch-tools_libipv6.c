--- tools/libipv6.c.orig	2015-04-05 14:01:29 UTC
+++ tools/libipv6.c
@@ -43,7 +43,7 @@
 	#include <linux/netlink.h>
 	#include <linux/rtnetlink.h>
 	#include <netpacket/packet.h>   /* For datalink structure */
-#elif defined (__FreeBSD__) || defined(__NetBSD__) || defined (__OpenBSD__) || defined(__APPLE__) || defined(__FreeBSD_kernel__) || defined(__sun) || defined(sun)
+#elif defined (__FreeBSD__) || defined(__NetBSD__) || defined (__OpenBSD__) || defined(__APPLE__) || defined(__FreeBSD_kernel__) || defined(__sun) || defined(sun) || defined(__DragonFly__)
 	#include <net/if_dl.h>
 	#include <net/route.h>
 #endif
@@ -1371,7 +1371,7 @@ int get_if_addrs(struct iface_data *idat
 
 #ifdef __linux__
 	struct sockaddr_ll	*sockpptr;
-#elif defined (__FreeBSD__) || defined(__NetBSD__) || defined (__OpenBSD__) || defined(__APPLE__) || defined(__FreeBSD_kernel__)
+#elif defined (__FreeBSD__) || defined(__NetBSD__) || defined (__OpenBSD__) || defined(__APPLE__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
 	struct sockaddr_dl	*sockpptr;
 #endif
 
@@ -1396,7 +1396,7 @@ int get_if_addrs(struct iface_data *idat
 				}
 			}
 		}
-#elif defined (__FreeBSD__) || defined(__NetBSD__) || defined (__OpenBSD__) || defined(__APPLE__) || defined(__FreeBSD_kernel__)
+#elif defined (__FreeBSD__) || defined(__NetBSD__) || defined (__OpenBSD__) || defined(__APPLE__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
 		if( !(idata->ether_flag) && ((ptr->ifa_addr)->sa_family == AF_LINK)){
 			if(strncmp(idata->iface, ptr->ifa_name, IFACE_LENGTH-1) == 0){
 				sockpptr = (struct sockaddr_dl *) (ptr->ifa_addr);
@@ -1413,7 +1413,7 @@ int get_if_addrs(struct iface_data *idat
 			if( !(idata->ip6_local_flag) &&  IN6_IS_ADDR_LINKLOCAL(&(sockin6ptr->sin6_addr))){
 				if(strncmp(idata->iface, ptr->ifa_name, IFACE_LENGTH-1) == 0){
 					idata->ip6_local = sockin6ptr->sin6_addr;
-#if defined (__FreeBSD__) || defined(__NetBSD__) || defined (__OpenBSD__) || defined(__APPLE__) || defined(__FreeBSD_kernel__)
+#if defined (__FreeBSD__) || defined(__NetBSD__) || defined (__OpenBSD__) || defined(__APPLE__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
 					/* BSDs store the interface index in s6_addr16[1], so we must clear it */
 					idata->ip6_local.s6_addr16[1] =0;
 					idata->ip6_local.s6_addr16[2] =0;
@@ -2773,7 +2773,7 @@ int sel_next_hop(struct iface_data *idat
 		return(FAILURE);
 	}
 }
-#elif defined (__FreeBSD__) || defined(__NetBSD__) || defined (__OpenBSD__) || defined(__APPLE__) || defined(__FreeBSD_kernel__) || defined(__sun) || defined(sun)
+#elif defined (__FreeBSD__) || defined(__NetBSD__) || defined (__OpenBSD__) || defined(__APPLE__) || defined(__FreeBSD_kernel__) || defined(__sun) || defined(sun) || defined(__DragonFly__)
 /*
  * Function: sel_next_hop()
  *
@@ -2889,7 +2889,7 @@ int sel_next_hop(struct iface_data *idat
 	close(sockfd);
 
 	if(idata->nhifindex_f){
-#if defined (__FreeBSD__) || defined(__NetBSD__) || defined (__OpenBSD__) || defined(__APPLE__) || defined(__FreeBSD_kernel__)
+#if defined (__FreeBSD__) || defined(__NetBSD__) || defined (__OpenBSD__) || defined(__APPLE__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
 		if(IN6_IS_ADDR_LINKLOCAL(&(idata->nhaddr))){
 			/* BSDs store the interface index in s6_addr16[1], so we must clear it */
 			idata->nhaddr.s6_addr16[1] =0;
@@ -2964,7 +2964,7 @@ int get_local_addrs(struct iface_data *i
 
 #ifdef __linux__
 	struct sockaddr_ll	*sockpptr;
-#elif defined (__FreeBSD__) || defined(__NetBSD__) || defined (__OpenBSD__) || defined(__APPLE__) || defined(__FreeBSD_kernel__)
+#elif defined (__FreeBSD__) || defined(__NetBSD__) || defined (__OpenBSD__) || defined(__APPLE__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
 	struct sockaddr_dl	*sockpptr;
 #endif
 
@@ -3011,7 +3011,7 @@ puts("DEBUG: ifa_name was null");
 
 			cif->ifindex= sockpptr->sll_ifindex;
 		}
-#elif defined (__FreeBSD__) || defined(__NetBSD__) || defined (__OpenBSD__) || defined(__APPLE__) || defined(__FreeBSD_kernel__)
+#elif defined (__FreeBSD__) || defined(__NetBSD__) || defined (__OpenBSD__) || defined(__APPLE__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
 		if((ptr->ifa_addr)->sa_family == AF_LINK){
 			sockpptr = (struct sockaddr_dl *) (ptr->ifa_addr);
 			if(sockpptr->sdl_alen == ETHER_ADDR_LEN){
@@ -3043,7 +3043,7 @@ puts("DEBUG: ifa_name was null");
 				(cif->ip6_local.prefix[cif->ip6_local.nprefix])->len = 128;
 				(cif->ip6_local.prefix[cif->ip6_local.nprefix])->ip6 = sockin6ptr->sin6_addr;
 
-#if defined (__FreeBSD__) || defined(__NetBSD__) || defined (__OpenBSD__) || defined(__APPLE__) || defined(__FreeBSD_kernel__)
+#if defined (__FreeBSD__) || defined(__NetBSD__) || defined (__OpenBSD__) || defined(__APPLE__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
 					/* BSDs store the interface index in s6_addr16[1], so we must clear it */
 				(cif->ip6_local.prefix[cif->ip6_local.nprefix])->ip6.s6_addr16[1] =0;
 				(cif->ip6_local.prefix[cif->ip6_local.nprefix])->ip6.s6_addr16[2] =0;
