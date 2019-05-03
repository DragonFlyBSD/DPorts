--- docbook2mdoc.c.orig	2019-04-29 11:17:24 UTC
+++ docbook2mdoc.c
@@ -26,6 +26,10 @@
 #include "macro.h"
 #include "format.h"
 
+#ifdef __DragonFly__
+#define TAILQ_FOREACH_SAFE TAILQ_FOREACH_MUTABLE
+#endif
+
 /*
  * The implementation of the mdoc(7) formatter.
  */
