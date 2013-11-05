--- mozilla/netwerk/sctp/src/user_ip6_var.h.orig	2013-09-11 03:22:48.000000000 +0000
+++ mozilla/netwerk/sctp/src/user_ip6_var.h
@@ -95,7 +95,8 @@ struct ip6_hdr {
 #endif
 #endif
 
-#if !defined(__Userspace_os_FreeBSD) && !defined(__Userspace_os_OpenBSD)
+#if !defined(__Userspace_os_FreeBSD) && !defined(__Userspace_os_OpenBSD) \
+ && !defined(__Userspace_os_DragonFly)
 struct route_in6 {
 	struct	rtentry *ro_rt;
 	struct	llentry *ro_lle;
