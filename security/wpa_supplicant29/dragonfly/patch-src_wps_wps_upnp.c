--- src/wps/wps_upnp.c.orig	2022-10-04 19:31:33.311380000 +0200
+++ src/wps/wps_upnp.c	2022-10-04 19:31:56.490853000 +0200
@@ -951,7 +951,7 @@
 				   errno, strerror(errno));
 			goto fail;
 		}
-#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
 		addr = (struct sockaddr_in *) &req.ifr_addr;
 #else
 		addr = (struct sockaddr_in *) &req.ifr_netmask;
