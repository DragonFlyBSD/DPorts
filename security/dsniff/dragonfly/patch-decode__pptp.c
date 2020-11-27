--- decode_pptp.c.orig	2001-03-15 08:33:02 UTC
+++ decode_pptp.c
@@ -12,6 +12,7 @@
 #include "config.h"
 
 #include <sys/types.h>
+#include <netinet/in.h>
 #include <openssl/sha.h>
 
 #include <stdio.h>
