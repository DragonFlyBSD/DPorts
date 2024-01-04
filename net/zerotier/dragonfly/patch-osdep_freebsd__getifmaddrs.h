--- osdep/freebsd_getifmaddrs.h.orig	2023-12-16 14:36:34 UTC
+++ osdep/freebsd_getifmaddrs.h
@@ -30,8 +30,8 @@
  *	BSDI ifaddrs.h,v 2.5 2000/02/23 14:51:59 dab Exp
  */
 
-#ifndef	_freebsd_getifmaddrs.h_
-#define	_freebsd_getifmaddrs.h_
+#ifndef	_freebsd_getifmaddrs_h_
+#define	_freebsd_getifmaddrs_h_
 
 /*
  * This may have been defined in <net/if.h>.  Note that if <net/if.h> is
@@ -51,6 +51,7 @@ struct ifmaddrs {
 #include <sys/cdefs.h>
 
 
+#ifndef __DragonFly__
 /*
  * Message format for use in obtaining information about multicast addresses
  * from the routing socket.
@@ -63,6 +64,7 @@ struct ifma_msghdr {
 	int	ifmam_flags;	/* value of ifa_flags */
 	int	ifmam_index;	/* index for associated ifp */
 };
+#endif // !__DragonFly__
 
 
 extern int getifaddrs(struct ifaddrs **);
