diff --git third_party/wayland/src/src/wayland-os.c third_party/wayland/src/src/wayland-os.c
index f00ead4b95e6..cd55b97a0ad9 100644
--- third_party/wayland/src/src/wayland-os.c
+++ third_party/wayland/src/src/wayland-os.c
@@ -85,7 +85,7 @@ wl_os_socket_cloexec(int domain, int type, int protocol)
 	return set_cloexec_or_close(fd);
 }
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 int
 wl_os_socket_peercred(int sockfd, uid_t *uid, gid_t *gid, pid_t *pid)
 {
@@ -93,9 +93,11 @@ wl_os_socket_peercred(int sockfd, uid_t *uid, gid_t *gid, pid_t *pid)
 	struct xucred ucred;
 
 	len = sizeof(ucred);
+#define SOL_LOCAL 0
 	if (getsockopt(sockfd, SOL_LOCAL, LOCAL_PEERCRED, &ucred, &len) < 0 ||
 	    ucred.cr_version != XUCRED_VERSION)
 		return -1;
+#undef SOL_LOCAL
 	*uid = ucred.cr_uid;
 	*gid = ucred.cr_gid;
 #if HAVE_XUCRED_CR_PID
