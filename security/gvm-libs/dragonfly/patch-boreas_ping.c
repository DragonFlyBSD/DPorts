--- boreas/ping.c.orig	2022-10-22 05:41:27 UTC
+++ boreas/ping.c
@@ -109,7 +109,7 @@ throttle (int soc, int so_sndbuf)
   int cur_so_sendbuf = -1;
 
   /* Get the current size of the output queue size */
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   if (ioctl (soc, TIOCOUTQ, &cur_so_sendbuf) == -1)
 #else
   if (ioctl (soc, SIOCOUTQ, &cur_so_sendbuf) == -1)
@@ -129,7 +129,7 @@ throttle (int soc, int so_sndbuf)
       while (cur_so_sendbuf >= so_sndbuf)
         {
           usleep (100000);
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
           if (ioctl (soc, TIOCOUTQ, &cur_so_sendbuf) == -1)
 #else
           if (ioctl (soc, SIOCOUTQ, &cur_so_sendbuf) == -1)
@@ -213,6 +213,13 @@ send_icmp_v4 (int soc, struct in_addr *d
 
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
@@ -220,7 +227,7 @@ send_icmp_v4 (int soc, struct in_addr *d
   static int init = -1;
 
   icmp = (struct icmphdr *) sendbuf;
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   icmp->icmp_type = ICMP_ECHO;
   icmp->icmp_code = 0;
 #else
@@ -229,7 +236,7 @@ send_icmp_v4 (int soc, struct in_addr *d
 #endif
 
   len = 8 + datalen;
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   icmp->icmp_cksum = 0;
   icmp->icmp_cksum = in_cksum ((u_short *) icmp, len);
 #else
@@ -308,7 +315,7 @@ send_icmp (gpointer key, gpointer value,
         }
       else
         {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
       dst4.s_addr = dst6_p->s6_addr[12];
 #else
       dst4.s_addr = dst6_p->s6_addr32[3];
@@ -577,7 +584,7 @@ send_tcp (gpointer key, gpointer value,
     }
   else
     {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
       dst4.s_addr = dst6_p->s6_addr[12];
 #else
       dst4.s_addr = dst6_p->s6_addr32[3];
