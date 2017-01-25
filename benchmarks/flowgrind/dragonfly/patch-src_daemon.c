--- src/daemon.c.orig	2016-09-19 14:46:38.000000000 +0300
+++ src/daemon.c
@@ -1388,9 +1388,11 @@ int apply_extra_socket_options(struct fl
 		case level_ipproto_ip:
 			level = IPPROTO_IP;
 			break;
+#ifndef __DragonFly__
 		case level_ipproto_sctp:
 			level = IPPROTO_SCTP;
 			break;
+#endif
 		case level_ipproto_tcp:
 			level = IPPROTO_TCP;
 			break;
