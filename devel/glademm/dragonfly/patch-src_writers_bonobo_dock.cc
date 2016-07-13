--- src/writers/bonobo_dock.cc.orig	2002-11-18 13:46:09.000000000 +0200
+++ src/writers/bonobo_dock.cc
@@ -19,6 +19,7 @@
  */
 
 #include "container.hh"
+#include <cstring>
 
 class Bonobo_Dock : public Gtk_Container
 {public:
