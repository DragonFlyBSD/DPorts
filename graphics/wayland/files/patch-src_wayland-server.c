--- src/wayland-server.c.orig	2020-04-08 17:02:04.353375000 +0300
+++ src/wayland-server.c	2020-04-08 17:12:50.414179000 +0300
@@ -44,6 +44,11 @@
 #include <sys/file.h>
 #include <sys/stat.h>
 
+#if defined(__DragonFly__)
+#include <sys/types.h>
+#include <sys/ucred.h>
+#endif
+
 #include "wayland-util.h"
 #include "wayland-private.h"
 #include "wayland-server-private.h"
@@ -79,7 +84,11 @@ struct wl_client {
 	struct wl_list link;
 	struct wl_map objects;
 	struct wl_priv_signal destroy_signal;
+#if defined(__DragonFly__)
+	struct xucred xucred;
+#else
 	struct ucred ucred;
+#endif
 	int error;
 	struct wl_priv_signal resource_created_signal;
 };
@@ -315,7 +324,11 @@ wl_resource_post_error(struct wl_resourc
 static void
 destroy_client_with_error(struct wl_client *client, const char *reason)
 {
+#if defined(__DragonFly__)
+	wl_log("%s (uid %u)\n", reason, client->xucred.cr_uid);
+#else
 	wl_log("%s (pid %u)\n", reason, client->ucred.pid);
+#endif
 	wl_client_destroy(client);
 }
 
@@ -514,7 +527,9 @@ WL_EXPORT struct wl_client *
 wl_client_create(struct wl_display *display, int fd)
 {
 	struct wl_client *client;
+#if !defined(__DragonFly__)
 	socklen_t len;
+#endif
 
 	client = zalloc(sizeof *client);
 	if (client == NULL)
@@ -529,10 +544,12 @@ wl_client_create(struct wl_display *disp
 	if (!client->source)
 		goto err_client;
 
+#if !defined(__DragonFly__)
 	len = sizeof client->ucred;
 	if (getsockopt(fd, SOL_SOCKET, SO_PEERCRED,
 		       &client->ucred, &len) < 0)
 		goto err_source;
+#endif
 
 	client->connection = wl_connection_create(fd);
 	if (client->connection == NULL)
@@ -586,12 +603,21 @@ WL_EXPORT void
 wl_client_get_credentials(struct wl_client *client,
 			  pid_t *pid, uid_t *uid, gid_t *gid)
 {
+#if defined(__DragonFly__)
+	if (pid)
+		*pid = 0;
+	if (uid)
+		*uid = client->xucred.cr_uid;
+	if (gid)
+		*gid = client->xucred.cr_gid;
+#else
 	if (pid)
 		*pid = client->ucred.pid;
 	if (uid)
 		*uid = client->ucred.uid;
 	if (gid)
 		*gid = client->ucred.gid;
+#endif
 }
 
 /** Get the file descriptor for the client
