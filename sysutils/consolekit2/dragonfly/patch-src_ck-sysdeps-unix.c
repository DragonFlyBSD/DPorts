--- src/ck-sysdeps-unix.c.orig	2026-04-17 08:41:44 UTC
+++ src/ck-sysdeps-unix.c
@@ -158,8 +158,14 @@ ck_get_socket_peer_credentials   (int      socket_fd,
         socklen_t credSize = sizeof(struct xucred);
         if(getsockopt(socket_fd, 0, LOCAL_PEERCRED, &creds, &credSize) == 0)
         {
+#if defined(__DragonFly__)
+                /* DragonFly's struct xucred has no cr_pid member,
+                 * it carries uid/gid only, so leave pid_read unset. */
+                uid_read = creds.cr_uid;
+#else
                 pid_read = creds.cr_pid;
                 uid_read = creds.cr_uid;
+#endif
                 ret = TRUE;
         } else {
                 g_warning ("Failed to getsockopt() credentials, returned %s\n",
