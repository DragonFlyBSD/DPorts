--- router/src/routing/src/connection.h~	2018-12-20 21:14:03.000000000 +0100
+++ router/src/routing/src/connection.h	2019-02-16 08:46:29.295005000 +0100
@@ -38,6 +38,8 @@
 class MySQLRouting;
 class MySQLRoutingContext;
 
+#include <sys/socket.h>	/* XXX hack to get at struct sockaddr_storage */
+
 namespace mysql_harness {
 class PluginFuncEnv;
 }
