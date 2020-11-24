--- src/network.c.orig	2004-09-28 19:37:47 UTC
+++ src/network.c
@@ -21,6 +21,7 @@
 
 #include "quaqut.h"
 #include "protocol.h"
+#include <arpa/inet.h> /* for inet_addr() */
 
 #ifdef _WIN_32_
   void quaqut_network_initwsa( void );
