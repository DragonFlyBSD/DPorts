--- src/writers/gnome_about.cc.orig	2003-01-06 09:27:14.000000000 +0200
+++ src/writers/gnome_about.cc
@@ -20,6 +20,7 @@
 
 #include "gnome_dialog.hh"
 #include "../strsep.h"
+#include <cstring>
 
 class Gnome_About : public Gnome_Dialog
 {public:
