--- usrsctplib/netinet/sctp_os_userspace.h.orig	2020-04-06 14:04:26 UTC
+++ usrsctplib/netinet/sctp_os_userspace.h
@@ -1088,10 +1088,10 @@ sctp_get_mbuf_for_msg(unsigned int space
 /* with the current included files, this is defined in Linux but
  *  in FreeBSD, it is behind a _KERNEL in sys/socket.h ...
  */
-#if defined(__Userspace_os_DragonFly) || defined(__Userspace_os_FreeBSD) || defined(__Userspace_os_OpenBSD) || defined(__Userspace_os_NaCl)
+#if defined(__Userspace_os_FreeBSD) || defined(__Userspace_os_OpenBSD) || defined(__Userspace_os_NaCl)
 /* stolen from /usr/include/sys/socket.h */
 #define CMSG_ALIGN(n)   _ALIGN(n)
-#elif defined(__Userspace_os_NetBSD)
+#elif defined(__Userspace_os_NetBSD) || defined(__Userspace_os_DragonFly)
 #define CMSG_ALIGN(n)   (((n) + __ALIGNBYTES) & ~__ALIGNBYTES)
 #elif defined(__Userspace_os_Darwin)
 #if !defined(__DARWIN_ALIGNBYTES)
