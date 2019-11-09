--- src/prot.c.orig	2008-06-15 20:31:14 UTC
+++ src/prot.c
@@ -1,5 +1,6 @@
 /* Public domain. */
 
+#include <unistd.h>	/* for setgid() setuid() */
 #include "hasshsgr.h"
 #include "prot.h"
 
