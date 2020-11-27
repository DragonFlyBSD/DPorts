--- decode_vrrp.c.orig	2001-03-15 08:33:03 UTC
+++ decode_vrrp.c
@@ -12,6 +12,7 @@
 #include "config.h"
 
 #include <sys/types.h>
+#include <netinet/in.h>
 
 #include <stdio.h>
 #include <string.h>
