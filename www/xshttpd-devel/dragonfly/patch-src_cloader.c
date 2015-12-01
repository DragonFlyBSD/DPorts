--- src/cloader.c.orig	2015-08-17 13:11:06.000000000 +0300
+++ src/cloader.c	2015-12-01 17:02:52.000000000 +0200
@@ -326,9 +326,12 @@ load_config()
 							PF_UNSPEC;
 					else if (!strcasecmp("ListenProtocol", key))
 					{
+#ifndef __DragonFly__
 						if (!strcasecmp("SCTP", value))
 							lsock->protocol = IPPROTO_SCTP;
-						else if (!strcasecmp("TCP", value))
+						else
+#endif
+						if (!strcasecmp("TCP", value))
 							lsock->protocol = IPPROTO_TCP;
 						else
 							errx(1, "Invalid value for ListenProtocol");
