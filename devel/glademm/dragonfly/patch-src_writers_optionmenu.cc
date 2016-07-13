--- src/writers/optionmenu.cc.orig	2004-05-12 14:14:42.000000000 +0300
+++ src/writers/optionmenu.cc
@@ -20,6 +20,7 @@
 
 #include "button.hh"
 #include "../strsep.h"
+#include <cstring>
 
 class Gtk_OptionMenu : public Gtk_Button
 {	static const char * const MenuTags;
