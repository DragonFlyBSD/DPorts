--- src/pt_tcp.c.orig	2012-08-22 05:06:21 UTC
+++ src/pt_tcp.c
@@ -42,6 +42,8 @@
 
 #include "pt_std.h"
 #include "pt_tcp.h"
+#include "pt_mesg.h"
+#include "pt_send.h"
 
 #include "proto_tcp.h"
 
