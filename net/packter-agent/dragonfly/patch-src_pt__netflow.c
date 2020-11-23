--- src/pt_netflow.c.orig	2012-08-22 05:06:21 UTC
+++ src/pt_netflow.c
@@ -50,6 +50,8 @@
 
 #include "proto_tcp.h"
 #include "proto_ipproto.h"
+#include "pt_mesg.h"
+#include "pt_send.h"
 
 extern int debug;
 extern GHashTable *config;
