--- dualserverd.cpp.orig	2014-09-21 08:13:19.230298000 +0000
+++ dualserverd.cpp
@@ -48,6 +48,11 @@
 #ifdef __FreeBSD__
 #include <ifaddrs.h>
 #endif
+#ifdef __DragonFly__
+#include <sys/socket.h>
+#include <net/if_dl.h>
+#include <ifaddrs.h>
+#endif
 using namespace std;
 #include "dualserverd.h"
 
@@ -95,6 +100,8 @@ const char send200[] = "HTTP/1.1 200 OK\
 const char line200[] = "<td>%s</td>";
 #ifdef __FreeBSD__
 const char sVersion[] = "Dual DHCP DNS Server Version 6.94 for FreeBSD";
+#elif defined __DragonFly__
+const char sVersion[] = "Dual DHCP DNS Server Version 6.94 for DragonFly";
 #else
 const char sVersion[] = "Dual DHCP DNS Server Version 6.94 Linux Build 7011";
 #endif
@@ -4015,7 +4022,7 @@ MYDWORD sdmess(data9 *req)
 	else if (req->dhcpp.header.bp_broadcast || !req->remote.sin_addr.s_addr || req->reqIP)
 	{
 		req->remote.sin_port = htons(IPPORT_DHCPC);
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
     req->remote.sin_addr.s_addr = network.dhcpConn[req->sockInd].addr.sin_addr.s_addr | 
     (~network.dhcpConn[req->sockInd].mask);
     //printf("broadcast dhcp response to %s\n",inet_ntoa(req->remote.sin_addr));
@@ -9057,7 +9064,7 @@ void *init(void *lparam)
 					setsockopt(newNetwork.dhcpListener.sock, SOL_SOCKET, SO_REUSEADDR, (char*)&newNetwork.dhcpListener.reUseVal, newNetwork.dhcpListener.reUseSize);
 					newNetwork.dhcpListener.pktinfoVal = true;
 					newNetwork.dhcpListener.pktinfoSize = sizeof(newNetwork.dhcpListener.pktinfoVal);
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 					setsockopt(newNetwork.dhcpListener.sock, IPPROTO_IP, IP_RECVIF, &newNetwork.dhcpListener.pktinfoVal, newNetwork.dhcpListener.pktinfoSize);
 #else
 					setsockopt(newNetwork.dhcpListener.sock, IPPROTO_IP, IP_PKTINFO, &newNetwork.dhcpListener.pktinfoVal, newNetwork.dhcpListener.pktinfoSize);
@@ -9523,7 +9530,7 @@ void getInterfaces(data1 *network)
 
 			if (addr && !(flags & IFF_LOOPBACK))
 				addServer(network->allServers, addr);
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 			if (addr && mask && !(flags & IFF_POINTOPOINT) && !(flags & IFF_LOOPBACK))
 #else
 			if (addr && mask && !(flags & IFF_POINTOPOINT) && !(flags & IFF_LOOPBACK) && !(flags & IFF_DYNAMIC))
@@ -9686,7 +9693,7 @@ void *updateStateFile(void *lparam)
 
 MYWORD gdmess(data9 *req, MYBYTE sockInd)
 {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
     struct cmsghdr *cmsg;
     struct sockaddr_dl * isdl;
     struct sockaddr_in *isin;
@@ -9707,7 +9714,7 @@ MYWORD gdmess(data9 *req, MYBYTE sockInd
         req->msg.msg_name = &req->remote;
         req->msg.msg_namelen = sizeof(sockaddr_in);
         req->msg.msg_control = &req->msgcontrol;
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
         req->msg.msg_controllen = sizeof(req->msgcontrol);
 #else
         req->msg.msg_controllen = sizeof(msg_control);
@@ -9720,7 +9727,7 @@ MYWORD gdmess(data9 *req, MYBYTE sockInd
         if (errno || req->bytes <= 0)
             return 0;
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
         isdl = NULL;
         isin = NULL;
         MYDWORD addr=0;
