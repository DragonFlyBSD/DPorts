--- src/lib/ndpi_community_id.c.orig	2023-05-10 13:20:33 UTC
+++ src/lib/ndpi_community_id.c
@@ -34,7 +34,7 @@
 #include <unistd.h>
 #endif
 
-#if defined __FreeBSD__ || defined __NetBSD__ || defined __OpenBSD__
+#if defined __FreeBSD__ || defined __NetBSD__ || defined __OpenBSD__ || defined __DragonFly__
 #include <sys/endian.h>
 #endif
 
@@ -200,7 +200,9 @@ static int ndpi_community_id_finalize_an
   switch(l4_proto) {
   case IPPROTO_ICMP:
   case IPPROTO_ICMPV6:
+#ifndef __DragonFly__
   case NDPI_SCTP_PROTOCOL_TYPE:
+#endif
   case IPPROTO_UDP:
   case IPPROTO_TCP:
     off += ndpi_community_id_buf_copy(&comm_buf[off], &src_port, sizeof(src_port));
@@ -281,7 +283,9 @@ int ndpi_flowv4_flow_hash(u_int8_t l4_pr
     src_port = icmp_type;
     dst_port = ndpi_community_id_icmp_type_to_code_v4(icmp_type, icmp_code, &icmp_one_way);
     break;
+#ifndef __DragonFly__
   case NDPI_SCTP_PROTOCOL_TYPE:
+#endif
   case IPPROTO_UDP:
   case IPPROTO_TCP:
     /* src/dst port ok */
@@ -340,7 +344,9 @@ int ndpi_flowv6_flow_hash(u_int8_t l4_pr
     src_port = icmp_type;
     dst_port = ndpi_community_id_icmp_type_to_code_v6(icmp_type, icmp_code, &icmp_one_way);
     break;
+#ifndef __DragonFly__
   case NDPI_SCTP_PROTOCOL_TYPE:
+#endif
   case IPPROTO_UDP:
   case IPPROTO_TCP:
     /* src/dst port ok */
