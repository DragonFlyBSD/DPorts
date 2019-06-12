--- lib/in46_addr.h.orig	2017-08-11 11:48:14 UTC
+++ lib/in46_addr.h
@@ -1,6 +1,7 @@
 #pragma once
 #include <stdint.h>
 #include <netinet/in.h>
+#include <sys/socket.h>
 
 #include "../gtp/pdp.h"
 
