--- boreas/ping.c.orig	2021-08-14 11:08:36 UTC
+++ boreas/ping.c
@@ -108,7 +108,7 @@ throttle (int soc, int so_sndbuf)
   int cur_so_sendbuf = -1;
 
   /* Get the current size of the output queue size */
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   if (ioctl (soc, TIOCOUTQ, &cur_so_sendbuf) == -1)
 #else
   if (ioctl (soc, SIOCOUTQ, &cur_so_sendbuf) == -1)
@@ -128,7 +128,7 @@ throttle (int soc, int so_sndbuf)
       while (cur_so_sendbuf >= so_sndbuf)
         {
           usleep (100000);
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
           if (ioctl (soc, TIOCOUTQ, &cur_so_sendbuf) == -1)
 #else
           if (ioctl (soc, SIOCOUTQ, &cur_so_sendbuf) == -1)
@@ -212,6 +212,13 @@ send_icmp_v4 (int soc, struct in_addr *d
 
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
@@ -219,7 +226,7 @@ send_icmp_v4 (int soc, struct in_addr *d
   static int init = -1;
 
   icmp = (struct icmphdr *) sendbuf;
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   icmp->icmp_type = ICMP_ECHO;
   icmp->icmp_code = 0;
 #else
@@ -229,7 +236,7 @@ send_icmp_v4 (int soc, struct in_addr *d
 
 
   len = 8 + datalen;
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   icmp->icmp_cksum = 0;
   icmp->icmp_cksum = in_cksum ((u_short *) icmp, len);
 #else
@@ -298,7 +305,7 @@ send_icmp (gpointer key, gpointer value,
     }
   else
     {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
       dst4.s_addr = dst6_p->s6_addr[12];
 #else
       dst4.s_addr = dst6_p->s6_addr32[3];
@@ -564,7 +571,7 @@ send_tcp (gpointer key, gpointer value,
     }
   else
     {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
       dst4.s_addr = dst6_p->s6_addr[12];
 #else
       dst4.s_addr = dst6_p->s6_addr32[3];
