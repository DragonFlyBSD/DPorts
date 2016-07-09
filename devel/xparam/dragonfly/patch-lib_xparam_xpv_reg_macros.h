--- lib/xparam/xpv_reg_macros.h.orig	2001-10-22 00:07:45.000000000 +0200
+++ lib/xparam/xpv_reg_macros.h
@@ -38,6 +38,7 @@
  * Macros that make it easier to run code when program/library loads
  */
 
+#include <cstdlib>
 #include <exception>
 #include <iostream>
 #include "xp_config.h"
