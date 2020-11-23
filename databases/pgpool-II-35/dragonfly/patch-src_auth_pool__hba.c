--- src/auth/pool_hba.c.orig	2020-05-19 09:38:37 UTC
+++ src/auth/pool_hba.c
@@ -29,6 +29,7 @@
 #include <string.h>
 #include <errno.h>
 #include <netdb.h>
+#include <arpa/inet.h>
 
 #include "pool.h"
 #include "utils/pool_path.h"
