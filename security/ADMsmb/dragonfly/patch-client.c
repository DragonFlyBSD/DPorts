--- client.c.orig	2003-06-17 12:50:47 UTC
+++ client.c
@@ -1,6 +1,8 @@
 #define VERSION_ADM_SMB "0.3 FreeBSD"
 #define TRACEDEF "ADMsmb.output"
 
+#include <strings.h>
+
 #ifndef _QCOMPR
 #define _QCOMPR
 int qcompr(const void *a, const void *b)
