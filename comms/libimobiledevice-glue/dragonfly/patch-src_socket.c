--- src/socket.c.orig	Tue Oct  8 23:21:36 2024
+++ src/socket.c	Sat Nov
@@ -55,7 +55,7 @@ static int wsa_init = 0;
 #ifdef AF_INET6
 #include <net/if.h>
 #include <ifaddrs.h>
-#if defined (__APPLE__) || defined (__FreeBSD__) || defined (__HAIKU__)
+#if defined (__APPLE__) || defined (__FreeBSD__) || defined (__HAIKU__) || defined(__DragonFly__)
 #include <net/if_dl.h>
 #endif
 #ifdef __linux__
@@ -895,13 +895,13 @@ int get_primary_mac_address(unsigned char mac_addr_buf
 			if (ifa->ifa_flags & IFF_LOOPBACK) {
 				continue;
 			}
-#if defined(__APPLE__) || defined (__FreeBSD__) || defined (__HAIKU__)
+#if defined(__APPLE__) || defined (__FreeBSD__) || defined (__HAIKU__) || defined(__DragonFly__)
 			if (ifa->ifa_addr->sa_family != AF_LINK) {
 				continue;
 			}
 #if defined (__APPLE__)
 			if (!strcmp(ifa->ifa_name, "en0")) {
-#elif defined (__FreeBSD__) || defined (__HAIKU__)
+#elif defined (__FreeBSD__) || defined (__HAIKU__) || defined(__DragonFly__)
 			{
 #endif
 				memcpy(mac_addr_buf, (unsigned char *)LLADDR((struct sockaddr_dl *)(ifa)->ifa_addr), 6);
