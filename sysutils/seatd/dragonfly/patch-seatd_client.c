--- seatd/client.c.orig	2022-05-23 20:03:38 UTC
+++ seatd/client.c
@@ -9,7 +9,7 @@
 #include <sys/types.h>
 #include <unistd.h>
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/ucred.h>
 #include <sys/un.h>
 #endif
@@ -55,13 +55,15 @@ static int get_peer(int fd, pid_t *pid,
 	*uid = cred.unp_euid;
 	*gid = cred.unp_egid;
 	return 0;
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 	struct xucred cred;
 	socklen_t len = sizeof cred;
 	if (getsockopt(fd, 0, LOCAL_PEERCRED, &cred, &len) == -1) {
 		return -1;
 	}
-#if __FreeBSD_version >= 1300030 || (__FreeBSD_version >= 1202506 && __FreeBSD_version < 1300000)
+#ifdef __DragonFly__
+	*pid = -1;
+#elif __FreeBSD_version >= 1300030 || (__FreeBSD_version >= 1202506 && __FreeBSD_version < 1300000)
 	*pid = cred.cr_pid;
 #else
 	*pid = -1;
