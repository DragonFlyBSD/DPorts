--- lib/plat/lws-plat-esp32.c.orig	2018-03-08 10:28:37 UTC
+++ lib/plat/lws-plat-esp32.c
@@ -259,7 +259,7 @@ lws_plat_set_socket_options(struct lws_v
 	socklen_t optlen = sizeof(optval);
 
 #if defined(__APPLE__) || \
-    defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || \
+    defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__) || \
     defined(__NetBSD__) || \
     defined(__OpenBSD__)
 	struct protoent *tcp_proto;
@@ -273,7 +273,7 @@ lws_plat_set_socket_options(struct lws_v
 			return 1;
 
 #if defined(__APPLE__) || \
-    defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || \
+    defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__) || \
     defined(__NetBSD__) || \
         defined(__CYGWIN__) || defined(__OpenBSD__) || defined (__sun)
 
