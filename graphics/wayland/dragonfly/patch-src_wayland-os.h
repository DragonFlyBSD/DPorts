--- src/wayland-os.h.orig	2022-10-31 16:28:37.828288000 +0100
+++ src/wayland-os.h	2022-10-31 16:28:58.707858000 +0100
@@ -42,7 +42,7 @@
 wl_os_recvmsg_cloexec(int sockfd, struct msghdr *msg, int flags);
 
 int
-wl_os_epoll_create_cloexec(void);
+wl_os_kqueue_create_cloexec(void);
 
 int
 wl_os_accept_cloexec(int sockfd, struct sockaddr *addr, socklen_t *addrlen);
