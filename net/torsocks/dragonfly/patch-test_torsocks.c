--- test/test_torsocks.c.orig   2014-07-30 23:23:35.768017000 +0200
+++ test/test_torsocks.c        2014-07-30 23:23:42.378081000 +0200
@@ -83,7 +83,7 @@
     char datagram[400];
     struct sockaddr_in dest;
     struct ip *iphdr=(struct ip *) datagram;
-#if defined(OPENBSD) || defined(FREEBSD) ||defined(__APPLE__) || defined(__darwin__)
+#if defined(OPENBSD) || defined(FREEBSD) ||defined(__APPLE__) || defined(__darwin__) || defined(__DragonFly__)
     struct icmp *icmphdr=(struct icmp *)(iphdr +1);
 #else
     struct icmphdr *icmphdr=(struct icmphdr *)(iphdr +1);
@@ -115,7 +115,7 @@
     iphdr->ip_dst.s_addr=dest.sin_addr.s_addr;
     iphdr->ip_sum=csum((unsigned short *)datagram,iphdr->ip_len >> 1);

-#if defined(OPENBSD) || defined(FREEBSD) ||defined(__APPLE__) || defined(__darwin__)
+#if defined(OPENBSD) || defined(FREEBSD) ||defined(__APPLE__) || defined(__darwin__) || defined(__DragonFly__)
     icmphdr->icmp_type=130;
     icmphdr->icmp_code=0;
     icmphdr->icmp_cksum=htons(0xc3b0);
