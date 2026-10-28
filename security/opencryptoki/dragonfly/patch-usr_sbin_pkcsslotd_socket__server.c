--- usr/sbin/pkcsslotd/socket_server.c.orig	2026-10-26 02:22:43 UTC
+++ usr/sbin/pkcsslotd/socket_server.c
@@ -18,7 +18,7 @@
 #include <stdlib.h>
 #include <fcntl.h>
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/ucred.h>
 #endif
 #include <sys/time.h>
@@ -648,7 +648,7 @@ static int proc_new_conn(int socket, struct listener_info *listener)
     struct proc_conn_info *conn;
     struct event_info *event;
     DL_NODE *list, *node;
-#if !defined(__FreeBSD__)
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
     struct ucred ucred;
 #else
     struct xucred ucred;
@@ -672,7 +672,7 @@ static int proc_new_conn(int socket, struct listener_info *listener)
     DbgLog(DL3, "%s: process conn: %p", __func__, conn);
 
     len = sizeof(ucred);
-#if !defined(__FreeBSD__)
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
     rc = getsockopt(socket, SOL_SOCKET, SO_PEERCRED, &ucred, &len);
 #else
     rc = getsockopt(socket, 0, LOCAL_PEERCRED, &ucred, &len);
@@ -691,6 +691,18 @@ static int proc_new_conn(int socket, struct listener_info *listener)
     conn->client_cred.real_pid = ucred.pid;
     conn->client_cred.real_uid = ucred.uid;
     conn->client_cred.real_gid = ucred.gid;
+#elif defined(__DragonFly__)
+    /*
+     * DragonFly's xucred has no pid and keeps the effective gid in
+     * cr_groups[0]. There are no pid namespaces, so the client fills in
+     * its own pid (socket_client.c).
+     */
+    DbgLog(DL3, "%s: process uid: %u gid: %u", __func__,
+           ucred.cr_uid, ucred.cr_groups[0]);
+
+    conn->client_cred.real_pid = 0;
+    conn->client_cred.real_uid = ucred.cr_uid;
+    conn->client_cred.real_gid = ucred.cr_groups[0];
 #else
     DbgLog(DL3, "%s: process pid: %u uid: %u gid: %u", __func__,
            ucred.cr_pid, ucred.cr_uid, ucred.cr_gid);
