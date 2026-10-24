--- daemon/http-tx-mgr.c.orig	2026-06-18 08:15:42 UTC
+++ daemon/http-tx-mgr.c
@@ -55,6 +55,22 @@
 
 #define CLEAR_POOL_ERR_CNT 3
 
+#ifdef __FreeBSD__
+#define USER_AGENT_OS "FreeBSD"
+#endif
+
+#ifdef __DragonFly__
+#define USER_AGENT_OS "DragonFly"
+#endif
+
+#ifdef __NetBSD__
+#define USER_AGENT_OS "NetBSD"
+#endif
+
+#ifdef __OpenBSD__
+#define USER_AGENT_OS "OpenBSD"
+#endif
+
 struct _Connection {
     CURL *curl;
     gint64 ctime;               /* Used to clean up unused connection. */
