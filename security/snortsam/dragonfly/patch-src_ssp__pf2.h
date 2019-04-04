--- src/ssp_pf2.h.orig	2009-11-27 01:39:40 UTC
+++ src/ssp_pf2.h
@@ -45,7 +45,11 @@
 
 #include <sys/file.h>
 #include <net/if.h>
+#ifdef __DragonFly__
+#include <net/pf/pfvar.h>
+#else
 #include <net/pfvar.h>
+#endif
 #include <errno.h>
 
 typedef struct _pf2data
