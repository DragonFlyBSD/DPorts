--- lib/slist.c.orig	2008-12-15 08:03:24 UTC
+++ lib/slist.c
@@ -21,6 +21,7 @@
 #ifdef HAVE_CONFIG_H
 # include <config.h>
 #endif
+#include <ctype.h> /* for isdigint() et al */
 #include <radlib.h>
 
 struct grad_slist_bucket {
