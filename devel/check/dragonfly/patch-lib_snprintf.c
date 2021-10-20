--- lib/snprintf.c.orig	2020-07-22 14:19:48 UTC
+++ lib/snprintf.c
@@ -171,7 +171,7 @@
 #if TEST_SNPRINTF
 #include <math.h>	/* For pow(3), NAN, and INFINITY. */
 #if defined(__NetBSD__) || \
-    defined(__FreeBSD__) || \
+    defined(__FreeBSD__) || defined(__DragonFly__) || \
     defined(__OpenBSD__) || \
     defined(__NeXT__) || \
     defined(__bsd__)
