--- src/config.c.orig	2010-07-27 07:31:01 UTC
+++ src/config.c
@@ -13,6 +13,7 @@
 #include <stdlib.h> 
 #include <string.h> 
 #include <unistd.h> 
+#include <arpa/inet.h>
 
 #include "sdig.h"
 #include "common.h"
