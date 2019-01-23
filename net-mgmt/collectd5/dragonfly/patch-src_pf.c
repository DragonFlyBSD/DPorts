--- src/pf.c.orig	2018-10-23 06:57:09 UTC
+++ src/pf.c
@@ -34,7 +34,11 @@
 #include <netinet/in.h>
 #endif
 
+#if HAVE_NET_PFVAR_H
 #include <net/pfvar.h>
+#elif HAVE_NET_PF_PFVAR_H
+#include <net/pf/pfvar.h>
+#endif
 
 #ifndef FCNT_NAMES
 #if FCNT_MAX != 3
