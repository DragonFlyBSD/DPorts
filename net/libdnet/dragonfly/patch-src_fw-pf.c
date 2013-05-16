--- src/fw-pf.c.orig	2005-03-15 05:05:37.000000000 +0000
+++ src/fw-pf.c
@@ -14,7 +14,7 @@
 
 #include <net/if.h>
 #include <netinet/in.h>
-#include <net/pfvar.h>
+#include <net/pf/pfvar.h>
 
 #include <assert.h>
 #include <errno.h>
