--- src/ssp_pf.h.orig	2009-11-27 01:39:40 UTC
+++ src/ssp_pf.h
@@ -45,7 +45,11 @@
 #define         PFPERM    O_RDWR
 
 #include <net/if.h>
+#ifdef __DragonFly__
+#include <net/pf/pfvar.h>
+#else
 #include <net/pfvar.h>
+#endif
 #include <sys/param.h>
 
 
