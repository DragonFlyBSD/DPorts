--- lib/isc/netmgr/udp.c.orig
+++ lib/isc/netmgr/udp.c
@@ -400,8 +400,10 @@
 #elif defined(ROUTE_MSGFILTER)
 	/* OpenBSD */
 	unsigned int rtfilter = ROUTE_FILTER(RTM_NEWADDR) |
-				ROUTE_FILTER(RTM_DELADDR) |
-				ROUTE_FILTER(RTM_DESYNC);
+#ifdef RTM_DESYNC
+				ROUTE_FILTER(RTM_DESYNC) |
+#endif
+				ROUTE_FILTER(RTM_DELADDR);
 
 	(void)setsockopt(fd, AF_ROUTE, ROUTE_MSGFILTER, &rtfilter,
 			 sizeof(rtfilter));
