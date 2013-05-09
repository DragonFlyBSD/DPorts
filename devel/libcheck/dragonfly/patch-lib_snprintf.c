--- lib/snprintf.c.orig	2013-04-18 10:19:02.000000000 +0000
+++ lib/snprintf.c
@@ -172,6 +172,7 @@
 #include <math.h>	/* For pow(3), NAN, and INFINITY. */
 #include <string.h>	/* For strcmp(3). */
 #if defined(__NetBSD__) || \
+    defined(__DragonFly__) || \
     defined(__FreeBSD__) || \
     defined(__OpenBSD__) || \
     defined(__NeXT__) || \
