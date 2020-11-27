--- term-utils/ttymsg.c.orig	2020-07-23 09:26:04 UTC
+++ term-utils/ttymsg.c
@@ -58,6 +58,12 @@
 #include "pathnames.h"
 #include "ttymsg.h"
 
+#ifndef MAXNAMLEN
+#ifdef __DragonFly__
+#define MAXNAMLEN 255
+#endif
+#endif
+
 #define ERR_BUFLEN	(MAXNAMLEN + 1024)
 
 /*
