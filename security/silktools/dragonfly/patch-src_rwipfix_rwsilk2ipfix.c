--- src/rwipfix/rwsilk2ipfix.c.orig	2016-09-29 17:21:16.000000000 +0300
+++ src/rwipfix/rwsilk2ipfix.c
@@ -1018,7 +1018,9 @@ toipfix_multiple_templates(
                     break;
 
                   case IPPROTO_UDP:
+#ifndef __DragonFly__
                   case IPPROTO_SCTP:
+#endif
                     i = tid_to_position.p_TID6_UDP;
                     fixrec.rec6_udp.flowtype = rwRecGetFlowType(&rwrec);
                     fixrec.rec6_udp.attributes = rwRecGetTcpState(&rwrec);
@@ -1087,7 +1089,9 @@ toipfix_multiple_templates(
                     break;
 
                   case IPPROTO_UDP:
+#ifndef __DragonFly__
                   case IPPROTO_SCTP:
+#endif
                     i = tid_to_position.p_TID4_UDP;
                     fixrec.rec4_udp.flowtype = rwRecGetFlowType(&rwrec);
                     fixrec.rec4_udp.attributes = rwRecGetTcpState(&rwrec);
