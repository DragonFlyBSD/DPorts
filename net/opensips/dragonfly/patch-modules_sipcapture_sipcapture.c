--- modules/sipcapture/sipcapture.c.orig	2017-11-27 15:44:50 UTC
+++ modules/sipcapture/sipcapture.c
@@ -1891,12 +1891,14 @@ set_generic_hep_chunk(struct hepv3* h3,
 
 				h3->hg.ip_proto.data = PROTO_TLS;
 				break;
+#ifdef IPPROTO_SCTP
 			case LOWER_WORD('s','c'):
 				if (LOWER_WORD(data->s[2], data->s[3]) != LOWER_WORD('t', 'p'))
 					RETURN_ERROR("invalid proto %.*s\n", data->len, data->s);
 
 				h3->hg.ip_proto.data = PROTO_SCTP;
 				break;
+#endif
 			case LOWER_WORD('w','s'):
 				h3->hg.ip_proto.data = PROTO_WS;
 				break;
@@ -3392,7 +3394,9 @@ static int w_sip_capture(struct sip_msg
 		else if(sco.proto == PROTO_TCP) sco.proto=IPPROTO_TCP;
 		else if(sco.proto == PROTO_TLS) sco.proto=IPPROTO_IDP;
 												/* fake protocol */
+#ifdef IPPROTO_SCTP
 		else if(sco.proto == PROTO_SCTP) sco.proto=IPPROTO_SCTP;
+#endif
 		else if(sco.proto == PROTO_WS) sco.proto=IPPROTO_ESP;
 												/* fake protocol */
 		else {
@@ -4254,7 +4258,9 @@ static inline void osip_to_net_proto(uns
 	else if(*proto == PROTO_TCP) *proto=IPPROTO_TCP;
 	else if(*proto == PROTO_TLS) *proto=IPPROTO_IDP;
 											/* fake protocol */
+#ifdef IPPROTO_SCTP
 	else if(*proto == PROTO_SCTP) *proto=IPPROTO_SCTP;
+#endif
 	else if(*proto == PROTO_WS) *proto=IPPROTO_ESP;
                                             /* fake protocol */
 	else {
