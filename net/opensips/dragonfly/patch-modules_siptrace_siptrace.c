--- modules/siptrace/siptrace.c.orig	2016-07-20 13:18:25.000000000 +0300
+++ modules/siptrace/siptrace.c
@@ -903,8 +903,10 @@ static inline int siptrace_copy_proto(in
 		strcpy(buf, "tcp:");
 	} else if(proto==PROTO_TLS) {
 		strcpy(buf, "tls:");
+#ifndef __DragonFly__
 	} else if(proto==PROTO_SCTP) {
 		strcpy(buf, "sctp:");
+#endif
 	} else {
 		strcpy(buf, "udp:");
 	}
@@ -1972,7 +1974,9 @@ static int pipport2su (str *sproto, str
 	else if(strncmp(sproto->s, "tcp",3) == 0) *proto = IPPROTO_TCP;
 	else if(strncmp(sproto->s, "tls",3) == 0) *proto = IPPROTO_IDP;
 												/* fake proto type */
+#ifndef __DragonFly__
 	else if(strncmp(sproto->s, "sctp",4) == 0) *proto = IPPROTO_SCTP;
+#endif
 	else if(strncmp(sproto->s, "any",3) == 0) *proto = IPPROTO_UDP;
 	else if(strncmp(sproto->s, "ws",2) == 0) *proto = IPPROTO_ESP;
 												/* fake proto type */
