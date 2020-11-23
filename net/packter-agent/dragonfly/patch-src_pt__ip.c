--- src/pt_ip.c.orig	2012-08-22 05:06:21 UTC
+++ src/pt_ip.c
@@ -42,6 +42,10 @@
 
 #include "pt_std.h"
 #include "pt_ip.h"
+#include "pt_tcp.h"
+#include "pt_udp.h"
+#include "pt_icmp.h"
+#include "pt_iptbhash.h"
 
 #include "proto_ip.h"
 #include "proto_ipproto.h"
