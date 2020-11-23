--- src/pt_ip6.c.orig	2012-08-22 05:06:21 UTC
+++ src/pt_ip6.c
@@ -42,6 +42,10 @@
 
 #include "pt_std.h"
 #include "pt_ip6.h"
+#include "pt_tcp.h"
+#include "pt_udp.h"
+#include "pt_icmp6.h"
+#include "pt_iptbhash.h"
 
 #include "proto_ip6.h"
 #include "proto_ipproto.h"
