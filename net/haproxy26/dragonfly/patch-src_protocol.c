--- src/protocol.c.orig	2021-06-17 07:06:08 UTC
+++ src/protocol.c
@@ -21,6 +21,9 @@
 #include <haproxy/proxy.h>
 #include <haproxy/tools.h>
 
+#ifndef __read_mostly
+#define __read_mostly       __section(".data.read_mostly")
+#endif
 
 /* List head of all registered protocols */
 static struct list protocols = LIST_HEAD_INIT(protocols);
