--- src/wayland-os.c.orig	2018-07-20 14:23:23.966930000 +0300
+++ src/wayland-os.c	2018-07-20 14:27:15.698222000 +0300
@@ -30,7 +30,7 @@
 #include <unistd.h>
 #include <fcntl.h>
 #include <errno.h>
-#include <sys/epoll.h>
+#include <sys/event.h>
 
 #include "../config.h"
 #include "wayland-os.h"
@@ -62,11 +62,13 @@
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
@@ -121,6 +123,7 @@
 ssize_t
 wl_os_recvmsg_cloexec(int sockfd, struct msghdr *msg, int flags)
 {
+#ifdef MSG_CMSG_CLOEXEC
 	ssize_t len;
 
 	len = recvmsg(sockfd, msg, flags | MSG_CMSG_CLOEXEC);
@@ -128,24 +131,17 @@
 		return len;
 	if (errno != EINVAL)
 		return -1;
+#endif
 
 	return recvmsg_cloexec_fallback(sockfd, msg, flags);
 }
 
 int
-wl_os_epoll_create_cloexec(void)
+wl_os_kqueue_create_cloexec(void)
 {
 	int fd;
 
-#ifdef EPOLL_CLOEXEC
-	fd = epoll_create1(EPOLL_CLOEXEC);
-	if (fd >= 0)
-		return fd;
-	if (errno != EINVAL)
-		return -1;
-#endif
-
-	fd = epoll_create(1);
+	fd = kqueue();
 	return set_cloexec_or_close(fd);
 }
 
