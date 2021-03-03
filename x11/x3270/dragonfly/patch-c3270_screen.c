--- c3270/screen.c.orig	2021-01-31 20:43:17 UTC
+++ c3270/screen.c
@@ -31,6 +31,7 @@
  *		Screen drawing
  */
 
+#include <wctype.h> /* for wint_t */
 #include "globals.h"
 #include <signal.h>
 #include "appres.h"
