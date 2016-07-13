--- src/writers/ctree.cc.orig	2003-01-06 09:27:14.000000000 +0200
+++ src/writers/ctree.cc
@@ -20,6 +20,7 @@
 // copied from clist -- might work
 
 #include "container.hh"
+#include <cstring>
 
 class Gtk_CTree : public Gtk_Container
 {public:
