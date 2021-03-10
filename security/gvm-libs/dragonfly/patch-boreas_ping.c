--- boreas/ping.c.intermediate	2021-03-10 13:50:11.000000000 +0000
+++ boreas/ping.c
@@ -222,6 +222,13 @@ send_icmp_v4 (int soc, struct in_addr *d
 
   int len;
   int datalen = 56;
+#if defined(__DragonFly__)
+struct icmphdr { /* not available as partial struct from struct icmp */
+	u_char	icmp_type;	/* type of message, see below */
+	u_char	icmp_code;	/* type sub code */
+	u_short	icmp_cksum;
+};
+#endif
   struct icmphdr *icmp;
 
   /* Throttling related variables */
