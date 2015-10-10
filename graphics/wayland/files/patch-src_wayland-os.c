--- src/wayland-os.c.orig	2015-06-13 00:31:24 +0200
+++ src/wayland-os.c
@@ -30,7 +30,6 @@
 #include <unistd.h>
 #include <fcntl.h>
 #include <errno.h>
-#include <sys/epoll.h>
 
 #include "../config.h"
 #include "wayland-os.h"
@@ -62,11 +61,13 @@
 {
 	int fd;
 
+#ifdef SOCK_CLOEXEC
 	fd = socket(domain, type | SOCK_CLOEXEC, protocol);
 	if (fd >= 0)
 		return fd;
 	if (errno != EINVAL)
 		return -1;
+#endif
 
 	fd = socket(domain, type, protocol);
 	return set_cloexec_or_close(fd);
@@ -121,6 +122,7 @@
 ssize_t
 wl_os_recvmsg_cloexec(int sockfd, struct msghdr *msg, int flags)
 {
+#ifdef MSG_CMSG_CLOEXEC
 	ssize_t len;
 
 	len = recvmsg(sockfd, msg, flags | MSG_CMSG_CLOEXEC);
@@ -128,25 +130,9 @@
 		return len;
 	if (errno != EINVAL)
 		return -1;
-
-	return recvmsg_cloexec_fallback(sockfd, msg, flags);
-}
-
-int
-wl_os_epoll_create_cloexec(void)
-{
-	int fd;
-
-#ifdef EPOLL_CLOEXEC
-	fd = epoll_create1(EPOLL_CLOEXEC);
-	if (fd >= 0)
-		return fd;
-	if (errno != EINVAL)
-		return -1;
 #endif
 
-	fd = epoll_create(1);
-	return set_cloexec_or_close(fd);
+	return recvmsg_cloexec_fallback(sockfd, msg, flags);
 }
 
 int
