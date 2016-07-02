--- ioctl_stat.c.intermediate	2016-06-29 10:16:40 UTC
+++ ioctl_stat.c
@@ -30,7 +30,7 @@
 #include <fcntl.h>		/* open */
 #include <sys/ioctl.h>		/* ioctl */
 #include <errno.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/sysctl.h>
 #include <sys/socket.h>
 #include <net/if.h>
@@ -45,7 +45,7 @@
 #		include <linux/if_ppp.h>
 #	else				/* most everything else */
 #		include <net/if.h>
-#		if !defined(__FreeBSD__)
+#		if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #			include <net/ppp_defs.h>
 #			include <net/if_ppp.h>
 #		endif /* ! __FreeBSD__ */
@@ -69,7 +69,7 @@ void getsocket(if_data *ifd)
 void ioctl_stat(if_data *ifd)
 {
 	struct ifreq ifr;
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	static int		if_ix = -1;
 	struct ifmibdata	ifmd;
 	size_t			ifmd_sz = sizeof(ifmd);
@@ -94,7 +94,7 @@ void ioctl_stat(if_data *ifd)
 		return;
 	}
 	
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 	memset(&req, 0, sizeof(req));
 #endif
 
@@ -104,7 +104,7 @@ void ioctl_stat(if_data *ifd)
 #define ifr_name ifr__name
 #endif	
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	name[0] = CTL_NET;
 	name[1] = PF_LINK;
 	name[2] = NETLINK_GENERIC;
