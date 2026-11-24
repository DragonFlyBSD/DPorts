--- sasp.c.orig
+++ sasp.c
@@ -31,6 +31,7 @@
 
 #define         _BSD_SOURCE     1
 
+#include	<net/bpf.h>	/* BIOCIMMEDIATE; must precede pcap.h */
 #include        <pcap.h>
 #include        <libnet.h>
 #include	<netinet/if_ether.h>
