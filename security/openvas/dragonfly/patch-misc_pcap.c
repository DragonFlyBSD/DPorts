--- misc/pcap.c.orig	2021-02-01 15:26:51 UTC
+++ misc/pcap.c
@@ -442,7 +442,7 @@ getinterfaces (int *howmany)
     g_message (
       "getinterfaces: SIOCGIFCONF claims you have no network interfaces!");
 
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
   len = sizeof (struct ifmap);
 #else
   len = sizeof (struct sockaddr);
