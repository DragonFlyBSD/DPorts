--- src/CommunityIdFlowHash.cpp.orig	2019-03-27 16:50:45 UTC
+++ src/CommunityIdFlowHash.cpp
@@ -194,7 +194,9 @@ char * CommunityIdFlowHash::get_communit
     cli_port = icmp_type, srv_port = icmp_type_to_code_v6(icmp_type, icmp_code, &icmp_one_way);
     break;
 
+#ifndef __DragonFly__
   case IPPROTO_SCTP:
+#endif
   case IPPROTO_UDP:
   case IPPROTO_TCP:
     cli_port = f->get_cli_port(), srv_port = f->get_srv_port();
@@ -231,7 +233,9 @@ char * CommunityIdFlowHash::get_communit
   switch(l4_proto) {
   case IPPROTO_ICMP:
   case IPPROTO_ICMPV6:
+#ifndef __DragonFly__
   case IPPROTO_SCTP:
+#endif
   case IPPROTO_UDP:
   case IPPROTO_TCP:
     cli_port = htons(cli_port), srv_port = htons(srv_port);
