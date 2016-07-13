--- src/writers/combo.cc.orig	2003-03-05 11:33:34.000000000 +0200
+++ src/writers/combo.cc
@@ -20,6 +20,7 @@
 
 #include "combo.hh"
 #include "../strsep.h"
+#include <cstring>
 
 static Gtk_Combo Gtk_Combo(false);
 
