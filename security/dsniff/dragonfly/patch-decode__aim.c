--- decode_aim.c.orig	2001-03-15 08:32:59 UTC
+++ decode_aim.c
@@ -11,6 +11,7 @@
 #include "config.h"
 
 #include <sys/types.h>
+#include <arpa/inet.h> /* for ntohl() */
 
 #include <stdio.h>
 #include <string.h>
