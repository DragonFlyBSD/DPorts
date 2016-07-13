--- src/scim_canna_imengine_setup.cpp.orig	2006-02-08 08:01:15.000000000 +0200
+++ src/scim_canna_imengine_setup.cpp
@@ -33,6 +33,8 @@
   #include <config.h>
 #endif
 
+#include <cstring>
+
 #include <scim.h>
 #include <gtk/scimkeyselection.h>
 #include "scim_canna_prefs.h"
