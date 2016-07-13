--- src/writers/bonobo_dockitem.cc.orig	2002-11-18 13:46:09.000000000 +0200
+++ src/writers/bonobo_dockitem.cc
@@ -19,6 +19,7 @@
  */
 
 #include "bin.hh"
+#include <cstring>
 
 class Bonobo_DockItem : public Gtk_Bin
 {public:
