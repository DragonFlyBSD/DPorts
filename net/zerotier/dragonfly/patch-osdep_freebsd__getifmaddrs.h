--- osdep/freebsd_getifmaddrs.h.orig	2019-09-22 14:02:44 UTC
+++ osdep/freebsd_getifmaddrs.h
@@ -51,6 +51,7 @@ struct ifmaddrs {
 #include <sys/cdefs.h>
 
 
+#if defined(__NetBSD__) || defined(__OpenBSD__)
 /*
  * Message format for use in obtaining information about multicast addresses
  * from the routing socket.
@@ -63,6 +64,7 @@ struct ifma_msghdr {
 	int	ifmam_flags;	/* value of ifa_flags */
 	int	ifmam_index;	/* index for associated ifp */
 };
+#endif // __NetBSD__ || __OpenBSD__
 
 
 extern int getifaddrs(struct ifaddrs **);
