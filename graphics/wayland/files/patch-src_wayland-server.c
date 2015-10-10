--- src/wayland-server.c.orig	2015-06-13 00:34:55 +0200
+++ src/wayland-server.c
@@ -44,6 +44,13 @@
 #include <sys/stat.h>
 #include <ffi.h>
 
+#include "../config.h"
+
+#ifdef HAVE_SYS_UCRED_H
+#include <sys/types.h>
+#include <sys/ucred.h>
+#endif
+
 #include "wayland-private.h"
 #include "wayland-server.h"
 #include "wayland-server-protocol.h"
@@ -80,7 +87,11 @@
 	struct wl_list link;
 	struct wl_map objects;
 	struct wl_signal destroy_signal;
+#ifdef HAVE_SYS_UCRED_H
+	struct xucred xucred;
+#else
 	struct ucred ucred;
+#endif
 	int error;
 };
 
@@ -414,7 +425,9 @@
 wl_client_create(struct wl_display *display, int fd)
 {
 	struct wl_client *client;
+#ifndef HAVE_SYS_UCRED_H
 	socklen_t len;
+#endif
 
 	client = malloc(sizeof *client);
 	if (client == NULL)
@@ -429,10 +442,12 @@
 	if (!client->source)
 		goto err_client;
 
+#ifndef HAVE_SYS_UCRED_H
 	len = sizeof client->ucred;
 	if (getsockopt(fd, SOL_SOCKET, SO_PEERCRED,
 		       &client->ucred, &len) < 0)
 		goto err_source;
+#endif
 
 	client->connection = wl_connection_create(fd);
 	if (client->connection == NULL)
@@ -484,12 +499,21 @@
 wl_client_get_credentials(struct wl_client *client,
 			  pid_t *pid, uid_t *uid, gid_t *gid)
 {
+#ifdef HAVE_SYS_UCRED_H
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
 
 /** Look up an object in the client name space
@@ -911,7 +935,7 @@
 
 	if (interface->version < version) {
 		wl_log("wl_global_create: implemented version higher "
-		       "than interface version%m\n");
+		       "than interface version%s\n", strerror(errno));
 		return NULL;
 	}
 
@@ -1035,7 +1059,7 @@
 	client_fd = wl_os_accept_cloexec(fd, (struct sockaddr *) &name,
 					 &length);
 	if (client_fd < 0)
-		wl_log("failed to accept: %m\n");
+		wl_log("failed to accept: %s\n", strerror(errno));
 	else
 		if (!wl_client_create(display, client_fd))
 			close(client_fd);
@@ -1140,12 +1164,12 @@
 
 	size = offsetof (struct sockaddr_un, sun_path) + strlen(s->addr.sun_path);
 	if (bind(s->fd, (struct sockaddr *) &s->addr, size) < 0) {
-		wl_log("bind() failed with error: %m\n");
+		wl_log("bind() failed with error: %s\n", strerror(errno));
 		return -1;
 	}
 
 	if (listen(s->fd, 128) < 0) {
-		wl_log("listen() failed with error: %m\n");
+		wl_log("listen() failed with error: %s\n", strerror(errno));
 		return -1;
 	}
 
