DragonFly no longer supports SCTP, cut it out.

--- net.c.intermediate	2016-12-08 08:11:36.000000000 +0200
+++ net.c
@@ -70,12 +70,14 @@ struct TCPHeader {
   uint32 seq;
 };
 
+#ifndef __DragonFly__
 /* Structure of an SCTP header */
 struct SCTPHeader {
   uint16 srcport;
   uint16 dstport;
   uint32 veri_tag;
 };
+#endif
 
 /* Structure of an IPv4 UDP pseudoheader.  */
 struct UDPv4PHeader {
@@ -430,6 +432,7 @@ void net_send_tcp(int index)
   connect(s, (struct sockaddr *) &remote, len);
 }
 
+#ifndef __DragonFly__
 /*  Attempt to connect to a SCTP port with a TTL */
 void net_send_sctp(int index)
 {
@@ -548,6 +551,7 @@ void net_send_sctp(int index)
 
   connect(s, (struct sockaddr *) &remote, len);
 }
+#endif
 
 /*  Attempt to find the host at a particular number of hops away  */
 void net_send_query(int index) 
@@ -556,11 +560,13 @@ void net_send_query(int index)
     net_send_tcp(index);
     return;
   }
-  
+ 
+#ifndef __DragonFly__ 
   if (mtrtype == IPPROTO_SCTP) {
     net_send_sctp(index);
     return;
   }
+#endif
 
   /*ok  char packet[sizeof(struct IPHeader) + sizeof(struct ICMPHeader)];*/
   char packet[MAXPACKET];
@@ -880,7 +886,9 @@ void net_process_return(void)
   struct ICMPHeader *header = NULL;
   struct UDPHeader *udpheader = NULL;
   struct TCPHeader *tcpheader = NULL;
+#ifndef __DragonFly__
   struct SCTPHeader *sctpheader = NULL;
+#endif
   struct timeval now;
   ip_t * fromaddress = NULL;
   int echoreplytype = 0, timeexceededtype = 0, unreachabletype = 0;
@@ -1053,7 +1061,8 @@ void net_process_return(void)
       sequence = ntohs(tcpheader->srcport);
     }
     break;
-    
+   
+#ifndef __DragonFly__ 
   case IPPROTO_SCTP:
     if (header->type == timeexceededtype || header->type == unreachabletype) {
       switch ( af ) {
@@ -1090,6 +1099,7 @@ void net_process_return(void)
       sequence = ntohs(sctpheader->srcport);
     }
     break;
+#endif
   }
   if (sequence)
     net_process_ping (sequence, mpls, (void *) fromaddress, now);
