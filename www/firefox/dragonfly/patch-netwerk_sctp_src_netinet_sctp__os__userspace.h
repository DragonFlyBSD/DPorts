--- netwerk/sctp/src/netinet/sctp_os_userspace.h.orig	2013-10-25 22:27:38.000000000 +0000
+++ netwerk/sctp/src/netinet/sctp_os_userspace.h
@@ -383,7 +383,8 @@ struct udphdr {
 #else /* !defined(Userspace_os_Windows) */
 #include <sys/cdefs.h> /* needed? added from old __FreeBSD__ */
 #include <sys/socket.h>
-#if defined(__Userspace_os_FreeBSD) || defined(__Userspace_os_OpenBSD) || defined(ANDROID)
+#if defined(__Userspace_os_FreeBSD) || defined(__Userspace_os_OpenBSD) \
+ || defined(ANDROID) || defined(__Userspace_os_DragonFly)
 #include <pthread.h>
 #endif
 typedef pthread_mutex_t userland_mutex_t;
@@ -1117,7 +1118,8 @@ sctp_get_mbuf_for_msg(unsigned int space
 /* with the current included files, this is defined in Linux but
  *  in FreeBSD, it is behind a _KERNEL in sys/socket.h ...
  */
-#if defined(__Userspace_os_FreeBSD) || defined(__Userspace_os_OpenBSD)
+#if defined(__Userspace_os_FreeBSD) || defined(__Userspace_os_OpenBSD) \
+ || defined(__Userspace_os_DragonFly)
 /* stolen from /usr/include/sys/socket.h */
 #define CMSG_ALIGN(n)   _ALIGN(n)
 #elif defined(__Userspace_os_Darwin)
