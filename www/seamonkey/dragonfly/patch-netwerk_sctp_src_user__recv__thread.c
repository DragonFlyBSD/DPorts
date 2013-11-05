--- mozilla/netwerk/sctp/src/user_recv_thread.c.orig	2013-09-11 03:22:48.000000000 +0000
+++ mozilla/netwerk/sctp/src/user_recv_thread.c
@@ -35,7 +35,7 @@
 #include <netinet/in.h>
 #include <unistd.h>
 #include <pthread.h>
-#if !defined(__Userspace_os_FreeBSD)
+#if !defined(__Userspace_os_FreeBSD) && !defined(__Userspace_os_DragonFly)
 #include <sys/uio.h>
 #else
 #include <user_ip6_var.h>
@@ -56,7 +56,8 @@
 #endif
 #endif
 #endif
-#if defined(__Userspace_os_FreeBSD) || defined(__Userspace_os_Darwin)
+#if defined(__Userspace_os_FreeBSD) || defined(__Userspace_os_Darwin) \
+ || defined(__Userspace_os_DragonFly)
 #include <net/route.h>
 #endif
 /* local macros and datatypes used to get IP addresses system independently */
@@ -67,12 +68,14 @@
 void recv_thread_destroy(void);
 #define MAXLEN_MBUF_CHAIN 32 /* What should this value be? */
 #define ROUNDUP(a, size) (((a) & ((size)-1)) ? (1 + ((a) | ((size)-1))) : (a))
-#if defined(__Userspace_os_FreeBSD) || defined(__Userspace_os_Darwin)
+#if defined(__Userspace_os_FreeBSD) || defined(__Userspace_os_Darwin) \
+ || defined(__Userspace_os_DragonFly)
 #define NEXT_SA(ap) ap = (struct sockaddr *) \
 	((caddr_t) ap + (ap->sa_len ? ROUNDUP(ap->sa_len, sizeof (uint32_t)) : sizeof(uint32_t)))
 #endif
 
-#if defined(__Userspace_os_Darwin) || defined(__Userspace_os_FreeBSD)
+#if defined(__Userspace_os_Darwin) || defined(__Userspace_os_FreeBSD) \
+ || defined(__Userspace_os_DragonFly)
 static void
 sctp_get_rtaddrs(int addrs, struct sockaddr *sa, struct sockaddr **rti_info)
 {
@@ -1074,7 +1077,8 @@ recv_thread_init(void)
 #else
 	unsigned int timeout = SOCKET_TIMEOUT; /* Timeout in milliseconds */
 #endif
-#if defined(__Userspace_os_Darwin) || defined(__Userspace_os_FreeBSD)
+#if defined(__Userspace_os_Darwin) || defined(__Userspace_os_FreeBSD) \
+ || defined(__Userspace_os_DragonFly)
 	if (SCTP_BASE_VAR(userspace_route) == -1) {
 		if ((SCTP_BASE_VAR(userspace_route) = socket(AF_ROUTE, SOCK_RAW, 0)) < 0) {
 			SCTPDBG(SCTP_DEBUG_USR, "Can't create routing socket (errno = %d).\n", errno);
@@ -1375,7 +1379,8 @@ recv_thread_init(void)
 	}
 #endif
 #if !defined(__Userspace_os_Windows)
-#if defined(__Userspace_os_Darwin) || defined(__Userspace_os_FreeBSD)
+#if defined(__Userspace_os_Darwin) || defined(__Userspace_os_FreeBSD) \
+ || defined(__Userspace_os_DragonFly)
 #if defined(INET) || defined(INET6)
 	if (SCTP_BASE_VAR(userspace_route) != -1) {
 		int rc;
@@ -1467,7 +1472,8 @@ recv_thread_init(void)
 void
 recv_thread_destroy(void)
 {
-#if defined(__Userspace_os_Darwin) || defined(__Userspace_os_FreeBSD)
+#if defined(__Userspace_os_Darwin) || defined(__Userspace_os_FreeBSD) \
+ || defined(__Userspace_os_DragonFly)
 #if defined(INET) || defined(INET6)
 	if (SCTP_BASE_VAR(userspace_route) != -1) {
 		close(SCTP_BASE_VAR(userspace_route));
