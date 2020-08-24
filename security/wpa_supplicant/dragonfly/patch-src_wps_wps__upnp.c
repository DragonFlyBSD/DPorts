Missing bit.

--- src/wps/wps_upnp.c.intermediate	2020-08-24 16:25:29.000000000 +0000
+++ src/wps/wps_upnp.c
@@ -951,7 +951,7 @@ int get_netif_info(const char *net_if, u
 				   errno, strerror(errno));
 			goto fail;
 		}
-#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
 		addr = (struct sockaddr_in *) &req.ifr_addr;
 #else
 		addr = (struct sockaddr_in *) &req.ifr_netmask;
