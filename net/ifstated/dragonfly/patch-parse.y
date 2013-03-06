--- parse.y.orig	2013-03-06 15:16:49.000000000 +0000
+++ parse.y
@@ -29,6 +29,7 @@
 #include <arpa/inet.h>
 #include <net/if.h>
 
+#include <stdlib.h>
 #include <ctype.h>
 #include <unistd.h>
 #include <err.h>
