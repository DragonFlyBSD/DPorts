--- src/NetworkInterface.cpp.intermediate	2019-05-14 20:44:02.000000000 +0000
+++ src/NetworkInterface.cpp
@@ -1507,6 +1507,7 @@ bool NetworkInterface::processPacket(u_i
 	       rawsize, 1, 24 /* 8 Preamble + 4 CRC + 12 IFG */);
       return(pass_verdict);
     }
+#ifndef __DragonFly__
   } else if(l4_proto == IPPROTO_SCTP) {
     if(l4_packet_len >= sizeof(struct sctphdr)) {
       /* SCTP */
@@ -1522,6 +1523,7 @@ bool NetworkInterface::processPacket(u_i
 	       rawsize, 1, 24 /* 8 Preamble + 4 CRC + 12 IFG */);
       return(pass_verdict);
     }
+#endif
   } else {
     /* non TCP/UDP protocols */
   }
