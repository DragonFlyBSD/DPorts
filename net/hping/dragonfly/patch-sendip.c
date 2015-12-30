--- sendip.c.intermediate	2014-10-06 04:48:35 UTC
+++ sendip.c
@@ -48,7 +48,7 @@
 	ip->ihl		= (IPHDR_SIZE + optlen + 3) >> 2;
 	ip->tos		= ip_tos;
 
-#if defined OSTYPE_NETBSD || defined OSTYPE_BSDI
+#if defined OSTYPE_DRAGONFLY || defined OSTYPE_NETBSD || defined OSTYPE_BSDI
 /* NetBSD */
 	ip->tot_len	= packetsize;
 #else
@@ -73,7 +73,7 @@
 			htons((unsigned short) src_id);
 	}
 
-#if defined OSTYPE_NETBSD | defined OSTYPE_BSDI
+#if defined OSTYPE_DRAGONFLY || defined OSTYPE_NETBSD | defined OSTYPE_BSDI
 /* NetBSD */
 	ip->frag_off	|= more_fragments;
 	ip->frag_off	|= fragoff >> 3;
