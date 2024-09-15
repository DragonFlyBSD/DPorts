--- src/wayland-os.c.orig	2024-08-24 15:43:55 UTC
+++ src/wayland-os.c
@@ -33,7 +33,7 @@
 #include <fcntl.h>
 #include <errno.h>
 #include <string.h>
-#include <sys/epoll.h>
+#include <sys/event.h>
 #include <sys/mman.h>
 #include <sys/un.h>
 #ifdef HAVE_SYS_UCRED_H
@@ -46,7 +46,6 @@
 int (*wl_fcntl)(int fildes, int cmd, ...) = fcntl;
 int (*wl_socket)(int domain, int type, int protocol) = socket;
 ssize_t (*wl_recvmsg)(int socket, struct msghdr *message, int flags) = recvmsg;
-int (*wl_epoll_create1)(int flags) = epoll_create1;
 
 static int
 set_cloexec_or_close(int fd)
@@ -85,7 +84,7 @@ wl_os_socket_cloexec(int domain, int typ
 	return set_cloexec_or_close(fd);
 }
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 int
 wl_os_socket_peercred(int sockfd, uid_t *uid, gid_t *gid, pid_t *pid)
 {
@@ -93,7 +92,7 @@ wl_os_socket_peercred(int sockfd, uid_t
 	struct xucred ucred;
 
 	len = sizeof(ucred);
-	if (getsockopt(sockfd, SOL_LOCAL, LOCAL_PEERCRED, &ucred, &len) < 0 ||
+	if (getsockopt(sockfd, 0, LOCAL_PEERCRED, &ucred, &len) < 0 ||
 	    ucred.cr_version != XUCRED_VERSION)
 		return -1;
 	*uid = ucred.cr_uid;
@@ -199,19 +198,11 @@ wl_os_recvmsg_cloexec(int sockfd, struct
 }
 
 int
-wl_os_epoll_create_cloexec(void)
+wl_os_kqueue_create_cloexec(void)
 {
 	int fd;
 
-#ifdef EPOLL_CLOEXEC
-	fd = wl_epoll_create1(EPOLL_CLOEXEC);
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
 
