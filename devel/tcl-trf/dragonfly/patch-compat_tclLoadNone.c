--- compat/tclLoadNone.c.orig	2009-06-18 04:45:22 UTC
+++ compat/tclLoadNone.c
@@ -13,6 +13,7 @@
  * SCCS: @(#) tclLoadNone.c 1.5 96/02/15 11:43:01
  */
 
+#include <string.h>
 #include "tcl.h"
 #include "compat/dlfcn.h"
 
