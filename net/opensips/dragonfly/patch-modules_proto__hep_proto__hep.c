--- modules/proto_hep/proto_hep.c.orig	2018-01-17 14:24:57 UTC
+++ modules/proto_hep/proto_hep.c
@@ -1398,7 +1398,9 @@ static void update_recv_info(struct rece
 	else if(proto == IPPROTO_TCP) ri->proto=PROTO_TCP;
 	else if(proto == IPPROTO_IDP) ri->proto=PROTO_TLS;
 											/* fake protocol */
+#ifdef IPPROTO_SCTP
 	else if(proto == IPPROTO_SCTP) ri->proto=PROTO_SCTP;
+#endif
 	else if(proto == IPPROTO_ESP) ri->proto=PROTO_WS;
                                             /* fake protocol */
 	else {
