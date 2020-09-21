--- lib/plat/esp32/esp32-sockets.c.orig	2020-09-21 17:48:18.276927000 +0200
+++ lib/plat/esp32/esp32-sockets.c	2020-09-21 17:49:10.207110000 +0200
@@ -85,7 +85,7 @@
 	socklen_t optlen = sizeof(optval);
 
 #if defined(__APPLE__) || \
-    defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || \
+    defined(__DragonFly__) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || \
     defined(__NetBSD__) || \
     defined(__OpenBSD__)
 	struct protoent *tcp_proto;
@@ -99,7 +99,7 @@
 			return 1;
 
 #if defined(__APPLE__) || \
-    defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || \
+    defined(__DragonFly__) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || \
     defined(__NetBSD__) || \
         defined(__CYGWIN__) || defined(__OpenBSD__) || defined (__sun)
 
