--- zsockets.cc.orig
+++ zsockets.cc
@@ -27,7 +27,7 @@
 #include <sys/ioctl.h>
 #include <sys/un.h>
 #include <netinet/tcp.h>
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <netinet/in.h>
 #endif
 #include <net/if.h>
@@ -408,7 +408,7 @@
 	}
         memcpy (&mcreq.ipv6mr_multiaddr, &(A6->sin6_addr), sizeof(struct in6_addr));
         mcreq.ipv6mr_interface = if_nametoindex (iface);
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
         if (setsockopt (fd, IPPROTO_IPV6, IPV6_JOIN_GROUP, (char*) &mcreq, sizeof (mcreq)))
 #else
         if (setsockopt (fd, IPPROTO_IPV6, IPV6_ADD_MEMBERSHIP, (char*) &mcreq, sizeof (mcreq)))
