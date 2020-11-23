--- src/pt_thmon.c.orig	2012-08-22 05:09:41 UTC
+++ src/pt_thmon.c
@@ -58,6 +58,9 @@
 #include "pt_mesg.h"
 #include "pt_util.h"
 
+void packter_addstring_hash(char *buf, char *key);
+int packter_is_exist_key_str(char *key);
+
 #include "proto_ether.h"
 #include "proto_ip.h"
 #include "proto_ip6.h"
