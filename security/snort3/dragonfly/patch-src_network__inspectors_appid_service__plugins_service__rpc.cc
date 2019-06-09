--- src/network_inspectors/appid/service_plugins/service_rpc.cc.orig	2019-05-04 16:23:41 UTC
+++ src/network_inspectors/appid/service_plugins/service_rpc.cc
@@ -27,7 +27,7 @@
 
 #include <netdb.h>
 
-#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(USE_TIRPC)
+#if defined(__DragonFly__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(USE_TIRPC)
 #include <rpc/rpc.h>
 #elif defined(__sun)
 #include <rpc/rpcent.h>
