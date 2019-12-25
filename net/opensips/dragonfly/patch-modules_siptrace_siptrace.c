--- modules/siptrace/siptrace.c.orig	2017-11-27 15:44:50 UTC
+++ modules/siptrace/siptrace.c
@@ -2366,7 +2366,9 @@ static int pipport2su (str *sproto, str
 	else if(strncmp(sproto->s, "tcp",3) == 0) *proto = IPPROTO_TCP;
 	else if(strncmp(sproto->s, "tls",3) == 0) *proto = IPPROTO_IDP;
 												/* fake proto type */
+#ifdef IPPROTO_SCTP
 	else if(strncmp(sproto->s, "sctp",4) == 0) *proto = IPPROTO_SCTP;
+#endif
 	else if(strncmp(sproto->s, "any",3) == 0) *proto = IPPROTO_UDP;
 	else if(strncmp(sproto->s, "ws",2) == 0) *proto = IPPROTO_ESP;
 												/* fake proto type */
