--- boreas/ping.c.orig	2026-01-31 13:33:46 UTC
+++ boreas/ping.c
@@ -118,7 +118,7 @@
   int cur_so_sendbuf = -1;
 
   /* Get the current size of the output queue size */
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   if (ioctl (soc, TIOCOUTQ, &cur_so_sendbuf) == -1)
 #else
   if (ioctl (soc, SIOCOUTQ, &cur_so_sendbuf) == -1)
@@ -138,7 +138,7 @@
       while (cur_so_sendbuf >= so_sndbuf)
         {
           usleep (100000);
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
           if (ioctl (soc, TIOCOUTQ, &cur_so_sendbuf) == -1)
 #else
           if (ioctl (soc, SIOCOUTQ, &cur_so_sendbuf) == -1)
@@ -222,7 +222,7 @@
 
   int len;
   int datalen = 56;
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   struct icmp *icmp;
 #else
   struct icmphdr *icmp;
@@ -232,7 +232,7 @@
   static int so_sndbuf = -1; // socket send buffer
   static int init = -1;
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   icmp = (struct icmp *) sendbuf;
   icmp->icmp_type = ICMP_ECHO;
   icmp->icmp_code = 0;
@@ -247,7 +247,7 @@
 #endif
 
   len = 8 + datalen;
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   icmp->icmp_cksum = 0;
   icmp->icmp_cksum = in_cksum ((u_short *) icmp, len);
 #else
