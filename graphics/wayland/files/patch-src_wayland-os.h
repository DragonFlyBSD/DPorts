--- src/wayland-os.h.orig	2018-07-19 16:09:29.690556000 +0300
+++ src/wayland-os.h	2018-07-19 16:09:42.470627000 +0300
@@ -36,7 +36,7 @@
 wl_os_recvmsg_cloexec(int sockfd, struct msghdr *msg, int flags);
 
 int
-wl_os_epoll_create_cloexec(void);
+wl_os_kqueue_create_cloexec(void);
 
 int
 wl_os_accept_cloexec(int sockfd, struct sockaddr *addr, socklen_t *addrlen);
