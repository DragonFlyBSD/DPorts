--- qga/commands-posix.c.orig	2023-04-18 14:44:39.215959000 +0200
+++ qga/commands-posix.c	2023-04-18 14:50:41.701388000 +0200
@@ -2881,7 +2881,7 @@ static int guest_get_network_stats(const
     return -1;
 }
 
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 /*
  * Fill "buf" with MAC address by ifaddrs. Pointer buf must point to a
  * buffer with ETHER_ADDR_LEN length at least.
