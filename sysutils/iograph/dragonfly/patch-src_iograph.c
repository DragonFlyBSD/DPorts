--- src/iograph.c.orig	2007-12-29 18:27:05.000000000 +0200
+++ src/iograph.c
@@ -577,7 +577,11 @@ get_iface_stats(bytecount * bc, time_t *
 				bc->rx = ifmd.ifmd_data.ifi_ibytes;
 				bc->tx = ifmd.ifmd_data.ifi_obytes;
 
+#ifdef __DragonFly__
+				*lastIfChange = ifmd.ifmd_data.ifi_lastchange.tv_sec;
+#else
 				*lastIfChange = ifmd.ifmd_data.ifi_epoch + (time_t) boottime.tv_sec;
+#endif
 
 				printf("Last interface change: %s", ctime(lastIfChange));
 
