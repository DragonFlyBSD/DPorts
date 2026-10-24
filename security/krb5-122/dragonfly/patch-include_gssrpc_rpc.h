--- include/gssrpc/rpc.h.orig	2026-01-29 23:18:10 UTC
+++ include/gssrpc/rpc.h
@@ -40,6 +40,7 @@
 #define GSSRPC_RPC_H
 
 #include <gssrpc/types.h>		/* some typedefs */
+#include <sys/socket.h>
 #include <netinet/in.h>
 
 /* external data representation interfaces */
