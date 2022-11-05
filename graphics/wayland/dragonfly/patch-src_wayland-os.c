--- src/wayland-os.c.orig	2022-10-22 10:58:42.178509000 +0200
+++ src/wayland-os.c	2022-10-31 16:39:33.763815000 +0100
@@ -33,7 +33,7 @@
 #include <fcntl.h>
 #include <errno.h>
 #include <string.h>
-#include <sys/epoll.h>
+#include <sys/event.h>
 #include <sys/mman.h>
 #include <sys/un.h>
 #ifdef HAVE_SYS_UCRED_H
@@ -69,17 +69,19 @@
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
 }
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 int
 wl_os_socket_peercred(int sockfd, uid_t *uid, gid_t *gid, pid_t *pid)
 {
@@ -87,7 +89,7 @@
 	struct xucred ucred;
 
 	len = sizeof(ucred);
-	if (getsockopt(sockfd, SOL_LOCAL, LOCAL_PEERCRED, &ucred, &len) < 0 ||
+	if (getsockopt(sockfd, 0, LOCAL_PEERCRED, &ucred, &len) < 0 ||
 	    ucred.cr_version != XUCRED_VERSION)
 		return -1;
 	*uid = ucred.cr_uid;
@@ -189,19 +191,11 @@
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
 
