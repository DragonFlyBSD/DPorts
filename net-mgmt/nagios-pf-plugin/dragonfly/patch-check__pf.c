--- check_pf.c.intermediate	2015-03-06 09:43:15 UTC
+++ check_pf.c
@@ -20,7 +20,7 @@
 #include <sys/fcntl.h>
 #include <net/if.h>
 #include <netinet/in.h>
-#include <net/pfvar.h>
+#include <net/pf/pfvar.h>
 
 #include <err.h>
 #include <limits.h>
