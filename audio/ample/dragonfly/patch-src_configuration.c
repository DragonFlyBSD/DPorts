--- src/configuration.c.orig	2002-12-08 14:10:34 UTC
+++ src/configuration.c
@@ -47,6 +47,7 @@
 #if HAVE_NETDB_H
 #include <netdb.h>
 #endif
+#include <netinet/in.h>
 
 #include "ample.h"
 #include "base64.h"
