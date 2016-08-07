--- modules/sipcapture/sipcapture.c.orig	2016-07-20 13:18:25.000000000 +0300
+++ modules/sipcapture/sipcapture.c
@@ -705,7 +705,9 @@ int hep_msg_received(int sockfd, struct
         else if(heph->hp_p == IPPROTO_TCP) ri->proto=PROTO_TCP;
         else if(heph->hp_p == IPPROTO_IDP) ri->proto=PROTO_TLS;
                                             /* fake protocol */
+#ifndef __DragonFly__
         else if(heph->hp_p == IPPROTO_SCTP) ri->proto=PROTO_SCTP;
+#endif
         else if(heph->hp_p == IPPROTO_ESP) ri->proto=PROTO_WS;
                                             /* fake protocol */
         else {
