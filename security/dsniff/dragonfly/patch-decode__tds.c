--- decode_tds.c.orig	2001-03-15 08:33:02 UTC
+++ decode_tds.c
@@ -15,6 +15,7 @@
 #include "config.h"
 
 #include <sys/types.h>
+#include <netinet/in.h>
 
 #include <stdio.h>
 #include <string.h>
