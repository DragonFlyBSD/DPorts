--- dualserverd.cpp.intermediate	2013-08-19 09:58:19.800566000 +0000
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
 
@@ -99,6 +104,8 @@ const char send404[] = "HTTP/1.1 404 Not
 const char td200[] = "<td>%s</td>";
 #ifdef __FreeBSD__
 const char sVersion[] = "Dual DHCP DNS Server Version 7.02 for FreeBSD Build 7019";
+#elif defined __DragonFly__
+const char sVersion[] = "Dual DHCP DNS Server Version 7.02 for DragonFly Build 7019";
 #else
 const char sVersion[] = "Dual DHCP DNS Server Version 7.02 Linux Build 7019";
 #endif
@@ -294,7 +301,7 @@ int main(int argc, char **argv)
         strcpy(leaFile, "/tmp/dualserver.state");
 
     if (!iniFile[0])
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
         strcpy(iniFile, "/usr/local/etc/dualserver.conf");
 #else
         strcpy(iniFile, "/etc/dualserver.ini");
@@ -4285,7 +4292,7 @@ MYDWORD sdmess(data9 *req)
 	else if (req->dhcpp.header.bp_broadcast || !req->remote.sin_addr.s_addr || req->reqIP)
 	{
 		req->remote.sin_port = htons(IPPORT_DHCPC);
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly)
         req->remote.sin_addr.s_addr = network.dhcpConn[req->sockInd].addr.sin_addr.s_addr | (~network.dhcpConn[req->sockInd].mask);
         //printf("broadcast dhcp response to %s\n",inet_ntoa(req->remote.sin_addr));
 #else
@@ -9532,7 +9539,7 @@ void *init(void *lparam)
 					setsockopt(newNetwork.dhcpListener.sock, SOL_SOCKET, SO_REUSEADDR, (char*)&newNetwork.dhcpListener.reUseVal, newNetwork.dhcpListener.reUseSize);
 					newNetwork.dhcpListener.pktinfoVal = true;
 					newNetwork.dhcpListener.pktinfoSize = sizeof(newNetwork.dhcpListener.pktinfoVal);
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
                     setsockopt(newNetwork.dhcpListener.sock, IPPROTO_IP, IP_RECVIF, &newNetwork.dhcpListener.pktinfoVal, newNetwork.dhcpListener.pktinfoSize);
 #else
 					setsockopt(newNetwork.dhcpListener.sock, IPPROTO_IP, IP_PKTINFO, &newNetwork.dhcpListener.pktinfoVal, newNetwork.dhcpListener.pktinfoSize);
@@ -10179,7 +10186,7 @@ void *updateStateFile(void *lparam)
 
 MYWORD gdmess(data9 *req, MYBYTE sockInd)
 {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   struct cmsghdr *cmsg;
   struct sockaddr_dl * isdl;
   struct sockaddr_in *isin;
@@ -10200,7 +10207,7 @@ MYWORD gdmess(data9 *req, MYBYTE sockInd
         req->msg.msg_name = &req->remote;
         req->msg.msg_namelen = sizeof(sockaddr_in);
         req->msg.msg_control = &req->msgcontrol;
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly)
         req->msg.msg_controllen = sizeof(req->msgcontrol);
 #else
         req->msg.msg_controllen = sizeof(msg_control);
@@ -10213,7 +10220,7 @@ MYWORD gdmess(data9 *req, MYBYTE sockInd
         if (errno || req->bytes <= 0)
             return 0;
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
         isdl = NULL;
         isin = NULL;
         MYDWORD addr=0;
