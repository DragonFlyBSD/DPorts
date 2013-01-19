--- dns.c.intermediate	2013-01-19 10:52:40.951440000 +0100
+++ dns.c	2013-01-19 10:52:58.221465000 +0100
@@ -7,7 +7,6 @@
 #include <errno.h>
 extern int res_query();
 extern int res_search();
-extern int errno;
 extern int h_errno;
 #include "ip.h"
 #include "ipalloc.h"
