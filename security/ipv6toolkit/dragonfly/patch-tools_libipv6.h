--- tools/libipv6.h.orig	2015-03-16 02:37:45 UTC
+++ tools/libipv6.h
@@ -123,7 +123,7 @@ struct filters{
 	#define PCAP_NETMASK_UNKNOWN	0xffffffff
 #endif
 
-#if defined (__FreeBSD__) || defined(__NetBSD__) || defined (__OpenBSD__) || defined(__APPLE__) || defined(__FreeBSD_kernel__) || defined(sun) || defined(__sun)
+#if defined (__FreeBSD__) || defined(__NetBSD__) || defined (__OpenBSD__) || defined(__APPLE__) || defined(__FreeBSD_kernel__) || defined(sun) || defined(__sun) || defined(__DragonFly__)
 	#define	PCAP_TIMEOUT			1
 #else
 	#define	PCAP_TIMEOUT			0
@@ -639,7 +639,7 @@ struct	decode6{
 
 
 
-#if defined (__FreeBSD__) || defined(__NetBSD__) || defined (__OpenBSD__) || defined(__APPLE__)
+#if defined (__FreeBSD__) || defined(__NetBSD__) || defined (__OpenBSD__) || defined(__APPLE__) || defined(__DragonFly__)
     #ifndef s6_addr16
 	    #define s6_addr16	__u6_addr.__u6_addr16
     #endif
@@ -696,7 +696,7 @@ struct	decode6{
 #endif
 
 
-#if !(defined (__FreeBSD__) || defined(__NetBSD__) || defined (__OpenBSD__) || defined(__APPLE__))
+#if !(defined (__FreeBSD__) || defined(__NetBSD__) || defined (__OpenBSD__) || defined(__APPLE__) || defined(__DragonFly__))
 /* Definitions for Linux */
 
 	#ifndef _NETINET_ICMP6_H
@@ -923,7 +923,7 @@ struct next_hop{
         (  (!(sa) || ((struct sockaddr *)(sa))->sa_len == 0) ?  \
            sizeof(long)         :                               \
            ((struct sockaddr *)(sa))->sa_len )
-#elif defined (__FreeBSD__) || defined(__NetBSD__) || defined (__OpenBSD__)
+#elif defined (__FreeBSD__) || defined(__NetBSD__) || defined (__OpenBSD__) || defined(__DragonFly__)
 #define SA_SIZE(sa)                                            \
         (  (!(sa) || ((struct sockaddr *)(sa))->sa_len == 0) ?  \
            sizeof(long)         :                               \
