--- src/libeis-socket.c.orig	2026-05-15 12:40:00 UTC
+++ src/libeis-socket.c
@@ -41,12 +41,20 @@
 #include "libeis-private.h"
 #include "libeis.h"
 
-#if defined(__DragonFly__) || defined(__FreeBSD__)
+#if defined(__FreeBSD__)
 #include <sys/ucred.h>
 #define CRED_T   xucred
 #define CRED_LVL SOL_LOCAL
 #define CRED_OPT LOCAL_PEERCRED
 #define CRED_PID cr_pid
+#elif defined(__DragonFly__)
+#include <sys/ucred.h>
+/* DragonFly's struct xucred has no cr_pid and no SOL_LOCAL;
+ * LOCAL_PEERCRED is requested with level 0 and carries uid/gid only,
+ * so the pid lookup below is stubbed out to return -ENOSYS. */
+#define CRED_T   xucred
+#define CRED_LVL 0
+#define CRED_OPT LOCAL_PEERCRED
 #elif defined(__NetBSD__)
 #define CRED_T   unpcbid
 #define CRED_LVL SOL_LOCAL
@@ -224,6 +232,12 @@ eis_backend_socket_get_client_pid(struct eis_client *c
 		log_bug_client(eis, "Not a socket backend");
 		return -EINVAL;
 	}
+#ifdef __DragonFly__
+	/* DragonFly xucred carries no pid; no SO_PEERCRED equivalent
+	 * yields one either, so report "function not implemented". */
+	(void)client;
+	return -ENOSYS;
+#else
 	struct CRED_T ucred;
 	socklen_t len = sizeof(ucred);
 	int rc = getsockopt(source_get_fd(client->source), CRED_LVL, CRED_OPT, &ucred, &len);
@@ -231,4 +245,5 @@ eis_backend_socket_get_client_pid(struct eis_client *c
 		return -errno;
 	}
 	return ucred.CRED_PID;
+#endif
 }
